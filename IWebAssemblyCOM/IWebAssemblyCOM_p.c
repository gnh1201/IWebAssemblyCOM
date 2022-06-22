

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "IWebAssemblyCOM.h"

#define TYPE_FORMAT_STRING_SIZE   1011                              
#define PROC_FORMAT_STRING_SIZE   311                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _IWebAssemblyCOM_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } IWebAssemblyCOM_MIDL_TYPE_FORMAT_STRING;

typedef struct _IWebAssemblyCOM_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } IWebAssemblyCOM_MIDL_PROC_FORMAT_STRING;

typedef struct _IWebAssemblyCOM_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } IWebAssemblyCOM_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const IWebAssemblyCOM_MIDL_TYPE_FORMAT_STRING IWebAssemblyCOM__MIDL_TypeFormatString;
extern const IWebAssemblyCOM_MIDL_PROC_FORMAT_STRING IWebAssemblyCOM__MIDL_ProcFormatString;
extern const IWebAssemblyCOM_MIDL_EXPR_FORMAT_STRING IWebAssemblyCOM__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebAssemblyCOM_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebAssemblyCOM_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const IWebAssemblyCOM_MIDL_PROC_FORMAT_STRING IWebAssemblyCOM__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure AddWasiEnv */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 26 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 28 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter Value */

/* 32 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 34 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 36 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 38 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 40 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddWasiDir */

/* 44 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 60 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Dir */

/* 70 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 72 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 74 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 76 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 78 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 80 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetStackSize */

/* 82 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 84 */	NdrFcLong( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x5 ),	/* 5 */
/* 90 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 92 */	NdrFcShort( 0x8 ),	/* 8 */
/* 94 */	NdrFcShort( 0x8 ),	/* 8 */
/* 96 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 98 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Size */

/* 108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetHeapSize */

/* 120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x6 ),	/* 6 */
/* 128 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 134 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 136 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Size */

/* 146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 154 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Open */

/* 158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x7 ),	/* 7 */
/* 166 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 172 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 174 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FilePath */

/* 184 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 188 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 192 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Exec */

/* 196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 204 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 210 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 212 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CallFunc */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x9 ),	/* 9 */
/* 236 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 242 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 244 */	0xa,		/* 10 */
			0x87,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has big byval param */
/* 246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FuncName */

/* 254 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 258 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter Arguments */

/* 260 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 262 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 264 */	NdrFcShort( 0x3d6 ),	/* Type Offset=982 */

	/* Parameter pResult */

/* 266 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 268 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 270 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */

	/* Return value */

/* 272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 274 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Close */

/* 278 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0xa ),	/* 10 */
/* 286 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 292 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 294 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 306 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const IWebAssemblyCOM_MIDL_TYPE_FORMAT_STRING IWebAssemblyCOM__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x0,	/* FC_RP */
/*  8 */	NdrFcShort( 0x3ce ),	/* Offset= 974 (982) */
/* 10 */	
			0x12, 0x0,	/* FC_UP */
