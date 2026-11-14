// Decompiled translation unit: src/leaf/decompiled_570000.cpp
extern "C" void ext_0057EBB0();
extern "C" int mem_00925134; /* "P{b" */

extern "C" int mem_00925134; /* "P{b" */
extern "C" void __stdcall ext_006A6D5C(void* self, int a, int b, int c);

extern "C" void __fastcall fn_00573290(void* self) {
    ext_006A6D5C(self, 0x10, 3, 0x436f30);
}

// [0x00573490] sub_00573490 (22 bytes)
extern "C" void __fastcall fn_00573490(void* self, int edx_unused, void* a1) {
    ext_006A6D5C(a1, 0x10, 3, 0x436f30);
}

// [0x00579870] sub_00579870 (25 bytes)
extern "C" void ext_005796E0();
extern "C" void ext_00406510();
extern "C" void ext_00577DE0();
extern "C" void ext_0057A770();
extern "C" int mem_00928B5D;
extern "C" int mem_00924FD4;
extern "C" int mem_009251EC;

extern "C" void* __fastcall fn_00579870(void* self) {
    ext_005796E0();
    *(void**)self = (void*)0x957ea4;
    *((void**)self + 1) = (void*)0x957e98;
    return self;
}

// [0x00577480] sub_00577480 (34 bytes)
extern "C" int mem_00925134;

extern "C" unsigned int __fastcall fn_00577480(void* self) {
    unsigned int* p = (unsigned int*)self;
    unsigned int edi = p[1];
    void (__cdecl *inv)() = (void (__cdecl*)())mem_00925134;
    if (edi > p[2]) inv();
    if (edi >= p[2]) inv();
    return edi;
}

// [0x00574F10] sub_00574F10 (43 bytes)
extern "C" int mem_00925094;

extern "C" void __fastcall fn_00574F10(void* self, int edx_unused, void* os) {
    typedef void* (__thiscall *write_fn)(void*, const char*, int);
    char c = 0;
    int n = 0x20;
    do {
        (*(write_fn*)&mem_00925094)(os, &c, 1);
        n--;
    } while (n != 0);
}

// [0x00574F40] sub_00574F40 (43 bytes)
extern "C" void __fastcall fn_00574F40(void* self, int edx_unused, void* os) {
    typedef void* (__thiscall *write_fn)(void*, const char*, int);
    char c = 0;
    int n = 2;
    do {
        (*(write_fn*)&mem_00925094)(os, &c, 1);
        n--;
    } while (n != 0);
}

// [0x005761B0] sub_005761B0 (43 bytes)
extern "C" int mem_00925084;
extern "C" int mem_00925110;

extern "C" void* __fastcall fn_005761B0(void* self) {
    typedef void* (__thiscall *alloc_ctor_fn)(void*);
    typedef void* (__thiscall *alloc_copy_fn)(void*, const void*);
    char tmp;
    (*(alloc_ctor_fn*)&mem_00925084)(&tmp);
    (*(alloc_copy_fn*)&mem_00925110)(self, &tmp);
    unsigned int* p = (unsigned int*)self;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    return self;
}

// [0x005739E0] sub_005739E0 (43 bytes)
extern "C" void __stdcall fn_005739E0(void* begin, void* end) {
    char* esi = (char*)begin;
    char* edi = (char*)end;
    if (esi != edi) {
        do {
            ext_006A6D5C(esi, 0x10, 3, 0x436f30);
            esi += 0x30;
        } while (esi != edi);
    }
}

// [0x00577AE0] sub_00577AE0 (46 bytes)
extern "C" __declspec(naked) void* __stdcall fn_00577AE0(void* dst, unsigned int count, const void* src) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        mov eax, edi
        mov ecx, ebp
        jbe done
        push esi
        mov esi, dword ptr [esp + 18h]
fill:
        mov dl, byte ptr [esi]
        mov byte ptr [ecx], dl
        sub eax, 1
        add ecx, 1
        test eax, eax
        ja fill
        pop esi
done:
        lea eax, [edi + ebp]
        pop edi
        pop ebp
        ret 0Ch
    }
}

// [0x00572680] sub_00572680 (49 bytes)
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00572680(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        je skip
        push eax
        call ext_006A5C5C
        add esp, 4
    skip:
        mov dword ptr [esi + 0x20], 0
        mov dword ptr [esi + 0x24], 0
        mov dword ptr [esi + 0x28], 0
        mov ecx, esi
        pop esi
        jmp dword ptr [mem_00924FF4]
    }
}

// [0x005749F0] sub_005749F0 (53 bytes)
extern "C" int mem_00924E48;

extern "C" __declspec(naked) void __fastcall fn_005749F0(int ecx_unused, int edx_unused, void* obj, void* arg) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        je done
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        call edx
        push 0x928b5d
        mov ecx, eax
        call dword ptr [mem_00924E48]
        test eax, eax
        jne done
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x5c]
        push ecx
        mov ecx, esi
        call edx
done:
        pop esi
        ret 8
    }
}

// [0x00570380] sub_00570380 (54 bytes)
extern "C" int mem_009250BC;
extern "C" int mem_009250C0;

extern "C" __declspec(naked) bool __fastcall fn_00570380(void* self, int edx_unused, void* is) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
    read_loop:
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
        cmp byte ptr [esp + 8], 0Ah
        jne read_loop
        mov al, 1
        pop esi
        ret 4
    fail:
        xor al, al
        pop esi
        ret 4
    }
}

// [0x00573250] sub_00573250 (54 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924E44;

extern "C" __declspec(naked) unsigned int __fastcall fn_00573250(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        cmp eax, -2
        je done_fast
        test eax, eax
        push edi
        mov edi, dword ptr [mem_00925134]
        jne skip_inv1
        call edi
    skip_inv1:
        mov ecx, dword ptr [esi]
        call dword ptr [mem_00924E44]
        mov ecx, dword ptr [esi]
        add eax, dword ptr [ecx + 0x14]
        cmp dword ptr [esi + 0x4], eax
        jb skip_inv2
        call edi
    skip_inv2:
        mov eax, dword ptr [esi + 0x4]
        pop edi
        pop esi
        ret
    done_fast:
        mov eax, dword ptr [esi + 0x4]
        pop esi
        ret
    }
}

// [0x00575DF0] sub_00575DF0 (61 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_00575DF0(void* self, int edx_unused, unsigned int index) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        je L_bad
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L_ok
    L_bad:
        call dword ptr [mem_00925134]
    L_ok:
        mov ecx, dword ptr [esi + 0x4]
        lea eax, [edi + 4*edi]
        pop edi
        lea eax, [ecx + 4*eax]
        pop esi
        ret 0x4
    }
}

// [0x00574E20] sub_00574E20 (63 bytes)
extern "C" int mem_00925094;

extern "C" __declspec(naked) void __stdcall fn_00574E20(void* os) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, dword ptr [esp + 0x10]
        push 0x2
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0xc], 0x56
        mov byte ptr [esp + 0xd], 0x23
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00925094]
        push 0x2
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00925094]
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x0057BBE0] sub_0057BBE0 (64 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_0057BBE0(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je done_eq
        push edi
        mov edi, dword ptr [esp + 0x18]
    copy_loop:
        sub esi, 0x38
        sub edi, 0x38
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x1c]
        push eax
        lea ecx, [edi + 0x1c]
        call dword ptr [mem_00924FDC]
        cmp esi, ebx
        jne copy_loop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    done_eq:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x005774B0] sub_005774B0 (66 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_005774B0(void* self) {
    __asm {
        sub     esp, 8
        push    ebp
        mov     ebp, dword ptr [mem_00925134]
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], edi
        jbe     SHORT L_5774C8
        call    ebp
L_5774C8:
        lea     eax, [edi - 0x14]
        cmp     eax, dword ptr [esi + 8]
        push    ebx
        mov     ebx, esi
        mov     dword ptr [esp + 0x14], edi
        ja      SHORT L_5774DC
        cmp     eax, dword ptr [esi + 4]
        jae     SHORT L_5774DE
L_5774DC:
        call    ebp
L_5774DE:
        lea     esi, [edi - 0x14]
        cmp     esi, dword ptr [ebx + 8]
        pop     ebx
        jb      SHORT L_5774E9
        call    ebp
L_5774E9:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        add     esp, 8
        ret
    }
}

// [0x0057BD30] sub_0057BD30 (68 bytes)
// Fills [dst, dst_end) with copies of *src (0x3C-byte element: two chars + two std::string).
extern "C" int mem_00924FDC;

namespace {
typedef void* (__thiscall *StrAssignFn0057BD30)(void* self, const void* rhs);

struct Elem0057BD30 {
    char a;
    char b;
    unsigned char pad0[2];
    unsigned char s1[0x1C];
    unsigned char s2[0x1C];
};

inline void str_assign0057BD30(void* dst, const void* src) {
    (*(StrAssignFn0057BD30*)&mem_00924FDC)(dst, src);
}
}

extern "C" void __cdecl fn_0057BD30(Elem0057BD30* dst, Elem0057BD30* dst_end, Elem0057BD30* src) {
    if (dst == dst_end) {
        return;
    }
    do {
        dst->a = src->a;
        dst->b = src->b;
        str_assign0057BD30(dst->s1, src->s1);
        str_assign0057BD30(dst->s2, src->s2);
        ++dst;
    } while (dst != dst_end);
}

// [0x0057FD10] sub_0057FD10 (68 bytes)
extern "C" void ext_00696D90();

extern "C" __declspec(naked) void __fastcall fn_0057FD10(void* self) {
    __asm {
        push -1
        push 0x0089A6EB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_00696D90
        xor eax, eax
        mov dword ptr [esi + 0x1C], eax
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi + 0x2C], eax
        mov dword ptr [esi + 0x30], eax
        mov dword ptr [esi + 0x34], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0057BB40] sub_0057BB40 (70 bytes)
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void* __fastcall fn_0057BB40(void* self) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0057D7F0] sub_0057D7F0 (73 bytes)
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_0057D7F0(void* self) {
    __asm {
        push -1
        push 0x89a2dc
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        fldz
        push esi
        mov esi, ecx
        fst dword ptr [esi + 0x8]
        fst dword ptr [esi + 0x4]
        lea ecx, [esi + 0xc]
        fstp dword ptr [esi]
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        mov dword ptr [esi + 0x2c], eax
        mov dword ptr [esi + 0x30], eax
        mov dword ptr [esi + 0x34], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00570410] sub_00570410 (74 bytes)
extern "C" void ext_00553170();
extern "C" int mem_009250F0;

extern "C" __declspec(naked) void __fastcall fn_00570410(void* self, int edx_unused, void* arg1, void* is) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, 1
        lea ebp, [ecx + 0x5c]
        add esi, 0x20
    loop_top:
        lea eax, [esp + 0x14]
        push eax
        mov ecx, ebx
        call dword ptr [mem_009250F0]
        fld dword ptr [esp + 0x14]
        push ecx
        mov ecx, ebp
        fstp dword ptr [esp]
        mov byte ptr [esi - 0x4], 1
        call ext_00553170
        fstp dword ptr [esi]
        sub edi, 1
        sub esi, 0x18
        test edi, edi
        jge loop_top
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x00575120] sub_00575120 (75 bytes)
// Fills [dst, dst_end) with copies of *src (0x54-byte element: three std::string).
extern "C" int mem_00924FDC;

namespace {
typedef void* (__thiscall *StrAssignFn00575120)(void* self, const void* rhs);

struct Elem00575120 {
    unsigned char s0[0x1C];
    unsigned char s1[0x1C];
    unsigned char s2[0x1C];
};

inline void str_assign00575120(void* dst, const void* src) {
    (*(StrAssignFn00575120*)&mem_00924FDC)(dst, src);
}
}

extern "C" void __cdecl fn_00575120(Elem00575120* dst, Elem00575120* dst_end, Elem00575120* src) {
    if (dst == dst_end) {
        return;
    }
    do {
        str_assign00575120(dst->s0, src->s0);
        str_assign00575120(dst->s1, src->s1);
        str_assign00575120(dst->s2, src->s2);
        ++dst;
    } while (dst != dst_end);
}

// [0x00575230] sub_00575230 (77 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_00575230(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je copy_empty_00575230
        push edi
        mov edi, dword ptr [esp + 0x18]
    copy_loop_00575230:
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x1c]
        push eax
        lea ecx, [edi + 0x1c]
        call dword ptr [mem_00924FDC]
        lea ecx, [esi + 0x38]
        push ecx
        lea ecx, [edi + 0x38]
        call dword ptr [mem_00924FDC]
        add esi, 0x54
        add edi, 0x54
        cmp esi, ebx
        jne copy_loop_00575230
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    copy_empty_00575230:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x005752C0] sub_005752C0 (77 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_005752C0(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je done_005752C0
        push edi
        mov edi, dword ptr [esp + 0x18]
    copy_loop_005752C0:
        sub esi, 0x54
        sub edi, 0x54
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x1c]
        push eax
        lea ecx, [edi + 0x1c]
        call dword ptr [mem_00924FDC]
        lea ecx, [esi + 0x38]
        push ecx
        lea ecx, [edi + 0x38]
        call dword ptr [mem_00924FDC]
        cmp esi, ebx
        jne copy_loop_005752C0
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    done_005752C0:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x0057BC20] sub_0057BC20 (78 bytes)
extern "C" __declspec(naked) void* __cdecl fn_0057BC20(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je done_0057BC20
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_0057BC20:
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        mov cl, byte ptr [esi + 0x1]
        lea edx, [esi + 0x4]
        mov byte ptr [edi + 0x1], cl
        push edx
        lea ecx, [edi + 0x4]
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x20]
        push eax
        lea ecx, [edi + 0x20]
        call dword ptr [mem_00924FDC]
        add esi, 0x3c
        add edi, 0x3c
        cmp esi, ebx
        jne loop_0057BC20
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    done_0057BC20:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x0057BB90] sub_0057BB90 (79 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_0057BB90(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je done_0057BB90
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_0057BB90:
        mov al, byte ptr [esi - 0x3c]
        sub esi, 0x3c
        sub edi, 0x3c
        mov byte ptr [edi], al
        mov cl, byte ptr [esi + 0x1]
        lea edx, [esi + 0x4]
        mov byte ptr [edi + 0x1], cl
        push edx
        lea ecx, [edi + 0x4]
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x20]
        push eax
        lea ecx, [edi + 0x20]
        call dword ptr [mem_00924FDC]
        cmp esi, ebx
        jne loop_0057BB90
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    done_0057BB90:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x005703C0] sub_005703C0 (80 bytes)
extern "C" int mem_009250E4;
extern "C" int mem_009250E8;
extern "C" int mem_009250EC;

extern "C" __declspec(naked) bool __fastcall fn_005703C0(void* self, int edx_unused, void* is) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
    loop_top:
        mov ecx, esi
        call dword ptr [mem_009250E4]
        cmp al, 0x20
        mov byte ptr [esp + 0xc], al
        je skip_check
        cmp al, 0x9
        jne not_ws
    skip_check:
        cmp al, 0xff
        jne loop_top
    done_false:
        pop edi
        xor al, al
        pop esi
        ret 0x4
    not_ws:
        cmp al, 0xa
        je done_false
        mov eax, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_009250E8]
        add edi, 0x46c
        push edi
        push esi
        call dword ptr [mem_009250EC]
        add esp, 0x8
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x00575C80] sub_00575C80 (82 bytes)
extern "C" int mem_0092508C;
extern "C" int mem_00925090;

extern "C" __declspec(naked) void __stdcall fn_00575C80(void* s) {
    __asm {
        sub esp, 0x1c
        push esi
        mov esi, dword ptr [esp + 0x24]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        call dword ptr [mem_0092508C]
        push 0x2
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00925090]
        push 0x2
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call dword ptr [mem_00925090]
        mov ax, word ptr [esp + 0x24]
        cmp al, 0x56
        pop esi
        jne not_match
        cmp ah, 0x23
        jne not_match
        xor al, al
        add esp, 0x1c
        ret 0x4
    not_match:
        mov al, 0x1
        add esp, 0x1c
        ret 0x4
    }
}

// [0x00574D30] sub_00574D30 (84 bytes)
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void* __fastcall fn_00574D30(void* self) {
    __asm {
        push -1
        push 0x89dbe5
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x10], 1
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005761E0] sub_005761E0 (85 bytes)
extern "C" void ext_00575230();

extern "C" __declspec(naked) void* __cdecl fn_005761E0(void* a1, void* a2, void* a3) {
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
        call ext_00575230
        sub esi, ebx
        mov eax, 0x30c30c31
        imul esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        imul eax, eax, 0x54
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00575EF0] sub_00575EF0 (89 bytes)
extern "C" void ext_005752C0();

extern "C" __declspec(naked) int __cdecl fn_00575EF0(int a1, int a2, int a3, int a4, int a5, int a6) {
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
        call ext_005752C0
        sub esi, ebx
        mov eax, 0x30c30c31
        imul esi
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov ecx, eax
        imul ecx, ecx, 0x54
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

// [0x00576D80] sub_00576D80 (43 bytes)
extern "C" void ext_00575EF0();

extern "C" __declspec(naked) void __fastcall fn_00576D80(void* self) {
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
        call ext_00575EF0
        add esp, 0x1c
        ret
    }
}

// [0x0057BEC0] sub_0057BEC0 (92 bytes)
extern "C" void ext_0057BC20();

extern "C" __declspec(naked) void* __cdecl fn_0057BEC0(void* a1, void* a2, void* a3) {
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
        call ext_0057BC20
        sub esi, ebx
        mov eax, 0x88888889
        imul esi
        add edx, esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov ecx, eax
        add esp, 0x18
        shl ecx, 4
        sub ecx, eax
        lea eax, [edi + 4 * ecx]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0057C010] sub_0057C010 (43 bytes)
extern "C" void ext_0057BEC0();

extern "C" __declspec(naked) void __fastcall fn_0057C010(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0xc]
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
        call ext_0057BEC0
        add esp, 0x1c
        ret
    }
}

// [0x0057BE60] sub_0057BE60 (93 bytes)
struct LB20Entry_0057BE60 {
    int key;
    unsigned int rest[14];
};

extern "C" LB20Entry_0057BE60* __cdecl fn_0057BE60(LB20Entry_0057BE60* first, LB20Entry_0057BE60* last, const int* value) {
    LB20Entry_0057BE60* it = first;
    int count = (int)(last - first);
    if (count > 0) {
        int key = *value;
        do {
            int half = count / 2;
            LB20Entry_0057BE60* mid = it + half;
            if (mid->key < key) {
                it = mid + 1;
                count = count - half - 1;
            } else {
                count = half;
            }
        } while (count > 0);
    }
    return it;
}

// [0x0057BF20] sub_0057BF20 (95 bytes)
// __cdecl lower_bound over 44-byte elements (std::string key at +0): returns the first element
// e in [first, last) with !(e.key < *value), comparing through the imported std::operator< (mem_00924EF4).
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __cdecl fn_0057BF20(void* first, void* last, const void* value) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        sub ecx, ebp
        mov eax, 0x2e8ba2e9
        imul ecx
        sar edx, 0x3
        mov ebx, edx
        shr ebx, 0x1f
        add ebx, edx
        test ebx, ebx
        jle done_empty
        push esi
        push edi
    loop_top:
        mov eax, ebx
        cdq
        sub eax, edx
        mov edi, eax
        mov eax, dword ptr [esp + 0x1c]
        sar edi, 0x1
        mov esi, edi
        imul esi, esi, 0x2c
        push eax
        add esi, ebp
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je go_zero
        or ecx, -0x1
        sub ecx, edi
        lea ebp, [esi + 0x2c]
        add ebx, ecx
        jmp loop_check
    go_zero:
        mov ebx, edi
    loop_check:
        test ebx, ebx
        jg loop_top
        pop edi
        pop esi
    done_empty:
        mov eax, ebp
        pop ebp
        pop ebx
        ret
    }
}

// [0x00575350] sub_00575350 (96 bytes)
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_00575350(void* self, int edx_unused, const float* a1, float a2) {
    __asm {
        push ecx
        fld dword ptr [esp + 0xc]
        push esi
        fmul qword ptr [mem_00993828]
        mov esi, ecx
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x10]
        call ext_006A6EAA
        fstp dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esi]
        fld dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esi + 0x4]
        fld dword ptr [eax + 0x4]
        fmul st, st(1)
        fstp dword ptr [esi + 0x8]
        fmul dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0xc]
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0057BD80] sub_0057BD80 (97 bytes)
extern "C" void ext_0057BB90();

extern "C" __declspec(naked) int __cdecl fn_0057BD80(int a1, int a2, int a3, int a4, int a5, int a6) {
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
        call ext_0057BB90
        sub esi, ebx
        mov eax, 0x88888889
        imul esi
        add edx, esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov ecx, eax
        shl ecx, 4
        add esp, 0x18
        sub ecx, eax
        mov eax, edi
        add ecx, ecx
        pop edi
        add ecx, ecx
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0057CA60] sub_0057CA60 (43 bytes)
extern "C" void ext_0057BD80();

extern "C" __declspec(naked) void __fastcall fn_0057CA60(void* self) {
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
        call ext_0057BD80
        add esp, 0x1c
        ret
    }
}

// [0x00575CE0] sub_00575CE0 (98 bytes)
extern "C" int mem_00924FD4;

extern "C" __declspec(naked) bool __fastcall fn_00575CE0(void* self, int edx_unused, void* s, void* str, int* flag) {
    __asm {
        sub esp, 0x34
        push esi
        mov esi, dword ptr [esp + 0x3c]
        push edi
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        call dword ptr [mem_0092508C]
        mov edi, dword ptr [esp + 0x48]
        push 0x4
        push edi
        mov ecx, esi
        call dword ptr [mem_00925090]
        push 0x1c
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00925090]
        mov ecx, dword ptr [esp + 0x44]
        lea edx, [esp + 0x20]
        push edx
        call dword ptr [mem_00924FD4]
        cmp dword ptr [edi], 0x1
        jge keep_flag
        mov dword ptr [edi], 0x0
        pop edi
        mov al, 0x1
        pop esi
        add esp, 0x34
        ret 0xc
    keep_flag:
        pop edi
        xor al, al
        pop esi
        add esp, 0x34
        ret 0xc
    }
}

// [0x0057BDF0] sub_0057BDF0 (101 bytes)
extern "C" void ext_0057BBE0();

extern "C" __declspec(naked) int __cdecl fn_0057BDF0(int a1, int a2, int a3) {
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
        call ext_0057BBE0
        sub esi, ebx
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea ecx, [eax * 8]
        sub ecx, eax
        add esp, 0x18
        add ecx, ecx
        mov eax, edi
        add ecx, ecx
        pop edi
        add ecx, ecx
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0057CA90] sub_0057CA90 (43 bytes)
extern "C" void ext_0057BDF0();

extern "C" __declspec(naked) void __fastcall fn_0057CA90(void* self) {
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
        call ext_0057BDF0
        add esp, 0x1c
        ret
    }
}

// [0x0057CEE0] sub_0057CEE0 (109 bytes)
extern "C" void ext_005567D0();
extern "C" void ext_0057BEC0();

extern "C" __declspec(naked) void* __fastcall fn_0057CEE0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        test ebp, ebp
        push esi
        mov esi, ecx
        je fail
        cmp ebp, dword ptr [esp + 1Ch]
        je ok
    fail:
        call dword ptr [mem_00925134]
    ok:
        mov ebx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 20h]
        cmp ebx, ecx
        je done
        mov eax, dword ptr [esi + 8]
        push edi
        mov byte ptr [esp + 18h], 0
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 1Ch]
        push edx
        push ebx
        push eax
        push ecx
        call ext_0057BEC0
        mov ecx, dword ptr [esi + 8]
        mov edi, eax
        mov eax, dword ptr [esp + 2Ch]
        push eax
        push esi
        push ecx
        push edi
        call ext_005567D0
        add esp, 28h
        mov dword ptr [esi + 8], edi
        pop edi
    done:
        mov eax, dword ptr [esp + 10h]
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        ret 14h
    }
}

// [0x0057CF80] sub_0057CF80 (59 bytes)
extern "C" void ext_0057CEE0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0057CF80(void* self) {
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
        jbe m57cf80_ok1
        call ebp
    m57cf80_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m57cf80_ok2
        call ebp
    m57cf80_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0057CEE0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00577DE0] sub_00577DE0 (89 bytes)
extern "C" void ext_005566D0();
extern "C" void ext_005761E0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00577DE0(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5) {
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
        call ext_005761E0
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edi, eax
        mov eax, dword ptr [esi + 0x8]
        push esi
        push eax
        push edi
        call ext_005566D0
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

// [0x00574D90] sub_00574D90 (131 bytes)
extern "C" void ext_00574D30();
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_00574D90(void* self) {
    __asm {
        push -1
        push 0x89a0d8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00574D30
        lea ecx, [esi + 0x54]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FE8]
        fldz
        mov ecx, dword ptr [esp + 0x8]
        fst dword ptr [esi + 0x78]
        fst dword ptr [esi + 0x74]
        mov eax, esi
        fst dword ptr [esi + 0x70]
        fst dword ptr [esi + 0x84]
        fst dword ptr [esi + 0x80]
        fst dword ptr [esi + 0x7c]
        fst dword ptr [esi + 0x90]
        fst dword ptr [esi + 0x8c]
        fst dword ptr [esi + 0x88]
        fst dword ptr [esi + 0x9c]
        fst dword ptr [esi + 0x98]
        fstp dword ptr [esi + 0x94]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00570700] sub_00570700 (136 bytes)
extern "C" void ext_00570380();
extern "C" int mem_00924FB0;
extern "C" int mem_009250EC;
extern "C" int mem_009250C0;
extern "C" int mem_0092500C;

extern "C" __declspec(naked) bool __fastcall fn_00570700(void* self, int edx_unused, void* a1, void* is) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push eax
        lea esi, [ebp + 0x46c]
        push esi
        call dword ptr [mem_00924FB0]
        add esp, 0x8
        test al, al
        je done_true
        mov edi, dword ptr [esp + 0x18]
        mov ebx, dword ptr [mem_009250EC]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    read_loop:
        push esi
        push edi
        call ebx
        mov ecx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0x4]
        add esp, 0x8
        add ecx, eax
        call dword ptr [mem_009250C0]
        test al, al
        jne done_false
        push 0x0
        mov ecx, esi
        call dword ptr [mem_0092500C]
        cmp byte ptr [eax], 0x23
        jne check_loop
        push edi
        mov ecx, ebp
        call ext_00570380
        test al, al
        je done_false
    check_loop:
        mov edx, dword ptr [esp + 0x14]
        push edx
        push esi
        call dword ptr [mem_00924FB0]
        add esp, 0x8
        test al, al
        jne read_loop
    done_true:
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret 0x8
    done_false:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x8
    }
}

// [0x00576E50] sub_00576E50 (141 bytes)
extern "C" void ext_00553F00();
extern "C" void ext_00663060();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_00576E50(void* first, unsigned int count, const void* val) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x0089DD11
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
    loop_00576E50:
        cmp edi, ebx
        jbe exit_00576E50
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_00576E50
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call ext_00553F00
    skip_00576E50:
        sub edi, 0x1
        add esi, 0x54
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_00576E50
    handler_00576E50:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow_00576E50
    dtor_00576E50:
        mov ecx, esi
        call ext_00663060
        add esi, 0x54
        cmp esi, edi
        jne dtor_00576E50
    rethrow_00576E50:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_00576E50:
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

// [0x00577AA0] sub_00577AA0 (55 bytes)
extern "C" void ext_00576E50();

extern "C" __declspec(naked) int __fastcall fn_00577AA0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_00576E50
        mov eax, esi
        imul eax, eax, 0x54
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0057BF80] sub_0057BF80 (141 bytes)
extern "C" void ext_005541A0();
extern "C" void ext_005541F0();
extern "C" void ext_006A6DD2();
// Naked: C++ try/catch under /EHsc drops the EH frame around extern "C" callees, and the
// target keeps a per-iteration EH state byte, so the frame and loop are written out directly.
extern "C" __declspec(naked) char* __cdecl fn_0057BF80(char* first, char* last, char* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89e4b1
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
        je done
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_copy
        push edi
        mov ecx, esi
        call ext_005541F0
    skip_copy:
        add esi, 0x3c
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x3c
        jmp loop_top
    unwind_funclet:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
    dtor_loop:
        mov ecx, esi
        call ext_005541A0
        add esi, 0x3c
        cmp esi, edi
        jne dtor_loop
    rethrow:
        xor ebx, ebx
        push ebx
        push ebx
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

// [0x00578050] sub_00578050 (41 bytes)
extern "C" void ext_00555980();
extern "C" __declspec(naked) void __fastcall fn_00578050(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_00555980
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0057CF50] sub_0057CF50 (41 bytes)
extern "C" void ext_0057BF80();
extern "C" __declspec(naked) void __fastcall fn_0057CF50(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_0057BF80
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0057CAC0] sub_0057CAC0 (141 bytes)
extern "C" void ext_005541A0();
extern "C" void ext_005541F0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_0057CAC0(void* first, unsigned int count, const void* val) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x0089E4D1
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
    loop_0057CAC0:
        cmp edi, ebx
        jbe exit_0057CAC0
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_0057CAC0
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call ext_005541F0
    skip_0057CAC0:
        sub edi, 0x1
        add esi, 0x3c
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_0057CAC0
    handler_0057CAC0:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow_0057CAC0
    dtor_0057CAC0:
        mov ecx, esi
        call ext_005541A0
        add esi, 0x3c
        cmp esi, edi
        jne dtor_0057CAC0
    rethrow_0057CAC0:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_0057CAC0:
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

// [0x0057CEA0] sub_0057CEA0 (58 bytes)
extern "C" void ext_0057CAC0();

extern "C" __declspec(naked) void* __fastcall fn_0057CEA0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp+10h]
        push esi
        mov esi, dword ptr [esp+10h]
        push edi
        mov edi, dword ptr [esp+10h]
        mov byte ptr [esp+8], 0
        mov eax, dword ptr [esp+8]
        push eax
        mov eax, dword ptr [esp+1Ch]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_0057CAC0
        mov ecx, esi
        add esp, 18h
        shl ecx, 4
        sub ecx, esi
        lea eax, [edi+4*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0Ch
    }
}

// [0x00575D50] sub_00575D50 (147 bytes)
extern "C" int mem_0092508C;
extern "C" int mem_00925090;
extern "C" int mem_00925088;

struct Fpos {
    int a, b, c, d, e, f;
};

extern "C" bool __fastcall fn_00575D50(void* self, int edx_unused, void* stream, int* pVersion, int* pSize, void* pBuf) {
    typedef void (__thiscall *tellg_fn)(void*, Fpos*);
    typedef void* (__thiscall *read_fn)(void*, void*, int);
    typedef bool (__thiscall *eof_fn)(void*);

    short version;
    Fpos fpos;

    (*(tellg_fn*)&mem_0092508C)(stream, &fpos);

    (*(read_fn*)&mem_00925090)(stream, &version, 2);
    int v = version;
    *pVersion = v;
    if (v < 1) {
        return true;
    }

    short size;
    (*(read_fn*)&mem_00925090)(stream, &size, 2);
    *pSize = size;
    (*(read_fn*)&mem_00925090)(stream, pBuf, 4);

    void* ios = (char*)stream + *(int*)(*(char**)stream + 4);
    if ((*(eof_fn*)&mem_00925088)(ios)) {
        return true;
    }

    *pSize = size;
    return false;
}

extern "C" void ext_00573490();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A729B();

// [0x005734B0] sub_005734B0 (158 bytes)
// Naked: the copy loop needs an EH frame with a per-element state byte that C++ try/catch
// under /EHsc does not reproduce around extern "C" callees, so the frame is written out directly.
extern "C" __declspec(naked) void* __cdecl fn_005734B0(void* first, void* last, void* dest, void* ctx) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89d751
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
        push 0x436f30
        push 0x4a6970
        push 0x3
        push 0x10
        push edi
        push esi
        call ext_006A729B
skip_ctor:
        add esi, 0x30
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x30
        jmp loop_top
handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
        mov ebx, dword ptr [ebp + 0x14]
destroy_loop:
        push esi
        mov ecx, ebx
        call ext_00573490
        add esi, 0x30
        cmp esi, edi
        jne destroy_loop
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

// [0x00573900] sub_00573900 (158 bytes)
extern "C" void ext_00573490();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A729B();

// try { for (n = count; n; --n) { if (p) ctor(p, a, b); p += 0x30; } }
// catch (...) { ... throw; }  -- written out by hand as naked asm (SEH frame).
extern "C" __declspec(naked) void __cdecl fn_00573900(void* first, unsigned int count, const void* a, const void* b) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x0089D7C1
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
    loop_00573900:
        cmp edi, ebx
        jbe epilogue_00573900
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_00573900
        mov eax, dword ptr [ebp + 0x10]
        push 0x00436F30
        push 0x004A6970
        push 0x3
        push 0x10
        push eax
        push esi
        call ext_006A729B
    skip_00573900:
        sub edi, 0x1
        add esi, 0x30
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_00573900
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je done_00573900
        mov ebx, dword ptr [ebp + 0x14]
    dtor_loop_00573900:
        push esi
        mov ecx, ebx
        call ext_00573490
        add esi, 0x30
        cmp esi, edi
        jne dtor_loop_00573900
    done_00573900:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    epilogue_00573900:
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

// [0x00573A10] sub_00573A10 (41 bytes)
extern "C" void ext_005734B0();
extern "C" __declspec(naked) void __fastcall fn_00573A10(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_005734B0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x005739A0] sub_005739A0 (56 bytes)
extern "C" void ext_00573900();

extern "C" __declspec(naked) int __fastcall fn_005739A0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_00573900
        lea eax, [esi + 2*esi]
        add esp, 0x18
        shl eax, 0x4
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00574A30] sub_00574A30 (162 bytes)
extern "C" void ext_0063EFE0();
extern "C" int mem_00924E48;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00574A30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, dword ptr [esp + 0x30]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        call edx
        push 0x928b5d
        mov ecx, eax
        call dword ptr [mem_00924E48]
        test eax, eax
        jne loc_574ac0
        mov ecx, 0xb3d27c
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0x34]
        push eax
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, eax
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x5c]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0
        call edx
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0x4c]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
loc_574ac0:
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x8
    }
}

// [0x00570570] sub_00570570 (101 bytes)
extern "C" void ext_00554EB0();
extern "C" __declspec(naked) void __fastcall fn_00570570(void* self, int edx_unused, void* p, float x, float y, float z) {
    __asm {
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        sub esp, 0xc
        mov eax, esp
        fstp dword ptr [eax]
        add ecx, 0x5c
        fld dword ptr [esp + 0x24]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [eax + 0x8]
        lea eax, [esp + 0xc]
        push eax
        call ext_00554EB0
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax + 0x30]
        fadd dword ptr [esp + 0x14]
        fstp dword ptr [eax + 0x30]
        fld dword ptr [eax + 0x34]
        fadd dword ptr [esp + 0x18]
        fstp dword ptr [eax + 0x34]
        fld dword ptr [eax + 0x38]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [eax + 0x38]
        add esp, 0xc
        ret 0x10
    }
}

// [0x00574E60] sub_00574E60 (173 bytes)
extern "C" void ext_006A6E8C();
extern "C" int mem_00925094;
extern "C" int mem_00924FF0;
extern "C" int mem_009252D0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00574E60(void* self) {
    __asm {
        push -1
        push 0x88d1d9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov eax, dword ptr [esp + 0x50]
        mov esi, dword ptr [esp + 0x30]
        push 0x4
        lea ecx, [esp + 0x54]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x30], 0
        mov dword ptr [esp + 0x58], eax
        call dword ptr [mem_00925094]
        mov edx, dword ptr [esp + 0x48]
        push edx
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924FF0]
        push eax
        lea eax, [esp + 0xc]
        push eax
        call dword ptr [mem_009252D0]
        mov eax, dword ptr [esp + 0x54]
        add esp, 0xc
        cmp eax, 0x1c
        jge L_00574EDA
        mov edx, 0x1c
        sub edx, eax
        push edx
        lea ecx, [esp + eax + 0x8]
        push 0x0
        push ecx
        call ext_006A6E8C
        add esp, 0xc
    L_00574EDA:
        push 0x1c
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        call dword ptr [mem_00925094]
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x24
    }
}

// [0x00575170] sub_00575170 (181 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_00575170(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call dword ptr [mem_00924FDC]
        lea eax, [edi + 0x1c]
        push eax
        lea ecx, [esi + 0x1c]
        call dword ptr [mem_00924FDC]
        lea ecx, [edi + 0x38]
        push ecx
        lea ecx, [esi + 0x38]
        call dword ptr [mem_00924FDC]
        lea edx, [edi + 0x54]
        push edx
        lea ecx, [esi + 0x54]
        call dword ptr [mem_00924FDC]
        fld dword ptr [edi + 0x70]
        fstp dword ptr [esi + 0x70]
        mov eax, esi
        fld dword ptr [edi + 0x74]
        fstp dword ptr [esi + 0x74]
        fld dword ptr [edi + 0x78]
        fstp dword ptr [esi + 0x78]
        fld dword ptr [edi + 0x7c]
        fstp dword ptr [esi + 0x7c]
        fld dword ptr [edi + 0x80]
        fstp dword ptr [esi + 0x80]
        fld dword ptr [edi + 0x84]
        fstp dword ptr [esi + 0x84]
        fld dword ptr [edi + 0x88]
        fstp dword ptr [esi + 0x88]
        fld dword ptr [edi + 0x8c]
        fstp dword ptr [esi + 0x8c]
        fld dword ptr [edi + 0x90]
        fstp dword ptr [esi + 0x90]
        fld dword ptr [edi + 0x94]
        fstp dword ptr [esi + 0x94]
        fld dword ptr [edi + 0x98]
        fstp dword ptr [esi + 0x98]
        fld dword ptr [edi + 0x9c]
        pop edi
        fstp dword ptr [esi + 0x9c]
        pop esi
        ret 4
    }
}

