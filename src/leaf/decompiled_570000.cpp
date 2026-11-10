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
