// Decompiled translation unit: src/Primitives/Sphere.cpp

// [0x0053B740] Primitives::Sphere::vfunc_29 (28 bytes)
extern "C" void ext_0053AD10();

extern "C" void __fastcall fn_0053B740(void* self) {
    ext_0053AD10();
    unsigned char* base = (unsigned char*)self;
    *(int*)(base + 0x44) = 0;
    *(int*)(base + 0x3c) = 0x14;
    *(int*)(base + 0x40) = 0x14;
}

// [0x0053B760] Primitives::Sphere::vfunc_28 (42 bytes)
extern "C" void ext_005B11D0();
extern "C" void ext_0063E036();

extern "C" __declspec(naked) void __fastcall fn_0053B760(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        push 0
        call ext_005B11D0
        fld dword ptr [eax]
        mov ecx, dword ptr [esi + 0x40]
        mov edx, dword ptr [esi + 0x3c]
        mov eax, dword ptr [esi + 0x44]
        push ecx
        push edx
        sub esp, 8
        fstp qword ptr [esp]
        push eax
        call ext_0063E036
        pop esi
        ret 4
    }
}
