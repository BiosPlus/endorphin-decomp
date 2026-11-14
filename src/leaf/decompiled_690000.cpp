// Decompiled translation unit: src/leaf/decompiled_690000.cpp

#include <math.h>

extern "C" void ext_0041A8B0();
extern "C" void ext_004276B0();
extern "C" void ext_006999F0();
extern "C" void ext_0069A9D0();
extern "C" void __fastcall ext_00680800(void* self);
extern "C" void ext_006989B0();
extern "C" void ext_0069B0C0();
extern "C" void ext_0069B100();
extern "C" void ext_00693D40();
extern "C" int __cdecl ext_007BFDF0(void*);
extern "C" int __cdecl ext_007BFF40(void*, int);

// [0x00698EC0] sub_00698EC0 (13 bytes)
extern "C" __declspec(naked) void __stdcall fn_00698EC0(void* a1) {
    __asm {
        lea eax, [esp + 4]
        push eax
        call ext_0041A8B0
        ret 4
    }
}
extern "C" void ext_00403560();
extern "C" void ext_00697DD0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924EAC;
extern "C" int mem_00924FFC;
extern "C" int mem_00924FE4;
extern "C" int mem_00925058;
extern "C" int mem_0092500C;

extern "C" void ext_00697DD0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924EAC;
extern "C" int mem_00924FFC;
extern "C" int mem_00924FE4;
extern "C" int mem_00925058;
extern "C" int mem_0092500C;

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

// [0x006981A0] sub_006981A0 (83 bytes)
// Copy-constructor for a two-std::string struct (strings at +0x0 and +0x1c, copied from a1):
// installs an SEH frame (handler 0x872c79), copy-constructs both members via the imported
// MSVCP80 basic_string copy ctor, restores the previous SEH frame and returns this.
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_006981A0(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x872c79
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
        call dword ptr [mem_00924FE0]
        add edi, 0x1c
        push edi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x18], 0x0
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00699950] sub_00699950 (54 bytes)
extern "C" void ext_0041CF50();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00699950(void* self, int edx_unused, unsigned int idx, void* arg2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x1c]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        je L_fail
        mov eax, dword ptr [esi + 0x20]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jb L_ok
    L_fail:
        call dword ptr [mem_00925134]
    L_ok:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x1c]
        push eax
        lea ecx, [ecx + 8*edi]
        call ext_0041CF50
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x00696B70] sub_00696B70 (86 bytes)
extern "C" int mem_009250E4;
extern "C" int mem_009250E8;
extern "C" int mem_009250EC;
extern "C" __declspec(naked) bool __cdecl fn_00696B70(void* is, void* s) {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
    L_00696B77:
        mov ecx, esi
        call dword ptr [mem_009250E4]
        mov bl, al
        cmp bl, 0x20
        mov byte ptr [esp + 0x8], bl
        je L_00696B8F
        cmp bl, 0x9
        jne L_00696B9A
    L_00696B8F:
        cmp bl, -1
        jne L_00696B77
    L_00696B94:
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret
    L_00696B9A:
        cmp bl, -1
        je L_00696B94
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov ecx, esi
        call dword ptr [mem_009250E8]
        cmp bl, 0xa
        je L_00696B94
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push esi
        call dword ptr [mem_009250EC]
        add esp, 8
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret
    }
}

// [0x00692010] sub_00692010 (87 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00692010(void* first, void* last, const void* value, void* pred) {
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
        mov ebp, dword ptr [esp + 0x1c]
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
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [eax]
        sar esi, 1
        mov edx, dword ptr [ebx + 4 * esi]
        push ecx
        push edx
        call ebp
        add esp, 0x8
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

// [0x00692070] sub_00692070 (87 bytes)
// upper_bound over 4-byte elements with a cdecl predicate pred(value, elem).
extern "C" int* __cdecl fn_00692070(int* first, int* last, const int* value, bool (__cdecl* pred)(int, int)) {
    int count = last - first;
    while (count > 0) {
        int half = count / 2;
        int* mid = first + half;
        if (!pred(*value, *mid)) {
            first = mid + 1;
            count -= half + 1;
        } else {
            count = half;
        }
    }
    return first;
}

// [0x00698840] sub_00698840 (87 bytes)
// find_first_of-style search: returns the first index >= start in self's buffer
// (data at +0, length at +4) whose byte appears in the NUL-terminated set `chars`, else -1.
extern "C" __declspec(naked) int __fastcall fn_00698840(void* self, int edx_unused, const char* chars, int start) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov eax, ebp
        push edi
        lea esi, [eax + 0x1]
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_len:
        mov dl, byte ptr [eax]
        add eax, 0x1
        test dl, dl
        jne short L_len
        mov edi, dword ptr [ecx + 0x4]
        sub eax, esi
        mov esi, dword ptr [esp + 0x18]
        cmp esi, edi
        jge short L_notfound
        mov ebx, dword ptr [ecx]
    L_outer:
        mov dl, byte ptr [ebx + esi]
        xor ecx, ecx
        test eax, eax
        jle short L_next
    L_inner:
        cmp dl, byte ptr [ecx + ebp]
        je short L_found
        add ecx, 0x1
        cmp ecx, eax
        jl short L_inner
    L_next:
        add esi, 0x1
        cmp esi, edi
        jl short L_outer
    L_notfound:
        pop edi
        pop esi
        pop ebp
        or eax, -0x1
        pop ebx
        ret 0x8
    L_found:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x006988A0] sub_006988A0 (87 bytes)
// find_first_not_of-style search: returns the first index >= start in self's buffer
// (data at +0, length at +4) whose byte does NOT appear in the NUL-terminated set `chars`;
// returns the buffer length if every remaining byte is in the set (the -1 path is not taken here).
extern "C" __declspec(naked) int __fastcall fn_006988A0(void* self, int edx_unused, const char* chars, int start) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov eax, ebp
        push edi
        lea esi, [eax + 0x1]
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_len:
        mov dl, byte ptr [eax]
        add eax, 0x1
        test dl, dl
        jne short L_len
        mov edi, dword ptr [ecx + 0x4]
        sub eax, esi
        mov esi, dword ptr [esp + 0x18]
        cmp esi, edi
        jge short L_notfound
        mov ebx, dword ptr [ecx]
    L_outer:
        mov dl, byte ptr [ebx + esi]
        xor ecx, ecx
        test eax, eax
        jle short L_retesi
    L_inner:
        cmp dl, byte ptr [ecx + ebp]
        je short L_next
        add ecx, 0x1
        cmp ecx, eax
        jl short L_inner
    L_retesi:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    L_next:
        add esi, 0x1
        cmp esi, edi
        jl short L_outer
    L_notfound:
        pop edi
        pop esi
        pop ebp
        or eax, -0x1
        pop ebx
        ret 0x8
    }
}

// [0x00695CE0] sub_00695CE0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5C7A0;
extern "C" int mem_00B5C79C;

extern "C" __declspec(naked) void* __fastcall fn_00695CE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b603e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5C7A0], al
        jne L_done
        or dword ptr [mem_00B5C7A0], eax
        mov ecx, offset mem_00B5C79C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5C79C], 0x98f41c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5C79C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00695E00] sub_00695E00 (30 bytes)
extern "C" void ext_00695CE0();

extern "C" __declspec(naked) void __fastcall fn_00695E00(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_00695CE0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x00695E20] sub_00695E20 (31 bytes)
extern "C" void ext_00695E00();

extern "C" __declspec(naked) void* __fastcall fn_00695E20(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        mov dword ptr [esp + 0xc], 0x0
        call ext_00695E00
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00698900] sub_00698900 (87 bytes)
extern "C" __declspec(naked) int __fastcall fn_00698900(void* self, int edx_unused, int* pos, const char* chars) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        mov eax, dword ptr [ebp]
        push esi
        push edi
        push eax
        push ebx
        mov esi, ecx
        call fn_00698840
        cmp eax, -0x1
        jne short L_found
        mov dword ptr [ebp], eax
        mov edi, dword ptr [esi + 0x4]
        sub edi, 0x1
        jmp short L_result
    L_found:
        push eax
        push ebx
        mov ecx, esi
        lea edi, [eax - 0x1]
        call fn_006988A0
        cmp eax, -0x1
        jne short L_store
        mov dword ptr [ebp], eax
        jmp short L_result
    L_store:
        mov dword ptr [ebp], eax
    L_result:
        test edi, edi
        jge short L_pos
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x8
    L_pos:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x00696BD0] sub_00696BD0 (88 bytes)
extern "C" int mem_009250E4;
extern "C" int mem_00924EA8;
extern "C" int mem_00924EC0;
extern "C" __declspec(naked) void __cdecl fn_00696BD0(void* in, void* s) {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov ecx, esi
        call dword ptr [mem_009250E4]
        mov edi, dword ptr [esp + 0x18]
        mov bl, al
        mov ecx, edi
        mov byte ptr [esp + 0xc], bl
        call dword ptr [mem_00924EA8]
        cmp bl, 0ah
        je done
    loop_top:
        cmp bl, 0dh
        je done
        cmp bl, 0ffh
        je done
        mov eax, dword ptr [esp + 0xc]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924EC0]
        mov ecx, esi
        call dword ptr [mem_009250E4]
        mov bl, al
        cmp bl, 0ah
        mov byte ptr [esp + 0xc], bl
        jne loop_top
    done:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret
    }
}

// [0x006996C0] sub_006996C0 (88 bytes)
// Reads its single stack argument (ret 0). Returns 0 if arg or arg->[0x48] is null. Otherwise
// __RTDynamicCast(arg->[0x4C], 0, 0xAA1808, 0xA31114, 0); if non-null, calls vtable slot 0x60
// of arg->[0x4C] with (esi=&arg->[0x48]), 0xAA3D80, 0xA2E2F8, 0 and passes the result to
// __RTDynamicCast again (ret 0), returning its result.
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_006996C0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        push esi
        je L_fail
        cmp dword ptr [eax + 0x48], 0
        lea esi, [eax + 0x48]
        je L_fail
        mov eax, dword ptr [esi + 0x4]
        push 0
        push 0AA1808h
        push 0A31114h
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_fail
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x60]
        push 0
        push 0AA3D80h
        push 0A2E2F8h
        push 0
        push esi
        call edx
        push eax
        call ext_006A6E9E
        add esp, 0x14
        pop esi
        ret
    L_fail:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x006992E0] sub_006992E0 (89 bytes)
extern "C" void ext_006991F0();
extern "C" __declspec(naked) void __fastcall fn_006992E0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x887089
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        xor eax, eax
        mov dword ptr [esp], eax
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esi], eax
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x4], ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x74]
        push esi
        mov dword ptr [esp + 0x8], 0x1
        call edx
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esi]
        push eax
        call ext_006991F0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x0069C1C0] sub_0069C1C0 (90 bytes)
// Constructor-style: SEH prologue (scope table 0x008B6814), two std::string member
// default-constructions via the imported basic_string ctor, zeroes the fields in between.
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_0069C1C0(void* self) {
    __asm {
        push -1
        push 0x008B6814
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call dword ptr [mem_00924FE8]
        xor edi, edi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi + 0x20], edi
        mov dword ptr [esi + 0x24], edi
        mov dword ptr [esi + 0x28], edi
        lea ecx, [esi + 0x2c]
        mov byte ptr [esp + 0x14], 0x1
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x48], edi
        mov dword ptr [esi + 0x4c], edi
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00699870] sub_00699870 (91 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00699870(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        push edi
        lea edi, [eax + 0x8]
        mov dword ptr [esi + 0x4], edx
        cmp dword ptr [edi + 0x4], 0x0
        je null_branch_00699870
        mov ecx, dword ptr [edi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push edi
        lea edx, [esp + 0x10]
        push edx
        call eax
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 0x8], ecx
        mov edx, dword ptr [edi + 0x4]
        pop edi
        mov dword ptr [esi + 0xc], edx
        mov eax, esi
        pop esi
        ret 0x4
null_branch_00699870:
        lea eax, [esp + 0xc]
        mov dword ptr [esp + 0xc], 0x0
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 0x8], ecx
        mov edx, dword ptr [edi + 0x4]
        pop edi
        mov dword ptr [esi + 0xc], edx
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x006998D0] sub_006998D0 (82 bytes)
extern "C" void ext_00699870();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_006998D0(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x872c79
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
        call dword ptr [mem_00924FE0]
        add edi, 0x1c
        push edi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x18], 0x0
        call ext_00699870
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00696910] sub_00696910 (100 bytes)
extern "C" int mem_009250BC;
extern "C" int mem_009250C0;
extern "C" int mem_009250E8;
extern "C" void ext_006968D0();
extern "C" __declspec(naked) void __cdecl fn_00696910(void* a1, char a2) {
    __asm {
        push ecx
        push ebx
        mov bl, byte ptr [esp + 10h]
        push esi
        mov esi, dword ptr [esp + 10h]
        jmp short loop_top
        _emit 0x8D
        _emit 0x49
        _emit 0x00
loop_top:
        lea eax, [esp + 8]
        push eax
        mov ecx, esi
        call dword ptr [mem_009250BC]
        mov ecx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 4]
        add ecx, eax
        call dword ptr [mem_009250C0]
        test al, al
        jne fail
        mov eax, dword ptr [esp + 8]
        cmp al, 23h
        jne check_delim
        push esi
        call ext_006968D0
        add esp, 4
        test al, al
        je fail
        mov eax, dword ptr [esp + 8]
check_delim:
        cmp al, bl
        je found
        cmp al, 0FFh
        jne loop_top
found:
        push eax
        mov ecx, esi
        call dword ptr [mem_009250E8]
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret
fail:
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret
    }
}

// [0x00693D40] sub_00693D40 (110 bytes)
extern "C" void __fastcall fn_00693D40(float* self) {
    struct Mat4 { float m[16]; };
    Mat4 t = *reinterpret_cast<Mat4*>(self);
    self[1]  = t.m[4];
    self[2]  = t.m[8];
    self[3]  = t.m[12];
    self[4]  = t.m[1];
    self[6]  = t.m[9];
    self[7]  = t.m[13];
    self[8]  = t.m[2];
    self[9]  = t.m[6];
    self[11] = t.m[14];
    self[12] = t.m[3];
    self[13] = t.m[7];
    self[14] = t.m[11];
}

// [0x00693CC0] sub_00693CC0 (115 bytes)
extern "C" void ext_006A7250();
extern "C" __declspec(naked) void* __fastcall fn_00693CC0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0x4]
        fld dword ptr [esi]
        fld dword ptr [esi + 0x8]
        fld dword ptr [esi + 0xc]
        fld st(2)
        fmulp st(3), st
        fld st(3)
        fmulp st(4), st
        fxch st(2)
        faddp st(3), st
        fmul st(0), st
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
        jnp skip_zero
        fld dword ptr [esi]
        fdiv st, st(1)
        fstp dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fdiv st, st(1)
        fstp dword ptr [esi + 0x4]
        fld dword ptr [esi + 0x8]
        fdiv st, st(1)
        fstp dword ptr [esi + 0x8]
        fdivr dword ptr [esi + 0xc]
        fstp dword ptr [esi + 0xc]
        pop esi
        pop ecx
        ret
skip_zero:
        fstp st(0)
        pop esi
        pop ecx
        ret
    }
}

// [0x00692D90] sub_00692D90 (60 bytes)
extern "C" void ext_00490960();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00692D90(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x8]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe skip_a
        call ebp
    skip_a:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe skip_b
        call ebp
    skip_b:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00490960
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00697840] sub_00697840 (125 bytes)
// Stack-argument thiscall (ret 0xc): a1 = struct ref (std::string at +4, ints at +0x50/+0x54/+0x58),
// a2 = index into a const char* table, a3 = const std::string&.
// this+0xc = std::string assigned from table[a2]; replace the 2-char marker found in it.
extern "C" int mem_00AA3D0C;
extern "C" int mem_0098F6C0;
extern "C" int mem_009548E8;
extern "C" int mem_00924FD4;
extern "C" int mem_00925014;
extern "C" int mem_00925020;
extern "C" __declspec(naked) void __fastcall fn_00697840(void* self, int edx_unused, void* a1, int a2, void* a3) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [4*eax + mem_00AA3D0C]
        lea esi, [edi + 0xc]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FD4]
        push 0x0
        push offset mem_0098F6C0
        mov ecx, esi
        call dword ptr [mem_00925014]
        test eax, eax
        mov ebx, dword ptr [esp + 0x10]
        jl skip1
        lea edx, [ebx + 0x4]
        push edx
        push 0x2
        push eax
        mov ecx, esi
        call dword ptr [mem_00925020]
skip1:
        push 0x0
        push offset mem_009548E8
        mov ecx, esi
        call dword ptr [mem_00925014]
        test eax, eax
        jl skip2
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push 0x2
        push eax
        mov ecx, esi
        call dword ptr [mem_00925020]
skip2:
        mov edx, dword ptr [ebx + 0x54]
        mov dword ptr [edi + 0x28], edx
        mov eax, dword ptr [ebx + 0x58]
        mov dword ptr [edi + 0x2c], eax
        mov ecx, dword ptr [ebx + 0x50]
        mov dword ptr [edi + 0x30], ecx
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x00693C30] sub_00693C30 (130 bytes)
extern "C" int mem_0092C510;

extern "C" __declspec(naked) void __fastcall fn_00693C30(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fld dword ptr [eax + 0x8]
        fld st(1)
        fmulp st(2), st
        fld1
        fadd st(2), st
        fld st(1)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld qword ptr [mem_0092C510]
        fld st(0)
        __asm _emit 0xde
        __asm _emit 0xf2
        fxch st(1)
        fstp dword ptr [esp]
        fld dword ptr [eax]
        fmul st(0), st
        fadd st, st(2)
        __asm _emit 0xde
        __asm _emit 0xf9
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fsub st, st(2)
        fld dword ptr [esp]
        fld st(0)
        __asm _emit 0xde
        __asm _emit 0xe4
        fld st(3)
        fmul st, st(2)
        fstp dword ptr [ecx]
        fld dword ptr [eax]
        fmulp st(4), st
        fld st(2)
        fmulp st(4), st
        fxch st(3)
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax]
        fmul st, st(2)
        fmul dword ptr [eax + 0x4]
        fld dword ptr [eax + 0x8]
        fmul st, st(2)
        faddp st(1), st
        fmul st, st(3)
        fstp dword ptr [ecx + 0x8]
        fld dword ptr [eax]
        fmulp st(2), st
        fld dword ptr [eax + 0x8]
        fmulp st(2), st
        fmul dword ptr [eax + 0x4]
        __asm _emit 0xde
        __asm _emit 0xe9
        fmulp st(1), st
        fstp dword ptr [ecx + 0xc]
        pop ecx
        ret 4
    }
}

// [0x006947B0] sub_006947B0 (135 bytes)
extern "C" int __cdecl ext_0056B670(double, double, double);
extern "C" double mem_00957788;

extern "C" __declspec(naked) int __cdecl fn_006947B0(double a1, double a2, double a3) {
    __asm {
        fld qword ptr [esp + 0x14]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x24]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x1c]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        jne RET_TRUE
        fld qword ptr [esp + 0x14]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x24]
        fsub qword ptr [mem_00957788]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x1c]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        jne RET_TRUE
        fld qword ptr [esp + 0x14]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x24]
        fadd qword ptr [mem_00957788]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x1c]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        jne RET_TRUE
        xor eax, eax
        ret
    RET_TRUE:
        mov eax, 0x1
        ret
    }
}

// [0x00699A50] sub_00699A50 (141 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __cdecl fn_00699A50(void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        cmp ebx, dword ptr [esp + 0x10]
        je L_done
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        lea edi, [ebp + 0x24]
        lea esi, [ebx + 0x28]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_loop:
        push ebp
        mov ecx, ebx
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [ebp + 0x1c]
        mov dword ptr [esi - 0xc], eax
        mov ecx, dword ptr [ebp + 0x20]
        lea edx, [esi - 0x4]
        cmp edx, edi
        mov dword ptr [esi - 0x8], ecx
        je L_next
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je L_skip1
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esi - 0x4]
        push edx
        call eax
    L_skip1:
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esi], ecx
        cmp dword ptr [edi + 0x4], 0
        je L_null
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push edi
        lea eax, [esp + 0x14]
        push eax
        call edx
        jmp L_store
    L_null:
        mov dword ptr [esp + 0x18], 0
        lea eax, [esp + 0x18]
    L_store:
        mov eax, dword ptr [eax]
        mov dword ptr [esi - 0x4], eax
    L_next:
        add ebx, 0x2c
        add esi, 0x2c
        cmp ebx, dword ptr [esp + 0x1c]
        jne L_loop
        pop edi
        pop esi
        pop ebp
    L_done:
        pop ebx
        pop ecx
        ret
    }
}

// [0x00692BA0] sub_00692BA0 (147 bytes)
extern "C" void ext_0048A120();
extern "C" void ext_0065C660();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00692BA0(void* self) {
    __asm {
        push -1
        push 0x8b5ecf
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ebp, [edi + 4]
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [edi], 0x944e74
        mov dword ptr [ebp], 0x944e44
        mov eax, dword ptr [edi + 0xc]
        lea esi, [edi + 8]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x20], 1
        je loc_692BFD
        mov ecx, dword ptr [esi + 8]
        push esi
        push ecx
        push eax
        call ext_0048A120
        mov eax, dword ptr [esi + 4]
        push eax
        call ext_006A5C5C
        add esp, 0x10
    loc_692BFD:
        mov ecx, ebp
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov byte ptr [esp + 0x20], bl
        call ext_0065C660
        mov ecx, edi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

#include <math.h>

// [0x00693F40] sub_00693F40 (148 bytes)
extern "C" void ext_00693C30();

extern "C" void __fastcall fn_00693F40(void* self, int edx_unused, const float* a1) {
    float temp[3];
    temp[0] = a1[0];
    temp[1] = a1[1];
    temp[2] = a1[2];
    temp[0] *= 0.25f;
    temp[1] *= 0.25f;
    temp[2] *= 0.25f;
    temp[0] = tanf(temp[0]);
    temp[1] = tanf(temp[1]);
    temp[2] = tanf(temp[2]);
    ((void (__thiscall*)(void*, float*))ext_00693C30)(self, temp);
}

// [0x00697690] sub_00697690 (154 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00697690(void* self, int edx_unused, float val) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x10], 0
        push edi
        jne short L_006976A3
        call ebx
    L_006976A3:
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x14]
        cmp ecx, dword ptr [eax + 8]
        jb short L_006976B0
        call ebx
    L_006976B0:
        fld dword ptr [esi + 0x18]
        mov edx, dword ptr [esi + 0x14]
        fsub dword ptr [edx]
        fstp dword ptr [esi + 0x18]
        cmp dword ptr [esi + 0x10], 0
        jne short L_006976C3
        call ebx
    L_006976C3:
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x14]
        cmp ecx, dword ptr [eax + 8]
        jb short L_006976D0
        call ebx
    L_006976D0:
        mov edx, dword ptr [esi + 0x14]
        fld dword ptr [esp + 0x10]
        fst dword ptr [edx]
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        fadd dword ptr [esi + 0x18]
        fstp dword ptr [esi + 0x18]
        jbe short L_006976E9
        call ebx
    L_006976E9:
        cmp dword ptr [esi + 0x10], 0
        jne short L_006976F1
        call ebx
    L_006976F1:
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x14]
        cmp ecx, dword ptr [eax + 8]
        jb short L_006976FE
        call ebx
    L_006976FE:
        mov eax, dword ptr [esi + 0x10]
        add dword ptr [esi + 0x14], 4
        test eax, eax
        je short L_0069770D
        cmp eax, esi
        je short L_0069770F
    L_0069770D:
        call ebx
    L_0069770F:
        cmp dword ptr [esi + 0x14], edi
        jne short L_00697724
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe short L_0069771E
        call ebx
    L_0069771E:
        mov dword ptr [esi + 0x10], esi
        mov dword ptr [esi + 0x14], edi
    L_00697724:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00698240] sub_00698240 (142 bytes)
extern "C" void ext_00664A80();
extern "C" int mem_00925134;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00698240(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 4]
        xor ebp, ebp
        cmp esi, dword ptr [edi + 8]
        jbe short L_00698256
        call dword ptr [mem_00925134]
    L_00698256:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe short L_00698264
        call dword ptr [mem_00925134]
    L_00698264:
        test edi, edi
        je short L_0069826C
        cmp edi, edi
        je short L_00698272
    L_0069826C:
        call dword ptr [mem_00925134]
    L_00698272:
        cmp esi, ebx
        je short L_006982C0
        test edi, edi
        mov ebx, dword ptr [mem_00925134]
        jne short L_00698282
        call ebx
    L_00698282:
        cmp esi, dword ptr [edi + 8]
        jb short L_00698290
        call ebx
        cmp esi, dword ptr [edi + 8]
        jb short L_00698290
        call ebx
    L_00698290:
        push 0
        lea ecx, [esi + 0x1c]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        mov eax, dword ptr [esp + 0x20]
        push eax
        call ext_00664A80
        add esp, 0x10
        add ebp, eax
        cmp esi, dword ptr [edi + 8]
        jb short L_006982BB
        call ebx
    L_006982BB:
        add esi, 0x38
        jmp short L_00698256
    L_006982C0:
        pop edi
        xor eax, eax
        pop esi
        test ebp, ebp
        pop ebp
        setg al
        pop ebx
        ret 4
    }
}

// [0x00699AE0] sub_00699AE0 (157 bytes)
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void* __cdecl fn_00699AE0(char* first, char* last, char* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        cmp dword ptr [esp + 0x8], ebx
        je near ptr ret_dest_
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        lea esi, [ebx + 0x28]
        lea edi, [ebp + 0x28]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    loop_top_:
        sub ebx, 0x2c
        sub ebp, 0x2c
        push ebx
        mov ecx, ebp
        sub esi, 0x2c
        sub edi, 0x2c
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esi - 0xc]
        mov dword ptr [edi - 0xc], eax
        mov ecx, dword ptr [esi - 0x8]
        lea edx, [edi - 0x4]
        lea eax, [esi - 0x4]
        cmp edx, eax
        mov dword ptr [edi - 0x8], ecx
        je skip_body_
        mov ecx, dword ptr [edi]
        test ecx, ecx
        je no_old_
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [edi - 0x4]
        push eax
        call edx
    no_old_:
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        cmp dword ptr [esi], 0x0
        je null_new_
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        lea eax, [esi - 0x4]
        push eax
        lea eax, [esp + 0x1c]
        push eax
        call edx
        jmp store_
    null_new_:
        mov dword ptr [esp + 0x1c], 0x0
        lea eax, [esp + 0x1c]
    store_:
        mov eax, dword ptr [eax]
        mov dword ptr [edi - 0x4], eax
    skip_body_:
        cmp ebx, dword ptr [esp + 0x14]
        jne loop_top_
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
    ret_dest_:
        mov eax, dword ptr [esp + 0x10]
        pop ebx
        ret
    }
}

// [0x00699BD0] sub_00699BD0 (157 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00699BD0(char* first, char* last, char* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        cmp ebx, dword ptr [esp + 0xc]
        je near ptr ret_dest_fwd
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        lea edi, [ebx + 0x28]
        lea esi, [ebp + 0x28]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    loop_top_fwd:
        push ebx
        mov ecx, ebp
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [edi - 0xc]
        mov dword ptr [esi - 0xc], eax
        mov ecx, dword ptr [edi - 0x8]
        lea edx, [esi - 0x4]
        lea eax, [edi - 0x4]
        cmp edx, eax
        mov dword ptr [esi - 0x8], ecx
        je skip_fwd
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je no_old_fwd
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esi - 0x4]
        push eax
        call edx
    no_old_fwd:
        mov eax, dword ptr [edi]
        mov dword ptr [esi], eax
        cmp dword ptr [edi], 0x0
        je null_new_fwd
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        lea eax, [edi - 0x4]
        push eax
        lea eax, [esp + 0x18]
        push eax
        call edx
        jmp store_fwd
    null_new_fwd:
        mov dword ptr [esp + 0x1c], 0x0
        lea eax, [esp + 0x1c]
    store_fwd:
        mov eax, dword ptr [eax]
        mov dword ptr [esi - 0x4], eax
    skip_fwd:
        add ebx, 0x2c
        add ebp, 0x2c
        add esi, 0x2c
        add edi, 0x2c
        cmp ebx, dword ptr [esp + 0x18]
        jne loop_top_fwd
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
    ret_dest_fwd:
        mov eax, dword ptr [esp + 0x10]
        pop ebx
        ret
    }
}

// [0x00699E30] sub_00699E30 (89 bytes)
extern "C" void ext_00699AE0();

