// Decompiled translation unit: src/leaf/decompiled_500000.cpp

#include <string>

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

// [0x00509C50] sub_00509C50 (61 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_00509C50() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je short empty_range
        push edi
        mov edi, dword ptr [esp + 0x18]
copy_back_loop:
        sub esi, 0x24
        lea eax, [esi + 0x4]
        sub edi, 0x24
        push eax
        lea ecx, [edi + 0x4]
        call dword ptr [mem_00924FDC]
        fld dword ptr [esi + 0x20]
        cmp esi, ebx
        fstp dword ptr [edi + 0x20]
        jne short copy_back_loop
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

// [0x00508860] sub_00508860 (65 bytes)
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void* __cdecl fn_00508860(void* first, void* last, const void* key) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je early_ret
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loop_top:
        lea eax, [esi + 0x4]
        push ebx
        push eax
        call ebp
        add esp, 0x8
        test al, al
        jne found
        add esi, 0x24
        cmp esi, edi
        jne loop_top
found:
        pop ebp
        pop ebx
        pop edi
        mov eax, esi
        pop esi
        ret
early_ret:
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0050C480] sub_0050C480 (68 bytes)
extern "C" void ext_00661980();
extern "C" __declspec(naked) void* __fastcall fn_0050C480(void* self) {
    __asm {
        push -1
        push 0x00891E68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_00661980
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        mov dword ptr [esi], 0x00950314
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xC], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x14], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00508BC0] sub_00508BC0 (70 bytes)
extern "C" int mem_00925134;

// [0x00508BC0] sub_00508BC0 (70 bytes)
// __thiscall, ret 4: clears this+0x34, then if idx < element count of the vector at this+0x28..0x2c
// loads element[idx] into this+0x34; out-of-range/null bounds call _invalid_parameter_noinfo (mem_00925134).
extern "C" __declspec(naked) void __fastcall fn_00508BC0(void* self, int edx_unused, unsigned int idx) {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi + 0x34], 0
        mov ecx, dword ptr [esi + 0x28]
        test ecx, ecx
        je m508_done
        mov eax, dword ptr [esi + 0x2c]
        sub eax, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        sar eax, 0x2
        cmp edi, eax
        jae m508_pop
        test ecx, ecx
        je m508_bad
        mov eax, dword ptr [esi + 0x2c]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb m508_ok
    m508_bad:
        call dword ptr [mem_00925134]
    m508_ok:
        mov eax, dword ptr [esi + 0x28]
        mov ecx, dword ptr [eax + 4 * edi]
        mov dword ptr [esi + 0x34], ecx
    m508_pop:
        pop edi
    m508_done:
        pop esi
        ret 4
    }
}

// [0x00505D00] sub_00505D00 (73 bytes)
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00505D00(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        je done
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp esi, edi
        je skip
    lp:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 0
        mov ecx, esi
        call edx
        add esi, 0x68
        cmp esi, edi
        jne lp
    skip:
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_006A5C5C
        add esp, 4
        pop edi
    done:
        pop esi
        mov dword ptr [ebx + 4], 0
        mov dword ptr [ebx + 8], 0
        mov dword ptr [ebx + 0xc], 0
        pop ebx
        ret
    }
}

// [0x00505DC0] sub_00505DC0 (73 bytes)
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00505DC0(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        je done
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp esi, edi
        je skip
    lp:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 0
        mov ecx, esi
        call edx
        add esi, 0x28
        cmp esi, edi
        jne lp
    skip:
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_006A5C5C
        add esp, 4
        pop edi
    done:
        pop esi
        mov dword ptr [ebx + 4], 0
        mov dword ptr [ebx + 8], 0
        mov dword ptr [ebx + 0xc], 0
        pop ebx
        ret
    }
}

// [0x0050B960] sub_0050B960 (73 bytes)
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_0050B960(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        je done
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp esi, edi
        je skip
    lp:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 0
        mov ecx, esi
        call edx
        add esi, 0x24
        cmp esi, edi
        jne lp
    skip:
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_006A5C5C
        add esp, 4
        pop edi
    done:
        pop esi
        mov dword ptr [ebx + 4], 0
        mov dword ptr [ebx + 8], 0
        mov dword ptr [ebx + 0xc], 0
        pop ebx
        ret
    }
}

// [0x0050C4D0] sub_0050C4D0 (76 bytes)
extern "C" void ext_0050B960();
extern "C" void ext_0065F440();
extern "C" __declspec(naked) void __fastcall fn_0050C4D0(void* self) {
    __asm {
        push -1
        push 0x00891E68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0x0
        call ext_0050B960
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005052F0] sub_005052F0 (77 bytes)
extern "C" __declspec(naked) void __fastcall fn_005052F0(void* self) {
    __asm {
        push -1
        push 0x00891E68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00508740] sub_00508740 (80 bytes)
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;
extern "C" int mem_00891E68;
extern "C" int mem_0094F92C;

extern "C" __declspec(naked) void* __fastcall fn_00508740(void* self) {
    __asm {
        push -1
        push offset mem_00891E68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_00661980
        lea ecx, [esi + 4]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], offset mem_0094F92C
        call dword ptr [mem_00924FE8]
        fldz
        mov ecx, dword ptr [esp + 8]
        fstp dword ptr [esi + 0x20]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0050FCD0] sub_0050FCD0 (82 bytes)
namespace {
struct Fcd0Keyed {
    char _pad[0x20];
    double key;
};
}
extern "C" void __cdecl fn_0050FCD0(Fcd0Keyed** a, Fcd0Keyed** b, Fcd0Keyed** c) {
    if ((*b)->key > (*a)->key) {
        Fcd0Keyed* t = *b; *b = *a; *a = t;
    }
    if ((*c)->key > (*b)->key) {
        Fcd0Keyed* t = *c; *c = *b; *b = t;
    }
    if ((*b)->key > (*a)->key) {
        Fcd0Keyed* t = *b; *b = *a; *a = t;
    }
}

// [0x0050FDA0] sub_0050FDA0 (82 bytes)
namespace {
struct Fda0Keyed {
    char _pad[0x20];
    double key;
};
}
extern "C" __declspec(naked) void __cdecl fn_0050FDA0(Fda0Keyed** a, Fda0Keyed** b, Fda0Keyed** c) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [ecx]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, dword ptr [edi]
        fld qword ptr [esi + 0x20]
        fcomp qword ptr [edx + 0x20]
        fnstsw ax
        test ah, 0x41
        jne fda0_s1
        mov dword ptr [ecx], esi
        mov dword ptr [edi], edx
    fda0_s1:
        mov esi, dword ptr [ecx]
        fld qword ptr [esi + 0x20]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        mov edx, dword ptr [ebx]
        fcomp qword ptr [edx + 0x20]
        fnstsw ax
        test ah, 0x41
        jne fda0_s2
        mov dword ptr [ebx], esi
        mov dword ptr [ecx], edx
    fda0_s2:
        mov esi, dword ptr [edi]
        mov edx, dword ptr [ecx]
        fld qword ptr [esi + 0x20]
        fcomp qword ptr [edx + 0x20]
        pop ebx
        fnstsw ax
        test ah, 0x41
        jne fda0_s3
        mov dword ptr [ecx], esi
        mov dword ptr [edi], edx
    fda0_s3:
        pop edi
        pop esi
        ret
    }
}

// [0x005086E0] sub_005086E0 (83 bytes)
extern "C" __declspec(naked) void __fastcall fn_005086E0(void* self) {
    __asm {
        push -1
        push 0x00891E68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0094F8D4
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00508790] sub_00508790 (83 bytes)
extern "C" __declspec(naked) void __fastcall fn_00508790(void* self) {
    __asm {
        push -1
        push 0x00891E68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0094F92C
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005088D0] sub_005088D0 (85 bytes)
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;
extern "C" int mem_00891E68;
extern "C" int mem_0094F8D4;

extern "C" __declspec(naked) void* __fastcall fn_005088D0(void* self) {
    __asm {
        push -1
        push offset mem_00891E68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_00661980
        lea ecx, [esi + 4]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], offset mem_0094F8D4
        call dword ptr [mem_00924FE8]
        fldz
        mov ecx, dword ptr [esp + 8]
        fstp dword ptr [esi + 0x20]
        fld1
        mov eax, esi
        fstp dword ptr [esi + 0x24]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0050B060] sub_0050B060 (86 bytes)
extern "C" void ext_00509C10();

extern "C" __declspec(naked) void* __cdecl fn_0050B060(void* a1, void* a2, void* a3) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_00509C10
        sub esi, ebx
        mov eax, 0x38e38e39
        imul esi
        sar edx, 3
        add esp, 0x18
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 8 * eax]
        lea eax, [edi + 4 * eax]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00505850] sub_00505850 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBB80;
extern "C" int mem_00AEBB7C;

extern "C" __declspec(naked) void* __fastcall fn_00505850(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x891c2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBB80], al
        jne L_done
        or dword ptr [mem_00AEBB80], eax
        mov ecx, offset mem_00AEBB7C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBB7C], 0x94f2d4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBB7C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00505A10] sub_00505A10 (30 bytes)
extern "C" void ext_00505850();

extern "C" __declspec(naked) void __fastcall fn_00505A10(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_00505850
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x00509360] sub_00509360 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBC58;
extern "C" int mem_00AEBC54;

extern "C" __declspec(naked) void* __fastcall fn_00509360(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x891eee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBC58], al
        jne L_done
        or dword ptr [mem_00AEBC58], eax
        mov ecx, offset mem_00AEBC54
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBC54], 0x94f994
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBC54
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005093C0] sub_005093C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBC60;
extern "C" int mem_00AEBC5C;

extern "C" __declspec(naked) void* __fastcall fn_005093C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x891f0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBC60], al
        jne L_done
        or dword ptr [mem_00AEBC60], eax
        mov ecx, offset mem_00AEBC5C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBC5C], 0x94fa6c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBC5C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00509420] sub_00509420 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBC68;
extern "C" int mem_00AEBC64;

extern "C" __declspec(naked) void* __fastcall fn_00509420(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x891f2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBC68], al
        jne L_done
        or dword ptr [mem_00AEBC68], eax
        mov ecx, offset mem_00AEBC64
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBC64], 0x94fb44
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBC64
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00509480] sub_00509480 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBC70;
extern "C" int mem_00AEBC6C;

extern "C" __declspec(naked) void* __fastcall fn_00509480(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x891f4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBC70], al
        jne L_done
        or dword ptr [mem_00AEBC70], eax
        mov ecx, offset mem_00AEBC6C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBC6C], 0x94fc1c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBC6C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005094E0] sub_005094E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBC78;
extern "C" int mem_00AEBC74;

extern "C" __declspec(naked) void* __fastcall fn_005094E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x891f6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBC78], al
        jne L_done
        or dword ptr [mem_00AEBC78], eax
        mov ecx, offset mem_00AEBC74
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBC74], 0x94fcf4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBC74
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00509540] sub_00509540 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBC80;
extern "C" int mem_00AEBC7C;

extern "C" __declspec(naked) void* __fastcall fn_00509540(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x891f8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBC80], al
        jne L_done
        or dword ptr [mem_00AEBC80], eax
        mov ecx, offset mem_00AEBC7C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBC7C], 0x94fdcc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBC7C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0050A120] sub_0050A120 (30 bytes)
extern "C" void ext_00509540();

extern "C" __declspec(naked) void __fastcall fn_0050A120(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_00509540
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005095A0] sub_005095A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBC88;
extern "C" int mem_00AEBC84;

extern "C" __declspec(naked) void* __fastcall fn_005095A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x891fae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBC88], al
        jne L_done
        or dword ptr [mem_00AEBC88], eax
        mov ecx, offset mem_00AEBC84
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBC84], 0x94fea4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBC84
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0050E7B0] sub_0050E7B0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBD30;
extern "C" int mem_00AEBD2C;

extern "C" __declspec(naked) void* __fastcall fn_0050E7B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8922ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBD30], al
        jne L_done
        or dword ptr [mem_00AEBD30], eax
        mov ecx, offset mem_00AEBD2C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBD2C], 0x95047c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBD2C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0050E810] sub_0050E810 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBD38;
extern "C" int mem_00AEBD34;

extern "C" __declspec(naked) void* __fastcall fn_0050E810(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8922ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBD38], al
        jne L_done
        or dword ptr [mem_00AEBD38], eax
        mov ecx, offset mem_00AEBD34
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBD34], 0x950554
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBD34
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0050E870] sub_0050E870 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBD40;
extern "C" int mem_00AEBD3C;

extern "C" __declspec(naked) void* __fastcall fn_0050E870(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8922ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBD40], al
        jne L_done
        or dword ptr [mem_00AEBD40], eax
        mov ecx, offset mem_00AEBD3C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBD3C], 0x95062c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBD3C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0050E8D0] sub_0050E8D0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBD48;
extern "C" int mem_00AEBD44;

extern "C" __declspec(naked) void* __fastcall fn_0050E8D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89230e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBD48], al
        jne L_done
        or dword ptr [mem_00AEBD48], eax
        mov ecx, offset mem_00AEBD44
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBD44], 0x950704
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBD44
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0050E930] sub_0050E930 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBD50;
extern "C" int mem_00AEBD4C;

extern "C" __declspec(naked) void* __fastcall fn_0050E930(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89232e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBD50], al
        jne L_done
        or dword ptr [mem_00AEBD50], eax
        mov ecx, offset mem_00AEBD4C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBD4C], 0x9507dc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBD4C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00509EB0] sub_00509EB0 (88 bytes)
extern "C" int mem_00924FE0;

// EH-framed copy constructor: copies a std::string at +0x4 and a float at +0x20
// from the source object (stack arg) into a new object whose vtable is 0x94F92C.
extern "C" __declspec(naked) void __fastcall fn_00509EB0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x891e68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [edi + 0x4]
        push eax
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esi], 0x94f92c
        call dword ptr [mem_00924FE0]
        fld dword ptr [edi + 0x20]
        mov ecx, dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0x20]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00506030] sub_00506030 (90 bytes)
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void* __fastcall fn_00506030(void* self) {
    __asm {
        push -1
        push 0x00891C94
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_00661980
        xor edi, edi
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi], 0x0094F564
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x24], edi
        mov dword ptr [esi + 0x28], edi
        mov dword ptr [esi + 0x2c], edi
        mov dword ptr [esi + 0x30], edi
        mov dword ptr [esi + 0x34], edi
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0050FA40] sub_0050FA40 (91 bytes)
struct Elem_0050FA40 {
    unsigned char pad[0x20];
    double key;
};

extern "C" __declspec(naked) void __cdecl fn_0050FA40(void* arr, int hi, int lo, void* item) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp+0x10]
        push esi
        mov esi, dword ptr [esp+0x10]
        lea eax, [esi-1]
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        cmp ebp, esi
        jge L_place_0050FA40
        push ebx
        mov ebx, dword ptr [esp+0x1c]
        push edi
        mov edi, dword ptr [esp+0x14]
    L_loop_0050FA40:
        mov edx, dword ptr [edi+4*ecx]
        fld qword ptr [ebx+0x20]
        fcomp qword ptr [edx+0x20]
        fnstsw ax
        test ah, 5
        jp L_store_0050FA40
        lea eax, [ecx-1]
        mov dword ptr [edi+4*esi], edx
        cdq
        sub eax, edx
        mov esi, ecx
        sar eax, 1
        cmp ebp, esi
        mov ecx, eax
        jl L_loop_0050FA40
    L_store_0050FA40:
        mov dword ptr [edi+4*esi], ebx
        pop edi
        pop ebx
        pop esi
        pop ebp
        ret
    L_place_0050FA40:
        mov eax, dword ptr [esp+0x18]
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [ecx+4*esi], eax
        pop esi
        pop ebp
        ret
    }
}

// [0x0050FAA0] sub_0050FAA0 (91 bytes)
struct Elem_0050FAA0 {
    unsigned char pad[0x20];
    double key;
};

extern "C" __declspec(naked) void __cdecl fn_0050FAA0(void* arr, int hi, int lo, void* item) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp+0x10]
        push esi
        mov esi, dword ptr [esp+0x10]
        lea eax, [esi-1]
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        cmp ebp, esi
        jge L_place_0050FAA0
        push ebx
        mov ebx, dword ptr [esp+0x1c]
        push edi
        mov edi, dword ptr [esp+0x14]
    L_loop_0050FAA0:
        mov edx, dword ptr [edi+4*ecx]
        fld qword ptr [ebx+0x20]
        fcomp qword ptr [edx+0x20]
        fnstsw ax
        test ah, 0x41
        jne L_store_0050FAA0
        lea eax, [ecx-1]
        mov dword ptr [edi+4*esi], edx
        cdq
        sub eax, edx
        mov esi, ecx
        sar eax, 1
        cmp ebp, esi
        mov ecx, eax
        jl L_loop_0050FAA0
    L_store_0050FAA0:
        mov dword ptr [edi+4*esi], ebx
        pop edi
        pop ebx
        pop esi
        pop ebp
        ret
    L_place_0050FAA0:
        mov eax, dword ptr [esp+0x18]
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [ecx+4*esi], eax
        pop esi
        pop ebp
        ret
    }
}

// [0x00500340] sub_00500340 (92 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void** __cdecl fn_00500340(void** first, void** last, const void* value) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        sub edi, ebx
        sar edi, 0x2
        test edi, edi
        jle done
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_top:
        mov eax, edi
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        mov ecx, dword ptr [ebx + 4 * esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push ebp
        call edx
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je not_less
        or eax, -1
        sub eax, esi
        lea ebx, [ebx + 4 * esi + 4]
        add edi, eax
        jmp next
    not_less:
        mov edi, esi
    next:
        test edi, edi
        jg loop_top
        pop esi
        pop ebp
    done:
        pop edi
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x00503BC0] sub_00503BC0 (92 bytes)
extern "C" int mem_00925134;
extern "C" int mem_009251EC;

extern "C" __declspec(naked) void __fastcall fn_00503BC0(void* self, int edx_unused, void* out, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        test ebp, ebp
        push esi
        push edi
        mov edi, ecx
        je guard_fail
        cmp ebp, dword ptr [esp + 0x1c]
        je guard_ok
    guard_fail:
        call dword ptr [mem_00925134]
    guard_ok:
        mov esi, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x20]
        cmp esi, edx
        je tail
        mov eax, dword ptr [edi + 8]
        sub eax, edx
        sar eax, 3
        test eax, eax
        lea ecx, [8*eax]
        push ebx
        lea ebx, [ecx + esi]
        jle no_move
        push ecx
        push edx
        push ecx
        push esi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    no_move:
        mov dword ptr [edi + 8], ebx
        pop ebx
    tail:
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax + 4], esi
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        ret 0x14
    }
}

// [0x0050BE20] sub_0050BE20 (90 bytes)
extern "C" void ext_00536230();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0050BE20(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m50be20_ok1
        call ebp
    m50be20_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m50be20_ok2
        call ebp
    m50be20_ok2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_00536230
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m50be20_ok3
        call ebp
    m50be20_ok3:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m50be20_ok4
        call ebp
    m50be20_ok4:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00505290] sub_00505290 (92 bytes)
extern "C" int mem_00924FE0;

// EH-framed copy constructor: copies two dwords (+0x4, +0x8) and a std::string at +0xC
// from the source object (stack arg) into a new object whose vtable is 0x94F484.
extern "C" __declspec(naked) void* __fastcall fn_00505290(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x891e68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi], 0x94f484
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [eax + 0x8]
        add eax, 0xc
        push eax
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi + 0x8], edx
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0050A720] sub_0050A720 (93 bytes)
extern "C" void ext_00509C50();

extern "C" __declspec(naked) int __cdecl fn_0050A720(int a1, int a2, int a3) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_00509C50
        sub esi, ebx
        mov eax, 0x38e38e39
        imul esi
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 8*eax]
        add eax, eax
        add eax, eax
        add esp, 0x18
        mov ecx, eax
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0050BDF0] sub_0050BDF0 (43 bytes)
extern "C" void ext_0050A720();

extern "C" __declspec(naked) void __fastcall fn_0050BDF0(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edx
        call ext_0050A720
        add esp, 0x1c
        ret
    }
}

// [0x00506090] sub_00506090 (96 bytes)
extern "C" void ext_00505D00();
extern "C" void ext_0065F440();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00506090(void* self) {
    __asm {
        push -1
        push 0x00891C94
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0094F564
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x10], 0x1
        call ext_00505D00
        lea ecx, [esi + 0x4]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00504B80] sub_00504B80 (97 bytes)
extern "C" void ext_0065C660();
extern "C" void ext_0065F440();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00504B80(void* self) {
    __asm {
        push -1
        push 0x891b8f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x14], 0x1
        call dword ptr [mem_00924FF4]
        xor ecx, ecx
        cmp esi, ecx
        mov byte ptr [esp + 0x14], cl
        je L_00504BBD
        lea ecx, [esi + 0x4]
    L_00504BBD:
        call ext_0065F440
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065C660
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00505360] sub_00505360 (100 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __fastcall fn_00505360(void* self, int edx_unused, const void* src) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        lea eax, [edi + 8]
        push eax
        lea ecx, [esi + 8]
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [edi + 24h]
        mov dword ptr [esi + 24h], ecx
        fld dword ptr [edi + 28h]
        fstp dword ptr [esi + 28h]
        mov eax, esi
        fld dword ptr [edi + 2ch]
        fstp dword ptr [esi + 2ch]
        fld dword ptr [edi + 30h]
        fstp dword ptr [esi + 30h]
        fld dword ptr [edi + 34h]
        fstp dword ptr [esi + 34h]
        fld dword ptr [edi + 38h]
        fstp dword ptr [esi + 38h]
        fld dword ptr [edi + 3ch]
        fstp dword ptr [esi + 3ch]
        fld dword ptr [edi + 40h]
        fstp dword ptr [esi + 40h]
        fld dword ptr [edi + 44h]
        fstp dword ptr [esi + 44h]
        fld dword ptr [edi + 48h]
        fstp dword ptr [esi + 48h]
        fld dword ptr [edi + 4ch]
        fstp dword ptr [esi + 4ch]
        mov edx, dword ptr [edi + 50h]
        pop edi
        mov dword ptr [esi + 50h], edx
        pop esi
        ret 4
    }
}

// [0x0050E4E0] sub_0050E4E0 (102 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __fastcall fn_0050E4E0(void* self, int edx_unused, const void* src) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], eax
        mov ecx, dword ptr [edi + 0x8]
        mov dword ptr [esi + 0x8], ecx
        fld dword ptr [edi + 0xc]
        fstp dword ptr [esi + 0xc]
        lea eax, [edi + 0x20]
        fld dword ptr [edi + 0x10]
        push eax
        fstp dword ptr [esi + 0x10]
        lea ecx, [esi + 0x20]
        fld dword ptr [edi + 0x14]
        fstp dword ptr [esi + 0x14]
        mov edx, dword ptr [edi + 0x18]
        mov dword ptr [esi + 0x18], edx
        fld dword ptr [edi + 0x1c]
        fstp dword ptr [esi + 0x1c]
        call dword ptr [mem_00924FDC]
        lea ecx, [edi + 0x3c]
        push ecx
        lea ecx, [esi + 0x3c]
        call dword ptr [mem_00924FDC]
        lea edx, [edi + 0x58]
        push edx
        lea ecx, [esi + 0x58]
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [edi + 0x74]
        mov dword ptr [esi + 0x74], eax
        pop edi
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0050BFF0] sub_0050BFF0 (108 bytes)
extern "C" void ext_0050B060();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0050BFF0(void* self, int edx_unused) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, ecx
        je L_invalid
        cmp esi, dword ptr [esp + 0x18]
        je L_cont
    L_invalid:
        call dword ptr [mem_00925134]
    L_cont:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, eax
        je L_store
        push ebx
        push edi
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push eax
        call ext_0050B060
        mov edi, dword ptr [ebp + 8]
        mov ebx, eax
        add esp, 0xc
        cmp ebx, edi
        mov esi, ebx
        je L_done
        nop
    L_loop:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 0
        mov ecx, esi
        call eax
        add esi, 0x24
        cmp esi, edi
        jne L_loop
    L_done:
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [ebp + 8], ebx
        pop ebx
    L_store:
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 4], ecx
        pop ebp
        ret 0x14
    }
}

