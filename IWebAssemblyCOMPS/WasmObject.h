#pragma once

#include <vector>
#include <objbase.h>

#include "../IWebAssemblyCOM/IWebAssemblyCOM.h"

#include "wasm_export.h"
#include "bh_read_file.h"
#include "bh_getopt.h"

extern long g_nComObjsInUse;

using namespace std;

struct WasiEnv {
    LPSTR Key;
    LPSTR Value;
};

class WasmObject :
    public IWebAssemblyCOM
{
public:
    // IUnknown interface 
    HRESULT __stdcall QueryInterface(REFIID riid, void** ppObj);
    ULONG   __stdcall AddRef();
    ULONG   __stdcall Release();

    // IWebAssemblyCOM interface
    HRESULT __stdcall AddWasiEnv(LPSTR Key, LPSTR Value);
    HRESULT __stdcall AddWasiDir(LPSTR Dir);
    HRESULT __stdcall SetStackSize(int Size);
    HRESULT __stdcall SetHeapSize(int Size);
    HRESULT __stdcall Open(LPSTR FilePath);
    HRESULT __stdcall Exec();
    HRESULT __stdcall CallFunc(LPSTR FuncName, VARIANT pArgs);
    HRESULT __stdcall Close();

private:
    vector<WasiEnv> WasiEnvs = {};
    vector<LPSTR> WasiDirs = {};
    int StackSize = 8092;
    int HeapSize = 8092;
    char ErrorBuffer[128];
    long m_nRefCount;   //for managing the reference count

    // WebAssembly environment
    char* wasm_path = NULL;
    wasm_module_t module = NULL;
    wasm_module_inst_t module_inst = NULL;
    wasm_exec_env_t exec_env = NULL;
}
