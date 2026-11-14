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

extern "C" void ext_0047B170();

// [0x0051C3E0] NMData::QuatChannel::vfunc_10 (89 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051C3E0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0x30]
        cmp esi, dword ptr [ecx + 0x34]
        push edi
        lea edi, [ecx + 0x2c]
        jbe L_ok1
        call ebp
    L_ok1:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_ok2
        call ebp
    L_ok2:
        test edi, edi
        je L_bad1
        cmp edi, edi
        je L_ok3
    L_bad1:
        call ebp
    L_ok3:
        cmp esi, ebx
        je L_done
        test edi, edi
        jne L_ok4
        call ebp
    L_ok4:
        cmp esi, dword ptr [edi + 0x8]
        jb L_ok5
        call ebp
    L_ok5:
        mov ecx, dword ptr [esp + 0x14]
        push esi
        call ext_0047B170
        cmp esi, dword ptr [edi + 0x8]
        jb L_ok6
        call ebp
    L_ok6:
        add esi, 0x14
        jmp L_ok1
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

extern "C" void ext_0051CD30();
extern "C" void ext_006A5C62();

// [0x0051CDE0] NMData::QuatChannel::vfunc_4 (93 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051CDE0(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 0x64
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je L_null
        push esi
        mov ecx, eax
        call ext_0051CD30
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov fs:[0], ecx
        add esp, 0x10
        ret
    L_null:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0051A130] NMData::QuatChannel::vfunc_12 (220 bytes)
extern "C" void ext_00660A50();
extern "C" void ext_006721D0();
extern "C" int mem_00B599BC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0051A130(void* self, int edx_unused, int a1) {
    __asm {
        push    -1
        push    0x892d49
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x2c
        push    esi
        mov     esi, ecx
        call    ext_00660A50
        mov     ecx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x14]
        push    0
        push    ecx
        lea     ecx, [esi + 4]
        push    ecx
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    edx
        mov     ecx, dword ptr [esp + 8]
        test    ecx, ecx
        mov     dword ptr [esp + 0x38], 0
        je      loc_51a1e3
        cmp     ecx, dword ptr [mem_00B599BC]
        je      loc_51a1e3
        push    0x9521e4
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_00924FE4]
        mov     eax, dword ptr [esi]
        mov     eax, dword ptr [eax + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x40], 1
        call    eax
        push    eax
        lea     ecx, [esp + 8]
        mov     byte ptr [esp + 0x3c], 2
        call    ext_006721D0
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        mov     byte ptr [esp + 0x38], 1
        je      loc_51a1d0
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        lea     eax, [esp + 0xc]
        push    eax
        call    edx
    loc_51a1d0:
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x38], 0
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 8]
    loc_51a1e3:
        test    ecx, ecx
        mov     dword ptr [esp + 0x38], -1
        pop     esi
        je      loc_51a1fb
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x78]
        lea     edx, [esp]
        push    edx
        call    eax
    loc_51a1fb:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x38
        ret     4
    }
}

// [0x0051AC80] NMData::QuatChannel::vfunc_2 (180 bytes)
extern "C" void ext_00519FA0();
extern "C" void ext_006404E0();
extern "C" void ext_0067EF60();
extern "C" void ext_0067F0F0();
extern "C" int mem_00A9F1D8;
extern "C" int mem_00A9F010;
extern "C" int mem_00A9FA00;
extern "C" int mem_00A9F508;

extern "C" __declspec(naked) void* __fastcall fn_0051AC80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F1D8]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call ext_006404E0
        mov ebp, eax
        push ebp
        mov ecx, esi
        call ext_00519FA0
        mov edi, dword ptr [esi + 0x30]
        add esi, 0x2c
        cmp edi, dword ptr [esi + 0x8]
        jbe loc_51acb0
        call dword ptr [mem_00925134]
    loc_51acb0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe loc_51acbe
        call dword ptr [mem_00925134]
    loc_51acbe:
        cmp esi, esi
        je loc_51acc8
        call dword ptr [mem_00925134]
    loc_51acc8:
        cmp edi, ebx
        je loc_51ad2b
        mov ecx, dword ptr [mem_00A9F010]
        push ecx
        mov ecx, ebp
        call ext_006404E0
        cmp edi, dword ptr [esi + 0x8]
        mov ebx, eax
        jb loc_51ace7
        call dword ptr [mem_00925134]
    loc_51ace7:
        mov edx, dword ptr [mem_00A9FA00]
        fld dword ptr [edi]
        mov eax, dword ptr [mem_00A9F508]
        push edx
        push eax
        push ecx
        fstp dword ptr [esp]
        push ebx
        call ext_0067EF60
        add esp, 0x10
        cmp edi, dword ptr [esi + 0x8]
        jb loc_51ad0e
        call dword ptr [mem_00925134]
    loc_51ad0e:
        lea ecx, [edi + 0x4]
        push ecx
        push ebx
        call ext_0067F0F0
        add esp, 0x8
        cmp edi, dword ptr [esi + 0x8]
        jb loc_51ad26
        call dword ptr [mem_00925134]
    loc_51ad26:
        add edi, 0x14
        jmp loc_51acb0
    loc_51ad2b:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0x4
    }
}
