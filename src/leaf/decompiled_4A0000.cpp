// Decompiled translation unit: src/leaf/decompiled_4A0000.cpp

#include <string>

// [0x004AEC60] sub_004AEC60 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AEC60(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x04 // mov ecx, dword ptr [ecx + 0x4]
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x08 // mov eax, dword ptr [ecx + 0x8]
        __asm _emit 0x8B __asm _emit 0x50 __asm _emit 0x50 // mov edx, dword ptr [eax + 0x50]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x08 // add ecx, 0x8
        __asm _emit 0xFF __asm _emit 0xE2 // jmp edx
    }
}

// [0x004A2510] sub_004A2510 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A2510(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x14 // mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0xC6 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 // mov byte ptr [eax + 0x4], 0x1
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x1C // mov ecx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B __asm _emit 0x11 // mov edx, dword ptr [ecx]
        __asm _emit 0x8B __asm _emit 0x42 __asm _emit 0x04 // mov eax, dword ptr [edx + 0x4]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}

extern "C" int mem_00941484;

// [0x004A98D0] sub_004A98D0 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A98D0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, 1
        mov dword ptr [eax], offset mem_00941484
        mov dword ptr [eax + 0x4], 0
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x14], ecx
        ret
    }
}

// [0x004A5BE0] sub_004A5BE0 (25 bytes)
extern "C" void ext_00644F30();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004A5BE0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_00644F30
        push esi
        call ext_006A5C5C
        add esp, 4
done:
        pop esi
        ret
    }
}

// [0x004AECE0] sub_004AECE0 (25 bytes)
extern "C" void ext_00676C90();
extern "C" __declspec(naked) void __fastcall fn_004AECE0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_00676C90
        push esi
        call ext_006A5C5C
        add esp, 4
done:
        pop esi
        ret
    }
}

// [0x004AED00] sub_004AED00 (25 bytes)
extern "C" void __fastcall ext_004F1D90(void* self);
extern "C" void ext_006A5C5C();

extern "C" void __fastcall fn_004AED00(void* self) {
    void* esi = *(void**)self;
    if (esi) {
        ext_004F1D90(esi);
        ((void (*)(void*))ext_006A5C5C)(esi);
    }
}

// [0x004A5860] sub_004A5860 (26 bytes)
extern "C" void __fastcall ext_00494050(void* self);
extern "C" void __fastcall fn_004A5860(void* self) {
    ext_00494050((char*)self + 0x1fc);
    ext_00494050((char*)self + 0x208);
}

// [0x004A5A50] sub_004A5A50 (35 bytes)
extern "C" __declspec(naked) int __fastcall fn_004A5A50(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0xc]
        test eax, eax
        je ret_one
        mov edx, dword ptr [ecx + 0x10]
        sub edx, eax
        sar edx, 0x2
        je ret_one
        cmp byte ptr [ecx + 0x24], 0x0
        jne ret_one
        xor eax, eax
        pop ecx
        ret
ret_one:
        mov eax, 0x1
        pop ecx
        ret
    }
}

// [0x004AEF30] sub_004AEF30 (35 bytes)
extern "C" void ext_00493D90();

extern "C" __declspec(naked) void __fastcall fn_004AEF30(void* self, int edx_unused, void* begin, void* end) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done_4AEF30
        __asm _emit 0x8B __asm _emit 0xFF // mov edi, edi
loop_4AEF30:
        mov ecx, esi
        call ext_00493D90
        add esi, 0x8
        cmp esi, edi
        jne loop_4AEF30
done_4AEF30:
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x004A9720] sub_004A9720 (53 bytes)
extern "C" int mem_00ADF300;
extern "C" int mem_00928B5D;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FD4;

typedef void* (__thiscall *StrAssignFn)(void* self, const void* src);

// Cdecl (int idx, std::string* dst): ret 0, args on stack.
// idx < 3 -> dst = table[idx] (28-byte std::string stride), else dst = literal.
extern "C" void* __cdecl fn_004A9720(int idx, void* dst) {
    if (idx < 3) {
        return ((StrAssignFn)mem_00924FDC)(dst, (char*)&mem_00ADF300 + 28 * idx);
    }
    return ((StrAssignFn)mem_00924FD4)(dst, (const void*)&mem_00928B5D);
}

// [0x004A96E0] sub_004A96E0 (60 bytes)
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void __cdecl fn_004A96E0(const void* name) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        push esi
        push edi
        xor edi, edi
        mov esi, 0xadf300
loop_top:
        push ebx
        push esi
        call ebp
        add esp, 0x8
        test al, al
        jne found
        add esi, 0x1c
        add edi, 0x1
        cmp esi, 0xadf354
        jl loop_top
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004A5810] sub_004A5810 (61 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A5810(void* self, int edx_unused, unsigned char a1) {
    __asm {
        mov al, byte ptr [esp + 4]
        not al
        movzx edx, al
        mov eax, dword ptr [ecx + 0x258]
        and edx, 1
        test eax, eax
        mov dword ptr [ecx + 0x200], edx
        je short L_no_obj
        mov eax, dword ptr [eax + 0x168]
        test eax, eax
        je short L_null_sub
        add eax, 4
        mov dword ptr [ecx + 0x204], eax
        ret 4
    L_null_sub:
        xor eax, eax
        mov dword ptr [ecx + 0x204], eax
    L_no_obj:
        ret 4
    }
}

extern "C" void ext_00430EF0();

// [0x004ABA70] sub_004ABA70 (39 bytes)
// Cdecl (int* out, int a2, void* first, int a4_unused, void* last, const void* value):
// out[0] = a2; out[1] = sub_00430EF0(first, last, value).
extern "C" __declspec(naked) void __cdecl fn_004ABA70(int* out, int a2, void* first, int a4_unused, void* last, const void* value) {
    __asm {
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        call ext_00430EF0
        mov edx, dword ptr [esp + 0x14]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x10]
        add esp, 0xc
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        ret
    }
}

// [0x004A6020] sub_004A6020 (62 bytes)
extern "C" int mem_009251EC;

// __thiscall ret 0xc: erase element at pos from the 4-byte-element array at self (end ptr at +8),
// then write the result pair {value, pos} to out.
// Naked: the body calls the MSVCR80!memmove_s IAT slot directly, and the original stack/register layout is kept.
extern "C" __declspec(naked) void __fastcall fn_004A6020(void* self, int edx_unused, int* out, int value, int* pos) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        lea ecx, [edi + 0x4]
        sub eax, ecx
        sar eax, 0x2
        test eax, eax
        jle skip_copy
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push eax
        push edi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    skip_copy:
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        add dword ptr [esi + 0x8], -0x4
        mov dword ptr [eax + 0x4], edi
        pop edi
        mov dword ptr [eax], ecx
        pop esi
        ret 0xc
    }
}

// [0x004A5FE0] sub_004A5FE0 (64 bytes)
// __fastcall-style, ret 0: allocates 0xB0 bytes via 0x006A5C62 (cdecl), zeroes the dwords at +0, +4 and +8
// (each store guarded by a null test), sets byte +0xAC to 1 and byte +0xAD to 0, and returns the block pointer.
extern "C" void* __cdecl ext_006A5C62(int size);

extern "C" void* __fastcall fn_004A5FE0(void* self) {
    void* p = ext_006A5C62(0xB0);
    if (p) {
        *(int*)p = 0;
    }
    void* q = (char*)p + 4;
    if (q) {
        *(int*)q = 0;
    }
    void* r = (char*)p + 8;
    if (r) {
        *(int*)r = 0;
    }
    ((unsigned char*)p)[0xAC] = 1;
    ((unsigned char*)p)[0xAD] = 0;
    return p;
}

// [0x004A5A00] sub_004A5A00 (66 bytes)
// Walks a chain like fn_004685A0: __RTDynamicCast(obj, 0, 0xA2E2F8, 0xA2FB78, 0); if null,
// calls vtable slot 4 (thiscall, arg 0) on obj and repeats. Returns the cast result or NULL.
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void* __cdecl fn_004A5A00(void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        xor eax, eax
        test esi, esi
        je L_4A5A00_done
        push edi
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_4A5A00_loop:
        push 0
        push 0xa2fb78
        push 0xa2e2f8
        push 0
        push esi
        call ext_006A6E9E
        mov edi, eax
        add esp, 0x14
        test edi, edi
        jne L_4A5A00_found
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x10]
        push edi
        mov ecx, esi
        call edx
        mov esi, eax
        test esi, esi
        jne L_4A5A00_loop
    L_4A5A00_found:
        mov eax, edi
        pop edi
    L_4A5A00_done:
        pop esi
        ret
    }
}