// [0x00576260] sub_00576260 (41 bytes)
// Stack args: arg1 = first, arg2 = last, arg3 = value. For p = first; p != last; p += 0xa0: push value, ecx = p, call sub_00575170 (callee cleans the pushed arg). Plain ret.
extern "C" void ext_00575170();

extern "C" __declspec(naked) void __cdecl fn_00576260(void* first, void* last, const void* value) {
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
        call ext_00575170
        add esi, 0xa0
        cmp esi, edi
        jne loop_top
        pop ebx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x00575280] sub_00575280 (56 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00575280(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je skip_00575280
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_00575280:
        sub esi, 0xa0
        sub edi, 0xa0
        push esi
        mov ecx, edi
        call ext_00575170
        cmp esi, ebx
        jne loop_00575280
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    skip_00575280:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00575310] sub_00575310 (56 bytes)
extern "C" void* __cdecl fn_00575310(const char* first, const char* last, char* dest) {
    if (first != last) {
        typedef void (__thiscall *Fn)(void* self, const void* src);
        do {
            ((Fn)ext_00575170)(dest, first);
            first += 0xa0;
            dest += 0xa0;
        } while (first != last);
    }
    return dest;
}

// [0x00575E90] sub_00575E90 (92 bytes)
extern "C" void ext_00575280(int, int, int, int, int, int);

extern "C" __declspec(naked) int __cdecl fn_00575E90(int a1, int a2, int a3) {
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
        call ext_00575280
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 0x6
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 4*eax]
        shl eax, 0x5
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

// [0x00575F50] sub_00575F50 (88 bytes)
extern "C" void ext_00575310();

extern "C" __declspec(naked) void* __cdecl fn_00575F50(void* a1, void* a2, void* a3) {
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
        call ext_00575310
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 6
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 4*eax]
        add esp, 0x18
        shl eax, 5
        add eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00576290] sub_00576290 (43 bytes)
extern "C" void ext_00575F50();

extern "C" __declspec(naked) void __fastcall fn_00576290(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0xc]
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
        call ext_00575F50
        add esp, 0x1c
        ret
    }
}

// [0x00576D50] sub_00576D50 (43 bytes)
extern "C" void ext_00575E90();

extern "C" __declspec(naked) void __fastcall fn_00576D50(void* self) {
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
        call ext_00575E90
        add esp, 0x1c
        ret
    }
}

// [0x00577B10] sub_00577B10 (109 bytes)
extern "C" void ext_00556740();
extern "C" void ext_00575F50();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00577B10(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        test ebp, ebp
        push esi
        mov esi, ecx
        je fail
        cmp ebp, dword ptr [esp + 1Ch]
        je ok
    fail:
        call dword ptr [mem_00925134]
    ok:
        mov ebx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 20h]
        cmp ebx, ecx
        je done
        mov eax, dword ptr [esi + 8]
        push edi
        mov byte ptr [esp + 18h], 0
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 1Ch]
        push edx
        push ebx
        push eax
        push ecx
        call ext_00575F50
        mov ecx, dword ptr [esi + 8]
        mov edi, eax
        mov eax, dword ptr [esp + 2Ch]
        push eax
        push esi
        push ecx
        push edi
        call ext_00556740
        add esp, 28h
        mov dword ptr [esi + 8], edi
        pop edi
    done:
        mov eax, dword ptr [esp + 10h]
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        ret 14h
    }
}

// [0x005771F0] sub_005771F0 (184 bytes)
extern "C" void ext_00427A60();
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) int __fastcall fn_005771F0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x1c
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x2c]
        add esi, 0x24
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], 0x0
        jbe short L_a
        call ebp
L_a:
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], esi
L_loop:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x1c], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe short L_b
        call ebp
L_b:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x28], edi
        call ext_00427A60
        mov ebx, dword ptr [esp + 0x18]
        test ebx, ebx
        je short L_c
        cmp ebx, dword ptr [esp + 0x24]
        je short L_d
L_c:
        call ebp
L_d:
        mov edi, dword ptr [esp + 0x1c]
        cmp edi, dword ptr [esp + 0x28]
        jae short L_end
        test ebx, ebx
        jne short L_e
        call ebp
L_e:
        cmp edi, dword ptr [ebx + 0x8]
        jb short L_f
        call ebp
L_f:
        mov eax, dword ptr [edi]
        add eax, 0x4
        push 0xb3d4ac
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je short L_g
        add dword ptr [esp + 0x10], 0x1
L_g:
        cmp edi, dword ptr [ebx + 0x8]
        jb short L_h
        call ebp
L_h:
        add edi, 0x4
        jmp short L_loop
L_end:
        mov eax, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1c
        ret 0x4
    }
}

// [0x00578080] sub_00578080 (59 bytes)
extern "C" void ext_00577B10();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00578080(void* self) {
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
        jbe m578080_ok1
        call ebp
    m578080_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m578080_ok2
        call ebp
    m578080_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00577B10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00570790] sub_00570790 (185 bytes)
extern "C" void ext_00570700();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_009250EC;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) bool __fastcall fn_00570790(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push 0x9594a8
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        mov ebp, dword ptr [esp + 0x38]
        push ebp
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x38], 0
        call ext_00570700
        test al, al
        lea ecx, [esp + 0xc]
        sete bl
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
        test bl, bl
        je loc_00570806
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    loc_00570806:
        push edi
        lea edi, [esi + 0x46c]
        push edi
        push ebp
        call dword ptr [mem_009250EC]
        push 0x93f8fc
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 0x10
        test al, al
        pop edi
        je loc_00570833
        mov dword ptr [esi + 0x88], 0
    loc_00570833:
        mov ecx, dword ptr [esp + 0x28]
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x0057CB50] sub_0057CB50 (190 bytes)
extern "C" void ext_0057BE60();
extern "C" __declspec(naked) void __fastcall fn_0057CB50(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        push edi
        mov byte ptr [esp + 10h], 0
        jbe L_0057CB6C
        call dword ptr [mem_00925134]
    L_0057CB6C:
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_0057CB7A
        call dword ptr [mem_00925134]
    L_0057CB7A:
        mov eax, dword ptr [esp + 10h]
        mov ebp, dword ptr [esp + 24h]
        push 0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 2ch], edi
        call ext_0057BE60
        mov edi, dword ptr [esi + 8]
        add esp, 14h
        cmp dword ptr [esi + 4], edi
        mov ebx, eax
        jbe L_0057CBA4
        call dword ptr [mem_00925134]
    L_0057CBA4:
        test esi, esi
        je L_0057CBAC
        cmp esi, esi
        je L_0057CBB2
    L_0057CBAC:
        call dword ptr [mem_00925134]
    L_0057CBB2:
        cmp ebx, edi
        je L_0057CBE5
        test esi, esi
        jne L_0057CBC0
        call dword ptr [mem_00925134]
    L_0057CBC0:
        cmp ebx, dword ptr [esi + 8]
        jb L_0057CBCB
        call dword ptr [mem_00925134]
    L_0057CBCB:
        mov ecx, dword ptr [ebp]
        cmp ecx, dword ptr [ebx]
        jl L_0057CBE5
        mov eax, dword ptr [esp + 20h]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        add esp, 0ch
        ret 8
    L_0057CBE5:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov edi, dword ptr [esp + 20h]
        mov dword ptr [edi], 0
        jbe L_0057CBFD
        call dword ptr [mem_00925134]
    L_0057CBFD:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ret 8
    }
}

// [0x0057CDC0] sub_0057CDC0 (102 bytes)
extern "C" void ext_0057CB50();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0057CDC0(void* self, int edx_unused, void* a1) {
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
        call ext_0057CB50
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_0057CDEA
        call ebp
    L_0057CDEA:
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        je L_0057CDF6
        cmp edi, esi
        je L_0057CDF8
    L_0057CDF6:
        call ebp
    L_0057CDF8:
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebx
        je L_0057CE1A
        test edi, edi
        jne L_0057CE06
        call ebp
    L_0057CE06:
        cmp esi, dword ptr [edi + 8]
        jb L_0057CE0D
        call ebp
    L_0057CE0D:
        pop edi
        lea eax, [esi + 4]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_0057CE1A:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x0057CC10] sub_0057CC10 (198 bytes)
extern "C" void ext_0057BF20();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;
extern "C" __declspec(naked) void __fastcall fn_0057CC10(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        push edi
        mov byte ptr [esp + 10h], 0
        jbe L_0057CC2C
        call dword ptr [mem_00925134]
    L_0057CC2C:
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_0057CC3A
        call dword ptr [mem_00925134]
    L_0057CC3A:
        mov eax, dword ptr [esp + 10h]
        mov ebp, dword ptr [esp + 24h]
        push 0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 2ch], edi
        call ext_0057BF20
        mov edi, dword ptr [esi + 8]
        add esp, 14h
        cmp dword ptr [esi + 4], edi
        mov ebx, eax
        jbe L_0057CC64
        call dword ptr [mem_00925134]
    L_0057CC64:
        test esi, esi
        je L_0057CC6C
        cmp esi, esi
        je L_0057CC72
    L_0057CC6C:
        call dword ptr [mem_00925134]
    L_0057CC72:
        cmp ebx, edi
        je L_0057CCAD
        test esi, esi
        jne L_0057CC80
        call dword ptr [mem_00925134]
    L_0057CC80:
        cmp ebx, dword ptr [esi + 8]
        jb L_0057CC8B
        call dword ptr [mem_00925134]
    L_0057CC8B:
        push ebx
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne L_0057CCAD
        mov eax, dword ptr [esp + 20h]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        add esp, 0ch
        ret 8
    L_0057CCAD:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov edi, dword ptr [esp + 20h]
        mov dword ptr [edi], 0
        jbe L_0057CCC5
        call dword ptr [mem_00925134]
    L_0057CCC5:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ret 8
    }
}

// [0x0057CCE0] sub_0057CCE0 (102 bytes)
extern "C" void ext_0057CC10();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0057CCE0(void* self, int edx_unused, void* a1) {
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
        call ext_0057CC10
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_0057CDEA
        call ebp
    L_0057CDEA:
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        je L_0057CDF6
        cmp edi, esi
        je L_0057CDF8
    L_0057CDF6:
        call ebp
    L_0057CDF8:
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebx
        je L_0057CE1A
        test edi, edi
        jne L_0057CE06
        call ebp
    L_0057CE06:
        cmp esi, dword ptr [edi + 8]
        jb L_0057CE0D
        call ebp
    L_0057CE0D:
        pop edi
        lea eax, [esi + 1Ch]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_0057CE1A:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x00576DB0] sub_00576DB0 (147 bytes)
extern "C" void ext_00553FF0();
extern "C" void ext_00554040();
extern "C" void ext_006A6DD2();

// try { for (n = count; n; --n) { if (p) ctor(p, a); p += 0xa0; } }
// catch (...) { destroy [begin, p); throw; }
// Naked: MSVC /EHsc treats extern "C" callees as nothrow, which drops the try block,
// so the SEH frame is written out by hand.
extern "C" __declspec(naked) void __cdecl fn_00576DB0(void* begin, unsigned int count, const void* a) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x0089dcf1
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
        call ext_00554040
skip_ctor:
        sub edi, 0x1
        add esi, 0xa0
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
        call ext_00553FF0
        add esi, 0xa0
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

// [0x00578020] sub_00578020 (41 bytes)
extern "C" void ext_00555A10();
extern "C" __declspec(naked) void __fastcall fn_00578020(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_00555A10
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00577A60] sub_00577A60 (56 bytes)
extern "C" void ext_00576DB0();

extern "C" __declspec(naked) int __fastcall fn_00577A60(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_00576DB0
        lea eax, [esi + 4*esi]
        add esp, 0x18
        shl eax, 0x5
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00574C20] sub_00574C20 (206 bytes)
extern "C" int mem_00924EC4;
extern "C" int mem_00925120;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" int mem_009251F0;
extern "C" int mem_00993830;

extern "C" __declspec(naked) void __fastcall fn_00574C20(void* self) {
    __asm {
        push -1
        push 0x89dbc2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov eax, dword ptr [ecx + 0x48c]
        mov edx, dword ptr [eax]
        lea esi, [ecx + 0x48c]
        lea ecx, [esp + 0x34]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x30], 0
        call edx
        test eax, eax
        jne short L_574cc0
        mov eax, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [eax]
        push ecx
        push 1
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esp + 0x40]
        call dword ptr [mem_00925120]
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx]
        mov ecx, esi
        mov byte ptr [esp + 0x30], 1
        call eax
        lea ecx, [esp + 0x8]
        mov esi, eax
        mov byte ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF4]
        test esi, esi
        lea ecx, [esp + 0x34]
        jne short L_574cb2
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0x8]
        add esp, 4
        jmp short L_574cc6
    L_574cb2:
        fld dword ptr [esi]
        fmul qword ptr [mem_00993830]
        fstp dword ptr [esp + 0x4]
        jmp short L_574cca
    L_574cc0:
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x4]
    L_574cc6:
        lea ecx, [esp + 0x34]
    L_574cca:
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        fld dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x1c
    }
}

// [0x005772B0] sub_005772B0 (213 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00925094;

extern "C" __declspec(naked) void __fastcall fn_005772B0(void* self, int edx_unused, void* os, int n) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        push ebp
        shl eax, 0x4
        push esi
        lea ebp, [eax + ecx]
        lea esi, [ebp + 0x6c4]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        _emit 0x3b
        _emit 0xf6
        je L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp edi, ebx
        jae L_second
        cmp edi, dword ptr [esi + 0x8]
        jb L_loop1_body
        call dword ptr [mem_00925134]
    L_loop1_body:
        mov cl, byte ptr [edi]
        push 0x1
        lea edx, [esp + 0x1c]
        mov byte ptr [esp + 0x1c], cl
        mov ecx, dword ptr [esp + 0x18]
        push edx
        call dword ptr [mem_00925094]
        cmp edi, dword ptr [esi + 0x8]
        jb L_loop1_inc
        call dword ptr [mem_00925134]
    L_loop1_inc:
        add edi, 0x1
        jmp L_chk1
    L_second:
        mov edi, dword ptr [ebp + 0x6e8]
        cmp edi, dword ptr [ebp + 0x6ec]
        lea esi, [ebp + 0x6e4]
        mov ebp, dword ptr [mem_00925134]
        jbe L_chk4
        call ebp
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_chk4:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk5
        call ebp
    L_chk5:
        _emit 0x3b
        _emit 0xf6
        je L_chk6
        call ebp
    L_chk6:
        cmp edi, ebx
        jae L_done
        cmp edi, dword ptr [esi + 0x8]
        jb L_loop2_body
        call ebp
    L_loop2_body:
        mov al, byte ptr [edi]
        push 0x1
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        mov byte ptr [esp + 0x20], al
        call dword ptr [mem_00925094]
        cmp edi, dword ptr [esi + 0x8]
        jb L_loop2_inc
        call ebp
    L_loop2_inc:
        add edi, 0x1
        jmp L_chk4
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x005702F0] sub_005702F0 (93 bytes)
extern "C" void ext_00558920();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005702F0(void* self) {
    __asm {
        push -1
        push 0x89a648
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x957ac4
        mov dword ptr [esi + 4], 0x957ab8
        lea ecx, [esi + 0x46c]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00558920
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00574B10] sub_00574B10 (263 bytes)
extern "C" int mem_00925098;
extern "C" int mem_00925120;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00925098;
extern "C" int mem_00925120;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00574B10(void* self) {
    __asm {
        push -1
        push 0x89dba4
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 28
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
        push 0x92ab78
        lea ecx, [esp+64]
        mov dword ptr [esp+56], ebx
        call dword ptr [mem_00925098]
        mov esi, eax
        push esi
        push ebx
        lea eax, [esp+20]
        push eax
        lea ecx, [esp+68]
        call dword ptr [mem_00925120]
        mov ecx, dword ptr [esp+84]
        push eax
        mov byte ptr [esp+52], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp+12]
        mov byte ptr [esp+48], bl
        call dword ptr [mem_00924FF4]
        add esi, 1
        push esi
        push 0x92ab78
        lea ecx, [esp+64]
        call dword ptr [mem_00925098]
        mov edi, eax
        sub edi, esi
        push edi
        push esi
        lea ecx, [esp+20]
        push ecx
        lea ecx, [esp+68]
        call dword ptr [mem_00925120]
        mov ecx, dword ptr [esp+88]
        push eax
        mov byte ptr [esp+52], 2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp+12]
        mov byte ptr [esp+48], bl
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esp+76]
        lea eax, [esi+edi+1]
        sub edx, eax
        push edx
        push eax
        lea eax, [esp+20]
        push eax
        lea ecx, [esp+68]
        call dword ptr [mem_00925120]
        mov ecx, dword ptr [esp+92]
        push eax
        mov byte ptr [esp+52], 3
        call dword ptr [mem_00924FDC]
        lea ecx, [esp+12]
        mov byte ptr [esp+48], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+56]
        mov dword ptr [esp+48], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp+40]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 40
        ret 40
    }
}

// [0x00570460] sub_00570460 (265 bytes)
extern "C" void ext_00554EB0();
extern "C" int mem_009250F0;
extern "C" int mem_009250EC;

extern "C" __declspec(naked) void __fastcall fn_00570460(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x24]
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ebp, ecx
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x14], ebp
        call dword ptr [mem_009250F0]
        lea eax, [edi + 4]
        push eax
        mov ecx, esi
        call dword ptr [mem_009250F0]
        lea ecx, [edi + 8]
        push ecx
        mov ecx, esi
        call dword ptr [mem_009250F0]
        mov ebx, dword ptr [mem_009250EC]
        add ebp, 0x46c
        push ebp
        push esi
        call ebx
        add esp, 8
        lea edx, [edi + 0x10]
        push edx
        mov ecx, esi
        call dword ptr [mem_009250F0]
        lea eax, [edi + 0x14]
        push eax
        mov ecx, esi
        call dword ptr [mem_009250F0]
        lea ecx, [edi + 0x18]
        push ecx
        mov ecx, esi
        call dword ptr [mem_009250F0]
        push ebp
        push esi
        call ebx
        add esp, 8
        lea edx, [edi + 0x20]
        push edx
        mov ecx, esi
        call dword ptr [mem_009250F0]
        lea eax, [edi + 0x24]
        push eax
        mov ecx, esi
        call dword ptr [mem_009250F0]
        lea ecx, [edi + 0x28]
        push ecx
        mov ecx, esi
        call dword ptr [mem_009250F0]
        push ebp
        push esi
        call ebx
        add esp, 8
        lea ebx, [edi + 0x30]
        push ebx
        mov ecx, esi
        call dword ptr [mem_009250F0]
        lea edx, [edi + 0x34]
        push edx
        mov ecx, esi
        call dword ptr [mem_009250F0]
        add edi, 0x38
        push edi
        mov ecx, esi
        call dword ptr [mem_009250F0]
        push ebp
        push esi
        call dword ptr [mem_009250EC]
        fld dword ptr [ebx]
        push ecx
        mov eax, esp
        fstp dword ptr [eax]
        fld dword ptr [ebx + 4]
        fstp dword ptr [eax + 4]
        fld dword ptr [ebx + 8]
        fstp dword ptr [eax + 8]
        lea eax, [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        add ecx, 0x5c
        call ext_00554EB0
        fld dword ptr [eax]
        fstp dword ptr [ebx]
        pop edi
        fld dword ptr [eax + 4]
        pop esi
        fstp dword ptr [ebx + 4]
        pop ebp
        fld dword ptr [eax + 8]
        fstp dword ptr [ebx + 8]
        pop ebx
        add esp, 0x10
        ret 8
    }
}

// [0x005705E0] sub_005705E0 (277 bytes)
extern "C" void ext_00696A90();
extern "C" int mem_00924FF0;
extern "C" int mem_009250C4;
extern "C" int mem_009250DC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_009250CC;
extern "C" int mem_0089CF14;
extern "C" int mem_009594A0;
extern "C" __declspec(naked) int __fastcall fn_005705E0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push offset mem_0089CF14
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0A8h
        mov ecx, [esp+0B8h]
        push esi
        push 1
        push 40h
        push 1
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp+30h]
        call dword ptr [mem_009250C4]
        mov eax, [esp+20h]
        mov ecx, [eax+4]
        xor esi, esi
        lea ecx, [esp+ecx+20h]
        mov [esp+0B4h], esi
        call dword ptr [mem_009250DC]
        test eax, eax
        je L_end
        push ebx
        push offset mem_009594A0
        lea ecx, [esp+0Ch]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp+8]
        push ecx
        lea edx, [esp+28h]
        push edx
        mov byte ptr [esp+0C0h], 1
        call ext_00696A90
        add esp, 8
        lea ecx, [esp+8]
        mov bl, al
        mov byte ptr [esp+0B8h], 0
        call dword ptr [mem_00924FF4]
        cmp bl, 1
        jne L_pop
        nop
    L_loop:
        push offset mem_009594A0
        lea ecx, [esp+0Ch]
        add esi, 1
        call dword ptr [mem_00924FE4]
        lea eax, [esp+8]
        push eax
        lea ecx, [esp+28h]
        push ecx
        mov byte ptr [esp+0C0h], 2
        call ext_00696A90
        add esp, 8
        lea ecx, [esp+8]
        mov bl, al
        mov byte ptr [esp+0B8h], 0
        call dword ptr [mem_00924FF4]
        cmp bl, 1
        je L_loop
    L_pop:
        pop ebx
    L_end:
        lea ecx, [esp+20h]
        mov dword ptr [esp+0B4h], 0FFFFFFFFh
        call dword ptr [mem_009250CC]
        mov ecx, [esp+0ACh]
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0B4h
        ret 4
    }
}

// [0x0057AD10] sub_0057AD10 (282 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_005566D0();
extern "C" void ext_00558920();
extern "C" void ext_00559840();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0057AD10(void* self) {
    __asm {
        push -1
        push 0x89dff9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x957f9c
        mov dword ptr [esi + 0x4], 0x957f90
        push 0x556610
        push 2
        push 0x10
        lea eax, [esi + 0x6e4]
        push eax
        mov dword ptr [esp + 0x28], 5
        call ext_006A6D5C
        push 0x556610
        push 2
        push 0x10
        lea ecx, [esi + 0x6c4]
        push ecx
        mov byte ptr [esp + 0x28], 4
        call ext_006A6D5C
        mov eax, dword ptr [esi + 0x6b8]
        lea edi, [esi + 0x6b4]
        xor ebx, ebx
        cmp eax, ebx
        mov byte ptr [esp + 0x18], 3
        je L_skip1
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [edi + 0x8]
        push edx
        push edi
        push ecx
        push eax
        call ext_00559840
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_skip1:
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov dword ptr [edi + 0xc], ebx
        mov eax, dword ptr [esi + 0x6a4]
        cmp eax, ebx
        lea edi, [esi + 0x6a0]
        mov byte ptr [esp + 0x18], 2
        je L_skip2
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [edi + 0x8]
        push edx
        push edi
        push ecx
        push eax
        call ext_005566D0
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_skip2:
        lea ecx, [esi + 0x48c]
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov dword ptr [edi + 0xc], ebx
        mov byte ptr [esp + 0x18], 1
        call ext_004026E0
        lea ecx, [esi + 0x46c]
        mov byte ptr [esp + 0x18], bl
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_00558920
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00571E20] sub_00571E20 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" int mem_00B3C178;
extern "C" int mem_00B3C15C;
extern "C" __declspec(naked) void __fastcall fn_00571E20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89d31e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B3C178], al
        jne skip_init
        or dword ptr [mem_00B3C178], eax
        push 0xa856f8
        push offset mem_00B3C15C
        mov dword ptr [esp + 0x10], 0x0
        call ext_00662610
        push 0x91c8f0
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3C15C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00575E30] sub_00575E30 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" int mem_00B3CDF8;
extern "C" int mem_00B3CDDC;

extern "C" __declspec(naked) void __fastcall fn_00575E30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89dc8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B3CDF8], al
        jne skip_init
        or dword ptr [mem_00B3CDF8], eax
        push 0xa4320c
        push offset mem_00B3CDDC
        mov dword ptr [esp + 0x10], 0x0
        call ext_00662610
        push 0x91cc00
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3CDDC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0057BC70] sub_0057BC70 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B3D714;
extern "C" int mem_00B3D6F8;

extern "C" __declspec(naked) void __fastcall fn_0057BC70(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89e46e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B3D714], al
        jne skip_init
        or dword ptr [mem_00B3D714], eax
        push 0xa858b8
        push offset mem_00B3D6F8
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91cd70
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3D6F8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0057BCD0] sub_0057BCD0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B3D734;
extern "C" int mem_00B3D718;

extern "C" __declspec(naked) void __fastcall fn_0057BCD0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89e48e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B3D734], al
        jne skip_init
        or dword ptr [mem_00B3D734], eax
        push 0xa8590c
        push offset mem_00B3D718
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91cd60
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3D718
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0057CD50] sub_0057CD50 (110 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_004276B0();
extern "C" void ext_0057BC70();
extern "C" void ext_0057CCE0();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) void __stdcall fn_0057CD50(void* a1) {
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
        call ext_0057CCE0
        test eax, eax
        jne done_0057CD50
        lea eax, [esp + 0x4]
        push esi
        push eax
        call ext_004276B0
        add esp, 0x8
        push eax
        mov dword ptr [esp + 0x70], 0x0
        call ext_0057BC70
        push eax
        lea ecx, [esp + 0x28]
        call ext_0041FF30
        push 0x9d3748
        lea ecx, [esp + 0x24]
        push ecx
        call ext_006A6DD2
done_0057CD50:
        mov ecx, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x6c
        ret 0x4
    }
}

// [0x0057CE30] sub_0057CE30 (112 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_0041FF30();
extern "C" void ext_0057BCD0();
extern "C" void ext_0057CDC0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_0057CE30(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b4989
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x60
        push esi
        mov esi, dword ptr [esp + 0x74]
        push esi
        call ext_0057CDC0
        test eax, eax
        jne skip_throw
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        call ext_00404F00
        add esp, 0x8
        push eax
        mov dword ptr [esp + 0x70], 0
        call ext_0057BCD0
        push eax
        lea ecx, [esp + 0x28]
        call ext_0041FF30
        push 0x9d3748
        lea edx, [esp + 0x24]
        push edx
        call ext_006A6DD2
    skip_throw:
        mov ecx, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x6c
        ret 0x4
    }
}

// [0x00574F70] sub_00574F70 (425 bytes)
extern "C" int mem_00925098;
extern "C" int mem_00925120;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00574F70(void* self) {
    __asm {
        push -1
        push 0x8848f2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x58]
        xor ebx, ebx
        push ebx
        push 0x92b49c
        mov ecx, edi
        call dword ptr [mem_00925098]
        mov esi, eax
        push 1
        add esi, 1
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, edi
        call dword ptr [mem_00925120]
        push esi
        push 0x92f150
        mov ecx, edi
        mov dword ptr [esp + 0x54], ebx
        call dword ptr [mem_00925098]
        push 1
        add eax, 1
        push eax
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, edi
        call dword ptr [mem_00925120]
        mov edi, dword ptr [mem_00924FC0]
        lea edx, [esp + 0xc]
        push 0x959968
        push edx
        mov byte ptr [esp + 0x54], 1
        call edi
        add esp, 8
        test al, al
        je L_575000
        mov esi, dword ptr [esp + 0x54]
        add esi, 0x7c
        jmp L_57505C

    L_575000:
        lea eax, [esp + 0xc]
        push 0x92f1e4
        push eax
        call edi
        add esp, 8
        test al, al
        je L_57501F
        mov esi, dword ptr [esp + 0x54]
        add esi, 0x94
        jmp L_57505C

    L_57501F:
        lea ecx, [esp + 0xc]
        push 0x959964
        push ecx
        call edi
        add esp, 8
        test al, al
        je L_57503B
        mov esi, dword ptr [esp + 0x54]
        add esi, 0x70
        jmp L_57505C

    L_57503B:
        lea edx, [esp + 0xc]
        push 0x92f198
        push edx
        call edi
        add esp, 8
        test al, al
        je L_5750E3
        mov esi, dword ptr [esp + 0x54]
        add esi, 0x88

    L_57505C:
        lea eax, [esp + 0x28]
        push 0x92f188
        push eax
        call edi
        add esp, 8
        test al, al
        je L_575077
        fld dword ptr [esp + 0x5c]
        fstp dword ptr [esi]
        jmp L_5750AD

    L_575077:
        lea ecx, [esp + 0x28]
        push 0x92f184
        push ecx
        call edi
        add esp, 8
        test al, al
        je L_575093
        fld dword ptr [esp + 0x5c]
        fstp dword ptr [esi + 4]
        jmp L_5750AD

    L_575093:
        lea edx, [esp + 0x28]
        push 0x92f180
        push edx
        call edi
        add esp, 8
        test al, al
        je L_5750E3
        fld dword ptr [esp + 0x5c]
        fstp dword ptr [esi + 8]

    L_5750AD:
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0x4c], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x4c], -1
        call dword ptr [mem_00924FF4]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 0xc

    L_5750E3:
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0x4c], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x4c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x44]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 0xc
    }
}

// [0x00573150] sub_00573150 (44 bytes)
extern "C" void ext_00558C10();
extern "C" void* __fastcall fn_00573150(void* self) {
    unsigned char* p = (unsigned char*)self;
    ext_00558C10();
    *(float*)(p + 0x6C) = 1.0f;
    *(int*)(p + 0x88) = 1;
    *(unsigned char*)(p + 0x70) = 1;
    *(unsigned int*)(p + 0x00) = 0x00957CB4;
    *(unsigned int*)(p + 0x04) = 0x00957CA8;
    return self;
}

// [0x00570A90] sub_00570A90 (284 bytes)
extern "C" void ext_00435D00();
extern "C" int mem_00924FC0;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_00570A90(void* self, int edx_unused, void* sret) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [mem_00924FC0]
        lea esi, [ecx + 0x46c]
        push 0x959570
        push esi
        mov dword ptr [esp + 0x10], 0x0
        call edi
        add esp, 0x8
        test al, al
        jne L_00570B57
        push 0x959568
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne L_00570B93
        push 0x959560
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne L_00570B0D
        push 0x959558
        push esi
        call edi
        add esp, 0x8
        test al, al
        je L_00570B26
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        push 0x95952c
        push ecx
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
    L_00570B0D:
        mov esi, dword ptr [esp + 0x10]
        push 0x959524
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    L_00570B26:
        push 0x959518
        push esi
        call edi
        add esp, 0x8
        test al, al
        je L_00570B70
        mov edx, dword ptr [mem_00924E90]
        mov eax, dword ptr [mem_00924FA0]
        push edx
        push 0x9594ec
        push eax
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
    L_00570B57:
        mov esi, dword ptr [esp + 0x10]
        push 0x9594e4
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    L_00570B70:
        mov ecx, dword ptr [mem_00924E90]
        mov edx, dword ptr [mem_00924FA0]
        push ecx
        push 0x9594b0
        push edx
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
    L_00570B93:
        mov esi, dword ptr [esp + 0x10]
        push 0x956e78
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005720D0] sub_005720D0 (544 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_00554DC0();
extern "C" void ext_0056D960();
extern "C" void ext_0066A720();
extern "C" void ext_0066A760();
extern "C" void ext_0066A8B0();
extern "C" void ext_00673C20();
extern "C" int mem_00987B44;
extern "C" int mem_00924FF0;
extern "C" int mem_00925134;
extern "C" int mem_00924FF4;
extern "C" int mem_00924E90;
extern "C" int mem_00924E98;

extern "C" __declspec(naked) void __fastcall fn_005720D0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        push -0x1
        push 0x89d373
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xe8
        mov eax, dword ptr [mem_00987B44]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x38]
        call ext_0066A720
        mov ecx, dword ptr [ebp + 0xc]
        push ecx
        lea ecx, [esi + 0x3f4]
        mov dword ptr [esp + 0x100], 0x0
        call dword ptr [mem_00924FF0]
        push eax
        lea edx, [esp + 0x3c]
        push edx
        call ext_0066A8B0
        mov eax, dword ptr [esp + 0x40]
        mov ecx, dword ptr [ebp + 0x8]
        push eax
        push ecx
        call ext_00435D00
        mov eax, dword ptr [esi + 0x414]
        mov ecx, dword ptr [eax + 0x5e4]
        mov edi, dword ptr [ecx]
        add esp, 0x14
        add eax, 0x5e0
        mov ebx, eax
        mov dword ptr [esp + 0x30], eax
        mov dword ptr [esp + 0x2c], ecx
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1c], edi
    L_572161:
        test ebx, ebx
        je L_572169
        cmp ebx, eax
        je L_57216f
    L_572169:
        call dword ptr [mem_00925134]
    L_57216f:
        cmp edi, dword ptr [esp + 0x2c]
        je L_5722b5
        test ebx, ebx
        jne L_572183
        call dword ptr [mem_00925134]
    L_572183:
        cmp edi, dword ptr [ebx + 0x4]
        jne L_57218e
        call dword ptr [mem_00925134]
    L_57218e:
        mov eax, dword ptr [edi + 0x28]
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0x10]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [esi + 0x420]
        push eax
        push 0x0
        lea eax, [esp + 0x88]
        push eax
        call edx
        fld dword ptr [eax + 0x30]
        sub esp, 0xc
        mov ecx, esp
        fstp dword ptr [ecx]
        mov dword ptr [esp + 0x50], esp
        fld dword ptr [eax + 0x34]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x38]
        lea eax, [esp + 0x2c]
        fstp dword ptr [ecx + 0x8]
        push eax
        lea ecx, [esi + 0x16c]
        call ext_00554DC0
        cmp byte ptr [esi + 0x180], 0x0
        je L_57222b
        lea ecx, [esp + 0x48]
        push ecx
        lea ecx, [esi + 0x3d4]
        call ext_0056D960
        fld dword ptr [esp + 0x28]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        mov ecx, eax
        fld dword ptr [esp + 0x3c]
        mov byte ptr [esp + 0x114], 0x1
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x38]
        fstp qword ptr [esp]
        call dword ptr [mem_00924FF0]
        push eax
        lea edx, [esp + 0x50]
        push edx
        call ext_0066A8B0
        lea ecx, [esp + 0x68]
        jmp L_572279
    L_57222b:
        lea eax, [esp + 0x64]
        push eax
        lea ecx, [esi + 0x3d4]
        call ext_0056D960
        fld dword ptr [esp + 0x24]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        mov ecx, eax
        fld dword ptr [esp + 0x40]
        mov byte ptr [esp + 0x114], 0x2
        fchs
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x38]
        fstp qword ptr [esp]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x50]
        push ecx
        call ext_0066A8B0
        lea ecx, [esp + 0x84]
    L_572279:
        add esp, 0x20
        mov byte ptr [esp + 0xfc], 0x0
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esp + 0x34]
        mov eax, dword ptr [ebp + 0x8]
        push edx
        push eax
        call ext_00435D00
        add esp, 0x8
        lea ecx, [esp + 0x18]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x1c]
        mov ebx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x30]
        jmp L_572161
    L_5722b5:
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        mov ecx, dword ptr [ebp + 0x8]
        call dword ptr [mem_00924E98]
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0xfc], 0xffffffff
        call ext_0066A760
        mov ecx, dword ptr [esp + 0xf4]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x005753B0] sub_005753B0 (65 bytes)
extern "C" void ext_00575350();
extern "C" void ext_0067E510();
extern "C" __declspec(naked) void __fastcall fn_005753B0(void* self) {
    __asm {
        sub esp, 0x10
        fldz
        mov eax, dword ptr [esp + 0x14]
        fst dword ptr [esp + 0xc]
        push esi
        fst dword ptr [esp + 0xc]
        push ecx
        fst dword ptr [esp + 0xc]
        mov esi, ecx
        fstp dword ptr [esp + 0x8]
        lea ecx, [esp + 0x8]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        push eax
        call ext_00575350
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, esi
        call ext_0067E510
        pop esi
        add esp, 0x10
        ret 0x8
    }
}

// [0x00571E80] sub_00571E80 (591 bytes)
extern "C" void ext_00661A30();
extern "C" void ext_0066A720();
extern "C" void ext_0066A760();
extern "C" void ext_0066A980();
extern "C" void ext_0066AA10();
extern "C" void ext_0066AA40();
extern "C" void ext_00673C20();
extern "C" void ext_00435D00();
extern "C" int mem_00924E94;
extern "C" int mem_00924E5C;
extern "C" int mem_00925010;
extern "C" int mem_00987B44;
extern "C" int mem_00925134;
extern "C" int mem_00924EAC;
extern "C" int mem_00924FF0;
extern "C" int mem_00924E90;
extern "C" int mem_00924E98;

extern "C" __declspec(naked) void __fastcall fn_00571E80(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x89d340
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x16c]
        mov ecx, dword ptr [esi + 0x420]
        push edi
        mov edi, dword ptr [esi + 0x170]
        push 0x959734
        add edi, 1
        add ebx, 1
        call ext_00661A30
        push ecx
        mov ecx, dword ptr [esp + 0x54]
        fstp dword ptr [esp]
        push 0x95972c
        push 0x941f08
        push edi
        push 0x959720
        push 0x941f08
        push ebx
        push 0x959710
        push 0x941f08
        lea eax, [esi + 8]
        push eax
        push 0x959704
        push ecx
        call ext_00435D00
        add esp, 8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00925010]
        push eax
        call ext_00435D00
        mov edx, dword ptr [mem_00987B44]
        add esp, 8
        push edx
        lea ecx, [esp + 0x30]
        call ext_0066A720
        mov eax, dword ptr [mem_00987B44]
        push eax
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x48], 0
        call ext_0066A720
        mov eax, dword ptr [esi + 0x410]
        push 0x20
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x4c], 1
        call ext_0066AA40
        mov ebx, dword ptr [esi + 0x414]
        mov eax, dword ptr [ebx + 0x5e4]
        mov ebp, dword ptr [eax]
        add ebx, 0x5e0
        mov dword ptr [esp + 0x10], eax
        mov edi, ebx
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], ebp
        jmp loop_top
        _emit 0x8d
        _emit 0x49
        _emit 0x00