extern "C" __declspec(naked) int __cdecl fn_00699E30(int a1, int a2, int a3, int a4, int a5, int a6) {
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
        call ext_00699AE0
        sub esi, ebx
        mov eax, 0x2e8ba2e9
        imul esi
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov ecx, eax
        imul ecx, ecx, 0x2c
        add esp, 0x18
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0069A090] sub_0069A090 (85 bytes)
extern "C" void ext_00699BD0();

extern "C" __declspec(naked) void* __cdecl fn_0069A090(void* first, void* last, void* dest) {
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
        call ext_00699BD0
        sub esi, ebx
        mov eax, 0x2e8ba2e9
        imul esi
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        imul eax, eax, 0x2c
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0069A130] sub_0069A130 (43 bytes)
extern "C" void ext_00699E30();

extern "C" __declspec(naked) void __fastcall fn_0069A130(void* self) {
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
        call ext_00699E30
        add esp, 0x1c
        ret
    }
}

// [0x0069A160] sub_0069A160 (89 bytes)
extern "C" void ext_00672C20();
extern "C" void ext_0069A090();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0069A160(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5) {
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
        call ext_0069A090
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edi, eax
        mov eax, dword ptr [esi + 0x8]
        push esi
        push eax
        push edi
        call ext_00672C20
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


// [0x0069A260] sub_0069A260 (59 bytes)
extern "C" void ext_0069A160();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0069A260(void* self) {
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
        jbe m69a260_ok1
        call ebp
    m69a260_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m69a260_ok2
        call ebp
    m69a260_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0069A160
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

extern "C" int mem_00B5BDB4;

// [0x006952F0] sub_006952F0 (160 bytes)
extern "C" __declspec(naked) void __cdecl fn_006952F0() {
    __asm {
        movzx eax, byte ptr [esp + 0x8]
        movzx ecx, byte ptr [esp + 0x9]
        imul eax, eax, 0x101
        movzx edx, byte ptr [esp + 0xa]
        add eax, ecx
        movzx ecx, byte ptr [esp + 0x4]
        imul eax, eax, 0x101
        add eax, edx
        imul ecx, ecx, 0x23150701
        movzx edx, byte ptr [esp + 0x5]
        imul eax, eax, 0x101
        imul edx, edx, 0x140f0601
        add eax, ecx
        movzx ecx, byte ptr [esp + 0x6]
        add eax, edx
        imul ecx, ecx, 0xa0a0501
        movzx edx, byte ptr [esp + 0x7]
        imul edx, edx, 0x4060401
        add eax, ecx
        movzx ecx, byte ptr [esp + 0xb]
        add eax, edx
        mov edx, dword ptr [esp + 0xc]
        add eax, ecx
        movzx ecx, dl
        imul ecx, ecx, 0x101
        movzx edx, dh
        add ecx, edx
        movzx edx, byte ptr [esp + 0xe]
        imul ecx, ecx, 0x101
        add ecx, edx
        movzx edx, byte ptr [esp + 0xf]
        imul ecx, ecx, 0x101
        add ecx, edx
        mov edx, dword ptr [mem_00B5BDB4]
        add eax, edx
        add edx, 0x1
        xor eax, ecx
        mov dword ptr [mem_00B5BDB4], edx
        ret
    }
}

// [0x006953F0] sub_006953F0 (34 bytes)
extern "C" void ext_006952F0();
extern "C" int mem_00925310;
extern "C" int mem_00925314;
extern "C" __declspec(naked) void __cdecl fn_006953F0() {
    __asm {
        push esi
        push edi
        push 0x0
        call dword ptr [mem_00925310]
        mov esi, eax
        mov edi, edx
        call dword ptr [mem_00925314]
        push eax
        push edi
        push esi
        call ext_006952F0
        add esp, 0x10
        pop edi
        pop esi
        ret
    }
}

// [0x0069A7B0] sub_0069A7B0 (104 bytes)
extern "C" void ext_0067FA00();

extern "C" __declspec(naked) void __fastcall fn_0069A7B0(void* self) {
    __asm {
        push -1
        push 0x8b6589
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x4], 0x928efc
        mov dword ptr [esi], 0x98fb20
        mov dword ptr [esi + 0x4], 0x98faf4
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        lea ecx, [esi + 0x28]
        mov byte ptr [esp + 0x10], 0x3
        call ext_0067FA00
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00695240] sub_00695240 (172 bytes)
extern "C" __declspec(naked) void __fastcall fn_00695240(void* self) {
    __asm {
        push esi
        push edi
        mov eax, ecx
        mov esi, 0E3h
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L695250_a:
        mov edx, dword ptr [eax + 4]
        mov edi, dword ptr [eax]
        xor edi, edx
        and edi, 7FFFFFFEh
        xor edi, dword ptr [eax]
        and edx, 1
        neg edx
        shr edi, 1
        and edx, 9908B0DFh
        xor edi, edx
        xor edi, dword ptr [eax + 634h]
        sub esi, 1
        mov dword ptr [eax], edi
        add eax, 4
        test esi, esi
        jne L695250_a
        mov esi, 18Ch
    L695285_b:
        mov edx, dword ptr [eax + 4]
        mov edi, dword ptr [eax]
        xor edi, edx
        and edi, 7FFFFFFEh
        xor edi, dword ptr [eax]
        and edx, 1
        neg edx
        shr edi, 1
        and edx, 9908B0DFh
        xor edi, edx
        xor edi, dword ptr [eax - 38Ch]
        add eax, 4
        sub esi, 1
        mov dword ptr [eax - 4], edi
        jne L695285_b
        mov esi, dword ptr [eax]
        mov edx, dword ptr [ecx]
        xor esi, edx
        and esi, 7FFFFFFEh
        xor esi, dword ptr [eax]
        and edx, 1
        shr esi, 1
        neg edx
        and edx, 9908B0DFh
        xor esi, edx
        xor esi, dword ptr [eax - 38Ch]
        pop edi
        mov dword ptr [eax], esi
        mov dword ptr [ecx + 9C4h], 270h
        mov dword ptr [ecx + 9C0h], ecx
        pop esi
        ret
    }
}

// [0x00695390] sub_00695390 (92 bytes)
extern "C" void ext_00695240();
extern "C" __declspec(naked) void __fastcall fn_00695390(void* self, int edx_unused, unsigned int seed, unsigned char flag) {
    __asm {
        cmp byte ptr [esp + 8], 0
        je short loc_695390_a
        mov byte ptr [ecx + 0x9d4], 1
    loc_695390_a:
        fldz
        push esi
        mov esi, dword ptr [esp + 8]
        fstp qword ptr [ecx + 0x9c8]
        push edi
        mov dword ptr [ecx + 0x9d0], 0
        mov eax, ecx
        mov edx, 1
        mov dword ptr [ecx], esi
        nop
    loc_695390_b:
        mov esi, dword ptr [eax]
        mov edi, esi
        shr edi, 0x1e
        xor edi, esi
        imul edi, edi, 0x6c078965
        add edi, edx
        mov dword ptr [eax + 4], edi
        add edx, 1
        add eax, 4
        cmp edx, 0x270
        jl short loc_695390_b
        call ext_00695240
        pop edi
        pop esi
        ret 8
    }
}

// [0x006920D0] sub_006920D0 (176 bytes)
extern "C" void ext_00692010();
extern "C" void ext_00692070();

struct Pair006920D0 {
    int* first;
    int* second;
    Pair006920D0() {}
    Pair006920D0(int* f, int* s) : first(f), second(s) {}
};

extern "C" Pair006920D0 __cdecl fn_006920D0(int* first, int* last, const int* value, bool (__cdecl* pred)(int, int)) {
    typedef void* (__cdecl *FnLower)(int*, int*, const int*, bool (__cdecl*)(int, int), int);
    typedef int* (__cdecl *FnUpper)(int*, int*, const int*, bool (__cdecl*)(int, int), int);

    int count = last - first;
    while (count > 0) {
        int half = count / 2;
        int* mid = first + half;
        if (pred(*mid, *value)) {
            first = mid + 1;
            count -= half + 1;
        } else if (pred(*value, *mid)) {
            count = half;
        } else {
            int* f = (int*)((FnLower)ext_00692010)(first, mid, value, pred, 0);
            int* s = ((FnUpper)ext_00692070)(mid + 1, first + count, value, pred, 0);
            return Pair006920D0(f, s);
        }
    }
    return Pair006920D0(first, first);
}

extern "C" void ext_00692000();
extern "C" void ext_00691FC0();
extern "C" int mem_00B5AE98;
extern "C" int mem_00B5BCA8;

// [0x00692180] sub_00692180 (134 bytes)
extern "C" __declspec(naked) int __cdecl fn_00692180(const char* str) {
    __asm {
        sub esp, 8
        push esi
        push 0
        push offset ext_00691FC0
        lea eax, [esp + 0x18]
        push eax
        push offset mem_00B5BCA8
        lea ecx, [esp + 0x14]
        push offset mem_00B5AE98
        push ecx
        call fn_006920D0
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0x18
        cmp eax, offset mem_00B5BCA8
        je short loc_6921fc
        sub eax, offset mem_00B5AE98
        sar eax, 2
        mov esi, eax
        cmp esi, 0x383
        ja short loc_6921fc
        push esi
        call ext_00692000
        mov ecx, dword ptr [esp + 0x14]
        add esp, 4
    loc_6921d1:
        mov dl, byte ptr [ecx]
        cmp dl, byte ptr [eax]
        jne short loc_6921f1
        test dl, dl
        je short loc_6921ed
        mov dl, byte ptr [ecx + 1]
        cmp dl, byte ptr [eax + 1]
        jne short loc_6921f1
        add ecx, 2
        add eax, 2
        test dl, dl
        jne short loc_6921d1
    loc_6921ed:
        xor eax, eax
        jmp short loc_6921f6
    loc_6921f1:
        sbb eax, eax
        sbb eax, -1
    loc_6921f6:
        test eax, eax
        mov eax, esi
        je short loc_692201
    loc_6921fc:
        mov eax, 0x384
    loc_692201:
        pop esi
        add esp, 8
        ret
    }
}

// [0x0069B920] sub_0069B920 (192 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00672D10();

extern "C" __declspec(naked) void __fastcall fn_0069B920(void* self) {
    __asm {
        push -1
        push 0x8b67bc
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        mov eax, dword ptr [esi + 0x74]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x14], 3
        je L_nofree74
        push eax
        call ext_006A5C5C
        add esp, 4
L_nofree74:
        push edi
        lea edi, [esi + 0x60]
        mov dword ptr [esi + 0x74], ebx
        mov dword ptr [esi + 0x78], ebx
        mov dword ptr [esi + 0x7c], ebx
        mov eax, dword ptr [edi + 0x4]
        cmp eax, ebx
        je L_nofree60
        mov ecx, dword ptr [edi + 0x8]
        push edi
        push ecx
        push eax
        call ext_0048A120
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x10
L_nofree60:
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov dword ptr [edi + 0xc], ebx
        mov eax, dword ptr [esi + 0x54]
        cmp eax, ebx
        pop edi
        je L_nofree54
        push eax
        call ext_006A5C5C
        add esp, 4
L_nofree54:
        lea ecx, [esi + 0x40]
        mov dword ptr [esi + 0x54], ebx
        mov dword ptr [esi + 0x58], ebx
        mov dword ptr [esi + 0x5c], ebx
        mov byte ptr [esp + 0x14], 1
        call ext_004026E0
        lea ecx, [esi + 0x30]
        mov byte ptr [esp + 0x14], bl
        call ext_00672D10
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00672D10
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00697290] sub_00697290 (172 bytes)
extern "C" void ext_004F04A0();
extern "C" void ext_006775F0();
extern "C" void ext_00678100();

extern "C" __declspec(naked) void* __fastcall fn_00697290(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8b61da
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call ext_004F04A0
        lea edi, [esi + 0x2c]
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0
        call ext_004F04A0
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
        push eax
        lea ebx, [esi + 0x58]
        push ecx
        mov ecx, ebx
        mov byte ptr [esp + 0x24], 1
        call ext_006775F0
        mov edx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x24]
        push edx
        lea ebp, [esi + 0xd4]
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0x24], 2
        call ext_006775F0
        xor eax, eax
        mov dword ptr [esi + 0x154], eax
        mov dword ptr [esi + 0x158], eax
        mov dword ptr [esi + 0x15c], eax
        push esi
        mov ecx, ebx
        mov byte ptr [esp + 0x20], 4
        call ext_00678100
        push edi
        mov ecx, ebp
        call ext_00678100
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x006943B0] sub_006943B0 (207 bytes)
extern "C" __declspec(naked) void __fastcall fn_006943B0(void* self, int edx_unused, float* out, const float* m) {
    __asm {
        fldz
        sub esp, 0x40
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x4c]
        push esi
        fst dword ptr [ebp + 0xc]
        mov esi, dword ptr [esp + 0x54]
        fst dword ptr [ebp + 0x8]
        mov ebx, ecx
        fst dword ptr [ebp + 0x4]
        push edi
        fstp dword ptr [ebp]
        mov ecx, 0x10
        lea edi, [esp + 0x10]
        rep movsd
        lea ecx, [esp + 0x10]
        call ext_00693D40
        pop edi
        fld dword ptr [esp + 0xc]
        pop esi
        fmul dword ptr [ebx]
        mov eax, ebp
        fld dword ptr [ebx + 0x4]
        fmul dword ptr [esp + 0xc]
        faddp st(1), st
        fld dword ptr [esp + 0x10]
        fmul dword ptr [ebx + 0x8]
        faddp st(1), st
        fld dword ptr [esp + 0x14]
        fmul dword ptr [ebx + 0xc]
        faddp st(1), st
        fstp dword ptr [ebp]
        fld dword ptr [esp + 0x18]
        fmul dword ptr [ebx]
        fld dword ptr [ebx + 0x4]
        fmul dword ptr [esp + 0x1c]
        faddp st(1), st
        fld dword ptr [esp + 0x20]
        fmul dword ptr [ebx + 0x8]
        faddp st(1), st
        fld dword ptr [esp + 0x24]
        fmul dword ptr [ebx + 0xc]
        faddp st(1), st
        fstp dword ptr [ebp + 0x4]
        fld dword ptr [esp + 0x28]
        fmul dword ptr [ebx]
        fld dword ptr [ebx + 0x4]
        fmul dword ptr [esp + 0x2c]
        faddp st(1), st
        fld dword ptr [esp + 0x30]
        fmul dword ptr [ebx + 0x8]
        faddp st(1), st
        fld dword ptr [esp + 0x34]
        fmul dword ptr [ebx + 0xc]
        faddp st(1), st
        fstp dword ptr [ebp + 0x8]
        fld dword ptr [esp + 0x38]
        fmul dword ptr [ebx]
        fld dword ptr [ebx + 0x4]
        fmul dword ptr [esp + 0x3c]
        faddp st(1), st
        fld dword ptr [esp + 0x40]
        fmul dword ptr [ebx + 0x8]
        faddp st(1), st
        fld dword ptr [esp + 0x44]
        fmul dword ptr [ebx + 0xc]
        faddp st(1), st
        fstp dword ptr [ebp + 0xc]
        pop ebp
        pop ebx
        add esp, 0x40
        ret 8
    }
}

// [0x00694720] sub_00694720 (131 bytes)
extern "C" void ext_00487A30();

extern "C" __declspec(naked) void __fastcall fn_00694720(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        fld dword ptr [edi]
        push 0x98c658
        sub esp, 0x8
        mov esi, ecx
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi]
        lea ecx, [esp + 0x1c]
        fstp dword ptr [esp]
        call ext_00487A30
        fld dword ptr [edi + 0x4]
        push 0x98c648
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [esp]
        call ext_00487A30
        fld dword ptr [edi + 0x8]
        push 0x98c638
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [esp]
        call ext_00487A30
        fld dword ptr [edi + 0xc]
        push 0x98c788
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp]
        call ext_00487A30
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x006940C0] sub_006940C0 (212 bytes)
extern "C" void ext_00693CC0();
extern "C" void ext_006A7250();
extern "C" void ext_006A7256();
extern "C" float mem_0098F374;

extern "C" __declspec(naked) void __fastcall fn_006940C0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x14
        fld dword ptr [ecx]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [esp + 0x10]
        fld1
        fcomp dword ptr [esp + 0x4]
        fnstsw ax
        test ah, 0x5
        jp L_skip_call
        lea ecx, [esp + 0x4]
        call ext_00693CC0
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x10]
    L_skip_call:
        fld dword ptr [esp + 0x4]
        call ext_006A7256
        fstp dword ptr [esp]
        fld dword ptr [esp]
        mov eax, dword ptr [esp + 0x1c]
        fadd st(0), st
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fmul st(0), st
        fld1
        fsubrp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        call ext_006A7250
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [mem_0098F374]
        fld dword ptr [esp + 0x1c]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        mov eax, dword ptr [esp + 0x18]
        jp L_div
        fstp st(0)
        fld1
        fstp dword ptr [eax]
        fldz
        fst dword ptr [eax + 0x4]
        fstp dword ptr [eax + 0x8]
        add esp, 0x14
        ret 8
    L_div:
        fld dword ptr [esp + 0x8]
        fdiv st, st(1)
        fstp dword ptr [eax]
        fld dword ptr [esp + 0xc]
        fdiv st, st(1)
        fstp dword ptr [eax + 0x4]
        fdivr dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x8]
        add esp, 0x14
        ret 8
    }
}

// [0x0069A830] sub_0069A830 (212 bytes)
extern "C" void ext_0048B4C0();

extern "C" __declspec(naked) void __fastcall fn_0069A830(void* self) {
    __asm {
        push -1
        push 0x8b65e5
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ebp, [edi + 4]
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [edi], 0x98fb20
        mov dword ptr [ebp], 0x98faf4
        lea ecx, [edi + 0x28]
        mov dword ptr [esp + 0x20], 3
        call ext_0048B4C0
        mov eax, dword ptr [edi + 0x1c]
        lea esi, [edi + 0x18]
        xor ebx, ebx
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 2
        je loc_69A89A
        mov ecx, dword ptr [esi + 8]
        push esi
        push ecx
        push eax
        call ext_0048A120
        mov eax, dword ptr [esi + 4]
        push eax
        call ext_006A5C5C
        add esp, 0x10
    loc_69A89A:
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov eax, dword ptr [edi + 0xc]
        cmp eax, ebx
        lea esi, [edi + 8]
        mov byte ptr [esp + 0x20], 1
        je loc_69A8CE
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 8]
        push edx
        push esi
        push ecx
        push eax
        call ext_00672C20
        mov eax, dword ptr [esi + 4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    loc_69A8CE:
        mov ecx, ebp
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov byte ptr [esp + 0x20], bl
        call ext_0065C660
        mov ecx, edi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00696A90] sub_00696A90 (215 bytes)
extern "C" int mem_00924FE8;
extern "C" int mem_00924FB0;
extern "C" int mem_009250EC;
extern "C" int mem_009250C0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) bool __cdecl fn_00696A90(void* in, void* token) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE8]
        mov ebx, dword ptr [esp + 0x40]
        mov ebp, dword ptr [mem_00924FB0]
        lea eax, [esp + 0x10]
        push ebx
        push eax
        mov dword ptr [esp + 0x3c], 0
        call ebp
        add esp, 8
        test al, al
        je loc_696B19
        mov esi, dword ptr [esp + 0x3c]
        mov edi, dword ptr [mem_009250EC]
    loc_696AE1:
        lea ecx, [esp + 0x10]
        push ecx
        push esi
        call edi
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 4]
        add esp, 8
        add ecx, eax
        call dword ptr [mem_009250C0]
        test al, al
        jne loc_696B40
        push esi
        call ext_006968D0
        add esp, 4
        test al, al
        je loc_696B40
        lea eax, [esp + 0x10]
        push ebx
        push eax
        call ebp
        add esp, 8
        test al, al
        jne loc_696AE1
    loc_696B19:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    loc_696B40:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00699D50] sub_00699D50 (216 bytes)
// try { for (n = count; n; --n, dst += 0x2c) { if (dst) { ctor(dst, src); dst->i = src->i; dst->j = src->j;
//       fetch src->obj virtual value into dst->k; dst->obj = src->obj; } } }
// catch (...) { destroy [begin, dst) strings; throw; }
// Naked: MSVC /EHsc treats extern "C" callees as nothrow, which drops the try block,
// so the SEH frame is written out by hand (same pattern as fn_006887E0).
extern "C" int mem_00924FE0;
extern "C" void ext_00672590();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_00699D50(void* dst, unsigned int count, const void* src) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x008b652a
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr [ebp + 0x10]
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x18], esi
        mov dword ptr [ebp - 0x4], 0x0
    loop_top:
        cmp dword ptr [ebp + 0xc], 0x0
        jbe epilogue
        mov dword ptr [ebp - 0x1c], esi
        mov dword ptr [ebp - 0x20], esi
        test esi, esi
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        push ebx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [ebx + 0x1c]
        mov dword ptr [esi + 0x1c], eax
        mov ecx, dword ptr [ebx + 0x20]
        lea edi, [ebx + 0x24]
        mov dword ptr [esi + 0x20], ecx
        cmp dword ptr [edi + 0x4], 0x0
        mov byte ptr [ebp - 0x4], 0x2
        je null_obj
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push edi
        lea eax, [ebp - 0x24]
        push eax
        call edx
        jmp store_val
    null_obj:
        mov dword ptr [ebp - 0x14], 0x0
        lea eax, [ebp - 0x14]
    store_val:
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 0x24], eax
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x28], ecx
    skip_ctor:
        sub dword ptr [ebp + 0xc], 0x1
        add esi, 0x2c
        mov byte ptr [ebp - 0x4], 0x0
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
    catch_funclet:
        mov esi, dword ptr [ebp - 0x18]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je throw_now
        jmp dtor_loop
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    dtor_loop:
        mov ecx, esi
        call ext_00672590
        add esi, 0x2c
        cmp esi, edi
        jne dtor_loop
    throw_now:
        push 0x0
        push 0x0
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

// [0x00699C70] sub_00699C70 (218 bytes)
// try { for (src = begin; src != end; ++src, ++dst) { ctor(dst, src); dst->i = src->i; dst->j = src->j;
//       fetch src->obj virtual value into dst->k; dst->obj = src->obj; } } return dst_end;
// catch (...) { destroy [dst_begin, dst) strings; throw; }
// Naked: same SEH frame pattern as fn_00699D50 (MSVC /EHsc drops try for extern "C" callees).
extern "C" int mem_00924FE0;
extern "C" void ext_00672590();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void* __cdecl fn_00699C70(void* begin, const void* end, void* dst) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x008b64fa
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr [ebp + 0x8]
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], 0x0
    loop_top:
        cmp ebx, dword ptr [ebp + 0xc]
        je epilogue
        mov dword ptr [ebp - 0x18], esi
        mov dword ptr [ebp - 0x1c], esi
        test esi, esi
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        push ebx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [ebx + 0x1c]
        mov dword ptr [esi + 0x1c], eax
        mov ecx, dword ptr [ebx + 0x20]
        lea edi, [ebx + 0x24]
        mov dword ptr [esi + 0x20], ecx
        cmp dword ptr [edi + 0x4], 0x0
        mov byte ptr [ebp - 0x4], 0x2
        je null_obj
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push edi
        lea eax, [ebp - 0x20]
        push eax
        call edx
        jmp store_val
    null_obj:
        mov dword ptr [ebp + 0x8], 0x0
        lea eax, [ebp + 0x8]
    store_val:
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 0x24], eax
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x28], ecx
    skip_ctor:
        add esi, 0x2c
        mov byte ptr [ebp - 0x4], 0x0
        mov dword ptr [ebp + 0x10], esi
        add ebx, 0x2c
        jmp loop_top
    catch_funclet:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je throw_now
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    dtor_loop:
        mov ecx, esi
        call ext_00672590
        add esi, 0x2c
        cmp esi, edi
        jne dtor_loop
    throw_now:
        push 0x0
        push 0x0
        call ext_006A6DD2
    epilogue:
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

// [0x0069A1C0] sub_0069A1C0 (41 bytes)
extern "C" void ext_00699C70();

extern "C" __declspec(naked) void __fastcall fn_0069A1C0(void* self) {
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
        call ext_00699C70
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0069A0F0] sub_0069A0F0 (55 bytes)
extern "C" void ext_00699D50();

extern "C" __declspec(naked) int __fastcall fn_0069A0F0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_00699D50
        mov eax, esi
        imul eax, eax, 0x2c
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00693FE0] sub_00693FE0 (222 bytes)
extern "C" void ext_006A7250();
extern "C" int mem_0098F398;

extern "C" __declspec(naked) void __fastcall fn_00693FE0(void* self, int edx_unused, float* out) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0x4]
        fld dword ptr [esi]
        fmul st(0), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fcom qword ptr [mem_0098F398]
        fnstsw ax
        test ah, 0x41
        jne short L_small
        call ext_006A7250
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fld1
        fadd st(1), st
        fld st(2)
        fmulp st(2), st
        fdivrp st(1), st
        fstp dword ptr [esp + 0x4]
        fldz
        fcomp dword ptr [esi]
        fnstsw ax
        fld dword ptr [esi]
        test ah, 0x5
        jp short L_neg
        faddp st(1), st
        jmp short L_div
L_neg:
        fsubrp st(1), st
L_div:
        fdivr dword ptr [esi + 0x4]
        mov eax, dword ptr [esp + 0xc]
        fstp dword ptr [eax]
        fld dword ptr [esi + 0x8]
        fmul dword ptr [esi + 0x4]
        fld dword ptr [esi]
        fmul dword ptr [esi + 0xc]
        fsubp st(1), st
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esi]
        fmul dword ptr [esi + 0x8]
        fld dword ptr [esi + 0xc]
        fmul dword ptr [esi + 0x4]
        pop esi
        faddp st(1), st
        fmulp st(1), st
        fstp dword ptr [eax + 0x8]
        pop ecx
        ret 0x4
L_small:
        fld1
        fsubrp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        call ext_006A7250
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0xc]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp + 0x4]
        fldz
        fstp dword ptr [eax]
        fld dword ptr [esi + 0xc]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fchs
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [eax + 0x4]
        fmul dword ptr [esi + 0x8]
        pop esi
        fstp dword ptr [eax + 0x8]
        pop ecx
        ret 0x4
    }
}

// [0x006946C0] sub_006946C0 (88 bytes)
extern "C" void ext_00693FE0();
extern "C" int mem_0093F7B0;
extern "C" void __stdcall fn_006946C0(float* a1) {
    ((void (__stdcall*)(float*))ext_00693FE0)(a1);
    float t = (float)atan((double)a1[0]);
    a1[0] = (float)(t * *(double*)&mem_0093F7B0);
    t = (float)atan((double)a1[1]);
    a1[1] = (float)(t * *(double*)&mem_0093F7B0);
    t = (float)atan((double)a1[2]);
    a1[2] = (float)(t * *(double*)&mem_0093F7B0);
}

// [0x00699FA0] sub_00699FA0 (232 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00699FA0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr [ebp + 0xc]
        cmp esi, dword ptr [ebp + 0x10]
        push edi
        jbe loc_699FB7
        call dword ptr [mem_00925134]
    loc_699FB7:
        mov ebx, esi
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loc_699FC0:
        mov esi, dword ptr [ebp + 0x10]
        cmp dword ptr [ebp + 0xc], esi
        lea edi, [ebp + 0x8]
        jbe loc_699FD1
        call dword ptr [mem_00925134]
    loc_699FD1:
        test edi, edi
        je loc_699FD9
        cmp edi, edi
        je loc_699FDF
    loc_699FD9:
        call dword ptr [mem_00925134]
    loc_699FDF:
        cmp ebx, esi
        je loc_69A07E
        test edi, edi
        jne loc_699FF1
        call dword ptr [mem_00925134]
    loc_699FF1:
        cmp ebx, dword ptr [edi + 0x8]
        jb loc_699FFC
        call dword ptr [mem_00925134]
    loc_699FFC:
        mov edi, dword ptr [ebx + 0x1c]
        cmp edi, dword ptr [esp + 0x1c]
        jl loc_69A068
        mov ecx, dword ptr [ebp + 0x1c]
        test ecx, ecx
        je loc_69A018
        mov eax, dword ptr [ebp + 0x20]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb loc_69A01E
    loc_69A018:
        call dword ptr [mem_00925134]
    loc_69A01E:
        mov eax, dword ptr [ebp + 0x1c]
        lea esi, [ebx + 0x24]
        lea edi, [eax + 8*edi]
        cmp edi, esi
        je loc_69A068
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        je loc_69A03A
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x78]
        push edi
        call eax
    loc_69A03A:
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [edi + 0x4], ecx
        cmp dword ptr [esi + 0x4], 0x0
        je loc_69A058
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        lea eax, [esp + 0x18]
        push eax
        call edx
        jmp loc_69A064
    loc_69A058:
        mov dword ptr [esp + 0x10], 0x0
        lea eax, [esp + 0x10]
    loc_69A064:
        mov eax, dword ptr [eax]
        mov dword ptr [edi], eax
    loc_69A068:
        cmp ebx, dword ptr [ebp + 0x10]
        lea eax, [ebp + 0x8]
        jb loc_69A076
        call dword ptr [mem_00925134]
    loc_69A076:
        add ebx, 0x2c
        jmp loc_699FC0
    loc_69A07E:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x0069C220] sub_0069C220 (262 bytes)