// [0x0050C610] sub_0050C610 (59 bytes)
extern "C" void ext_0050BFF0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0050C610(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m50c610_ok1
        call ebp
    m50c610_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m50c610_ok2
        call ebp
    m50c610_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0050BFF0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0050FD30] sub_0050FD30 (109 bytes)
extern "C" void ext_0050FA40();

extern "C" __declspec(naked) void __cdecl fn_0050FD30(void* arr, int hole, int len, void* a4, void* a5) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0x18]
        lea ecx, [edx + edx + 0x2]
        cmp ecx, edi
        mov ebx, edx
        jge L_post
        push ebp
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_loop:
        mov ebp, dword ptr [esi + 4*ecx - 0x4]
        mov eax, dword ptr [esi + 4*ecx]
        fld qword ptr [ebp + 0x20]
        fcomp qword ptr [eax + 0x20]
        fnstsw ax
        test ah, 0x5
        jp L_keep
        sub ecx, 0x1
L_keep:
        mov eax, dword ptr [esi + 4*ecx]
        mov dword ptr [esi + 4*edx], eax
        mov edx, ecx
        lea ecx, [ecx + ecx + 0x2]
        cmp ecx, edi
        jl L_loop
        pop ebp
L_post:
        jne L_call
        mov ecx, dword ptr [esi + 4*edi - 0x4]
        mov dword ptr [esi + 4*edx], ecx
        lea edx, [edi - 0x1]
L_call:
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        push ebx
        push edx
        push esi
        call ext_0050FA40
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0050FE00] sub_0050FE00 (109 bytes)
extern "C" void ext_0050FAA0();

extern "C" __declspec(naked) void __cdecl fn_0050FE00(void* arr, int hole, int len, void* a4, void* a5) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0x18]
        lea ecx, [edx + edx + 0x2]
        cmp ecx, edi
        mov ebx, edx
        jge L_post
        push ebp
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_loop:
        mov ebp, dword ptr [esi + 4*ecx - 0x4]
        mov eax, dword ptr [esi + 4*ecx]
        fld qword ptr [ebp + 0x20]
        fcomp qword ptr [eax + 0x20]
        fnstsw ax
        test ah, 0x41
        jne L_keep
        sub ecx, 0x1
L_keep:
        mov eax, dword ptr [esi + 4*ecx]
        mov dword ptr [esi + 4*edx], eax
        mov edx, ecx
        lea ecx, [ecx + ecx + 0x2]
        cmp ecx, edi
        jl L_loop
        pop ebp
L_post:
        jne L_call
        mov ecx, dword ptr [esi + 4*edi - 0x4]
        mov dword ptr [esi + 4*edx], ecx
        lea edx, [edi - 0x1]
L_call:
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        push ebx
        push edx
        push esi
        call ext_0050FAA0
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0050FF20] sub_0050FF20 (63 bytes)
extern "C" void __cdecl fn_0050FF20(unsigned int* first, unsigned int* last, int comp) {
    int len = last - first;
    for (int hole = len / 2; hole > 0; ) {
        --hole;
        fn_0050FD30(first, hole, len, (void*)first[hole], (void*)comp);
    }
}

// [0x00507E40] sub_00507E40 (48 bytes)
extern "C" int mem_0094F7FC;
extern "C" int mem_0094F854;
extern "C" int mem_0094F860;
extern "C" void ext_00517AD0();

extern "C" void* __fastcall fn_00507E40(void* self) {
    int* p = (int*)self;
    ((void (__fastcall*)(void*))ext_00517AD0)(self);
    *(double*)((char*)self + 0x20) = 0.0;
    p[0] = (int)&mem_0094F860;
    p[2] = (int)&mem_0094F854;
    p[3] = (int)&mem_0094F7FC;
    *((char*)self + 0x28) = 0;
    p[11] = -1;
    return self;
}

// [0x0050EDF0] sub_0050EDF0 (113 bytes)
extern "C" void ext_006246B0();

extern "C" __declspec(naked) void __fastcall fn_0050EDF0(void* self) {
    __asm {
        push -1
        push 0x892376
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov [esp+4], esi
        mov eax, [esi]
        lea ecx, [esi+0x1c]
        mov dword ptr [esp+0x10], 1
        mov dword ptr [eax+0x74], 0
        call ext_006246B0
        mov ecx, [esi+8]
        test ecx, ecx
        mov byte ptr [esp+0x10], 0
        je L_skip1
        mov edx, [ecx]
        mov eax, [edx]
        push 1
        call eax
    L_skip1:
        mov ecx, [esi+4]
        test ecx, ecx
        mov dword ptr [esp+0x10], -1
        pop esi
        je L_skip2
        mov edx, [ecx]
        mov eax, [edx]
        push 1
        call eax
    L_skip2:
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0050A780] sub_0050A780 (127 bytes)
extern "C" void ext_00509EB0();
extern "C" void ext_00508790();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __cdecl fn_0050A780(void* a, void* b) {
    __asm {
        push -1
        push 0x892138
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0x24
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x3c]
        push edi
        push esi
        lea ecx, [esp + 0x10]
        call ext_00509EB0
        mov edi, dword ptr [esp + 0x44]
        lea ebx, [edi + 0x4]
        push ebx
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x3c], 0x0
        call dword ptr [mem_00924FDC]
        fld dword ptr [edi + 0x20]
        lea eax, [esp + 0x10]
        fstp dword ptr [esi + 0x20]
        push eax
        mov ecx, ebx
        call dword ptr [mem_00924FDC]
        fld dword ptr [esp + 0x2c]
        lea ecx, [esp + 0xc]
        fstp dword ptr [edi + 0x20]
        mov dword ptr [esp + 0x38], 0xffffffff
        call ext_00508790
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        pop esi
        pop ebx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0x30
        ret
    }
}

// [0x0050B6A0] sub_0050B6A0 (111 bytes)
extern "C" void ext_0050A780();
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __cdecl fn_0050B6A0(void* a, void* b, void* c) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00924EF4]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        add edi, 0x4
        lea esi, [ebp + 0x4]
        push edi
        push esi
        call ebx
        add esp, 0x8
        test al, al
        je L_skip1
        mov eax, dword ptr [esp + 0x14]
        push eax
        push ebp
        call ext_0050A780
        add esp, 0x8
    L_skip1:
        mov ecx, dword ptr [esp + 0x1c]
        add ecx, 0x4
        push esi
        push ecx
        call ebx
        add esp, 0x8
        test al, al
        je L_skip2
        mov edx, dword ptr [esp + 0x1c]
        push ebp
        push edx
        call ext_0050A780
        add esp, 0x8
    L_skip2:
        push edi
        push esi
        call ebx
        add esp, 0x8
        test al, al
        je L_skip3
        mov eax, dword ptr [esp + 0x14]
        push eax
        push ebp
        call ext_0050A780
        add esp, 0x8
    L_skip3:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00508950] sub_00508950 (109 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0046C0A0();
extern "C" int mem_00A9FA04;
extern "C" int mem_00A9F790;
extern "C" int mem_00A9FA90;

extern "C" __declspec(naked) void __fastcall fn_00508950(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9FA04]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esi + 0x4]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F790]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi + 0x20]
        push ecx
        call ext_0046C0A0
        mov edx, dword ptr [mem_00A9FA90]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        add esi, 0x24
        push esi
        call ext_0046C0A0
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00500B70] sub_00500B70 (43 bytes)
extern "C" void ext_004FFE90();

extern "C" __declspec(naked) void __fastcall fn_00500B70(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edx
        call ext_004FFE90
        add esp, 0x1c
        ret
    }
}

// [0x005003A0] sub_005003A0 (141 bytes)
extern "C" void ext_005940E0();
extern "C" void ext_00594250();
extern "C" void ext_006A6DD2();

// try { for (n = count; n; --n) { if (p) ctor(p, a); p += 0x24; } }
// catch (...) { destroy [begin, p); throw; }
// Naked: MSVC /EHsc treats extern "C" callees as nothrow, which drops the try block,
// so the SEH frame is written out by hand.
extern "C" __declspec(naked) void __cdecl fn_005003A0(void* begin, unsigned int count, const void* a) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x00891361
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [ebp + 0xc]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
loop_top:
        cmp edi, ebx
        jbe exit_path
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call ext_00594250
skip_ctor:
        sub edi, 0x1
        add esi, 0x24
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow
dtor_loop:
        mov ecx, esi
        call ext_005940E0
        add esi, 0x24
        cmp esi, edi
        jne dtor_loop
rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
exit_path:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00501090] sub_00501090 (54 bytes)
extern "C" void ext_005003A0();

extern "C" __declspec(naked) void* __fastcall fn_00501090(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_005003A0
        lea ecx, [esi + 8*esi]
        add esp, 0x18
        lea eax, [edi + 4*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00500430] sub_00500430 (141 bytes)
extern "C" void ext_005940E0();
extern "C" void ext_00594250();
extern "C" void ext_006A6DD2();

// try { for (p = first; p != last; ++p, ++dest) { if (dest) ctor(dest, p); } }
// catch (...) { destroy [begin, dest); throw; }
// return dest;
// Naked: MSVC /EHsc treats extern "C" callees as nothrow, which drops the try block,
// so the SEH frame is written out by hand.
extern "C" __declspec(naked) void* __cdecl fn_00500430(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x00891381
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
loop_top:
        cmp edi, dword ptr [ebp + 0xc]
        je exit_path
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        push edi
        mov ecx, esi
        call ext_00594250
skip_ctor:
        add esi, 0x24
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x24
        jmp loop_top
handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
dtor_loop:
        mov ecx, esi
        call ext_005940E0
        add esi, 0x24
        cmp esi, edi
        jne dtor_loop
rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
exit_path:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x005007F0] sub_005007F0 (86 bytes)
extern "C" void ext_004FFD90();

extern "C" __declspec(naked) void* __cdecl fn_005007F0(void* a1, void* a2, void* a3) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_004FFD90
        sub esi, ebx
        mov eax, 0x38e38e39
        imul esi
        sar edx, 3
        add esp, 0x18
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 8 * eax]
        lea eax, [edi + 4 * eax]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x005013F0] sub_005013F0 (89 bytes)
extern "C" void ext_005007F0();
extern "C" void ext_0049ECB0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005013F0(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        test ebp, ebp
        push esi
        mov esi, ecx
        je L_call_invalid
        cmp ebp, dword ptr [esp + 0x1c]
        je L_cont
    L_call_invalid:
        call dword ptr [mem_00925134]
    L_cont:
        mov ebx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x20]
        cmp ebx, eax
        je L_ret
        mov ecx, dword ptr [esi + 0x8]
        push edi
        push ebx
        push ecx
        push eax
        call ext_005007F0
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edi, eax
        mov eax, dword ptr [esi + 0x8]
        push esi
        push eax
        push edi
        call ext_0049ECB0
        add esp, 0x1c
        mov dword ptr [esi + 0x8], edi
        pop edi
    L_ret:
        mov eax, dword ptr [esp + 0x10]
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        ret 0x14
    }
}

// [0x005015E0] sub_005015E0 (59 bytes)
extern "C" void ext_005013F0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005015E0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m5015e0_ok1
        call ebp
    m5015e0_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m5015e0_ok2
        call ebp
    m5015e0_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_005013F0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00508C30] sub_00508C30 (146 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_00508C30(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 0
        mov dword ptr [esp + 0xc], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x20]
        push 0
        push 0xa41420
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esi], 0x94ffbc
        mov dword ptr [esi + 0x10], eax
        call ext_006A6E9E
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x3c]
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], 0
        add esp, 0x14
        cmp dword ptr [esi + 0x14], 0
        mov dword ptr [esi + 0x1c], ecx
        mov dword ptr [esi + 0x20], 0
        mov dword ptr [esi + 0x24], edx
        mov eax, esi
        jne L_skip
        mov dword ptr [esi + 0x8], edi
    L_skip:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x00508D30] sub_00508D30 (146 bytes)
extern "C" __declspec(naked) void __fastcall fn_00508D30(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 0
        mov dword ptr [esp + 0xc], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x20]
        push 0
        push 0xa416d0
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esi], 0x950118
        mov dword ptr [esi + 0x10], eax
        call ext_006A6E9E
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x3c]
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], 0
        add esp, 0x14
        cmp dword ptr [esi + 0x14], 0
        mov dword ptr [esi + 0x1c], ecx
        mov dword ptr [esi + 0x20], 0
        mov dword ptr [esi + 0x24], edx
        mov eax, esi
        jne L_skip
        mov dword ptr [esi + 0x8], edi
    L_skip:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x0050D1E0] sub_0050D1E0 (148 bytes)
extern "C" void ext_005087F0();
extern "C" void ext_00661980();

extern "C" __declspec(naked) void* __fastcall fn_0050D1E0(void* self) {
    __asm {
        push -1
        push 0x892126
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call ext_00661980
        xor ebx, ebx
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esi + 0x4], 0x928efc
        mov dword ptr [esi + 0x8], 0x94f984
        lea edi, [esi + 0x10]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x1
        mov dword ptr [esi], 0x9503fc
        mov dword ptr [esi + 0x4], 0x9503d0
        mov dword ptr [esi + 0x8], 0x9503c4
        call ext_00661980
        mov dword ptr [edi], 0x95036c
        mov dword ptr [edi + 0x8], ebx
        mov dword ptr [edi + 0xc], ebx
        mov dword ptr [edi + 0x10], ebx
        mov dword ptr [esi + 0x28], ebx
        mov dword ptr [esi + 0x2c], ebx
        mov dword ptr [esi + 0x30], ebx
        push ebx
        mov ecx, esi
        mov dword ptr [esi + 0x34], ebx
        call ext_005087F0
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00503B20] sub_00503B20 (153 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_00503B20(void* begin, unsigned int count, const void* a) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x00891a61
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [ebp + 0xc]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, ebx
        jbe epilogue
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [ebp + 0x10]
        mov edx, dword ptr [ecx + 0x1c]
        mov dword ptr [esi + 0x1c], edx
    skip_ctor:
        sub edi, 0x1
        add esi, 0x20
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow
        nop
    dtor_loop:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x20
        cmp esi, edi
        jne dtor_loop
    rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    epilogue:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00503C60] sub_00503C60 (55 bytes)
extern "C" void ext_00503B20();

extern "C" __declspec(naked) int __fastcall fn_00503C60(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_00503B20
        mov eax, esi
        add esp, 0x18
        shl eax, 0x5
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0050BF30] sub_0050BF30 (162 bytes)
extern "C" void __cdecl ext_0050B6A0(void* a, void* b, void* c);

extern "C" __declspec(naked) void __cdecl fn_0050BF30(void* a, void* b, void* c) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov edx, edi
        sub edx, ecx
        mov eax, 0x38e38e39
        imul edx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x28
        jle L_small_0050BF30
        add eax, 0x1
        cdq
        push ebx
        and edx, 0x7
        add eax, edx
        sar eax, 0x3
        push ebp
        push esi
        lea ebx, [eax + 8*eax]
        add ebx, ebx
        lea esi, [eax + 8*eax]
        add ebx, ebx
        add ebx, ebx
        add esi, esi
        lea edx, [ebx + ecx]
        add esi, esi
        lea eax, [esi + ecx]
        push edx
        push eax
        push ecx
        mov dword ptr [esp + 0x20], eax
        call ext_0050B6A0
        mov ebp, dword ptr [esp + 0x24]
        lea eax, [esi + ebp]
        push eax
        mov ecx, ebp
        sub ecx, esi
        push ebp
        push ecx
        call ext_0050B6A0
        mov eax, edi
        sub eax, esi
        push edi
        push eax
        sub edi, ebx
        push edi
        mov dword ptr [esp + 0x40], eax
        call ext_0050B6A0
        mov edx, dword ptr [esp + 0x40]
        mov eax, dword ptr [esp + 0x38]
        push edx
        push ebp
        push eax
        call ext_0050B6A0
        add esp, 0x30
        pop esi
        pop ebp
        pop ebx
        pop edi
        ret
    L_small_0050BF30:
        mov edx, dword ptr [esp + 0xc]
        push edi
        push edx
        push ecx
        call ext_0050B6A0
        add esp, 0xc
        pop edi
        ret
    }
}

// [0x0050BE80] sub_0050BE80 (163 bytes)
// Stack-arg fill: copy-constructs `count` 0x24-byte elements (vtable 0x94F92C,
// std::string at +0x4, float at +0x20) from *src into first[..]; on exception
// destroys the already-built prefix and rethrows.
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __cdecl fn_0050BE80(void* first, unsigned int count, void* src) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8920a9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [ebp + 0x10]
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [ebp + 0xc]
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], 0x0
    L_loop_0050BEB4:
        test edi, edi
        jbe L_done_0050BF12
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        test esi, esi
        je L_skip_0050BEDF
        lea eax, [ebx + 0x4]
        push eax
        lea ecx, [esi + 0x4]
        mov byte ptr [ebp - 0x4], 0x2
        mov dword ptr [esi], 0x94f92c
        call dword ptr [mem_00924FE0]
        fld dword ptr [ebx + 0x20]
        fstp dword ptr [esi + 0x20]
    L_skip_0050BEDF:
        sub edi, 0x1
        add esi, 0x24
        mov byte ptr [ebp - 0x4], 0x0
        mov dword ptr [ebp + 0x8], esi
        jmp L_loop_0050BEB4
    L_handler_0050BEEE:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je L_rethrow_0050BF09
    L_dtor_0050BEF8:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 0x0
        mov ecx, esi
        call eax
        add esi, 0x24
        cmp esi, edi
        jne L_dtor_0050BEF8
    L_rethrow_0050BF09:
        push 0x0
        push 0x0
        call ext_006A6DD2
    L_done_0050BF12:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0050C6C0] sub_0050C6C0 (54 bytes)
extern "C" void ext_0050BE80();

extern "C" __declspec(naked) void* __fastcall fn_0050C6C0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_0050BE80
        lea ecx, [esi + 8*esi]
        add esp, 0x18
        lea eax, [edi + 4*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0050B3E0] sub_0050B3E0 (164 bytes)
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __cdecl fn_0050B3E0(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x892039
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0ch
        push ebx
        push esi
        mov esi, dword ptr [ebp + 10h]
        push edi
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 14h], esi
        mov dword ptr [ebp - 4], 0
        mov bl, 2
    loop_top:
        cmp edi, dword ptr [ebp + 0ch]
        je SHORT done
        mov dword ptr [ebp + 8], esi
        mov dword ptr [ebp - 18h], esi
        test esi, esi
        je SHORT skip_construct
        lea eax, [edi + 4]
        push eax
        lea ecx, [esi + 4]
        mov byte ptr [ebp - 4], bl
        mov dword ptr [esi], 0x94f92c
        call dword ptr [mem_00924FE0]
        fld dword ptr [edi + 20h]
        fstp dword ptr [esi + 20h]
    skip_construct:
        add esi, 24h
        mov byte ptr [ebp - 4], 0
        mov dword ptr [ebp + 10h], esi
        add edi, 24h
        jmp SHORT loop_top
    handler:
        mov esi, dword ptr [ebp - 14h]
        mov edi, dword ptr [ebp + 10h]
        cmp esi, edi
        je SHORT rethrow
    destroy_top:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 0
        mov ecx, esi
        call eax
        add esi, 24h
        cmp esi, edi
        jne SHORT destroy_top
    rethrow:
        push 0
        push 0
        call ext_006A6DD2
    done:
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0050C160] sub_0050C160 (41 bytes)
extern "C" void ext_0050B3E0();

extern "C" __declspec(naked) void __fastcall fn_0050C160(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        push edx
        call ext_0050B3E0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0050FE70] sub_0050FE70 (167 bytes)
extern "C" void ext_0050FCD0();

extern "C" __declspec(naked) void __cdecl fn_0050FE70(void* a, void* b, void* c, void* d) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov eax, esi
        sub eax, ecx
        sar eax, 0x2
        cmp eax, 0x28
        jle small_path
        add eax, 0x1
        cdq
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        and edx, 0x7
        add eax, edx
        push ebp
        sar eax, 0x3
        push edi
        lea edx, [eax*8]
        mov dword ptr [esp + 0x20], edx
        push ebx
        lea edi, [eax*4]
        add edx, ecx
        lea eax, [edi + ecx]
        push edx
        push eax
        push ecx
        mov dword ptr [esp + 0x20], eax
        call ext_0050FCD0
        mov ebp, dword ptr [esp + 0x2c]
        push ebx
        lea eax, [edi + ebp]
        push eax
        mov ecx, ebp
        sub ecx, edi
        push ebp
        push ecx
        call ext_0050FCD0
        push ebx
        mov eax, esi
        sub eax, edi
        push esi
        sub esi, dword ptr [esp + 0x48]
        push eax
        push esi
        mov dword ptr [esp + 0x48], eax
        call ext_0050FCD0
        mov edx, dword ptr [esp + 0x48]
        mov eax, dword ptr [esp + 0x40]
        push ebx
        push edx
        push ebp
        push eax
        call ext_0050FCD0
        add esp, 0x40
        pop edi
        pop ebp
        pop ebx
        pop esi
        pop ecx
        ret
small_path:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x10]
        push edx
        push esi
        push eax
        push ecx
        call ext_0050FCD0
        add esp, 0x10
        pop esi
        pop ecx
        ret
    }
}

// [0x0050FF60] sub_0050FF60 (167 bytes)
extern "C" void __cdecl ext_0050FDA0(int, int, int, int);

extern "C" void __cdecl fn_0050FF60(int a1, int a2, int a3, int a4) {
    int n = (a3 - a1) >> 2;
    if (n > 40) {
        int c = (n + 1) / 8;
        int c8 = 8 * c;
        int c4 = 4 * c;
        ext_0050FDA0(a1, a1 + c4, a1 + c8, a4);
        ext_0050FDA0(a2 - c4, a2, a2 + c4, a4);
        ext_0050FDA0(a3 - c8, a3 - c4, a3, a4);
        ext_0050FDA0(a1 + c4, a2, a3 - c4, a4);
    } else {
        ext_0050FDA0(a1, a2, a3, a4);
    }
}

// [0x00508680] sub_00508680 (82 bytes)
extern "C" void __fastcall ext_00695240(void* self);

struct MT_00508680 {
    unsigned int state[624];
    unsigned int* next;
    int left;
};

extern "C" unsigned int __fastcall fn_00508680(MT_00508680* self) {
    if (self->left == 0) {
        ext_00695240(self);
    }
    self->left--;
    unsigned int y = *self->next++;
    y ^= (y >> 11);
    y ^= (y << 7) & 0x9d2c5680;
    y ^= (y << 15) & 0xefc60000;
    y ^= (y >> 18);
    return y;
}

// [0x00505770] sub_00505770 (173 bytes)
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __fastcall fn_00505770(void* self, int edx_unused, const void* other) {
    __asm {
        push -1
        push 0x891c13
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi + 0x4], 0x93bfb4
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [edi + 0x8]
        push eax
        lea ecx, [esi + 0x8]
        mov byte ptr [esp + 0x18], 0x1
        mov dword ptr [esi], 0x94f534
        mov dword ptr [esi + 0x4], 0x94f4dc
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [edi + 0x24]
        mov dword ptr [esi + 0x24], ecx
        fld dword ptr [edi + 0x28]
        fstp dword ptr [esi + 0x28]
        mov ecx, dword ptr [esp + 0xc]
        fld dword ptr [edi + 0x2c]
        mov eax, esi
        fstp dword ptr [esi + 0x2c]
        fld dword ptr [edi + 0x30]
        fstp dword ptr [esi + 0x30]
        fld dword ptr [edi + 0x34]
        fstp dword ptr [esi + 0x34]
        fld dword ptr [edi + 0x38]
        fstp dword ptr [esi + 0x38]
        fld dword ptr [edi + 0x3c]
        fstp dword ptr [esi + 0x3c]
        fld dword ptr [edi + 0x40]
        fstp dword ptr [esi + 0x40]
        fld dword ptr [edi + 0x44]
        fstp dword ptr [esi + 0x44]
        fld dword ptr [edi + 0x48]
        fstp dword ptr [esi + 0x48]
        fld dword ptr [edi + 0x4c]
        fstp dword ptr [esi + 0x4c]
        mov edx, dword ptr [edi + 0x50]
        mov dword ptr [esi + 0x50], edx
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00508A50] sub_00508A50 (165 bytes)
extern "C" void ext_00661980();
extern "C" void ext_006955D0();
extern "C" void ext_00508680();
extern "C" int mem_0093BD38;
extern "C" int mem_0094FF78;

