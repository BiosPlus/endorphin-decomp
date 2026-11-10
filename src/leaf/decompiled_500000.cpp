// Decompiled translation unit: src/leaf/decompiled_500000.cpp

// [0x00504930] sub_00504930 (10 bytes)
extern "C" void ext_00527280();
extern "C" void ext_005220C0();

extern "C" __declspec(naked) void __cdecl fn_00504930() {
    __asm {
        call ext_00527280
        jmp ext_005220C0
    }
}

// [0x00506E10] sub_00506E10 (16 bytes)
extern "C" void __cdecl ext_00506BD0(void* a, void* b, int c);

extern "C" void __fastcall fn_00506E10(void* self) {
    ext_00506BD0((char*)self + 4, self, 1);
}

// [0x00504970] sub_00504970 (26 bytes)
extern "C" void ext_00516EB0();

extern "C" __declspec(naked) void* __fastcall fn_00504970(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x30]
        test ecx, ecx
        je short zero_ret
        push eax
        call ext_00516EB0
        test eax, eax
        je short zero_ret
        add eax, 0x20
        ret
zero_ret:
        xor eax, eax
        ret
    }
}

// [0x0050D7A0] sub_0050D7A0 (26 bytes)
extern "C" int mem_00A9F178;
extern "C" void __cdecl ext_0050D360(int a, void* b, int c);

extern "C" void __fastcall fn_0050D7A0(void* self, int edx_unused, int a1) {
    ext_0050D360(a1, (char*)self + 4, mem_00A9F178);
}

// [0x0050D0B0] sub_0050D0B0 (28 bytes)
extern "C" void __cdecl ext_0050CE30(int a, void* b, int c, int d);

extern "C" void __fastcall fn_0050D0B0(void* self, int edx_unused, int a1) {
    ext_0050CE30(a1, (char*)self + 4, mem_00A9F178, 1);
}

// [0x00500120] sub_00500120 (35 bytes)
extern "C" int mem_00AEB2D8;
extern "C" int mem_00AEB2D4;
extern "C" int* __cdecl fn_00500120() {
    if (!(mem_00AEB2D8 & 1)) {
        mem_00AEB2D8 |= 1;
        mem_00AEB2D4 = 0x94EC3C;
    }
    return &mem_00AEB2D4;
}

// [0x005054E0] sub_005054E0 (35 bytes)
extern "C" int mem_00AEBB78;
extern "C" int mem_00AEBB74;

extern "C" void* __cdecl fn_005054E0() {
    if (!(*(unsigned char*)&mem_00AEBB78 & 1)) {
        mem_00AEBB78 |= 1;
        mem_00AEBB74 = 0x94f0e8;
    }
    return &mem_00AEBB74;
}

// [0x0050A030] sub_0050A030 (35 bytes)
extern "C" int mem_00AEBC98;
extern "C" int mem_00AEBC94;

extern "C" void* __cdecl fn_0050A030() {
    if (!(mem_00AEBC98 & 1)) {
        mem_00AEBC98 |= 1;
        mem_00AEBC94 = 0x0094ff84;
    }
    return &mem_00AEBC94;
}

// [0x0050A140] sub_0050A140 (35 bytes)
extern "C" int mem_00AEBCA0;
extern "C" int mem_00AEBC9C;

extern "C" void* __cdecl fn_0050A140() {
    if (!(*(unsigned char*)&mem_00AEBCA0 & 1)) {
        mem_00AEBCA0 |= 1;
        mem_00AEBC9C = 0x0094ffd4;
    }
    return &mem_00AEBC9C;
}

// [0x0050A170] sub_0050A170 (35 bytes)
extern "C" int mem_00AEBCA8;
extern "C" int mem_00AEBCA4;
extern "C" int* __cdecl fn_0050A170() {
    if (!(mem_00AEBCA8 & 1)) {
        mem_00AEBCA8 |= 1;
        mem_00AEBCA4 = 0x9500e0;
    }
    return &mem_00AEBCA4;
}

