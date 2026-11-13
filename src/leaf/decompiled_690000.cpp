// Decompiled translation unit: src/leaf/decompiled_690000.cpp

#include <math.h>

extern "C" void ext_0041A8B0();
extern "C" void __fastcall ext_00680800(void* self);
extern "C" void ext_006989B0();
extern "C" void ext_0069B0C0();
extern "C" void ext_0069B100();
extern "C" void ext_00693D40();

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