extern "C" __declspec(naked) void* __fastcall fn_00508A50(void* self, int edx_unused, const void* other) {
    __asm {
        push -1
        push 0x891e94
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_00661980
        mov edi, dword ptr [esp + 0x24]
        lea eax, [edi + 0x4]
        push eax
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x20], 0x0
        mov dword ptr [esi], 0x94f92c
        call dword ptr [mem_00924FE0]
        fld dword ptr [edi + 0x24]
        fstp dword ptr [esp + 0x24]
        mov byte ptr [esp + 0x1c], 0x1
        fld dword ptr [edi + 0x20]
        fstp qword ptr [esp + 0xc]
        call ext_006955D0
        mov ecx, eax
        call ext_00508680
        test eax, eax
        mov dword ptr [esp + 0x8], eax
        fild dword ptr [esp + 0x8]
        jge short L_00508AC5
        fadd qword ptr [mem_0093BD38]
    L_00508AC5:
        fmul qword ptr [mem_0094FF78]
        mov ecx, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x24]
        pop edi
        fld qword ptr [esp + 0x8]
        mov eax, esi
        fsub st(1), st
        fxch st(1)
        fabs
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esi + 0x20]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x18
        ret 0x4
    }
}

// [0x00505A80] sub_00505A80 (173 bytes)
// EH-framed range copy: copies [src, src_end) elements (0x28 bytes each, std::string at +0xC)
// into dst, returning the one-past-end destination; on exception destroys already-built elements.
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __cdecl fn_00505A80(void* src, void* src_end, void* dst) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x891c59
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], 0x0
        mov bl, 0x2
    loop_top:
        cmp edi, dword ptr [ebp + 0xc]
        je done
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        test esi, esi
        je skip_construct
        mov dword ptr [esi], 0x94f484
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], eax
        mov ecx, dword ptr [edi + 0x8]
        lea edx, [edi + 0xc]
        mov dword ptr [esi + 0x8], ecx
        push edx
        lea ecx, [esi + 0xc]
        mov byte ptr [ebp - 0x4], bl
        call dword ptr [mem_00924FE0]
    skip_construct:
        add esi, 0x28
        mov byte ptr [ebp - 0x4], 0x0
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x28
        jmp loop_top
    unwind_funclet:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je unwind_throw
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    unwind_loop:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 0x0
        mov ecx, esi
        call edx
        add esi, 0x28
        cmp esi, edi
        jne unwind_loop
    unwind_throw:
        push 0x0
        push 0x0
        call ext_006A6DD2
    done:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00500DA0] sub_00500DA0 (198 bytes)
extern "C" void ext_004FFE30();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_00500DA0(void* self, int edx_unused, void* out, void* val) {
    __asm {
        sub esp, 0x0c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        mov byte ptr [esp + 0x10], 0x0
        jbe L_00500DBC
        call dword ptr [mem_00925134]
    L_00500DBC:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_00500DCA
        call dword ptr [mem_00925134]
    L_00500DCA:
        mov eax, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x24]
        push 0x0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 0x2c], edi
        call ext_004FFE30
        mov edi, dword ptr [esi + 0x8]
        add esp, 0x14
        cmp dword ptr [esi + 0x4], edi
        mov ebx, eax
        jbe L_00500DF4
        call dword ptr [mem_00925134]
    L_00500DF4:
        test esi, esi
        je L_00500DFC
        cmp esi, esi
        je L_00500E02
    L_00500DFC:
        call dword ptr [mem_00925134]
    L_00500E02:
        cmp ebx, edi
        je L_00500E3D
        test esi, esi
        jne L_00500E10
        call dword ptr [mem_00925134]
    L_00500E10:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_00500E1B
        call dword ptr [mem_00925134]
    L_00500E1B:
        push ebx
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_00500E3D
        mov eax, dword ptr [esp + 0x20]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 0x0c
        ret 0x8
    L_00500E3D:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [edi], 0x0
        jbe L_00500E55
        call dword ptr [mem_00925134]
    L_00500E55:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 0x4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x0c
        ret 0x8
    }
}

// [0x00501140] sub_00501140 (102 bytes)
extern "C" void ext_00500DA0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00501140(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, esi
        call ext_00500DA0
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_0050116A
        call ebp
    L_0050116A:
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        je L_00501176
        cmp edi, esi
        je L_00501178
    L_00501176:
        call ebp
    L_00501178:
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebx
        je L_0050119A
        test edi, edi
        jne L_00501186
        call ebp
    L_00501186:
        cmp esi, dword ptr [edi + 8]
        jb L_0050118D
        call ebp
    L_0050118D:
        pop edi
        lea eax, [esi + 1Ch]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_0050119A:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x00505C00] sub_00505C00 (198 bytes)
extern "C" void ext_0051A670();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_00505C00(void* self, int edx_unused, void* out, void* val) {
    __asm {
        sub esp, 0x0c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        mov byte ptr [esp + 0x10], 0x0
        jbe L_00505C1C
        call dword ptr [mem_00925134]
    L_00505C1C:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_00505C2A
        call dword ptr [mem_00925134]
    L_00505C2A:
        mov eax, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x24]
        push 0x0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 0x2c], edi
        call ext_0051A670
        mov edi, dword ptr [esi + 0x8]
        add esp, 0x14
        cmp dword ptr [esi + 0x4], edi
        mov ebx, eax
        jbe L_00505C54
        call dword ptr [mem_00925134]
    L_00505C54:
        test esi, esi
        je L_00505C5C
        cmp esi, esi
        je L_00505C62
    L_00505C5C:
        call dword ptr [mem_00925134]
    L_00505C62:
        cmp ebx, edi
        je L_00505C9D
        test esi, esi
        jne L_00505C70
        call dword ptr [mem_00925134]
    L_00505C70:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_00505C7B
        call dword ptr [mem_00925134]
    L_00505C7B:
        push ebx
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_00505C9D
        mov eax, dword ptr [esp + 0x20]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 0x0c
        ret 0x8
    L_00505C9D:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [edi], 0x0
        jbe L_00505CB5
        call dword ptr [mem_00925134]
    L_00505CB5:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 0x4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x0c
        ret 0x8
    }
}

// [0x0050E3F0] sub_0050E3F0 (198 bytes)
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;
extern "C" int mem_009324A4;
extern "C" int mem_0093F8EC;
extern "C" int mem_00924FD4;

extern "C" __declspec(naked) void __fastcall fn_0050E3F0(void* self) {
    __asm {
        push -1
        push 0x89228c
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_00661980
        lea edi, [esi + 0x20]
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esi], 0x9508c4
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x3c]
        mov byte ptr [esp + 0x18], 0x1
        call dword ptr [mem_00924FE8]
        lea ebp, [esi + 0x58]
        mov ecx, ebp
        mov byte ptr [esp + 0x18], 0x2
        call dword ptr [mem_00924FE8]
        fld dword ptr [mem_009324A4]
        fstp dword ptr [esi + 0xc]
        push 0x9508ac
        fld1
        mov ecx, edi
        fstp dword ptr [esi + 0x10]
        mov byte ptr [esp + 0x1c], 0x3
        fldz
        mov dword ptr [esi + 0x74], 0x0
        fstp dword ptr [esi + 0x14]
        mov dword ptr [esi + 0x4], 0x64
        fld dword ptr [mem_0093F8EC]
        mov dword ptr [esi + 0x18], 0xa
        fstp dword ptr [esi + 0x1c]
        call dword ptr [mem_00924FD4]
        push 0x94f0c0
        mov ecx, ebp
        call dword ptr [mem_00924FD4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [esi + 0x8], 0x2
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0050E990] sub_0050E990 (94 bytes)
extern "C" void ext_004BE680();
extern "C" void ext_0050E3F0();
extern "C" void ext_0050E4E0();

extern "C" __declspec(naked) void __fastcall fn_0050E990(void* self) {
    __asm {
        push -1
        push 0x89234b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x78
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call ext_0050E3F0
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x88], 0x0
        call ext_0050E4E0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x84], 0xffffffff
        call ext_004BE680
        mov ecx, dword ptr [esp + 0x7c]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x84
        ret
    }
}

// [0x00505D50] sub_00505D50 (102 bytes)
extern "C" void ext_00505C00();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00505D50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, esi
        call ext_00505C00
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_00505D7A
        call ebp
    L_00505D7A:
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        je L_00505D86
        cmp edi, esi
        je L_00505D88
    L_00505D86:
        call ebp
    L_00505D88:
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebx
        je L_00505DAA
        test edi, edi
        jne L_00505D96
        call ebp
    L_00505D96:
        cmp esi, dword ptr [edi + 8]
        jb L_00505D9D
        call ebp
    L_00505D9D:
        pop edi
        lea eax, [esi + 1Ch]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_00505DAA:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x00509C90] sub_00509C90 (201 bytes)
extern "C" void ext_00508790();
extern "C" int mem_00891FE8;
extern "C" int mem_00924EF4;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_00509C90(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_00891FE8
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ebp, dword ptr [esp + 0x20]
        lea eax, [edi - 0x1]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        cmp dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x18], 0x0
        jge short after_loop
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
loop_top:
        lea eax, [esi + 8*esi]
        lea ebx, [ebp + 4*eax]
        lea ecx, [esp + 0x30]
        push ecx
        lea edx, [ebx + 0x4]
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je short after_loop
        lea eax, [edi + 8*edi]
        lea ecx, [ebx + 0x4]
        lea edi, [ebp + 4*eax]
        push ecx
        lea ecx, [edi + 0x4]
        call dword ptr [mem_00924FDC]
        fld dword ptr [ebx + 0x20]
        lea eax, [esi - 0x1]
        fstp dword ptr [edi + 0x20]
        cdq
        sub eax, edx
        mov edi, esi
        sar eax, 1
        cmp dword ptr [esp + 0x28], edi
        mov esi, eax
        jl short loop_top
after_loop:
        lea edx, [edi + 8*edi]
        lea esi, [ebp + 4*edx]
        lea eax, [esp + 0x30]
        push eax
        lea ecx, [esi + 0x4]
        call dword ptr [mem_00924FDC]
        fld dword ptr [esp + 0x4c]
        lea ecx, [esp + 0x2c]
        fstp dword ptr [esi + 0x20]
        mov dword ptr [esp + 0x18], -1
        call ext_00508790
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x005069B0] sub_005069B0 (204 bytes)
extern "C" void ext_0049ECB0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00891D38;

extern "C" __declspec(naked) void __fastcall fn_005069B0(void* self) {
    __asm {
        push -1
        push offset mem_00891D38
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        mov eax, dword ptr [esi + 0x34]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x14], ebx
        je short L_005069E4
        push eax
        call ext_006A5C5C
        add esp, 4
    L_005069E4:
        mov dword ptr [esi + 0x34], ebx
        mov dword ptr [esi + 0x38], ebx
        mov dword ptr [esi + 0x3c], ebx
        mov eax, dword ptr [esi + 0x24]
        cmp eax, ebx
        je short L_005069FD
        push eax
        call ext_006A5C5C
        add esp, 4
    L_005069FD:
        push edi
        lea edi, [esi + 0x10]
        mov dword ptr [esi + 0x24], ebx
        mov dword ptr [esi + 0x28], ebx
        mov dword ptr [esi + 0x2c], ebx
        mov eax, dword ptr [edi + 4]
        cmp eax, ebx
        je short L_00506A2D
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [edi + 8]
        push edx
        push edi
        push ecx
        push eax
        call ext_0049ECB0
        mov eax, dword ptr [edi + 4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_00506A2D:
        mov dword ptr [edi + 4], ebx
        mov dword ptr [edi + 8], ebx
        mov dword ptr [edi + 0xc], ebx
        mov eax, dword ptr [esi + 4]
        cmp eax, ebx
        mov dword ptr [esp + 0x18], -1
        pop edi
        je short L_00506A62
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esi + 8]
        push ecx
        push esi
        push edx
        push eax
        call ext_0049ECB0
        mov eax, dword ptr [esi + 4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_00506A62:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 0xc], ebx
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005010D0] sub_005010D0 (101 bytes)
extern "C" void ext_004BB230();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_005010D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, esi
        call ext_004BB230
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_005010FA
        call ebp
    L_005010FA:
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        je L_00501106
        cmp edi, esi
        je L_00501108
    L_00501106:
        call ebp
    L_00501108:
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebx
        je L_00501129
        test edi, edi
        jne L_00501116
        call ebp
    L_00501116:
        cmp esi, dword ptr [edi + 8]
        jb L_0050111D
        call ebp
    L_0050111D:
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_00501129:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x00508B00] sub_00508B00 (61 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0067EE80();
extern "C" int mem_00A9FA04;
extern "C" int mem_00A9FAC0;
extern "C" int mem_00A9F478;

extern "C" void __fastcall fn_00508B00(void* self, int edx_unused, void* a1) {
    typedef void* (__fastcall *FnA)(void* self, int edx_unused, void* a1);
    typedef void (__cdecl *FnB)(void* dst, void* src);
    typedef float (__cdecl *FnC)(void* a1, int a2, int a3);

    void* r = ((FnA)ext_0063EFE0)(a1, edx_unused, (void*)mem_00A9FA04);
    ((FnB)ext_004275E0)((char*)self + 4, r);
    *(float*)((char*)self + 0x20) = ((FnC)ext_0067EE80)(a1, mem_00A9F478, mem_00A9FAC0);
}

// [0x00501C50] sub_00501C50 (231 bytes)
extern "C" void ext_004BEB50();
extern "C" void ext_00507EB0();

extern "C" __declspec(naked) void __fastcall fn_00501C50(void* self) {
    __asm {
        push -1
        push 0x89151c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x8]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x944314
        mov dword ptr [edi], 0x9442bc
        mov ecx, dword ptr [esi + 0x140]
        test ecx, ecx
        mov dword ptr [esp + 0x18], 0x8
        je L_501c99
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
L_501c99:
        mov ecx, dword ptr [esi + 0x13c]
        test ecx, ecx
        mov byte ptr [esp + 0x18], 0x7
        je L_501cb0
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
L_501cb0:
        lea ecx, [esi + 0x12c]
        mov byte ptr [esp + 0x18], 0x6
        call ext_006246B0
        lea ecx, [esi + 0x110]
        mov byte ptr [esp + 0x18], 0x5
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0xe0]
        mov byte ptr [esp + 0x18], 0x4
        call ext_00507EB0
        lea ecx, [esi + 0xa4]
        mov byte ptr [esp + 0x18], 0x3
        call ext_004BEB50
        lea ecx, [esi + 0x2c]
        mov byte ptr [esp + 0x18], 0x2
        call ext_004BE680
        lea ecx, [esi + 0xc]
        mov byte ptr [esp + 0x18], 0x1
        call ext_0065F440
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0x0
        call ext_0065F440
        mov ecx, esi
        mov dword ptr [esp + 0x18], -1
        call ext_0065C660
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00501B40] sub_00501B40 (271 bytes)
extern "C" void ext_004FDC60();
extern "C" void ext_00507E40();
extern "C" void ext_0050D1E0();
extern "C" void ext_0050E3F0();
extern "C" void ext_005157F0();
extern "C" void ext_00661980();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_00501B40(void* self) {
    __asm {
        push -1
        _emit 0x68
        _emit 0x79
        _emit 0x14
        _emit 0x89
        _emit 0x00
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov [esp+0xc], esi
        mov byte ptr [esi+4], 1
        mov dword ptr [esi], 0x93c08c
        lea edi, [esi+8]
        xor ebp, ebp
        mov ecx, edi
        mov [esp+0x1c], ebp
        call ext_00661980
        lea ecx, [esi+0xc]
        mov byte ptr [esp+0x1c], 1
        mov dword ptr [esi], 0x944314
        mov dword ptr [edi], 0x9442bc
        call ext_004FDC60
        lea ecx, [esi+0x2c]
        mov byte ptr [esp+0x1c], 2
        call ext_0050E3F0
        lea ecx, [esi+0xa4]
        mov byte ptr [esp+0x1c], 3
        call ext_0050D1E0
        lea ecx, [esi+0xe0]
        mov byte ptr [esp+0x1c], 4
        call ext_00507E40
        lea ecx, [esi+0x110]
        mov byte ptr [esp+0x1c], 5
        call dword ptr [mem_00924FE8]
        mov [esi+0x130], ebp
        mov [esi+0x134], ebp
        mov [esi+0x138], ebp
        mov [esi+0x13c], ebp
        mov [esi+0x140], ebp
        push 0x14
        mov byte ptr [esp+0x20], 9
        call ext_006A5C62
        add esp, 4
        mov [esp+0x10], eax
        cmp eax, ebp
        mov byte ptr [esp+0x1c], 0xa
        je L1
        push esi
        mov ecx, eax
        call ext_005157F0
        mov edi, eax
        jmp L2
    L1:
        xor edi, edi
    L2:
        mov ecx, [esi+0x13c]
        cmp edi, ecx
        mov byte ptr [esp+0x1c], 9
        je L3
        cmp ecx, ebp
        je L3
        mov eax, [ecx]
        mov edx, [eax]
        push 1
        call edx
    L3:
        mov ecx, [esp+0x14]
        mov [esi+0x13c], edi
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00503A70] sub_00503A70 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEBB18;
extern "C" int mem_00AEBAFC;
extern "C" __declspec(naked) void __fastcall fn_00503A70(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x00891a3e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBB18], al
        jne short L_done_00503A70
        or dword ptr [mem_00AEBB18], eax
        push 0x00a4089c
        push offset mem_00AEBAFC
        mov dword ptr [esp + 0x10], 0
        call ext_0066AD10
        push 0x00919ce0
        call ext_006A6C87
        add esp, 0x0c
    L_done_00503A70:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBAFC
        mov dword ptr fs:[0x0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x00504C90] sub_00504C90 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEBB68;
extern "C" int mem_00AEBB4C;
extern "C" __declspec(naked) void __fastcall fn_00504C90(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x00891bce
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBB68], al
        jne short L_done_00504C90
        or dword ptr [mem_00AEBB68], eax
        push 0x00a40d20
        push offset mem_00AEBB4C
        mov dword ptr [esp + 0x10], 0
        call ext_0066AD10
        push 0x00919d00
        call ext_006A6C87
        add esp, 0x0c
    L_done_00504C90:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBB4C
        mov dword ptr fs:[0x0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x00508CD0] sub_00508CD0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEBC30;
extern "C" int mem_00AEBC14;
extern "C" __declspec(naked) void __fastcall fn_00508CD0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x00891eae
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBC30], al
        jne short L_done_00508CD0
        or dword ptr [mem_00AEBC30], eax
        push 0x00a40f04
        push offset mem_00AEBC14
        mov dword ptr [esp + 0x10], 0
        call ext_0066AD10
        push 0x00919d70
        call ext_006A6C87
        add esp, 0x0c
    L_done_00508CD0:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBC14
        mov dword ptr fs:[0x0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x00508DD0] sub_00508DD0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEBC50;
extern "C" int mem_00AEBC34;
extern "C" __declspec(naked) void __fastcall fn_00508DD0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x00891ece
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBC50], al
        jne short L_done_00508DD0
        or dword ptr [mem_00AEBC50], eax
        push 0x00a41290
        push offset mem_00AEBC34
        mov dword ptr [esp + 0x10], 0
        call ext_0066AD10
        push 0x00919d60
        call ext_006A6C87
        add esp, 0x0c
    L_done_00508DD0:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBC34
        mov dword ptr fs:[0x0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x00509F10] sub_00509F10 (33 bytes)
extern "C" void ext_00508CD0();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_00509F10(void* self) {
    __asm {
        push ecx
        push esi
        mov dword ptr [esp+4], 0
        call ext_00508CD0
        mov esi, [esp+0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x00509F40] sub_00509F40 (33 bytes)
extern "C" void ext_00508DD0();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_00509F40(void* self) {
    __asm {
        push ecx
        push esi
        mov dword ptr [esp+4], 0
        call ext_00508DD0
        mov esi, [esp+0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0050FC70] sub_0050FC70 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEBDA0;
extern "C" int mem_00AEBD84;
extern "C" __declspec(naked) void __fastcall fn_0050FC70(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x0089242e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBDA0], al
        jne short L_done_0050FC70
        or dword ptr [mem_00AEBDA0], eax
        push 0x00a41dd8
        push offset mem_00AEBD84
        mov dword ptr [esp + 0x10], 0
        call ext_0066AD10
        push 0x00919d90
        call ext_006A6C87
        add esp, 0x0c
    L_done_0050FC70:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBD84
        mov dword ptr fs:[0x0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x00503A30] sub_00503A30 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A40884;
extern "C" int mem_00B5CE94;

extern "C" __declspec(naked) void* __fastcall fn_00503A30(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A40884
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00925354]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp + 0x28]
        push esi
        call ext_0066AC90
        add esp, 0x20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x00504A30] sub_00504A30 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A4090C;
extern "C" int mem_00B5CE94;

extern "C" __declspec(naked) void* __fastcall fn_00504A30(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A4090C
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00925354]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp + 0x28]
        push esi
        call ext_0066AC90
        add esp, 0x20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0050E3B0] sub_0050E3B0 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A41B00;
extern "C" int mem_00B5CE94;

extern "C" __declspec(naked) void* __fastcall fn_0050E3B0(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A41B00
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00925354]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp + 0x28]
        push esi
        call ext_0066AC90
        add esp, 0x20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0050A800] sub_0050A800 (297 bytes)
extern "C" void ext_00508790();
extern "C" void ext_00509C90();
extern "C" int mem_00892010;
extern "C" int mem_00924EF4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_0050A800(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_00892010
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ebx, dword ptr [esp + 0x28]
        mov ebp, dword ptr [esp + 0x20]
       
        _emit 0x8d
        _emit 0x74
        _emit 0x3f
        _emit 0x02
        cmp esi, ebx
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0x24], edi
        jge after_first
       
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
loop_top:
       
        _emit 0x8d
        _emit 0x04
        _emit 0xf6
       
        _emit 0x8d
        _emit 0x44
        _emit 0x85
        _emit 0x00
       
        _emit 0x8d
        _emit 0x48
        _emit 0xe0
        push ecx
        add eax, 0x4
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je skip_dec
        sub esi, 0x1
skip_dec:
       
        _emit 0x8d
        _emit 0x14
        _emit 0xf6
       
        _emit 0x8d
        _emit 0x5c
        _emit 0x95
        _emit 0x00
       
        _emit 0x8d
        _emit 0x04
        _emit 0xff
       
        _emit 0x8d
        _emit 0x4b
        _emit 0x04
       
        _emit 0x8d
        _emit 0x7c
        _emit 0x85
        _emit 0x00
        push ecx
       
        _emit 0x8d
        _emit 0x4f
        _emit 0x04
        call dword ptr [mem_00924FDC]
        fld dword ptr [ebx + 0x20]
        fstp dword ptr [edi + 0x20]
        mov edi, esi
       
        _emit 0x8d
        _emit 0x74
        _emit 0x36
        _emit 0x02
        cmp esi, dword ptr [esp + 0x28]
        jl loop_top
        mov ebx, dword ptr [esp + 0x28]
        cmp esi, ebx
after_first:
        jne after_second
       
        _emit 0x8d
        _emit 0x14
        _emit 0xdb
       
        _emit 0x8d
        _emit 0x74
        _emit 0x95
        _emit 0xdc
       
        _emit 0x8d
        _emit 0x04
        _emit 0xff
       
        _emit 0x8d
        _emit 0x4e
        _emit 0x04
       
        _emit 0x8d
        _emit 0x7c
        _emit 0x85
        _emit 0x00
        push ecx
       
        _emit 0x8d
        _emit 0x4f
        _emit 0x04
        call dword ptr [mem_00924FDC]
        fld dword ptr [esi + 0x20]
        fstp dword ptr [edi + 0x20]
       
        _emit 0x8d
        _emit 0x7b
        _emit 0xff
