// Decompiled translation unit: src/leaf/decompiled_540000.cpp

// [0x00543530] sub_00543530 (21 bytes)
extern "C" __declspec(naked) void __fastcall fn_00543530(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov byte ptr [ecx + 0x90], 1
        mov byte ptr [ecx + 0x93], 0
        mov eax, dword ptr [eax + 0x40]
        jmp eax
    }
}

// [0x00543580] sub_00543580 (21 bytes)
extern "C" __declspec(naked) void __fastcall fn_00543580(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov byte ptr [ecx + 0x91], 1
        mov byte ptr [ecx + 0x94], 0
        mov eax, dword ptr [eax + 0x4c]
        jmp eax
    }
}

// [0x005435D0] sub_005435D0 (21 bytes)
extern "C" __declspec(naked) void __fastcall fn_005435D0(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov byte ptr [ecx + 0x92], 1
        mov byte ptr [ecx + 0x95], 0
        mov eax, dword ptr [eax + 0x54]
        jmp eax
    }
}

// [0x00540D00] sub_00540D00 (24 bytes)
// idx = this->[0xf8]; this2 = this->slots[idx*15 + 2] (stride 0x3C, starting at +8); tail-call vfunc[7] (+0x1c) on this2.
extern "C" __declspec(naked) void __fastcall fn_00540D00(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xf8]
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov ecx, dword ptr [ecx + 4*edx + 8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1c]
        jmp edx
    }
}

// [0x005434C0] sub_005434C0 (25 bytes)
extern "C" __declspec(naked) void __fastcall fn_005434C0(void* self) {
    __asm {
        cmp dword ptr [ecx + 0x88], 0
        jne forward
        mov al, 1
        ret
    forward:
        mov ecx, dword ptr [ecx + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x20]
        jmp edx
    }
}

// [0x005478B0] sub_005478B0 (14 bytes)
extern "C" void ext_005B11E0();
extern "C" __declspec(naked) void __fastcall fn_005478B0(void* self) {
    __asm {
        push 0x5
        add ecx, 0x210
        call ext_005B11E0
        ret
    }
}

// [0x005478C0] sub_005478C0 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_005478C0(void* self) {
    __asm {
        push 0x3
        add ecx, 0x210
        call ext_005B11E0
        ret
    }
}

// [0x005478D0] sub_005478D0 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_005478D0(void* self) {
    __asm {
        push 0x4
        add ecx, 0x210
        call ext_005B11E0
        ret
    }
}

// [0x005470D0] sub_005470D0 (22 bytes)
extern "C" void ext_00543350();
extern "C" float mem_0093F8F0;
extern "C" void __fastcall fn_005470D0(void* self) {
    ext_00543350();
    *(float*)((char*)self + 0xc4) = mem_0093F8F0;
}

// [0x00549920] sub_00549920 (26 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_00552850();
extern "C" void __fastcall fn_00549920(void* self) {
    void* quadric = *(void**)((unsigned char*)self + 0x18);
    *(void**)self = (void*)0x956cfc;
    ((void (__stdcall*)(void*))ext_0063E006)(quadric);
    ((void (__fastcall*)(void*))ext_00552850)(self);
}

// [0x00548240] sub_00548240 (27 bytes)
extern "C" void ext_005B11E0();
extern "C" __declspec(naked) float __fastcall fn_00548240(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xa0]
        test eax, eax
        je short L_one
        push 5
        lea ecx, [eax + 0x210]
        call ext_005B11E0
        ret
L_one:
        fld1
        ret
    }
}

// [0x0054C6E0] sub_0054C6E0 (27 bytes)
extern "C" void ext_0041A920();
extern "C" void __fastcall fn_0054C6E0(void* self, int edx_unused, void* a1) {
    ((void (__thiscall*)(void*, void*))ext_0041A920)((char*)self + 0x14, (void*)&a1);
    ((void**)a1)[4] = self;
}

// [0x005481A0] sub_005481A0 (31 bytes)
extern "C" void ext_005B11E0();
extern "C" double __fastcall fn_005481A0(void* self) {
    typedef double (__thiscall *Callee_005B11E0)(void* self, int a);
    void* inner = *(void**)((char*)self + 0xa0);
    if (inner) {
        return ((Callee_005B11E0)ext_005B11E0)((char*)inner + 0x210, 4);
    }
    return *(double*)((char*)self + 0xc8);
}

