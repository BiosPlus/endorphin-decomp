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

// [0x0060C640] NMData::EffectorData::vfunc_13 (475 bytes)
extern "C" void ext_00427640();
extern "C" void ext_0046C0A0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0060BA80();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F5CC;
extern "C" int mem_00A9EF5C;
extern "C" int mem_00A9EF60;
extern "C" int mem_00A9ED5C;
extern "C" int mem_00A9F43C;
extern "C" int mem_00A9EE38;

extern "C" __declspec(naked) void __fastcall fn_0060C640(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        push esi
        mov edi, ecx
        call ext_0060BA80
        mov eax, dword ptr [mem_00A9F5CC]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [edi + 0x44]
        push edx
        mov dword ptr [esp + 0x18], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9EF5C]
        add esp, 0x8
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_b6a5
        cmp eax, 0xb53b30
        je L_b6a5
        cmp eax, 0xb53ab0
        je L_b6a5
        cmp eax, 0xb53a70
        je L_b6a5
        cmp eax, 0xb53af0
        jne L_b6aa
    L_b6a5:
        mov eax, 0xb53b30
    L_b6aa:
        lea ecx, [esp + 0x8]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov dword ptr [esp + 0x10], eax
        call ext_0046C0A0
        fld dword ptr [esp + 0x18]
        add esp, 0x8
        fstp dword ptr [edi + 0x48]
        mov eax, dword ptr [mem_00A9EF60]
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_b6fb
        cmp eax, 0xb53b30
        je L_b6fb
        cmp eax, 0xb53ab0
        je L_b6fb
        cmp eax, 0xb53a70
        je L_b6fb
        cmp eax, 0xb53af0
        jne L_b700
    L_b6fb:
        mov eax, 0xb53b30
    L_b700:
        lea ecx, [esp + 0x8]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov dword ptr [esp + 0x10], eax
        call ext_0046C0A0
        fld dword ptr [esp + 0x18]
        add esp, 0x8
        fstp dword ptr [edi + 0x4c]
        mov eax, dword ptr [mem_00A9ED5C]
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_b751
        cmp eax, 0xb53b30
        je L_b751
        cmp eax, 0xb53ab0
        je L_b751
        cmp eax, 0xb53a70
        je L_b751
        cmp eax, 0xb53af0
        jne L_b756
    L_b751:
        mov eax, 0xb53b30
    L_b756:
        lea ecx, [esp + 0x8]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov dword ptr [esp + 0x10], eax
        call ext_0046C0A0
        fld dword ptr [esp + 0x18]
        fstp dword ptr [edi + 0x50]
        mov eax, dword ptr [mem_00A9F43C]
        add esp, 0x8
        push eax
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_c7c6
        cmp eax, 0xb53b30
        je L_c7c6
        cmp eax, 0xb53ab0
        je L_c7c6
        cmp eax, 0xb53a70
        je L_c7c6
        cmp eax, 0xb53af0
        je L_c7c6
        mov ecx, dword ptr [mem_00A9F43C]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x10]
        mov dword ptr [esp + 0x10], eax
        push edx
        lea eax, [edi + 0x58]
        push eax
        call ext_00427640
        add esp, 0x8
    L_c7c6:
        mov ecx, dword ptr [mem_00A9EE38]
        push 0x1
        push 0x0
        push ecx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_c7fb
        cmp eax, 0xb53b30
        je L_c7fb
        cmp eax, 0xb53ab0
        je L_c7fb
        cmp eax, 0xb53a70
        je L_c7fb
        cmp eax, 0xb53af0
        jne L_c800
    L_c7fb:
        mov eax, 0xb53b30
    L_c800:
        lea edx, [esp + 0x10]
        push edx
        add edi, 0x54
        push edi
        mov dword ptr [esp + 0x18], eax
        call ext_0046C0A0
        add esp, 0x8
        pop edi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0060BCF0] NMData::EffectorData::vfunc_14 (250 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0060BAD0();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_006404E0();
extern "C" void ext_00640A80();
extern "C" void ext_00640AA0();
extern "C" void ext_00640BC0();
extern "C" int mem_00A9FA6C;
extern "C" int mem_00A9F5CC;
extern "C" int mem_00A9EF5C;
extern "C" int mem_00A9EF60;
extern "C" int mem_00A9ED5C;

extern "C" __declspec(naked) void* __fastcall fn_0060BCF0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9EE64]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        call ext_006404E0
        mov esi, eax
        push esi
        mov ecx, edi
        call ext_0060BAD0
        mov ecx, dword ptr [mem_00A9FA6C]
        push ecx
        mov ecx, esi
        call ext_00640110
        push 0x9719f0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], eax
        call ext_00427550
        mov edx, dword ptr [mem_00A9F5CC]
        push edx
        mov ecx, esi
        call ext_00640110
        mov ecx, dword ptr [edi + 0x44]
        push ecx
        push eax
        call ext_00640AA0
        mov edx, dword ptr [mem_00A9F43C]
        add esp, 0x8
        push edx
        mov ecx, esi
        call ext_00640110
        movzx ecx, byte ptr [edi + 0x58]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9EF5C]
        add esp, 0x8
        push 0x0
        push edx
        mov ecx, esi
        call ext_00640390
        fld dword ptr [edi + 0x48]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9EE38]
        add esp, 0x8
        push 0x0
        push eax
        mov ecx, esi
        call ext_00640390
        fld dword ptr [edi + 0x54]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov ecx, dword ptr [mem_00A9EF60]
        add esp, 0x8
        push 0x0
        push ecx
        mov ecx, esi
        call ext_00640390
        fld dword ptr [edi + 0x4c]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov edx, dword ptr [mem_00A9ED5C]
        add esp, 0x8
        push 0x0
        push edx
        mov ecx, esi
        call ext_00640390
        fld dword ptr [edi + 0x50]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0060CDE0] NMData::EffectorData::vfunc_15 (156 bytes)
extern "C" void ext_005A0FF0();
extern "C" void ext_00602F70();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0060CDE0(void* self) {
    __asm {
        push -1
        push 0x8a8793
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        xor ebx, ebx
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], ebx
        mov esi, dword ptr [esp + 0x28]
        cmp esi, ebx
        mov dword ptr [esp + 0x18], ebx
        jne L_CE35
        push 0x60
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x28], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x18], 0x1
        je L_CE2D
        mov ecx, eax
        call ext_00602F70
        jmp L_CE2F
L_CE2D:
        xor eax, eax
L_CE2F:
        mov byte ptr [esp + 0x18], bl
        mov esi, eax
L_CE35:
        mov ebx, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x20]
        lea eax, [edi + 0x20]
        push eax
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [edi + 0x3c], ebx
        call ext_005A0FF0
        mov eax, dword ptr [eax + 0x234]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], ebx
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x30]
        push edi
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [edi + 0x40], esi
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}
