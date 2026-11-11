// Decompiled translation unit: src/leaf/decompiled_470000.cpp

// [0x00474EE0] sub_00474EE0 (24 bytes)
extern "C" void ext_00451670();
extern "C" __declspec(naked) void __fastcall fn_00474EE0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x74
        mov dword ptr [esp + 0x8], eax
        call ext_00451670
        ret 0x4
    }
}

extern "C" void ext_005A6300();

// [0x004758A0] sub_004758A0 (24 bytes)
extern "C" __declspec(naked) void __fastcall fn_004758A0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x50
        mov dword ptr [esp + 0x8], eax
        call ext_005A6300
        ret 0x4
    }
}

// [0x004758C0] sub_004758C0 (24 bytes)
extern "C" __declspec(naked) void __fastcall fn_004758C0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x74
        mov dword ptr [esp + 0x8], eax
        call ext_005A6300
        ret 0x4
    }
}

// [0x00476E60] sub_00476E60 (25 bytes)
extern "C" void __fastcall ext_00504A70(void* self);
extern "C" void __cdecl ext_006A5C5C(void* arg);
extern "C" void __fastcall fn_00476E60(void** self) {
    void* p = *self;
    if (!p) return;
    ext_00504A70(p);
    ext_006A5C5C(p);
}

// [0x00476E80] sub_00476E80 (25 bytes)
extern "C" void __fastcall ext_004939B0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* arg);
extern "C" void __fastcall fn_00476E80(void** self) {
    void* p = *self;
    if (!p) return;
    ext_004939B0(p);
    ext_006A5C5C(p);
}

// [0x004758E0] sub_004758E0 (27 bytes)
extern "C" __declspec(naked) void __fastcall fn_004758E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x98
        mov dword ptr [esp + 0x8], eax
        call ext_005A6300
        ret 0x4
    }
}

// [0x00477380] sub_00477380 (36 bytes)
extern "C" int mem_00924FDC;
typedef void* (__thiscall *string_assign_fn)(void* self, const void* src);

extern "C" void __fastcall fn_00477380(void* self, int edx_unused, unsigned char* a1, void* a2) {
    *a1 = 0;
    void* src = *(void**)((unsigned char*)self + 0x28);
    if (((unsigned char*)src)[0x1c] != 0) {
        *a1 = 1;
    }
    string_assign_fn assign = *(string_assign_fn*)&mem_00924FDC;
    assign(a2, *(void**)((unsigned char*)self + 0x28));
}

// [0x004779B0] sub_004779B0 (42 bytes)
extern "C" void __cdecl fn_004779B0(unsigned int* first, unsigned int* last, const unsigned int* value) {
    if (first != last) {
        do {
            first[0] = value[0];
            first[1] = value[1];
            first[2] = value[2];
            first += 3;
        } while (first != last);
    }
}

// [0x00479A90] sub_00479A90 (44 bytes)
extern "C" __declspec(naked) float* __stdcall fn_00479A90(float* dst, unsigned int count, const float* src) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        test esi, esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, esi
        mov ecx, edi
        jbe done
        mov edx, dword ptr [esp + 0x14]
    copy_loop:
        fld dword ptr [edx]
        sub eax, 1
        fstp dword ptr [ecx]
        add ecx, 4
        test eax, eax
        ja copy_loop
    done:
        lea eax, [edi + 4*esi]
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x00476630] sub_00476630 (47 bytes)
// Constructs the std::string at a1 from a C string s (or empty if s is NULL); returns a1.
// Stack args (__cdecl, ret 0): a1 at [esp+0x8], s at [esp+0xc] after prologue.
extern "C" int mem_00924FE4;
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void* __cdecl fn_00476630(void* a1, const char* s) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        mov ecx, esi
        je empty_str
        push eax
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret
empty_str:
        call dword ptr [mem_00924FE8]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x00477E60] sub_00477E60 (49 bytes)