extern "C" __declspec(naked) void __fastcall fn_0069C220(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15) {
    __asm {
        push -1
        push 0x008B6857
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov edx, dword ptr [esp + 0x30]
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x34]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 0x38]
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [esp + 0x3c]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [esp + 0x40]
        mov dword ptr [eax + 0x10], ecx
        mov ecx, dword ptr [esp + 0x44]
        mov dword ptr [eax + 0x14], edx
        mov edx, dword ptr [esp + 0x48]
        mov dword ptr [eax + 0x18], ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x1c], edx
        mov dword ptr [eax + 0x24], ecx
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [eax + 0x2c], ecx
        mov dword ptr [eax + 0x34], ecx
        mov dword ptr [eax + 0x38], ecx
        mov dword ptr [eax + 0x3c], ecx
        mov dword ptr [eax + 0x44], ecx
        mov dword ptr [eax + 0x48], ecx
        mov dword ptr [eax + 0x4c], ecx
        mov dword ptr [eax + 0x54], ecx
        mov dword ptr [eax + 0x58], ecx
        mov dword ptr [eax + 0x5c], ecx
        mov dword ptr [eax + 0x64], ecx
        mov dword ptr [eax + 0x68], ecx
        mov dword ptr [eax + 0x6c], ecx
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x74], ecx
        mov dword ptr [eax + 0x78], ecx
        mov dword ptr [eax + 0x7c], ecx
        mov dword ptr [eax + 0x80], edx
        mov edx, dword ptr [esp + 0x4c]
        mov dword ptr [eax + 0x84], edx
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [eax + 0x88], edx
        mov edx, dword ptr [esp + 0x28]
        mov dword ptr [eax + 0x8c], edx
        mov dl, byte ptr [esp + 0x20]
        mov byte ptr [eax + 0x90], dl
        mov dl, byte ptr [esp + 0x24]
        mov byte ptr [eax + 0x91], dl
        mov dl, byte ptr [esp + 0x2c]
        mov byte ptr [eax + 0x93], cl
        mov dword ptr [eax + 0x98], ecx
        mov dword ptr [eax + 0x9c], ecx
        mov dword ptr [eax + 0xa0], ecx
        mov dword ptr [eax + 0xa4], ecx
        mov ecx, dword ptr [esp + 4]
        mov byte ptr [eax + 0x92], dl
        mov dword ptr [eax + 0x94], 0xffffffff
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x3c
    }
}

// [0x00696980] sub_00696980 (267 bytes)
extern "C" int mem_0092500C;
extern "C" int mem_00924FF4;
extern "C" void ext_006968D0();

extern "C" __declspec(naked) bool __cdecl fn_00696980(void* in, void* token) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE8]
        mov ebx, dword ptr [esp + 0x40]
        mov ebp, dword ptr [mem_00924FB0]
        lea eax, [esp + 0x10]
        push ebx
        push eax
        mov dword ptr [esp + 0x3c], 0
        call ebp
        add esp, 8
        test al, al
        je L696980_exit_false_empty
        mov esi, dword ptr [esp + 0x3c]
        mov edi, dword ptr [mem_009250EC]
    L696980_loop:
        lea ecx, [esp + 0x10]
        push ecx
        push esi
        call edi
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 4]
        add esp, 8
        add ecx, eax
        call dword ptr [mem_009250C0]
        test al, al
        lea ecx, [esp + 0x10]
        jne L696980_exit_false
        push 0
        call dword ptr [mem_0092500C]
        cmp byte ptr [eax], 0x23
        jne L696980_next
        push esi
        call ext_006968D0
        add esp, 4
        test al, al
        je L696980_exit_false_c
    L696980_next:
        lea eax, [esp + 0x10]
        push ebx
        push eax
        call ebp
        add esp, 8
        test al, al
        jne L696980_loop
    L696980_exit_false_empty:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    L696980_exit_false:
        mov dword ptr [esp + 0x34], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    L696980_exit_false_c:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x006999F0] sub_006999F0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B5C9C4;
extern "C" int mem_00B5C9A8;

extern "C" __declspec(naked) void __fastcall fn_006999F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b64ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5C9C4], al
        jne skip_init
        or dword ptr [mem_00B5C9C4], eax
        push 0xaa3db0
        push offset mem_00B5C9A8
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x922000
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5C9A8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00698960] sub_00698960 (76 bytes)
extern "C" void ext_006A3200();
extern "C" int mem_00925134;
extern "C" int mem_009250B0;

extern "C" __declspec(naked) void __fastcall fn_00698960(void* self, int edx_unused, void* out) {
    __asm {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        jne L_698971
        xor esi, esi
        jmp L_698976
L_698971:
        mov esi, dword ptr [edi + 0x8]
        sub esi, eax
L_698976:
        test eax, eax
        je L_698981
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        jne L_698987
L_698981:
        call dword ptr [mem_00925134]
L_698987:
        mov ebx, dword ptr [esp + 0x14]
        mov edx, dword ptr [edi + 0x4]
        push 0x0
        push ebx
        push esi
        push edx
        call ext_006A3200
        add esp, 0x10
        push 0x7f
        mov ecx, ebx
        call dword ptr [mem_009250B0]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x006936D0] sub_006936D0 (324 bytes)
extern "C" __declspec(naked) void __fastcall fn_006936D0(void* self) {
    __asm {
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x20]
        fld dword ptr [ecx]
        fstp dword ptr [esp]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x8]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [eax + 0x4]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        _emit 0xde
        _emit 0xe1
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax]
        fmul st, st(2)
        fld dword ptr [eax + 0x8]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        _emit 0xde
        _emit 0xe1
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x4]
        fmul st, st(1)
        fld dword ptr [eax]
        fmul st, st(3)
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp]
        fld st(0)
        fadd st, st(1)
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp]
        fld dword ptr [esp + 0x14]
        fmul st, st(1)
        fstp dword ptr [esp + 0x4]
        fmul dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x8]
        fld st(2)
        fld st(2)
        fld st(5)
        fld st(3)
        fmulp st(4), st
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        fmul st, st(1)
        fadd dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x4]
        fmul dword ptr [eax + 0x8]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fmul st, st(2)
        fld dword ptr [eax]
        fmul st, st(2)
        faddp st(1), st
        fld dword ptr [eax + 0x8]
        fmul st, st(4)
        faddp st(1), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fadd st(0), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x4]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x4]
        fmulp st(1), st
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        add esp, 0x1c
        ret 0x4
    }
}

// [0x00696C30] sub_00696C30 (352 bytes)
extern "C" int mem_00924EA8; extern "C" int mem_00924FE8; extern "C" int mem_009250E4; extern "C" int mem_009250A8; extern "C" int mem_00925134; extern "C" int mem_00924E44; extern "C" int mem_009250E8; extern "C" int mem_009250EC; extern "C" int mem_00924FC4; extern "C" int mem_00924FD8; extern "C" int mem_00924EC0; extern "C" int mem_00924FF4;
extern "C" void ext_008B56F9();
extern "C" __declspec(naked) bool __cdecl fn_00696C30(void* a1, void* a2, void* a3) {
    __asm {
        mov eax, fs:[0]
        mov ecx, [esp+8]
        push -1
        push offset ext_008B56F9
        push eax
        mov fs:[0], esp
        sub esp, 0x24
        push ebp
        call dword ptr [mem_00924EA8]
        mov ebp, [esp+0x40]
        cmp dword ptr [ebp+0x14], 0
        jne L1
        xor al, al
        pop ebp
        mov ecx, [esp+0x24]
        mov fs:[0], ecx
        add esp, 0x30
        ret
    L1:
        push ebx
        push esi
        push edi
        lea ecx, [esp+0x18]
        call dword ptr [mem_00924FE8]
        mov edi, [esp+0x44]
        mov ecx, edi
        mov dword ptr [esp+0x3c], 0
        call dword ptr [mem_009250E4]
        mov bl, al
        cmp bl, -1
        mov [esp+0x4c], bl
        je L5
        nop
    L2:
        lea eax, [esp+0x10]
        push eax
        mov ecx, ebp
        call dword ptr [mem_009250A8]
        mov esi, eax
        mov eax, [esi]
        cmp eax, -2
        je L3
        test eax, eax
        jne L2b
        call dword ptr [mem_00925134]
    L2b:
        mov ecx, [esi]
        call dword ptr [mem_00924E44]
        mov ecx, [esi]
        add eax, [ecx+0x14]
        cmp [esi+4], eax
        jb L3
        call dword ptr [mem_00925134]
    L3:
        mov esi, [esi+4]
        cmp bl, [esi]
        jne L4
        mov edx, [esp+0x4c]
        push edx
        mov ecx, edi
        call dword ptr [mem_009250E8]
        lea eax, [esp+0x18]
        push eax
        push edi
        call dword ptr [mem_009250EC]
        lea ecx, [esp+0x20]
        push ebp
        push ecx
        call dword ptr [mem_00924FC4]
        add esp, 0x10
        test al, al
        jne L6
        mov ecx, [esp+0x48]
        lea edx, [esp+0x18]
        push edx
        call dword ptr [mem_00924FD8]
        jmp L4b
    L4:
        mov eax, [esp+0x4c]
        mov ecx, [esp+0x48]
        push eax
        call dword ptr [mem_00924EC0]
    L4b:
        mov ecx, edi
        call dword ptr [mem_009250E4]
        mov bl, al
        cmp bl, -1
        mov [esp+0x4c], bl
        jne L2
    L5:
        lea ecx, [esp+0x18]
        mov dword ptr [esp+0x3c], -1
        call dword ptr [mem_00924FF4]
        pop edi
        pop esi
        pop ebx
        xor al, al
        pop ebp
        mov ecx, [esp+0x24]
        mov fs:[0], ecx
        add esp, 0x30
        ret
    L6:
        lea ecx, [esp+0x18]
        mov dword ptr [esp+0x3c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, [esp+0x34]
        pop edi
        pop esi
        pop ebx
        mov al, 1
        pop ebp
        mov fs:[0], ecx
        add esp, 0x30
        ret
    }
}

// [0x00694C10] sub_00694C10 (355 bytes)
extern "C" void ext_00554420();
extern "C" void ext_00658880();
extern "C" void ext_0067C3D0();
extern "C" void ext_0067DD40();
extern "C" void ext_006947B0();
extern "C" int mem_00B5BD5C;
extern "C" int mem_0098C630;
extern "C" int mem_00B5BD58;
extern "C" int mem_0098F3E8;
extern "C" int mem_00B5BD54;
extern "C" int mem_0098F3E0;
extern "C" int mem_00993868;
extern "C" __declspec(naked) void __fastcall fn_00694C10(void* self, int edx_unused, float* a1) {
    __asm {
        mov eax, dword ptr [mem_00B5BD5C]
        sub esp, 0x18
        test al, 0x1
        push esi
        mov esi, ecx
        jne L_33
        fld dword ptr [mem_0098C630]
        or eax, 0x1
        fstp dword ptr [mem_00B5BD58]
        mov dword ptr [mem_00B5BD5C], eax
L_33:
        test al, 0x2
        jne L_4B
        fld dword ptr [mem_0098F3E8]
        or eax, 0x2
        fstp dword ptr [mem_00B5BD54]
        mov dword ptr [mem_00B5BD5C], eax
L_4B:
        mov eax, dword ptr [esp + 0x20]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0xc]
        fldz
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fld dword ptr [mem_00B5BD54]
        test ah, 0x5
        jp L_91
L_78:
        fld st(0)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fcom st(2)
        fnstsw ax
        fxch st(1)
        test ah, 0x5
        jnp L_78
L_91:
        fld dword ptr [esp + 0x8]
        fcom st(3)
        fnstsw ax
        test ah, 0x5
        jp L_B1
L_9E:
        fadd st, st(1)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fcom st(3)
        fnstsw ax
        test ah, 0x5
        jnp L_9E
L_B1:
        fstp st(0)
        fld dword ptr [esp + 0xc]
        fcom st(3)
        fnstsw ax
        test ah, 0x5
        jp L_D3
L_C0:
        fadd st, st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcom st(3)
        fnstsw ax
        test ah, 0x5
        jnp L_C0
L_D3:
        fstp st(1)
        push ecx
        fstp st(0)
        fxch st(1)
        fst dword ptr [esp + 0x14]
        fld1
        fstp dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        call ext_00658880
        fld qword ptr [mem_0098F3E0]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [mem_00B5BD58]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x24]
        fstp qword ptr [esp]
        call ext_006947B0
        add esp, 0x18
        test al, al
        push ecx
        je L_32
        fld dword ptr [mem_00B5BD58]
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0067DD40
        pop esi
        add esp, 0x18
        ret 0x4
L_32:
        fld dword ptr [esp + 0xc]
        lea ecx, [esp + 0x14]
        fstp dword ptr [esp]
        call ext_0067C3D0
        fld dword ptr [esp + 0xc]
        fcom qword ptr [mem_00993868]
        fnstsw ax
        test ah, 0x41
        jne L_6A
        push ecx
        lea eax, [esp + 0x14]
        fstp dword ptr [esp]
        push eax
        mov ecx, esi
        call ext_00554420
        pop esi
        add esp, 0x18
        ret 0x4
L_6A:
        fstp st(0)
        pop esi
        add esp, 0x18
        ret 0x4
    }
}

// [0x00694900] sub_00694900 (361 bytes)
extern "C" __declspec(naked) void __fastcall fn_00694900(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 68h
        fld dword ptr [ecx]
        fld dword ptr [ecx+4]
        fld dword ptr [ecx+8]
        fstp qword ptr [esp+30h]
        fld dword ptr [ecx+0ch]
        fld dword ptr [ecx+10h]
        fst qword ptr [esp+40h]
        fld dword ptr [ecx+14h]
        fst qword ptr [esp+48h]
        fld dword ptr [ecx+18h]
        fld dword ptr [ecx+1ch]
        fstp qword ptr [esp+58h]
        fld dword ptr [ecx+20h]
        fst qword ptr [esp+60h]
        fld st(0)
        fmulp st(4), st
        fld qword ptr [esp+58h]
        fmul st, st(3)
        _emit 0xde
        _emit 0xec
        fxch st(3)
        fstp qword ptr [esp]
        fld qword ptr [esp+58h]
        fld qword ptr [esp+30h]
        fmul st(1), st
        fxch st(1)
        fstp qword ptr [esp+10h]
        fxch st(3)
        fmul st, st(5)
        fstp qword ptr [esp+8]
        fld st(1)
        fmul st, st(5)
        fld qword ptr [esp+40h]
        fmulp st(4), st
        _emit 0xde
        _emit 0xe3
        fxch st(2)
        fst qword ptr [esp+18h]
        fld qword ptr [esp+10h]
        fsub qword ptr [esp+8]
        fmul st, st(4)
        fld qword ptr [esp]
        fmul st, st(7)
        faddp st(1), st
        fxch st(1)
        fmul st, st(3)
        faddp st(1), st
        fldz
        fucomp st(1)
        fnstsw ax
        test ah, 44h
        jp nonzero_path
        fstp st(0)
        xor al, al
        fstp st(4)
        fstp st(1)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld1
        fst dword ptr [ecx]
        fldz
        fst dword ptr [ecx+4]
        fst dword ptr [ecx+8]
        fst dword ptr [ecx+0ch]
        fst dword ptr [ecx+14h]
        fst dword ptr [ecx+18h]
        fstp dword ptr [ecx+1ch]
        fst dword ptr [ecx+10h]
        fstp dword ptr [ecx+20h]
        mov esp, ebp
        pop ebp
        ret
nonzero_path:
        fld1
        mov al, 1
        _emit 0xde
        _emit 0xf1
        fld qword ptr [esp]
        fmul st, st(1)
        fstp dword ptr [ecx]
        fld qword ptr [esp+60h]
        fmul st, st(4)
        fld st(3)
        fmulp st(3), st
        _emit 0xde
        _emit 0xe2
        fmul st(1), st
        fxch st(1)
        fchs
        fstp dword ptr [ecx+0ch]
        fld qword ptr [esp+58h]
        fmul st, st(3)
        fld st(2)
        fmul qword ptr [esp+40h]
        _emit 0xde
        _emit 0xe9
        fmul st, st(1)
        fstp dword ptr [ecx+18h]
        fld qword ptr [esp+8]
        _emit 0xdc
        _emit 0x64
        _emit 0x24
        _emit 0x10
        fmul st, st(1)
        fchs
        fstp dword ptr [ecx+4]
        fld qword ptr [esp+60h]
        fmul st, st(5)
        fld st(2)
        fld qword ptr [esp+30h]
        fmul st(1), st
        fxch st(2)
        _emit 0xde
        _emit 0xe1
        fmul st, st(2)
        fstp dword ptr [ecx+10h]
        fld qword ptr [esp+58h]
        fmul st, st(6)
        fxch st(3)
        fmul st, st(5)
        _emit 0xde
        _emit 0xeb
        fxch st(2)
        fmul st, st(1)
        fchs
        fstp dword ptr [ecx+1ch]
        fld qword ptr [esp+18h]
        fmul st, st(1)
        fstp dword ptr [ecx+8]
        fld qword ptr [esp+48h]
        fmul st, st(5)
        fld st(3)
        fmulp st(3), st
        _emit 0xde
        _emit 0xe2
        fmul st(1), st
        fxch st(1)
        fchs
        fstp dword ptr [ecx+14h]
        fld qword ptr [esp+40h]
        fmulp st(4), st
        fxch st(1)
        fmulp st(2), st
        fxch st(2)
        _emit 0xde
        _emit 0xe1
        fmulp st(1), st
        fstp dword ptr [ecx+20h]
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00695460] sub_00695460 (365 bytes)
extern "C" int mem_0094FF78; extern "C" int mem_0092C510; extern "C" int mem_0093BD38; extern "C" int mem_009548F0;
extern "C" void ext_00695240(); extern "C" void ext_006A7250(); extern "C" void ext_006A73C6();
extern "C" __declspec(naked) void __fastcall fn_00695460(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF8h
        sub esp, 18h
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 9D0h], 0
        push edi
        je L_gen
        fld qword ptr [esi + 9C8h]
        mov dword ptr [esi + 9D0h], 0
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    L_gen:
        fld qword ptr [mem_0094FF78]
        or edi, 0FFFFFFFFh
        fld qword ptr [mem_0092C510]
        fld1
        jmp L_a
    L_loop:
        fstp st(0)
    L_a:
        cmp dword ptr [esi + 9C4h], 0
        jne L_b
        mov ecx, esi
        call ext_00695240
    L_b:
        mov ecx, dword ptr [esi + 9C0h]
        add dword ptr [esi + 9C4h], edi
        mov eax, dword ptr [ecx]
        add ecx, 4
        mov dword ptr [esi + 9C0h], ecx
        mov ecx, eax
        shr ecx, 0Bh
        xor eax, ecx
        mov edx, dword ptr [esi + 9C4h]
        mov ecx, eax
        and ecx, 0FF3A58ADh
        shl ecx, 7
        xor eax, ecx
        mov ecx, eax
        and ecx, 0FFFFDF8Ch
        shl ecx, 0Fh
        xor eax, ecx
        mov ecx, eax
        shr ecx, 12h
        xor ecx, eax
        test ecx, ecx
        mov dword ptr [esp + 8], ecx
        fild dword ptr [esp + 8]
        jge L_c
        fadd qword ptr [mem_0093BD38]
    L_c:
        test edx, edx
        fmul st, st(3)
        fmul st, st(2)
        fsub st, st(1)
        fst qword ptr [esp + 10h]
        jne L_d
        mov ecx, esi
        call ext_00695240
    L_d:
        mov ecx, dword ptr [esi + 9C0h]
        add dword ptr [esi + 9C4h], edi
        mov eax, dword ptr [ecx]
        add ecx, 4
        mov edx, eax
        shr edx, 0Bh
        xor eax, edx
        mov dword ptr [esi + 9C0h], ecx
        mov ecx, eax
        and ecx, 0FF3A58ADh
        shl ecx, 7
        xor eax, ecx
        mov edx, eax
        and edx, 0FFFFDF8Ch
        shl edx, 0Fh
        xor eax, edx
        mov ecx, eax
        shr ecx, 12h
        xor ecx, eax
        test ecx, ecx
        mov dword ptr [esp + 8], ecx
        fild dword ptr [esp + 8]
        jge L_e
        fadd qword ptr [mem_0093BD38]
    L_e:
        fmul st, st(4)
        fmul st, st(3)
        fsub st, st(2)
        fst qword ptr [esp + 18h]
        fmul st(0), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fst qword ptr [esp + 8]
        fcom st(1)
        fnstsw ax
        test ah, 1
        je L_loop
        fstp st(1)
        fstp st(2)
        fstp st(0)
        call ext_006A73C6
        fmul qword ptr [mem_009548F0]
        fdiv qword ptr [esp + 8]
        call ext_006A7250
        fld qword ptr [esp + 10h]
        fmul st, st(1)
        pop edi
        fxch st(1)
        mov dword ptr [esi + 9D0h], 1
        fmul qword ptr [esp + 14h]
        fstp qword ptr [esi + 9C8h]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00693DB0] sub_00693DB0 (396 bytes)
extern "C" void ext_0053B470();
extern "C" void ext_00547080();
extern "C" void ext_006A6EB0();
extern "C" void ext_006A7256();
extern "C" int mem_0093F7B8;
extern "C" int mem_009453D8;

extern "C" __declspec(naked) void __fastcall fn_00693DB0(void* self, int edx_unused, float* a1, float* a2, int a3) {
    __asm {
        sub esp, 34h
        mov eax, dword ptr [esp + 3Ch]
        fld dword ptr [eax]
        push esi
        fstp dword ptr [esp + 8]
        push edi
        fld dword ptr [eax + 4]
        mov edi, dword ptr [esp + 40h]
        fstp dword ptr [esp + 10h]
        mov esi, ecx
        fld dword ptr [eax + 8]
        fstp dword ptr [esp + 14h]
        fld dword ptr [eax + 0Ch]
        fstp dword ptr [esp + 18h]
        fld dword ptr [edi + 4]
        fmul dword ptr [eax + 4]
        fld dword ptr [edi]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [edi + 8]
        fmul dword ptr [eax + 8]
        faddp st(1), st
        fld dword ptr [edi + 0Ch]
        fmul dword ptr [eax + 0Ch]
        faddp st(1), st
        fstp dword ptr [esp + 44h]
        fldz
        fld dword ptr [esp + 44h]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 5
        jp L_693E48
        fchs
        push ecx
        fstp dword ptr [esp + 48h]
        lea eax, [esp + 20h]
        fld dword ptr [mem_0093F7B8]
        lea ecx, [esp + 10h]
        fstp dword ptr [esp]
        push eax
        call ext_0053B470
        fld dword ptr [eax]
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [eax + 4]
        fstp dword ptr [esp + 10h]
        fld dword ptr [eax + 8]
        fstp dword ptr [esp + 14h]
        fld dword ptr [eax + 0Ch]
        fstp dword ptr [esp + 18h]
        fld dword ptr [esp + 44h]
    L_693E48:
        fld st(0)
        fld1
        fld st(0)
        _emit 0xde
        _emit 0xe2
        fxch st(1)
        fcomp qword ptr [mem_009453D8]
        fnstsw ax
        test ah, 41h
        jne L_693ED3
        fstp st(0)
        call ext_006A7256
        fstp dword ptr [esp + 44h]
        fld dword ptr [esp + 44h]
        fstp dword ptr [esp + 44h]
        fld dword ptr [esp + 44h]
        call ext_006A6EB0
        fstp dword ptr [esp + 40h]
        fld dword ptr [esp + 40h]
        fstp dword ptr [esp + 40h]
        fld dword ptr [esp + 48h]
        fld1
        _emit 0xde
        _emit 0xe1
        fmul dword ptr [esp + 44h]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        call ext_006A6EB0
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fdiv dword ptr [esp + 40h]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 44h]
        fmul dword ptr [esp + 48h]
        fstp dword ptr [esp + 48h]
        fld dword ptr [esp + 48h]
        call ext_006A6EB0
        fstp dword ptr [esp + 48h]
        fld dword ptr [esp + 48h]
        fdiv dword ptr [esp + 40h]
        jmp L_693EE3
    L_693ED3:
        fstp st(1)
        fld dword ptr [esp + 48h]
        fld st(0)
        _emit 0xde
        _emit 0xea
        fxch st(1)
        fstp dword ptr [esp + 8]
    L_693EE3:
        push ecx
        fstp dword ptr [esp + 4Ch]
        fld dword ptr [esp + 4Ch]
        lea ecx, [esp + 20h]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [esp + 14h]
        call ext_0053B470
        fld dword ptr [esp + 8]
        push eax
        lea edx, [esp + 10h]
        push edx
        push ecx
        lea eax, [esp + 38h]
        fstp dword ptr [esp]
        push eax
        mov ecx, edi
        call ext_0053B470
        mov ecx, eax
        call ext_00547080
        fld dword ptr [eax]
        fstp dword ptr [esi]
        pop edi
        fld dword ptr [eax + 4]
        fstp dword ptr [esi + 4]
        fld dword ptr [eax + 8]
        fstp dword ptr [esi + 8]
        fld dword ptr [eax + 0Ch]
        fstp dword ptr [esi + 0Ch]
        pop esi
        add esp, 34h
        ret 0Ch
    }
}

// [0x006941A0] sub_006941A0 (399 bytes)
extern "C" void ext_006A7250();
extern "C" int mem_0092A270;
extern "C" int mem_00993828;
extern "C" int mem_0098F3A0;

extern "C" __declspec(naked) void __fastcall fn_006941A0(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x14]
        fadd dword ptr [esi]
        fadd dword ptr [esi + 0x28]
        fstp dword ptr [esp + 0x1c]
        fldz
        fld dword ptr [esp + 0x1c]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_else
        fadd qword ptr [mem_0092A270]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        call ext_006A7250
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [eax]
        fdivrp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x18]
        fsub dword ptr [esi + 0x24]
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esi + 0x20]
        fsub dword ptr [esi + 0x8]
        fmul st, st(1)
        fstp dword ptr [eax + 0x8]
        fld dword ptr [esi + 0x4]
        fsub dword ptr [esi + 0x10]
        pop esi
        fmulp st(1), st
        fstp dword ptr [eax + 0xc]
        add esp, 0x10
        ret 0x8
    L_else:
        fstp st(0)
        push ebx
        fld dword ptr [esi + 0x14]
        push ebp
        fld dword ptr [esi]
        push edi
        fcompp
        xor edi, edi
        fnstsw ax
        test ah, 0x5
        jp L_skip1
        mov edi, 1
    L_skip1:
        fld dword ptr [esi + 0x28]
        lea eax, [edi + 4 * edi]
        fld dword ptr [esi + 4 * eax]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_skip2
        mov edi, 2
    L_skip2:
        mov ebx, dword ptr [mem_0098F3A0 + edi * 4]
        mov ebp, dword ptr [mem_0098F3A0 + ebx * 4]
        lea ecx, [edi + 4 * edi]
        fld dword ptr [esi + 4 * ecx]
        lea edx, [ebx + 4 * ebx]
        fsub dword ptr [esi + 4 * edx]
        lea eax, [ebp + 4 * ebp]
        fsub dword ptr [esi + 4 * eax]
        fadd qword ptr [mem_0092A270]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        call ext_006A7250
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fld st(0)
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + edi * 4 + 0x10]
        fldz
        fucomp st(2)
        fnstsw ax
        test ah, 0x44
        jnp L_skip3
        fdivrp st(1), st
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        jmp L_skip4
    L_skip3:
        fstp st(0)
    L_skip4:
        lea ecx, [ebp + 4 * ebx]
        fld dword ptr [esi + 4 * ecx]
        lea edx, [ebx + 4 * ebp]
        fsub dword ptr [esi + 4 * edx]
        lea eax, [edi + 4 * ebx]
        lea ecx, [ebx + 4 * edi]
        lea edx, [edi + 4 * ebp]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi + 4 * eax]
        lea eax, [ebp + 4 * edi]
        fadd dword ptr [esi + 4 * ecx]
        pop edi
        fmul st, st(1)
        fstp dword ptr [esp + 4 * ebx + 0xc]
        fld dword ptr [esi + 4 * edx]
        fadd dword ptr [esi + 4 * eax]
        mov eax, dword ptr [esp + 0x20]
        fmulp st(1), st
        fstp dword ptr [esp + 4 * ebp + 0xc]
        pop ebp
        fld dword ptr [esp + 0x8]
        pop ebx
        fstp dword ptr [eax + 0x4]
        pop esi
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax]
        add esp, 0x10
        ret 0x8
    }
}

