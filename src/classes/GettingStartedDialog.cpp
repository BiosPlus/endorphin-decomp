// Decompiled translation unit: src/classes/GettingStartedDialog.cpp

// [0x0041B3C0] GettingStartedDialog::vfunc_71 (16 bytes)
extern "C" void ext_006A5DBE();
extern "C" void ext_004349D0();
extern "C" int mem_00ACDB40;

extern "C" void __fastcall fn_0041B3C0(void* self) {
    ext_006A5DBE();
    __asm mov ecx, mem_00ACDB40;
    ext_004349D0();
}

// [0x0041B510] GettingStartedDialog::vfunc_63 (46 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0041B510(void* self, int edx_unused, void* a1) {
    char* esi = (char*)self;
    ((void (__stdcall*)(void*, int, void*))ext_006A5F44)(a1, 0x4e6, esi + 0x120);
    ((void (__stdcall*)(void*, int, void*))ext_006A5F44)(a1, 1, esi + 0x194);
}
