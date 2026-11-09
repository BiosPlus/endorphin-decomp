// Decompiled translation unit: src/leaf/decompiled_680000.cpp

// [0x0068BC50] sub_0068BC50 (15 bytes)
extern "C" void ext_00695390();
extern "C" __declspec(naked) void __fastcall fn_0068BC50(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        push 0x0
        push eax
        add ecx, 0x10
        call ext_00695390
        ret
    }
}

// [0x0068BC30] sub_0068BC30 (17 bytes)
extern "C" void ext_00695460();
extern "C" __declspec(naked) void __fastcall fn_0068BC30(void* self) {
    __asm {
        push ecx
        add ecx, 0x10
        call ext_00695460
        fstp dword ptr [esp]
        fld dword ptr [esp]
        pop ecx
        ret
    }
}

// [0x006829E0] sub_006829E0 (20 bytes)
extern "C" void ext_0066B080();
extern "C" __declspec(naked) void __fastcall fn_006829E0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x28]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x30]
        call edx
        push eax
        call ext_0066B080
        add esp, 4
        ret
    }
}

// [0x006824C0] sub_006824C0 (22 bytes)
extern "C" void ext_00674150();
extern "C" void __fastcall fn_006824C0(void* self, int edx_unused, int a1) {
    typedef int* (__thiscall *Callee)(void* self, int a1);
    Callee callee = reinterpret_cast<Callee>(&ext_00674150);
    int* result = callee(static_cast<char*>(self) + 4, a1);
    *result = 1;
}

// [0x006813B0] sub_006813B0 (27 bytes)
extern "C" void ext_006812A0();
extern "C" __declspec(naked) void __fastcall fn_006813B0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_006812A0
        add esp, 0x10
        ret 0x8
    }
}

// [0x00682E20] sub_00682E20 (33 bytes)
extern "C" __declspec(naked) int __fastcall fn_00682E20(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        jne short L_nonzero_00682E20
        ret
    L_nonzero_00682E20:
        mov ecx, dword ptr [ecx + 0x8]
        sub ecx, eax
        mov eax, 0xdd67c8a7
        imul ecx
        add edx, ecx
        sar edx, 0x7
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        ret
    }
}

// [0x00687510] sub_00687510 (33 bytes)
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_00687510(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x28
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00681CB0] sub_00681CB0 (35 bytes)
extern "C" int mem_00B5A230;
extern "C" int mem_00B5A22C;
extern "C" void* __cdecl fn_00681CB0() {
    if (!(mem_00B5A230 & 1)) {
        mem_00B5A230 |= 1;
        mem_00B5A22C = 0x0098CC54;
    }
    return &mem_00B5A22C;
}
