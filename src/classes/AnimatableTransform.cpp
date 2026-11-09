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