extern "C" __declspec(naked) void __cdecl fn_00477E60(void* dst, unsigned int count, const void* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        jbe done
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x4]
        push esi
    loop_top:
        test eax, eax
        je skip
        mov esi, dword ptr [edx]
        mov dword ptr [eax], esi
        mov esi, dword ptr [edx + 0x4]
        mov dword ptr [eax + 0x4], esi
        mov esi, dword ptr [edx + 0x8]
        mov dword ptr [eax + 0x8], esi
    skip:
        sub ecx, 0x1
        add eax, 0xc
        test ecx, ecx
        ja loop_top
        pop esi
    done:
        ret
    }
}

// [0x00477470] sub_00477470 (54 bytes)
extern "C" int mem_00925134;
extern "C" void __fastcall fn_00477470(void* self, int edx_unused, void* a1, unsigned int a2) {
    void (__cdecl* fail)() = (void (__cdecl*)())mem_00925134;
    unsigned int* s = (unsigned int*)self;
    unsigned int* base = (unsigned int*)s[0];
    unsigned int off = s[1];
    if (base == 0) {
        fail();
    }
    off = off + a2 * 4;
    if (off <= base[2]) {
        if (off >= base[1]) {
            goto done;
        }
    }
    fail();
done:
    ((unsigned int*)a1)[1] = off;
    ((unsigned int*)a1)[0] = (unsigned int)base;
}

// [0x00478C20] sub_00478C20 (54 bytes)
extern "C" void ext_00477E60();

extern "C" __declspec(naked) void* __fastcall fn_00478C20(void* self, int edx_unused, unsigned int a1, unsigned int a2, unsigned int a3) {
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
        call ext_00477E60
        lea ecx, [esi + 2*esi]
        add esp, 0x18
        lea eax, [edi + 4*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00476660] sub_00476660 (62 bytes)
// Formats into a local buffer via _snprintf, then constructs the std::string at a1 from it; returns a1.
extern "C" int mem_009251E0;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __cdecl fn_00476660(void* a1, int a2) {
    __asm {
        sub esp, 0x38
        mov eax, dword ptr [esp + 0x40]
        push esi
        push eax
        push 0x93bf08
        lea ecx, [esp + 0x10]
        push 0x32
        push ecx
        mov dword ptr [esp + 0x14], 0x0
        call dword ptr [mem_009251E0]
        mov esi, dword ptr [esp + 0x50]
        add esp, 0x10
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        add esp, 0x38
        ret
    }
}

// [0x004788D0] sub_004788D0 (62 bytes)
extern "C" __declspec(naked) void* __cdecl fn_004788D0(void* first, void* last, void* d_last) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, ecx
        sub eax, esi
        sar eax, 0x3
        add eax, eax
        add eax, eax
        add eax, eax
        push edi
        mov edi, eax
        mov eax, edx
        sub eax, edi
        cmp esi, ecx
        je fn_004788D0_done
        sub edx, ecx
    fn_004788D0_loop:
        mov edi, dword ptr [ecx - 0x8]
        sub ecx, 0x8
        cmp ecx, esi
        mov dword ptr [edx + ecx], edi
        mov edi, dword ptr [ecx + 0x4]
        mov dword ptr [edx + ecx + 0x4], edi
        jne fn_004788D0_loop
    fn_004788D0_done:
        pop edi
        pop esi
        ret
    }
}

// [0x00477A30] sub_00477A30 (68 bytes)
struct Lb477A30Elem { unsigned int key; unsigned int val; };
extern "C" Lb477A30Elem* __cdecl fn_00477A30(Lb477A30Elem* first, Lb477A30Elem* last, const unsigned int* value) {
    int n = (int)(last - first);
    Lb477A30Elem* f = first;
    if (n > 0) {
        unsigned int v = *value;
        do {
            int half = n / 2;
            Lb477A30Elem* mid = f + half;
            if (mid->key < v) {
                f = mid + 1;
                n = n - half - 1;
            } else {
                n = half;
            }
        } while (n > 0);
    }
    return f;
}

