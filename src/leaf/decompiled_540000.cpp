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

// [0x0054C700] sub_0054C700 (94 bytes)
extern "C" int mem_00924FE8;
extern "C" int mem_00924FD4;

extern "C" __declspec(naked) void __fastcall fn_0054C700(void* self) {
    __asm {
        push -1
        push 0x89919c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x8]
        mov ecx, edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x956dfc
        call dword ptr [mem_00924FE8]
        push 0x92c520
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi + 0x4], 0xe
        call dword ptr [mem_00924FD4]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005450C0] sub_005450C0 (95 bytes)
extern "C" void ext_00543320();
extern "C" void ext_005498E0();
extern "C" void ext_00549920();

extern "C" __declspec(naked) void __fastcall fn_005450C0(void* self) {
    __asm {
        push -1
        push 0x00897ED6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0xb8]
        mov dword ptr [esp + 0x10], 0x1
        call ext_00549920
        lea ecx, [esi + 0x98]
        mov byte ptr [esp + 0x10], 0x0
        call ext_005498E0
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

// [0x00545BE0] sub_00545BE0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545BE0(void* self, int edx_unused, float* out, int a2, float a3) {
    __asm {
        fld1
        mov ecx, dword ptr [ecx + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x28]
        push esi
        mov esi, dword ptr [esp + 0x8]
        fst dword ptr [esi]
        fst dword ptr [esi + 0x4]
        fst dword ptr [esi + 0x8]
        fstp dword ptr [esi + 0xc]
        call edx
        cmp eax, 0x1
        je L1
        cmp eax, 0x2
        mov eax, dword ptr [esp + 0xc]
        jne L2
        cmp eax, 0x3
        je L1
        cmp eax, 0x4
        jne L2
    L1:
        fld dword ptr [esp + 0x10]
        fst dword ptr [esi]
        fst dword ptr [esi + 0x4]
        fstp dword ptr [esi + 0x8]
        pop esi
        ret 0xc
    L2:
        fld dword ptr [esp + 0x10]
        fst dword ptr [esi]
        fst dword ptr [esi + 0x4]
        fstp dword ptr [esi + 0x8]
        fld1
        fst dword ptr [esi + 0xc]
        fstp dword ptr [esi + eax*4 - 0xc]
        pop esi
        ret 0xc
    }
}

// [0x00540D60] sub_00540D60 (100 bytes)
extern "C" void ext_006A7250();
extern "C" __declspec(naked) void* __fastcall fn_00540D60(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0x4]
        fld dword ptr [esi]
        fld dword ptr [esi + 0x8]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        call ext_006A7250
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x4]
        fldz
        fld dword ptr [esp + 0x4]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        mov eax, esi
        jnp skip
        fld dword ptr [esi]
        fdiv st, st(1)
        fstp dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fdiv st, st(1)
        fstp dword ptr [esi + 0x4]
        fdivr dword ptr [esi + 0x8]
        fstp dword ptr [esi + 0x8]
        pop esi
        pop ecx
        ret
    skip:
        fstp st(0)
        pop esi
        pop ecx
        ret
    }
}

// [0x0054C570] sub_0054C570 (100 bytes)
extern "C" void ext_00532B60();

extern "C" __declspec(naked) void __fastcall fn_0054C570(void* self) {
    __asm {
        push -1
        push 0x899093
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_00532B60
        xor eax, eax
        mov dword ptr [esi], 0x956d8c
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        lea ecx, [esi + 0x24]
        mov dl, 1
        mov dword ptr [ecx], 0x93a444
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ecx]
        mov byte ptr [esp + 0x10], dl
        mov byte ptr [esi + 0xc], dl
        mov edx, dword ptr [eax]
        call edx
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0054A860] sub_0054A860 (106 bytes)
extern "C" void ext_005528E0();
extern "C" void ext_00549940();
extern "C" void ext_0063E000();
extern "C" void ext_0063E00C();
extern "C" void ext_0063E012();
extern "C" __declspec(naked) void __fastcall fn_0054A860(void* self) {
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
        call ext_005528E0
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi], 0x956cfc
        call ext_0063E000
        push 0x186ac
        push eax
        mov dword ptr [esi + 0x18], eax
        call ext_0063E012
        mov eax, dword ptr [esi + 0x18]
        push 0x186a0
        push eax
        call ext_0063E00C
        mov ecx, esi
        call ext_00549940
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0054E360] sub_0054E360 (108 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_0065C660();

extern "C" __declspec(naked) void __fastcall fn_0054E360(void* self) {
    __asm {
        push -1
        push 0x0089952E
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x009548FC
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x10], 0x2
        call ext_00493D90
        lea ecx, [esi + 0x18]
        mov byte ptr [esp + 0x10], 0x1
        call ext_00493D90
        lea ecx, [esi + 0x8]
        mov byte ptr [esp + 0x10], 0x0
        call ext_00493D90
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065C660
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0054C800] sub_0054C800 (109 bytes)
extern "C" int mem_009252B8;
extern "C" int mem_0092546C;
extern "C" int mem_00AF657C;
extern "C" int mem_00925518;
extern "C" int mem_00925514;
extern "C" int mem_0092552C;
extern "C" __declspec(naked) void __cdecl fn_0054C800(const char* fmt, ...) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 0x100
        test eax, eax
        je done
        lea ecx, [esp + 0x108]
        push ecx
        push eax
        lea edx, [esp + 0x8]
        push edx
        call dword ptr [mem_009252B8]
        add esp, 0xc
        push 0x20000
        call dword ptr [mem_0092546C]
        mov eax, dword ptr [mem_00AF657C]
        add eax, -0x20
        push eax
        call dword ptr [mem_00925518]
        lea eax, [esp]
        lea edx, [eax + 1]
    scan:
        mov cl, byte ptr [eax]
        add eax, 1
        test cl, cl
        jne scan
        lea ecx, [esp]
        push ecx
        sub eax, edx
        push 0x1401
        push eax
        call dword ptr [mem_00925514]
        call dword ptr [mem_0092552C]
    done:
        add esp, 0x100
        ret
    }
}

// [0x0054A070] sub_0054A070 (111 bytes)
extern "C" void ext_0063E036();
extern "C" int mem_00925414;
extern "C" int mem_009254B0;
extern "C" int mem_00925404;

extern "C" __declspec(naked) void __fastcall fn_0054A070(void* self, int edx_unused, float radius) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0x18]
        fld1
        fld st(0)
        fdivrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x1c]
        fdivr st, st(1)
        fstp dword ptr [esp + 0x8]
        fdiv dword ptr [esi + 0x20]
        fstp dword ptr [esp + 0xc]
        call dword ptr [mem_00925414]
        fld dword ptr [esp + 0xc]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp]
        call dword ptr [mem_009254B0]
        fld dword ptr [esp + 0x14]
        mov eax, dword ptr [esi + 0x28]
        push 0x8
        push 0x8
        sub esp, 0x8
        fstp qword ptr [esp]
        push eax
        call ext_0063E036
        call dword ptr [mem_00925404]
        pop esi
        add esp, 0xc
        ret 0x4
    }
}

// [0x0054C640] sub_0054C640 (113 bytes)
extern "C" void ext_00527D60();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0054C640(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [ecx + 0x1c]
        cmp dword ptr [ecx + 0x18], ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        lea edi, [ecx + 0x14]
        jbe L_0054C65A
        call ebp
    L_0054C65A:
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_0054C664
        call ebp
    L_0054C664:
        cmp esi, ebx
        mov dword ptr [esp + 0x14], esi
        je L_0054C67B
        mov eax, dword ptr [esp + 0x1c]
    L_0054C670:
        cmp dword ptr [esi], eax
        je L_0054C67B
        add esi, 0x4
        cmp esi, ebx
        jne L_0054C670
    L_0054C67B:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_0054C68B
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_0054C68B:
        test edi, edi
        je L_0054C693
        cmp edi, edi
        je L_0054C695
    L_0054C693:
        call ebp
    L_0054C695:
        cmp esi, ebx
        je L_0054C6A7
        push esi
        push edi
        lea eax, [esp + 0x18]
        push eax
        mov ecx, edi
        call ext_00527D60
    L_0054C6A7:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x0054C890] sub_0054C890 (114 bytes)
extern "C" void ext_0065C660();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0054C890(void* self) {
    __asm {
        push -1
        push 0x8991f0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x956e2c
        lea ecx, [esi + 0x9c]
        mov dword ptr [esp + 0x10], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x60]
        mov byte ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x18]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065C660
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00540F80] sub_00540F80 (115 bytes)
extern "C" void ext_00538530();
extern "C" void ext_00538550();
extern "C" float mem_009499C8;
extern "C" __declspec(naked) void __fastcall fn_00540F80(void* self) {
    __asm {
        push -1
        push 0x896c0b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr [esi], ebx
        push edi
        lea edi, [esi + 0x18]
        mov dword ptr [esi + 0x10], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0x4], ebx
        mov ecx, edi
        mov dword ptr [esp + 0xc], esi
        mov byte ptr [esi + 0x14], bl
        call ext_00538530
        fld dword ptr [mem_009499C8]
        push 1
        push 1
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esi + 0x34], 0x93a444
        mov dword ptr [esi + 0x38], ebx
        call ext_00538550
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00547820] sub_00547820 (118 bytes)
extern "C" __declspec(naked) float* __fastcall fn_00547820(float* self, int edx_unused, float* out, const float* b) {
    __asm {
        mov eax, dword ptr [esp + 4]
        fldz
        mov edx, dword ptr [esp + 8]
        fst dword ptr [eax + 0Ch]
        fst dword ptr [eax + 8]
        fst dword ptr [eax + 4]
        fstp dword ptr [eax]
        fld dword ptr [edx + 8]
        fstp dword ptr [esp + 4]
        fld dword ptr [edx + 4]
        fstp dword ptr [esp + 8]
        fld dword ptr [ecx + 4]
        fmul dword ptr [esp + 4]
        fld dword ptr [ecx + 8]
        fmul dword ptr [esp + 8]
        fsubp st(1), st
        fstp dword ptr [eax]
        fld dword ptr [edx]
        fstp dword ptr [esp + 4]
        fld dword ptr [edx + 8]
        fstp dword ptr [esp + 8]
        fld dword ptr [ecx + 8]
        fmul dword ptr [esp + 4]
        fld dword ptr [ecx]
        fmul dword ptr [esp + 8]
        fsubp st(1), st
        fstp dword ptr [eax + 4]
        fld dword ptr [edx + 4]
        fstp dword ptr [esp + 4]
        fld dword ptr [edx]
        fstp dword ptr [esp + 8]
        fld dword ptr [ecx]
        fmul dword ptr [esp + 4]
        fld dword ptr [ecx + 4]
        fmul dword ptr [esp + 8]
        fsubp st(1), st
        fstp dword ptr [eax + 8]
        ret 8
    }
}

// [0x00544130] sub_00544130 (119 bytes)
extern "C" void ext_0054A0E0();
extern "C" void ext_00543320();
extern "C" __declspec(naked) void __fastcall fn_00544130(void* self) {
    __asm {
        push -1
        push 0x897626
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x956364
        mov dword ptr [esi + 0x98], 0x956264
        lea ecx, [esi + 0xb0]
        mov dword ptr [esp + 0x10], 1
        call ext_0054A0E0
        mov ecx, dword ptr [esi + 0xa8]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0
        je L_544188
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 1
        call edx
    L_544188:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00543320
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0054C770] sub_0054C770 (122 bytes)
extern "C" int mem_009253EC;
extern "C" int mem_00AF657C;
extern "C" int mem_00924FF0;
extern "C" int mem_00924088;
extern "C" int mem_00924070;
extern "C" int mem_00925510;
extern "C" int mem_00924090;
extern "C" __declspec(naked) void __fastcall fn_0054C770(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        push 0x60
        mov esi, ecx
        call dword ptr [mem_009253EC]
        lea ecx, [esi + 0x8]
        mov dword ptr [mem_00AF657C], eax
        call dword ptr [mem_00924FF0]
        push eax
        mov eax, dword ptr [esi + 0x4]
        push 0x0
        push 0x4
        push 0x0
        push 0x4
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x190
        push 0x0
        push 0x0
        push 0x0
        neg eax
        push eax
        call dword ptr [mem_00924088]
        mov edi, dword ptr [esp + 0x14]
        mov ebx, dword ptr [mem_00924070]
        mov esi, eax
        push esi
        push edi
        call ebx
        mov ecx, dword ptr [mem_00AF657C]
        push ecx
        push 0x60
        push 0x20
        push edi
        mov ebp, eax
        call dword ptr [mem_00925510]
        push ebp
        push edi
        call ebx
        push esi
        call dword ptr [mem_00924090]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x0054C5E0] sub_0054C5E0 (82 bytes)
extern "C" void ext_00532B40();
extern "C" void ext_006246B0();

extern "C" __declspec(naked) void __fastcall fn_0054C5E0(void* self) {
    __asm {
        push -1
        push 0x008957A8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00956D8C
        lea ecx, [esi + 0x14]
        mov dword ptr [esp + 0x10], 0x0
        call ext_006246B0
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00532B40
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0054D220] sub_0054D220 (122 bytes)
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_0054D220(void* self) {
    __asm {
        push -1
        push 0x8991f0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        xor ebx, ebx
        lea ecx, [esi + 0x18]
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esi], 0x956e2c
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x60]
        mov byte ptr [esp + 0x14], 0x1
        mov byte ptr [esi + 0x3d], bl
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x9c]
        mov byte ptr [esp + 0x14], 0x2
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xd0], ebx
        mov dword ptr [esi + 0xd4], ebx
        mov byte ptr [esi + 0xd8], bl
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00543220] sub_00543220 (124 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00543220(void* self, int edx_unused, int idx, bool flag) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, 0x0a
        mov esi, ecx
        jge short L543220_ret
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        push ebx
        mov ebx, dword ptr [mem_00925134]
        je short L543220_inv1
        mov eax, dword ptr [esi + 0xc]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb short L543220_after1
L543220_inv1:
        call ebx
L543220_after1:
        mov ecx, dword ptr [esi + 0x14]
        mov eax, dword ptr [esi + 0x8]
        cmp ecx, dword ptr [eax + 4*edi]
        je short L543220_pop
        test ecx, ecx
        je short L543220_nocur
        cmp byte ptr [esp + 0x14], 0x00
        mov edx, dword ptr [ecx]
        je short L543220_else
        mov eax, dword ptr [edx + 0x64]
        jmp short L543220_docall
L543220_else:
        mov eax, dword ptr [edx + 0x60]
L543220_docall:
        call eax
L543220_nocur:
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je short L543220_inv2
        mov eax, dword ptr [esi + 0xc]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb short L543220_after2
L543220_inv2:
        call ebx
L543220_after2:
        mov ecx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ecx + 4*edi]
        test ecx, ecx
        mov dword ptr [esi + 0x14], ecx
        je short L543220_nonew
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x5c]
        call eax
L543220_nonew:
        mov dword ptr [esi], edi
L543220_pop:
        pop ebx
L543220_ret:
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x0054A330] sub_0054A330 (125 bytes)
extern "C" void ext_00549910();
extern "C" void ext_005528E0();
extern "C" void ext_0063E000();
extern "C" void ext_0063E00C();
extern "C" void ext_0063E012();

extern "C" __declspec(naked) void* __fastcall fn_0054A330(void* self) {
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
        call ext_005528E0
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x956ce4
        call ext_0063E000
        push 0x186ab
        push eax
        mov dword ptr [esi + 0x18], eax
        call ext_0063E012
        call ext_0063E000
        push 0x186ac
        push eax
        mov dword ptr [esi + 0x1c], eax
        call ext_0063E012
        mov eax, dword ptr [esi + 0x1c]
        push 0x186a0
        push eax
        call ext_0063E00C
        mov ecx, esi
        call ext_00549910
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0054B6D0] sub_0054B6D0 (138 bytes)
extern "C" void ext_00532B60();
extern "C" void ext_0054A150();
extern "C" __declspec(naked) void __fastcall fn_0054B6D0(void* self) {
    __asm {
        push -1
        push 0x898f83
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_005528E0
        lea edi, [esi + 0x1c]
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esi], 0x956d34
        call ext_00532B60
        mov dword ptr [edi], 0x9551e4
        mov dword ptr [edi + 0x1c], ebx
        mov dword ptr [edi + 0x14], ebx
        mov dword ptr [edi + 0x18], ebx
        mov byte ptr [esp + 0x18], 0x1
        call ext_0063E000
        push 0x186ac
        push eax
        mov dword ptr [esi + 0x18], eax
        call ext_0063E012
        mov eax, dword ptr [esi + 0x18]
        push 0x186a0
        push eax
        call ext_0063E00C
        mov ecx, esi
        call ext_0054A150
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00547AF0] sub_00547AF0 (124 bytes)
extern "C" void ext_00547AD0();
extern "C" void ext_005CFEC0();

extern "C" __declspec(naked) void __fastcall fn_00547AF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xa0]
        test ecx, ecx
        je short loc_547B0B
        mov eax, dword ptr [esp + 0x8]
        push eax
        call ext_005CFEC0
        pop esi
        ret 8

    loc_547B0B:
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        je short loc_547B37
        mov ecx, esi
        call ext_00547AD0
        test al, al
        jne short loc_547B37
        cmp edi, 1
        jne short loc_547B67
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [edx + 0x48]
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 8

    loc_547B37:
        mov eax, dword ptr [esp + 0xc]
        fld dword ptr [eax]
        mov ecx, esi
        fstp dword ptr [esi + 0x80]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x84]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0x88]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esi + 0x8c]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x44]
        call edx

    loc_547B67:
        pop edi
        pop esi
        ret 8
    }
}

// [0x00547D10] sub_00547D10 (89 bytes)
extern "C" void ext_005D0350();
extern "C" int mem_0092C508;
extern "C" int mem_0093F8EC;

extern "C" __declspec(naked) void __fastcall fn_00547D10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xa0]
        test ecx, ecx
        je short loc_547D2E
        fld dword ptr [esp + 8]
        push ecx
        fstp dword ptr [esp]
        call ext_005D0350
        pop esi
        ret 4

    loc_547D2E:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x14]
        push edi
        lea edi, [esi + 0x70]
        push edi
        mov ecx, esi
        call edx
        fmul dword ptr [esp + 0xc]
        fadd dword ptr [edi]
        fstp dword ptr [edi]
        fld dword ptr [edi]
        fcomp qword ptr [mem_0092C508]
        fnstsw ax
        test ah, 5
        jp short loc_547D5B
        fld dword ptr [mem_0093F8EC]
        fstp dword ptr [edi]

    loc_547D5B:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x44]
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

extern "C" void ext_00547E50();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

// [0x00541AB0] sub_00541AB0 (150 bytes)
extern "C" __declspec(naked) void __fastcall fn_00541AB0(void* self) {
    __asm {
        sub esp, 8
        cmp byte ptr [ecx + 0x13d], 0
        je tail
        mov eax, dword ptr [ecx + 0x110]
        mov eax, dword ptr [eax]
        push ebp
        push esi
        push edi
        lea edi, [ecx + 0x10c]
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x10], ebp
        push ebx
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
loop_top:
        test esi, esi
        mov ebx, dword ptr [edi + 4]
        je chk_null
        cmp esi, edi
        je chk_done
chk_null:
        call dword ptr [mem_00925134]
chk_done:
        cmp ebp, ebx
        je finish
        test esi, esi
        jne chk_node
        call dword ptr [mem_00925134]
chk_node:
        cmp ebp, dword ptr [esi + 4]
        jne body
        call dword ptr [mem_00925134]
body:
        mov ecx, dword ptr [ebp + 0x28]
        call ext_00547E50
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp loop_top
tail:
        mov eax, dword ptr [ecx + 0xf8]
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov ecx, dword ptr [ecx + 4*edx + 8]
        add esp, 8
        jmp ext_00547E50
finish:
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret
    }
}

// [0x00544F30] sub_00544F30 (151 bytes)
extern "C" void ext_00540130();
extern "C" void ext_00543320();
extern "C" void ext_00544BE0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00544F30(void* self) {
    __asm {
        push -1
        push 0x00897BE6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x009566D4
        mov dword ptr [esi + 0x98], 0x009565D4
        mov eax, dword ptr [esi + 0x250]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x14], 0x1
        je L_skip_00544F30
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_skip_00544F30:
        lea ecx, [esi + 0x164]
        mov dword ptr [esi + 0x250], ebx
        mov dword ptr [esi + 0x254], ebx
        mov dword ptr [esi + 0x258], ebx
        call ext_00540130
        lea ecx, [esi + 0x9C]
        mov byte ptr [esp + 0x14], bl
        call ext_00544BE0
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xFFFFFFFF
        call ext_00543320
        mov ecx, dword ptr [esp + 0xC]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00544920] sub_00544920 (95 bytes)