// [0x005481C0] sub_005481C0 (31 bytes)
extern "C" void ext_005B11E0();
extern "C" __declspec(naked) double __fastcall fn_005481C0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xa0]
        test eax, eax
        je L_005481D8
        push 0x3
        lea ecx, [eax + 0x210]
        call ext_005B11E0
        ret
L_005481D8:
        fld qword ptr [ecx + 0xd0]
        ret
    }
}

// [0x005498E0] sub_005498E0 (35 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_00552850();

extern "C" __declspec(naked) void __fastcall fn_005498E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x18]
        push eax
        mov dword ptr [esi], 0x956ce4
        call ext_0063E006
        mov ecx, dword ptr [esi + 0x1c]
        push ecx
        call ext_0063E006
        mov ecx, esi
        pop esi
        jmp ext_00552850
    }
}

// [0x005499E0] sub_005499E0 (35 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_00552850();
extern "C" void __fastcall fn_005499E0(void* self) {
    void* q1 = *(void**)((unsigned char*)self + 0x24);
    *(void**)self = (void*)0x956d14;
    ((void (__stdcall*)(void*))ext_0063E006)(q1);
    void* q2 = *(void**)((unsigned char*)self + 0x28);
    ((void (__stdcall*)(void*))ext_0063E006)(q2);
    ((void (__fastcall*)(void*))ext_00552850)(self);
}

// [0x00543550] sub_00543550 (40 bytes)
extern "C" __declspec(naked) void __fastcall fn_00543550(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x44]
        push ecx
        push edx
        mov ecx, esi
        call eax
        xor cl, cl
        mov byte ptr [esi + 0x90], cl
        mov byte ptr [esi + 0x93], cl
        pop esi
        ret 0x8
    }
}

// [0x005435A0] sub_005435A0 (40 bytes)
extern "C" __declspec(naked) void __fastcall fn_005435A0(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x50]
        push ecx
        push edx
        mov ecx, esi
        call eax
        xor cl, cl
        mov byte ptr [esi + 0x91], cl
        mov byte ptr [esi + 0x94], cl
        pop esi
        ret 0x8
    }
}

// [0x005435F0] sub_005435F0 (40 bytes)
extern "C" __declspec(naked) void __fastcall fn_005435F0(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x58]
        push ecx
        push edx
        mov ecx, esi
        call eax
        xor cl, cl
        mov byte ptr [esi + 0x92], cl
        mov byte ptr [esi + 0x95], cl
        pop esi
        ret 0x8
    }
}

// [0x00547E80] sub_00547E80 (40 bytes)
extern "C" __declspec(naked) void __fastcall fn_00547E80(void* self) {
    __asm {
        cmp dword ptr [ecx + 0a0h], 0
        jne short done
        mov eax, dword ptr [esp + 4]
        fld dword ptr [eax]
        fstp dword ptr [ecx + 68h]
        fld dword ptr [eax + 4]
        fstp dword ptr [ecx + 6ch]
        fld dword ptr [eax + 8]
        fstp dword ptr [ecx + 70h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 44h]
        call edx
done:
        ret 4
    }
}

// [0x00549950] sub_00549950 (40 bytes)
extern "C" void ext_0063E02A();

extern "C" void __fastcall fn_00549950(void* self, int edx_unused, float radius, float height) {
    typedef void (__stdcall *GluCylinderFn)(void*, double, double, double, int, int);
    void* quadric = *(void**)((char*)self + 0x18);
    ((GluCylinderFn)ext_0063E02A)(quadric, (double)radius, 0.0, (double)height, 8, 1);
}

// [0x00540549] sub_00540549 (41 bytes)
extern "C" int mem_0092551C;
extern "C" int mem_00925428;
extern "C" int mem_00925438;
extern "C" __declspec(naked) void __cdecl fn_00540549() {
    __asm {
        push 0x1b01
        push 0x408
        call dword ptr [mem_0092551C]
        push 0x405
        call dword ptr [mem_00925428]
        mov dword ptr [esp + 4], 0xb44
        jmp dword ptr [mem_00925438]
    }
}

// [0x0054E3D0] sub_0054E3D0 (42 bytes)
extern "C" int mem_00955D10;
extern "C" int mem_0093F7B8;

