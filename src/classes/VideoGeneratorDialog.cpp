// Decompiled translation unit: src/classes/VideoGeneratorDialog.cpp

// [0x004636E0] VideoGeneratorDialog::vfunc_2_off_74 (39 bytes)
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_004636E0(void* self, int edx_unused, unsigned short x, unsigned short y) {
    __asm {
        movzx eax, word ptr [esp + 0x8]
        movzx edx, word ptr [esp + 0x4]
        shl eax, 0x10
        or eax, edx
        push eax
        mov eax, dword ptr [ecx + 0x120]
        push 0x0
        push 0x401
        push eax
        call dword ptr [mem_00925694]
        ret 0x8
    }
}

// [0x00463590] VideoGeneratorDialog::vfunc_63 (295 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00463590(void* self, int edx_unused, void* a1) {
    typedef void (__stdcall *DdxFn)(void*, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x3f3, p + 0x1c8);
    ddx(a1, 0x488, p + 0x21c);
    ddx(a1, 0x433, p + 0x2c4);
    ddx(a1, 0x3f4, p + 0x78);
    ddx(a1, 0x3f5, p + 0xcc);
    ddx(a1, 0x3f6, p + 0x120);
    ddx(a1, 0x169, p + 0x174);
    ddx(a1, 0x8, p + 0x318);
    ddx(a1, 0x499, p + 0x36c);
    ddx(a1, 0x498, p + 0x3c0);
    ddx(a1, 0x441, p + 0x424);
    ddx(a1, 0x442, p + 0x478);
    ddx(a1, 0x443, p + 0x4cc);
    ddx(a1, 0x444, p + 0x520);
    ddx(a1, 0x47b, p + 0x574);
    ddx(a1, 0x47a, p + 0x5c8);
}