// [0x004A9760] sub_004A9760 (67 bytes)
// __stdcall (ret 4): linear scan of a 0x1c-stride table at 0xADF238..0xADF28C comparing each
// entry against the std::string argument via the imported basic_string operator== (mem_00924FC4).
// Returns the index of the first match, or 1 if none matches.
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) int __stdcall fn_004A9760(const void* name) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        push esi
        push edi
        xor edi, edi
        mov esi, 0xadf238
loop_top:
        push ebx
        push esi
        call ebp
        add esp, 0x8
        test al, al
        jne found
        add esi, 0x1c
        add edi, 0x1
        cmp esi, 0xadf28c
        jl loop_top
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret 0x4
found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x004AB940] sub_004AB940 (68 bytes)
extern "C" unsigned int* __cdecl fn_004AB940(unsigned int* first, unsigned int* last, const unsigned int* val) {
    int count = (int)(last - first);
    unsigned int* it = first;
    while (count > 0) {
        int half = count / 2;
        unsigned int* mid = it + half;
        if (*mid < *val) {
            it = mid + 1;
            count -= half + 1;
        } else {
            count = half;
        }
    }
    return it;
}

extern "C" void ext_00493D90();
extern "C" void ext_006A5C5C();

// [0x004AEFF0] sub_004AEFF0 (70 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AEFF0(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        je done
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp esi, edi
        je skip
    lp:
        mov ecx, esi
        call ext_00493D90
        add esi, 8
        cmp esi, edi
        jne lp
    skip:
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_006A5C5C
        add esp, 4
        pop edi
    done:
        pop esi
        mov dword ptr [ebx + 4], 0
        mov dword ptr [ebx + 8], 0
        mov dword ptr [ebx + 0xc], 0
        pop ebx
        ret
    }
}

// [0x004A73F0] sub_004A73F0 (73 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_004A73F0(void* self, int edx_unused, const void* key) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x4]
        cmp byte ptr [esi + 0xad], 0x0
        push edi
        mov edi, eax
        jne done_early
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [mem_00924EF4]
        nop
    loop_top:
        lea eax, [esi + 0xc]
        push ebx
        push eax
        call ebp
        add esp, 0x8
        test al, al
        je go_left
        mov esi, dword ptr [esi + 0x8]
        jmp loop_check
    go_left:
        mov edi, esi
        mov esi, dword ptr [esi]
    loop_check:
        cmp byte ptr [esi + 0xad], 0x0
        je loop_top
        pop ebp
        mov eax, edi
        pop ebx
    done_early:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004AD970] sub_004AD970 (77 bytes)
extern "C" void ext_004026E0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004AD970(void* self) {
    __asm {
        push -1
        push 0x00872C79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x10], 0x0
        call ext_004026E0
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004A5C60] sub_004A5C60 (81 bytes)
extern "C" void __fastcall fn_004A5C60(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0xad) == 0) {
        *(char**)(q + 0x4) = n;
    }
    *(char**)(p + 0x4) = *(char**)(n + 0x4);
    char* c = *(char**)(s + 0x4);
    if (n == *(char**)(c + 0x4)) {
        *(char**)(c + 0x4) = p;
        *(char**)p = n;
        *(char**)(n + 0x4) = p;
        return;
    }
    char* c2 = *(char**)(n + 0x4);
    if (n == *(char**)c2) {
        *(char**)c2 = p;
    } else {
        *(char**)(c2 + 0x8) = p;
    }
    *(char**)p = n;
    *(char**)(n + 0x4) = p;
}

// [0x004A5CC0] sub_004A5CC0 (85 bytes)
extern "C" void __fastcall fn_004A5CC0(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0xad] == 0) {
        *(char**)(m + 0x4) = x;
    }
    *(char**)(n + 0x4) = *(char**)(x + 0x4);
    char* h = *(char**)(self + 0x4);
    if (x == *(char**)(h + 0x4)) {
        *(char**)(h + 0x4) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    char* q = *(char**)(x + 0x4);
    if (x == *(char**)(q + 0x8)) {
        *(char**)(q + 0x8) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    *(char**)q = n;
    *(char**)(n + 0x8) = x;
    *(char**)(x + 0x4) = n;
}

// [0x004AB880] sub_004AB880 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADFA04;
extern "C" int mem_00ADFA00;

extern "C" __declspec(naked) void* __fastcall fn_004AB880(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8889be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ADFA04], al
        jne L_done
        or dword ptr [mem_00ADFA04], eax
        mov ecx, offset mem_00ADFA00
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00ADFA00], 0x9417d4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADFA00
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004ABAA0] sub_004ABAA0 (30 bytes)
extern "C" void ext_004AB880();

extern "C" __declspec(naked) void __fastcall fn_004ABAA0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004AB880
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004AB8E0] sub_004AB8E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADFA0C;
extern "C" int mem_00ADFA08;

extern "C" __declspec(naked) void* __fastcall fn_004AB8E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8889de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ADFA0C], al
        jne L_done
        or dword ptr [mem_00ADFA0C], eax
        mov ecx, offset mem_00ADFA08
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00ADFA08], 0x941984
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADFA08
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004ABAC0] sub_004ABAC0 (30 bytes)
extern "C" void ext_004AB8E0();

extern "C" __declspec(naked) void __fastcall fn_004ABAC0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004AB8E0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004A6060] sub_004A6060 (90 bytes)
extern "C" void ext_00644F20();

extern "C" __declspec(naked) void* __cdecl fn_004A6060(void* first, void* last, const void* value) {
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
        mov ebp, dword ptr [esp + 0x18]
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
        sar esi, 1
        mov ecx, dword ptr [ebx + 4 * esi]
        push ebp
        call ext_00644F20
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 8
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

// [0x004AFE50] sub_004AFE50 (90 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_00665810();

extern "C" __declspec(naked) void __fastcall fn_004AFE50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x58]
        push edi
        xor edi, edi
        cmp eax, edi
        je L_skip1
        push eax
        call ext_006A5C5C
        add esp, 4
L_skip1:
        mov dword ptr [esi + 0x58], edi
        mov dword ptr [esi + 0x5c], edi
        mov dword ptr [esi + 0x60], edi
        mov eax, dword ptr [esi + 0x38]
        cmp eax, edi
        je L_skip2
        push eax
        call ext_006A5C5C
        add esp, 4
L_skip2:
        mov dword ptr [esi + 0x38], edi
        mov dword ptr [esi + 0x3c], edi
        mov dword ptr [esi + 0x40], edi
        mov eax, dword ptr [esi + 0x18]
        cmp eax, edi
        je L_skip3
        push eax
        call ext_006A5C5C
        add esp, 4
L_skip3:
        mov dword ptr [esi + 0x18], edi
        mov dword ptr [esi + 0x1c], edi
        mov dword ptr [esi + 0x20], edi
        pop edi
        mov ecx, esi
        pop esi
        jmp ext_00665810
    }
}

extern "C" void __cdecl ext_0059DE60(unsigned int* first, int holeIndex, int topIndex, unsigned int value, int comp);

// [0x004AB230] sub_004AB230 (97 bytes)
extern "C" void __cdecl fn_004AB230(unsigned int* first, int holeIndex, int len, unsigned int value, int comp) {
    int topIndex = holeIndex;
    int idx = 2 * holeIndex + 2;
    while (idx < len) {
        if (first[idx] < first[idx - 1]) --idx;
        first[holeIndex] = first[idx];
        holeIndex = idx;
        idx = 2 * idx + 2;
    }
    if (idx == len) {
        first[holeIndex] = first[len - 1];
        holeIndex = len - 1;
    }
    ext_0059DE60(first, holeIndex, topIndex, value, comp);
}

// [0x004AB990] sub_004AB990 (63 bytes)
extern "C" void __cdecl fn_004AB990(unsigned int* first, unsigned int* last, int comp) {
    int len = last - first;
    for (int hole = len / 2; hole > 0; ) {
        --hole;
        fn_004AB230(first, hole, len, first[hole], comp);
    }
}

// [0x004ABF10] sub_004ABF10 (74 bytes)
extern "C" void ext_004AB230();

extern "C" __declspec(naked) void __cdecl fn_004ABF10(unsigned int* first, unsigned int* last, int comp) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        sub esi, edi
        mov eax, esi
        sar eax, 0x2
        cmp eax, 0x1
        jle done
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    loop_top:
        mov eax, dword ptr [edi + esi - 0x4]
        mov ecx, dword ptr [edi]
        push ebx
        push eax
        lea edx, [esi - 0x4]
        sar edx, 0x2
        push edx
        push 0x0
        push edi
        mov dword ptr [edi + esi - 0x4], ecx
        call ext_004AB230
        sub esi, 0x4
        mov eax, esi
        sar eax, 0x2
        add esp, 0x14
        cmp eax, 0x1
        jg loop_top
        pop ebx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x004A5F70] sub_004A5F70 (98 bytes)
