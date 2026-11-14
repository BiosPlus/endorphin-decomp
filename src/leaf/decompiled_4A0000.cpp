// Decompiled translation unit: src/leaf/decompiled_4A0000.cpp

#include <string>
extern "C" void ext_004AE420();
extern "C" void ext_006A5C5C();

extern "C" void ext_006A5C5C();
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

// [0x004A5890] sub_004A5890 (77 bytes)
extern "C" void ext_005B0D90();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004A5890(void* self) {
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
        call ext_005B0D90
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

// [0x004A6350] sub_004A6350 (887 bytes)
extern "C" void ext_004A58E0();
extern "C" void ext_004A5900();
extern "C" void ext_004A5920();
extern "C" void ext_004A5C60();
extern "C" void ext_004A5CC0();
extern "C" void ext_005B0D90();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004A6350(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a0d5b
        push    eax
        mov     dword ptr fs:[0x0], esp
        mov     eax, dword ptr [esp + 0x18]
        sub     esp, 0x4c
        cmp     byte ptr [eax + 0xad], 0x0
        push    ebp
        mov     ebp, ecx
        je      L_4A63D1
        push    0x929218
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x58], 0x0
        call    dword ptr [mem_009251C4]
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esp + 0x5c], 0x1
        mov     dword ptr [esp + 0x2c], 0x928ecc
        call    dword ptr [mem_00924FE0]
        push    0x9ce164
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     byte ptr [esp + 0x60], 0x0
        mov     dword ptr [esp + 0x30], 0x928ee4
        call    ext_006A6DD2
    L_4A63D1:
        push    ebx
        push    esi
        mov     ebx, eax
        push    edi
        lea     ecx, [esp + 0x70]
        mov     dword ptr [esp + 0x10], ebx
        call    ext_004A5920
        mov     eax, dword ptr [ebx]
        cmp     byte ptr [eax + 0xad], 0x0
        je      L_4A63F3
        mov     edi, dword ptr [ebx + 0x8]
        jmp     L_4A640E
    L_4A63F3:
        mov     edx, dword ptr [ebx + 0x8]
        cmp     byte ptr [edx + 0xad], 0x0
        je      L_4A6403
        mov     edi, eax
        jmp     L_4A640E
    L_4A6403:
        mov     ecx, dword ptr [esp + 0x74]
        cmp     ecx, ebx
        mov     edi, dword ptr [ecx + 0x8]
        jne     L_4A6486
    L_4A640E:
        cmp     byte ptr [edi + 0xad], 0x0
        mov     esi, dword ptr [ebx + 0x4]
        jne     L_4A641D
        mov     dword ptr [edi + 0x4], esi
    L_4A641D:
        mov     eax, dword ptr [ebp + 0x4]
        cmp     dword ptr [eax + 0x4], ebx
        jne     L_4A642A
        mov     dword ptr [eax + 0x4], edi
        jmp     L_4A6435
    L_4A642A:
        cmp     dword ptr [esi], ebx
        jne     L_4A6432
        mov     dword ptr [esi], edi
        jmp     L_4A6435
    L_4A6432:
        mov     dword ptr [esi + 0x8], edi
    L_4A6435:
        mov     ebx, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [ebx]
        cmp     eax, dword ptr [esp + 0x10]
        jne     L_4A6458
        cmp     byte ptr [edi + 0xad], 0x0
        je      L_4A644D
        mov     eax, esi
        jmp     L_4A6456
    L_4A644D:
        push    edi
        call    ext_004A5900
        add     esp, 0x4
    L_4A6456:
        mov     dword ptr [ebx], eax
    L_4A6458:
        mov     ebx, dword ptr [ebp + 0x4]
        mov     ecx, dword ptr [esp + 0x10]
        cmp     dword ptr [ebx + 0x8], ecx
        jne     L_4A64EC
        cmp     byte ptr [edi + 0xad], 0x0
        je      L_4A6478
        mov     eax, esi
        mov     dword ptr [ebx + 0x8], eax
        jmp     L_4A64EC
    L_4A6478:
        push    edi
        call    ext_004A58E0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x8], eax
        jmp     L_4A64EC
    L_4A6486:
        mov     dword ptr [eax + 0x4], ecx
        mov     edx, dword ptr [ebx]
        mov     dword ptr [ecx], edx
        cmp     ecx, dword ptr [ebx + 0x8]
        jne     L_4A6496
        mov     esi, ecx
        jmp     L_4A64B3
    L_4A6496:
        cmp     byte ptr [edi + 0xad], 0x0
        mov     esi, dword ptr [ecx + 0x4]
        jne     L_4A64A5
        mov     dword ptr [edi + 0x4], esi
    L_4A64A5:
        mov     dword ptr [esi], edi
        mov     eax, dword ptr [ebx + 0x8]
        mov     dword ptr [ecx + 0x8], eax
        mov     edx, dword ptr [ebx + 0x8]
        mov     dword ptr [edx + 0x4], ecx
    L_4A64B3:
        mov     eax, dword ptr [ebp + 0x4]
        cmp     dword ptr [eax + 0x4], ebx
        jne     L_4A64C0
        mov     dword ptr [eax + 0x4], ecx
        jmp     L_4A64CE
    L_4A64C0:
        mov     eax, dword ptr [ebx + 0x4]
        cmp     dword ptr [eax], ebx
        jne     L_4A64CB
        mov     dword ptr [eax], ecx
        jmp     L_4A64CE
    L_4A64CB:
        mov     dword ptr [eax + 0x8], ecx
    L_4A64CE:
        mov     eax, dword ptr [ebx + 0x4]
        mov     dword ptr [ecx + 0x4], eax
        mov     dl, byte ptr [ebx + 0xac]
        mov     al, byte ptr [ecx + 0xac]
        mov     byte ptr [ecx + 0xac], dl
        mov     byte ptr [ebx + 0xac], al
    L_4A64EC:
        mov     eax, dword ptr [esp + 0x10]
        mov     bl, 0x1
        cmp     byte ptr [eax + 0xac], bl
        jne     L_4A665C
        mov     ecx, dword ptr [ebp + 0x4]
        cmp     edi, dword ptr [ecx + 0x4]
        je      L_4A6656
        _emit   0x8d
        _emit   0x9b
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    L_4A6510:
        cmp     byte ptr [edi + 0xac], bl
        jne     L_4A6656
        mov     eax, dword ptr [esi]
        cmp     edi, eax
        jne     L_4A65BB
        mov     eax, dword ptr [esi + 0x8]
        cmp     byte ptr [eax + 0xac], 0x0
        jne     L_4A654A
        mov     byte ptr [eax + 0xac], bl
        push    esi
        mov     ecx, ebp
        mov     byte ptr [esi + 0xac], 0x0
        call    ext_004A5C60
        mov     eax, dword ptr [esi + 0x8]
    L_4A654A:
        cmp     byte ptr [eax + 0xad], 0x0
        jne     L_4A6600
        mov     edx, dword ptr [eax]
        cmp     byte ptr [edx + 0xac], bl
        jne     L_4A6570
        mov     ecx, dword ptr [eax + 0x8]
        cmp     byte ptr [ecx + 0xac], bl
        je      L_4A65F9
    L_4A6570:
        mov     ecx, dword ptr [eax + 0x8]
        cmp     byte ptr [ecx + 0xac], bl
        jne     L_4A6593
        mov     byte ptr [edx + 0xac], bl
        push    eax
        mov     ecx, ebp
        mov     byte ptr [eax + 0xac], 0x0
        call    ext_004A5CC0
        mov     eax, dword ptr [esi + 0x8]
    L_4A6593:
        mov     cl, byte ptr [esi + 0xac]
        mov     byte ptr [eax + 0xac], cl
        mov     byte ptr [esi + 0xac], bl
        mov     edx, dword ptr [eax + 0x8]
        push    esi
        mov     ecx, ebp
        mov     byte ptr [edx + 0xac], bl
        call    ext_004A5C60
        jmp     L_4A6656
    L_4A65BB:
        cmp     byte ptr [eax + 0xac], 0x0
        jne     L_4A65DB
        mov     byte ptr [eax + 0xac], bl
        push    esi
        mov     ecx, ebp
        mov     byte ptr [esi + 0xac], 0x0
        call    ext_004A5CC0
        mov     eax, dword ptr [esi]
    L_4A65DB:
        cmp     byte ptr [eax + 0xad], 0x0
        jne     L_4A6600
        mov     edx, dword ptr [eax + 0x8]
        cmp     byte ptr [edx + 0xac], bl
        jne     L_4A6613
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx + 0xac], bl
        jne     L_4A6613
    L_4A65F9:
        mov     byte ptr [eax + 0xac], 0x0
    L_4A6600:
        mov     edx, dword ptr [ebp + 0x4]
        mov     edi, esi
        cmp     edi, dword ptr [edx + 0x4]
        mov     esi, dword ptr [esi + 0x4]
        jne     L_4A6510
        jmp     L_4A6656
    L_4A6613:
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx + 0xac], bl
        jne     L_4A6634
        mov     byte ptr [edx + 0xac], bl
        push    eax
        mov     ecx, ebp
        mov     byte ptr [eax + 0xac], 0x0
        call    ext_004A5C60
        mov     eax, dword ptr [esi]
    L_4A6634:
        mov     cl, byte ptr [esi + 0xac]
        mov     byte ptr [eax + 0xac], cl
        mov     byte ptr [esi + 0xac], bl
        mov     edx, dword ptr [eax]
        push    esi
        mov     ecx, ebp
        mov     byte ptr [edx + 0xac], bl
        call    ext_004A5CC0
    L_4A6656:
        mov     byte ptr [edi + 0xac], bl
    L_4A665C:
        mov     esi, dword ptr [esp + 0x10]
        add     esi, 0xc
        mov     dword ptr [esp + 0x14], esi
        lea     ecx, [esi + 0x1c]
        mov     dword ptr [esp + 0x64], 0x2
        call    ext_005B0D90
        mov     ecx, esi
        mov     dword ptr [esp + 0x64], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    ext_006A5C5C
        mov     eax, dword ptr [ebp + 0x8]
        add     esp, 0x4
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebx
        jbe     L_4A66A4
        add     eax, -0x1
        mov     dword ptr [ebp + 0x8], eax
    L_4A66A4:
        mov     ecx, dword ptr [esp + 0x64]
        mov     eax, dword ptr [esp + 0x60]
        mov     edx, dword ptr [esp + 0x68]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [eax + 0x4], edx
        pop     ebp
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x58
        ret     0xc
    }
}

extern "C" void ext_00435C70();
extern "C" void ext_0043B6E0();
extern "C" void ext_00481C50();
extern "C" void ext_004959E0();
extern "C" void ext_006A5C5C();

struct Vec4_004AFF30 {
    int pad0;
    int* first;
    int* last;
    int* end;
};

typedef int* (__thiscall *ucopy_t_004AFF30)(void*, int*, int*, int*);
typedef bool (__thiscall *buy_t_004AFF30)(void*, unsigned int);
typedef void (__thiscall *clear_t_004AFF30)(void*);
typedef void (__cdecl *copy_t_004AFF30)(int*, int*, int*);
typedef void (__cdecl *free_t_004AFF30)(void*);

// [0x004AFF30] sub_004AFF30 (293 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004AFF30(void* self, int edx_unused, const void* rhs) {
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        cmp     esi, edi
        je      L_end
        push    ebx
        mov     ebx, dword ptr [edi + 0x4]
        test    ebx, ebx
        push    ebp
        je      L_clear
        mov     ebp, dword ptr [edi + 0x8]
        mov     edx, ebp
        sub     edx, ebx
        sar     edx, 0x2
        jne     L_nonempty
    L_clear:
        call    ext_00481C50
        pop     ebp
        pop     ebx
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    L_nonempty:
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jne     L_has_first1
        xor     ecx, ecx
        jmp     L_cmp_size
    L_has_first1:
        mov     ecx, dword ptr [esi + 0x8]
        sub     ecx, eax
        sar     ecx, 0x2
    L_cmp_size:
        cmp     edx, ecx
        ja      L_check_cap
        push    eax
        push    ebp
        push    ebx
        call    ext_0043B6E0
        mov     eax, dword ptr [edi + 0x4]
        add     esp, 0xc
        test    eax, eax
        jne     L_rhs_nonnull
        mov     eax, dword ptr [esi + 0x4]
        pop     ebp
        xor     edi, edi
        lea     ecx, [eax + 4*edi]
        pop     ebx
        pop     edi
        mov     dword ptr [esi + 0x8], ecx
        mov     eax, esi
        pop     esi
        ret     0x4
    L_rhs_nonnull:
        mov     edi, dword ptr [edi + 0x8]
        sub     edi, eax
        mov     eax, dword ptr [esi + 0x4]
        pop     ebp
        sar     edi, 0x2
        lea     ecx, [eax + 4*edi]
        pop     ebx
        pop     edi
        mov     dword ptr [esi + 0x8], ecx
        mov     eax, esi
        pop     esi
        ret     0x4
    L_check_cap:
        test    eax, eax
        jne     L_has_first2
        xor     ecx, ecx
        jmp     L_cmp_cap
    L_has_first2:
        mov     ecx, dword ptr [esi + 0xc]
        sub     ecx, eax
        sar     ecx, 0x2
    L_cmp_cap:
        cmp     edx, ecx
        ja      L_realloc
        test    eax, eax
        jne     L_has_first3
        xor     ecx, ecx
        jmp     L_copy_ucopy
    L_has_first3:
        mov     ecx, dword ptr [esi + 0x8]
        sub     ecx, eax
        sar     ecx, 0x2
    L_copy_ucopy:
        mov     edx, ebx
        push    eax
        lea     ebx, [edx + 4*ecx]
        push    ebx
        push    edx
        call    ext_0043B6E0
        mov     edx, dword ptr [esi + 0x8]
        mov     eax, dword ptr [edi + 0x8]
        add     esp, 0xc
        push    edx
        push    eax
        push    ebx
        mov     ecx, esi
        call    ext_004959E0
        pop     ebp
        pop     ebx
        mov     dword ptr [esi + 0x8], eax
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    L_realloc:
        test    eax, eax
        je      L_after_free
        push    eax
        call    ext_006A5C5C
        add     esp, 0x4
    L_after_free:
        mov     ecx, dword ptr [edi + 0x4]
        test    ecx, ecx
        jne     L_rhs_nonnull2
        xor     eax, eax
        jmp     L_buy
    L_rhs_nonnull2:
        mov     eax, dword ptr [edi + 0x8]
        sub     eax, ecx
        sar     eax, 0x2
    L_buy:
        push    eax
        mov     ecx, esi
        call    ext_00435C70
        test    al, al
        je      L_done_pop2
        mov     ecx, dword ptr [esi + 0x4]
        mov     edx, dword ptr [edi + 0x8]
        mov     eax, dword ptr [edi + 0x4]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    ext_004959E0
        mov     dword ptr [esi + 0x8], eax
    L_done_pop2:
        pop     ebp
        pop     ebx
    L_end:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}

