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