extern "C" void ext_00644F30();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004A5F70(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
    f5f70_top:
        test esi, esi
        je f5f70_call1
        cmp esi, dword ptr [esp + 0x1c]
        je f5f70_after1
    f5f70_call1:
        call ebp
    f5f70_after1:
        cmp ebx, dword ptr [esp + 0x20]
        je f5f70_ret
        test esi, esi
        mov edi, ebx
        jne f5f70_a
        call ebp
    f5f70_a:
        cmp ebx, dword ptr [esi + 0x8]
        jb f5f70_b
        call ebp
    f5f70_b:
        add ebx, 0x4
        test esi, esi
        jne f5f70_c
        call ebp
    f5f70_c:
        cmp edi, dword ptr [esi + 0x8]
        jb f5f70_d
        call ebp
    f5f70_d:
        mov edi, dword ptr [edi]
        test edi, edi
        je f5f70_top
        mov ecx, edi
        call ext_00644F30
        push edi
        call ext_006A5C5C
        add esp, 0x4
        jmp f5f70_top
    f5f70_ret:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x004A6A90] sub_004A6A90 (90 bytes)
extern "C" void ext_004A5F70();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004A6A90(void* self) {
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
        jbe m4a6a90_ok1
        call ebp
    m4a6a90_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m4a6a90_ok2
        call ebp
    m4a6a90_ok2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_004A5F70
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m4a6a90_ok3
        call ebp
    m4a6a90_ok3:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m4a6a90_ok4
        call ebp
    m4a6a90_ok4:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x004A7440] sub_004A7440 (105 bytes)
extern "C" void ext_004A73F0();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_004A7440(void* self, int edx_unused, void** out, const void* key) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_004A73F0
        test esi, esi
        mov edi, eax
        mov dword ptr [esp + 0x10], edi
        jne skip_invalid
        call dword ptr [mem_00925134]
    skip_invalid:
        cmp edi, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0xc], esi
        je return_end
        add edi, 0xc
        push edi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne return_end
        lea ecx, [esp + 0xc]
        jmp load_pair
    return_end:
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x14], esi
        lea ecx, [esp + 0x14]
    load_pair:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [ecx + 0x4]
        pop edi
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 0x10
        ret 0x8
    }
}

extern "C" void ext_005F3E70();
extern "C" int mem_00925134;

// [0x004AC060] sub_004AC060 (61 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AC060(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_004AC076
        call ebp
    L_004AC076:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_004AC080
        call ebp
    L_004AC080:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edi
        push esi
        push ebx
        push esi
        call ext_005F3E70
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x004A2410] sub_004A2410 (114 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_00ADDAA0;
extern "C" int mem_00ADDA84;
extern "C" int mem_00ADDA88;
extern "C" int mem_00ADDA8C;
extern "C" int mem_00ADDA7C;
extern "C" int mem_00ADDA94;
extern "C" int mem_00ADDA98;
extern "C" int mem_00ADDA9C;
extern "C" __declspec(naked) void __fastcall fn_004A2410(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x887938
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ADDAA0], al
        jne L_004A246F
        or dword ptr [mem_00ADDAA0], eax
        xor eax, eax
        mov dword ptr [mem_00ADDA84], eax
        mov dword ptr [mem_00ADDA88], eax
        mov dword ptr [mem_00ADDA8C], eax
        push 0x917B40
        mov dword ptr [mem_00ADDA7C], 0x940704
        mov dword ptr [mem_00ADDA94], eax
        mov dword ptr [mem_00ADDA98], eax
        mov dword ptr [mem_00ADDA9C], eax
        call ext_006A6C87
        add esp, 0x4
L_004A246F:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADDA7C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xC
        ret
    }
}

// [0x004ABFF0] sub_004ABFF0 (112 bytes)
extern "C" void ext_0049E2F0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) int __fastcall fn_004ABFF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x2c]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x180]
        lea edx, [esp + 0x4]
        add ecx, 0x11c
        push edx
        mov dword ptr [esp + 0x2c], 0x0
        call ext_0049E2F0
        lea ecx, [esp + 0x4]
        mov esi, eax
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x004A0620] sub_004A0620 (63 bytes)
extern "C" void ext_0049ECB0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004A0620(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_004A0620
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_0049ECB0
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_004A0620:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x004A6A10] sub_004A6A10 (121 bytes)
extern "C" void ext_004A5F70();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004A6A10(void* self) {
    __asm {
        push -1
        push 0x8882e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov edi, dword ptr [esi + 0x8]
        xor ebp, ebp
        cmp dword ptr [esi + 0x4], edi
        mov dword ptr [esp + 0x18], ebp
        jbe f6a10_ok1
        call dword ptr [mem_00925134]
    f6a10_ok1:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe f6a10_ok2
        call dword ptr [mem_00925134]
    f6a10_ok2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_004A5F70
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebp
        pop ebx
        je f6a10_noFree
        push eax
        call ext_006A5C5C
        add esp, 0x4
    f6a10_noFree:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x4], ebp
        mov dword ptr [esi + 0x8], ebp
        mov dword ptr [esi + 0xc], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_00593F20();
extern "C" void ext_00594000();
extern "C" int mem_00B58DFC;

// [0x004A9D80] sub_004A9D80 (121 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A9D80(void* self) {
    __asm {
        push esi
        xor esi, esi
        cmp byte ptr [mem_00B58DFC], 0
        push edi
        mov edi, ecx
        jne short L_skip1
        call ext_00594000
        test eax, eax
        je short L_skip1
        call ext_00594000
        mov ecx, eax
        call ext_00593F20
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        je short L_skip1
        mov esi, dword ptr [eax + 8]
        sub esi, ecx
        sar esi, 2
    L_skip1:
        mov eax, dword ptr [edi + 2F4h]
        test eax, eax
        je short L_zero
        mov edx, dword ptr [eax + 4]
        test edx, edx
        jne short L_nz
        xor eax, eax
        jmp short L_after
    L_nz:
        mov ecx, dword ptr [eax + 8]
        sub ecx, edx
        mov eax, 92492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1Fh
        add eax, edx
    L_after:
        xor ecx, ecx
        cmp dword ptr [edi + 304h], ecx
        pop edi
        setl cl
        add ecx, eax
        add ecx, esi
        mov eax, ecx
        pop esi
        ret
    L_zero:
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}

// [0x004A5920] sub_004A5920 (127 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A5920(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne SKIP_NULL
        call edi
SKIP_NULL:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 0ADh], 0
        je HAS_NODE
        call edi
        pop edi
        pop esi
        ret
HAS_NODE:
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 0ADh], 0
        jne RIGHT_NIL
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0ADh], 0
        jne STORE_RIGHT
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
LEFTMOST:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0ADh], 0
        je LEFTMOST
STORE_RIGHT:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
RIGHT_NIL:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 0ADh], 0
        jne CLIMB_DONE
        _emit 0x90
CLIMB_LOOP:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jne CLIMB_DONE
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 0ADh], 0
        je CLIMB_LOOP
CLIMB_DONE:
        pop edi
        mov dword ptr [esi + 4], eax
        pop esi
        ret
    }
}

// [0x004AFB60] sub_004AFB60 (138 bytes)
// Calls virtual slot 2 (+0x8) on the embedded polymorphic member at self+0x8 to get a container,
// then walks its element-pointer range [+0x4, +0x8) (MSVC iterator checks, failure -> invalid_parameter_noinfo).
// For each element it calls vtable slot 20 (+0x50); if bit 0x40 is clear it calls sub_00494070(0xC0, elem),
// and a non-zero result sets self+0x361 = 1 and returns. Otherwise self+0x361 = 0.
extern "C" void ext_00494070();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004AFB60(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x8]
        mov edx, dword ptr [eax + 0x8]
        push ebp
        lea ecx, [ebx + 0x8]
        push esi
        push edi
        call edx
        mov edi, eax
        mov ebp, dword ptr [edi + 0x4]
        cmp ebp, dword ptr [edi + 0x8]
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        mov esi, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], esi
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        cmp ebp, esi
        je L_false
        cmp ebp, dword ptr [edi + 0x8]
        jb L_elem
        call dword ptr [mem_00925134]
    L_elem:
        mov esi, dword ptr [ebp]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x50]
        mov ecx, esi
        call edx
        test al, 0x40
        jne L_next
        push esi
        push 0xc0
        call ext_00494070
        add esp, 0x8
        test eax, eax
        jne L_true
    L_next:
        cmp ebp, dword ptr [edi + 0x8]
        jb L_inc
        call dword ptr [mem_00925134]
    L_inc:
        add ebp, 0x4
        jmp L_chk1
    L_true:
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        mov byte ptr [ebx + 0x361], al
        pop ebx
        ret
    L_false:
        pop edi
        pop esi
        xor al, al
        pop ebp
        mov byte ptr [ebx + 0x361], al
        pop ebx
        ret
    }
}