// [0x004A71F0] sub_004A71F0 (75 bytes)
extern "C" void ext_004A6E20();
extern "C" void ext_00596660();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __cdecl fn_004A71F0() {
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        mov     ebp, dword ptr [mem_00925134]
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        mov     edi, dword ptr [esi + 0x8]
        cmp     dword ptr [esi + 0x4], edi
        jbe     L_1
        call    ebp
    L_1:
        mov     ebx, dword ptr [esi + 0x4]
        cmp     ebx, dword ptr [esi + 0x8]
        jbe     L_2
        call    ebp
    L_2:
        push    edi
        push    esi
        push    ebx
        push    esi
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    ext_00596660
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        push    esi
        call    ext_004A6E20
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }
}

// [0x004A5A80] sub_004A5A80 (111 bytes)
extern "C" void ext_006453B0();
extern "C" __declspec(naked) void* __fastcall fn_004A5A80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x891cab
        push eax
        mov fs:[0], esp
        push esi
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je lbl_null
        cmp dword ptr [esi + 0x158], 0
        je lbl_null
        push 0xc
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x14], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je lbl_null
        push esi
        mov ecx, eax
        call ext_006453B0
        mov ecx, dword ptr [esp + 4]
        mov fs:[0], ecx
        pop esi
        add esp, 0xc
        ret 4
    lbl_null:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov fs:[0], ecx
        pop esi
        add esp, 0xc
        ret 4
    }
}

// [0x004AD9C0] sub_004AD9C0 (81 bytes)
extern "C" int mem_00924FE0;
extern "C" void ext_00402800();
extern "C" __declspec(naked) void __fastcall fn_004AD9C0(void* self) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x8], esi
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x14], 0
        call ext_00402800
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x004ADA20] sub_004ADA20 (82 bytes)
extern "C" void ext_00402800();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_004ADA20(void* self, int edx_unused, const void* a1) {
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
        call ext_00402800
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x004A82D0] sub_004A82D0 (82 bytes)
extern "C" void ext_0048C080();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_004A82D0(void* self, int edx_unused, const void* a1) {
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
        call ext_0048C080
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x004A0270] sub_004A0270 (94 bytes)
extern "C" void ext_0049FBF0();
extern "C" void ext_004A0270();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004A0270(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr [ebx + 0xfc], eax
        call ext_0049FBF0
        mov ecx, dword ptr [ebx + 0xe0]
        mov esi, dword ptr [ecx]
        lea edi, [ebx + 0xdc]
    loop_head_270:
        cmp edi, edi
        mov ebp, dword ptr [edi + 4]
        je skip_inv_a_270
        call dword ptr [mem_00925134]
    skip_inv_a_270:
        cmp esi, ebp
        je done_270
        cmp esi, dword ptr [edi + 4]
        jne skip_inv_b_270
        call dword ptr [mem_00925134]
    skip_inv_b_270:
        push ebx
        lea ecx, [esi + 8]
        call ext_004A0270
        cmp esi, dword ptr [edi + 4]
        jne skip_inv_c_270
        call dword ptr [mem_00925134]
    skip_inv_c_270:
        mov esi, dword ptr [esi]
        jmp loop_head_270
    done_270:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x004A7630] sub_004A7630 (95 bytes)
extern "C" void ext_004A5A00();
extern "C" void ext_005A6300();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __cdecl fn_004A7630(void* a1, void* a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ebx + 4]
        cmp esi, dword ptr [ebx + 8]
        push edi
        jbe L_4a7648
        call ebp
    L_4a7648:
        mov edi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], edi
        jbe L_4a7652
        call ebp
    L_4a7652:
        cmp esi, edi
        je L_4a768a
        cmp esi, dword ptr [ebx + 8]
        jb L_4a765d
        call ebp
    L_4a765d:
        mov eax, dword ptr [esi]
        push eax
        call ext_004A5A00
        add esp, 4
        test eax, eax
        mov dword ptr [esp + 0x18], eax
        je L_4a767e
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        call ext_005A6300
    L_4a767e:
        cmp esi, dword ptr [ebx + 8]
        jb L_4a7685
        call ebp
    L_4a7685:
        add esi, 4
        jmp L_4a7648
    L_4a768a:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

extern "C" void ext_0046B190();
extern "C" void ext_00594000();
extern "C" void ext_00596660();
extern "C" void ext_0059DED0();
extern "C" void ext_005A1600();
extern "C" void ext_00642680();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_00662100();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

// [0x004A8030] sub_004A8030 (363 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A8030(void* self) {
    __asm {
        push -1
        push 0x888500
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, ecx
        xor ecx, ecx
        push esi
        push edi
        mov dword ptr [esp + 0x1c], ecx
        mov dword ptr [esp + 0x20], ecx
        mov dword ptr [esp + 0x24], ecx
        push ecx
        lea eax, [esp + 0x1c]
        push eax
        mov edx, eax
        xor esi, esi
        push esi
        push edx
        lea eax, [esp + 0x20]
        mov dword ptr [esp + 0x40], ecx
        push eax
        mov ecx, edx
        call ext_00596660
        lea ecx, [ebp + 0x234]
        push ecx
        lea edx, [esp + 0x1c]
        push edx
        call ext_0046B190
        add esp, 8
        call ext_00594000
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [eax + 0x26c]
        mov byte ptr [eax + 4], 1
        mov ebx, 0xf
    L_4a80a4:
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        cmp ecx, eax
        mov edi, eax
        jbe L_4a80c0
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
    L_4a80c0:
        cmp ecx, eax
        mov esi, ecx
        jbe L_4a80cc
        call dword ptr [mem_00925134]
    L_4a80cc:
        cmp esi, edi
        je L_4a80de
    L_4a80d0:
        mov ecx, dword ptr [esi]
        call ext_0059DED0
        add esi, 4
        cmp esi, edi
        jne L_4a80d0
    L_4a80de:
        mov ecx, dword ptr [ebp + 0x254]
        add ecx, 0xd4
        call ext_00642680
        sub ebx, 1
        jne L_4a80a4
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        cmp ecx, eax
        mov edi, eax
        jbe L_4a8110
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
    L_4a8110:
        cmp ecx, eax
        mov esi, ecx
        jbe L_4a811c
        call dword ptr [mem_00925134]
    L_4a811c:
        cmp esi, edi
        je L_4a812e
    L_4a8120:
        mov ecx, dword ptr [esi]
        call ext_005A1600
        add esi, 4
        cmp esi, edi
        jne L_4a8120
    L_4a812e:
        mov eax, dword ptr [ebp + 0x254]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov edi, dword ptr [esp + 0x10]
        mov eax, dword ptr [edx + 0x1d8]
        add edi, 0x168
        call eax
        mov esi, eax
        mov ecx, esi
        mov dword ptr [esp + 0x10], esi
        call ext_0065C640
        mov ecx, edi
        mov byte ptr [esp + 0x30], 1
        call ext_00662100
        mov ecx, esi
        mov byte ptr [ebp + 0xfc], 1
        mov byte ptr [esp + 0x30], 0
        call ext_0065C650
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        je L_4a818c
        push eax
        call ext_006A5C5C
        add esp, 4
    L_4a818c:
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr fs:[0], ecx
        add esp, 0x24
        ret
    }
}

// [0x004A7C20] sub_004A7C20 (1026 bytes)
extern "C" void ext_0046B190();
extern "C" void ext_004A5F70();
extern "C" void ext_00586D00();
extern "C" void ext_00594000();
extern "C" void ext_005A13C0();
extern "C" void ext_005A1150();
extern "C" void ext_00645220();
extern "C" void ext_006452D0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" int mem_009251EC;
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_004A7C20(void* self) {
    __asm {
        push -1
        push 0x87ba98
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        lea ebx, [ecx + 0x224]
        push esi
        mov esi, dword ptr [ebx + 4]
        cmp esi, dword ptr [ebx + 8]
        push edi
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x10], ebx
        jbe LA4A7C60
        call ebp
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
LA4A7C60:
        mov edi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], edi
        jbe LA4A7C6A
        call ebp
LA4A7C6A:
        cmp ebx, ebx
        je LA4A7C70
        call ebp
LA4A7C70:
        cmp esi, edi
        je LA4A7C8E
        cmp esi, dword ptr [ebx + 8]
        jb LA4A7C7B
        call ebp
LA4A7C7B:
        mov ecx, dword ptr [esi]
        call ext_006452D0
        cmp esi, dword ptr [ebx + 8]
        jb LA4A7C89
        call ebp
LA4A7C89:
        add esi, 4
        jmp LA4A7C60
LA4A7C8E:
        mov esi, dword ptr [esp + 0x14]
        mov edi, dword ptr [esi + 0x21c]
        add esi, 0x214
        cmp dword ptr [esi + 4], edi
        jbe LA4A7CA5
        call ebp
LA4A7CA5:
        mov ebx, dword ptr [esi + 4]
        cmp ebx, dword ptr [esi + 8]
        jbe LA4A7CAF
        call ebp
LA4A7CAF:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_004A5F70
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        jbe LA4A7CC4
        call ebp
LA4A7CC4:
        mov ebx, dword ptr [esi + 4]
        cmp ebx, dword ptr [esi + 8]
        jbe LA4A7CCE
        call ebp
LA4A7CCE:
        cmp ebx, edi
        je LA4A7CF8
        mov eax, dword ptr [esi + 8]
        sub eax, edi
        sar eax, 2
        test eax, eax
        lea ecx, [eax*4]
        lea ebp, [ebx + ecx]
        jle LA4A7CF5
        push ecx
        push edi
        push ecx
        push ebx
        call dword ptr [mem_009251EC]
        add esp, 0x10
LA4A7CF5:
        mov dword ptr [esi + 8], ebp
LA4A7CF8:
        mov ebx, dword ptr [mem_00925134]
        xor eax, eax
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], eax
        mov ebp, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x30], eax
        add ebp, 0x234
        lea eax, [esp + 0x18]
        push ebp
        push eax
        call ext_0046B190
        mov esi, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x28]
        add esp, 8
        cmp esi, eax
        jbe LA4A7D40
        call ebx
        mov eax, dword ptr [esp + 0x20]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
LA4A7D40:
        cmp dword ptr [esp + 0x1c], eax
        mov edi, eax
        jbe LA4A7D4E
        call ebx
        mov eax, dword ptr [esp + 0x20]
LA4A7D4E:
        cmp esi, edi
        je LA4A7D8B
        cmp esi, eax
        jb LA4A7D58
        call ebx
LA4A7D58:
        mov ecx, dword ptr [esi]
        add ecx, 4
        call ext_00586D00
        cmp esi, dword ptr [esp + 0x20]
        jb LA4A7D6A
        call ebx
LA4A7D6A:
        mov ecx, dword ptr [mem_00B40640]
        push ecx
        mov ecx, dword ptr [esi]
        call ext_005A13C0
        mov eax, dword ptr [esp + 0x20]
        cmp esi, eax
        jb LA4A7D86
        call ebx
        mov eax, dword ptr [esp + 0x20]
LA4A7D86:
        add esi, 4
        jmp LA4A7D40
LA4A7D8B:
        call ext_00594000
        mov edi, eax
        mov esi, dword ptr [edi + 0x23c]
        add edi, 0x238
        cmp esi, dword ptr [edi + 8]
        jbe LA4A7DA5
        call ebx
LA4A7DA5:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe LA4A7DB3
        call dword ptr [mem_00925134]
LA4A7DB3:
        cmp esi, ebx
        je LA4A7DE2
        cmp esi, dword ptr [edi + 8]
        jb LA4A7DC2
        call dword ptr [mem_00925134]
LA4A7DC2:
        mov edx, dword ptr [mem_00B40640]
        mov ecx, dword ptr [esi]
        push edx
        push 7
        call ext_005A1150
        cmp esi, dword ptr [edi + 8]
        jb LA4A7DDD
        call dword ptr [mem_00925134]
LA4A7DDD:
        add esi, 4
        jmp LA4A7DA5
LA4A7DE2:
        mov eax, dword ptr [esp + 0x10]
        mov esi, dword ptr [eax + 4]
        cmp esi, dword ptr [eax + 8]
        jbe LA4A7DF8
        call dword ptr [mem_00925134]
LA4A7DF4:
        mov eax, dword ptr [esp + 0x10]
LA4A7DF8:
        mov edi, dword ptr [eax + 8]
        cmp dword ptr [eax + 4], edi
        jbe LA4A7E0A
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x10]
LA4A7E0A:
        cmp eax, eax
        je LA4A7E18
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x10]
LA4A7E18:
        cmp esi, edi
        je LA4A7E42
        cmp esi, dword ptr [eax + 8]
        jb LA4A7E27
        call dword ptr [mem_00925134]
LA4A7E27:
        mov ecx, dword ptr [esi]
        call ext_00645220
        mov eax, dword ptr [esp + 0x10]
        cmp esi, dword ptr [eax + 8]
        jb LA4A7E3D
        call dword ptr [mem_00925134]
LA4A7E3D:
        add esi, 4
        jmp LA4A7DF4
LA4A7E42:
        mov esi, dword ptr [ebp + 4]
        cmp esi, dword ptr [ebp + 8]
        jbe LA4A7E50
        call dword ptr [mem_00925134]
LA4A7E50:
        mov edi, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], edi
        jbe LA4A7E5E
        call dword ptr [mem_00925134]
LA4A7E5E:
        cmp ebp, ebp
        je LA4A7E68
        call dword ptr [mem_00925134]
LA4A7E68:
        cmp esi, edi
        je LA4A7EAC
        cmp esi, dword ptr [ebp + 8]
        mov edi, dword ptr [mem_00925134]
        jb LA4A7E79
        call edi
LA4A7E79:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [edx + 0x24]
        push 0
        call eax
        cmp esi, dword ptr [ebp + 8]
        jb LA4A7E8F
        call edi
LA4A7E8F:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [edx + 0x28]
        push 1
        push 0
        call eax
        cmp esi, dword ptr [ebp + 8]
        jb LA4A7EA7
        call edi
LA4A7EA7:
        add esi, 4
        jmp LA4A7E50
LA4A7EAC:
        mov edi, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], edi
        jbe LA4A7EBA
        call dword ptr [mem_00925134]
LA4A7EBA:
        mov esi, dword ptr [ebp + 4]
        cmp esi, dword ptr [ebp + 8]
        jbe LA4A7EC8
        call dword ptr [mem_00925134]
LA4A7EC8:
        cmp esi, edi
        je LA4A7EF2
        mov eax, dword ptr [ebp + 8]
        sub eax, edi
        sar eax, 2
        test eax, eax
        lea ecx, [eax*4]
        lea ebx, [esi + ecx]
        jle LA4A7EEF
        push ecx
        push edi
        push ecx
        push esi
        call dword ptr [mem_009251EC]
        add esp, 0x10
LA4A7EEF:
        mov dword ptr [ebp + 8], ebx
LA4A7EF2:
        mov edx, dword ptr [esp + 0x14]
        mov edi, dword ptr [edx + 0x24c]
        cmp dword ptr [edx + 0x248], edi
        jbe LA4A7F0E
        call dword ptr [mem_00925134]
        mov edx, dword ptr [esp + 0x14]
LA4A7F0E:
        mov esi, dword ptr [edx + 0x248]
        cmp esi, dword ptr [edx + 0x24c]
        jbe LA4A7F26
        call dword ptr [mem_00925134]
        mov edx, dword ptr [esp + 0x14]
