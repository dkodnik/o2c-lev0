

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Fri Feb 03 22:06:46 2017
 */
/* Compiler settings for .\ServerCOM.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ServerCOM_h__
#define __ServerCOM_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IConnect_FWD_DEFINED__
#define __IConnect_FWD_DEFINED__
typedef interface IConnect IConnect;
#endif 	/* __IConnect_FWD_DEFINED__ */


#ifndef __Connect_FWD_DEFINED__
#define __Connect_FWD_DEFINED__

#ifdef __cplusplus
typedef class Connect Connect;
#else
typedef struct Connect Connect;
#endif /* __cplusplus */

#endif 	/* __Connect_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IConnect_INTERFACE_DEFINED__
#define __IConnect_INTERFACE_DEFINED__

/* interface IConnect */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IConnect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("03FD46F1-4FEE-4B0B-8B40-1E943652CA08")
    IConnect : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Test( 
            int a) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Test2( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Test3( 
            VARIANT A) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Test4( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Test5( 
            BSTR A,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Test6( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Test7( 
            BSTR A) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EvalExpr( 
            BSTR Str) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EvalExpr2( 
            /* [in] */ BSTR Str,
            /* [retval][out] */ VARIANT *Ret) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Test8( 
            /* [retval][out] */ BSTR **pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Test8( 
            /* [in] */ BSTR *newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Test9( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Test9( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Test10( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Test10( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Test11( 
            /* [retval][out] */ VARIANT **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Array( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Array( 
            /* [in] */ VARIANT newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConnectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConnect * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConnect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConnect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IConnect * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IConnect * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IConnect * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IConnect * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Test )( 
            IConnect * This,
            int a);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Test2 )( 
            IConnect * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Test3 )( 
            IConnect * This,
            VARIANT A);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Test4 )( 
            IConnect * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Test5 )( 
            IConnect * This,
            BSTR A,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Test6 )( 
            IConnect * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Test7 )( 
            IConnect * This,
            BSTR A);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EvalExpr )( 
            IConnect * This,
            BSTR Str);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EvalExpr2 )( 
            IConnect * This,
            /* [in] */ BSTR Str,
            /* [retval][out] */ VARIANT *Ret);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Test8 )( 
            IConnect * This,
            /* [retval][out] */ BSTR **pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Test8 )( 
            IConnect * This,
            /* [in] */ BSTR *newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Test9 )( 
            IConnect * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Test9 )( 
            IConnect * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Test10 )( 
            IConnect * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Test10 )( 
            IConnect * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Test11 )( 
            IConnect * This,
            /* [retval][out] */ VARIANT **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Array )( 
            IConnect * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Array )( 
            IConnect * This,
            /* [in] */ VARIANT newVal);
        
        END_INTERFACE
    } IConnectVtbl;

    interface IConnect
    {
        CONST_VTBL struct IConnectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConnect_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IConnect_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IConnect_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IConnect_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IConnect_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IConnect_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IConnect_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IConnect_Test(This,a)	\
    (This)->lpVtbl -> Test(This,a)

#define IConnect_Test2(This)	\
    (This)->lpVtbl -> Test2(This)

#define IConnect_Test3(This,A)	\
    (This)->lpVtbl -> Test3(This,A)

#define IConnect_put_Test4(This,newVal)	\
    (This)->lpVtbl -> put_Test4(This,newVal)

#define IConnect_put_Test5(This,A,newVal)	\
    (This)->lpVtbl -> put_Test5(This,A,newVal)

#define IConnect_Test6(This)	\
    (This)->lpVtbl -> Test6(This)

#define IConnect_Test7(This,A)	\
    (This)->lpVtbl -> Test7(This,A)

#define IConnect_EvalExpr(This,Str)	\
    (This)->lpVtbl -> EvalExpr(This,Str)

#define IConnect_EvalExpr2(This,Str,Ret)	\
    (This)->lpVtbl -> EvalExpr2(This,Str,Ret)

#define IConnect_get_Test8(This,pVal)	\
    (This)->lpVtbl -> get_Test8(This,pVal)

#define IConnect_put_Test8(This,newVal)	\
    (This)->lpVtbl -> put_Test8(This,newVal)

#define IConnect_get_Test9(This,pVal)	\
    (This)->lpVtbl -> get_Test9(This,pVal)

#define IConnect_put_Test9(This,newVal)	\
    (This)->lpVtbl -> put_Test9(This,newVal)

#define IConnect_get_Test10(This,pVal)	\
    (This)->lpVtbl -> get_Test10(This,pVal)

#define IConnect_put_Test10(This,newVal)	\
    (This)->lpVtbl -> put_Test10(This,newVal)

#define IConnect_get_Test11(This,pVal)	\
    (This)->lpVtbl -> get_Test11(This,pVal)

#define IConnect_get_Array(This,pVal)	\
    (This)->lpVtbl -> get_Array(This,pVal)

#define IConnect_put_Array(This,newVal)	\
    (This)->lpVtbl -> put_Array(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IConnect_Test_Proxy( 
    IConnect * This,
    int a);


void __RPC_STUB IConnect_Test_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IConnect_Test2_Proxy( 
    IConnect * This);


void __RPC_STUB IConnect_Test2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IConnect_Test3_Proxy( 
    IConnect * This,
    VARIANT A);


void __RPC_STUB IConnect_Test3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IConnect_put_Test4_Proxy( 
    IConnect * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IConnect_put_Test4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IConnect_put_Test5_Proxy( 
    IConnect * This,
    BSTR A,
    /* [in] */ BSTR newVal);


void __RPC_STUB IConnect_put_Test5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IConnect_Test6_Proxy( 
    IConnect * This);


void __RPC_STUB IConnect_Test6_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IConnect_Test7_Proxy( 
    IConnect * This,
    BSTR A);


void __RPC_STUB IConnect_Test7_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IConnect_EvalExpr_Proxy( 
    IConnect * This,
    BSTR Str);


void __RPC_STUB IConnect_EvalExpr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IConnect_EvalExpr2_Proxy( 
    IConnect * This,
    /* [in] */ BSTR Str,
    /* [retval][out] */ VARIANT *Ret);


void __RPC_STUB IConnect_EvalExpr2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IConnect_get_Test8_Proxy( 
    IConnect * This,
    /* [retval][out] */ BSTR **pVal);


void __RPC_STUB IConnect_get_Test8_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IConnect_put_Test8_Proxy( 
    IConnect * This,
    /* [in] */ BSTR *newVal);


void __RPC_STUB IConnect_put_Test8_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IConnect_get_Test9_Proxy( 
    IConnect * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IConnect_get_Test9_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IConnect_put_Test9_Proxy( 
    IConnect * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IConnect_put_Test9_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IConnect_get_Test10_Proxy( 
    IConnect * This,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IConnect_get_Test10_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IConnect_put_Test10_Proxy( 
    IConnect * This,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IConnect_put_Test10_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IConnect_get_Test11_Proxy( 
    IConnect * This,
    /* [retval][out] */ VARIANT **pVal);


void __RPC_STUB IConnect_get_Test11_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IConnect_get_Array_Proxy( 
    IConnect * This,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IConnect_get_Array_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IConnect_put_Array_Proxy( 
    IConnect * This,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IConnect_put_Array_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IConnect_INTERFACE_DEFINED__ */



#ifndef __SERVERCOMLib_LIBRARY_DEFINED__
#define __SERVERCOMLib_LIBRARY_DEFINED__

/* library SERVERCOMLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_SERVERCOMLib;

EXTERN_C const CLSID CLSID_Connect;

#ifdef __cplusplus

class DECLSPEC_UUID("0497D803-C0F6-4E37-9247-6FC0080D1096")
Connect;
#endif
#endif /* __SERVERCOMLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