loop_top:
        test edi, edi
        je check_ebx
        cmp edi, ebx
        je check_ebp
check_ebx:
        call dword ptr [mem_00925134]
check_ebp:
        cmp ebp, dword ptr [esp + 0x10]
        je loop_done
        test edi, edi
        jne check_edi
        call dword ptr [mem_00925134]
check_edi:
        cmp ebp, dword ptr [edi + 0x4]
        jne body
        call dword ptr [mem_00925134]
body:
        push 0x928b5d
        lea ecx, [esp + 0x20]
        add ebp, 0xc
        call ext_0066AA10
        mov eax, dword ptr [esi + 0x3f0]
        push 0x20
        mov ecx, ebp
        lea edi, [eax + 2*eax + 0x2]
        call dword ptr [mem_00924EAC]
        sub edi, eax
        shr edi, 1
        push edi
        lea ecx, [esp + 0x24]
        call ext_0066AA40
        mov ecx, ebp
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x20]
        call ext_0066A980
        mov eax, dword ptr [esi + 0x3f0]
        lea ecx, [eax + 2*eax + 0x2]
        push 0x20
        push ecx
        lea ecx, [esp + 0x24]
        call ext_0066AA40
        mov edx, dword ptr [esp + 0x1c]
        push edx
        lea ecx, [esp + 0x30]
        call ext_0066A980
        lea ecx, [esp + 0x14]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x14]
        jmp loop_top
loop_done:
        mov eax, dword ptr [esp + 0x2c]
        mov esi, dword ptr [esp + 0x4c]
        push eax
        push esi
        call ext_00435D00
        mov ecx, dword ptr [mem_00924E90]
        add esp, 8
        push ecx
        push 0x9596f8
        push esi
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x44], 0
        call ext_0066A760
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x44], -1
        call ext_0066A760
        mov ecx, dword ptr [esp + 0x3c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x38
        ret 0x4
    }
}

// [0x0057CFC0] sub_0057CFC0 (889 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_004276B0();
extern "C" void ext_00435D00();
extern "C" void ext_0057CC10();
extern "C" void ext_0066AD10();
extern "C" void ext_00696E10();
extern "C" void ext_006A6C87();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00924E90;
extern "C" int mem_00924E5C;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_00924FEC;
extern "C" int mem_00B3D714;

extern "C" __declspec(naked) void __fastcall fn_0057CFC0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x89e4f7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x80
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx]
        add esi, 0xe4
        push edi
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        mov dword ptr [esp + 0x10], ecx
        jbe short loc_0057CFF9
        call dword ptr [mem_00925134]
loc_0057CFF9:
        mov ebx, dword ptr [esp + 0xa0]
        mov ebp, esi
        mov dword ptr [esp + 0x18], ebp
        mov dword ptr [esp + 0x1c], edi
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
loc_0057D010:
        mov eax, dword ptr [esp + 0x10]
        mov esi, dword ptr [eax]
        mov edi, dword ptr [esi + 0xec]
        add esi, 0xe4
        cmp dword ptr [esi + 4], edi
        jbe short loc_0057D02D
        call dword ptr [mem_00925134]
loc_0057D02D:
        test ebp, ebp
        je short loc_0057D035
        cmp ebp, esi
        je short loc_0057D03F
loc_0057D035:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp short loc_0057D045
loc_0057D03F:
        mov esi, dword ptr [mem_00925134]
loc_0057D045:
        cmp dword ptr [esp + 0x1c], edi
        je loc_0057D31E
        test ebp, ebp
        jne short loc_0057D055
        call esi
loc_0057D055:
        mov ecx, dword ptr [esp + 0x1c]
        cmp ecx, dword ptr [ebp + 8]
        jb short loc_0057D060
        call esi
loc_0057D060:
        mov eax, dword ptr [esp + 0x1c]
        cmp eax, dword ptr [ebp + 8]
        mov esi, dword ptr [eax]
        jb short loc_0057D071
        call dword ptr [mem_00925134]
loc_0057D071:
        mov edi, dword ptr [esp + 0x1c]
        add edi, 4
        cmp byte ptr [edi + 0x14], 0
        je short loc_0057D0B0
        mov edx, dword ptr [mem_00924E90]
        push edx
        mov ecx, edi
        call ext_00696E10
        push eax
        push 0x93f988
        push esi
        mov ecx, ebx
        call dword ptr [mem_00924E5C]
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 8
        jmp short loc_0057D0BF
loc_0057D0B0:
        mov eax, dword ptr [mem_00924E90]
        push eax
        push esi
        mov ecx, ebx
        call dword ptr [mem_00924E5C]
loc_0057D0BF:
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov esi, dword ptr [edi + 0x2c]
        cmp esi, dword ptr [edi + 0x30]
        lea ebp, [edi + 0x28]
        mov dword ptr [esp + 0x14], ebp
        jbe short loc_0057D0DC
        call dword ptr [mem_00925134]
loc_0057D0DC:
        mov edi, esi
        mov dword ptr [esp + 0x24], edi
loc_0057D0E2:
        mov esi, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], esi
        jbe short loc_0057D0F0
        call dword ptr [mem_00925134]
loc_0057D0F0:
        cmp ebp, ebp
        je short loc_0057D0FA
        call dword ptr [mem_00925134]
loc_0057D0FA:
        cmp edi, esi
        je loc_0057D284
        cmp edi, dword ptr [ebp + 8]
        jb short loc_0057D10D
        call dword ptr [mem_00925134]
loc_0057D10D:
        push edi
        push ebx
        call dword ptr [mem_00924E94]
        mov esi, dword ptr [esp + 0x24]
        add esp, 8
        push edi
        lea ecx, [esp + 0x2c]
        add esi, 0x1c
        push ecx
        mov ecx, esi
        call ext_0057CC10
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        jbe short loc_0057D13A
        call dword ptr [mem_00925134]
loc_0057D13A:
        mov ebp, dword ptr [esp + 0x28]
        test ebp, ebp
        je short loc_0057D146
        cmp ebp, esi
        je short loc_0057D14C
loc_0057D146:
        call dword ptr [mem_00925134]
loc_0057D14C:
        mov esi, dword ptr [esp + 0x2c]
        cmp esi, edi
        je loc_0057D2A5
        test ebp, ebp
        mov edi, dword ptr [mem_00925134]
        jne short loc_0057D164
        call edi
loc_0057D164:
        cmp esi, dword ptr [ebp + 8]
        jb short loc_0057D16B
        call edi
loc_0057D16B:
        lea ebp, [esi + 0x1c]
        test ebp, ebp
        je loc_0057D2A5
        mov esi, dword ptr [ebp + 4]
        cmp esi, dword ptr [ebp + 8]
        jbe short loc_0057D180
        call edi
loc_0057D180:
        mov edi, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], edi
        jbe short loc_0057D18E
        call dword ptr [mem_00925134]
loc_0057D18E:
        cmp esi, edi
        je loc_0057D251
        cmp esi, dword ptr [ebp + 8]
        jb short loc_0057D1A1
        call dword ptr [mem_00925134]
loc_0057D1A1:
        cmp byte ptr [esi], 0
        je short loc_0057D1C3
        mov edx, dword ptr [mem_00924E90]
        push edx
        push 0x93f988
        push ebx
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
loc_0057D1C3:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx + 0xe0], 1
        jne short loc_0057D213
        lea edi, [esi + 4]
        mov ecx, edi
        call dword ptr [mem_00924FEC]
        test al, al
        jne short loc_0057D213
        lea edx, [esi + 0x20]
        push edx
        push 0x92f154
        push edi
        push 0x92ab78
        push ebx
        call ext_00435D00
        mov edi, dword ptr [mem_00924E94]
        add esp, 8
        push eax
        call edi
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call edi
        jmp short loc_0057D23B
loc_0057D213:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx + 0xe0], 0
        jne short loc_0057D23E
        lea edx, [esi + 0x20]
        push edx
        push 0x92ab78
        push ebx
        call ext_00435D00
        add esp, 8
        push eax
        call dword ptr [mem_00924E94]
loc_0057D23B:
        add esp, 8
loc_0057D23E:
        cmp esi, dword ptr [ebp + 8]
        jb short loc_0057D249
        call dword ptr [mem_00925134]
loc_0057D249:
        add esi, 0x3c
        jmp loc_0057D180
loc_0057D251:
        mov eax, dword ptr [mem_00924E90]
        push eax
        mov ecx, ebx
        call dword ptr [mem_00924E98]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x24]
        cmp edx, dword ptr [ecx + 8]
        jb short loc_0057D272
        call dword ptr [mem_00925134]
loc_0057D272:
        add dword ptr [esp + 0x24], 0x1c
        mov edi, dword ptr [esp + 0x24]
        mov ebp, dword ptr [esp + 0x14]
        jmp loc_0057D0E2
loc_0057D284:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        cmp ecx, dword ptr [eax + 8]
        jb short loc_0057D297
        call dword ptr [mem_00925134]
loc_0057D297:
        add dword ptr [esp + 0x1c], 0x3c
        mov ebp, dword ptr [esp + 0x18]
        jmp loc_0057D010
loc_0057D2A5:
        mov edx, dword ptr [esp + 0x24]
        push edx
        lea eax, [esp + 0x34]
        push eax
        call ext_004276B0
        add esp, 8
        mov esi, eax
        test byte ptr [mem_00B3D714], 1
        mov dword ptr [esp + 0x98], 0
        jne short loc_0057D300
        or dword ptr [mem_00B3D714], 1
        push 0xa858b8
        push 0xb3d6f8
        mov byte ptr [esp + 0xa0], 1
        call ext_0066AD10
        push 0x91cd70
        call ext_006A6C87
        add esp, 0xc
        mov byte ptr [esp + 0x98], 0
loc_0057D300:
        push esi
        push 0xb3d6f8
        lea ecx, [esp + 0x54]
        call ext_0041FF30
        push 0x9d3748
        lea ecx, [esp + 0x50]
        push ecx
        call ext_006A6DD2
loc_0057D31E:
        mov ecx, dword ptr [esp + 0x90]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x8c
        ret 4
    }
}

// [0x00575400] sub_00575400 (1000 bytes)
extern "C" void ext_00553170();
extern "C" void ext_00554EB0();
extern "C" void ext_00574B10();
extern "C" void ext_00574C20();
extern "C" void ext_0063EFE0();
extern "C" void ext_0067B7F0();
extern "C" void ext_0067E510();
extern "C" void ext_006A6C99();
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" void ext_006A7250();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FE0;
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_00575400(void* self) {
    __asm {
        push -1
        push 0x89dc30
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xbc
        fldz
        push ebx
        push ebp
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x14]
        push esi
        fst dword ptr [esp + 0x14]
        mov esi, ecx
        fst dword ptr [esp + 0x2c]
        push edi
        fst dword ptr [esp + 0x2c]
        mov ecx, 0xb3d4c8
        fstp dword ptr [esp + 0x28]
        call dword ptr [mem_00924FF0]
        mov ebx, dword ptr [esp + 0xe0]
        push eax
        mov ecx, ebx
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_57555C
        cmp eax, 0xb53b30
        je L_57555C
        cmp eax, 0xb53ab0
        je L_57555C
        cmp eax, 0xb53a70
        je L_57555C
        cmp eax, 0xb53af0
        je L_57555C
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x50]
        push ecx
        mov ecx, eax
        call edx
        xor edi, edi
        cmp dword ptr [esp + 0x64], edi
        mov dword ptr [esp + 0xd4], edi
        jbe L_575547
        mov eax, dword ptr [mem_00924FF4]
        mov ecx, dword ptr [mem_00924FE8]
        push eax
        push ecx
        push 3
        push 0x1c
        lea edx, [esp + 0x7c]
        push edx
        call ext_006A6C99
        lea eax, [esp + 0xa4]
        push eax
        lea ecx, [esp + 0x8c]
        push ecx
        lea edx, [esp + 0x74]
        push edx
        sub esp, 0x1c
        lea eax, [esp + 0x78]
        mov ecx, esp
        mov dword ptr [esp + 0x3c], esp
        push eax
        mov byte ptr [esp + 0x100], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_00574B10
        lea ebp, [esp + 0x6c]
    L_575504:
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x30], esp
        push ebp
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_00574C20
        fstp dword ptr [esp + edi*4 + 0x18]
        add edi, 1
        add ebp, 0x1c
        cmp edi, 3
        jl L_575504
        mov ecx, dword ptr [mem_00924FF4]
        push ecx
        push 3
        push 0x1c
        lea edx, [esp + 0x78]
        push edx
        mov byte ptr [esp + 0xe4], 0
        call ext_006A6D5C
    L_575547:
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0xd4], -1
        call dword ptr [mem_00924FF4]
    L_57555C:
        mov ecx, 0xb3d4e4
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebx
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_57567B
        cmp eax, 0xb53b30
        je L_57567B
        cmp eax, 0xb53ab0
        je L_57567B
        cmp eax, 0xb53a70
        je L_57567B
        cmp eax, 0xb53af0
        je L_57567B
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x50]
        push ecx
        mov ecx, eax
        call edx
        cmp dword ptr [esp + 0x64], 0
        mov ebx, 2
        mov dword ptr [esp + 0xd4], ebx
        jbe L_575666
        mov eax, dword ptr [mem_00924FF4]
        mov ecx, dword ptr [mem_00924FE8]
        push eax
        push ecx
        push 3
        push 0x1c
        lea edx, [esp + 0x7c]
        push edx
        call ext_006A6C99
        lea eax, [esp + 0xa4]
        push eax
        lea ecx, [esp + 0x8c]
        push ecx
        lea edx, [esp + 0x74]
        push edx
        sub esp, 0x1c
        lea eax, [esp + 0x78]
        mov ecx, esp
        mov dword ptr [esp + 0x3c], esp
        push eax
        mov byte ptr [esp + 0x100], 3
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_00574B10
        xor edi, edi
        lea ebp, [esp + 0x6c]
    L_575624:
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x30], esp
        push ebp
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_00574C20
        fstp dword ptr [esp + edi*4 + 0x28]
        add edi, 1
        add ebp, 0x1c
        cmp edi, 3
        jl L_575624
        mov ecx, dword ptr [mem_00924FF4]
        push ecx
        push 3
        push 0x1c
        lea edx, [esp + 0x78]
        push edx
        mov byte ptr [esp + 0xe4], bl
        call ext_006A6D5C
    L_575666:
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0xd4], -1
        call dword ptr [mem_00924FF4]
    L_57567B:
        mov edi, dword ptr [esp + 0xdc]
        test edi, edi
        je L_5757CD
        fld dword ptr [esp + 0x18]
        sub esp, 0xc
        mov eax, esp
        fstp dword ptr [eax]
        mov dword ptr [esp + 0x20], esp
        fld dword ptr [esp + 0x28]
        lea ebx, [esi + 0x5c]
        fstp dword ptr [eax + 4]
        mov ecx, ebx
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [eax + 8]
        lea eax, [esp + 0xcc]
        push eax
        call ext_00554EB0
        fld dword ptr [eax]
        mov edx, dword ptr [edi + 4]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 4]
        mov edx, dword ptr [edx + 0xc]
        fstp dword ptr [esp + 0x1c]
        add edi, 4
        fld dword ptr [eax + 8]
        mov eax, dword ptr [esi + 0x420]
        push eax
        fstp dword ptr [esp + 0x24]
        mov ecx, edi
        call edx
        fld dword ptr [esp + 0x18]
        fstp dword ptr [eax + 0x30]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [eax + 0x34]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [eax + 0x38]
        fld1
        fstp dword ptr [eax + 0x3c]
        fld dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x3c]
        fld st(2)
        fmulp st(3), st(0)
        fld st(1)
        fmulp st(2), st(0)
        fxch st(2)
        faddp st(1), st(0)
        fld st(1)
        fmulp st(2), st(0)
        faddp st(1), st(0)
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fldz
        fcomp dword ptr [esp + 0x10]
        fnstsw ax
        test ah, 0x44
        jnp L_575744
        lea ecx, [esp + 0x34]
        call ext_0067B7F0
    L_575744:
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, ebx
        fstp dword ptr [esp]
        call ext_00553170
        fstp dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x420]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, edi
        call edx
        fld dword ptr [esp + 0x10]
        fmul qword ptr [mem_00993828]
        mov esi, eax
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x10]
        call ext_006A6EAA
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        lea eax, [esp + 0x40]
        fstp dword ptr [esp + 0x40]
        push eax
        fld dword ptr [esp + 0x18]
        mov ecx, esi
        fld st(0)
        fmul dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x3c]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x4c]
        fmul dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x50]
        call ext_0067E510
    L_5757CD:
        mov ecx, dword ptr [esp + 0xcc]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc8
        ret 8
    }
}

// [0x00570850] sub_00570850 (219 bytes)
extern "C" void ext_004875A0();
extern "C" void ext_00553340();
extern "C" void ext_0067E410();

extern "C" __declspec(naked) void __fastcall fn_00570850(void* self) {
    __asm {
        sub esp, 0x90
        fld dword ptr [esp + 0x98]
        push esi
        push edi
        sub esp, 0xc
        mov eax, esp
        fstp dword ptr [eax]
        mov dword ptr [esp + 0x54], esp
        fld dword ptr [esp + 0xb0]
        add ecx, 0x5c
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0xb4]
        fstp dword ptr [eax + 0x8]
        lea eax, [esp + 0x58]
        push eax
        call ext_00553340
        fld dword ptr [eax]
        fstp dword ptr [esp + 0xa0]
        lea ecx, [esp + 0xa0]
        fld dword ptr [eax + 0x4]
        push ecx
        fstp dword ptr [esp + 0xa8]
        push 0
        fld dword ptr [eax + 0x8]
        lea ecx, [esp + 0x10]
        fstp dword ptr [esp + 0xb0]
        fld1
        fst dword ptr [esp + 0x10]
        fldz
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
        call ext_0067E410
        mov edi, dword ptr [esp + 0x9c]
        lea edx, [esp + 0x8]
        push edx
        lea eax, [esp + 0x5c]
        push eax
        mov ecx, edi
        call ext_004875A0
        mov ecx, 0x10
        mov esi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x90
        ret 0x10
    }
}

// [0x00576530] sub_00576530 (830 bytes)
extern "C" void ext_00553170();
extern "C" void ext_00554EB0();
extern "C" void ext_005A0F70();
extern "C" void ext_0067B7F0();
extern "C" void ext_0067E510();
extern "C" void ext_0067E650();
extern "C" void ext_0067E990();
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" void ext_006A7250();
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FDC;
extern "C" int mem_00993828;
extern "C" int mem_00957754;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00576530(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x94
        push ebx
        push ebp
        mov ebx, ecx
        cmp dword ptr [ebx + 0x418], 0
        push esi
        push edi
        je L_851
        mov ebp, dword ptr [esp + 0xb4]
        mov esi, dword ptr [ebp + 0x4]
        cmp esi, dword ptr [ebp + 0x8]
        jbe L_573
        call dword ptr [mem_00925134]
    L_573:
        mov edi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], edi
        jbe L_581
        call dword ptr [mem_00925134]
    L_581:
        cmp esi, edi
        jae L_851
        cmp esi, dword ptr [ebp + 0x8]
        jb L_594
        call dword ptr [mem_00925134]
    L_594:
        lea edi, [esi + 0x1c]
        push edi
        lea ecx, [esp + 0x8c]
        call dword ptr [mem_00924FE0]
        cmp esi, dword ptr [ebp + 0x8]
        mov dword ptr [esp + 0xac], 0
        jb L_5BB
        call dword ptr [mem_00925134]
    L_5BB:
        mov ecx, dword ptr [ebx + 0x418]
        push edi
        call ext_005A0F70
        mov edi, eax
        test edi, edi
        mov dword ptr [esp + 0x28], edi
        je L_823
        cmp esi, dword ptr [ebp + 0x8]
        jb L_5E0
        call dword ptr [mem_00925134]
    L_5E0:
        lea eax, [esi + 0x54]
        push eax
        lea ecx, [edi + 0x4c]
        call dword ptr [mem_00924FDC]
        cmp esi, dword ptr [ebp + 0x8]
        jb L_5F8
        call dword ptr [mem_00925134]
    L_5F8:
        fld dword ptr [esi + 0x70]
        sub esp, 0xc
        mov eax, esp
        fstp dword ptr [eax]
        lea edx, [esp + 0x88]
        fld dword ptr [esi + 0x74]
        mov dword ptr [esp + 0x30], esp
        fstp dword ptr [eax + 0x4]
        lea ecx, [ebx + 0x5c]
        fld dword ptr [esi + 0x78]
        push edx
        fstp dword ptr [eax + 0x8]
        call ext_00554EB0
        mov ecx, dword ptr [ebx + 0x420]
        add edi, 0x4
        mov ebp, eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, edi
        call edx
        fld dword ptr [ebp]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x30]
        fld dword ptr [ebp + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x34]
        fld dword ptr [ebp + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x38]
        fld1
        fstp dword ptr [eax + 0x3c]
        mov eax, dword ptr [esp + 0xb4]
        cmp esi, dword ptr [eax + 0x8]
        jb L_678
        call dword ptr [mem_00925134]
    L_678:
        fld dword ptr [esi + 0x7c]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esi + 0x80]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x84]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x20]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st, st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fldz
        fcomp dword ptr [esp + 0x10]
        fnstsw ax
        test ah, 0x44
        jnp L_6CE
        lea ecx, [esp + 0x18]
        call ext_0067B7F0
    L_6CE:
        fld dword ptr [esp + 0x10]
        push ecx
        lea ecx, [ebx + 0x5c]
        fstp dword ptr [esp]
        call ext_00553170
        fstp dword ptr [esp + 0x10]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [ebx + 0x420]
        mov edx, dword ptr [edx + 0xc]
        push eax
        mov ecx, edi
        call edx
        fld dword ptr [esp + 0x10]
        fmul qword ptr [mem_00993828]
        mov ebp, eax
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x10]
        call ext_006A6EAA
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        lea eax, [esp + 0x2c]
        fstp dword ptr [esp + 0x2c]
        push eax
        fld dword ptr [esp + 0x28]
        mov ecx, ebp
        fld st(0)
        fmul dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x20]
        fmul st, st(1)
        fstp dword ptr [esp + 0x38]
        fmul dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x3c]
        call ext_0067E510
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x70]
        call eax
        test al, al
        je L_81C
        cmp byte ptr [ebx + 0x70], 0
        jne L_7E4
        fld1
        push ecx
        fst dword ptr [esp + 0x40]
        lea ecx, [esp + 0x40]
        fldz
        fst dword ptr [esp + 0x44]
        fst dword ptr [esp + 0x48]
        fst dword ptr [esp + 0x4c]
        fst dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x58]
        fst dword ptr [esp + 0x5c]
        fst dword ptr [esp + 0x60]
        fst dword ptr [esp + 0x64]
        fst dword ptr [esp + 0x6c]
        fst dword ptr [esp + 0x70]
        fst dword ptr [esp + 0x74]
        fstp dword ptr [esp + 0x78]
        fst dword ptr [esp + 0x54]
        fst dword ptr [esp + 0x68]
        fstp dword ptr [esp + 0x7c]
        fld dword ptr [mem_00957754]
        fstp dword ptr [esp]
        call ext_0067E650
        mov edx, dword ptr [edi]
        mov eax, dword ptr [ebx + 0x420]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [esp + 0x3c]
        push ecx
        push eax
        mov ecx, edi
        call edx
        mov ecx, eax
        call ext_0067E990
    L_7E4:
        cmp dword ptr [ebx + 0xcc], 0
        jne L_81C
        mov eax, dword ptr [ebx + 0x418]
        mov edx, dword ptr [ebx + 0x420]
        lea ecx, [eax + 0x8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        push edx
        call eax
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0xc]
        push eax
        mov eax, dword ptr [ebx + 0x420]
        push eax
        mov ecx, edi
        call edx
        mov ecx, eax
        call ext_0067E990
    L_81C:
        mov ebp, dword ptr [esp + 0xb4]
    L_823:
        lea ecx, [esp + 0x88]
        mov dword ptr [esp + 0xac], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp esi, dword ptr [ebp + 0x8]
        jb L_846
        call dword ptr [mem_00925134]
    L_846:
        add esi, 0xa0
        jmp L_573
    L_851:
        mov ecx, dword ptr [esp + 0xa4]
        pop edi
        pop esi
        pop ebp
        xor al, al
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xa0
        ret 8
    }
}

// [0x0057C040] sub_0057C040 (2582 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_00696E10();
extern "C" int mem_00955998;
extern "C" int mem_00924E94;
extern "C" int mem_00925218;
extern "C" int mem_00924E90;
extern "C" int mem_00924E98;
extern "C" int mem_00924FEC;
extern "C" int mem_0092A270;
extern "C" int mem_00958CC8;
extern "C" int mem_00925010;
extern "C" int mem_00924E5C;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0057C040(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x2c
        fld dword ptr [mem_00955998]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr [ebx]
        fcomp dword ptr [ecx]
        push ebp
        mov ebp, dword ptr [esp + 0x38]
        push esi
        mov esi, dword ptr [mem_00924E94]
        fnstsw ax
        mov dword ptr [esp + 0xc], ebx
        test ah, 0x41
        jp L_57C11F
        fld dword ptr [ecx]
        sub esp, 8
        fstp qword ptr [esp]
        lea eax, [esp + 0x2c]
        push 0x958c6c
        push eax
        call dword ptr [mem_00925218]
        mov ecx, dword ptr [mem_00924E90]
        add esp, 0x10
        push ecx
        lea edx, [esp + 0x28]
        push edx
        push 0x959c18
        push ebp
        call ext_00435D00
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov ecx, dword ptr [ebx]
        add ecx, 0x20
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_57C0E8
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [ebx]
        push eax
        add ecx, 0x20
        push ecx
        push 0x959c10
        push ebp
        call ext_00435D00
        add esp, 8
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
L_57C0E8:
        mov edx, dword ptr [mem_00924E90]
        mov eax, dword ptr [ebx]
        push edx
        push 0x959bfc
        add eax, 4
        push eax
        push 0x959bec
        push ebp
        call ext_00435D00
        add esp, 8
        push eax
        call esi
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
L_57C11F:
        mov ecx, dword ptr [ebx]
        mov eax, dword ptr [ecx + 0xe0]
        test eax, eax
        jne L_57C139
        mov edx, dword ptr [mem_00924E90]
        push edx
        push 0x959bd8
        jmp L_57C149
L_57C139:
        cmp eax, 1
        jne L_57C15A
        mov eax, dword ptr [mem_00924E90]
        push eax
        push 0x959bbc
L_57C149:
        push ebp
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
L_57C15A:
        mov ecx, dword ptr [ebx]
        fld dword ptr [mem_00955998]
        fcomp dword ptr [ecx]
        fnstsw ax
        test ah, 0x41
        jp L_57C393
        cmp byte ptr [ecx + 0x56], 0
        jne L_57C181
        cmp byte ptr [ecx + 0x54], 0
        jne L_57C181
        cmp byte ptr [ecx + 0x55], 0
        je L_57C19E
L_57C181:
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        push 0x959bb4
        push ebp
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
L_57C19E:
        mov edx, dword ptr [ebx]
        cmp byte ptr [edx + 0x56], 1
        jne L_57C233
        push 0x958cf8
        push ebp
        call ext_00435D00
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 0x50]
        add esp, 8
        test eax, eax
        jne L_57C1C8
        push 0x958cd4
        jmp L_57C1D2
L_57C1C8:
        cmp eax, 1
        jne L_57C1DB
        push 0x958cd0
L_57C1D2:
        push ebp
        call ext_00435D00
        add esp, 8
L_57C1DB:
        mov ecx, dword ptr [ebx]
        fld dword ptr [ecx + 0x3c]
        fabs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fsub qword ptr [mem_0092A270]
        fcomp qword ptr [mem_00958CC8]
        fnstsw ax
        test ah, 0x41
        jne L_57C225
        mov edx, dword ptr [mem_00924E90]
        fld dword ptr [ecx + 0x3c]
        push edx
        push ecx
        fstp dword ptr [esp]
        push 0x92ab74
        push ebp
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00925010]
        mov ecx, eax
        jmp L_57C22D
L_57C225:
        mov eax, dword ptr [mem_00924E90]
        push eax
        mov ecx, ebp
L_57C22D:
        call dword ptr [mem_00924E98]
L_57C233:
        mov ecx, dword ptr [ebx]
        cmp byte ptr [ecx + 0x54], 1
        jne L_57C2F8
        push 0x958cec
        push ebp
        call ext_00435D00
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0x4c]
        add esp, 8
        cmp eax, 2
        jne L_57C25E
        push 0x958cc0
        jmp L_57C297
L_57C25E:
        cmp eax, 1
        jne L_57C26A
        push 0x958cbc
        jmp L_57C297
L_57C26A:
        test eax, eax
        jne L_57C275
        push 0x93f8fc
        jmp L_57C297
L_57C275:
        cmp eax, 3
        jne L_57C281
        push 0x958cb8
        jmp L_57C297
L_57C281:
        cmp eax, 4
        jne L_57C28D
        push 0x958cb4
        jmp L_57C297
L_57C28D:
        cmp eax, 5
        jne L_57C2A0
        push 0x958cb0
L_57C297:
        push ebp
        call ext_00435D00
        add esp, 8
L_57C2A0:
        mov ecx, dword ptr [ebx]
        fld dword ptr [ecx + 0x44]
        fabs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fsub qword ptr [mem_0092A270]
        fcomp qword ptr [mem_00958CC8]
        fnstsw ax
        test ah, 0x41
        jne L_57C2E9
        mov eax, dword ptr [mem_00924E90]
        fld dword ptr [ecx + 0x44]
        push eax
        push ecx
        fstp dword ptr [esp]
        push 0x92ab74
        push ebp
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00925010]
        mov ecx, eax
        jmp L_57C2F2
L_57C2E9:
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        mov ecx, ebp
L_57C2F2:
        call dword ptr [mem_00924E98]
L_57C2F8:
        mov edx, dword ptr [ebx]
        cmp byte ptr [edx + 0x55], 1
        jne L_57C3CA
        push 0x958ce0
        push ebp
        call ext_00435D00
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 0x48]
        add esp, 8
        test eax, eax
        jne L_57C322
        push 0x958cdc
        jmp L_57C338
L_57C322:
        cmp eax, 1
        jne L_57C32E
        push 0x958cd8
        jmp L_57C338
L_57C32E:
        cmp eax, 2
        jne L_57C341
        push 0x958cac
L_57C338:
        push ebp
        call ext_00435D00
        add esp, 8
L_57C341:
        mov ecx, dword ptr [ebx]
        fld dword ptr [ecx + 0x40]
        fabs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fsub qword ptr [mem_0092A270]
        fcomp qword ptr [mem_00958CC8]
        fnstsw ax
        test ah, 0x41
        jne L_57C389
        mov edx, dword ptr [mem_00924E90]
        fld dword ptr [ecx + 0x40]
        push edx
        push ecx
        fstp dword ptr [esp]
        push 0x92ab74
        push ebp
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00925010]
        jmp L_57C3C2
L_57C389:
        mov eax, dword ptr [mem_00924E90]
        push eax
        mov ecx, ebp
        jmp L_57C3C4
L_57C393:
        cmp byte ptr [ecx + 0x55], 1
        jne L_57C3CA
        cmp dword ptr [ecx + 0x48], 0
        jne L_57C3AD
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        push 0x959ba8
        jmp L_57C3B9
L_57C3AD:
        mov edx, dword ptr [mem_00924E90]
        push edx
        push 0x959b9c
L_57C3B9:
        push ebp
        call ext_00435D00
        add esp, 8
L_57C3C2:
        mov ecx, eax
L_57C3C4:
        call dword ptr [mem_00924E98]
L_57C3CA:
        mov ecx, dword ptr [ebx]
        fld dword ptr [mem_00955998]
        fcomp dword ptr [ecx]
        fnstsw ax
        test ah, 0x41
        __asm _emit 0x0f
        __asm _emit 0x8a
        __asm _emit 0x6e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ecx + 0x68], 0
        je L_57C40D
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [ecx + 0x5c]
        push eax
        push ecx
        push 0x959b88
        push ebp
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        mov ecx, eax
        call dword ptr [mem_00924E98]
L_57C40D:
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x81], 0
        je L_57C478
        mov edx, dword ptr [mem_00924E90]
        mov eax, dword ptr [eax + 0x6c]
        push edx
        push eax
        push 0x959b78
        push ebp
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x80], 0
        je L_57C478
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        lea ecx, [eax + 0x6c]
        call ext_00696E10
        push eax
        push 0x959b6c
        push ebp
        call ext_00435D00
        add esp, 8
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
L_57C478:
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x69], 0
        je L_57C4CB
        mov edx, dword ptr [eax + 0x60]
        push edx
        push 0x959b5c
        push ebp
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x6a], 0
        je L_57C4BC
        mov eax, dword ptr [eax + 0x64]
        push eax
        push 0x9357b8
        push ebp
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
L_57C4BC:
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        mov ecx, ebp
        call dword ptr [mem_00924E98]
L_57C4CB:
        mov eax, dword ptr [ebx]
        mov esi, dword ptr [eax + 0x88]
        add eax, 0x84
        cmp esi, dword ptr [eax + 8]
        mov dword ptr [esp + 0x10], eax
        jbe L_57C4E7
        call dword ptr [mem_00925134]
L_57C4E7:
        mov dword ptr [esp + 0x20], esi
        push edi
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
L_57C4F0:
        mov esi, dword ptr [ebx]
        mov edi, dword ptr [esi + 0x8c]
        add esi, 0x84
        cmp dword ptr [esi + 4], edi
        jbe L_57C509
        call dword ptr [mem_00925134]
L_57C509:
        cmp dword ptr [esp + 0x14], esi
        je L_57C515
        call dword ptr [mem_00925134]
L_57C515:
        mov eax, dword ptr [esp + 0x24]
        cmp eax, edi
        je L_57C603
        mov edx, dword ptr [esp + 0x14]
        cmp eax, dword ptr [edx + 8]
        jb L_57C530
        call dword ptr [mem_00925134]
L_57C530:
        mov ebx, dword ptr [esp + 0x24]
        fld dword ptr [ebx]
        push ecx
        fstp dword ptr [esp]
        push 0x959b48
        push ebp
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00925010]
        mov eax, dword ptr [esp + 0x14]
        cmp ebx, dword ptr [eax + 8]
        jb L_57C55F
        call dword ptr [mem_00925134]
L_57C55F:
        mov esi, dword ptr [ebx + 8]
        cmp esi, dword ptr [ebx + 0xc]
        lea edi, [ebx + 4]
        jbe L_57C570
        call dword ptr [mem_00925134]
L_57C570:
        mov ecx, dword ptr [esp + 0x14]
        cmp ebx, dword ptr [ecx + 8]
        jb L_57C57F
        call dword ptr [mem_00925134]
L_57C57F:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe L_57C58D
        call dword ptr [mem_00925134]
L_57C58D:
        cmp edi, edi
        je L_57C597
        call dword ptr [mem_00925134]
L_57C597:
        cmp esi, ebx
        je L_57C5D3
        cmp esi, dword ptr [edi + 8]
        jb L_57C5A6
        call dword ptr [mem_00925134]
L_57C5A6:
        push esi
        push 0x92ab78
        push ebp
        call ext_00435D00
        add esp, 8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 8
        cmp esi, dword ptr [edi + 8]
        jb L_57C5CA
        call dword ptr [mem_00925134]
L_57C5CA:
        mov ebx, dword ptr [esp + 0x24]
        add esi, 0x1c
        jmp L_57C570
L_57C5D3:
        mov edx, dword ptr [mem_00924E90]
        push edx
        mov ecx, ebp
        call dword ptr [mem_00924E98]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x24]
        cmp ecx, dword ptr [eax + 8]
        jb L_57C5F5
        call dword ptr [mem_00925134]
L_57C5F5:
        add dword ptr [esp + 0x24], 0x14
        mov ebx, dword ptr [esp + 0x10]
        jmp L_57C4F0
L_57C603:
        mov eax, dword ptr [ebx]
        mov ebp, dword ptr [eax + 0x98]
        add eax, 0x94
        cmp ebp, dword ptr [eax + 8]
        mov dword ptr [esp + 0x14], eax
        jbe L_57C620
        call dword ptr [mem_00925134]
        nop
L_57C620:
        mov edx, dword ptr [esp + 0x10]
        mov esi, dword ptr [edx]
        mov edi, dword ptr [esi + 0x9c]
        add esi, 0x94
        cmp dword ptr [esi + 4], edi
        jbe L_57C63D
        call dword ptr [mem_00925134]
L_57C63D:
        mov ebx, dword ptr [esp + 0x14]
        cmp ebx, esi
        mov esi, dword ptr [mem_00925134]
        je L_57C64D
        call esi
L_57C64D:
        cmp ebp, edi
        je L_57C780
        cmp ebp, dword ptr [ebx + 8]
        jb L_57C65C
        call esi
L_57C65C:
        cmp ebp, dword ptr [ebx + 8]
        fld dword ptr [ebp + 8]
        fstp dword ptr [esp + 0x18]
        jb L_57C66A
        call esi