// [0x004AEAC0] sub_004AEAC0 (152 bytes)
extern "C" void ext_00555470();

extern "C" __declspec(naked) void __fastcall fn_004AEAC0(void* self) {
    __asm {
        push -1
        push 0x889008
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        lea esi, [edi + 4]
        mov ecx, esi
        mov dword ptr [esp + 8], edi
        mov dword ptr [edi], 0x941f10
        call ext_00555470
        mov dword ptr [esi + 4], eax
        mov byte ptr [eax + 0x39], 1
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax + 8], eax
        mov dword ptr [esi + 8], 0
        lea esi, [edi + 0x14]
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [edi + 0x10], 0x941f10
        call ext_00555470
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 4], eax
        mov byte ptr [eax + 0x39], 1
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax + 8], eax
        mov eax, edi
        mov dword ptr [esi + 8], 0
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004A5D20] sub_004A5D20 (154 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004A5D20(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne SKIP_INV1
        call edi
    SKIP_INV1:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0xad], 0x0
        je L_LEFT
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], eax
        cmp byte ptr [eax + 0xad], 0x0
        je L_DONE
    L_INV1:
        call edi
        pop edi
        pop esi
        ret
    L_LEFT:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0xad], 0x0
        jne L_CLIMB
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0xad], 0x0
        jne L_STORE_C
        jmp L_RLOOP
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_RLOOP:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0xad], 0x0
        je L_RLOOP
    L_STORE_C:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_CLIMB:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0xad], 0x0
        jne L_FIX
    L_CLOOP:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax]
        jne L_FIX
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0xad], 0x0
        je L_CLOOP
    L_FIX:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0xad], 0x0
        jne L_INV1
        mov dword ptr [esi + 0x4], eax
    L_DONE:
        pop edi
        pop esi
        ret
    }
}

extern "C" void ext_00594000();
extern "C" void ext_00593F20();
extern "C" int mem_00B58DFC;

// [0x004A9CE0] sub_004A9CE0 (156 bytes)
extern "C" __declspec(naked) int __fastcall fn_004A9CE0(void* self) {
    __asm {
        push esi
        xor esi, esi
        cmp byte ptr [mem_00B58DFC], 0x0
        push edi
        mov edi, ecx
        jne L_SKIP1
        call ext_00594000
        test eax, eax
        je L_SKIP1
        lea eax, [edi + 0x188]
        cmp dword ptr [edi + 0x180], eax
        je L_EQ
        mov eax, dword ptr [edi + 0x304]
        pop edi
        pop esi
        ret
    L_EQ:
        call ext_00594000
        mov ecx, eax
        call ext_00593F20
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jne L_NZ
        xor esi, esi
        jmp L_SKIP1
    L_NZ:
        mov esi, dword ptr [eax + 0x8]
        sub esi, ecx
        sar esi, 0x2
    L_SKIP1:
        mov ecx, dword ptr [edi + 0x304]
        test ecx, ecx
        jge L_POS
        mov eax, dword ptr [edi + 0x2f4]
        test eax, eax
        je L_POS
        cmp dword ptr [edi + 0x308], 0x0
        jl L_POS
        mov edx, dword ptr [eax + 0x4]
        test edx, edx
        jne L_DIV
        xor eax, eax
        pop edi
        mov eax, esi
        pop esi
        ret
    L_DIV:
        mov ecx, dword ptr [eax + 0x8]
        sub ecx, edx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        pop edi
        add eax, esi
        pop esi
        ret
    L_POS:
        pop edi
        lea eax, [ecx + esi]
        pop esi
        ret
    }
}

// [0x004AEE60] sub_004AEE60 (62 bytes)
extern "C" void ext_00673AB0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004AEE60(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x4]
        mov esi, dword ptr [eax]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        cmp esi, dword ptr [edi + 0x4]
        mov dword ptr [edi + 0x8], 0
        je done_4AEE60
        push ebx
        mov edi, edi
    loop_4AEE60:
        mov ebx, dword ptr [esi]
        lea ecx, [esi + 0x8]
        call ext_00673AB0
        push esi
        call ext_006A5C5C
        add esp, 4
        cmp ebx, dword ptr [edi + 0x4]
        mov esi, ebx
        jne loop_4AEE60
        pop ebx
    done_4AEE60:
        pop edi
        pop esi
        ret
    }
}

extern "C" void ext_004A6A90();
extern "C" void ext_004E81C0();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

// [0x004A6C70] sub_004A6C70 (169 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A6C70(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ecx, [edi + 0x224]
        call ext_004A6A90
        mov ebx, dword ptr [edi + 0x23c]
        cmp dword ptr [edi + 0x238], ebx
        lea esi, [edi + 0x234]
        jbe L_4A6C9E
        call dword ptr [mem_00925134]
L_4A6C9E:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L_4A6CAC
        call dword ptr [mem_00925134]
L_4A6CAC:
        push ebx
        push esi
        push ebp
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        mov ebx, dword ptr [edi + 0x24c]
        cmp dword ptr [edi + 0x248], ebx
        lea esi, [edi + 0x244]
        jbe L_4A6CD6
        call dword ptr [mem_00925134]
L_4A6CD6:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L_4A6CE4
        call dword ptr [mem_00925134]
L_4A6CE4:
        push ebx
        push esi
        push ebp
        push esi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        call ext_00596660
        lea ecx, [edi + 0x4]
        call ext_004E81C0
        lea ecx, [edi + 0x100]
        call ext_004E81C0
        mov dword ptr [edi + 0x258], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x004A60C0] sub_004A60C0 (181 bytes)
extern "C" void ext_00492550();
extern "C" void ext_00594000();
extern "C" void ext_006AD940();
extern "C" void ext_00493370();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004A60C0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        call ext_00492550
        test al, al
        je L_slow_60C0
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        add esp, 4
        jmp ext_00493370
    L_slow_60C0:
        push ebp
        push esi
        push edi
        call ext_00594000
        mov ebp, dword ptr [mem_00925134]
        mov edi, eax
        mov esi, dword ptr [edi + 0x23c]
        add edi, 0x238
        cmp esi, dword ptr [edi + 0x8]
        jbe L_chk1_60C0
        call ebp
    L_chk1_60C0:
        push ebx
        __asm _emit 0x8D __asm _emit 0x49 __asm _emit 0x00 // lea ecx, [ecx]
    L_loop_60C0:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_chk2_60C0
        call ebp
    L_chk2_60C0:
        cmp esi, ebx
        je L_done_60C0
        mov eax, dword ptr [esp + 0x10]
        cmp byte ptr [eax + 0x2d1], 0
        jne L_flag_60C0
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk3_60C0
        call ebp
    L_chk3_60C0:
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x5f0], 1
        jmp L_adv_60C0
    L_flag_60C0:
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk4_60C0
        call ebp
    L_chk4_60C0:
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x5f0], 3
    L_adv_60C0:
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk5_60C0
        call ebp
    L_chk5_60C0:
        add esi, 4
        jmp L_loop_60C0
    L_done_60C0:
        pop ebx
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret
    }
}

// [0x004AFBF0] sub_004AFBF0 (48 bytes)
extern "C" void ext_00466BA0();
extern "C" void ext_004E7EC0();

extern "C" __declspec(naked) void __fastcall fn_004AFBF0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x104]
        mov dword ptr [esi + 0x4], 0
        call ext_004E7EC0
        push 0
        lea eax, [esp + 0xb]
        push eax
        lea ecx, [esi + 0x23c]
        mov byte ptr [esp + 0xf], 0
        call ext_00466BA0
        pop esi
        pop ecx
        ret
    }
}