// [0x00694330] sub_00694330 (126 bytes)
extern "C" void ext_0067DA60();
extern "C" void ext_0067DB10();
extern "C" void ext_006941A0();
extern "C" __declspec(naked) void __fastcall fn_00694330(void* self, int edx_unused, const float* a1) {
    __asm {
        sub esp, 90h
        mov eax, dword ptr [esp+94h]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp+18h]
        call ext_0067DB10
        fldz
        fst dword ptr [esp+20h]
        lea ecx, [esp+54h]
        fst dword ptr [esp+30h]
        push ecx
        fst dword ptr [esp+44h]
        lea ecx, [esp+18h]
        fst dword ptr [esp+48h]
        fst dword ptr [esp+4ch]
        fstp dword ptr [esp+50h]
        fld1
        fstp dword ptr [esp+54h]
        call ext_0067DA60
        lea edx, [esp+54h]
        push edx
        lea eax, [esp+8]
        push eax
        mov ecx, esi
        call ext_006941A0
        fld dword ptr [esp+4]
        fstp dword ptr [esi]
        fld dword ptr [esp+8]
        fstp dword ptr [esi+4]
        fld dword ptr [esp+0ch]
        fstp dword ptr [esi+8]
        fld dword ptr [esp+10h]
        fstp dword ptr [esi+0ch]
        pop esi
        add esp, 90h
        ret 4
    }
}

extern "C" void ext_00694330();

// [0x00694840] sub_00694840 (51 bytes)
extern "C" void __fastcall fn_00694840(void* self, int edx_unused, void* out) {
    float v[4];
    v[3] = 0.0f;
    v[2] = 0.0f;
    v[1] = 0.0f;
    v[0] = 0.0f;
    ((void (__thiscall*)(void*, void*))ext_00694330)(v, self);
    ((void (__thiscall*)(void*, void*))ext_00693FE0)(v, out);
}

// [0x00694880] sub_00694880 (51 bytes)
extern "C" void ext_006946C0();
extern "C" void __fastcall fn_00694880(void* self, int edx_unused, void* out) {
    float v[4];
    v[3] = 0.0f;
    v[2] = 0.0f;
    v[1] = 0.0f;
    v[0] = 0.0f;
    ((void (__thiscall*)(void*, void*))ext_00694330)(v, self);
    ((void (__thiscall*)(void*, void*))ext_006946C0)(v, out);
}

// [0x006948C0] sub_006948C0 (56 bytes)
extern "C" void ext_006940C0();
extern "C" void __fastcall fn_006948C0(void* self, int edx_unused, void* a1, void* a2) {
    float v[4];
    v[3] = 0.0f;
    v[2] = 0.0f;
    v[1] = 0.0f;
    v[0] = 0.0f;
    ((void (__thiscall*)(void*, void*))ext_00694330)(v, self);
    ((void (__thiscall*)(void*, void*, void*))ext_006940C0)(v, a1, a2);
}

// [0x006944D0] sub_006944D0 (79 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_00694330();
extern "C" __declspec(naked) void __fastcall fn_006944D0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 24h
        fldz
        push esi
        fst dword ptr [esp + 0ch]
        lea eax, [esp + 4]
        fst dword ptr [esp + 8]
        mov esi, ecx
        mov ecx, dword ptr [esp + 2ch]
        fst dword ptr [esp + 18h]
        fst dword ptr [esp + 10h]
        push eax
        fst dword ptr [esp + 24h]
        fstp dword ptr [esp + 20h]
        fld1
        fst dword ptr [esp + 8]
        fst dword ptr [esp + 18h]
        fstp dword ptr [esp + 28h]
        call ext_0067DAD0
        lea ecx, [esp + 4]
        push ecx
        mov ecx, esi
        call ext_00694330
        pop esi
        add esp, 24h
        ret 4
    }
}

extern "C" int mem_00924EAC;
extern "C" int mem_00924FC0;
extern "C" int mem_00A9F420;
extern "C" int mem_00A9F428;
extern "C" int mem_00A9F430;

// [0x00696260] sub_00696260 (477 bytes)
extern "C" __declspec(naked) void __fastcall fn_00696260(void* self) {
    __asm {
        push	esi
        mov	esi, dword ptr [esp + 0x8]
        push	edi
        mov	ecx, esi
        call	dword ptr [mem_00924EAC]
        mov	ecx, dword ptr [esp + 0x10]
        mov	edi, dword ptr [mem_00924FC0]
        push	0x98f644
        push	esi
        mov	dword ptr [ecx], eax
        call	edi
        add	esp, 0x8
        test	al, al
        jne near ptr loc_696438
        push	0x98f640
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne near ptr loc_696438
        mov	edx, dword ptr [mem_00A9F420]
        push	edx
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne near ptr loc_696438
        push	0x98f63c
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        je short loc_6962cc
        pop	edi
        mov	eax, 0x1
        pop	esi
        ret
loc_6962cc:
        push	0x98f638
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne near ptr loc_696430
        push	0x98f634
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne near ptr loc_696430
        push	0x98f630
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        je short loc_696309
        pop	edi
        mov	eax, 0x3
        pop	esi
        ret
loc_696309:
        push	0x98f62c
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne near ptr loc_696428
        push	0x98f628
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne near ptr loc_696428
        mov	eax, dword ptr [mem_00A9F428]
        push	eax
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne near ptr loc_696428
        push	0x98f624
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        je short loc_69635a
        pop	edi
        mov	eax, 0x5
        pop	esi
        ret
loc_69635a:
        push	0x98f620
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne near ptr loc_696420
        push	0x98f61c
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne near ptr loc_696420
        push	0x98f618
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        je short loc_696397
        pop	edi
        mov	eax, 0x7
        pop	esi
        ret
loc_696397:
        push	0x98f614
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne short loc_696418
        push	0x98f610
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne short loc_696418
        mov	ecx, dword ptr [mem_00A9F430]
        push	ecx
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne short loc_696418
        push	0x98f60c
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        je short loc_6963dd
        pop	edi
        mov	eax, 0x9
        pop	esi
        ret
loc_6963dd:
        push	0x98f608
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne short loc_696410
        push	0x98f604
        push	esi
        call	edi
        add	esp, 0x8
        test	al, al
        jne short loc_696410
        push	0x98f600
        push	esi
        call	edi
        add	esp, 0x8
        neg	al
        pop	edi
        pop	esi
        sbb	eax, eax
        and	eax, 0xb
        ret
loc_696410:
        pop	edi
        mov	eax, 0xa
        pop	esi
        ret
loc_696418:
        pop	edi
        mov	eax, 0x8
        pop	esi
        ret
loc_696420:
        pop	edi
        mov	eax, 0x6
        pop	esi
        ret
loc_696428:
        pop	edi
        mov	eax, 0x4
        pop	esi
        ret
loc_696430:
        pop	edi
        mov	eax, 0x2
        pop	esi
        ret
loc_696438:
        pop	edi
        xor	eax, eax
        pop	esi
        ret
    }
}


// [0x006978C0] sub_006978C0 (463 bytes)
extern "C" void ext_00435D00();
extern "C" int mem_008B627C;
extern "C" int mem_00941F08;
extern "C" int mem_00925014;
extern "C" int mem_00924FE8;
extern "C" int mem_00925120;
extern "C" int mem_00924EC4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924E4C;
extern "C" int mem_00924E90;
extern "C" int mem_0092B4A8;
extern "C" int mem_0098FA18;
extern "C" int mem_0098FA0C;
extern "C" int mem_0098F9FC;
extern "C" int mem_00924E94;
extern "C" int mem_00924E5C;
extern "C" int mem_00924E98;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;

extern "C" __declspec(naked) void __fastcall fn_006978C0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push offset mem_008B627C
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xb8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov esi, dword ptr [ebp + 0x30]
        sub esi, dword ptr [ebp + 0x2c]
        push edi
        jns loc_6978eb
        xor esi, esi
loc_6978eb:
        mov ebx, dword ptr [esp + 0xdc]
        push esi
        push offset mem_00941F08
        mov ecx, ebx
        call dword ptr [mem_00925014]
        lea ecx, [esp + 0x2c]
        mov edi, eax
        call dword ptr [mem_00924FE8]
        test edi, edi
        mov dword ptr [esp + 0xd0], 0
        lea eax, [esp + 0x10]
        jle loc_697936
        sub edi, esi
        push edi
        push esi
        push eax
        mov ecx, ebx
        call dword ptr [mem_00925120]
        mov byte ptr [esp + 0xd0], 1
        jmp loc_697951
loc_697936:
        mov ecx, dword ptr [mem_00924EC4]
        mov edx, dword ptr [ecx]
        push edx
        push esi
        push eax
        mov ecx, ebx
        call dword ptr [mem_00925120]
        mov byte ptr [esp + 0xd0], 2
loc_697951:
        push eax
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xd0], 0
        call dword ptr [mem_00924FF4]
        push 1
        push 2
        lea ecx, [esp + 0x50]
        call dword ptr [mem_00924E4C]
        mov ecx, dword ptr [mem_00924E90]
        lea esi, [ebp + 0xc]
        push esi
        push ecx
        mov eax, ecx
        mov ecx, dword ptr [ebp + 0x2c]
        lea edx, [esp + 0x34]
        push edx
        mov edx, dword ptr [ebp + 0x28]
        push eax
        mov eax, dword ptr [esp + 0xe8]
        push offset mem_0092B4A8
        push ecx
        push offset mem_0098FA18
        push edx
        push offset mem_0098FA0C
        push eax
        lea ecx, [esp + 0x70]
        push offset mem_0098F9FC
        mov bl, 3
        push ecx
        mov byte ptr [esp + 0x100], bl
        call ext_00435D00
        mov edi, dword ptr [mem_00924E94]
        add esp, 8
        push eax
        call edi
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        push eax
        call edi
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        push eax
        call edi
        add esp, 8
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_00924E54]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0xd4], 4
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xd0], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0xd0], 0
        call dword ptr [mem_00924E58]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0xd0], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop edi
        mov ecx, dword ptr [esp + 0xc4]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xc4
        ret 8
    }
}


// [0x00695070] sub_00695070 (302 bytes)
extern "C" void ext_005E0C10();
extern "C" void ext_0067D840();
extern "C" int mem_0092C510;
extern "C" int mem_00AA3BB0;

extern "C" __declspec(naked) void __fastcall fn_00695070(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x24
        mov eax, dword ptr [esp + 0x28]
        fld dword ptr [eax]
        push esi
        fmul st(0), st
        mov esi, ecx
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0x4]
        fmul st(0), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x8]
        fmul st(0), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0xc]
        fmul st(0), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax]
        fld qword ptr [mem_0092C510]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [eax + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x2c]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x24]
        fld dword ptr [eax + 0x8]
        fmul st, st(1)
        fstp dword ptr [esp + 0x4]
        fmul dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax + 0x8]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fmul dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x2c]
        fmul dword ptr [eax + 0x8]
        fmul dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fld dword ptr [esp + 0x10]
        fld st(0)
        faddp st(2), st
        fld dword ptr [esp + 0x14]
        fld st(0)
        fsubp st(3), st
        fld dword ptr [esp + 0x18]
        fld st(0)
        fsubp st(4), st
        fxch st(3)
        fstp dword ptr [esi]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esi + 0xc]
        fld dword ptr [esp + 0x2c]
        fadd dword ptr [esp + 0x4]
        fstp dword ptr [esi + 0x18]
        faddp st(1), st
        fstp dword ptr [esi + 0x4]
        fxch st(1)
        fsubrp st(3), st
        fld st(0)
        fadd st, st(3)
        fsub st, st(2)
        fstp dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fld dword ptr [esp + 0x24]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        push ecx
        fstp dword ptr [esi + 0x1c]
        fld dword ptr [esp + 0x30]
        fsub dword ptr [esp + 0x8]
        fstp dword ptr [esi + 0x8]
        faddp st(1), st
        fstp dword ptr [esi + 0x14]
        fsubp st(2), st
        faddp st(1), st
        fstp dword ptr [esi + 0x20]
        fld qword ptr [mem_00AA3BB0]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp]
        call ext_005E0C10
        test al, al
        jne loc_00695197
        mov ecx, esi
        call ext_0067D840
    loc_00695197:
        pop esi
        add esp, 0x24
        ret 4
    }
}

// [0x006951A0] sub_006951A0 (57 bytes)
extern "C" void ext_00695070();

extern "C" void __fastcall fn_006951A0(void* self, int edx_unused, void* a1) {
    float v[4];
    v[0] = v[1] = v[2] = v[3] = 0.0f;
    ((void (__thiscall*)(void*, void*))ext_00693C30)(v, a1);
    ((void (__thiscall*)(void*, float*))ext_00695070)(self, v);
}

// [0x00694480] sub_00694480 (80 bytes)
extern "C" void ext_0067E880();
extern "C" void ext_006943B0();
extern "C" __declspec(naked) void __fastcall fn_00694480(void* self, int edx_unused, const void* src) {
    __asm {
        sub esp, 0x50
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x5c]
        mov ebx, ecx
        push edi
        mov ecx, 0x10
        lea edi, [esp + 0x1c]
        rep movsd
        lea ecx, [esp + 0x1c]
        call ext_0067E880
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, ebx
        call ext_006943B0
        fld dword ptr [eax]
        pop edi
        fstp dword ptr [ebx]
        pop esi
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ebx + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ebx + 0x8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [ebx + 0xc]
        pop ebx
        add esp, 0x50
        ret 4
    }
}

// [0x006951E0] sub_006951E0 (81 bytes)
extern "C" void ext_00693F40();

extern "C" void __fastcall fn_006951E0(void* self, int edx_unused, const float* a1) {
    float copy[3];
    copy[0] = a1[0];
    copy[1] = a1[1];
    copy[2] = a1[2];
    float v[4];
    v[0] = v[1] = v[2] = v[3] = 0.0f;
    ((void (__thiscall*)(void*, const float*))ext_00693F40)(v, copy);
    ((void (__thiscall*)(void*, float*))ext_00695070)(self, v);
}

// [0x00697A90] sub_00697A90 (572 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_00872730();
extern "C" int mem_008B62E3;
extern "C" int mem_00924E4C;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;
extern "C" int mem_00924E5C;
extern "C" int mem_00924E90;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_00924EAC;
extern "C" int mem_00924EC4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;
extern "C" int mem_00925014;
extern "C" int mem_00925120;
extern "C" int mem_009251C4;
extern "C" int mem_00928EF0;
extern "C" int mem_0092B4A8;
extern "C" int mem_00941F08;
extern "C" int mem_009849C8;
extern "C" int mem_0098FA0C;
extern "C" int mem_0098FA18;
extern "C" int mem_0098FA24;

extern "C" __declspec(naked) void* __fastcall fn_00697A90(void* self) {
    __asm {
        push     -0x1
        push     offset mem_008B62E3
        mov      eax, dword ptr fs:[0]
        push     eax
        mov      dword ptr fs:[0], esp
        sub      esp, 0xbc
        push     ebx
        push     ebp
        push     esi
        push     edi
        mov      edi, ecx
        mov      dword ptr [esp + 0x10], edi
        call     dword ptr [mem_009251C4]
        lea      ecx, [edi + 0xc]
        mov      dword ptr [esp + 0xd4], 0x0
        mov      dword ptr [edi], offset mem_00928EF0
        call     dword ptr [mem_00924FE8]
        push     0x1
        push     0x2
        lea      ecx, [esp + 0x54]
        mov      dword ptr [esp + 0xdc], 0x1
        mov      dword ptr [edi], offset mem_009849C8
        call     dword ptr [mem_00924E4C]
        mov      ebp, dword ptr [esp + 0xdc]
        mov      esi, dword ptr [ebp + 0x10]
        sub      esi, dword ptr [ebp + 0xc]
        mov      byte ptr [esp + 0xd4], 0x2
        jns      L_00697B0D
        xor      esi, esi
L_00697B0D:
        mov      ecx, dword ptr [esp + 0xe4]
        push     esi
        push     offset mem_00941F08
        call     dword ptr [mem_00925014]
        mov      ecx, dword ptr [ebp + 0x8]
        mov      ebx, eax
        mov      eax, dword ptr [ebp + 0xc]
        push     eax
        mov      eax, dword ptr [esp + 0xe4]
        push     offset mem_0098FA18
        push     ecx
        push     offset mem_0098FA0C
        push     eax
        lea      ecx, [esp + 0x60]
        push     offset mem_0098FA24
        push     ecx
        call     ext_00435D00
        add      esp, 0x8
        push     eax
        call     dword ptr [mem_00924E94]
        add      esp, 0x8
        push     eax
        call     ext_00435D00
        add      esp, 0x8
        mov      ecx, eax
        call     dword ptr [mem_00924E5C]
        push     eax
        call     ext_00435D00
        add      esp, 0x8
        mov      ecx, eax
        call     dword ptr [mem_00924E5C]
        test     esi, esi
        jl       L_00697C55
        mov      ecx, dword ptr [esp + 0xe4]
        call     dword ptr [mem_00924EAC]
        cmp      esi, eax
        jge      L_00697C55
        lea      ecx, [esp + 0x30]
        call     dword ptr [mem_00924FE8]
        test     ebx, ebx
        mov      byte ptr [esp + 0xd4], 0x3
        lea      edx, [esp + 0x14]
        jle      L_00697BCD
        mov      ecx, dword ptr [esp + 0xe4]
        sub      ebx, esi
        push     ebx
        push     esi
        push     edx
        call     dword ptr [mem_00925120]
        mov      byte ptr [esp + 0xd4], 0x4
        jmp      L_00697BEC
L_00697BCD:
        mov      eax, dword ptr [mem_00924EC4]
        mov      ecx, dword ptr [eax]
        push     ecx
        mov      ecx, dword ptr [esp + 0xe8]
        push     esi
        push     edx
        call     dword ptr [mem_00925120]
        mov      byte ptr [esp + 0xd4], 0x5
L_00697BEC:
        push     eax
        lea      ecx, [esp + 0x34]
        call     dword ptr [mem_00924FDC]
        lea      ecx, [esp + 0x14]
        mov      byte ptr [esp + 0xd4], 0x3
        call     dword ptr [mem_00924FF4]
        mov      eax, dword ptr [mem_00924E90]
        push     eax
        lea      ecx, [esp + 0x34]
        push     ecx
        mov      edx, eax
        push     edx
        lea      eax, [esp + 0x58]
        push     offset mem_0092B4A8
        push     eax
        call     ext_00435D00
        add      esp, 0x8
        mov      ecx, eax
        call     dword ptr [mem_00924E98]
        push     eax
        call     dword ptr [mem_00924E94]
        add      esp, 0x8
        mov      ecx, eax
        call     dword ptr [mem_00924E98]
        lea      ecx, [esp + 0x30]
        mov      byte ptr [esp + 0xd4], 0x2
        call     dword ptr [mem_00924FF4]
L_00697C55:
        mov      ecx, ebp
        call     ext_00872730
        push     eax
        lea      ecx, [esp + 0x50]
        push     ecx
        call     ext_00435D00
        add      esp, 0x8
        lea      edx, [esp + 0x14]
        push     edx
        lea      ecx, [esp + 0x50]
        call     dword ptr [mem_00924E54]
        push     eax
        lea      ecx, [edi + 0xc]
        mov      byte ptr [esp + 0xd8], 0x6
        call     dword ptr [mem_00924FDC]
        lea      ecx, [esp + 0x14]
        mov      byte ptr [esp + 0xd4], 0x2
        call     dword ptr [mem_00924FF4]
        lea      ecx, [esp + 0x4c]
        mov      byte ptr [esp + 0xd4], 0x1
        call     dword ptr [mem_00924E58]
        mov      ecx, dword ptr [esp + 0xcc]
        mov      eax, edi
        pop      edi
        pop      esi
        pop      ebp
        pop      ebx
        mov      dword ptr fs:[0], ecx
        add      esp, 0xc8
        ret      0xc
    }
}


// [0x00696E10] sub_00696E10 (599 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_006A6C87();
extern "C" int mem_00B5C870;
extern "C" int mem_00B5C854;
extern "C" int mem_00924FE8;
extern "C" int mem_00924EA8;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_00696E10(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0x0]
        push 0x8b612a
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x118
        test byte ptr [mem_00B5C870], 1
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        jne loc_00696E6F
        or dword ptr [mem_00B5C870], 1
        mov ecx, offset mem_00B5C854
        mov dword ptr [esp + 0x130], 0
        call dword ptr [mem_00924FE8]
        push 0x921ed0
        call ext_006A6C87
        add esp, 4
        mov dword ptr [esp + 0x130], 0xffffffff
loc_00696E6F:
        mov ecx, offset mem_00B5C854
        call dword ptr [mem_00924EA8]
        mov eax, dword ptr [esi + 0x10]
        push eax
        lea ecx, [esp + 0x110]
        push ecx
        call ext_00404F00
        mov ebp, eax
        mov edx, dword ptr [esi + 0xc]
        push edx
        lea eax, [esp + 0xe0]
        push eax
        mov dword ptr [esp + 0x140], 1
        call ext_00404F00
        mov ebx, eax
        mov ecx, dword ptr [esi + 0x8]
        push ecx
        lea edx, [esp + 0xb0]
        push edx
        mov byte ptr [esp + 0x148], 2
        call ext_00404F00
        mov edi, eax
        mov eax, dword ptr [esi + 0x4]
        push eax
        lea ecx, [esp + 0x80]
        push ecx
        mov byte ptr [esp + 0x150], 3
        call ext_00404F00
        mov esi, dword ptr [mem_00924ECC]
        push 0x92b4a8
        push eax
        lea edx, [esp + 0x54]
        push edx
        mov byte ptr [esp + 0x15c], 4
        call esi
        push edi
        mov edi, dword ptr [mem_00924FD0]
        push eax
        lea eax, [esp + 0x44]
        push eax
        mov byte ptr [esp + 0x168], 5
        call edi
        push 0x92b4a8
        push eax
        lea ecx, [esp + 0xc0]
        push ecx
        mov byte ptr [esp + 0x174], 6
        call esi
        add esp, 0x44
        push ebx
        push eax
        lea edx, [esp + 0xc0]
        push edx
        mov byte ptr [esp + 0x13c], 7
        call edi
        push 0x92ab70
        push eax
        lea eax, [esp + 0x5c]
        push eax
        mov byte ptr [esp + 0x148], 8
        call esi
        push ebp
        push eax
        lea ecx, [esp + 0x110]
        mov bl, 9
        push ecx
        mov byte ptr [esp + 0x154], bl
        call edi
        add esp, 0x24
        mov byte ptr [esp + 0x130], 0xa
        push eax
        mov ecx, offset mem_00B5C854
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0xf0]
        mov byte ptr [esp + 0x130], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x130], 8
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xb8]
        mov byte ptr [esp + 0x130], 7
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x80]
        mov byte ptr [esp + 0x130], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x130], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x130], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x64]
        mov byte ptr [esp + 0x130], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x9c]
        mov byte ptr [esp + 0x130], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xd4]
        mov byte ptr [esp + 0x130], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x10c]
        mov dword ptr [esp + 0x130], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x128]
        pop edi
        pop esi
        pop ebp
        mov eax, offset mem_00B5C854
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x124
        ret
    }
}

// [0x00694D80] sub_00694D80 (556 bytes)
extern "C" void ext_0067B7F0();
extern "C" void ext_0067BA20();
extern "C" void ext_0067C170();
extern "C" void ext_006A7250();
extern "C" int mem_00993868;
extern "C" int mem_009324A4;
extern "C" int mem_0098C630;
extern "C" int mem_0098F3D8;
extern "C" int mem_00993830;
extern "C" int mem_00955090;
extern "C" int mem_009576E8;

extern "C" __declspec(naked) void __fastcall fn_00694D80(void* self) {
    __asm {
        sub     esp, 0x3c
        fld1
        push    ebx
        fst     dword ptr [esp + 0x34]
        push    ebp
        fldz
        push    esi
        fst     dword ptr [esp + 0x40]
        push    edi
        mov     edi, dword ptr [esp + 0x50]
        fst     dword ptr [esp + 0x48]
        fst     dword ptr [esp + 0x34]
        mov     esi, ecx
        fst     dword ptr [esp + 0x3c]
        push    esi
        fst     dword ptr [esp + 0x34]
        lea     ebp, [edi + 0x8]
        fst     dword ptr [esp + 0x30]
        push    ebp
        fst     dword ptr [esp + 0x30]
        lea     eax, [esp + 0x30]
        fst     dword ptr [esp + 0x2c]
        push    eax
        fst     dword ptr [esp + 0x2c]
        lea     ecx, [esp + 0x4c]
        fstp    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x44]
        call    ext_0067C170
        fld     dword ptr [esi + 0xc]
        lea     ecx, [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        mov     bl, al
        fld     dword ptr [esi + 0x10]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x14]
        fstp    dword ptr [esp + 0x18]
        call    ext_0067B7F0
        fld     dword ptr [esi + 0x8]
        fld     dword ptr [esi + 0x4]
        fmul    st(0), st
        fld     st(1)
        fmulp   st(2), st
        faddp   st(1), st
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x50]
        call    ext_006A7250
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x50]
        fcomp   qword ptr [mem_00993868]
        fnstsw  ax
        test    ah, 0x5
        jp      L_694E48
        fld     dword ptr [mem_009324A4]
        mov     bl, 0x1
        fcomp   dword ptr [ebp]
        fnstsw  ax
        test    ah, 0x41
        jne     L_694E3D
        fldz
        fstp    dword ptr [ebp]
        jmp     L_694E50
    L_694E3D:
        fld     dword ptr [mem_0098C630]
        fstp    dword ptr [ebp]
        jmp     L_694E50
    L_694E48:
        test    bl, bl
        je      L_694EDA
    L_694E50:
        fldz
        lea     esi, [edi + 0x4]
        fstp    dword ptr [esi]
        sub     esp, 0x18
        fld     qword ptr [mem_0098F3D8]
        fstp    qword ptr [esp + 0x10]
        fldz
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebp]
        fstp    qword ptr [esp]
        call    ext_0056B670
        add     esp, 0x18
        test    al, al
        je      L_694E91
        fldz
        lea     ecx, [esp + 0x34]
        push    ecx
        fstp    dword ptr [ebp]
        push    edi
        lea     edx, [esp + 0x24]
        push    edx
        jmp     L_694F2D
    L_694E91:
        fld     dword ptr [mem_0098C630]
        lea     eax, [esp + 0x34]
        fstp    dword ptr [ebp]
        push    eax
        fld     dword ptr [esp + 0x18]
        push    edi
        fld     qword ptr [mem_00993830]
        lea     ecx, [esp + 0x24]
        fmul    st(1), st
        push    ecx
        fxch    st(1)
        lea     ecx, [esp + 0x1c]
        fstp    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        fldz
        fstp    dword ptr [esp + 0x1c]
        call    ext_0067C170
        test    al, al
        jne     L_694F44
        fld     dword ptr [edi]
        fmul    dword ptr [esp + 0x1c]
        jmp     L_694F42
    L_694EDA:
        fldz
        lea     edx, [esp + 0x34]
        push    edx
        fstp    dword ptr [esp + 0x2c]
        lea     esi, [edi + 0x4]
        push    esi
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x34]
        call    ext_0067C170
        test    al, al
        jne     L_694F05
        fld     dword ptr [esp + 0x1c]
        fchs
        fmul    dword ptr [esi]
        fstp    dword ptr [esi]
    L_694F05:
        fld     dword ptr [ebp]
        push    ecx
        fchs
        lea     ecx, [esp + 0x2c]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    ext_0067BA20
        fldz
        lea     edx, [esp + 0x34]
        fstp    dword ptr [esp + 0x10]
        push    edx
        push    edi
        lea     eax, [esp + 0x24]
        push    eax
    L_694F2D:
        lea     ecx, [esp + 0x1c]
        call    ext_0067C170
        test    al, al
        jne     L_694F44
        fld     dword ptr [esp + 0x1c]
        fchs
        fmul    dword ptr [edi]
    L_694F42:
        fstp    dword ptr [edi]
    L_694F44:
        fldz
        fcom    dword ptr [edi]
        fnstsw  ax
        fld     qword ptr [mem_00955090]
        test    ah, 0x41
        jne     L_694F5B
        fld     dword ptr [edi]
        fadd    st, st(1)
        fstp    dword ptr [edi]
    L_694F5B:
        fxch    st(1)
        fcomp   dword ptr [esi]
        fnstsw  ax
        test    ah, 0x41
        jne     L_694F6C
        fld     dword ptr [esi]
        fadd    st, st(1)
        fstp    dword ptr [esi]
    L_694F6C:
        fld     dword ptr [edi]
        fld     qword ptr [mem_009576E8]
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
        test    ah, 0x5
        jp      L_694F85
        fld     dword ptr [edi]
        fsub    st, st(2)
        fstp    dword ptr [edi]
    L_694F85:
        fld     dword ptr [esi]
        fcompp
        fnstsw  ax
        mov     al, bl
        test    ah, 0x41
        jne     L_694FA0
        fsubr   dword ptr [esi]
        pop     edi
        fstp    dword ptr [esi]
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0x4
    L_694FA0:
        pop     edi
        fstp    st(0)
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0x4
    }
}