extern "C" void ext_00543320();
extern "C" void ext_00544F30();
extern "C" __declspec(naked) void __fastcall fn_00544920(void* self) {
    __asm {
        push -1
        push 0x897908
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x95651c
        mov dword ptr [esi + 0x98], 0x95641c
        lea ecx, [esi + 0x9c]
        mov dword ptr [esp + 0x10], 0
        call ext_00544F30
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00543320
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00543350] sub_00543350 (152 bytes)
extern "C" __declspec(naked) void __fastcall fn_00543350(void* self) {
    __asm {
        fld1
        xor eax, eax
        mov dword ptr [ecx + 0x88], eax
        fst dword ptr [ecx + 0x4]
        fldz
        fst dword ptr [ecx + 0x8]
        fst dword ptr [ecx + 0xc]
        fst dword ptr [ecx + 0x10]
        fst dword ptr [ecx + 0x14]
        fst dword ptr [ecx + 0x1c]
        fst dword ptr [ecx + 0x20]
        fst dword ptr [ecx + 0x24]
        fst dword ptr [ecx + 0x28]
        fst dword ptr [ecx + 0x30]
        fst dword ptr [ecx + 0x34]
        fst dword ptr [ecx + 0x38]
        fst dword ptr [ecx + 0x3c]
        fxch st(1)
        fst dword ptr [ecx + 0x18]
        fst dword ptr [ecx + 0x2c]
        fst dword ptr [ecx + 0x40]
        fst dword ptr [ecx + 0x44]
        fxch st(1)
        fst dword ptr [ecx + 0x48]
        fst dword ptr [ecx + 0x4c]
        fst dword ptr [ecx + 0x50]
        fst dword ptr [ecx + 0x54]
        fst dword ptr [ecx + 0x5c]
        fst dword ptr [ecx + 0x60]
        fst dword ptr [ecx + 0x64]
        fst dword ptr [ecx + 0x68]
        fst dword ptr [ecx + 0x70]
        fst dword ptr [ecx + 0x74]
        fst dword ptr [ecx + 0x78]
        fstp dword ptr [ecx + 0x7c]
        fst dword ptr [ecx + 0x58]
        fst dword ptr [ecx + 0x6c]
        fstp dword ptr [ecx + 0x80]
        mov byte ptr [ecx + 0x90], al
        mov byte ptr [ecx + 0x91], al
        mov byte ptr [ecx + 0x92], al
        mov byte ptr [ecx + 0x93], al
        mov byte ptr [ecx + 0x94], al
        mov byte ptr [ecx + 0x95], al
        ret
    }
}

// [0x00544240] sub_00544240 (87 bytes)
extern "C" void ext_00543350();
extern "C" int mem_009324A4;
extern "C" int mem_0092C508;
extern "C" int mem_0093F8EC;
extern "C" __declspec(naked) void __fastcall fn_00544240(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00543350
        mov ecx, dword ptr [esi + 0xa8]
        test ecx, ecx
        je short L_skip
        call ext_00543350
L_skip:
        fld dword ptr [mem_009324A4]
        fstp dword ptr [esi + 0xc4]
        fld dword ptr [esi + 0xc4]
        fcomp qword ptr [mem_0092C508]
        fnstsw ax
        test ah, 5
        jp short L_hi
        fld dword ptr [mem_0093F8EC]
L_store:
        fstp dword ptr [esi + 0xc4]
        pop esi
        ret
L_hi:
        fld1
        fcom dword ptr [esi + 0xc4]
        fnstsw ax
        test ah, 5
        jnp short L_store
        fstp st(0)
        pop esi
        ret
    }
}

// [0x00546F00] sub_00546F00 (150 bytes)
extern "C" void ext_00543350();
extern "C" void ext_006A6C87();
extern "C" int mem_0093247C;
extern "C" int mem_00AF4E74;
extern "C" int mem_00AF4E64;
extern "C" int mem_00AF4E68;
extern "C" int mem_00AF4E6C;
extern "C" int mem_00AF4E70;
extern "C" __declspec(naked) void __fastcall fn_00546F00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00543350
        fld dword ptr [mem_0093247C]
        xor al, al
        fstp dword ptr [esi + 0xbc]
        mov byte ptr [esi + 0xe4], al
        mov byte ptr [esi + 0xe5], al
        mov byte ptr [esi + 0xe6], al
        mov eax, 1
        test byte ptr [mem_00AF4E74], al
        jne short L_skip_546F00
        fldz
        or dword ptr [mem_00AF4E74], eax
        fst dword ptr [mem_00AF4E64]
        push 0x91b5b0
        fst dword ptr [mem_00AF4E68]
        fstp dword ptr [mem_00AF4E6C]
        fld1
        fstp dword ptr [mem_00AF4E70]
        call ext_006A6C87
        add esp, 4
L_skip_546F00:
        fld dword ptr [mem_00AF4E64]
        fstp dword ptr [esi + 0xd4]
        fld dword ptr [mem_00AF4E68]
        fstp dword ptr [esi + 0xd8]
        fld dword ptr [mem_00AF4E6C]
        fstp dword ptr [esi + 0xdc]
        fld dword ptr [mem_00AF4E70]
        fstp dword ptr [esi + 0xe0]
        pop esi
        ret
    }
}

// [0x00544E20] sub_00544E20 (157 bytes)
extern "C" void ext_0053F690();
extern "C" void ext_0053F6A0();

extern "C" __declspec(naked) void __fastcall fn_00544E20(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push esi
        mov al, 0x1
        test byte ptr [esp + 0x10], al
        push edi
        mov esi, ecx
        je L_544EB1
        cmp dword ptr [esi + 0x144], 0x6
        jne L_544EB1
        mov bl, byte ptr [esi + 0x248]
        mov byte ptr [esi + 0x261], al
        mov byte ptr [esi + 0x249], al
        mov byte ptr [esi + 0x248], al
        sub esp, 0x8
        mov eax, esp
        lea edi, [esi + 0x164]
        mov ecx, edi
        mov dword ptr [eax], 0x93a444
        mov dword ptr [eax + 0x4], 0xc
        call ext_0053F6A0
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [eax + 0x44]
        push ecx
        push edx
        mov ecx, edi
        call eax
        mov ecx, edi
        mov byte ptr [esi + 0x249], 0x0
        mov byte ptr [esi + 0x248], bl
        call ext_0053F690
        cmp byte ptr [esi + 0x260], 0x0
        mov byte ptr [esi + 0x261], 0x0
        je L_544EB1
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x68]
        mov ecx, esi
        call eax
L_544EB1:
        mov al, byte ptr [esi + 0x260]
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x0054F030] sub_0054F030 (159 bytes)
struct Struct_54F030 {
    int pad0;
    char byte4;
    char pad5[3];
    float f[24];
};

extern "C" Struct_54F030* __fastcall fn_0054F030(Struct_54F030* self, int edx_unused, const Struct_54F030* other) {
    self->byte4 = other->byte4;
    self->f[0] = other->f[0];
    self->f[1] = other->f[1];
    self->f[2] = other->f[2];
    self->f[3] = other->f[3];
    self->f[4] = other->f[4];
    self->f[5] = other->f[5];
    self->f[6] = other->f[6];
    self->f[7] = other->f[7];
    self->f[8] = other->f[8];
    self->f[9] = other->f[9];
    self->f[10] = other->f[10];
    self->f[11] = other->f[11];
    self->f[12] = other->f[12];
    self->f[13] = other->f[13];
    self->f[14] = other->f[14];
    self->f[15] = other->f[15];
    self->f[16] = other->f[16];
    self->f[17] = other->f[17];
    self->f[18] = other->f[18];
    self->f[19] = other->f[19];
    self->f[20] = other->f[20];
    self->f[21] = other->f[21];
    self->f[22] = other->f[22];
    self->f[23] = other->f[23];
    return self;
}

// [0x0054F1B0] sub_0054F1B0 (38 bytes)
// Stack args: arg1 = first, arg2 = last, arg3 = value. For p = first; p != last; p += 0x68: push value, ecx = p, call sub_0054F030 (callee cleans the pushed arg). Plain ret.
extern "C" void ext_0054F030();

extern "C" __declspec(naked) void __cdecl fn_0054F1B0(void* first, void* last, const void* value) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    loop_top:
        push ebx
        mov ecx, esi
        call ext_0054F030
        add esi, 0x68
        cmp esi, edi
        jne loop_top
        pop ebx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x0054F0D0] sub_0054F0D0 (73 bytes)
// Stack args: arg1 = first, arg2 = last, arg3 = out. Returns out + ((last - first) / 0x68) * 0x68 in eax.
// For p = first; p != last; p += 0x68: ecx = out + (p - first), push p, call sub_0054F030 (callee cleans the pushed arg).
extern "C" __declspec(naked) void* __cdecl fn_0054F0D0(void* first, void* last, void* out) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x4ec4ec4f
        imul ecx
        mov ebp, dword ptr [esp + 0x18]
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        push edi
        add eax, edx
        mov edi, eax
        imul edi, edi, 0x68
        add edi, ebp
        cmp esi, ebx
        je done
        sub ebp, esi
    loop_top:
        push esi
        lea ecx, [esi + ebp]
        call ext_0054F030
        add esi, 0x68
        cmp esi, ebx
        jne loop_top
    done:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0054F120] sub_0054F120 (73 bytes)
// Stack args: arg1 = first, arg2 = last, arg3 = out. Returns out - ((last - first) / 0x68) * 0x68 in eax.
// Backward variant of sub_0054F0D0: for p = last; p != first; p -= 0x68: ecx = out + (p - last), push p-0x68, call sub_0054F030 (callee cleans the pushed arg).
extern "C" __declspec(naked) void* __cdecl fn_0054F120(void* first, void* last, void* out) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ebp, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        imul eax, eax, 0x68
        mov ebx, ebp
        sub ebx, eax
        cmp edi, esi
        je done
        sub ebp, esi
    loop_top:
        sub esi, 0x68
        push esi
        lea ecx, [esi + ebp]
        call ext_0054F030
        cmp esi, edi
        jne loop_top
    done:
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x0054F290] sub_0054F290 (43 bytes)
extern "C" void ext_0054F120();

extern "C" __declspec(naked) void __fastcall fn_0054F290(void* self) {
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
        call ext_0054F120
        add esp, 0x1c
        ret
    }
}

// [0x0054F210] sub_0054F210 (127 bytes)
extern "C" void ext_0054F0D0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0054F210(void* self) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, ecx
        je loc_invalid
        cmp esi, dword ptr [esp + 0x18]
        je loc_valid
    loc_invalid:
        call dword ptr [mem_00925134]
    loc_valid:
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, edx
        je loc_done
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        push edi
        mov byte ptr [esp + 0x20], 0x0
        mov esi, dword ptr [esp + 0x20]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push esi
        push ecx
        push eax
        push edx
        call ext_0054F0D0
        mov edi, dword ptr [ebp + 0x8]
        mov ebx, eax
        add esp, 0x18
        cmp ebx, edi
        mov esi, ebx
        je loc_after_loop
    loc_loop:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 0x0
        mov ecx, esi
        call edx
        add esi, 0x68
        cmp esi, edi
        jne loc_loop
    loc_after_loop:
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [ebp + 0x8], ebx
        pop ebx
    loc_done:
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 0x4], ecx
        pop ebp
        ret 0x14
    }
}

// [0x0054F300] sub_0054F300 (104 bytes)
extern "C" void ext_0054F210();
extern "C" void ext_00669E40();

extern "C" __declspec(naked) void __fastcall fn_0054F300(void* self) {
    __asm {
        fld1
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        push edi
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        mov esi, ecx
        fldz
        xor al, al
        fst dword ptr [esp + 0x8]
        lea ecx, [esi + 0x4]
        fst dword ptr [esp + 0x4]
        mov byte ptr [esi + 0x14], 0x1
        fstp dword ptr [esp]
        mov byte ptr [esi + 0x15], al
        mov byte ptr [esi + 0x16], al
        call ext_00669E40
        mov edi, dword ptr [esi + 0x20]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x18
        cmp dword ptr [esi + 0x4], edi
        jbe loc_54f346
        call ebp
    loc_54f346:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe loc_54f350
        call ebp
    loc_54f350:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0054F210
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x005442D0] sub_005442D0 (164 bytes)
extern "C" void ext_00480430();
extern "C" void ext_006A7250();
extern "C" int mem_0092C508;
extern "C" int mem_0093F8EC;

extern "C" __declspec(naked) void __fastcall fn_005442D0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x80]
        push edi
        call edx
        fld dword ptr [esi + 0x8]
        fld dword ptr [esi + 0x4]
        lea edi, [esi + 0x4]
        fld dword ptr [edi + 0x8]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fdiv dword ptr [esi + 0xa0]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        call ext_006A7250
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esi + 0xc4]
        fld dword ptr [esi + 0xc4]
        fcomp qword ptr [mem_0092C508]
        fnstsw ax
        test ah, 5
        jp short loc_54434A
        fld dword ptr [mem_0093F8EC]
    loc_544342:
        fstp dword ptr [esi + 0xc4]
        jmp short loc_54435B
    loc_54434A:
        fld1
        fcom dword ptr [esi + 0xc4]
        fnstsw ax
        test ah, 5
        jnp short loc_544342
        fstp st(0)
    loc_54435B:
        mov ecx, edi
        call ext_00480430
        mov ecx, dword ptr [esi + 0xa8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x68]
        pop edi
        pop esi
        add esp, 4
        jmp edx
    }
}

// [0x0054F1E0] sub_0054F1E0 (45 bytes)
extern "C" void ext_00534590();
extern "C" void __cdecl fn_0054F1E0(char* dst, unsigned int count, const void* src) {
    if (count <= 0) return;
    typedef void (__thiscall *Ctor)(void*, const void*);
    do {
        if (dst) {
            ((Ctor)ext_00534590)(dst, src);
        }
        --count;
        dst += 0x68;
    } while (count > 0);
}

// [0x0054F170] sub_0054F170 (54 bytes)
extern "C" char* __cdecl fn_0054F170(const char* first, const char* last, char* dest) {
    if (first != last) {
        typedef void (__thiscall *Ctor)(void*, const void*);
        do {
            if (dest) {
                ((Ctor)ext_00534590)(dest, first);
            }
            first += 0x68;
            dest += 0x68;
        } while (first != last);
    }
    return dest;
}

// [0x0054F2C0] sub_0054F2C0 (55 bytes)
extern "C" void ext_0054F1E0();

extern "C" __declspec(naked) int __fastcall fn_0054F2C0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_0054F1E0
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

extern "C" void ext_0054F170();

// [0x0054F370] sub_0054F370 (41 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054F370(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_0054F170
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0054F3A0] sub_0054F3A0 (90 bytes)
extern "C" void ext_0054F300();
extern "C" void ext_0066A310();

extern "C" __declspec(naked) void __fastcall fn_0054F3A0(void* self) {
    __asm {
        push -1
        push 0x8997ce
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        xor edi, edi
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi], 0x95704c
        call ext_0066A310
        mov dword ptr [esi + 0x1c], edi
        mov dword ptr [esi + 0x20], edi
        mov dword ptr [esi + 0x24], edi
        mov ecx, esi
        mov byte ptr [esp + 0x14], 0x2
        call ext_0054F300
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00545540] sub_00545540 (167 bytes)
extern "C" void ext_00540130();
extern "C" void ext_00543320();
extern "C" void ext_00544BE0();
extern "C" void ext_005450C0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00545540(void* self) {
    __asm {
        push -1
        push 0x00897F04
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x0095688C
        mov dword ptr [esi + 0x98], 0x0095678C
        mov eax, dword ptr [esi + 0x340]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x14], 0x2
        je L_skip_00545540
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_skip_00545540:
        lea ecx, [esi + 0x254]
        mov dword ptr [esi + 0x340], ebx
        mov dword ptr [esi + 0x344], ebx
        mov dword ptr [esi + 0x348], ebx
        call ext_00540130
        lea ecx, [esi + 0x16C]
        mov byte ptr [esp + 0x14], 0x1
        call ext_005450C0
        lea ecx, [esi + 0xA4]
        mov byte ptr [esp + 0x14], bl
        call ext_00544BE0
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xFFFFFFFF
        call ext_00543320
        mov ecx, dword ptr [esp + 0xC]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005417E0] sub_005417E0 (171 bytes)
extern "C" void ext_00547D10();
extern "C" __declspec(naked) void __fastcall fn_005417E0(void* self, int edx_unused, float f) {
    __asm {
        sub esp, 8
        cmp byte ptr [ecx + 13Dh], 0
        je L_else
        mov eax, dword ptr [ecx + 110h]
        mov eax, dword ptr [eax]
        push ebp
        push esi
        push edi
        lea edi, [ecx + 10Ch]
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0Ch], esi
        mov dword ptr [esp + 10h], ebp
        push ebx
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_loop:
        test esi, esi
        mov ebx, dword ptr [edi + 4]
        je L_bad1
        cmp esi, edi
        je L_ok1
L_bad1:
        call dword ptr [mem_00925134]
L_ok1:
        cmp ebp, ebx
        je L_exit
        test esi, esi
        jne L_ok2
        call dword ptr [mem_00925134]
L_ok2:
        cmp ebp, dword ptr [esi + 4]
        jne L_ok3
        call dword ptr [mem_00925134]
L_ok3:
        fld dword ptr [esp + 1Ch]
        push ecx
        mov ecx, dword ptr [ebp + 28h]
        fstp dword ptr [esp]
        call ext_00547D10
        lea ecx, [esp + 10h]
        call ext_00673C20
        mov ebp, dword ptr [esp + 14h]
        mov esi, dword ptr [esp + 10h]
        jmp L_loop
L_else:
        mov eax, dword ptr [ecx + 0F8h]
        fld dword ptr [esp + 0Ch]
        mov edx, eax
        shl edx, 4
        push ecx
        sub edx, eax
        fstp dword ptr [esp]
        mov ecx, dword ptr [ecx + edx*4 + 8]
        call ext_00547D10
        add esp, 8
        ret 4
L_exit:
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 4
    }
}

// [0x00547C20] sub_00547C20 (172 bytes)
extern "C" void* ext_00552940();
extern "C" void (__stdcall *mem_009254F4)(int, unsigned int*);
extern "C" void (__stdcall *mem_009254F0)(unsigned int, unsigned int);
extern "C" void (__stdcall *mem_009254E8)(unsigned int, unsigned int, int);
extern "C" void (__stdcall *mem_009254EC)(unsigned int, int, int, int, int, int, unsigned int, unsigned int, const void*);

struct TargetClass_547C20 {
    char pad[0xa8];
    unsigned int m_textureId;
    char m_flag_ac;
};

extern "C" void __fastcall fn_00547C20(TargetClass_547C20* self) {
    if (self->m_textureId == 0) {
        mem_009254F4(1, &self->m_textureId);
    }
    mem_009254F0(0xde1, self->m_textureId);
    void (__stdcall *pTexParam)(unsigned int, unsigned int, int) = mem_009254E8;
    pTexParam(0xde1, 0x2802, 0x2900);
    pTexParam(0xde1, 0x2803, 0x2900);
    pTexParam(0xde1, 0x2800, 0x2601);
    pTexParam(0xde1, 0x2801, 0x2600);
    void* pixels = ext_00552940();
    mem_009254EC(0xde1, 0, 0x1908, 0x100, 0x100, 0, 0x1908, 0x1401, pixels);
    self->m_flag_ac = 0;
}

// [0x00543BC0] sub_00543BC0 (52 bytes)
extern "C" void ext_005417E0();
extern "C" __declspec(naked) int __fastcall fn_00543BC0(void* self, int edx_unused, short a1) {
    __asm {
        movsx eax, word ptr [esp + 4]
        add eax, eax
        mov dword ptr [esp + 4], eax
        push ecx
        fild dword ptr [esp + 8]
        fmul dword ptr [ecx + 0xc0]
        mov ecx, dword ptr [ecx + 0x84]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fstp dword ptr [esp]
        call ext_005417E0
        mov eax, 1
        ret 4
    }
}

// [0x00541730] sub_00541730 (174 bytes)
extern "C" void ext_00547AF0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00541730(void* self, int edx_unused, int a1, int* a2) {
    __asm {
        sub esp, 8
        cmp byte ptr [ecx + 0x13d], 0
        je tail_path
        mov eax, dword ptr [ecx + 0x110]
        mov eax, dword ptr [eax]
        push ebp
        push esi
        push edi
        lea edi, [ecx + 0x10c]
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x10], ebp
        push ebx
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
loop_top:
        test esi, esi
        mov ebx, dword ptr [edi + 0x4]
        je chk_sentinel
        cmp esi, edi
        je chk_loop
chk_sentinel:
        call dword ptr [mem_00925134]
chk_loop:
        cmp ebp, ebx
        je done
        test esi, esi
        jne chk_node
        call dword ptr [mem_00925134]
chk_node:
        cmp ebp, dword ptr [esi + 0x4]
        jne do_work
        call dword ptr [mem_00925134]
do_work:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ebp + 0x28]
        push edx
        push eax
        call ext_00547AF0
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp loop_top
tail_path:
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [edx]
        add esp, 8
        mov dword ptr [esp + 0x8], eax
        mov eax, dword ptr [ecx + 0xf8]
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov ecx, dword ptr [ecx + 4 * edx + 0x8]
        jmp ext_00547AF0
done:
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 8
    }
}

extern "C" void ext_00480010();
extern "C" void ext_00541730();

// [0x00543640] sub_00543640 (107 bytes)
extern "C" __declspec(naked) void __fastcall fn_00543640(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x88]
        test eax, eax
        je short loc_5436a4
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x78]
        call edx
        mov ecx, dword ptr [esi + 0x88]
        push eax
        mov eax, dword ptr [edi + 0x18]
        call eax
        mov edi, eax
        mov ecx, edi
        call ext_00480010
        test al, al
        jne short loc_5436a3
        fld dword ptr [edi + 0x30]
        lea ecx, [esp + 0x1c]
        fstp dword ptr [esp + 0x8]
        push ecx
        fld dword ptr [edi + 0x34]
        mov ecx, dword ptr [esi + 0x84]
        fstp dword ptr [esp + 0x10]
        lea edx, [esp + 0xc]
        fld dword ptr [edi + 0x38]
        push edx
        fstp dword ptr [esp + 0x18]
        fld1
        fstp dword ptr [esp + 0x1c]
        call ext_00541730
loc_5436a3:
        pop edi
loc_5436a4:
        pop esi
        add esp, 0x10
        ret 4
    }
}