after_second:
        sub esp, 0x24
        mov esi, esp
        mov dword ptr [esp + 0x4c], esp
        mov dword ptr [esi], 0x93bf24
        mov dword ptr [esp + 0x4c], esi
        mov dword ptr [esi], 0x93bfb4
        lea edx, [esp + 0x54]
        push edx
        lea ecx, [esi + 0x4]
        mov byte ptr [esp + 0x40], 0x1
        mov dword ptr [esi], 0x94f92c
        call dword ptr [mem_00924FE0]
        fld dword ptr [esp + 0x70]
        mov eax, dword ptr [esp + 0x48]
        fstp dword ptr [esi + 0x20]
        push eax
        push edi
        push ebp
        mov byte ptr [esp + 0x48], 0x0
        call ext_00509C90
        add esp, 0x30
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_00508790
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x0050E550] sub_0050E550 (298 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_0046C0A0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F988;
extern "C" int mem_00A9FA08;
extern "C" int mem_00A9F82C;
extern "C" int mem_00A9F7D0;
extern "C" int mem_00A9F964;
extern "C" int mem_00A9F620;
extern "C" int mem_00A9FA30;
extern "C" int mem_00A9F998;
extern "C" int mem_00A9F960;

extern "C" __declspec(naked) void __fastcall fn_0050E550(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F988]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 0x4]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9FA08]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 0xc]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        mov eax, dword ptr [mem_00A9F82C]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 0x10]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        mov eax, dword ptr [mem_00A9F7D0]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 0x18]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9F964]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esi + 0x20]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F620]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea eax, [esi + 0x58]
        push eax
        call ext_004275E0
        mov ecx, dword ptr [mem_00A9FA30]
        add esp, 0x8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        lea edx, [esp + 0xc]
        mov dword ptr [esp + 0xc], eax
        push edx
        lea eax, [esi + 0x1c]
        push eax
        call ext_0046C0A0
        mov ecx, dword ptr [mem_00A9F998]
        add esp, 0x8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea edx, [esi + 0x3c]
        push edx
        call ext_004275E0
        mov eax, dword ptr [mem_00A9F960]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        add esi, 0x8
        push esi
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0050A930] sub_0050A930 (146 bytes)
extern "C" void ext_00508790();
extern "C" void ext_00509EB0();
extern "C" void ext_0050A800();
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __cdecl fn_0050A930(void* a, void* b) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x891fe8
        push eax
        mov fs:[0], esp
        push esi
        push edi
        mov esi, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x20]
        lea eax, [esi + 0x4]
        push eax
        lea ecx, [edi + 0x4]
        mov dword ptr [esp + 0x14], 0
        call dword ptr [mem_00924FDC]
        fld dword ptr [esi + 0x20]
        sub esp, 0x24
        fstp dword ptr [edi + 0x20]
        lea edx, [esp + 0x48]
        mov ecx, esp
        mov dword ptr [esp + 0x3c], esp
        push edx
        call ext_00509EB0
        mov ecx, dword ptr [esp + 0x40]
        sub ecx, esi
        mov eax, 0x38e38e39
        imul ecx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        push eax
        push 0x0
        push esi
        call ext_0050A800
        add esp, 0x30
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x10], -1
        call ext_00508790
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        mov fs:[0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x0050B490] sub_0050B490 (189 bytes)
extern "C" void ext_0050A800();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_0050B490(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push 0xffffffff
        push 0x892058
        push eax
        mov dword ptr fs:[0x0], esp
        mov ecx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        sub ecx, ebx
        mov eax, 0x38e38e39
        imul ecx
        push ebp
        sar edx, 0x3
        mov ebp, edx
        shr ebp, 0x1f
        add ebp, edx
        mov eax, ebp
        cdq
        push esi
        sub eax, edx
        push edi
        mov edi, eax
        sar edi, 1
        test edi, edi
        jle loc_50B53A
        lea eax, [edi + edi*8]
        lea ebx, [ebx + eax*4 + 0x20]
        jmp loc_50B4E0

        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

    loc_50B4E0:
        sub esp, 0x24
        mov esi, esp
        mov dword ptr [esp + 0x48], esp
        mov dword ptr [esi], 0x93bf24
        sub edi, 1
        sub ebx, 0x24
        mov dword ptr [esp + 0x48], esi
        mov dword ptr [esi], 0x93bfb4
        lea ecx, [ebx - 0x1c]
        push ecx
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x40], 0
        mov dword ptr [esi], 0x94f92c
        call dword ptr [mem_00924FE0]
        fld dword ptr [ebx]
        mov edx, dword ptr [esp + 0x44]
        fstp dword ptr [esi + 0x20]
        push ebp
        push edi
        push edx
        mov dword ptr [esp + 0x48], 0xffffffff
        call ext_0050A800
        add esp, 0x30
        test edi, edi
        jg loc_50B4E0

    loc_50B53A:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x0050C3B0] sub_0050C3B0 (200 bytes)
extern "C" void ext_0050A930();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __cdecl fn_0050C3B0(void* first, void* last) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x892058
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x38e38e39
        imul ecx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        push edi
        jle exit_lbl
        mov ebp, 0x24
        add esi, -0x24
        sub ebp, ebx
        cmp eax, 0x1
        jle mid_lbl
loop_lbl:
        push 0
        sub esp, 0x24
        mov edi, esp
        mov dword ptr [esp + 0x4c], esp
        mov dword ptr [edi], 0x93bf24
        mov dword ptr [esp + 0x4c], edi
        mov dword ptr [edi], 0x93bfb4
        lea eax, [esi + 0x4]
        push eax
        lea ecx, [edi + 0x4]
        mov dword ptr [esp + 0x44], 0x0
        mov dword ptr [edi], 0x94f92c
        call dword ptr [mem_00924FE0]
        fld dword ptr [esi + 0x20]
        push esi
        fstp dword ptr [edi + 0x20]
        push esi
        push ebx
        mov dword ptr [esp + 0x4c], -1
        call ext_0050A930
        add esp, 0x34
mid_lbl:
        sub esi, 0x24
        lea ecx, [esi + ebp]
        mov eax, 0x38e38e39
        imul ecx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        jg loop_lbl
exit_lbl:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x005011B0] sub_005011B0 (110 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_004276B0();
extern "C" void ext_004FDCA0();
extern "C" void ext_00501140();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __stdcall fn_005011B0(void* a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b4989
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x60
        push esi
        mov esi, dword ptr [esp + 0x74]
        push esi
        call ext_00501140
        test eax, eax
        jne done_005011B0
        lea eax, [esp + 0x4]
        push esi
        push eax
        call ext_004276B0
        add esp, 0x8
        push eax
        mov dword ptr [esp + 0x70], 0x0
        call ext_004FDCA0
        push eax
        lea ecx, [esp + 0x28]
        call ext_0041FF30
        push 0x9d3748
        lea ecx, [esp + 0x24]
        push ecx
        call ext_006A6DD2
done_005011B0:
        mov ecx, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x6c
        ret 0x4
    }
}

// [0x00500E70] sub_00500E70 (326 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00500E70(void* self) {
    __asm {
        push -1
        push 0x8929f8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        push 0
        mov [esp+0xc], esi
        call ext_006657F0
        mov eax, [esp+0x20]
        mov edi, [esp+0x24]
        push 0
        push 0xa40528
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp+0x2c], 0
        mov dword ptr [esi], 0x94ee64
        mov [esi+0x10], eax
        call ext_006A6E9E
        mov ecx, [esp+0x44]
        mov [esi+0x14], eax
        mov eax, [esp+0x3c]
        mov [esi+0x18], eax
        add esp, 0x14
        cmp dword ptr [esi+0x14], 0
        mov [esi+0x1c], eax
        mov [esi+0x24], ecx
        jne short L1
        mov [esi+8], edi
    L1:
        cmp dword ptr [esp+0x2c], 0
        mov eax, [esi+0x10]
        mov ecx, [eax+4]
        je short L2
        cmp ecx, [eax+8]
        mov [esp+0x20], eax
        mov [esp+0x24], ecx
        jbe short L3
        call dword ptr [mem_00925134]
    L3:
        mov eax, [esi+0x10]
        push ebx
        push ebp
        mov ebp, [eax+8]
        cmp [eax+4], ebp
        jbe short L4
        call dword ptr [mem_00925134]
    L4:
        mov ebx, [esi+0x10]
        mov edi, [ebx+4]
        cmp edi, [ebx+8]
        jbe short L5
        call dword ptr [mem_00925134]
    L5:
        cmp edi, ebp
        mov [esp+0x14], edi
        je short L6
    L7:
        mov edx, [esp+0x34]
        cmp [edi], edx
        je short L6
        add edi, 4
        cmp edi, ebp
        jne short L7
    L6:
        test ebx, ebx
        je short L8
        cmp ebx, [esp+0x28]
        je short L9
    L8:
        call dword ptr [mem_00925134]
    L9:
        sub edi, [esp+0x2c]
        pop ebp
        sar edi, 2
        add edi, 1
        mov [esi+0x20], edi
        pop ebx
        jmp short L10
    L2:
        test ecx, ecx
        jne short L11
        xor eax, eax
        jmp short L12
    L11:
        mov eax, [eax+8]
        sub eax, ecx
        sar eax, 2
    L12:
        mov [esi+0x20], eax
    L10:
        mov ecx, [esi+0x10]
        mov edx, [ecx+4]
        test edx, edx
        jne short L13
        xor eax, eax
        jmp short L14
    L13:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    L14:
        cmp [esi+0x20], eax
        jbe short L15
        test edx, edx
        jne short L16
        xor eax, eax
        jmp short L17
    L16:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    L17:
        mov [esi+0x20], eax
    L15:
        mov ecx, [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x14
        ret 0x14
    }
}

// [0x0050B9B0] sub_0050B9B0 (326 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050B9B0(void* self) {
    __asm {
        push -1
        push 0x8929f8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        push 0
        mov [esp+0xc], esi
        call ext_006657F0
        mov eax, [esp+0x20]
        mov edi, [esp+0x24]
        push 0
        push 0xa41420
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp+0x2c], 0
        mov dword ptr [esi], 0x9502e0
        mov [esi+0x10], eax
        call ext_006A6E9E
        mov ecx, [esp+0x44]
        mov [esi+0x14], eax
        mov eax, [esp+0x3c]
        mov [esi+0x18], eax
        add esp, 0x14
        cmp dword ptr [esi+0x14], 0
        mov [esi+0x1c], eax
        mov [esi+0x24], ecx
        jne short L1
        mov [esi+8], edi
    L1:
        cmp dword ptr [esp+0x2c], 0
        mov eax, [esi+0x10]
        mov ecx, [eax+4]
        je short L2
        cmp ecx, [eax+8]
        mov [esp+0x20], eax
        mov [esp+0x24], ecx
        jbe short L3
        call dword ptr [mem_00925134]
    L3:
        mov eax, [esi+0x10]
        push ebx
        push ebp
        mov ebp, [eax+8]
        cmp [eax+4], ebp
        jbe short L4
        call dword ptr [mem_00925134]
    L4:
        mov ebx, [esi+0x10]
        mov edi, [ebx+4]
        cmp edi, [ebx+8]
        jbe short L5
        call dword ptr [mem_00925134]
    L5:
        cmp edi, ebp
        mov [esp+0x14], edi
        je short L6
    L7:
        mov edx, [esp+0x34]
        cmp [edi], edx
        je short L6
        add edi, 4
        cmp edi, ebp
        jne short L7
    L6:
        test ebx, ebx
        je short L8
        cmp ebx, [esp+0x28]
        je short L9
    L8:
        call dword ptr [mem_00925134]
    L9:
        sub edi, [esp+0x2c]
        pop ebp
        sar edi, 2
        add edi, 1
        mov [esi+0x20], edi
        pop ebx
        jmp short L10
    L2:
        test ecx, ecx
        jne short L11
        xor eax, eax
        jmp short L12
    L11:
        mov eax, [eax+8]
        sub eax, ecx
        sar eax, 2
    L12:
        mov [esi+0x20], eax
    L10:
        mov ecx, [esi+0x10]
        mov edx, [ecx+4]
        test edx, edx
        jne short L13
        xor eax, eax
        jmp short L14
    L13:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    L14:
        cmp [esi+0x20], eax
        jbe short L15
        test edx, edx
        jne short L16
        xor eax, eax
        jmp short L17
    L16:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    L17:
        mov [esi+0x20], eax
    L15:
        mov ecx, [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x14
        ret 0x14
    }
}

// [0x0050BBD0] sub_0050BBD0 (326 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050BBD0(void* self) {
    __asm {
        push -1
        push 0x8929f8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        push 0
        mov [esp+0xc], esi
        call ext_006657F0
        mov eax, [esp+0x20]
        mov edi, [esp+0x24]
        push 0
        push 0xa416d0
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp+0x2c], 0
        mov dword ptr [esi], 0x9502f8
        mov [esi+0x10], eax
        call ext_006A6E9E
        mov ecx, [esp+0x44]
        mov [esi+0x14], eax
        mov eax, [esp+0x3c]
        mov [esi+0x18], eax
        add esp, 0x14
        cmp dword ptr [esi+0x14], 0
        mov [esi+0x1c], eax
        mov [esi+0x24], ecx
        jne short L1
        mov [esi+8], edi
    L1:
        cmp dword ptr [esp+0x2c], 0
        mov eax, [esi+0x10]
        mov ecx, [eax+4]
        je short L2
        cmp ecx, [eax+8]
        mov [esp+0x20], eax
        mov [esp+0x24], ecx
        jbe short L3
        call dword ptr [mem_00925134]
    L3:
        mov eax, [esi+0x10]
        push ebx
        push ebp
        mov ebp, [eax+8]
        cmp [eax+4], ebp
        jbe short L4
        call dword ptr [mem_00925134]
    L4:
        mov ebx, [esi+0x10]
        mov edi, [ebx+4]
        cmp edi, [ebx+8]
        jbe short L5
        call dword ptr [mem_00925134]
    L5:
        cmp edi, ebp
        mov [esp+0x14], edi
        je short L6
    L7:
        mov edx, [esp+0x34]
        cmp [edi], edx
        je short L6
        add edi, 4
        cmp edi, ebp
        jne short L7
    L6:
        test ebx, ebx
        je short L8
        cmp ebx, [esp+0x28]
        je short L9
    L8:
        call dword ptr [mem_00925134]
    L9:
        sub edi, [esp+0x2c]
        pop ebp
        sar edi, 2
        add edi, 1
        mov [esi+0x20], edi
        pop ebx
        jmp short L10
    L2:
        test ecx, ecx
        jne short L11
        xor eax, eax
        jmp short L12
    L11:
        mov eax, [eax+8]
        sub eax, ecx
        sar eax, 2
    L12:
        mov [esi+0x20], eax
    L10:
        mov ecx, [esi+0x10]
        mov edx, [ecx+4]
        test edx, edx
        jne short L13
        xor eax, eax
        jmp short L14
    L13:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    L14:
        cmp [esi+0x20], eax
        jbe short L15
        test edx, edx
        jne short L16
        xor eax, eax
        jmp short L17
    L16:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    L17:
        mov [esi+0x20], eax
    L15:
        mov ecx, [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x14
        ret 0x14
    }
}

// [0x0050FB20] sub_0050FB20 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_00518080();
extern "C" void ext_0050E3B0();
extern "C" void ext_00518030();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_0050FB20(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa41da8
        push 0xa41b00
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x48
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_00518080
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_0050E3B0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x48
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_00518030
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x0050B550] sub_0050B550 (332 bytes)
extern "C" int mem_00924FE0; extern "C" int mem_00924EF4; extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __cdecl fn_0050B550() {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x892080
        push eax
        mov eax, dword ptr [esp+0x14]
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push ebx
        mov ebx, dword ptr [esp+0x40]
        cmp ebx, eax
        je L_ret
        push esi
        lea esi, [ebx+0x24]
        cmp esi, eax
        mov dword ptr [esp+8], esi
        je L_pop1
        push ebp
        push edi
        lea ebp, [esi-0x20]
        jmp L_top
    L_reload:
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x4c
    L_top:
        mov edi, esi
        lea eax, [ebp+0x24]
        push eax
        lea ecx, [esp+0x20]
        mov dword ptr [esp+0x48], 0
        mov dword ptr [esp+0x1c], 0x94f92c
        call dword ptr [mem_00924FE0]
        fld dword ptr [ebp+0x40]
        fstp dword ptr [esp+0x38]
        add ebx, 4
        lea ecx, [esp+0x1c]
        push ebx
        push ecx
        mov dword ptr [esp+0x4c], 1
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L_else
        mov eax, dword ptr [esp+0x4c]
        mov ecx, dword ptr [esp+0x4c]
        mov edi, dword ptr [esp+0x4c]
        mov byte ptr [esp+0x14], 0
        mov edx, dword ptr [esp+0x14]
        push edx
        push eax
        push ecx
        lea edx, [ebp+0x44]
        push edx
        push esi
        push edi
        call ext_0050A720
        add esp, 0x18
        mov ecx, ebx
        jmp L_fin
    L_else:
        lea ecx, [esp+0x1c]
        push ebp
        push ecx
        lea ebx, [ebp-4]
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L_done
        mov esi, ebp
        jmp L_loop
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_loop:
        push esi
        lea ecx, [edi+4]
        call dword ptr [mem_00924FDC]
        fld dword ptr [esi+0x1c]
        sub esi, 0x24
        fstp dword ptr [edi+0x20]
        lea edx, [esp+0x1c]
        push esi
        mov edi, ebx
        push edx
        sub ebx, 0x24
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne L_loop
        mov esi, dword ptr [esp+0x10]
    L_done:
        lea ecx, [edi+4]
    L_fin:
        lea eax, [esp+0x1c]
        push eax
        call dword ptr [mem_00924FDC]
        fld dword ptr [esp+0x38]
        lea ecx, [esp+0x18]
        fstp dword ptr [edi+0x20]
        mov dword ptr [esp+0x44], 0xffffffff
        call ext_00508790
        add esi, 0x24
        add ebp, 0x24
        cmp esi, dword ptr [esp+0x50]
        mov dword ptr [esp+0x10], esi
        jne L_reload
        pop edi
        pop ebp
    L_pop1:
        pop esi
    L_ret:
        mov ecx, dword ptr [esp+0x30]
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x38
        ret
    }
}

// [0x00505980] sub_00505980 (134 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_0066A720();
extern "C" void ext_0066A760();
extern "C" void ext_008B3308();
extern "C" int mem_00987B44;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E90;
extern "C" int mem_00924E98;

extern "C" __declspec(naked) void __fastcall fn_00505980(void* self) {
    __asm {
        push -1
        push offset ext_008B3308
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        mov eax, dword ptr [mem_00987B44]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        call ext_0066A720
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x60]
        lea eax, [esp + 0x4]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0
        call edx
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        push ecx
        call ext_00435D00
        mov edx, dword ptr [mem_00924E90]
        add esp, 0x8
        push edx
        mov ecx, eax
        call dword ptr [mem_00924E98]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_0066A760
        mov ecx, dword ptr [esp + 0x14]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 4
    }
}

// [0x00500050] sub_00500050 (200 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_004FDD00();
extern "C" int mem_00924E4C;
extern "C" int mem_00924E94;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;
extern "C" __declspec(naked) void __fastcall fn_00500050(void* self) {
    __asm {
        push -1
        push 0x88533c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x84
        push esi
        push 1
        push 2
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924E4C]
        mov ecx, dword ptr [esp + 0x9c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push 0x92f140
        mov dword ptr [esp + 0x94], 1
        call edx
        push eax
        push 0x92f144
        call ext_004FDD00
        mov esi, dword ptr [mem_00924E94]
        push eax
        lea eax, [esp + 0x18]
        push eax
        call esi
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call esi
        add esp, 8
        push eax
        call ext_00435D00
        mov esi, dword ptr [esp + 0xa0]
        add esp, 8
        push esi
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924E54]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 1
        mov byte ptr [esp + 0x90], 0
        call dword ptr [mem_00924E58]
        mov ecx, dword ptr [esp + 0x88]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x90
        ret
    }
}

// [0x0050C190] sub_0050C190 (538 bytes)
extern "C" void ext_0050A780();
extern "C" void ext_0050BF30();
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_0050C190(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ecx, edi
        sub ecx, esi
        mov eax, 0x38e38e39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        lea eax, [eax + 8*eax]
        add edi, -0x24
        lea ebx, [esi + 4*eax]
        push edi
        push ebx
        push esi
        call ext_0050BF30
        add esp, 0xc
        cmp esi, ebx
        lea ebp, [ebx + 0x24]
        mov dword ptr [esp + 0x14], ebp
        jae loc_50c20d
        lea edi, [ebx + 4]
        jmp loc_50c1e0

        _emit 0x8d
        _emit 0x49
        _emit 0x00

loc_50c1e0:
        lea esi, [edi - 0x24]
        push edi
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne loc_50c20d
        push esi
        push edi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne loc_50c20d
        sub ebx, 0x24
        sub edi, 0x24
        cmp dword ptr [esp + 0x20], ebx
        jb loc_50c1e0

loc_50c20d:
        cmp ebp, dword ptr [esp + 0x24]
        jae loc_50c24e
        lea esi, [ebx + 4]
        lea edi, [ebp + 4]

        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

loc_50c220:
        push esi
        push edi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne loc_50c24a
        push edi
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne loc_50c24a
        add ebp, 0x24
        add edi, 0x24
        cmp ebp, dword ptr [esp + 0x24]
        jb loc_50c220

loc_50c24a:
        mov dword ptr [esp + 0x14], ebp

loc_50c24e:
        mov esi, dword ptr [esp + 0x24]
        mov eax, ebx
        mov edi, ebp
        mov dword ptr [esp + 0x10], eax

        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

loc_50c260:
        cmp edi, esi
        jae loc_50c2ae
        lea esi, [edi + 4]

loc_50c267:
        lea eax, [ebx + 4]
        push esi
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne loc_50c29a
        lea eax, [ebx + 4]
        push eax
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne loc_50c2a6
        mov eax, ebp
        push edi
        push eax
        add ebp, 0x24
        call ext_0050A780
        add esp, 8

loc_50c29a:
        add edi, 0x24
        add esi, 0x24
        cmp edi, dword ptr [esp + 0x24]
        jb loc_50c267

loc_50c2a6:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x14], ebp

loc_50c2ae:
        cmp eax, dword ptr [esp + 0x20]
        jbe loc_50c311
        lea ebp, [ebx + 4]
        lea esi, [eax - 0x20]

        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

loc_50c2c0:
        push ebp
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne loc_50c2f1
        push esi
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne loc_50c305
        lea ecx, [esi - 4]
        push ecx
        sub ebx, 0x24
        push ebx
        sub ebp, 0x24
        call ext_0050A780
        add esp, 8

loc_50c2f1:
        mov eax, dword ptr [esp + 0x10]
        sub eax, 0x24
        sub esi, 0x24
        cmp dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x10], eax
        jb loc_50c2c0

loc_50c305:
        mov eax, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x14]
        cmp eax, dword ptr [esp + 0x20]

loc_50c311:
        mov esi, dword ptr [esp + 0x24]
        jne loc_50c34d
        cmp edi, esi
        je loc_50c399
        cmp ebp, edi
        je loc_50c329
        push ebp
        push ebx
        call ext_0050A780
        add esp, 8

loc_50c329:
        mov eax, edi
        mov ecx, ebx
        push eax
        add ebp, 0x24
        push ecx
        mov dword ptr [esp + 0x1c], ebp
        add ebx, 0x24
        add edi, 0x24
        call ext_0050A780
        mov eax, dword ptr [esp + 0x18]
        add esp, 8
        jmp loc_50c260

loc_50c34d:
        sub eax, 0x24
        cmp edi, esi
        mov dword ptr [esp + 0x10], eax
        jne loc_50c383
        sub ebx, 0x24
        cmp eax, ebx
        je loc_50c369
        push ebx
        push eax
        call ext_0050A780
        add esp, 8

loc_50c369:
        sub ebp, 0x24
        push ebp
        push ebx
        mov dword ptr [esp + 0x1c], ebp
        call ext_0050A780
        mov eax, dword ptr [esp + 0x18]
        add esp, 8
        jmp loc_50c260

loc_50c383:
        push eax
        push edi
        call ext_0050A780
        mov eax, dword ptr [esp + 0x18]
        add esp, 8
        add edi, 0x24
        jmp loc_50c260

loc_50c399:
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        mov dword ptr [eax + 4], ebp
        pop ebp
        mov dword ptr [eax], ebx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0050AA50] sub_0050AA50 (32 bytes)
extern "C" int mem_00A9F178;
extern "C" void __cdecl ext_0050A060(void* a, void* b, int c, int d);

extern "C" void* __fastcall fn_0050AA50(char* self, int edx_unused, void* arg) {
    ext_0050A060(self + 4, arg, 0, mem_00A9F178);
    return arg;
}

