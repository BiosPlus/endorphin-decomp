// Decompiled translation unit: src/NMData/QuatChannel.cpp

extern "C" int mem_00925134;

// [0x0051C7C0] NMData::QuatChannel::vfunc_16 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051C7C0(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x30]
        cmp ebx, dword ptr [esi + 0x34]
        push edi
        lea edi, [esi + 0x2c]
        jbe L_ok
        call dword ptr [mem_00925134]
    L_ok:
        mov dword ptr [esi + 0x5c], edi
        pop edi
        mov dword ptr [esi + 0x60], ebx
        pop esi
        pop ebx
        ret
    }
}

extern "C" void ext_00519CE0();
extern "C" void ext_006A5C5C();

// [0x0051C5F0] NMData::QuatChannel::vfunc_0 (69 bytes)
extern "C" void* __fastcall fn_0051C5F0(void* self, int edx_unused, int a1) {
    unsigned char* p = static_cast<unsigned char*>(self);
    void* held = *reinterpret_cast<void**>(p + 0x30);
    if (held != 0) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(held);
    }
    *reinterpret_cast<int*>(p + 0x30) = 0;
    *reinterpret_cast<int*>(p + 0x34) = 0;
    *reinterpret_cast<int*>(p + 0x38) = 0;
    reinterpret_cast<void (__fastcall*)(void*)>(ext_00519CE0)(self);
    if (a1 & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(self);
    }
    return self;
}

// [0x0051ADC0] NMData::QuatChannel::vfunc_7 (82 bytes)
extern "C" __declspec(naked) float __fastcall fn_0051ADC0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x30]
        test eax, eax
        je L_zero
        mov ecx, dword ptr [esi + 0x34]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_main
    L_zero:
        fldz
        pop esi
        pop ecx
        ret
    L_main:
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push edi
        mov edi, dword ptr [esi + 0x34]
        cmp dword ptr [esi + 0x30], edi
        jbe L_chk1
        call ebx
    L_chk1:
        cmp edi, dword ptr [esi + 0x30]
        ja L_chk2
        call ebx
    L_chk2:
        add edi, -0x14
        cmp edi, dword ptr [esi + 0x34]
        jb L_chk3
        call ebx
    L_chk3:
        fld dword ptr [edi]
        pop edi
        pop ebx
        pop esi
        pop ecx
        ret
    }
}

// [0x0051C7E0] NMData::QuatChannel::vfunc_3 (58 bytes)
extern "C" void ext_00489A80();

extern "C" void __fastcall fn_0051C7E0(void* self) {
    unsigned char* p = static_cast<unsigned char*>(self);
    void (*invalid_parameter)() = reinterpret_cast<void (*)()>(mem_00925134);
    unsigned int old_end = *reinterpret_cast<unsigned int*>(p + 0x34);
    if (*reinterpret_cast<unsigned int*>(p + 0x30) > old_end) {
        invalid_parameter();
    }
    unsigned int start = *reinterpret_cast<unsigned int*>(p + 0x30);
    if (start > *reinterpret_cast<unsigned int*>(p + 0x34)) {
        invalid_parameter();
    }
    if (start != old_end) {
        typedef void* (__cdecl *Fn)(unsigned int, unsigned int, unsigned int);
        Fn f = reinterpret_cast<Fn>(ext_00489A80);
        void* r = f(old_end, *reinterpret_cast<unsigned int*>(p + 0x34), start);
        *reinterpret_cast<void**>(p + 0x34) = r;
    }
}

extern "C" void ext_0051AE40();

// [0x0051D8C0] NMData::QuatChannel::vfunc_8 (31 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051D8C0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        mov dword ptr [esp + 0xc], 0x0
        call ext_0051AE40
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0051C300] NMData::QuatChannel::vfunc_6 (212 bytes)
extern "C" void ext_00489080();

// Erases every 0x14-byte element whose leading float lies in [lo, hi].
extern "C" __declspec(naked) void __fastcall fn_0051C300(void* self, int edx_unused, float lo, float hi) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x2c]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_chk0
        call dword ptr [mem_00925134]
    L_chk0:
        xor ebx, ebx
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_loop:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        cmp esi, ebx
        je L_chk2
        cmp esi, esi
        je L_chk3
    L_chk2:
        call dword ptr [mem_00925134]
    L_chk3:
        cmp edi, ebp
        je L_exit
        cmp esi, ebx
        mov ebp, dword ptr [mem_00925134]
        jne L_chk4
        call ebp
    L_chk4:
        cmp edi, dword ptr [esi + 0x8]
        jb L_chk5
        call ebp
    L_chk5:
        fld dword ptr [edi]
        fld dword ptr [esp + 0x1c]
        fcompp
        fnstsw ax
        test ah, 0x41
        jp L_keep
        cmp edi, dword ptr [esi + 0x8]
        jb L_chk6
        call ebp
    L_chk6:
        fld dword ptr [edi]
        fld dword ptr [esp + 0x20]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne L_keep
        mov edx, dword ptr [esp + 0x1c]
        mov byte ptr [esp + 0x10], bl
        mov eax, dword ptr [esp + 0x10]
        push eax
        mov eax, dword ptr [esi + 0x8]
        mov byte ptr [esp + 0x18], bl
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push edx
        push edi
        push eax
        add edi, 0x14
        push edi
        call ext_00489080
        add dword ptr [esi + 0x8], -0x14
        mov edi, dword ptr [esi + 0x4]
        add esp, 0x18
        cmp edi, dword ptr [esi + 0x8]
        jbe L_loop
        call ebp
        jmp L_loop
    L_keep:
        cmp edi, dword ptr [esi + 0x8]
        jb L_chk7
        call ebp
    L_chk7:
        add edi, 0x14
        jmp L_loop
    L_exit:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x8
    }
}
