// Decompiled translation unit: src/NMData/Constraint.cpp

extern "C" void ext_0058A1A0();

// [0x006114B0] NMData::Constraint::vfunc_33 (30 bytes)
extern "C" void __fastcall fn_006114B0(void* self) {
    ext_0058A1A0();
    char* p = (char*)self;
    *(float*)(p + 0x154) = 1.0f;
    *(float*)(p + 0x158) = 1.0f;
    *(float*)(p + 0x15c) = 1.0f;
}

// [0x0061D250] NMData::Constraint::vfunc_68 (72 bytes)
extern "C" int mem_00AE5598;
extern "C" int mem_00AE558C;
extern "C" int mem_00AE5590;
extern "C" int mem_00AE5594;

extern "C" __declspec(naked) void __stdcall fn_0061D250(float* out) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00AE5598], al
        jne ready
        fldz
        or dword ptr [mem_00AE5598], eax
        fst dword ptr [mem_00AE558C]
        fst dword ptr [mem_00AE5590]
        fstp dword ptr [mem_00AE5594]
ready:
        mov eax, dword ptr [esp + 4]
        fld dword ptr [mem_00AE558C]
        fstp dword ptr [eax]
        fld dword ptr [mem_00AE5590]
        fstp dword ptr [eax + 4]
        fld dword ptr [mem_00AE5594]
        fstp dword ptr [eax + 8]
        ret 4
    }
}

// [0x005EBFF0] NMData::Constraint::vfunc_70 (83 bytes)
extern "C" void ext_00610AF0();
extern "C" void ext_00661980();

extern "C" __declspec(naked) void __fastcall fn_005EBFF0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x008A66B8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov ecx, esi
        mov dword ptr [esp + 0x4], 0
        call ext_00661980
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x00958C0C
        call ext_00610AF0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00612650] NMData::Constraint::vfunc_21 (219 bytes)
extern "C" void ext_0063F530();
extern "C" void ext_0067EFD0();
extern "C" int mem_00A9EDEC;

extern "C" __declspec(naked) void __fastcall fn_00612650(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0ch
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 84h]
        push edi
        call edx
        mov eax, dword ptr [mem_00A9EDEC]
        mov edi, dword ptr [esp + 18h]
        push 1
        push 0
        push eax
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0b53a34h
        je fixup
        cmp eax, 0b53b30h
        je fixup
        cmp eax, 0b53ab0h
        je fixup
        cmp eax, 0b53a70h
        je fixup
        cmp eax, 0b53af0h
        jne chk2
fixup:
        mov eax, 0b53b30h
chk2:
        cmp eax, 0b53a34h
        je done
        cmp eax, 0b53b30h
        je done
        cmp eax, 0b53ab0h
        je done
        cmp eax, 0b53a70h
        je done
        cmp eax, 0b53af0h
        je done
        mov ecx, dword ptr [mem_00A9EDEC]
        push 1
        push 0
        push ecx
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0b53a34h
        je fixup2
        cmp eax, 0b53b30h
        je fixup2
        cmp eax, 0b53ab0h
        je fixup2
        cmp eax, 0b53a70h
        je fixup2
        cmp eax, 0b53af0h
        jne call_out
fixup2:
        mov eax, 0b53b30h
call_out:
        push eax
        lea edx, [esp + 0ch]
        push edx
        call ext_0067EFD0
        fld dword ptr [eax]
        fstp dword ptr [esi + 154h]
        add esp, 8
        fld dword ptr [eax + 4]
        fstp dword ptr [esi + 158h]
        fld dword ptr [eax + 8]
        fstp dword ptr [esi + 15ch]
done:
        pop edi
        pop esi
        add esp, 0ch
        ret 4
    }
}

// [0x00611270] NMData::Constraint::vfunc_22 (42 bytes)
extern "C" void ext_00640390();
extern "C" void ext_0067F040();
extern "C" int mem_00A9EDEC;

extern "C" __declspec(naked) void __fastcall fn_00611270(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9EDEC]
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0x154
        push ecx
        push 0
        push eax
        mov ecx, esi
        call ext_00640390
        push eax
        call ext_0067F040
        add esp, 0x8
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00612730] NMData::Constraint::vfunc_72 (97 bytes)
extern "C" void ext_00612270();
extern "C" void ext_006A6C87();
extern "C" int mem_00B48CF8;

extern "C" __declspec(naked) void __fastcall fn_00612730(void* self) {
    __asm {
        push -1
        push 0x8a8efe
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        xor eax, eax
        mov ecx, 1
        test byte ptr [mem_00B48CF8], cl
        mov dword ptr [esp], eax
        jne done_init
        or dword ptr [mem_00B48CF8], ecx
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp]
        push eax
        mov ecx, 0xb48c38
        call ext_00612270
        push 0x91eb30
        call ext_006A6C87
        add esp, 4
    done_init:
        mov ecx, dword ptr [esp + 4]
        mov eax, 0xb48c38
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006127A0] NMData::Constraint::vfunc_74 (97 bytes)
extern "C" void ext_00612270();
extern "C" void ext_006A6C87();
extern "C" int mem_00B48DC0;

extern "C" __declspec(naked) void __fastcall fn_006127A0(void* self) {
    __asm {
        push -1
        push 0x8a8f1e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        xor eax, eax
        mov ecx, 1
        test byte ptr [mem_00B48DC0], cl
        mov dword ptr [esp], eax
        jne done_init
        or dword ptr [mem_00B48DC0], ecx
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp]
        push eax
        mov ecx, 0xb48d00
        call ext_00612270
        push 0x91eb40
        call ext_006A6C87
        add esp, 4
    done_init:
        mov ecx, dword ptr [esp + 4]
        mov eax, 0xb48d00
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00612810] NMData::Constraint::vfunc_71 (97 bytes)
extern "C" void ext_00612270();
extern "C" void ext_006A6C87();
extern "C" int mem_00B48E88;

extern "C" __declspec(naked) void __fastcall fn_00612810(void* self) {
    __asm {
        push -1
        push 0x8a8f3e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        xor eax, eax
        mov ecx, 1
        test byte ptr [mem_00B48E88], cl
        mov dword ptr [esp], eax
        jne done_init
        or dword ptr [mem_00B48E88], ecx
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp]
        push eax
        mov ecx, 0xb48dc8
        call ext_00612270
        push 0x91eb50
        call ext_006A6C87
        add esp, 4
    done_init:
        mov ecx, dword ptr [esp + 4]
        mov eax, 0xb48dc8
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00612880] NMData::Constraint::vfunc_73 (97 bytes)
extern "C" int mem_00B48F50;

extern "C" __declspec(naked) void __fastcall fn_00612880(void* self) {
    __asm {
        push -1
        push 0x8a8f5e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        xor eax, eax
        mov ecx, 1
        test byte ptr [mem_00B48F50], cl
        mov dword ptr [esp], eax
        jne done_init
        or dword ptr [mem_00B48F50], ecx
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp]
        push eax
        mov ecx, 0xb48e90
        call ext_00612270
        push 0x91eb60
        call ext_006A6C87
        add esp, 4
    done_init:
        mov ecx, dword ptr [esp + 4]
        mov eax, 0xb48e90
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