// [0x004A6810] sub_004A6810 (205 bytes)
extern "C" void ext_004A6060();
extern "C" void ext_00644F20();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_004A6810(void* self, int edx_unused, void* out, void* val) {
    __asm {
        sub esp, 0x0c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        mov byte ptr [esp + 0x10], 0x0
        jbe L_004A682C
        call dword ptr [mem_00925134]
    L_004A682C:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_004A683A
        call dword ptr [mem_00925134]
    L_004A683A:
        mov eax, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x24]
        push 0x0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 0x2c], edi
        call ext_004A6060
        mov edi, dword ptr [esi + 0x8]
        add esp, 0x14
        cmp dword ptr [esi + 0x4], edi
        mov ebx, eax
        jbe L_004A6864
        call dword ptr [mem_00925134]
    L_004A6864:
        test esi, esi
        je L_004A686C
        cmp esi, esi
        je L_004A6872
    L_004A686C:
        call dword ptr [mem_00925134]
    L_004A6872:
        cmp ebx, edi
        je L_004A68B4
        test esi, esi
        jne L_004A6880
        call dword ptr [mem_00925134]
    L_004A6880:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_004A688B
        call dword ptr [mem_00925134]
    L_004A688B:
        mov ecx, dword ptr [ebx]
        call ext_00644F20
        push eax
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_004A68B4
        mov eax, dword ptr [esp + 0x20]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 0x0c
        ret 0x8
    L_004A68B4:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [edi], 0x0
        jbe L_004A68CC
        call dword ptr [mem_00925134]
    L_004A68CC:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 0x4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x0c
        ret 0x8
    }
}

// [0x004A6D20] sub_004A6D20 (242 bytes)
extern "C" void ext_004A5F70();
extern "C" int mem_00925134;
extern "C" int mem_009251EC;

extern "C" __declspec(naked) void __fastcall fn_004A6D20(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x224]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe short loc_004A6D40
        call ebp
        __asm _emit 0x8D __asm _emit 0x9B __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ebx, [ebx]
loc_004A6D40:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe short loc_004A6D4A
        call ebp
loc_004A6D4A:
        cmp esi, esi
        je short loc_004A6D50
        call ebp
loc_004A6D50:
        cmp edi, ebx
        je short loc_004A6DB0
        cmp edi, dword ptr [esi + 0x8]
        jb short loc_004A6D5B
        call ebp
loc_004A6D5B:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx + 0x20c]
        mov edx, dword ptr [eax + 0xc]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [edx + 0x24]
        push 0
        call eax
        cmp edi, dword ptr [esi + 0x8]
        jb short loc_004A6D79
        call ebp
loc_004A6D79:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [edx + 0x24]
        push 0
        call eax
        cmp edi, dword ptr [esi + 0x8]
        jb short loc_004A6D91
        call ebp
loc_004A6D91:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [edx + 0x28]
        push 1
        push 0
        call eax
        cmp edi, dword ptr [esi + 0x8]
        jb short loc_004A6DAB
        call ebp
loc_004A6DAB:
        add edi, 4
        jmp short loc_004A6D40
loc_004A6DB0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe short loc_004A6DBA
        call ebp
loc_004A6DBA:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe short loc_004A6DC4
        call ebp
loc_004A6DC4:
        push ebx
        push esi
        push edi
        push esi
        mov ecx, esi
        call ext_004A5F70
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe short loc_004A6DD9
        call ebp
loc_004A6DD9:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe short loc_004A6DE3
        call ebp
loc_004A6DE3:
        cmp ebx, edi
        je short loc_004A6E0D
        mov eax, dword ptr [esi + 0x8]
        sub eax, edi
        sar eax, 2
        test eax, eax
        lea ecx, [eax*4]
        lea ebp, [ecx + ebx]
        jle short loc_004A6E0A
        push ecx
        push edi
        push ecx
        push ebx
        call dword ptr [mem_009251EC]
        add esp, 0x10
loc_004A6E0A:
        mov dword ptr [esi + 0x8], ebp
loc_004A6E0D:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004A6710] sub_004A6710 (256 bytes)
extern "C" void ext_00480920();
extern "C" void ext_00489320();
extern "C" void ext_00492A50();
extern "C" void ext_00594000();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004A6710(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x248]
        sub esp, 0x8
        test eax, eax
        push esi
        lea esi, [ecx + 0x244]
        je L_4A6804
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 0x2
        je L_4A6804
        push ebx
        push ebp
        push edi
        call ext_00594000
        mov ebp, dword ptr [mem_00925134]
        mov ebx, eax
        mov eax, dword ptr [esp + 0x1c]
        cmp eax, 0xb
        jne L_4A6783
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_4A675C
        call ebp
        cmp edi, dword ptr [esi + 0x8]
    L_4A675C:
        jb L_4A6760
        call ebp
    L_4A6760:
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x22c]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x14]
        add ebx, 0x1c8
        push ebx
        call edx
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 0x8
        ret 0x4
    L_4A6783:
        cmp eax, 0xc
        jne L_4A67EC
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_4A6795
        call ebp
        cmp edi, dword ptr [esi + 0x8]
    L_4A6795:
        jb L_4A6799
        call ebp
    L_4A6799:
        mov eax, dword ptr [edi]
        push 0x0
        push 0xa36694
        push 0xa2fbbc
        push 0x0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_4A67EC
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        call ext_00489320
        mov ecx, eax
        call ext_00492A50
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax + 0x22c]
        lea ecx, [eax + 0x4]
    L_4A67D4:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x14]
        add ebx, 0x1c8
        push ebx
        call eax
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 0x8
        ret 0x4
    L_4A67EC:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_4A67F9
        call ebp
        cmp edi, dword ptr [esi + 0x8]
    L_4A67F9:
        jb L_4A67FD
        call ebp
    L_4A67FD:
        mov edi, dword ptr [edi]
        lea ecx, [edi + 0x4]
        jmp L_4A67D4
    L_4A6804:
        call ext_00480920
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x004A5DC0] sub_004A5DC0 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" void ext_008882AE();
extern "C" int mem_00ADEC00;
extern "C" int mem_00ADEBE4;
extern "C" int mem_00A3411C;
extern "C" int mem_00917E20;
extern "C" __declspec(naked) void __fastcall fn_004A5DC0(void* self) {
    __asm {
        mov eax, fs:[0]
        push -1
        push offset ext_008882AE
        push eax
        mov eax, 1
        mov fs:[0], esp
        test byte ptr [mem_00ADEC00], al
        jne done
        or dword ptr [mem_00ADEC00], eax
        push offset mem_00A3411C
        push offset mem_00ADEBE4
        mov dword ptr [esp+0x10], 0
        call ext_00662610
        push offset mem_00917E20
        call ext_006A6C87
        add esp, 0xc
    done:
        mov ecx, [esp]
        mov eax, offset mem_00ADEBE4
        mov fs:[0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004A5C00] sub_004A5C00 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00ADEBE0;
extern "C" int mem_00ADEBC4;
extern "C" __declspec(naked) void __fastcall fn_004A5C00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x0088828e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADEBE0], al
        jne short done
        or dword ptr [mem_00ADEBE0], eax
        push 0x00a36678
        push offset mem_00ADEBC4
        mov dword ptr [esp + 0x10], 0
        call ext_0066AD10
        push 0x00917e10
        call ext_006A6C87
        add esp, 0Ch
    done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADEBC4
        mov dword ptr fs:[0], ecx
        add esp, 0Ch
        ret
    }
}

// [0x004A1390] sub_004A1390 (62 bytes)
extern "C" void ext_0049F8D0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004A1390(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x4]
        mov esi, dword ptr [eax]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        cmp esi, dword ptr [edi + 0x4]
        mov dword ptr [edi + 0x8], 0
        je done_4A1390
        push ebx
        mov edi, edi
    loop_4A1390:
        mov ebx, dword ptr [esi]
        lea ecx, [esi + 0x8]
        call ext_0049F8D0
        push esi
        call ext_006A5C5C
        add esp, 4
        cmp ebx, dword ptr [edi + 0x4]
        mov esi, ebx
        jne loop_4A1390
        pop ebx
    done_4A1390:
        pop edi
        pop esi
        ret
    }
}

// [0x004A1320] sub_004A1320 (104 bytes)
extern "C" void ext_0049F8D0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004A1320(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        test ebx, ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x10], ebx
        jne L1
        call dword ptr [mem_00925134]
    L1:
        cmp esi, dword ptr [ebx + 0x4]
        jne L2
        call dword ptr [mem_00925134]
    L2:
        cmp esi, dword ptr [edi + 0x4]
        mov ebp, dword ptr [esi]
        je L3
        mov eax, dword ptr [esi + 0x4]
        mov ecx, ebp
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi + 0x4]
        lea ecx, [esi + 0x8]
        mov dword ptr [edx + 0x4], eax
        call ext_0049F8D0
        push esi
        call ext_006A5C5C
        add esp, 0x4
        add dword ptr [edi + 0x8], -0x1
    L3:
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        mov dword ptr [eax], ebx
        pop ebx
        add esp, 0x8
        ret 0xc
    }
}