LA4A7F26:
        cmp esi, edi
        je LA4A7F5A
        mov eax, dword ptr [edx + 0x24c]
        sub eax, edi
        sar eax, 2
        test eax, eax
        lea ecx, [eax*4]
        lea ebx, [esi + ecx]
        jle LA4A7F54
        push ecx
        push edi
        push ecx
        push esi
        call dword ptr [mem_009251EC]
        mov edx, dword ptr [esp + 0x24]
        add esp, 0x10
LA4A7F54:
        mov dword ptr [edx + 0x24c], ebx
LA4A7F5A:
        mov eax, dword ptr [esp + 0x10]
        mov esi, dword ptr [eax + 4]
        cmp esi, dword ptr [eax + 8]
        jbe LA4A7F70
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x10]
LA4A7F70:
        mov edi, dword ptr [eax + 8]
        cmp dword ptr [eax + 4], edi
        jbe LA4A7F82
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x10]
LA4A7F82:
        cmp eax, eax
        je LA4A7F90
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x10]
LA4A7F90:
        cmp esi, edi
        je LA4A7FFE
        cmp esi, dword ptr [eax + 8]
        mov ebx, dword ptr [mem_00925134]
        jb LA4A7FA1
        call ebx
LA4A7FA1:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x20c]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push 5
        call edx
        mov edi, dword ptr [esp + 0x10]
        cmp esi, dword ptr [edi + 8]
        jb LA4A7FC2
        call ebx
LA4A7FC2:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax]
        mov edx, dword ptr [eax + 0xc]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [edx + 0x24]
        push 5
        call eax
        cmp esi, dword ptr [edi + 8]
        jb LA4A7FDA
        call ebx
LA4A7FDA:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [edx + 0x28]
        push 1
        push 5
        call eax
        cmp esi, dword ptr [edi + 8]
        jb LA4A7FF4
        call ebx
LA4A7FF4:
        add esi, 4
        mov eax, edi
        jmp LA4A7F70
LA4A7FFE:
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        je LA4A8013
        push eax
        call ext_006A5C5C
        add esp, 4
LA4A8013:
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr fs:[0], ecx
        add esp, 0x24
        ret
    }
}

extern "C" int mem_008890B6;
extern "C" int mem_00941F44;
extern "C" void ext_005A6300();

// [0x004AF600] sub_004AF600 (99 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AF600(void* self) {
    __asm {
        push -1
        push offset mem_008890B6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        xor ecx, ecx
        mov dword ptr [esi], offset mem_00941F44
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi + 0x8], ecx
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esi + 0xc], ecx
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [eax + 0x224]
        mov byte ptr [esp + 0x14], 1
        mov dword ptr [esp + 0x1c], esi
        call ext_005A6300
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x004A02D0] sub_004A02D0 (118 bytes)
extern "C" void ext_0041A920();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004A02D0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0xc8]
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        lea ebx, [ecx + 0xc4]
        push esi
        mov esi, dword ptr [eax]
        push edi
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loop_top:
        cmp ebx, ebx
        mov edi, dword ptr [ebx + 0x4]
        je skip1
        call ebp
skip1:
        cmp esi, edi
        je done
        cmp esi, dword ptr [ebx + 0x4]
        jne skip2
        call ebp
skip2:
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [esp + 0x18]
        mov edx, dword ptr [edx + 0x54]
        lea edi, [esi + 0x8]
        push eax
        mov ecx, edi
        call edx
        test al, al
        je skip3
        cmp esi, dword ptr [ebx + 0x4]
        jne skip4
        call ebp
skip4:
        mov ecx, dword ptr [esp + 0x1c]
        lea eax, [esp + 0x10]
        push eax
        mov dword ptr [esp + 0x14], edi
        call ext_0041A920
skip3:
        cmp esi, dword ptr [ebx + 0x4]
        jne skip5
        call ebp
skip5:
        mov esi, dword ptr [esi]
        jmp loop_top
done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
    }
}

// [0x004AF4D0] sub_004AF4D0 (151 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00494000();
extern "C" void ext_004B07E0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004AF4D0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x87ba98
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x28
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x2c], edi
        lea eax, [esp + 0x44]
        push eax
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x3c], edi
        call ext_0041A920
        push edi
        push edi
        push -1
        lea ecx, [esp + 0x14]
        call ext_00494000
        push edi
        push edi
        push -1
        lea ecx, [esp + 0x20]
        call ext_00494000
        mov eax, dword ptr [esp + 0x40]
        lea ecx, [esp + 0x8]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        push edi
        push eax
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, dword ptr [esi + 0x4]
        call ext_004B07E0
        mov eax, dword ptr [esp + 0x24]
        cmp eax, edi
        pop edi
        pop esi
        je skip_free_4AF4D0
        push eax
        call ext_006A5C5C
        add esp, 4
    skip_free_4AF4D0:
        mov ecx, dword ptr [esp + 0x28]
        mov fs:[0], ecx
        add esp, 0x34
        ret 8
    }
}

// [0x004AF390] sub_004AF390 (152 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00494000();
extern "C" void ext_004B07E0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004AF390(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x87ba98
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x28
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x2c], edi
        lea eax, [esp + 0x44]
        push eax
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x3c], edi
        call ext_0041A920
        push edi
        push edi
        push -1
        lea ecx, [esp + 0x14]
        call ext_00494000
        push edi
        push edi
        push -1
        lea ecx, [esp + 0x20]
        call ext_00494000
        mov eax, dword ptr [esp + 0x40]
        lea ecx, [esp + 0x8]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        push 2
        push eax
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, dword ptr [esi + 4]
        call ext_004B07E0
        mov eax, dword ptr [esp + 0x24]
        cmp eax, edi
        pop edi
        pop esi
        je done
        push eax
        call ext_006A5C5C
        add esp, 4
    done:
        mov ecx, dword ptr [esp + 0x28]
        mov fs:[0], ecx
        add esp, 0x34
        ret 8
    }
}

// [0x004AF430] sub_004AF430 (152 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AF430(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x87ba98
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x28
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x2c], edi
        lea eax, [esp + 0x44]
        push eax
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x3c], edi
        call ext_0041A920
        push edi
        push edi
        push -1
        lea ecx, [esp + 0x14]
        call ext_00494000
        push edi
        push edi
        push -1
        lea ecx, [esp + 0x20]
        call ext_00494000
        mov eax, dword ptr [esp + 0x40]
        lea ecx, [esp + 0x8]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        push 3
        push eax
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, dword ptr [esi + 4]
        call ext_004B07E0
        mov eax, dword ptr [esp + 0x24]
        cmp eax, edi
        pop edi
        pop esi
        je done
        push eax
        call ext_006A5C5C
        add esp, 4
    done:
        mov ecx, dword ptr [esp + 0x28]
        mov fs:[0], ecx
        add esp, 0x34
        ret 8
    }
}

// [0x004AC270] sub_004AC270 (566 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" void ext_004ABFF0();
extern "C" void ext_004EC300();
extern "C" void ext_006690D0();
extern "C" void ext_00669B50();
extern "C" void ext_00682E00();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FC4;
extern "C" int mem_00AD89B8;
extern "C" int mem_00AD89B4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_00888AC5;
extern "C" int mem_00ADF5C4;
extern "C" int mem_0093F96C;
extern "C" int mem_0093F978;
extern "C" int mem_009D3748;
extern "C" int mem_00ADF9BC;
extern "C" int mem_00ADF9E0;
extern "C" int mem_004AC400;

extern "C" __declspec(naked) void __fastcall fn_004AC270(void* self) {
    __asm {
        push	ebp
        mov	ebp, esp
        push	-0x1
        push offset mem_00888AC5
        mov	eax, dword ptr fs:[0]
        push	eax
        mov	dword ptr fs:[0], esp
        sub	esp, 0xb0
        push	ebx
        push	esi
        push	edi
        mov	edi, ecx
        mov	dword ptr [ebp - 0x10], esp
        lea	ebx, [edi + 0x30c]
        push offset mem_00ADF5C4
        push	ebx
        mov	dword ptr [ebp - 0x14], edi
        mov	dword ptr [ebp - 0x20], ebx
        call dword ptr [mem_00924FC4]
        add	esp, 0x8
        test	al, al
        jne loc_004AC495
        mov ecx, dword ptr [mem_00AD89B8]
        test	ecx, ecx
        mov	dword ptr [ebp - 0x1c], ecx
        mov	byte ptr [ebp - 0x18], 0x1
        je loc_004AC2E6
        cmp dword ptr [mem_00AD89B4], 0
        jne loc_004AC2DF
        mov	byte ptr [ecx + 0x153], 0x1
        call ext_00472350
    loc_004AC2DF:
        add dword ptr [mem_00AD89B4], 1
    loc_004AC2E6:
        mov	dword ptr [ebp - 0x4], 0x0
        call ext_006690D0
        lea	ecx, [ebp - 0x58]
        mov	esi, eax
        call dword ptr [mem_00924FE8]
        push offset mem_0093F96C
        lea	ecx, [ebp - 0x3c]
        mov	byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FE4]
        push offset mem_0093F978
        lea	ecx, [ebp - 0x78]
        mov	byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FE4]
        lea	eax, [ebp - 0x58]
        push	eax
        push	ebx
        lea	ecx, [ebp - 0x3c]
        push	ecx
        lea	edx, [ebp - 0x78]
        push	edx
        mov	ecx, esi
        mov	byte ptr [ebp - 0x4], 0x3
        call ext_00669B50
        lea	ecx, [ebp - 0x78]
        mov	bl, al
        mov	byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF4]
        lea	ecx, [ebp - 0x3c]
        mov	byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        test	bl, bl
        jne loc_004AC38F
        push offset mem_0093F978
        lea	ecx, [ebp - 0x3c]
        call dword ptr [mem_00924FE4]
        mov	eax, dword ptr [ebp - 0x20]
        push	eax
        lea	ecx, [ebp - 0x3c]
        push	ecx
        lea	ecx, [ebp - 0xbc]
        mov	byte ptr [ebp - 0x4], 0x4
        call ext_0041FF30
        push offset mem_009D3748
        lea	edx, [ebp - 0xbc]
        push	edx
        call ext_006A6DD2
    loc_004AC38F:
        lea	eax, [ebp - 0x58]
        push	eax
        lea	esi, [edi + 0x344]
        push	esi
        call dword ptr [mem_00924FC4]
        add	esp, 0x8
        test	al, al
        jne loc_004AC465
        mov	ecx, dword ptr [edi + 0x180]
        mov	edx, dword ptr [ecx]
        mov	edx, dword ptr [edx + 0x20]
        lea	eax, [ebp - 0x58]
        push	eax
        mov	byte ptr [ebp - 0x4], 0x5
        call	edx
        lea	eax, [ebp - 0x58]
        push	eax
        mov	ecx, esi
        call dword ptr [mem_00924FDC]
        mov	dword ptr [ebp - 0x4], 0x1
        jmp loc_004AC403
        mov ecx, dword ptr [mem_00924E90]
        mov	edx, dword ptr [ebp - 0x5c]
        mov eax, dword ptr [mem_00924FA0]
        push	ecx
        add	edx, 0xc
        push	edx
        push	eax
        call dword ptr [mem_00924E94]
        add	esp, 0x8
        mov	ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, offset mem_004AC400
        __asm _emit 0xC3
        mov	edi, dword ptr [ebp - 0x14]
    loc_004AC403:
        lea	ecx, [edi + 0x328]
        push	ecx
        mov	ecx, dword ptr [edi + 0x180]
        call ext_004EC300
        mov esi, offset mem_00ADF9BC
        mov	bl, 0x7
        jmp loc_004AC423
        mov edi, edi
    loc_004AC420:
        mov	edi, dword ptr [ebp - 0x14]
    loc_004AC423:
        mov	edx, dword ptr [esi]
        push	edx
        mov	ecx, edi
        call ext_004ABFF0
        mov	edi, eax
        test	edi, edi
        je loc_004AC45A
        mov	eax, dword ptr [esi]
        push	eax
        lea	ecx, [ebp - 0x3c]
        call dword ptr [mem_00924FE4]
        lea	ecx, [ebp - 0x3c]
        push	ecx
        mov	ecx, edi
        mov	byte ptr [ebp - 0x4], bl
        call ext_00682E00
        lea	ecx, [ebp - 0x3c]
        mov	byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
    loc_004AC45A:
        add	esi, 0x4
        cmp esi, offset mem_00ADF9E0
        jl loc_004AC420
    loc_004AC465:
        lea	ecx, [ebp - 0x58]
        mov	byte ptr [ebp - 0x4], 0x0
        call dword ptr [mem_00924FF4]
        mov	ecx, dword ptr [ebp - 0x1c]
        test	ecx, ecx
        mov	dword ptr [ebp - 0x4], 0xffffffff
        je loc_004AC495
        sub dword ptr [mem_00AD89B4], 1
        jne loc_004AC495
        mov	byte ptr [ecx + 0x153], 0x0
        call ext_0046F930
    loc_004AC495:
        mov	ecx, dword ptr [ebp - 0xc]
        pop	edi
        pop	esi
        mov	dword ptr fs:[0], ecx
        pop	ebx
        mov	esp, ebp
        pop	ebp
        ret
    }
}

// [0x004AC8B0] sub_004AC8B0 (313 bytes)
extern "C" void ext_006690D0();
extern "C" void ext_00669B50();
extern "C" void ext_004A9CE0();
extern "C" void ext_004A9E00();
extern "C" void ext_004AC270();
extern "C" int mem_00888C14;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FDC;
extern "C" int mem_00AE29D0;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_0093F96C;
extern "C" int mem_0093F978;

extern "C" __declspec(naked) void __fastcall fn_004AC8B0(void* self, int edx_unused, void* a1) {
    __asm {
        push	ebp
        mov	ebp, esp
        push	-0x1
        push	offset mem_00888C14
        mov	eax, dword ptr fs:[0]
        push	eax
        mov	dword ptr fs:[0], esp
        sub	esp, 0x5c
        push	ebx
        push	esi
        push	edi
        mov	dword ptr [ebp - 0x10], esp
        mov	edi, ecx
        mov	dword ptr [ebp - 0x4], 0
        call	ext_006690D0
        lea	ecx, [ebp - 0x68]
        mov	esi, eax
        call	dword ptr [mem_00924FE8]
        push	offset mem_0093F96C
        lea	ecx, [ebp - 0x4c]
        mov	byte ptr [ebp - 0x4], 1
        call	dword ptr [mem_00924FE4]
        push	offset mem_0093F978
        lea	ecx, [ebp - 0x30]
        mov	byte ptr [ebp - 0x4], 2
        call	dword ptr [mem_00924FE4]
        mov	ecx, dword ptr [ebp + 0x8]
        lea	eax, [ebp - 0x68]
        push	eax
        push	ecx
        lea	edx, [ebp - 0x4c]
        push	edx
        lea	eax, [ebp - 0x30]
        push	eax
        mov	ecx, esi
        mov	byte ptr [ebp - 0x4], 3
        call	ext_00669B50
        lea	ecx, [ebp - 0x30]
        mov	bl, al
        mov	byte ptr [ebp - 0x4], 2
        call	dword ptr [mem_00924FF4]
        lea	ecx, [ebp - 0x4c]
        mov	byte ptr [ebp - 0x4], 1
        call	dword ptr [mem_00924FF4]
        test	bl, bl
        je	L_AC99E
        mov	ecx, dword ptr [ebp + 0x8]
        push	ecx
        lea	ecx, [edi + 0x30c]
        call	dword ptr [mem_00924FDC]
        mov	ecx, edi
        call	ext_004A9CE0
        push	eax
        lea	edx, [ebp - 0x4c]
        push	edx
        mov	ecx, edi
        call	ext_004A9E00
        lea	eax, [ebp - 0x4c]
        push	eax
        lea	ecx, [edi + 0x30]
        mov	byte ptr [ebp - 0x4], 4
        call	dword ptr [mem_00924FDC]
        mov	ecx, edi
        call	ext_004AC270
        mov	eax, dword ptr [mem_00AE29D0]
        test	eax, eax
        je	L_AC991
        mov	byte ptr [eax + 0x4], 1
L_AC991:
        lea	ecx, [ebp - 0x4c]
        mov	byte ptr [ebp - 0x4], 1
        call	dword ptr [mem_00924FF4]
L_AC99E:
        lea	ecx, [ebp - 0x68]
        mov	byte ptr [ebp - 0x4], 0
        call	dword ptr [mem_00924FF4]
        mov	ecx, dword ptr [ebp - 0xc]
        pop	edi
        pop	esi
        mov	dword ptr fs:[0], ecx
        pop	ebx
        mov	esp, ebp
        pop	ebp
        ret	0x4
        mov	ecx, dword ptr [mem_00924E90]
        mov	edx, dword ptr [ebp - 0x14]
        mov	eax, dword ptr [mem_00924FA0]
        push	ecx
        add	edx, 0xc
        push	edx
        push	eax
        call	dword ptr [mem_00924E94]
        add	esp, 0x8
        mov	ecx, eax
        call	dword ptr [mem_00924E98]
        mov	eax, 0x4ac9ab
        ret
    }
}