// [0x0069B290] sub_0069B290 (671 bytes)
extern "C" int mem_00924FE4;
extern "C" int mem_0092501C;
extern "C" int mem_0092506C;
extern "C" int mem_00924FD0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0069B290(void* self) {
    __asm {
        push -1
        push 0x8b6748
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x13c
        push ebx
        mov ebx, ecx
        mov dword ptr [esp + 0x4], 0
        mov ecx, dword ptr [ebx + 0xa0]
        test ecx, ecx
        push esi
        jne L_nonnull
        mov esi, dword ptr [esp + 0x154]
        push 0x92ab78
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        jmp L_done
    L_nonnull:
        mov esi, dword ptr [ebx + 0xa4]
        mov al, byte ptr [esi]
        push ebp
        push edi
        mov edi, esi
        sub edi, ecx
        test al, al
        je L_loop_end
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_loop:
        cmp al, 0x3b
        je L_loop_end
        cmp al, 0x7d
        je L_loop_end
        mov al, byte ptr [esi + 1]
        add esi, 1
        test al, al
        jne L_loop
    L_loop_end:
        push esi
        push ecx
        lea ecx, [esp + 0x20]
        call dword ptr [mem_0092501C]
        sub esi, edi
        sub esi, dword ptr [ebx + 0xa0]
        push 0x20
        push esi
        lea ecx, [esp + 0x138]
        mov dword ptr [esp + 0x15c], 1
        call dword ptr [mem_0092506C]
        mov ebp, eax
        push 0x98fb7c
        lea ecx, [esp + 0xfc]
        mov byte ptr [esp + 0x158], 2
        call dword ptr [mem_00924FE4]
        mov ebx, eax
        push 0x20
        add edi, 1
        push edi
        lea ecx, [esp + 0xc8]
        mov byte ptr [esp + 0x15c], 3
        call dword ptr [mem_0092506C]
        mov edi, eax
        push 0x98fb78
        lea ecx, [esp + 0x8c]
        mov byte ptr [esp + 0x158], 4
        call dword ptr [mem_00924FE4]
        mov dword ptr [esp + 0x14], eax
        push 0x98cc04
        lea ecx, [esp + 0x54]
        mov byte ptr [esp + 0x158], 5
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [mem_00924FD0]
        lea ecx, [esp + 0x18]
        push ecx
        push eax
        lea edx, [esp + 0x11c]
        push edx
        mov byte ptr [esp + 0x160], 6
        call esi
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        push eax
        lea edx, [esp + 0x48]
        push edx
        mov byte ptr [esp + 0x16c], 7
        call esi
        push edi
        push eax
        lea eax, [esp + 0xfc]
        push eax
        mov byte ptr [esp + 0x178], 8
        call esi
        push ebx
        push eax
        lea ecx, [esp + 0x98]
        push ecx
        mov byte ptr [esp + 0x184], 9
        call esi
        push ebp
        push eax
        lea edx, [esp + 0xdc]
        mov bl, 0xa
        push edx
        mov byte ptr [esp + 0x190], bl
        call esi
        push 0x940614
        mov byte ptr [esp + 0x194], 0xb
        push eax
        mov esi, dword ptr [esp + 0x1a0]
        push esi
        call dword ptr [mem_00924ECC]
        add esp, 0x48
        lea ecx, [esp + 0xa4]
        mov dword ptr [esp + 0x10], 1
        mov byte ptr [esp + 0x154], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x6c]
        mov byte ptr [esp + 0x154], 9
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xdc]
        mov byte ptr [esp + 0x154], 8
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x154], 7
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x114]
        mov byte ptr [esp + 0x154], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x154], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x88]
        mov byte ptr [esp + 0x154], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc0]
        mov byte ptr [esp + 0x154], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xf8]
        mov byte ptr [esp + 0x154], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x130]
        mov byte ptr [esp + 0x154], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x154], 0
        call dword ptr [mem_00924FF4]
        pop edi
        pop ebp
    L_done:
        mov ecx, dword ptr [esp + 0x144]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x148
        ret 4
    }
}

// [0x00696440] sub_00696440 (698 bytes)
extern "C" void ext_006A6EA4();
extern "C" void ext_006A7250();
extern "C" __declspec(naked) void* __fastcall fn_00696440(void* self) {
    __asm {
        sub esp, 0x24
        mov eax, dword ptr [esp + 0x30]
        mov ecx, eax
        shr eax, 1
        mov edx, eax
        shr eax, 1
        and ecx, 0x1
        push ebx
        mov dword ptr [esp + 0x1c], ecx
        mov ecx, eax
        shr eax, 1
        push ebp
        mov ebp, dword ptr [esp + 0x34]
        and eax, 0x3
        push esi
        movsx esi, byte ptr [eax + 0x98f5f8]
        and ecx, 0x1
        mov eax, esi
        and edx, 0x1
        sub eax, ecx
        cmp edx, 0x1
        movsx ebx, byte ptr [eax + 0x98f5f1]
        push edi
        movsx edi, byte ptr [esi + ecx + 0x98f5f0]
        mov dword ptr [esp + 0x24], ecx
        jne L_69659d
        lea eax, [esi + esi*2]
        lea ecx, [eax + ebx]
        fld dword ptr [ebp + ecx*4]
        lea ecx, [ebp + ecx*4]
        add eax, edi
        fld dword ptr [ebp + eax*4]
        lea eax, [ebp + eax*4]
        fmul st(0), st
        mov dword ptr [esp + 0x18], ecx
        fld st(1)
        mov dword ptr [esp + 0x14], eax
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fst qword ptr [esp + 0x1c]
        __asm _emit 0xdc __asm _emit 0x1d __asm _emit 0x48 __asm _emit 0xf6 __asm _emit 0x98 __asm _emit 0x00
        fnstsw ax
        test ah, 0x41
        jne L_696550
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        fld dword ptr [edx]
        fld dword ptr [eax]
        call ext_006A6EA4
        fstp dword ptr [esp + 0x18]
        mov ebp, dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x3c]
        fstp dword ptr [ebp]
        fld qword ptr [esp + 0x1c]
        mov ecx, esi
        fstp dword ptr [esp + 0x38]
        shl ecx, 4
        fld dword ptr [esp + 0x38]
        fld dword ptr [ecx + edx]
        call ext_006A6EA4
        fstp dword ptr [esp + 0x38]
        mov eax, dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [ebp + 0x4]
        lea ecx, [esi + edi*2]
        add ecx, edi
        fld dword ptr [eax + ecx*4]
        lea edx, [esi + ebx*2]
        add edx, ebx
        fld dword ptr [eax + edx*4]
        fchs
        call ext_006A6EA4
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        jmp L_6966a9
L_696550:
        lea eax, [ebx + edi*2]
        add eax, edi
        fld dword ptr [ebp + eax*4]
        shl edi, 4
        fchs
        fld dword ptr [edi + ebp]
        call ext_006A6EA4
        fstp dword ptr [esp + 0x18]
        mov ebp, dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x3c]
        fstp dword ptr [ebp]
        fld qword ptr [esp + 0x1c]
        shl esi, 4
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fld dword ptr [esi + ecx]
        call ext_006A6EA4
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        jmp L_6966a4
L_69659d:
        lea eax, [edi + edi*2]
        add eax, esi
        fld dword ptr [ebp + eax*4]
        lea eax, [ebp + eax*4]
        mov edx, esi
        shl edx, 4
        fld dword ptr [edx + ebp]
        mov dword ptr [esp + 0x10], eax
        lea eax, [edx + ebp]
        fmul st(0), st
        fld st(1)
        mov dword ptr [esp + 0x1c], eax
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        call ext_006A7250
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fst qword ptr [esp + 0x2c]
        __asm _emit 0xdc __asm _emit 0x1d __asm _emit 0x48 __asm _emit 0xf6 __asm _emit 0x98 __asm _emit 0x00
        fnstsw ax
        test ah, 0x41
        jne L_696658
        lea eax, [ebx + ebx*2]
        mov dword ptr [esp + 0x14], eax
        add eax, edi
        fld dword ptr [ebp + eax*4]
        shl ebx, 4
        fld dword ptr [ebx + ebp]
        call ext_006A6EA4
        fstp dword ptr [esp + 0x18]
        mov ebp, dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        fstp dword ptr [ebp]
        mov ecx, dword ptr [esp + 0x3c]
        add eax, esi
        fld dword ptr [ecx + eax*4]
        fchs
        fld qword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        call ext_006A6EA4
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x1c]
        fstp dword ptr [ebp + 0x4]
        fld dword ptr [edx]
        fld dword ptr [eax]
        call ext_006A6EA4
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        jmp L_6966a9
L_696658:
        lea eax, [edi + edi*2]
        add eax, ebx
        fld dword ptr [ebp + eax*4]
        shl edi, 4
        fchs
        fld dword ptr [edi + ebp]
        call ext_006A6EA4
        fstp dword ptr [esp + 0x1c]
        mov ebp, dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x3c]
        fstp dword ptr [ebp]
        lea ecx, [esi + ebx*2]
        add ecx, ebx
        fld dword ptr [edx + ecx*4]
        fchs
        fld qword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        call ext_006A6EA4
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
L_6966a4:
        fstp dword ptr [ebp + 0x4]
        fldz
L_6966a9:
        mov eax, 0x1
        fstp dword ptr [ebp + 0x8]
        cmp dword ptr [esp + 0x24], eax
        jne L_6966cf
        fld dword ptr [ebp]
        fchs
        fstp dword ptr [ebp]
        fld dword ptr [ebp + 0x4]
        fchs
        fstp dword ptr [ebp + 0x4]
        fld dword ptr [ebp + 0x8]
        fchs
        fstp dword ptr [ebp + 0x8]
L_6966cf:
        cmp dword ptr [esp + 0x28], eax
        jne L_6966e9
        fld dword ptr [ebp]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [ebp + 0x8]
        fstp dword ptr [ebp]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [ebp + 0x8]
L_6966e9:
        fild dword ptr [esp + 0x40]
        pop edi
        pop esi
        mov eax, ebp
        fstp dword ptr [ebp + 0xc]
        pop ebp
        pop ebx
        add esp, 0x24
        ret
    }
}

// [0x0069B220] sub_0069B220 (100 bytes)
extern "C" void ext_006A2B20();
extern "C" void ext_006A6DD2();
extern "C" int mem_00A1A86C;

extern "C" __declspec(naked) void* __fastcall fn_0069B220(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x28
        cmp byte ptr [ecx + 0x90], 0
        jne L_69b247
        push ecx
        push 8
        lea ecx, [esp + 8]
        call ext_006A2B20
        push offset mem_00A1A86C
        lea eax, [esp + 4]
        push eax
        call ext_006A6DD2
L_69b247:
        mov eax, dword ptr [esp + 0x30]
        cmp eax, 0x3c
        je L_69b27a
        cmp eax, 0x50
        je L_69b27a
        cmp eax, 0x12
        je L_69b27a
        cmp eax, 0x13
        je L_69b27a
        push ecx
        push 9
        lea ecx, [esp + 8]
        call ext_006A2B20
        push offset mem_00A1A86C
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
L_69b27a:
        mov eax, dword ptr [esp + 0x2c]
        add esp, 0x28
        ret 0xc
    }
}

// [0x00694B60] sub_00694B60 (166 bytes)
extern "C" void ext_00696440();
extern "C" __declspec(naked) void __fastcall fn_00694B60(void* self) {
    __asm {
        sub esp, 0x68
        push esi
        mov eax, ecx
        push edi
        mov esi, eax
        mov ecx, 9
        lea edi, [esp + 0x28]
        rep movsd
        mov esi, eax
        mov eax, dword ptr [esp + 0x74]
        mov ecx, 9
        lea edi, [esp + 0x4c]
        rep movsd
        fld dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x64]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x68]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x60]
        push eax
        fstp dword ptr [esp + 0x48]
        lea ecx, [esp + 0x2c]
        push ecx
        lea edx, [esp + 0x20]
        push edx
        call ext_00696440
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esp + 0x14], ecx
        mov ecx, dword ptr [eax + 8]
        fld dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x18], edx
        mov edx, dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x84]
        add esp, 0xc
        fstp dword ptr [eax]
        mov dword ptr [esp + 0x10], ecx
        fld dword ptr [esp + 0xc]
        pop edi
        fstp dword ptr [eax + 4]
        mov dword ptr [esp + 0x10], edx
        fld dword ptr [esp + 0xc]
        pop esi
        fstp dword ptr [eax + 8]
        add esp, 0x68
        ret 8
    }
}

// [0x00695F90] sub_00695F90 (719 bytes)
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" char mem_0098F5F0[];
extern "C" char mem_0098F5F1[];
extern "C" char mem_0098F5F8[];

extern "C" __declspec(naked) void __cdecl fn_00695F90() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x3c
        fld dword ptr [ebp + 0x14]
        push ebx
        fnstcw word ptr [esp + 4]
        push esi
        movzx eax, word ptr [esp + 8]
        or eax, 0xc00
        mov dword ptr [esp + 0xc], eax
        push edi
        fldcw word ptr [esp + 0x10]
        fistp qword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x28]
        mov edx, eax
        shr eax, 1
        fldcw word ptr [esp + 0xc]
        mov ecx, eax
        shr eax, 1
        and ecx, 1
        mov dword ptr [esp + 0xc], ecx
        mov ecx, eax
        shr eax, 1
        and eax, 3
        movsx edi, byte ptr [eax + mem_0098F5F8]
        and ecx, 1
        movsx ebx, byte ptr [edi + ecx + mem_0098F5F0]
        mov eax, edi
        and edx, 1
        sub eax, ecx
        cmp edx, 1
        movsx esi, byte ptr [eax + mem_0098F5F1]
        jne L_696010
        fld dword ptr [ebp + 8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ebp + 0x10]
        fstp dword ptr [ebp + 8]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ebp + 0x10]
    L_696010:
        cmp ecx, 1
        jne L_69602d
        fld dword ptr [ebp + 8]
        fchs
        fstp dword ptr [ebp + 8]
        fld dword ptr [ebp + 0xc]
        fchs
        fstp dword ptr [ebp + 0xc]
        fld dword ptr [ebp + 0x10]
        fchs
        fstp dword ptr [ebp + 0x10]
    L_69602d:
        fld dword ptr [ebp + 8]
        fst qword ptr [esp + 0x20]
        fld dword ptr [ebp + 0xc]
        fstp qword ptr [esp + 0x28]
        fld dword ptr [ebp + 0x10]
        fstp qword ptr [esp + 0x10]
        call ext_006A6EAA
        fstp qword ptr [esp + 0x38]
        fld qword ptr [esp + 0x28]
        call ext_006A6EAA
        fstp qword ptr [esp + 0x18]
        fld qword ptr [esp + 0x10]
        call ext_006A6EAA
        fstp qword ptr [esp + 0x30]
        fld qword ptr [esp + 0x20]
        call ext_006A6EB0
        fstp qword ptr [esp + 0x40]
        fld qword ptr [esp + 0x28]
        call ext_006A6EB0
        fstp qword ptr [esp + 0x20]
        fld qword ptr [esp + 0x10]
        call ext_006A6EB0
        fld qword ptr [esp + 0x30]
        mov eax, dword ptr [ebp + 0x18]
        fld st(0)
        fld qword ptr [esp + 0x38]
        mov ecx, edi
        fmul st(1), st(0)
        shl ecx, 4
        cmp dword ptr [esp + 0xc], 1
        fld st(3)
        fmul st(0), st(1)
        fld qword ptr [esp + 0x40]
        fld st(0)
        fmul st(0), st(5)
        fld st(6)
        fmul st(0), st(2)
        fstp qword ptr [esp + 0x28]
        jne L_69618d
        fld qword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx + eax]
        lea ecx, [edi + edi * 2]
        fld qword ptr [esp + 0x20]
        lea edx, [ecx + ebx]
        fmulp st(2), st(0)
        add ecx, esi
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + edx * 4]
        fld qword ptr [esp + 0x20]
        fld st(0)
        fmulp st(4), st(0)
        fxch st(3)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + ecx * 4]
        lea ecx, [ebx + ebx * 2]
        fxch st(5)
        lea edx, [ecx + edi]
        fmul st(0), st(2)
        add ecx, esi
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + edx * 4]
        mov edx, ebx
        fld qword ptr [esp + 0x28]
        shl edx, 4
        fld qword ptr [esp + 0x18]
        fmul st(1), st(0)
        fld st(4)
        fsubrp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [edx + eax]
        fld st(1)
        fmul st(0), st(1)
        fchs
        fsub st(0), st(6)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + ecx * 4]
        lea ecx, [esi + esi * 2]
        fxch st(2)
        lea edx, [ecx + edi]
        fmulp st(4), st(0)
        add ecx, ebx
        fxch st(3)
        shl esi, 4
        fchs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + edx * 4]
        fmul st(3), st(0)
        fxch st(3)
        faddp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + ecx * 4]
        fmulp st(1), st(0)
        fsub qword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esi + eax]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    L_69618d:
        fxch st(5)
        fmul qword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx + eax]
        lea ecx, [edi + edi * 2]
        fld st(4)
        lea edx, [ecx + ebx]
        fld qword ptr [esp + 0x20]
        add ecx, esi
        fmul st(1), st(0)
        fxch st(1)
        fsub st(0), st(3)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + edx * 4]
        fmul st(0), st(4)
        fstp qword ptr [esp + 0x40]
        fld qword ptr [esp + 0x28]
        fld qword ptr [esp + 0x40]
        fadd st(0), st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + ecx * 4]
        lea ecx, [ebx + ebx * 2]
        fld qword ptr [esp + 0x18]
        lea edx, [ecx + edi]
        fmul st(7), st(0)
        add ecx, esi
        fxch st(7)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + edx * 4]
        mov edx, ebx
        fld qword ptr [esp + 0x20]
        shl edx, 4
        fmul st(1), st(0)
        fxch st(1)
        faddp st(5), st(0)
        fxch st(4)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [edx + eax]
        fxch st(1)
        fmul st(0), st(3)
        fsubrp st(4), st(0)
        fxch st(3)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + ecx * 4]
        lea ecx, [esi + esi * 2]
        fxch st(1)
        lea edx, [ecx + edi]
        fchs
        add ecx, ebx
        fstp dword ptr [esp + 0x10]
        shl esi, 4
        fld dword ptr [esp + 0x10]
        pop edi
        fstp dword ptr [eax + edx * 4]
        fxch st(1)
        fmul st(0), st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax + ecx * 4]
        fmulp st(1), st(0)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esi + eax]
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

extern "C" void ext_00695F90();
extern "C" int mem_0092F678;

// [0x00694A70] sub_00694A70 (225 bytes)
extern "C" __declspec(naked) void __fastcall fn_00694A70(void* self) {
    __asm {
        sub esp, 0x58
        fldz
        mov eax, dword ptr [esp + 0x60]
        fst dword ptr [esp + 0x18]
        push ebx
        fst dword ptr [esp + 0x18]
        push esi
        fst dword ptr [esp + 0x2c]
        push edi
        fst dword ptr [esp + 0x28]
        mov ebx, ecx
        fst dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x34]
        fld1
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x68]
        fild dword ptr [esp + 0x68]
        test eax, eax
        jge lbl_694ACA
        fadd dword ptr [mem_0092F678]
    lbl_694ACA:
        mov edx, dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x18]
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 0x28]
        mov dword ptr [eax + 0x4], ecx
        mov ecx, dword ptr [esp + 0x2c]
        mov dword ptr [eax + 0x8], edx
        mov dword ptr [eax + 0xc], ecx
        call ext_00695F90
        fld dword ptr [esp + 0x30]
        fstp dword ptr [ebx]
        mov ecx, 0x9
        fld dword ptr [esp + 0x3c]
        lea esi, [esp + 0x30]
        fstp dword ptr [ebx + 0x4]
        lea edi, [esp + 0x54]
        rep movsd
        fld dword ptr [esp + 0x6c]
        fstp dword ptr [ebx + 0x8]
        fld dword ptr [esp + 0x58]
        fstp dword ptr [ebx + 0xc]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [ebx + 0x10]
        fld dword ptr [esp + 0x70]
        fstp dword ptr [ebx + 0x14]
        fld dword ptr [esp + 0x5c]
        fstp dword ptr [ebx + 0x18]
        fld dword ptr [esp + 0x68]
        add esp, 0x14
        fstp dword ptr [ebx + 0x1c]
        fld dword ptr [esp + 0x3c]
        pop edi
        pop esi
        fstp dword ptr [ebx + 0x20]
        pop ebx
        add esp, 0x58
        ret 0x8
    }
}

// [0x00693820] sub_00693820 (1040 bytes)
extern "C" void ext_0067B7F0();
extern "C" void ext_006A6DE0();
extern "C" void ext_006A7250();
extern "C" int mem_0098F398;
extern "C" int mem_00993838;
extern "C" int mem_0092C510;
extern "C" int mem_00955090;
extern "C" int mem_0093F7B8;
extern "C" int mem_0098F380;

extern "C" __declspec(naked) void __fastcall fn_00693820(void* self) {
    __asm {
        sub esp, 0x34
        push esi
        push edi
        mov edi, dword ptr [esp + 0x40]
        fld dword ptr [edi + 0x4]
        fld dword ptr [edi]
        fld dword ptr [edi + 0x8]
        fld st(1)
        fmulp st(2), st(0)
        fld st(2)
        fmulp st(3), st(0)
        fxch st(1)
        faddp st(2), st(0)
        fmul st(0), st(0)
        faddp st(1), st(0)
        call ext_006A7250
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        mov esi, dword ptr [esp + 0x48]
        fcom qword ptr [mem_0098F398]
        fnstsw ax
        test ah, 0x5
        jp L_00693909
        fstp st(0)
        lea ecx, [esp + 0x24]
        fld dword ptr [esi + 0x10]
        fmul dword ptr [esi + 0x4]
        fld dword ptr [esi + 0xc]
        fmul dword ptr [esi]
        faddp st(1), st(0)
        fld dword ptr [esi + 0x14]
        fmul dword ptr [esi + 0x8]
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        fld dword ptr [esi + 0xc]
        test ah, 0x5
        fld qword ptr [mem_0092C510]
        fmul st(1), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esi + 0x10]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x34]
        fmul dword ptr [esi + 0x14]
        fstp dword ptr [esp + 0x38]
        jp L_006938EB
        fld dword ptr [esi]
        fadd dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esi + 0x4]
        fadd dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x38]
        fadd dword ptr [esi + 0x8]
    L_006938D0:
        fstp dword ptr [esp + 0x2c]
        call ext_0067B7F0
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax + 0x8]
        jmp L_0069395D
    L_006938EB:
        fld dword ptr [esp + 0x30]
        fsub dword ptr [esi]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x34]
        fsub dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x38]
        fsub dword ptr [esi + 0x8]
        jmp L_006938D0
    L_00693909:
        fld dword ptr [edi]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x2c]
        fld1
        fdivrp st(1), st(0)
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x40]
        fld st(0)
        fmulp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x28]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x28]
        fmul dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x2c]
    L_0069395D:
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esi + 0x18]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esi + 0x1c]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esi + 0x20]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fsub dword ptr [edi]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x28]
        fsub dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x2c]
        fsub dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x2c]
        fld st(1)
        fmulp st(2), st(0)
        fld st(2)
        fmulp st(3), st(0)
        fxch st(1)
        faddp st(2), st(0)
        fmul st(0), st(0)
        faddp st(1), st(0)
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x18]
        fld qword ptr [mem_00955090]
        fmul st(1), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x1c]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x34]
        fmul dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [edi]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fadd dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x28]
        fadd dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x2c]
        fadd dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esi + 0x18]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esi + 0x1c]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esi + 0x20]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x30]
        fsub dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x34]
        fsub dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x38]
        fsub dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x38]
        fld st(1)
        fmulp st(2), st(0)
        fld st(2)
        fmulp st(3), st(0)
        fxch st(1)
        faddp st(2), st(0)
        fmul st(0), st(0)
        faddp st(1), st(0)
        call ext_006A7250
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [edi]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x30]
        fsub dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x34]
        fsub dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x38]
        fsub dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esi + 0x18]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esi + 0x1c]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esi + 0x20]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fsub dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x28]
        fsub dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x2c]
        fsub dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x2c]
        fld st(1)
        fmulp st(2), st(0)
        fld st(2)
        fmulp st(3), st(0)
        fxch st(1)
        faddp st(2), st(0)
        fmul st(0), st(0)
        faddp st(1), st(0)
        call ext_006A7250
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x14]
        fcom st(1)
        fnstsw ax
        fld dword ptr [esp + 0x40]
        test ah, 0x41
        jne L_00693B63
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        jne L_00693B63
        fstp st(2)
        fstp st(0)
        fstp st(0)
        fldz
        jmp L_00693B85
    L_00693B63:
        fxch st(2)
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_00693B7B
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_00693B7F
        fld1
        jmp L_00693B85
    L_00693B7B:
        fstp st(0)
        fstp st(0)
    L_00693B7F:
        fld dword ptr [mem_0093F7B8]
    L_00693B85:
        mov eax, dword ptr [esi + 0x24]
        fstp dword ptr [esp + 0x40]
        test eax, eax
        mov dword ptr [esp + 0x48], eax
        fild dword ptr [esp + 0x48]
        jge L_00693B9E
        fsub dword ptr [esp + 0x40]
        jmp L_00693BA2
    L_00693B9E:
        fadd dword ptr [esp + 0x40]
    L_00693BA2:
        call ext_006A6DE0
        mov dword ptr [esi + 0x24], eax
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esi]
        mov eax, dword ptr [esp + 0x44]
        fld dword ptr [esi + 0x10]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [esi + 0x14]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [esp + 0x18]
        fst dword ptr [esi + 0xc]
        fld dword ptr [esp + 0x1c]
        fst dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x20]
        fst dword ptr [esi + 0x14]
        fld dword ptr [edi]
        fstp dword ptr [esi + 0x18]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esi + 0x1c]
        fld dword ptr [edi + 0x8]
        pop edi
        fstp dword ptr [esi + 0x20]
        fild dword ptr [esi + 0x24]
        pop esi
        fmul qword ptr [mem_0098F380]
        fadd dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fld st(0)
        fmulp st(4), st(0)
        fxch st(3)
        fstp dword ptr [esp + 0x28]
        fld st(2)
        fmulp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x2c]
        fmulp st(1), st(0)
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [eax + 0x8]
        add esp, 0x34
        ret 0xc
    }
}

// [0x00694520] sub_00694520 (403 bytes)
extern "C" void ext_00575350();
extern "C" void ext_0067B7F0();
extern "C" void ext_00693820();
extern "C" void ext_006940C0();
extern "C" void ext_006A7250();
extern "C" __declspec(naked) void __fastcall fn_00694520(void* self) {
    __asm {
        sub esp, 0x40
        fldz
        push esi
        fst dword ptr [esp + 0x10]
        mov esi, ecx
        fst dword ptr [esp + 0xc]
        lea eax, [esp + 0x48]
        fst dword ptr [esp + 0x8]
        push eax
        fst dword ptr [esp + 0x20]
        lea ecx, [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x58]
        fld1
        fsubrp st(1), st
        fstp dword ptr [esp + 0xc]
        call ext_006940C0
        mov ecx, dword ptr [esp + 0x4c]
        lea edx, [esp + 0x4c]
        push edx
        lea eax, [esp + 0x18]
        push eax
        call ext_006940C0
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x48]
        mov ecx, dword ptr [esp + 0x54]
        fld st(0)
        push ecx
        fmulp st(2), st
        lea edx, [esp + 0xc]
        fxch st(1)
        push edx
        lea eax, [esp + 0x34]
        fstp dword ptr [esp + 0x34]
        push eax
        fld dword ptr [esp + 0x18]
        mov ecx, esi
        fmul st, st(1)
        fstp dword ptr [esp + 0x3c]
        fmul dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x58]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x24]
        fmul st, st(1)
        fstp dword ptr [esp + 0x48]
        fmul dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x4c]
        fldz
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x20]
        call ext_00693820
        mov ecx, dword ptr [esp + 0x58]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x40]
        push eax
        mov ecx, esi
        call ext_00693820
        fld dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x50]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x18]
        fmul st, st(1)
        fstp dword ptr [esp + 0x30]
        fmul dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        fmul st, st(1)
        fstp dword ptr [esp + 0x18]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x14]
        fadd dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x18]
        fadd dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x1c]
        fadd dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x28]
        fld st(2)
        fmulp st(3), st
        fld st(1)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        push ecx
        lea ecx, [esp + 0x24]
        fstp dword ptr [esp]
        call ext_0067B7F0
        push eax
        mov ecx, esi
        call ext_00575350
        pop esi
        add esp, 0x40
        ret 0x14
    }
}