L_57C66A:
        cmp ebp, dword ptr [ebx + 8]
        fld dword ptr [ebp + 4]
        fstp dword ptr [esp + 0x1c]
        jb L_57C678
        call esi
L_57C678:
        fld dword ptr [ebp]
        mov eax, dword ptr [esp + 0x40]
        push ecx
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        push 0x92ab78
        fld dword ptr [esp + 0x24]
        push ecx
        fstp dword ptr [esp]
        push 0x92ab78
        fld dword ptr [esp + 0x30]
        push ecx
        fstp dword ptr [esp]
        push 0x959b28
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00925010]
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00925010]
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00925010]
        cmp ebp, dword ptr [ebx + 8]
        jb L_57C6E4
        call esi
L_57C6E4:
        mov esi, dword ptr [ebp + 0x10]
        cmp esi, dword ptr [ebp + 0x14]
        lea edi, [ebp + 0xc]
        jbe L_57C6F5
        call dword ptr [mem_00925134]
L_57C6F5:
        cmp ebp, dword ptr [ebx + 8]
        jb L_57C700
        call dword ptr [mem_00925134]
L_57C700:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe L_57C70E
        call dword ptr [mem_00925134]
L_57C70E:
        cmp edi, edi
        je L_57C718
        call dword ptr [mem_00925134]
L_57C718:
        cmp esi, ebx
        je L_57C758
        cmp esi, dword ptr [edi + 8]
        jb L_57C727
        call dword ptr [mem_00925134]
L_57C727:
        mov ecx, dword ptr [esp + 0x40]
        push esi
        push 0x92ab78
        push ecx
        call ext_00435D00
        add esp, 8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 8
        cmp esi, dword ptr [edi + 8]
        jb L_57C74F
        call dword ptr [mem_00925134]
L_57C74F:
        mov ebx, dword ptr [esp + 0x14]
        add esi, 0x1c
        jmp L_57C6F5
L_57C758:
        mov edx, dword ptr [mem_00924E90]
        mov ecx, dword ptr [esp + 0x40]
        push edx
        call dword ptr [mem_00924E98]
        mov eax, dword ptr [esp + 0x14]
        cmp ebp, dword ptr [eax + 8]
        jb L_57C778
        call dword ptr [mem_00925134]
L_57C778:
        add ebp, 0x1c
        jmp L_57C620
L_57C780:
        mov ecx, dword ptr [esp + 0x10]
        mov ebx, dword ptr [ecx]
        mov ebp, dword ptr [ebx + 0xa8]
        add ebx, 0xa4
        cmp ebp, dword ptr [ebx + 8]
        mov dword ptr [esp + 0x14], ebx
        jbe L_57C7A0
        call esi
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_57C7A0:
        mov edx, dword ptr [esp + 0x10]
        mov esi, dword ptr [edx]
        mov edi, dword ptr [esi + 0xac]
        add esi, 0xa4
        cmp dword ptr [esi + 4], edi
        jbe L_57C7BD
        call dword ptr [mem_00925134]
L_57C7BD:
        cmp ebx, esi
        mov esi, dword ptr [mem_00925134]
        je L_57C7C9
        call esi
L_57C7C9:
        cmp ebp, edi
        je L_57C900
        cmp ebp, dword ptr [ebx + 8]
        jb L_57C7D8
        call esi
L_57C7D8:
        cmp ebp, dword ptr [ebx + 8]
        fld dword ptr [ebp + 8]
        fstp dword ptr [esp + 0x20]
        jb L_57C7E6
        call esi
L_57C7E6:
        cmp ebp, dword ptr [ebx + 8]
        fld dword ptr [ebp + 4]
        fstp dword ptr [esp + 0x1c]
        jb L_57C7F4
        call esi
L_57C7F4:
        fld dword ptr [ebp]
        mov eax, dword ptr [esp + 0x40]
        push ecx
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        push 0x92ab78
        fld dword ptr [esp + 0x24]
        push ecx
        fstp dword ptr [esp]
        push 0x92ab78
        fld dword ptr [esp + 0x28]
        push ecx
        fstp dword ptr [esp]
        push 0x959b0c
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00925010]
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00925010]
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00925010]
        cmp ebp, dword ptr [ebx + 8]
        jb L_57C860
        call esi
L_57C860:
        mov esi, dword ptr [ebp + 0x2c]
        cmp esi, dword ptr [ebp + 0x30]
        lea edi, [ebp + 0x28]
        jbe L_57C871
        call dword ptr [mem_00925134]
L_57C871:
        cmp ebp, dword ptr [ebx + 8]
        jb L_57C87C
        call dword ptr [mem_00925134]
L_57C87C:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe L_57C88A
        call dword ptr [mem_00925134]
L_57C88A:
        cmp edi, edi
        je L_57C894
        call dword ptr [mem_00925134]
L_57C894:
        cmp esi, ebx
        je L_57C8D4
        cmp esi, dword ptr [edi + 8]
        jb L_57C8A3
        call dword ptr [mem_00925134]
L_57C8A3:
        mov ecx, dword ptr [esp + 0x40]
        push esi
        push 0x92ab78
        push ecx
        call ext_00435D00
        add esp, 8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 8
        cmp esi, dword ptr [edi + 8]
        jb L_57C8CB
        call dword ptr [mem_00925134]
L_57C8CB:
        mov ebx, dword ptr [esp + 0x14]
        add esi, 0x1c
        jmp L_57C871
L_57C8D4:
        mov edx, dword ptr [mem_00924E90]
        mov ecx, dword ptr [esp + 0x40]
        push edx
        call dword ptr [mem_00924E98]
        mov eax, dword ptr [esp + 0x14]
        cmp ebp, dword ptr [eax + 8]
        jb L_57C8F4
        call dword ptr [mem_00925134]
L_57C8F4:
        mov ebx, dword ptr [esp + 0x14]
        add ebp, 0x38
        jmp L_57C7A0
L_57C900:
        mov ecx, dword ptr [esp + 0x10]
        mov ebx, dword ptr [ecx]
        mov edi, dword ptr [ebx + 0xb8]
        add ebx, 0xb4
        cmp edi, dword ptr [ebx + 8]
        jbe L_57C920
        call dword ptr [mem_00925134]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_57C920:
        mov edx, dword ptr [esp + 0x10]
        mov esi, dword ptr [edx]
        mov ebp, dword ptr [esi + 0xbc]
        add esi, 0xb4
        cmp dword ptr [esi + 4], ebp
        jbe L_57C93D
        call dword ptr [mem_00925134]
L_57C93D:
        cmp ebx, esi
        je L_57C947
        call dword ptr [mem_00925134]
L_57C947:
        cmp edi, ebp
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ebx + 8]
        jb L_57C965
        call dword ptr [mem_00925134]
        cmp edi, dword ptr [ebx + 8]
        jb L_57C965
        call dword ptr [mem_00925134]
L_57C965:
        mov eax, dword ptr [mem_00924E90]
        mov edx, dword ptr [esp + 0x40]
        push eax
        lea ecx, [edi + 0x1c]
        push ecx
        push 0x92ab78
        push edi
        push 0x959afc
        push edx
        call ext_00435D00
        mov esi, dword ptr [mem_00924E94]
        add esp, 8
        push eax
        call esi
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        cmp edi, dword ptr [ebx + 8]
        jb L_57C9B5
        call dword ptr [mem_00925134]
L_57C9B5:
        add edi, 0x38
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_57C9BD:
        mov esi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi]
        add ecx, 0xc4
        call dword ptr [mem_00924FEC]
        test al, al
        mov edi, dword ptr [esp + 0x40]
        jne L_57CA06
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [esi]
        push eax
        add ecx, 0xc4
        push ecx
        push 0x959af4
        push edi
        call ext_00435D00
        add esp, 8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
L_57CA06:
        mov edx, dword ptr [esi]
        fld dword ptr [mem_00955998]
        fcomp dword ptr [edx]
        fnstsw ax
        test ah, 0x41
        jp L_57CA3D
        mov eax, dword ptr [mem_00924E90]
        push eax
        push 0x959aec
        push edi
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2c
        ret 4
L_57CA3D:
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        mov ecx, edi
        call dword ptr [mem_00924E98]
        pop edi
L_57CA4D:
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2c
        ret 4
    }
}

// [0x00574AE0] sub_00574AE0 (38 bytes)
extern "C" void ext_005A35D0();

extern "C" __declspec(naked) void __fastcall fn_00574AE0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x70]
        push edi
        mov edi, ecx
        mov ecx, esi
        call edx
        test al, al
        jne done
        mov ecx, dword ptr [edi + 0x414]
        push esi
        call ext_005A35D0
    done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0057A7D0] sub_0057A7D0 (41 bytes)
extern "C" void ext_00579FA0();
extern "C" __declspec(naked) void __fastcall fn_0057A7D0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_00579FA0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0057E840] sub_0057E840 (41 bytes)
extern "C" void ext_005596D0();
extern "C" __declspec(naked) void __fastcall fn_0057E840(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_005596D0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0057EB20] sub_0057EB20 (41 bytes)
extern "C" void ext_0057E380();
extern "C" __declspec(naked) void __fastcall fn_0057EB20(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_0057E380
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0057EB50] sub_0057EB50 (41 bytes)
extern "C" void ext_0057E420();
extern "C" __declspec(naked) void __fastcall fn_0057EB50(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_0057E420
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0057EB80] sub_0057EB80 (41 bytes)
extern "C" void ext_0057E4D0();
extern "C" __declspec(naked) void __fastcall fn_0057EB80(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_0057E4D0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x005738D0] sub_005738D0 (43 bytes)
extern "C" void ext_005733D0();

extern "C" __declspec(naked) void __fastcall fn_005738D0(void* self) {
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
        call ext_005733D0
        add esp, 0x1c
        ret
    }
}

// [0x0057A250] sub_0057A250 (43 bytes)
extern "C" void ext_00579680();

extern "C" __declspec(naked) void __fastcall fn_0057A250(void* self) {
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
        call ext_00579680
        add esp, 0x1c
        ret
    }
}

// [0x0057E560] sub_0057E560 (43 bytes)
extern "C" void ext_0057DEE0();

extern "C" __declspec(naked) void __fastcall fn_0057E560(void* self) {
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
        call ext_0057DEE0
        add esp, 0x1c
        ret
    }
}

// [0x0057E590] sub_0057E590 (43 bytes)
extern "C" void ext_0057DF40();

extern "C" __declspec(naked) void __fastcall fn_0057E590(void* self) {
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
        call ext_0057DF40
        add esp, 0x1c
        ret
    }
}

// [0x0057E5C0] sub_0057E5C0 (43 bytes)
extern "C" void ext_0057DFB0();

extern "C" __declspec(naked) void __fastcall fn_0057E5C0(void* self) {
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
        call ext_0057DFB0
        add esp, 0x1c
        ret
    }
}

// [0x0057E810] sub_0057E810 (43 bytes)
extern "C" void ext_0057E110();

extern "C" __declspec(naked) void __fastcall fn_0057E810(void* self) {
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
        call ext_0057E110
        add esp, 0x1c
        ret
    }
}

// [0x0057E020] sub_0057E020 (53 bytes)
extern "C" void ext_0057D650();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __cdecl fn_0057E020(void* first, void* last, const void* src) {
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
        call ext_0057D650
        add esi, 0x2c
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

// [0x0057A730] sub_0057A730 (54 bytes)
extern "C" void ext_0057A280();
extern "C" __declspec(naked) void __fastcall fn_0057A730(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_0057A280
        lea ecx, [esi + 4*esi]
        add esp, 0x18
        lea eax, [edi + 4*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0057E8E0] sub_0057E8E0 (54 bytes)
extern "C" void ext_0057E5F0();
extern "C" __declspec(naked) void __fastcall fn_0057E8E0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_0057E5F0
        lea ecx, [esi + 4*esi]
        add esp, 0x18
        lea eax, [edi + 4*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0057E7D0] sub_0057E7D0 (55 bytes)
extern "C" void ext_0057E060();

extern "C" __declspec(naked) int __fastcall fn_0057E7D0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_0057E060
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

// [0x005764F0] sub_005764F0 (56 bytes)
extern "C" void ext_00574A30();
extern "C" void ext_00574AE0();
extern "C" void ext_00575400();
extern "C" void ext_00575FB0();
extern "C" __declspec(naked) void __fastcall fn_005764F0(void* self, int edx_unused, void* arg1, void* arg2) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov esi, ecx
        je loc_576523
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebx
        push edi
        call ext_00574A30
        push edi
        mov ecx, esi
        call ext_00574AE0
        push ebx
        push edi
        mov ecx, esi
        call ext_00575400
        push ebx
        push edi
        mov ecx, esi
        call ext_00575FB0
        pop ebx
loc_576523:
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x00579080] sub_00579080 (58 bytes)
extern "C" void ext_00578740();
extern "C" __declspec(naked) void* __cdecl fn_00579080(void* first, void* last, void* out) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je empty
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_top:
        mov eax, dword ptr [esi]
        lea ecx, [esi + 4]
        push ecx
        lea ecx, [edi + 4]
        mov dword ptr [edi], eax
        call ext_00578740
        add esi, 0x14
        add edi, 0x14
        cmp esi, ebx
        jne loop_top
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    empty:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x0057DA80] sub_0057DA80 (58 bytes)
extern "C" void ext_00406940();

extern "C" __declspec(naked) void* __cdecl fn_0057DA80(void* first, void* last, void* out) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je empty
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_top:
        fld dword ptr [esi]
        lea eax, [esi + 4]
        push eax
        fstp dword ptr [edi]
        lea ecx, [edi + 4]
        call ext_00406940
        add esi, 0x14
        add edi, 0x14
        cmp esi, ebx
        jne loop_top
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    empty:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00579F40] sub_00579F40 (86 bytes)
extern "C" void ext_00579080();

extern "C" __declspec(naked) void* __cdecl fn_00579F40(void* first, void* last, void* dest) {
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
        call ext_00579080
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 0x3
        add esp, 0x18
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 4 * eax]
        lea eax, [edi + 4 * eax]
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0057E2C0] sub_0057E2C0 (86 bytes)
extern "C" void ext_0057DA80();

extern "C" __declspec(naked) void* __cdecl fn_0057E2C0(void* first, void* last, void* dest) {
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
        call ext_0057DA80
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 0x3
        add esp, 0x18
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 4 * eax]
        lea eax, [edi + 4 * eax]
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0057A770] sub_0057A770 (89 bytes)
extern "C" void ext_00559840();
extern "C" void ext_00579F40();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0057A770(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5) {
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
        call ext_00579F40
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edi, eax
        mov eax, dword ptr [esi + 0x8]
        push esi
        push eax
        push edi
        call ext_00559840
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

// [0x0057E9E0] sub_0057E9E0 (89 bytes)
extern "C" void ext_00558F20();
extern "C" void ext_0057E2C0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0057E9E0(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5) {
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
        call ext_0057E2C0
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edi, eax
        mov eax, dword ptr [esi + 0x8]
        push esi
        push eax
        push edi
        call ext_00558F20
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

// [0x0057AE30] sub_0057AE30 (533 bytes)
extern "C" __declspec(naked) void __fastcall fn_0057AE30(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push offset mem_00928B5D
        lea ecx, [esi + 0x46c]
        call dword ptr [mem_00924FD4]
        lea edi, [esi + 0x48c]
        mov dword ptr [esi + 0x488], 0xffffffff
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_0057AE68
        call dword ptr [mem_00925134]
    L_0057AE68:
        mov ebp, dword ptr [edi + 0x4]
        cmp ebp, dword ptr [edi + 0x8]
        jbe L_0057AE76
        call dword ptr [mem_00925134]
    L_0057AE76:
        push ebx
        push edi
        push ebp
        push edi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, edi
        call ext_00406510
        or eax, -1
        lea edi, [esi + 0x6a0]
        mov word ptr [esi + 0x69a], ax
        mov word ptr [esi + 0x69c], ax
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_0057AEAB
        call dword ptr [mem_00925134]
    L_0057AEAB:
        mov ebp, dword ptr [edi + 0x4]
        cmp ebp, dword ptr [edi + 0x8]
        jbe L_0057AEB9
        call dword ptr [mem_00925134]
    L_0057AEB9:
        push ebx
        push edi
        push ebp
        push edi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, edi
        call ext_00577DE0
        fldz
        lea edi, [esi + 0x6b4]
        fstp dword ptr [esi + 0x6b0]
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_0057AEE5
        call dword ptr [mem_00925134]
    L_0057AEE5:
        mov ebp, dword ptr [edi + 0x4]
        cmp ebp, dword ptr [edi + 0x8]
        jbe L_0057AEF3
        call dword ptr [mem_00925134]
    L_0057AEF3:
        push ebx
        push edi
        push ebp
        push edi
        lea edx, [esp + 0x20]
        push edx
        mov ecx, edi
        call ext_0057A770
        mov edi, dword ptr [esi + 0x6cc]
        cmp dword ptr [esi + 0x6c8], edi
        mov ebp, dword ptr [mem_00925134]
        jbe L_0057AF19
        call ebp
    L_0057AF19:
        mov ebx, dword ptr [esi + 0x6c8]
        cmp ebx, dword ptr [esi + 0x6cc]
        jbe L_0057AF29
        call ebp
    L_0057AF29:
        cmp ebx, edi
        je L_0057AF55
        mov eax, dword ptr [esi + 0x6cc]
        sub eax, edi
        test eax, eax
        lea ebp, [eax + ebx]
        jle L_0057AF49
        push eax
        push edi
        push eax
        push ebx
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L_0057AF49:
        mov dword ptr [esi + 0x6cc], ebp
        mov ebp, dword ptr [mem_00925134]
    L_0057AF55:
        mov ebx, dword ptr [esi + 0x6dc]
        cmp dword ptr [esi + 0x6d8], ebx
        jbe L_0057AF65
        call ebp
    L_0057AF65:
        mov edi, dword ptr [esi + 0x6d8]
        cmp edi, dword ptr [esi + 0x6dc]
        jbe L_0057AF75
        call ebp
    L_0057AF75:
        cmp edi, ebx
        je L_0057AFA1
        mov eax, dword ptr [esi + 0x6dc]
        sub eax, ebx
        test eax, eax
        lea ebp, [eax + edi]
        jle L_0057AF95
        push eax
        push ebx
        push eax
        push edi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L_0057AF95:
        mov dword ptr [esi + 0x6dc], ebp
        mov ebp, dword ptr [mem_00925134]
    L_0057AFA1:
        mov ebx, dword ptr [esi + 0x6ec]
        cmp dword ptr [esi + 0x6e8], ebx
        jbe L_0057AFB1
        call ebp
    L_0057AFB1:
        mov edi, dword ptr [esi + 0x6e8]
        cmp edi, dword ptr [esi + 0x6ec]
        jbe L_0057AFC1
        call ebp
    L_0057AFC1:
        cmp edi, ebx
        je L_0057AFED
        mov eax, dword ptr [esi + 0x6ec]
        sub eax, ebx
        test eax, eax
        lea ebp, [eax + edi]
        jle L_0057AFE1
        push eax
        push ebx
        push eax
        push edi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L_0057AFE1:
        mov dword ptr [esi + 0x6ec], ebp
        mov ebp, dword ptr [mem_00925134]
    L_0057AFED:
        mov ebx, dword ptr [esi + 0x6fc]
        cmp dword ptr [esi + 0x6f8], ebx
        jbe L_0057AFFD
        call ebp
    L_0057AFFD:
        mov edi, dword ptr [esi + 0x6f8]
        cmp edi, dword ptr [esi + 0x6fc]
        jbe L_0057B00D
        call ebp
    L_0057B00D:
        cmp edi, ebx
        je L_0057B033
        mov eax, dword ptr [esi + 0x6fc]
        sub eax, ebx
        test eax, eax
        lea ebp, [eax + edi]
        jle L_0057B02D
        push eax
        push ebx
        push eax
        push edi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L_0057B02D:
        mov dword ptr [esi + 0x6fc], ebp
    L_0057B033:
        pop edi
        mov dword ptr [esi + 0x704], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x005790C0] sub_005790C0 (59 bytes)
extern "C" void ext_00578740();
extern "C" __declspec(naked) void* __cdecl fn_005790C0(unsigned char* first, unsigned char* last, unsigned char* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je L_done_005790C0
        push edi
        mov edi, dword ptr [esp + 0x18]
    L_loop_005790C0:
        mov eax, dword ptr [esi - 0x14]
        sub esi, 0x14
        lea ecx, [esi + 0x4]
        sub edi, 0x14
        push ecx
        lea ecx, [edi + 0x4]
        mov dword ptr [edi], eax
        call ext_00578740
        cmp esi, ebx
        jne L_loop_005790C0
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    L_done_005790C0:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00579680] sub_00579680 (93 bytes)
extern "C" void ext_005790C0();

extern "C" __declspec(naked) int __cdecl fn_00579680(int a1, int a2, int a3) {
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
        call ext_005790C0
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 4*eax]
        add eax, eax
        add eax, eax
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

// [0x0057DB70] sub_0057DB70 (59 bytes)
extern "C" void ext_00406940();
extern "C" __declspec(naked) void* __cdecl fn_0057DB70(void* begin, void* end, void* dst) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 10h]
        cmp ebx, esi
        je empty
        push edi
        mov edi, dword ptr [esp + 18h]
    loop_top:
        fld dword ptr [esi - 14h]
        sub esi, 14h
        sub edi, 14h
        lea eax, [esi + 4]
        fstp dword ptr [edi]
        push eax
        lea ecx, [edi + 4]
        call ext_00406940
        cmp esi, ebx
        jne loop_top
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    empty:
        mov eax, dword ptr [esp + 14h]
        pop esi
        pop ebx
        ret
    }
}

// [0x0057E9A0] sub_0057E9A0 (59 bytes)
extern "C" void ext_0057E870();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0057E9A0(void* self) {
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
        jbe m57e9a0_ok1
        call ebp
    m57e9a0_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m57e9a0_ok2
        call ebp
    m57e9a0_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0057E870
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0057DEE0] sub_0057DEE0 (93 bytes)
extern "C" void ext_0057DB70();

extern "C" __declspec(naked) void __fastcall fn_0057DEE0(void* self) {
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
        call ext_0057DB70
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 4*eax]
        add eax, eax
        add eax, eax
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

// [0x00572C80] sub_00572C80 (59 bytes)
extern "C" void ext_004F15A0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00572C80(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x9597d0
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_004F15A0
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_006A5C5C
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        pop esi
        add esp, 8
        ret
    }
}

extern "C" void ext_00406940();

struct SubObj_57DE50 {
    int a, b, c, d;
    SubObj_57DE50& operator=(const SubObj_57DE50& o) {
        ((void (__thiscall *)(SubObj_57DE50*, const SubObj_57DE50&))ext_00406940)(this, o);
        return *this;
    }
};

struct Elem_57DE50 {
    float x, y, z;
    SubObj_57DE50 sub;
};

// [0x0057DE50] sub_0057DE50 (60 bytes)
extern "C" void __cdecl fn_0057DE50(Elem_57DE50* first, Elem_57DE50* last, const Elem_57DE50& val) {
    for (; first != last; ++first) {
        first->x = val.x;
        first->y = val.y;
        first->z = val.z;
        first->sub = val.sub;
    }
}

// [0x0057E920] sub_0057E920 (60 bytes)
extern "C" void ext_0057E690();

extern "C" __declspec(naked) void* __fastcall fn_0057E920(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp+10h]
        push esi
        mov esi, dword ptr [esp+10h]
        push edi
        mov edi, dword ptr [esp+10h]
        mov byte ptr [esp+8], 0
        mov eax, dword ptr [esp+8]
        push eax
        mov eax, dword ptr [esp+1Ch]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_0057E690
        add esp, 18h
        lea ecx, [8*esi]
        sub ecx, esi
        lea eax, [edi+4*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0Ch
    }
}

// [0x0057E960] sub_0057E960 (60 bytes)
extern "C" void ext_0057E740();

extern "C" __declspec(naked) void* __fastcall fn_0057E960(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp+10h]
        push esi
        mov esi, dword ptr [esp+10h]
        push edi
        mov edi, dword ptr [esp+10h]
        mov byte ptr [esp+8], 0
        mov eax, dword ptr [esp+8]
        push eax
        mov eax, dword ptr [esp+1Ch]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_0057E740
        add esp, 18h
        lea ecx, [8*esi]
        sub ecx, esi
        lea eax, [edi+8*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0Ch
    }
}

extern "C" void ext_004AFF30();
// [0x00573390] sub_00573390 (63 bytes)
extern "C" __declspec(naked) void __cdecl fn_00573390(char* begin, char* end, const char* src) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0Ch]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        cmp esi, ebp
        je L_done
        push ebx
        push edi
        mov edi, dword ptr [esp + 1Ch]
        sub edi, esi
    L_outer:
        mov ebx, 3
        jmp L_inner
        _emit 0x8D
        _emit 0x49
        _emit 0x00
    L_inner:
        lea eax, [edi + esi]
        push eax
        mov ecx, esi
        call ext_004AFF30
        add esi, 10h
        sub ebx, 1
        jne L_inner
        sub edi, 30h
        cmp esi, ebp
        jne L_outer
        pop edi
        pop ebx
    L_done:
        pop esi
        pop ebp
        ret
    }
}

// [0x0057DC60] sub_0057DC60 (63 bytes)
extern "C" void ext_0057D650();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_0057DC60(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je done_0057DC60
        push edi
        mov edi, dword ptr [esp + 0x18]
    copy_loop_0057DC60:
        sub esi, 0x2c
        sub edi, 0x2c
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x1c]
        push eax
        lea ecx, [edi + 0x1c]
        call ext_0057D650
        cmp esi, ebx
        jne copy_loop_0057DC60
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    done_0057DC60:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x0057E110] sub_0057E110 (89 bytes)
extern "C" void ext_0057DC60();

extern "C" __declspec(naked) int __cdecl fn_0057E110(int a1, int a2, int a3, int a4, int a5, int a6) {
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
        call ext_0057DC60
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
        add esp, 8
        ret
    }
}

// [0x0057DCA0] sub_0057DCA0 (63 bytes)
extern "C" void ext_0057D650();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_0057DCA0(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je copy_empty_0057DCA0
        push edi
        mov edi, dword ptr [esp + 0x18]
copy_loop_0057DCA0:
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x1c]
        push eax
        lea ecx, [edi + 0x1c]
        call ext_0057D650
        add esi, 0x2c
        add edi, 0x2c
        cmp esi, ebx
        jne copy_loop_0057DCA0
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
copy_empty_0057DCA0:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x0057E320] sub_0057E320 (85 bytes)
extern "C" void ext_0057DCA0();

extern "C" __declspec(naked) void* __cdecl fn_0057E320(void* first, void* last, void* dest) {
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
        call ext_0057DCA0
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

// [0x0057E870] sub_0057E870 (105 bytes)
extern "C" void ext_00558B90();
extern "C" void ext_0057E320();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0057E870(void* self, int edx_unused) {
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
        call ext_0057E320
        mov edi, dword ptr [ebp + 8]
        mov ebx, eax
        add esp, 0xc
        cmp ebx, edi
        mov esi, ebx
        je L_done
        nop
    L_loop:
        mov ecx, esi
        call ext_00558B90
        add esi, 0x2c
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

// [0x005797D0] sub_005797D0 (158 bytes)
extern "C" void ext_00558920();
extern "C" void ext_005AEC70();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005797D0(void* self) {
    __asm {
        push -1
        push 0x89ddf7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x8], edi
        mov dword ptr [edi], 0x957dac
        mov dword ptr [edi + 0x4], 0x957da0
        lea esi, [edi + 0x490]
        mov dword ptr [edi + 0x48c], 0x9577c0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 0x1
        call ext_005AEC70
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        xor eax, eax
        add esp, 0x4
        lea ecx, [edi + 0x46c]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        mov byte ptr [esp + 0x1c], al
        call dword ptr [mem_00924FF4]
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_00558920
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x0057DAC0] sub_0057DAC0 (70 bytes)
extern "C" __declspec(naked) float* __cdecl fn_0057DAC0(const float* begin, const float* end, float* dst) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je done_empty
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_top:
        fld dword ptr [esi]
        lea eax, [esi + 0xc]
        fstp dword ptr [edi]
        push eax
        fld dword ptr [esi + 0x4]
        lea ecx, [edi + 0xc]
        fstp dword ptr [edi + 0x4]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [edi + 0x8]
        call ext_00406940
        add esi, 0x1c
        add edi, 0x1c
        cmp esi, ebx
        jne loop_top
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    done_empty:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x0057DD90] sub_0057DD90 (94 bytes)
extern "C" void ext_0057DAC0();

extern "C" __declspec(naked) void* __cdecl fn_0057DD90(void* a1, void* a2, void* a3) {
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
        call ext_0057DAC0
        sub esi, ebx
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        add esp, 0x18
        lea ecx, [8*eax]
        sub ecx, eax
        lea eax, [edi + 4*ecx]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0057EA40] sub_0057EA40 (109 bytes)
extern "C" void ext_00558F80();
extern "C" void ext_0057DD90();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_0057EA40(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        test ebp, ebp
        push esi
        mov esi, ecx
        je fail
        cmp ebp, dword ptr [esp + 1Ch]
        je ok
    fail:
        call dword ptr [mem_00925134]
    ok:
        mov ebx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 20h]
        cmp ebx, ecx
        je done
        mov eax, dword ptr [esi + 8]
        push edi
        mov byte ptr [esp + 18h], 0
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 1Ch]
        push edx
        push ebx
        push eax
        push ecx
        call ext_0057DD90
        mov ecx, dword ptr [esi + 8]
        mov edi, eax
        mov eax, dword ptr [esp + 2Ch]
        push eax
        push esi
        push ecx
        push edi
        call ext_00558F80
        add esp, 28h
        mov dword ptr [esi + 8], edi
        pop edi
    done:
        mov eax, dword ptr [esp + 10h]
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        ret 14h
    }
}

// [0x0057DBB0] sub_0057DBB0 (71 bytes)
extern "C" void ext_00406940();
extern "C" void* __cdecl fn_0057DBB0(char* first, char* last, char* dest) {
    typedef void (__thiscall *AssignFn)(void*, void*);
    AssignFn assign = reinterpret_cast<AssignFn>(ext_00406940);
    if (first != last) {
        do {
            last -= 0x1c;
            dest -= 0x1c;
            *reinterpret_cast<float*>(dest) = *reinterpret_cast<float*>(last);
            *reinterpret_cast<float*>(dest + 0x4) = *reinterpret_cast<float*>(last + 0x4);
            *reinterpret_cast<float*>(dest + 0x8) = *reinterpret_cast<float*>(last + 0x8);
            assign(dest + 0xc, last + 0xc);
        } while (last != first);
    }
    return dest;
}

// [0x0057DF40] sub_0057DF40 (99 bytes)
extern "C" void ext_0057DBB0();

extern "C" __declspec(naked) int __cdecl fn_0057DF40(int a1, int a2, int a3) {
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
        call ext_0057DBB0
        sub esi, ebx
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea ecx, [eax * 8]
        add esp, 0x18
        sub ecx, eax
        mov eax, edi
        add ecx, ecx
        pop edi
        add ecx, ecx
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}

extern "C" void ext_004AFF30();

struct Sub005732A0_Item {
    char data[0x10];
    Sub005732A0_Item& operator=(const Sub005732A0_Item& other) {
        typedef void (__thiscall *AssignFn)(void*, const void*);
        ((AssignFn)ext_004AFF30)(this, &other);
        return *this;
    }
};

struct Struct005732A0 {
    Sub005732A0_Item items[3];
};

// [0x005732A0] sub_005732A0 (89 bytes)
extern "C" Struct005732A0* __cdecl fn_005732A0(Struct005732A0* first, Struct005732A0* last, Struct005732A0* result) {
    while (first != last) {
        --last;
        --result;
        *result = *last;
    }
    return result;
}

// [0x005733D0] sub_005733D0 (92 bytes)
extern "C" void ext_005732A0();

extern "C" __declspec(naked) int __cdecl fn_005733D0(int a1, int a2, int a3, int a4) {
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
        call ext_005732A0
        sub esi, ebx
        mov eax, 0x2aaaaaab
        imul esi
        sar edx, 3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 2*eax]
        shl eax, 4
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

// [0x0057DE90] sub_0057DE90 (73 bytes)
extern "C" void ext_00406940();
extern "C" int mem_00924FDC;

struct Item_0057DE90 {
    float a, b, c;
    char s[0x1c];
    char d[0x10];
};

extern "C" void __cdecl fn_0057DE90(Item_0057DE90* first, Item_0057DE90* last, const Item_0057DE90* val) {
    for (; first != last; ++first) {
        first->a = val->a;
        first->b = val->b;
        first->c = val->c;
        ((void (__thiscall*)(void*, const void*))mem_00924FDC)(first->s, val->s);
        ((void (__thiscall*)(void*, const void*))ext_00406940)(first->d, val->d);
    }
}

// [0x0057EEA0] sub_0057EEA0 (362 bytes)
extern "C" void ext_00559C50();
extern "C" void ext_0057E320();
extern "C" void ext_0057E840();
extern "C" void ext_0057E9A0();
extern "C" void ext_00675DB0();
extern "C" void ext_00699B80();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0057EEA0(void* self) {
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
        mov eax, 0x2e8ba2e9
        imul ecx
        sar edx, 0x3
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_nonempty
    L_clear:
        mov ecx, esi
        call ext_0057E9A0
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
        mov eax, 0x2e8ba2e9
        imul edx
        sar edx, 0x3
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
        call ext_0057E320
        mov ecx, dword ptr [esi + 0x8]
        add esp, 0xc
        push ecx
        push eax
        mov ecx, esi
        call ext_00559C50
        mov eax, dword ptr [ebp + 0x4]
        test eax, eax
        jne L_rsize_nonzero
        imul eax, eax, 0x2c
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
    L_check_cap:
        test ebx, ebx
        jne L_lcap
        xor eax, eax
        jmp L_cmp_lcap
    L_lcap:
        mov edx, dword ptr [esi + 0xc]
        sub edx, ebx
        mov eax, 0x2e8ba2e9
        imul edx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_cmp_lcap:
        cmp ecx, eax
        ja L_realloc
        mov ecx, esi
        call ext_00675DB0
        mov edi, eax
        mov eax, dword ptr [ebp + 0x4]
        imul edi, edi, 0x2c
        add edi, eax
        push ebx
        push edi
        push eax
        call ext_0057E320
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0xc
        push edx
        push eax
        push edi
        mov ecx, esi
        call ext_0057E840
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
        call ext_00559C50
        mov edx, dword ptr [esi + 0x4]
        push edx
        call ext_006A5C5C
        add esp, 0x4
    L_buy:
        mov ecx, ebp
        call ext_00675DB0
        push eax
        mov ecx, esi
        call ext_00699B80
        test al, al
        je L_pop_ebx_edi
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ebp + 0x4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_0057E840
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

// [0x00578740] sub_00578740 (393 bytes)
extern "C" void ext_00553F70();
extern "C" void ext_00555630();
extern "C" void ext_00556740();
extern "C" void ext_005572D0();
extern "C" void ext_00575F50();
extern "C" void ext_00576290();
extern "C" void ext_00578020();
extern "C" void ext_00578080();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void* __fastcall fn_00578740(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp+8]
        push esi
        mov esi, ecx
        cmp esi, ebp
        je L_self
        mov eax, dword ptr [ebp+4]
        test eax, eax
        push edi
        je L_a
        mov edi, dword ptr [ebp+8]
        mov ecx, edi
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_b
L_a:
        mov ecx, esi
        call ext_00578080
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 4
L_b:
        push ebx
        mov ebx, dword ptr [esi+4]
        test ebx, ebx
        jne L_c
        xor eax, eax
        jmp L_d
L_c:
        mov edx, dword ptr [esi+8]
        sub edx, ebx
        mov eax, 0x66666667
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
L_d:
        cmp ecx, eax
        ja L_e
        mov byte ptr [esp+0x14], 0
        mov eax, dword ptr [esp+0x14]
        mov ecx, dword ptr [esp+0x14]
        mov edx, dword ptr [esp+0x14]
        push eax
        mov eax, dword ptr [ebp+4]
        push ecx
        push edx
        push ebx
        push edi
        push eax
        call ext_00575F50
        mov ecx, dword ptr [esp+0x2c]
        mov edx, dword ptr [esi+8]
        push ecx
        push esi
        push edx
        push eax
        call ext_00556740
        mov eax, dword ptr [ebp+4]
        add esp, 0x28
        test eax, eax
        jne L_f
        lea eax, [eax+4*eax]
        shl eax, 5
        add eax, dword ptr [esi+4]
        pop ebx
        mov dword ptr [esi+8], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 4
L_f:
        mov ebp, dword ptr [ebp+8]
        sub ebp, eax
        mov eax, 0x66666667
        imul ebp
        sar edx, 6
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax+4*eax]
        shl eax, 5
        add eax, dword ptr [esi+4]
        pop ebx
        mov dword ptr [esi+8], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 4
L_e:
        test ebx, ebx
        jne L_g
        xor eax, eax
        jmp L_h
L_g:
        mov edx, dword ptr [esi+0xc]
        sub edx, ebx
        mov eax, 0x66666667
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
L_h:
        cmp ecx, eax
        ja L_i
        mov ecx, esi
        call ext_00553F70
        lea edi, [eax+4*eax]
        mov eax, dword ptr [ebp+4]
        shl edi, 5
        add edi, eax
        push ebx
        push edi
        push eax
        call ext_00576290
        mov ecx, dword ptr [esi+8]
        mov edx, dword ptr [ebp+8]
        add esp, 0xc
        push ecx
        push edx
        push edi
        mov ecx, esi
        call ext_00578020
        pop ebx
        mov dword ptr [esi+8], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 4