extern "C" void ext_0049EB50();
extern "C" void ext_0049ED30();
extern "C" void ext_004A1320();
extern "C" int mem_00925134;

// [0x004A14D0] sub_004A14D0 (177 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A14D0(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0xe0]
        push esi
        lea esi, [ebx + 0xdc]
        mov ecx, eax
        push edi
        mov edi, dword ptr [ecx]
        mov dword ptr [esp + 0x14], edi
        mov ecx, esi
        nop

    loc_4A14F0:
        cmp edi, eax
        je short loc_4A1501
        lea edx, [edi + 8]
        cmp dword ptr [esp + 0x1c], edx
        je short loc_4A1501
        mov edi, dword ptr [edi]
        jmp short loc_4A14F0

    loc_4A1501:
        cmp esi, ecx
        je short loc_4A150B
        call dword ptr [mem_00925134]

    loc_4A150B:
        test esi, esi
        mov ebp, dword ptr [esi + 4]
        je short loc_4A1516
        cmp esi, esi
        je short loc_4A151C

    loc_4A1516:
        call dword ptr [mem_00925134]

    loc_4A151C:
        cmp edi, ebp
        je short loc_4A1577
        push edi
        push esi
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        call ext_004A1320
        mov ebp, dword ptr [esp + 0x1c]
        push ebp
        lea ecx, [ebx + 0xd0]
        call ext_0049EB50
        mov ecx, dword ptr [esi + 4]
        mov edi, dword ptr [ecx]

    loc_4A1543:
        cmp esi, esi
        mov ebx, dword ptr [esi + 4]
        je short loc_4A1550
        call dword ptr [mem_00925134]

    loc_4A1550:
        cmp edi, ebx
        je short loc_4A1577
        cmp edi, dword ptr [esi + 4]
        jne short loc_4A155F
        call dword ptr [mem_00925134]

    loc_4A155F:
        push ebp
        lea ecx, [edi + 8]
        call ext_0049ED30
        cmp edi, dword ptr [esi + 4]
        jne short loc_4A1573
        call dword ptr [mem_00925134]

    loc_4A1573:
        mov edi, dword ptr [edi]
        jmp short loc_4A1543

    loc_4A1577:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x004A7690] sub_004A7690 (476 bytes)
extern "C" void ext_00494000();
extern "C" void ext_004A5FE0();
extern "C" void ext_004E7F30();
extern "C" void ext_004E9DB0();

extern "C" __declspec(naked) void __fastcall fn_004A7690(void* self) {
    __asm {
        push -1
        push 0x888405
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esi], 0x941474
        call ext_004E7F30
        lea ebp, [esi + 0x100]
        xor ebx, ebx
        mov ecx, ebp
        mov dword ptr [esp + 0x24], ebx
        call ext_004E7F30
        push ebx
        push ebx
        push -1
        lea ecx, [esi + 0x1FC]
        mov byte ptr [esp + 0x30], 1
        call ext_00494000
        push ebx
        push ebx
        push -1
        lea ecx, [esi + 0x208]
        call ext_00494000
        mov dword ptr [esi + 0x218], ebx
        mov dword ptr [esi + 0x21C], ebx
        mov dword ptr [esi + 0x220], ebx
        mov dword ptr [esi + 0x228], ebx
        mov dword ptr [esi + 0x22C], ebx
        mov dword ptr [esi + 0x230], ebx
        mov dword ptr [esi + 0x238], ebx
        mov dword ptr [esi + 0x23C], ebx
        mov dword ptr [esi + 0x240], ebx
        mov dword ptr [esi + 0x248], ebx
        mov dword ptr [esi + 0x24C], ebx
        mov dword ptr [esi + 0x250], ebx
        mov eax, dword ptr [esp + 0x2C]
        mov dword ptr [esi + 0x254], eax
        mov dword ptr [esi + 0x258], ebx
        mov dword ptr [esi + 0x264], ebx
        mov dword ptr [esi + 0x268], ebx
        mov dword ptr [esi + 0x26C], ebx
        mov eax, 0x93C4F8
        mov dword ptr [esi + 0x25C], eax
        mov dword ptr [esi + 0x274], ebx
        mov dword ptr [esi + 0x278], ebx
        mov dword ptr [esi + 0x27C], ebx
        mov dword ptr [esi + 0x280], edi
        mov dword ptr [esi + 0x28C], ebx
        mov dword ptr [esi + 0x290], ebx
        mov dword ptr [esi + 0x294], ebx
        mov dword ptr [esi + 0x284], eax
        mov dword ptr [esi + 0x29C], ebx
        mov dword ptr [esi + 0x2A0], ebx
        mov dword ptr [esi + 0x2A4], ebx
        mov dword ptr [esi + 0x2A8], ebp
        mov dword ptr [esi + 0x2AC], ebx
        mov dword ptr [esi + 0x2B0], ebx
        mov dword ptr [esi + 0x2B4], ebx
        lea ecx, [esi + 0x2BC]
        mov byte ptr [esp + 0x24], 0xB
        mov dword ptr [esi + 0x2B8], 0x94146C
        call ext_004A5FE0
        mov dword ptr [esi + 0x2C0], eax
        mov byte ptr [eax + 0xAD], 1
        mov eax, dword ptr [esi + 0x2C0]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [esi + 0x2C0]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x2C0]
        mov dword ptr [eax + 8], eax
        mov dword ptr [esi + 0x2C4], ebx
        lea ecx, [esi + 0x2CC]
        mov byte ptr [esp + 0x24], 0xC
        mov byte ptr [esi + 0x2C8], bl
        call ext_004E9DB0
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx]
        push 8
        mov ecx, edi
        mov byte ptr [esp + 0x28], 0xD
        call eax
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 4]
        push 8
        mov ecx, edi
        call eax
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx]
        push 8
        mov ecx, ebp
        call eax
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 4]
        push 8
        mov ecx, ebp
        call eax
        mov ecx, dword ptr [esp + 0x1C]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret 4
    }
}

extern "C" void ext_0041CCC0();
extern "C" void ext_0050E360();
extern "C" void ext_00593F20();
extern "C" void ext_00594000();
extern "C" int mem_00B58DFC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

// [0x004A9E00] sub_004A9E00 (542 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A9E00(void* self) {
    __asm {
        push -1
        push 0x88891c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x3c
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        mov dword ptr [esp + 0xc], ebx
        cmp byte ptr [mem_00B58DFC], bl
        push edi
        mov ebp, ecx
        jne L_004a9ec5
        call ext_00594000
        test eax, eax
        je L_004a9ec5
        call ext_00594000
        mov ecx, eax
        call ext_00593F20
        mov ecx, dword ptr [eax + 4]
        cmp ecx, ebx
        jne L_004a9e54
        xor eax, eax
        jmp L_004a9e5c
    L_004a9e54:
        mov eax, dword ptr [eax + 8]
        sub eax, ecx
        sar eax, 2
    L_004a9e5c:
        mov edi, dword ptr [esp + 0x60]
        cmp edi, ebx
        jl L_004a9ec1
        cmp edi, eax
        jge L_004a9ec1
        push edi
        call ext_00594000
        mov ecx, eax
        call ext_00593F20
        mov ecx, eax
        call ext_0050E360
        mov esi, dword ptr [eax]
        push 0x94160c
        lea ecx, [esp + 0x34]
        add esi, 8
        call dword ptr [mem_00924FE4]
        mov edi, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov ebp, 1
        mov ecx, esi
        mov dword ptr [esp + 0x54], ebp
        call edx
        mov esi, dword ptr [esp + 0x5c]
        push eax
        push edi
        push esi
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        mov dword ptr [esp + 0x10], ebp
        lea ecx, [esp + 0x30]
        jmp L_004a9ffd
    L_004a9ec1:
        sub edi, eax
        jmp L_004a9ec9
    L_004a9ec5:
        mov edi, dword ptr [esp + 0x60]
    L_004a9ec9:
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [ebp + 0x2f8]
        cmp ecx, ebx
        mov dword ptr [esp + 0x54], 2
        je L_004a9f20
        mov eax, dword ptr [ecx + 4]
        cmp eax, ebx
        je L_004a9f20
        mov esi, dword ptr [ecx + 8]
        sub esi, eax
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jae L_004a9f20
    L_004a9f08:
        push edi
        call ext_0041CCC0
        mov esi, dword ptr [esp + 0x5c]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        jmp L_004a9ff1
    L_004a9f20:
        mov ecx, dword ptr [ebp + 0x2f4]
        cmp ecx, ebx
        je L_004a9f4d
        mov eax, dword ptr [ecx + 4]
        cmp eax, ebx
        je L_004a9f4d
        mov esi, dword ptr [ecx + 8]
        sub esi, eax
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L_004a9f08
    L_004a9f4d:
        mov edi, dword ptr [ebp + 0x308]
        cmp edi, ebx
        jl L_004a9fac
        mov ecx, dword ptr [ebp + 0x300]
        cmp ecx, ebx
        je L_004a9fac
        mov eax, dword ptr [ecx + 4]
        cmp eax, ebx
        jne L_004a9f6c
        xor eax, eax
        jmp L_004a9f84
    L_004a9f6c:
        mov esi, dword ptr [ecx + 8]
        sub esi, eax
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_004a9f84:
        cmp edi, eax
        jae L_004a9fac
        push edi
        call ext_0041CCC0
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924FDC]
        mov esi, dword ptr [esp + 0x5c]
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        jmp L_004a9ff1
    L_004a9fac:
        mov ecx, dword ptr [ebp + 0x2fc]
        cmp ecx, ebx
        je L_004a9fe5
        cmp edi, ebx
        jl L_004a9fe5
        mov eax, dword ptr [ecx + 4]
        cmp eax, ebx
        jne L_004a9fc5
        xor eax, eax
        jmp L_004a9fdd
    L_004a9fc5:
        mov esi, dword ptr [ecx + 8]
        sub esi, eax
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_004a9fdd:
        cmp edi, eax
        jb L_004a9f08
    L_004a9fe5:
        mov esi, dword ptr [esp + 0x5c]
        mov ecx, esi
        call dword ptr [mem_00924FE8]
    L_004a9ff1:
        mov dword ptr [esp + 0x10], 1
        lea ecx, [esp + 0x14]
    L_004a9ffd:
        mov byte ptr [esp + 0x54], bl
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x4c]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x48
        ret 8
    }
}