// [0x0069E850] sub_0069E850 (41 bytes)
extern "C" void ext_0069E6C0();

extern "C" __declspec(naked) void __fastcall fn_0069E850(void* self) {
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
        call ext_0069E6C0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00697DA0] sub_00697DA0 (42 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_007C15A0();
extern "C" void ext_007C2010();
extern "C" void __fastcall fn_00697DA0(void* self) {
    int* esi = (int*)self;
    ((void (__cdecl*)(int))ext_007C2010)(esi[0]);
    ((void (__cdecl*)(int))ext_007C15A0)(esi[1]);
    ((void (__cdecl*)(int))ext_006A5C5C)(esi[1]);
    ((void (__cdecl*)(int))ext_006A5C5C)(esi[0]);
}

// [0x0069E7E0] sub_0069E7E0 (43 bytes)
extern "C" void ext_0069E660();

extern "C" __declspec(naked) void __fastcall fn_0069E7E0(void* self) {
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
        call ext_0069E660
        add esp, 0x1c
        ret
    }
}

// [0x00699000] sub_00699000 (52 bytes)
extern "C" void ext_00698F30();
extern "C" __declspec(naked) void __fastcall fn_00699000(void* self, int edx_unused, const float* v) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        fld dword ptr [edi]
        push ecx
        fstp dword ptr [esp]
        mov esi, ecx
        call ext_00698F30
        fld dword ptr [edi + 0x4]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00698F30
        fld dword ptr [edi + 0x8]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00698F30
        pop edi
        pop esi
        ret 4
    }
}

// [0x0069E810] sub_0069E810 (56 bytes)
extern "C" void ext_0069E750();

extern "C" __declspec(naked) int __fastcall fn_0069E810(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_0069E750
        lea eax, [esi + 4*esi]
        add esp, 0x18
        shl eax, 0x4
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00698F30] sub_00698F30 (68 bytes)
extern "C" void __stdcall ext_00536600(unsigned int size, int zero);
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00698F30(void* self, int edx_unused, float a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        push edi
        jne short L_nonzero
        xor edi, edi
        jmp short L_call
L_nonzero:
        mov edi, dword ptr [esi + 0x8]
        sub edi, eax
L_call:
        push 0x0
        lea eax, [edi + 0x4]
        push eax
        call ext_00536600
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je short L_invalid
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        cmp edi, eax
        jb short L_store
L_invalid:
        call dword ptr [mem_00925134]
L_store:
        mov ecx, dword ptr [esi + 0x4]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [edi + ecx]
        pop edi
        pop esi
        ret 0x4
    }
}

extern "C" void ext_00405FB0();
extern "C" void ext_00699810();

// [0x00699B80] sub_00699B80 (74 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00699B80(void* self, int /*edx*/, unsigned int count) {
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
        cmp esi, 0x5d1745d
        jbe L_alloc
        call ext_00405FB0
    L_alloc:
        push eax
        push esi
        call ext_00699810
        imul esi, esi, 0x2c
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

// [0x0069A590] sub_0069A590 (366 bytes)
extern "C" void ext_00672C20();
extern "C" void ext_00672E50();
extern "C" void ext_00675DB0();
extern "C" void ext_00699B80();
extern "C" void ext_0069A090();
extern "C" void ext_0069A1C0();
extern "C" void ext_0069A260();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void* __fastcall fn_0069A590(void* self) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        cmp esi, ebp
        je L_0069a6f7
        mov eax, dword ptr [ebp + 0x4]
        test eax, eax
        push edi
        je L_0069a5c2
        mov edi, dword ptr [ebp + 0x8]
        mov ecx, edi
        sub ecx, eax
        mov eax, 0x2e8ba2e9
        imul ecx
        sar edx, 0x3
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_0069a5d1
    L_0069a5c2:
        mov ecx, esi
        call ext_0069A260
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_0069a5d1:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        test ebx, ebx
        jne L_0069a5dd
        xor eax, eax
        jmp L_0069a5f3
    L_0069a5dd:
        mov edx, dword ptr [esi + 0x8]
        sub edx, ebx
        mov eax, 0x2e8ba2e9
        imul edx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_0069a5f3:
        cmp ecx, eax
        ja L_0069a656
        mov eax, dword ptr [ebp + 0x4]
        push ebx
        push edi
        push eax
        call ext_0069A090
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_00672C20
        mov eax, dword ptr [ebp + 0x4]
        add esp, 0x1c
        test eax, eax
        jne L_0069a62e
        imul eax, eax, 0x2c
        add eax, dword ptr [esi + 0x4]
        pop ebx
        mov dword ptr [esi + 0x8], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_0069a62e:
        mov ecx, dword ptr [ebp + 0x8]
        sub ecx, eax
        mov eax, 0x2e8ba2e9
        imul ecx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        imul eax, eax, 0x2c
        add eax, dword ptr [esi + 0x4]
        pop ebx
        mov dword ptr [esi + 0x8], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_0069a656:
        test ebx, ebx
        jne L_0069a65e
        xor eax, eax
        jmp L_0069a674
    L_0069a65e:
        mov edx, dword ptr [esi + 0xc]
        sub edx, ebx
        mov eax, 0x2e8ba2e9
        imul edx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_0069a674:
        cmp ecx, eax
        ja L_0069a6b0
        mov ecx, esi
        call ext_00675DB0
        mov edi, eax
        mov eax, dword ptr [ebp + 0x4]
        imul edi, edi, 0x2c
        add edi, eax
        push ebx
        push edi
        push eax
        call ext_0069A090
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ebp + 0x8]
        add esp, 0xc
        push eax
        push ecx
        push edi
        mov ecx, esi
        call ext_0069A1C0
        pop ebx
        mov dword ptr [esi + 0x8], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_0069a6b0:
        test ebx, ebx
        je L_0069a6cc
        mov edx, dword ptr [esi + 0x8]
        push edx
        push ebx
        mov ecx, esi
        call ext_00672E50
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_0069a6cc:
        mov ecx, ebp
        call ext_00675DB0
        push eax
        mov ecx, esi
        call ext_00699B80
        test al, al
        je L_0069a6f5
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ebp + 0x8]
        mov eax, dword ptr [ebp + 0x4]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_0069A1C0
        mov dword ptr [esi + 0x8], eax
    L_0069a6f5:
        pop ebx
        pop edi
    L_0069a6f7:
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    }
}

// [0x0069E600] sub_0069E600 (86 bytes)
extern "C" void ext_0069A590();
extern "C" __declspec(naked) void __cdecl fn_0069E600(void* dst, void* dst_end, void* src) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        cmp esi, dword ptr [esp + 0xc]
        je L_0069e654
        push ebx
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x1c]
        lea ebx, [edi + 0x1c]
        lea ebp, [edi + 0x2c]
        jmp L_0069e620
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_0069e620:
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FDC]
        push ebx
        lea ecx, [esi + 0x1c]
        call ext_0069A590
        push ebp
        lea ecx, [esi + 0x2c]
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [edi + 0x48]
        mov dword ptr [esi + 0x48], eax
        mov ecx, dword ptr [edi + 0x4c]
        mov dword ptr [esi + 0x4c], ecx
        add esi, 0x50
        cmp esi, dword ptr [esp + 0x18]
        jne L_0069e620
        pop edi
        pop ebp
        pop ebx
    L_0069e654:
        pop esi
        ret
    }
}

// [0x0069D4E0] sub_0069D4E0 (88 bytes)
extern "C" void ext_0069A590();
extern "C" __declspec(naked) void* __cdecl fn_0069D4E0(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je done
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_top:
        sub esi, 0x50
        sub edi, 0x50
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x1c]
        push eax
        lea ecx, [edi + 0x1c]
        call ext_0069A590
        lea ecx, [esi + 0x2c]
        push ecx
        lea ecx, [edi + 0x2c]
        call dword ptr [mem_00924FDC]
        cmp esi, ebx
        mov edx, dword ptr [esi + 0x48]
        mov dword ptr [edi + 0x48], edx
        mov eax, dword ptr [esi + 0x4c]
        mov dword ptr [edi + 0x4c], eax
        jne loop_top
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    done:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x0069E660] sub_0069E660 (92 bytes)
extern "C" void ext_0069D4E0();

extern "C" __declspec(naked) int __cdecl fn_0069E660(int a1, int a2, int a3) {
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
        call ext_0069D4E0
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 4*eax]
        shl eax, 0x4
        add esp, 0x18
        mov ecx, eax
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00698ED0] sub_00698ED0 (82 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00698ED0(void* self, int edx_unused, int val) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        test eax, eax
        push edi
        jne L_nonnull
        xor edi, edi
        jmp L_after_size
    L_nonnull:
        mov edi, dword ptr [esi + 8]
        sub edi, eax
    L_after_size:
        push 0
        lea eax, [edi + 4]
        push eax
        call ext_00536600
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        je L_invalid
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        cmp edi, eax
        jb L_valid
    L_invalid:
        call dword ptr [mem_00925134]
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esp + 0Ch]
        mov dword ptr [edi + ecx], edx
        pop edi
        pop esi
        ret 4
    L_valid:
        mov eax, ecx
        mov ecx, dword ptr [esp + 0Ch]
        mov dword ptr [edi + eax], ecx
        pop edi
        pop esi
        ret 4
    }
}

// [0x006989E0] sub_006989E0 (85 bytes)
extern "C" void ext_0067F5B0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_006989E0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x4]
        test esi, esi
        je L_call_a
        mov ecx, dword ptr [edi + 0x8]
        mov ebx, dword ptr [esp + 0x18]
        mov eax, ecx
        sub eax, esi
        cmp eax, ebx
        ja L_skip_a
    L_call_a:
        call ext_0067F5B0
    L_skip_a:
        cmp esi, ecx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        jbe L_skip_b
        call ebp
    L_skip_b:
        mov dword ptr [esp + 0x14], esi
        add esi, ebx
        cmp esi, dword ptr [edi + 0x8]
        ja L_call_c
        cmp esi, dword ptr [edi + 0x4]
        jae L_skip_c
    L_call_c:
        call ebp
    L_skip_c:
        cmp esi, dword ptr [edi + 0x8]
        jb L_done
        call ebp
    L_done:
        pop ebp
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x00698AD0] sub_00698AD0 (115 bytes)
extern "C" void ext_006989E0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924EAC;
extern "C" __declspec(naked) void __fastcall fn_00698AD0(void* self) {
    __asm {
        push -1
        push 0x8864ea
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x4], 0
        mov eax, dword ptr [esi]
        push edi
        push eax
        mov dword ptr [esp + 0x18], 0
        call ext_006989E0
        mov edi, dword ptr [esp + 0x1c]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924FE4]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esp + 0x8], 1
        call dword ptr [mem_00924EAC]
        mov ecx, dword ptr [esp + 0xc]
        add eax, 1
        add dword ptr [esi], eax
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x006977E0] sub_006977E0 (88 bytes)
extern "C" void ext_00697730();
extern "C" __declspec(naked) void* __fastcall fn_006977E0(void* self) {
    __asm {
        push -1
        push 0x8882e8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0xc], eax
        fld dword ptr [esp + 0x1c]
        push ecx
        mov dword ptr [esp + 0x14], eax
        fstp dword ptr [esp]
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esp + 0x1c]
        push eax
        call ext_00697730
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x00698E60] sub_00698E60 (88 bytes)
extern "C" void ext_006A3340();
extern "C" int mem_00924FFC;
extern "C" __declspec(naked) void __fastcall fn_00698E60(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        mov ecx, edi
        call dword ptr [mem_00924EAC]
        sub eax, 1
        push 0
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x18], eax
        call ext_00536600
        mov eax, dword ptr [esi + 4]
        test eax, eax
        je loc_698E90
        mov ecx, dword ptr [esi + 8]
        sub ecx, eax
        jne loc_698E96
    loc_698E90:
        call dword ptr [mem_00925134]
    loc_698E96:
        mov esi, dword ptr [esi + 4]
        lea edx, [esp + 0x10]
        push edx
        push esi
        push 0
        mov ecx, edi
        call dword ptr [mem_00924FFC]
        push eax
        call ext_006A3340
        add esp, 0xc
        pop edi
        pop esi
        pop ecx
        ret 4
    }
}

extern "C" void ext_0041CDA0();
extern "C" void ext_0041E540();
extern "C" void ext_004C6F60();
extern "C" void ext_004C7200();
extern "C" void ext_00505D50();
extern "C" void ext_0066AC90();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

// [0x006993A0] sub_006993A0 (246 bytes)
extern "C" __declspec(naked) void __fastcall fn_006993A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b6444
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc8
        push esi
        call ext_0041E540
        mov esi, dword ptr [esp + 0xdc]
        push esi
        lea ecx, [eax + 0x4]
        call ext_00505D50
        test eax, eax
        je loc_006993fa
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
    loc_006993fa:
        cmp byte ptr [esp + 0xe4], 0x0
        je loc_0069947e
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
        mov dword ptr [esp + 0x12c], 0x0
        call ext_0041CDA0
        add esp, 0x4
        push esi
        call ext_0066AC90
        add esp, 0x20
        lea ecx, [esp + 0xa4]
        mov dword ptr [esp + 0x10c], 0xffffffff
        call ext_004C6F60
        push eax
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xd8], 0x1
        call ext_004C7200
        push 0x9e9404
        lea ecx, [esp + 0x10]
        push ecx
        call ext_006A6DD2
    loc_0069947e:
        mov ecx, dword ptr [esp + 0xcc]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    }
}

// [0x00697EE0] sub_00697EE0 (90 bytes)
extern "C" void ext_00697CD0();
extern "C" void ext_006A6C87();
extern "C" int mem_00B5C8D4;

extern "C" __declspec(naked) void __fastcall fn_00697EE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b631e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5C8D4], al
        jne done
        or dword ptr [mem_00B5C8D4], eax
        mov ecx, 0xb5c8cc
        mov dword ptr [esp + 0x8], 0x0
        call ext_00697CD0
        push 0x921f00
        call ext_006A6C87
        add esp, 0x4
    done:
        mov ecx, dword ptr [esp]
        mov eax, 0xb5c8cc
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00692C40] sub_00692C40 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0041CDA0();
extern "C" void ext_004C2290();
extern "C" void ext_00692B50();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_00692C40(void* self) {
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
        push 0xa398d0
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x18
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_004C2290
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, [esp + 0x8]
        push eax
        call ext_0041CDA0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x18
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nullobj
        mov ecx, eax
        call ext_00692B50
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_nullobj:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    }
}

// [0x0069B790] sub_0069B790 (99 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_004A59A0();
extern "C" __declspec(naked) void __fastcall fn_0069B790(void* self, int edx_unused, unsigned int n, const int* value) {
    __asm {
        push ebx
        push esi
        xor ebx, ebx
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp edi, ebx
        mov esi, ecx
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        je L_end_0069B790
        cmp edi, 0x3fffffff
        jbe L_alloc_0069B790
        call ext_00405FB0
L_alloc_0069B790:
        push ebx
        push edi
        call ext_004A59A0
        lea ecx, [eax + 4*edi]
        add esp, 0x8
        cmp edi, ebx
        mov dword ptr [esi + 0xc], ecx
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        mov ecx, edi
        mov edx, eax
        jbe L_fill_end_0069B790
        mov ebx, dword ptr [esp + 0x14]
        push ebp
L_loop_0069B790:
        mov ebp, dword ptr [ebx]
        mov dword ptr [edx], ebp
        sub ecx, 0x1
        add edx, 0x4
        test ecx, ecx
        ja L_loop_0069B790
        pop ebp
L_fill_end_0069B790:
        lea edx, [eax + 4*edi]
        mov dword ptr [esi + 0x8], edx
L_end_0069B790:
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

extern "C" void ext_00493D90();
extern "C" void ext_006404E0();
extern "C" void ext_0067EC60();
extern "C" void ext_0067EE10();
extern "C" int mem_008B40D8;
extern "C" int mem_00925134;

// [0x00695D40] sub_00695D40 (179 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00695D40(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push offset mem_008B40D8
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr fs:[0x0]
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [esp + 0x10]
        call ext_0067EC60
        mov esi, dword ptr [edi + 4]
        cmp esi, dword ptr [edi + 8]
        mov dword ptr [esp + 0x24], 0
        jbe loc_695D82
        call dword ptr [mem_00925134]
    loc_695D82:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe loc_695D90
        call dword ptr [mem_00925134]
    loc_695D90:
        cmp esi, ebx
        je loc_695DCB
        cmp esi, dword ptr [edi + 8]
        jb loc_695D9F
        call dword ptr [mem_00925134]
    loc_695D9F:
        mov eax, dword ptr [ebp + 0xc]
        fld qword ptr [esi]
        mov ecx, dword ptr [ebp + 8]
        fstp qword ptr [esp + 0x10]
        push eax
        call ext_006404E0
        push eax
        lea ecx, [esp + 0x14]
        call ext_0067EE10
        cmp esi, dword ptr [edi + 8]
        jb loc_695DC6
        call dword ptr [mem_00925134]
    loc_695DC6:
        add esi, 8
        jmp loc_695D82
    loc_695DCB:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x24], 0xffffffff
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}

// [0x0069B800] sub_0069B800 (277 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_005010D0();
extern "C" void ext_00527EC0();
extern "C" void ext_00685AE0();
extern "C" void ext_00685E40();
extern "C" void ext_006862C0();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __fastcall fn_0069B800(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push 0xFFFFFFFF
        push 0x008B6783
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x14], 0
        jne loc_69B836
        xor eax, eax
        mov ecx, dword ptr [esp + 0xC]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0x10

    loc_69B836:
        mov ecx, dword ptr [edi + 0x18]
        test ecx, ecx
        mov ebx, dword ptr [esp + 0x1C]
        je loc_69B897
        push ebx
        call ext_005010D0
        mov esi, eax
        test esi, esi
        mov dword ptr [esp + 0x1C], esi
        je loc_69B897
        mov eax, dword ptr [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00685E40
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        mov ecx, esi
        call ext_00685AE0
        mov edx, dword ptr [esp + 0x28]
        push edx
        lea ecx, [esi + 0x6C]
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [edi + 0x14]
        lea eax, [esp + 0x1C]
        push eax
        call ext_0041A920
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, dword ptr [edi + 0x18]
        mov dword ptr [esp + 0x28], esi
        call ext_00527EC0
        jmp loc_69B8FF

    loc_69B897:
        push 0x90
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x1C], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0
        je loc_69B8CA
        mov edx, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x20]
        push edx
        push ecx
        push ebx
        mov ecx, eax
        call ext_006862C0
        mov esi, eax
        jmp loc_69B8CC

    loc_69B8CA:
        xor esi, esi

    loc_69B8CC:
        mov dword ptr [esp + 0x24], esi
        mov edx, dword ptr [esp + 0x28]
        push edx
        lea ecx, [esi + 0x6C]
        mov dword ptr [esp + 0x18], 1
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [edi + 0x14]
        lea eax, [esp + 0x20]
        push eax
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esp + 0x24], esi
        call ext_0041A920

    loc_69B8FF:
        mov ecx, dword ptr [esp + 0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xC
        ret 0x10
    }
}

// [0x00697E70] sub_00697E70 (109 bytes)
extern "C" void ext_007C19A0();
extern "C" void ext_007C1B00();
extern "C" __declspec(naked) int __fastcall fn_00697E70(int** self, int edx_unused, int a1, int a2, int a3, int* a4) {
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [edx + 0x4], eax
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0xc], edx
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [edi]
        mov     dword ptr [eax + 0x10], ecx
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x10]
        cmp     edx, dword ptr [edi]
        jne     L_err
        push    eax
        call    ext_007C19A0
        add     esp, 0x4
        test    eax, eax
        jne     L_ret
        mov     eax, dword ptr [esi]
        push    0x4
        push    eax
        call    ext_007C1B00
        add     esp, 0x8
        cmp     eax, 0x1
        je      L_ok
        test    eax, eax
        jne     L_ret
    L_err:
        pop     edi
        mov     eax, 0xfffffffb
        pop     esi
        ret     0x10
    L_ok:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax + 0x14]
        mov     dword ptr [edi], ecx
        xor     eax, eax
    L_ret:
        pop     edi
        pop     esi
        ret     0x10
    }
}

// [0x00697F40] sub_00697F40 (279 bytes)
extern "C" void ext_00403560();
extern "C" void ext_00697E70();
extern "C" void ext_006A6DD2();
extern "C" int mem_00892ED9;
extern "C" int mem_00924EAC;
extern "C" int mem_0093BD38;
extern "C" int mem_0098FA60;
extern "C" int mem_009548E0;
extern "C" int mem_0093F7B0;
extern "C" int mem_00925058;
extern "C" int mem_0092500C;
extern "C" int mem_00924FFC;
extern "C" int mem_0098FA48;
extern "C" int mem_00924FE4;
extern "C" int mem_009D47A4;

extern "C" __declspec(naked) void __fastcall fn_00697F40(void* self) {
    __asm {
        push -1
        push offset mem_00892ED9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x64]
        push esi
        mov ebx, ecx
        push edi
        mov ecx, ebp
        call dword ptr [mem_00924EAC]
        test eax, eax
        mov dword ptr [esp + 0x6c], eax
        fild dword ptr [esp + 0x6c]
        mov esi, eax
        jge L_00697F7E
        fadd qword ptr [mem_0093BD38]
    L_00697F7E:
        fmul qword ptr [mem_0098FA60]
        mov edi, dword ptr [esp + 0x70]
        fnstcw word ptr [esp + 0x6c]
        movzx eax, word ptr [esp + 0x6c]
        fadd qword ptr [mem_009548E0]
        or eax, 0xc00
        mov dword ptr [esp + 0x10], eax
        mov ecx, edi
        fadd qword ptr [mem_0093F7B0]
        fldcw word ptr [esp + 0x10]
        fistp qword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x10]
        push eax
        fldcw word ptr [esp + 0x70]
        mov dword ptr [esp + 0x70], eax
        call dword ptr [mem_00925058]
        lea ecx, [esp + 0x6c]
        push ecx
        push 0
        mov ecx, edi
        call dword ptr [mem_0092500C]
        push eax
        push esi
        push 0
        mov ecx, ebp
        call dword ptr [mem_00924FFC]
        push eax
        mov ecx, ebx
        call ext_00697E70
        test eax, eax
        je L_0069801E
        push offset mem_0098FA48
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x18]
        push edx
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x68], 0
        call ext_00403560
        push offset mem_009D47A4
        lea eax, [esp + 0x38]
        push eax
        call ext_006A6DD2
    L_0069801E:
        mov ebx, dword ptr [esp + 0x6c]
        push ebx
        mov ecx, edi
        call dword ptr [mem_0092500C]
        mov ecx, dword ptr [esp + 0x74]
        mov dword ptr [eax], esi
        lea esi, [ebx + 4]
        lea edx, [esi + ecx]
        push edx
        mov ecx, edi
        call dword ptr [mem_00925058]
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 0xc
    }
}

// [0x0069C150] sub_0069C150 (112 bytes)
extern "C" void ext_0069B6A0();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_0069C150(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x8b6814
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_00924FE0]
        lea eax, [edi + 0x1c]
        lea ecx, [esi + 0x1c]
        push eax
        mov dword ptr [esp + 0x18], 0
        call ext_0069B6A0
        lea ecx, [edi + 0x2c]
        push ecx
        lea ecx, [esi + 0x2c]
        mov byte ptr [esp + 0x18], 1
        call dword ptr [mem_00924FE0]
        mov edx, dword ptr [edi + 0x48]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x48], edx
        mov eax, dword ptr [edi + 0x4c]
        mov dword ptr [esi + 0x4c], eax
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x0069E6C0] sub_0069E6C0 (141 bytes)
extern "C" void ext_00673420();
extern "C" void ext_0069C150();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void* __cdecl fn_0069E6C0(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8b6a11
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
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
        call ext_0069C150
    skip_ctor:
        add esi, 0x50
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x50
        jmp loop_top
    handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
    dtor_loop:
        mov ecx, esi
        call ext_00673420
        add esi, 0x50
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
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0069E750] sub_0069E750 (141 bytes)
extern "C" void ext_00673420();
extern "C" void ext_0069C150();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_0069E750(void* first, unsigned int count, const void* val) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x008B6A31
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
    loop_0069E750:
        cmp edi, ebx
        jbe exit_0069E750
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_0069E750
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call ext_0069C150
    skip_0069E750:
        sub edi, 0x1
        add esi, 0x50
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_0069E750
    handler_0069E750:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow_0069E750
    dtor_0069E750:
        mov ecx, esi
        call ext_00673420
        add esi, 0x50
        cmp esi, edi
        jne dtor_0069E750
    rethrow_0069E750:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_0069E750:
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

// [0x00692F50] sub_00692F50 (114 bytes)
extern "C" void ext_004E3D30();
extern "C" void ext_004ECB40();

extern "C" __declspec(naked) void __fastcall fn_00692F50(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b33b8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        lea eax, [esp + 0x8]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_004ECB40
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x1c], 0x0
        call ext_004E3D30
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        mov dword ptr [esp + 0x18], 0xffffffff
        je skip_dtor
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x8]
        push eax
        call edx
    skip_dtor:
        mov ecx, dword ptr [esp + 0x10]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x4
    }
}

// [0x00698F80] sub_00698F80 (116 bytes)
extern "C" void ext_0041A8B0();
extern "C" void ext_00698BC0();
extern "C" int mem_00925134;
extern "C" int mem_009250AC;
extern "C" int mem_009250A8;
extern "C" __declspec(naked) void __fastcall fn_00698F80(void* self, int edx_unused, void* arg) {
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], eax
        push edi
        mov dword ptr [esp + 0x10], eax
        jbe skip_invalid
        call dword ptr [mem_00925134]
    skip_invalid:
        mov edi, dword ptr [esp + 0x28]
        lea eax, [esp + 0x14]
        push eax
        mov ecx, edi
        call dword ptr [mem_009250AC]
        mov ebx, dword ptr [eax]
        mov ebp, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, edi
        call dword ptr [mem_009250A8]
        mov edx, dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax + 0x4]
        push edx
        mov edx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        push ebp
        push ebx
        push ecx
        push edx
        push eax
        push esi
        mov ecx, esi
        call ext_00698BC0
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x2c], 0x0
        call ext_0041A8B0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x4
    }
}

// [0x0069C760] sub_0069C760 (1125 bytes)
extern "C" void ext_006A0670();
extern "C" void ext_00698ED0();
extern "C" void ext_00698F80();
extern "C" void ext_00698EC0();
extern "C" void ext_0069B790();
extern "C" void ext_00672350();
extern "C" void ext_00698960();
extern "C" void ext_006A5C5C();
extern "C" void ext_00436F30();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0069C760(void* self) {
    __asm {
        push -1
        push 0x008b6880
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x10], esi
        call ext_006A0670
        mov ecx, dword ptr [esi + 0x24]
        add esi, 0x20
        xor eax, eax
        cmp ecx, eax
        mov dword ptr [esp + 0x44], eax
        je LA_0
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 5
LA_0:
        push eax
        lea ecx, [esp + 0x20]
        call ext_00698ED0
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jbe LA_1
        call ebp
LA_1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe LA_2
        call ebp
LA_2:
        cmp esi, esi
        je LA_3
        call ebp
LA_3:
        cmp edi, ebx
        je LB_0
        cmp edi, dword ptr [esi + 0x8]
        jb LA_4
        call ebp
LA_4:
        push edi
        lea ecx, [esp + 0x20]
        call ext_00698F80
        cmp edi, dword ptr [esi + 0x8]
        jb LA_5
        call ebp
LA_5:
        mov eax, dword ptr [edi + 0x1c]
        push eax
        lea ecx, [esp + 0x20]
        call ext_00698ED0
        cmp edi, dword ptr [esi + 0x8]
        jb LA_6
        call ebp
LA_6:
        add edi, 0x20
        jmp LA_2
LB_0:
        mov esi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x34]
        add esi, 0x30
        test ecx, ecx
        jne LB_1
        xor eax, eax
        jmp LB_2
LB_1:
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 5
LB_2:
        push eax
        lea ecx, [esp + 0x20]
        call ext_00698ED0
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe LB_3
        call ebp
LB_3:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe LB_4
        call ebp
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
LB_4:
        cmp esi, esi
        je LB_5
        call ebp
LB_5:
        cmp edi, ebx
        je LC_0
        cmp edi, dword ptr [esi + 0x8]
        jb LB_6
        call ebp