L_i:
        test ebx, ebx
        je L_j
        mov eax, dword ptr [esi+8]
        push eax
        push ebx
        mov ecx, esi
        call ext_005572D0
        mov ecx, dword ptr [esi+4]
        push ecx
        call ext_006A5C5C
        add esp, 4
L_j:
        mov ecx, ebp
        call ext_00553F70
        push eax
        mov ecx, esi
        call ext_00555630
        test al, al
        je L_k
        mov edx, dword ptr [esi+4]
        mov eax, dword ptr [ebp+8]
        mov ecx, dword ptr [ebp+4]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call ext_00578020
        mov dword ptr [esi+8], eax
L_k:
        pop ebx
        pop edi
L_self:
        mov eax, esi
        pop esi
        pop ebp
        ret 4
    }
}

// [0x0057D650] sub_0057D650 (415 bytes)
extern "C" void ext_00554110();
extern "C" void ext_00555680();
extern "C" void ext_005567D0();
extern "C" void ext_00557360();
extern "C" void ext_0057BEC0();
extern "C" void ext_0057C010();
extern "C" void ext_0057CF50();
extern "C" void ext_0057CF80();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0057D650(void* self, int edx_unused, void* other) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        cmp esi, ebp
        je L_self_0057D650
        mov eax, dword ptr [ebp + 0x4]
        test eax, eax
        je L_clear_0057D650
        mov ecx, dword ptr [ebp + 0x8]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 0x5
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_nonzero_0057D650
    L_clear_0057D650:
        mov ecx, esi
        call ext_0057CF80
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_nonzero_0057D650:
        push ebx
        push edi
        mov edi, dword ptr [esi + 0x4]
        test edi, edi
        jne L_a_0057D650
        xor eax, eax
        jmp L_b_0057D650
    L_a_0057D650:
        mov ebx, dword ptr [esi + 0x8]
        sub ebx, edi
        mov eax, 0x88888889
        imul ebx
        add edx, ebx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_b_0057D650:
        cmp ecx, eax
        ja L_grow_0057D650
        mov byte ptr [esp + 0x14], 0x0
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [ebp + 0x8]
        push ecx
        push edx
        push edi
        push eax
        mov eax, dword ptr [ebp + 0x4]
        push eax
        call ext_0057BEC0
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_005567D0
        mov eax, dword ptr [ebp + 0x4]
        add esp, 0x28
        test eax, eax
        jne L_c_0057D650
        mov edx, dword ptr [esi + 0x4]
        mov ecx, eax
        shl ecx, 0x4
        sub ecx, eax
        pop edi
        lea eax, [edx + 4*ecx]
        mov dword ptr [esi + 0x8], eax
        pop ebx
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_c_0057D650:
        mov ecx, dword ptr [ebp + 0x8]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov edx, dword ptr [esi + 0x4]
        mov ecx, eax
        shl ecx, 0x4
        sub ecx, eax
        pop edi
        lea eax, [edx + 4*ecx]
        mov dword ptr [esi + 0x8], eax
        pop ebx
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_grow_0057D650:
        test edi, edi
        jne L_d_0057D650
        xor eax, eax
        jmp L_e_0057D650
    L_d_0057D650:
        mov ebx, dword ptr [esi + 0xc]
        sub ebx, edi
        mov eax, 0x88888889
        imul ebx
        add edx, ebx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_e_0057D650:
        cmp ecx, eax
        ja L_f_0057D650
        mov ecx, esi
        call ext_00554110
        mov ecx, eax
        shl ecx, 0x4
        sub ecx, eax
        mov eax, dword ptr [ebp + 0x4]
        lea ebx, [eax + 4*ecx]
        push edi
        push ebx
        push eax
        call ext_0057C010
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0xc
        push edx
        push eax
        push ebx
        mov ecx, esi
        call ext_0057CF50
        pop edi
        mov dword ptr [esi + 0x8], eax
        pop ebx
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    L_f_0057D650:
        test edi, edi
        je L_g_0057D650
        mov ecx, dword ptr [esi + 0x8]
        push ecx
        push edi
        mov ecx, esi
        call ext_00557360
        mov edx, dword ptr [esi + 0x4]
        push edx
        call ext_006A5C5C
        add esp, 0x4
    L_g_0057D650:
        mov ecx, ebp
        call ext_00554110
        push eax
        mov ecx, esi
        call ext_00555680
        test al, al
        je L_h_0057D650
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ebp + 0x4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_0057CF50
        mov dword ptr [esi + 0x8], eax
    L_h_0057D650:
        pop edi
        pop ebx
    L_self_0057D650:
        mov eax, esi
        pop esi
        pop ebp
        ret 0x4
    }
}

// [0x0057E060] sub_0057E060 (168 bytes)
// try { for (p = begin; count; --count, p += 0x2c) { ctor(p, a); ctor(p + 0x1c, a + 0x1c); } }
// catch (...) { destroy [begin, p); throw; }
// Naked: the SEH frame is written out by hand (same pattern as fn_00435EF0).
extern "C" void ext_00557960();
extern "C" void ext_00558B90();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __cdecl fn_0057E060(void* begin, unsigned int count, const void* a) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x0089e58a
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
    loop_0057E060:
        cmp edi, ebx
        jbe exit_0057E060
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_0057E060
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [ebp + 0x10]
        add ecx, 0x1c
        push ecx
        lea ecx, [esi + 0x1c]
        mov byte ptr [ebp - 0x4], 0x2
        call ext_00557960
    skip_0057E060:
        sub edi, 0x1
        add esi, 0x2c
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_0057E060
    handler_0057E060:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow_0057E060
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    dtor_0057E060:
        mov ecx, esi
        call ext_00558B90
        add esi, 0x2c
        cmp esi, edi
        jne dtor_0057E060
    rethrow_0057E060:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_0057E060:
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

// [0x0057E5F0] sub_0057E5F0 (153 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00402800();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_0057E5F0(void* first, unsigned int count, const void* val) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x0089E641
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
        je skip_elem
        mov eax, dword ptr [ebp + 0x10]
        fld dword ptr [eax]
        add eax, 0x4
        push eax
        fstp dword ptr [esi]
        lea ecx, [esi + 0x4]
        call ext_00402800
    skip_elem:
        sub edi, 0x1
        add esi, 0x14
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je throw_it
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    dtor_loop:
        lea ecx, [esi + 0x4]
        call ext_004026E0
        add esi, 0x14
        cmp esi, edi
        jne dtor_loop
    throw_it:
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

// [0x0057DB10] sub_0057DB10 (83 bytes)
extern "C" __declspec(naked) void* __cdecl fn_0057DB10(const void* begin, const void* end, void* dst) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je done_empty
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_top:
        fld dword ptr [esi]
        lea eax, [esi + 0xc]
        fstp dword ptr [edi]
        push eax
        fld dword ptr [esi + 0x4]
        lea ecx, [edi + 0xc]
        fstp dword ptr [edi + 0x4]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [edi + 0x8]
        call dword ptr [mem_00924FDC]
        lea ecx, [esi + 0x28]
        push ecx
        lea ecx, [edi + 0x28]
        call ext_00406940
        add esi, 0x38
        add edi, 0x38
        cmp esi, ebx
        jne loop_top
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    done_empty:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x0057DC00] sub_0057DC00 (84 bytes)
extern "C" void ext_00406940();
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void* __cdecl fn_0057DC00(char* first, char* last, char* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je L_done
        push edi
        mov edi, dword ptr [esp + 0x18]
L_loop:
        fld dword ptr [esi - 0x38]
        sub esi, 0x38
        sub edi, 0x38
        fstp dword ptr [edi]
        lea eax, [esi + 0xc]
        fld dword ptr [esi + 0x4]
        push eax
        fstp dword ptr [edi + 0x4]
        lea ecx, [edi + 0xc]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [edi + 0x8]
        call dword ptr [mem_00924FDC]
        lea ecx, [esi + 0x28]
        push ecx
        lea ecx, [edi + 0x28]
        call ext_00406940
        cmp esi, ebx
        jne L_loop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
L_done:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x0057DDF0] sub_0057DDF0 (94 bytes)
extern "C" void ext_0057DB10();

extern "C" __declspec(naked) void* __cdecl fn_0057DDF0(void* a1, void* a2, void* a3) {
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
        call ext_0057DB10
        sub esi, ebx
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        add esp, 0x18
        lea ecx, [eax * 8]
        sub ecx, eax
        lea eax, [edi + ecx * 8]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0057DFB0] sub_0057DFB0 (101 bytes)
extern "C" void ext_0057DC00();

extern "C" __declspec(naked) int __cdecl fn_0057DFB0(int a1, int a2, int a3) {
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
        call ext_0057DC00
        sub esi, ebx
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea ecx, [eax * 8]
        sub ecx, eax
        add esp, 0x18
        add ecx, ecx
        mov eax, edi
        add ecx, ecx
        pop edi
        add ecx, ecx
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0057EAB0] sub_0057EAB0 (109 bytes)
extern "C" void ext_00558FE0();
extern "C" void ext_0057DDF0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_0057EAB0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        test ebp, ebp
        push esi
        mov esi, ecx
        je fail
        cmp ebp, dword ptr [esp + 1Ch]
        je ok
    fail:
        call dword ptr [mem_00925134]
    ok:
        mov ebx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 20h]
        cmp ebx, ecx
        je done
        mov eax, dword ptr [esi + 8]
        push edi
        mov byte ptr [esp + 18h], 0
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 1Ch]
        push edx
        push ebx
        push eax
        push ecx
        call ext_0057DDF0
        mov ecx, dword ptr [esi + 8]
        mov edi, eax
        mov eax, dword ptr [esp + 2Ch]
        push eax
        push esi
        push ecx
        push edi
        call ext_00558FE0
        add esp, 28h
        mov dword ptr [esi + 8], edi
        pop edi
    done:
        mov eax, dword ptr [esp + 10h]
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        ret 14h
    }
}

// [0x0057E4D0] sub_0057E4D0 (141 bytes)
extern "C" void ext_00557280();
extern "C" void ext_005572F0();
extern "C" void ext_006A6DD2();
// Naked: C++ try/catch under /EHsc drops the EH frame around extern "C" callees, and the
// target keeps a per-iteration EH state byte, so the frame and loop are written out directly.
extern "C" __declspec(naked) char* __cdecl fn_0057E4D0(char* first, char* last, char* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89e621
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
        je done
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_copy
        push edi
        mov ecx, esi
        call ext_005572F0
    skip_copy:
        add esi, 0x38
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x38
        jmp loop_top
    unwind_funclet:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
    dtor_loop:
        mov ecx, esi
        call ext_00557280
        add esi, 0x38
        cmp esi, edi
        jne dtor_loop
    rethrow:
        xor ebx, ebx
        push ebx
        push ebx
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

// [0x0057E740] sub_0057E740 (141 bytes)
extern "C" void ext_00557280();
extern "C" void ext_005572F0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_0057E740(void* first, unsigned int count, const void* val) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x0089E681
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
    loop_0057E740:
        cmp edi, ebx
        jbe exit_0057E740
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_0057E740
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call ext_005572F0
    skip_0057E740:
        sub edi, 0x1
        add esi, 0x38
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_0057E740
    handler_0057E740:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow_0057E740
    dtor_0057E740:
        mov ecx, esi
        call ext_00557280
        add esi, 0x38
        cmp esi, edi
        jne dtor_0057E740
    rethrow_0057E740:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_0057E740:
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

// [0x0057E380] sub_0057E380 (155 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00402800();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void* __cdecl fn_0057E380(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89e5e1
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
    loop_0057E380:
        cmp edi, dword ptr [ebp + 0xc]
        je exit_0057E380
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 1
        je skip_0057E380
        fld dword ptr [edi]
        lea eax, [edi + 4]
        push eax
        fstp dword ptr [esi]
        lea ecx, [esi + 4]
        call ext_00402800
    skip_0057E380:
        add esi, 0x14
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x14
        jmp loop_0057E380
    handler_0057E380:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow_0057E380
        jmp dtor_0057E380
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
    dtor_0057E380:
        lea ecx, [esi + 4]
        call ext_004026E0
        add esi, 0x14
        cmp esi, edi
        jne dtor_0057E380
    rethrow_0057E380:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_0057E380:
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

// [0x0057E420] sub_0057E420 (162 bytes)
extern "C" __declspec(naked) void* __cdecl fn_0057E420(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89e601
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
    loop_0057E420:
        cmp edi, dword ptr [ebp + 0xc]
        je exit_0057E420
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 1
        je skip_0057E420
        fld dword ptr [edi]
        lea eax, [edi + 0xc]
        fstp dword ptr [esi]
        push eax
        fld dword ptr [edi + 4]
        lea ecx, [esi + 0xc]
        fstp dword ptr [esi + 4]
        fld dword ptr [edi + 8]
        fstp dword ptr [esi + 8]
        call ext_00402800
    skip_0057E420:
        add esi, 0x1c
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x1c
        jmp loop_0057E420
    handler_0057E420:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow_0057E420
    dtor_0057E420:
        lea ecx, [esi + 0xc]
        call ext_004026E0
        add esi, 0x1c
        cmp esi, edi
        jne dtor_0057E420
    rethrow_0057E420:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_0057E420:
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

// [0x0057E690] sub_0057E690 (169 bytes)
extern "C" __declspec(naked) void __cdecl fn_0057E690() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89e661
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [ebp + 0x10]
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [ebp + 0xc]
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 4], 0
    loop_start:
        test edi, edi
        jbe done
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        test esi, esi
        mov byte ptr [ebp - 4], 1
        je next_iter
        fld dword ptr [ebx]
        lea eax, [ebx + 0xc]
        fstp dword ptr [esi]
        push eax
        fld dword ptr [ebx + 4]
        lea ecx, [esi + 0xc]
        fstp dword ptr [esi + 4]
        fld dword ptr [ebx + 8]
        fstp dword ptr [esi + 8]
        call ext_00402800
    next_iter:
        sub edi, 1
        add esi, 0x1c
        mov byte ptr [ebp - 4], 0
        mov dword ptr [ebp + 8], esi
        jmp loop_start
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 8]
        cmp esi, edi
        je rethrow
        jmp destroy_loop
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    destroy_loop:
        lea ecx, [esi + 0xc]
        call ext_004026E0
        add esi, 0x1c
        cmp esi, edi
        jne destroy_loop
    rethrow:
        push 0
        push 0
        call ext_006A6DD2
    done:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x005727C0] sub_005727C0 (208 bytes)
extern "C" void ext_00406FC0();
extern "C" void ext_00553520();
extern "C" void ext_005535B0();
extern "C" void ext_00558C10();
extern "C" int mem_0093E990;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_005727C0(void* self) {
    __asm {
        push    -1
        push    0x0089D41A
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x0C], esi
        call    ext_00558C10
        fld     dword ptr [mem_0093E990]
        xor     ebx, ebx
        fstp    dword ptr [esi + 0x6C]
        lea     eax, [esi + 0x5C]
        push    eax
        lea     ecx, [esi + 0x16C]
        mov     dword ptr [esp + 0x38], ebx
        mov     dword ptr [esi], 0x00957BBC
        mov     dword ptr [esi + 4], 0x00957BB0
        mov     byte ptr [esi + 0x70], bl
        mov     dword ptr [esi + 0x88], ebx
        call    ext_00406FC0
        push    0x009590EC
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esp + 0x10]
        lea     edi, [esi + 0x3D4]
        push    ecx
        mov     ecx, edi
        mov     byte ptr [esp + 0x38], 1
        call    ext_005535B0
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x34], bl
        call    dword ptr [mem_00924FF4]
        push    0x00957700
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, edi
        mov     byte ptr [esp + 0x38], 2
        call    ext_00553520
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x34], bl
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x2C]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2C
        ret
    }
}

extern "C" void ext_00406FC0();
extern "C" void ext_00553520();
extern "C" void ext_005535B0();
extern "C" void ext_00558C10();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

// [0x00571880] sub_00571880 (231 bytes)
extern "C" __declspec(naked) void __fastcall fn_00571880(void* self) {
    __asm {
        push    -1
        push    0x89d009
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x20
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0xc], esi
        call    ext_00558C10
        xor     edi, edi
        lea     ecx, [esi + 0x46c]
        mov     dword ptr [esp + 0x34], edi
        mov     dword ptr [esi], 0x957ac4
        mov     dword ptr [esi + 0x4], 0x957ab8
        call    dword ptr [mem_00924FE8]
        fld1
        lea     eax, [esi + 0x5c]
        fst     dword ptr [esi + 0x78]
        mov     bl, 1
        fstp    dword ptr [esi + 0x6c]
        push    eax
        lea     ecx, [esi + 0x16c]
        mov     byte ptr [esp + 0x38], bl
        mov     byte ptr [esi + 0x70], bl
        mov     dword ptr [esi + 0x88], edi
        mov     dword ptr [esi + 0x84], edi
        call    ext_00406FC0
        push    0x957704
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esp + 0x10]
        lea     edi, [esi + 0x3d4]
        push    ecx
        mov     ecx, edi
        mov     byte ptr [esp + 0x38], 2
        call    ext_005535B0
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x34], bl
        call    dword ptr [mem_00924FF4]
        push    0x929f48
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, edi
        mov     byte ptr [esp + 0x38], 3
        call    ext_00553520
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x34], bl
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x2c]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     fs:[0], ecx
        add     esp, 0x2c
        ret
    }
}

// [0x005796E0] sub_005796E0 (237 bytes)
extern "C" void ext_00406FC0();
extern "C" void ext_00558C10();
extern "C" void ext_0059F5C0();
extern "C" int mem_00924FE8;
extern "C" int mem_0094423C;
extern "C" int mem_00924FD4;

extern "C" __declspec(naked) void* __fastcall fn_005796E0(void* self) {
    __asm {
        push    -1
        push    0x89ddd5
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x10], esi
        call    ext_00558C10
        lea     ebp, [esi + 0x46c]
        xor     ebx, ebx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esi], 0x957dac
        mov     dword ptr [esi + 4], 0x957da0
        call    dword ptr [mem_00924FE8]
        lea     edi, [esi + 0x490]
        mov     ecx, edi
        mov     byte ptr [esp + 0x1c], 1
        mov     dword ptr [esi + 0x48c], 0x9577c0
        call    ext_0059F5C0
        mov     dword ptr [edi + 4], eax
        mov     byte ptr [eax + 0x2d], 1
        mov     eax, dword ptr [edi + 4]
        mov     dword ptr [eax + 4], eax
        mov     eax, dword ptr [edi + 4]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [edi + 4]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [edi + 8], ebx
        fld1
        mov     eax, 2
        fst     dword ptr [esi + 0x78]
        mov     byte ptr [esp + 0x1c], al
        fstp    dword ptr [esi + 0x6c]
        mov     dword ptr [esi + 0x88], eax
        lea     eax, [esi + 0x5c]
        push    eax
        lea     ecx, [esi + 0x16c]
        mov     dword ptr [esi + 0x84], 1
        mov     byte ptr [esi + 0x70], bl
        mov     byte ptr [esi + 0x73], bl
        call    ext_00406FC0
        fld     dword ptr [mem_0094423C]
        push    0x928b5d
        fstp    dword ptr [esi + 0x174]
        mov     ecx, ebp
        mov     byte ptr [esi + 0x1d9], bl
        call    dword ptr [mem_00924FD4]
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        mov     dword ptr [esi + 0x488], ebx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

extern "C" void ext_00406FC0();
extern "C" void ext_00553520();
extern "C" void ext_005535B0();
extern "C" void ext_00555470();
extern "C" void ext_00558C10();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

// [0x005700F0] sub_005700F0 (305 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005700F0(void* self) {
    __asm {
        push    -1
        push    0x89cc36
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x10], esi
        call    ext_00558C10
        xor     ebp, ebp
        mov     dword ptr [esi], 0x9579cc
        mov     dword ptr [esi + 4], 0x9579c0
        mov     dword ptr [esp + 0x38], ebp
        mov     dword ptr [esi + 0x470], ebp
        mov     dword ptr [esi + 0x474], ebp
        mov     dword ptr [esi + 0x478], ebp
        lea     edi, [esi + 0x480]
        mov     bl, 1
        mov     ecx, edi
        mov     byte ptr [esp + 0x38], bl
        mov     dword ptr [esi + 0x47c], 0x9577c8
        call    ext_00555470
        mov     dword ptr [edi + 4], eax
        mov     byte ptr [eax + 0x39], bl
        mov     eax, dword ptr [edi + 4]
        mov     dword ptr [eax + 4], eax
        mov     eax, dword ptr [edi + 4]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [edi + 4]
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [edi + 8], ebp
        fld1
        lea     eax, [esi + 0x5c]
        fst     dword ptr [esi + 0x78]
        push    eax
        fstp    dword ptr [esi + 0x6c]
        lea     ecx, [esi + 0x16c]
        mov     byte ptr [esp + 0x3c], 2
        mov     dword ptr [esi + 0x84], ebp
        mov     dword ptr [esi + 0x88], 3
        mov     byte ptr [esi + 0x70], bl
        call    ext_00406FC0
        push    0x959454
        lea     ecx, [esp + 0x18]
        mov     byte ptr [esi + 0x1e0], bl
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esp + 0x14]
        lea     edi, [esi + 0x3d4]
        push    ecx
        mov     ecx, edi
        mov     byte ptr [esp + 0x3c], 3
        call    ext_005535B0
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x38], 2
        call    dword ptr [mem_00924FF4]
        push    0x957700
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, edi
        mov     byte ptr [esp + 0x3c], 4
        call    ext_00553520
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x38], 2
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x30]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret
    }
}

// [0x0057AB30] sub_0057AB30 (475 bytes)
extern "C" void ext_00406510();
extern "C" void ext_00406FC0();
extern "C" void ext_00558C10();
extern "C" void ext_00577DE0();
extern "C" void ext_0057A770();
extern "C" void ext_006A6C99();
extern "C" int mem_00924FE8;
extern "C" int mem_0094423C;
extern "C" int mem_00924FD4;
extern "C" int mem_00925134;

// Naked: EH frame (try level -1, handler 0x89df91) written out by hand, same as fn_0041C820.
extern "C" __declspec(naked) void __fastcall fn_0057AB30(void* self) {
    __asm {
        push -1
        push 0x89df91
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x18], esi
        call ext_00558C10
        xor ebx, ebx
        lea ecx, [esi + 0x46c]
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esi], 0x957f9c
        mov dword ptr [esi + 0x4], 0x957f90
        call dword ptr [mem_00924FE8]
        or eax, -1
        mov dword ptr [esi + 0x488], eax
        mov dword ptr [esi + 0x490], ebx
        mov dword ptr [esi + 0x494], ebx
        mov dword ptr [esi + 0x498], ebx
        lea edi, [esi + 0x6a0]
        mov word ptr [esi + 0x69a], ax
        mov word ptr [esi + 0x69c], ax
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov dword ptr [edi + 0xc], ebx
        lea ebp, [esi + 0x6b4]
        mov dword ptr [ebp + 0x4], ebx
        mov dword ptr [ebp + 0x8], ebx
        mov dword ptr [ebp + 0xc], ebx
        push 0x556610
        push 0x5761b0
        push 0x2
        push 0x10
        lea eax, [esi + 0x6c4]
        push eax
        mov byte ptr [esp + 0x38], 0x4
        call ext_006A6C99
        push 0x556610
        push 0x5761b0
        push 0x2
        push 0x10
        lea ecx, [esi + 0x6e4]
        push ecx
        mov byte ptr [esp + 0x38], 0x5
        call ext_006A6C99
        fld1
        lea edx, [esi + 0x5c]
        fst dword ptr [esi + 0x78]
        push edx
        fstp dword ptr [esi + 0x6c]
        lea ecx, [esi + 0x16c]
        mov byte ptr [esp + 0x28], 0x6
        mov dword ptr [esi + 0x84], 0x1
        mov dword ptr [esi + 0x88], 0x2
        mov byte ptr [esi + 0x70], bl
        mov byte ptr [esi + 0x73], bl
        call ext_00406FC0
        fld dword ptr [mem_0094423C]
        push 0x928b5d
        fstp dword ptr [esi + 0x174]
        lea ecx, [esi + 0x46c]
        mov byte ptr [esi + 0x1d9], bl
        mov dword ptr [esi + 0x1dc], 0x1
        call dword ptr [mem_00924FD4]
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        mov eax, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0x10], eax
        jbe L_ok2
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x10]
    L_ok2:
        push ebx
        push edi
        push eax
        push edi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, edi
        call ext_00577DE0
        mov edi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], edi
        jbe L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        mov ebx, dword ptr [ebp + 0x4]
        cmp ebx, dword ptr [ebp + 0x8]
        jbe L_ok4
        call dword ptr [mem_00925134]
    L_ok4:
        push edi
        push ebp
        push ebx
        push ebp
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, ebp
        call ext_0057A770
        mov ebp, dword ptr [esi + 0x494]
        cmp dword ptr [esi + 0x490], ebp
        lea edi, [esi + 0x48c]
        jbe L_ok5
        call dword ptr [mem_00925134]
    L_ok5:
        mov ebx, dword ptr [edi + 0x4]
        cmp ebx, dword ptr [edi + 0x8]
        jbe L_ok6
        call dword ptr [mem_00925134]
    L_ok6:
        push ebp
        push edi
        push ebx
        push edi
        lea edx, [esp + 0x20]
        push edx
        mov ecx, edi
        call ext_00406510
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x005726C0] sub_005726C0 (82 bytes)
extern "C" void ext_00572590();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005726C0(void* self, int edx_unused, const void* a1) {
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
        call ext_00572590
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00573430] sub_00573430 (96 bytes)
extern "C" void ext_00573300();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00573430(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        mov     esi, ecx
        lea     ecx, [esp + 0x4]
        call    dword ptr [mem_00924FE8]
        push    eax
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x30], 0x0
        call    ext_00573300
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0x4
    }
}

// [0x00570230] sub_00570230 (181 bytes)
extern "C" void ext_004F15A0();
extern "C" void ext_00558920();
extern "C" void ext_006A5C5C();
extern "C" int mem_0089CC56;
extern "C" int mem_009579CC;
extern "C" int mem_009579C0;
extern "C" int mem_009577C8;
extern "C" __declspec(naked) void __fastcall fn_00570230(void* self) {
    __asm {
        push    -1
        push    offset mem_0089CC56
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     dword ptr [esp + 0xc], edi
        mov     dword ptr [edi], offset mem_009579CC
        mov     dword ptr [edi + 4], offset mem_009579C0
        lea     esi, [edi + 0x480]
        mov     dword ptr [edi + 0x47c], offset mem_009577C8
        mov     eax, dword ptr [esi + 4]
        mov     ecx, dword ptr [eax]
        push    eax
        push    esi
        push    ecx
        push    esi
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x34], 1
        call    ext_004F15A0
        mov     eax, dword ptr [esi + 4]
        push    eax
        call    ext_006A5C5C
        xor     ebx, ebx
        mov     dword ptr [esi + 4], ebx
        mov     dword ptr [esi + 8], ebx
        mov     eax, dword ptr [edi + 0x470]
        add     esp, 4
        cmp     eax, ebx
        je      skip_del
        push    eax
        call    ext_006A5C5C
        add     esp, 4
    skip_del:
        mov     ecx, edi
        mov     dword ptr [edi + 0x470], ebx
        mov     dword ptr [edi + 0x474], ebx
        mov     dword ptr [edi + 0x478], ebx
        mov     dword ptr [esp + 0x20], -1
        call    ext_00558920
        mov     ecx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x18
        ret
    }
}

// [0x00578EA0] sub_00578EA0 (100 bytes)
extern "C" int mem_00925134;
extern "C" void ext_005780C0();
extern "C" __declspec(naked) void __fastcall fn_00578EA0(void* self, int edx_unused, const char* a1) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        test eax, eax
        jne L_1
        xor edx, edx
        jmp L_2
    L_1:
        mov edx, dword ptr [esi + 8]
        sub edx, eax
    L_2:
        test eax, eax
        je L_3
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, eax
        cmp edx, ecx
        jae L_3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esp + 0x10]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        add eax, 1
        mov dword ptr [esi + 8], eax
        pop esi
        add esp, 8
        ret 4
    L_3:
        push edi
        mov edi, dword ptr [esi + 8]
        cmp eax, edi
        jbe L_4
        call dword ptr [mem_00925134]
    L_4:
        mov eax, dword ptr [esp + 0x14]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_005780C0
        pop edi
        pop esi
        add esp, 8
        ret 4
    }
}

// [0x00577760] sub_00577760 (109 bytes)
extern "C" void ext_00577060();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00577760(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        mov     esi, ecx
        lea     eax, [esi + 0xac]
        push    eax
        lea     ecx, [esp + 0x8]
        call    dword ptr [mem_00924FE0]
        mov     edx, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        push    ecx
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x30], 0x0
        call    ext_00577060
        lea     ecx, [esp + 0x4]
        mov     esi, eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0x4
    }
}

extern "C" void ext_005798B0();
extern "C" int mem_0092508C;
extern "C" int mem_00925078;

// [0x0057A1D0] sub_0057A1D0 (115 bytes)
extern "C" __declspec(naked) bool __fastcall fn_0057A1D0(void* self, int edx_unused, void* is) {
    __asm {
        sub esp, 0x1c
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x30]
        lea eax, [esp + 0x14]
        mov dword ptr [esp + 0x10], ecx
        push eax
        mov ecx, edi
        call dword ptr [mem_0092508C]
        xor ebp, ebp
        mov dword ptr [esp + 0x30], ebp
    loop_57a1f2:
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, edi
        call dword ptr [mem_0092508C]
        mov esi, dword ptr [eax + 0x8]
        mov ecx, dword ptr [esp + 0x10]
        add esi, dword ptr [eax]
        lea edx, [esp + 0x30]
        push edx
        push edi
        call ext_005798B0
        mov ebx, dword ptr [esp + 0x30]
        sub esp, 0x18
        mov eax, esp
        lea ecx, [esi + ebx + 2]
        mov dword ptr [eax], ecx
        mov ecx, edi
        mov dword ptr [eax + 0x8], ebp
        mov dword ptr [eax + 0xc], ebp
        mov dword ptr [eax + 0x10], ebp
        call dword ptr [mem_00925078]
        cmp ebx, ebp
        jg loop_57a1f2
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x1c
        ret 4
    }
}

// [0x00576100] sub_00576100 (169 bytes)
extern "C" void ext_005749F0();
extern "C" void ext_00587920();
extern "C" void ext_0058F200();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void* __fastcall fn_00576100(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x154
        mov edi, ecx
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 8], esi
        test esi, esi
        mov dword ptr [esp + 0x14], 0
        je L_null
        mov ecx, esi
        call ext_0058F200
        mov dword ptr [esi + 0x150], 0x928eac
        mov dword ptr [esi], 0x92912c
        mov dword ptr [esi + 4], 0x9290e4
        mov dword ptr [esi + 8], 0x9290a4
        mov dword ptr [esi + 0xc], 0x929054
        mov dword ptr [esi + 0x150], 0x929040
        jmp L_done
    L_null:
        xor esi, esi
    L_done:
        mov ecx, dword ptr [esp + 0x1c]
        push 1
        push esi
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_00587920
        mov eax, dword ptr [esp + 0x20]
        push eax
        push esi
        mov ecx, edi
        call ext_005749F0
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x00576400] sub_00576400 (232 bytes)
extern "C" void ext_005749F0();
extern "C" void ext_00587920();
extern "C" void ext_0058F200();
extern "C" void ext_0063EFE0();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00576400(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push    -1
        push    08b49b4h
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 20h
        push    esi
        push    edi
        push    154h
        mov     edi, ecx
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 8], esi
        test    esi, esi
        mov     dword ptr [esp + 30h], 0
        je      loc_576473
        mov     ecx, esi
        call    ext_0058F200
        mov     dword ptr [esi + 150h], 928each
        mov     dword ptr [esi], 92912ch
        mov     dword ptr [esi + 4], 9290e4h
        mov     dword ptr [esi + 8], 9290a4h
        mov     dword ptr [esi + 0ch], 929054h
        mov     dword ptr [esi + 150h], 929040h
        jmp     loc_576475
    loc_576473:
        xor     esi, esi
    loc_576475:
        mov     ecx, dword ptr [esp + 38h]
        push    1
        push    esi
        mov     dword ptr [esp + 38h], -1
        call    ext_00587920
        mov     ecx, 0b3d27ch
        call    dword ptr [mem_00924FF0]
        mov     ecx, dword ptr [esp + 3ch]
        push    eax
        call    ext_0063EFE0
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 8]
        lea     ecx, [esp + 0ch]
        push    ecx
        mov     ecx, eax
        call    edx
        lea     eax, [esp + 0ch]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 38h], 1
        call    ext_005749F0
        lea     ecx, [esp + 0ch]
        mov     dword ptr [esp + 30h], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 28h]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 2ch
        ret     8
    }
}

// [0x0057A320] sub_0057A320 (388 bytes)
extern "C" void ext_0057A1D0();
extern "C" void ext_00575CE0();
extern "C" int mem_00925078;
extern "C" int mem_00925134;
extern "C" int mem_00924FE8;
extern "C" int mem_0092508C;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) bool __fastcall fn_0057A320(void* self, int edx_unused, void* is) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x5c]
        push edi
        sub esp, 0x18
        mov eax, esp
        xor ebx, ebx
        mov ebp, ecx
        mov ecx, esi
        mov dword ptr [esp + 0x2c], esp
        mov dword ptr [eax], 4
        mov dword ptr [eax + 0x8], ebx
        mov dword ptr [eax + 0xc], ebx
        mov dword ptr [eax + 0x10], ebx
        call dword ptr [mem_00925078]
        mov eax, dword ptr [ebp + 0x494]
        cmp dword ptr [ebp + 0x490], eax
        lea edi, [ebp + 0x48c]
        mov dword ptr [esp + 0x14], eax
        jbe a320_L1
        call dword ptr [mem_00925134]
    a320_L1:
        mov eax, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0x60], eax
        jbe a320_L2
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x60]
    a320_L2:
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push edi
        push eax
        push edi
        lea edx, [esp + 0x24]
        push edx
        mov ecx, edi
        call ext_00406510
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x10], ebx
        call dword ptr [mem_00924FE8]
        mov dword ptr [esp + 0x58], ebx
        mov byte ptr [esp + 0x60], bl
    a320_loop:
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, esi
        call dword ptr [mem_0092508C]
        mov edi, dword ptr [eax + 0x8]
        add edi, dword ptr [eax]
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [esp + 0x38]
        push edx
        push esi
        mov ecx, ebp
        call ext_00575CE0
        lea eax, [esp + 0x34]
        push 0xb3d500
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je a320_skip
        push esi
        mov ecx, ebp
        call ext_0057A1D0
        mov byte ptr [esp + 0x60], 0x1
    a320_skip:
        mov ecx, dword ptr [esp + 0x10]
        sub esp, 0x18
        mov eax, esp
        lea ecx, [edi + ecx + 0x20]
        mov dword ptr [eax], ecx
        mov ecx, esi
        mov dword ptr [esp + 0x2c], esp
        mov dword ptr [eax + 0x8], ebx
        mov dword ptr [eax + 0xc], ebx
        mov dword ptr [eax + 0x10], ebx
        call dword ptr [mem_00925078]
        cmp dword ptr [esp + 0x10], ebx
        jg a320_loop
        cmp byte ptr [esp + 0x60], bl
        jne a320_fail
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x58], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov al, 1
        mov ecx, dword ptr [esp + 0x50]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4c
        ret 4
    a320_fail:
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, esi
        call dword ptr [mem_0092508C]
        mov ecx, dword ptr [eax + 0x8]
        add ecx, dword ptr [eax]
        mov dword ptr [esp + 0x58], 0xffffffff
        mov dword ptr [ebp + 0x488], ecx
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x50]
        pop edi
        pop esi
        pop ebp
        xor al, al
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x4c
        ret 4
    }
}

// [0x00573550] sub_00573550 (490 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00573430();
extern "C" void ext_00587A20();
extern "C" void ext_00664560();
extern "C" void ext_006649D0();
extern "C" void ext_00664F50();
extern "C" void ext_00665570();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_00573550(void* self) {
    __asm {
        push -0x1
        push 0x89d798
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x80
        push ebp
        push esi
        push edi
        push 0x0
        lea ecx, [esp + 0x10]
        call ext_00573430
        push 0x92b4b0
        lea ecx, [esp + 0x58]
        mov dword ptr [esp + 0x98], 0x0
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [esp + 0xa0]
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esp + 0x58]
        push ecx
        push edx
        mov byte ptr [esp + 0xa0], 0x1
        call ext_00665570
        add esp, 0xc
        lea ecx, [esp + 0x54]
        mov byte ptr [esp + 0x94], 0x0
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, dword ptr [esp + 0x14]
        jne loc_5735d7
        xor eax, eax
        jmp loc_5735ee
    loc_5735d7:
        mov ecx, ebp
        sub ecx, esi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    loc_5735ee:
        test esi, esi
        lea edi, [eax - 0x1]
        je loc_57360e
        sub ebp, esi
        mov eax, 0x92492493
        imul ebp
        add edx, ebp
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb loc_573618
    loc_57360e:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x10]
    loc_573618:
        lea eax, [edi * 8]
        sub eax, edi
        lea eax, [esi + eax * 4]
        push eax
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x38]
        push ecx
        mov byte ptr [esp + 0x98], 0x2
        call ext_006649D0
        add esp, 0x4
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0x70]
        mov byte ptr [esp + 0x94], 0x3
        call dword ptr [mem_00924FE8]
        push 0x92ab70
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x98], 0x4
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x20]
        push eax
        lea ecx, [esp + 0x5c]
        push ecx
        lea edx, [esp + 0x44]
        push edx
        mov byte ptr [esp + 0xa4], 0x5
        call ext_00664560
        add esp, 0x10
        lea ecx, [esp + 0x54]
        mov byte ptr [esp + 0x94], 0x4
        call dword ptr [mem_00924FF4]
        lea eax, [esp + 0x1c]
        push eax
        call ext_00664F50
        add esp, 0x4
        push eax
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0xa0]
        call ext_00587A20
        lea ecx, [esp + 0x70]
        mov byte ptr [esp + 0x94], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x94], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x94], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x94], 0xffffffff
        call ext_004026E0
        mov ecx, dword ptr [esp + 0x8c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x8c
        ret 0x8
    }
}

