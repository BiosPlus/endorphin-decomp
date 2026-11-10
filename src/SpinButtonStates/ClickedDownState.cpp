// Decompiled translation unit: src/SpinButtonStates/ClickedDownState.cpp

extern "C" void ext_00458860();
extern "C" void ext_004586A0();
extern "C" void ext_004586C0();
extern "C" void ext_006A5EC0();

// [0x00458980] SpinButtonStates::ClickedDownState::vfunc_8 (13 bytes)
extern "C" void __fastcall fn_00458980(void* self, int edx_unused, int a1, int a2) {
    typedef void (__thiscall *Fn)(void*, int);
    void* inner = *(void**)((char*)self + 0xc);
    ((Fn)&ext_00458860)(inner, 3);
}

// [0x00458790] SpinButtonStates::ClickedDownState::vfunc_1 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00458790(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x8]
        push 0x190
        push 0x2
        call ext_004586A0
        ret
    }
}

// [0x004587A0] SpinButtonStates::ClickedDownState::vfunc_2 (25 bytes)
extern "C" __declspec(naked) void __fastcall fn_004587A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        push 0x2
        call ext_004586C0
        mov ecx, dword ptr [esi + 0x8]
        push 0x3
        call ext_004586C0
        pop esi
        ret
    }
}

// [0x00458900] SpinButtonStates::ClickedDownState::vfunc_5 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_00458900(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        push edi
        mov edi, dword ptr [eax]
        call ext_006A5EC0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edi + 0x4]
        push eax
        call edx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        mov edi, dword ptr [eax]
        call ext_006A5EC0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edi + 0x8]
        push eax
        call edx
        mov ecx, dword ptr [esi + 0xc]
        push 0x0
        call ext_00458860
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x00458740] SpinButtonStates::ClickedDownState::vfunc_3 (70 bytes)
extern "C" __declspec(naked) void __fastcall fn_00458740(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x3
        push esi
        mov esi, ecx
        jne not_three
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        push edi
        mov edi, dword ptr [eax]
        call ext_006A5EC0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edi + 0x4]
        push eax
        call edx
        pop edi
        pop esi
        ret 0x4
    not_three:
        cmp eax, 0x2
        jne done
        mov ecx, dword ptr [esi + 0x8]
        push eax
        call ext_004586C0
        mov ecx, dword ptr [esi + 0x8]
        push 0x32
        push 0x3
        call ext_004586A0
    done:
        pop esi
        ret 0x4
    }
}
