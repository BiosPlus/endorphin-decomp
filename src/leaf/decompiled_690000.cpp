// Decompiled translation unit: src/leaf/decompiled_690000.cpp

extern "C" void ext_0041A8B0();
extern "C" void __fastcall ext_00680800(void* self);
extern "C" void ext_006989B0();

// [0x00698EC0] sub_00698EC0 (13 bytes)
extern "C" __declspec(naked) void __stdcall fn_00698EC0(void* a1) {
    __asm {
        lea eax, [esp + 4]
        push eax
        call ext_0041A8B0
        ret 4
    }
}

// [0x006997D0] sub_006997D0 (16 bytes)
extern "C" void* __fastcall fn_006997D0(void* self) {
    char* esi = (char*)self;
    ext_00680800(esi + 0x28);
    return esi + 0x7c;
}

// [0x00695440] sub_00695440 (19 bytes)
extern "C" void ext_00695420();
extern "C" void* __fastcall fn_00695440(void* self) {
    char* esi = (char*)self;
    esi[0x9d4] = 0;
    ext_00695420();
    return esi;
}

// [0x00695420] sub_00695420 (20 bytes)
extern "C" void ext_006953F0();
extern "C" void ext_00695390();
extern "C" void __fastcall fn_00695420(void* self) {
    int r = ((int (__stdcall*)(int))ext_006953F0)(0);
    ((void (__thiscall*)(void*, int))ext_00695390)(self, r);
}

// [0x006936A0] sub_006936A0 (21 bytes)
extern "C" void ext_0067BA20();
extern "C" __declspec(naked) void __fastcall fn_006936A0(void* self, int edx_unused, int a1, float a2) {
    __asm {
        fld dword ptr [esp + 8]
        mov eax, dword ptr [esp + 4]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_0067BA20
        ret 8
    }
}

// [0x00698A90] sub_00698A90 (22 bytes)
extern "C" void ext_006989E0();

extern "C" int __stdcall fn_00698A90(char** p) {
    typedef char* (__stdcall *Callee)(char*);
    char* r = ((Callee)ext_006989E0)(*p);
    *p += 4;
    return *(int*)r;
}

// [0x00698AB0] sub_00698AB0 (22 bytes)
extern "C" __declspec(naked) float __stdcall fn_00698AB0(char** p) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        push eax
        call ext_006989E0
        add dword ptr [esi], 4
        fld dword ptr [eax]
        pop esi
        ret 4
    }
}

// [0x00698A70] sub_00698A70 (24 bytes)
extern "C" __declspec(naked) unsigned char __stdcall fn_00698A70(char** p) {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [edx]
        push esi
        lea esi, [eax + 1]
        push eax
        mov dword ptr [edx], esi
        call ext_006989E0
        mov al, byte ptr [eax]
        pop esi
        ret 4
    }
}

// [0x0069B560] sub_0069B560 (25 bytes)
extern "C" void ext_00401C60();
extern "C" __declspec(naked) void* __fastcall fn_0069B560(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_00401C60
        mov dword ptr [esi], 0x98fb84
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x0069D4C0] sub_0069D4C0 (25 bytes)
extern "C" void* __fastcall fn_0069D4C0(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *callee_t)(int);
    reinterpret_cast<callee_t>(ext_00401C60)(a1);
    *reinterpret_cast<unsigned int*>(self) = 0x0098FBDCu;
    return self;
}

// [0x006991F0] sub_006991F0 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_006991F0(void* self, int edx_unused, void* newp) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, ecx
        je short L_store
        test ecx, ecx
        je short L_store
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
L_store:
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x006955D0] sub_006955D0 (35 bytes)
extern "C" int mem_00B5C790;
extern "C" int mem_00B5BDB8;
extern "C" void ext_00695440();
extern "C" void* __fastcall fn_006955D0(void* self) {
    if (!(mem_00B5C790 & 1)) {
        mem_00B5C790 |= 1;
        ((void (__fastcall*)(void*))ext_00695440)((void*)&mem_00B5BDB8);
    }
    return (void*)&mem_00B5BDB8;
}

