// dllmain.h : 모듈 클래스의 선언입니다.

class CIWebAssemblyCOMModule : public ATL::CAtlDllModuleT< CIWebAssemblyCOMModule >
{
public :
	DECLARE_LIBID(LIBID_IWebAssemblyCOM)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_IWEBASSEMBLYCOM, "{5e5ce90b-2173-4207-8339-1746ea252fef}")
};

extern class CIWebAssemblyCOMModule _AtlModule;