// [0x004AC5A0] sub_004AC5A0 (389 bytes)
extern "C" void ext_004A9A70();
extern "C" void ext_004AC270();
extern "C" void ext_004C31B0();
extern "C" void ext_004EC4A0();
extern "C" void ext_004ED750();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004AC5A0(void* self) {
    __asm {
        push    -1
        push    0x888b54
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        mov     eax, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esp + 0x34]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x40]
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], esi
        call    ext_004C31B0
        xor     ebx, ebx
        lea     ecx, [esi + 0x188]
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [esi], 0x941d44
        mov     dword ptr [esi + 0x4], 0x941cfc
        mov     dword ptr [esi + 0x8], 0x941cbc
        mov     dword ptr [esi + 0xc], 0x941c6c
        mov     dword ptr [esi + 0x150], 0x941c54
        mov     dword ptr [esi + 0x154], 0x941c44
        mov     dword ptr [esi + 0x158], 0x941c18
        mov     dword ptr [esi + 0x180], ecx
        mov     dword ptr [esi + 0x184], ebx
        call    ext_004EC4A0
        mov     dword ptr [esi + 0x2f0], ebx
        mov     ecx, dword ptr [esp + 0x48]
        or      eax, -1
        push    ecx
        lea     ecx, [esi + 0x30c]
        mov     byte ptr [esp + 0x34], 0x2
        mov     dword ptr [esi + 0x2f4], ebx
        mov     dword ptr [esi + 0x2f8], ebx
        mov     dword ptr [esi + 0x2fc], ebx
        mov     dword ptr [esi + 0x300], ebx
        mov     dword ptr [esi + 0x304], eax
        mov     dword ptr [esi + 0x308], eax
        call    dword ptr [mem_00924FE4]
        push    0x928b5d
        lea     ecx, [esi + 0x328]
        mov     byte ptr [esp + 0x34], 0x3
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esi + 0x344]
        mov     byte ptr [esp + 0x30], 0x4
        call    dword ptr [mem_00924FE8]
        lea     ecx, [esi + 0x364]
        mov     byte ptr [esp + 0x30], 0x5
        mov     byte ptr [esi + 0x360], bl
        call    ext_004ED750
        mov     dword ptr [esi + 0x3cc], ebx
        mov     dword ptr [esi + 0x3d0], ebx
        mov     dword ptr [esi + 0x3d4], ebx
        mov     dword ptr [esi + 0x3dc], ebx
        mov     dword ptr [esi + 0x3e0], ebx
        mov     dword ptr [esi + 0x3e4], ebx
        mov     bl, 0x8
        push    0x928b5d
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x34], bl
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0xc]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x34], 0x9
        call    ext_004A9A70
        lea     ecx, [esp + 0xc]
        mov     byte ptr [esp + 0x30], bl
        call    dword ptr [mem_00924FF4]
        mov     ecx, esi
        call    ext_004AC270
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     0x14
    }
}

// [0x004ACA60] sub_004ACA60 (541 bytes)
extern "C" void ext_0041CCC0();
extern "C" void ext_004A9CE0();
extern "C" void ext_004A9E00();
extern "C" void ext_004AC8B0();
extern "C" void ext_0050E360();
extern "C" void ext_00593F20();
extern "C" void ext_00594000();
extern "C" int mem_00B58DFC;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FB0;
extern "C" __declspec(naked) void __fastcall fn_004ACA60(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        cmp byte ptr [mem_00B58DFC], 0
        push ebx
        push esi
        push edi
        mov esi, ecx
        jne L_4acb4d
        call ext_00594000
        test eax, eax
        je L_4acb4d
        call ext_00594000
        mov ecx, eax
        call ext_00593F20
        mov ecx, dword ptr [eax+0x4]
        test ecx, ecx
        jne L_4acaae
        xor eax, eax
        jmp L_4acab6
L_4acaae:
        mov eax, dword ptr [eax+0x8]
        sub eax, ecx
        sar eax, 2
L_4acab6:
        mov ebx, dword ptr [esp+0x38]
        cmp ebx, eax
        jge L_4acb49
        or edi, -1
        mov dword ptr [esi+0x304], ebx
        mov dword ptr [esi+0x308], edi
        call ext_00594000
        mov ecx, dword ptr [esi+0x304]
        push ecx
        lea ecx, [eax+0x298]
        call ext_0050E360
        mov eax, dword ptr [eax]
        push 0xadf5c4
        lea ecx, [esi+0x30c]
        mov dword ptr [esi+0x180], eax
        call dword ptr [mem_00924FDC]
        mov ecx, esi
        call ext_004A9CE0
        push eax
        lea edx, [esp+0x10]
        push edx
        mov ecx, esi
        call ext_004A9E00
        push eax
        lea ecx, [esi+0x30]
        mov dword ptr [esp+0x34], 0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp+0xc]
        mov dword ptr [esp+0x30], edi
        call dword ptr [mem_00924FF4]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [esp+0x1c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
L_4acb49:
        sub ebx, eax
        jmp L_4acb51
L_4acb4d:
        mov ebx, dword ptr [esp+0x38]
L_4acb51:
        mov ecx, dword ptr [esi+0x2f4]
        test ecx, ecx
        lea eax, [esi+0x188]
        mov dword ptr [esi+0x180], eax
        je L_4acc69
        mov eax, dword ptr [ecx+0x4]
        test eax, eax
        mov edx, dword ptr [esi+0x304]
        push ebp
        mov ebp, dword ptr [esi+0x308]
        mov dword ptr [esp+0x3c], edx
        je L_4acbcb
        mov edi, dword ptr [ecx+0x8]
        sub edi, eax
        mov eax, 0x92492493
        imul edi
        add edx, edi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ebx, eax
        jae L_4acbcb
        push ebx
        mov dword ptr [esi+0x304], ebx
        mov dword ptr [esi+0x308], -1
        call ext_0041CCC0
        push eax
        mov ecx, esi
        call ext_004AC8B0
        mov eax, dword ptr [esi+0x304]
        mov ecx, dword ptr [esi+0x2f4]
        jmp L_4acc3d
L_4acbcb:
        mov eax, dword ptr [ecx+0x4]
        test eax, eax
        je L_4acbea
        mov ecx, dword ptr [ecx+0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
L_4acbea:
        mov ecx, dword ptr [esi+0x2fc]
        sub ebx, eax
        test ecx, ecx
        je L_4acc68
        mov eax, dword ptr [ecx+0x4]
        test eax, eax
        je L_4acc68
        mov edi, dword ptr [ecx+0x8]
        sub edi, eax
        mov eax, 0x92492493
        imul edi
        add edx, edi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ebx, eax
        jae L_4acc68
        push ebp
        mov dword ptr [esi+0x304], 0xffffffff
        call ext_0041CCC0
        push eax
        mov ecx, esi
        call ext_004AC8B0
        mov eax, dword ptr [esi+0x308]
        mov ecx, dword ptr [esi+0x2fc]
L_4acc3d:
        push eax
        call ext_0041CCC0
        push eax
        lea ecx, [esi+0x30c]
        push ecx
        call dword ptr [mem_00924FB0]
        add esp, 0x8
        test al, al
        je L_4acc68
        mov edx, dword ptr [esp+0x3c]
        mov dword ptr [esi+0x308], ebp
        mov dword ptr [esi+0x304], edx
L_4acc68:
        pop ebp
L_4acc69:
        mov ecx, dword ptr [esp+0x28]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x004AFD40] sub_004AFD40 (151 bytes)
extern "C" void ext_004E82C0();
extern "C" void ext_006657F0();
extern "C" __declspec(naked) void __fastcall fn_004AFD40(void* self) {
    __asm {
        push -1
        push 0x008893AE
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0
        mov dword ptr [esp + 8], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x10], eax
        add eax, 8
        push eax
        lea ecx, [esi + 0x14]
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x00941F84
        call ext_004E82C0
        mov eax, dword ptr [esi + 0x10]
        add eax, 0x104
        push eax
        lea ecx, [esi + 0x34]
        mov byte ptr [esp + 0x14], 1
        call ext_004E82C0
        mov ecx, dword ptr [esi + 0x10]
        add ecx, 0x264
        push ecx
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x14], 2
        call ext_004E82C0
        mov eax, dword ptr [esi + 0x10]
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [esp + 8]
        add eax, 0x210
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0x74], edx
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

extern "C" void ext_004AFD40();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" int mem_008A7A5B;

// [0x004AFEB0] sub_004AFEB0 (119 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AFEB0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset mem_008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 4], 0
        je L_done
        lea ecx, [esi + 0x264]
        call ext_004E7EC0
        push 0x78
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je L_null
        push esi
        mov ecx, eax
        call ext_004AFD40
        jmp L_after_ctor
    L_null:
        xor eax, eax
    L_after_ctor:
        push eax
        mov dword ptr [esp + 0x14], -1
        call ext_00665870
        mov ecx, eax
        call ext_00666670
    L_done:
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x004A5770] sub_004A5770 (127 bytes)
extern "C" void ext_004A5210();
extern "C" void ext_004A52C0();
extern "C" void ext_004A5370();
extern "C" void ext_004A5420();
extern "C" void ext_004A54D0();
extern "C" void ext_004A5580();
extern "C" void ext_004A5630();
extern "C" void ext_004A56E0();
extern "C" int mem_00A9F5E4;
extern "C" int mem_00A9F5D4;
extern "C" int mem_00A9F5E0;
extern "C" int mem_00A9F5DC;
extern "C" int mem_00A9F5D8;
extern "C" int mem_00A9F674;
extern "C" __declspec(naked) void __fastcall fn_004A5770(void* self) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_004A56E0
        mov     ecx, dword ptr [mem_00A9F5E4]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_004A5210
        mov     edx, dword ptr [mem_00A9F5D4]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_004A52C0
        mov     eax, dword ptr [mem_00A9F5E0]
        push    eax
        lea     ecx, [esp + 0x4]
        call    ext_004A5370
        mov     ecx, dword ptr [mem_00A9F5DC]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_004A5420
        mov     edx, dword ptr [mem_00A9F5D8]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_004A54D0
        mov     eax, dword ptr [mem_00A9F674]
        push    eax
        lea     ecx, [esp + 0x4]
        call    ext_004A5580
        push    0x940740
        lea     ecx, [esp + 0x4]
        call    ext_004A5630
        pop     ecx
        ret
    }
}

// [0x004AC0D0] sub_004AC0D0 (332 bytes)
extern "C" void ext_004C2330();
extern "C" void ext_004EC580();
extern "C" void ext_004ED6B0();
extern "C" __declspec(naked) void __fastcall fn_004AC0D0(void* self) {
    __asm {
        push -1
        push 0x888a81
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov [esp+8], esi
        mov dword ptr [esi], 0x941d44
        mov dword ptr [esi+4], 0x941cfc
        mov dword ptr [esi+8], 0x941cbc
        mov dword ptr [esi+0ch], 0x941c6c
        mov dword ptr [esi+150h], 0x941c54
        mov dword ptr [esi+154h], 0x941c44
        mov dword ptr [esi+158h], 0x941c18
        mov eax, dword ptr [esi+3dch]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp+14h], 5
        je L_4AC144
        push eax
        call ext_006A5C5C
        add esp, 4
L_4AC144:
        mov dword ptr [esi+3dch], ebx
        mov dword ptr [esi+3e0h], ebx
        mov dword ptr [esi+3e4h], ebx
        mov eax, dword ptr [esi+3cch]
        cmp eax, ebx
        je L_4AC169
        push eax
        call ext_006A5C5C
        add esp, 4
L_4AC169:
        push edi
        lea edi, [esi+364h]
        mov dword ptr [esi+3cch], ebx
        mov dword ptr [esi+3d0h], ebx
        mov dword ptr [esi+3d4h], ebx
        mov eax, dword ptr [edi+58h]
        cmp eax, ebx
        je L_4AC192
        push eax
        call ext_006A5C5C
        add esp, 4
L_4AC192:
        mov ecx, edi
        mov dword ptr [edi+58h], ebx
        mov dword ptr [edi+5ch], ebx
        mov dword ptr [edi+60h], ebx
        call ext_004ED6B0
        lea ecx, [esi+344h]
        mov byte ptr [esp+18h], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esi+328h]
        mov byte ptr [esp+18h], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esi+30ch]
        mov byte ptr [esp+18h], 2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi+2f0h]
        cmp ecx, ebx
        mov byte ptr [esp+18h], 1
        pop edi
        je L_4AC1ED
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_4AC1ED:
        lea ecx, [esi+188h]
        mov byte ptr [esp+14h], bl
        call ext_004EC580
        mov ecx, esi
        mov dword ptr [esp+14h], -1
        call ext_004C2330
        mov ecx, dword ptr [esp+0ch]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x004AF570] sub_004AF570 (131 bytes)