// [0x0050A9D0] sub_0050A9D0 (34 bytes)
extern "C" void __cdecl ext_00509F70(void* a, void* b, int c, int d, int e);

extern "C" void* __fastcall fn_0050A9D0(char* self, int edx_unused, void* arg) {
    ext_00509F70(self + 4, arg, 0, mem_00A9F178, 0);
    return arg;
}

// [0x00504900] sub_00504900 (37 bytes)
extern "C" void ext_005047A0();
extern "C" void ext_00504800();
extern "C" int mem_00924FE4;
extern "C" int mem_0094F0C0;
extern "C" __declspec(naked) void __fastcall fn_00504900(void* self) {
    __asm {
        push ecx
        call ext_005047A0
        push 0x0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push offset mem_0094F0C0
        call dword ptr [mem_00924FE4]
        call ext_00504800
        add esp, 0x24
        ret
    }
}

// [0x00506D10] sub_00506D10 (41 bytes)
extern "C" void ext_005063B0();

extern "C" __declspec(naked) void __fastcall fn_00506D10(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        push edx
        call ext_005063B0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00506900] sub_00506900 (43 bytes)
extern "C" void ext_00506600();

extern "C" __declspec(naked) void __fastcall fn_00506900(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edx
        call ext_00506600
        add esp, 0x1c
        ret
    }
}

// [0x00503970] sub_00503970 (46 bytes)
extern "C" void ext_005038F0();
extern "C" void ext_00507E00();
extern "C" void ext_0050E2F0();
extern "C" void ext_0050F900();
extern "C" void ext_00515710();
extern "C" void ext_00516D20();
extern "C" void __cdecl fn_00503970(int a1) {
    ((void (__cdecl*)(int))ext_005038F0)(a1);
    ((void (__cdecl*)(int))ext_0050F900)(a1);
    ((void (__cdecl*)(int))ext_0050E2F0)(a1);
    ((void (__cdecl*)(int))ext_00515710)(a1);
    ((void (__cdecl*)(int))ext_00507E00)(a1);
    ((void (__cdecl*)(int))ext_00516D20)(a1);
}

// [0x00508280] sub_00508280 (47 bytes)
extern "C" void ext_00508210(void*, const void*);
extern "C" void* __fastcall fn_00508280(void* self, int edx_unused, const void* other) {
    if (self != other) {
        ext_00508210((char*)self + 0x10, (const char*)other + 0x10);
        *(double*)((char*)self + 0x20) = *(const double*)((const char*)other + 0x20);
        *((char*)self + 0x28) = *((const char*)other + 0x28);
    }
    return self;
}

// [0x005082B0] sub_005082B0 (94 bytes)
extern "C" void ext_00508280();
extern "C" void ext_00517AD0();

extern "C" __declspec(naked) void __fastcall fn_005082B0(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x891e28
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00517AD0
        mov eax, dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x94f860
        mov dword ptr [esi + 0x8], 0x94f854
        mov dword ptr [esi + 0xc], 0x94f7fc
        call ext_00508280
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00508310] sub_00508310 (93 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_005082B0();
extern "C" __declspec(naked) void __fastcall fn_00508310(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 0x30
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je L_null
        push esi
        mov ecx, eax
        call ext_005082B0
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

// [0x0050AFA0] sub_0050AFA0 (184 bytes)
extern "C" void ext_0050AA50();
extern "C" void ext_006404E0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __cdecl fn_0050AFA0() {
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        je      loc_50AFB6
        mov     ecx, dword ptr [edi + 0x8]
        sub     ecx, eax
        sar     ecx, 0x2
        jne     loc_50AFBD
    loc_50AFB6:
        mov     eax, 0xb53b30
        pop     edi
        ret
    loc_50AFBD:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        je      loc_50AFD6
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_006404E0
        mov     ebp, eax
        jmp     loc_50AFDA
    loc_50AFD6:
        mov     ebp, dword ptr [esp + 0x18]
    loc_50AFDA:
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        jbe     loc_50AFE8
        call    dword ptr [mem_00925134]
    loc_50AFE8:
        mov     eax, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], eax
        mov     dword ptr [esp + 0x14], eax
        jbe     loc_50AFFA
        call    dword ptr [mem_00925134]
    loc_50AFFA:
        mov     ebx, dword ptr [esp + 0x20]
        mov     edi, edi
    loc_50B000:
        cmp     esi, dword ptr [esp + 0x14]
        je      loc_50B051
        test    ebx, ebx
        je      loc_50B020
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_50B015
        call    dword ptr [mem_00925134]
    loc_50B015:
        push    ebx
        mov     ecx, ebp
        call    ext_006404E0
        push    eax
        jmp     loc_50B02C
    loc_50B020:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_50B02B
        call    dword ptr [mem_00925134]
    loc_50B02B:
        push    ebp
    loc_50B02C:
        mov     ecx, dword ptr [esi]
        call    ext_0050AA50
        mov     ecx, dword ptr [esp + 0x24]
        test    ecx, ecx
        je      loc_50B041
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx]
        call    eax
    loc_50B041:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_50B04C
        call    dword ptr [mem_00925134]
    loc_50B04C:
        add     esi, 0x4
        jmp     loc_50B000
    loc_50B051:
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     edi
        ret
    }
}

// [0x005006E0] sub_005006E0 (218 bytes)
extern "C" void ext_006404E0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005006E0(void* self) {
    __asm {
        push ecx
        push ebp
        mov ebp, dword ptr [esp + 0Ch]
        mov eax, dword ptr [ebp + 4]
        test eax, eax
        je L_F7
        mov ecx, dword ptr [ebp + 8]
        sub ecx, eax
        sar ecx, 2
        jne L_FF
L_F7:
        mov eax, 0B53B30h
        pop ebp
        pop ecx
        ret
L_FF:
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        je L_117
        mov ecx, dword ptr [esp + 10h]
        push eax
        call ext_006404E0
        mov dword ptr [esp + 0Ch], eax
        jmp L_11F
L_117:
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esp + 0Ch], edx
L_11F:
        push ebx
        mov ebx, dword ptr [ebp + 4]
        cmp ebx, dword ptr [ebp + 8]
        push esi
        push edi
        mov edi, dword ptr [mem_00925134]
        jbe L_132
        call edi
L_132:
        mov esi, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], esi
        mov dword ptr [esp + 10h], esi
        jbe L_140
        call edi
L_140:
        cmp ebx, esi
        je L_1B0
        cmp dword ptr [esp + 24h], 0
        je L_17E
        cmp ebx, dword ptr [ebp + 8]
        jb L_152
        call edi
L_152:
        mov eax, dword ptr [ebx]
        mov esi, dword ptr [eax + 8]
        mov ecx, dword ptr [esp + 18h]
        lea edi, [eax + 8]
        mov eax, dword ptr [esp + 24h]
        push eax
        add esi, 0Ch
        call ext_006404E0
        mov edx, dword ptr [esi]
        push eax
        mov ecx, edi
        call edx
        mov esi, dword ptr [esp + 10h]
        mov edi, dword ptr [mem_00925134]
        jmp L_196
L_17E:
        cmp ebx, dword ptr [ebp + 8]
        jb L_185
        call edi
L_185:
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [esp + 18h]
        lea ecx, [eax + 8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0Ch]
        push edx
        call eax
L_196:
        mov ecx, dword ptr [esp + 28h]
        test ecx, ecx
        je L_1A4
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
L_1A4:
        cmp ebx, dword ptr [ebp + 8]
        jb L_1AB
        call edi
L_1AB:
        add ebx, 4
        jmp L_140
L_1B0:
        mov eax, dword ptr [esp + 18h]
        pop edi
        pop esi
        pop ebx
        pop ebp
        pop ecx
        ret
    }
}

// [0x0050E2B0] sub_0050E2B0 (51 bytes)
extern "C" void ext_0050DE70();
extern "C" void ext_0050DEF0();
extern "C" void ext_0050E140();
extern "C" int mem_00A9FA04;
extern "C" int mem_00A9FAC0;
extern "C" __declspec(naked) void __cdecl fn_0050E2B0(void* a1) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0x0
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_0050E140
        mov     ecx, dword ptr [mem_00A9FA04]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_0050DE70
        mov     edx, dword ptr [mem_00A9FAC0]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_0050DEF0
        pop     ecx
        ret
    }
}

// [0x00505420] sub_00505420 (186 bytes)
extern "C" void ext_005114D0();
extern "C" void ext_006404E0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00505420(void* self) {
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        je      loc_505444
        mov     ecx, dword ptr [edi + 0x8]
        sub     ecx, eax
        mov     eax, 0x4ec4ec4f
        imul    ecx
        sar     edx, 0x5
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
        jne     loc_50544B
    loc_505444:
        mov     eax, 0xb53b30
        pop     edi
        ret
    loc_50544B:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        je      loc_505464
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_006404E0
        mov     ebp, eax
        jmp     loc_505468
    loc_505464:
        mov     ebp, dword ptr [esp + 0x18]
    loc_505468:
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        jbe     loc_505476
        call    dword ptr [mem_00925134]
    loc_505476:
        mov     eax, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], eax
        mov     dword ptr [esp + 0x14], eax
        jbe     loc_505488
        call    dword ptr [mem_00925134]
    loc_505488:
        mov     ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    loc_505490:
        cmp     esi, dword ptr [esp + 0x14]
        je      loc_5054D3
        test    ebx, ebx
        je      loc_5054B0
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_5054A5
        call    dword ptr [mem_00925134]
    loc_5054A5:
        push    ebx
        mov     ecx, ebp
        call    ext_006404E0
        push    eax
        jmp     loc_5054BC
    loc_5054B0:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_5054BB
        call    dword ptr [mem_00925134]
    loc_5054BB:
        push    ebp
    loc_5054BC:
        mov     ecx, esi
        call    ext_005114D0
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_5054CE
        call    dword ptr [mem_00925134]
    loc_5054CE:
        add     esi, 0x68
        jmp     loc_505490
    loc_5054D3:
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     edi
        ret
    }
}

// [0x00506810] sub_00506810 (55 bytes)
extern "C" void ext_005064D0();

extern "C" __declspec(naked) int __fastcall fn_00506810(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_005064D0
        mov eax, esi
        imul eax, eax, 0x68
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00507E00] sub_00507E00 (58 bytes)
extern "C" void ext_00506850();
extern "C" void ext_00507D70();
extern "C" void ext_00524510();
extern "C" void ext_00527200();
extern "C" void ext_00527250();

extern "C" void __cdecl fn_00507E00(void* self) {
    void* local;
    ((void (__thiscall*)(void*, void*, int))ext_00507D70)(self, &local, 0);
    ((void (__thiscall*)(void*, void*))ext_00506850)(&local, (void*)0x0094F7C4);
    ((void (__cdecl*)(void*))ext_00527200)(self);
    ((void (__cdecl*)(void*))ext_00527250)(self);
    ((void (__cdecl*)(void*))ext_00524510)(self);
}

// [0x00506CD0] sub_00506CD0 (59 bytes)
extern "C" void ext_005067A0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00506CD0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m506cd0_ok1
        call ebp
    m506cd0_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m506cd0_ok2
        call ebp
    m506cd0_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_005067A0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0050E260] sub_0050E260 (66 bytes)
extern "C" void ext_0050DCF0();
extern "C" void ext_0050DD70();
extern "C" void ext_0050DDF0();
extern "C" void ext_0050E0B0();
extern "C" int mem_00A9FA04;
extern "C" int mem_00A9F790;
extern "C" int mem_00A9FA90;
extern "C" __declspec(naked) void __cdecl fn_0050E260(void* a1) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0x0
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_0050E0B0
        mov     ecx, dword ptr [mem_00A9FA04]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_0050DCF0
        mov     edx, dword ptr [mem_00A9F790]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_0050DD70
        mov     eax, dword ptr [mem_00A9FA90]
        push    eax
        lea     ecx, [esp + 0x4]
        call    ext_0050DDF0
        pop     ecx
        ret
    }
}

// [0x00507CC0] sub_00507CC0 (67 bytes)
extern "C" void ext_00506B70();
extern "C" void ext_00507750();
extern "C" void ext_00507A50();
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_00507CC0(void* self) {
    __asm {
        push ecx
        call ext_00506B70
        push 0x0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push 0x928b5d
        call dword ptr [mem_00924FE4]
        call ext_00507750
        add esp, 0x20
        push 0x0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push 0x928b5d
        call dword ptr [mem_00924FE4]
        call ext_00507A50
        add esp, 0x24
        ret
    }
}

// [0x0050F0B0] sub_0050F0B0 (70 bytes)
extern "C" void ext_0050E9F0();
extern "C" void ext_0050EEA0();
extern "C" void ext_0050F9D0();
extern "C" __declspec(naked) void __fastcall fn_0050F0B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x30], 0
        jne L_skip
        push 0
        call ext_0050EEA0
    L_skip:
        mov ecx, dword ptr [esi + 0x8]
        fld1
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8]
        sub esp, 8
        fstp qword ptr [esp]
        call edx
        add dword ptr [esi + 0x14], 1
        mov ecx, esi
        call ext_0050E9F0
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 0x8]
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        fld dword ptr [eax + 0xc]
        fstp qword ptr [esp]
        call ext_0050F9D0
        pop esi
        ret
    }
}

// [0x00505F00] sub_00505F00 (293 bytes)
extern "C" void ext_00490640();
extern "C" void ext_00490690();
extern "C" void ext_00490920();
extern "C" void ext_00599C10();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void* __fastcall fn_00505F00(void* self, int edx_unused, const void* rhs) {
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        cmp     esi, edi
        je      L_ret_self
        push    ebx
        mov     ebx, dword ptr [edi + 0x4]
        test    ebx, ebx
        push    ebp
        je      L_clear
        mov     ebp, dword ptr [edi + 0x8]
        mov     edx, ebp
        sub     edx, ebx
        sar     edx, 0x3
        jne     L_nonempty
    L_clear:
        call    ext_00490920
        pop     ebp
        pop     ebx
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    L_nonempty:
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jne     L_has_first1
        xor     ecx, ecx
        jmp     L_cmp_size
    L_has_first1:
        mov     ecx, dword ptr [esi + 0x8]
        sub     ecx, eax
        sar     ecx, 0x3
    L_cmp_size:
        cmp     edx, ecx
        ja      L_check_cap
        push    eax
        push    ebp
        push    ebx
        call    ext_00490690
        mov     eax, dword ptr [edi + 0x4]
        add     esp, 0xc
        test    eax, eax
        jne     L_has_first2
        mov     eax, dword ptr [esi + 0x4]
        pop     ebp
        xor     edi, edi
        lea     ecx, [eax + 8*edi]
        pop     ebx
        pop     edi
        mov     dword ptr [esi + 0x8], ecx
        mov     eax, esi
        pop     esi
        ret     0x4
    L_has_first2:
        mov     edi, dword ptr [edi + 0x8]
        sub     edi, eax
        mov     eax, dword ptr [esi + 0x4]
        pop     ebp
        sar     edi, 0x3
        lea     ecx, [eax + 8*edi]
        pop     ebx
        pop     edi
        mov     dword ptr [esi + 0x8], ecx
        mov     eax, esi
        pop     esi
        ret     0x4
    L_check_cap:
        test    eax, eax
        jne     L_has_cap
        xor     ecx, ecx
        jmp     L_cmp_cap
    L_has_cap:
        mov     ecx, dword ptr [esi + 0xc]
        sub     ecx, eax
        sar     ecx, 0x3
    L_cmp_cap:
        cmp     edx, ecx
        ja      L_realloc
        test    eax, eax
        jne     L_has_size2
        xor     ecx, ecx
        jmp     L_copy_split
    L_has_size2:
        mov     ecx, dword ptr [esi + 0x8]
        sub     ecx, eax
        sar     ecx, 0x3
    L_copy_split:
        mov     edx, ebx
        push    eax
        lea     ebx, [edx + 8*ecx]
        push    ebx
        push    edx
        call    ext_00490690
        mov     edx, dword ptr [esi + 0x8]
        mov     eax, dword ptr [edi + 0x8]
        add     esp, 0xc
        push    edx
        push    eax
        push    ebx
        mov     ecx, esi
        call    ext_00599C10
        pop     ebp
        pop     ebx
        mov     dword ptr [esi + 0x8], eax
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    L_realloc:
        test    eax, eax
        je      L_after_free
        push    eax
        call    ext_006A5C5C
        add     esp, 0x4
    L_after_free:
        mov     ecx, dword ptr [edi + 0x4]
        test    ecx, ecx
        jne     L_has_size3
        xor     eax, eax
        jmp     L_buy
    L_has_size3:
        mov     eax, dword ptr [edi + 0x8]
        sub     eax, ecx
        sar     eax, 0x3
    L_buy:
        push    eax
        mov     ecx, esi
        call    ext_00490640
        test    al, al
        je      L_done_pop
        mov     ecx, dword ptr [esi + 0x4]
        mov     edx, dword ptr [edi + 0x8]
        mov     eax, dword ptr [edi + 0x4]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    ext_00599C10
        mov     dword ptr [esi + 0x8], eax
    L_done_pop:
        pop     ebp
        pop     ebx
    L_ret_self:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}

// [0x00506570] sub_00506570 (142 bytes)
extern "C" void ext_00505F00();
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __cdecl fn_00506570(void* begin, void* end, void* src) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        cmp ebx, dword ptr [esp + 0xc]
        _emit 0x0f
        _emit 0x84
        _emit 0x7d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        lea ebp, [edi + 4]
        lea esi, [ebx + 0x38]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    loop_top:
        push ebp
        lea ecx, [esi - 0x34]
        call ext_00505F00
        lea eax, [edi + 0x1c]
        push eax
        lea ecx, [esi - 0x1c]
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [edi + 0x38]
        mov dword ptr [esi], eax
        fld dword ptr [edi + 0x3c]
        fstp dword ptr [esi + 4]
        add ebx, 0x68
        fld dword ptr [edi + 0x40]
        add esi, 0x68
        cmp ebx, dword ptr [esp + 0x18]
        fstp dword ptr [esi - 0x60]
        fld dword ptr [edi + 0x44]
        fstp dword ptr [esi - 0x5c]
        fld dword ptr [edi + 0x48]
        fstp dword ptr [esi - 0x58]
        fld dword ptr [edi + 0x4c]
        fstp dword ptr [esi - 0x54]
        fld dword ptr [edi + 0x50]
        fstp dword ptr [esi - 0x50]
        fld dword ptr [edi + 0x54]
        fstp dword ptr [esi - 0x4c]
        fld dword ptr [edi + 0x58]
        fstp dword ptr [esi - 0x48]
        fld dword ptr [edi + 0x5c]
        fstp dword ptr [esi - 0x44]
        fld dword ptr [edi + 0x60]
        fstp dword ptr [esi - 0x40]
        mov ecx, dword ptr [edi + 0x64]
        mov dword ptr [esi - 0x3c], ecx
        jne loop_top
        pop edi
        pop esi
        pop ebp
    done:
        pop ebx
        ret
    }
}

// [0x00506270] sub_00506270 (158 bytes)
extern "C" void ext_00505F00();
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) char* __cdecl fn_00506270(char* first, char* last, char* out) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        cmp ebx, dword ptr [esp + 0xc]
        je  same_range
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        lea esi, [ebp + 0x38]
        lea edi, [ebx + 0x38]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
loop_top:
        lea eax, [edi - 0x34]
        push eax
        lea ecx, [esi - 0x34]
        call ext_00505F00
        lea ecx, [edi - 0x1c]
        push ecx
        lea ecx, [esi - 0x1c]
        call dword ptr [mem_00924FDC]
        mov edx, dword ptr [edi]
        mov dword ptr [esi], edx
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esi + 0x4]
        add ebx, 0x68
        fld dword ptr [edi + 0x8]
        add ebp, 0x68
        fstp dword ptr [esi + 0x8]
        add esi, 0x68
        fld dword ptr [edi + 0xc]
        add edi, 0x68
        cmp ebx, dword ptr [esp + 0x18]
        fstp dword ptr [esi - 0x5c]
        fld dword ptr [edi - 0x58]
        fstp dword ptr [esi - 0x58]
        fld dword ptr [edi - 0x54]
        fstp dword ptr [esi - 0x54]
        fld dword ptr [edi - 0x50]
        fstp dword ptr [esi - 0x50]
        fld dword ptr [edi - 0x4c]
        fstp dword ptr [esi - 0x4c]
        fld dword ptr [edi - 0x48]
        fstp dword ptr [esi - 0x48]
        fld dword ptr [edi - 0x44]
        fstp dword ptr [esi - 0x44]
        fld dword ptr [edi - 0x40]
        fstp dword ptr [esi - 0x40]
        mov eax, dword ptr [edi - 0x3c]
        mov dword ptr [esi - 0x3c], eax
        jne loop_top
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
same_range:
        mov eax, dword ptr [esp + 0x10]
        pop ebx
        ret
    }
}

extern "C" void ext_00505F00();
extern "C" int mem_00924FDC;

// [0x00506310] sub_00506310 (158 bytes)
extern "C" __declspec(naked) char* __cdecl fn_00506310(char* first, char* last, char* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        cmp dword ptr [esp + 0x8], ebx
        je L_00506310_eq
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        lea edi, [ebp + 0x38]
        lea esi, [ebx + 0x38]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
L_00506310_loop:
        sub esi, 0x68
        lea eax, [esi - 0x34]
        sub edi, 0x68
        push eax
        lea ecx, [edi - 0x34]
        sub ebx, 0x68
        sub ebp, 0x68
        call ext_00505F00
        lea ecx, [esi - 0x1c]
        push ecx
        lea ecx, [edi - 0x1c]
        call dword ptr [mem_00924FDC]
        cmp ebx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esi]
        mov dword ptr [edi], edx
        fld dword ptr [esi + 0x4]
        fstp dword ptr [edi + 0x4]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [edi + 0x8]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [edi + 0xc]
        fld dword ptr [esi + 0x10]
        fstp dword ptr [edi + 0x10]
        fld dword ptr [esi + 0x14]
        fstp dword ptr [edi + 0x14]
        fld dword ptr [esi + 0x18]
        fstp dword ptr [edi + 0x18]
        fld dword ptr [esi + 0x1c]
        fstp dword ptr [edi + 0x1c]
        fld dword ptr [esi + 0x20]
        fstp dword ptr [edi + 0x20]
        fld dword ptr [esi + 0x24]
        fstp dword ptr [edi + 0x24]
        fld dword ptr [esi + 0x28]
        fstp dword ptr [edi + 0x28]
        mov eax, dword ptr [esi + 0x2c]
        mov dword ptr [edi + 0x2c], eax
        jne L_00506310_loop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
L_00506310_eq:
        mov eax, dword ptr [esp + 0x10]
        pop ebx
        ret
    }
}

// [0x00506740] sub_00506740 (85 bytes)
extern "C" void ext_00506270();

extern "C" __declspec(naked) void* __cdecl fn_00506740(void* first, void* last, void* dest) {
    __asm {
        sub esp, 0x8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_00506270
        sub esi, ebx
        mov eax, 0x4ec4ec4f
        imul esi
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        imul eax, eax, 0x68
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00506600] sub_00506600 (89 bytes)
extern "C" void ext_00506310();

extern "C" __declspec(naked) int __cdecl fn_00506600(int a1, int a2, int a3) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_00506310
        sub esi, ebx
        mov eax, 0x4ec4ec4f
        imul esi
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov ecx, eax
        imul ecx, ecx, 0x68
        add esp, 0x18
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x005067A0] sub_005067A0 (108 bytes)
extern "C" void ext_00506740();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005067A0(void* self, int edx_unused) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, ecx
        je L_invalid
        cmp esi, dword ptr [esp + 0x18]
        je L_cont
    L_invalid:
        call dword ptr [mem_00925134]
    L_cont:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, eax
        je L_store
        push ebx
        push edi
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push eax
        call ext_00506740
        mov edi, dword ptr [ebp + 8]
        mov ebx, eax
        add esp, 0xc
        cmp ebx, edi
        mov esi, ebx
        je L_done
        nop
    L_loop:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 0
        mov ecx, esi
        call eax
        add esi, 0x68
        cmp esi, edi
        jne L_loop
    L_done:
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [ebp + 8], ebx
        pop ebx
    L_store:
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 4], ecx
        pop ebp
        ret 0x14
    }
}

extern "C" void ext_00405FB0();
extern "C" void ext_00486EA0();