/* 12 */	NdrFcShort( 0x3b6 ),	/* Offset= 950 (962) */
/* 14 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 16 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 18 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 20 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 22 */	NdrFcShort( 0x2 ),	/* Offset= 2 (24) */
/* 24 */	NdrFcShort( 0x10 ),	/* 16 */
/* 26 */	NdrFcShort( 0x2f ),	/* 47 */
/* 28 */	NdrFcLong( 0x14 ),	/* 20 */
/* 32 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 34 */	NdrFcLong( 0x3 ),	/* 3 */
/* 38 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 40 */	NdrFcLong( 0x11 ),	/* 17 */
/* 44 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 46 */	NdrFcLong( 0x2 ),	/* 2 */
/* 50 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 52 */	NdrFcLong( 0x4 ),	/* 4 */
/* 56 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 58 */	NdrFcLong( 0x5 ),	/* 5 */
/* 62 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 64 */	NdrFcLong( 0xb ),	/* 11 */
/* 68 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 70 */	NdrFcLong( 0xa ),	/* 10 */
/* 74 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 76 */	NdrFcLong( 0x6 ),	/* 6 */
/* 80 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (312) */
/* 82 */	NdrFcLong( 0x7 ),	/* 7 */
/* 86 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 88 */	NdrFcLong( 0x8 ),	/* 8 */
/* 92 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (318) */
/* 94 */	NdrFcLong( 0xd ),	/* 13 */
/* 98 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (344) */
/* 100 */	NdrFcLong( 0x9 ),	/* 9 */
/* 104 */	NdrFcShort( 0x102 ),	/* Offset= 258 (362) */
/* 106 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 110 */	NdrFcShort( 0x10e ),	/* Offset= 270 (380) */
/* 112 */	NdrFcLong( 0x24 ),	/* 36 */
/* 116 */	NdrFcShort( 0x304 ),	/* Offset= 772 (888) */
/* 118 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 122 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (888) */
/* 124 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 128 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (892) */
/* 130 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 134 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (896) */
/* 136 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 140 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (900) */
/* 142 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 146 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (904) */
/* 148 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 152 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (908) */
/* 154 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 158 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (912) */
/* 160 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 164 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (896) */
/* 166 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 170 */	NdrFcShort( 0x2da ),	/* Offset= 730 (900) */
/* 172 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 176 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (916) */
/* 178 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 182 */	NdrFcShort( 0x2da ),	/* Offset= 730 (912) */
/* 184 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 188 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (920) */
/* 190 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 194 */	NdrFcShort( 0x2da ),	/* Offset= 730 (924) */
/* 196 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 200 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (928) */
/* 202 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 206 */	NdrFcShort( 0x2d6 ),	/* Offset= 726 (932) */
/* 208 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 212 */	NdrFcShort( 0x2d4 ),	/* Offset= 724 (936) */
/* 214 */	NdrFcLong( 0x10 ),	/* 16 */
/* 218 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 220 */	NdrFcLong( 0x12 ),	/* 18 */
/* 224 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 226 */	NdrFcLong( 0x13 ),	/* 19 */
/* 230 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 232 */	NdrFcLong( 0x15 ),	/* 21 */
/* 236 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 238 */	NdrFcLong( 0x16 ),	/* 22 */
/* 242 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 244 */	NdrFcLong( 0x17 ),	/* 23 */
/* 248 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 250 */	NdrFcLong( 0xe ),	/* 14 */
/* 254 */	NdrFcShort( 0x2b2 ),	/* Offset= 690 (944) */
/* 256 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 260 */	NdrFcShort( 0x2b6 ),	/* Offset= 694 (954) */
/* 262 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 266 */	NdrFcShort( 0x2b4 ),	/* Offset= 692 (958) */
/* 268 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 272 */	NdrFcShort( 0x270 ),	/* Offset= 624 (896) */
/* 274 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 278 */	NdrFcShort( 0x26e ),	/* Offset= 622 (900) */
/* 280 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 284 */	NdrFcShort( 0x26c ),	/* Offset= 620 (904) */
/* 286 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 290 */	NdrFcShort( 0x262 ),	/* Offset= 610 (900) */
/* 292 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 296 */	NdrFcShort( 0x25c ),	/* Offset= 604 (900) */
/* 298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* Offset= 0 (302) */
/* 304 */	NdrFcLong( 0x1 ),	/* 1 */
/* 308 */	NdrFcShort( 0x0 ),	/* Offset= 0 (308) */
/* 310 */	NdrFcShort( 0xffff ),	/* Offset= -1 (309) */
/* 312 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 316 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 318 */	
			0x12, 0x0,	/* FC_UP */
/* 320 */	NdrFcShort( 0xe ),	/* Offset= 14 (334) */
/* 322 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 324 */	NdrFcShort( 0x2 ),	/* 2 */
/* 326 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 328 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 330 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 332 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 334 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 338 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (322) */
/* 340 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 342 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 344 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 356 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 358 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 360 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 362 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 364 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 374 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 376 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 378 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 380 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 382 */	NdrFcShort( 0x2 ),	/* Offset= 2 (384) */
/* 384 */	
			0x12, 0x0,	/* FC_UP */
