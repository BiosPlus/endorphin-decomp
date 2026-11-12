// Decompiled translation unit: src/classes/SceneNotesFrame.cpp

extern "C" void ext_004564A0();
extern "C" void ext_006A5E4E();

// [0x004552A0] SceneNotesFrame::vfunc_108 (52 bytes)
extern "C" __declspec(naked) void __fastcall fn_004552A0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        mov ecx, dword ptr [esi + 0x144]
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

// [0x004554E0] SceneNotesFrame::vfunc_107 (179 bytes)
extern "C" void ext_00454560();
extern "C" void ext_00454BE0();
extern "C" void ext_00455C80();
extern "C" void ext_00455F10();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5E72();
extern "C" void ext_006A63B2();
extern "C" void ext_006A6766();
extern "C" int mem_009256C0;
extern "C" int mem_0093A0C4;
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0D8;
extern "C" int mem_0093A0D4;
extern "C" int mem_0093A0E0;
extern "C" int mem_0093A0DC;
extern "C" __declspec(naked) void __fastcall fn_004554E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_00455C80
        cmp eax, -1
        jne short L_004554F8
        or eax, eax
        pop esi
        ret 0x4
L_004554F8:
        call ext_006A6766
        mov ecx, dword ptr [esi + 0x144]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x13c]
        push esi
        push 0x4d7
        call eax
        mov ecx, dword ptr [esi + 0x20]
        mov eax, dword ptr [esi + 0x144]
        push ecx
        mov ecx, dword ptr [eax + 0x20]
        push ecx
        call dword ptr [mem_009256C0]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x144]
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