// [0x005053D0] sub_005053D0 (74 bytes)
extern "C" __declspec(naked) bool __fastcall fn_005053D0(void* self, int /*edx*/, unsigned int count) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        xor eax, eax
        cmp esi, eax
        push edi
        mov edi, ecx
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], eax
        mov dword ptr [edi + 0xc], eax
        jne L_nonzero
        pop edi
        xor al, al
        pop esi
        ret 0x4
    L_nonzero:
        cmp esi, 0x2762762
        jbe L_alloc
        call ext_00405FB0
    L_alloc:
        push eax
        push esi
        call ext_00486EA0
        imul esi, esi, 0x68
        add esi, eax
        add esp, 0x8
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], eax
        mov dword ptr [edi + 0xc], esi
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x00508370] sub_00508370 (362 bytes)
extern "C" void ext_00504990();
extern "C" void ext_005053D0();
extern "C" void ext_00506740();
extern "C" void ext_00506CD0();
extern "C" void ext_00506D10();
extern "C" void ext_00536290();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00508370(void* self) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        cmp esi, ebp
        je L_end
        mov eax, dword ptr [ebp + 0x4]
        test eax, eax
        push edi
        je L_clear
        mov edi, dword ptr [ebp + 0x8]
        mov ecx, edi
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_nonempty
    L_clear:
        mov ecx, esi
        call ext_00506CD0
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_nonempty:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        test ebx, ebx
        jne L_lsize
        xor eax, eax
        jmp L_cmp_lsize
    L_lsize:
        mov edx, dword ptr [esi + 0x8]
        sub edx, ebx
        mov eax, 0x4ec4ec4f
        imul edx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_cmp_lsize:
        cmp ecx, eax
        ja L_check_cap
        mov eax, dword ptr [ebp + 0x4]
        push ebx
        push edi
        push eax
        call ext_00506740
        mov ecx, dword ptr [esi + 0x8]
        add esp, 0xc
        push ecx
        push eax
        mov ecx, esi
        call ext_00536290
        mov eax, dword ptr [ebp + 0x4]
        test eax, eax
        jne L_rsize_nonzero
        imul eax, eax, 0x68
        add eax, dword ptr [esi + 0x4]
        pop ebx
        mov dword ptr [esi + 0x8], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_rsize_nonzero:
        mov ecx, dword ptr [ebp + 0x8]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        imul eax, eax, 0x68
        add eax, dword ptr [esi + 0x4]
        pop ebx
        mov dword ptr [esi + 0x8], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_check_cap:
        test ebx, ebx
        jne L_lcap
        xor eax, eax
        jmp L_cmp_lcap
    L_lcap:
        mov edx, dword ptr [esi + 0xc]
        sub edx, ebx
        mov eax, 0x4ec4ec4f
        imul edx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_cmp_lcap:
        cmp ecx, eax
        ja L_realloc
        mov ecx, esi
        call ext_00504990
        mov edi, eax
        mov eax, dword ptr [ebp + 0x4]
        imul edi, edi, 0x68
        add edi, eax
        push ebx
        push edi
        push eax
        call ext_00506740
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0xc
        push edx
        push eax
        push edi
        mov ecx, esi
        call ext_00506D10
        pop ebx
        mov dword ptr [esi + 0x8], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_realloc:
        test ebx, ebx
        je L_buy
        mov ecx, dword ptr [esi + 0x8]
        push ecx
        push ebx
        mov ecx, esi
        call ext_00536290
        mov edx, dword ptr [esi + 0x4]
        push edx
        call ext_006A5C5C
        add esp, 0x4
    L_buy:
        mov ecx, ebp
        call ext_00504990
        push eax
        mov ecx, esi
        call ext_005053D0
        test al, al
        je L_pop_ebx_edi
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ebp + 0x4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_00506D10
        mov dword ptr [esi + 0x8], eax
    L_pop_ebx_edi:
        pop ebx
        pop edi
    L_end:
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    }
}

// [0x00504070] sub_00504070 (75 bytes)
extern "C" void ext_00503D30();

extern "C" __declspec(naked) void* __fastcall fn_00504070(void* self, int edx_unused, void* src) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov dword ptr [esi], 0x94f074
        mov eax, dword ptr [edi + 0x8]
        mov dword ptr [esi + 0x8], eax
        mov ecx, dword ptr [edi + 0xc]
        lea edx, [edi + 0x10]
        mov dword ptr [esi + 0xc], ecx
        push edx
        lea ecx, [esi + 0x10]
        call ext_00503D30
        mov al, byte ptr [edi + 0x20]
        mov byte ptr [esi + 0x20], al
        mov cl, byte ptr [edi + 0x21]
        mov byte ptr [esi + 0x21], cl
        fld qword ptr [edi + 0x28]
        fstp qword ptr [esi + 0x28]
        mov dword ptr [esi], 0x94f084
        mov edx, dword ptr [edi + 0x30]
        pop edi
        mov dword ptr [esi + 0x30], edx
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x005084E0] sub_005084E0 (133 bytes)
extern "C" void ext_00508370();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005084E0(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        mov ebx, ecx
        xor esi, esi
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00

    loc_005084F0:
        mov ecx, dword ptr [ebx + 0x14]
        test ecx, ecx
        je short loc_00508552
        mov eax, dword ptr [ebx + 0x18]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jae short loc_00508552
        mov ecx, dword ptr [ebp + 0x14]
        test ecx, ecx
        je short loc_00508516
        mov eax, dword ptr [ebp + 0x18]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jb short loc_0050851C
    loc_00508516:
        call dword ptr [mem_00925134]
    loc_0050851C:
        mov eax, dword ptr [ebp + 0x14]
        mov edi, dword ptr [eax + 4*esi]
        mov ecx, dword ptr [ebx + 0x14]
        add edi, 0x20
        test ecx, ecx
        je short loc_00508538
        mov eax, dword ptr [ebx + 0x18]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jb short loc_0050853E
    loc_00508538:
        call dword ptr [mem_00925134]
    loc_0050853E:
        mov ecx, dword ptr [ebx + 0x14]
        mov ecx, dword ptr [ecx + 4*esi]
        push edi
        add ecx, 0x20
        call ext_00508370
        add esi, 1
        jmp short loc_005084F0

    loc_00508552:
        fld qword ptr [ebp + 0x20]
        pop edi
        fstp qword ptr [ebx + 0x20]
        mov dl, byte ptr [ebp + 0x28]
        pop esi
        pop ebp
        mov byte ptr [ebx + 0x28], dl
        pop ebx
        ret 4
    }
}

// [0x00508570] sub_00508570 (264 bytes)
extern "C" void ext_00504990();
extern "C" void ext_00508370();
extern "C" void ext_00514290();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00508570(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x34
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x34], esi
        xor ebx, ebx

    loc_00508584:
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        mov dword ptr [esp + 0x30], ebx
        je loc_00508666
        mov eax, dword ptr [esi + 0x18]
        sub eax, ecx
        sar eax, 2
        cmp ebx, eax
        jae loc_00508666
        test ecx, ecx
        je short loc_005085B3
        mov eax, dword ptr [esi + 0x18]
        sub eax, ecx
        sar eax, 2
        cmp ebx, eax
        jb short loc_005085B9

    loc_005085B3:
        call dword ptr [mem_00925134]

    loc_005085B9:
        mov eax, dword ptr [esi + 0x14]
        mov edi, dword ptr [ebp + 0x8]
        mov esi, dword ptr [eax + 4*ebx]
        mov ecx, dword ptr [edi + 0x14]
        add esi, 0x20
        test ecx, ecx
        je short loc_005085D8
        mov eax, dword ptr [edi + 0x18]
        sub eax, ecx
        sar eax, 2
        cmp ebx, eax
        jb short loc_005085DE

    loc_005085D8:
        call dword ptr [mem_00925134]

    loc_005085DE:
        mov ecx, dword ptr [edi + 0x14]
        mov edx, dword ptr [ecx + 4*ebx]
        add edx, 0x20
        push edx
        mov ecx, esi
        call ext_00508370
        mov ecx, esi
        xor edi, edi
        call ext_00504990
        test eax, eax
        jbe short loc_0050865A
        xor ebx, ebx
        mov edi, edi

    loc_00508600:
        mov eax, dword ptr [ebp + 0x8]
        fld qword ptr [eax + 0x20]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        fstp qword ptr [esp + 0x38]
        je short loc_0050862B
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb short loc_00508631

    loc_0050862B:
        call dword ptr [mem_00925134]

    loc_00508631:
        mov ecx, dword ptr [esi + 0x4]
        fld qword ptr [esp + 0x38]
        sub esp, 8
        add ecx, ebx
        fstp qword ptr [esp]
        call ext_00514290
        mov ecx, esi
        add edi, 1
        add ebx, 0x68
        call ext_00504990
        cmp edi, eax
        jb short loc_00508600
        mov ebx, dword ptr [esp + 0x30]

    loc_0050865A:
        mov esi, dword ptr [esp + 0x34]
        add ebx, 1
        jmp loc_00508584

    loc_00508666:
        fldz
        pop edi
        fstp qword ptr [esi + 0x20]
        mov byte ptr [esi + 0x28], 0
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xc
    }
}

// [0x005040E0] sub_005040E0 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_00503A30();
extern "C" void ext_00504070();
extern "C" void ext_00517DB0();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_005040E0(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa408c0
        push 0xa40884
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x38
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_00504070
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_00503A30
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x38
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_00517DB0
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x00509DE0] sub_00509DE0 (75 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_004277B0();

extern "C" __declspec(naked) bool __fastcall fn_00509DE0(void* self, int edx_unused, unsigned int n) {
    __asm {
        push esi
        xor eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, eax
        mov esi, ecx
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        jne L_509DFE
        pop edi
        xor al, al
        pop esi
        ret 0x4
    L_509DFE:
        cmp edi, 0x71c71c7
        jbe L_509E0B
        call ext_00405FB0
    L_509E0B:
        push eax
        push edi
        call ext_004277B0
        lea ecx, [edi + 8*edi]
        add esp, 0x8
        lea edx, [eax + 4*ecx]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        pop edi
        mov dword ptr [esi + 0xc], edx
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x0050C7D0] sub_0050C7D0 (371 bytes)
extern "C" void ext_0049AD70();
extern "C" void ext_00509DE0();
extern "C" void ext_0050B060();
extern "C" void ext_0050B930();
extern "C" void ext_0050C160();
extern "C" void ext_0050C610();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0050C7D0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        cmp esi, ebx
        je L_done_ret
        push ebp
        mov ebp, dword ptr [ebx + 0x4]
        test ebp, ebp
        je L_clear
        mov ecx, dword ptr [ebx + 0x8]
        sub ecx, ebp
        mov eax, 0x38e38e39
        imul ecx
        sar edx, 0x3
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_nonempty
    L_clear:
        mov ecx, esi
        call ext_0050C610
        pop ebp
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    L_nonempty:
        push edi
        mov edi, dword ptr [esi + 0x4]
        test edi, edi
        jne L_have_sfirst
        xor eax, eax
        jmp L_cmp_size
    L_have_sfirst:
        mov edx, dword ptr [esi + 0x8]
        sub edx, edi
        mov eax, 0x38e38e39
        imul edx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_cmp_size:
        cmp ecx, eax
        ja L_check_cap
        mov eax, dword ptr [ebx + 0x8]
        push edi
        push eax
        push ebp
        call ext_0050B060
        mov ecx, dword ptr [esi + 0x8]
        add esp, 0xc
        push ecx
        push eax
        mov ecx, esi
        call ext_0050B930
        mov eax, dword ptr [ebx + 0x4]
        test eax, eax
        jne L_calc_rsize_end
        lea edx, [eax + 8*eax]
        mov eax, dword ptr [esi + 0x4]
        pop edi
        lea ecx, [eax + 4*edx]
        pop ebp
        mov dword ptr [esi + 0x8], ecx
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    L_calc_rsize_end:
        mov ebx, dword ptr [ebx + 0x8]
        sub ebx, eax
        mov eax, 0x38e38e39
        imul ebx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea edx, [eax + 8*eax]
        mov eax, dword ptr [esi + 0x4]
        pop edi
        lea ecx, [eax + 4*edx]
        pop ebp
        mov dword ptr [esi + 0x8], ecx
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    L_check_cap:
        test edi, edi
        jne L_have_cap
        xor eax, eax
        jmp L_cmp_cap
    L_have_cap:
        mov edx, dword ptr [esi + 0xc]
        sub edx, edi
        mov eax, 0x38e38e39
        imul edx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_cmp_cap:
        cmp ecx, eax
        ja L_realloc
        mov ecx, esi
        call ext_0049AD70
        lea edx, [eax + 8*eax]
        lea eax, [ebp + 4*edx]
        push edi
        push eax
        push ebp
        mov dword ptr [esp + 0x20], eax
        call ext_0050B060
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ebx + 0x8]
        mov edx, dword ptr [esp + 0x20]
        add esp, 0xc
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_0050C160
        pop edi
        mov dword ptr [esi + 0x8], eax
        pop ebp
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    L_realloc:
        test edi, edi
        je L_alloc_new
        mov eax, dword ptr [esi + 0x8]
        push eax
        push edi
        mov ecx, esi
        call ext_0050B930
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        call ext_006A5C5C
        add esp, 0x4
    L_alloc_new:
        mov ecx, ebx
        call ext_0049AD70
        push eax
        mov ecx, esi
        call ext_00509DE0
        test al, al
        je L_done_pop2
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [ebx + 0x4]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call ext_0050C160
        mov dword ptr [esi + 0x8], eax
    L_done_pop2:
        pop edi
        pop ebp
    L_done_ret:
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00508B40] sub_00508B40 (81 bytes)
extern "C" void ext_00640110();
extern "C" void ext_00427550();
extern "C" void ext_0067EF60();
extern "C" int mem_00A9FA04;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9FAC0;
extern "C" int mem_00A9F478;

extern "C" __declspec(naked) int __fastcall fn_00508B40(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9FA04]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        fld dword ptr [esi + 0x20]
        mov ecx, dword ptr [mem_00A9FAC0]
        mov edx, dword ptr [mem_00A9F478]
        push ecx
        push edx
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        add esp, 0x10
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0050A060] sub_0050A060 (186 bytes)
extern "C" void ext_00508B40();
extern "C" void ext_006404E0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0050A060(void* self) {
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        je      loc_50A084
        mov     ecx, dword ptr [edi + 0x8]
        sub     ecx, eax
        mov     eax, 0x38e38e39
        imul    ecx
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
        jne     loc_50A08B
    loc_50A084:
        mov     eax, 0xb53b30
        pop     edi
        ret
    loc_50A08B:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        je      loc_50A0A4
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_006404E0
        mov     ebp, eax
        jmp     loc_50A0A8
    loc_50A0A4:
        mov     ebp, dword ptr [esp + 0x18]
    loc_50A0A8:
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        jbe     loc_50A0B6
        call    dword ptr [mem_00925134]
    loc_50A0B6:
        mov     eax, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], eax
        mov     dword ptr [esp + 0x14], eax
        jbe     loc_50A0C8
        call    dword ptr [mem_00925134]
    loc_50A0C8:
        mov     ebx, dword ptr [esp + 0x20]
        _emit   0x8d
        _emit   0x64
        _emit   0x24
        _emit   0x00
    loc_50A0D0:
        cmp     esi, dword ptr [esp + 0x14]
        je      loc_50A113
        test    ebx, ebx
        je      loc_50A0F0
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_50A0E5
        call    dword ptr [mem_00925134]
    loc_50A0E5:
        push    ebx
        mov     ecx, ebp
        call    ext_006404E0
        push    eax
        jmp     loc_50A0FC
    loc_50A0F0:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_50A0FB
        call    dword ptr [mem_00925134]
    loc_50A0FB:
        push    ebp
    loc_50A0FC:
        mov     ecx, esi
        call    ext_00508B40
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_50A10E
        call    dword ptr [mem_00925134]
    loc_50A10E:
        add     esi, 0x24
        jmp     loc_50A0D0
    loc_50A113:
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     edi
        ret
    }
}

extern "C" void ext_0050DA10();
extern "C" void ext_0050DF70();
extern "C" void ext_0050DFF0();
extern "C" void ext_0050E1D0();
extern "C" void ext_0050E260();
extern "C" void ext_0050E2B0();
extern "C" int mem_00A9F438;
extern "C" int mem_00950460;
extern "C" int mem_00950450;

// [0x0050E2F0] sub_0050E2F0 (82 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050E2F0(void* self) {
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0x0c]
        push    0
        lea     eax, [esp + 8]
        push    eax
        mov     ecx, esi
        call    ext_0050E1D0
        push    offset mem_00950460
        lea     ecx, [esp + 8]
        call    ext_0050DF70
        push    offset mem_00950450
        lea     ecx, [esp + 8]
        call    ext_0050DFF0
        mov     ecx, dword ptr [mem_00A9F438]
        push    ecx
        lea     ecx, [esp + 8]
        call    ext_0050DA10
        push    esi
        call    ext_0050E260
        push    esi
        call    ext_0050E2B0
        add     esp, 8
        pop     esi
        pop     ecx
        ret
    }
}

// [0x0050D7C0] sub_0050D7C0 (84 bytes)
extern "C" void ext_0050D5A0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0050D7C0(void* self) {
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x28]
        test    eax, eax
        jne     short loc_50d7d0
        xor     ebx, ebx
        jmp     short loc_50d7d8
loc_50d7d0:
        mov     ebx, dword ptr [edi + 0x2c]
        sub     ebx, eax
        sar     ebx, 2
loc_50d7d8:
        xor     esi, esi
        test    ebx, ebx
        jbe     short loc_50d810
        push    ebp
        lea     ebp, [edi + 0x10]
loc_50d7e2:
        mov     ecx, dword ptr [edi + 0x28]
        test    ecx, ecx
        je      short loc_50d7f5
        mov     eax, dword ptr [edi + 0x2c]
        sub     eax, ecx
        sar     eax, 2
        cmp     esi, eax
        jb      short loc_50d7fb
loc_50d7f5:
        call    dword ptr [mem_00925134]
loc_50d7fb:
        mov     eax, dword ptr [edi + 0x28]
        mov     ecx, dword ptr [eax + esi*4]
        push    esi
        push    ebp
        call    ext_0050D5A0
        add     esi, 1
        cmp     esi, ebx
        jb      short loc_50d7e2
        pop     ebp
loc_50d810:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}

extern "C" void ext_0049F7F0();

// [0x00506DB0] sub_00506DB0 (86 bytes)
extern "C" __declspec(naked) void __fastcall fn_00506DB0(void* self) {
    __asm {
        push    -1
        push    0x0088D1B8
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 4]
        xor     eax, eax
        mov     dword ptr [esi], 0x0094F63C
        mov     dword ptr [esp + 4], ecx
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [ecx + 8], eax
        mov     dword ptr [ecx + 0xC], eax
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [esp + 0x18]
        add     eax, 4
        push    eax
        call    ext_0049F7F0
        mov     ecx, dword ptr [esp + 8]
        mov     eax, esi
        pop     esi
        mov     fs:[0], ecx
        add     esp, 0x10
        ret     4
    }
}

// [0x005047A0] sub_005047A0 (90 bytes)
extern "C" void ext_00504640();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEBB40;
extern "C" __declspec(naked) void __fastcall fn_005047A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x891a7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEBB40], al
        jne done_005047A0
        or dword ptr [mem_00AEBB40], eax
        mov ecx, 0xaebb1c
        mov dword ptr [esp + 8], 0
        call ext_00504640
        push 0x919cf0
        call ext_006A6C87
        add esp, 4
    done_005047A0:
        mov ecx, dword ptr [esp]
        mov eax, 0xaebb1c
        mov dword ptr fs:[0], ecx
        add esp, 0Ch
        ret
    }
}

// [0x0050F6B0] sub_0050F6B0 (246 bytes)
extern "C" void ext_004C6F60();
extern "C" void ext_004C7200();
extern "C" void ext_00503A30();
extern "C" void ext_005047A0();
extern "C" void ext_00505D50();
extern "C" void ext_0066AC90();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0050F6B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b6444
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc8
        push esi
        call ext_005047A0
        mov esi, dword ptr [esp + 0xdc]
        push esi
        lea ecx, [eax + 0x4]
        call ext_00505D50
        test eax, eax
        je L_50F70A
        mov ecx, dword ptr [esp + 0xe0]
        mov edx, dword ptr [eax]
        push ecx
        call edx
        add esp, 0x4
        mov ecx, dword ptr [esp + 0xcc]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    L_50F70A:
        cmp byte ptr [esp + 0xe4], 0
        je L_50F78E
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push esi
        call dword ptr [mem_00924FE0]
        sub esp, 0x1c
        mov dword ptr [esp + 0x3c], esp
        mov esi, esp
        sub esp, 0x1c
        mov eax, esp
        mov dword ptr [esp + 0x58], esp
        push eax
        mov dword ptr [esp + 0x12c], 0
        call ext_00503A30
        add esp, 0x4
        push esi
        call ext_0066AC90
        add esp, 0x20
        lea ecx, [esp + 0xa4]
        mov dword ptr [esp + 0x10c], 0xffffffff
        call ext_004C6F60
        push eax
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xd8], 1
        call ext_004C7200
        push 0x9e9404
        lea ecx, [esp + 0x10]
        push ecx
        call ext_006A6DD2
    L_50F78E:
        mov ecx, dword ptr [esp + 0xcc]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    }
}

// [0x00506B70] sub_00506B70 (90 bytes)
extern "C" void ext_00506450();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEBBB8;
extern "C" __declspec(naked) void __fastcall fn_00506B70(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x891d6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEBBB8], al
        jne done_00506B70
        or dword ptr [mem_00AEBBB8], eax
        mov ecx, 0xaebb94
        mov dword ptr [esp + 8], 0
        call ext_00506450
        push 0x919d10
        call ext_006A6C87
        add esp, 4
    done_00506B70:
        mov ecx, dword ptr [esp]
        mov eax, 0xaebb94
        mov dword ptr fs:[0], ecx
        add esp, 0Ch
        ret
    }
}

// [0x0050F550] sub_0050F550 (90 bytes)
extern "C" void ext_0050F1A0();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEBD80;
extern "C" __declspec(naked) void __fastcall fn_0050F550(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8923de
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEBD80], al
        jne done_0050F550
        or dword ptr [mem_00AEBD80], eax
        mov ecx, 0xaebd5c
        mov dword ptr [esp + 8], 0
        call ext_0050F1A0
        push 0x919d80
        call ext_006A6C87
        add esp, 4
    done_0050F550:
        mov ecx, dword ptr [esp]
        mov eax, 0xaebd5c
        mov dword ptr fs:[0], ecx
        add esp, 0Ch
        ret
    }
}

// [0x00506BD0] sub_00506BD0 (246 bytes)
extern "C" void ext_004C6F60();
extern "C" void ext_004C7200();
extern "C" void ext_00504A30();
extern "C" void ext_00505D50();
extern "C" void ext_00506B70();
extern "C" void ext_0066AC90();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_00506BD0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b6444
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc8
        push esi
        call ext_00506B70
        mov esi, dword ptr [esp + 0xdc]
        push esi
        lea ecx, [eax + 0x4]
        call ext_00505D50
        test eax, eax
        je L_506C2A
        mov ecx, dword ptr [esp + 0xe0]
        mov edx, dword ptr [eax]
        push ecx
        call edx
        add esp, 0x4
        mov ecx, dword ptr [esp + 0xcc]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    L_506C2A:
        cmp byte ptr [esp + 0xe4], 0
        je L_506CAE
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push esi
        call dword ptr [mem_00924FE0]
        sub esp, 0x1c
        mov dword ptr [esp + 0x3c], esp
        mov esi, esp
        sub esp, 0x1c
        mov eax, esp
        mov dword ptr [esp + 0x58], esp
        push eax
        mov dword ptr [esp + 0x12c], 0
        call ext_00504A30
        add esp, 0x4
        push esi
        call ext_0066AC90
        add esp, 0x20
        lea ecx, [esp + 0xa4]
        mov dword ptr [esp + 0x10c], 0xffffffff
        call ext_004C6F60
        push eax
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xd8], 1
        call ext_004C7200
        push 0x9e9404
        lea ecx, [esp + 0x10]
        push ecx
        call ext_006A6DD2
    L_506CAE:
        mov ecx, dword ptr [esp + 0xcc]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    }
}

