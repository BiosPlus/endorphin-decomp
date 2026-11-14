// Decompiled translation unit: src/classes/CharacterDialog.cpp

// [0x0040CAA0] CharacterDialog::vfunc_90 (25 bytes)
extern "C" void ext_0040C380();
extern "C" void ext_006A5FDA();

extern "C" __declspec(naked) void __fastcall fn_0040CAA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0040C380
        movzx eax, al
        push eax
        lea ecx, [esi + 0x1b0]
        call ext_006A5FDA
        pop esi
        ret
    }
}

// [0x0040CD90] CharacterDialog::vfunc_63 (94 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0040CD90(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x46e, p + 0x84);
    ddx(a1, 0x4c8, p + 0xe8);
    ddx(a1, 0x4, p + 0x13c);
    ddx(a1, 0x1, p + 0x1b0);
    ddx(a1, 0x2, p + 0x224);
}

// [0x0040DA50] CharacterDialog::vfunc_84 (57 bytes)
extern "C" void ext_0040AE10();
extern "C" void ext_0040B5B0();
extern "C" void ext_0040C300();
extern "C" void ext_006A5FC8();

extern "C" __declspec(naked) void __fastcall fn_0040DA50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5FC8
        mov ecx, esi
        call ext_0040C300
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x164]
        mov ecx, esi
        call edx
        mov ecx, esi
        call ext_0040AE10
        mov ecx, esi
        call ext_0040B5B0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x16c]
        mov ecx, esi
        call edx
        xor eax, eax
        pop esi
        ret
    }
}

extern "C" void ext_0040F230();
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0D0;
typedef void (__thiscall *fn_0040F230_t)(void*, int, int, int, int);

// [0x0040A940] CharacterDialog::vfunc_91 (101 bytes)
extern "C" void __fastcall fn_0040A940(void* self) {
    fn_0040F230_t f = (fn_0040F230_t)ext_0040F230;
    f((char*)self + 0x13c, mem_0093A0CC, mem_0093A0C8, mem_0093A0D0, mem_0093A0C8);
    f((char*)self + 0x1b0, mem_0093A0CC, mem_0093A0C8, mem_0093A0D0, mem_0093A0C8);
    f((char*)self + 0x224, mem_0093A0CC, mem_0093A0C8, mem_0093A0D0, mem_0093A0C8);
}

// [0x0040E2F0] CharacterDialog::vfunc_86 (296 bytes)
extern "C" void ext_0040C6F0();
extern "C" void ext_0040C7F0();
extern "C" void ext_0040DF30();
extern "C" void ext_006A5FB0();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0040E2F0(void* self) {
    __asm {
        push -1
        push 0x8aee4d
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push esi
        push edi
        lea eax, [esp + 0x8]
        push eax
        mov esi, ecx
        call ext_0040C6F0
        push eax
        lea ecx, [esi + 0x2b4]
        mov dword ptr [esp + 0x4c], 0
        call dword ptr [mem_00924FDC]
        or edi, -1
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], edi
        call dword ptr [mem_00924FF4]
        push 0
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_0040C7F0
        push eax
        lea ecx, [esi + 0x2d0]
        mov dword ptr [esp + 0x4c], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], edi
        call dword ptr [mem_00924FF4]
        push 1
        lea edx, [esp + 0xc]
        push edx
        mov ecx, esi
        call ext_0040C7F0
        push eax
        lea ecx, [esi + 0x308]
        mov dword ptr [esp + 0x4c], 2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], edi
        call dword ptr [mem_00924FF4]
        push 0
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_0040DF30
        push eax
        lea ecx, [esi + 0x2ec]
        mov dword ptr [esp + 0x4c], 3
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], edi
        call dword ptr [mem_00924FF4]
        push 1
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, esi
        call ext_0040DF30
        push eax
        lea ecx, [esi + 0x324]
        mov dword ptr [esp + 0x4c], 4
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x48], edi
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        call ext_006A5FB0
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret
    }
}
