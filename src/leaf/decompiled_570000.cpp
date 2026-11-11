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