// [0x00506ED0] sub_00506ED0 (121 bytes)
extern "C" void ext_00517530();
extern "C" __declspec(naked) void __fastcall fn_00506ED0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x891da8
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push esi
        push edi
        mov esi, ecx
        push ebx
        lea ecx, [esi + 0x4]
        call dword ptr [mem_00924FDC]
        cmp dword ptr [esi + 0x30], 0x0
        je L_506F35
        push 0x1
        push 0x0
        push ebx
        call ext_00506BD0
        mov edi, eax
        add esp, 0xc
        mov dword ptr [esp + 0x1c], edi
        push ebx
        lea ecx, [edi + 0x4]
        mov dword ptr [esp + 0x18], 0x0
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [esi + 0x30]
        push edi
        push esi
        mov dword ptr [esp + 0x24], 0x0
        call ext_00517530
    L_506F35:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 0x4
    }
}

extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00924FE8;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

// [0x00506E20] sub_00506E20 (161 bytes)
extern "C" __declspec(naked) void __cdecl fn_00506E20() {
    __asm {
        push -0x1
        push 0x891d91
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        push edi
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [mem_00A9FA6C]
        mov edi, dword ptr [esp + 0x38]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x34], 0x0
        call ext_0063EFE0
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        call ext_004275E0
        push 0x1
        lea edx, [esp + 0x18]
        push 0x0
        push edx
        call ext_00506BD0
        mov esi, eax
        add esp, 0x14
        mov dword ptr [esp + 0x8], esi
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi + 0x4]
        mov byte ptr [esp + 0x34], 0x1
        call dword ptr [mem_00924FDC]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x54]
        push edi
        mov ecx, esi
        call eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x0050F5B0] sub_0050F5B0 (246 bytes)
extern "C" void ext_004C6F60();
extern "C" void ext_004C7200();
extern "C" void ext_00505D50();
extern "C" void ext_0050E3B0();
extern "C" void ext_0050F550();
extern "C" void ext_0066AC90();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0050F5B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b6444
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc8
        push esi
        call ext_0050F550
        mov esi, dword ptr [esp + 0xdc]
        push esi
        lea ecx, [eax + 0x4]
        call ext_00505D50
        test eax, eax
        je L_50F60A
        mov ecx, dword ptr [esp + 0xe0]
        mov edx, dword ptr [eax]
        push ecx
        call edx
        add esp, 0x4
        mov ecx, dword ptr [esp + 0xcc]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    L_50F60A:
        cmp byte ptr [esp + 0xe4], 0
        je L_50F68E
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push esi
        call dword ptr [mem_00924FE0]
        sub esp, 0x1c
        mov dword ptr [esp + 0x3c], esp
        mov esi, esp
        sub esp, 0x1c
        mov eax, esp
        mov dword ptr [esp + 0x58], esp
        push eax
        mov dword ptr [esp + 0x12c], 0
        call ext_0050E3B0
        add esp, 0x4
        push esi
        call ext_0066AC90
        add esp, 0x20
        lea ecx, [esp + 0xa4]
        mov dword ptr [esp + 0x10c], 0xffffffff
        call ext_004C6F60
        push eax
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xd8], 1
        call ext_004C7200
        push 0x9e9404
        lea ecx, [esp + 0x10]
        push ecx
        call ext_006A6DD2
    L_50F68E:
        mov ecx, dword ptr [esp + 0xcc]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    }
}

// [0x0050F7B0] sub_0050F7B0 (186 bytes)
extern "C" void ext_0050F5B0();
extern "C" void ext_0050F6B0();

extern "C" __declspec(naked) void __fastcall fn_0050F7B0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push 0x892411
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x24]
        xor ebx, ebx
        mov dword ptr [esi], edi
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esi + 0x8], ebx
        mov eax, dword ptr [esp + 0x28]
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x20], ebx
        mov dword ptr [esi + 0x24], ebx
        mov dword ptr [esi + 0x28], ebx
        mov ecx, dword ptr [esi]
        push 1
        mov dword ptr [ecx + 0x74], esi
        lea edx, [edi + 0x20]
        push ebx
        push edx
        mov byte ptr [esp + 0x28], 2
        mov dword ptr [esi + 0x14], ebx
        mov byte ptr [esi + 0x30], bl
        mov dword ptr [esi + 0x2c], ebx
        call ext_0050F5B0
        mov ecx, dword ptr [esi + 0x8]
        mov ebp, eax
        add esp, 0xc
        cmp ebp, ecx
        je L_50F829
        cmp ecx, ebx
        je L_50F829
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    L_50F829:
        push 1
        push ebx
        add edi, 0x58
        push edi
        mov dword ptr [esi + 0x8], ebp
        call ext_0050F6B0
        mov ecx, dword ptr [esi + 0x4]
        mov edi, eax
        add esp, 0xc
        cmp edi, ecx
        je L_50F850
        cmp ecx, ebx
        je L_50F850
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    L_50F850:
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0x4], edi
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

extern "C" void ext_006798D0();
extern "C" void ext_00503860();
extern "C" void ext_00502AE0();
extern "C" void ext_00502B60();
extern "C" void ext_00502BE0();
extern "C" void ext_00502C60();
extern "C" void ext_00502CE0();

extern "C" int mem_0094F054;
extern "C" int mem_0094EF58;
extern "C" int mem_0094EF48;
extern "C" int mem_0094EF38;
extern "C" int mem_0094F048;

// [0x005039A0] sub_005039A0 (91 bytes)
extern "C" __declspec(naked) void __fastcall fn_005039A0(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_00503860
        push offset mem_0094F054
        lea ecx, [esp + 4]
        call ext_00502AE0
        push offset mem_0094EF58
        lea ecx, [esp + 4]
        call ext_00502B60
        push offset mem_0094EF48
        lea ecx, [esp + 4]
        call ext_00502BE0
        push offset mem_0094EF38
        lea ecx, [esp + 4]
        call ext_00502C60
        push offset mem_0094F048
        lea ecx, [esp + 4]
        call ext_00502CE0
        pop ecx
        ret
    }
}

// [0x00508210] sub_00508210 (97 bytes)
extern "C" void ext_00508180();
extern "C" void ext_0050BE20();
extern "C" void ext_0050ED40();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00508210(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        push esi
        push edi
        mov ecx, ebx
        call ext_0050BE20
        mov esi, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        jne short nonzero_len
        xor eax, eax
        jmp short have_count
nonzero_len:
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
have_count:
        push eax
        mov ecx, ebx
        call ext_0050ED40
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe short chk_second
        call dword ptr [mem_00925134]
chk_second:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe short do_call
        call dword ptr [mem_00925134]
do_call:
        push ebx
        push edi
        push esi
        push ebp
        lea eax, [esp + 0x24]
        push esi
        push eax
        call ext_00508180
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x005060F0] sub_005060F0 (98 bytes)
extern "C" void ext_0049EEE0();
extern "C" void ext_00505770();
extern "C" __declspec(naked) void* __fastcall fn_005060F0(void* self, int edx_unused, const void* src) {
    __asm {
        push    -1
        push    0x8926D3
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push    eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push    ecx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x8], esi
        mov     edi, dword ptr [esp + 0x1C]
        lea     eax, [edi + 0x4]
        lea     ecx, [esi + 0x4]
        push    eax
        mov     dword ptr [esp + 0x18], 0x0
        mov     dword ptr [esi], 0x94F5DC
        call    ext_0049EEE0
        add     edi, 0x14
        push    edi
        lea     ecx, [esi + 0x14]
        mov     byte ptr [esp + 0x18], 0x1
        call    ext_00505770
        mov     ecx, dword ptr [esp + 0xC]
        pop     edi
        mov     eax, esi
        pop     esi
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add     esp, 0x10
        ret     0x4
    }
}

// [0x005063B0] sub_005063B0 (148 bytes)
extern "C" void ext_005060F0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void* __cdecl fn_005063B0(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x891cd1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr [ebp + 0xc]
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], 0
loop_top:
        cmp edi, ebx
        je short exit_path
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp + 0x8], esi
        test esi, esi
        mov byte ptr [ebp - 0x4], 1
        je short skip_ctor
        push edi
        mov ecx, esi
        call ext_005060F0
skip_ctor:
        add esi, 0x68
        mov byte ptr [ebp - 0x4], 0
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x68
        jmp short loop_top
handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je short rethrow
dtor_loop:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 0
        mov ecx, esi
        call edx
        add esi, 0x68
        cmp esi, edi
        jne short dtor_loop
rethrow:
        push 0
        push 0
        call ext_006A6DD2
exit_path:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

extern "C" void ext_005060F0();
extern "C" void ext_006A6DD2();

// [0x005064D0] sub_005064D0 (155 bytes)
extern "C" __declspec(naked) void __cdecl fn_005064D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x891cf1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [ebp + 0xc]
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 4], 0
        mov ebx, 1
    L_loop:
        test edi, edi
        jbe L_done
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        test esi, esi
        mov byte ptr [ebp - 4], bl
        je L_skip_call
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call ext_005060F0
    L_skip_call:
        sub edi, ebx
        add esi, 0x68
        mov byte ptr [ebp - 4], 0
        mov dword ptr [ebp + 8], esi
        jmp L_loop
    L_catch:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 8]
        cmp esi, edi
        je L_rethrow
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_dtor_loop:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 0
        mov ecx, esi
        call eax
        add esi, 0x68
        cmp esi, edi
        jne L_dtor_loop
    L_rethrow:
        push 0
        push 0
        call ext_006A6DD2
    L_done:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0050AB00] sub_0050AB00 (297 bytes)
extern "C" void ext_00660A50();
extern "C" void ext_00672080();
extern "C" int mem_00893C60;
extern "C" int mem_00925134;
extern "C" int mem_00B599BC;

extern "C" __declspec(naked) void __fastcall fn_0050AB00(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -8
        mov     eax, dword ptr fs:[0]
        push    -1
        push    offset mem_00893C60
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    ebx
        push    ebp
        lea     ebp, [ecx + 4]
        push    esi
        mov     esi, dword ptr [ebp + 4]
        cmp     esi, dword ptr [ebp + 8]
        push    edi
        jbe     L_0050AB33
        call    dword ptr [mem_00925134]
L_0050AB33:
        xor     ebx, ebx
L_0050AB35:
        mov     edi, dword ptr [ebp + 8]
        cmp     dword ptr [ebp + 4], edi
        jbe     L_0050AB43
        call    dword ptr [mem_00925134]
L_0050AB43:
        cmp     ebp, ebp
        je      L_0050AB4D
        call    dword ptr [mem_00925134]
L_0050AB4D:
        cmp     esi, edi
        je      L_0050AC16
        call    ext_00660A50
        cmp     esi, dword ptr [ebp + 8]
        mov     edi, eax
        jb      L_0050AB67
        call    dword ptr [mem_00925134]
L_0050AB67:
        mov     eax, dword ptr [edi]
        mov     eax, dword ptr [eax + 0x14]
        push    ebx
        push    ebx
        lea     ecx, [esi + 4]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        mov     ecx, edi
        call    eax
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x34], ebx
        je      L_0050ABEB
        cmp     ecx, dword ptr [mem_00B599BC]
        je      L_0050ABEB
        cmp     esi, dword ptr [ebp + 8]
        jb      L_0050AB9A
        call    dword ptr [mem_00925134]
L_0050AB9A:
        fld     dword ptr [esi + 0x20]
        push    ecx
        fstp    dword ptr [esp + 0x18]
        lea     ecx, [esp + 0x24]
        fld     dword ptr [esp + 0x18]
        fstp    dword ptr [esp]
        call    ext_00672080
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0xa4]
        lea     eax, [esp + 0x20]
        push    eax
        lea     eax, [esp + 0x1c]
        push    eax
        mov     byte ptr [esp + 0x3c], 1
        call    edx
        mov     ecx, dword ptr [esp + 0x24]
        cmp     ecx, ebx
        mov     byte ptr [esp + 0x34], bl
        je      L_0050ABE7
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x78]
        lea     edx, [esp + 0x20]
        push    edx
        call    eax
L_0050ABE7:
        mov     ecx, dword ptr [esp + 0x1c]
L_0050ABEB:
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x34], -1
        je      L_0050AC03
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        lea     eax, [esp + 0x18]
        push    eax
        call    edx
L_0050AC03:
        cmp     esi, dword ptr [ebp + 8]
        jb      L_0050AC0E
        call    dword ptr [mem_00925134]
L_0050AC0E:
        add     esi, 0x24
        jmp     L_0050AB35
L_0050AC16:
        mov     ecx, dword ptr [esp + 0x2c]
        pop     edi
        mov     dword ptr fs:[0], ecx
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}

// [0x005089C0] sub_005089C0 (111 bytes)
extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" void ext_00640BC0();
extern "C" int mem_00A9FA04;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F790;
extern "C" int mem_00A9FA90;

extern "C" __declspec(naked) void* __fastcall fn_005089C0(void* self, int edx_unused, void* arg0) {
    __asm {
        mov     eax, dword ptr [mem_00A9FA04]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    eax
        mov     ecx, edi
        call    ext_00640110
        lea     ecx, [esi + 4]
        mov     dword ptr [esp + 0xc], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x10]
        call    ext_00427550
        mov     ecx, dword ptr [mem_00A9F790]
        push    ecx
        mov     ecx, edi
        call    ext_00640110
        fld     dword ptr [esi + 0x20]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        call    ext_00640BC0
        mov     edx, dword ptr [mem_00A9FA90]
        add     esp, 8
        push    edx
        mov     ecx, edi
        call    ext_00640110
        fld     dword ptr [esi + 0x24]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        call    ext_00640BC0
        add     esp, 8
        mov     eax, edi
        pop     edi
        pop     esi
        ret     4
    }
}

// [0x00509F70] sub_00509F70 (184 bytes)
extern "C" void ext_005089C0();
extern "C" void ext_006404E0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __cdecl fn_00509F70() {
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        je      loc_509F86
        mov     ecx, dword ptr [edi + 0x8]
        sub     ecx, eax
        sar     ecx, 0x2
        jne     loc_509F8D
    loc_509F86:
        mov     eax, 0xb53b30
        pop     edi
        ret
    loc_509F8D:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        je      loc_509FA6
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_006404E0
        mov     ebp, eax
        jmp     loc_509FAA
    loc_509FA6:
        mov     ebp, dword ptr [esp + 0x18]
    loc_509FAA:
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        jbe     loc_509FB8
        call    dword ptr [mem_00925134]
    loc_509FB8:
        mov     eax, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], eax
        mov     dword ptr [esp + 0x14], eax
        jbe     loc_509FCA
        call    dword ptr [mem_00925134]
    loc_509FCA:
        mov     ebx, dword ptr [esp + 0x20]
        mov     edi, edi
    loc_509FD0:
        cmp     esi, dword ptr [esp + 0x14]
        je      loc_50A021
        test    ebx, ebx
        je      loc_509FF0
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_509FE5
        call    dword ptr [mem_00925134]
    loc_509FE5:
        push    ebx
        mov     ecx, ebp
        call    ext_006404E0
        push    eax
        jmp     loc_509FFC
    loc_509FF0:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_509FFB
        call    dword ptr [mem_00925134]
    loc_509FFB:
        push    ebp
    loc_509FFC:
        mov     ecx, dword ptr [esi]
        call    ext_005089C0
        mov     ecx, dword ptr [esp + 0x24]
        test    ecx, ecx
        je      loc_50A011
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx]
        call    eax
    loc_50A011:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_50A01C
        call    dword ptr [mem_00925134]
    loc_50A01C:
        add     esi, 0x4
        jmp     loc_509FD0
    loc_50A021:
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     edi
        ret
    }
}

extern "C" void ext_00640110();
extern "C" void ext_00640A50();
extern "C" void ext_00640BC0();
extern "C" void ext_00427550();
extern "C" int mem_00A9F988;
extern "C" int mem_00A9FA08;
extern "C" int mem_00A9F82C;
extern "C" int mem_00A9F7D0;
extern "C" int mem_00A9F964;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F620;
extern "C" int mem_00A9FA30;
extern "C" int mem_00A9F998;
extern "C" int mem_00A9F960;

// [0x0050E680] sub_0050E680 (293 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050E680(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F988]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640110
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        push eax
        call ext_00640A50
        mov edx, dword ptr [mem_00A9FA08]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 0xc]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9F82C]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 0x10]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov ecx, dword ptr [mem_00A9F7D0]
        add esp, 0x8
        push ecx
        mov ecx, edi
        call ext_00640110
        mov edx, dword ptr [esi + 0x18]
        push edx
        push eax
        call ext_00640A50
        mov eax, dword ptr [mem_00A9F964]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov ecx, dword ptr [mem_00A9F620]
        push ecx
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x58]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov edx, dword ptr [mem_00A9FA30]
        push edx
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 0x1c]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9F998]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x3c]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov ecx, dword ptr [mem_00A9F960]
        push ecx
        mov ecx, edi
        call ext_00640110
        mov edx, dword ptr [esi + 0x8]
        push edx
        push eax
        call ext_00640A50
        add esp, 0x8
        mov eax, edi
        pop edi
        pop esi
        ret 4
    }
}

// [0x0050CE30] sub_0050CE30 (327 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00427A60();
extern "C" void ext_005088D0();
extern "C" void ext_00508950();
extern "C" void ext_0050BE20();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void __fastcall fn_0050CE30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 08921ABh
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 18h
        cmp byte ptr [esp+34h], 0
        je short loc_50CE58
        mov ecx, dword ptr [esp+2Ch]
        call ext_0050BE20
loc_50CE58:
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp+34h]
        add esi, 24h
        push edi
        mov edi, dword ptr [esi+4]
        cmp edi, dword ptr [esi+8]
        jbe short loc_50CE71
        call dword ptr [mem_00925134]
loc_50CE71:
        lea ecx, [esp+10h]
        mov dword ptr [esp+10h], esi
        mov dword ptr [esp+14h], esi
        mov dword ptr [esp+18h], edi
        call ext_00427A60
        mov edi, dword ptr [esi+8]
        cmp dword ptr [esi+4], edi
        jbe short loc_50CE94
        call dword ptr [mem_00925134]
loc_50CE94:
        lea ecx, [esp+1Ch]
        mov dword ptr [esp+1Ch], esi
        mov dword ptr [esp+20h], esi
        mov dword ptr [esp+24h], edi
        call ext_00427A60
        mov ebx, dword ptr [esp+40h]
        _emit 0x8d
        _emit 0x49
        _emit 0x00
loc_50CEB0:
        mov ebp, dword ptr [esp+14h]
        test ebp, ebp
        je short loc_50CEBE
        cmp ebp, dword ptr [esp+20h]
        je short loc_50CEC8
loc_50CEBE:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp short loc_50CECE
loc_50CEC8:
        mov esi, dword ptr [mem_00925134]
loc_50CECE:
        mov edi, dword ptr [esp+18h]
        cmp edi, dword ptr [esp+24h]
        jae loc_50CF64
        test ebp, ebp
        jne short loc_50CEE2
        call esi
loc_50CEE2:
        cmp edi, dword ptr [ebp+8]
        jb short loc_50CEE9
        call esi
loc_50CEE9:
        mov esi, dword ptr [edi]
        lea eax, [esi+4]
        push ebx
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je short loc_50CF44
        push 28h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+44h], eax
        test eax, eax
        mov dword ptr [esp+30h], 0
        je short loc_50CF20
        mov ecx, eax
        call ext_005088D0
        jmp short loc_50CF22
loc_50CF20:
        xor eax, eax
loc_50CF22:
        push esi
        mov ecx, eax
        mov dword ptr [esp+34h], 0FFFFFFFFh
        mov dword ptr [esp+48h], eax
        call ext_00508950
        mov ecx, dword ptr [esp+3Ch]
        lea eax, [esp+44h]
        push eax
        call ext_0041A920
loc_50CF44:
        cmp edi, dword ptr [ebp+8]
        jb short loc_50CF4F
        call dword ptr [mem_00925134]
loc_50CF4F:
        add edi, 4
        lea ecx, [esp+10h]
        mov dword ptr [esp+18h], edi
        call ext_00427A60
        jmp loc_50CEB0
loc_50CF64:
        mov ecx, dword ptr [esp+28h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 24h
        ret
    }
}

// [0x0050D8C0] sub_0050D8C0 (327 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00427A60();
extern "C" void ext_0050BE20();
extern "C" void ext_0050C480();
extern "C" void ext_0050D7A0();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void __fastcall fn_0050D8C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 08921ABh
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 18h
        cmp byte ptr [esp+34h], 0
        je short loc_50D8E8
        mov ecx, dword ptr [esp+2Ch]
        call ext_0050BE20
loc_50D8E8:
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp+34h]
        add esi, 24h
        push edi
        mov edi, dword ptr [esi+4]
        cmp edi, dword ptr [esi+8]
        jbe short loc_50D901
        call dword ptr [mem_00925134]
loc_50D901:
        lea ecx, [esp+10h]
        mov dword ptr [esp+10h], esi
        mov dword ptr [esp+14h], esi
        mov dword ptr [esp+18h], edi
        call ext_00427A60
        mov edi, dword ptr [esi+8]
        cmp dword ptr [esi+4], edi
        jbe short loc_50D924
        call dword ptr [mem_00925134]
loc_50D924:
        lea ecx, [esp+1Ch]
        mov dword ptr [esp+1Ch], esi
        mov dword ptr [esp+20h], esi
        mov dword ptr [esp+24h], edi
        call ext_00427A60
        mov ebx, dword ptr [esp+40h]
        _emit 0x8d
        _emit 0x49
        _emit 0x00
loc_50D940:
        mov ebp, dword ptr [esp+14h]
        test ebp, ebp
        je short loc_50D94E
        cmp ebp, dword ptr [esp+20h]
        je short loc_50D958
loc_50D94E:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp short loc_50D95E
loc_50D958:
        mov esi, dword ptr [mem_00925134]
loc_50D95E:
        mov edi, dword ptr [esp+18h]
        cmp edi, dword ptr [esp+24h]
        jae loc_50D9F4
        test ebp, ebp
        jne short loc_50D972
        call esi
loc_50D972:
        cmp edi, dword ptr [ebp+8]
        jb short loc_50D979
        call esi
loc_50D979:
        mov esi, dword ptr [edi]
        lea eax, [esi+4]
        push ebx
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je short loc_50D9D4
        push 18h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+44h], eax
        test eax, eax
        mov dword ptr [esp+30h], 0
        je short loc_50D9B0
        mov ecx, eax
        call ext_0050C480
        jmp short loc_50D9B2
loc_50D9B0:
        xor eax, eax
loc_50D9B2:
        push esi
        mov ecx, eax
        mov dword ptr [esp+34h], 0FFFFFFFFh
        mov dword ptr [esp+48h], eax
        call ext_0050D7A0
        mov ecx, dword ptr [esp+3Ch]
        lea eax, [esp+44h]
        push eax
        call ext_0041A920
loc_50D9D4:
        cmp edi, dword ptr [ebp+8]
        jb short loc_50D9DF
        call dword ptr [mem_00925134]
loc_50D9DF:
        add edi, 4
        lea ecx, [esp+10h]
        mov dword ptr [esp+18h], edi
        call ext_00427A60
        jmp loc_50D940
loc_50D9F4:
        mov ecx, dword ptr [esp+28h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 24h
        ret
    }
}

// [0x0050F900] sub_0050F900 (110 bytes)
extern "C" void ext_0050F220();
extern "C" void ext_0050F2A0();
extern "C" void ext_0050F320();
extern "C" void ext_0050F3A0();
extern "C" void ext_0050F420();
extern "C" void ext_0050F4A0();
extern "C" void ext_0050F870();
extern "C" int mem_00A9FA08;
extern "C" int mem_00A9F998;
extern "C" int mem_00A9FA30;
extern "C" int mem_00A9F960;
extern "C" __declspec(naked) void __fastcall fn_0050F900(void* self) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_0050F870
        push    0x950a4c
        lea     ecx, [esp + 0x4]
        call    ext_0050F220
        mov     ecx, dword ptr [mem_00A9FA08]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_0050F2A0
        mov     edx, dword ptr [mem_00A9F998]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_0050F320
        mov     eax, dword ptr [mem_00A9FA30]
        push    eax
        lea     ecx, [esp + 0x4]
        call    ext_0050F3A0
        mov     ecx, dword ptr [mem_00A9F960]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_0050F420
        push    0x950a3c
        lea     ecx, [esp + 0x4]
        call    ext_0050F4A0
        pop     ecx
        ret
    }
}

