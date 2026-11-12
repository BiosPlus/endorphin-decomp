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
