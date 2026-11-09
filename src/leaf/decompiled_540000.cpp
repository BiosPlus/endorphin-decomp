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
