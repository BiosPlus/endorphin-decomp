// Decompiled translation unit: src/StateMachine/State.cpp

// [0x0051DE30] StateMachine::State::vfunc_1 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051DE30(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x89 __asm _emit 0x54 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [ecx + 0x154]
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x10 // mov eax, dword ptr [ecx + 0x10]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x10 // add ecx, 0x10
        __asm _emit 0x8B __asm _emit 0x40 __asm _emit 0x04 // mov eax, dword ptr [eax + 0x4]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}

// [0x0051F9C0] StateMachine::State::vfunc_9 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051F9C0(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x89 __asm _emit 0x54 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [ecx + 0x154]
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x08 // mov eax, dword ptr [ecx + 0x8]
        __asm _emit 0x8B __asm _emit 0x50 __asm _emit 0x04 // mov edx, dword ptr [eax + 0x4]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x08 // add ecx, 0x8
        __asm _emit 0xFF __asm _emit 0xE2 // jmp edx
    }
}

// [0x0051DDE0] StateMachine::State::vfunc_4 (37 bytes)
extern "C" int __fastcall fn_0051DDE0(void* self, int edx_unused, unsigned char a1) {
    if (a1 != 0) {
        char* p = *(char**)((char*)self + 0x154);
        if (p != 0 && p[0x64] != 0) {
            return 0;
        }
    }
    return *(int*)((char*)self + 0x150);
}

extern "C" void ext_00501140();
extern "C" void ext_0065F450();
extern "C" void ext_006721F0();

// [0x0051EBB0] StateMachine::State::vfunc_2 (76 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051EBB0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov esi, ecx
        push edi
        lea ecx, [esi + 0x158]
        mov dword ptr [esp + 0xc], 0x0
        call ext_00501140
        test eax, eax
        je loc_51ebe7
        mov esi, dword ptr [esp + 0x10]
        push eax
        push esi
        call ext_006721F0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    loc_51ebe7:
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        mov ecx, esi
        call ext_0065F450
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0x8
    }
}
