// Decompiled translation unit: src/leaf/decompiled_570000.cpp

// [0x00573290] sub_00573290 (16 bytes)
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
