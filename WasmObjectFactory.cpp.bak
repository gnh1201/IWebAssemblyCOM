/*
 * WasmObject.h
 * WebAssembly COM interface (Header)
 
 * [IWebAssemblyCOM]
 * Copyright (C) 2022 AsmNext Team.  All rights reserved. 
 * SPDX-License-Identifier: BSD-3-Clause

 * [wasm-micro-runtime]
 * Copyright (C) 2019 Intel Corporation.  All rights reserved. 
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
*/

#include <windows.h>
#include <objbase.h>

#include "WasmObject.h"
#include "IWebAssemblyCOM_i.c"

#include "wasm_export.h"
#include "bh_read_file.h"
#include "bh_getopt.h"

HRESULT __stdcall WasmObject::QueryInterface(REFIID riid, void ** ppObj) {
    if (riid == IID_IUnknown) {
        * ppObj = static_cast(this);
        AddRef();
        return S_OK;
    }

    if (riid == IID_IAdd) {
        * ppObj = static_cast(this);
        AddRef();
        return S_OK;
    }

    //
    //if control reaches here then , let the client know that
    //we do not satisfy the required interface
    //

    * ppObj = NULL;
    return E_NOINTERFACE;
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
    // Not implemented
}

HRESULT __stdcall WasmObject::Exec() {
    // Not implemented
}

HRESULT __stdcall WasmObject::CallFunc(LPSTR FuncName, LPVOID pArgs) {
    // Not implemented
}

HRESULT __stdcall WasmObject::Close() {
    // Not implemented
}