// [0x005780C0] sub_005780C0 (134 bytes)
extern "C" void ext_00577E40();
extern "C" __declspec(naked) void __fastcall fn_005780C0(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x4]
        test edi, edi
        je L_005780DB
        mov eax, dword ptr [esi + 0x8]
        mov ecx, eax
        sub ecx, edi
        jne L_005780DF
    L_005780DB:
        xor ebx, ebx
        jmp L_005780FD
    L_005780DF:
        cmp edi, eax
        jbe L_005780E9
        call dword ptr [mem_00925134]
    L_005780E9:
        test ebp, ebp
        je L_005780F1
        cmp ebp, esi
        je L_005780F7
    L_005780F1:
        call dword ptr [mem_00925134]
    L_005780F7:
        mov ebx, dword ptr [esp + 0x20]
        sub ebx, edi
    L_005780FD:
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x20]
        push edx
        push 0x1
        push eax
        push ebp
        mov ecx, esi
        call ext_00577E40
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_0057811F
        call dword ptr [mem_00925134]
    L_0057811F:
        mov dword ptr [esp + 0x20], edi
        add edi, ebx
        cmp edi, dword ptr [esi + 0x8]
        ja L_0057812F
        cmp edi, dword ptr [esi + 0x4]
        jae L_00578135
    L_0057812F:
        call dword ptr [mem_00925134]
    L_00578135:
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

// [0x005777D0] sub_005777D0 (196 bytes)
extern "C" void ext_005551E0();
extern "C" void ext_0055DDE0();
extern "C" void ext_00574A30();
extern "C" void ext_005764F0();
extern "C" void ext_005771F0();
extern "C" void ext_005EE9A0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005777D0(void* self) {
    __asm {
        push -1
        push 0x89b893
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        xor esi, esi
        push edi
        mov edi, ecx
        mov [esp+0x10], esi
        mov ebx, [esp+0x28]
        push ebx
        mov [esp+0x20], esi
        call ext_005771F0
        test eax, eax
        setg al
        test al, al
        je L1
        push 1
        mov ecx, edi
        call ext_005551E0
        jmp L2
    L1:
        push 0x2f8
        call ext_006A5C62
        add esp, 4
        mov [esp+0x28], eax
        cmp eax, esi
        mov byte ptr [esp+0x1c], 1
        je L3
        mov ecx, eax
        call ext_0055DDE0
        jmp L4
    L3:
        xor eax, eax
    L4:
        mov byte ptr [esp+0x1c], 0
        mov byte ptr [eax+0x148], 0
    L2:
        mov esi, eax
        mov eax, [edi+0x414]
        push ebx
        push esi
        mov ecx, edi
        mov [esp+0x18], esi
        mov ebp, esi
        mov [esi+0x18c], eax
        call ext_00574A30
        mov ecx, [esp+0x24]
        push esi
        mov dword ptr [esp+0x14], 0
        call ext_005EE9A0
        push ebx
        push ebp
        mov ecx, edi
        call ext_005764F0
        mov ecx, [esp+0x14]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x0057A280] sub_0057A280 (153 bytes)
extern "C" void ext_00557820();
extern "C" void ext_00559680();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_0057A280(void* first, unsigned int count, const void* val, void* alloc) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x0089DE91
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
        je skip_elem
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [eax]
        add eax, 0x4
        mov dword ptr [esi], ecx
        push eax
        lea ecx, [esi + 0x4]
        call ext_00557820
    skip_elem:
        sub edi, 0x1
        add esi, 0x14
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je throw_ex
        mov ebx, dword ptr [ebp + 0x14]
    dtor_loop:
        push esi
        mov ecx, ebx
        call ext_00559680
        add esi, 0x14
        cmp esi, edi
        jne dtor_loop
    throw_ex:
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

// [0x005788D0] sub_005788D0 (991 bytes)
extern "C" void ext_005EED30();
extern "C" void ext_0041A920();
extern "C" void ext_004A6970();
extern "C" void ext_00554EB0();
extern "C" void ext_0067E820();
extern "C" void ext_00556840();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005788D0(void* self) {
    __asm {
        push -1
        push 0x89dd82
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x130
        push ebx
        push ebp
        xor eax, eax
        push esi
        push edi
        mov ebx, ecx
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], eax
        mov ecx, dword ptr [ebx + 0x414]
        mov dword ptr [esp + 0x148], eax
        lea eax, [esp + 0x14]
        push eax
        add ecx, 0x160
        call ext_005EED30
        mov ecx, dword ptr [ebx + 0x414]
        add ecx, 0x160
        lea edx, [esp + 0x10]
        mov dword ptr [esp + 0x10], ecx
        push edx
        lea ecx, [esp + 0x18]
        call ext_0041A920
        mov ebp, dword ptr [esp + 0x18]
        cmp ebp, dword ptr [esp + 0x1c]
        mov esi, dword ptr [mem_00925134]
        jbe L57894C
        call esi
    L57894C:
        lea eax, [esp + 0x14]
        mov dword ptr [esp + 0x28], eax
        mov edi, ebp
    L578956:
        mov ebp, dword ptr [esp + 0x1c]
        cmp dword ptr [esp + 0x18], ebp
        mov dword ptr [esp + 0x2c], edi
        jbe L578966
        call esi
    L578966:
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        je L578976
        lea ecx, [esp + 0x14]
        cmp eax, ecx
        je L578978
    L578976:
        call esi
    L578978:
        cmp edi, ebp
        je L578BBD
        cmp dword ptr [esp + 0x28], 0
        jne L578989
        call esi
    L578989:
        mov edx, dword ptr [esp + 0x28]
        cmp edi, dword ptr [edx + 0x8]
        jb L578994
        call esi
    L578994:
        mov ebp, dword ptr [edi]
        test ebp, ebp
        mov dword ptr [esp + 0x64], ebp
        je L578BAA
        fldz
        lea eax, [ebp + 0x1d0]
        push eax
        fstp dword ptr [esp + 0x14]
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0x28], 0
        call ext_004A6970
        mov edi, dword ptr [esp + 0x50]
        cmp dword ptr [esp + 0x4c], edi
        mov byte ptr [esp + 0x148], 1
        jbe L5789D4
        call esi
    L5789D4:
        mov esi, dword ptr [esp + 0x4c]
    L5789D8:
        cmp dword ptr [esp + 0x4c], edi
        mov dword ptr [esp + 0x44], esi
        jbe L5789E8
        call dword ptr [mem_00925134]
    L5789E8:
        cmp esi, edi
        je L578ADD
        jb L5789F8
        call dword ptr [mem_00925134]
    L5789F8:
        mov ebp, dword ptr [esi]
        test ebp, ebp
        je L578AC7
        mov edx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [edx + 0x4]
        lea esi, [ebp + 0x4]
        push 2
        mov ecx, esi
        call eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [ebx + 0x420]
        mov edx, dword ptr [edx + 0xc]
        push eax
        mov ecx, esi
        call edx
        mov esi, eax
        sub esp, 0xc
        mov eax, esp
        mov ecx, 0x10
        lea edi, [esp + 0x10c]
        rep movsd
        fld dword ptr [esp + 0x13c]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x140]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x144]
        fstp dword ptr [eax + 0x8]
        lea eax, [esp + 0x80]
        mov dword ptr [esp + 0x3c], esp
        push eax
        lea ecx, [ebx + 0x5c]
        call ext_00554EB0
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x3c]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x10]
        fcomp st(1)
        fnstsw ax
        test ah, 5
        jnp L578AB3
        cmp dword ptr [esp + 0x24], 0
        jne L578ABD
    L578AB3:
        fstp dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x24], ebp
        jmp L578ABF
    L578ABD:
        fstp st(0)
    L578ABF:
        mov edi, dword ptr [esp + 0x50]
        mov esi, dword ptr [esp + 0x44]
    L578AC7:
        cmp esi, edi
        jb L578AD1
        call dword ptr [mem_00925134]
    L578AD1:
        mov ebp, dword ptr [esp + 0x64]
        add esi, 4
        jmp L5789D8
    L578ADD:
        mov ecx, dword ptr [esp + 0x24]
        xor esi, esi
        cmp ecx, esi
        je L578B7B
        mov eax, dword ptr [ebx + 0x420]
        mov edx, dword ptr [ecx + 0x4]
        mov edx, dword ptr [edx + 0x10]
        push eax
        add ecx, 4
        push 2
        lea eax, [esp + 0x88]
        push eax
        call edx
        mov edx, dword ptr [ebx + 0x420]
        mov eax, dword ptr [ebp + 0x4]
        mov eax, dword ptr [eax + 0x10]
        push edx
        lea ecx, [ebp + 0x4]
        push esi
        lea edx, [esp + 0xc8]
        push edx
        call eax
        lea ecx, [esp + 0xc0]
        push ecx
        lea ecx, [esp + 0x84]
        call ext_0067E820
        fld dword ptr [esp + 0xb0]
        fsub dword ptr [esp + 0xf0]
        push 1
        lea edx, [esp + 0x6c]
        push edx
        fstp dword ptr [esp + 0x70]
        push ebp
        fld dword ptr [esp + 0xc0]
        mov ecx, ebx
        fsub dword ptr [esp + 0x100]
        fstp dword ptr [esp + 0x78]
        fld dword ptr [esp + 0xc4]
        fsub dword ptr [esp + 0x104]
        fstp dword ptr [esp + 0x7c]
        call ext_00556840
    L578B7B:
        mov eax, dword ptr [esp + 0x4c]
        cmp eax, esi
        mov byte ptr [esp + 0x148], 0
        je L578B94
        push eax
        call ext_006A5C5C
        add esp, 4
    L578B94:
        mov edi, dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0x4c], esi
        mov dword ptr [esp + 0x50], esi
        mov dword ptr [esp + 0x54], esi
        mov esi, dword ptr [mem_00925134]
    L578BAA:
        mov eax, dword ptr [esp + 0x28]
        cmp edi, dword ptr [eax + 0x8]
        jb L578BB5
        call esi
    L578BB5:
        add edi, 4
        jmp L578956
    L578BBD:
        mov ebx, dword ptr [esp + 0x18]
        cmp ebx, dword ptr [esp + 0x1c]
        jbe L578BC9
        call esi
    L578BC9:
        lea eax, [esp + 0x14]
        mov ebp, eax
        mov edi, ebx
    L578BD1:
        mov ebx, dword ptr [esp + 0x1c]
        cmp dword ptr [esp + 0x18], ebx
        jbe L578BDD
        call esi
    L578BDD:
        test ebp, ebp
        je L578BE9
        lea ecx, [esp + 0x14]
        cmp ebp, ecx
        je L578BEB
    L578BE9:
        call esi
    L578BEB:
        cmp edi, ebx
        je L578C85
        test ebp, ebp
        jne L578BF9
        call esi
    L578BF9:
        cmp edi, dword ptr [ebp + 0x8]
        jb L578C00
        call esi
    L578C00:
        mov esi, dword ptr [edi]
        test esi, esi
        je L578C6C
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x100]
        mov ecx, esi
        call eax
        cmp dword ptr [esi + 0x228], 0
        jne L578C6C
        mov eax, dword ptr [esi + 0x190]
        test eax, eax
        je L578C6C
        mov ebx, dword ptr [eax + 0x22c]
        add eax, 0x1b4
        push eax
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x48]
        push ecx
        lea ecx, [esi + 0x198]
        mov byte ptr [esp + 0x14c], 2
        mov dword ptr [esi + 0x228], ebx
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x148], 0
        call dword ptr [mem_00924FF4]
    L578C6C:
        cmp edi, dword ptr [ebp + 0x8]
        jb L578C77
        call dword ptr [mem_00925134]
    L578C77:
        mov esi, dword ptr [mem_00925134]
        add edi, 4
        jmp L578BD1
    L578C85:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        je L578C96
        push eax
        call ext_006A5C5C
        add esp, 4
    L578C96:
        mov ecx, dword ptr [esp + 0x140]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x13c
        ret
    }
}

// [0x00579FA0] sub_00579FA0 (155 bytes)
extern "C" void ext_00557820();
extern "C" void ext_00559680();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void* __cdecl fn_00579FA0(void* first, void* last, void* dest, void* alloc) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89de51
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
        je done
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_copy
        mov eax, dword ptr [edi]
        lea ecx, [edi + 4]
        push ecx
        lea ecx, [esi + 4]
        mov dword ptr [esi], eax
        call ext_00557820
    skip_copy:
        add esi, 0x14
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x14
        jmp loop_top
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
        mov ebx, dword ptr [ebp + 0x14]
        mov edi, edi
    destroy_loop:
        push esi
        mov ecx, ebx
        call ext_00559680
        add esi, 0x14
        cmp esi, edi
        jne destroy_loop
    rethrow:
        xor ebx, ebx
        push ebx
        push ebx
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

// [0x0057B5E0] sub_0057B5E0 (160 bytes)
extern "C" void ext_0057A770();
extern "C" void ext_0057B1B0();
extern "C" int mem_00925078; /* u32 0x0062BF30 */
extern "C" int mem_00925134; /* "P{b" */

extern "C" __declspec(naked) bool __fastcall fn_0057B5E0(void* self, int edx_unused, void* is) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr [ebx + 0x488]
        cmp ecx, -0x1
        push esi
        push edi
        jne L_57b600
        mov al, 0x1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    L_57b600:
        mov ebp, dword ptr [esp + 0x1c]
        sub esp, 0x18
        mov eax, esp
        mov dword ptr [eax], ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x10], ecx
        mov ecx, ebp
        call dword ptr [mem_00925078]
        mov edi, dword ptr [ebx + 0x6bc]
        cmp dword ptr [ebx + 0x6b8], edi
        lea esi, [ebx + 0x6b4]
        jbe L_57b638
        call dword ptr [mem_00925134]
    L_57b638:
        mov eax, dword ptr [esi + 0x4]
        cmp eax, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x1c], eax
        jbe L_57b64e
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x1c]
    L_57b64e:
        push edi
        push esi
        push eax
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0057A770
        mov edi, edi
    L_57b660:
        movsx ecx, word ptr [ebx + 0x69a]
        push ecx
        push ebp
        mov ecx, ebx
        call ext_0057B1B0
        test al, al
        je L_57b660
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x00573E00] sub_00573E00 (161 bytes)
extern "C" void ext_00573900();
extern "C" void ext_00573D40();
extern "C" int mem_00925134; /* "P{b" */

extern "C" __declspec(naked) void __fastcall fn_00573E00(void* self, int edx_unused, int a1) {
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
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x3
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
L_after_first:
        test edi, edi
        je short L_slow
        mov edx, dword ptr [esi + 0xc]
        sub edx, edi
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ecx, eax
        jae short L_slow
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esi + 0x8]
        mov byte ptr [esp + 0x8], 0
        mov eax, dword ptr [esp + 0x8]
        push eax
        push ecx
        push esi
        push edx
        push 1
        push edi
        call ext_00573900
        add esp, 0x18
        add edi, 0x30
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        add esp, 8
        ret 4
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
        call ext_00573D40
        pop ebx
        pop edi
        pop esi
        add esp, 8
        ret 4
    }
}

// [0x005795D0] sub_005795D0 (161 bytes)
extern "C" void ext_00576E50();
extern "C" void ext_00578FD0();
extern "C" int mem_00925134; /* "P{b" */

extern "C" __declspec(naked) void __fastcall fn_005795D0(void* self, int edx_unused, int a1) {
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
        mov eax, 0x30c30c31
        imul ecx
        sar edx, 0x4
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
L_after_first:
        test edi, edi
        je short L_slow
        mov edx, dword ptr [esi + 0xc]
        sub edx, edi
        mov eax, 0x30c30c31
        imul edx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ecx, eax
        jae short L_slow
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esi + 0x8]
        mov byte ptr [esp + 0x8], 0
        mov eax, dword ptr [esp + 0x8]
        push eax
        push ecx
        push esi
        push edx
        push 1
        push edi
        call ext_00576E50
        add esp, 0x18
        add edi, 0x54
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        add esp, 8
        ret 4
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
        call ext_00578FD0
        pop ebx
        pop edi
        pop esi
        add esp, 8
        ret 4
    }
}

// [0x0057FD60] sub_0057FD60 (161 bytes)
extern "C" void ext_0057E5F0();
extern "C" void ext_0057FA30();
extern "C" int mem_00925134; /* "P{b" */

extern "C" __declspec(naked) void __fastcall fn_0057FD60(void* self, int edx_unused, int a1) {
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
        sar edx, 0x3
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
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ecx, eax
        jae short L_slow
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esi + 0x8]
        mov byte ptr [esp + 0x8], 0
        mov eax, dword ptr [esp + 0x8]
        push eax
        push ecx
        push esi
        push edx
        push 1
        push edi
        call ext_0057E5F0
        add esp, 0x18
        add edi, 0x14
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        add esp, 8
        ret 4
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
        call ext_0057FA30
        pop ebx
        pop edi
        pop esi
        add esp, 8
        ret 4
    }
}

// [0x0057B100] sub_0057B100 (161 bytes)
extern "C" void ext_0057A280();
extern "C" void ext_0057B050();
extern "C" int mem_00925134; /* "P{b" */

extern "C" __declspec(naked) void __fastcall fn_0057B100(void* self, int edx_unused, int a1) {
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
        sar edx, 0x3
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
        sar edx, 0x3
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
        call ext_0057A280
        add esp, 0x18
        add edi, 0x14
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
L_slow:
        push ebx
        mov ebx, dword ptr [esi + 0x8]
        cmp edi, ebx
        jbe short L_valid
        call dword ptr [mem_00925134]
L_valid:
        mov eax, dword ptr [esp + 0x18]
        push eax
        push ebx
        push esi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_0057B050
        pop ebx
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x00579520] sub_00579520 (164 bytes)
extern "C" void ext_00576DB0();
extern "C" void ext_00578F10();
extern "C" int mem_00925134; /* "P{b" */

extern "C" __declspec(naked) void __fastcall fn_00579520(void* self, int edx_unused, int a1) {
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
        sar edx, 0x6
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
        sar edx, 0x6
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
        call ext_00576DB0
        add esp, 0x18
        add edi, 0xa0
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        add esp, 8
        ret 4
L_slow:
        push ebx
        mov ebx, dword ptr [esi + 0x8]
        cmp edi, ebx
        jbe short L_valid
        call dword ptr [mem_00925134]
L_valid:
        mov eax, dword ptr [esp + 0x18]
        push eax
        push ebx
        push esi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_00578F10
        pop ebx
        pop edi
        pop esi
        add esp, 8
        ret 4
    }
}

// [0x0057DCE0] sub_0057DCE0 (166 bytes)
extern "C" __declspec(naked) void __fastcall fn_0057DCE0(void* self, int edx_unused, int a1) {
    extern void ext_0057CAC0();
    extern void ext_0057D9C0();
    extern int mem_00925134;
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 4]
        test ebx, ebx
        push edi
        jne L_nonnull
        xor edi, edi
        jmp L_after_count
L_nonnull:
        mov ecx, dword ptr [esi + 8]
        sub ecx, ebx
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov edi, edx
        shr edi, 0x1f
        add edi, edx
L_after_count:
        test ebx, ebx
        je L_slow
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, ebx
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jae L_slow
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esi + 8]
        mov byte ptr [esp + 0xc], 0
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push esi
        push edx
        push 1
        push edi
        call ext_0057CAC0
        add esp, 0x18
        add edi, 0x3c
        mov dword ptr [esi + 8], edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
L_slow:
        mov edi, dword ptr [esi + 8]
        cmp ebx, edi
        jbe L_skip_invalid
        call dword ptr [mem_00925134]
L_skip_invalid:
        mov eax, dword ptr [esp + 0x18]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_0057D9C0
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x0057FEC0] sub_0057FEC0 (166 bytes)
extern void ext_0057E740();
extern void ext_0057FBA0();
extern int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0057FEC0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 4]
        test ebx, ebx
        push edi
        jne L_nonnull
        xor edi, edi
        jmp L_after_count
L_nonnull:
        mov ecx, dword ptr [esi + 8]
        sub ecx, ebx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov edi, edx
        shr edi, 0x1f
        add edi, edx
L_after_count:
        test ebx, ebx
        je L_slow
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, ebx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jae L_slow
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esi + 8]
        mov byte ptr [esp + 0xc], 0
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push esi
        push edx
        push 1
        push edi
        call ext_0057E740
        add esp, 0x18
        add edi, 0x38
        mov dword ptr [esi + 8], edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
L_slow:
        mov edi, dword ptr [esi + 8]
        cmp ebx, edi
        jbe L_ok
        call dword ptr [mem_00925134]
L_ok:
        mov eax, dword ptr [esp + 0x18]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_0057FBA0
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x0057FE10] sub_0057FE10 (166 bytes)
extern "C" __declspec(naked) void __fastcall fn_0057FE10(void* self, int edx_unused, int a1) {
    extern void ext_0057E690();
    extern void ext_0057FAE0();
    extern int mem_00925134;
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 4]
        test ebx, ebx
        push edi
        jne L_nonnull
        xor edi, edi
        jmp L_after_count
L_nonnull:
        mov ecx, dword ptr [esi + 8]
        sub ecx, ebx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov edi, edx
        shr edi, 0x1f
        add edi, edx
L_after_count:
        test ebx, ebx
        je L_slow
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, ebx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jae L_slow
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esi + 8]
        mov byte ptr [esp + 0xc], 0
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push esi
        push edx
        push 1
        push edi
        call ext_0057E690
        add esp, 0x18
        add edi, 0x1c
        mov dword ptr [esi + 8], edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
L_slow:
        mov edi, dword ptr [esi + 8]
        cmp ebx, edi
        jbe L_skip_invalid
        call dword ptr [mem_00925134]
L_skip_invalid:
        mov eax, dword ptr [esp + 0x18]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_0057FAE0
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x00578FD0] sub_00578FD0 (173 bytes)
extern "C" void ext_00578450();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00578FD0(void* self, void* dummy, void* a1, void* a2, void* a3, void* a4) {
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
        je      L_00578FFC
        mov     ebx, dword ptr [edi + 0x8]
        mov     ecx, ebx
        sub     ecx, esi
        mov     eax, 0x30c30c31
        imul    ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
        jne     L_00579004
    L_00578FFC:
        mov     ebx, dword ptr [esp + 0x1c]
        xor     esi, esi
        jmp     L_00579035
    L_00579004:
        cmp     esi, ebx
        jbe     L_0057900E
        call    dword ptr [mem_00925134]
    L_0057900E:
        mov     ebx, dword ptr [esp + 0x1c]
        test    ebx, ebx
        je      L_0057901A
        cmp     ebx, edi
        je      L_00579020
    L_0057901A:
        call    dword ptr [mem_00925134]
    L_00579020:
        mov     ecx, ebp
        sub     ecx, esi
        mov     eax, 0x30c30c31
        imul    ecx
        sar     edx, 0x4
        mov     esi, edx
        shr     esi, 0x1f
        add     esi, edx
    L_00579035:
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        push    0x1
        push    ebp
        push    ebx
        mov     ecx, edi
        call    ext_00578450
        mov     ebx, dword ptr [edi + 0x4]
        cmp     ebx, dword ptr [edi + 0x8]
        jbe     L_00579053
        call    dword ptr [mem_00925134]
    L_00579053:
        imul    esi, esi, 0x54
        add     esi, ebx
        cmp     esi, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x20], ebx
        ja      L_00579066
        cmp     esi, dword ptr [edi + 0x4]
        jae     L_0057906C
    L_00579066:
        call    dword ptr [mem_00925134]
    L_0057906C:
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

// [0x0057F980] sub_0057F980 (173 bytes)
extern "C" __declspec(naked) void __fastcall fn_0057F980(void* self, void* dummy, void* a1, void* a2, void* a3, void* a4) {
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
        je      L_0057F9AC
        mov     ebx, dword ptr [edi + 0x8]
        mov     ecx, ebx
        sub     ecx, esi
        mov     eax, 0x2e8ba2e9
        imul    ecx
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
        jne     L_0057F9B4
    L_0057F9AC:
        mov     ebx, dword ptr [esp + 0x1c]
        xor     esi, esi
        jmp     L_0057F9E5
    L_0057F9B4:
        cmp     esi, ebx
        jbe     L_0057F9BE
        call    dword ptr [mem_00925134]
    L_0057F9BE:
        mov     ebx, dword ptr [esp + 0x1c]
        test    ebx, ebx
        je      L_0057F9CA
        cmp     ebx, edi
        je      L_0057F9D0
    L_0057F9CA:
        call    dword ptr [mem_00925134]
    L_0057F9D0:
        mov     ecx, ebp
        sub     ecx, esi
        mov     eax, 0x2e8ba2e9
        imul    ecx
        sar     edx, 0x3
        mov     esi, edx
        shr     esi, 0x1f
        add     esi, edx
    L_0057F9E5:
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        push    1
        push    ebp
        push    ebx
        mov     ecx, edi
        call    ext_0057EBB0
        mov     ebx, dword ptr [edi + 0x4]
        cmp     ebx, dword ptr [edi + 0x8]
        jbe     L_0057FA03
        call    dword ptr [mem_00925134]
    L_0057FA03:
        imul    esi, esi, 0x2c
        add     esi, ebx
        cmp     esi, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x20], ebx
        ja      L_0057FA16
        cmp     esi, dword ptr [edi + 0x4]
        jae     L_0057FA1C
    L_0057FA16:
        call    dword ptr [mem_00925134]
    L_0057FA1C:
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

// [0x0057FC60] sub_0057FC60 (174 bytes)
extern "C" void ext_0057BF20();
extern "C" void ext_0057F980();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;
extern "C" __declspec(naked) unsigned char __fastcall fn_0057FC60(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 12
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov byte ptr [esp + 12], 0
        jbe L_57FC60_c1
        call dword ptr [mem_00925134]
    L_57FC60_c1:
        push edi
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_57FC60_c2
        call dword ptr [mem_00925134]
    L_57FC60_c2:
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
        jbe L_57FC60_c3
        call dword ptr [mem_00925134]
    L_57FC60_c3:
        test esi, esi
        je L_57FC60_c4
        cmp esi, esi
        je L_57FC60_c5
    L_57FC60_c4:
        call dword ptr [mem_00925134]
    L_57FC60_c5:
        cmp ebx, edi
        pop edi
        je L_57FC60_ret1
        test esi, esi
        jne L_57FC60_c6
        call dword ptr [mem_00925134]
    L_57FC60_c6:
        cmp ebx, dword ptr [esi + 8]
        jb L_57FC60_c7
        call dword ptr [mem_00925134]
    L_57FC60_c7:
        push ebx
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne L_57FC60_ret1
        pop esi
        pop ebp
        pop ebx
        add esp, 12
        ret 4
    L_57FC60_ret1:
        push ebp
        push ebx
        push esi
        lea ecx, [esp + 28]
        push ecx
        mov ecx, esi
        call ext_0057F980
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 12
        ret 4
    }
}

// [0x0057B050] sub_0057B050 (174 bytes)
extern "C" void ext_0057A800();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0057B050(void* self, int edx_unused, int* out, char* cont, char* where, int val) {
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
        sar edx, 3
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
        sar edx, 3
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
        call ext_0057A800
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        lea edx, [edi + 4*edi]
        lea edi, [ebx + 4*edx]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x20], ebx
        ja L_ok4
        cmp edi, dword ptr [esi + 0x4]
        jae L_ok5
    L_ok4:
        call dword ptr [mem_00925134]
    L_ok5:
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

// [0x0057FA30] sub_0057FA30 (174 bytes)
extern "C" void ext_0057F010();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0057FA30(void* self, int edx_unused, int* out, char* cont, char* where, int val) {
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
        sar edx, 3
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
        sar edx, 3
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
        call ext_0057F010
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        lea edx, [edi + 4*edi]
        lea edi, [ebx + 4*edx]
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

// [0x00573D40] sub_00573D40 (177 bytes)
extern "C" void ext_00573A40();

extern "C" __declspec(naked) void __fastcall fn_00573D40(void* self, int edx_unused, int* out, char* cont, char* where, int val) {
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
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 3
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
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 3
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
        call ext_00573A40
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        lea edx, [edi + 2*edi]
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

// [0x00578F10] sub_00578F10 (177 bytes)
extern "C" void ext_00578150();

extern "C" __declspec(naked) void __fastcall fn_00578F10(void* self, int edx_unused, int* out, char* cont, char* where, int val) {
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
        sar edx, 6
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
        sar edx, 6
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
        call ext_00578150
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        lea edx, [edi + 4*edi]
        shl edx, 5
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

// [0x0057D9C0] sub_0057D9C0 (182 bytes)
extern "C" __declspec(naked) void __fastcall fn_0057D9C0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    extern void ext_0057D340();
    extern int mem_00925134;
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
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
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
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
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
        call ext_0057D340
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        mov edx, edi
        shl edx, 4
        sub edx, edi
        lea edi, [ebx + 4*edx]
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

// [0x0057FAE0] sub_0057FAE0 (184 bytes)
extern "C" __declspec(naked) void __fastcall fn_0057FAE0(void* self, int edx_unused, int* out, char* cont, char* where, int val) {
    extern void ext_0057F330();
    extern int mem_00925134;
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
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
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
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
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
        call ext_0057F330
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        lea edx, [edi*8]
        sub edx, edi
        lea edi, [ebx + edx*4]
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

// [0x0057FBA0] sub_0057FBA0 (184 bytes)
extern "C" __declspec(naked) void __fastcall fn_0057FBA0(void* self, int edx_unused, int* out, char* cont, char* where, int val) {
    extern void ext_0057F660();
    extern int mem_00925134;
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
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x5
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
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x5
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
        call ext_0057F660
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        lea edx, [edi*8]
        sub edx, edi
        lea edi, [ebx + edx*8]
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

// [0x005779A0] sub_005779A0 (186 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_00575E30();
extern "C" void ext_00577500();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_005779A0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 08a0db8h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 54h
        push esi
        push edi
        mov edi, dword ptr [esp + 6ch]
        mov esi, ecx
        push edi
        lea ecx, [esp + 18h]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 70h]
        fld dword ptr [eax]
        fstp dword ptr [esp + 30h]
        lea ecx, [esp + 14h]
        push ecx
        lea edx, [esp + 0ch]
        push edx
        lea ecx, [esi + 4]
        mov dword ptr [esp + 6ch], 0
        call ext_00577500
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 64h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esp + 10h], 0
        jne L_ok_005779A0
        push edi
        call ext_00575E30
        push eax
        lea ecx, [esp + 3ch]
        call ext_004142E0
        push 09d1278h
        lea eax, [esp + 38h]
        push eax
        call ext_006A6DD2
L_ok_005779A0:
        mov esi, dword ptr [esp + 8h]
        test esi, esi
        push ebx
        mov ebx, dword ptr [mem_00925134]
        jne L_nz1_005779A0
        call ebx
L_nz1_005779A0:
        mov edi, dword ptr [esp + 10h]
        cmp edi, dword ptr [esi + 4]
        jne L_nz2_005779A0
        call ebx
L_nz2_005779A0:
        mov ecx, dword ptr [esp + 60h]
        pop ebx
        lea eax, [edi + 28h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 60h
        ret 8
    }
}

// [0x00572B90] sub_00572B90 (227 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_00571E20();
extern "C" void ext_00572590();
extern "C" void ext_00572A90();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00572B90(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x89d441
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x60
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x7c]
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x44]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 0x80]
        xor ebx, ebx
        push eax
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0x78], ebx
        call ext_00572590
        lea ecx, [esp + 0x40]
        push ecx
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esi + 4]
        mov dword ptr [esp + 0x7c], 1
        call ext_00572A90
        mov eax, dword ptr [esp + 0x60]
        cmp eax, ebx
        mov dword ptr [esp + 0x74], 0xffffffff
        je L_skip_free
        push eax
        call ext_006A5C5C
        add esp, 4
    L_skip_free:
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0x60], ebx
        mov dword ptr [esp + 0x64], ebx
        mov dword ptr [esp + 0x68], ebx
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esp + 0x14], bl
        jne L_after_throw
        push edi
        call ext_00571E20
        push eax
        lea ecx, [esp + 0x20]
        call ext_004142E0
        push 0x9d1278
        lea eax, [esp + 0x1c]
        push eax
        call ext_006A6DD2
    L_after_throw:
        mov esi, dword ptr [esp + 0x0c]
        cmp esi, ebx
        mov ebx, mem_00925134
        jne L_nz1
        call ebx
    L_nz1:
        mov edi, dword ptr [esp + 0x10]
        cmp edi, dword ptr [esi + 4]
        jne L_nz2
        call ebx
    L_nz2:
        mov ecx, dword ptr [esp + 0x6c]
        lea eax, [edi + 0x28]
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x6c
        ret 8
    }
}

// [0x00577390] sub_00577390 (229 bytes)
extern "C" void ext_00480920();
extern "C" void ext_00576870();
extern "C" int mem_00925094;

extern "C" __declspec(naked) void __fastcall fn_00577390(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        sub esp, 0x48
        mov eax, dword ptr [esp + 0x50]
        mov edx, dword ptr [esp + 0x58]
        push ebx
        mov ebx, dword ptr [esp + 0x50]
        push ebp
        mov ebp, ecx
        movzx ecx, ax
        mov ax, word ptr [ebp + 2*eax + 0x49c]
        add ax, ax
        add ax, ax
        add ax, ax
        push esi
        mov dword ptr [esp + 0xc], ecx
        add ax, 0x6
        movzx ecx, ax
        push edi
        mov dword ptr [esp + 0x14], edx
        push 0x2
        lea edx, [esp + 0x6c]
        mov dword ptr [esp + 0x6c], ecx
        push edx
        mov ecx, ebx
        call dword ptr [mem_00925094]
        push 0x2
        lea eax, [esp + 0x14]
        push eax
        mov ecx, ebx
        call dword ptr [mem_00925094]
        push 0x4
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, ebx
        call dword ptr [mem_00925094]
        fld1
        fst dword ptr [esp + 0x18]
        fldz
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
        call ext_00480920
        mov edx, dword ptr [esp + 0x64]
        mov eax, dword ptr [esp + 0x60]
        sub esp, 0x40
        mov edi, esp
        mov dword ptr [esp + 0x9c], esp
        push edx
        mov ecx, 0x10
        lea esi, [esp + 0x5c]
        push eax
        rep movsd
        push ebx
        mov ecx, ebp
        call ext_00576870
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 0x10
    }
}

// [0x0057FF70] sub_0057FF70 (234 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_004276B0();
extern "C" void ext_00557960();
extern "C" void ext_00558B90();
extern "C" void ext_0057BC70();
extern "C" void ext_0057FC60();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_009D1278;
extern "C" __declspec(naked) unsigned char __fastcall fn_0057FF70(void* self, int edx_unused, void* a1, void* a2, int a3) {
    __asm {
        push -1
        push 89E72Ah
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 70h
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 8Ch]
        mov esi, ecx
        push edi
        lea ecx, [esp + 54h]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 90h]
        push eax
        lea ecx, [esp + 70h]
        mov dword ptr [esp + 88h], 0
        call ext_00557960
        lea ecx, [esp + 50h]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 88h], 1
        call ext_0057FC60
        lea ecx, [esp + 50h]
        mov bl, al
        mov dword ptr [esp + 84h], -1
        call ext_00558B90
        test bl, bl
        je L_57FF70_fail
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr [esp + 70h]
        mov dword ptr fs:[0], ecx
        add esp, 7Ch
        ret 0Ch
    L_57FF70_fail:
        cmp byte ptr [esp + 94h], 0
        je L_57FF70_ret0
        lea edx, [esp + 0Ch]
        push edi
        push edx
        call ext_004276B0
        add esp, 8
        push eax
        mov dword ptr [esp + 88h], 2
        call ext_0057BC70
        push eax
        lea ecx, [esp + 30h]
        call ext_004142E0
        push offset mem_009D1278
        lea eax, [esp + 2Ch]
        push eax
        call ext_006A6DD2
    L_57FF70_ret0:
        mov ecx, dword ptr [esp + 7Ch]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 7Ch
        ret 0Ch
    }
}

// [0x005778A0] sub_005778A0 (241 bytes)
extern "C" void ext_00427A60();
extern "C" void ext_005777D0();
extern "C" void ext_005778A0();
extern "C" int mem_00925134; /* "P{b" */
extern "C" int mem_00924FC4; /* u32 0x00629432 */
extern "C" __declspec(naked) void __fastcall fn_005778A0(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        sub esp, 0x1c
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [mem_00925134]
        push edi
        mov edi, dword ptr [esp + 0x34]
        mov ebx, dword ptr [edi + 0x28]
        add edi, 0x24
        cmp ebx, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x34], edi
        jbe L_a
        call esi
    L_a:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], ebx
        call ext_00427A60
        jmp L_b
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    L_b:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_c
        call esi
    L_c:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x28], ebx
        call ext_00427A60
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        je L_d
        cmp edi, dword ptr [esp + 0x24]
        je L_e
    L_d:
        call esi
    L_e:
        mov ebp, dword ptr [esp + 0x1c]
        cmp ebp, dword ptr [esp + 0x28]
        jae L_end
        test edi, edi
        mov ebx, dword ptr [esp + 0x30]
        jne L_f
        call esi
    L_f:
        cmp ebp, dword ptr [edi + 0x8]
        jb L_g
        call esi
    L_g:
        mov esi, dword ptr [ebp]
        lea eax, [esi + 0x4]
        push 0xb3d4ac
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je L_h
        push esi
        mov ecx, ebx
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        call ext_005777D0
        mov ebx, eax
    L_h:
        mov ecx, dword ptr [esp + 0x10]
        push esi
        push ebx
        call ext_005778A0
        cmp ebp, dword ptr [edi + 0x8]
        jb L_i
        call dword ptr [mem_00925134]
    L_i:
        add ebp, 0x4
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x1c], ebp
        call ext_00427A60
        mov edi, dword ptr [esp + 0x34]
        mov esi, dword ptr [mem_00925134]
        jmp L_b
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1c
        ret 8
    }
}