// [0x00472730] sub_00472730 (70 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_00472730(void* self, int edx_unused, const void* key) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x4]
        cmp byte ptr [esi + 0x39], 0x0
        push edi
        mov edi, eax
        jne done_early
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [mem_00924EF4]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
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
        cmp byte ptr [esi + 0x39], 0x0
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

// [0x00472780] sub_00472780 (70 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00472780(void* self, int edx_unused, const void* key) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x4]
        cmp byte ptr [esi + 0x45], 0x0
        push edi
        mov edi, eax
        jne done_early
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [mem_00924EF4]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
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
        cmp byte ptr [esi + 0x45], 0x0
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

// [0x004774B0] sub_004774B0 (73 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_004774B0(void* self, int edx_unused, const void* key) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x4]
        cmp byte ptr [esi + 0xc1], 0x0
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
        cmp byte ptr [esi + 0xc1], 0x0
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

// [0x00476D60] sub_00476D60 (76 bytes)
extern "C" void __cdecl fn_00476D60(int* first, int holeIndex, int topIndex, int value) {
    int parent = (holeIndex - 1) / 2;
    while (topIndex < holeIndex && first[parent] < value) {
        first[holeIndex] = first[parent];
        holeIndex = parent;
        parent = (holeIndex - 1) / 2;
    }
    first[holeIndex] = value;
}

// [0x0047FFA0] sub_0047FFA0 (76 bytes)
extern "C" __declspec(naked) void __fastcall fn_0047FFA0(void* self, int edx_unused, float* out, const float* b) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        fld dword ptr [edx]
        mov eax, dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx]
        fsub dword ptr [esp + 0x8]
        fstp dword ptr [eax]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x4]
        fsub dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [edx + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [edx + 0xc]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0xc]
        fsub dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0xc]
        ret 0x8
    }
}

// [0x004757F0] sub_004757F0 (77 bytes)
extern "C" void ext_00672D10();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004757F0(void* self) {
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
        call ext_00672D10
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

// [0x00476EC0] sub_00476EC0 (78 bytes)
extern "C" void __fastcall fn_00476EC0(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0x2d) == 0) {
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

// [0x004779E0] sub_004779E0 (79 bytes)
struct LB12Entry_004779E0 {
    unsigned int key;
    unsigned int v1;
    unsigned int v2;
};

extern "C" LB12Entry_004779E0* __cdecl fn_004779E0(LB12Entry_004779E0* first, LB12Entry_004779E0* last, const unsigned int* value) {
    LB12Entry_004779E0* it = first;
    int count = (int)(last - first);
    if (count > 0) {
        unsigned int key = *value;
        do {
            int half = count / 2;
            LB12Entry_004779E0* mid = it + half;
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

// [0x00470030] sub_00470030 (82 bytes)
extern "C" void __fastcall fn_00470030(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0x45] == 0) {
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

// [0x00475060] sub_00475060 (82 bytes)
extern "C" void __fastcall fn_00475060(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0x11] == 0) {
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

// [0x004772E0] sub_004772E0 (83 bytes)
extern "C" __declspec(naked) void* __cdecl fn_004772E0(void* first, void* last, void* d_last) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov edx, ecx
        sub edx, esi
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov edx, dword ptr [esp + 0x10]
        lea eax, [eax + 2*eax]
        add eax, eax
        add eax, eax
        push edi
        mov edi, eax
        mov eax, edx
        sub eax, edi
        cmp esi, ecx
        je done_copy
        sub edx, ecx
    copy_loop:
        mov edi, dword ptr [ecx - 0xc]
        sub ecx, 0xc
        cmp ecx, esi
        mov dword ptr [edx + ecx], edi
        mov edi, dword ptr [ecx + 0x4]
        mov dword ptr [edx + ecx + 0x4], edi
        mov edi, dword ptr [ecx + 0x8]
        mov dword ptr [edx + ecx + 0x8], edi
        jne copy_loop
    done_copy:
        pop edi
        pop esi
        ret
    }
}

// [0x004788A0] sub_004788A0 (43 bytes)
extern "C" void ext_004772E0();
extern "C" __declspec(naked) void __fastcall fn_004788A0(void* self) {
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
        call ext_004772E0
        add esp, 0x1c
        ret
    }
}

// [0x00476D00] sub_00476D00 (84 bytes)
extern "C" void __cdecl fn_00476D00(float* first, int hole, int top, float val) {
    for (int idx = (hole - 1) / 2; top < hole && first[idx] < val; idx = (hole - 1) / 2) {
        first[hole] = first[idx];
        hole = idx;
    }
    first[hole] = val;
}

// [0x00477280] sub_00477280 (92 bytes)
extern "C" void __cdecl fn_00477280(int* first, int holeIndex, int len, int value) {
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
    fn_00476D60(first, holeIndex, topIndex, value);
}

// [0x00477D90] sub_00477D90 (59 bytes)
extern "C" void ext_00477280();

// [0x00477D90] make_heap-style loop: for (parent = n/2; parent > 0; --parent) adjust(first, parent-1, n, first[parent-1])
extern "C" __declspec(naked) void __cdecl fn_00477D90(int* first, int* last) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        sub edi, ebx
        sar edi, 0x2
        mov eax, edi
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 0x1
        test esi, esi
        jle done
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    loop_top:
        mov eax, dword ptr [ebx + esi*4 - 0x4]
        sub esi, 0x1
        push eax
        push edi
        push esi
        push ebx
        call ext_00477280
        add esp, 0x10
        test esi, esi
        jg loop_top
    done:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00478D00] sub_00478D00 (67 bytes)