extern "C" void ext_004AF300();
extern "C" void ext_00596300();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004AF570(void* self, int edx_unused, void* val) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov edx, dword ptr [esi + 0x4]
        test edx, edx
        push edi
        jne L_4af582
        xor ecx, ecx
        jmp L_4af58a
    L_4af582:
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, edx
        sar ecx, 0x3
    L_4af58a:
        test edx, edx
        je L_4af5cb
        mov eax, dword ptr [esi + 0xc]
        sub eax, edx
        sar eax, 0x3
        cmp ecx, eax
        jae L_4af5cb
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
        call ext_00596300
        add esp, 0x18
        add edi, 0x8
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    L_4af5cb:
        mov edi, dword ptr [esi + 0x8]
        cmp edx, edi
        jbe L_4af5d8
        call dword ptr [mem_00925134]
    L_4af5d8:
        mov eax, dword ptr [esp + 0x14]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_004AF300
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x004A6BC0] sub_004A6BC0 (148 bytes)
extern "C" void ext_004A5810();
extern "C" void ext_004E9540();
extern "C" void ext_004E9870();
extern "C" void ext_006A5C5C();
extern "C" int mem_0087BA98;
extern "C" __declspec(naked) void __fastcall fn_004A6BC0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push offset mem_0087BA98
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x30]
        push edi
        mov esi, ecx
        call ext_004A5810
        xor ebx, ebx
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], ebx
        mov ecx, dword ptr [esp + 0x2c]
        lea eax, [esp + 0xc]
        push eax
        push edi
        push ecx
        mov dword ptr [esp + 0x30], ebx
        call ext_004E9540
        add esp, 0xc
        lea edx, [esi + 0x208]
        push edx
        lea ecx, [esi + 0x1fc]
        push ecx
        push eax
        lea edx, [esi + 0x25c]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esi + 0x4]
        call ext_004E9870
        mov eax, dword ptr [esp + 0x10]
        pop edi
        pop esi
        cmp eax, ebx
        pop ebx
        je skip_close
        push eax
        call ext_006A5C5C
        add esp, 4
skip_close:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 8
    }
}

extern "C" void ext_00494000();
extern "C" void ext_004E7970();
extern "C" void ext_004E7EC0();
extern "C" void ext_004E7F30();
extern "C" void ext_004E8050();
extern "C" void ext_004E9910();
extern "C" void ext_006A6E9E();
extern "C" int mem_0088937B;
extern "C" int mem_00925134;
extern "C" int mem_00A2E2D8;
extern "C" int mem_00A2EFEC;

// [0x004AF8D0] sub_004AF8D0 (289 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AF8D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_0088937B
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [ecx + 8]
        mov edx, dword ptr [eax + 8]
        add ecx, 8
        sub esp, 0x108
        push ebx
        call edx
        mov ebx, eax
        mov ecx, dword ptr [ebx + 4]
        test ecx, ecx
        je loc_004AF9DB
        mov eax, dword ptr [ebx + 8]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jne loc_004AF9DB
        push ebp
        push esi
        push edi
        lea ecx, [esp + 0x1c]
        call ext_004E7F30
        mov edi, dword ptr [ebx + 4]
        cmp edi, dword ptr [ebx + 8]
        mov ebp, dword ptr [mem_00925134]
        mov dword ptr [esp + 0x120], 0
        jbe loc_004AF940
        call ebp
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
loc_004AF940:
        mov esi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], esi
        jbe loc_004AF94A
        call ebp
loc_004AF94A:
        cmp edi, esi
        je loc_004AF9C4
        cmp edi, dword ptr [ebx + 8]
        jb loc_004AF955
        call ebp
loc_004AF955:
        mov eax, dword ptr [edi]
        push 0
        push offset mem_00A2EFEC
        push offset mem_00A2E2D8
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je loc_004AF9B5
        lea ecx, [esp + 0x1c]
        call ext_004E7EC0
        push 0
        push 0
        push -1
        lea ecx, [esp + 0x1c]
        call ext_00494000
        mov edx, dword ptr [esi]
        push 0
        lea eax, [esp + 0x14]
        push eax
        mov eax, dword ptr [edx + 8]
        push 1
        mov ecx, esi
        call eax
        push eax
        lea ecx, [esp + 0x2c]
        call ext_004E9910
        push 0
        push 2
        lea ecx, [esp + 0x24]
        call ext_004E7970
loc_004AF9B5:
        cmp edi, dword ptr [ebx + 8]
        jb loc_004AF9BC
        call ebp
loc_004AF9BC:
        add edi, 4
        jmp loc_004AF940
loc_004AF9C4:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x120], 0xffffffff
        call ext_004E8050
        pop edi
        pop esi
        pop ebp
loc_004AF9DB:
        mov ecx, dword ptr [esp + 0x10c]
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x114
        ret
    }
}

extern "C" void ext_00466BA0();
extern "C" void ext_00494000();
extern "C" void ext_004940D0();
extern "C" void ext_004AF8D0();
extern "C" void ext_004E7970();
extern "C" void ext_004E7EC0();

// [0x004AFC60] sub_004AFC60 (223 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AFC60(void* self, int edx_unused, void* arg1) {
    __asm {
        sub esp, 0x2c
        push esi
        push edi
        mov edi, ecx
        lea esi, [edi + 0x104]
        mov ecx, esi
        call ext_004E7EC0
        mov eax, dword ptr [esp + 0x38]
        test eax, eax
        mov dword ptr [edi + 4], eax
        setne al
        test al, al
        mov byte ptr [esp + 0xb], al
        je L_else
        push ebx
        lea ecx, [esp + 0x20]
        call ext_004940D0
        lea ecx, [esp + 0x14]
        call ext_004940D0
        mov ecx, dword ptr [edi + 4]
        lea edx, [esp + 0x10]
        push edx
        lea edx, [esp + 0x40]
        push edx
        mov eax, 2
        lea edx, [esp + 0x1c]
        mov dword ptr [esp + 0x44], eax
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax]
        push edx
        lea edx, [esp + 0x2c]
        push edx
        call eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esp + 0x3c]
        mov edx, dword ptr [edx]
        push eax
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        push ecx
        mov ecx, esi
        call edx
        push 0
        push 0
        push -1
        lea ecx, [esp + 0x38]
        call ext_00494000
        mov ecx, dword ptr [edi + 4]
        mov edx, dword ptr [ecx]
        mov ebx, dword ptr [esi]
        push 0
        lea eax, [esp + 0x30]
        push eax
        mov eax, dword ptr [edx + 8]
        push 0
        call eax
        mov edx, dword ptr [ebx + 0x70]
        push eax
        mov ecx, esi
        call edx
        push 0
        push 6
        mov ecx, esi
        call ext_004E7970
        pop ebx
        jmp L_end
    L_else:
        mov ecx, edi
        call ext_004AF8D0
    L_end:
        push 0
        lea eax, [esp + 0xf]
        push eax
        lea ecx, [edi + 0x23c]
        call ext_00466BA0
        pop edi
        pop esi
        add esp, 0x2c
        ret 4
    }
}

// [0x004AFA00] sub_004AFA00 (340 bytes)
extern "C" void ext_004E77E0();
extern "C" void ext_004E7F30();
extern "C" void ext_004E8050();
extern "C" void ext_004E9910();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004AFA00(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x88937b
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x108
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 0x8]
        mov edx, dword ptr [eax + 0x8]
        lea ecx, [ebp + 0x8]
        push esi
        push edi
        call edx
        mov edi, eax
        mov esi, dword ptr [edi + 0x4]
        test esi, esi
        je loc_4afa75
        mov ecx, dword ptr [edi + 0x8]
        mov eax, ecx
        sub eax, esi
        sar eax, 2
        cmp eax, 1
        jb loc_4afa75
        cmp esi, ecx
        jbe loc_4afa4e
        call dword ptr [mem_00925134]
    loc_4afa4e:
        cmp esi, dword ptr [edi + 0x8]
        jb loc_4afa59
        call dword ptr [mem_00925134]
    loc_4afa59:
        mov eax, dword ptr [esi]
        push 0
        push 0xa2efec
        push 0xa2e2d8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        mov dword ptr [ebp + 0x4], eax
    loc_4afa75:
        lea ecx, [esp + 0x1c]
        call ext_004E7F30
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x120], 0
        call ext_004E7EC0
        mov ebx, dword ptr [edi + 0x4]
        cmp ebx, dword ptr [edi + 0x8]
        jbe loc_4afaa0
        call dword ptr [mem_00925134]
    loc_4afaa0:
        mov esi, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], esi
        jbe loc_4afaae
        call dword ptr [mem_00925134]
    loc_4afaae:
        cmp ebx, esi
        je loc_4afb17
        cmp ebx, dword ptr [edi + 0x8]
        jb loc_4afabd
        call dword ptr [mem_00925134]
    loc_4afabd:
        mov eax, dword ptr [ebx]
        push 0
        push 0xa2efec
        push 0xa2e2d8
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je loc_4afb07
        push 0
        push 0
        push -1
        lea ecx, [esp + 0x1c]
        call ext_00494000
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x8]
        push 0
        lea ecx, [esp + 0x14]
        push ecx
        push 1
        mov ecx, esi
        call eax
        push eax
        lea ecx, [esp + 0x2c]
        call ext_004E9910
    loc_4afb07:
        cmp ebx, dword ptr [edi + 0x8]
        jb loc_4afb12
        call dword ptr [mem_00925134]
    loc_4afb12:
        add ebx, 4
        jmp loc_4afaa0
    loc_4afb17:
        lea ecx, [esp + 0x1c]
        call ext_004E77E0
        lea ecx, [esp + 0x1c]
        mov dword ptr [ebp + 0x4], 0
        mov dword ptr [esp + 0x120], 0xffffffff
        call ext_004E8050
        mov ecx, dword ptr [esp + 0x118]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x114
        ret
    }
}

// [0x004A1860] sub_004A1860 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004A1860(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa35a94
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_4A18B3
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_4A18B3:
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

// [0x004A56E0] sub_004A56E0 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A56E0(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa36608
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_4A5733
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_4A5733:
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

// [0x004AD820] sub_004AD820 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004AD820(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa36f3c
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_4AD873
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_4AD873:
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

// [0x004AEF60] sub_004AEF60 (140 bytes)
extern "C" void ext_00451670();
extern "C" void ext_00676C90();
extern "C" void ext_006A5C5C();
extern "C" int mem_0088906B;
extern "C" int mem_00941F44;

extern "C" __declspec(naked) void __fastcall fn_004AEF60(void* self) {
    __asm {
        push    -0x1
        push    offset mem_0088906B
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x8
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esi], offset mem_00941F44
        mov     eax, dword ptr [esi + 0x4]
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [eax + 0x224]
        mov     dword ptr [esp + 0x1c], 0x0
        mov     dword ptr [esp + 0xc], esi
        call    ext_00451670
        mov     edi, dword ptr [esi + 0xc]
        test    edi, edi
        je      L_4AEFBC
        mov     ecx, edi
        call    ext_004F1D90
        push    edi
        call    ext_006A5C5C
        add     esp, 0x4
    L_4AEFBC:
        mov     esi, dword ptr [esi + 0x8]
        test    esi, esi
        mov     dword ptr [esp + 0x18], 0xffffffff
        je      L_4AEFDB
        mov     ecx, esi
        call    ext_00676C90
        push    esi
        call    ext_006A5C5C
        add     esp, 0x4
    L_4AEFDB:
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x14
        ret
    }
}

// [0x004AF300] sub_004AF300 (141 bytes)
extern "C" void ext_004AF060();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004AF300(void* self) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x4]
        test    edi, edi
        je      L_004AF31E
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, eax
        sub     ecx, edi
        sar     ecx, 3
        jne     L_004AF322
    L_004AF31E:
        xor     ebx, ebx
        jmp     L_004AF343
    L_004AF322:
        cmp     edi, eax
        jbe     L_004AF32C
        call    dword ptr [mem_00925134]
    L_004AF32C:
        test    ebp, ebp
        je      L_004AF334
        cmp     ebp, esi
        je      L_004AF33A
    L_004AF334:
        call    dword ptr [mem_00925134]
    L_004AF33A:
        mov     ebx, dword ptr [esp + 0x20]
        sub     ebx, edi
        sar     ebx, 3
    L_004AF343:
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    1
        push    eax
        push    ebp
        mov     ecx, esi
        call    ext_004AF060
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, dword ptr [esi + 0x8]
        jbe     L_004AF365
        call    dword ptr [mem_00925134]
    L_004AF365:
        mov     dword ptr [esp + 0x20], edi
        lea     edi, [edi + 8*ebx]
        cmp     edi, dword ptr [esi + 0x8]
        ja      L_004AF376
        cmp     edi, dword ptr [esi + 0x4]
        jae     L_004AF37C
    L_004AF376:
        call    dword ptr [mem_00925134]
    L_004AF37C:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x4], edi
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}

// [0x004A68E0] sub_004A68E0 (141 bytes)
extern "C" void ext_004A68E0();
extern "C" void ext_005B0D90();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004A68E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b2fe9
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        cmp byte ptr [edi + 0xad], 0
        mov ebx, ecx
        mov esi, edi
        jne done_
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_:
        mov eax, dword ptr [esi + 0x8]
        push eax
        mov ecx, ebx
        call ext_004A68E0
        mov esi, dword ptr [esi]
        lea ebp, [edi + 0xc]
        mov dword ptr [esp + 0x20], ebp
        lea ecx, [ebp + 0x1c]
        mov dword ptr [esp + 0x18], 0
        call ext_005B0D90
        mov ecx, ebp
        mov dword ptr [esp + 0x18], -1
        call dword ptr [mem_00924FF4]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0xad], 0
        mov edi, esi
        je loop_
    done_:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 4
    }
}

// [0x004A6AF0] sub_004A6AF0 (203 bytes)
extern "C" void ext_004A5920();
extern "C" void ext_004A6350();
extern "C" void ext_004A68E0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004A6AF0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ebp, dword ptr [eax]
        je L_4A6B0A
        cmp edi, esi
        je L_4A6B10
L_4A6B0A:
        call dword ptr [mem_00925134]
L_4A6B10:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_4A6B71
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_4A6B27
        cmp eax, esi
        je L_4A6B2D
L_4A6B27:
        call dword ptr [mem_00925134]
L_4A6B2D:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_4A6B71
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_004A68E0
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 8
        ret 0x14
L_4A6B71:
        test edi, edi
        je L_4A6B7B
        cmp edi, dword ptr [esp + 0x28]
        je L_4A6B81
L_4A6B7B:
        call dword ptr [mem_00925134]
L_4A6B81:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_4A6BA8
        lea ecx, [esp + 0x20]
        call ext_004A5920
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_004A6350
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_4A6B71
L_4A6BA8:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 8
        ret 0x14
    }
}

extern "C" void ext_004142E0();
extern "C" void ext_004A5C00();
extern "C" void ext_004A6060();
extern "C" void ext_0059A140();
extern "C" void ext_00644F20();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;

// [0x004A70D0] sub_004A70D0 (277 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A70D0(void* self) {
    __asm {
        push -1
        push 0x888308
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x34
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x4c]
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x10], ebp
        mov ecx, ebp
        mov dword ptr [esp + 0x4c], 0
        call ext_00644F20
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov dword ptr [esp + 0x54], eax
        jbe L_4a7117
        call dword ptr [mem_00925134]
    L_4a7117:
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_4a7125
        call dword ptr [mem_00925134]
    L_4a7125:
        mov eax, dword ptr [esp + 0x54]
        mov ecx, dword ptr [esp + 0x54]
        push 0
        push eax
        push ecx
        push ebx
        push edi
        mov dword ptr [esp + 0x2c], edi
        call ext_004A6060
        mov edi, dword ptr [esi + 8]
        add esp, 0x14
        cmp dword ptr [esi + 4], edi
        mov ebx, eax
        jbe L_4a714f
        call dword ptr [mem_00925134]
    L_4a714f:
        test esi, esi
        je L_4a7157
        cmp esi, esi
        je L_4a715d
    L_4a7157:
        call dword ptr [mem_00925134]
    L_4a715d:
        cmp ebx, edi
        je L_4a71af
        test esi, esi
        jne L_4a716b
        call dword ptr [mem_00925134]
    L_4a716b:
        cmp ebx, dword ptr [esi + 8]
        jb L_4a7176
        call dword ptr [mem_00925134]
    L_4a7176:
        mov edi, dword ptr [esp + 0x54]
        mov ecx, dword ptr [ebx]
        push edi
        call ext_00644F20
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 8
        test al, al
        je L_4a71af
        push edi
        call ext_004A5C00
        push eax
        lea ecx, [esp + 0x24]
        call ext_004142E0
        push 0x9d1278
        lea edx, [esp + 0x20]
        push edx
        call ext_006A6DD2
    L_4a71af:
        lea eax, [esp + 0x54]
        push eax
        push ebx
        push esi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0
        mov dword ptr [esp + 0x64], ebp
        call ext_0059A140
        mov ecx, dword ptr [esp + 0x44]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x40
        ret 8
    }
}