extern "C" __declspec(naked) void __fastcall fn_0054E3D0(void* self) {
    __asm {
        fldz
        mov byte ptr [ecx + 0x4], 0x1
        fstp dword ptr [ecx + 0x48]
        fld dword ptr [mem_00955D10]
        fstp dword ptr [ecx + 0x4c]
        fld1
        fst dword ptr [ecx + 0x5c]
        fstp dword ptr [ecx + 0x14]
        fld dword ptr [mem_0093F7B8]
        fst dword ptr [ecx + 0x58]
        fst dword ptr [ecx + 0x34]
        fstp dword ptr [ecx + 0x24]
        ret
    }
}

// [0x00547B70] sub_00547B70 (43 bytes)
extern "C" int mem_00955D14;
extern "C" int mem_009254CC;

extern "C" __declspec(naked) void __fastcall fn_00547B70(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x24]
        cmp byte ptr [eax], 0
        jne done
        fldz
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x8]
        fld1
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_00955D14]
        fstp dword ptr [esp]
        call dword ptr [mem_009254CC]
done:
        ret
    }
}

// [0x00540572] sub_00540572 (52 bytes)
extern "C" int mem_009254E4;
extern "C" int mem_00925418;
extern "C" __declspec(naked) void __cdecl fn_00540572() {
    __asm {
        push 0x1b02
        push 0x408
        call dword ptr [mem_0092551C]
        push 0x901
        call dword ptr [mem_009254E4]
        push 0x405
        call dword ptr [mem_00925428]
        mov dword ptr [esp + 4], 0xb44
        jmp dword ptr [mem_00925418]
    }
}

// [0x005434F0] sub_005434F0 (54 bytes)
extern "C" __declspec(naked) void __fastcall fn_005434F0(void* self) {
    __asm {
        cmp byte ptr [ecx + 0x90], 0
        mov al, 1
        je skip_93
        mov byte ptr [ecx + 0x93], al
    skip_93:
        cmp byte ptr [ecx + 0x91], 0
        je skip_94
        mov byte ptr [ecx + 0x94], al
    skip_94:
        cmp byte ptr [ecx + 0x92], 0
        je skip_95
        mov byte ptr [ecx + 0x95], al
    skip_95:
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x3c]
        jmp eax
    }
}

// [0x00543E00] sub_00543E00 (55 bytes)
extern "C" int mem_0092C508;
extern "C" int mem_0093F8EC;
extern "C" __declspec(naked) void __fastcall fn_00543E00(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        fadd dword ptr [ecx + 0x14]
        fstp dword ptr [ecx + 0x14]
        fld dword ptr [ecx + 0x14]
        fcomp qword ptr [mem_0092C508]
        fnstsw ax
        test ah, 0x5
        jp clamp
        fld dword ptr [mem_0093F8EC]
    store:
        fstp dword ptr [ecx + 0x14]
        ret 4
    clamp:
        fld1
        fcom dword ptr [ecx + 0x14]
        fnstsw ax
        test ah, 0x5
        jnp store
        fstp st(0)
        ret 4
    }
}

// [0x00540D20] sub_00540D20 (56 bytes)
extern "C" int mem_00924FC0;
extern "C" int mem_00A44BB8;
extern "C" __declspec(naked) unsigned char __stdcall fn_00540D20(const void* s) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, offset mem_00A44BB8
    loop_top:
        mov eax, dword ptr [esi]
        push eax
        push edi
        call ebx
        add esp, 0x8
        test al, al
        jne found
        add esi, 0x4
        cmp esi, offset mem_00A44BB8 + 0x1c
        jl loop_top
        pop edi
        pop esi
        pop ebx
        ret 0x4
    found:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

extern "C" int mem_0092551C;
extern "C" int mem_00925428;
extern "C" int mem_00925418;

// [0x00540510] sub_00540510 (57 bytes)
extern "C" __declspec(naked) void __fastcall fn_00540510(void* self) {
    __asm {
        cmp byte ptr [ecx + 0x14], 0x0
        _emit 0x74
        _emit 0x5c
        cmp dword ptr [esp + 0x4], 0x1c02
        _emit 0x75
        _emit 0x29
        push 0x1b02
        push 0x408
        call dword ptr [mem_0092551C]
        push 0x404
        call dword ptr [mem_00925428]
        mov dword ptr [esp + 0x4], 0xb44
        jmp dword ptr [mem_00925418]
    }
}

// [0x00548110] sub_00548110 (58 bytes)
extern "C" void __fastcall fn_00548110(void* self, int edx_unused, int a1, int a2) {
    (void)edx_unused;
    if (a2 == 0) a2 = 1;
    if (a1 == 0) a1 = 1;
    *(double*)((char*)self + 0xb0) = (double)a1;
    *(double*)((char*)self + 0xb8) = (double)a2;
    *(double*)((char*)self + 0xc0) = (double)a1 / (double)a2;
}