// [0x0050EE70] sub_0050EE70 (36 bytes)
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0050EE70(void* self, int edx_unused, void* first, void* last) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done
        mov edi, edi
    loop_top:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x20
        cmp esi, edi
        jne loop_top
    done:
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x0050F9D0] sub_0050F9D0 (36 bytes)
extern "C" __declspec(naked) bool __fastcall fn_0050F9D0(void* self, int edx_unused, double a, double b) {
    __asm {
        cmp dword ptr [ecx + 0x8], 0x0
        fld qword ptr [esp + 0xc]
        fcomp qword ptr [esp + 0x4]
        fnstsw ax
        jne short nonzero_flag
        test ah, 0x41
        je short ret_true
ret_false:
        xor al, al
        ret 0x10
nonzero_flag:
        test ah, 0x5
        jp short ret_false
ret_true:
        mov al, 0x1
        ret 0x10
    }
}

// [0x00503CA0] sub_00503CA0 (37 bytes)
extern "C" int mem_0094F074;

extern "C" __declspec(naked) void __fastcall fn_00503CA0(void* self) {
    __asm {
        fldz
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax], offset mem_0094F074
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x1c], ecx
        fstp qword ptr [eax + 0x28]
        mov byte ptr [eax + 0x20], cl
        mov byte ptr [eax + 0x21], cl
        ret
    }
}

// [0x00500310] sub_00500310 (37 bytes)
extern "C" void ext_004FFD60();
extern "C" void ext_0055DA20();

extern "C" __declspec(naked) void* __cdecl fn_00500310(void* self, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        push eax
        mov dword ptr [esp + 0x8], 0x0
        call ext_004FFD60
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x005007C0] sub_005007C0 (35 bytes)
extern "C" void* __cdecl ext_00500310(void* a, int b);

extern "C" __declspec(naked) void* __fastcall fn_005007C0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        mov dword ptr [esp + 0xc], 0x0
        call ext_00500310
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00505CD0] sub_00505CD0 (38 bytes)
extern "C" void __stdcall fn_00505CD0(void* first, void* last) {
    if (first != last) {
        do {
            void** vt = *(void***)first;
            ((void (__thiscall*)(void*, int))vt[0])(first, 0);
            first = (char*)first + 0x28;
        } while (first != last);
    }
}

// [0x0050B930] sub_0050B930 (38 bytes)
extern "C" void __fastcall fn_0050B930(void* self, int edx_unused, unsigned char* begin, unsigned char* end) {
    typedef void (__thiscall *VDtor)(void*, int);
    unsigned char* p = begin;
    if (p != end) {
        do {
            void** vtbl = *(void***)p;
            ((VDtor)vtbl[0])(p, 0);
            p += 0x24;
        } while (p != end);
    }
}

// [0x0050F9A0] sub_0050F9A0 (43 bytes)
extern "C" int mem_00924FC0;
extern "C" __declspec(naked) void __fastcall fn_0050F9A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov dword ptr [esi + 0xc], eax
        mov eax, dword ptr [eax]
        add eax, 0x3c
        push 0x950a80
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        neg al
        sbb eax, eax
        neg eax
        mov dword ptr [esi + 0x8], eax
        pop esi
        ret 0x4
    }
}

