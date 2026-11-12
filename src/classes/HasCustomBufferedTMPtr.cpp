// Decompiled translation unit: src/classes/HasCustomBufferedTMPtr.cpp

extern "C" void ext_004F9950();
extern "C" void ext_00661B50();
extern "C" int mem_009253C8;
extern "C" int mem_009253D0;

// [0x00532510] HasCustomBufferedTMPtr::vfunc_11 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_00532510(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [ecx + 0x8]
        push eax
        call ext_00661B50
        push eax
        call dword ptr [mem_009253C8]
        ret
    }
}

// [0x00532590] HasCustomBufferedTMPtr::vfunc_12 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_00532590(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [ecx + 0x8]
        push eax
        call ext_00661B50
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        add eax, 0x30
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [edx + 0x1c]
        jmp eax
    }
}

// [0x00532700] HasCustomBufferedTMPtr::vfunc_1 (31 bytes)
extern "C" __declspec(naked) void __fastcall fn_00532700(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [ecx + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        push eax
        call ext_00661B50
        mov ecx, eax
        call ext_004F9950
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00532560] HasCustomBufferedTMPtr::vfunc_10 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_00532560(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [ecx + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esi]
        push eax
        call ext_00661B50
        mov edx, dword ptr [edi + 0x10]
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005324E0] HasCustomBufferedTMPtr::vfunc_2 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_005324E0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [ecx + 0x8]
        push esi
        push edi
        push eax
        call ext_00661B50
        mov esi, eax
        mov eax, dword ptr [esp + 0xc]
        mov ecx, 0x10
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00532530] HasCustomBufferedTMPtr::vfunc_13 (44 bytes)
extern "C" __declspec(naked) void __fastcall fn_00532530(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [ecx + 0x8]
        push eax
        call ext_00661B50
        fld dword ptr [eax + 0x38]
        add eax, 0x30
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [esp]
        call dword ptr [mem_009253D0]
        ret
    }
}
