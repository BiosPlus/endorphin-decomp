// Decompiled translation unit: src/leaf/decompiled_440000.cpp

// [0x0044C0D0] sub_0044C0D0 (27 bytes)
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_0044C0D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x64], 0
        je skip_call
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        call edx
    skip_call:
        mov ecx, esi
        pop esi
        jmp ext_006A5EA8
    }
}

// [0x00441060] sub_00441060 (33 bytes)
extern "C" double mem_0092BD70;

extern "C" __declspec(naked) int __fastcall fn_00441060(void* self) {
    __asm {
        sub esp, 0xc
        fld qword ptr [ecx + 0x90]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x4]
        fld qword ptr [esp + 0x4]
        fistp dword ptr [esp]
        mov eax, dword ptr [esp]
        add esp, 0xc
        ret
    }
}

// [0x00441090] sub_00441090 (33 bytes)
extern "C" __declspec(naked) int __fastcall fn_00441090(void* self) {
    __asm {
        sub esp, 0xc
        fld qword ptr [ecx + 0x98]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x4]
        fld qword ptr [esp + 0x4]
        fistp dword ptr [esp]
        mov eax, dword ptr [esp]
        add esp, 0xc
        ret
    }
}

// [0x004489E0] sub_004489E0 (33 bytes)
extern "C" int mem_00925694;

extern "C" __declspec(naked) int __fastcall fn_004489E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        mov eax, dword ptr [ecx + 0x58]
        mov ecx, dword ptr [eax + 0x20]
        push edx
        push 0x46f
        push ecx
        call dword ptr [mem_00925694]
        xor eax, eax
        ret 0x8
    }
}
