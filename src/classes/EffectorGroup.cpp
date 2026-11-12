// Decompiled translation unit: src/classes/EffectorGroup.cpp

// [0x00607E20] EffectorGroup::vfunc_0 (69 bytes)
extern "C" void ext_00602EF0();
extern "C" void ext_006A5C5C();

extern "C" void* __fastcall fn_00607E20(void* self, int edx_unused, int a1) {
    unsigned char* p = static_cast<unsigned char*>(self);
    void* held = *reinterpret_cast<void**>(p + 0x30);
    if (held != 0) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(held);
    }
    *reinterpret_cast<int*>(p + 0x30) = 0;
    *reinterpret_cast<int*>(p + 0x34) = 0;
    *reinterpret_cast<int*>(p + 0x38) = 0;
    reinterpret_cast<void (__fastcall*)(void*)>(ext_00602EF0)(self);
    if (a1 & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(self);
    }
    return self;
}

// [0x005F3EE0] EffectorGroup::vfunc_18 (226 bytes)
extern "C" void ext_005F3E70();
extern "C" int mem_00925134;
extern "C" int mem_00B46790;

extern "C" __declspec(naked) void __fastcall fn_005F3EE0(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        push esi
        lea esi, [ecx + 0x2c]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], esi
        jbe L_5F3EFE
        call ebx
    L_5F3EFE:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x14], ebp
        jbe L_5F3F10
        call ebx
    L_5F3F10:
        test esi, esi
        je L_5F3F18
        cmp esi, esi
        je L_5F3F1A
    L_5F3F18:
        call ebx
    L_5F3F1A:
        cmp edi, ebp
        je L_5F3FBA
        mov eax, dword ptr [mem_00B46790]
        test eax, eax
        je L_5F3F8D
        test esi, esi
        jne L_5F3F36
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F3F36:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F3F42
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F3F42:
        mov ebx, dword ptr [eax + 0x8]
        cmp dword ptr [eax + 0x4], ebx
        lea edi, [eax + 0x8]
        lea ebp, [eax + 0x4]
        mov esi, eax
        jbe L_5F3F58
        call dword ptr [mem_00925134]
    L_5F3F58:
        mov ebp, dword ptr [ebp]
        cmp ebp, dword ptr [edi]
        jbe L_5F3F65
        call dword ptr [mem_00925134]
    L_5F3F65:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        push ebx
        push esi
        push ebp
        push esi
        call ext_005F3E70
        mov ebx, dword ptr [mem_00925134]
        mov edi, dword ptr [esp + 0x34]
        mov esi, dword ptr [esp + 0x28]
        add esp, 0x18
        test al, al
        je L_5F3FA3
    L_5F3F8D:
        test esi, esi
        jne L_5F3F93
        call ebx
    L_5F3F93:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F3F9A
        call ebx
    L_5F3F9A:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x48]
        call eax
    L_5F3FA3:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F3FAA
        call ebx
    L_5F3FAA:
        mov ebp, dword ptr [esp + 0x14]
        add edi, 0x4
        mov dword ptr [esp + 0x1c], edi
        jmp L_5F3F10
    L_5F3FBA:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    }
}