// [0x00506D40] sub_00506D40 (111 bytes)
extern "C" void ext_00506A80();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_00506D40(void* self, int edx_unused, void* src) {
    __asm {
        push    -0x1
        push    0x891c94
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x8], esi
        mov     edi, dword ptr [esp + 0x1c]
        lea     eax, [edi + 0x4]
        push    eax
        lea     ecx, [esi + 0x4]
        mov     dword ptr [esp + 0x18], 0x0
        mov     dword ptr [esi], 0x94f564
        call    dword ptr [mem_00924FE0]
        lea     ecx, [edi + 0x20]
        push    ecx
        lea     ecx, [esi + 0x20]
        mov     byte ptr [esp + 0x18], 0x1
        call    ext_00506A80
        mov     edx, dword ptr [edi + 0x30]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x30], edx
        mov     eax, dword ptr [edi + 0x34]
        mov     dword ptr [esi + 0x34], eax
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret     0x4
    }
}

// [0x0050C650] sub_0050C650 (111 bytes)
extern "C" void ext_005088D0();
extern "C" void ext_0050C060();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_0050C650(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je no_alloc
        mov ecx, eax
        call ext_005088D0
        jmp after_alloc
    no_alloc:
        xor eax, eax
    after_alloc:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        mov eax, dword ptr [esp + 0x24]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_0050C060
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x0050C700] sub_0050C700 (111 bytes)
extern "C" void ext_0050C0E0();
extern "C" void ext_0050C480();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0050C700(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 0x18
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je no_alloc
        mov ecx, eax
        call ext_0050C480
        jmp after_alloc
    no_alloc:
        xor eax, eax
    after_alloc:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        mov eax, dword ptr [esp + 0x24]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_0050C0E0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00502760] sub_00502760 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_004FF8E0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00502760(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004FF8E0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005027E0] sub_005027E0 (114 bytes)
extern "C" void ext_004FF940();

extern "C" __declspec(naked) void __fastcall fn_005027E0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004FF940
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00502860] sub_00502860 (114 bytes)
extern "C" void ext_004FF9A0();

extern "C" __declspec(naked) void __fastcall fn_00502860(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004FF9A0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005028E0] sub_005028E0 (114 bytes)
extern "C" void ext_004FFA00();

extern "C" __declspec(naked) void __fastcall fn_005028E0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004FFA00
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00502960] sub_00502960 (114 bytes)
extern "C" void ext_004FFA60();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00502960(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004FFA60
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005029E0] sub_005029E0 (114 bytes)
extern "C" void ext_004FFAC0();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005029E0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004FFAC0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00502A60] sub_00502A60 (114 bytes)
extern "C" void ext_004FFB20();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00502A60(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004FFB20
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00502AE0] sub_00502AE0 (114 bytes)
extern "C" void ext_004FFB80();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00502AE0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004FFB80
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00502B60] sub_00502B60 (114 bytes)
extern "C" void ext_004FFBE0();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00502B60(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004FFBE0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00502BE0] sub_00502BE0 (114 bytes)
extern "C" void ext_004FFC40();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00502BE0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004FFC40
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00502C60] sub_00502C60 (114 bytes)
extern "C" void ext_004FFCA0();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00502C60(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004FFCA0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00502CE0] sub_00502CE0 (114 bytes)
extern "C" void ext_004FFD00();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00502CE0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004FFD00
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0050DCF0] sub_0050DCF0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00509360();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0050DCF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00509360
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0050DD70] sub_0050DD70 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005093C0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0050DD70(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005093C0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0050DDF0] sub_0050DDF0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00509420();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0050DDF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00509420
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0050DE70] sub_0050DE70 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00509480();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0050DE70(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00509480
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0050DEF0] sub_0050DEF0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005094E0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0050DEF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005094E0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0050DF70] sub_0050DF70 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005095A0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0050DF70(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005095A0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0050F220] sub_0050F220 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0050E7B0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0050F220(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_0050E7B0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0050F2A0] sub_0050F2A0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0050E810();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0050F2A0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_0050E810
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0050F320] sub_0050F320 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0050E870();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0050F320(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_0050E870
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0050F3A0] sub_0050F3A0 (114 bytes)
extern "C" void ext_0050E8D0();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0050F3A0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_0050E8D0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0050F420] sub_0050F420 (114 bytes)
extern "C" void ext_0050E930();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0050F420(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_0050E930
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005072E0] sub_005072E0 (117 bytes)
extern "C" void ext_005061A0();
extern "C" void ext_00506D40();
extern "C" int mem_00891DF0;
extern "C" int mem_0094F0DC;
extern "C" int mem_0094F654;
extern "C" int mem_0094F648;
extern "C" __declspec(naked) void* __fastcall fn_005072E0(void* self, int edx_unused, const void* other) {
    __asm {
        push -0x1
        push offset mem_00891DF0
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_00506D40
        mov dword ptr [esi + 0x38], offset mem_0094F0DC
        xor eax, eax
        lea ecx, [esi + 0x3c]
        mov dword ptr [esi], offset mem_0094F654
        mov dword ptr [esi + 0x38], offset mem_0094F648
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x1c], ecx
        mov dword ptr [ecx + 0x4], eax
        mov dword ptr [ecx + 0x8], eax
        mov dword ptr [ecx + 0xc], eax
        add edi, 0x3c
        push edi
        mov byte ptr [esp + 0x18], 0x1
        call ext_005061A0
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00507540] sub_00507540 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_00504A30();
extern "C" void ext_005072E0();
extern "C" void ext_00528100();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_00507540(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa40dfc
        push 0xa4090c
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x4c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_005072E0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_00504A30
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x4c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_00528100
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x00509D60] sub_00509D60 (117 bytes)
extern "C" void ext_00508C30();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_00509D60(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_NULL_00509D60
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call ext_00508C30
        jmp L_DONE_00509D60
L_NULL_00509D60:
        xor eax, eax
L_DONE_00509D60:
        push eax
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00509E30] sub_00509E30 (117 bytes)
extern "C" void ext_00508D30();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_00509E30(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_NULL_00509E30
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call ext_00508D30
        jmp L_DONE_00509E30
L_NULL_00509E30:
        xor eax, eax
L_DONE_00509E30:
        push eax
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00506930] sub_00506930 (121 bytes)
extern "C" void ext_0049FD50();
extern "C" void ext_004A6970();

extern "C" __declspec(naked) void* __fastcall fn_00506930(void* self, int edx_unused, const void* other) {
    __asm {
        push    -1
        push    0x893bfe
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0xc], esi
        call    ext_0049FD50
        lea     eax, [edi + 0x10]
        lea     ecx, [esi + 0x10]
        push    eax
        mov     dword ptr [esp + 0x18], 0
        call    ext_0049FD50
        lea     ecx, [edi + 0x20]
        push    ecx
        lea     ecx, [esi + 0x20]
        mov     byte ptr [esp + 0x18], 1
        call    ext_004A6970
        lea     edx, [edi + 0x30]
        push    edx
        lea     ecx, [esi + 0x30]
        mov     byte ptr [esp + 0x18], 2
        call    ext_004A6970
        mov     al, byte ptr [edi + 0x40]
        mov     ecx, dword ptr [esp + 0xc]
        mov     byte ptr [esi + 0x40], al
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     4
    }
}

// [0x00501220] sub_00501220 (126 bytes)
extern "C" void ext_00500E70();

extern "C" __declspec(naked) void __fastcall fn_00501220(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push    -1
        push    0x008A7A5B
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        push    ecx
        push    esi
        push    edi
        push    0x28
        mov     esi, ecx
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 8], eax
        test    eax, eax
        mov     edi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], 0
        je      L_null
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        push    edi
        push    ecx
        push    esi
        mov     ecx, eax
        call    ext_00500E70
        jmp     L_done
    L_null:
        xor     eax, eax
    L_done:
        push    eax
        mov     dword ptr [esp + 0x18], -1
        call    ext_00665870
        mov     ecx, eax
        call    ext_00666670
        mov     ecx, dword ptr [esp + 0xC]
        mov     eax, edi
        pop     edi
        pop     esi
        mov     fs:[0], ecx
        add     esp, 0x10
        ret     0x10
    }
}

// [0x0050C060] sub_0050C060 (126 bytes)
extern "C" void ext_0050B9B0();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_0050C060(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push    -1
        push    0x008A7A5B
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        push    ecx
        push    esi
        push    edi
        push    0x28
        mov     esi, ecx
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 8], eax
        test    eax, eax
        mov     edi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], 0
        je      L_null
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        push    edi
        push    ecx
        push    esi
        mov     ecx, eax
        call    ext_0050B9B0
        jmp     L_done
    L_null:
        xor     eax, eax
    L_done:
        push    eax
        mov     dword ptr [esp + 0x18], -1
        call    ext_00665870
        mov     ecx, eax
        call    ext_00666670
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, edi
        pop     edi
        pop     esi
        mov     fs:[0], ecx
        add     esp, 0x10
        ret     0x10
    }
}

// [0x0050C0E0] sub_0050C0E0 (126 bytes)
extern "C" void ext_0050BBD0();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_0050C0E0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push    -1
        push    0x008A7A5B
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        push    ecx
        push    esi
        push    edi
        push    0x28
        mov     esi, ecx
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 8], eax
        test    eax, eax
        mov     edi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], 0
        je      L_null
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        push    edi
        push    ecx
        push    esi
        mov     ecx, eax
        call    ext_0050BBD0
        jmp     L_done
    L_null:
        xor     eax, eax
    L_done:
        push    eax
        mov     dword ptr [esp + 0x18], -1
        call    ext_00665870
        mov     ecx, eax
        call    ext_00666670
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, edi
        pop     edi
        pop     esi
        mov     fs:[0], ecx
        add     esp, 0x10
        ret     0x10
    }
}

// [0x00507380] sub_00507380 (145 bytes)
extern "C" void ext_00506930();
extern "C" void ext_00506D40();
extern "C" void ext_00506DB0();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_00507380(void* self, int edx_unused, void* src) {
    __asm {
        push    -0x1
        push    0x893bc9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0xc], esi
        call    ext_00506D40
        lea     eax, [edi + 0x38]
        push    eax
        lea     ecx, [esi + 0x38]
        mov     dword ptr [esp + 0x18], 0x0
        mov     dword ptr [esi], 0x94f6cc
        call    ext_00506DB0
        lea     ecx, [edi + 0x4c]
        push    ecx
        lea     ecx, [esi + 0x4c]
        mov     byte ptr [esp + 0x18], 0x1
        call    ext_00506DB0
        lea     edx, [edi + 0x60]
        push    edx
        lea     ecx, [esi + 0x60]
        mov     byte ptr [esp + 0x18], 0x2
        call    ext_00506930
        add     edi, 0xa4
        push    edi
        lea     ecx, [esi + 0xa4]
        mov     byte ptr [esp + 0x18], 0x3
        call    dword ptr [mem_00924FE0]
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret     0x4
    }
}

// [0x005038F0] sub_005038F0 (126 bytes)
extern "C" void ext_005037D0();
extern "C" void ext_00502760();
extern "C" void ext_005027E0();
extern "C" void ext_00502860();
extern "C" void ext_005028E0();
extern "C" void ext_00502960();
extern "C" void ext_005029E0();
extern "C" void ext_00502A60();
extern "C" int mem_00A9F650;
extern "C" int mem_00A9F678;
extern "C" int mem_00A9F930;
extern "C" int mem_00A9F8D0;
extern "C" int mem_00A9F7E8;
extern "C" __declspec(naked) void __fastcall fn_005038F0(void* self) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_005037D0
        mov     ecx, dword ptr [mem_00A9F650]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_00502760
        mov     edx, dword ptr [mem_00A9F678]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_005027E0
        push    0x94f024
        lea     ecx, [esp + 0x4]
        call    ext_00502860
        mov     eax, dword ptr [mem_00A9F930]
        push    eax
        lea     ecx, [esp + 0x4]
        call    ext_005028E0
        mov     ecx, dword ptr [mem_00A9F8D0]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_00502960
        push    0x94f018
        lea     ecx, [esp + 0x4]
        call    ext_005029E0
        mov     edx, dword ptr [mem_00A9F7E8]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_00502A60
        pop     ecx
        ret
    }
}

// [0x0050F100] sub_0050F100 (127 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_0050EEA0();
extern "C" void ext_00517230();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0050F100(void* self) {
    __asm {
        mov eax, dword ptr [mem_00924E90]
        push esi
        push eax
        mov esi, ecx
        mov ecx, dword ptr [mem_00924FA0]
        push 0x950a1c
        push ecx
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        cmp byte ptr [esi + 0x30], 0
        jne L_debug
        push 0
        mov ecx, esi
        call ext_0050EEA0
        pop esi
        ret
    L_debug:
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push edi
        xor edi, edi
    L_loop:
        mov ecx, dword ptr [esi + 0x20]
        test ecx, ecx
        je L_done
        mov eax, dword ptr [esi + 0x24]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae L_done
        test ecx, ecx
        je L_inv
        mov eax, dword ptr [esi + 0x24]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jb L_ok
    L_inv:
        call ebx
    L_ok:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [esi + 0x20]
        mov ecx, dword ptr [ecx + 4*edi]
        push eax
        call ext_00517230
        add edi, 1
        jmp L_loop
    L_done:
        pop edi
        pop ebx
        pop esi
        ret
    }
}

// [0x00504640] sub_00504640 (128 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_00503A30();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_00504640(void* self) {
    __asm {
        push -1
        push 0x87acb7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        mov dword ptr [esi], 0x94f0bc
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        lea eax, [esp + 0x8]
        push eax
        mov byte ptr [esp + 0x30], 0x2
        call ext_00503A30
        add esp, 0x4
        push eax
        mov ecx, 0xb5962c
        mov byte ptr [esp + 0x30], 0x3
        call ext_0040ECB0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x00506450] sub_00506450 (128 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_00504A30();

extern "C" __declspec(naked) void* __fastcall fn_00506450(void* self) {
    __asm {
        push -1
        push 0x87acb7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        mov dword ptr [esi], 0x94f634
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        lea eax, [esp + 0x8]
        push eax
        mov byte ptr [esp + 0x30], 0x2
        call ext_00504A30
        add esp, 0x4
        push eax
        mov ecx, 0xb5962c
        mov byte ptr [esp + 0x30], 0x3
        call ext_0040ECB0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x0050F1A0] sub_0050F1A0 (128 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_0050E3B0();

extern "C" __declspec(naked) void* __fastcall fn_0050F1A0(void* self) {
    __asm {
        push -1
        push 0x87acb7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        mov dword ptr [esi], 0x950a38
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        lea eax, [esp + 0x8]
        push eax
        mov byte ptr [esp + 0x30], 0x2
        call ext_0050E3B0
        add esp, 0x4
        push eax
        mov ecx, 0xb5962c
        mov byte ptr [esp + 0x30], 0x3
        call ext_0040ECB0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x005037D0] sub_005037D0 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005037D0(void* self) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa40828
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_503823
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_503823:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x00503860] sub_00503860 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_00503860(void* self) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa4084c
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_5038b3
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_5038b3:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x00507D70] sub_00507D70 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_00507D70(void* self) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa40e68
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_507dc3
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_507dc3:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x0050E0B0] sub_0050E0B0 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050E0B0(void* self) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa41a10
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_50e103
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_50e103:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x0050E140] sub_0050E140 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0050E140(void* self) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa41a38
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_50e193
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_50e193:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x0050E1D0] sub_0050E1D0 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050E1D0(void* self) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa41a58
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_50e223
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_50e223:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x0050F870] sub_0050F870 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050F870(void* self) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa41d84
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_50f8c3
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_50f8c3:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x00508180] sub_00508180 (144 bytes)
extern "C" void ext_00506E10();
extern "C" void ext_0059A140();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00508180(void* self) {
    __asm {
        mov     eax, dword ptr [esp + 0x0c]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        cmp     eax, ebp
        mov     ebx, eax
        je      loc_508203

        push    esi
        mov     esi, dword ptr [esp + 0x24]
        push    edi

loc_508196:
        mov     ecx, dword ptr [ebx]
        call    ext_00506E10
        mov     ecx, dword ptr [esi + 0x04]
        test    ecx, ecx
        mov     dword ptr [esp + 0x28], eax
        jne     loc_5081AC
        xor     edi, edi
        jmp     loc_5081B4

loc_5081AC:
        mov     edi, dword ptr [esi + 0x08]
        sub     edi, ecx
        sar     edi, 2

loc_5081B4:
        test    ecx, ecx
        je      loc_5081D1
        mov     edx, dword ptr [esi + 0x0c]
        sub     edx, ecx
        sar     edx, 2
        cmp     edi, edx
        jae     loc_5081D1
        mov     ecx, dword ptr [esi + 0x08]
        mov     dword ptr [ecx], eax
        add     ecx, 4
        mov     dword ptr [esi + 0x08], ecx
        jmp     loc_5081F1

loc_5081D1:
        mov     edi, dword ptr [esi + 0x08]
        cmp     ecx, edi
        jbe     loc_5081DE
        call    dword ptr [mem_00925134]

loc_5081DE:
        lea     eax, [esp + 0x28]
        push    eax
        push    edi
        push    esi
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, esi
        call    ext_0059A140

loc_5081F1:
        add     ebx, 4
        cmp     ebx, ebp
        jne     loc_508196
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        pop     ebx
        ret

loc_508203:
        mov     eax, dword ptr [esp + 0x0c]
        mov     edx, dword ptr [esp + 0x20]
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        ret
    }
}

// [0x00501970] sub_00501970 (282 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_004FDD00();
extern "C" void ext_00500340();
extern "C" void ext_0059A140();
extern "C" void ext_006A6DD2();
extern "C" int mem_0088A3A8;
extern "C" int mem_009D1278;
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void* __fastcall fn_00501970(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push offset mem_0088A3A8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x34
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x4c]
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x10], ebp
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, ebp
        mov dword ptr [esp + 0x4c], 0
        call edx
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        mov dword ptr [esp + 0x54], eax
        jbe L1
        call dword ptr [mem_00925134]
    L1:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L2
        call dword ptr [mem_00925134]
    L2:
        mov eax, dword ptr [esp + 0x54]
        mov ecx, dword ptr [esp + 0x54]
        push 0
        push eax
        push ecx
        push ebx
        push edi
        mov dword ptr [esp + 0x2c], edi
        call ext_00500340
        mov ebx, dword ptr [esi + 0x8]
        add esp, 0x14
        cmp dword ptr [esi + 0x4], ebx
        mov edi, eax
        jbe L3
        call dword ptr [mem_00925134]
    L3:
        test esi, esi
        je L4
        cmp esi, esi
        je L5
    L4:
        call dword ptr [mem_00925134]
    L5:
        cmp edi, ebx
        je L8
        test esi, esi
        jne L6
        call dword ptr [mem_00925134]
    L6:
        cmp edi, dword ptr [esi + 0x8]
        jb L7
        call dword ptr [mem_00925134]
    L7:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        mov ebx, dword ptr [esp + 0x54]
        mov eax, dword ptr [edx + 0x24]
        push ebx
        call eax
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je L8
        push ebx
        call ext_004FDD00
        push eax
        lea ecx, [esp + 0x24]
        call ext_004142E0
        push offset mem_009D1278
        lea ecx, [esp + 0x20]
        push ecx
        call ext_006A6DD2
    L8:
        lea edx, [esp + 0x54]
        push edx
        push edi
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0
        mov dword ptr [esp + 0x64], ebp
        call ext_0059A140
        mov ecx, dword ptr [esp + 0x44]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x40
        ret 0x8
    }
}

// [0x00501F20] sub_00501F20 (315 bytes)
extern "C" void ext_00427A60();
extern "C" void ext_00501970();
extern "C" void ext_0050BE20();
extern "C" void ext_00683620();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;
extern "C" __declspec(naked) void __fastcall fn_00501F20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8921ab
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x18
        cmp byte ptr [esp + 0x34], 0x0
        je L_skip_be20
        mov ecx, dword ptr [esp + 0x2c]
        call ext_0050BE20
L_skip_be20:
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x34]
        add esi, 0x24
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_ok1
        call dword ptr [mem_00925134]
L_ok1:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_ok2
        call dword ptr [mem_00925134]
L_ok2:
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        lea ecx, [esp + 0x1c]
L_call:
        call ext_00427A60
        mov ebx, dword ptr [esp + 0x14]
        xor esi, esi
        cmp ebx, esi
        je L_bad1
        cmp ebx, dword ptr [esp + 0x20]
        je L_ok3
L_bad1:
        call dword ptr [mem_00925134]
L_ok3:
        mov ebp, dword ptr [esp + 0x18]
        cmp ebp, dword ptr [esp + 0x24]
        jae L_end
        cmp ebx, esi
        jne L_ok4
        call dword ptr [mem_00925134]
L_ok4:
        cmp ebp, dword ptr [ebx + 0x8]
        jb L_ok5
        call dword ptr [mem_00925134]
L_ok5:
        mov edi, dword ptr [ebp]
        mov ecx, dword ptr [esp + 0x40]
        lea eax, [edi + 0x4]
        push ecx
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_next
        push 0x90
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x44], eax
        cmp eax, esi
        mov dword ptr [esp + 0x30], esi
        je L_nonnull
        mov ecx, eax
        call ext_00683620
        mov esi, eax
L_nonnull:
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [edx + 0x4]
        lea ecx, [esi + 0x8]
        push edi
        mov dword ptr [esp + 0x34], -0x1
        call eax
        mov ecx, dword ptr [esp + 0x3c]
        push 0x0
        push esi
        call ext_00501970
L_next:
        cmp ebp, dword ptr [ebx + 0x8]
        jb L_ok6
        call dword ptr [mem_00925134]
L_ok6:
        add ebp, 0x4
        mov dword ptr [esp + 0x18], ebp
        lea ecx, [esp + 0x10]
        jmp L_call
L_end:
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x24
        ret
    }
}

// [0x005046C0] sub_005046C0 (211 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_004276B0();
extern "C" void ext_00503A70();
extern "C" void ext_005CD120();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005046C0(void* self) {
    __asm {
        push -1
        push 0x878f31
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x64
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x80]
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 0x84]
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x44], ecx
        lea edx, [esp + 0x28]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x7c], 0
        call ext_005CD120
        lea ecx, [esp + 0x28]
        mov bl, al
        mov dword ptr [esp + 0x78], -1
        call dword ptr [mem_00924FF4]
        test bl, bl
        je L_fail_5046C0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr [esp + 0x64]
        mov dword ptr fs:[0], ecx
        add esp, 0x70
        ret 0xc
L_fail_5046C0:
        cmp byte ptr [esp + 0x88], 0
        je L_ret_5046C0
        lea eax, [esp + 0xc]
        push edi
        push eax
        call ext_004276B0
        add esp, 8
        push eax
        mov dword ptr [esp + 0x7c], 1
        call ext_00503A70
        push eax
        lea ecx, [esp + 0x50]
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x4c]
        push ecx
        call ext_006A6DD2
L_ret_5046C0:
        mov ecx, dword ptr [esp + 0x70]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x70
        ret 0xc
    }
}

// [0x00506850] sub_00506850 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AEBB90;
extern "C" int mem_00AEBB8C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00506850(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x891d17
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AEBB90], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AEBB90], 0x1
        mov     ecx, offset mem_00AEBB8C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AEBB8C], 0x94f124
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AEBB8C
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x0050DA10] sub_0050DA10 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AEBCC8;
extern "C" int mem_00AEBCC4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0050DA10(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8921d7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AEBCC8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AEBCC8], 0x1
        mov     ecx, offset mem_00AEBCC4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AEBCC4], 0x950134
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AEBCC4
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x0050DFF0] sub_0050DFF0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AEBCD0;
extern "C" int mem_00AEBCCC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0050DFF0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x892227
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AEBCD0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AEBCD0], 0x1
        mov     ecx, offset mem_00AEBCCC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AEBCCC], 0x95000c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AEBCCC
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x0050F4A0] sub_0050F4A0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AEBD58;
extern "C" int mem_00AEBD54;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0050F4A0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8923b7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AEBD58], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AEBD58], 0x1
        mov     ecx, offset mem_00AEBD54
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AEBD54], 0x95091c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AEBD54
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}