// [0x004ADD20] sub_004ADD20 (794 bytes)
extern "C" void ext_0046FF90();
extern "C" void ext_004EF730();
extern "C" void ext_00553E80();
extern "C" void ext_0059DE00();
extern "C" void ext_00667030();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004ADD20(void* self, int edx_unused, int a1, int a2, void* a3) {
    __asm {
        push    -1
        push    0x8a0d5b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x50
        mov     eax, dword ptr [esp + 0x68]
        cmp     byte ptr [eax + 0x39], 0
        push    ebx
        mov     ebx, ecx
        mov     dword ptr [esp + 4], ebx
        je      L_004addA2
        push    0x929218
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x5c], 0
        call    dword ptr [mem_009251C4]
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x60], 1
        mov     dword ptr [esp + 0x30], 0x928ecc
        call    dword ptr [mem_00924FE0]
        push    0x9ce164
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     byte ptr [esp + 0x64], 0
        mov     dword ptr [esp + 0x34], 0x928ee4
        call    ext_006A6DD2
    L_004addA2:
        push    ebp
        push    esi
        mov     ebp, eax
        push    edi
        lea     ecx, [esp + 0x74]
        mov     dword ptr [esp + 0x14], ebp
        call    ext_00667030
        mov     eax, dword ptr [ebp]
        cmp     byte ptr [eax + 0x39], 0
        je      L_004addC2
        mov     edi, dword ptr [ebp + 8]
        jmp     L_004addDA
    L_004addC2:
        mov     edx, dword ptr [ebp + 8]
        cmp     byte ptr [edx + 0x39], 0
        je      L_004addCF
        mov     edi, eax
        jmp     L_004addDA
    L_004addCF:
        mov     ecx, dword ptr [esp + 0x78]
        cmp     ecx, ebp
        mov     edi, dword ptr [ecx + 8]
        jne     L_004ADE41
    L_004addDA:
        cmp     byte ptr [edi + 0x39], 0
        mov     esi, dword ptr [ebp + 4]
        jne     L_004addE6
        mov     dword ptr [edi + 4], esi
    L_004addE6:
        mov     eax, dword ptr [ebx + 4]
        cmp     dword ptr [eax + 4], ebp
        jne     L_004addF3
        mov     dword ptr [eax + 4], edi
        jmp     L_004addFE
    L_004addF3:
        cmp     dword ptr [esi], ebp
        jne     L_004addFB
        mov     dword ptr [esi], edi
        jmp     L_004addFE
    L_004addFB:
        mov     dword ptr [esi + 8], edi
    L_004addFE:
        mov     ebx, dword ptr [ebx + 4]
        cmp     dword ptr [ebx], ebp
        jne     L_004ade1A
        cmp     byte ptr [edi + 0x39], 0
        je      L_004ade0F
        mov     eax, esi
        jmp     L_004ade18
    L_004ade0F:
        push    edi
        call    ext_0059DE00
        add     esp, 4
    L_004ade18:
        mov     dword ptr [ebx], eax
    L_004ade1A:
        mov     eax, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [eax + 4]
        cmp     dword ptr [ebx + 8], ebp
        jne     L_004ade99
        cmp     byte ptr [edi + 0x39], 0
        je      L_004ade33
        mov     eax, esi
        mov     dword ptr [ebx + 8], eax
        jmp     L_004ade99
    L_004ade33:
        push    edi
        call    ext_00553E80
        add     esp, 4
        mov     dword ptr [ebx + 8], eax
        jmp     L_004ade99
    L_004ADE41:
        mov     dword ptr [eax + 4], ecx
        mov     edx, dword ptr [ebp]
        mov     dword ptr [ecx], edx
        cmp     ecx, dword ptr [ebp + 8]
        jne     L_004ade52
        mov     esi, ecx
        jmp     L_004ade6c
    L_004ade52:
        cmp     byte ptr [edi + 0x39], 0
        mov     esi, dword ptr [ecx + 4]
        jne     L_004ade5e
        mov     dword ptr [edi + 4], esi
    L_004ade5e:
        mov     dword ptr [esi], edi
        mov     eax, dword ptr [ebp + 8]
        mov     dword ptr [ecx + 8], eax
        mov     edx, dword ptr [ebp + 8]
        mov     dword ptr [edx + 4], ecx
    L_004ade6c:
        mov     eax, dword ptr [ebx + 4]
        cmp     dword ptr [eax + 4], ebp
        jne     L_004ade79
        mov     dword ptr [eax + 4], ecx
        jmp     L_004ade87
    L_004ade79:
        mov     eax, dword ptr [ebp + 4]
        cmp     dword ptr [eax], ebp
        jne     L_004ade84
        mov     dword ptr [eax], ecx
        jmp     L_004ade87
    L_004ade84:
        mov     dword ptr [eax + 8], ecx
    L_004ade87:
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [ecx + 4], eax
        mov     dl, byte ptr [ebp + 0x38]
        mov     al, byte ptr [ecx + 0x38]
        mov     byte ptr [ecx + 0x38], dl
        mov     byte ptr [ebp + 0x38], al
    L_004ade99:
        mov     bl, 1
        cmp     byte ptr [ebp + 0x38], bl
        jne     L_004ADFA3
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx + 4]
        cmp     edi, dword ptr [eax + 4]
        je      L_004ADFA0
    L_004adeb4:
        cmp     byte ptr [edi + 0x38], bl
        jne     L_004ADFA0
        mov     eax, dword ptr [esi]
        cmp     edi, eax
        jne     L_004adf2A
        mov     eax, dword ptr [esi + 8]
        cmp     byte ptr [eax + 0x38], 0
        jne     L_004adee0
        mov     byte ptr [eax + 0x38], bl
        push    esi
        mov     byte ptr [esi + 0x38], 0
        call    ext_0046FF90
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [esp + 0x10]
    L_004adee0:
        cmp     byte ptr [eax + 0x39], 0
        jne     L_004adf5c
        mov     edx, dword ptr [eax]
        cmp     byte ptr [edx + 0x38], bl
        jne     L_004adef5
        mov     edx, dword ptr [eax + 8]
        cmp     byte ptr [edx + 0x38], bl
        je      L_004adf58
    L_004adef5:
        mov     edx, dword ptr [eax + 8]
        cmp     byte ptr [edx + 0x38], bl
        jne     L_004adf13
        mov     edx, dword ptr [eax]
        mov     byte ptr [edx + 0x38], bl
        push    eax
        mov     byte ptr [eax + 0x38], 0
        call    ext_004EF730
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [esp + 0x10]
    L_004adf13:
        mov     dl, byte ptr [esi + 0x38]
        mov     byte ptr [eax + 0x38], dl
        mov     byte ptr [esi + 0x38], bl
        mov     eax, dword ptr [eax + 8]
        push    esi
        mov     byte ptr [eax + 0x38], bl
        call    ext_0046FF90
        jmp     L_004adfa0
    L_004adf2A:
        cmp     byte ptr [eax + 0x38], 0
        jne     L_004adf43
        mov     byte ptr [eax + 0x38], bl
        push    esi
        mov     byte ptr [esi + 0x38], 0
        call    ext_004EF730
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esp + 0x10]
    L_004adf43:
        cmp     byte ptr [eax + 0x39], 0
        jne     L_004adf5c
        mov     edx, dword ptr [eax + 8]
        cmp     byte ptr [edx + 0x38], bl
        jne     L_004adf6f
        mov     edx, dword ptr [eax]
        cmp     byte ptr [edx + 0x38], bl
        jne     L_004adf6f
    L_004adf58:
        mov     byte ptr [eax + 0x38], 0
    L_004adf5c:
        mov     eax, dword ptr [ecx + 4]
        mov     edi, esi
        cmp     edi, dword ptr [eax + 4]
        mov     esi, dword ptr [esi + 4]
        jne     L_004adeb4
        jmp     L_004adfa0
    L_004adf6f:
        mov     edx, dword ptr [eax]
        cmp     byte ptr [edx + 0x38], bl
        jne     L_004adf8c
        mov     edx, dword ptr [eax + 8]
        mov     byte ptr [edx + 0x38], bl
        push    eax
        mov     byte ptr [eax + 0x38], 0
        call    ext_0046FF90
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esp + 0x10]
    L_004adf8c:
        mov     dl, byte ptr [esi + 0x38]
        mov     byte ptr [eax + 0x38], dl
        mov     byte ptr [esi + 0x38], bl
        mov     eax, dword ptr [eax]
        push    esi
        mov     byte ptr [eax + 0x38], bl
        call    ext_004EF730
    L_004adfa0:
        mov     byte ptr [edi + 0x38], bl
    L_004ADFA3:
        lea     esi, [ebp + 0xc]
        mov     dword ptr [esp + 0x18], esi
        mov     edi, dword ptr [esi + 0x20]
        xor     ebx, ebx
        cmp     edi, ebx
        mov     dword ptr [esp + 0x68], 2
        je      L_004adfe1
        mov     ebp, dword ptr [esi + 0x24]
        cmp     edi, ebp
        je      L_004adfd1
    L_004adfc2:
        mov     ecx, edi
        call    dword ptr [mem_00924FF4]
        add     edi, 0x1c
        cmp     edi, ebp
        jne     L_004adfc2
    L_004adfd1:
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    ext_006A5C5C
        mov     ebp, dword ptr [esp + 0x18]
        add     esp, 4
    L_004adfe1:
        mov     ecx, esi
        mov     dword ptr [esi + 0x20], ebx
        mov     dword ptr [esi + 0x24], ebx
        mov     dword ptr [esi + 0x28], ebx
        mov     dword ptr [esp + 0x68], 0xffffffff
        call    dword ptr [mem_00924FF4]
        push    ebp
        call    ext_006A5C5C
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ecx + 8]
        add     esp, 4
        cmp     eax, ebx
        pop     edi
        pop     esi
        pop     ebp
        jbe     L_004ae017
        add     eax, -1
        mov     dword ptr [ecx + 8], eax
    L_004ae017:
        mov     ecx, dword ptr [esp + 0x68]
        mov     eax, dword ptr [esp + 0x64]
        mov     edx, dword ptr [esp + 0x6c]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x54]
        mov     dword ptr [eax + 4], edx
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x5c
        ret     0xc
    }
}

