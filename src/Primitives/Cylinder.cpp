// Decompiled translation unit: src/Primitives/Cylinder.cpp

extern "C" void ext_0053A610();
extern "C" void ext_0053AD10();
extern "C" int mem_00924FFC;

// [0x0053DAA0] Primitives::Cylinder::vfunc_25 (85 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053DAA0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        mov edx, dword ptr [edi + 88h]
        mov dword ptr [esi + 3Ch], edx
        mov eax, dword ptr [edi + 8Ch]
        push 0
        lea ecx, [edi + 9Ch]
        mov dword ptr [esi + 40h], eax
        mov byte ptr [esi + 44h], 1
        call dword ptr [mem_00924FFC]
        mov cl, byte ptr [eax]
        pop edi
        mov byte ptr [esi + 45h], cl
        pop esi
        ret 0Ch
    }
}

// [0x0053BA40] Primitives::Cylinder::vfunc_29 (32 bytes)
extern "C" void __fastcall fn_0053BA40(void* self) {
    typedef void (__fastcall *AnimVfunc29)(void*);
    unsigned char* p = static_cast<unsigned char*>(self);
    ((AnimVfunc29)ext_0053AD10)(self);
    *reinterpret_cast<int*>(p + 0x3c) = 0x14;
    *reinterpret_cast<int*>(p + 0x40) = 1;
    *(p + 0x44) = 1;
    *(p + 0x45) = 0x7a;
}