// [0x00572A90] sub_00572A90 (243 bytes)
struct TreeIter_572A90 {
    void* cont;
    void* ptr;
    TreeIter_572A90() {}
    TreeIter_572A90(void* c, void* p) : cont(c), ptr(p) {}
};
struct TreePair_572A90 {
    TreeIter_572A90 first;
    bool second;
};
extern "C" void ext_00572890();
extern "C" void ext_00666C00();
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_00572A90(void* self) {
    __asm {
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr [ebp + 0x4]
        mov esi, dword ptr [edi + 0x4]
        cmp byte ptr [esi + 0x39], 0x0
        mov al, 0x1
        mov byte ptr [esp + 0x10], al
        jne L_572ad5
        nop
    L_572ab0:
        lea eax, [esi + 0xc]
        push eax
        push ebx
        mov edi, esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        mov byte ptr [esp + 0x10], al
        je L_572acc
        mov esi, dword ptr [esi]
        jmp L_572acf
    L_572acc:
        mov esi, dword ptr [esi + 0x8]
    L_572acf:
        cmp byte ptr [esi + 0x39], 0x0
        je L_572ab0
    L_572ad5:
        test al, al
        mov esi, edi
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x14], ebp
        je L_572b25
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx]
        jne L_572b18
        push ebx
        push edi
        push 0x1
        lea edx, [esp + 0x20]
        push edx
        mov ecx, ebp
        call ext_00572890
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        mov byte ptr [eax + 0x8], 0x1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0xc
        ret 0x8
    L_572b18:
        lea ecx, [esp + 0x14]
        call ext_00666C00
        mov esi, dword ptr [esp + 0x18]
    L_572b25:
        lea edx, [esi + 0xc]
        push ebx
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_572b68
        mov eax, dword ptr [esp + 0x10]
        push ebx
        push edi
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, ebp
        call ext_00572890
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        mov byte ptr [eax + 0x8], 0x1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0xc
        ret 0x8
    L_572b68:
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x14]
        pop edi
        mov dword ptr [eax + 0x4], esi
        pop esi
        pop ebp
        mov byte ptr [eax + 0x8], 0x0
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0xc
        ret 0x8
    }
}

// [0x00577500] sub_00577500 (243 bytes)
extern "C" void ext_00576B50();
extern "C" void ext_0059E220();
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_00577500(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr [ebp + 0x4]
        mov esi, dword ptr [edi + 0x4]
        cmp byte ptr [esi + 0x2d], 0x0
        mov al, 0x1
        mov byte ptr [esp + 0x10], al
        jne L_577545
        nop
    L_577520:
        lea eax, [esi + 0xc]
        push eax
        push ebx
        mov edi, esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        mov byte ptr [esp + 0x10], al
        je L_57753c
        mov esi, dword ptr [esi]
        jmp L_57753f
    L_57753c:
        mov esi, dword ptr [esi + 0x8]
    L_57753f:
        cmp byte ptr [esi + 0x2d], 0x0
        je L_577520
    L_577545:
        test al, al
        mov esi, edi
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x14], ebp
        je L_577595
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx]
        jne L_577588
        push ebx
        push edi
        push 0x1
        lea edx, [esp + 0x20]
        push edx
        mov ecx, ebp
        call ext_00576B50
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        mov byte ptr [eax + 0x8], 0x1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0xc
        ret 0x8
    L_577588:
        lea ecx, [esp + 0x14]
        call ext_0059E220
        mov esi, dword ptr [esp + 0x18]
    L_577595:
        lea edx, [esi + 0xc]
        push ebx
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_5775d8
        mov eax, dword ptr [esp + 0x10]
        push ebx
        push edi
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, ebp
        call ext_00576B50
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        mov byte ptr [eax + 0x8], 0x1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0xc
        ret 0x8
    L_5775d8:
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x14]
        pop edi
        mov dword ptr [eax + 0x4], esi
        pop esi
        pop ebp
        mov byte ptr [eax + 0x8], 0x0
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0xc
        ret 0x8
    }
}

// [0x00575FB0] sub_00575FB0 (299 bytes)
extern "C" void ext_005757F0();

extern "C" __declspec(naked) void __fastcall fn_00575FB0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        sub     esp, 0x40
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [eax + 0x70]
        mov     esi, ecx
        mov     ecx, edi
        call    edx
        test    al, al
        je      L_epilogue
        cmp     byte ptr [esi + 0xc8], 0
        fld1
        fldz
        je      L_skip1
        mov     ecx, dword ptr [esp + 0x50]
        fxch    st(1)
        fst     dword ptr [esp + 0x8]
        lea     eax, [esp + 0x8]
        fst     dword ptr [esp + 0x1c]
        push    eax
        fst     dword ptr [esp + 0x34]
        push    ecx
        fstp    dword ptr [esp + 0x4c]
        mov     ecx, esi
        fst     dword ptr [esp + 0x14]
        fst     dword ptr [esp + 0x18]
        fst     dword ptr [esp + 0x1c]
        fst     dword ptr [esp + 0x20]
        fst     dword ptr [esp + 0x28]
        fst     dword ptr [esp + 0x2c]
        fst     dword ptr [esp + 0x30]
        fst     dword ptr [esp + 0x34]
        fst     dword ptr [esp + 0x3c]
        fst     dword ptr [esp + 0x40]
        fst     dword ptr [esp + 0x44]
        fstp    dword ptr [esp + 0x48]
        call    ext_005757F0
        mov     eax, dword ptr [edi + 0x4]
        mov     eax, dword ptr [eax + 0xc]
        lea     edx, [esp + 0x8]
        lea     ecx, [edi + 0x4]
        push    edx
        mov     edx, dword ptr [esi + 0x420]
        push    edx
        call    eax
        mov     ecx, eax
        call    ext_0067E820
        fld1
        fldz
    L_skip1:
        cmp     byte ptr [esi + 0x70], 0
        jne     L_pop2
        fxch    st(1)
        push    ecx
        fst     dword ptr [esp + 0xc]
        lea     ecx, [esp + 0xc]
        fst     dword ptr [esp + 0x20]
        fst     dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x48]
        fst     dword ptr [esp + 0x10]
        fst     dword ptr [esp + 0x14]
        fst     dword ptr [esp + 0x18]
        fst     dword ptr [esp + 0x1c]
        fst     dword ptr [esp + 0x24]
        fst     dword ptr [esp + 0x28]
        fst     dword ptr [esp + 0x2c]
        fst     dword ptr [esp + 0x30]
        fst     dword ptr [esp + 0x38]
        fst     dword ptr [esp + 0x3c]
        fst     dword ptr [esp + 0x40]
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [mem_00957754]
        fstp    dword ptr [esp]
        call    ext_0067E650
        mov     eax, dword ptr [edi + 0x4]
        mov     eax, dword ptr [eax + 0xc]
        lea     edx, [esp + 0x8]
        lea     ecx, [edi + 0x4]
        push    edx
        mov     edx, dword ptr [esi + 0x420]
        push    edx
        call    eax
        mov     ecx, eax
        call    ext_0067E990
        pop     edi
        pop     esi
        add     esp, 0x40
        ret     0x8
    L_pop2:
        fstp    st(0)
        fstp    st(0)
    L_epilogue:
        pop     edi
        pop     esi
        add     esp, 0x40
        ret     0x8
    }
}

// [0x0057E170] sub_0057E170 (323 bytes)
extern "C" void ext_0057DCE0();
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_0057E170(void* self, int edx_unused, void* obj, void* key) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x0089E5BA
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x60]
        push edi
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        mov ebp, dword ptr [esp + 0x68]
L_top:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        cmp edi, ebx
        je L_notfound
        cmp edi, dword ptr [esi + 8]
        mov ebx, dword ptr [mem_00925134]
        jb L_skip1
        call ebx
L_skip1:
        lea eax, [edi + 4]
        push ebp
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 8
        test al, al
        jne L_found
        cmp edi, dword ptr [esi + 8]
        jb L_skip2
        call ebx
L_skip2:
        add edi, 0x3c
        jmp L_top
L_found:
        cmp edi, dword ptr [esi + 8]
        jb L_skip3
        call ebx
L_skip3:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 0x44]
        mov dword ptr fs:[0], ecx
        add esp, 0x50
        ret 8
L_notfound:
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE8]
        xor ebx, ebx
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x5c], ebx
        call dword ptr [mem_00924FE8]
        push ebp
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x60], 1
        call dword ptr [mem_00924FDC]
        push 0x0092A0D0
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924FD4]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x1c], bl
        call ext_0057DCE0
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        mov ebp, dword ptr [mem_00925134]
        jbe L_n1
        call ebp
L_n1:
        lea eax, [edi - 0x3c]
        cmp eax, dword ptr [esi + 8]
        mov ebx, esi
        mov dword ptr [esp + 0x14], edi
        ja L_n2
        cmp eax, dword ptr [esi + 4]
        jae L_n3
L_n2:
        call ebp
L_n3:
        lea esi, [edi - 0x3c]
        cmp esi, dword ptr [ebx + 8]
        jb L_n4
        call ebp
L_n4:
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x5c], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x5c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x50
        ret 8
    }
}

extern "C" void ext_00427A60();
extern "C" void ext_00435D00();
extern "C" void ext_005749F0();
extern "C" void ext_00576EE0();
extern "C" void ext_0063F530();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_00924FF4;

// [0x00577600] sub_00577600 (337 bytes)
extern "C" __declspec(naked) void __fastcall fn_00577600(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x28
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x27c]
        mov edx, dword ptr [eax + 0x84]
        push esi
        lea esi, [ebx + 0x27c]
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE8]
        mov ecx, 0xb3d490
        mov dword ptr [esp + 0x38], 0
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0x40]
        push 1
        push 0
        push eax
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_577680
        cmp eax, 0xb53b30
        je L_577680
        cmp eax, 0xb53ab0
        je L_577680
        cmp eax, 0xb53a70
        je L_577680
        cmp eax, 0xb53af0
        jne L_577685
L_577680:
        mov eax, 0xb53b30
L_577685:
        cmp eax, 0xb53a34
        je L_57770A
        cmp eax, 0xb53b30
        je L_57770A
        cmp eax, 0xb53ab0
        je L_57770A
        cmp eax, 0xb53a70
        je L_57770A
        cmp eax, 0xb53af0
        je L_57770A
        push ebp
        mov ebp, dword ptr [eax + 0x28]
        cmp ebp, dword ptr [eax + 0x2c]
        push edi
        lea edi, [eax + 0x24]
        jbe L_5776BB
        call dword ptr [mem_00925134]
L_5776BB:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], ebp
        call ext_00427A60
        push 0xb3d490
        push esi
        mov ecx, ebx
        call ext_005749F0
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        jne L_5776EB
        call dword ptr [mem_00925134]
L_5776EB:
        mov ebp, dword ptr [esp + 0x18]
        cmp ebp, dword ptr [edi + 0x8]
        jb L_5776FA
        call dword ptr [mem_00925134]
L_5776FA:
        mov eax, dword ptr [ebp]
        push eax
        push esi
        mov ecx, ebx
        call ext_00576EE0
        pop edi
        pop ebp
        jmp L_57772C
L_57770A:
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        push 0x95996c
        push ecx
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
L_57772C:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x38], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x30]
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x34
        ret 4
    }
}

// [0x00576EE0] sub_00576EE0 (374 bytes)
extern "C" void ext_00427A60();
extern "C" void ext_00576400();
extern "C" void ext_00576EE0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00924FE0; /* u32 0x0062916E */
extern "C" int mem_00924FC4; /* u32 0x00629432 */
extern "C" int mem_00924FF0; /* u32 0x0062903A */
extern "C" int mem_00924FDC; /* u32 0x006291BE */
extern "C" int mem_00924FF4; /* u32 0x00628FF0 */
extern "C" int mem_00925134; /* "P{b" */

extern "C" __declspec(naked) void __fastcall fn_00576EE0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8848f2
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x74]
        push edi
        mov edi, dword ptr [esp + 0x74]
        mov ebp, ecx
        lea eax, [esi + 0x4]
        push eax
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x14], ebp
        mov ebx, edi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x2c]
        push 0xb3d4ac
        push ecx
        mov dword ptr [esp + 0x74], 0x0
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je skip_block
        mov ecx, 0xb3d27c
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x48]
        push ecx
        mov ecx, eax
        call edx
        push eax
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x70], 0x1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x6c], 0x0
        call dword ptr [mem_00924FF4]
        push esi
        push edi
        mov ecx, ebp
        call ext_00576400
        mov ebx, eax
skip_block:
        mov ebp, dword ptr [mem_00925134]
        lea edi, [esi + 0x24]
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe chk1_ok
        call ebp
chk1_ok:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], esi
        call ext_00427A60
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
loop_top:
        mov esi, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], esi
        jbe chk2_ok
        call ebp
chk2_ok:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x28], esi
        call ext_00427A60
        mov esi, dword ptr [esp + 0x18]
        test esi, esi
        je chk3_fail
        cmp esi, dword ptr [esp + 0x24]
        je chk3_ok
chk3_fail:
        call ebp
chk3_ok:
        mov ebp, dword ptr [esp + 0x1c]
        cmp ebp, dword ptr [esp + 0x28]
        jae loop_exit
        test esi, esi
        jne chk4_ok
        call dword ptr [mem_00925134]
chk4_ok:
        cmp ebp, dword ptr [esi + 0x8]
        jb chk5_ok
        call dword ptr [mem_00925134]
chk5_ok:
        mov eax, dword ptr [ebp]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ebx
        call ext_00576EE0
        cmp ebp, dword ptr [esi + 0x8]
        jb chk6_ok
        call dword ptr [mem_00925134]
chk6_ok:
        add ebp, 0x4
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x1c], ebp
        call ext_00427A60
        mov ebp, dword ptr [mem_00925134]
        jmp loop_top
loop_exit:
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x6c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x64]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x60
        ret 0x8
    }
}

// [0x00579100] sub_00579100 (387 bytes)
extern "C" void ext_005764F0();
extern "C" void ext_00577760();
extern "C" void ext_005778A0();
extern "C" void ext_00577B80();
extern "C" void ext_005788D0();
extern "C" void ext_005AE480();
extern "C" void ext_0063EFE0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00579100(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8a57ab
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 54h
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 414h]
        lea ecx, [eax + 4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 84h]
        push edi
        call edx
        push 0xb3d570
        lea ecx, [esp + 48h]
        call dword ptr [mem_00924FE0]
        push 0xb3d58c
        lea ecx, [esp + 2Ch]
        mov dword ptr [esp + 6Ch], 0
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esi + 414h]
        lea ecx, [eax + 4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 5Ch]
        lea edx, [esp + 44h]
        push edx
        mov byte ptr [esp + 6Ch], 1
        call eax
        mov eax, dword ptr [esi + 414h]
        mov edx, dword ptr [eax + 4]
        mov edx, dword ptr [edx + 60h]
        lea ecx, [eax + 4]
        lea eax, [esp + 28h]
        push eax
        call edx
        mov eax, dword ptr [esi + 27Ch]
        mov edx, dword ptr [eax + 84h]
        lea ecx, [esi + 27Ch]
        call edx
        mov eax, dword ptr [esi + 494h]
        mov ecx, dword ptr [eax + 4]
        lea edi, [esi + 490h]
        push ecx
        mov ecx, edi
        call ext_005AE480
        mov eax, dword ptr [edi + 4]
        mov ebp, dword ptr [esp + 70h]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [edi + 8], 0
        mov dword ptr [eax], eax
        mov edi, dword ptr [edi + 4]
        push ebp
        mov ecx, esi
        mov dword ptr [edi + 8], edi
        call ext_00577B80
        mov edi, dword ptr [esi + 414h]
        add edi, 160h
        je skip_a
        push 0x928b5d
        lea ecx, [esp + 10h]
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 5Ch]
        lea eax, [esp + 0Ch]
        push eax
        mov ecx, edi
        mov byte ptr [esp + 6Ch], 2
        call edx
        lea ecx, [esp + 0Ch]
        mov byte ptr [esp + 68h], 1
        call dword ptr [mem_00924FF4]
    skip_a:
        push ebp
        mov ecx, esi
        call ext_00577760
        mov ebp, eax
        test ebp, ebp
        je skip_b
        push ebp
        push edi
        mov ecx, esi
        call ext_005764F0
        mov ecx, 0xb3d27c
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebp
        call ext_0063EFE0
        push ebp
        push edi
        mov ecx, esi
        call ext_005778A0
        mov ecx, esi
        call ext_005788D0
    skip_b:
        lea ecx, [esp + 28h]
        mov byte ptr [esp + 68h], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 44h]
        mov dword ptr [esp + 68h], 0FFFFFFFFh
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 60h]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 60h
        ret 4
    }
}

// [0x00573740] sub_00573740 (396 bytes)
extern "C" void ext_0040ECB0();
extern "C" int mem_00924FE8;
extern "C" int mem_009250A8;
extern "C" int mem_00925134;
extern "C" int mem_009250AC;
extern "C" int mem_00924E44;
extern "C" int mem_009250B0;
extern "C" int mem_00924EA8;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00573740(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push 0FFFFFFFFh
        push 008B56F9h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 2Ch
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, [esp+20h]
        call dword ptr [mem_00924FE8]
        mov ebp, dword ptr [esp+4Ch]
        lea eax, [esp+10h]
        push eax
        mov ecx, ebp
        mov dword ptr [esp+48h], 0
        call dword ptr [mem_009250A8]
        mov ebx, dword ptr [esp+50h]
        mov edi, dword ptr [mem_00925134]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loop_head:
        lea ecx, [esp+18h]
        push ecx
        mov ecx, ebp
        call dword ptr [mem_009250AC]
        mov ecx, dword ptr [esp+10h]
        cmp ecx, -2
        mov esi, eax
        je chk_a
        test ecx, ecx
        je call_a
        cmp ecx, dword ptr [esi]
        je chk_a
call_a:
        call edi
        mov ecx, dword ptr [esp+10h]
chk_a:
        mov edx, dword ptr [esp+14h]
        cmp edx, dword ptr [esi+4]
        je finish
        cmp ecx, -2
        je chk_b
        test ecx, ecx
        jne call_b
        call edi
        mov ecx, dword ptr [esp+10h]
call_b:
        call dword ptr [mem_00924E44]
        mov ecx, dword ptr [esp+10h]
        add eax, dword ptr [ecx+14h]
        cmp dword ptr [esp+14h], eax
        jb chk_b
        call edi
        mov ecx, dword ptr [esp+10h]
chk_b:
        mov eax, dword ptr [esp+14h]
        cmp byte ptr [eax], 2Fh
        je slash
        cmp ecx, -2
        je chk_c
        test ecx, ecx
        jne call_c
        call edi
        mov ecx, dword ptr [esp+10h]
call_c:
        call dword ptr [mem_00924E44]
        mov ecx, dword ptr [esp+10h]
        add eax, dword ptr [ecx+14h]
        cmp dword ptr [esp+14h], eax
        jb chk_c
        call edi
chk_c:
        mov edx, dword ptr [esp+14h]
        movzx eax, byte ptr [edx]
        push eax
        lea ecx, [esp+24h]
        call dword ptr [mem_009250B0]
        jmp after_slash
slash:
        lea ecx, [esp+20h]
        push ecx
        mov ecx, ebx
        call ext_0040ECB0
        lea ecx, [esp+20h]
        call dword ptr [mem_00924EA8]
after_slash:
        mov ecx, dword ptr [esp+10h]
        cmp ecx, -2
        je inc_it
        test ecx, ecx
        jne call_d
        call edi
        mov ecx, dword ptr [esp+10h]
call_d:
        call dword ptr [mem_00924E44]
        mov edx, dword ptr [esp+10h]
        add eax, dword ptr [edx+14h]
        cmp dword ptr [esp+14h], eax
        jb inc_it
        call edi
inc_it:
        add dword ptr [esp+14h], 1
        jmp loop_head
finish:
        lea eax, [esp+20h]
        push eax
        mov ecx, ebx
        call ext_0040ECB0
        mov eax, dword ptr [ebx+4]
        test eax, eax
        jne nonempty
        xor esi, esi
        jmp dtor
nonempty:
        mov ecx, dword ptr [ebx+8]
        sub ecx, eax
        mov eax, 92492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov esi, edx
        shr esi, 1Fh
        add esi, edx
dtor:
        lea ecx, [esp+20h]
        mov dword ptr [esp+44h], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp+3Ch]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 38h
        ret 8
    }
}

// [0x00577060] sub_00577060 (398 bytes)
extern "C" void ext_00427A60();
extern "C" void ext_0063EFE0();
extern "C" void ext_00577060();
extern "C" int mem_00B3D27C;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00577060(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x38
        mov     dword ptr [esp], ecx
        push    ebx
        mov     ecx, offset mem_00B3D27C
        call    dword ptr [mem_00924FF0]
        mov     ebx, dword ptr [esp + 0x4c]
        push    eax
        mov     ecx, ebx
        call    ext_0063EFE0
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x8]
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, eax
        call    edx
        mov     eax, dword ptr [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     dword ptr [esp + 0x4c], 0x0
        call    dword ptr [mem_00924FC4]
        add     esp, 0x8
        test    al, al
        je      loop_577060_else
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x44], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     eax, ebx
        pop     ebx
        mov     ecx, dword ptr [esp + 0x38]
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x44
        ret     0x8
    loop_577060_else:
        add     ebx, 0x24
        push    esi
        mov     esi, dword ptr [ebx + 0x4]
        cmp     esi, dword ptr [ebx + 0x8]
        push    edi
        mov     edi, dword ptr [mem_00925134]
        jbe     loop_577060_a
        call    edi
    loop_577060_a:
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], esi
        call    ext_00427A60
        push    ebp
    loop_577060_top:
        mov     esi, dword ptr [ebx + 0x8]
        cmp     dword ptr [ebx + 0x4], esi
        jbe     loop_577060_b
        call    edi
    loop_577060_b:
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x28], esi
        call    ext_00427A60
        mov     ebp, dword ptr [esp + 0x18]
        test    ebp, ebp
        je      loop_577060_c
        cmp     ebp, dword ptr [esp + 0x24]
        je      loop_577060_d
    loop_577060_c:
        call    edi
    loop_577060_d:
        mov     edi, dword ptr [esp + 0x1c]
        cmp     edi, dword ptr [esp + 0x28]
        jae     loop_577060_end
        test    ebp, ebp
        jne     loop_577060_e
        call    dword ptr [mem_00925134]
    loop_577060_e:
        cmp     edi, dword ptr [ebp + 0x8]
        jb      loop_577060_f
        call    dword ptr [mem_00925134]
    loop_577060_f:
        mov     edx, dword ptr [esp + 0x5c]
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [esp + 0x10]
        push    edx
        push    eax
        call    ext_00577060
        mov     esi, eax
        test    esi, esi
        jne     loop_577060_found
        cmp     edi, dword ptr [ebp + 0x8]
        jb      loop_577060_g
        call    dword ptr [mem_00925134]
    loop_577060_g:
        add     edi, 0x4
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x1c], edi
        call    ext_00427A60
        mov     edi, dword ptr [mem_00925134]
        jmp     loop_577060_top
    loop_577060_found:
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x50], 0xffffffff
        call    dword ptr [mem_00924FF4]
        pop     ebp
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [esp + 0x38]
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x44
        ret     0x8
    loop_577060_end:
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x50], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x48]
        pop     ebp
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x44
        ret     0x8
    }
}

// [0x00577E40] sub_00577E40 (473 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_0041A160();
extern "C" void ext_00576240();
extern "C" void ext_00577AE0();
extern "C" void ext_0065D540();
extern "C" int mem_00925114;
extern "C" int mem_00925108;
extern "C" int mem_00925124;
extern "C" __declspec(naked) void __fastcall fn_00577E40(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov cl, byte ptr [eax]
        mov byte ptr [esp + 0x20], cl
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        jne L_00577E5B
        xor ebp, ebp
        jmp L_00577E62
    L_00577E5B:
        mov eax, dword ptr [esi + 0xc]
        sub eax, ecx
        mov ebp, eax
    L_00577E62:
        mov ebx, dword ptr [esp + 0x1c]
        test ebx, ebx
        je L_00578012
        mov ecx, esi
        call dword ptr [mem_00925114]
        mov edx, dword ptr [esi + 0x4]
        test edx, edx
        jne L_00577E81
        xor ecx, ecx
        jmp L_00577E86
    L_00577E81:
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, edx
    L_00577E86:
        sub eax, ecx
        cmp eax, ebx
        jae L_00577E91
        call ext_00405FB0
    L_00577E91:
        test edx, edx
        jne L_00577E99
        xor eax, eax
        jmp L_00577E9E
    L_00577E99:
        mov eax, dword ptr [esi + 0x8]
        sub eax, edx
    L_00577E9E:
        add eax, ebx
        cmp ebp, eax
        push edi
        jae L_00577F8C
        mov edi, ebp
        mov ecx, esi
        __asm _emit 0xD1
        __asm _emit 0xEF
        call dword ptr [mem_00925114]
        sub eax, edi
        cmp eax, ebp
        jae L_00577EC9
        mov dword ptr [esp + 0x10], 0x0
        mov ebp, dword ptr [esp + 0x10]
        jmp L_00577ECF
    L_00577EC9:
        add ebp, edi
        mov dword ptr [esp + 0x10], ebp
    L_00577ECF:
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        jne L_00577EDA
        xor eax, eax
        jmp L_00577EDF
    L_00577EDA:
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
    L_00577EDF:
        add eax, ebx
        cmp ebp, eax
        jae L_00577EFA
        test ecx, ecx
        jne L_00577EED
        xor eax, eax
        jmp L_00577EF2
    L_00577EED:
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
    L_00577EF2:
        add eax, ebx
        mov dword ptr [esp + 0x10], eax
        mov ebp, eax
    L_00577EFA:
        push ebp
        mov ecx, esi
        call dword ptr [mem_00925108]
        mov ebp, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esi + 0x4]
        mov edi, eax
        mov eax, ebp
        sub eax, ecx
        lea edx, [eax + edi]
        mov dword ptr [esp + 0x20], edx
        je L_00577F26
        push eax
        push ecx
        push eax
        push edi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L_00577F26:
        mov ecx, dword ptr [esp + 0x20]
        lea eax, [esp + 0x24]
        push eax
        push ebx
        push ecx
        mov ecx, esi
        call ext_00577AE0
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, ebp
        je L_00577F4C
        push ecx
        push ebp
        push ecx
        push eax
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L_00577F4C:
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        jne L_00577F57
        xor ecx, ecx
        jmp L_00577F5C
    L_00577F57:
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
    L_00577F5C:
        add ebx, ecx
        test eax, eax
        je L_00577F71
        mov edx, dword ptr [esi + 0xc]
        sub edx, eax
        push edx
        push eax
        mov ecx, esi
        call dword ptr [mem_00925124]
    L_00577F71:
        mov eax, dword ptr [esp + 0x10]
        lea edx, [edi + ebx]
        lea ecx, [edi + eax]
        mov dword ptr [esi + 0x4], edi
        pop edi
        mov dword ptr [esi + 0xc], ecx
        mov dword ptr [esi + 0x8], edx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
    L_00577F8C:
        mov ebp, dword ptr [esi + 0x8]
        mov edi, dword ptr [esp + 0x1c]
        mov eax, ebp
        sub eax, edi
        cmp eax, ebx
        jae L_00577FDE
        lea ecx, [edi + ebx]
        push ecx
        push ebp
        push edi
        mov ecx, esi
        call ext_0065D540
        mov eax, dword ptr [esi + 0x8]
        mov ecx, edi
        sub ecx, eax
        lea edx, [esp + 0x24]
        push edx
        add ecx, ebx
        push ecx
        push eax
        mov ecx, esi
        call ext_00577AE0
        add dword ptr [esi + 0x8], ebx
        mov esi, dword ptr [esi + 0x8]
        lea edx, [esp + 0x24]
        push edx
        sub esi, ebx
        push esi
        push edi
        call ext_00576240
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
    L_00577FDE:
        push ebp
        mov eax, ebp
        sub eax, ebx
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x2c], eax
        call ext_0065D540
        mov dword ptr [esi + 0x8], eax
        mov eax, dword ptr [esp + 0x20]
        push ebp
        push eax
        push edi
        call ext_0041A160
        lea ecx, [esp + 0x30]
        push ecx
        lea edx, [edi + ebx]
        push edx
        push edi
        call ext_00576240
        add esp, 0x18
        pop edi
    L_00578012:
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
    }
}

// [0x00578CB0] sub_00578CB0 (481 bytes)
extern "C" void ext_0040ECB0();
extern "C" int mem_00924FE4;
extern "C" int mem_00925098;
extern "C" int mem_00924EC4;
extern "C" int mem_0092507C;
extern "C" int mem_00925080;
extern "C" int mem_00925120;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void __fastcall fn_00578CB0(void* self) {
    __asm {
        push    -1
        push    0x8a6bc4
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        mov     eax, dword ptr [esp + 0x48]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_00924FE4]
        push    0
        push    0x92b4a8
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x58], 0
        call    dword ptr [mem_00925098]
        mov     ecx, dword ptr [mem_00924EC4]
        mov     esi, eax
        cmp     esi, dword ptr [ecx]
        jne     loc_578D37
        push    0x92b4a8
        push    0
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_0092507C]
        push    0xb3d570
        push    0
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_00925080]
        push    0
        push    0x92b4a8
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_00925098]
        mov     esi, eax
    loc_578D37:
        push    esi
        push    0
        lea     edx, [esp + 0x34]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00925120]
        mov     ebp, dword ptr [esp + 0x5c]
        push    eax
        mov     ecx, ebp
        mov     byte ptr [esp + 0x54], 1
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x50], 0
        call    dword ptr [mem_00924FF4]
        add     esi, 1
        push    esi
        push    0x92ab78
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_00925098]
        mov     edi, eax
        sub     eax, esi
        push    eax
        push    esi
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00925120]
        push    eax
        lea     ecx, [ebp + 0x1c]
        mov     byte ptr [esp + 0x54], 2
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x50], 0
        call    dword ptr [mem_00924FF4]
        mov     edx, dword ptr [mem_00924EC4]
        mov     eax, dword ptr [edx]
        push    eax
        add     edi, 1
        push    edi
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00925120]
        push    eax
        lea     ecx, [ebp + 0x38]
        mov     byte ptr [esp + 0x54], 3
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x50], 0
        call    dword ptr [mem_00924FF4]
        mov     edi, dword ptr [ebx + 0x490]
        cmp     edi, dword ptr [ebx + 0x494]
        lea     esi, [ebx + 0x48c]
        mov     byte ptr [esp + 0x58], 0
        jbe     loc_578E10
        call    dword ptr [mem_00925134]
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    loc_578E10:
        mov     ebx, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], ebx
        jbe     loc_578E1E
        call    dword ptr [mem_00925134]
    loc_578E1E:
        cmp     esi, esi
        je      loc_578E28
        call    dword ptr [mem_00925134]
    loc_578E28:
        cmp     edi, ebx
        jae     loc_578E5B
        cmp     edi, dword ptr [esi + 8]
        jb      loc_578E37
        call    dword ptr [mem_00925134]
    loc_578E37:
        push    ebp
        push    edi
        call    dword ptr [mem_00924FC4]
        add     esp, 8
        test    al, al
        je      loc_578E4B
        mov     byte ptr [esp + 0x58], 1
    loc_578E4B:
        cmp     edi, dword ptr [esi + 8]
        jb      loc_578E56
        call    dword ptr [mem_00925134]
    loc_578E56:
        add     edi, 0x1c
        jmp     loc_578E10
    loc_578E5B:
        cmp     byte ptr [esp + 0x58], 0
        jne     loc_578E6A
        push    ebp
        mov     ecx, esi
        call    ext_0040ECB0
    loc_578E6A:
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x50], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret     8
    }
}

// [0x00572890] sub_00572890 (508 bytes)
extern "C" void ext_0046FF90();
extern "C" void ext_004EF730();
extern "C" void ext_00572720();
extern "C" void ext_006A6DD2();
extern "C" int mem_0088F4C2;
extern "C" int mem_0092C530;
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00928ECC;
extern "C" int mem_00928ED8;
extern "C" int mem_009CDF20;
extern "C" __declspec(naked) void __fastcall fn_00572890(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0088F4C2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x8], 0x5d1745c
        jb L_0057290d
        push offset mem_0092C530
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x50], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x54], 0x1
        mov dword ptr [esp + 0x24], offset mem_00928ECC
        call dword ptr [mem_00924FE0]
        push offset mem_009CDF20
        lea ecx, [esp + 0x24]
        push ecx
        mov byte ptr [esp + 0x58], 0x0
        mov dword ptr [esp + 0x28], offset mem_00928ED8
        call ext_006A6DD2
    L_0057290d:
        mov edx, dword ptr [esp + 0x64]
        mov eax, dword ptr [edi + 0x4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x6c]
        push 0x0
        push edx
        push eax
        push esi
        push eax
        call ext_00572720
        mov ebp, eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, 0x1
        add dword ptr [edi + 0x8], ebx
        cmp esi, eax
        jne L_00572947
        mov dword ptr [eax + 0x4], ebp
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], ebp
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x8], ebp
        jmp L_00572969
    L_00572947:
        cmp byte ptr [esp + 0x68], 0x0
        je L_0057295b
        mov dword ptr [esi], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        jne L_00572969
        mov dword ptr [eax], ebp
        jmp L_00572969
    L_0057295b:
        mov dword ptr [esi + 0x8], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax + 0x8]
        jne L_00572969
        mov dword ptr [eax + 0x8], ebp
    L_00572969:
        mov edx, dword ptr [ebp + 0x4]
        cmp byte ptr [edx + 0x38], 0x0
        lea eax, [ebp + 0x4]
        mov esi, ebp
        jne L_00572a65
        jmp L_00572980
        __emit 0x8d
        __emit 0x49
        __emit 0x00
    L_00572980:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        cmp ecx, dword ptr [edx]
        jne L_005729da
        mov edx, dword ptr [edx + 0x8]
        cmp byte ptr [edx + 0x38], 0x0
        jne L_005729ab
        mov byte ptr [ecx + 0x38], bl
        mov byte ptr [edx + 0x38], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x38], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_00572a55
    L_005729ab:
        cmp esi, dword ptr [ecx + 0x8]
        jne L_005729ba
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_0046FF90
    L_005729ba:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x38], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x38], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, edi
        call ext_004EF730
        jmp L_00572a55
    L_005729da:
        mov edx, dword ptr [edx]
        cmp byte ptr [edx + 0x38], 0x0
        jne L_005729f8
        mov byte ptr [ecx + 0x38], bl
        mov byte ptr [edx + 0x38], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x38], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_00572a55
    L_005729f8:
        cmp esi, dword ptr [ecx]
        jne L_00572a06
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_004EF730
    L_00572a06:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x38], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x38], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + 0x39], 0x0
        jne L_00572a2f
        mov dword ptr [edx + 0x4], eax
    L_00572a2f:
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edx + 0x4]
        jne L_00572a42
        mov dword ptr [edx + 0x4], ecx
        jmp L_00572a50
    L_00572a42:
        mov edx, dword ptr [eax + 0x4]
        cmp eax, dword ptr [edx]
        jne L_00572a4d
        mov dword ptr [edx], ecx
        jmp L_00572a50
    L_00572a4d:
        mov dword ptr [edx + 0x8], ecx
    L_00572a50:
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x4], ecx
    L_00572a55:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x38], 0x0
        lea eax, [esi + 0x4]
        je L_00572980
    L_00572a65:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [esp + 0x54]
        mov byte ptr [eax + 0x38], bl
        mov eax, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        mov dword ptr [eax], edi
        pop ebx
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret 0x10
    }
}