// [0x00503D00] sub_00503D00 (44 bytes)
extern "C" __declspec(naked) double* __fastcall fn_00503D00(void* self, int edx_unused, unsigned int n, double* dst, const double* src) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        test esi, esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, esi
        mov ecx, edi
        jbe done_00503D00
        mov edx, dword ptr [esp + 0x14]
    loop_00503D00:
        fld qword ptr [edx]
        sub eax, 1
        fstp qword ptr [ecx]
        add ecx, 8
        test eax, eax
        ja loop_00503D00
    done_00503D00:
        lea eax, [edi + 8*esi]
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x0050E360] sub_0050E360 (44 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void* __fastcall fn_0050E360(void* self, int edx_unused, unsigned int index) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        je short L_invalid
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb short L_ok
    L_invalid:
        call dword ptr [mem_00925134]
    L_ok:
        mov eax, dword ptr [esi + 0x4]
        lea eax, [eax + 4*edi]
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00503AF0] sub_00503AF0 (48 bytes)
// cdecl(first, last, dest): bytes = (last - first) / 8 * 8; if n > 0, memmove_s(dest - bytes, bytes, first, bytes); returns dest - bytes.
extern "C" int mem_009251EC;
extern "C" int __cdecl fn_00503AF0(int first, int last, int dest) {
    int n = (last - first) >> 3;
    int bytes = n * 8;
    int result = dest - bytes;
    if (n > 0) {
        ((int (__cdecl*)(int, int, int, int))mem_009251EC)(result, bytes, first, bytes);
    }
    return result;
}

// [0x00503C20] sub_00503C20 (49 bytes)
extern "C" int mem_009251EC;
extern "C" __declspec(naked) void* __stdcall fn_00503C20(void* first, void* last, void* dest) {
    __asm {
        mov eax, [esp+8]
        mov ecx, [esp+4]
        mov edx, [esp+0xc]
        sub eax, ecx
        sar eax, 3
        lea eax, [8*eax]
        push esi
        lea esi, [eax+edx]
        je skip
        push eax
        push ecx
        push eax
        push edx
        call dword ptr [mem_009251EC]
        add esp, 0x10
    skip:
        mov eax, esi
        pop esi
        ret 0xc
    }
}

// [0x005049F0] sub_005049F0 (49 bytes)
extern "C" bool __fastcall fn_005049F0(void* self) {
    int a = *(int*)((char*)self + 4);
    int v;
    if (a == 0) {
        v = 0;
    } else {
        int b = *(int*)((char*)self + 8);
        v = (b - a) / 104;
    }
    return v == 0;
}

// [0x005049B0] sub_005049B0 (60 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_005049B0(void* self, int edx_unused, unsigned int idx) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        je short invalid_path
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb short ok_path
invalid_path:
        call dword ptr [mem_00925134]
ok_path:
        mov eax, edi
        imul eax, eax, 0x68
        add eax, dword ptr [esi + 0x4]
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0050A6E0] sub_0050A6E0 (60 bytes)
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __cdecl fn_0050A6E0() {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebp
        je done_0050A6E0
        push ebx
        push edi
        mov edi, dword ptr [esp + 0x1c]
        lea ebx, [edi + 0x4]
        jmp loop_0050A6E0
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_0050A6E0:
        push ebx
        lea ecx, [esi + 0x4]
        call dword ptr [mem_00924FDC]
        fld dword ptr [edi + 0x20]
        fstp dword ptr [esi + 0x20]
        add esi, 0x24
        cmp esi, ebp
        jne loop_0050A6E0
        pop edi
        pop ebx
    done_0050A6E0:
        pop esi
        pop ebp
        ret
    }
}

// [0x00508800] sub_00508800 (61 bytes)
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void __fastcall fn_00508800(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        mov ebp, ecx
        xor esi, esi
    loop_top:
        mov eax, dword ptr [esi*4 + 0A40EF8h]
        push eax
        push edi
        call ebx
        add esp, 8
        test al, al
        jne found
        add esi, 1
        cmp esi, 3
        jl loop_top
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    found:
        pop edi
        mov dword ptr [ebp + 0Ch], esi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x00509C10] sub_00509C10 (61 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_00509C10() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je short empty_range
        push edi
        mov edi, dword ptr [esp + 0x18]
copy_loop:
        lea eax, [esi + 0x4]
        push eax
        lea ecx, [edi + 0x4]
        call dword ptr [mem_00924FDC]
        fld dword ptr [esi + 0x20]
        fstp dword ptr [edi + 0x20]
        add esi, 0x24
        add edi, 0x24
        cmp esi, ebx
        jne short copy_loop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
empty_range:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}