// [0x005436B0] sub_005436B0 (181 bytes)
extern "C" void* __fastcall fn_005436B0(void* self, int edx_unused, void* a1, void* a2) {
    char* p = (char*)self;
    *(void**)p = (void*)0x009560E4;
    float* f1 = (float*)(p + 4);
    f1[0] = 1.0f; f1[1] = 0.0f; f1[2] = 0.0f; f1[3] = 0.0f;
    f1[4] = 0.0f; f1[5] = 1.0f; f1[6] = 0.0f; f1[7] = 0.0f;
    f1[8] = 0.0f; f1[9] = 0.0f; f1[10] = 1.0f; f1[11] = 0.0f;
    f1[12] = 0.0f; f1[13] = 0.0f; f1[14] = 0.0f; f1[15] = 1.0f;

    float* f2 = (float*)(p + 0x44);
    f2[0] = 1.0f; f2[1] = 0.0f; f2[2] = 0.0f; f2[3] = 0.0f;
    f2[4] = 0.0f; f2[5] = 1.0f; f2[6] = 0.0f; f2[7] = 0.0f;
    f2[8] = 0.0f; f2[9] = 0.0f; f2[10] = 1.0f; f2[11] = 0.0f;
    f2[12] = 0.0f; f2[13] = 0.0f; f2[14] = 0.0f; f2[15] = 1.0f;

    *(void**)(p + 0x84) = a1;
    *(void**)(p + 0x8c) = a2;
    p[0x90] = 0;
    p[0x91] = 0;
    p[0x92] = 0;
    p[0x93] = 0;
    p[0x94] = 0;
    p[0x95] = 0;

    fn_00543350(self);
    return self;
}

// [0x00545940] sub_00545940 (103 bytes)
extern "C" void ext_005436B0();
extern "C" void ext_00537E50();
extern "C" void ext_00545840();

extern "C" __declspec(naked) void* __fastcall fn_00545940(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x898206
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0xc], esi
        call ext_005436B0
        lea ecx, [esi + 0x9c]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x956944
        call ext_00537E50
        mov ecx, esi
        mov byte ptr [esp + 0x10], 1
        call ext_00545840
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x005459D0] sub_005459D0 (115 bytes)
extern "C" void ext_00543350();
extern "C" void ext_005436B0();
extern "C" void ext_00549980();
extern "C" int mem_0093F8EC;

extern "C" __declspec(naked) void* __fastcall fn_005459D0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x008984b6
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0xc], esi
        call ext_005436B0
        lea ecx, [esi + 0x9c]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi], 0x009569fc
        call ext_00549980
        mov ecx, esi
        mov byte ptr [esp + 0x10], 0x1
        call ext_00543350
        fld dword ptr [mem_0093F8EC]
        mov ecx, dword ptr [esp + 0x8]
        fstp dword ptr [esi + 0xcc]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00543790] sub_00543790 (121 bytes)
extern "C" void ext_00538530();
extern "C" void ext_00538550();
extern "C" void ext_005436B0();
extern "C" int mem_009324A4;

extern "C" __declspec(naked) void* __fastcall fn_00543790(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x897376
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x10], esi
        call ext_005436B0
        lea edi, [esi + 0x98]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x95619c
        call ext_00538530
        fld dword ptr [mem_009324A4]
        push 0x1
        push 0x1
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        mov byte ptr [esp + 0x20], 0x1
        call ext_00538550
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00547220] sub_00547220 (129 bytes)
extern "C" void ext_005436B0();
extern "C" void ext_005470D0();
extern "C" void ext_0054A860();
extern "C" __declspec(naked) void* __fastcall fn_00547220(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x898a26
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0xc], esi
        call ext_005436B0
        lea ecx, [esi + 0x98]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi], 0x956b74
        call ext_0054A860
        fldz
        fst dword ptr [esi + 0xc0]
        mov ecx, esi
        fst dword ptr [esi + 0xbc]
        mov byte ptr [esp + 0x10], 0x1
        fst dword ptr [esi + 0xb8]
        fstp dword ptr [esi + 0xb4]
        call ext_005470D0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x00546FA0] sub_00546FA0 (145 bytes)
extern "C" void ext_005436B0();
extern "C" void ext_00546F00();
extern "C" void ext_0054A330();
extern "C" void ext_0054A860();
extern "C" __declspec(naked) void* __fastcall fn_00546FA0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x898774
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0xc], esi
        call ext_005436B0
        lea ecx, [esi + 0x98]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi], 0x956abc
        call ext_0054A330
        lea ecx, [esi + 0xb8]
        mov byte ptr [esp + 0x10], 0x1
        call ext_0054A860
        fldz
        fst dword ptr [esi + 0xe0]
        mov ecx, esi
        fst dword ptr [esi + 0xdc]
        mov byte ptr [esp + 0x10], 0x2
        fst dword ptr [esi + 0xd8]
        fstp dword ptr [esi + 0xd4]
        call ext_00546F00
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x00540C30] sub_00540C30 (193 bytes)
extern "C" int mem_00A44BC0;
extern "C" int mem_00924FC0;
extern "C" int mem_00A44BCC;
extern "C" int mem_00A44BC4;
extern "C" int mem_00A44BD0;
extern "C" int mem_0093F7B8;
extern "C" int mem_00955A30;
extern "C" int mem_009254CC;

extern "C" __declspec(naked) void __fastcall fn_00540C30(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, eax
        shl ecx, 0x4
        sub ecx, eax
        mov ecx, dword ptr [esi + ecx*4 + 0x8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x20]
        call eax
        test al, al
        je near done_esi
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, eax
        shl ecx, 0x4
        sub ecx, eax
        mov ecx, dword ptr [esi + ecx*4 + 0x8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1c]
        push edi
        call eax
        mov ecx, dword ptr [mem_00A44BC0]
        mov edi, dword ptr [mem_00924FC0]
        mov esi, eax
        push ecx
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne short match_z
        mov edx, dword ptr [mem_00A44BCC]
        push edx
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne short match_z
        mov eax, dword ptr [mem_00A44BC4]
        push eax
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne short match_x
        mov ecx, dword ptr [mem_00A44BD0]
        push ecx
        push esi
        call edi
        add esp, 0x8
        test al, al
        je short done
    match_x:
        fldz
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x8]
        fld1
        jmp short common
    match_z:
        fld dword ptr [mem_0093F7B8]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fldz
        fst dword ptr [esp + 0x8]
    common:
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_00955A30]
        fstp dword ptr [esp]
        call dword ptr [mem_009254CC]
    done:
        pop edi
    done_esi:
        pop esi
        ret
    }
}

// [0x0054CC60] sub_0054CC60 (199 bytes)
// Enumerates display devices via EnumDisplayDevicesA (IAT slot) and returns true if any
// DeviceString, after ext_00665010 processing, contains the literal at 0x956e80 (find != npos).
extern "C" void ext_00665010();
extern "C" int mem_00925588;
extern "C" int mem_00924FE4;
extern "C" int mem_00925014;
extern "C" int mem_00924EC4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) bool __fastcall fn_0054CC60(void* self) {
    __asm {
        push -0x1
        push 0x8991bc
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c4
        push ebx
        push esi
        push edi
        mov edi, dword ptr [mem_00925588]
        push 0x0
        lea eax, [esp + 0x2c]
        push eax
        push 0x0
        push 0x0
        mov dword ptr [esp + 0x38], 0x1a8
        xor esi, esi
        xor bl, bl
        call edi
        test eax, eax
        je loc_done_0054CC60
    loc_loop_0054CC60:
        lea ecx, [esp + 0x4c]
        push ecx
        lea ecx, [esp + 0x10]
        add esi, 0x1
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0xc]
        push edx
        mov dword ptr [esp + 0x1dc], 0x0
        call ext_00665010
        add esp, 0x4
        push 0x0
        push 0x956e80
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00925014]
        mov ecx, dword ptr [mem_00924EC4]
        cmp eax, dword ptr [ecx]
        je loc_skip_0054CC60
        mov bl, 0x1
    loc_skip_0054CC60:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x1d8], 0xffffffff
        call dword ptr [mem_00924FF4]
        push 0x0
        lea edx, [esp + 0x2c]
        push edx
        push esi
        push 0x0
        call edi
        test eax, eax
        jne loc_loop_0054CC60
    loc_done_0054CC60:
        mov ecx, dword ptr [esp + 0x1d0]
        pop edi
        pop esi
        mov al, bl
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1d0
        ret
    }
}

// [0x005465D0] sub_005465D0 (52 bytes)
extern "C" void ext_006943B0();
extern "C" __declspec(naked) void __fastcall fn_005465D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x10
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_006943B0
        fld dword ptr [eax]
        fstp dword ptr [esi]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esi + 0xc]
        pop esi
        add esp, 0x10
        ret 0x4
    }
}

// [0x00541B50] sub_00541B50 (208 bytes)
extern "C" void ext_00547AF0();
extern "C" void ext_00547E80();
extern "C" void ext_005480F0();
extern "C" void ext_005491B0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00541B50(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0xc
        mov al, byte ptr [esp + 0x10]
        push esi
        mov esi, ecx
        mov byte ptr [esi + 0x13d], al
        mov eax, dword ptr [esi + 0xf8]
        mov ecx, eax
        shl ecx, 0x4
        sub ecx, eax
        mov ecx, dword ptr [esi + 4*ecx + 0x8]
        call ext_005491B0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esi + 0xf8]
        mov edx, eax
        shl edx, 0x4
        sub edx, eax
        mov ecx, dword ptr [esi + 4*edx + 0x8]
        call ext_005480F0
        cmp byte ptr [esi + 0x13d], 0x0
        mov dword ptr [esp + 0x14], eax
        je done_pop_esi
        mov eax, dword ptr [esi + 0x110]
        push ebx
        lea ebx, [esi + 0x10c]
        push edi
        mov edi, dword ptr [eax]
        mov esi, ebx
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], edi
        push ebp
loop_head:
        test esi, esi
        mov ebp, dword ptr [ebx + 0x4]
        je invalid_a
        cmp esi, ebx
        je check_b
invalid_a:
        call dword ptr [mem_00925134]
check_b:
        cmp edi, ebp
        je loop_exit
        test esi, esi
        mov ebp, dword ptr [mem_00925134]
        jne check_c
        call ebp
check_c:
        cmp edi, dword ptr [esi + 0x4]
        jne call_a
        call ebp
call_a:
        mov ecx, dword ptr [esp + 0x20]
        push 0x0
        push ecx
        mov ecx, dword ptr [edi + 0x28]
        call ext_00547AF0
        cmp edi, dword ptr [esi + 0x4]
        jne call_b
        call ebp
call_b:
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [edi + 0x28]
        push edx
        call ext_00547E80
        lea ecx, [esp + 0x14]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x18]
        mov esi, dword ptr [esp + 0x14]
        jmp loop_head
loop_exit:
        pop ebp
        pop edi
        pop ebx
done_pop_esi:
        pop esi
        add esp, 0xc
        ret 0x4
    }
}

// [0x005426F0] sub_005426F0 (67 bytes)
// Takes a const std::string& (ret 0x4). Copy-constructs it into a local std::string
// via the imported basic_string copy ctor, then calls ext_005DF5C0 on this+0x10c.
// If that returns non-zero, calls ext_00540E10 on the sub-object at this+8+60*[this+0xf8]
// with the return value as its stack arg. Byte-parity naked asm (the local is not
// destroyed and the stack is not re-balanced in the disassembly).
extern "C" int mem_00924FE0;
extern "C" void ext_005DF5C0();
extern "C" void ext_00540E10();

extern "C" __declspec(naked) void __fastcall fn_005426F0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        push esi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x10c]
        call ext_005DF5C0
        test eax, eax
        je short done_5426F0
        push eax
        mov eax, dword ptr [esi + 0xf8]
        mov ecx, eax
        shl ecx, 0x4
        sub ecx, eax
        lea ecx, [esi + 4*ecx + 0x8]
        call ext_00540E10
done_5426F0:
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005427E0] sub_005427E0 (249 bytes)
// s: by-value std::string (28 bytes on the stack, callee-cleaned via ret 0x1c); declared raw because naked functions cannot take unwinding types.
extern "C" void ext_005426F0();
extern "C" void ext_00664B20();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005427E0(void* self, int edx_unused, void* s) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x881709
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x44]
        mov edx, dword ptr [ecx]
        lea eax, [esp + 0x14]
        push eax
        mov eax, dword ptr [edx + 0x1c]
        mov dword ptr [esp + 0x10], 0x0
        call eax
        push eax
        call ext_00664B20
        add esp, 0x8
        test al, al
        je short L_check1
        mov dword ptr [esi + 0xf8], 0x1
        jmp L_end
    L_check1:
        mov ecx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ecx]
        lea edx, [esp + 0x14]
        push edx
        mov edx, dword ptr [eax + 0x1c]
        call edx
        push eax
        call ext_00664B20
        add esp, 0x8
        test al, al
        je short L_check2
        mov dword ptr [esi + 0xf8], 0x0
        jmp short L_end
    L_check2:
        mov ecx, dword ptr [esi + 0xbc]
        mov edx, dword ptr [ecx]
        lea eax, [esp + 0x14]
        push eax
        mov eax, dword ptr [edx + 0x1c]
        call eax
        push eax
        call ext_00664B20
        add esp, 0x8
        test al, al
        je short L_check3
        mov dword ptr [esi + 0xf8], 0x3
        jmp short L_end
    L_check3:
        mov ecx, dword ptr [esi + 0x80]
        mov eax, dword ptr [ecx]
        lea edx, [esp + 0x14]
        push edx
        mov edx, dword ptr [eax + 0x1c]
        call edx
        push eax
        call ext_00664B20
        add esp, 0x8
        test al, al
        je short L_fallback
        mov dword ptr [esi + 0xf8], 0x2
        jmp short L_end
    L_fallback:
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_005426F0
    L_end:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xc], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x1c
    }
}

// [0x005430B0] sub_005430B0 (256 bytes)
extern "C" void ext_0059F5C0();
extern "C" void ext_0066A330();
extern "C" void ext_006A6C99();

extern "C" __declspec(naked) void __fastcall fn_005430B0(void* self) {
    __asm {
        push -1
        push 0x00896d3c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        push 0x00532c70
        push 0x00540f80
        push 0x4
        push 0x3c
        lea eax, [esi + 0x8]
        xor ebx, ebx
        push eax
        mov dword ptr [esp + 0x2c], ebx
        mov dword ptr [esi], 0x00956064
        mov byte ptr [esi + 0x4], 0x1
        call ext_006A6C99
        mov dword ptr [esi + 0xf8], ebx
        mov dword ptr [esi + 0xfc], ebx
        lea edi, [esi + 0x10c]
        mov dword ptr [esi + 0x100], ebx
        mov dword ptr [esi + 0x104], ebx
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0x1
        mov dword ptr [esi + 0x108], ebx
        call ext_0059F5C0
        mov dword ptr [edi + 0x4], eax
        mov byte ptr [eax + 0x2d], 0x1
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [edi + 0x8], ebx
        fld1
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        fldz
        lea ecx, [esi + 0x118]
        fst dword ptr [esp + 0x8]
        mov byte ptr [esp + 0x28], 0x2
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ext_0066A330
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x128], ebx
        mov dword ptr [esi + 0x12c], ebx
        mov dword ptr [esi + 0x130], 0x2
        mov dword ptr [esi + 0x134], ebx
        mov dword ptr [esi + 0x138], ebx
        mov byte ptr [esi + 0x13c], bl
        mov byte ptr [esi + 0x13d], bl
        pop edi
        mov byte ptr [esi + 0x13e], 0x1
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00548280] sub_00548280 (261 bytes)
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_00548280(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi+0x8]
        mov dword ptr [esi], 0x956c2c
        call dword ptr [mem_00924FE8]
        fldz
        mov ecx, [esp+0xc]
        mov [esi+0x28], ecx
        mov eax, [esp+8]
        mov [esi+0x24], eax
        mov cl, 1
        mov [esi+0x2c], cl
        fst dword ptr [esi+0x38]
        fst dword ptr [esi+0x34]
        xor eax, eax
        fst dword ptr [esi+0x30]
        fst dword ptr [esi+0x44]
        fst dword ptr [esi+0x40]
        fst dword ptr [esi+0x3c]
        fst dword ptr [esi+0x54]
        fst dword ptr [esi+0x50]
        fst dword ptr [esi+0x4c]
        fst dword ptr [esi+0x48]
        fst dword ptr [esi+0x64]
        fst dword ptr [esi+0x60]
        fst dword ptr [esi+0x5c]
        fst dword ptr [esi+0x58]
        fst dword ptr [esi+0x70]
        fst dword ptr [esi+0x6c]
        fst dword ptr [esi+0x68]
        fst dword ptr [esi+0x7c]
        fst dword ptr [esi+0x78]
        fst dword ptr [esi+0x74]
        fst dword ptr [esi+0x8c]
        fst dword ptr [esi+0x88]
        fst dword ptr [esi+0x84]
        fst dword ptr [esi+0x80]
        fst dword ptr [esi+0x9c]
        fst dword ptr [esi+0x98]
        fst dword ptr [esi+0x94]
        fst dword ptr [esi+0x90]
        mov [esi+0xa0], eax
        fld1
        mov [esi+0xa4], eax
        fst qword ptr [esi+0xb0]
        mov [esi+0xa8], eax
        fst qword ptr [esi+0xb8]
        mov [esi+0xac], cl
        fstp qword ptr [esi+0xc0]
        mov eax, esi
        fldz
        fst qword ptr [esi+0xc8]
        fstp qword ptr [esi+0xd0]
        fst dword ptr [esi+0xe4]
        fst dword ptr [esi+0xe0]
        fst dword ptr [esi+0xdc]
        fst dword ptr [esi+0xd8]
        fst dword ptr [esi+0xf4]
        fst dword ptr [esi+0xf0]
        fst dword ptr [esi+0xec]
        fstp dword ptr [esi+0xe8]
        pop esi
        ret 8
    }
}

extern "C" void ext_005D0530();
extern "C" void ext_006A6DE0();

// [0x00548FC0] sub_00548FC0 (286 bytes)
extern "C" __declspec(naked) void __fastcall fn_00548FC0(void* self, int edx_unused) {
    __asm {
        sub esp, 0x50
        fld1
        push esi
        fst dword ptr [esp + 0x14]
        push edi
        fldz
        mov esi, ecx
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x38]
        fst dword ptr [esp + 0x3c]
        fst dword ptr [esp + 0x44]
        fst dword ptr [esp + 0x48]
        fst dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x54]
        call ext_005480F0
        fld dword ptr [eax]
        mov edi, dword ptr [esi]
        fstp dword ptr [esp + 0x48]
        lea ecx, [esp + 0x18]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [eax + 0x8]
        lea eax, [esp + 0x8]
        fstp dword ptr [esp + 0x50]
        push eax
        fld1
        push ecx
        fstp dword ptr [esp + 0x5c]
        fldz
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x68]
        call ext_006A6DE0
        fld dword ptr [esp + 0x64]
        push eax
        call ext_006A6DE0
        mov edx, dword ptr [edi + 0x28]
        push eax
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esi + 0xa0]
        test ecx, ecx
        je L_no_extra
        lea eax, [esp + 0x8]
        push eax
        call ext_005D0530
        pop edi
        pop esi
        add esp, 0x50
        ret 0x8
L_no_extra:
        fld dword ptr [esi + 0x80]
        mov ecx, dword ptr [esi + 0x24]
        fsub dword ptr [esp + 0x8]
        cmp byte ptr [ecx], 0
        fstp dword ptr [esi + 0x80]
        fld dword ptr [esi + 0x84]
        je L_else
        fsub dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0x84]
        fld dword ptr [esi + 0x88]
        fsub dword ptr [esp + 0x10]
        jmp L_store
L_else:
        fsub dword ptr [esp + 0x10]
        fstp dword ptr [esi + 0x84]
        fld dword ptr [esi + 0x88]
        fadd dword ptr [esp + 0xc]
L_store:
        fstp dword ptr [esi + 0x88]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x44]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        add esp, 0x50
        ret 0x8
    }
}

// [0x005419F0] sub_005419F0 (191 bytes)
extern "C" void ext_00548FC0();
extern "C" __declspec(naked) void __fastcall fn_005419F0(void* self, int edx_unused, float a1, float a2) {
    __asm {
        sub esp, 8
        cmp byte ptr [ecx + 13Dh], 0
        je L_else
        mov eax, dword ptr [ecx + 110h]
        mov eax, dword ptr [eax]
        push ebp
        push esi
        push edi
        lea edi, [ecx + 10Ch]
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0Ch], esi
        mov dword ptr [esp + 10h], ebp
        push ebx
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_loop:
        test esi, esi
        mov ebx, dword ptr [edi + 4]
        je L_bad1
        cmp esi, edi
        je L_ok1
L_bad1:
        call dword ptr [mem_00925134]
L_ok1:
        cmp ebp, ebx
        je L_exit
        test esi, esi
        jne L_ok2
        call dword ptr [mem_00925134]
L_ok2:
        cmp ebp, dword ptr [esi + 4]
        jne L_ok3
        call dword ptr [mem_00925134]
L_ok3:
        fld dword ptr [esp + 20h]
        mov ecx, dword ptr [ebp + 28h]
        sub esp, 8
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp]
        call ext_00548FC0
        lea ecx, [esp + 10h]
        call ext_00673C20
        mov ebp, dword ptr [esp + 14h]
        mov esi, dword ptr [esp + 10h]
        jmp L_loop