// [0x00576B50] sub_00576B50 (508 bytes)
extern "C" void ext_00476EC0();
extern "C" void ext_005554B0();
extern "C" void ext_006244E0();
extern "C" void ext_006A6DD2();
extern "C" int mem_0088F4C2;
extern "C" int mem_0092C530;
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00928ECC;
extern "C" int mem_00928ED8;
extern "C" int mem_009CDF20;
extern "C" __declspec(naked) void __fastcall fn_00576B50(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0088F4C2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x8], 0x7fffffe
        jb L_00576bcd
        push offset mem_0092C530
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x50], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x54], 0x1
        mov dword ptr [esp + 0x24], offset mem_00928ECC
        call dword ptr [mem_00924FE0]
        push offset mem_009CDF20
        lea ecx, [esp + 0x24]
        push ecx
        mov byte ptr [esp + 0x58], 0x0
        mov dword ptr [esp + 0x28], offset mem_00928ED8
        call ext_006A6DD2
    L_00576bcd:
        mov edx, dword ptr [esp + 0x64]
        mov eax, dword ptr [edi + 0x4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x6c]
        push 0x0
        push edx
        push eax
        push esi
        push eax
        call ext_005554B0
        mov ebp, eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, 0x1
        add dword ptr [edi + 0x8], ebx
        cmp esi, eax
        jne L_00576c07
        mov dword ptr [eax + 0x4], ebp
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], ebp
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x8], ebp
        jmp L_00576c29
    L_00576c07:
        cmp byte ptr [esp + 0x68], 0x0
        je L_00576c1b
        mov dword ptr [esi], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        jne L_00576c29
        mov dword ptr [eax], ebp
        jmp L_00576c29
    L_00576c1b:
        mov dword ptr [esi + 0x8], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax + 0x8]
        jne L_00576c29
        mov dword ptr [eax + 0x8], ebp
    L_00576c29:
        mov edx, dword ptr [ebp + 0x4]
        cmp byte ptr [edx + 0x2c], 0x0
        lea eax, [ebp + 0x4]
        mov esi, ebp
        jne L_00576d25
        jmp L_00576c40
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_00576c40:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        cmp ecx, dword ptr [edx]
        jne L_00576c9a
        mov edx, dword ptr [edx + 0x8]
        cmp byte ptr [edx + 0x2c], 0x0
        jne L_00576c6b
        mov byte ptr [ecx + 0x2c], bl
        mov byte ptr [edx + 0x2c], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x2c], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_00576d15
    L_00576c6b:
        cmp esi, dword ptr [ecx + 0x8]
        jne L_00576c7a
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_00476EC0
    L_00576c7a:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x2c], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x2c], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, edi
        call ext_006244E0
        jmp L_00576d15
    L_00576c9a:
        mov edx, dword ptr [edx]
        cmp byte ptr [edx + 0x2c], 0x0
        jne L_00576cb8
        mov byte ptr [ecx + 0x2c], bl
        mov byte ptr [edx + 0x2c], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x2c], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_00576d15
    L_00576cb8:
        cmp esi, dword ptr [ecx]
        jne L_00576cc6
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_006244E0
    L_00576cc6:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x2c], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x2c], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + 0x2d], 0x0
        jne L_00576cef
        mov dword ptr [edx + 0x4], eax
    L_00576cef:
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edx + 0x4]
        jne L_00576d02
        mov dword ptr [edx + 0x4], ecx
        jmp L_00576d10
    L_00576d02:
        mov edx, dword ptr [eax + 0x4]
        cmp eax, dword ptr [edx]
        jne L_00576d0d
        mov dword ptr [edx], ecx
        jmp L_00576d10
    L_00576d0d:
        mov dword ptr [edx + 0x8], ecx
    L_00576d10:
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x4], ecx
    L_00576d15:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x2c], 0x0
        lea eax, [esi + 0x4]
        je L_00576c40
    L_00576d25:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [esp + 0x54]
        mov byte ptr [eax + 0x2c], bl
        mov eax, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        mov dword ptr [eax], edi
        pop ebx
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret 0x10
    }
}

extern "C" void ext_00570380();
extern "C" void ext_00570700();
extern "C" void ext_00570BB0();
extern "C" void ext_00665010();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_009250EC;
extern "C" int mem_009250DC;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FC8;
extern "C" int mem_00924FDC;
extern "C" int mem_00A9F608;

// [0x00571970] sub_00571970 (531 bytes)
extern "C" __declspec(naked) void __fastcall fn_00571970(void* self) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, fs:[0x0]
        push eax
        mov fs:[0x0], esp
        sub esp, 0x1c
        push ebx
        push ebp
        mov ebp, ecx
        push 0x95963c
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        mov ebx, dword ptr [esp + 0x34]
        push ebx
        lea eax, [esp + 0xc]
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x34], 0x0
        call ext_00570700
        test al, al
        lea ecx, [esp + 0x8]
        sete byte ptr [esp + 0x34]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esp + 0x34], 0x0
        je L_5719e9
        pop ebp
        xor al, al
        pop ebx
        mov ecx, dword ptr [esp + 0x1c]
        mov fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    L_5719e9:
        push esi
        push edi
        mov edi, dword ptr [mem_009250EC]
        lea esi, [ebp + 0x46c]
        push esi
        push ebx
        call edi
        mov eax, dword ptr [ebp + 0x414]
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [edx + 0x5c]
        add esp, 0x8
        push esi
        call eax
        push esi
        push ebx
        call edi
        mov ecx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0x4]
        add esp, 0x8
        add ecx, eax
        call dword ptr [mem_009250DC]
        test eax, eax
        je L_571b07
        mov edi, dword ptr [mem_00924FC0]
    L_571a32:
        push 0x9594a0
        push esi
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je L_571b07
        push 0x959634
        push esi
        call edi
        add esp, 0x8
        test al, al
        je L_571ac1
        push esi
        push ebx
        call dword ptr [mem_009250EC]
        push esi
        call ext_00665010
        add esp, 0xc
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FDC]
        push 0x95962c
        push esi
        call edi
        add esp, 0x8
        test al, al
        je L_571a8d
        mov dword ptr [ebp + 0x84], 0x0
        jmp L_571ac1
    L_571a8d:
        push 0x959624
        push esi
        call edi
        add esp, 0x8
        test al, al
        je L_571aa8
        mov dword ptr [ebp + 0x84], 0x1
        jmp L_571ac1
    L_571aa8:
        push 0x959618
        push esi
        call edi
        add esp, 0x8
        test al, al
        je L_571ac1
        mov dword ptr [ebp + 0x84], 0x2
    L_571ac1:
        push 0x95960c
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne L_571ae7
        push 0x92f148
        push esi
        call edi
        add esp, 0x8
        test al, al
        je L_571ae7
        push ebx
        mov ecx, ebp
        call ext_00570380
    L_571ae7:
        push esi
        push ebx
        call dword ptr [mem_009250EC]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        add esp, 0x8
        add ecx, eax
        call dword ptr [mem_009250DC]
        test eax, eax
        jne L_571a32
    L_571b07:
        mov eax, dword ptr [mem_00A9F608]
        mov edi, dword ptr [mem_00924FC8]
        push eax
        push esi
        call edi
        add esp, 0x8
        test al, al
        je L_571b4d
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_571b20:
        mov ecx, dword ptr [ebp + 0x424]
        test ecx, ecx
        je L_571b30
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
    L_571b30:
        push ebx
        mov ecx, ebp
        call ext_00570BB0
        test al, al
        je L_571b6c
        mov ecx, dword ptr [mem_00A9F608]
        push ecx
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne L_571b20
    L_571b4d:
        push ebx
        mov ecx, ebp
        call ext_00570380
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        mov ecx, dword ptr [esp + 0x1c]
        mov fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    L_571b6c:
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x00577B80] sub_00577B80 (595 bytes)
extern "C" void ext_00427A60();
extern "C" void ext_005779A0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF0;
extern "C" int mem_009251F0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00577B80(void* self, void* edx_unused, void* arg0) {
    __asm {
        push -1
        push 0x8b2ae2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x74
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x94]
        mov esi, dword ptr [edi + 0x28]
        add edi, 0x24
        cmp esi, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x18], edi
        jbe loc_577bbc
        call dword ptr [mem_00925134]
    loc_577bbc:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], esi
        call ext_00427A60
        xor ebx, ebx
    loc_577bd3:
        mov esi, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], esi
        jbe loc_577be1
        call dword ptr [mem_00925134]
    loc_577be1:
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x34], edi
        mov dword ptr [esp + 0x38], edi
        mov dword ptr [esp + 0x3c], esi
        call ext_00427A60
        mov ebp, dword ptr [esp + 0x20]
        cmp ebp, ebx
        je loc_577c04
        cmp ebp, dword ptr [esp + 0x38]
        je loc_577c0a
    loc_577c04:
        call dword ptr [mem_00925134]
    loc_577c0a:
        mov esi, dword ptr [esp + 0x24]
        cmp esi, dword ptr [esp + 0x3c]
        jae loc_577db8
        cmp ebp, ebx
        jne loc_577c22
        call dword ptr [mem_00925134]
    loc_577c22:
        cmp esi, dword ptr [ebp + 0x8]
        jb loc_577c2d
        call dword ptr [mem_00925134]
    loc_577c2d:
        mov esi, dword ptr [esi]
        lea eax, [esi + 0x4]
        push 0xb3d04c
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 8
        test al, al
        je loc_577d96
        mov edi, dword ptr [esi + 0x28]
        add esi, 0x24
        cmp edi, dword ptr [esi + 0x8]
        jbe loc_577c5a
        call dword ptr [mem_00925134]
    loc_577c5a:
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x28], esi
        mov dword ptr [esp + 0x2c], esi
        mov dword ptr [esp + 0x30], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe loc_577c7d
        call dword ptr [mem_00925134]
    loc_577c7d:
        mov dword ptr [esp + 0x40], esi
        mov dword ptr [esp + 0x44], esi
        mov dword ptr [esp + 0x48], edi
        lea ecx, [esp + 0x40]
    loc_577c8d:
        call ext_00427A60
        mov ebp, dword ptr [esp + 0x2c]
        cmp ebp, ebx
        je loc_577ca0
        cmp ebp, dword ptr [esp + 0x44]
        je loc_577ca6
    loc_577ca0:
        call dword ptr [mem_00925134]
    loc_577ca6:
        mov edi, dword ptr [esp + 0x30]
        cmp edi, dword ptr [esp + 0x48]
        jae loc_577d8e
        cmp ebp, ebx
        jne loc_577cbe
        call dword ptr [mem_00925134]
    loc_577cbe:
        cmp edi, dword ptr [ebp + 0x8]
        jb loc_577cc9
        call dword ptr [mem_00925134]
    loc_577cc9:
        mov esi, dword ptr [edi]
        mov ecx, 0xb3d27c
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x68]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, 0xb3d474
        mov dword ptr [esp + 0x8c], ebx
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x4c]
        push ecx
        mov ecx, eax
        call edx
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x8c], 1
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0x14]
        add esp, 4
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x6c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        add ecx, 0x48c
        call ext_005779A0
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x8c], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0x8c], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp edi, dword ptr [ebp + 0x8]
        jb loc_577d7e
        call dword ptr [mem_00925134]
    loc_577d7e:
        add edi, 4
        mov dword ptr [esp + 0x30], edi
        lea ecx, [esp + 0x28]
        jmp loc_577c8d
    loc_577d8e:
        mov ebp, dword ptr [esp + 0x20]
        mov edi, dword ptr [esp + 0x18]
    loc_577d96:
        mov edx, dword ptr [esp + 0x24]
        cmp edx, dword ptr [ebp + 0x8]
        jb loc_577da5
        call dword ptr [mem_00925134]
    loc_577da5:
        add dword ptr [esp + 0x24], 4
        lea ecx, [esp + 0x1c]
        call ext_00427A60
        jmp loc_577bd3
    loc_577db8:
        mov ecx, dword ptr [esp + 0x84]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x80
        ret 4
    }
}

// [0x005798B0] sub_005798B0 (598 bytes)
extern "C" void ext_00574D30();
extern "C" void ext_00578CB0();
extern "C" void ext_005795D0();
extern "C" void ext_00663060();
extern "C" int mem_0092508C;
extern "C" int mem_00925090;
extern "C" int mem_00924FE8;
extern "C" int mem_00924EB0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void __fastcall fn_005798B0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 89de27h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 2A4h
        push esi
        mov esi, dword ptr [esp + 2B8h]
        push edi
        lea eax, [esp + 40h]
        mov edi, ecx
        push eax
        mov ecx, esi
        call dword ptr [mem_0092508C]
        push 2
        lea ecx, [esp + 1Ch]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00925090]
        cmp word ptr [esp + 18h], 1
        jge L_990E
        mov edx, dword ptr [esp + 2C0h]
        mov dword ptr [edx], 0
        mov al, 1
        jmp L_EPI
L_990E:
        push ebp
        push 2
        lea eax, [esp + 14h]
        push eax
        mov ecx, esi
        call dword ptr [mem_00925090]
        push 1
        lea ecx, [esp + 12h]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00925090]
        movsx edx, byte ptr [esp + 0Eh]
        push edx
        lea eax, [esp + 0B4h]
        push eax
        mov ecx, esi
        call dword ptr [mem_00925090]
        push 1
        lea ecx, [esp + 1Bh]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00925090]
        push 1
        lea edx, [esp + 27h]
        push edx
        mov ecx, esi
        call dword ptr [mem_00925090]
        push 4
        lea eax, [edi + 6B0h]
        push eax
        mov ecx, esi
        call dword ptr [mem_00925090]
        push 2
        lea ecx, [esp + 1Ch]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00925090]
        lea ecx, [esp + 28h]
        call dword ptr [mem_00924FE8]
        movsx edx, byte ptr [esp + 0Eh]
        sub edx, 1
        push edx
        lea eax, [esp + 0B4h]
        xor ebp, ebp
        push eax
        lea ecx, [esp + 30h]
        mov dword ptr [esp + 2C0h], ebp
        call dword ptr [mem_00924EB0]
        movsx ecx, word ptr [esp + 10h]
        mov dx, word ptr [esp + 18h]
        mov word ptr [edi + ecx*2 + 49Ch], dx
        cmp byte ptr [esp + 17h], 6
        movsx eax, word ptr [esp + 1Ch]
        mov ecx, dword ptr [esp + 2C4h]
        mov dword ptr [ecx], eax
        je L_99F2
        lea ecx, [esp + 28h]
        mov dword ptr [esp + 2B8h], -1
        call dword ptr [mem_00924FF4]
        mov al, 1
        jmp L_AEC
L_99F2:
        cmp word ptr [esp + 18h], bp
        mov dword ptr [esp + 24h], ebp
        jle L_AD5
        mov ebp, dword ptr [mem_00924FC4]
L_A07:
        lea edx, [esp + 44h]
        push edx
        mov ecx, esi
        call dword ptr [mem_0092508C]
        push 1
        lea eax, [esp + 13h]
        push eax
        mov ecx, esi
        call dword ptr [mem_00925090]
        movsx ecx, byte ptr [esp + 0Fh]
        push ecx
        lea edx, [esp + 1B4h]
        push edx
        mov ecx, esi
        call dword ptr [mem_00925090]
        lea eax, [esp + 28h]
        push 0B3D554h
        push eax
        call ebp
        add esp, 8
        test al, al
        je L_A9E
        lea ecx, [esp + 5Ch]
        call ext_00574D30
        lea ecx, [esp + 5Ch]
        push ecx
        lea edx, [esp + 1B4h]
        push edx
        mov ecx, edi
        mov byte ptr [esp + 2C0h], 1
        call ext_00578CB0
        lea eax, [esp + 5Ch]
        push eax
        lea ecx, [edi + 6A0h]
        call ext_005795D0
        mov cx, word ptr [esp + 10h]
        mov word ptr [edi + 69Ah], cx
        lea ecx, [esp + 5Ch]
        mov byte ptr [esp + 2B8h], 0
        call ext_00663060
L_A9E:
        lea edx, [esp + 28h]
        push 0B3D538h
        push edx
        call ebp
        add esp, 8
        test al, al
        je L_ABD
        mov ax, word ptr [esp + 10h]
        mov word ptr [edi + 69Ch], ax
L_ABD:
        mov eax, dword ptr [esp + 24h]
        movsx ecx, word ptr [esp + 18h]
        add eax, 1
        cmp eax, ecx
        mov dword ptr [esp + 24h], eax
        jl L_A07
L_AD5:
        lea ecx, [esp + 28h]
        mov dword ptr [esp + 2B8h], -1
        call dword ptr [mem_00924FF4]
        xor al, al
L_AEC:
        pop ebp
L_EPI:
        mov ecx, dword ptr [esp + 2ACh]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 2B0h
        ret 8
    }
}

// [0x005792B0] sub_005792B0 (622 bytes)
extern "C" void ext_005780C0();
extern "C" void ext_00584BD0();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924ED0;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005792B0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 089dda2h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 60h
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 4Ch]
        mov dword ptr [esp + 1Ch], esi
        call dword ptr [mem_00924FE8]
        xor ebx, ebx
        lea ecx, [esp + 30h]
        mov dword ptr [esp + 74h], ebx
        call dword ptr [mem_00924FE8]
        mov edi, dword ptr [ebp + 8]
        push 0928b5dh
        mov ecx, edi
        mov byte ptr [esp + 78h], 1
        call ext_00584BD0
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        mov ecx, edi
        je L_57931e
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 24h]
        call edx
        jmp L_579323
L_57931e:
        call ext_00584BD0
L_579323:
        push eax
        lea ecx, [esp + 50h]
        call dword ptr [mem_00924FDC]
        mov edi, dword ptr [ebp + 0Ch]
        mov eax, edi
        shl eax, 4
        lea esi, [eax + esi + 6E4h]
        mov dword ptr [esp + 14h], ebx
        jmp L_57934a
L_579343:
        mov edi, dword ptr [ebp + 0Ch]
        mov ebx, dword ptr [esp + 14h]
L_57934a:
        lea ecx, [esp + 4Ch]
        push ecx
        lea ecx, [esp + 34h]
        call dword ptr [mem_00924FDC]
        push 092ab78h
        lea ecx, [esp + 34h]
        call dword ptr [mem_00924ED0]
        test edi, edi
        jne L_579375
        lea edx, [ebx + 0B3D5A8h]
        push edx
        jmp L_579381
L_579375:
        cmp edi, 1
        jne L_57938b
        lea eax, [ebx + 0B3D650h]
        push eax
L_579381:
        lea ecx, [esp + 34h]
        call dword ptr [mem_00924FD8]
L_57938b:
        lea ecx, [esp + 30h]
        call dword ptr [mem_00924FF0]
        mov dl, byte ptr [esp + 44h]
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [esi + 4]
        add dl, 1
        test eax, eax
        mov byte ptr [esp + 13h], dl
        jne L_5793af
        xor edi, edi
        jmp L_5793b4
L_5793af:
        mov edi, dword ptr [esi + 8]
        sub edi, eax
L_5793b4:
        test eax, eax
        je L_5793ce
        mov ecx, dword ptr [esi + 0Ch]
        sub ecx, eax
        cmp edi, ecx
        jae L_5793ce
        mov eax, dword ptr [esi + 8]
        mov byte ptr [eax], dl
        add eax, 1
        mov dword ptr [esi + 8], eax
        jmp L_5793ee
L_5793ce:
        mov edi, dword ptr [esi + 8]
        cmp eax, edi
        jbe L_5793db
        call dword ptr [mem_00925134]
L_5793db:
        lea ecx, [esp + 13h]
        push ecx
        push edi
        push esi
        lea edx, [esp + 2Ch]
        push edx
        mov ecx, esi
        call ext_005780C0
L_5793ee:
        mov eax, dword ptr [esp + 44h]
        add eax, 1
        xor ebx, ebx
        test eax, eax
        jle L_579462
        jmp L_579400
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_579400:
        mov eax, dword ptr [esi + 4]
        test eax, eax
        jne L_57940b
        xor edx, edx
        jmp L_579410
L_57940b:
        mov edx, dword ptr [esi + 8]
        sub edx, eax
L_579410:
        test eax, eax
        je L_579431
        mov ecx, dword ptr [esi + 0Ch]
        sub ecx, eax
        cmp edx, ecx
        jae L_579431
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esp + 18h]
        mov dl, byte ptr [ebx + ecx]
        mov byte ptr [eax], dl
        add eax, 1
        mov dword ptr [esi + 8], eax
        jmp L_579454
L_579431:
        mov edi, dword ptr [esi + 8]
        cmp eax, edi
        jbe L_57943e
        call dword ptr [mem_00925134]
L_57943e:
        mov eax, dword ptr [esp + 18h]
        lea ecx, [ebx + eax]
        push ecx
        push edi
        push esi
        lea edx, [esp + 34h]
        push edx
        mov ecx, esi
        call ext_005780C0
L_579454:
        mov eax, dword ptr [esp + 44h]
        add ebx, 1
        add eax, 1
        cmp ebx, eax
        jl L_579400
L_579462:
        mov eax, dword ptr [ebp + 0Ch]
        mov ecx, dword ptr [esp + 1Ch]
        add word ptr [ecx + 2*eax + 49Ch], 1
        mov eax, dword ptr [esp + 14h]
        add eax, 1Ch
        cmp eax, 0A8h
        mov dword ptr [esp + 14h], eax
        jl L_579343
        mov edi, dword ptr [ebp + 8]
        mov esi, dword ptr [edi + 1D4h]
        cmp esi, dword ptr [edi + 1D8h]
        jbe L_5794a0
        call dword ptr [mem_00925134]
        nop
L_5794a0:
        mov ebx, dword ptr [edi + 1D8h]
        cmp dword ptr [edi + 1D4h], ebx
        jbe L_5794b4
        call dword ptr [mem_00925134]
L_5794b4:
        cmp esi, ebx
        jae L_5794e9
        cmp esi, dword ptr [edi + 1D8h]
        jb L_5794c6
        call dword ptr [mem_00925134]
L_5794c6:
        mov ecx, dword ptr [ebp + 0Ch]
        mov edx, dword ptr [esi]
        push ecx
        mov ecx, dword ptr [esp + 20h]
        push edx
        call fn_005792B0
        cmp esi, dword ptr [edi + 1D8h]
        jb L_5794e4
        call dword ptr [mem_00925134]
L_5794e4:
        add esi, 4
        jmp L_5794a0
L_5794e9:
        lea ecx, [esp + 30h]
        mov byte ptr [esp + 74h], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 4Ch]
        mov dword ptr [esp + 74h], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 6Ch]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}

extern "C" void ext_004803F0();
extern "C" void ext_00554DC0();
extern "C" void ext_00586D00();
extern "C" void ext_00594000();
extern "C" void ext_0067B7F0();
extern "C" void ext_0067DAD0();
extern "C" void ext_0067E650();
extern "C" void ext_0067E820();
extern "C" void ext_006948C0();
extern "C" void ext_006A7250();
extern "C" int mem_00957754;
extern "C" int mem_00993838;
extern "C" int mem_00925094;
extern "C" int mem_00925134;

// [0x00576870] sub_00576870 (723 bytes)
extern "C" __declspec(naked) void __fastcall fn_00576870(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -8
        sub     esp, 0BCh
        push    ebx
        mov     ebx, dword ptr [ebp + 10h]
        test    ebx, ebx
        push    esi
        push    edi
        mov     dword ptr [esp + 10h], ecx
        je      loc_576B3A
        fldz
        mov     ecx, dword ptr [ecx + 420h]
        mov     eax, dword ptr [ebx + 4]
        fst     dword ptr [esp + 1Ch]
        mov     edx, dword ptr [eax + 0Ch]
        fst     dword ptr [esp + 18h]
        add     ebx, 4
        fstp    dword ptr [esp + 14h]
        push    ecx
        mov     ecx, ebx
        call    edx
        fldz
        mov     esi, eax
        mov     ecx, 10h
        lea     edi, [esp + 78h]
        rep movsd
        fstp    dword ptr [esp + 20h]
        mov     edi, dword ptr [ebp + 10h]
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [eax + 70h]
        mov     ecx, edi
        call    edx
        test    al, al
        je      loc_576948
        call    ext_00594000
        mov     ecx, eax
        call    ext_00586D00
        mov     ecx, dword ptr [esp + 10h]
        mov     eax, dword ptr [ecx + 1DCh]
        mov     ecx, dword ptr [ecx + 420h]
        mov     edx, dword ptr [ebx]
        mov     edx, dword ptr [edx + 10h]
        push    ecx
        push    eax
        lea     eax, [esp + 40h]
        push    eax
        mov     ecx, ebx
        call    edx
        mov     ebx, dword ptr [esp + 10h]
        cmp     byte ptr [ebx + 180h], 0
        mov     ecx, 10h
        mov     esi, eax
        lea     edi, [esp + 78h]
        rep movsd
        jne     loc_576943
        lea     ecx, [esp + 38h]
        call    ext_004803F0
        fld     dword ptr [mem_00957754]
        push    ecx
        lea     ecx, [esp + 3Ch]
        fstp    dword ptr [esp]
        call    ext_0067E650
        lea     eax, [esp + 38h]
        push    eax
        lea     ecx, [esp + 7Ch]
        call    ext_0067E820
    loc_576943:
        mov     edi, dword ptr [ebp + 10h]
        jmp     loc_57694C
    loc_576948:
        mov     ebx, dword ptr [esp + 10h]
    loc_57694C:
        movsx   ecx, word ptr [ebx + 69Ch]
        cmp     dword ptr [ebp + 0Ch], ecx
        jne     loc_576965
        lea     edx, [ebp + 14h]
        push    edx
        lea     ecx, [esp + 7Ch]
        call    ext_0067E820
    loc_576965:
        fldz
        lea     eax, [esp + 38h]
        fst     dword ptr [esp + 40h]
        push    eax
        fst     dword ptr [esp + 40h]
        lea     ecx, [esp + 7Ch]
        fst     dword ptr [esp + 50h]
        fst     dword ptr [esp + 48h]
        fst     dword ptr [esp + 58h]
        fstp    dword ptr [esp + 54h]
        fld1
        fst     dword ptr [esp + 3Ch]
        fst     dword ptr [esp + 4Ch]
        fstp    dword ptr [esp + 5Ch]
        call    ext_0067DAD0
        lea     ecx, [esp + 20h]
        push    ecx
        lea     edx, [esp + 18h]
        push    edx
        lea     ecx, [esp + 40h]
        call    ext_006948C0
        fld     dword ptr [esp + 18h]
        fld     dword ptr [esp + 14h]
        fld     dword ptr [esp + 1Ch]
        fld     st(1)
        fmulp   st(2), st(0)
        fld     st(2)
        fmulp   st(3), st(0)
        fxch    st(1)
        faddp   st(2), st(0)
        fmul    st(0), st(0)
        faddp   st(1), st(0)
        call    ext_006A7250
        fstp    dword ptr [esp + 0Ch]
        fld     dword ptr [esp + 0Ch]
        fcomp   dword ptr [mem_00993838]
        fnstsw  ax
        test    ah, 44h
        jnp     loc_576A01
        lea     ecx, [esp + 14h]
        call    ext_0067B7F0
        fld     dword ptr [eax]
        fstp    dword ptr [esp + 14h]
        fld     dword ptr [eax + 4]
        fstp    dword ptr [esp + 18h]
        fld     dword ptr [eax + 8]
        fstp    dword ptr [esp + 1Ch]
    loc_576A01:
        xor     esi, esi
    loc_576A03:
        fld     dword ptr [esp + 20h]
        mov     ecx, dword ptr [ebp + 8]
        fmul    dword ptr [esp + esi*4 + 14h]
        push    8
        lea     eax, [esp + 34h]
        push    eax
        fstp    dword ptr [esp + 14h]
        fld     dword ptr [esp + 14h]
        fst     dword ptr [esp + esi*4 + 1Ch]
        fstp    qword ptr [esp + 38h]
        call    dword ptr [mem_00925094]
        add     esi, 1
        cmp     esi, 3
        jl      loc_576A03
        fld     dword ptr [esp + 0ACh]
        sub     esp, 0Ch
        fstp    dword ptr [esp + 34h]
        mov     eax, esp
        fld     dword ptr [esp + 0BCh]
        lea     ecx, [esp + 0C8h]
        fstp    dword ptr [esp + 38h]
        mov     dword ptr [esp + 18h], esp
        fld     dword ptr [esp + 0B4h]
        push    ecx
        fstp    dword ptr [eax]
        lea     ecx, [ebx + 16Ch]
        fld     dword ptr [esp + 38h]
        fstp    dword ptr [eax + 4]
        fld     dword ptr [esp + 3Ch]
        fstp    dword ptr [eax + 8]
        call    ext_00554DC0
        fld     dword ptr [eax]
        xor     esi, esi
        fstp    dword ptr [esp + 24h]
        fld     dword ptr [eax + 4]
        fstp    dword ptr [esp + 28h]
        fld     dword ptr [eax + 8]
        fstp    dword ptr [esp + 2Ch]
    loc_576A92:
        fld     dword ptr [esp + esi*4 + 24h]
        mov     ecx, dword ptr [ebp + 8]
        push    8
        fstp    qword ptr [esp + 34h]
        lea     edx, [esp + 34h]
        push    edx
        call    dword ptr [mem_00925094]
        add     esi, 1
        cmp     esi, 3
        jl      loc_576A92
        mov     ebx, dword ptr [edi + 1D4h]
        cmp     ebx, dword ptr [edi + 1D8h]
        jbe     loc_576AD0
        call    dword ptr [mem_00925134]
        jmp     loc_576AD0
        __emit  0x8d
        __emit  0xa4
        __emit  0x24
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        nop
    loc_576AD0:
        mov     eax, dword ptr [ebp + 10h]
        mov     esi, dword ptr [eax + 1D8h]
        cmp     dword ptr [eax + 1D4h], esi
        jbe     loc_576AE7
        call    dword ptr [mem_00925134]
    loc_576AE7:
        cmp     ebx, esi
        jae     loc_576B3A
        sub     esp, 40h
        mov     edi, esp
        mov     ecx, 10h
        lea     esi, [esp + 0B8h]
        rep movsd
        mov     esi, dword ptr [ebp + 10h]
        cmp     ebx, dword ptr [esi + 1D8h]
        mov     dword ptr [esp + 4Ch], esp
        jb      loc_576B13
        call    dword ptr [mem_00925134]
    loc_576B13:
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [ebp + 0Ch]
        mov     edx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 58h]
        push    edx
        call    fn_00576870
        cmp     ebx, dword ptr [esi + 1D8h]
        jb      loc_576B35
        call    dword ptr [mem_00925134]
    loc_576B35:
        add     ebx, 4
        jmp     loc_576AD0
    loc_576B3A:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4Ch
    }
}

// [0x0057EBB0] sub_0057EBB0 (744 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_005588C0();
extern "C" void ext_00558B90();
extern "C" void ext_005596D0();
extern "C" void ext_00559C50();
extern "C" void ext_0057E020();
extern "C" void ext_0057E7D0();
extern "C" void ext_0057E810();
extern "C" void ext_0057E840();
extern "C" void ext_00675DB0();
extern "C" void ext_00699810();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_0057EBB0(void* self, void* edx_unused, void* arg0, void* arg1, void* arg2, void* arg3) {
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    89E698h
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 3Ch
        mov     eax, [ebp + 14h]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        mov     [ebp - 10h], esp
        push    eax
        lea     ecx, [ebp - 48h]
        mov     [ebp - 18h], esi
        call    ext_005588C0
        mov     ebx, [esi + 4]
        xor     edi, edi
        cmp     ebx, edi
        mov     [ebp - 4], edi
        je      loc_57EC04
        mov     ecx, [esi + 0Ch]
        sub     ecx, ebx
        mov     eax, 2E8BA2E9h
        imul    ecx
        sar     edx, 3
        mov     edi, edx
        shr     edi, 1Fh
        add     edi, edx
    loc_57EC04:
        mov     ecx, [ebp + 10h]
        test    ecx, ecx
        je      loc_57EE76
        test    ebx, ebx
        jne     loc_57EC17
        xor     eax, eax
        jmp     loc_57EC2D
    loc_57EC17:
        mov     edx, [esi + 8]
        sub     edx, ebx
        mov     eax, 2E8BA2E9h
        imul    edx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 1Fh
        add     eax, edx
    loc_57EC2D:
        mov     edx, 5D1745Dh
        sub     edx, eax
        cmp     edx, ecx
        jae     loc_57EC3D
        call    ext_00405FB0
    loc_57EC3D:
        test    ebx, ebx
        jne     loc_57EC45
        xor     eax, eax
        jmp     loc_57EC5B
    loc_57EC45:
        mov     edx, [esi + 8]
        sub     edx, ebx
        mov     eax, 2E8BA2E9h
        imul    edx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 1Fh
        add     eax, edx
    loc_57EC5B:
        add     eax, ecx
        cmp     edi, eax
        jae     loc_57ED91
        mov     eax, edi
        shr     eax, 1
        mov     edx, 5D1745Dh
        sub     edx, eax
        cmp     edx, edi
        jae     loc_57EC78
        xor     edi, edi
        jmp     loc_57EC7A
    loc_57EC78:
        add     edi, eax
    loc_57EC7A:
        test    ebx, ebx
        jne     loc_57EC82
        xor     eax, eax
        jmp     loc_57EC98
    loc_57EC82:
        mov     edx, [esi + 8]
        sub     edx, ebx
        mov     eax, 2E8BA2E9h
        imul    edx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 1Fh
        add     eax, edx
    loc_57EC98:
        add     eax, ecx
        cmp     edi, eax
        jae     loc_57ECAA
        mov     ecx, esi
        call    ext_00675DB0
        mov     edi, eax
        add     edi, [ebp + 10h]
    loc_57ECAA:
        push    0
        push    edi
        call    ext_00699810
        mov     ebx, [ebp + 0Ch]
        mov     ecx, [esi + 4]
        mov     byte ptr [ebp - 1Ch], 0
        mov     edx, [ebp - 1Ch]
        push    edx
        mov     edx, [ebp + 10h]
        push    edx
        push    esi
        push    eax
        push    ebx
        push    ecx
        mov     [ebp - 14h], eax
        mov     [ebp + 14h], eax
        mov     byte ptr [ebp - 4], 1
        call    ext_005596D0
        mov     edx, [ebp + 10h]
        add     esp, 20h
        lea     ecx, [ebp - 48h]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        mov     [ebp + 14h], eax
        call    ext_0057E7D0
        mov     ecx, [esi + 8]
        mov     byte ptr [ebp + 0Ch], 0
        mov     edx, [ebp + 0Ch]
        push    edx
        mov     edx, [ebp + 10h]
        push    edx
        push    esi
        push    eax
        push    ecx
        push    ebx
        mov     [ebp + 14h], eax
        call    ext_005596D0
        mov     ebx, [esi + 4]
        xor     eax, eax
        add     esp, 18h
        cmp     ebx, eax
        mov     [ebp - 4], eax
        je      loc_57ED2D
        mov     ecx, [esi + 8]
        sub     ecx, ebx
        mov     eax, 2E8BA2E9h
        imul    ecx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 1Fh
        add     eax, edx
    loc_57ED2D:
        mov     ecx, [ebp + 10h]
        add     ecx, eax
        test    ebx, ebx
        mov     [ebp + 10h], ecx
        je      loc_57ED54
        mov     eax, [esi + 8]
        push    eax
        push    ebx
        mov     ecx, esi
        call    ext_00559C50
        mov     eax, [esi + 4]
        push    eax
        call    ext_006A5C5C
        mov     ecx, [ebp + 10h]
        add     esp, 4
    loc_57ED54:
        mov     eax, [ebp - 14h]
        imul    edi, edi, 2Ch
        imul    ecx, ecx, 2Ch
        add     edi, eax
        add     ecx, eax
        mov     [esi + 0Ch], edi
        mov     [esi + 8], ecx
        mov     [esi + 4], eax
        jmp     loc_57EE76
        mov     ecx, [ebp + 14h]
        mov     esi, [ebp - 14h]
        push    ecx
        mov     ecx, [ebp - 18h]
        push    esi
        call    ext_00559C50
        push    esi
        call    ext_006A5C5C
        add     esp, 4
        push    0
        push    0
        call    ext_006A6DD2
    loc_57ED91:
        mov     ebx, [esi + 8]
        mov     edi, [ebp + 0Ch]
        mov     edx, ebx
        sub     edx, edi
        mov     eax, 2E8BA2E9h
        imul    edx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 1Fh
        add     eax, edx
        cmp     eax, ecx
        mov     eax, ecx
        jae     loc_57EE3D
        imul    eax, eax, 2Ch
        mov     [ebp + 14h], eax
        add     eax, edi
        push    eax
        push    ebx
        push    edi
        mov     ecx, esi
        call    ext_0057E840
        mov     ebx, [esi + 8]
        lea     ecx, [ebp - 48h]
        push    ecx
        mov     ecx, ebx
        sub     ecx, edi
        mov     eax, 2E8BA2E9h
        imul    ecx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 1Fh
        add     eax, edx
        mov     ecx, eax
        mov     eax, [ebp + 10h]
        sub     eax, ecx
        push    eax
        push    ebx
        mov     ecx, esi
        mov     byte ptr [ebp - 4], 3
        call    ext_0057E7D0
        mov     eax, [ebp + 14h]
        add     [esi + 8], eax
        mov     esi, [esi + 8]
        lea     edx, [ebp - 48h]
        push    edx
        sub     esi, eax
        push    esi
        push    edi
        mov     dword ptr [ebp - 4], 0
        call    ext_0057E020
        add     esp, 0Ch
        jmp     loc_57EE76
        mov     eax, [ebp + 10h]
        mov     ecx, [ebp - 18h]
        imul    eax, eax, 2Ch
        mov     edx, [ecx + 8]
        add     edx, eax
        push    edx
        mov     edx, [ebp + 0Ch]
        add     eax, edx
        push    eax
        call    ext_00559C50
        push    0
        push    0
        call    ext_006A6DD2
    loc_57EE3D:
        imul    eax, eax, 2Ch
        push    ebx
        mov     ecx, ebx
        sub     ecx, eax
        push    ebx
        mov     [ebp + 10h], ecx
        push    ecx
        mov     ecx, esi
        mov     [ebp + 14h], eax
        call    ext_0057E840
        mov     [esi + 8], eax
        mov     eax, [ebp + 10h]
        push    ebx
        push    eax
        push    edi
        call    ext_0057E810
        mov     ecx, [ebp + 14h]
        lea     edx, [ebp - 48h]
        push    edx
        lea     eax, [ecx + edi]
        push    eax
        push    edi
        call    ext_0057E020
        add     esp, 18h
    loc_57EE76:
        lea     ecx, [ebp - 48h]
        mov     dword ptr [ebp - 4], 0FFFFFFFFh
        call    ext_00558B90
        mov     ecx, [ebp - 0Ch]
        pop     edi
        pop     esi
        mov     fs:[0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     10h
    }
}
