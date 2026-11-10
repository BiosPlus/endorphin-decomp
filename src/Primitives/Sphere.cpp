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

// [0x0053D2E0] Primitives::Sphere::vfunc_25 (62 bytes)
extern "C" void ext_0053A610();

extern "C" __declspec(naked) void __fastcall fn_0053D2E0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0Ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esp + 10h]
        push edi
        push ecx
        mov ecx, esi
        call ext_0053A610
        mov eax, dword ptr [esi + 1Ch]
        test al, 40h
        jne skip_flag
        xor eax, 40h
        mov dword ptr [esi + 1Ch], eax
skip_flag:
        mov edx, dword ptr [edi + 80h]
        mov dword ptr [esi + 3Ch], edx
        mov eax, dword ptr [edi + 84h]
        pop edi
        mov dword ptr [esi + 40h], eax
        pop esi
        ret 0Ch
    }
}
