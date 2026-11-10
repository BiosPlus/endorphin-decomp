// Decompiled translation unit: src/classes/VMCActionCommandLineInfo.cpp

extern "C" void ext_006A688C();
extern "C" int mem_00924230;

typedef int (__stdcall *LstrcmpAFn)(const char*, const char*);
typedef void (__thiscall *CommandLineBaseFn)(void*, const char*, int, int);

// [0x004645C0] VMCActionCommandLineInfo::vfunc_5 (57 bytes)
extern "C" void __fastcall fn_004645C0(void* self, int edx_unused, const char* a1, int a2, int a3) {
    if (((LstrcmpAFn)mem_00924230)(a1, reinterpret_cast<const char*>(0x00939474)) == 0) {
        int obj = *(int*)((char*)self + 0x24);
        *(unsigned char*)(obj + 0xa5) = 0;
    }
    ((CommandLineBaseFn)ext_006A688C)(self, a1, a2, a3);
}