// [0x004A1270] sub_004A1270 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00ADD840;
extern "C" int mem_00ADD83C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004A1270(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x887407
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        test byte ptr [mem_00ADD840], 0x1
        push esi
        mov esi, ecx
        jne loc_4A12BF
        or dword ptr [mem_00ADD840], 0x1
        mov ecx, offset mem_00ADD83C
        mov dword ptr [esp + 0x2c], 0x0
        call ext_0067A670
        mov dword ptr [mem_00ADD83C], 0x93fd9c
        mov dword ptr [esp + 0x2c], -0x1
    loc_4A12BF:
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], offset mem_00ADD83C
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x1
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x004A5210] sub_004A5210 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00ADE110;
extern "C" int mem_00ADE10C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004A5210(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x887cd7
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        test byte ptr [mem_00ADE110], 0x1
        push esi
        mov esi, ecx
        jne loc_4A525F
        or dword ptr [mem_00ADE110], 0x1
        mov ecx, offset mem_00ADE10C
        mov dword ptr [esp + 0x2c], 0x0
        call ext_0067A670
        mov dword ptr [mem_00ADE10C], 0x94075c
        mov dword ptr [esp + 0x2c], -0x1
    loc_4A525F:
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], offset mem_00ADE10C
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x1
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x004A52C0] sub_004A52C0 (165 bytes)
extern "C" int mem_00ADE118;
extern "C" int mem_00ADE114;

extern "C" __declspec(naked) void __fastcall fn_004A52C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x887d07
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        test byte ptr [mem_00ADE118], 0x1
        push esi
        mov esi, ecx
        jne loc_4A530F
        or dword ptr [mem_00ADE118], 0x1
        mov ecx, offset mem_00ADE114
        mov dword ptr [esp + 0x2c], 0x0
        call ext_0067A670
        mov dword ptr [mem_00ADE114], 0x94090c
        mov dword ptr [esp + 0x2c], -0x1
    loc_4A530F:
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], offset mem_00ADE114
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x1
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x004A5370] sub_004A5370 (165 bytes)
extern "C" int mem_00ADE120;
extern "C" int mem_00ADE11c;

extern "C" __declspec(naked) void __fastcall fn_004A5370(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x887d37
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        test byte ptr [mem_00ADE120], 0x1
        push esi
        mov esi, ecx
        jne loc_4A53BF
        or dword ptr [mem_00ADE120], 0x1
        mov ecx, offset mem_00ADE11c
        mov dword ptr [esp + 0x2c], 0x0
        call ext_0067A670
        mov dword ptr [mem_00ADE11c], 0x940abc
        mov dword ptr [esp + 0x2c], -0x1
    loc_4A53BF:
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], offset mem_00ADE11c
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x1
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x004A5420] sub_004A5420 (165 bytes)
extern "C" int mem_00ADE128;
extern "C" int mem_00ADE124;

extern "C" __declspec(naked) void __fastcall fn_004A5420(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x887d67
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        test byte ptr [mem_00ADE128], 0x1
        push esi
        mov esi, ecx
        jne loc_4A546F
        or dword ptr [mem_00ADE128], 0x1
        mov ecx, offset mem_00ADE124
        mov dword ptr [esp + 0x2c], 0x0
        call ext_0067A670
        mov dword ptr [mem_00ADE124], 0x940c6c
        mov dword ptr [esp + 0x2c], -0x1
    loc_4A546F:
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], offset mem_00ADE124
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x1
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x004A54D0] sub_004A54D0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00ADE130;
extern "C" int mem_00ADE12C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004A54D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x887d97
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        test byte ptr [mem_00ADE130], 0x1
        push esi
        mov esi, ecx
        jne loc_4A551F
        or dword ptr [mem_00ADE130], 0x1
        mov ecx, offset mem_00ADE12C
        mov dword ptr [esp + 0x2c], 0x0
        call ext_0067A670
        mov dword ptr [mem_00ADE12C], 0x940e1c
        mov dword ptr [esp + 0x2c], -0x1
    loc_4A551F:
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], offset mem_00ADE12C
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x1
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x004A5580] sub_004A5580 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00ADE138;
extern "C" int mem_00ADE134;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004A5580(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x887dc7
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        test byte ptr [mem_00ADE138], 0x1
        push esi
        mov esi, ecx
        jne loc_4A55CF
        or dword ptr [mem_00ADE138], 0x1
        mov ecx, offset mem_00ADE134
        mov dword ptr [esp + 0x2c], 0x0
        call ext_0067A670
        mov dword ptr [mem_00ADE134], 0x940fcc
        mov dword ptr [esp + 0x2c], -0x1
    loc_4A55CF:
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], offset mem_00ADE134
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x1
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x004A5630] sub_004A5630 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00ADE140;
extern "C" int mem_00ADE13C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004A5630(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x887df7
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        test byte ptr [mem_00ADE140], 0x1
        push esi
        mov esi, ecx
        jne loc_4A567F
        or dword ptr [mem_00ADE140], 0x1
        mov ecx, offset mem_00ADE13C
        mov dword ptr [esp + 0x2c], 0x0
        call ext_0067A670
        mov dword ptr [mem_00ADE13C], 0x94117c
        mov dword ptr [esp + 0x2c], -0x1
    loc_4A567F:
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], offset mem_00ADE13C
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x1
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x004AD770] sub_004AD770 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00ADFA14;
extern "C" int mem_00ADFA10;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004AD770(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x888c77
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        test byte ptr [mem_00ADFA14], 0x1
        push esi
        mov esi, ecx
        jne loc_4AD7BF
        or dword ptr [mem_00ADFA14], 0x1
        mov ecx, offset mem_00ADFA10
        mov dword ptr [esp + 0x2c], 0x0
        call ext_0067A670
        mov dword ptr [mem_00ADFA10], 0x941624
        mov dword ptr [esp + 0x2c], -0x1
    loc_4AD7BF:
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], offset mem_00ADFA10
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x1
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

extern "C" void ext_004AD770();
extern "C" void ext_004AD820();
extern "C" void ext_004BE400();
extern "C" void ext_0067A670();
extern "C" int mem_00ADFA1C;
extern "C" int mem_00ADFA18;
extern "C" int mem_00A9F480;
extern "C" int mem_00A9FAD4;
// [0x004AD8B0] sub_004AD8B0 (145 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AD8B0(void* self) {
    __asm {
        push -0x1
        push 0x888c9e
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push 0x0
        lea eax, [esp + 0x4]
        push eax
        call ext_004AD820
        mov eax, 0x1
        test byte ptr [mem_00ADFA1C], al
        jne loc_4AD90D
        or dword ptr [mem_00ADFA1C], eax
        mov ecx, offset mem_00ADFA18
        mov dword ptr [esp + 0xc], 0x0
        call ext_0067A670
        mov dword ptr [mem_00ADFA18], 0x941b34
        mov dword ptr [esp + 0xc], -0x1
    loc_4AD90D:
        mov ecx, dword ptr [mem_00A9F480]
        push offset mem_00ADFA18
        push ecx
        lea ecx, [esp + 0x8]
        call ext_004BE400
        mov edx, dword ptr [mem_00A9FAD4]
        push edx
        lea ecx, [esp + 0x4]
        call ext_004AD770
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004A6E20] sub_004A6E20 (225 bytes)
extern "C" void ext_0048B200();
extern "C" void ext_005A6300();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004A6E20(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [ebx + 0x4]
        cmp edi, dword ptr [ebx + 0x8]
        jbe L_a
        call dword ptr [mem_00925134]
    L_a:
        mov ebp, dword ptr [esp + 0x14]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_b:
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        jbe L_c
        call dword ptr [mem_00925134]
    L_c:
        cmp edi, esi
        je L_end
        cmp edi, dword ptr [ebx + 0x8]
        jb L_d
        call dword ptr [mem_00925134]
    L_d:
        mov esi, dword ptr [edi]
        push 0
        push 0xa2fbbc
        push 0xa2e2bc
        push 0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        mov dword ptr [esp + 0x18], eax
        jne L_f
    L_b2:
        test esi, esi
        je L_g
        mov esi, dword ptr [esi + 0x94]
        push 0
        push 0xa2fbbc
        push 0xa2e2bc
        push 0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_b2
        mov dword ptr [esp + 0x18], eax
        lea eax, [esp + 0x18]
        push eax
        mov ecx, ebp
        call ext_005A6300
        jmp L_j
    L_g:
        test eax, eax
        mov dword ptr [esp + 0x18], eax
        je L_i
    L_f:
        lea eax, [esp + 0x18]
        push eax
        mov ecx, ebp
        call ext_005A6300
        jmp L_j
    L_i:
        cmp edi, dword ptr [ebx + 0x8]
        jb L_k
        call dword ptr [mem_00925134]
    L_k:
        mov ecx, dword ptr [edi]
        add ecx, 0x7c
        push ecx
        push ebp
        call ext_0048B200
        add esp, 0x8
    L_j:
        cmp edi, dword ptr [ebx + 0x8]
        jb L_l
        call dword ptr [mem_00925134]
    L_l:
        add edi, 0x4
        jmp L_b
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004A6180] sub_004A6180 (256 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_004A5DC0();
extern "C" void ext_005A17D0();
extern "C" void ext_006A6DD2();
extern "C" void ext_00594000();
extern "C" int mem_00B40640;
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004A6180(void* self) {
    __asm {
        sub esp, 0x48
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x258]
        test ecx, ecx
        mov dword ptr [esp + 0x4], edi
        je DONE_EARLY
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x128]
        push ebx
        push esi
        call edx
        call ext_00594000
        mov ebx, eax
        mov esi, dword ptr [ebx + 0x23c]
        add ebx, 0x238
        cmp esi, dword ptr [ebx + 0x8]
        jbe CHK1_OK
        call dword ptr [mem_00925134]
CHK1_OK:
        push ebp
LOOP_HEAD:
        mov ebp, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], ebp
        jbe CHK2_OK
        call dword ptr [mem_00925134]
CHK2_OK:
        cmp esi, ebp
        je LOOP_DONE
        cmp esi, dword ptr [ebx + 0x8]
        jb CHK3_OK
        call dword ptr [mem_00925134]
CHK3_OK:
        mov eax, dword ptr [esi]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        call edx
        mov ebp, eax
        mov eax, dword ptr [edi + 0x2b8]
        mov edx, dword ptr [eax]
        lea ecx, [edi + 0x2b8]
        push ebp
        call edx
        mov edi, eax
        test edi, edi
        je NOT_FOUND
        cmp esi, dword ptr [ebx + 0x8]
        jb CHK4_OK
        call dword ptr [mem_00925134]
CHK4_OK:
        mov eax, dword ptr [mem_00B40640]
        mov ecx, dword ptr [esi]
        push eax
        push edi
        call ext_005A17D0
        cmp esi, dword ptr [ebx + 0x8]
        jb CHK5_OK
        call dword ptr [mem_00925134]
CHK5_OK:
        mov edi, dword ptr [esp + 0x10]
        add esi, 0x4
        jmp LOOP_HEAD
NOT_FOUND:
        push ebp
        call ext_004A5DC0
        push eax
        lea ecx, [esp + 0x1c]
        call ext_0041FF30
        push 0x9d3748
        lea ecx, [esp + 0x18]
        push ecx
        call ext_006A6DD2
LOOP_DONE:
        lea ecx, [edi + 0x1fc]
        mov dword ptr [edi + 0x258], 0
        call ext_00494050
        lea ecx, [edi + 0x208]
        call ext_00494050
        pop ebp
        pop esi
        mov byte ptr [edi + 0x2c8], 0
        pop ebx
DONE_EARLY:
        pop edi
        add esp, 0x48
        ret
    }
}

extern "C" void ext_004A8030();
extern "C" void ext_00644F50();
extern "C" void ext_00645350();

// [0x004A8C60] sub_004A8C60 (151 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A8C60(void* self, int edx_unused, int a1, int a2, float a3) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [ecx + 0x218]
        test eax, eax
        push edi
        lea edi, [ecx + 0x214]
        mov dword ptr [esp + 0x4], ecx
        je LOC_4A8CF0
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        sar ecx, 2
        je LOC_4A8CF0
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, eax
        cmp esi, dword ptr [edi + 0x8]
        jbe LOC_4A8C94
        call ebp
    LOC_4A8C94:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe LOC_4A8C9E
        call ebp
    LOC_4A8C9E:
        cmp edi, edi
        je LOC_4A8CA4
        call ebp
    LOC_4A8CA4:
        cmp esi, ebx
        je LOC_4A8CE4
        cmp esi, dword ptr [edi + 0x8]
        jb LOC_4A8CAF
        call ebp
    LOC_4A8CAF:
        mov ecx, dword ptr [esi]
        push 2
        call ext_00644F50
        cmp esi, dword ptr [edi + 0x8]
        jb LOC_4A8CBF
        call ebp
    LOC_4A8CBF:
        fld dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esi]
        fstp dword ptr [esp]
        push edx
        push eax
        call ext_00645350
        cmp esi, dword ptr [edi + 0x8]
        jb LOC_4A8CDF
        call ebp
    LOC_4A8CDF:
        add esi, 4
        jmp LOC_4A8C94
    LOC_4A8CE4:
        mov ecx, dword ptr [esp + 0x10]
        call ext_004A8030
        pop esi
        pop ebp
        pop ebx
    LOC_4A8CF0:
        pop edi
        add esp, 8
        ret 0xc
    }
}

// [0x004A6970] sub_004A6970 (152 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_004A59A0();
extern "C" int mem_00925134;
extern "C" int mem_009251EC;
extern "C" __declspec(naked) void* __fastcall fn_004A6970(void* self, int edx_unused, const void* other) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ebx + 0x4]
        push esi
        push edi
        mov edi, ecx
        xor ecx, ecx
        cmp eax, ecx
        jne L_4a6986
        xor esi, esi
        jmp L_4a698e
    L_4a6986:
        mov esi, dword ptr [ebx + 0x8]
        sub esi, eax
        sar esi, 0x2
    L_4a698e:
        cmp esi, ecx
        mov dword ptr [edi + 0x4], ecx
        mov dword ptr [edi + 0x8], ecx
        mov dword ptr [edi + 0xc], ecx
        je L_4a6a00
        cmp esi, 0x3fffffff
        jbe L_4a69a8
        call ext_00405FB0
    L_4a69a8:
        push ecx
        push esi
        call ext_004A59A0
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], eax
        lea eax, [eax + esi*4]
        mov dword ptr [edi + 0xc], eax
        mov esi, dword ptr [ebx + 0x8]
        add esp, 0x8
        cmp dword ptr [ebx + 0x4], esi
        jbe L_4a69cc
        call dword ptr [mem_00925134]
    L_4a69cc:
        push ebp
        mov ebp, dword ptr [ebx + 0x4]
        cmp ebp, dword ptr [ebx + 0x8]
        jbe L_4a69db
        call dword ptr [mem_00925134]
    L_4a69db:
        mov ecx, dword ptr [edi + 0x4]
        sub esi, ebp
        sar esi, 0x2
        lea eax, [esi*4 + 0]
        lea esi, [eax + ecx]
        je L_4a69fc
        push eax
        push ebp
        push eax
        push ecx
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L_4a69fc:
        mov dword ptr [edi + 0x8], esi
        pop ebp
    L_4a6a00:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

