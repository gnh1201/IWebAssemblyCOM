

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 12:14:07 2038
 */
/* Compiler settings for IWebAssemblyCOM.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __IWebAssemblyCOM_h__
#define __IWebAssemblyCOM_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWebAssemblyCOM_FWD_DEFINED__
#define __IWebAssemblyCOM_FWD_DEFINED__
typedef interface IWebAssemblyCOM IWebAssemblyCOM;

#endif 	/* __IWebAssemblyCOM_FWD_DEFINED__ */


#ifndef __IWebAssemblyCOM_FWD_DEFINED__
#define __IWebAssemblyCOM_FWD_DEFINED__
typedef interface IWebAssemblyCOM IWebAssemblyCOM;

#endif 	/* __IWebAssemblyCOM_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IWebAssemblyCOM_INTERFACE_DEFINED__
#define __IWebAssemblyCOM_INTERFACE_DEFINED__

/* interface IWebAssemblyCOM */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWebAssemblyCOM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("261c74a7-272a-45d2-b472-2c8d1f6de631")
    IWebAssemblyCOM : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddWasiEnv( 
            /* [in] */ LPSTR Key,
            /* [in] */ LPSTR Value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddWasiDir( 
            /* [in] */ LPSTR Dir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStackSize( 
            /* [in] */ int Size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHeapSize( 
            /* [in] */ int Size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ LPSTR FilePath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Exec( void) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE CallFunc( 
            /* [in] */ LPSTR FuncName,
            /* [in] */ LPVOID pArgs,
            /* [retval][out] */ LPVOID *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWebAssemblyCOMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebAssemblyCOM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebAssemblyCOM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebAssemblyCOM * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddWasiEnv )( 
            IWebAssemblyCOM * This,
            /* [in] */ LPSTR Key,
            /* [in] */ LPSTR Value);
        
        HRESULT ( STDMETHODCALLTYPE *AddWasiDir )( 
            IWebAssemblyCOM * This,
            /* [in] */ LPSTR Dir);
        
        HRESULT ( STDMETHODCALLTYPE *SetStackSize )( 
            IWebAssemblyCOM * This,
            /* [in] */ int Size);
        
        HRESULT ( STDMETHODCALLTYPE *SetHeapSize )( 
            IWebAssemblyCOM * This,
            /* [in] */ int Size);
        
        HRESULT ( STDMETHODCALLTYPE *Open )( 
            IWebAssemblyCOM * This,
            /* [in] */ LPSTR FilePath);
        
        HRESULT ( STDMETHODCALLTYPE *Exec )( 
            IWebAssemblyCOM * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *CallFunc )( 
            IWebAssemblyCOM * This,
            /* [in] */ LPSTR FuncName,
            /* [in] */ LPVOID pArgs,
            /* [retval][out] */ LPVOID *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            IWebAssemblyCOM * This);
        
        END_INTERFACE
    } IWebAssemblyCOMVtbl;

    interface IWebAssemblyCOM
    {
        CONST_VTBL struct IWebAssemblyCOMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebAssemblyCOM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebAssemblyCOM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebAssemblyCOM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebAssemblyCOM_AddWasiEnv(This,Key,Value)	\
    ( (This)->lpVtbl -> AddWasiEnv(This,Key,Value) ) 

#define IWebAssemblyCOM_AddWasiDir(This,Dir)	\
    ( (This)->lpVtbl -> AddWasiDir(This,Dir) ) 

#define IWebAssemblyCOM_SetStackSize(This,Size)	\
    ( (This)->lpVtbl -> SetStackSize(This,Size) ) 

#define IWebAssemblyCOM_SetHeapSize(This,Size)	\
    ( (This)->lpVtbl -> SetHeapSize(This,Size) ) 

#define IWebAssemblyCOM_Open(This,FilePath)	\
    ( (This)->lpVtbl -> Open(This,FilePath) ) 

#define IWebAssemblyCOM_Exec(This)	\
    ( (This)->lpVtbl -> Exec(This) ) 

#define IWebAssemblyCOM_CallFunc(This,FuncName,pArgs,pResult)	\
    ( (This)->lpVtbl -> CallFunc(This,FuncName,pArgs,pResult) ) 

#define IWebAssemblyCOM_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebAssemblyCOM_INTERFACE_DEFINED__ */



#ifndef __WebAssemblyCOM_LIBRARY_DEFINED__
#define __WebAssemblyCOM_LIBRARY_DEFINED__

/* library WebAssemblyCOM */
/* [helpstring][uuid] */ 



EXTERN_C const IID LIBID_WebAssemblyCOM;
#endif /* __WebAssemblyCOM_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