L_else:
        mov eax, dword ptr [ecx + 0F8h]
        fld dword ptr [esp + 10h]
        mov edx, eax
        sub esp, 8
        shl edx, 4
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 14h]
        sub edx, eax
        mov ecx, dword ptr [ecx + edx*4 + 8]
        fstp dword ptr [esp]
        call ext_00548FC0
        add esp, 8
        ret 8
L_exit:
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 8
    }
}

// [0x00549A30] sub_00549A30 (289 bytes)
extern "C" void ext_0063E018();
extern "C" int mem_00956A88;
extern "C" int mem_00925490;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;
extern "C" int mem_00925414;
extern "C" int mem_009253D0;
extern "C" int mem_00956D28;
extern "C" int mem_00925404;
extern "C" __declspec(naked) void __fastcall fn_00549A30(void* self, int edx_unused, float a1, float a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x34
        fld dword ptr [ebp+0xc]
        push ebx
        fmul qword ptr [mem_00956A88]
        push esi
        push edi
        push 1
        fstp dword ptr [esp+0x3c]
        mov esi, ecx
        fld dword ptr [ebp+8]
        fsub dword ptr [esp+0x3c]
        fstp dword ptr [esp+0x40]
        call dword ptr [mem_00925490]
        fldz
        mov edi, dword ptr [mem_0092548C]
        sub esp, 0xc
        fstp dword ptr [esp+8]
        fld dword ptr [esp+0x48]
        fstp dword ptr [esp+4]
        fld dword ptr [esp+0x44]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 0xc
        fstp dword ptr [esp+8]
        fld dword ptr [esp+0x44]
        fstp dword ptr [esp+4]
        fld dword ptr [esp+0x48]
        fstp dword ptr [esp]
        call edi
        call dword ptr [mem_00925488]
        mov edi, dword ptr [mem_00925414]
        call edi
        fld dword ptr [esp+0x3c]
        fsub dword ptr [esp+0x38]
        mov ebx, dword ptr [mem_009253D0]
        sub esp, 0xc
        fstp dword ptr [esp+0x48]
        fldz
        fst dword ptr [esp+8]
        fld dword ptr [esp+0x48]
        fstp dword ptr [esp+4]
        fstp dword ptr [esp]
        call ebx
        fld qword ptr [mem_00956D28]
        mov eax, dword ptr [esi+0x24]
        sub esp, 0x10
        fstp qword ptr [esp+8]
        fldz
        fstp qword ptr [esp]
        fld dword ptr [ebp+0xc]
        push 1
        push 8
        sub esp, 0x10
        fst qword ptr [esp+8]
        fstp qword ptr [esp]
        push eax
        call ext_0063E018
        call dword ptr [mem_00925404]
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp+8]
        fstp dword ptr [esp+4]
        fld dword ptr [esp+0x48]
        fstp dword ptr [esp]
        call ebx
        fld qword ptr [mem_00956D28]
        mov ecx, dword ptr [esi+0x24]
        sub esp, 0x10
        fst qword ptr [esp+8]
        fstp qword ptr [esp]
        push 1
        fld dword ptr [ebp+0xc]
        push 8
        sub esp, 0x10
        fst qword ptr [esp+8]
        fstp qword ptr [esp]
        push ecx
        call ext_0063E018
        call dword ptr [mem_00925404]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}

// [0x00549F40] sub_00549F40 (290 bytes)
extern "C" void ext_0063E024();
extern "C" void ext_0063E02A();
extern "C" int mem_00925414;
extern "C" int mem_009254B0;
extern "C" int mem_009253D0;
extern "C" int mem_00955D10;
extern "C" int mem_009254CC;
extern "C" int mem_00925404;

extern "C" __declspec(naked) void __fastcall fn_00549F40(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -64
        sub esp, 0x34
        fld dword ptr [ebp + 0xc]
        push ebx
        fadd st(0), st
        push esi
        mov esi, ecx
        push edi
        fstp dword ptr [esp + 0x30]
        mov edi, dword ptr [mem_00925414]
        fld dword ptr [esi + 0x18]
        fld1
        fld st(0)
        fdivrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esi + 0x1c]
        fdivr st, st(1)
        fstp dword ptr [esp + 0x38]
        fdiv dword ptr [esi + 0x20]
        fstp dword ptr [esp + 0x3c]
        call edi
        fld dword ptr [esp + 0x3c]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp]
        call dword ptr [mem_009254B0]
        fld dword ptr [ebp + 0xc]
        mov ebx, dword ptr [mem_009253D0]
        fchs
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [esp + 0x30]
        mov eax, dword ptr [esi + 0x28]
        push 1
        push 8
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [ebp + 0x8]
        fst qword ptr [esp + 0x8]
        fstp qword ptr [esp]
        push eax
        call ext_0063E02A
        call edi
        fldz
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        fld1
        fstp dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_00955D10]
        fstp dword ptr [esp]
        call dword ptr [mem_009254CC]
        fld dword ptr [ebp + 0x8]
        mov ecx, dword ptr [esi + 0x28]
        push 1
        push 8
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        fldz
        fstp qword ptr [esp]
        push ecx
        call ext_0063E024
        mov edi, dword ptr [mem_00925404]
        call edi
        fld dword ptr [esp + 0x30]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [ebp + 0x8]
        push 1
        push 8
        sub esp, 0x10
        mov edx, dword ptr [esi + 0x28]
        fstp qword ptr [esp + 0x8]
        fldz
        fstp qword ptr [esp]
        push edx
        call ext_0063E024
        call edi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}

// [0x00540890] sub_00540890 (293 bytes)
extern "C" void ext_0063E03C();
extern "C" int mem_00925400;
extern "C" int mem_009253D8;
extern "C" int mem_00925414;
extern "C" int mem_009253D4;
extern "C" int mem_00993858;
extern "C" int mem_00925520;
extern "C" int mem_0092551C;
extern "C" int mem_0092540C;
extern "C" int mem_00925490;
extern "C" int mem_009254E0;
extern "C" int mem_00925488;
extern "C" int mem_00925404;

extern "C" __declspec(naked) void __fastcall fn_00540890(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x134]
        test eax, eax
        jne check_flag
        cmp dword ptr [esi + 0x138], eax
        je done
check_flag:
        cmp byte ptr [esi + 0x13c], 0
        je done
        mov ecx, dword ptr [esi + 0x138]
        push ebx
        push edi
        push ecx
        push eax
        push 0
        push 0
        call dword ptr [mem_00925400]
        mov ebx, dword ptr [mem_009253D8]
        push 0x1701
        call ebx
        call dword ptr [mem_00925414]
        mov edi, dword ptr [mem_009253D4]
        call edi
        fild dword ptr [esi + 0x138]
        sub esp, 0x20
        fstp qword ptr [esp + 0x18]
        fldz
        fst qword ptr [esp + 0x10]
        fild dword ptr [esi + 0x134]
        fstp qword ptr [esp + 0x8]
        fstp qword ptr [esp]
        call ext_0063E03C
        push 0x1700
        call ebx
        call edi
        fld dword ptr [mem_00993858]
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        push 0x1b01
        push 0x404
        call dword ptr [mem_0092551C]
        cmp byte ptr [esi + 0x13c], 0
        je use_low_color
        mov edx, dword ptr [esi + 0x12c]
        push edx
        jmp do_color
use_low_color:
        mov eax, dword ptr [esi + 0x128]
        push eax
do_color:
        call dword ptr [mem_0092540C]
        mov eax, dword ptr [esi + 0xf8]
        mov ecx, eax
        shl ecx, 0x4
        sub ecx, eax
        push 0x7
        lea esi, [esi + 4 * ecx + 0xc]
        call dword ptr [mem_00925490]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        mov edi, dword ptr [mem_009254E0]
        push edx
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push edx
        call edi
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push eax
        push ecx
        call edi
        mov edx, dword ptr [esi + 0xc]
        mov eax, dword ptr [esi]
        push edx
        push eax
        call edi
        call dword ptr [mem_00925488]
        push 0x1701
        call ebx
        call dword ptr [mem_00925404]
        push 0x1700
        call ebx
        pop edi
        pop ebx
done:
        pop esi
        ret
    }
}

// [0x0054FD10] sub_0054FD10 (307 bytes)
extern "C" int mem_009251D8;

extern "C" void __fastcall fn_0054FD10(void* self, int edx_unused, int* a1) {
    typedef void (__cdecl* FreeFn)(void*);
    FreeFn fr = (FreeFn)mem_009251D8;
    if (a1[4] != 0) {
        for (int i = 0; i < a1[0]; ++i) {
            fr((void*)((int*)a1[4])[i]);
        }
        fr((void*)a1[4]);
    }
    if (a1[5] != 0) {
        for (int i = 0; i < a1[3]; ++i) {
            fr((void*)((int*)a1[5])[i]);
        }
        fr((void*)a1[5]);
    }
    if (a1[6] != 0) {
        for (int i = 0; i < a1[1]; ++i) {
            fr((void*)((int*)a1[6])[i]);
        }
        fr((void*)a1[6]);
    }
    if (a1[7] != 0) {
        for (int i = 0; i < a1[3]; ++i) {
            fr((void*)((int*)a1[7])[i]);
        }
        fr((void*)a1[7]);
    }
    if (a1[8] != 0) {
        for (int i = 0; i < a1[2]; ++i) {
            fr((void*)((int*)a1[8])[i]);
        }
        fr((void*)a1[8]);
    }
    if (a1[9] != 0) {
        for (int i = 0; i < a1[3]; ++i) {
            fr((void*)((int*)a1[9])[i]);
        }
        fr((void*)a1[9]);
    }
}

// [0x005447E0] sub_005447E0 (313 bytes)
extern "C" void ext_005434E0();
extern "C" void ext_005436B0();
extern "C" void ext_00544240();
extern "C" void ext_00546FA0();
extern "C" void ext_0054B6D0();
extern "C" void ext_006A5C62();
extern "C" int mem_009563EC;
extern "C" int mem_00940694;
extern "C" int mem_0092C508;
extern "C" int mem_0093F8EC;
extern "C" int mem_00956364;
extern "C" int mem_00956264;
extern "C" int mem_0093C2E4;
extern "C" __declspec(naked) void __fastcall fn_005447E0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x89765f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x20]
        push ebp
        push esi
        push edi
        push ebx
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x18], esi
        call ext_005436B0
        fld dword ptr [mem_009563EC]
        mov dword ptr [esi + 0x98], offset mem_0093C2E4
        fstp dword ptr [esi + 0xa0]
        fld dword ptr [mem_00940694]
        lea edi, [esi + 0x98]
        xor eax, eax
        fstp dword ptr [esi + 0xa4]
        mov dword ptr [esi], offset mem_00956364
        mov dword ptr [edi], offset mem_00956264
        mov dword ptr [esi + 0x9c], eax
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esi + 0xa8], eax
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [esi + 0xac], ecx
        lea ebp, [esi + 0xb0]
        mov ecx, ebp
        mov byte ptr [esp + 0x1c], 1
        call ext_0054B6D0
        mov ecx, esi
        mov byte ptr [esp + 0x1c], 2
        call ext_00544240
        push 0xe8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x2c], eax
        test eax, eax
        mov byte ptr [esp + 0x1c], 3
        je short L_a8
        mov edx, dword ptr [esp + 0x24]
        push ebx
        push edx
        mov ecx, eax
        call ext_00546FA0
        mov ebx, eax
        jmp short L_aa
L_a8:
        xor ebx, ebx
L_aa:
        mov ecx, dword ptr [esi + 0xa8]
        cmp ebx, ecx
        mov byte ptr [esp + 0x1c], 2
        je short L_c6
        test ecx, ecx
        je short L_c6
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 1
        call edx
L_c6:
        push edi
        mov ecx, ebx
        mov dword ptr [esi + 0xa8], ebx
        call ext_005434E0
        fld1
        fst dword ptr [ebp + 0x14]
        fld dword ptr [ebp + 0x14]
        fcomp qword ptr [mem_0092C508]
        fnstsw ax
        test ah, 5
        jp short L_f6
        fstp st(0)
        fld dword ptr [mem_0093F8EC]
L_f1:
        fstp dword ptr [ebp + 0x14]
        jmp short L_102
L_f6:
        fcom dword ptr [ebp + 0x14]
        fnstsw ax
        test ah, 5
        jnp short L_f1
        fstp st(0)
L_102:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x0054B030] sub_0054B030 (322 bytes)
extern "C" int mem_0092546C;
extern "C" int mem_00925414;
extern "C" int mem_009253D0;
extern "C" int mem_009254B8;
extern "C" int mem_009254B4;
extern "C" int mem_00925490;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;
extern "C" int mem_00925404;
extern "C" int mem_0092552C;

extern "C" __declspec(naked) void __fastcall fn_0054B030(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x44
        push esi
        push 8
        call dword ptr [mem_0092546C]
        call dword ptr [mem_00925414]
        fld dword ptr [esp + 0x4c]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009253D0]
        fld1
        lea eax, [esp + 0x8]
        fst dword ptr [esp + 0x8]
        push eax
        fldz
        push 0xba6
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x3c]
        fst dword ptr [esp + 0x40]
        fst dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x48]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x4c]
        call dword ptr [mem_009254B8]
        fld1
        lea ecx, [esp + 0x8]
        fst dword ptr [esp + 0x8]
        push ecx
        fldz
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x10]
        fst dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x34]
        call dword ptr [mem_009254B4]
        push 7
        call dword ptr [mem_00925490]
        fld dword ptr [esp + 0x4c]
        mov esi, dword ptr [mem_0092548C]
        fchs
        fstp dword ptr [esp + 0x4]
        sub esp, 0xc
        fldz
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fldz
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x58]
        fstp dword ptr [esp]
        call esi
        fldz
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x58]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fldz
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp]
        call esi
        call dword ptr [mem_00925488]
        call dword ptr [mem_00925404]
        call dword ptr [mem_0092552C]
        pop esi
        add esp, 0x44
        ret 4
    }
}

// [0x005405C0] sub_005405C0 (340 bytes)
extern "C" void ext_0068BB60();
extern "C" void ext_0068BBF0();
extern "C" void ext_0068BC50();
extern "C" void ext_0068C530();
extern "C" void ext_00896BEB();
extern "C" int mem_009252B4;
extern "C" unsigned int mem_00AF1430;
extern "C" unsigned char mem_00A450F0[0x40000];
extern "C" __declspec(naked) void __fastcall fn_005405C0(void* self) {
    __asm {
        push -1
        push offset ext_00896BEB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x9e8
        push esi
        push offset mem_00AF1430
        push 1
        call dword ptr [mem_009254F4]
        lea ecx, [esp + 4]
        call ext_0068C530
        lea ecx, [esp + 4]
        mov dword ptr [esp + 0x9f4], 0
        mov dword ptr [esp + 0xc], 0x6f
        call ext_0068BC50
        xor esi, esi
    l1:
        lea ecx, [esp + 4]
        call ext_0068BBF0
        xor byte ptr [esi + mem_00A450F0], al
        add esi, 1
        cmp esi, 0x40000
        jl l1
        mov eax, dword ptr [mem_00AF1430]
        push eax
        push 0xde1
        call dword ptr [mem_009254F0]
        push offset mem_00A450F0
        push 0x1401
        push 0x1908
        push 0
        push 0x100
        push 0x100
        push 0x1908
        push 0
        push 0xde1
        call dword ptr [mem_009254EC]
        mov esi, dword ptr [mem_009254E8]
        push 0x2900
        push 0x2802
        push 0xde1
        call esi
        push 0x2900
        push 0x2803
        push 0xde1
        call esi
        push 0x2601
        push 0x2800
        push 0xde1
        call esi
        push 0x2600
        push 0x2801
        push 0xde1
        call esi
        call dword ptr [mem_009252B4]
        movzx ecx, al
        mov dword ptr [esp + 0xc], ecx
        lea ecx, [esp + 4]
        call ext_0068BC50
        xor esi, esi
        _emit 0x8d
        _emit 0x9b
        _emit 0
        _emit 0
        _emit 0
        _emit 0
    l2:
        lea ecx, [esp + 4]
        call ext_0068BBF0
        xor byte ptr [esi + mem_00A450F0], al
        add esi, 1
        cmp esi, 0x40000
        jl l2
        lea ecx, [esp + 4]
        mov dword ptr [esp + 0x9f4], -1
        call ext_0068BB60
        mov ecx, dword ptr [esp + 0x9ec]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x9f4
        ret
    }
}

// [0x00540720] sub_00540720 (366 bytes)
extern "C" void ext_005405C0();
extern "C" unsigned int mem_00AF1430;
extern "C" int mem_00925414;
extern "C" int mem_009253D4;
extern "C" int mem_0092546C;
extern "C" int mem_00925418;
extern "C" int mem_00925438;
extern "C" int mem_0092551C;
extern "C" int mem_00956050;
extern "C" int mem_00925500;
extern "C" int mem_00925490;
extern "C" int mem_009254FC;
extern "C" int mem_00993CA0;
extern "C" int mem_009254F8;
extern "C" int mem_0095604C;
extern "C" int mem_00956048;
extern "C" int mem_00925488;
extern "C" int mem_0092552C;
extern "C" int mem_00925404;
extern "C" __declspec(naked) void __fastcall fn_00540720(void* self) {
    __asm {
        sub esp, 8
        cmp dword ptr [mem_00AF1430], 0
        push ebx
        push esi
        push edi
        mov edi, ecx
        jne L_540736
        call ext_005405C0
L_540736:
        call dword ptr [mem_00925414]
        call dword ptr [mem_009253D4]
        push 8
        call dword ptr [mem_0092546C]
        mov esi, dword ptr [mem_00925418]
        push 0DE1h
        call esi
        push 0BE2h
        call esi
        mov ebx, dword ptr [mem_00925438]
        push 0B71h
        call ebx
        push 1B02h
        push 404h
        call dword ptr [mem_0092551C]
        mov eax, dword ptr [mem_00AF1430]
        push eax
        push 0DE1h
        call dword ptr [mem_009254F0]
        fld dword ptr [mem_00956050]
        push ecx
        fstp dword ptr [esp]
        push 2200h
        push 2300h
        call dword ptr [mem_00925500]
        mov ecx, dword ptr [edi]
        fld qword ptr [ecx+0C0h]
        push 7
        fstp dword ptr [esp+10h]
        call dword ptr [mem_00925490]
        fldz
        mov esi, dword ptr [mem_009254FC]
        sub esp, 8
        fst dword ptr [esp+4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp+0Ch]
        fsub qword ptr [mem_00993CA0]
        mov edi, dword ptr [mem_009254F8]
        sub esp, 8
        fstp dword ptr [esp+18h]
        fld dword ptr [mem_0095604C]
        fstp dword ptr [esp+4]
        fld dword ptr [esp+18h]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 8
        fstp dword ptr [esp+4]
        fld1
        fstp dword ptr [esp]
        call esi
        fld dword ptr [mem_0095604C]
        sub esp, 8
        fstp dword ptr [esp+4]
        fld dword ptr [esp+14h]
        fstp dword ptr [esp]
        call edi
        fld1
        sub esp, 8
        fst dword ptr [esp+4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [mem_00956048]
        sub esp, 8
        fstp dword ptr [esp+4]
        fld dword ptr [esp+14h]
        fstp dword ptr [esp]
        call edi
        fld1
        sub esp, 8
        fstp dword ptr [esp+4]
        fldz
        fstp dword ptr [esp]
        call esi
        fld dword ptr [mem_00956048]
        sub esp, 8
        fstp dword ptr [esp+4]
        fld dword ptr [esp+18h]
        fstp dword ptr [esp]
        call edi
        call dword ptr [mem_00925488]
        push 0DE1h
        call ebx
        push 0BE2h
        call ebx
        call dword ptr [mem_0092552C]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        jmp dword ptr [mem_00925404]
    }
}

// [0x00541260] sub_00541260 (417 bytes)
extern "C" void ext_004D0050();
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FE4;
extern "C" int mem_00A44BB8;
extern "C" int mem_00A44BD4;
extern "C" __declspec(naked) void __fastcall fn_00541260(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov esi, ecx
        mov ecx, edi
        call ext_004D0050
        mov eax, dword ptr [esi + 0x108]
        mov dword ptr [edi], eax
        mov ecx, dword ptr [esi + 0xf8]
        mov dword ptr [edi + 0x4], ecx
        movzx edx, byte ptr [esi + 0x4]
        mov byte ptr [edi + 0xc], dl
        mov eax, dword ptr [esi + 0x130]
        mov dword ptr [edi + 0x8], eax
        mov ecx, dword ptr [esi + 0x100]
        mov dword ptr [edi + 0x10], ecx
        mov edx, dword ptr [esi + 0x104]
        mov dword ptr [edi + 0x14], edx
        mov ecx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1c]
        call edx
        push eax
        lea ecx, [edi + 0x18]
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [esi + 0x44]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1c]
        call edx
        push eax
        lea ecx, [edi + 0x34]
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [esi + 0x80]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1c]
        call edx
        push eax
        lea ecx, [edi + 0x50]
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [esi + 0xbc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1c]
        call edx
        push eax
        lea ecx, [edi + 0x6c]
        call dword ptr [mem_00924FDC]
        movzx eax, byte ptr [esi + 0x1c]
        mov byte ptr [edi + 0x88], al
        mov cl, byte ptr [esi + 0x58]
        mov byte ptr [edi + 0x89], cl
        movzx edx, byte ptr [esi + 0x94]
        mov byte ptr [edi + 0x8a], dl
        movzx eax, byte ptr [esi + 0xd0]
        add esi, 0x10c
        mov byte ptr [edi + 0x8b], al
        mov dword ptr [esp + 0x18], esi
        mov ebp, offset mem_00A44BB8
        lea ebx, [edi + 0xb4]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