// [0x00540E10] sub_00540E10 (34 bytes)
extern "C" void ext_00548110();
extern "C" __declspec(naked) void __fastcall fn_00540E10(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        test ecx, ecx
        mov dword ptr [eax], ecx
        je done
        mov edx, dword ptr [eax + 0x10]
        sub edx, dword ptr [eax + 0x8]
        push edx
        mov edx, dword ptr [eax + 0xc]
        sub edx, dword ptr [eax + 0x4]
        push edx
        call ext_00548110
    done:
        ret 0x4
    }
}

// [0x00540DD0] sub_00540DD0 (56 bytes)
extern "C" void ext_00548110();
extern "C" __declspec(naked) void __fastcall fn_00540DD0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax]
        test ecx, ecx
        je done
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [edx]
        mov dword ptr [eax + 0x4], esi
        mov esi, dword ptr [edx + 0x4]
        mov dword ptr [eax + 0x8], esi
        mov esi, dword ptr [edx + 0x8]
        mov dword ptr [eax + 0xc], esi
        mov edx, dword ptr [edx + 0xc]
        mov dword ptr [eax + 0x10], edx
        sub edx, dword ptr [eax + 0x8]
        push edx
        mov edx, dword ptr [eax + 0xc]
        sub edx, dword ptr [eax + 0x4]
        push edx
        call ext_00548110
        pop esi
    done:
        ret 0x4
    }
}

// [0x005491B0] sub_005491B0 (58 bytes)
extern "C" int mem_00AE5598;
extern "C" int mem_00AE558C;
extern "C" int mem_00AE5590;
extern "C" int mem_00AE5594;

extern "C" void* __fastcall fn_005491B0(char* self) {
    if (*(int*)(self + 0xa0) != 0) {
        if (!(mem_00AE5598 & 1)) {
            mem_00AE5598 |= 1;
            *(float*)&mem_00AE558C = 0.0f;
            *(float*)&mem_00AE5590 = 0.0f;
            *(float*)&mem_00AE5594 = 0.0f;
        }
        return (void*)&mem_00AE558C;
    }
    return self + 0x68;
}

// [0x0054EFF0] sub_0054EFF0 (60 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_0054EFF0(void* self, int edx_unused, unsigned int index) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x1c]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        je L_invalid
        mov ecx, dword ptr [esi + 0x20]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L_ok
    L_invalid:
        call dword ptr [mem_00925134]
    L_ok:
        mov eax, edi
        imul eax, eax, 0x68
        add eax, dword ptr [esi + 0x1c]
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0054ECB0] sub_0054ECB0 (60 bytes)
extern "C" void ext_006A5C5C();
extern "C" int mem_009253D4;
extern "C" void __fastcall fn_0054ECB0(void* self) {
    int* p = (int*)self;
    p[0] = 0x956fdc;
    ((void (__stdcall*)())mem_009253D4)();
    if (p[2] != 0) {
        ((void (__cdecl*)(int))ext_006A5C5C)(p[2]);
    }
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[0] = 0x956f94;
}

// [0x00546520] sub_00546520 (75 bytes)
extern "C" int __fastcall fn_00546520(float* self, int edx_unused, float* other) {
    if (self[0] == other[0] && self[1] == other[1] && self[2] == other[2] && self[3] == other[3]) {
        return 1;
    }
    return 0;
}

// [0x00547080] sub_00547080 (76 bytes)
extern "C" __declspec(naked) void __fastcall fn_00547080(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        fld dword ptr [edx]
        mov eax, dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [eax]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x4]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [edx + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x8]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [edx + 0xc]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0xc]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0xc]
        ret 0x8
    }
}

// [0x00540130] sub_00540130 (79 bytes)
extern "C" void ext_00532B40();
extern "C" void ext_00543320();

extern "C" __declspec(naked) void __fastcall fn_00540130(void* self) {
    __asm {
        push -1
        push 0x00897908
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x98]
        mov dword ptr [esp + 0x10], 0x0
        call ext_00532B40
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00543320
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00544BE0] sub_00544BE0 (79 bytes)
extern "C" void ext_00549920();
extern "C" void ext_00543320();