extern "C" void ext_0046B190();
extern "C" void ext_00480700();
extern "C" void ext_004A6970();
extern "C" void ext_00596660();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

// [0x004A81A0] sub_004A81A0 (292 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A81A0(void* self) {
    __asm {
        push -1
        push 0x8844d0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 4]
        mov edx, dword ptr [eax + 0xc]
        lea ecx, [ebp + 4]
        push esi
        push edi
        call edx
        push eax
        lea ecx, [esp + 0x2c]
        call ext_004A6970
        xor esi, esi
        mov dword ptr [esp + 0x40], esi
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], esi
        xor ecx, ecx
        push ecx
        lea eax, [esp + 0x1c]
        push eax
        mov edx, eax
        push esi
        push edx
        lea eax, [esp + 0x20]
        push eax
        mov ecx, edx
        mov byte ptr [esp + 0x54], 1
        call ext_00596660
        lea ecx, [esp + 0x28]
        push ecx
        lea edx, [esp + 0x1c]
        push edx
        call ext_0046B190
        mov edi, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x28]
        add esp, 8
        cmp edi, eax
        jbe L_4a8230
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_4a8230:
        cmp dword ptr [esp + 0x1c], eax
        mov ebx, eax
        jbe L_4a8242
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x20]
    L_4a8242:
        cmp edi, ebx
        je L_4a8283
        cmp edi, eax
        jb L_4a8250
        call dword ptr [mem_00925134]
    L_4a8250:
        mov eax, dword ptr [edi]
        cmp eax, esi
        je L_4a825b
        add eax, 4
        jmp L_4a825d
    L_4a825b:
        xor eax, eax
    L_4a825d:
        push eax
        mov eax, dword ptr [ebp + 0x254]
        mov ecx, dword ptr [eax + 0x34]
        call ext_00480700
        mov eax, dword ptr [esp + 0x20]
        cmp edi, eax
        jb L_4a827e
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x20]
    L_4a827e:
        add edi, 4
        jmp L_4a8230
    L_4a8283:
        mov eax, dword ptr [esp + 0x1c]
        cmp eax, esi
        je L_4a8294
        push eax
        call ext_006A5C5C
        add esp, 4
    L_4a8294:
        mov eax, dword ptr [esp + 0x2c]
        pop edi
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        cmp eax, esi
        pop esi
        pop ebp
        pop ebx
        je L_4a82b5
        push eax
        call ext_006A5C5C
        add esp, 4
    L_4a82b5:
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret
    }
}

// [0x004A6F10] sub_004A6F10 (422 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004A6F10(void* self, int edx_unused, const void* other) {
    __asm {
        push    -1
        push    0x0088e68a
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        mov     esi, ecx
        push    edi
        lea     ecx, [esi + 0x4]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esi], 0x0094137c
        call    ext_004E82C0
        lea     ebx, [edi + 0x24]
        lea     ebp, [esi + 0x24]
        push    ebx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x20], 0
        mov     dword ptr [esi], 0x009413f4
        call    ext_004A6970
        movzx   eax, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], al
        lea     ebx, [edi + 0x38]
        lea     ebp, [esi + 0x38]
        push    ebx
        mov     ecx, ebp
        mov     byte ptr [esp + 0x20], 1
        call    ext_004A6970
        movzx   ecx, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], cl
        lea     ebx, [edi + 0x4c]
        lea     ebp, [esi + 0x4c]
        push    ebx
        mov     ecx, ebp
        mov     byte ptr [esp + 0x20], 2
        call    ext_004A6970
        movzx   edx, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], dl
        lea     ebx, [edi + 0x60]
        lea     ebp, [esi + 0x60]
        push    ebx
        mov     ecx, ebp
        mov     byte ptr [esp + 0x20], 3
        call    ext_004A6970
        movzx   eax, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], al
        lea     ebx, [edi + 0x74]
        lea     ebp, [esi + 0x74]
        push    ebx
        mov     ecx, ebp
        mov     byte ptr [esp + 0x20], 4
        call    ext_004A6970
        movzx   ecx, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], cl
        lea     ebx, [edi + 0x88]
        lea     ebp, [esi + 0x88]
        push    ebx
        mov     ecx, ebp
        mov     byte ptr [esp + 0x20], 5
        call    ext_004A6970
        movzx   edx, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], dl
        lea     ebx, [edi + 0x9c]
        lea     ebp, [esi + 0x9c]
        push    ebx
        mov     ecx, ebp
        mov     byte ptr [esp + 0x20], 6
        call    ext_004A6970
        movzx   eax, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], al
        lea     ebx, [edi + 0xb0]
        lea     ebp, [esi + 0xb0]
        mov     byte ptr [esp + 0x1c], 7
        push    ebx
        mov     ecx, ebp
        call    ext_004A6970
        movzx   ecx, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], cl
        lea     ebx, [edi + 0xc4]
        lea     ebp, [esi + 0xc4]
        push    ebx
        mov     ecx, ebp
        mov     byte ptr [esp + 0x20], 8
        call    ext_004A6970
        movzx   edx, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], dl
        lea     ebx, [edi + 0xd8]
        lea     ebp, [esi + 0xd8]
        push    ebx
        mov     ecx, ebp
        mov     byte ptr [esp + 0x20], 9
        call    ext_004A6970
        movzx   eax, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], al
        mov     eax, esi
        fld     dword ptr [edi + 0xec]
        fstp    dword ptr [esi + 0xec]
        fld     dword ptr [edi + 0xf0]
        fstp    dword ptr [esi + 0xf0]
        fld     dword ptr [edi + 0xf4]
        fstp    dword ptr [esi + 0xf4]
        movzx   ecx, byte ptr [edi + 0xf8]
        pop     edi
        mov     byte ptr [esi + 0xf8], cl
        mov     ecx, dword ptr [esp + 0x10]
        pop     esi
        pop     ebp
        pop     ebx
        mov     fs:[0], ecx
        add     esp, 0x10
        ret     4
    }
}

// [0x004AC0A0] sub_004AC0A0 (48 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_004ED6B0();

extern "C" __declspec(naked) void __fastcall fn_004AC0A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x58]
        test eax, eax
        je skip
        push eax
        call ext_006A5C5C
        add esp, 4
    skip:
        mov dword ptr [esi + 0x58], 0
        mov dword ptr [esi + 0x5c], 0
        mov dword ptr [esi + 0x60], 0
        mov ecx, esi
        pop esi
        jmp ext_004ED6B0
    }
}

// [0x004AEB60] sub_004AEB60 (162 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AEB60(void* self) {
    __asm {
        push -1
        push 0x889028
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0ch], edi
        lea esi, [edi + 14h]
        mov dword ptr [edi + 10h], 0x941f10
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 20h]
        xor ebx, ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 34h], ebx
        call ext_004AE420
        mov eax, dword ptr [esi + 4]
        push eax
        call ext_006A5C5C
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        add esp, 4
        lea esi, [edi + 4]
        mov dword ptr [edi], 0x941f10
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 34h], 0xffffffff
        call ext_004AE420
        mov edx, dword ptr [esi + 4]
        push edx
        call ext_006A5C5C
        mov ecx, dword ptr [esp + 1ch]
        add esp, 4
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 18h
        ret
    }
}

// [0x004A8BA0] sub_004A8BA0 (190 bytes)
extern "C" void ext_004A8030();
extern "C" void ext_00644F50();
extern "C" void ext_006452E0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004A8BA0(void* self, int edx_unused, void* arg) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [ecx + 0x218]
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        lea edi, [ecx + 0x214]
        mov dword ptr [esp + 0x10], ecx
        je loc_4A8C54
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        sar ecx, 2
        je loc_4A8C54
        mov esi, eax
        cmp esi, dword ptr [edi + 0x8]
        jbe loc_4A8BDA
        call dword ptr [mem_00925134]
    loc_4A8BDA:
        mov ebx, dword ptr [esp + 0x1c]
        mov edi, edi
    loc_4A8BE0:
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe loc_4A8BEE
        call dword ptr [mem_00925134]
    loc_4A8BEE:
        cmp edi, edi
        je loc_4A8BF8
        call dword ptr [mem_00925134]
    loc_4A8BF8:
        cmp esi, ebp
        je loc_4A8C4B
        cmp esi, dword ptr [edi + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jb loc_4A8C09
        call ebp
    loc_4A8C09:
        mov ecx, dword ptr [esi]
        push 1
        call ext_00644F50
        fld dword ptr [ebx]
        sub esp, 0x10
        mov eax, esp
        fstp dword ptr [eax]
        mov dword ptr [esp + 0x2c], esp
        fld dword ptr [ebx + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ebx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ebx + 0xc]
        fstp dword ptr [eax + 0xc]
        cmp esi, dword ptr [edi + 0x8]
        jb loc_4A8C38
        call ebp
    loc_4A8C38:
        mov ecx, dword ptr [esi]
        call ext_006452E0
        cmp esi, dword ptr [edi + 0x8]
        jb loc_4A8C46
        call ebp
    loc_4A8C46:
        add esi, 4
        jmp loc_4A8BE0
    loc_4A8C4B:
        mov ecx, dword ptr [esp + 0x10]
        call ext_004A8030
    loc_4A8C54:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 4
    }
}

// [0x004A7560] sub_004A7560 (194 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_0050ED40();
extern "C" void ext_00596660();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134; /* "P{b" */
extern "C" __declspec(naked) void __fastcall fn_004A7560(void* self) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], esi
        push edi
        jbe L_chk2
        call ebx
    L_chk2:
        mov edi, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ebp + 0x8]
        jbe L_call1
        call ebx
    L_call1:
        push esi
        push ebp
        push edi
        push ebp
        lea eax, [esp + 0x20]
        push eax
        mov ecx, ebp
        call ext_00596660
        mov edi, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        jne L_nonempty
        xor eax, eax
        jmp L_have_count
    L_nonempty:
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 2
    L_have_count:
        push eax
        mov ecx, ebp
        call ext_0050ED40
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_loop
        call ebx
        mov edi, edi
    L_loop:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_chkA
        call dword ptr [mem_00925134]
    L_chkA:
        cmp esi, ebx
        je L_done
        cmp esi, dword ptr [edi + 0x8]
        jb L_inrange
        call dword ptr [mem_00925134]
    L_inrange:
        mov ecx, dword ptr [esi]
        push 0
        push 0xa30680
        push 0xa2fbbc
        push 0
        push ecx
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        mov dword ptr [esp + 0x20], eax
        je L_skip
        lea edx, [esp + 0x20]
        push edx
        mov ecx, ebp
        call ext_0041A920
    L_skip:
        cmp esi, dword ptr [edi + 0x8]
        jb L_inc
        call dword ptr [mem_00925134]
    L_inc:
        add esi, 4
        jmp L_loop
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x004AE040] sub_004AE040 (195 bytes)
extern "C" void ext_004AE040();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004AE040(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        cmp byte ptr [ebx + 0x39], 0
        push ebp
        mov dword ptr [esp + 8], ecx
        mov ebp, ebx
        jne cleanup_004AE040
        push esi
        push edi
        jmp loop_004AE040
    loop_back_004AE040:
        mov ebx, dword ptr [esp + 0x28]
    loop_004AE040:
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        call ext_004AE040
        mov ebp, dword ptr [ebp]
        lea esi, [ebx + 0xc]
        mov dword ptr [esp + 0x14], esi
        mov edi, dword ptr [esi + 0x20]
        xor eax, eax
        cmp edi, eax
        mov dword ptr [esp + 0x20], eax
        je clear_004AE040
        mov ebx, dword ptr [esi + 0x24]
        cmp edi, ebx
        je after_004AE040
    inner_004AE040:
        mov ecx, edi
        call dword ptr [mem_00924FF4]
        add edi, 0x1c
        cmp edi, ebx
        jne inner_004AE040
    after_004AE040:
        mov eax, dword ptr [esi + 0x20]
        push eax
        call ext_006A5C5C
        mov ebx, dword ptr [esp + 0x2c]
        add esp, 4
        xor eax, eax
    clear_004AE040:
        mov ecx, esi
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esp + 0x20], 0xffffffff
        call dword ptr [mem_00924FF4]
        push ebx
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [ebp + 0x39], 0
        mov dword ptr [esp + 0x28], ebp
        je loop_back_004AE040
        pop edi
        pop esi
    cleanup_004AE040:
        mov ecx, dword ptr [esp + 0x10]
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}

// [0x004AE420] sub_004AE420 (203 bytes)
extern "C" void ext_004ADD20();
extern "C" void ext_004AE040();
extern "C" void ext_00667030();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004AE420(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ebp, dword ptr [eax]
        je L_4AE43A
        cmp edi, esi
        je L_4AE440
    L_4AE43A:
        call dword ptr [mem_00925134]
    L_4AE440:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_4AE4A1
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_4AE457
        cmp eax, esi
        je L_4AE45D
    L_4AE457:
        call dword ptr [mem_00925134]
    L_4AE45D:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_4AE4A1
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_004AE040
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 8
        ret 0x14
    L_4AE4A1:
        test edi, edi
        je L_4AE4AB
        cmp edi, dword ptr [esp + 0x28]
        je L_4AE4B1
    L_4AE4AB:
        call dword ptr [mem_00925134]
    L_4AE4B1:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_4AE4D8
        lea ecx, [esp + 0x20]
        call ext_00667030
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_004ADD20
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_4AE4A1
    L_4AE4D8:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 8
        ret 0x14
    }
}

// [0x004AE4F0] sub_004AE4F0 (208 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00472730();
extern "C" void ext_004AD970();
extern "C" void ext_004AD9C0();
extern "C" void ext_004AE210();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_004AE4F0(void* self, int edx_unused, void* key) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0x0]
        push 0x888f70
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x5c]
        push esi
        push edi
        push ebp
        mov esi, ecx
        call ext_00472730
        xor ebx, ebx
        cmp esi, ebx
        mov edi, eax
        jne L_4AE526
        call dword ptr [mem_00925134]
    L_4AE526:
        cmp edi, dword ptr [esi + 0x4]
        je L_4AE53D
        lea eax, [edi + 0xc]
        push eax
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_4AE593
    L_4AE53D:
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x24], ebx
        lea ecx, [esp + 0x18]
        push ecx
        push ebp
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x64], ebx
        call ext_004AD9C0
        push eax
        push edi
        push esi
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x6c], 0x1
        call ext_004AE210
        mov esi, dword ptr [eax]
        mov edi, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0x5c], bl
        call ext_004AD970
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_004026E0
    L_4AE593:
        cmp esi, ebx
        jne L_4AE59D
        call dword ptr [mem_00925134]
    L_4AE59D:
        cmp edi, dword ptr [esi + 0x4]
        jne L_4AE5A8
        call dword ptr [mem_00925134]
    L_4AE5A8:
        mov ecx, dword ptr [esp + 0x54]
        lea eax, [edi + 0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret 0x4
    }
}