loop_top:
        mov edx, dword ptr [ebp]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x2c], esp
        push edx
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esp + 0x34]
        call ext_005DF5C0
        mov esi, eax
        test esi, esi
        je loop_next
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c]
        mov ecx, esi
        call edx
        push eax
        lea ecx, [ebx - 0x24]
        call dword ptr [mem_00924FDC]
        fld dword ptr [esi + 0x68]
        fstp dword ptr [ebx - 0x8]
        fld dword ptr [esi + 0x6c]
        fstp dword ptr [ebx - 0x4]
        fld dword ptr [esi + 0x70]
        fstp dword ptr [ebx]
        fld dword ptr [esi + 0x80]
        fstp dword ptr [ebx + 0x4]
        fld dword ptr [esi + 0x84]
        fstp dword ptr [ebx + 0x8]
        fld dword ptr [esi + 0x88]
        fstp dword ptr [ebx + 0xc]
        fld dword ptr [esi + 0x8c]
        fstp dword ptr [ebx + 0x10]
        fld dword ptr [esi + 0x90]
        fstp dword ptr [ebx + 0x14]
        fld dword ptr [esi + 0x94]
        fstp dword ptr [ebx + 0x18]
        fld dword ptr [esi + 0x98]
        fstp dword ptr [ebx + 0x1c]
        fld dword ptr [esi + 0x9c]
        fstp dword ptr [ebx + 0x20]
        fld dword ptr [esi + 0x74]
        fstp dword ptr [ebx + 0x24]
        fld dword ptr [esi + 0x78]
        fstp dword ptr [ebx + 0x28]
        fld dword ptr [esi + 0x7c]
        fstp dword ptr [ebx + 0x2c]
loop_next:
        add ebp, 0x4
        add ebx, 0x54
        cmp ebp, offset mem_00A44BD4
        jl loop_top
        mov byte ptr [edi + 0x8d], 0x1
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}

extern "C" void ext_00540DD0();

// [0x00541000] sub_00541000 (539 bytes)
extern "C" __declspec(naked) void __fastcall fn_00541000(void* self, int edx_unused, int w, int h) {
    __asm {
        sub     esp, 0x10
        push    ebx
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        mov     eax, esi
        cdq
        sub     eax, edx
        push    edi
        mov     edi, ecx
        mov     ecx, eax
        mov     eax, ebx
        cdq
        sub     eax, edx
        sar     ecx, 1
        sar     eax, 1
        xor     ebp, ebp
        cmp     dword ptr [edi + 0x108], ebp
        mov     dword ptr [edi + 0x100], ecx
        mov     dword ptr [edi + 0x104], eax
        mov     dword ptr [edi + 0x134], esi
        mov     dword ptr [edi + 0x138], ebx
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], ebx
        jne     L_nonzero

        cmp     esi, ebp
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x14], ebp
        jge     L_1
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x18], ebp
    L_1:
        cmp     ebx, ebp
        jge     L_2
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x1c], ebp
    L_2:
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [edi + 0x8]
        call    ext_00540DD0

        cmp     esi, ebp
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], ebx
        jge     L_3
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x18], ebp
    L_3:
        cmp     ebx, ebp
        jge     L_4
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x1c], ebp
    L_4:
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [edi + 0x44]
        call    ext_00540DD0

        cmp     esi, ebp
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], ebx
        jge     L_5
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x18], ebp
    L_5:
        cmp     ebx, ebp
        jge     L_6
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x1c], ebp
    L_6:
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [edi + 0x80]
        call    ext_00540DD0

        cmp     esi, ebp
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], ebx
        jge     L_7
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x18], ebp
    L_7:
        cmp     ebx, ebp
        jge     L_8
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x1c], ebp
    L_8:
        lea     eax, [esp + 0x10]
        push    eax
        jmp     L_end_call

    L_nonzero:
        cmp     ecx, esi
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], eax
        jle     L_9
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x18], ecx
    L_9:
        cmp     eax, ebx
        jle     L_10
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x1c], eax
    L_10:
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [edi + 0x8]
        call    ext_00540DD0

        mov     eax, dword ptr [edi + 0x100]
        cmp     eax, ebp
        mov     ecx, dword ptr [edi + 0x104]
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], ebx
        jge     L_11
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x18], ebp
    L_11:
        cmp     ecx, ebx
        jle     L_12
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x1c], ecx
    L_12:
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [edi + 0x44]
        call    ext_00540DD0

        mov     eax, dword ptr [edi + 0x100]
        cmp     eax, esi
        mov     ecx, dword ptr [edi + 0x104]
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], ecx
        jle     L_13
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x18], eax
    L_13:
        cmp     ecx, ebp
        jge     L_14
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x1c], ebp
    L_14:
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [edi + 0x80]
        call    ext_00540DD0

        mov     eax, dword ptr [edi + 0x100]
        cmp     eax, ebp
        mov     ecx, dword ptr [edi + 0x104]
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], ecx
        jge     L_15
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x18], ebp
    L_15:
        cmp     ecx, ebp
        jge     L_16
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x1c], ebp
    L_16:
        lea     ecx, [esp + 0x10]
        push    ecx
    L_end_call:
        lea     ecx, [edi + 0xbc]
        call    ext_00540DD0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
    }
}

// [0x00541220] sub_00541220 (50 bytes)
extern "C" void ext_00541000();
extern "C" __declspec(naked) void __fastcall fn_00541220(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x138]
        mov edx, dword ptr [esi + 0x134]
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esi + 0x108], eax
        call ext_00541000
        mov eax, dword ptr [esi + 0xf8]
        mov dword ptr [esi + 0xfc], eax
        pop esi
        ret 0x4
    }
}

// [0x00547BA0] sub_00547BA0 (123 bytes)
extern "C" void ext_005CFBE0();
extern "C" void ext_0063E042();
extern "C" int mem_009253C8;
extern "C" __declspec(naked) void __fastcall fn_00547BA0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0xa0]
        test ecx, ecx
        je short L_no_matrix
        call ext_005CFBE0
        push eax
        call dword ptr [mem_009253C8]
        ret
L_no_matrix:
        fld dword ptr [eax + 0x98]
        sub esp, 0x48
        fstp qword ptr [esp + 0x40]
        fld dword ptr [eax + 0x94]
        fstp qword ptr [esp + 0x38]
        fld dword ptr [eax + 0x90]
        fstp qword ptr [esp + 0x30]
        fld dword ptr [eax + 0x88]
        fstp qword ptr [esp + 0x28]
        fld dword ptr [eax + 0x84]
        fstp qword ptr [esp + 0x20]
        fld dword ptr [eax + 0x80]
        fstp qword ptr [esp + 0x18]
        fld dword ptr [eax + 0xf0]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [eax + 0xec]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [eax + 0xe8]
        fstp qword ptr [esp]
        call ext_0063E042
        ret
    }
}

// [0x00548150] sub_00548150 (55 bytes)
extern "C" void ext_00547B70();
extern "C" void ext_00547BA0();
extern "C" int mem_00925414;
extern "C" int mem_009253D4;
extern "C" int mem_009254B8;
extern "C" int mem_00925404;

extern "C" __declspec(naked) void __fastcall fn_00548150(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        call dword ptr [mem_00925414]
        call dword ptr [mem_009253D4]
        mov ecx, esi
        call ext_00547BA0
        mov ecx, esi
        call ext_00547B70
        mov eax, dword ptr [esp + 8]
        push eax
        push 0xba6
        call dword ptr [mem_009254B8]
        call dword ptr [mem_00925404]
        pop esi
        ret 4
    }
}

// [0x00547D70] sub_00547D70 (73 bytes)
extern "C" void ext_005D03D0();
extern "C" __declspec(naked) void __fastcall fn_00547D70(void* self, int edx_unused, float a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x40]
        call edx
        cmp eax, 0x1
        jne L_cont
        mov eax, dword ptr [esi + 0x28]
        cmp byte ptr [eax], 0x0
        jne L_end
L_cont:
        mov ecx, dword ptr [esi + 0xa0]
        test ecx, ecx
        je L_zero
        fld dword ptr [esp + 0x8]
        push ecx
        fstp dword ptr [esp]
        call ext_005D03D0
        pop esi
        ret 0x4
L_zero:
        fld dword ptr [esi + 0x6c]
        mov ecx, esi
        fsub dword ptr [esp + 0x8]
        fstp dword ptr [esi + 0x6c]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x44]
        call eax
L_end:
        pop esi
        ret 0x4
    }
}

extern "C" void ext_00548150();

// [0x00549280] sub_00549280 (132 bytes)
extern "C" __declspec(naked) void __fastcall fn_00549280(void* self) {
    __asm {
        sub esp, 0x50
        fld1
        push esi
        fst dword ptr [esp + 0x14]
        lea eax, [esp + 0x14]
        fldz
        push eax
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x38]
        fst dword ptr [esp + 0x3c]
        fst dword ptr [esp + 0x44]
        fst dword ptr [esp + 0x48]
        fst dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x54]
        call ext_00548150
        mov esi, dword ptr [esp + 0x58]
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call ext_006943B0
        fld dword ptr [eax]
        fstp dword ptr [esi]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esi + 0xc]
        pop esi
        add esp, 0x50
        ret 0x4
    }
}

// [0x00547DC0] sub_00547DC0 (136 bytes)
extern "C" void ext_005D0460();
extern "C" int mem_00956CA8;
extern "C" int mem_00956CA0;
extern "C" int mem_00956C98;
extern "C" int mem_00956C90;

extern "C" __declspec(naked) void __fastcall fn_00547DC0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x40]
        call edx
        cmp eax, 1
        jne L_547DD7
        mov eax, dword ptr [esi + 0x28]
        cmp byte ptr [eax], 0
        jne L_547E44
    L_547DD7:
        mov ecx, dword ptr [esi + 0xa0]
        test ecx, ecx
        je L_547DF2
        fld dword ptr [esp + 8]
        push ecx
        fstp dword ptr [esp]
        call ext_005D0460
        pop esi
        ret 4
    L_547DF2:
        fld dword ptr [esi + 0x68]
        fsub dword ptr [esp + 8]
        fstp dword ptr [esi + 0x68]
        fld dword ptr [esi + 0x68]
        fcomp qword ptr [mem_00956CA8]
        fnstsw ax
        test ah, 5
        jp L_547E22
        fld dword ptr [mem_00956CA0]
        mov ecx, esi
        fstp dword ptr [esi + 0x68]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x44]
        call eax
        pop esi
        ret 4
    L_547E22:
        fld dword ptr [esi + 0x68]
        fcomp qword ptr [mem_00956C98]
        fnstsw ax
        test ah, 0x41
        jne L_547E3B
        fld dword ptr [mem_00956C90]
        fstp dword ptr [esi + 0x68]
    L_547E3B:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x44]
        mov ecx, esi
        call eax
    L_547E44:
        pop esi
        ret 4
    }
}

// [0x005491F0] sub_005491F0 (141 bytes)
extern "C" void ext_00548150();
extern "C" void ext_0067E880();
extern "C" void ext_006943B0();

extern "C" __declspec(naked) void __fastcall fn_005491F0(void* self) {
    __asm {
        sub esp, 0x50
        fld1
        push esi
        fst dword ptr [esp + 0x14]
        lea eax, [esp + 0x14]
        fldz
        push eax
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x38]
        fst dword ptr [esp + 0x3c]
        fst dword ptr [esp + 0x44]
        fst dword ptr [esp + 0x48]
        fst dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x54]
        call ext_00548150
        lea ecx, [esp + 0x14]
        call ext_0067E880
        mov esi, dword ptr [esp + 0x58]
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call ext_006943B0
        fld dword ptr [eax]
        fstp dword ptr [esi]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esi + 0xc]
        pop esi
        add esp, 0x50
        ret 0x4
    }
}

// [0x00541890] sub_00541890 (171 bytes)
extern "C" void ext_00547D70();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00541890(void* self, int edx_unused, float f) {
    __asm {
        sub esp, 8
        cmp byte ptr [ecx + 13Dh], 0
        je L_else
        mov eax, dword ptr [ecx + 110h]
        mov eax, dword ptr [eax]
        push ebp
        push esi
        push edi
        lea edi, [ecx + 10Ch]
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0Ch], esi
        mov dword ptr [esp + 10h], ebp
        push ebx
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_loop:
        test esi, esi
        mov ebx, dword ptr [edi + 4]
        je L_bad1
        cmp esi, edi
        je L_ok1
L_bad1:
        call dword ptr [mem_00925134]
L_ok1:
        cmp ebp, ebx
        je L_exit
        test esi, esi
        jne L_ok2
        call dword ptr [mem_00925134]
L_ok2:
        cmp ebp, dword ptr [esi + 4]
        jne L_ok3
        call dword ptr [mem_00925134]
L_ok3:
        fld dword ptr [esp + 1Ch]
        push ecx
        mov ecx, dword ptr [ebp + 28h]
        fstp dword ptr [esp]
        call ext_00547D70
        lea ecx, [esp + 10h]
        call ext_00673C20
        mov ebp, dword ptr [esp + 14h]
        mov esi, dword ptr [esp + 10h]
        jmp L_loop
L_else:
        mov eax, dword ptr [ecx + 0F8h]
        fld dword ptr [esp + 0Ch]
        mov edx, eax
        shl edx, 4
        push ecx
        sub edx, eax
        fstp dword ptr [esp]
        mov ecx, dword ptr [ecx + edx * 4 + 8]
        call ext_00547D70
        add esp, 8
        ret 4
L_exit:
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 4
    }
}

// [0x00541940] sub_00541940 (171 bytes)
extern "C" void ext_00547DC0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00541940(void* self, int edx_unused, float f) {
    __asm {
        sub esp, 8
        cmp byte ptr [ecx + 13Dh], 0
        je L_else
        mov eax, dword ptr [ecx + 110h]
        mov eax, dword ptr [eax]
        push ebp
        push esi
        push edi
        lea edi, [ecx + 10Ch]
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0Ch], esi
        mov dword ptr [esp + 10h], ebp
        push ebx
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_loop:
        test esi, esi
        mov ebx, dword ptr [edi + 4]
        je L_bad1
        cmp esi, edi
        je L_ok1
    L_bad1:
        call dword ptr [mem_00925134]
    L_ok1:
        cmp ebp, ebx
        je L_exit
        test esi, esi
        jne L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        cmp ebp, dword ptr [esi + 4]
        jne L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        fld dword ptr [esp + 1Ch]
        push ecx
        mov ecx, dword ptr [ebp + 28h]
        fstp dword ptr [esp]
        call ext_00547DC0
        lea ecx, [esp + 10h]
        call ext_00673C20
        mov ebp, dword ptr [esp + 14h]
        mov esi, dword ptr [esp + 10h]
        jmp L_loop
    L_else:
        mov eax, dword ptr [ecx + 0F8h]
        fld dword ptr [esp + 0Ch]
        mov edx, eax
        shl edx, 4
        push ecx
        sub edx, eax
        fstp dword ptr [esp]
        mov ecx, dword ptr [ecx + edx * 4 + 8]
        call ext_00547DC0
        add esp, 8
        ret 4
    L_exit:
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 4
    }
}

// [0x00540E40] sub_00540E40 (181 bytes)
extern "C" void ext_00548150();
extern "C" int mem_00925414;
extern "C" int mem_009253D4;
extern "C" int mem_00956054;
extern "C" int mem_009253C8;
extern "C" int mem_0092546C;
extern "C" int mem_00955998;
extern "C" int mem_00925520;
extern "C" int mem_0092552C;
extern "C" int mem_00925404;

extern "C" __declspec(naked) void __fastcall fn_00540E40(void* self) {
    __asm {
        sub esp, 0x40
        push esi
        mov esi, ecx
        call dword ptr [mem_00925414]
        call dword ptr [mem_009253D4]
        fld1
        mov ecx, dword ptr [esi]
        fst dword ptr [esp + 0x4]
        fldz
        lea eax, [esp + 0x4]
        fst dword ptr [esp + 0x8]
        push eax
        fst dword ptr [esp + 0x10]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x38]
        fst dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x40]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x44]
        call ext_00548150
        fld dword ptr [mem_00956054]
        lea ecx, [esp + 0x4]
        fst dword ptr [esp + 0x34]
        push ecx
        fst dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x40]
        call dword ptr [mem_009253C8]
        push 4
        call dword ptr [mem_0092546C]
        fld dword ptr [mem_00955998]
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        mov edx, dword ptr [esi + 0x18]
        mov eax, dword ptr [edx + 0x58]
        lea ecx, [esi + 0x18]
        push 1
        call eax
        call dword ptr [mem_0092552C]
        call dword ptr [mem_00925404]
        pop esi
        add esp, 0x40
        ret
    }
}

extern "C" int mem_009254D4;
extern "C" int mem_0092549C;
extern "C" int mem_00925498;

typedef void (__stdcall* glBegin_t)(int);
typedef void (__stdcall* glEnd_t)();
typedef void (__stdcall* glVec_t)(const void*);

// [0x0054FE50] sub_0054FE50 (618 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054FE50(void* self, int edx_unused, int* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        xor edi, edi
        cmp dword ptr [esi + 0xc], edi
        jle L_done
        push ebx
        push ebp
        mov ebp, dword ptr [mem_009254D4]
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_loop:
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov eax, dword ptr [ecx]
        cmp eax, 0x3
        jne L_check4
        push 0x4
        call dword ptr [mem_00925490]
        mov edx, dword ptr [esi + 0x24]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esi + 0x20]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [esi + 0x18]
        mov edx, dword ptr [ecx + 4*eax]
        mov ebx, dword ptr [mem_0092549C]
        push edx
        call ebx
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call dword ptr [mem_00925498]
        mov edx, dword ptr [esi + 0x24]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [esi + 0x20]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [esi + 0x18]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call ebx
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 0x8]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call dword ptr [mem_00925498]
        mov edx, dword ptr [esi + 0x24]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [esi + 0x20]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 0x8]
        mov ecx, dword ptr [esi + 0x18]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call ebx
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 0xc]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call dword ptr [mem_00925498]
        jmp L_end_call
    L_check4:
        cmp eax, 0x4
        jne L_check_gt4
        push 0x7
        call dword ptr [mem_00925490]
        mov edx, dword ptr [esi + 0x24]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esi + 0x20]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [esi + 0x18]
        mov edx, dword ptr [ecx + 4*eax]
        mov ebx, dword ptr [mem_0092549C]
        push edx
        call ebx
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call dword ptr [mem_00925498]
        mov edx, dword ptr [esi + 0x24]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [esi + 0x20]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [esi + 0x18]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call ebx
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 0x8]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call dword ptr [mem_00925498]
        mov edx, dword ptr [esi + 0x24]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [esi + 0x20]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 0x8]
        mov ecx, dword ptr [esi + 0x18]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call ebx
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 0xc]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call dword ptr [mem_00925498]
        mov edx, dword ptr [esi + 0x24]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [esi + 0x20]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 0xc]
        mov ecx, dword ptr [esi + 0x18]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call ebx
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 0x10]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call dword ptr [mem_00925498]
        jmp L_end_call
    L_check_gt4:
        jle L_next_face
        push 0x9
        call dword ptr [mem_00925490]
        mov edx, dword ptr [esi + 0x14]
        mov eax, dword ptr [edx + 4*edi]
        xor ebx, ebx
        cmp dword ptr [eax], ebx
        jle L_end_call
    L_inner_loop:
        mov ecx, dword ptr [esi + 0x24]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 4*ebx]
        mov ecx, dword ptr [esi + 0x20]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call ebp
        mov eax, dword ptr [esi + 0x1c]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 4*ebx]
        mov eax, dword ptr [esi + 0x18]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call dword ptr [mem_0092549C]
        mov edx, dword ptr [esi + 0x14]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 4*ebx + 0x4]
        mov edx, dword ptr [esi + 0x10]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call dword ptr [mem_00925498]
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [ecx + 4*edi]
        add ebx, 0x1
        cmp ebx, dword ptr [edx]
        jl L_inner_loop
    L_end_call:
        call dword ptr [mem_00925488]
    L_next_face:
        add edi, 0x1
        cmp edi, dword ptr [esi + 0xc]
        jl L_loop
        pop ebp
        pop ebx
    L_done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005409C0] sub_005409C0 (621 bytes)
extern "C" void ext_0063E03C();
extern "C" int mem_00925400;
extern "C" int mem_009253D8;
extern "C" int mem_00925414;
extern "C" int mem_009253D4;
extern "C" int mem_0092540C;
extern "C" int mem_00925520;
extern "C" int mem_0092551C;
extern "C" int mem_00925490;
extern "C" int mem_00925504;
extern "C" int mem_00925488;
extern "C" int mem_00925404;
extern "C" __declspec(naked) void __fastcall fn_005409C0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x108], 0
        push edi
        je fn005409C0_end
        mov eax, dword ptr [esi + 0x138]
        mov ecx, dword ptr [esi + 0x134]
        push eax
        push ecx
        push 0
        push 0
        call dword ptr [mem_00925400]
        mov ebx, dword ptr [mem_009253D8]
        push 0x1701
        call ebx
        call dword ptr [mem_00925414]
        mov edi, dword ptr [mem_009253D4]
        call edi
        fild dword ptr [esi + 0x138]
        sub esp, 0x20
        fstp qword ptr [esp + 0x18]
        fldz
        fst qword ptr [esp + 0x10]
        fild dword ptr [esi + 0x134]
        fstp qword ptr [esp + 0x8]
        fstp qword ptr [esp]
        call ext_0063E03C
        push 0x1700
        call ebx
        call edi
        lea edx, dword ptr [esi + 0x118]
        push edx
        call dword ptr [mem_0092540C]
        fld1
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        push 0x1b01
        push 0x404
        call dword ptr [mem_0092551C]
        push 1
        call dword ptr [mem_00925490]
        fldz
        mov eax, dword ptr [esi + 0x100]
        mov ebx, dword ptr [mem_00925504]
        sub esp, 0x10
        sub eax, 1
        fstp qword ptr [esp + 0x8]
        mov dword ptr [esp + 0x48], eax
        fild dword ptr [esp + 0x48]
        fstp qword ptr [esp]
        call ebx
        mov ecx, dword ptr [esi + 0x100]
        fild dword ptr [esi + 0x138]
        sub esp, 0x10
        sub ecx, 1
        fstp qword ptr [esp + 0x8]
        mov dword ptr [esp + 0x48], ecx
        fild dword ptr [esp + 0x48]
        fstp qword ptr [esp]
        call ebx
        fild dword ptr [esi + 0x104]
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        fldz
        fstp qword ptr [esp]
        call ebx
        fild dword ptr [esi + 0x104]
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        fild dword ptr [esi + 0x134]
        fstp qword ptr [esp]
        call ebx
        call dword ptr [mem_00925488]
        xor ebp, ebp
        lea edi, dword ptr [esi + 0x14]
