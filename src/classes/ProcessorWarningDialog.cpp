// Decompiled translation unit: src/classes/ProcessorWarningDialog.cpp

extern "C" void ext_006A5F44();

// [0x00447EF0] ProcessorWarningDialog::vfunc_63 (22 bytes)
extern "C" void __fastcall fn_00447EF0(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *Callee)(int, int, void*);
    ((Callee)ext_006A5F44)(a1, 0x4d8, (char*)self + 0x74);
}

// [0x00447EC0] ProcessorWarningDialog::vfunc_86 (44 bytes)
extern "C" int mem_00925694;
extern "C" void ext_006A5FB0();

extern "C" void __fastcall fn_00447EC0(void* self) {
    char* p = (char*)self;
    typedef int (__stdcall *SendFn)(void*, unsigned int, unsigned int, unsigned int);
    int r = ((SendFn)mem_00925694)(*(void**)(p + 0x94), 0xf0, 0, 0);
    *(unsigned char*)(p + 0xc8) = (unsigned char)(r == 0);
    ((void (__fastcall *)(void*))ext_006A5FB0)(self);
}
