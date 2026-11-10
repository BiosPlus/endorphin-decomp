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
