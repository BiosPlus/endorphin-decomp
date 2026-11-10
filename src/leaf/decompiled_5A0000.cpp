// Decompiled translation unit: src/leaf/decompiled_5A0000.cpp

extern "C" void ext_005A1070();
extern "C" void ext_006657F0();

// [0x005A3610] sub_005A3610 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_005A3610() {
    __asm {
        push 3
        call ext_005A1070
        ret
    }
}

// [0x005AE4C0] sub_005AE4C0 (21 bytes)
extern "C" void ext_005AD3F0();
extern "C" void __fastcall fn_005AE4C0(void* self) {
    typedef void (__thiscall *Fn)(void*, int);
    ((Fn)ext_005AD3F0)(self, 0);
    ((Fn)ext_005AD3F0)(self, 1);
}

// [0x005AAD10] sub_005AAD10 (25 bytes)
extern "C" void ext_005AA830();
extern "C" void ext_005AAA00();
extern "C" __declspec(naked) void __fastcall fn_005AAD10(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_005AAA00
        push eax
        mov ecx, esi
        call ext_005AA830
        pop esi
        ret 0x4
    }
}

// [0x005AC670] sub_005AC670 (29 bytes)
extern "C" void* __fastcall fn_005AC670(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *Callee)(void*, int);
    ((Callee)&ext_006657F0)(self, 0);
    *(int*)((char*)self + 0x10) = a1;
    *(int*)self = 0x95f4e4;
    return self;
}

// [0x005AD1C0] sub_005AD1C0 (36 bytes)
extern "C" __declspec(naked) void __cdecl fn_005AD1C0(void* dst, void* end, void* src) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        cmp eax, edx
        je done
        mov ecx, dword ptr [esp + 0xc]
        push esi
    fill:
        mov esi, dword ptr [ecx]
        mov dword ptr [eax], esi
        mov esi, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x4], esi
        add eax, 0x8
        cmp eax, edx
        jne fill
        pop esi
    done:
        ret
    }
}

// [0x005A3DC0] sub_005A3DC0 (43 bytes)
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" __declspec(naked) void __fastcall fn_005A3DC0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [ebp - 0x14]
        mov edx, dword ptr [mem_00924FA0]
        push eax
        add ecx, 0xc
        push ecx
        push edx
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, 0x5a3dad
        ret
    }
}

// [0x005AA8D0] sub_005AA8D0 (45 bytes)
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __fastcall fn_005AA8D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x170]
        call dword ptr [mem_00924FDC]
        cmp dword ptr [esi + 0x190], 0x0
        je done
        mov ecx, dword ptr [esi + 0x190]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
    done:
        pop esi
        ret 0x4
    }
}

// [0x005ABBE0] sub_005ABBE0 (45 bytes)
extern "C" void ext_005AAD10();
extern "C" __declspec(naked) void __fastcall fn_005ABBE0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x190], 0x0
        je do_call
        mov ecx, dword ptr [esi + 0x190]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        call edx
        test al, al
        je done
    do_call:
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov ecx, esi
        call ext_005AAD10
    done:
        pop esi
        ret 0x4
    }
}

// [0x005AA850] sub_005AA850 (54 bytes)
extern "C" __declspec(naked) void __fastcall fn_005AA850(void* self, int edx_unused, const float* src) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [ecx + 0x158]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x15c]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0x160]
        cmp dword ptr [ecx + 0x190], 0x0
        je done
        mov ecx, dword ptr [ecx + 0x190]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
    done:
        ret 0x4
    }
}