extern "C" void ext_004A1860();
extern "C" void ext_004A1270();
extern "C" int mem_00940638;

// [0x004A1A10] sub_004A1A10 (33 bytes)
extern "C" __declspec(naked) void __cdecl fn_004A1A10(void* a1) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0x0
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_004A1860
        push    offset mem_00940638
        lea     ecx, [esp + 0x4]
        call    ext_004A1270
        pop     ecx
        ret
    }
}

// [0x004AFC20] sub_004AFC20 (53 bytes)
extern "C" void ext_004AFA00();
extern "C" void ext_004AFBF0();
extern "C" void ext_004E8340();
extern "C" void ext_004AFB60();
extern "C" void ext_004AF860();
extern "C" void ext_004AF8D0();
extern "C" __declspec(naked) void __fastcall fn_004AFC20(void* self, int edx_unused, int arg0) {
    __asm {
        push    esi
        mov     esi, ecx
        call    ext_004AFA00
        mov     ecx, esi
        call    ext_004AFBF0
        mov     eax, dword ptr [esp + 8]
        push    eax
        lea     ecx, [esi + 8]
        call    ext_004E8340
        mov     ecx, esi
        call    ext_004AFB60
        mov     ecx, esi
        call    ext_004AF860
        mov     ecx, esi
        call    ext_004AF8D0
        pop     esi
        ret     4
    }
}

// [0x004A66D0] sub_004A66D0 (55 bytes)
extern "C" void ext_004A6180();
extern "C" void ext_006A6E9E();

extern "C" void* __fastcall fn_004A66D0(void* self, int edx_unused, void* a1) {
    char* s = (char*)self;
    if (*(void**)(s + 0x258) != a1) {
        ext_004A6180();
    }
    typedef void* (__cdecl *rtdc_t)(void*, int, void*, void*, int);
    void* eax = ((rtdc_t)ext_006A6E9E)(a1, 0, (void*)0xa2e914, (void*)0xa2e93c, 0);
    *(void**)(s + 0x258) = eax;
    return eax;
}

// [0x004AEC10] sub_004AEC10 (76 bytes)
extern "C" void ext_00494000();
extern "C" void ext_004B07E0();
extern "C" __declspec(naked) void __fastcall fn_004AEC10(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x18
        push esi
        push 0
        push 0
        mov esi, ecx
        push -1
        lea ecx, [esp + 0x10]
        call ext_00494000
        push 0
        push 0
        push -1
        lea ecx, [esp + 0x1c]
        call ext_00494000
        mov edx, dword ptr [esp + 0x28]
        lea eax, [esp + 0x4]
        push eax
        mov eax, dword ptr [esp + 0x24]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x2c]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0x4]
        call ext_004B07E0
        pop esi
        add esp, 0x18
        ret 0xc
    }
}

// [0x004AEEA0] sub_004AEEA0 (140 bytes)
extern "C" void ext_004AECC0();
extern "C" void ext_00494000();
extern "C" void ext_004B07E0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004AEEA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x87ba98
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push edi
        mov edi, ecx
        call ext_004AECC0
        test eax, eax
        je L_done_4AEEA0
        push esi
        xor esi, esi
        push esi
        push esi
        push -1
        lea ecx, [esp + 0x14]
        call ext_00494000
        push esi
        push esi
        push -1
        lea ecx, [esp + 0x20]
        call ext_00494000
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x28], esi
        mov dword ptr [esp + 0x2c], esi
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, dword ptr [edi + 0x4]
        push esi
        push esi
        lea edx, [esp + 0x30]
        push edx
        mov dword ptr [esp + 0x4c], esi
        call ext_004B07E0
        mov eax, dword ptr [esp + 0x24]
        cmp eax, esi
        pop esi
        je L_done_4AEEA0
        push eax
        call ext_006A5C5C
        add esp, 0x4
L_done_4AEEA0:
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret
    }
}

// [0x004AF870] sub_004AF870 (85 bytes)
extern "C" void ext_004E7970();
extern "C" void ext_004E8340();
extern "C" __declspec(naked) void __fastcall fn_004AF870(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 8]
        push    eax
        mov     ecx, edi
        call    ext_004E8340
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [edx + 8]
        mov     ecx, edi
        call    eax
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 4], ecx
        lea     edi, [esi + 0x104]
        push    edx
        mov     ecx, edi
        call    ext_004E8340
        mov     ecx, dword ptr [esi + 4]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 4]
        push    edi
        call    edx
        mov     eax, dword ptr [esi + 0x120]
        push    0
        push    eax
        mov     ecx, edi
        call    ext_004E7970
        pop     edi
        pop     esi
        ret     0xc
    }
}

// [0x004A7520] sub_004A7520 (59 bytes)
extern "C" void ext_004A6AF0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004A7520(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x94146c
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_004A6AF0
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

// [0x004AEA80] sub_004AEA80 (59 bytes)
extern "C" void ext_004AE420();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004AEA80(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x941f10
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_004AE420
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