/* 386 */	NdrFcShort( 0x1e4 ),	/* Offset= 484 (870) */
/* 388 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 390 */	NdrFcShort( 0x20 ),	/* 32 */
/* 392 */	NdrFcShort( 0xa ),	/* 10 */
/* 394 */	NdrFcLong( 0x8 ),	/* 8 */
/* 398 */	NdrFcShort( 0x50 ),	/* Offset= 80 (478) */
/* 400 */	NdrFcLong( 0xd ),	/* 13 */
/* 404 */	NdrFcShort( 0x70 ),	/* Offset= 112 (516) */
/* 406 */	NdrFcLong( 0x9 ),	/* 9 */
/* 410 */	NdrFcShort( 0x90 ),	/* Offset= 144 (554) */
/* 412 */	NdrFcLong( 0xc ),	/* 12 */
/* 416 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (592) */
/* 418 */	NdrFcLong( 0x24 ),	/* 36 */
/* 422 */	NdrFcShort( 0x102 ),	/* Offset= 258 (680) */
/* 424 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 428 */	NdrFcShort( 0x11e ),	/* Offset= 286 (714) */
/* 430 */	NdrFcLong( 0x10 ),	/* 16 */
/* 434 */	NdrFcShort( 0x138 ),	/* Offset= 312 (746) */
/* 436 */	NdrFcLong( 0x2 ),	/* 2 */
/* 440 */	NdrFcShort( 0x14e ),	/* Offset= 334 (774) */
/* 442 */	NdrFcLong( 0x3 ),	/* 3 */
/* 446 */	NdrFcShort( 0x164 ),	/* Offset= 356 (802) */
/* 448 */	NdrFcLong( 0x14 ),	/* 20 */
/* 452 */	NdrFcShort( 0x17a ),	/* Offset= 378 (830) */
/* 454 */	NdrFcShort( 0xffff ),	/* Offset= -1 (453) */
/* 456 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 466 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 470 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 472 */	
			0x12, 0x0,	/* FC_UP */
/* 474 */	NdrFcShort( 0xff74 ),	/* Offset= -140 (334) */
/* 476 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 478 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 480 */	NdrFcShort( 0x10 ),	/* 16 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x6 ),	/* Offset= 6 (490) */
/* 486 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 488 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 490 */	
			0x11, 0x0,	/* FC_RP */
/* 492 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (456) */
/* 494 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 504 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 508 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 510 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 512 */	NdrFcShort( 0xff58 ),	/* Offset= -168 (344) */
/* 514 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 516 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 518 */	NdrFcShort( 0x10 ),	/* 16 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x6 ),	/* Offset= 6 (528) */
/* 524 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 526 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 528 */	
			0x11, 0x0,	/* FC_RP */
/* 530 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (494) */
/* 532 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 542 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 546 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 548 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 550 */	NdrFcShort( 0xff44 ),	/* Offset= -188 (362) */
/* 552 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 554 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 556 */	NdrFcShort( 0x10 ),	/* 16 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x6 ),	/* Offset= 6 (566) */
/* 562 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 564 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 566 */	
			0x11, 0x0,	/* FC_RP */
/* 568 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (532) */
/* 570 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 580 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 584 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 586 */	
			0x12, 0x0,	/* FC_UP */
/* 588 */	NdrFcShort( 0x176 ),	/* Offset= 374 (962) */
/* 590 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 592 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 594 */	NdrFcShort( 0x10 ),	/* 16 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x6 ),	/* Offset= 6 (604) */
/* 600 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 602 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 604 */	
			0x11, 0x0,	/* FC_RP */