fn005409C0_loop:
        mov eax, dword ptr [esi + 0x108]
        neg eax
        sbb eax, eax
        and eax, 3
        add eax, 1
        cmp ebp, eax
        mov dword ptr [esp + 0x38], ebp
        jge fn005409C0_after
        cmp ebp, dword ptr [esi + 0xf8]
        jne fn005409C0_inc
        cmp byte ptr [esi + 0x13c], 0
        je fn005409C0_a
        mov edx, dword ptr [esi + 0x12c]
        push edx
        jmp fn005409C0_b
fn005409C0_a:
        mov eax, dword ptr [esi + 0x128]
        push eax
fn005409C0_b:
        call dword ptr [mem_0092540C]
        cmp ebp, 1
        je fn005409C0_t
        cmp ebp, 3
        je fn005409C0_t
        xor al, al
        jmp fn005409C0_c
fn005409C0_t:
        mov al, 1
fn005409C0_c:
        test ebp, ebp
        je fn005409C0_d
        cmp ebp, 1
        je fn005409C0_d
        xor cl, cl
        jmp fn005409C0_e
fn005409C0_d:
        mov cl, 1
fn005409C0_e:
        neg al
        push 7
        sbb eax, eax
        neg eax
        sub eax, 1
        neg cl
        mov ebp, eax
        sbb ecx, ecx
        mov dword ptr [esp + 0x38], ecx
        call dword ptr [mem_00925490]
        fild dword ptr [edi - 0x4]
        mov ecx, dword ptr [edi - 0x8]
        sub esp, 0x10
        add ecx, ebp
        fstp qword ptr [esp + 0x8]
        mov dword ptr [esp + 0x4c], ecx
        fild dword ptr [esp + 0x4c]
        fstp qword ptr [esp]
        call ebx
        mov edx, dword ptr [edi]
        fild dword ptr [edi - 0x4]
        sub esp, 0x10
        sub edx, 1
        fstp qword ptr [esp + 0x8]
        mov dword ptr [esp + 0x4c], edx
        fild dword ptr [esp + 0x4c]
        fstp qword ptr [esp]
        call ebx
        mov eax, dword ptr [edi + 0x4]
        add eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [edi]
        mov dword ptr [esp + 0x3c], eax
        fild dword ptr [esp + 0x3c]
        sub esp, 0x10
        sub ecx, 1
        mov dword ptr [esp + 0x4c], ecx
        fstp qword ptr [esp + 0x8]
        fild dword ptr [esp + 0x4c]
        fstp qword ptr [esp]
        call ebx
        mov edx, dword ptr [edi + 0x4]
        add edx, dword ptr [esp + 0x34]
        mov eax, dword ptr [edi - 0x8]
        mov dword ptr [esp + 0x3c], edx
        fild dword ptr [esp + 0x3c]
        sub esp, 0x10
        add eax, ebp
        mov dword ptr [esp + 0x4c], eax
        fstp qword ptr [esp + 0x8]
        fild dword ptr [esp + 0x4c]
        fstp qword ptr [esp]
        call ebx
        call dword ptr [mem_00925488]
        mov ebp, dword ptr [esp + 0x38]
fn005409C0_inc:
        add ebp, 1
        add edi, 0x3c
        jmp fn005409C0_loop
fn005409C0_after:
        mov esi, dword ptr [mem_009253D8]
        push 0x1701
        call esi
        call dword ptr [mem_00925404]
        push 0x1700
        call esi
fn005409C0_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00548790] sub_00548790 (643 bytes)
extern "C" void ext_00540D60();
extern "C" void ext_0063F530();
extern "C" void ext_0067B930();
extern "C" int mem_00A9F1B0;
extern "C" int mem_00A9F3B8;
extern "C" int mem_00A9F054;
extern "C" int mem_00A9F37C;
extern "C" int mem_00A9EE44;

extern "C" __declspec(naked) void __fastcall fn_00548790(void* self) {
    __asm {
        sub	esp, 0x18
        push	esi
        push	edi
        mov	edi, dword ptr [esp + 0x24]
        mov	esi, ecx
        mov	eax, dword ptr [esi]
        mov	edx, dword ptr [eax + 0x4]
        push	edi
        call	edx
        mov	eax, dword ptr [mem_00A9F1B0]
        push	0x1
        push	0x0
        push	eax
        mov	ecx, edi
        call ext_0063F530
        cmp	eax, 0xb53a34
        je L_005487d7
        cmp	eax, 0xb53b30
        je L_005487d7
        cmp	eax, 0xb53ab0
        je L_005487d7
        cmp	eax, 0xb53a70
        je L_005487d7
        cmp	eax, 0xb53af0
        jne L_005487dc
    L_005487d7:
        mov	eax, 0xb53b30
    L_005487dc:
        mov	ecx, dword ptr [mem_00A9F3B8]
        push	0x1
        push	0x0
        push	ecx
        mov	ecx, eax
        call ext_0063F530
        cmp	eax, 0xb53a34
        je L_00548811
        cmp	eax, 0xb53b30
        je L_00548811
        cmp	eax, 0xb53ab0
        je L_00548811
        cmp	eax, 0xb53a70
        je L_00548811
        cmp	eax, 0xb53af0
        jne L_00548816
    L_00548811:
        mov	eax, 0xb53b30
    L_00548816:
        push	eax
        lea	ecx, [esi + 0x68]
        call ext_0067B930
        mov	edx, dword ptr [mem_00A9F054]
        push	0x1
        push	0x0
        push	edx
        mov	ecx, edi
        call ext_0063F530
        cmp	eax, 0xb53a34
        je L_00548854
        cmp	eax, 0xb53b30
        je L_00548854
        cmp	eax, 0xb53ab0
        je L_00548854
        cmp	eax, 0xb53a70
        je L_00548854
        cmp	eax, 0xb53af0
        jne L_00548859
    L_00548854:
        mov	eax, 0xb53b30
    L_00548859:
        fldz
        mov	ecx, dword ptr [mem_00A9F3B8]
        push	0x1
        fst	dword ptr [esp + 0x14]
        push	0x0
        fst	dword ptr [esp + 0x14]
        push	ecx
        fstp	dword ptr [esp + 0x14]
        mov	ecx, eax
        call ext_0063F530
        cmp	eax, 0xb53a34
        je L_0054889c
        cmp	eax, 0xb53b30
        je L_0054889c
        cmp	eax, 0xb53ab0
        je L_0054889c
        cmp	eax, 0xb53a70
        je L_0054889c
        cmp	eax, 0xb53af0
        jne L_005488a1
    L_0054889c:
        mov	eax, 0xb53b30
    L_005488a1:
        push	eax
        lea	ecx, [esp + 0xc]
        call ext_0067B930
        fld	dword ptr [esp + 0x8]
        fstp	dword ptr [esi + 0x80]
        push	0x1
        fld	dword ptr [esp + 0x10]
        push	0x0
        fstp	dword ptr [esi + 0x84]
        mov	ecx, edi
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esi + 0x88]
        fld1
        fstp	dword ptr [esi + 0x8c]
        mov	edx, dword ptr [mem_00A9F37C]
        push	edx
        call ext_0063F530
        cmp	eax, 0xb53a34
        je L_00548906
        cmp	eax, 0xb53b30
        je L_00548906
        cmp	eax, 0xb53ab0
        je L_00548906
        cmp	eax, 0xb53a70
        je L_00548906
        cmp	eax, 0xb53af0
        jne L_0054890b
    L_00548906:
        mov	eax, 0xb53b30
    L_0054890b:
        fldz
        mov	ecx, dword ptr [mem_00A9F3B8]
        push	0x1
        fst	dword ptr [esp + 0x20]
        push	0x0
        fst	dword ptr [esp + 0x20]
        push	ecx
        fstp	dword ptr [esp + 0x20]
        mov	ecx, eax
        call ext_0063F530
        cmp	eax, 0xb53a34
        je L_0054894e
        cmp	eax, 0xb53b30
        je L_0054894e
        cmp	eax, 0xb53ab0
        je L_0054894e
        cmp	eax, 0xb53a70
        je L_0054894e
        cmp	eax, 0xb53af0
        jne L_00548953
    L_0054894e:
        mov	eax, 0xb53b30
    L_00548953:
        push	eax
        lea	ecx, [esp + 0x18]
        call ext_0067B930
        fld	dword ptr [esp + 0x14]
        fstp	dword ptr [esi + 0x90]
        lea	ecx, [esi + 0x90]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [ecx + 0x4]
        fld	dword ptr [esp + 0x1c]
        fstp	dword ptr [ecx + 0x8]
        fldz
        fstp	dword ptr [ecx + 0xc]
        call ext_00540D60
        mov	edx, dword ptr [mem_00A9EE44]
        push	0x1
        push	0x0
        push	edx
        mov	ecx, edi
        call ext_0063F530
        cmp	eax, 0xb53a34
        je L_005489ba
        cmp	eax, 0xb53b30
        je L_005489ba
        cmp	eax, 0xb53ab0
        je L_005489ba
        cmp	eax, 0xb53a70
        je L_005489ba
        cmp	eax, 0xb53af0
        jne L_005489bf
    L_005489ba:
        mov	eax, 0xb53b30
    L_005489bf:
        mov	ecx, dword ptr [mem_00A9F3B8]
        push	0x1
        push	0x0
        push	ecx
        mov	ecx, eax
        call ext_0063F530
        cmp	eax, 0xb53a34
        je L_005489f4
        cmp	eax, 0xb53b30
        je L_005489f4
        cmp	eax, 0xb53ab0
        je L_005489f4
        cmp	eax, 0xb53a70
        je L_005489f4
        cmp	eax, 0xb53af0
        jne L_005489f9
    L_005489f4:
        mov	eax, 0xb53b30
    L_005489f9:
        push	eax
        lea	ecx, [esi + 0x74]
        call ext_0067B930
        mov	edx, dword ptr [esi]
        mov	eax, dword ptr [edx + 0x44]
        mov	ecx, esi
        call	eax
        pop	edi
        pop	esi
        add	esp, 0x18
        ret	0x4
    }
}

// [0x005484E0] sub_005484E0 (684 bytes)
extern "C" __declspec(naked) void __fastcall fn_005484E0(void* self) {
    __asm {
        sub	esp, 0x18
        push	ebx
        push	esi
        push	edi
        mov	edi, dword ptr [esp + 0x28]
        mov	esi, ecx
        mov	eax, dword ptr [esi]
        mov	edx, dword ptr [eax + 0x4]
        push	edi
        call	edx
        mov	eax, dword ptr [mem_00A9F1B0]
        push	0x1
        push	0x0
        push	eax
        mov	ecx, edi
        call	ext_005404B0
        cmp	eax, 0xb53a34
        je	L_A1
        cmp	eax, 0xb53b30
        je	L_A1
        cmp	eax, 0xb53ab0
        je	L_A1
        cmp	eax, 0xb53a70
        je	L_A1
        cmp	eax, 0xb53af0
        jne	L_A2
    L_A1:
        mov	eax, 0xb53b30
    L_A2:
        mov	ecx, dword ptr [mem_00A9F3B8]
        push	0x1
        push	0x0
        push	ecx
        mov	ecx, eax
        call	ext_0063F530
        cmp	eax, 0xb53a34
        je	L_B1
        cmp	eax, 0xb53b30
        je	L_B1
        cmp	eax, 0xb53ab0
        je	L_B1
        cmp	eax, 0xb53a70
        je	L_B1
        cmp	eax, 0xb53af0
        jne	L_B2
    L_B1:
        mov	eax, 0xb53b30
    L_B2:
        lea	ebx, [esi + 0x30]
        push	eax
        mov	ecx, ebx
        call	ext_0067B930
        mov	edx, dword ptr [mem_00A9F054]
        push	0x1
        push	0x0
        push	edx
        mov	ecx, edi
        call	ext_0063F530
        cmp	eax, 0xb53a34
        je	L_C1
        cmp	eax, 0xb53b30
        je	L_C1
        cmp	eax, 0xb53ab0
        je	L_C1
        cmp	eax, 0xb53a70
        je	L_C1
        cmp	eax, 0xb53af0
        jne	L_C2
    L_C1:
        mov	eax, 0xb53b30
    L_C2:
        fldz
        mov	ecx, dword ptr [mem_00A9F3B8]
        push	0x1
        fst	dword ptr [esp + 0x18]
        push	0x0
        fst	dword ptr [esp + 0x18]
        push	ecx
        fstp	dword ptr [esp + 0x18]
        mov	ecx, eax
        call	ext_0063F530
        cmp	eax, 0xb53a34
        je	L_D1
        cmp	eax, 0xb53b30
        je	L_D1
        cmp	eax, 0xb53ab0
        je	L_D1
        cmp	eax, 0xb53a70
        je	L_D1
        cmp	eax, 0xb53af0
        jne	L_D2
    L_D1:
        mov	eax, 0xb53b30
    L_D2:
        push	eax
        lea	ecx, [esp + 0x10]
        call	ext_0067B930
        fld	dword ptr [esp + 0xc]
        fstp	dword ptr [esi + 0x48]
        push	0x1
        fld	dword ptr [esp + 0x14]
        push	0x0
        fstp	dword ptr [esi + 0x4c]
        mov	ecx, edi
        fld	dword ptr [esp + 0x1c]
        fstp	dword ptr [esi + 0x50]
        fld1
        fstp	dword ptr [esi + 0x54]
        mov	edx, dword ptr [mem_00A9F37C]
        push	edx
        call	ext_0063F530
        cmp	eax, 0xb53a34
        je	L_E1
        cmp	eax, 0xb53b30
        je	L_E1
        cmp	eax, 0xb53ab0
        je	L_E1
        cmp	eax, 0xb53a70
        je	L_E1
        cmp	eax, 0xb53af0
        jne	L_E2
    L_E1:
        mov	eax, 0xb53b30
    L_E2:
        fldz
        mov	ecx, dword ptr [mem_00A9F3B8]
        push	0x1
        fst	dword ptr [esp + 0x24]
        push	0x0
        fst	dword ptr [esp + 0x24]
        push	ecx
        fstp	dword ptr [esp + 0x24]
        mov	ecx, eax
        call	ext_0063F530
        cmp	eax, 0xb53a34
        je	L_F1
        cmp	eax, 0xb53b30
        je	L_F1
        cmp	eax, 0xb53ab0
        je	L_F1
        cmp	eax, 0xb53a70
        je	L_F1
        cmp	eax, 0xb53af0
        jne	L_F2
    L_F1:
        mov	eax, 0xb53b30
    L_F2:
        push	eax
        lea	ecx, [esp + 0x1c]
        call	ext_0067B930
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esi + 0x58]
        lea	ecx, [esi + 0x58]
        fld	dword ptr [esp + 0x1c]
        fstp	dword ptr [ecx + 0x4]
        fld	dword ptr [esp + 0x20]
        fstp	dword ptr [ecx + 0x8]
        fldz
        fstp	dword ptr [ecx + 0xc]
        call	ext_00540D60
        mov	edx, dword ptr [mem_00A9EE44]
        push	0x1
        push	0x0
        push	edx
        mov	ecx, edi
        call	ext_0063F530
        cmp	eax, 0xb53a34
        je	L_G1
        cmp	eax, 0xb53b30
        je	L_G1
        cmp	eax, 0xb53ab0
        je	L_G1
        cmp	eax, 0xb53a70
        je	L_G1
        cmp	eax, 0xb53af0
        jne	L_G2
    L_G1:
        mov	eax, 0xb53b30
    L_G2:
        cmp	eax, 0xb53a34
        je	L_H1
        cmp	eax, 0xb53b30
        je	L_H1
        cmp	eax, 0xb53ab0
        je	L_H1
        cmp	eax, 0xb53a70
        je	L_H1
        cmp	eax, 0xb53af0
        jne	L_H2
    L_H1:
        fld	dword ptr [mem_0093F7B8]
        fstp	dword ptr [esi + 0x44]
        jmp	L_END
    L_H2:
        mov	ecx, dword ptr [mem_00A9F3B8]
        push	0x1
        push	0x0
        push	ecx
        mov	ecx, eax
        call	ext_0063F530
        cmp	eax, 0xb53a34
        je	L_I1
        cmp	eax, 0xb53b30
        je	L_I1
        cmp	eax, 0xb53ab0
        je	L_I1
        cmp	eax, 0xb53a70
        je	L_I1
        cmp	eax, 0xb53af0
        jne	L_I2
    L_I1:
        mov	eax, 0xb53b30
    L_I2:
        push	eax
        lea	ecx, [esi + 0x3c]
        call	ext_0067B930
    L_END:
        push	ebx
        lea	ecx, [esi + 0x68]
        call	ext_005404B0
        mov	edx, dword ptr [esi]
        mov	eax, dword ptr [edx + 0x44]
        mov	ecx, esi
        call	eax
        pop	edi
        pop	esi
        pop	ebx
        add	esp, 0x18
        ret	0x4
    }
}

// [0x00541630] sub_00541630 (247 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_005A07A0();
extern "C" void ext_005AE1B0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00AF166C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00541630(void* self) {
    __asm {
        push    -1
        push    0x8a3e82
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x68
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x88], 0
        call    ext_005A07A0
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        mov     ebp, dword ptr [esi + 0x4]
        je      L_1
        cmp     edi, esi
        je      L_2
    L_1:
        call    dword ptr [mem_00925134]
    L_2:
        mov     ebx, dword ptr [esp + 0x14]
        cmp     ebx, ebp
        jne     L_3
        mov     edx, dword ptr [mem_00AF166C]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x88], 1
        call    ext_0041FF30
        push    0x9d3748
        lea     edx, [esp + 0x38]
        push    edx
        call    ext_006A6DD2
    L_3:
        test    edi, edi
        jne     L_4
        call    dword ptr [mem_00925134]
    L_4:
        cmp     ebx, dword ptr [edi + 0x4]
        jne     L_5
        call    dword ptr [mem_00925134]
    L_5:
        mov     ecx, dword ptr [ebx + 0x28]
        test    ecx, ecx
        je      L_6
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        push    1
        call    edx
    L_6:
        push    ebx
        push    edi
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    ext_005AE1B0
        lea     ecx, [esp + 0x88]
        mov     dword ptr [esp + 0x80], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x78]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x74
        ret     0x1c
    }
}

// [0x00549B60] sub_00549B60 (986 bytes)
extern "C" int mem_00925414;
extern "C" int mem_009254B0;
extern "C" int mem_00925490;
extern "C" int mem_009254AC;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;
extern "C" int mem_0093F7B8;
extern "C" int mem_00925404;

extern "C" __declspec(naked) void __fastcall fn_00549B60(void* self, int edx_unused, float a1, float a2, float a3) {
    __asm {
        sub esp, 0x18
        fld dword ptr [ecx + 0x18]
        push ebx
        fld1
        push ebp
        fld st(0)
        push esi
        _emit 0xde
        _emit 0xf2
        push edi
        fxch st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ecx + 0x1c]
        fdivr st, st(1)
        fstp dword ptr [esp + 0x20]
        fdiv dword ptr [ecx + 0x20]
        fstp dword ptr [esp + 0x24]
        call dword ptr [mem_00925414]
        fld dword ptr [esp + 0x24]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call dword ptr [mem_009254B0]
        mov edi, dword ptr [mem_00925490]
        push 7
        call edi
        fld1
        mov ebx, dword ptr [mem_009254AC]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [esp + 0x30]
        mov esi, dword ptr [mem_0092548C]
        fchs
        fstp dword ptr [esp + 0x10]
        sub esp, 0xc
        fld dword ptr [esp + 0x38]
        fchs
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x34]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x34]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x34]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        mov ebp, dword ptr [mem_00925488]
        call ebp
        push 7
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld1
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [esp + 0x34]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x34]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x34]
        sub esp, 0xc
        fchs
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        call ebp
        push 7
        call edi
        fld dword ptr [mem_0093F7B8]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        call ebp
        push 7
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x34]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x34]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        call ebp
        push 7
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld1
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [esp + 0x34]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x34]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call esi
        call ebp
        push 7
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x34]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x34]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        call ebp
        call dword ptr [mem_00925404]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xc
    }
}

