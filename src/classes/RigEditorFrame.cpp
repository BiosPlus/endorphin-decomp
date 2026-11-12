// Decompiled translation unit: src/classes/RigEditorFrame.cpp

// [0x00453F40] RigEditorFrame::vfunc_0_off_144 (11 bytes)
extern "C" void ext_00453E00();

extern "C" __declspec(naked) void __fastcall fn_00453F40(void* self, int edx_unused, int a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0xc]
        call ext_00453E00
        ret 4
    }
}

// [0x0044CD30] RigEditorFrame::vfunc_108 (52 bytes)
extern "C" void ext_004564A0();
extern "C" void ext_006A5E4E();
extern "C" __declspec(naked) void __fastcall fn_0044CD30(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push edi
        push ebx
        push eax
        mov esi, ecx
        call ext_004564A0
        mov ecx, dword ptr [esi + 0x150]
        push 0x4
        push edi
        push ebx
        push 0x0
        push 0x0
        push 0x0
        call ext_006A5E4E
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x0044D0E0] RigEditorFrame::vfunc_107 (174 bytes)
extern "C" void ext_00454560();
extern "C" void ext_00454BE0();
extern "C" void ext_00455C80();
extern "C" void ext_00455F10();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5E72();
extern "C" void ext_006A63B2();
extern "C" int mem_009256C0;
extern "C" int mem_0093A0C4;
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0D8;
extern "C" int mem_0093A0D4;
extern "C" int mem_0093A0E0;
extern "C" int mem_0093A0DC;
extern "C" __declspec(naked) void __fastcall fn_0044D0E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_00455C80
        cmp eax, -1
        jne short L_0044D0F8
        or eax, eax
        pop esi
        ret 0x4
L_0044D0F8:
        mov ecx, dword ptr [esi + 0x150]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x13c]
        push esi
        push 0x33e
        call eax
        mov ecx, dword ptr [esi + 0x20]
        mov eax, dword ptr [esi + 0x150]
        push ecx
        mov ecx, dword ptr [eax + 0x20]
        push ecx
        call dword ptr [mem_009256C0]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x150]
        push 0x5
        call ext_006A5E72
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        mov ecx, esi
        call ext_006A63B2
        mov edx, dword ptr [mem_0093A0C4]
        push edx
        mov ecx, esi
        call ext_00455F10
        mov eax, dword ptr [mem_0093A0CC]
        push eax
        mov ecx, esi
        call ext_00454BE0
        mov ecx, dword ptr [mem_0093A0C4]
        mov edx, dword ptr [mem_0093A0D8]
        mov eax, dword ptr [mem_0093A0D4]
        push ecx
        mov ecx, dword ptr [mem_0093A0E0]
        push edx
        mov edx, dword ptr [mem_0093A0DC]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_00454560
        xor eax, eax
        pop esi
        ret 0x4
    }
}