/* 606 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (570) */
/* 608 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 610 */	NdrFcLong( 0x2f ),	/* 47 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 620 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 622 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 624 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 626 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 630 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 632 */	NdrFcShort( 0x4 ),	/* 4 */
/* 634 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 636 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 638 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 640 */	NdrFcShort( 0x18 ),	/* 24 */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0xa ),	/* Offset= 10 (654) */
/* 646 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 648 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 650 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (608) */
/* 652 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 654 */	
			0x12, 0x0,	/* FC_UP */
/* 656 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (626) */
/* 658 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 668 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 672 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 674 */	
			0x12, 0x0,	/* FC_UP */
/* 676 */	NdrFcShort( 0xffda ),	/* Offset= -38 (638) */
/* 678 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 680 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 682 */	NdrFcShort( 0x10 ),	/* 16 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x6 ),	/* Offset= 6 (692) */
/* 688 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 690 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 692 */	
			0x11, 0x0,	/* FC_RP */
/* 694 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (658) */
/* 696 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 700 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 702 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 704 */	NdrFcShort( 0x10 ),	/* 16 */
/* 706 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 708 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 710 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (696) */
			0x5b,		/* FC_END */
/* 714 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 716 */	NdrFcShort( 0x20 ),	/* 32 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0xa ),	/* Offset= 10 (730) */
/* 722 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 724 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 726 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (702) */
			0x5b,		/* FC_END */
/* 730 */	
			0x11, 0x0,	/* FC_RP */
/* 732 */	NdrFcShort( 0xff12 ),	/* Offset= -238 (494) */
/* 734 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 736 */	NdrFcShort( 0x1 ),	/* 1 */
/* 738 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 744 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 746 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 748 */	NdrFcShort( 0x10 ),	/* 16 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x6 ),	/* Offset= 6 (758) */
/* 754 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 756 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 758 */	
			0x12, 0x0,	/* FC_UP */
/* 760 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (734) */
/* 762 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 764 */	NdrFcShort( 0x2 ),	/* 2 */
/* 766 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 772 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 774 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 776 */	NdrFcShort( 0x10 ),	/* 16 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x6 ),	/* Offset= 6 (786) */
/* 782 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 784 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 786 */	
			0x12, 0x0,	/* FC_UP */
/* 788 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (762) */
/* 790 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 792 */	NdrFcShort( 0x4 ),	/* 4 */
/* 794 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 800 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 802 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 804 */	NdrFcShort( 0x10 ),	/* 16 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x6 ),	/* Offset= 6 (814) */
/* 810 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 812 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 814 */	
			0x12, 0x0,	/* FC_UP */
/* 816 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (790) */
/* 818 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 822 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 828 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 830 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 832 */	NdrFcShort( 0x10 ),	/* 16 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x6 ),	/* Offset= 6 (842) */
/* 838 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 840 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 842 */	
			0x12, 0x0,	/* FC_UP */
/* 844 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (818) */
/* 846 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 850 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 852 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 854 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 858 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 860 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 862 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 864 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 866 */	NdrFcShort( 0xffec ),	/* Offset= -20 (846) */
/* 868 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 870 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 872 */	NdrFcShort( 0x38 ),	/* 56 */
/* 874 */	NdrFcShort( 0xffec ),	/* Offset= -20 (854) */
/* 876 */	NdrFcShort( 0x0 ),	/* Offset= 0 (876) */
/* 878 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 880 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 882 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 884 */	0x0,		/* 0 */
			NdrFcShort( 0xfe0f ),	/* Offset= -497 (388) */
			0x5b,		/* FC_END */
/* 888 */	
			0x12, 0x0,	/* FC_UP */
/* 890 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (638) */
/* 892 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 894 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 896 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 898 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 900 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 902 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 904 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 906 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 908 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 910 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 912 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 914 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 916 */	
			0x12, 0x0,	/* FC_UP */