extern "C" __declspec(naked) void __fastcall fn_00544BE0(void* self) {
    __asm {
        push -1
        push 0x00897908
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x98]
        mov dword ptr [esp + 0x10], 0x0
        call ext_00549920
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00543320
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00545A70] sub_00545A70 (79 bytes)
extern "C" void ext_00543320();
extern "C" void ext_005499E0();

extern "C" __declspec(naked) void __fastcall fn_00545A70(void* self) {
    __asm {
        push -1
        push 0x00897908
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x9c]
        mov dword ptr [esp + 0x10], 0x0
        call ext_005499E0
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00543320
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00543C00] sub_00543C00 (83 bytes)
extern "C" void ext_005480F0();
extern "C" __declspec(naked) void __fastcall fn_00543C00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x84]
        mov ecx, dword ptr [eax + 0xf8]
        mov edx, ecx
        shl edx, 0x4
        sub edx, ecx
        mov ecx, dword ptr [eax + 4*edx + 0x8]
        call ext_005480F0
        fld dword ptr [eax]
        mov ecx, dword ptr [esi + 0x84]
        cmp byte ptr [ecx + 0x4], 0x0
        fstp dword ptr [esi + 0x34]
        je short not_flag
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x38]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0x3c]
        fld1
        fstp dword ptr [esi + 0x40]
        pop esi
        ret
not_flag:
        fld dword ptr [eax + 0x8]
        fchs
        fstp dword ptr [esi + 0x38]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x3c]
        pop esi
        ret
    }
}

// [0x005457B0] sub_005457B0 (85 bytes)
extern "C" void ext_00537E70();
extern "C" void ext_00543320();

extern "C" __declspec(naked) void __fastcall fn_005457B0(void* self) {
    __asm {
        push -1
        push 0x00897908
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00956944
        lea ecx, [esi + 0x9c]
        mov dword ptr [esp + 0x10], 0x0
        call ext_00537E70
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00543320
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00549980] sub_00549980 (88 bytes)
extern "C" void ext_005528E0();
extern "C" void ext_0063E000();
extern "C" void ext_0063E00C();
extern "C" void ext_0063E012();
extern "C" __declspec(naked) void __fastcall fn_00549980(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_005528E0
        fld1
        mov dword ptr [esi], 0x956d14
        fst dword ptr [esi + 0x18]
        fst dword ptr [esi + 0x1c]
        fstp dword ptr [esi + 0x20]
        mov dword ptr [esi + 0x14], 0x4
        call ext_0063E000
        push 0x186ad
        push eax
        mov dword ptr [esi + 0x24], eax
        call ext_0063E012
        call ext_0063E000
        push 0x186ac
        push eax
        mov dword ptr [esi + 0x28], eax
        call ext_0063E012
        mov eax, dword ptr [esi + 0x28]
        push 0x186a0
        push eax
        call ext_0063E00C
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0054FCB0] sub_0054FCB0 (90 bytes)
extern "C" void ext_0066A760();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0054FCB0(void* self) {
    __asm {
        push -1
        push 0x0089998F
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x009570A4
        lea ecx, [esi + 0x820]
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066A760
        lea ecx, [esi + 0x804]
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005404B0] sub_005404B0 (91 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005404B0(void* self, int edx_unused, const float* src) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [ecx + 0x10]
        fstp dword ptr [eax + 0x10]
        fld dword ptr [ecx + 0x14]
        fstp dword ptr [eax + 0x14]
        fld dword ptr [ecx + 0x18]
        fstp dword ptr [eax + 0x18]
        fld dword ptr [ecx + 0x1c]
        fstp dword ptr [eax + 0x1c]
        fld dword ptr [ecx + 0x20]
        fstp dword ptr [eax + 0x20]
        fld dword ptr [ecx + 0x24]
        fstp dword ptr [eax + 0x24]
        fld dword ptr [ecx + 0x28]
        fstp dword ptr [eax + 0x28]
        fld dword ptr [ecx + 0x2c]
        fstp dword ptr [eax + 0x2c]
        fld dword ptr [ecx + 0x30]
        fstp dword ptr [eax + 0x30]
        fld dword ptr [ecx + 0x34]
        fstp dword ptr [eax + 0x34]
        ret 0x4
    }
}

extern "C" void ext_005404B0();
extern "C" void ext_005D9EF0();

// [0x00547E50] sub_00547E50 (41 bytes)
extern "C" __declspec(naked) void __fastcall fn_00547E50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xa0]
        test ecx, ecx
        je short L_no_a0
        pop esi
        jmp ext_005D9EF0
    L_no_a0:
        lea eax, [esi + 0x30]
        push eax
        lea ecx, [esi + 0x68]
        call ext_005404B0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x44]
        mov ecx, esi
        pop esi
        jmp eax
    }
}

