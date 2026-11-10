// Decompiled translation unit: src/leaf/decompiled_690000.cpp

extern "C" void ext_0041A8B0();
extern "C" void __fastcall ext_00680800(void* self);
extern "C" void ext_006989B0();
extern "C" void ext_0069B0C0();
extern "C" void ext_0069B100();

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

// [0x00698B50] sub_00698B50 (49 bytes)
extern "C" void ext_00698AB0();
extern "C" __declspec(naked) void __fastcall fn_00698B50(void* self, int edx_unused, char** p, float* out) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push edi
        mov esi, ecx
        call ext_00698AB0
        mov ebx, dword ptr [esp + 0x14]
        push edi
        fstp dword ptr [ebx]
        mov ecx, esi
        call ext_00698AB0
        fstp dword ptr [ebx + 0x4]
        push edi
        mov ecx, esi
        call ext_00698AB0
        fstp dword ptr [ebx + 0x8]
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x0069B640] sub_0069B640 (51 bytes)
extern "C" void ext_00596300();
extern "C" __declspec(naked) int __fastcall fn_0069B640(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_00596300
        add esp, 0x18
        lea eax, [edi + 8*esi]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0069B140] sub_0069B140 (53 bytes)
extern "C" int __cdecl fn_0069B140(char c) {
    if ((c != 0 && c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z') ||
        (c >= '0' && c <= '9') ||
        c == '.' || c == '_' || c == '$') {
        return 1;
    }
    return 0;
}

// [0x00698200] sub_00698200 (54 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __cdecl fn_00698200(void* first, void* last, const void* value) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebp
        je done
        push ebx
        push edi
        mov edi, dword ptr [esp + 0x1c]
        lea ebx, [edi + 0x1c]
    loop_top:
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FDC]
        push ebx
        lea ecx, [esi + 0x1c]
        call dword ptr [mem_00924FDC]
        add esi, 0x38
        cmp esi, ebp
        jne loop_top
        pop edi
        pop ebx
    done:
        pop esi
        pop ebp
        ret
    }
}

// [0x006968D0] sub_006968D0 (58 bytes)
// Reads chars from the stream at a1 (via get) until '\n' or 0xFF is seen; returns true on that,
// false if the stream is in a fail state. Stack argument (ret 0); ecx is not used as input.
extern "C" int mem_009250BC;
extern "C" int mem_009250C0;
extern "C" __declspec(naked) bool __cdecl fn_006968D0(void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
    loop_top:
        lea eax, [esp + 7]
        push eax
        mov ecx, esi
        call dword ptr [mem_009250BC]
        mov ecx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 4]
        add ecx, eax
        call dword ptr [mem_009250C0]
        test al, al
        jne fail
        mov al, byte ptr [esp + 7]
        cmp al, 0xa
        je done_true
        cmp al, 0xff
        jne loop_top
    done_true:
        mov al, 1
        pop esi
        pop ecx
        ret
    fail:
        xor al, al
        pop esi
        pop ecx
        ret
    }
}

// [0x00696DD0] sub_00696DD0 (60 bytes)
extern "C" void __fastcall fn_00696DD0(void* self) {
    int* p = (int*)self;
    if (p[4] > p[0]) {
        p[3] += p[4] / p[0];
        p[4] = p[4] % p[0];
        if (p[3] > 59) {
            p[2] += p[3] / 60;
            p[3] = p[3] % 60;
            if (p[2] > 59) {
                p[1] += p[2] / 60;
                p[2] = p[2] % 60;
            }
        }
    }
}

// [0x00699360] sub_00699360 (60 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void* __fastcall fn_00699360(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        je L_ret0_00699360
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, eax
        sar ecx, 5
        je L_ret0_00699360
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push edi
        mov edi, eax
        cmp edi, dword ptr [esi + 0xc]
        jbe L_chk_00699360
        call ebx
        cmp edi, dword ptr [esi + 0xc]
L_chk_00699360:
        jb L_ok_00699360
        call ebx
L_ok_00699360:
        mov eax, edi
        pop edi
        pop ebx
        pop esi
        pop ecx
        ret