// sort_heap-style loop: while (last - first > 1) { --last; val = *last; *last = *first; adjust(first, 0, last - first, val); }
extern "C" __declspec(naked) void __cdecl fn_00478D00(int* first, int* last) {
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
    loop_top:
        mov eax, dword ptr [edi + esi - 0x4]
        mov ecx, dword ptr [edi]
        push eax
        lea edx, [esi - 0x4]
        sar edx, 0x2
        push edx
        push 0x0
        push edi
        mov dword ptr [edi + esi - 0x4], ecx
        call ext_00477280
        sub esi, 0x4
        mov eax, esi
        sar eax, 0x2
        add esp, 0x10
        cmp eax, 0x1
        jg loop_top
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x00477F30] sub_00477F30 (99 bytes)
extern "C" __declspec(naked) int __fastcall fn_00477F30(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x30]
        push edi
        mov edi, dword ptr [esi + 0x4]
        xor ebp, ebp
        cmp edi, dword ptr [esi + 0x8]
        jbe L_loop
        call dword ptr [mem_00925134]
    L_loop:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        cmp esi, esi
        je L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp edi, ebx
        je L_done
        cmp edi, dword ptr [esi + 0x8]
        jb L_call
        call dword ptr [mem_00925134]
    L_call:
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 0x160]
        cmp eax, ebp
        jle L_skip
        mov ebp, eax
    L_skip:
        cmp edi, dword ptr [esi + 0x8]
        jb L_inc
        call dword ptr [mem_00925134]
    L_inc:
        add edi, 0x4
        jmp L_loop
    L_done:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
    }
}

// [0x00477EC0] sub_00477EC0 (100 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00477EC0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x30]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        mov ebp, dword ptr [esp + 0x14]
    L_loop:
        cmp esi, esi
        je L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        cmp edi, ebx
        je L_done
        cmp edi, dword ptr [esi + 0x8]
        jb L_ok4
        call dword ptr [mem_00925134]
    L_ok4:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xec]
        push ebp
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_ok5
        call dword ptr [mem_00925134]
    L_ok5:
        add edi, 0x4
        jmp L_loop
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00476C30] sub_00476C30 (102 bytes)
extern "C" void __cdecl fn_00476C30(float* a, float* b, float* c) {
    float t;
    if (*b < *a) { t = *b; *b = *a; *a = t; }
    if (*c < *b) { t = *c; *c = *b; *b = t; }
    if (*b < *a) { t = *b; *b = *a; *a = t; }
}