LB_6:
        mov ecx, dword ptr [edi + 0x1c]
        push ecx
        lea ecx, [esp + 0x20]
        call ext_00698ED0
        cmp edi, dword ptr [esi + 0x8]
        jb LB_7
        call ebp
LB_7:
        push edi
        lea ecx, [esp + 0x20]
        call ext_00698F80
        cmp edi, dword ptr [esi + 0x8]
        jb LB_8
        call ebp
LB_8:
        add edi, 0x20
        jmp LB_4
LC_0:
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [edx + 0x10]
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jne LC_1
        xor eax, eax
        jmp LC_2
LC_1:
        mov eax, dword ptr [eax + 0x8]
        sub eax, ecx
        sar eax, 2
LC_2:
        push eax
        lea ecx, [esp + 0x20]
        call ext_00698ED0
        mov eax, dword ptr [esp + 0x10]
        mov edi, dword ptr [eax + 0x10]
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe LC_3
        call ebp
LC_3:
        mov ecx, dword ptr [esp + 0x10]
        mov ebx, dword ptr [ecx + 0x10]
        mov ebp, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], ebp
        jbe LC_4
        call dword ptr [mem_00925134]
LC_4:
        test edi, edi
        je LC_5
        cmp edi, ebx
        je LC_6
LC_5:
        call dword ptr [mem_00925134]
LC_6:
        cmp esi, ebp
        je LD_0
        test edi, edi
        jne LC_7
        call dword ptr [mem_00925134]
LC_7:
        cmp esi, dword ptr [edi + 0x8]
        jb LC_8
        call dword ptr [mem_00925134]
LC_8:
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 0x28]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x30]
        call edx
        push eax
        lea ecx, [esp + 0x20]
        call ext_00698EC0
        cmp esi, dword ptr [edi + 0x8]
        jb LC_9
        call dword ptr [mem_00925134]
LC_9:
        add esi, 0x4
        jmp LC_4
LD_0:
        mov eax, dword ptr [esp + 0x10]
        mov eax, dword ptr [eax + 0x8]
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jne LD_1
        xor ebp, ebp
        jmp LD_2
LD_1:
        mov ebp, dword ptr [eax + 0x8]
        sub ebp, ecx
        sar ebp, 3
LD_2:
        lea ecx, [esp + 0x18]
        push ecx
        push ebp
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x20], 0x0
        call ext_0069B790
        push ebp
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x48], 0x1
        call ext_00698ED0
        mov ebx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [ebx + 0x54]
        add ebx, 0x50
        test ecx, ecx
        jne LE_0
        xor eax, eax
        jmp LE_1
LE_0:
        mov eax, dword ptr [ebx + 0x8]
        sub eax, ecx
        sar eax, 3
LE_1:
        push eax
        lea ecx, [esp + 0x20]
        call ext_00698ED0
        mov edi, dword ptr [ebx + 0x4]
        cmp edi, dword ptr [ebx + 0x8]
        jbe LE_2
        call dword ptr [mem_00925134]
LE_2:
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        mov dword ptr [esp + 0x18], esi
        jbe LE_3
        call dword ptr [mem_00925134]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
LE_3:
        cmp ebx, ebx
        je LE_4
        call dword ptr [mem_00925134]
LE_4:
        cmp edi, esi
        je LF_0
        cmp edi, dword ptr [ebx + 0x8]
        jb LE_5
        call dword ptr [mem_00925134]
LE_5:
        cmp edi, dword ptr [ebx + 0x8]
        mov ebp, dword ptr [edi]
        jb LE_6
        call dword ptr [mem_00925134]
LE_6:
        mov ecx, dword ptr [esp + 0x30]
        test ecx, ecx
        mov esi, dword ptr [edi + 0x4]
        je LE_7
        mov eax, dword ptr [esp + 0x34]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jb LE_8
LE_7:
        call dword ptr [mem_00925134]
LE_8:
        mov edx, dword ptr [esp + 0x30]
        push ebp
        lea ecx, [esp + 0x20]
        mov dword ptr [edx + esi*4], 0x1
        call ext_00698ED0
        push esi
        lea ecx, [esp + 0x20]
        call ext_00698ED0
        cmp edi, dword ptr [ebx + 0x8]
        jb LE_9
        call dword ptr [mem_00925134]
LE_9:
        mov esi, dword ptr [esp + 0x18]
        mov ebp, dword ptr [esp + 0x14]
        add edi, 0x8
        jmp LE_3
LF_0:
        xor edi, edi
        test ebp, ebp
        jle LG_0
        mov ebx, dword ptr [esp + 0x10]
LF_1:
        mov esi, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je LF_2
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jb LF_3
LF_2:
        call dword ptr [mem_00925134]
LF_3:
        mov ecx, dword ptr [esi + 0x4]
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [ecx + edi*8]
        call ext_00672350
        add edi, 0x1
        cmp edi, ebp
        jl LF_1
LG_0:
        mov edi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [edi + 0x74]
        add edi, 0x70
        test ecx, ecx
        jne LG_1
        xor eax, eax
        jmp LG_2
LG_1:
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 3
LG_2:
        push eax
        lea ecx, [esp + 0x20]
        call ext_00698ED0
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe LG_3
        call dword ptr [mem_00925134]
LG_3:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        mov dword ptr [esp + 0x18], ebx
        jbe LG_4
        call dword ptr [mem_00925134]
LG_4:
        cmp edi, edi
        mov ebp, dword ptr [mem_00925134]
        je LG_5
        call ebp
LG_5:
        cmp esi, ebx
        je LH_0
        cmp esi, dword ptr [edi + 0x8]
        jb LG_6
        call ebp
LG_6:
        cmp esi, dword ptr [edi + 0x8]
        mov ebp, dword ptr [esi]
        jb LG_7
        call dword ptr [mem_00925134]
LG_7:
        mov ebx, dword ptr [esi + 0x4]
        push ebp
        lea ecx, [esp + 0x20]
        call ext_00698ED0
        push ebx
        lea ecx, [esp + 0x20]
        call ext_00698ED0
        cmp esi, dword ptr [edi + 0x8]
        jb LG_8
        call dword ptr [mem_00925134]
LG_8:
        mov ebx, dword ptr [esp + 0x18]
        add esi, 0x8
        jmp LG_4
LH_0:
        mov ebx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebx + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jne LH_1
        xor eax, eax
        jmp LH_2
LH_1:
        mov eax, dword ptr [eax + 0x8]
        sub eax, ecx
        sar eax, 3
LH_2:
        push eax
        lea ecx, [esp + 0x20]
        call ext_00698ED0
        mov edi, dword ptr [ebx + 0x4]
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe LH_3
        call ebp
LH_3:
        mov ebx, dword ptr [ebx + 0x4]
        mov ebp, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], ebp
        jbe LH_4
        call dword ptr [mem_00925134]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
LH_4:
        test edi, edi
        je LH_5
        cmp edi, ebx
        je LH_6
LH_5:
        call dword ptr [mem_00925134]
LH_6:
        cmp esi, ebp
        je LJ_0
        test edi, edi
        jne LH_7
        call dword ptr [mem_00925134]
LH_7:
        cmp esi, dword ptr [edi + 0x8]
        jb LH_8
        call dword ptr [mem_00925134]
LH_8:
        mov edx, dword ptr [esi]
        push edx
        lea ecx, [esp + 0x20]
        call ext_00698ED0
        mov eax, dword ptr [esi + 0x4]
        push eax
        lea ecx, [esp + 0x20]
        call ext_00698ED0
        cmp esi, dword ptr [edi + 0x8]
        jb LH_9
        call dword ptr [mem_00925134]
LH_9:
        add esi, 0x8
        jmp LH_4
LJ_0:
        mov ecx, dword ptr [esp + 0x4c]
        push ecx
        lea ecx, [esp + 0x20]
        call ext_00698960
        mov eax, dword ptr [esp + 0x30]
        test eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        je LJ_1
        push eax
        call ext_006A5C5C
        add esp, 0x4
LJ_1:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x34], 0xffffffff
        call ext_00436F30
        mov ecx, dword ptr [esp + 0x2c]
        mov dword ptr fs:[0], ecx
        add esp, 0x38
        ret 0x4
    }
}

// [0x00697210] sub_00697210 (121 bytes)
extern "C" void ext_004AEFF0();
extern "C" void ext_004F0430();
extern "C" void ext_00676C90();
extern "C" __declspec(naked) void __fastcall fn_00697210(void* self) {
    __asm {
        push -1
        push 0x008B618C
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x150]
        mov dword ptr [esp + 0x10], 0x3
        call ext_004AEFF0
        lea ecx, [esi + 0xd4]
        mov byte ptr [esp + 0x10], 0x2
        call ext_00676C90
        lea ecx, [esi + 0x58]
        mov byte ptr [esp + 0x10], 0x1
        call ext_00676C90
        lea ecx, [esi + 0x2c]
        mov byte ptr [esp + 0x10], 0x0
        call ext_004F0430
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_004F0430
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00697070] sub_00697070 (414 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_006655F0();
extern "C" void ext_00696DD0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" int mem_00924FF0;
extern "C" int mem_00925234;

extern "C" __declspec(naked) void __fastcall fn_00697070(void* self, int edx_unused, int a1) {
    __asm {
        push    -1
        push    0x8b6151
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x2c
        push    ebx
        push    ebp
        xor     ebx, ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x1c], ebx
        push    0x98f664
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x48], ebx
        call    dword ptr [mem_00924FE4]
        mov     edx, dword ptr [esp + 0x4c]
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        push    edx
        mov     byte ptr [esp + 0x50], 1
        call    ext_006655F0
        add     esp, 0xc
        lea     ecx, [esp + 0x20]
        mov     byte ptr [esp + 0x44], bl
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, ebx
        je      L_inv1
        mov     esi, dword ptr [esp + 0x18]
        sub     esi, ecx
        mov     eax, 0x92492493
        imul    esi
        add     edx, esi
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
        jne     L_ok1
    L_inv1:
        call    dword ptr [mem_00925134]
        mov     ecx, dword ptr [esp + 0x14]
    L_ok1:
        call    dword ptr [mem_00924FF0]
        mov     ebp, dword ptr [mem_00925234]
        push    eax
        call    ebp
        mov     esi, dword ptr [esp + 0x18]
        add     esp, 4
        cmp     esi, ebx
        mov     dword ptr [edi + 4], eax
        je      L_inv2
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, esi
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
        cmp     eax, 1
        ja      L_ok2
    L_inv2:
        call    dword ptr [mem_00925134]
        mov     esi, dword ptr [esp + 0x14]
    L_ok2:
        lea     ecx, [esi + 0x1c]
        call    dword ptr [mem_00924FF0]
        push    eax
        call    ebp
        mov     esi, dword ptr [esp + 0x18]
        add     esp, 4
        cmp     esi, ebx
        mov     dword ptr [edi + 8], eax
        je      L_inv3
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, esi
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
        cmp     eax, 2
        ja      L_ok3
    L_inv3:
        call    dword ptr [mem_00925134]
        mov     esi, dword ptr [esp + 0x14]
    L_ok3:
        lea     ecx, [esi + 0x38]
        call    dword ptr [mem_00924FF0]
        push    eax
        call    ebp
        mov     esi, dword ptr [esp + 0x18]
        add     esp, 4
        cmp     esi, ebx
        mov     dword ptr [edi + 0xc], eax
        je      L_inv4
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, esi
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
        cmp     eax, 3
        ja      L_ok4
    L_inv4:
        call    dword ptr [mem_00925134]
        mov     esi, dword ptr [esp + 0x14]
    L_ok4:
        lea     ecx, [esi + 0x54]
        call    dword ptr [mem_00924FF0]
        push    eax
        call    ebp
        add     esp, 4
        mov     ecx, edi
        mov     dword ptr [edi + 0x10], eax
        call    ext_00696DD0
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x44], -1
        call    ext_004026E0
        mov     ecx, dword ptr [esp + 0x3c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     fs:[0], ecx
        add     esp, 0x38
        ret     4
    }
}

// [0x00693620] sub_00693620 (123 bytes)
extern "C" void ext_006798D0();
extern "C" void ext_00693130();
extern "C" void ext_006931E0();
extern "C" void ext_00693290();
extern "C" void ext_00693340();
extern "C" void ext_006933F0();
extern "C" void ext_006934A0();
extern "C" void ext_00693590();
extern "C" int mem_00924FE4;
extern "C" int mem_00A9F988;
extern "C" int mem_00928B5D;
extern "C" int mem_0098F360;
extern "C" int mem_0098F354;
extern "C" int mem_0098F34C;
extern "C" int mem_0098F344;

extern "C" __declspec(naked) void __fastcall fn_00693620(void* self) {
    __asm {
        push ecx
        push 0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push offset mem_00928B5D
        call dword ptr [mem_00924FE4]
        call ext_006934A0
        add esp, 0x20
        lea eax, [esp]
        push 0
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_00693590
        mov ecx, dword ptr [mem_00A9F988]
        push ecx
        lea ecx, [esp + 4]
        call ext_00693130
        push offset mem_0098F360
        lea ecx, [esp + 4]
        call ext_006931E0
        push offset mem_0098F354
        lea ecx, [esp + 4]
        call ext_00693290
        push offset mem_0098F34C
        lea ecx, [esp + 4]
        call ext_00693340
        push offset mem_0098F344
        lea ecx, [esp + 4]
        call ext_006933F0
        pop ecx
        ret
    }
}

// [0x0069C330] sub_0069C330 (195 bytes)
extern "C" void ext_004E3D30();
extern "C" void ext_006720E0();
extern "C" int mem_0092501C;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0069C330(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8926a1
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push esi
        mov esi, dword ptr [esp + 0x38]
        add dword ptr [esi], 1
        mov eax, dword ptr [esi]
        push edi
        mov edi, ecx
        mov cl, byte ptr [eax]
        test cl, cl
        mov edx, eax
        je loc_69c370
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    loc_69c360:
        cmp cl, 0x22
        je loc_69c370
        add eax, 1
        mov dword ptr [esi], eax
        mov cl, byte ptr [eax]
        test cl, cl
        jne loc_69c360
    loc_69c370:
        mov eax, dword ptr [esi]
        push eax
        push edx
        lea ecx, [esp + 0x18]
        call dword ptr [mem_0092501C]
        add dword ptr [esi], 1
        cmp byte ptr [esp + 0x40], 0
        mov dword ptr [esp + 0x34], 0
        je loc_69c3c9
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0xc]
        call ext_006720E0
        mov ecx, dword ptr [edi + 8]
        lea edx, [esp + 8]
        push edx
        mov byte ptr [esp + 0x38], 1
        call ext_004E3D30
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        mov byte ptr [esp + 0x34], 0
        je loc_69c3c9
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 8]
        push edx
        call eax
    loc_69c3c9:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        mov eax, 0x58
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 8
    }
}

// [0x0069BD80] sub_0069BD80 (258 bytes)
extern "C" void ext_00412690();
extern "C" void ext_006A2B20();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0069BD80(void* self) {
    __asm {
        sub esp, 0x30
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je loc_69be7c
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 0x3
        je loc_69be7c
        push ebx
        mov ebx, dword ptr [esi + 0x8]
        cmp eax, ebx
        jbe loc_69bdb0
        call dword ptr [mem_00925134]
    loc_69bdb0:
        lea eax, [ebx - 0x8]
        cmp eax, dword ptr [esi + 0x8]
        push ebp
        mov ebp, esi
        mov dword ptr [esp + 0x14], ebx
        ja loc_69bdc4
        cmp eax, dword ptr [esi + 0x4]
        jae loc_69bdca
    loc_69bdc4:
        call dword ptr [mem_00925134]
    loc_69bdca:
        lea esi, [ebx - 0x8]
        cmp esi, dword ptr [ebp + 0x8]
        pop ebp
        jb loc_69bdd9
        call dword ptr [mem_00925134]
    loc_69bdd9:
        cmp dword ptr [esi], 0x19
        jne loc_69be7b
        mov ebx, dword ptr [esi + 0x4]
        mov esi, dword ptr [edi + 0x4]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je loc_69bdfb
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x3
        cmp ebx, eax
        jb loc_69be01
    loc_69bdfb:
        call dword ptr [mem_00925134]
    loc_69be01:
        mov edx, dword ptr [esi + 0x4]
        cmp dword ptr [edx + 8*ebx], 0x1a
        lea ecx, [edx + 8*ebx]
        je loc_69be28
        push edi
        push 0x5
        lea ecx, [esp + 0x1c]
        call ext_006A2B20
        push 0xa1a86c
        lea eax, [esp + 0x18]
        push eax
        call ext_006A6DD2
    loc_69be28:
        mov eax, dword ptr [edi + 0x4]
        mov edx, dword ptr [eax + 0x4]
        test edx, edx
        mov esi, dword ptr [ecx + 0x4]
        jne loc_69be39
        xor eax, eax
        jmp loc_69be41
    loc_69be39:
        mov eax, dword ptr [eax + 0x8]
        sub eax, edx
        sar eax, 0x3
    loc_69be41:
        add eax, 0x1
        mov dword ptr [ecx + 0x4], eax
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x10], 0x17
        mov dword ptr [esp + 0x14], esi
        call ext_00412690
        mov edi, dword ptr [edi]
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je loc_69be7b
        mov ecx, dword ptr [edi + 0x8]
        mov edx, ecx
        sub edx, eax
        sar edx, 0x3
        je loc_69be7b
        add ecx, -0x8
        mov dword ptr [edi + 0x8], ecx
    loc_69be7b:
        pop ebx
    loc_69be7c:
        pop edi
        pop esi
        add esp, 0x30
        ret
    }
}

// [0x00695E40] sub_00695E40 (325 bytes)
extern "C" void ext_00412690();
extern "C" void ext_00427A60();
extern "C" void ext_0048EF80();
extern "C" void ext_00493D90();
extern "C" void ext_0067EC60();
extern "C" void ext_0067ED40();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00695E40(void* self, int edx_dummy, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b6058
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x30
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], esi
        push edi
        jbe short loc_695e71
        call dword ptr [mem_00925134]
    loc_695e71:
        mov edi, dword ptr [ebx + 4]
        cmp edi, dword ptr [ebx + 8]
        jbe short loc_695e7f
        call dword ptr [mem_00925134]
    loc_695e7f:
        push esi
        push ebx
        push edi
        push ebx
        lea eax, [esp + 0x28]
        push eax
        mov ecx, ebx
        call ext_0048EF80
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [esi + 0x28]
        add esi, 0x24
        cmp edi, dword ptr [esi + 8]
        jbe short loc_695ea3
        call dword ptr [mem_00925134]
    loc_695ea3:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x28], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        jbe short loc_695ec6
        call dword ptr [mem_00925134]
    loc_695ec6:
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x2c], esi
        mov dword ptr [esp + 0x30], esi
        mov dword ptr [esp + 0x34], edi
        call ext_00427A60
        lea ecx, [esp + 0x10]
        call ext_0067EC60
        mov dword ptr [esp + 0x44], 0
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    loc_695ef0:
        mov edi, dword ptr [esp + 0x24]
        test edi, edi
        je short loc_695efe
        cmp edi, dword ptr [esp + 0x30]
        je short loc_695f04
    loc_695efe:
        call dword ptr [mem_00925134]
    loc_695f04:
        mov esi, dword ptr [esp + 0x28]
        cmp esi, dword ptr [esp + 0x34]
        jae short loc_695f60
        test edi, edi
        jne short loc_695f18
        call dword ptr [mem_00925134]
    loc_695f18:
        cmp esi, dword ptr [edi + 8]
        jb short loc_695f23
        call dword ptr [mem_00925134]
    loc_695f23:
        mov ecx, dword ptr [esi]
        push ecx
        lea ecx, [esp + 0x14]
        call ext_0067ED40
        fld qword ptr [esp + 0x10]
        lea edx, [esp + 0x18]
        fstp qword ptr [esp + 0x18]
        push edx
        mov ecx, ebx
        call ext_00412690
        cmp esi, dword ptr [edi + 8]
        jb short loc_695f4e
        call dword ptr [mem_00925134]
    loc_695f4e:
        add esi, 4
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x28], esi
        call ext_00427A60
        jmp short loc_695ef0
    loc_695f60:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x44], 0xffffffff
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x3c]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x0069B9E0] sub_0069B9E0 (505 bytes)
extern "C" void ext_00401CC0();
extern "C" void ext_00403560();
extern "C" void ext_00412690();
extern "C" void ext_0041CF00();
extern "C" void ext_0041CF50();
extern "C" void ext_004ECB40();
extern "C" void ext_00671100();
extern "C" void ext_0067F5A0();
extern "C" void ext_0067F910();
extern "C" void ext_006A6DD2();
extern "C" int mem_00B599BC;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_0069B9E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push 0xFFFFFFFF
        push 0x008B67E9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x54
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x8]
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        je loc_69BBC9
        mov eax, dword ptr [eax + 0x8]
        sub eax, ecx
        sar eax, 0x3
        je loc_69BBC9
        mov ecx, dword ptr [edi + 0x4]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je loc_69BBC9
        mov edx, dword ptr [ecx + 0x8]
        sub edx, eax
        sar edx, 0x3
        je loc_69BBC9
        call ext_0067F910
        mov ecx, eax
        call ext_0067F5A0
        cmp eax, 0x11
        jne loc_69BBC9
        mov ecx, dword ptr [edi + 0x8]
        call ext_0067F910
        push eax
        lea ecx, [esp + 0x8]
        call ext_0041CF00
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x90]
        mov dword ptr [esp + 0x60], 0x0
        call edx
        test al, al
        je loc_69BAAA
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esp + 0x8]
        call ext_004ECB40
        push eax
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x64], 0x1
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov byte ptr [esp + 0x60], 0x0
        je loc_69BAAA
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0xc]
        push eax
        call edx

    loc_69BAAA:
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        push ebx
        push esi
        je loc_69BBAF
        cmp ecx, dword ptr [mem_00B599BC]
        je loc_69BBAF
        push 0x6
        mov esi, ecx
        call ext_00671100
        add esp, 0x4
        cmp esi, eax
        jne loc_69BB28
        mov ecx, dword ptr [edi + 0x8]
        lea eax, [esp + 0xc]
        push eax
        call ext_0067F910
        mov ecx, eax
        call ext_0041CF50
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x18], 0x38
        mov dword ptr [esp + 0x1C], 0x0
        call ext_00412690

    loc_69BB05:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x68], 0xFFFFFFFF
        call ext_00401CC0
        pop esi
        pop ebx
        pop edi
        mov ecx, dword ptr [esp + 0x54]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x60
        ret

    loc_69BB28:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x4C]
        mov ecx, esi
        call eax
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x54]
        mov bl, al
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call edx
        sub eax, 0x0
        je loc_69BB05
        sub eax, 0x1
        je loc_69BB8D
        sub eax, 0x1
        je loc_69BB81
        push 0x0098FBC0
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x1C]
        push eax
        lea ecx, [esp + 0x3C]
        mov byte ptr [esp + 0x6C], 0x2
        call ext_00403560
        push 0x009D47A4
        lea ecx, [esp + 0x3C]
        push ecx
        call ext_006A6DD2

    loc_69BB81:
        neg bl
        sbb ebx, ebx
        and ebx, 0xFFFFFFF1
        add ebx, 0x46
        jmp loc_69BB92

    loc_69BB8D:
        mov ebx, 0x36

    loc_69BB92:
        mov ecx, dword ptr [edi + 0x4]
        lea edx, [esp + 0x14]
        push edx
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1C], 0x0
        call ext_00412690
        mov ecx, dword ptr [esp + 0x10]

    loc_69BBAF:
        test ecx, ecx
        mov dword ptr [esp + 0x68], 0xFFFFFFFF
        je loc_69BBC7
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0xc]
        push edx
        call eax

    loc_69BBC7:
        pop esi
        pop ebx

    loc_69BBC9:
        mov ecx, dword ptr [esp + 0x58]
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x60
        ret
    }
}

// [0x00693590] sub_00693590 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00693590(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xaa3b8c
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_693590_skip
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_693590_skip:
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
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x00693130] sub_00693130 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B5BCDC;
extern "C" int mem_00B5BCD8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00693130(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8b5ef7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B5BCDC], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B5BCDC], 0x1
        mov     ecx, offset mem_00B5BCD8
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B5BCD8], 0x98f19c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B5BCD8
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

// [0x006931E0] sub_006931E0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B5BCE4;
extern "C" int mem_00B5BCE0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006931E0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8b5f27
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B5BCE4], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B5BCE4], 0x1
        mov     ecx, offset mem_00B5BCE0
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B5BCE0], 0x98ee3c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B5BCE0
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

// [0x00693290] sub_00693290 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B5BCEC;
extern "C" int mem_00B5BCE8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00693290(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8b5f57
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B5BCEC], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B5BCEC], 0x1
        mov     ecx, offset mem_00B5BCE8
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B5BCE8], 0x98ef14
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B5BCE8
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

// [0x00693340] sub_00693340 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B5BCF4;
extern "C" int mem_00B5BCF0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00693340(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8b5f87
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B5BCF4], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B5BCF4], 0x1
        mov     ecx, offset mem_00B5BCF0
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B5BCF0], 0x98f0c4
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B5BCF0
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

// [0x006933F0] sub_006933F0 (165 bytes)
extern "C" int mem_00B5BCFC;
extern "C" int mem_00B5BCF8;

extern "C" __declspec(naked) void __fastcall fn_006933F0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8b5fb7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B5BCFC], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B5BCFC], 0x1
        mov     ecx, offset mem_00B5BCF8
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B5BCF8], 0x98ec8c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B5BCF8
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

