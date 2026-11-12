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

// [0x005F3FD0] EffectorGroup::vfunc_15 (233 bytes)
extern "C" __declspec(naked) void __fastcall fn_005F3FD0(void* self, int edx_unused, int a1) {
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
        jbe L_5F3FEE
        call ebx
    L_5F3FEE:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x14], ebp
        jbe L_5F4000
        call ebx
    L_5F4000:
        test esi, esi
        je L_5F4008
        cmp esi, esi
        je L_5F400A
    L_5F4008:
        call ebx
    L_5F400A:
        cmp edi, ebp
        je L_5F40AF
        mov eax, dword ptr [mem_00B46790]
        test eax, eax
        je L_5F407D
        test esi, esi
        jne L_5F4026
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F4026:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F4032
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F4032:
        mov ebx, dword ptr [eax + 0x8]
        cmp dword ptr [eax + 0x4], ebx
        lea edi, [eax + 0x8]
        lea ebp, [eax + 0x4]
        mov esi, eax
        jbe L_5F4048
        call dword ptr [mem_00925134]
    L_5F4048:
        mov ebp, dword ptr [ebp]
        cmp ebp, dword ptr [edi]
        jbe L_5F4055
        call dword ptr [mem_00925134]
    L_5F4055:
        mov eax, dword ptr [esp + 0x24]
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
        je L_5F4098
    L_5F407D:
        test esi, esi
        jne L_5F4083
        call ebx
    L_5F4083:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F408A
        call ebx
    L_5F408A:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [edx + 0x3c]
        push eax
        call edx
    L_5F4098:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F409F
        call ebx
    L_5F409F:
        mov ebp, dword ptr [esp + 0x14]
        add edi, 0x4
        mov dword ptr [esp + 0x1c], edi
        jmp L_5F4000
    L_5F40AF:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
    }
}

// [0x005F4840] EffectorGroup::vfunc_16 (233 bytes)
extern "C" __declspec(naked) void __fastcall fn_005F4840(void* self, int edx_unused, int a1) {
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
        jbe L_5F485E
        call ebx
    L_5F485E:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x14], ebp
        jbe L_5F4870
        call ebx
    L_5F4870:
        test esi, esi
        je L_5F4878
        cmp esi, esi
        je L_5F487A
    L_5F4878:
        call ebx
    L_5F487A:
        cmp edi, ebp
        je L_5F491F
        mov eax, dword ptr [mem_00B46790]
        test eax, eax
        je L_5F48ED
        test esi, esi
        jne L_5F4896
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F4896:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F48A2
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F48A2:
        mov ebx, dword ptr [eax + 0x8]
        cmp dword ptr [eax + 0x4], ebx
        lea edi, [eax + 0x8]
        lea ebp, [eax + 0x4]
        mov esi, eax
        jbe L_5F48B8
        call dword ptr [mem_00925134]
    L_5F48B8:
        mov ebp, dword ptr [ebp]
        cmp ebp, dword ptr [edi]
        jbe L_5F48C5
        call dword ptr [mem_00925134]
    L_5F48C5:
        mov eax, dword ptr [esp + 0x24]
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
        je L_5F4908
    L_5F48ED:
        test esi, esi
        jne L_5F48F3
        call ebx
    L_5F48F3:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F48FA
        call ebx
    L_5F48FA:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [edx + 0x40]
        push eax
        call edx
    L_5F4908:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F490F
        call ebx
    L_5F490F:
        mov ebp, dword ptr [esp + 0x14]
        add edi, 0x4
        mov dword ptr [esp + 0x1c], edi
        jmp L_5F4870
    L_5F491F:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
    }
}

// [0x005F40C0] EffectorGroup::vfunc_22 (236 bytes)
extern "C" void ext_005F3E70();
extern "C" int mem_00925134;
extern "C" int mem_00B46790;

extern "C" __declspec(naked) void __fastcall fn_005F40C0(void* self, int edx_unused, int a1) {
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
        jbe L_5F40DE
        call ebx
    L_5F40DE:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x14], ebp
        jbe L_5F40F0
        call ebx
    L_5F40F0:
        test esi, esi
        je L_5F40F8
        cmp esi, esi
        je L_5F40FA
    L_5F40F8:
        call ebx
    L_5F40FA:
        cmp edi, ebp
        je L_5F41A2
        mov eax, dword ptr [mem_00B46790]
        test eax, eax
        je L_5F416D
        test esi, esi
        jne L_5F4116
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F4116:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F4122
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F4122:
        mov ebx, dword ptr [eax + 0x8]
        cmp dword ptr [eax + 0x4], ebx
        lea edi, [eax + 0x8]
        lea ebp, [eax + 0x4]
        mov esi, eax
        jbe L_5F4138
        call dword ptr [mem_00925134]
    L_5F4138:
        mov ebp, dword ptr [ebp]
        cmp ebp, dword ptr [edi]
        jbe L_5F4145
        call dword ptr [mem_00925134]
    L_5F4145:
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        push ebx
        push esi
        push ebp
        push esi
        call ext_005F3E70
        mov esi, dword ptr [esp + 0x28]
        mov edi, dword ptr [esp + 0x34]
        mov ebx, dword ptr [mem_00925134]
        add esp, 0x18
        test al, al
        je L_5F418B
    L_5F416D:
        test esi, esi
        jne L_5F4173
        call ebx
    L_5F4173:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F417A
        call ebx
    L_5F417A:
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x24]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x58]
        push ecx
        fstp dword ptr [esp]
        call eax
    L_5F418B:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F4192
        call ebx
    L_5F4192:
        mov ebp, dword ptr [esp + 0x14]
        add edi, 4
        mov dword ptr [esp + 0x1c], edi
        jmp L_5F40F0
    L_5F41A2:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
    }
}