// [0x005432A0] sub_005432A0 (91 bytes)
extern "C" void ext_005434E0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_005432A0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0x8]
        cmp esi, dword ptr [ecx + 0xc]
        push edi
        lea edi, [ecx + 0x4]
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
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi]
        push eax
        call ext_005434E0
        cmp esi, dword ptr [edi + 0x8]
        jb L_ok6
        call ebp
    L_ok6:
        add esi, 4
        jmp L_ok1
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x0054A0E0] sub_0054A0E0 (91 bytes)
extern "C" void ext_00532B40();
extern "C" void ext_00552850();
extern "C" void ext_0063E006();
extern "C" __declspec(naked) void __fastcall fn_0054A0E0(void* self) {
    __asm {
        push -1
        push 0x898f58
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x956d34
        mov eax, dword ptr [esi + 0x18]
        push eax
        mov dword ptr [esp + 0x14], 0x0
        call ext_0063E006
        lea ecx, [esi + 0x1c]
        call ext_00532B40
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00552850
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00540F00] sub_00540F00 (93 bytes)
extern "C" bool __fastcall fn_00540F00(void* self, int edx_unused, int a1, int a2) {
    char* p = (char*)self;
    if (*(int*)(p + 0x108) == 0) {
        return false;
    }
    int esi = *(int*)(p + 0x138) - a2;
    int k = 0;
    char* e = p + 0x10;
    for (; k < 4; ++k, e += 0x3c) {
        if (a1 < *(int*)(e - 4) || a1 > *(int*)(e + 4) || esi < *(int*)e || esi > *(int*)(e + 8)) {
            continue;
        }
        if (*(int*)(p + 0xf8) == k) {
            return false;
        }
        *(int*)(p + 0xf8) = k;
        return true;
    }
    return false;
}

// [0x00546570] sub_00546570 (93 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00546570(const float* self, int edx_unused, const float* other) {
    __asm {
        fld dword ptr [ecx]
        mov edx, dword ptr [esp + 4]
        fld dword ptr [edx]
        fucompp
        fnstsw ax
        test ah, 0x44
        jp ne_fail_00546570
        fld dword ptr [ecx + 0x4]
        fld dword ptr [edx + 0x4]
        fucompp
        fnstsw ax
        test ah, 0x44
        jp ne_fail_00546570
        fld dword ptr [ecx + 0x8]
        fld dword ptr [edx + 0x8]
        fucompp
        fnstsw ax
        test ah, 0x44
        jp ne_fail_00546570
        fld dword ptr [ecx + 0xc]
        fld dword ptr [edx + 0xc]
        fucompp
        fnstsw ax
        test ah, 0x44
        jp ne_fail_00546570
        mov eax, 1
        xor ecx, ecx
        test al, al
        sete cl
        mov al, cl
        ret 4
    ne_fail_00546570:
        xor eax, eax
        xor ecx, ecx
        test al, al
        sete cl
        mov al, cl
        ret 4
    }
}

// [0x00545C40] sub_00545C40 (94 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545C40(void* self, int edx_unused, float* out, int idx, float val) {
    __asm {
        fld1
        mov ecx, dword ptr [ecx + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x28]
        push esi
        mov esi, dword ptr [esp + 8]
        fst dword ptr [esi]
        fst dword ptr [esi + 4]
        fst dword ptr [esi + 8]
        fstp dword ptr [esi + 0Ch]
        call edx
        cmp eax, 1
        jne L_not_one
        fld dword ptr [esp + 10h]
        fst dword ptr [esi]
        fst dword ptr [esi + 4]
        fstp dword ptr [esi + 8]
        pop esi
        ret 0Ch
    L_not_one:
        cmp eax, 2
        mov eax, dword ptr [esp + 0Ch]
        jne L_store
        test eax, eax
        je L_pair
        cmp eax, 1
        jne L_store
    L_pair:
        fld dword ptr [esp + 10h]
        fst dword ptr [esi]
        fstp dword ptr [esi + 4]
        pop esi
        ret 0Ch
    L_store:
        fld dword ptr [esp + 10h]
        fstp dword ptr [esi + eax * 4]
        pop esi
        ret 0Ch
    }
}