// [0x0054E7F0] sub_0054E7F0 (151 bytes)
extern "C" void ext_0054E3D0();
extern "C" void ext_0054E420();
extern "C" void ext_0066A310();
extern "C" __declspec(naked) void __fastcall fn_0054E7F0(void* self) {
    __asm {
        push -1
        push 0x899569
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov [esp+4], esi
        lea ecx, [esi+8]
        mov dword ptr [esp+0x10], 0
        mov dword ptr [esi], 0x9548fc
        call ext_0066A310
        lea ecx, [esi+0x18]
        mov byte ptr [esp+0x10], 1
        call ext_0066A310
        lea ecx, [esi+0x28]
        mov byte ptr [esp+0x10], 2
        call ext_0066A310
        fldz
        fst dword ptr [esi+0x44]
        mov ecx, esi
        fst dword ptr [esi+0x40]
        mov byte ptr [esp+0x10], 3
        fst dword ptr [esi+0x3c]
        fst dword ptr [esi+0x38]
        fst dword ptr [esi+0x58]
        fst dword ptr [esi+0x54]
        fst dword ptr [esi+0x50]
        fst dword ptr [esi+0x64]
        fst dword ptr [esi+0x60]
        fstp dword ptr [esi+0x5c]
        call ext_0054E3D0
        mov eax, dword ptr [esp+0x18]
        push eax
        call ext_0054E420
        mov ecx, dword ptr [esp+0x8]
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

extern "C" int mem_00AF6108;
extern "C" int mem_00932468;
extern "C" int mem_0092C508;
extern "C" int mem_009324A4;
extern "C" int mem_00932478;
extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_009253CC;
extern "C" int mem_009254D0;
extern "C" int mem_00925414;
extern "C" int mem_009253D0;
extern "C" int mem_00925404;
extern "C" int mem_0092551C;
extern "C" int mem_00925490;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;
extern "C" int mem_00925524;
extern "C" int mem_0092552C;
extern "C" void ext_0054A070();
extern "C" void ext_00549F40();
extern "C" void ext_00549B60();
extern "C" void ext_0054B030();

// [0x0054B780] sub_0054B780 (932 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054B780(void* self, int edx_unused, int a1, int pad, unsigned char a3) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [mem_00AF6108]
        fld dword ptr [eax + 0xc8]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        fmul dword ptr [esi + 0x8]
        push edi
        push 0x4
        fmul dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fld qword ptr [mem_00932468]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fld qword ptr [mem_0092C508]
        fmul st, st(1)
        fstp dword ptr [esp + 0x14]
        fadd dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x20]
        call dword ptr [mem_0092546C]
        push ecx
        mov ecx, dword ptr [mem_00AF6108]
        fld dword ptr [ecx + 0xc4]
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        cmp dword ptr [esp + 0x24], 0x1c02
        jne L_7F2
        push 0x6
        call dword ptr [mem_009253CC]
L_7F2:
        cmp dword ptr [esi + 0x14], 0
        fld dword ptr [mem_009324A4]
        fldz
        fld1
        jne L_828
        mov ebx, dword ptr [mem_009254D0]
        fstp st(1)
        sub esp, 0x10
        fstp st(0)
        fld dword ptr [mem_00932478]
        fstp dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebx
        jmp L_86D
L_828:
        sub esp, 0x10
        fstp st(2)
        cmp dword ptr [esi + 0x10], 0x6
        jne L_847
        fld dword ptr [mem_00932478]
        fstp dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        jmp L_85E
L_847:
        fstp st(1)
        fld dword ptr [mem_00932478]
        fstp dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0xc]
L_85E:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
        mov ebx, dword ptr [mem_009254D0]
L_86D:
        mov edi, dword ptr [mem_00925414]
        call edi
        fldz
        mov ebp, dword ptr [mem_009253D0]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call ebp
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0054A070
        call dword ptr [mem_00925404]
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        cmp dword ptr [esi + 0x14], 0
        fstp dword ptr [esp + 0xc]
        jne L_8C9
        fld dword ptr [mem_009324A4]
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        jmp L_8E8
L_8C9:
        cmp dword ptr [esi + 0x10], 0x6
        fldz
        jne L_8DD
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
        jmp L_8E8
L_8DD:
        fst dword ptr [esp + 0x8]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x4]
L_8E8:
        fstp dword ptr [esp]
        call ebx
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebp
        mov bl, byte ptr [esp + 0x2c]
        fld dword ptr [esp + 0x10]
        test bl, bl
        je L_924
        sub esp, 0x8
        fst dword ptr [esp + 0x4]
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00549F40
        jmp L_92F
L_924:
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0054A070
L_92F:
        call dword ptr [mem_00925404]
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        cmp dword ptr [esi + 0x14], 0
        fstp dword ptr [esp + 0xc]
        jne L_954
        fld dword ptr [mem_009324A4]
        fst dword ptr [esp + 0x8]
        jmp L_96D
L_954:
        cmp dword ptr [esi + 0x10], 0x6
        jne L_964
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
        jmp L_96D
L_964:
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x8]
        fldz
L_96D:
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
        call edi
        fld dword ptr [esp + 0x1c]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebp
        fld dword ptr [esp + 0x10]
        test bl, bl
        je L_9B1
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        mov ecx, esi
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ext_00549B60
        jmp L_9BC
L_9B1:
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0054A070
L_9BC:
        call dword ptr [mem_00925404]
        fld dword ptr [mem_009324A4]
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        cmp dword ptr [esp + 0x24], 0x1c02
        jne L_9E3
        push 0x1b02
        jmp L_A38
L_9E3:
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        cmp dword ptr [esi + 0x14], 0
        fstp dword ptr [esp + 0xc]
        jne L_A06
        fld dword ptr [mem_009324A4]
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        jmp L_A2A
L_A06:
        cmp dword ptr [esi + 0x10], 0x6
        jne L_A1A
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
        jmp L_A2A
L_A1A:
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0xc]
L_A2A:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
        push 0x1b01
L_A38:
        push 0x404
        call dword ptr [mem_0092551C]
        mov ebx, dword ptr [mem_00925490]
        push 0x1
        call ebx
        fldz
        mov edi, dword ptr [mem_0092548C]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        call edi
        mov ebp, dword ptr [mem_00925488]
        call ebp
        push 0x1
        call ebx
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        call ebp
        push 0x1
        call ebx
        fld dword ptr [esp + 0x18]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        call ebp
        fld dword ptr [esp + 0x18]
        fadd st(0), st
        push ecx
        mov ecx, esi
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp]
        call ext_0054B030
        cmp dword ptr [esp + 0x24], 0x1c02
        pop edi
        pop esi
        pop ebp
        pop ebx
        jne L_BB18
        call dword ptr [mem_00925524]
L_BB18:
        call dword ptr [mem_0092552C]
        add esp, 0x10
        ret 0xc
    }
}

// [0x0054BB30] sub_0054BB30 (1044 bytes)
extern "C" void ext_00549A30();
extern "C" void ext_00549F40();
extern "C" void ext_0054B030();
extern "C" int mem_00AF6108;
extern "C" int mem_00932468;
extern "C" int mem_00956D58;
extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_009253CC;
extern "C" int mem_00940694;
extern "C" int mem_00932478;
extern "C" int mem_009254D0;
extern "C" int mem_00925490;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;
extern "C" int mem_00925414;
extern "C" int mem_009253D0;
extern "C" int mem_00925404;
extern "C" int mem_00925524;
extern "C" int mem_009324A4;
extern "C" int mem_0092551C;
extern "C" int mem_0092552C;

extern "C" __declspec(naked) void __fastcall fn_0054BB30(void* self) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [mem_00AF6108]
        fld dword ptr [eax + 0xc8]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        fmul dword ptr [esi + 0x8]
        push edi
        push 0x4
        fmul dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld qword ptr [mem_00932468]
        fmul st, st(1)
        fstp dword ptr [esp + 0x18]
        fld qword ptr [mem_00956D58]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x20]
        call dword ptr [mem_0092546C]
        push ecx
        mov ecx, dword ptr [mem_00AF6108]
        fld dword ptr [ecx + 0xc4]
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        cmp dword ptr [esp + 0x24], 0x1c02
        fld1
        fldz
        jne L_54BBAC
        fstp st(1)
        push 0x2
        fstp st(0)
        call dword ptr [mem_009253CC]
        jmp L_54BBEB
L_54BBAC:
        mov eax, dword ptr [esi + 0x10]
        cmp eax, 0x6
        je L_54BBCD
        cmp eax, 0x2
        je L_54BBCD
        fstp st(1)
        sub esp, 0x10
        fld dword ptr [mem_00940694]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0xc]
        jmp L_54BBDA
L_54BBCD:
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
L_54BBDA:
        fstp dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
L_54BBEB:
        push 0x1
        call dword ptr [mem_00925490]
        fld dword ptr [esp + 0x14]
        mov edi, dword ptr [mem_0092548C]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esp + 0x10]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        call dword ptr [mem_00925488]
        mov ebx, dword ptr [mem_00925414]
        call ebx
        fld dword ptr [esp + 0x1c]
        mov ebp, dword ptr [mem_009253D0]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebp
        fld dword ptr [esp + 0x18]
        sub esp, 0x8
        fst dword ptr [esp + 0x4]
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00549F40
        call dword ptr [mem_00925404]
        cmp dword ptr [esp + 0x24], 0x1c02
        jne L_54BC82
        call dword ptr [mem_00925524]
        push 0x5
        call dword ptr [mem_009253CC]
L_54BC82:
        mov eax, dword ptr [esi + 0x10]
        cmp eax, 0x6
        je L_54BCAB
        cmp eax, 0x5
        je L_54BCAB
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fldz
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0xc]
        jmp L_54BCC4
L_54BCAB:
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
L_54BCC4:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
        call ebx
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call ebp
        fld dword ptr [esp + 0x18]
        sub esp, 0x8
        fst dword ptr [esp + 0x4]
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00549F40
        call dword ptr [mem_00925404]
        mov eax, dword ptr [esi + 0x10]
        cmp eax, 0x6
        je L_54BD29
        cmp eax, 0x5
        je L_54BD29
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fldz
        fst dword ptr [esp + 0x8]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x4]
        jmp L_54BD42
L_54BD29:
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
L_54BD42:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
        call ebx
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebp
        fld dword ptr [esp + 0x18]
        sub esp, 0x8
        fst dword ptr [esp + 0x4]
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00549F40
        call dword ptr [mem_00925404]
        mov eax, dword ptr [esi + 0x10]
        cmp eax, 0x5
        je L_54BDAA
        cmp eax, 0x6
        je L_54BDAA
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x4]
        fldz
        jmp L_54BDC3
L_54BDAA:
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
L_54BDC3:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
        mov ebx, dword ptr [mem_00925490]
        push 0x1
        call ebx
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        call edi
        mov ebp, dword ptr [mem_00925488]
        call ebp
        push 0x1
        call ebx
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        call ebp
        fld dword ptr [mem_009324A4]
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        cmp dword ptr [esi + 0x10], 0x5
        fstp dword ptr [esp + 0xc]
        jne L_54BE78
        fldz
        mov ebx, dword ptr [mem_009254D0]
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebx
        jmp L_54BE97
L_54BE78:
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x4]
        fldz
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
        mov ebx, dword ptr [mem_009254D0]
L_54BE97:
        fld dword ptr [esp + 0x14]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        mov ecx, esi
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp]
        call ext_00549A30
        mov edi, dword ptr [esp + 0x24]
        cmp edi, 0x1c02
        jne L_54BED1
        call dword ptr [mem_00925524]
        push 0x6
        call dword ptr [mem_009253CC]
        push 0x1b02
        jmp L_54BF0C
L_54BED1:
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        cmp dword ptr [esi + 0x10], 0x6
        fstp dword ptr [esp + 0xc]
        jne L_54BEF2
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
        jmp L_54BF02
L_54BEF2:
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0xc]
L_54BF02:
        fstp dword ptr [esp]
        call ebx
        push 0x1b01
L_54BF0C:
        push 0x404
        call dword ptr [mem_0092551C]
        fld dword ptr [esp + 0x14]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0054B030
        cmp edi, 0x1c02
        pop edi
        pop esi
        pop ebp
        pop ebx
        jne L_54BF38
        call dword ptr [mem_00925524]
L_54BF38:
        call dword ptr [mem_0092552C]
        add esp, 0x10
        ret 0x8
    }
}

extern "C" void ext_00547C20();
extern "C" void ext_005481E0();
extern "C" void ext_00548200();
extern "C" void ext_00548220();
extern "C" void ext_00548240();
extern "C" void ext_00548260();
extern "C" void ext_005D0AF0();
extern "C" void ext_005DC960();
extern "C" void ext_00548FBB();
extern "C" int mem_00993828;
extern "C" int mem_00925414;
extern "C" int mem_009253D4;
extern "C" int mem_0092546C;
extern "C" int mem_00925490;
extern "C" int mem_00925418;
extern "C" int mem_0092551C;
extern "C" int mem_00956050;
extern "C" int mem_00925500;
extern "C" int mem_00925508;
extern "C" int mem_009254FC;
extern "C" int mem_00956CB4;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;
extern "C" int mem_00925438;
extern "C" int mem_0092542C;
extern "C" int mem_0092552C;
extern "C" int mem_009254A4;
extern "C" int mem_0092C8CC;
extern "C" int mem_00925520;
extern "C" int mem_00925494;
extern "C" int mem_009254F8;
extern "C" int mem_009324A4;
extern "C" int mem_009254D0;
extern "C" int mem_00925404;

// [0x00548AB0] sub_00548AB0 (1291 bytes)
extern "C" __declspec(naked) void __fastcall fn_00548AB0(void* self) {
    __asm {
        sub esp, 0x30
        push esi
        mov esi, ecx
        call ext_005481E0
        test al, al
        jne L_548ACC
        cmp dword ptr [esi + 0xa4], 0
        je ext_00548FBB
L_548ACC:
        mov ecx, esi
        call ext_00548260
        mov dword ptr [esp + 0x30], eax
        call ext_00548200
        fstp dword ptr [esp + 0x20]
        fld qword ptr [esi + 0xc0]
        mov ecx, esi
        fstp dword ptr [esp + 0x14]
        call ext_00548220
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fld st(0)
        fmul dword ptr [esp + 0x20]
        fst qword ptr [esp + 0x28]
        fld st(1)
        fmulp st(1), st
        fdivr dword ptr [esp + 0x14]
        fst qword ptr [esp + 0x20]
        fmulp st(1), st
        fstp dword ptr [esp + 0xc]
        call ext_00548240
        fld qword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fmul qword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x28]
        fmul dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x10]
        fld1
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_548B57
        fdivr dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        jmp L_548B59
L_548B57:
        fstp st(1)
L_548B59:
        fld1
        push ebx
        fsubrp st(1), st
        push ebp
        fld qword ptr [mem_00993828]
        push edi
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x20]
        fsub dword ptr [esp + 0x1c]
        fmulp st(1), st
        fstp dword ptr [esp + 0x14]
        call dword ptr [mem_00925414]
        call dword ptr [mem_009253D4]
        push 0x8
        call dword ptr [mem_0092546C]
        cmp dword ptr [esi + 0xa4], 0
        mov ebp, dword ptr [mem_00925490]
        je L_548DA4
        cmp byte ptr [esi + 0xac], 0
        je L_548BB3
        mov ecx, esi
        call ext_00547C20
L_548BB3:
        mov edi, dword ptr [mem_00925418]
        push 0xde1
        call edi
        push 0xb71
        call edi
        push 0x1b02
        push 0x404
        call dword ptr [mem_0092551C]
        fld dword ptr [mem_00956050]
        push ecx
        fstp dword ptr [esp]
        push 0x2200
        push 0x2300
        call dword ptr [mem_00925500]
        mov eax, dword ptr [esi + 0xa8]
        push eax
        push 0xde1
        call dword ptr [mem_009254F0]
        mov ecx, dword ptr [esi + 0xa4]
        call ext_005D0AF0
        test al, al
        je L_548C43
        mov ecx, dword ptr [esi + 0xa4]
        call ext_005DC960
        push eax
        push 0x1401
        push 0x80e0
        push 0x100
        push 0x100
        push 0
        push 0
        push 0
        push 0xde1
        call dword ptr [mem_00925508]
L_548C43:
        mov eax, dword ptr [esi + 0xa4]
        fld dword ptr [eax + 0x34]
        push 0x7
        fld dword ptr [esp + 0x20]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x30]
        fsubrp st(2), st
        fld qword ptr [mem_00993828]
        fmul st(2), st
        fxch st(1)
        fsubrp st(2), st
        fld dword ptr [eax + 0x3c]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [eax + 0x38]
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fsubrp st(1), st
        fmulp st(1), st
        fsubr dword ptr [esp + 0x14]
        fadd dword ptr [eax + 0x40]
        fstp dword ptr [esp + 0x28]
        call ebp
        fldz
        mov edi, dword ptr [mem_009254FC]
        sub esp, 0x8
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [mem_00956CB4]
        mov ebx, dword ptr [mem_0092548C]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp]
        call ebx
        fldz
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fld1
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esp + 0x28]
        fadd dword ptr [esp + 0x2c]
        sub esp, 0xc
        fstp dword ptr [esp + 0x38]
        fld dword ptr [mem_00956CB4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call ebx
        fld1
        sub esp, 0x8
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esp + 0x24]
        fadd dword ptr [esp + 0x34]
        sub esp, 0xc
        fstp dword ptr [esp + 0x40]
        fld dword ptr [mem_00956CB4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp]
        call ebx
        sub esp, 0x8
        fld1
        fstp dword ptr [esp + 0x4]
        fldz
        fstp dword ptr [esp]
        call edi
        fld dword ptr [mem_00956CB4]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp]
        call ebx
        mov ebx, dword ptr [mem_00925488]
        call ebx
        mov edi, dword ptr [mem_00925438]
        push 0xde1
        call edi
        push 0x201
        call dword ptr [mem_0092542C]
        push 0xb71
        call edi
        jmp L_548DAA
L_548DA4:
        mov ebx, dword ptr [mem_00925488]
L_548DAA:
        mov ecx, esi
        call ext_005481E0
        test al, al
        mov edi, dword ptr [mem_0092552C]
        je L_548FAC
        mov esi, dword ptr [esp + 0x3c]
        cmp esi, 1
        jne L_548E89
        fld1
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009254A4]
        push 0x4
        call dword ptr [mem_0092546C]
        fld dword ptr [mem_0092C8CC]
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        push 0xaaaa
        push 0x2
        call dword ptr [mem_00925494]
        push 0xb24
        call dword ptr [mem_00925418]
        push 0x1b01
        push 0x404
        call dword ptr [mem_0092551C]
        push 0x7
        call ebp
        fld dword ptr [esp + 0x10]
        mov esi, dword ptr [mem_009254F8]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x14]
        sub esp, 0x8
        fadd dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x10]
        sub esp, 0x8
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x18]
        jmp L_548F98
L_548E89:
        push 0x1b02
        push 0x404
        call dword ptr [mem_0092551C]
        fld dword ptr [mem_009324A4]
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
        push 0x2000
        call dword ptr [mem_0092546C]
        cmp esi, 2
        jne L_548ED2
        push 0xbe2
        call dword ptr [mem_00925418]
L_548ED2:
        push 0x8
        call ebp
        fldz
        mov esi, dword ptr [mem_009254F8]
        sub esp, 0x8
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x10]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        call esi
        fld1
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fldz
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x18]
        sub esp, 0x8
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        call esi
        fld1
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x14]
        fadd dword ptr [esp + 0x1c]
        sub esp, 0x8
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        fldz
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x10]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call esi
        fldz
        sub esp, 0x8
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x10]
L_548F98:
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        call esi
        call ebx
        call edi
L_548FAC:
        call edi
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 0x30
        jmp dword ptr [mem_00925404]
    }
}

extern "C" void ext_00549A30();
extern "C" void ext_00549B60();
extern "C" void ext_0054B030();
extern "C" int mem_00AF6108;
extern "C" int mem_00932468;
extern "C" int mem_00955080;
extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_00932478;
extern "C" int mem_009253CC;
extern "C" int mem_009254D0;
extern "C" int mem_00925490;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;
extern "C" int mem_00925414;
extern "C" int mem_009253D0;
extern "C" int mem_00925404;
extern "C" int mem_00925524;
extern "C" int mem_009324A4;
extern "C" int mem_00955D14;
extern "C" int mem_009254CC;
extern "C" int mem_00955A30;
extern "C" int mem_0092551C;
extern "C" int mem_0092552C;

// [0x0054B180] sub_0054B180 (1354 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054B180(void* self) {
    __asm {
        sub esp, 0x14
        mov eax, dword ptr [mem_00AF6108]
        fld dword ptr [eax + 0xc8]
        push ebx
        push esi
        mov esi, ecx
        fmul dword ptr [esi + 0x8]
        push 0x4
        fmul dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0xc4]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0xc]
        fld qword ptr [mem_00932468]
        fmul st, st(1)
        fstp dword ptr [esp + 0x10]
        fld qword ptr [mem_00955080]
        fmul st, st(1)
        fstp dword ptr [esp + 0x14]
        fadd dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x18]
        call dword ptr [mem_0092546C]
        fld dword ptr [esp + 0x18]
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        mov ebx, dword ptr [esp + 0x20]
        fld1
        cmp ebx, 0x1c02
        fld dword ptr [mem_00932478]
        fldz
        jne L_54B206
        fstp st(0)
        push 0x0
        fstp st(1)
        fstp st(0)
        call dword ptr [mem_009253CC]
        jmp L_54B24C
L_54B206:
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        je L_54B232
        cmp eax, 0x5
        je L_54B232
        cmp eax, 0x4
        je L_54B232
        cmp eax, 0x6
        je L_54B232
        fstp st(2)
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0xc]
        jmp L_54B243
