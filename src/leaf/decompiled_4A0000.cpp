// Decompiled translation unit: src/leaf/decompiled_4A0000.cpp

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