/* 918 */	NdrFcShort( 0xfda2 ),	/* Offset= -606 (312) */
/* 920 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 922 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (318) */
/* 924 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 926 */	NdrFcShort( 0xfdba ),	/* Offset= -582 (344) */
/* 928 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 930 */	NdrFcShort( 0xfdc8 ),	/* Offset= -568 (362) */
/* 932 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 934 */	NdrFcShort( 0xfdd6 ),	/* Offset= -554 (380) */
/* 936 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 938 */	NdrFcShort( 0x2 ),	/* Offset= 2 (940) */
/* 940 */	
			0x12, 0x0,	/* FC_UP */
/* 942 */	NdrFcShort( 0x14 ),	/* Offset= 20 (962) */
/* 944 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 946 */	NdrFcShort( 0x10 ),	/* 16 */
/* 948 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 950 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 952 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 954 */	
			0x12, 0x0,	/* FC_UP */
/* 956 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (944) */
/* 958 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 960 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 962 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 964 */	NdrFcShort( 0x20 ),	/* 32 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* Offset= 0 (968) */
/* 970 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 972 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 974 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 976 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 978 */	NdrFcShort( 0xfc3c ),	/* Offset= -964 (14) */
/* 980 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 982 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x18 ),	/* 24 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0xfc2c ),	/* Offset= -980 (10) */
/* 992 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 994 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1000) */
/* 996 */	
			0x13, 0x0,	/* FC_OP */
/* 998 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (962) */
/* 1000 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (996) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWebAssemblyCOM, ver. 0.0,
   GUID={0x261c74a7,0x272a,0x45d2,{0xb4,0x72,0x2c,0x8d,0x1f,0x6d,0xe6,0x31}} */

#pragma code_seg(".orpc")
static const unsigned short IWebAssemblyCOM_FormatStringOffsetTable[] =
    {
    0,
    44,
    82,
    120,
    158,
    196,
    228,
    278
    };

static const MIDL_STUBLESS_PROXY_INFO IWebAssemblyCOM_ProxyInfo =
    {
    &Object_StubDesc,
    IWebAssemblyCOM__MIDL_ProcFormatString.Format,
    &IWebAssemblyCOM_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebAssemblyCOM_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    IWebAssemblyCOM__MIDL_ProcFormatString.Format,
    &IWebAssemblyCOM_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IWebAssemblyCOMProxyVtbl = 
{
    &IWebAssemblyCOM_ProxyInfo,
    &IID_IWebAssemblyCOM,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWebAssemblyCOM::AddWasiEnv */ ,
    (void *) (INT_PTR) -1 /* IWebAssemblyCOM::AddWasiDir */ ,
    (void *) (INT_PTR) -1 /* IWebAssemblyCOM::SetStackSize */ ,
    (void *) (INT_PTR) -1 /* IWebAssemblyCOM::SetHeapSize */ ,
    (void *) (INT_PTR) -1 /* IWebAssemblyCOM::Open */ ,
    (void *) (INT_PTR) -1 /* IWebAssemblyCOM::Exec */ ,
    (void *) (INT_PTR) -1 /* IWebAssemblyCOM::CallFunc */ ,
    (void *) (INT_PTR) -1 /* IWebAssemblyCOM::Close */
};

const CInterfaceStubVtbl _IWebAssemblyCOMStubVtbl =
{
    &IID_IWebAssemblyCOM,
    &IWebAssemblyCOM_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    IWebAssemblyCOM__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _IWebAssemblyCOM_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IWebAssemblyCOMProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _IWebAssemblyCOM_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IWebAssemblyCOMStubVtbl,
    0
};

PCInterfaceName const _IWebAssemblyCOM_InterfaceNamesList[] = 
{
    "IWebAssemblyCOM",
    0
};


#define _IWebAssemblyCOM_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _IWebAssemblyCOM, pIID, n)

int __stdcall _IWebAssemblyCOM_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_IWebAssemblyCOM_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo IWebAssemblyCOM_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _IWebAssemblyCOM_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _IWebAssemblyCOM_StubVtblList,
    (const PCInterfaceName * ) & _IWebAssemblyCOM_InterfaceNamesList,
    0, /* no delegation */
    & _IWebAssemblyCOM_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

