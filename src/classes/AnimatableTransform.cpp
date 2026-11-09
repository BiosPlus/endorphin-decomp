// Decompiled translation unit: src/classes/AnimatableTransform.cpp

extern "C" void ext_00593630();

// [0x0058A1A0] AnimatableTransform::vfunc_33 (22 bytes)
extern "C" __declspec(naked) void __fastcall fn_0058A1A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [eax + 0x38]
        lea ecx, [esi + 8]
        call edx
        mov ecx, esi
        pop esi
        jmp ext_00593630
    }
}

// [0x00661990] AnimatableTransform::vfunc_12 (20 bytes)
extern "C" void ext_0046F7D0();
extern "C" void* __stdcall fn_00661990(void* a1) {
    ((void (__cdecl*)(void*))ext_0046F7D0)(a1);
    return a1;
}

// [0x006619B0] AnimatableTransform::vfunc_13 (20 bytes)
extern "C" void* __fastcall fn_006619B0(void* self, int edx_unused, void* a1, void* a2) {
    ((void (__cdecl*)(void*))ext_0046F7D0)(a1);
    return a1;
}

// [0x0058A3C0] AnimatableTransform::vfunc_57 (24 bytes)
extern "C" void ext_0058A2B0();
extern "C" void* __fastcall fn_0058A3C0(void* self, int edx_unused, int a1) {
    int idx = ((int (__stdcall*)(int))ext_0058A2B0)(a1);
    return (char*)self + idx * 8 + 0xf4;
}

// [0x00626410] AnimatableTransform::vfunc_4_off_4 (27 bytes)
extern "C" void ext_00585A80();
extern "C" __declspec(naked) void* __stdcall fn_00626410(void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push eax
        push edx
        push esi
        call ext_00585A80
        mov eax, esi
        pop esi
        ret 0xc
    }
}