// [0x005F41B0] EffectorGroup::vfunc_23 (236 bytes)
extern "C" __declspec(naked) void __fastcall fn_005F41B0(void* self, int edx_unused, int a1) {
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
        jbe L_5F41CE
        call ebx
    L_5F41CE:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x14], ebp
        jbe L_5F41E0
        call ebx
    L_5F41E0:
        test esi, esi
        je L_5F41E8
        cmp esi, esi
        je L_5F41EA
    L_5F41E8:
        call ebx
    L_5F41EA:
        cmp edi, ebp
        je L_5F4292
        mov eax, dword ptr [mem_00B46790]
        test eax, eax
        je L_5F425D
        test esi, esi
        jne L_5F4206
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F4206:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F4212
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F4212:
        mov ebx, dword ptr [eax + 0x8]
        cmp dword ptr [eax + 0x4], ebx
        lea edi, [eax + 0x8]
        lea ebp, [eax + 0x4]
        mov esi, eax
        jbe L_5F4228
        call dword ptr [mem_00925134]
    L_5F4228:
        mov ebp, dword ptr [ebp]
        cmp ebp, dword ptr [edi]
        jbe L_5F4235
        call dword ptr [mem_00925134]
    L_5F4235:
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        push ebx
        push esi
        push ebp
        push esi
        call ext_005F3E70
        mov esi, dword ptr [esp + 0x28]
        mov edi, dword ptr [esp + 0x34]
        mov ebx, dword ptr [mem_00925134]
        add esp, 0x18
        test al, al
        je L_5F427B
    L_5F425D:
        test esi, esi
        jne L_5F4263
        call ebx
    L_5F4263:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F426A
        call ebx
    L_5F426A:
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x24]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x5c]
        push ecx
        fstp dword ptr [esp]
        call eax
    L_5F427B:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F4282
        call ebx
    L_5F4282:
        mov ebp, dword ptr [esp + 0x14]
        add edi, 4
        mov dword ptr [esp + 0x1c], edi
        jmp L_5F41E0
    L_5F4292:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
    }
}

// [0x005F42A0] EffectorGroup::vfunc_24 (236 bytes)
extern "C" __declspec(naked) void __fastcall fn_005F42A0(void* self, int edx_unused, int a1) {
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
        jbe L_5F42BE
        call ebx
    L_5F42BE:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x14], ebp
        jbe L_5F42D0
        call ebx
    L_5F42D0:
        test esi, esi
        je L_5F42D8
        cmp esi, esi
        je L_5F42DA
    L_5F42D8:
        call ebx
    L_5F42DA:
        cmp edi, ebp
        je L_5F4382
        mov eax, dword ptr [mem_00B46790]
        test eax, eax
        je L_5F434D
        test esi, esi
        jne L_5F42F6
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F42F6:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F4302
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F4302:
        mov ebx, dword ptr [eax + 0x8]
        cmp dword ptr [eax + 0x4], ebx
        lea edi, [eax + 0x8]
        lea ebp, [eax + 0x4]
        mov esi, eax
        jbe L_5F4318
        call dword ptr [mem_00925134]
    L_5F4318:
        mov ebp, dword ptr [ebp]
        cmp ebp, dword ptr [edi]
        jbe L_5F4325
        call dword ptr [mem_00925134]
    L_5F4325:
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        push ebx
        push esi
        push ebp
        push esi
        call ext_005F3E70
        mov esi, dword ptr [esp + 0x28]
        mov edi, dword ptr [esp + 0x34]
        mov ebx, dword ptr [mem_00925134]
        add esp, 0x18
        test al, al
        je L_5F436B
    L_5F434D:
        test esi, esi
        jne L_5F4353
        call ebx
    L_5F4353:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F435A
        call ebx
    L_5F435A:
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x24]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x60]
        push ecx
        fstp dword ptr [esp]
        call eax
    L_5F436B:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F4372
        call ebx
    L_5F4372:
        mov ebp, dword ptr [esp + 0x14]
        add edi, 4
        mov dword ptr [esp + 0x1c], edi
        jmp L_5F42D0
    L_5F4382:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
    }
}
