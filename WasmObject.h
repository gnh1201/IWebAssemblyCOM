/*
 * WasmObject.h
 * WebAssembly COM interface
 
 * [IWebAssemblyCOM]
 * Copyright (C) 2022 AsmNext Team.  All rights reserved. 
 * SPDX-License-Identifier: BSD-3-Clause

 * [wasm-micro-runtime]
 * Copyright (C) 2019 Intel Corporation.  All rights reserved. 
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
*/

#include <vector>

#include "IWebAssemblyCOM.h"

extern long g_nComObjsInUse;

using namespace std;

struct WasiEnv {
    LPSTR Key,
    LPSTR Value
}

class WasmObject :
    public IWebAssemblyCOM
{
public:
    // IUnknown interface 
    HRESULT __stdcall QueryInterface(REFIID riid, void **ppObj);
    ULONG   __stdcall AddRef();
    ULONG   __stdcall Release();

    // IWebAssemblyCOM interface
    HRESULT __stdcall AddWasiEnv(LPSTR Key, LPSTR Value);
    HRESULT __stdcall AddWasiDir(LPSTR Dir);
    HRESULT __stdcall SetStackSize(int Size);
    HRESULT __stdcall SetHeapSize(int Size);
    HRESULT __stdcall Open(LPSTR FilePath);
    HRESULT __stdcall Exec();
    HRESULT __stdcall CallFunc(LPSTR FuncName, LPVOID pArgs);
    HRESULT __stdcall Close();

private:
    vector<WasiEnv> WasiEnvs = {};
    vector<LPSTR> WasiDirs = {};
    int StackSize = 8092;
    int HeapSize = 8092;
    char ErrorBuffer[128];
    long m_nRefCount;   //for managing the reference count
}