L_ret0_00699360:
        mov eax, 0xb59400
        pop esi
        pop ecx
        ret
    }
}

// [0x006999B0] sub_006999B0 (60 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_00B5C9A4;
extern "C" int mem_00B599BC;
extern "C" int mem_00B5C99C;
extern "C" int mem_00B5C9A0;
extern "C" __declspec(naked) void* __stdcall fn_006999B0(void* a1) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00B5C9A4], al
        jne done
        or dword ptr [mem_00B5C9A4], eax
        mov eax, dword ptr [mem_00B599BC]
        push 0x921fe0
        mov dword ptr [mem_00B5C99C], 0
        mov dword ptr [mem_00B5C9A0], eax
        call ext_006A6C87
        add esp, 4
done:
        mov eax, offset mem_00B5C99C
        ret 4
    }
}

// [0x00691FC0] sub_00691FC0 (63 bytes)
extern "C" __declspec(naked) bool __cdecl fn_00691FC0(const unsigned char* a, const unsigned char* b) {
    __asm {
        mov edx, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
    loop_top_00691FC0:
        mov al, byte ptr [ecx]
        cmp al, byte ptr [edx]
        jne diff_00691FC0
        test al, al
        je equal_00691FC0
        mov al, byte ptr [ecx + 1]
        cmp al, byte ptr [edx + 1]
        jne diff_00691FC0
        add ecx, 2
        add edx, 2
        test al, al
        jne loop_top_00691FC0
    equal_00691FC0:
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        setl cl
        mov al, cl
        ret
    diff_00691FC0:
        sbb eax, eax
        sbb eax, -1
        xor ecx, ecx
        test eax, eax
        setl cl
        mov al, cl
        ret
    }
}

// [0x0069B0C0] sub_0069B0C0 (64 bytes)
extern "C" __declspec(naked) bool __cdecl fn_0069B0C0(char** pp, const char* lit) {
    __asm {
        mov ecx, dword ptr [esp + 8]
        mov al, byte ptr [ecx]
        test al, al
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov ebx, dword ptr [edi]
        je short L_ret_true
    L_loop:
        mov esi, dword ptr [edi]
        mov dl, byte ptr [esi]
        test dl, dl
        je short L_fail
        cmp dl, al
        jne short L_fail
        add esi, 1
        add ecx, 1
        mov dword ptr [edi], esi
        mov al, byte ptr [ecx]
        test al, al
        jne short L_loop
    L_ret_true:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret
    L_fail:
        cmp byte ptr [ecx], 0
        je short L_ret_true
        mov dword ptr [edi], ebx
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret
    }
}

// [0x0069B5A0] sub_0069B5A0 (63 bytes)
extern "C" __declspec(naked) int __cdecl fn_0069B5A0(void* a1, void* a2) {
    __asm {
        mov ecx, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        mov dword ptr [esp + 0x10], eax
        call ext_0069B0C0
        add esp, 8
        test al, al
        je fail_0069B5A0
        mov ecx, dword ptr [esp + 8]
        movzx eax, byte ptr [ecx]
        push eax
        call ext_0069B100
        add esp, 4
        test al, al
        jne fail_0069B5A0
        mov dword ptr [esi], ecx
        mov al, 1
        pop esi
        ret
fail_0069B5A0:
        xor al, al
        pop esi
        ret
    }
}

// [0x00692B50] sub_00692B50 (79 bytes)
extern "C" void ext_00661980();
extern "C" __declspec(naked) void* __fastcall fn_00692B50(void* self) {
    __asm {
        push -1
        push 0x0088B143
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_00661980
        mov dword ptr [esi + 0x4], 0x00928EFC
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi], 0x00944E74
        mov dword ptr [esi + 0x4], 0x00944E44
        xor eax, eax
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

// [0x006991A0] sub_006991A0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006991A0(void* self) {
    __asm {
        push -1
        push 0x008B6418
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0098FAC4
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 0x0
        je short L_skip_006991A0
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    L_skip_006991A0:
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi], 0x0098FABC
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}