// [0x006989B0] sub_006989B0 (37 bytes)
extern "C" __declspec(naked) void __cdecl fn_006989B0(const unsigned char* src, const unsigned char* end, unsigned char* dst) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [esp + 0Ch]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        cmp ecx, esi
        je done
    loop_top:
        test eax, eax
        je skip_store
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
    skip_store:
        add ecx, 1
        add eax, 1
        cmp ecx, esi
        jne loop_top
    done:
        pop esi
        ret
    }
}

// [0x0069B530] sub_0069B530 (37 bytes)
extern "C" bool __fastcall fn_0069B530(void* self) {
    char* p = (char*)self;
    int begin = *(int*)(p + 0x4);
    int v;
    if (begin == 0) {
        v = 0;
    } else {
        v = (*(int*)(p + 0x8) - begin) >> 3;
    }
    return v == 0;
}

// [0x006997E0] sub_006997E0 (38 bytes)
extern "C" void ext_006A6E9E();
extern "C" __declspec(naked) void* __fastcall fn_006997E0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [eax + 0x60]
        push 0x0
        push 0xaa3d80
        push 0xa2e2f8
        push 0x0
        push edx
        call eax
        push eax
        call ext_006A6E9E
        add esp, 0x14
        ret 0x4
    }
}

// [0x00698A40] sub_00698A40 (40 bytes)
extern "C" __declspec(naked) unsigned char* __cdecl fn_00698A40(void* a1, const unsigned char* src, void* a3, const unsigned char* end, unsigned char* dst) {
    __asm {
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 14h]
        push esi
        mov esi, dword ptr [esp + 14h]
        sub edx, ecx
        cmp ecx, esi
        push edi
        lea edi, [edx + esi]
        je done
    loop_top:
        mov al, byte ptr [ecx]
        mov byte ptr [edx + ecx], al
        add ecx, 1
        cmp ecx, esi
        jne loop_top
    done:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x00698B90] sub_00698B90 (41 bytes)
extern "C" __declspec(naked) void __fastcall fn_00698B90(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x18]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push eax
        push ecx
        push edx
        call ext_006989B0
        add esp, 0x1c
        ret 0x14
    }
}

// [0x00698810] sub_00698810 (47 bytes)
extern "C" __declspec(naked) int __fastcall fn_00698810(void* self, int edx_unused, const char* a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx]
    L_loop:
        mov cl, byte ptr [eax]
        cmp cl, byte ptr [edx]
        jne short L_diff
        test cl, cl
        je short L_eq
        mov cl, byte ptr [eax + 0x1]
        cmp cl, byte ptr [edx + 0x1]
        jne short L_diff
        add eax, 0x2
        add edx, 0x2
        test cl, cl
        jne short L_loop
    L_eq:
        xor eax, eax
        ret 0x4
    L_diff:
        sbb eax, eax
        sbb eax, -0x1
        ret 0x4
    }
}

// [0x00697650] sub_00697650 (49 bytes)
extern "C" int mem_0092F678;
extern "C" float __fastcall fn_00697650(void* self) {
    char* p = (char*)self;
    int* b = *(int**)(p + 4);
    int* e = *(int**)(p + 8);
    unsigned int n = !b ? 0 : (unsigned int)(e - b);
    return *(float*)(p + 0x18) / (float)n;
}

// [0x0069B100] sub_0069B100 (49 bytes)
extern "C" __declspec(naked) int __cdecl fn_0069B100(char c) {
    __asm {
        mov al, byte ptr [esp + 4]
        test al, al
        je L_0069B110
        cmp al, 41h
        jl L_0069B110
        cmp al, 5ah
        jle L_0069B12B
    L_0069B110:
        cmp al, 61h
        jl L_0069B118
        cmp al, 7ah
        jle L_0069B12B
    L_0069B118:
        cmp al, 30h
        jl L_0069B120
        cmp al, 39h
        jle L_0069B12B
    L_0069B120:
        cmp al, 5fh
        je L_0069B12B
        cmp al, 24h
        je L_0069B12B
        xor eax, eax
        ret
    L_0069B12B:
        mov eax, 1
        ret
    }
}
