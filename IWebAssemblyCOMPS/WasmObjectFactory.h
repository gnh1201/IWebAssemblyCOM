/*
 * WasmObjectFactory.h
 * WebAssembly COM interface
 
 * [IWebAssemblyCOM]
 * Copyright (C) 2022 AsmNext Team.  All rights reserved. 
 * SPDX-License-Identifier: BSD-3-Clause

 * [wasm-micro-runtime]
 * Copyright (C) 2019 Intel Corporation.  All rights reserved. 
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
*/

#include <unknwn.h>

class WasmObjectFactory :
	public IClassFactory
{
public:
    //interface IUnknown methods 
    HRESULT __stdcall QueryInterface(REFIID riid, void **ppObj);
    ULONG   __stdcall AddRef();
    ULONG   __stdcall Release();

    //interface IClassFactory methods 
    HRESULT __stdcall CreateInstance(IUnknown* pUnknownOuter, const IID& iid, void** ppv);
    HRESULT __stdcall LockServer(BOOL bLock) ;

private:
    long m_nRefCount;
}