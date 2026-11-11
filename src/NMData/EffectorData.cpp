// Decompiled translation unit: src/NMData/EffectorData.cpp

// [0x0060BDF0] NMData::EffectorData::vfunc_19 (24 bytes)
extern "C" void ext_0060BB50();
extern "C" void ext_0060BCD0();

extern "C" __declspec(naked) void __fastcall fn_0060BDF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0060BB50
        mov dword ptr [esi + 0x44], 0
        lea ecx, [esi + 0x48]
        pop esi
        jmp ext_0060BCD0
    }
}

// [0x0060BBF0] NMData::EffectorData::vfunc_8 (35 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a global C string pointer via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00A9EE64;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_0060BBF0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EE64]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0060BEA0] NMData::EffectorData::vfunc_18 (86 bytes)
extern "C" void ext_00622750();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0060BEA0(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x10
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_00622750
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0060BE10] NMData::EffectorData::vfunc_17 (139 bytes)
extern "C" int mem_00956EE0;
extern "C" int mem_00993858;
extern "C" int mem_00965D08;

extern "C" __declspec(naked) void __fastcall fn_0060BE10(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 0x10
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x10], esi
        je skip_ctor
        mov ecx, eax
        call ext_00622750
        mov esi, eax
    skip_ctor:
        mov eax, dword ptr [esi]
        fld dword ptr [mem_00956EE0]
        mov edx, dword ptr [eax + 0x14]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        mov dword ptr [esp + 0x14], 0xffffffff
        call edx
        fld dword ptr [mem_00993858]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_00965D08]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0060C5A0] NMData::EffectorData::vfunc_12 (148 bytes)
extern "C" void ext_0060C570();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __fastcall fn_0060C5A0(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x5c
        mov edi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x14], esi
        je skip_ctor
        mov ecx, eax
        call ext_0060C570
        mov esi, eax
    skip_ctor:
        mov eax, dword ptr [edi + 0x44]
        lea ecx, [edi + 0x4]
        push ecx
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x18], 0xffffffff
        mov dword ptr [esi + 0x44], eax
        call dword ptr [mem_00924FDC]
        lea edx, [edi + 0x20]
        push edx
        lea ecx, [esi + 0x20]
        call dword ptr [mem_00924FDC]
        fld dword ptr [edi + 0x48]
        mov ecx, dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0x48]
        fld dword ptr [edi + 0x4c]
        fstp dword ptr [esi + 0x4c]
        fld dword ptr [edi + 0x50]
        fstp dword ptr [esi + 0x50]
        mov al, byte ptr [edi + 0x58]
        mov byte ptr [esi + 0x58], al
        fld dword ptr [edi + 0x54]
        fstp dword ptr [esi + 0x54]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
