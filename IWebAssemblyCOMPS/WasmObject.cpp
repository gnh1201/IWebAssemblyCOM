/*
 * WasmObject.cpp
 * WebAssembly COM interface

 * [IWebAssemblyCOM]
 * Copyright (C) 2022 AsmNext Team.  All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause

 * [wasm-micro-runtime]
 * Copyright (C) 2019 Intel Corporation.  All rights reserved.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
*/

#include "WasmObject.h"

HRESULT __stdcall WasmObject::QueryInterface(REFIID riid, void** ppObj) {
    /*
    if (riid == IID_IUnknown) {
        *ppObj = static_cast(this);
        AddRef();
        return S_OK;
    }

    if (riid == IID_IAdd) {
        *ppObj = static_cast(this);
        AddRef();
        return S_OK;
    }

    //
    //if control reaches here then , let the client know that
    //we do not satisfy the required interface
    //

    *ppObj = NULL;
    return E_NOINTERFACE;
    */
} // QueryInterface method

ULONG __stdcall WasmObject::AddRef() {
    return InterlockedIncrement(&m_nRefCount);
}

ULONG __stdcall WasmObject::Release() {
    long nRefCount = 0;
    nRefCount = InterlockedDecrement(&m_nRefCount);
    if (nRefCount == 0) delete this;
    return nRefCount;
}

HRESULT __stdcall WasmObject::AddWasiEnv(LPSTR Key, LPSTR Value) {
    WasiEnv env = {
        Key,
        Value
    };
    WasmEnvs.push_back(env);
}

HRESULT __stdcall WasmObject::AddWasiDir(LPSTR Dir) {
    WasmDirs.push_back(Dir);
}

HRESULT __stdcall WasmObject::SetStackSize(int Size) {
    StackSize = Size;
}

HRESULT __stdcall WasmObject::SetHeapSize(int Size) {
    HeapSize = Size;
}

HRESULT __stdcall WasmObject::Open(LPSTR FilePath) {
    uint32 buf_size;
    stack_size = (uint32)StackSize;
    heap_size = (uint32)HeapSize;

    RuntimeInitArgs init_args;
    memset(&init_args, 0, sizeof(RuntimeInitArgs));

    init_args.mem_alloc_type = Alloc_With_Pool;
    init_args.mem_alloc_option.pool.heap_buf = global_heap_buf;
    init_args.mem_alloc_option.pool.heap_size = sizeof(global_heap_buf);

    if (!wasm_runtime_full_init(&init_args)) {
        printf("Init runtime environment failed.\n");
        return -1;
    }

    buffer = bh_read_file_to_buffer(wasm_path, &buf_size);

    if (!buffer) {
        printf("Open wasm app file [%s] failed.\n", wasm_path);
        Close();
    }

    module = wasm_runtime_load(buffer, buf_size, error_buf, sizeof(error_buf));
    if (!module) {
        printf("Load wasm module failed. error: %s\n", error_buf);
        Close();
    }

    module_inst = wasm_runtime_instantiate(module, stack_size, heap_size,
        error_buf, sizeof(error_buf));

    if (!module_inst) {
        printf("Instantiate wasm module failed. error: %s\n", error_buf);
        Close();
    }

    exec_env = wasm_runtime_create_exec_env(module_inst, stack_size);
    if (!exec_env) {
        printf("Create wasm execution environment failed.\n");
        Close();
    }
}

HRESULT __stdcall WasmObject::Exec() {
    if (!(func = wasm_runtime_lookup_function(module_inst, "main", NULL))) {
        printf("Could not find main()");
        Close();
    }

    wasm_val_t arguments[3] = {
        {.kind = WASM_I32, .of.i32 = 10 },
        {.kind = WASM_F64, .of.f64 = 0.000101 },
        {.kind = WASM_F32, .of.f32 = 300.002 },
    };

    wasm_runtime_call_wasm_a(exec_env, func, 1, NULL, 3, arguments);
}

HRESULT __stdcall WasmObject::CallFunc(LPSTR FuncName, VARIANT Arguments) {
    VARIANT Result;

    wasm_function_inst_t func = NULL;

    if (!(func = wasm_runtime_lookup_function(module_inst, FuncName, NULL))) {
        printf("The generate_float wasm function is not found.\n");
    }

    wasm_val_t results[1] = { {.kind = WASM_F32, .of.f32 = 0 } };
    wasm_val_t arguments[3] = {
        {.kind = WASM_I32, .of.i32 = 10 },
        {.kind = WASM_F64, .of.f64 = 0.000101 },
        {.kind = WASM_F32, .of.f32 = 300.002 },
    };

    // pass 4 elements for function arguments
    if (!wasm_runtime_call_wasm_a(exec_env, func, 1, results, 3, arguments)) {
        printf("call wasm function generate_float failed. %s\n", wasm_runtime_get_exception(module_inst));
    }

    // Todo: 리턴 자료형 자동 판단 (가능함?)

    int ret_val;
    ret_val = results[0].of.i32;

    // set context of VARIANT
    Result.vt = VT_INT;
    Result.intVal = ret_val;

    return Result;
}

HRESULT __stdcall WasmObject::Close() {
    if (exec_env)
        wasm_runtime_destroy_exec_env(exec_env);
    if (module_inst) {
        if (wasm_buffer)
            wasm_runtime_module_free(module_inst, wasm_buffer);
        wasm_runtime_deinstantiate(module_inst);
    }
    if (module)
        wasm_runtime_unload(module);
    if (buffer)
        BH_FREE(buffer);
    wasm_runtime_destroy();
}
