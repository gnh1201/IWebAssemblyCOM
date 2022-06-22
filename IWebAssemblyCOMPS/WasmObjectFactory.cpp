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

#include <objbase.h>

#include "WasmObjectFactory.h"

HRESULT __stdcall WasmObjectFactory::CreateInstance(IUnknown* pUnknownOuter, const IID& iid, void** ppv)
{
    //
    //This method lets the client manufacture components en masse
    //The class factory provides a mechanism to control the way
    //the component is created. Within the class factory the 
    //author of the component may decide to selectivey enable
    //or disable creation as per license agreements 
    //
    //

    // Cannot aggregate.
    if (pUnknownOuter != NULL)
    {
        return CLASS_E_NOAGGREGATION ;
    }

    //
    // Create an instance of the component.
    //
    CAddObj* pObject = new CAddObj ;
    if (pObject == NULL)
    {
        return E_OUTOFMEMORY ;
    }

    //
    // Get the requested interface.
    //
    return pObject->QueryInterface(iid, ppv) ;
}


HRESULT __stdcall WasmObjectFactory::LockServer(BOOL bLock)
{
    return E_NOTIMPL;
}