// [0x0069DA50] sub_0069DA50 (860 bytes)
extern "C" void ext_00412690();
extern "C" void ext_0041A920();
extern "C" void ext_006649D0();
extern "C" void ext_00673050();
extern "C" void ext_006829E0();
extern "C" void ext_0069B100();
extern "C" void ext_0069B800();
extern "C" void ext_0069C330();
extern "C" int mem_0092531C;
extern "C" int mem_0092501C;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0069DA50(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 08b697dh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 080h
        mov eax, dword ptr [esp + 090h]
        push ebx
        push ebp
        mov ebp, dword ptr [mem_0092531C]
        push esi
        mov esi, dword ptr [eax]
        mov ebx, ecx
        movsx ecx, byte ptr [esi]
        push edi
        push ecx
        mov dword ptr [esp + 018h], ebx
        call ebp
        add esp, 4
        test eax, eax
        je L_DD8F
        movsx edx, byte ptr [esi]
        push edx
        call ebp
        add esp, 4
        test eax, eax
        je L_DAB3
        L_DAA2:
        movsx eax, byte ptr [esi + 1]
        add esi, 1
        push eax
        call ebp
        add esp, 4
        test eax, eax
        jne L_DAA2
        L_DAB3:
        cmp byte ptr [esi], 0
        je L_DD8F
        mov cl, byte ptr [esi]
        mov byte ptr [esp + 018h], cl
        mov edx, dword ptr [esp + 018h]
        push edx
        mov ecx, esi
        call ext_0069B100
        add esp, 4
        test al, al
        je L_DAF0
        L_DAD5:
        mov al, byte ptr [esi + 1]
        add esi, 1
        mov byte ptr [esp + 018h], al
        mov edx, dword ptr [esp + 018h]
        push edx
        call ext_0069B100
        add esp, 4
        test al, al
        jne L_DAD5
        L_DAF0:
        push esi
        push ecx
        lea ecx, [esp + 028h]
        call dword ptr [mem_0092501C]
        xor edi, edi
        cmp dword ptr [esp + 034h], edi
        mov dword ptr [esp + 098h], edi
        je L_DD7A
        mov eax, dword ptr [esp + 0a0h]
        mov dword ptr [eax], esi
        mov ecx, dword ptr [ebx + 0ch]
        mov eax, dword ptr [ecx + 4]
        cmp eax, edi
        je L_DB2A
        mov edi, dword ptr [ecx + 8]
        sub edi, eax
        sar edi, 5
        L_DB2A:
        push 1
        lea edx, [esp + 01ch]
        push edx
        lea eax, [esp + 028h]
        push eax
        mov dword ptr [esp + 024h], edi
        call ext_00673050
        lea ecx, [esp + 0a4h]
        push ecx
        mov ecx, dword ptr [ebx + 10h]
        call ext_0041A920
        mov ecx, dword ptr [ebx + 4]
        lea edx, [esp + 018h]
        push edx
        mov dword ptr [esp + 01ch], 012h
        mov dword ptr [esp + 020h], edi
        call ext_00412690
        cmp dword ptr [ebx + 14h], 0
        mov byte ptr [ebx + 93h], 0
        je L_DCD5
        lea ecx, [esp + 03ch]
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 058h]
        mov byte ptr [esp + 098h], 1
        call dword ptr [mem_00924FE8]
        movsx eax, byte ptr [esi]
        push eax
        mov byte ptr [esp + 09ch], 2
        call ebp
        add esp, 4
        test eax, eax
        je L_DBC1
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        L_DBB0:
        movsx ecx, byte ptr [esi + 1]
        add esi, 1
        push ecx
        call ebp
        add esp, 4
        test eax, eax
        jne L_DBB0
        L_DBC1:
        cmp byte ptr [esi], 03dh
        jne L_DCF5
        movsx edx, byte ptr [esi + 1]
        add esi, 1
        push edx
        call ebp
        add esp, 4
        test eax, eax
        je L_DBF1
        jmp L_DBE0
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
        L_DBE0:
        movsx eax, byte ptr [esi + 1]
        add esi, 1
        push eax
        call ebp
        add esp, 4
        test eax, eax
        jne L_DBE0
        L_DBF1:
        mov bl, byte ptr [esi]
        test bl, bl
        mov edi, esi
        mov byte ptr [esp + 013h], 1
        je L_DC7D
        mov edi, edi
        L_DC00:
        cmp byte ptr [esp + 013h], 0
        je L_DCF1
        movsx ecx, bl
        add esi, 1
        push ecx
        mov dword ptr [esp + 01ch], esi
        call ebp
        add esp, 4
        test eax, eax
        jne L_DC77
        cmp bl, 022h
        je L_DC63
        cmp bl, 03bh
        jne L_DC77
        lea edx, [esi - 1]
        push edx
        push edi
        lea ecx, [esp + 07ch]
        mov byte ptr [esp + 01bh], al
        call dword ptr [mem_0092501C]
        push eax
        lea ecx, [esp + 040h]
        mov byte ptr [esp + 09ch], 3
        call dword ptr [mem_0092501C]
        lea ecx, [esp + 074h]
        mov byte ptr [esp + 098h], 2
        call dword ptr [mem_00924FF4]
        jmp L_DC77
        L_DC63:
        mov ecx, dword ptr [esp + 014h]
        push 0
        lea eax, [esp + 01ch]
        push eax
        call ext_0069C330
        mov esi, dword ptr [esp + 018h]
        L_DC77:
        mov bl, byte ptr [esi]
        test bl, bl
        jne L_DC00
        L_DC7D:
        mov ebx, dword ptr [esp + 014h]
        L_DC81:
        lea eax, [esp + 03ch]
        push eax
        call ext_006649D0
        add esp, 4
        lea ecx, [esp + 058h]
        push ecx
        mov ecx, dword ptr [esp + 0a8h]
        lea edx, [esp + 040h]
        push edx
        call ext_006829E0
        push eax
        lea eax, [esp + 02ch]
        push eax
        mov ecx, ebx
        call ext_0069B800
        lea ecx, [esp + 058h]
        mov byte ptr [esp + 098h], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 03ch]
        mov byte ptr [esp + 098h], 0
        call dword ptr [mem_00924FF4]
        L_DCD5:
        lea ecx, [esp + 020h]
        mov dword ptr [esp + 098h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        mov al, 1
        jmp L_DD91
        L_DCF1:
        mov ebx, dword ptr [esp + 014h]
        L_DCF5:
        cmp byte ptr [esi], 0
        je L_DC81
        movsx ecx, byte ptr [esi + 1]
        add esi, 1
        push ecx
        call ebp
        add esp, 4
        test eax, eax
        je L_DD21
        jmp L_DD10
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
        L_DD10:
        movsx edx, byte ptr [esi + 1]
        add esi, 1
        push edx
        call ebp
        add esp, 4
        test eax, eax
        jne L_DD10
        L_DD21:
        cmp byte ptr [esi], 023h
        jne L_DC81
        mov al, byte ptr [esi + 1]
        add esi, 1
        test al, al
        mov ecx, esi
        je L_DD44
        L_DD36:
        cmp al, 0ah
        je L_DD44
        mov al, byte ptr [esi + 1]
        add esi, 1
        test al, al
        jne L_DD36
        L_DD44:
        push esi
        push ecx
        lea ecx, [esp + 07ch]
        call dword ptr [mem_0092501C]
        push eax
        lea ecx, [esp + 05ch]
        mov byte ptr [esp + 09ch], 4
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 074h]
        mov byte ptr [esp + 098h], 2
        call dword ptr [mem_00924FF4]
        jmp L_DC81
        L_DD7A:
        lea ecx, [esp + 020h]
        mov dword ptr [esp + 098h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        L_DD8F:
        xor al, al
        L_DD91:
        mov ecx, dword ptr [esp + 090h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 08ch
        ret 8
    }
}

extern "C" void ext_0069B180();
extern "C" void ext_0069C330();

// [0x0069C400] sub_0069C400 (149 bytes)
extern "C" __declspec(naked) bool __fastcall fn_0069C400(void* self, int edx_unused, char** pStr) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x0c]
        mov ebp, ecx
        mov ecx, dword ptr [esi]
        test ecx, ecx
        jne loc_69c415
        pop esi
        xor al, al
        pop ebp
        ret 4

    loc_69c415:
        push ebx
        mov bl, byte ptr [ecx]
        mov byte ptr [esp + 0x10], bl
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_0069B180
        add esp, 4
        test bl, bl
        mov dl, al
        mov byte ptr [esp + 0x10], dl
        je loc_69c48d
        test dl, dl
        je loc_69c48d
        lea eax, [ecx + 1]
        mov dword ptr [esi], eax
        cmp byte ptr [eax], 0
        push edi
        mov edi, 1
        je loc_69c47b

    loc_69c447:
        mov al, byte ptr [eax]
        cmp al, bl
        jne loc_69c452
        add edi, 1
        jmp loc_69c46f

    loc_69c452:
        cmp al, 0x22
        jne loc_69c466
        push 0
        push esi
        mov ecx, ebp
        call ext_0069C330
        mov dl, byte ptr [esp + 0x14]
        jmp loc_69c46f

    loc_69c466:
        cmp al, dl
        jne loc_69c46f
        sub edi, 1
        je loc_69c484

    loc_69c46f:
        add dword ptr [esi], 1
        mov eax, dword ptr [esi]
        mov ecx, eax
        cmp byte ptr [ecx], 0
        jne loc_69c447

    loc_69c47b:
        pop edi
        pop ebx
        pop esi
        xor al, al
        pop ebp
        ret 4

    loc_69c484:
        pop edi
        pop ebx
        pop esi
        mov al, 1
        pop ebp
        ret 4

    loc_69c48d:
        pop ebx
        pop esi
        xor al, al
        pop ebp
        ret 4
    }
}

// [0x00697DD0] sub_00697DD0 (157 bytes)
extern "C" __declspec(naked) int __fastcall fn_00697DD0(void* /*self*/, void* /*edx*/, int /*a1*/, int /*a2*/, int /*a3*/, int* /*a4*/) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [edx + 0x4], eax
        mov ecx, dword ptr [esi + 0x4]
        cmp dword ptr [ecx + 0x4], eax
        je L_00697df7
        mov eax, 0xfffffffb
        pop esi
        ret 0x10
    L_00697df7:
        mov eax, dword ptr [esp + 0x10]
        mov edx, ecx
        mov dword ptr [edx + 0xc], eax
        mov ecx, dword ptr [esi + 0x4]
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov edx, dword ptr [edi]
        mov dword ptr [ecx + 0x10], edx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x10]
        cmp ecx, dword ptr [edi]
        je L_00697e21
        pop edi
        mov eax, 0xfffffffb
        pop esi
        ret 0x10
    L_00697e21:
        push eax
        call ext_007BFDF0
        add esp, 0x4
        test eax, eax
        jne L_00697e68
        mov eax, dword ptr [esi + 0x4]
        push 0x4
        push eax
        call ext_007BFF40
        add esp, 0x8
        cmp eax, 0x1
        je L_00697e5e
        cmp eax, 0x2
        je L_00697e54
        cmp eax, -0x5
        jne L_00697e68
        mov edx, dword ptr [esi + 0x4]
        cmp dword ptr [edx + 0x4], 0x0
        jne L_00697e68
    L_00697e54:
        pop edi
        mov eax, 0xfffffffd
        pop esi
        ret 0x10
    L_00697e5e:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x14]
        mov dword ptr [edi], ecx
        xor eax, eax
    L_00697e68:
        pop edi
        pop esi
        ret 0x10
    }
}

// [0x00698060] sub_00698060 (305 bytes)
extern "C" __declspec(naked) void __fastcall fn_00698060(void* self) {
    __asm {
        push    ebp
        lea     ebp, [esp - 0x64]
        sub     esp, 0x64
        push    -1
        push    0x8b634b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x58
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x6c]
        mov     dword ptr [ebp + 0x60], ecx
        mov     ecx, edi
        mov     dword ptr [ebp - 0x10], esp
        call    dword ptr [mem_00924EAC]
        lea     esi, [eax - 0x4]
        push    esi
        mov     ecx, edi
        call    dword ptr [mem_00924FFC]
        mov     eax, dword ptr [eax]
        mov     ecx, esi
        imul    ecx, ecx, 0x64
        cmp     eax, ecx
        mov     dword ptr [ebp + 0x6c], eax
        jbe     L_ok1
        push    0x98fa48
        lea     ecx, [ebp + 0x44]
        call    dword ptr [mem_00924FE4]
        lea     edx, [ebp + 0x44]
        push    edx
        lea     ecx, [ebp - 0x38]
        mov     dword ptr [ebp - 0x4], 0
        call    ext_00403560
        push    0x9d47a4
        lea     eax, [ebp - 0x38]
        push    eax
        call    ext_006A6DD2
L_ok1:
        mov     ebx, dword ptr [ebp + 0x70]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x4], 1
        call    dword ptr [mem_00925058]
        push    0
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x4], -1
        call    dword ptr [mem_0092500C]
        push    0
        mov     ecx, edi
        mov     ebx, eax
        call    dword ptr [mem_00924FFC]
        lea     ecx, [ebp + 0x6c]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x60]
        push    ebx
        push    esi
        push    eax
        call    ext_00697DD0
        test    eax, eax
        je      L_end
        push    0x98fa48
        lea     ecx, [ebp + 0x28]
        call    dword ptr [mem_00924FE4]
        lea     edx, [ebp + 0x28]
        push    edx
        lea     ecx, [ebp]
        mov     dword ptr [ebp - 0x4], 4
        call    ext_00403560
        push    0x9d47a4
        lea     eax, [ebp]
        push    eax
        call    ext_006A6DD2
        push    0x98fa48
        lea     ecx, [ebp + 0x44]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [ebp + 0x44]
        push    ecx
        lea     ecx, [ebp - 0x60]
        mov     byte ptr [ebp - 0x4], 3
        call    ext_00403560
        push    0x9d47a4
        lea     edx, [ebp - 0x60]
        push    edx
        call    ext_006A6DD2
L_end:
        mov     ecx, dword ptr [ebp - 0xc]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     ebp, 0x64
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}

// [0x0069EC30] sub_0069EC30 (161 bytes)
extern "C" void ext_0069E750();
extern "C" void ext_0069EB70();
extern "C" int mem_00925134; /* "P{b" */

extern "C" __declspec(naked) void __fastcall fn_0069EC30(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x4]
        test edi, edi
        jne short L_nonnull
        xor ecx, ecx
        jmp short L_after_first
    L_nonnull:
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, edi
        mov eax, 0x66666667
        imul ecx
        sar edx, 0x5
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
    L_after_first:
        test edi, edi
        je short L_slow
        mov edx, dword ptr [esi + 0xc]
        sub edx, edi
        mov eax, 0x66666667
        imul edx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ecx, eax
        jae short L_slow
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esi + 0x8]
        mov byte ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0x8]
        push eax
        push ecx
        push esi
        push edx
        push 0x1
        push edi
        call ext_0069E750
        add esp, 0x18
        add edi, 0x50
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    L_slow:
        push ebx
        mov ebx, dword ptr [esi + 0x8]
        cmp edi, ebx
        jbe short L_ok
        call dword ptr [mem_00925134]
    L_ok:
        mov eax, dword ptr [esp + 0x18]
        push eax
        push ebx
        push esi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_0069EB70
        pop ebx
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x00699720] sub_00699720 (163 bytes)
extern "C" void ext_006601E0();
extern "C" void ext_00660280();
extern "C" void ext_006609B0();
extern "C" void ext_00680C10();
extern "C" int mem_00B5A0B8;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_00699720(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b64a8
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push esi
        push edi
        mov edi, ecx
        call ext_00660280
        test eax, eax
        jne loc_00699781
        push edi
        lea ecx, [esp + 0xc]
        call ext_006609B0
        mov eax, dword ptr [esp + 0x24]
        push 1
        push edi
        push 1
        push 1
        lea esi, [edi + 0x28]
        push eax
        push esi
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0
        call ext_00680C10
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_006601E0
        jmp loc_00699798

    loc_00699781:
        mov ecx, dword ptr [esp + 0x24]
        push 1
        push edi
        push 1
        push 1
        push ecx
        lea esi, [edi + 0x28]
        push esi
        mov ecx, esi
        call ext_00680C10

    loc_00699798:
        mov ecx, dword ptr [esp + 0x28]
        test ecx, ecx
        je loc_006997B0
        cmp dword ptr [mem_00B5A0B8], 0
        je loc_006997B0
        push esi
        call dword ptr [mem_00924FDC]

    loc_006997B0:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret 8
    }
}

// [0x00696820] sub_00696820 (167 bytes)
extern "C" void ext_00664ED0();
extern "C" void ext_006651D0();
extern "C" void ext_00665250();
extern "C" void ext_00696260();
extern "C" void ext_00696700();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00696820(void* self) {
    __asm {
        push    -1
        push    0089dbc2h
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 1ch
        push    esi
        lea     eax, [esp+30h]
        push    eax
        lea     ecx, [esp+8]
        mov     dword ptr [esp+2ch], 0
        call    dword ptr [mem_00924FE0]
        lea     ecx, [esp+4]
        push    ecx
        mov     byte ptr [esp+2ch], 1
        call    ext_006651D0
        lea     edx, [esp+8]
        push    edx
        call    ext_00664ED0
        lea     eax, [esp+0ch]
        push    52h
        push    eax
        call    ext_00665250
        mov     ecx, dword ptr [esp+5ch]
        push    ecx
        lea     edx, [esp+18h]
        push    edx
        call    ext_00696260
        mov     ecx, dword ptr [esp+68h]
        push    ecx
        push    eax
        call    ext_00696700
        add     esp, 20h
        lea     ecx, [esp+4]
        mov     esi, eax
        mov     byte ptr [esp+28h], 0
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp+30h]
        mov     dword ptr [esp+28h], 0ffffffffh
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp+20h]
        mov     eax, esi
        pop     esi
        mov     fs:[0], ecx
        add     esp, 28h
        ret
    }
}

// [0x00697730] sub_00697730 (169 bytes)
extern "C" void ext_004909E0();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00697730(void* self, int edx_unused, unsigned int count, float val) {
    __asm {
        fldz
        sub     esp, 0x8
        push    ebx
        push    ebp
        mov     ebp, dword ptr [mem_00925134]
        push    esi
        mov     esi, ecx
        push    edi
        fstp    dword ptr [esi + 0x18]
        mov     edi, dword ptr [esi + 0x8]
        cmp     dword ptr [esi + 0x4], edi
        jbe     L_0069774E
        call    ebp
    L_0069774E:
        mov     ebx, dword ptr [esi + 0x4]
        cmp     ebx, dword ptr [esi + 0x8]
        jbe     L_00697758
        call    ebp
    L_00697758:
        push    edi
        push    esi
        push    ebx
        push    esi
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    ext_00596660
        fld     dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        fstp    dword ptr [esp]
        push    ecx
        mov     ecx, esi
        call    ext_004909E0
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, dword ptr [esi + 0x8]
        jbe     L_00697786
        call    ebp
    L_00697786:
        mov     dword ptr [esi + 0x14], edi
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, dword ptr [esi + 0x8]
        mov     dword ptr [esi + 0x10], esi
        jbe     L_00697796
        call    ebp
    L_00697796:
        mov     ebx, dword ptr [esi + 0x8]
        cmp     dword ptr [esi + 0x4], ebx
        jbe     L_006977A0
        call    ebp
    L_006977A0:
        test    esi, esi
        je      L_006977A8
        cmp     esi, esi
        je      L_006977AA
    L_006977A8:
        call    ebp
    L_006977AA:
        cmp     edi, ebx
        je      L_006977CF
        test    esi, esi
        jne     L_006977B4
        call    ebp
    L_006977B4:
        cmp     edi, dword ptr [esi + 0x8]
        jb      L_006977BB
        call    ebp
    L_006977BB:
        fld     dword ptr [edi]
        fadd    dword ptr [esi + 0x18]
        fstp    dword ptr [esi + 0x18]
        cmp     edi, dword ptr [esi + 0x8]
        jb      L_006977CA
        call    ebp
    L_006977CA:
        add     edi, 0x4
        jmp     L_00697796
    L_006977CF:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }
}

// [0x0069A700] sub_0069A700 (173 bytes)
extern "C" void ext_0069A2A0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0069A700(void* self, void* dummy, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x4]
        test    esi, esi
        je      L_0069A72C
        mov     ebx, dword ptr [edi + 0x8]
        mov     ecx, ebx
        sub     ecx, esi
        mov     eax, 0x2e8ba2e9
        imul    ecx
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
        jne     L_0069A734
    L_0069A72C:
        mov     ebx, dword ptr [esp + 0x1c]
        xor     esi, esi
        jmp     L_0069A765
    L_0069A734:
        cmp     esi, ebx
        jbe     L_0069A73E
        call    dword ptr [mem_00925134]
    L_0069A73E:
        mov     ebx, dword ptr [esp + 0x1c]
        test    ebx, ebx
        je      L_0069A74A
        cmp     ebx, edi
        je      L_0069A750
    L_0069A74A:
        call    dword ptr [mem_00925134]
    L_0069A750:
        mov     ecx, ebp
        sub     ecx, esi
        mov     eax, 0x2e8ba2e9
        imul    ecx
        sar     edx, 0x3
        mov     esi, edx
        shr     esi, 0x1f
        add     esi, edx
    L_0069A765:
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        push    0x1
        push    ebp
        push    ebx
        mov     ecx, edi
        call    ext_0069A2A0
        mov     ebx, dword ptr [edi + 0x4]
        cmp     ebx, dword ptr [edi + 0x8]
        jbe     L_0069A783
        call    dword ptr [mem_00925134]
    L_0069A783:
        imul    esi, esi, 0x2c
        add     esi, ebx
        cmp     esi, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x20], ebx
        ja      L_0069A796
        cmp     esi, dword ptr [edi + 0x4]
        jae     L_0069A79C
    L_0069A796:
        call    dword ptr [mem_00925134]
    L_0069A79C:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [eax], edi
        pop     edi
        mov     dword ptr [eax + 0x4], esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}

// [0x0069A9D0] sub_0069A9D0 (174 bytes)
extern "C" void ext_0057BF20();
extern "C" void ext_0069A700();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) unsigned char __fastcall fn_0069A9D0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 12
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov byte ptr [esp + 12], 0
        jbe L_9D0_c1
        call dword ptr [mem_00925134]
    L_9D0_c1:
        push edi
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_9D0_c2
        call dword ptr [mem_00925134]
    L_9D0_c2:
        mov eax, dword ptr [esp + 16]
        mov ebp, dword ptr [esp + 32]
        push 0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 44], edi
        call ext_0057BF20
        mov edi, dword ptr [esi + 8]
        add esp, 20
        cmp dword ptr [esi + 4], edi
        mov ebx, eax
        jbe L_9D0_c3
        call dword ptr [mem_00925134]
    L_9D0_c3:
        test esi, esi
        je L_9D0_c4
        cmp esi, esi
        je L_9D0_c5
    L_9D0_c4:
        call dword ptr [mem_00925134]
    L_9D0_c5:
        cmp ebx, edi
        pop edi
        je L_9D0_fail
        test esi, esi
        jne L_9D0_c6
        call dword ptr [mem_00925134]
    L_9D0_c6:
        cmp ebx, dword ptr [esi + 8]
        jb L_9D0_c7
        call dword ptr [mem_00925134]
    L_9D0_c7:
        push ebx
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne L_9D0_fail
        pop esi
        pop ebp
        pop ebx
        add esp, 12
        ret 4
    L_9D0_fail:
        push ebp
        push ebx
        push esi
        lea ecx, [esp + 28]
        push ecx
        mov ecx, esi
        call ext_0069A700
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 12
        ret 4
    }
}

// [0x0069EB70] sub_0069EB70 (177 bytes)
extern "C" void ext_0069E880();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0069EB70(void* self, int edx_unused, int* out, char* cont, char* where, int val) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x4]
        test edi, edi
        je L_zero
        mov ebx, dword ptr [esi + 0x8]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x66666667
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_nz
    L_zero:
        mov ebx, dword ptr [esp + 0x1c]
        xor edi, edi
        jmp L_call
    L_nz:
        cmp edi, ebx
        jbe L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        mov ebx, dword ptr [esp + 0x1c]
        test ebx, ebx
        je L_bad2
        cmp ebx, esi
        je L_ok2
    L_bad2:
        call dword ptr [mem_00925134]
    L_ok2:
        mov ecx, ebp
        sub ecx, edi
        mov eax, 0x66666667
        imul ecx
        sar edx, 5
        mov edi, edx
        shr edi, 0x1f
        add edi, edx
    L_call:
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        push 1
        push ebp
        push ebx
        mov ecx, esi
        call ext_0069E880
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        lea edx, [edi + 4*edi]
        shl edx, 4
        lea edi, [edx + ebx]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x20], ebx
        ja L_bad4
        cmp edi, dword ptr [esi + 0x4]
        jae L_ok4
    L_bad4:
        call dword ptr [mem_00925134]
    L_ok4:
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x4], edi
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
    }
}

// [0x006982D0] sub_006982D0 (186 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_00478910();
extern "C" void ext_00682220();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_006982D0(void* self) {
    __asm {
        push -1
        push 0x8a0db8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x54
        push esi
        push edi
        mov edi, dword ptr [esp + 0x6c]
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 0x70]
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x30], ecx
        lea edx, [esp + 0x14]
        push edx
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x6c], 0
        call ext_00478910
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x64], -1
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esp + 0x10], 0
        jne L_ok_006982D0
        push edi
        call ext_00682220
        push eax
        lea ecx, [esp + 0x3c]
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x38]
        push ecx
        call ext_006A6DD2
L_ok_006982D0:
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        push ebx
        mov ebx, dword ptr [mem_00925134]
        jne L_nz_006982D0
        call ebx
L_nz_006982D0:
        mov edi, dword ptr [esp + 0x10]
        cmp edi, dword ptr [esi + 0x4]
        jne L_ne_006982D0
        call ebx
L_ne_006982D0:
        mov ecx, dword ptr [esp + 0x60]
        pop ebx
        lea eax, [edi + 0x28]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x60
        ret 0x8
    }
}

// [0x00694FB0] sub_00694FB0 (189 bytes)
extern "C" void ext_00694A70();
extern "C" void ext_00696820();
extern "C" int mem_00AA3BAE;
extern "C" __declspec(naked) void __fastcall fn_00694FB0(void* self) {
    __asm {
        push -1
        push 0x881709
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        mov eax, dword ptr [esp + 0x48]
        fld dword ptr [eax]
        lea ecx, [esp + 0x48]
        fstp dword ptr [esp + 0x10]
        lea edx, [esp + 0x2c]
        fld dword ptr [eax + 4]
        mov dword ptr [esp + 0x24], 0
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 8]
        movzx eax, byte ptr [mem_00AA3BAE]
        push eax
        fstp dword ptr [esp + 0x1c]
        push ecx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x6c], esp
        push edx
        call dword ptr [mem_00924FE0]
        call ext_00696820
        mov esi, dword ptr [esp + 0x6c]
        add esp, 0x24
        cmp esi, 3
        mov ebp, eax
        jae short skip_fill_00694FB0
        mov edx, 3
        sub edx, esi
        lea edi, [esp + 4*esi + 0x10]
        xor eax, eax
        mov ecx, edx
        add esi, edx
        rep stosd
        mov dword ptr [esp + 0x48], esi
skip_fill_00694FB0:
        lea eax, [esp + 0x10]
        push eax
        push ebp
        mov ecx, ebx
        call ext_00694A70
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x24], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x18
        ret 0x20
    }
}

// [0x00697CD0] sub_00697CD0 (193 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6E8C();
extern "C" void ext_007C1750();
extern "C" void ext_007BFF20();

extern "C" __declspec(naked) void* __fastcall fn_00697CD0(void** self) {
    __asm {
        push -0x1
        push 0x8b6303
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x0
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi + 0x4], 0x0
        push 0x38
        mov byte ptr [esp + 0x18], 0x1
        call ext_006A5C62
        mov edi, eax
        mov eax, dword ptr [esi]
        add esp, 0x4
        cmp edi, eax
        je L1
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L1:
        push 0x38
        push 0x0
        push edi
        mov dword ptr [esi], edi
        call ext_006A6E8C
        mov eax, dword ptr [esi]
        push 0x38
        push 0x98fa40
        push 0x1
        push eax
        call ext_007C1750
        push 0x38
        call ext_006A5C62
        mov edi, eax
        mov eax, dword ptr [esi + 0x4]
        add esp, 0x20
        cmp edi, eax
        je L2
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L2:
        push 0x38
        mov ecx, edi
        push 0x0
        push ecx
        mov dword ptr [esi + 0x4], edi
        call ext_006A6E8C
        mov edx, dword ptr [esi + 0x4]
        push 0x38
        push 0x98fa40
        push edx
        call ext_007BFF20
        mov ecx, dword ptr [esp + 0x24]
        add esp, 0x18
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0069ABD0] sub_0069ABD0 (234 bytes)
extern "C" __declspec(naked) void __fastcall fn_0069ABD0(void* self) {
    __asm {
        push -1
        push 0x8b663a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x70
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x8c]
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x54]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 0x90]
        push eax
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x88], 0x0
        call ext_00699870
        lea ecx, [esp + 0x50]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x88], 0x1
        call ext_0069A9D0
        lea ecx, [esp + 0x50]
        mov bl, al
        mov dword ptr [esp + 0x84], 0xffffffff
        call ext_00672590
        test bl, bl
        je L_69AC62
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        mov ecx, dword ptr [esp + 0x70]
        mov dword ptr fs:[0], ecx
        add esp, 0x7c
        ret 0xc
L_69AC62:
        cmp byte ptr [esp + 0x94], 0x0
        je L_69ACA4
        lea edx, [esp + 0xc]
        push edi
        push edx
        call ext_004276B0
        add esp, 0x8
        push eax
        mov dword ptr [esp + 0x88], 0x2
        call ext_006999F0
        push eax
        lea ecx, [esp + 0x30]
        call ext_004142E0
        push 0x9d1278
        lea eax, [esp + 0x2c]
        push eax
        call ext_006A6DD2
L_69ACA4:
        mov ecx, dword ptr [esp + 0x7c]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x7c
        ret 0xc
    }
}

// [0x006934A0] sub_006934A0 (237 bytes)
extern "C" void ext_0041CDA0();
extern "C" void ext_0041E540();
extern "C" void ext_0043A910();
extern "C" void ext_004C34B0();
extern "C" void ext_0066AD10();
extern "C" void ext_006790C0();
extern "C" void ext_006798D0();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_006934A0(void* self) {
    __asm {
        push -1
        push 0x89a57b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        lea eax, [esp]
        push 0xa398d0
        push eax
        mov dword ptr [esp + 0x48], 0
        call ext_0066AD10
        add esp, 8
        cmp dword ptr [esp + 0x5c], 0
        mov byte ptr [esp + 0x40], 1
        jne skip_first
        lea ecx, [esp]
        push ecx
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_00924FDC]
    skip_first:
        cmp byte ptr [esp + 0x64], 0
        je skip_block
        lea edx, [esp + 0x1c]
        push edx
        call ext_0041CDA0
        add esp, 4
        lea ecx, [esp]
        push ecx
        push eax
        mov byte ptr [esp + 0x48], 2
        call ext_006798D0
        mov ecx, eax
        call ext_006790C0
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x40], 1
        call dword ptr [mem_00924FF4]
    skip_block:
        push esi
        call ext_0041E540
        push 1
        mov esi, eax
        lea edx, [esp + 0x6c]
        push edx
        lea eax, [esp + 0x54]
        push eax
        lea ecx, [esi + 4]
        mov dword ptr [esp + 0x74], 0x692c40
        call ext_004C34B0
        push 1
        lea ecx, [esp + 8]
        push ecx
        lea edx, [esp + 0x54]
        push edx
        lea ecx, [esi + 0x14]
        call ext_0043A910
        lea ecx, [esp + 4]
        mov byte ptr [esp + 0x44], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0x44], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x3c]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret
    }
}
