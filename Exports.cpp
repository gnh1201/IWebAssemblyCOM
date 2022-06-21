/*
 * Exports.cpp
 * WebAssembly COM interface
 
 * [IWebAssemblyCOM]
 * Copyright (C) 2022 AsmNext Team.  All rights reserved. 
 * SPDX-License-Identifier: BSD-3-Clause

 * [wasm-micro-runtime]
 * Copyright (C) 2019 Intel Corporation.  All rights reserved. 
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
*/

STDAPI DllGetClassObject(const CLSID& clsid, const IID& iid, void** ppv)
{
    //
    //Check if the requested COM object is implemented in this DLL
    //There can be more than 1 COM object implemented in a DLL
    //

    if (clsid == CLSID_AddObject)
    {
        //
        //iid specifies the requested interface for the factory object
        //The client can request for IUnknown, IClassFactory,
        //IClassFactory2
        //
        CAddFactory *pAddFact = new CAddFactory;
        if (pAddFact == NULL)
        {
            return E_OUTOFMEMORY;
        }
        else
        {
            return pAddFact->QueryInterface(iid , ppv);
        }
    }

    //
    //if control reaches here then that implies that the object
    //specified by the user is not implemented in this DLL
    //

    return CLASS_E_CLASSNOTAVAILABLE;
}

STDAPI DllCanUnloadNow()
{
    //
    //A DLL is no longer in use when it is not managing any existing objects
    // (the reference count on all of its objects is 0). 
    //We will examine the value of g_nComObjsInUse 
    //

    if (g_nComObjsInUse == 0)
    {
        return S_OK;
    }
    else
    {
        return S_FALSE;
    }
}