L_54B232:
        sub esp, 0x10
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
L_54B243:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
L_54B24C:
        push ebp
        push edi
        push 0x1
        call dword ptr [mem_00925490]
        fldz
        mov edi, dword ptr [mem_0092548C]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        call edi
        call dword ptr [mem_00925488]
        mov ebp, dword ptr [mem_00925414]
        call ebp
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call dword ptr [mem_009253D0]
        fld dword ptr [esp + 0x18]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00549B60
        call dword ptr [mem_00925404]
        cmp ebx, 0x1c02
        jne L_54B2E7
        call dword ptr [mem_00925524]
        push 0x1
        call dword ptr [mem_009253CC]
        jmp L_54B33C
L_54B2E7:
        mov eax, dword ptr [esi + 0x10]
        cmp eax, 0x1
        je L_54B31A
        cmp eax, 0x5
        je L_54B31A
        cmp eax, 0x3
        je L_54B31A
        cmp eax, 0x6
        je L_54B31A
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fldz
        fst dword ptr [esp + 0x8]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x4]
        jmp L_54B333
L_54B31A:
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
L_54B333:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
L_54B33C:
        push 0x1
        call dword ptr [mem_00925490]
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        call dword ptr [mem_00925488]
        call ebp
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009253D0]
        fld dword ptr [esp + 0x18]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        mov ecx, esi
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ext_00549B60
        call dword ptr [mem_00925404]
        cmp ebx, 0x1c02
        jne L_54B3C9
        call dword ptr [mem_00925524]
        push 0x2
        call dword ptr [mem_009253CC]
        jmp L_54B41A
L_54B3C9:
        mov eax, dword ptr [esi + 0x10]
        cmp eax, 0x2
        je L_54B3F8
        cmp eax, 0x3
        je L_54B3F8
        cmp eax, 0x4
        je L_54B3F8
        cmp eax, 0x6
        je L_54B3F8
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x8]
        fldz
        jmp L_54B40D
L_54B3F8:
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
L_54B40D:
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
L_54B41A:
        push 0x1
        call dword ptr [mem_00925490]
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esp + 0x10]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        call dword ptr [mem_00925488]
        call ebp
        fld dword ptr [esp + 0x1c]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009253D0]
        fld dword ptr [esp + 0x18]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00549B60
        mov edi, dword ptr [mem_00925404]
        call edi
        cmp ebx, 0x1c02
        jne L_54B49F
        call dword ptr [mem_00925524]
L_54B49F:
        fld dword ptr [mem_009324A4]
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        cmp ebx, 0x1c02
        jne L_54B4C1
        push 0x3
        call dword ptr [mem_009253CC]
        jmp L_54B4FB
L_54B4C1:
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        cmp dword ptr [esi + 0x10], 0x3
        fstp dword ptr [esp + 0xc]
        jne L_54B4E2
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
        jmp L_54B4F2
L_54B4E2:
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x4]
        fldz
L_54B4F2:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
L_54B4FB:
        call ebp
        fldz
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        fld1
        fstp dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_00955D14]
        fstp dword ptr [esp]
        call dword ptr [mem_009254CC]
        fld dword ptr [esp + 0x14]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        mov ecx, esi
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp]
        call ext_00549A30
        call edi
        cmp ebx, 0x1c02
        jne L_54B552
        call dword ptr [mem_00925524]
        push 0x4
        call dword ptr [mem_009253CC]
        jmp L_54B58C
L_54B552:
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        cmp dword ptr [esi + 0x10], 0x4
        fstp dword ptr [esp + 0xc]
        jne L_54B573
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
        jmp L_54B583
L_54B573:
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x4]
        fldz
L_54B583:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
L_54B58C:
        call ebp
        fldz
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x8]
        fld1
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_00955A30]
        fstp dword ptr [esp]
        call dword ptr [mem_009254CC]
        fld dword ptr [esp + 0x14]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x18]
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00549A30
        call edi
        cmp ebx, 0x1c02
        pop edi
        pop ebp
        jne L_54B5E5
        call dword ptr [mem_00925524]
        push 0x5
        call dword ptr [mem_009253CC]
        jmp L_54B61F
L_54B5E5:
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        cmp dword ptr [esi + 0x10], 0x5
        fstp dword ptr [esp + 0xc]
        jne L_54B606
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
        jmp L_54B616
L_54B606:
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x4]
        fldz
L_54B616:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
L_54B61F:
        fld dword ptr [esp + 0xc]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        mov ecx, esi
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp]
        call ext_00549A30
        cmp ebx, 0x1c02
        jne L_54B655
        call dword ptr [mem_00925524]
        push 0x6
        call dword ptr [mem_009253CC]
        push 0x1b02
        jmp L_54B694
L_54B655:
        fld dword ptr [mem_00932478]
        sub esp, 0x10
        cmp dword ptr [esi + 0x10], 0x6
        fstp dword ptr [esp + 0xc]
        jne L_54B676
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
        jmp L_54B686
L_54B676:
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0xc]
L_54B686:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
        push 0x1b01
L_54B694:
        push 0x404
        call dword ptr [mem_0092551C]
        fld dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0054B030
        pop esi
        cmp ebx, 0x1c02
        pop ebx
        jne L_54B6BE
        call dword ptr [mem_00925524]
L_54B6BE:
        call dword ptr [mem_0092552C]
        add esp, 0x14
        ret 0x8
    }
}


extern "C" void ext_004275C0();
extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_004276D0();
extern "C" void ext_00427A60();
extern "C" void ext_0046C0A0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F1D0;
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FE8;
extern "C" int mem_00A9EF58;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F28C;
extern "C" int mem_00A9F2B0;
extern "C" int mem_00A9ED88;
extern "C" int mem_00A9ED40;
extern "C" int mem_00A9EF9C;
extern "C" int mem_00A9F278;
extern "C" int mem_00A9F268;
extern "C" int mem_00A9F988;
extern "C" int mem_00A9F990;
extern "C" int mem_00A9F340;
extern "C" int mem_00A9F76C;
extern "C" int mem_00924FF0;
extern "C" int mem_009251F0;
extern "C" int mem_00A9F944;
extern "C" int mem_00A9F6D0;

// [0x0054D420] sub_0054D420 (1718 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054D420(void* self) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x0089926D
        push eax
        mov fs:[0], esp
        mov eax, mem_00A9F1D0
        sub esp, 0x70
        push ebp
        push esi
        push edi
        push 1
        push 0
        mov ebp, ecx
        mov ecx, dword ptr [esp + 0x94]
        push eax
        call ext_0063F530
        cmp eax, 0x00B53A34
        je L_54D476
        cmp eax, 0x00B53B30
        je L_54D476
        cmp eax, 0x00B53AB0
        je L_54D476
        cmp eax, 0x00B53A70
        je L_54D476
        cmp eax, 0x00B53AF0
        jne L_54D47B
    L_54D476:
        mov eax, 0x00B53B30
    L_54D47B:
        mov edi, dword ptr [eax + 0x28]
        cmp edi, dword ptr [eax + 0x2C]
        lea esi, [eax + 0x24]
        push ebx
        mov ebx, mem_00925134
        jbe L_54D48F
        call ebx
    L_54D48F:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1C], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_54D4AE
        call ebx
    L_54D4AE:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x28], edi
        call ext_00427A60
        mov ebx, mem_00924FC0
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_54D4D0:
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        je L_54D4DE
        cmp edi, dword ptr [esp + 0x24]
        je L_54D4E4
    L_54D4DE:
        call dword ptr [mem_00925134]
    L_54D4E4:
        mov esi, dword ptr [esp + 0x1C]
        cmp esi, dword ptr [esp + 0x28]
        jae L_54D980
        lea ecx, [esp + 0x2C]
        call dword ptr [mem_00924FE8]
        test edi, edi
        mov dword ptr [esp + 0x88], 0
        jne L_54D511
        call dword ptr [mem_00925134]
    L_54D511:
        cmp esi, dword ptr [edi + 0x8]
        jb L_54D51C
        call dword ptr [mem_00925134]
    L_54D51C:
        mov eax, dword ptr [esi]
        mov ecx, mem_00A9EF58
        push ecx
        add eax, 4
        push eax
        call ebx
        add esp, 8
        test al, al
        je L_54D941
        cmp esi, dword ptr [edi + 0x8]
        jb L_54D541
        call dword ptr [mem_00925134]
    L_54D541:
        mov edx, mem_00A9FA6C
        mov ecx, dword ptr [esi]
        push edx
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x48]
        push ecx
        mov ecx, eax
        call edx
        push eax
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x8C], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x88], 0
        call dword ptr [mem_00924FF4]
        lea eax, [esp + 0x2C]
        push 0x00956E78
        push eax
        call ebx
        add esp, 8
        test al, al
        je L_54D655
        cmp esi, dword ptr [edi + 0x8]
        jb L_54D5A4
        call dword ptr [mem_00925134]
    L_54D5A4:
        mov edx, mem_00A9F28C
        mov ecx, dword ptr [esi]
        push 1
        push 0
        push edx
        call ext_0063F530
        cmp eax, 0x00B53A34
        je L_54D5D9
        cmp eax, 0x00B53B30
        je L_54D5D9
        cmp eax, 0x00B53AB0
        je L_54D5D9
        cmp eax, 0x00B53A70
        je L_54D5D9
        cmp eax, 0x00B53AF0
        jne L_54D5DE
    L_54D5D9:
        mov eax, 0x00B53B30
    L_54D5DE:
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [ebp + 0x80]
        push ecx
        call ext_0053F5F0
        add esp, 8
        cmp esi, dword ptr [edi + 0x8]
        jb L_54D601
        call dword ptr [mem_00925134]
    L_54D601:
        mov edx, mem_00A9F2B0
        mov ecx, dword ptr [esi]
        push 1
        push 0
        push edx
        call ext_0063F530
        cmp eax, 0x00B53A34
        je L_54D636
        cmp eax, 0x00B53B30
        je L_54D636
        cmp eax, 0x00B53AB0
        je L_54D636
        cmp eax, 0x00B53A70
        je L_54D636
        cmp eax, 0x00B53AF0
        jne L_54D63B
    L_54D636:
        mov eax, 0x00B53B30
    L_54D63B:
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [ebp + 0x84]
        push ecx
        call ext_0053F5F0
        jmp L_54D93E
    L_54D655:
        lea edx, [esp + 0x2C]
        push 0x00956E6C
        push edx
        call ebx
        add esp, 8
        test al, al
        je L_54D7D6
        cmp esi, dword ptr [edi + 0x8]
        jb L_54D677
        call dword ptr [mem_00925134]
    L_54D677:
        mov eax, mem_00A9F28C
        mov ecx, dword ptr [esi]
        push 1
        push 0
        push eax
        call ext_0063F530
        cmp eax, 0x00B53A34
        je L_54D6AB
        cmp eax, 0x00B53B30
        je L_54D6AB
        cmp eax, 0x00B53AB0
        je L_54D6AB
        cmp eax, 0x00B53A70
        je L_54D6AB
        cmp eax, 0x00B53AF0
        jne L_54D6B0
    L_54D6AB:
        mov eax, 0x00B53B30
    L_54D6B0:
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [ebp + 0x88]
        push edx
        mov dword ptr [esp + 0x18], eax
        call ext_0053F5F0
        add esp, 8
        cmp esi, dword ptr [edi + 0x8]
        jb L_54D6D3
        call dword ptr [mem_00925134]
    L_54D6D3:
        mov eax, mem_00A9F2B0
        mov ecx, dword ptr [esi]
        push 1
        push 0
        push eax
        call ext_0063F530
        cmp eax, 0x00B53A34
        je L_54D707
        cmp eax, 0x00B53B30
        je L_54D707
        cmp eax, 0x00B53AB0
        je L_54D707
        cmp eax, 0x00B53A70
        je L_54D707
        cmp eax, 0x00B53AF0
        jne L_54D70C
    L_54D707:
        mov eax, 0x00B53B30
    L_54D70C:
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [ebp + 0x8C]
        push edx
        mov dword ptr [esp + 0x18], eax
        call ext_0053F5F0
        add esp, 8
        cmp esi, dword ptr [edi + 0x8]
        jb L_54D72F
        call dword ptr [mem_00925134]
    L_54D72F:
        mov eax, mem_00A9ED88
        mov ecx, dword ptr [esi]
        push 1
        push 0
        push eax
        call ext_0063F530
        cmp eax, 0x00B53A34
        je L_54D763
        cmp eax, 0x00B53B30
        je L_54D763
        cmp eax, 0x00B53AB0
        je L_54D763
        cmp eax, 0x00B53A70
        je L_54D763
        cmp eax, 0x00B53AF0
        jne L_54D768
    L_54D763:
        mov eax, 0x00B53B30
    L_54D768:
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [ebp + 0x98]
        push edx
        mov dword ptr [esp + 0x18], eax
        call ext_00427640
        add esp, 8
        cmp esi, dword ptr [edi + 0x8]
        jb L_54D78B
        call dword ptr [mem_00925134]
    L_54D78B:
        mov eax, mem_00A9ED40
        mov ecx, dword ptr [esi]
        push 1
        push 0
        push eax
        call ext_0063F530
        cmp eax, 0x00B53A34
        je L_54D7BF
        cmp eax, 0x00B53B30
        je L_54D7BF
        cmp eax, 0x00B53AB0
        je L_54D7BF
        cmp eax, 0x00B53A70
        je L_54D7BF
        cmp eax, 0x00B53AF0
        jne L_54D7C4
    L_54D7BF:
        mov eax, 0x00B53B30
    L_54D7C4:
        push eax
        lea ecx, [ebp + 0x9C]
        push ecx
        call ext_004275E0
        jmp L_54D93E
    L_54D7D6:
        mov edx, mem_00A9EF9C
        push edx
        lea eax, [esp + 0x30]
        push eax
        call ebx
        add esp, 8
        test al, al
        je L_54D84A
        cmp esi, dword ptr [edi + 0x8]
        jb L_54D7F6
        call dword ptr [mem_00925134]
    L_54D7F6:
        mov edx, mem_00A9F278
        mov ecx, dword ptr [esi]
        push 1
        push 0
        push edx
        call ext_0063F530
        cmp eax, 0x00B53A34
        je L_54D82B
        cmp eax, 0x00B53B30
        je L_54D82B
        cmp eax, 0x00B53AB0
        je L_54D82B
        cmp eax, 0x00B53A70
        je L_54D82B
        cmp eax, 0x00B53AF0
        jne L_54D830
    L_54D82B:
        mov eax, 0x00B53B30
    L_54D830:
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [ebp + 0xB8]
        push ecx
        call ext_0046C0A0
        jmp L_54D93E
    L_54D84A:
        mov edx, mem_00A9F268
        push edx
        lea eax, [esp + 0x30]
        push eax
        call ebx
        add esp, 8
        test al, al
        je L_54D892
        cmp esi, dword ptr [edi + 0x8]
        jb L_54D86A
        call dword ptr [mem_00925134]
    L_54D86A:
        mov edx, mem_00A9F988
        mov ecx, dword ptr [esi]
        push edx
        call ext_0063EFE0
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [ebp + 0xBC]
        push ecx
        call ext_0046C0A0
        jmp L_54D93E
    L_54D892:
        lea edx, [esp + 0x2C]
        push 0x00956E60
        push edx
        call ebx
        add esp, 8
        test al, al
        je L_54D8F7
        mov esi, mem_00A9F988
        lea ecx, [esp + 0x14]
        call ext_004276D0
        push esi
        mov ecx, eax
        call ext_0063EFE0
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [ebp + 0xC0]
        push ecx
        call ext_0046C0A0
        mov esi, mem_00A9F990
        add esp, 8
        lea ecx, [esp + 0x14]
        call ext_004276D0
        push esi
        mov ecx, eax
        call ext_0063EFE0
        mov dword ptr [esp + 0x10], eax
        lea eax, [ebp + 0x90]
        jmp L_54D92B
    L_54D8F7:
        lea ecx, [esp + 0x2C]
        push 0x00956E54
        push ecx
        call ebx
        add esp, 8
        test al, al
        je L_54D941
        mov esi, mem_00A9F990
        lea ecx, [esp + 0x14]
        call ext_004276D0
        push esi
        mov ecx, eax
        call ext_0063EFE0
        mov dword ptr [esp + 0x10], eax
        lea eax, [ebp + 0x94]
    L_54D92B:
        lea edx, [esp + 0x10]
        push edx
        push eax
        call ext_0053F5F0
        mov edi, dword ptr [esp + 0x20]
        mov esi, dword ptr [esp + 0x24]
    L_54D93E:
        add esp, 8
    L_54D941:
        lea ecx, [esp + 0x2C]
        mov dword ptr [esp + 0x88], -1
        call dword ptr [mem_00924FF4]
        test edi, edi
        jne L_54D960
        call dword ptr [mem_00925134]
    L_54D960:
        cmp esi, dword ptr [edi + 0x8]
        jb L_54D96B
        call dword ptr [mem_00925134]
    L_54D96B:
        add esi, 4
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x1C], esi
        call ext_00427A60
        jmp L_54D4D0
    L_54D980:
        mov ecx, mem_00A9F340
        push 1
        push 0
        push ecx
        mov ecx, dword ptr [esp + 0x9C]
        call ext_0063F530
        cmp eax, 0x00B53A34
        pop ebx
        je L_54D9BB
        cmp eax, 0x00B53B30
        je L_54D9BB
        cmp eax, 0x00B53AB0
        je L_54D9BB
        cmp eax, 0x00B53A70
        je L_54D9BB
        cmp eax, 0x00B53AF0
        jne L_54D9C2
    L_54D9BB:
        mov esi, 0x00B53B30
        jmp L_54D9C4
    L_54D9C2:
        mov esi, eax
    L_54D9C4:
        mov edx, mem_00A9F76C
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0xC], eax
        lea eax, [esp + 0x44]
        push eax
        lea ecx, [esp + 0x10]
        call ext_004275C0
        mov ecx, eax
        mov dword ptr [esp + 0x84], 2
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [ebp + 0xC4]
        or edi, -1
        add esp, 4
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0x84], edi
        call dword ptr [mem_00924FF4]
        mov ecx, mem_00A9F944
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x44]
        push edx
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], eax
        call ext_004275C0
        mov ecx, eax
        mov dword ptr [esp + 0x84], 3
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [ebp + 0xC8]
        add esp, 4
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0x84], edi
        call dword ptr [mem_00924FF4]
        mov eax, mem_00A9F6D0
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0x60]
        push ecx
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], eax
        call ext_004275C0
        mov ecx, eax
        mov dword ptr [esp + 0x84], 4
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [ebp + 0xCC]
        add esp, 4
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0x84], edi
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x7C]
        pop edi
        pop esi
        pop ebp
        mov fs:[0], ecx
        add esp, 0x7C
        ret 4
    }
}

// [0x0054EF50] sub_0054EF50 (97 bytes)
extern "C" void ext_0054EE80();
extern "C" int mem_00925474;
extern "C" __declspec(naked) void __fastcall fn_0054EF50(void* self) {
    __asm {
        push -1
        push 008996a8h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        xor eax, eax
        lea ecx, [esi + 0ch]
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esi], 00957000h
        mov dword ptr [esi + 4], eax
        call ext_0054EE80
        lea edi, [esi + 8]
        push edi
        push 0d36h
        mov dword ptr [esi + 20h], 00956fb8h
        call dword ptr [mem_00925474]
        add dword ptr [edi], -3
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x0054EE80] sub_0054EE80 (100 bytes)
extern "C" void ext_00480920();
extern "C" void ext_00484E90();
extern "C" void ext_0054ED50();
extern "C" __declspec(naked) void* __fastcall fn_0054EE80(void* self) {
    __asm {
        push -1
        push 0x899693
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 8], edi
        xor eax, eax
        lea esi, [edi + 4]
        mov dword ptr [edi], 0x956fdc
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0xc], eax
        push 0x40
        mov ecx, esi
        mov byte ptr [esp + 0x18], 1
        call ext_0054ED50
        call ext_00480920
        push eax
        mov ecx, esi
        call ext_00484E90
        mov ecx, dword ptr [esp + 0xc]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0054FBB0] sub_0054FBB0 (254 bytes)
extern "C" void ext_00662A50();
extern "C" void ext_006690D0();
extern "C" void ext_00669180();
extern "C" void ext_0066A720();
extern "C" int mem_00924FE8;
extern "C" int mem_00987B44;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FEC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924ED0;

extern "C" __declspec(naked) void __fastcall fn_0054FBB0(void* self) {
    __asm {
        push    -1
        push    0x899968
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x3c
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x804]
        mov     ecx, esi
        mov     dword ptr [esp + 0x8], edi
        mov     dword ptr [edi], 0x9570a4
        call    dword ptr [mem_00924FE8]
        mov     eax, dword ptr [mem_00987B44]
        lea     ecx, [edi + 0x820]
        push    eax
        mov     dword ptr [esp + 0x50], 0
        call    ext_0066A720
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     byte ptr [esp + 0x50], 1
        call    ext_00662A50
        add     esp, 4
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x50], 2
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0xc]
        mov     byte ptr [esp + 0x4c], 1
        call    dword ptr [mem_00924FF4]
        mov     ecx, esi
        call    dword ptr [mem_00924FEC]
        test    al, al
        je      L_done
        push    0x957098
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0xc]
        push    edx
        lea     eax, [esp + 0x2c]
        push    eax
        mov     byte ptr [esp + 0x54], 3
        call    ext_006690D0
        mov     ecx, eax
        call    ext_00669180
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x50], 4
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0x28]
        mov     byte ptr [esp + 0x4c], 3
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0xc]
        mov     byte ptr [esp + 0x4c], 1
        call    dword ptr [mem_00924FF4]
    L_done:
        push    0x957080
        mov     ecx, esi
        call    dword ptr [mem_00924ED0]
        mov     ecx, dword ptr [esp + 0x44]
        mov     eax, edi
        pop     edi
        pop     esi
        mov     fs:[0], ecx
        add     esp, 0x48
        ret
    }
}