// [0x004A7B40] sub_004A7B40 (209 bytes)
extern "C" void ext_00451670();
extern "C" void ext_004A7560();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004A7B40(void* self) {
    __asm {
        push -1
        push 0x87ba98
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        push ebx
        push ebp
        xor eax, eax
        push esi
        push edi
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], eax
        mov ecx, dword ptr [esp + 0x34]
        mov dword ptr [esp + 0x2c], eax
        lea eax, [esp + 0x14]
        push eax
        push ecx
        call ext_004A7560
        mov esi, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x24]
        mov ebp, dword ptr [mem_00925134]
        add esp, 0x8
        cmp esi, eax
        jbe loc_4a7b98
        call ebp
        mov eax, dword ptr [esp + 0x1c]
    loc_4a7b98:
        lea ecx, [esp + 0x14]
        mov edi, ecx
        mov edi, edi
    loc_4a7ba0:
        cmp dword ptr [esp + 0x18], eax
        mov ebx, eax
        jbe loc_4a7baa
        call ebp
    loc_4a7baa:
        test edi, edi
        je loc_4a7bb6
        lea edx, [esp + 0x14]
        cmp edi, edx
        je loc_4a7bb8
    loc_4a7bb6:
        call ebp
    loc_4a7bb8:
        cmp esi, ebx
        je loc_4a7bed
        test edi, edi
        jne loc_4a7bc2
        call ebp
    loc_4a7bc2:
        cmp esi, dword ptr [edi + 0x8]
        jb loc_4a7bc9
        call ebp
    loc_4a7bc9:
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr [esp + 0x14], eax
        call ext_00451670
        cmp esi, dword ptr [edi + 0x8]
        jb loc_4a7be4
        call ebp
    loc_4a7be4:
        mov eax, dword ptr [esp + 0x1c]
        add esi, 0x4
        jmp loc_4a7ba0
    loc_4a7bed:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        je loc_4a7c02
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4a7c02:
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret
    }
}

extern "C" void ext_004AB990();
extern "C" void ext_004ABF10();
extern "C" void ext_004ED490();
extern "C" void ext_004ED5D0();

// [0x004AC4B0] sub_004AC4B0 (238 bytes)
extern "C" __declspec(naked) void __cdecl fn_004AC4B0(int* first, int* last, int ideal, void* pred) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        mov eax, edi
        sub eax, ebx
        sar eax, 0x2
        cmp eax, 0x20
        jle L_4AC547
        mov esi, dword ptr [esp + 0x24]
        nop
    L_4AC4D0:
        test esi, esi
        jle L_4AC563
        mov eax, dword ptr [esp + 0x28]
        push eax
        push edi
        lea ecx, [esp + 0x18]
        push ebx
        push ecx
        call ext_004ED490
        mov ebp, dword ptr [esp + 0x24]
        mov eax, esi
        cdq
        sub eax, edx
        sar eax, 1
        mov esi, eax
        cdq
        sub eax, edx
        sar eax, 1
        add esi, eax
        mov eax, dword ptr [esp + 0x20]
        mov edx, edi
        mov ecx, eax
        sub edx, ebp
        sub ecx, ebx
        and edx, -0x4
        and ecx, -0x4
        add esp, 0x10
        cmp ecx, edx
        jge L_4AC527
        mov edx, dword ptr [esp + 0x28]
        push edx
        push esi
        push eax
        push ebx
        call fn_004AC4B0
        mov ebx, ebp
        jmp L_4AC538
    L_4AC527:
        mov eax, dword ptr [esp + 0x28]
        push eax
        push esi
        push edi
        push ebp
        call fn_004AC4B0
        mov edi, dword ptr [esp + 0x20]
    L_4AC538:
        mov eax, edi
        sub eax, ebx
        sar eax, 0x2
        add esp, 0x10
        cmp eax, 0x20
        jg L_4AC4D0
    L_4AC547:
        cmp eax, 0x1
        jle L_4AC55B
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        push edi
        push ebx
        call ext_004ED5D0
        add esp, 0xc
    L_4AC55B:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    L_4AC563:
        cmp eax, 0x20
        jle L_4AC547
        mov ecx, edi
        sub ecx, ebx
        and ecx, -0x4
        cmp ecx, 0x4
        jle L_4AC587
        mov edx, dword ptr [esp + 0x28]
        push 0x0
        push 0x0
        push edx
        push edi
        push ebx
        call ext_004AB990
        add esp, 0x14
    L_4AC587:
        mov eax, dword ptr [esp + 0x28]
        push eax
        push edi
        push ebx
        call ext_004ABF10
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x004A5AF0] sub_004A5AF0 (239 bytes)
extern "C" int mem_00888276;
extern "C" void ext_0048EFF0();
extern "C" void ext_0048F980();
extern "C" void ext_00594000();

extern "C" __declspec(naked) void __fastcall fn_004A5AF0(void* self) {
    __asm {
        push -0x1
        push offset mem_00888276
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        push 0x38
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x0
        je L_4a5b3d
        mov ecx, dword ptr [esi + 0x258]
        push ecx
        lea edx, [esi + 0x25c]
        push edx
        mov ecx, eax
        call ext_0048EFF0
        mov edi, eax
        jmp L_4a5b3f
    L_4a5b3d:
        xor edi, edi
    L_4a5b3f:
        mov ecx, dword ptr [esi + 0x2b0]
        cmp edi, ecx
        mov dword ptr [esp + 0x14], 0xffffffff
        je L_4a5b5d
        test ecx, ecx
        je L_4a5b5d
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    L_4a5b5d:
        push 0x34
        mov dword ptr [esi + 0x2b0], edi
        call ext_006A5C62
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esp + 0x8], edi
        test edi, edi
        mov dword ptr [esp + 0x14], 0x1
        je L_4a5ba8
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        test eax, eax
        je L_4a5b93
        add eax, 0x8
        jmp L_4a5b95
    L_4a5b93:
        xor eax, eax
    L_4a5b95:
        mov ecx, dword ptr [esi + 0x2ac]
        push ecx
        push eax
        mov ecx, edi
        call ext_0048F980
        mov edi, eax
        jmp L_4a5baa
    L_4a5ba8:
        xor edi, edi
    L_4a5baa:
        mov ecx, dword ptr [esi + 0x2b4]
        cmp edi, ecx
        mov dword ptr [esp + 0x14], 0xffffffff
        je L_4a5bc8
        test ecx, ecx
        je L_4a5bc8
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
    L_4a5bc8:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x2b4], edi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004A90B0] sub_004A90B0 (242 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_0048C080();
extern "C" void ext_004A5DC0();
extern "C" void ext_004A8FB0();
extern "C" void ext_005B0D90();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_004A90B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x888573
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xd4
        push esi
        push edi
        mov edi, dword ptr [esp + 0xec]
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x40]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 0xf0]
        push eax
        lea ecx, [esp + 0x5c]
        mov dword ptr [esp + 0xe8], 0
        call ext_0048C080
        lea ecx, [esp + 0x3c]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        lea ecx, [esi + 4]
        mov dword ptr [esp + 0xec], 1
        call ext_004A8FB0
        lea ecx, [esp + 0x58]
        mov dword ptr [esp + 0xe4], 2
        call ext_005B0D90
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0xe4], -1
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esp + 0x10], 0
        jne label_4a9169
        push edi
        call ext_004A5DC0
        push eax
        lea ecx, [esp + 0x1c]
        call ext_004142E0
        push 0x9d1278
        lea eax, [esp + 0x18]
        push eax
        call ext_006A6DD2
    label_4a9169:
        mov esi, dword ptr [esp + 8]
        test esi, esi
        push ebx
        mov ebx, dword ptr [mem_00925134]
        jne label_4a917a
        call ebx
    label_4a917a:
        mov edi, dword ptr [esp + 0x10]
        cmp edi, dword ptr [esi + 4]
        jne label_4a9185
        call ebx
    label_4a9185:
        mov ecx, dword ptr [esp + 0xe0]
        pop ebx
        lea eax, [edi + 0x28]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xe0
        ret 8
    }
}

// [0x004AE110] sub_004AE110 (243 bytes)
extern "C" void ext_004ADB20();
extern "C" void ext_00666C00();
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_004AE110(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0ch
        push ebx
        mov ebx, dword ptr [esp + 18h]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr [ebp + 4h]
        mov esi, dword ptr [edi + 4h]
        cmp byte ptr [esi + 39h], 0
        mov al, 1
        mov byte ptr [esp + 10h], al
        jne L_4ae155
        nop
    L_4ae130:
        lea eax, [esi + 0ch]
        push eax
        push ebx
        mov edi, esi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        mov byte ptr [esp + 10h], al
        je L_4ae14c
        mov esi, dword ptr [esi]
        jmp L_4ae14f
    L_4ae14c:
        mov esi, dword ptr [esi + 8h]
    L_4ae14f:
        cmp byte ptr [esi + 39h], 0
        je L_4ae130
    L_4ae155:
        test al, al
        mov esi, edi
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 14h], ebp
        je L_4ae1a5
        mov ecx, dword ptr [ebp + 4h]
        cmp edi, dword ptr [ecx]
        jne L_4ae198
        push ebx
        push edi
        push 1
        lea edx, [esp + 20h]
        push edx
        mov ecx, ebp
        call ext_004ADB20
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [ecx + 4h]
        pop esi
        pop ebp
        mov dword ptr [eax + 4h], ecx
        mov byte ptr [eax + 8h], 1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0ch
        ret 8
    L_4ae198:
        lea ecx, [esp + 14h]
        call ext_00666C00
        mov esi, dword ptr [esp + 18h]
    L_4ae1a5:
        lea edx, [esi + 0ch]
        push ebx
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L_4ae1e8
        mov eax, dword ptr [esp + 10h]
        push ebx
        push edi
        push eax
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, ebp
        call ext_004ADB20
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [ecx + 4h]
        pop esi
        pop ebp
        mov dword ptr [eax + 4h], ecx
        mov byte ptr [eax + 8h], 1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0ch
        ret 8
    L_4ae1e8:
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 14h]
        pop edi
        mov dword ptr [eax + 4h], esi
        pop esi
        pop ebp
        mov byte ptr [eax + 8h], 0
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0ch
        ret 8
    }
}

extern "C" void ext_004A6D20();
extern "C" void ext_004A7C20();
extern "C" void ext_005304A0();
extern "C" void ext_00594000();
extern "C" void ext_0059B5A0();
extern "C" void ext_0059C770();
extern "C" void ext_006426A0();
extern "C" void ext_006426C0();
extern "C" int mem_00925134;

// [0x004A8330] sub_004A8330 (247 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A8330(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_004A7C20
        mov ecx, esi
        call ext_004A6D20
        mov eax, dword ptr [esi + 0x254]
        mov ecx, dword ptr [eax + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xb4]
        call edx
        test eax, eax
        je L_skip_5304A0
        push 0x0
        mov ecx, eax
        call ext_005304A0
    L_skip_5304A0:
        mov eax, dword ptr [esi + 0x25c]
        mov edx, dword ptr [eax + 0xc]
        lea ecx, [esi + 0x25c]
        call edx
        mov eax, dword ptr [esi + 0x284]
        mov edx, dword ptr [eax + 0xc]
        lea ecx, [esi + 0x284]
        call edx
        mov ecx, dword ptr [esi + 0x254]
        add ecx, 0xd4
        call ext_006426A0
        mov ecx, dword ptr [esi + 0x254]
        add ecx, 0xd4
        call ext_006426C0
        call ext_00594000
        cmp dword ptr [esi + 0x258], 0x0
        mov edi, eax
        jne L_skip_59B5A0
        mov ecx, edi
        call ext_0059B5A0
    L_skip_59B5A0:
        mov esi, dword ptr [edi + 0x23c]
        cmp esi, dword ptr [edi + 0x240]
        mov ebp, dword ptr [mem_00925134]
        jbe L_loop_check
        call ebp
        jmp L_loop_check
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_loop_check:
        mov ebx, dword ptr [edi + 0x240]
        cmp dword ptr [edi + 0x23c], ebx
        jbe L_loop_cmp
        call ebp
    L_loop_cmp:
        cmp esi, ebx
        je L_loop_end
        cmp esi, dword ptr [edi + 0x240]
        jb L_loop_body
        call ebp
    L_loop_body:
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x5f0], 0x6
        cmp esi, dword ptr [edi + 0x240]
        jb L_loop_next
        call ebp
    L_loop_next:
        add esi, 0x4
        jmp L_loop_check
    L_loop_end:
        push 0x3
        mov ecx, edi
        call ext_0059C770
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004A8FB0] sub_004A8FB0 (248 bytes)
extern "C" void ext_004A5D20();
extern "C" void ext_004A8DA0();
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_004A8FB0(void* self, int edx_unused, void* a1, const void* a2) {
    __asm {
        sub esp, 0ch
        push ebx
        mov ebx, dword ptr [esp + 18h]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr [ebp + 4h]
        mov esi, dword ptr [edi + 4h]
        cmp byte ptr [esi + 0adh], 0
        mov al, 1
        mov byte ptr [esp + 10h], al
        jne L4A8F_after_loop
    L4A8F_loop:
        lea eax, [esi + 0ch]
        push eax
        push ebx
        mov edi, esi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        mov byte ptr [esp + 10h], al
        je L4A8F_right
        mov esi, dword ptr [esi]
        jmp L4A8F_chk
    L4A8F_right:
        mov esi, dword ptr [esi + 8h]
    L4A8F_chk:
        cmp byte ptr [esi + 0adh], 0
        je L4A8F_loop
    L4A8F_after_loop:
        test al, al
        mov esi, edi
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 14h], ebp
        je L4A90_check_less
        mov ecx, dword ptr [ebp + 4h]
        cmp edi, dword ptr [ecx]
        jne L4A90_dec
        push ebx
        push edi
        push 1
        lea edx, [esp + 20h]
        push edx
        mov ecx, ebp
        call ext_004A8DA0
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [ecx + 4h]
        pop esi
        pop ebp
        mov dword ptr [eax + 4h], ecx
        mov byte ptr [eax + 8h], 1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0ch
        ret 8
    L4A90_dec:
        lea ecx, [esp + 14h]
        call ext_004A5D20
        mov esi, dword ptr [esp + 18h]
    L4A90_check_less:
        lea edx, [esi + 0ch]
        push ebx
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L4A90_ret_false
        mov eax, dword ptr [esp + 10h]
        push ebx
        push edi
        push eax
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, ebp
        call ext_004A8DA0
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [ecx + 4h]
        pop esi
        pop ebp
        mov dword ptr [eax + 4h], ecx
        mov byte ptr [eax + 8h], 1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0ch
        ret 8
    L4A90_ret_false:
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 14h]
        pop edi
        mov dword ptr [eax + 4h], esi
        pop esi
        pop ebp
        mov byte ptr [eax + 8h], 0
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0ch
        ret 8
    }
}
