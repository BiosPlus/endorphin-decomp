// Decompiled translation unit: src/classes/TranslateTool.cpp

// [0x005471A0] TranslateTool::vfunc_29 (42 bytes)
extern "C" void __fastcall ext_005528A0(void* self);

extern "C" void __fastcall fn_005471A0(void* self) {
    char* p = (char*)self;
    ext_005528A0(p + 0x98);
    float* f = (float*)p;
    f[0xc0 / 4] = 0.0f;
    f[0xbc / 4] = 0.0f;
    f[0xb8 / 4] = 0.0f;
    f[0xb4 / 4] = 0.0f;
}

extern "C" void ext_005434C0();
extern "C" int mem_00925414;
extern "C" int mem_009253C8;
extern "C" int mem_00925404;

// [0x00547110] TranslateTool::vfunc_31 (142 bytes)
extern "C" __declspec(naked) void __fastcall fn_00547110(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        call ext_005434C0
        test al, al
        jne L_done
        call dword ptr [mem_00925414]
        lea eax, [esi + 0x4]
        push eax
        call dword ptr [mem_009253C8]
        fld dword ptr [esi + 0x34]
        mov eax, dword ptr [esi + 0x84]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0xfc]
        mov edx, ecx
        shl edx, 0x4
        sub edx, ecx
        mov eax, dword ptr [eax + 4*edx + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x18]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, eax
        call edx
        fstp dword ptr [esi + 0xa0]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esi + 0x98]
        mov eax, dword ptr [eax + 0x10]
        lea ecx, [esi + 0x98]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push edx
        call eax
        call dword ptr [mem_00925404]
    L_done:
        pop esi
        add esp, 0x10
        ret 0x8
    }
}
