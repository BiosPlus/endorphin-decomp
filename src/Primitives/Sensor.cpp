// Decompiled translation unit: src/Primitives/Sensor.cpp

extern "C" void ext_005B11D0();
extern "C" void ext_006A6DE0();
extern "C" void ext_0053ADD0();
extern "C" void ext_0053AD10();

// [0x0053B7A0] Primitives::Sensor::vfunc_23 (61 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053B7A0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        test ecx, ecx
        je short L_skip_first
        push 1
        call ext_005B11D0
        fld dword ptr [eax]
        call ext_006A6DE0
        test eax, eax
        jne short L_skip_first
        mov byte ptr [esi + 0x4], 0x1
    L_skip_first:
        mov ecx, dword ptr [esp + 0xc]
        sub esp, 0x8
        mov eax, esp
        mov dword ptr [eax + 0x4], ecx
        mov ecx, esi
        mov dword ptr [eax], 0x93a444
        call ext_0053ADD0
        pop esi
        ret 0x8
    }
}

// [0x0053C8D0] Primitives::Sensor::vfunc_29 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053C8D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0053AD10
        mov ecx, dword ptr [esi + 0x3c]
        test ecx, ecx
        je short L_done
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    L_done:
        mov dword ptr [esi + 0x3c], 0
        pop esi
        ret
    }
}
