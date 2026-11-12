// Decompiled translation unit: src/leaf/decompiled_470000.cpp

#include <new>
#include <string>

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

// [0x00476DF0] sub_00476DF0 (102 bytes)
extern "C" void ext_006A6D5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00476DF0(void* self) {
    __asm {
        push -1
        push 0x88ca07
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        push 0x504a70
        push 0x7
        push 0x54
        lea eax, [esi + 0x90]
        push eax
        mov dword ptr [esp + 0x20], 0x0
        call ext_006A6D5C
        mov ecx, dword ptr [mem_00924FF4]
        push ecx
        push 0x4
        push 0x1c
        add esi, 0x18
        push esi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_006A6D5C
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00477210] sub_00477210 (102 bytes)
extern "C" void __cdecl fn_00477210(float* first, int hole, int len, float val) {
    int top = hole;
    int idx = 2 * hole + 2;
    while (idx < len) {
        if (first[idx] < first[idx - 1]) --idx;
        first[hole] = first[idx];
        hole = idx;
        idx = 2 * idx + 2;
    }
    if (idx == len) {
        first[hole] = first[len - 1];
        hole = len - 1;
    }
    fn_00476D00(first, hole, top, val);
}

// [0x00477B70] sub_00477B70 (62 bytes)
extern "C" void ext_00477210();

// [0x00477B70] make_heap-style loop over float elements: for (k = n/2; k > 0; ) { v = first[k-1]; --k; adjust(v, n, k, first); }
extern "C" __declspec(naked) void __cdecl fn_00477B70(float* first, float* last) {
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
        fld dword ptr [ebx + esi*4 - 0x4]
        push ecx
        sub esi, 0x1
        fstp dword ptr [esp]
        push edi
        push esi
        push ebx
        call ext_00477210
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

// [0x00478CB0] sub_00478CB0 (78 bytes)
extern "C" __declspec(naked) void __cdecl fn_00478CB0(float* first, float* last) {
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
        fld dword ptr [edi + esi - 0x4]
        push ecx
        fstp dword ptr [esp + 0x14]
        lea eax, [esi - 0x4]
        fld dword ptr [edi]
        sar eax, 0x2
        fstp dword ptr [edi + esi - 0x4]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        push eax
        push 0x0
        push edi
        call ext_00477210
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

// [0x00478410] sub_00478410 (95 bytes)
extern "C" void ext_005170D0();
extern "C" void ext_00678D70();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00478410(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        mov ebp, ecx
        jbe L_00478428
        call dword ptr [mem_00925134]
    L_00478428:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_00478436
        call dword ptr [mem_00925134]
    L_00478436:
        cmp esi, ebx
        je L_0047845F
        cmp esi, dword ptr [edi + 0x8]
        jb L_00478445
        call dword ptr [mem_00925134]
    L_00478445:
        mov eax, dword ptr [esi]
        push eax
        mov ecx, ebp
        call ext_005170D0
        cmp esi, dword ptr [edi + 0x8]
        jb L_0047845A
        call dword ptr [mem_00925134]
    L_0047845A:
        add esi, 0x4
        jmp L_00478428
    L_0047845F:
        push 1
        mov ecx, ebp
        call ext_00678D70
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00476770] sub_00476770 (106 bytes)
extern "C" __declspec(naked) void __fastcall fn_00476770(void* self) {
    __asm {
        push -1
        push 0x00883701
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x54]
        mov dword ptr [esp + 0x10], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x1c]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
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

// [0x00470120] sub_00470120 (108 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00470120(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_check_cur
        call edi
    L_check_cur:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x45], 0x0
        je L_has_cur
        call edi
        pop edi
        pop esi
        ret
    L_has_cur:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x45], 0x0
        jne L_climb
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0x45], 0x0
        jne L_store_left
    L_left_loop:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0x45], 0x0
        je L_left_loop
    L_store_left:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_climb:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x45], 0x0
        jne L_store_parent
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_climb_loop:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax + 0x8]
        jne L_store_parent
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x45], 0x0
        je L_climb_loop
    L_store_parent:
        pop edi
        mov dword ptr [esi + 0x4], eax
        pop esi
        ret
    }
}

// [0x00474FF0] sub_00474FF0 (108 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00474FF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_check_cur
        call edi
    L_check_cur:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x11], 0x0
        je L_has_cur
        call edi
        pop edi
        pop esi
        ret
    L_has_cur:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x11], 0x0
        jne L_climb
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0x11], 0x0
        jne L_store_left
    L_left_loop:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0x11], 0x0
        je L_left_loop
    L_store_left:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_climb:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x11], 0x0
        jne L_store_parent
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_climb_loop:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax + 0x8]
        jne L_store_parent
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x11], 0x0
        je L_climb_loop
    L_store_parent:
        pop edi
        mov dword ptr [esi + 0x4], eax
        pop esi
        ret
    }
}

// [0x00476530] sub_00476530 (114 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void* __fastcall fn_00476530(void* self, int edx_unused, const void* a1, const void* a2) {
    __asm {
        push -0x1
        push 0x883701
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
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
        mov dword ptr [esp + 0x14], 0x0
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x10], 0x2
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x8]
        mov byte ptr [esi + 0x70], 0x0
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x004765B0] sub_004765B0 (119 bytes)
// Ctor (thiscall, ret 0xc): default-constructs the string at +0x00, copy-constructs
// strings at +0x1c (from arg3), +0x38 (from arg1), +0x54 (from arg2) with an EH state
// unwind frame (fs:[0] handler 0x883701), then sets the byte at +0x70 to 1.
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_004765B0(void* self, int edx_unused, const void* a1, const void* a2, const void* a3) {
    __asm {
        push -0x1
        push 0x883701
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [esp + 0x20]
        push eax
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x14], 0x0
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x14], 0x1
        call dword ptr [mem_00924FE0]
        mov edx, dword ptr [esp + 0x1c]
        push edx
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x14], 0x2
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x8]
        mov byte ptr [esi + 0x70], 0x1
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x004773D0] sub_004773D0 (119 bytes)
extern "C" void ext_0065F440();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004773D0(void* self) {
    __asm {
        push -1
        push 0x88383c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x58]
        mov dword ptr [esp + 0x10], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x3c]
        mov byte ptr [esp + 0x10], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x20]
        mov byte ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x4]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004767E0] sub_004767E0 (125 bytes)
// Copy-constructs a record: four std::string (0x1c each) at +0, +0x1c, +0x38, +0x54 and a byte at +0x70. Returns this.
// EH frame (state at trylevel slot): -1 before s0, 0 before s1, 1 before s2, 2 before s3.
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __fastcall fn_004767E0(void* self, int edx_unused, const void* src) {
    __asm {
        push -1
        push 0x883701
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
        lea eax, [edi + 0x1c]
        push eax
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x18], 0x0
        call dword ptr [mem_00924FE0]
        lea ecx, [edi + 0x38]
        push ecx
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x18], 0x1
        call dword ptr [mem_00924FE0]
        lea edx, [edi + 0x54]
        push edx
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x18], 0x2
        call dword ptr [mem_00924FE0]
        mov al, byte ptr [edi + 0x70]
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [esi + 0x70], al
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00470090] sub_00470090 (132 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00470090(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_004700A1
        call edi
    L_004700A1:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 45h], 0
        je L_004700BB
        mov eax, dword ptr [eax + 8]
        mov dword ptr [esi + 4], eax
        cmp byte ptr [eax + 45h], 0
        je L_00470111
    L_004700B6:
        call edi
        pop edi
        pop esi
        ret
    L_004700BB:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 45h], 0
        jne L_004700E1
        mov eax, dword ptr [ecx + 8]
        cmp byte ptr [eax + 45h], 0
        jne L_004700DB
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_004700D0:
        mov ecx, eax
        mov eax, dword ptr [ecx + 8]
        cmp byte ptr [eax + 45h], 0
        je L_004700D0
    L_004700DB:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
    L_004700E1:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 45h], 0
        jne L_00470105
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_004700F0:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax]
        jne L_00470105
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 45h], 0
        je L_004700F0
    L_00470105:
        mov ecx, dword ptr [esi + 4]
        cmp byte ptr [ecx + 45h], 0
        jne L_004700B6
        mov dword ptr [esi + 4], eax
    L_00470111:
        pop edi
        pop esi
        ret
    }
}

// [0x00477FA0] sub_00477FA0 (139 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00477FA0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0x34]
        cmp esi, dword ptr [ecx + 0x38]
        push edi
        lea edi, [ecx + 0x30]
        jbe L_00477FB7
        call ebp
    L_00477FB7:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_00477FC7
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_00477FC7:
        test edi, edi
        je L_00477FCF
        cmp edi, edi
        je L_00477FD7
    L_00477FCF:
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_00477FD7:
        cmp esi, ebx
        je L_00478022
        test edi, edi
        jne L_00477FE1
        call ebp
    L_00477FE1:
        cmp esi, dword ptr [edi + 0x8]
        jb L_00477FE8
        call ebp
    L_00477FE8:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xf8]
        call edx
        test eax, eax
        jne L_0047800D
        cmp esi, dword ptr [edi + 0x8]
        jb L_00477FFF
        call ebp
    L_00477FFF:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0x168]
        cmp ecx, dword ptr [esp + 0x14]
        je L_00478019
    L_0047800D:
        cmp esi, dword ptr [edi + 0x8]
        jb L_00478014
        call ebp
    L_00478014:
        add esi, 0x4
        jmp L_00477FB7
    L_00478019:
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret 0x4
    L_00478022:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x4
    }
}

// [0x00477DD0] sub_00477DD0 (142 bytes)
extern "C" int mem_009251EC;
extern "C" __declspec(naked) void __cdecl fn_00477DD0(int* first, int* last) {
    __asm {
        mov eax, dword ptr [esp+8]
        push ebx
        mov ebx, dword ptr [esp+8]
        cmp ebx, eax
        je L_ret1
        push esi
        lea esi, [ebx+4]
        cmp esi, eax
        je L_ret2
        mov eax, 4
        push ebp
        mov ebp, dword ptr [mem_009251EC]
        sub eax, ebx
        push edi
        mov dword ptr [esp+20], eax
        jmp L_body
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_top:
        mov eax, dword ptr [esp+20]
    L_body:
        mov edi, dword ptr [esi]
        cmp edi, dword ptr [ebx]
        mov edx, esi
        jge L_ge
        lea eax, [eax+esi-4]
        sar eax, 2
        test eax, eax
        jle L_memskip
        add eax, eax
        add eax, eax
        push eax
        mov ecx, esi
        push ebx
        sub ecx, eax
        push eax
        add ecx, 4
        push ecx
        call ebp
        add esp, 16
    L_memskip:
        mov dword ptr [ebx], edi
        jmp L_next
    L_ge:
        mov ecx, dword ptr [esi-4]
        cmp edi, ecx
        lea eax, [esi-4]
        jge L_store
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_shift:
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax-4]
        mov edx, eax
        sub eax, 4
        cmp edi, ecx
        jl L_shift
    L_store:
        mov dword ptr [edx], edi
    L_next:
        add esi, 4
        cmp esi, dword ptr [esp+24]
        jne L_top
        pop edi
        pop ebp
    L_ret2:
        pop esi
    L_ret1:
        pop ebx
        ret
    }
}

// [0x00477090] sub_00477090 (143 bytes)
extern "C" void __cdecl fn_00477090(float* first, float* mid, float* last) {
    int n = (int)(last - first);
    if (n > 40) {
        int step = (n + 1) / 8;
        fn_00476C30(first, first + step, first + 2 * step);
        fn_00476C30(mid - step, mid, mid + step);
        fn_00476C30(last - 2 * step, last - step, last);
        fn_00476C30(first + step, mid, last - step);
    } else {
        fn_00476C30(first, mid, last);
    }
}

// [0x00476940] sub_00476940 (144 bytes)
extern "C" int mem_00924FF0;
extern "C" int mem_00925240;
extern "C" int mem_00924EAC;
extern "C" int mem_00924FFC;

extern "C" __declspec(naked) void __fastcall fn_00476940(void* self, int edx_unused, const void* arg) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        call dword ptr [mem_00924FF0]
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_00925240]
        add esp, 0x8
        mov ecx, esi
        mov ebx, eax
        call dword ptr [mem_00924FF0]
        cmp ebx, eax
        jne L_476990
        push ebp
        mov ecx, esi
        call dword ptr [mem_00924EAC]
        mov ecx, edi
        mov ebp, eax
        call dword ptr [mem_00924EAC]
        cmp ebp, eax
        pop ebp
        jne L_476990
L_476988:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
L_476990:
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        cmp ebx, eax
        jne L_4769C8
        mov ecx, esi
        call dword ptr [mem_00924EAC]
        mov ecx, edi
        mov ebx, eax
        call dword ptr [mem_00924EAC]
        cmp ebx, eax
        jbe L_4769C8
        mov ecx, edi
        call dword ptr [mem_00924EAC]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FFC]
        cmp byte ptr [eax], 0x2e
        je L_476988
L_4769C8:
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    }
}

// [0x00476BC0] sub_00476BC0 (106 bytes)
extern "C" void ext_00476940();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __cdecl fn_00476BC0(const void* first, const void* last) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x883778
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        push edi
        mov esi, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x1c]
        cmp esi, edi
        mov dword ptr [esp + 0x10], 0x0
        je L_00476C05
        jmp L_00476BF0
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    L_00476BF0:
        push esi
        lea ecx, [esp + 0x24]
        call ext_00476940
        test al, al
        jne L_00476C05
        add esi, 0x1c
        cmp esi, edi
        jne L_00476BF0
    L_00476C05:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x00477520] sub_00477520 (118 bytes)
extern "C" void ext_00476BC0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00477520(void* self) {
    __asm {
        push -1
        push 0x883858
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        sub esp, 0x1c
        lea eax, [esp + 0x48]
        mov dword ptr [esp + 0x20], esp
        mov ecx, esp
        push eax
        mov dword ptr [esp + 0x30], 0x0
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x44]
        mov edx, dword ptr [esp + 0x3c]
        push ecx
        push edx
        call ext_00476BC0
        mov ecx, dword ptr [esp + 0x40]
        mov esi, dword ptr [esp + 0x3c]
        mov dword ptr [esi], ecx
        add esp, 0x24
        lea ecx, [esp + 0x2c]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x0047A4E0] sub_0047A4E0 (151 bytes)
extern "C" void ext_00584A10();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void* __fastcall fn_0047A4E0(void* self, int edx_unused, const void* a1) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [ecx + 0x1c]
        mov eax, dword ptr [eax]
        push ebx
        lea ebx, [ecx + 0x18]
        push ebp
        push esi
        mov esi, ebx
        mov ebp, eax
        push edi
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], ebp
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    loop_top:
        test esi, esi
        mov edi, dword ptr [ebx + 0x4]
        je inv1
        cmp esi, ebx
        je ok1
    inv1:
        call dword ptr [mem_00925134]
    ok1:
        cmp ebp, edi
        je ret_null
        test esi, esi
        jne ok2
        call dword ptr [mem_00925134]
    ok2:
        cmp ebp, dword ptr [esi + 0x4]
        jne ok3
        call dword ptr [mem_00925134]
    ok3:
        mov esi, dword ptr [ebp + 0x28]
        test esi, esi
        je do_inc
        lea ecx, [esi + 0x4]
        call ext_00584A10
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        jne found
    do_inc:
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp loop_top
    found:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    ret_null:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x004736F0] sub_004736F0 (152 bytes)
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_006A6DE0();
extern "C" int mem_0093BD38;
extern "C" int mem_0092520C;
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_004736F0(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebx, [esi + 0x154]
        push edi
        mov ecx, ebx
        call ext_0065C640
        mov eax, dword ptr [esi + 0x28]
        test eax, eax
        mov ecx, dword ptr [esi + 0x24]
        mov dword ptr [esp + 0x10], eax
        fild dword ptr [esp + 0x10]
        jge short fn4736F0_a
        fadd qword ptr [mem_0093BD38]
fn4736F0_a:
        test ecx, ecx
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        jge short fn4736F0_b
        fadd qword ptr [mem_0093BD38]
fn4736F0_b:
        fdivp st(1), st
        sub esp, 0x8
        fstp qword ptr [esp]
        call dword ptr [mem_0092520C]
        add esp, 0x8
        call ext_006A6DE0
        mov edi, dword ptr [esi + 0x24]
        mov esi, dword ptr [esi + 0xf8]
        imul edi, eax
        mov ebp, dword ptr [mem_00925134]
        add esi, 0xd4
        cmp dword ptr [esi], 0x0
        jne short fn4736F0_c
        call ebp
fn4736F0_c:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax + 0x4]
        jne short fn4736F0_d
        call ebp
fn4736F0_d:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + 0x8]
        mov ecx, ebx
        lea esi, [eax + edi + 0x1]
        call ext_0065C650
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x00472870] sub_00472870 (155 bytes)
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

// Naked: EH frame written out by hand (see fn_004023D0 for the same pattern).
extern "C" __declspec(naked) void* __cdecl fn_00472870(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x00882e91
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
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [edi + 0x1c]
        mov dword ptr [esi + 0x1c], eax
    skip_ctor:
        add esi, 0x20
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x20
        jmp loop_top
    handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je handler_rethrow
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    destroy_loop:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x20
        cmp esi, edi
        jne destroy_loop
    handler_rethrow:
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

// [0x00477BB0] sub_00477BB0 (167 bytes)
extern "C" __declspec(naked) void __cdecl fn_00477BB0(float* first, float* last) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x8]
        cmp edi, eax
        je L_ret1
        push esi
        lea esi, [edi + 0x4]
        cmp esi, eax
        je L_ret2
        push ebx
        mov ebx, dword ptr [mem_009251EC]
        push ebp
        mov ebp, 0x4
        sub ebp, edi
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00

    L_loop:
        fld dword ptr [esi]
        mov edx, esi
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld dword ptr [edi]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_else
        lea eax, [esi + ebp - 0x4]
        sar eax, 0x2
        test eax, eax
        jle L_skip_memmove
        add eax, eax
        fstp st(0)
        add eax, eax
        push eax
        mov ecx, esi
        push edi
        sub ecx, eax
        push eax
        add ecx, 0x4
        push ecx
        call ebx
        fld dword ptr [esp + 0x24]
        add esp, 0x10

    L_skip_memmove:
        fstp dword ptr [edi]
        jmp L_next

    L_else:
        lea ecx, [esi - 0x4]
        fld st(0)
        fld dword ptr [ecx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_else_done

    L_shift:
        fld dword ptr [ecx]
        fstp dword ptr [edx]
        mov edx, ecx
        fld dword ptr [ecx - 0x4]
        sub ecx, 0x4
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        je L_shift

    L_else_done:
        fstp st(0)
        fstp dword ptr [edx]

    L_next:
        add esi, 0x4
        cmp esi, dword ptr [esp + 0x18]
        jne L_loop
        pop ebp
        pop ebx

    L_ret2:
        pop esi

    L_ret1:
        pop edi
        ret
    }
}

extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_0065D570();
extern "C" void ext_006620E0();
extern "C" int mem_00925134;

// [0x00472D80] sub_00472D80 (175 bytes)
extern "C" __declspec(naked) void __fastcall fn_00472D80(void* self) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        push edi
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov dword ptr [esp + 0x10], ebx
        call ext_0065C640
        mov ecx, dword ptr [esi + 0xf8]
        add ecx, 0x6c
        mov dword ptr [esp + 0x1c], 0
        call ext_006620E0
        mov edi, dword ptr [esi + 0xf8]
        mov ebp, dword ptr [mem_00925134]
        add edi, 0x6c
        cmp dword ptr [edi + 0x8], 0
        jne L_a
        call ebp
    L_a:
        mov eax, dword ptr [edi + 0x8]
        mov ecx, dword ptr [edi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_b
        call ebp
    L_b:
        mov edx, dword ptr [edi + 0xc]
        mov eax, dword ptr [edx + 0x8]
        mov ecx, dword ptr [esi + 0xf8]
        mov dword ptr [esi + 0x158], eax
        call ext_0065D570
        sub eax, 1
        mov ecx, ebx
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esp + 0x1c], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004775A0] sub_004775A0 (178 bytes)
extern "C" void ext_00476940();
extern "C" int mem_00925134;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004775A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x883858
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, dword ptr [esp + 0x24]
        cmp ebp, dword ptr [esp + 0x28]
        mov esi, dword ptr [esp + 0x2c]
        mov edi, dword ptr [esp + 0x30]
        mov dword ptr [esp + 0x18], 0x0
        je short L_00477622
    L_004775D3:
        push ebp
        lea ecx, [esp + 0x38]
        call ext_00476940
        test al, al
        jne short L_00477619
        test esi, esi
        mov ebx, edi
        jne short L_004775ED
        call dword ptr [mem_00925134]
    L_004775ED:
        cmp edi, dword ptr [esi + 0x8]
        jb short L_004775F8
        call dword ptr [mem_00925134]
    L_004775F8:
        add edi, 0x1c
        test esi, esi
        jne short L_00477605
        call dword ptr [mem_00925134]
    L_00477605:
        cmp ebx, dword ptr [esi + 0x8]
        jb short L_00477610
        call dword ptr [mem_00925134]
    L_00477610:
        push ebp
        mov ecx, ebx
        call dword ptr [mem_00924FDC]
    L_00477619:
        add ebp, 0x1c
        cmp ebp, dword ptr [esp + 0x28]
        jne short L_004775D3
    L_00477622:
        mov ebx, dword ptr [esp + 0x20]
        lea ecx, [esp + 0x34]
        mov dword ptr [ebx], esi
        mov dword ptr [ebx + 0x4], edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x00478470] sub_00478470 (127 bytes)
extern "C" void ext_004775A0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_00478470(void) {
    __asm {
        push -1
        push 0x883878
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        xor eax, eax
        mov byte ptr [esp + 0x4], al
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x4]
        push eax
        sub esp, 0x1c
        lea edx, [esp + 0x54]
        mov dword ptr [esp + 0x24], esp
        mov ecx, esp
        push edx
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 0x50]
        mov ecx, dword ptr [esp + 0x4c]
        mov edx, dword ptr [esp + 0x48]
        mov esi, dword ptr [esp + 0x38]
        push eax
        mov eax, dword ptr [esp + 0x44]
        push ecx
        push edx
        push eax
        push esi
        call ext_004775A0
        add esp, 0x34
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0x10
        ret
    }
}

extern "C" void ext_004765B0();
extern "C" void ext_00476660();

// [0x004769F0] sub_004769F0 (181 bytes)
extern "C" __declspec(naked) void __fastcall fn_004769F0(void* self, int edx_unused, const void* a1, const void* a2, const void* a3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x883734
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc8
        push esi
        mov esi, dword ptr [esp + 0xe0]
        push edi
        mov edi, dword ptr [esp + 0xe0]
        mov eax, dword ptr [edi]
        cmp eax, dword ptr [esi]
        je done
        mov ecx, dword ptr [esp + 0xe8]
        push ecx
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [esi]
        push edx
        lea eax, [esp + 0x28]
        push eax
        mov dword ptr [esp + 0xe0], 0x0
        call ext_00476660
        mov esi, eax
        mov ecx, dword ptr [edi]
        push ecx
        lea edx, [esp + 0x4c]
        push edx
        mov byte ptr [esp + 0xe8], 0x1
        call ext_00476660
        add esp, 0x10
        lea ecx, [esp + 0x8]
        push ecx
        push esi
        push eax
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xe4], 0x2
        call ext_004765B0
        push 0x9dfd38
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    done:
        mov ecx, dword ptr [esp + 0xd0]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0xd4
        ret 0xc
    }
}

// [0x004766A0] sub_004766A0 (196 bytes)
// Builds "[" + "%ld"(a1) + "]" as a std::string into the hidden return buffer a0 (returned in eax), SEH-guarded.
extern "C" int mem_00924FD0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;
extern "C" void ext_00476630();
extern "C" void ext_00476660();
extern "C" __declspec(naked) void* __cdecl fn_004766A0(void* a0, int a1) {
    __asm {
        push -0x1
        push 0x8b4d95
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x58
        mov eax, dword ptr [esp + 0x6c]
        push esi
        push eax
        lea ecx, [esp + 0x44]
        push ecx
        mov dword ptr [esp + 0xc], 0x0
        call ext_00476660
        mov esi, eax
        lea edx, [esp + 0x2c]
        push 0x92f144
        push edx
        mov dword ptr [esp + 0x74], 0x1
        call ext_00476630
        push esi
        push eax
        lea eax, [esp + 0x20]
        push eax
        mov byte ptr [esp + 0x80], 0x2
        call dword ptr [mem_00924FD0]
        mov esi, dword ptr [esp + 0x88]
        push 0x92f140
        push eax
        push esi
        mov byte ptr [esp + 0x8c], 0x3
        call dword ptr [mem_00924ECC]
        add esp, 0x28
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x1
        mov byte ptr [esp + 0x64], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x64], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x64], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x5c]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x64
        ret
    }
}

// [0x00476AB0] sub_00476AB0 (193 bytes)
// Ctor-style check: if (a1 != a2) throw Exc(a1, a2, "[" + ToStr(a4) + "]" + a3), SEH-guarded. ret 0x10.
extern "C" void ext_004765B0();
extern "C" void ext_00476630();
extern "C" void ext_004766A0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FB0;
extern "C" int mem_00924FD0;
extern "C" __declspec(naked) void __fastcall fn_00476AB0(void* self, int edx_unused, const void* a1, const void* a2, const char* a3, int a4) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x883764
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc8
        push ebx
        mov ebx, dword ptr [esp + 0xdc]
        push edi
        mov edi, dword ptr [esp + 0xe4]
        push edi
        push ebx
        call dword ptr [mem_00924FB0]
        add esp, 0x8
        test al, al
        je L_ret
        mov eax, dword ptr [esp + 0xec]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        call ext_004766A0
        mov esi, eax
        mov edx, dword ptr [esp + 0xf4]
        push edx
        lea eax, [esp + 0x18]
        push eax
        mov dword ptr [esp + 0xec], 0x0
        call ext_00476630
        push esi
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        mov byte ptr [esp + 0xf8], 0x1
        call dword ptr [mem_00924FD0]
        add esp, 0x1c
        push eax
        push edi
        push ebx
        lea ecx, [esp + 0x6c]
        mov byte ptr [esp + 0xe8], 0x2
        call ext_004765B0
        push 0x9dfd38
        lea edx, [esp + 0x64]
        push edx
        call ext_006A6DD2
        pop esi
L_ret:
        mov ecx, dword ptr [esp + 0xd0]
        pop edi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0xd4
        ret 0x10
    }
}

// [0x00472350] sub_00472350 (205 bytes)
extern "C" void ext_0046F880();
extern "C" void ext_0046F890();
extern "C" void ext_0046F980();
extern "C" void ext_00480130();
extern "C" void ext_00493F80();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_0067B410();

extern "C" __declspec(naked) void __fastcall fn_00472350(void* self) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        call ext_0046F880
        test al, al
        je fn472350_skip1
        mov eax, dword ptr [esi + 0xcc]
        lea ecx, [eax + 0x258]
        call ext_00493F80
fn472350_skip1:
        mov ecx, esi
        call ext_0046F980
        xor ebx, ebx
        mov ecx, esi
        mov byte ptr [esi + 0x150], bl
        call ext_0046F890
        test al, al
        je fn472350_done
        push edi
        lea edi, [esi + 0x170]
        mov ecx, edi
        mov byte ptr [esi + 0x290], bl
        mov byte ptr [esi + 0x291], bl
        mov byte ptr [esi + 0x292], bl
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        lea ecx, [esi + 0x10c]
        mov dword ptr [esp + 0x18], ebx
        call ext_0067B410
        mov ecx, dword ptr [esi + 0x34]
        mov byte ptr [esi + 0x290], bl
        mov byte ptr [esi + 0x291], bl
        mov byte ptr [esi + 0x292], bl
        call ext_00480130
        mov eax, dword ptr [esi + 0xa8]
        mov edx, dword ptr [eax + 0x8]
        lea ecx, [esi + 0xa8]
        call edx
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        pop edi
fn472350_done:
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00472650] sub_00472650 (212 bytes)
extern "C" void ext_00472350();
extern "C" void ext_0067B2F0();
extern "C" void ext_0067B3D0();
extern "C" void ext_0067B530();
extern "C" void ext_0067B5C0();
extern "C" int mem_00928E78;
extern "C" int mem_0092BD70;
extern "C" __declspec(naked) void __fastcall fn_00472650(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x8
        push esi
        push edi
        mov esi, ecx
        call ext_00472350
        mov al, byte ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x30]
        mov byte ptr [esi + 0x295], al
        mov byte ptr [esi + 0x292], 0x1
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x138]
        call eax
        mov ecx, dword ptr [esi + 0xf8]
        mov byte ptr [esi + 0x294], al
        fld dword ptr [ecx + 0x138]
        fdiv dword ptr [esi + 0x28c]
        sub esp, 0x10
        lea ecx, [esi + 0x248]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fstp qword ptr [esp + 0x8]
        fild dword ptr [esi + 0x288]
        fstp qword ptr [esp]
        call ext_0067B2F0
        fild dword ptr [esi + 0x288]
        mov edx, dword ptr [esi + 0x284]
        mov dword ptr [esi + 0x268], edx
        mov byte ptr [esi + 0x290], 0x1
        fdivr qword ptr [mem_00928E78]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x8]
        fistp dword ptr [esp + 0x14]
        mov eax, dword ptr [esi + 0x274]
        mov ecx, dword ptr [esp + 0x14]
        push 0x4
        push eax
        lea edi, [esi + 0x10c]
        push ecx
        mov ecx, edi
        call ext_0067B3D0
        cmp byte ptr [esp + 0x18], 0x0
        mov ecx, edi
        je short not_taken
        call ext_0067B5C0
        pop edi
        pop esi
        add esp, 0x8
        ret 0x8
not_taken:
        call ext_0067B530
        pop edi
        pop esi
        add esp, 0x8
        ret 0x8
    }
}

struct Obj_00476860 {
    virtual void v00() = 0; virtual void v01() = 0; virtual void v02() = 0; virtual void v03() = 0;
    virtual void v04() = 0; virtual void v05() = 0; virtual void v06() = 0; virtual void v07() = 0;
    virtual void v08() = 0; virtual void v09() = 0; virtual void v0a() = 0; virtual void v0b() = 0;
    virtual void v0c() = 0; virtual void v0d() = 0; virtual void v0e() = 0; virtual void v0f() = 0;
    virtual void v10() = 0; virtual void v11() = 0; virtual void v12() = 0; virtual void v13() = 0;
    virtual void v14() = 0; virtual void v15() = 0; virtual void v16() = 0; virtual void v17() = 0;
    virtual void v18() = 0; virtual void v19() = 0; virtual void v1a() = 0; virtual void v1b() = 0;
    virtual void v1c() = 0; virtual void v1d() = 0; virtual void v1e() = 0; virtual void v1f() = 0;
    virtual void v20() = 0; virtual void v21() = 0; virtual void v22() = 0; virtual void v23() = 0;
    virtual void v24() = 0; virtual void v25() = 0; virtual void v26() = 0; virtual void v27() = 0;
    virtual void v28() = 0; virtual void v29() = 0; virtual void v2a() = 0; virtual void v2b() = 0;
    virtual void v2c() = 0; virtual void v2d() = 0; virtual void v2e() = 0; virtual void v2f() = 0;
    virtual void v30() = 0; virtual void v31() = 0; virtual void v32() = 0; virtual void v33() = 0;
    virtual void v34() = 0; virtual void v35() = 0; virtual void v36() = 0; virtual void v37() = 0;
    virtual void v38() = 0; virtual void v39() = 0; virtual void v3a() = 0; virtual void v3b() = 0;
    virtual void v3c() = 0; virtual void v3d() = 0;
    virtual int getType() = 0;

    char pad[0x158];
    int field_15c;
    int field_160;
    int field_164;
};

// [0x00476860] sub_00476860 (214 bytes)
extern "C" bool __fastcall fn_00476860(void* self, int edx_unused, Obj_00476860* a, Obj_00476860* b) {
    if (a->getType() == 9 && b->getType() != 9)
        return true;
    if (a->getType() != 9 && b->getType() == 9)
        goto ret_false;
    if (a->getType() == 0 && b->getType() != 0)
        return true;
    if (a->getType() != 0 && b->getType() == 0)
        goto ret_false;

    if (a->field_164 > b->field_164)
        return true;
    if (a->field_164 != b->field_164)
        goto ret_false;
    if (a->field_15c < b->field_15c)
        return true;
    if (a->field_15c != b->field_15c)
        goto ret_false;
    if (a->field_160 < b->field_160)
        return true;

ret_false:
    return false;
}

// [0x00476CA0] sub_00476CA0 (96 bytes)
extern "C" void ext_00476860();

extern "C" __declspec(naked) void __cdecl fn_00476CA0(void* first, int hole, int top, unsigned val, void* pred) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        lea eax, [edi - 1]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        cmp dword ptr [esp + 0x14], edi
        jge L_early_476CA0
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
L_head_476CA0:
        mov eax, dword ptr [ebx + 4*esi]
        push ebp
        push eax
        lea ecx, [esp + 0x2c]
        call ext_00476860
        test al, al
        je L_exit_476CA0
        mov ecx, dword ptr [ebx + 4*esi]
        lea eax, [esi - 1]
        cdq
        sub eax, edx
        mov dword ptr [ebx + 4*edi], ecx
        mov edi, esi
        sar eax, 1
        cmp dword ptr [esp + 0x1c], edi
        mov esi, eax
        jl L_head_476CA0
L_exit_476CA0:
        mov dword ptr [ebx + 4*edi], ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        ret
L_early_476CA0:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax + 4*edi], edx
        pop edi
        pop esi
        ret
    }
}

// [0x00477120] sub_00477120 (100 bytes)
extern "C" __declspec(naked) void __cdecl fn_00477120(unsigned* x, unsigned* y) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi]
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi]
        push eax
        push ecx
        lea ecx, [esp + 0x20]
        call ext_00476860
        test al, al
        je L_skip1_120
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], edx
        mov dword ptr [edi], eax
    L_skip1_120:
        mov eax, dword ptr [esi]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [ebx]
        push eax
        push ecx
        lea ecx, [esp + 0x24]
        call ext_00476860
        test al, al
        je L_skip2_120
        mov edx, dword ptr [esi]
        mov eax, dword ptr [ebx]
        mov dword ptr [ebx], edx
        mov dword ptr [esi], eax
    L_skip2_120:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        lea ecx, [esp + 0x24]
        call ext_00476860
        test al, al
        pop ebx
        je L_skip3_120
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], edx
        mov dword ptr [edi], eax
    L_skip3_120:
        pop edi
        pop esi
        ret
    }
}

// [0x00477190] sub_00477190 (115 bytes)
extern "C" void ext_00476860();
extern "C" void ext_00476CA0();

extern "C" __declspec(naked) void __cdecl fn_00477190(void* first, int hole, int len, unsigned val, void* pred) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        lea esi, [edi + edi + 0x2]
        cmp esi, ebp
        mov dword ptr [esp + 0x18], edi
        jge L_after_loop_00477190
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
L_loop_00477190:
        mov eax, dword ptr [ebx + 4*esi - 0x4]
        mov ecx, dword ptr [ebx + 4*esi]
        push eax
        push ecx
        lea ecx, [esp + 0x2c]
        call ext_00476860
        test al, al
        je L_skip_00477190
        sub esi, 0x1
L_skip_00477190:
        mov edx, dword ptr [ebx + 4*esi]
        mov dword ptr [ebx + 4*edi], edx
        mov edi, esi
        lea esi, [esi + esi + 0x2]
        cmp esi, ebp
        jl L_loop_00477190
L_after_loop_00477190:
        jne L_call_00477190
        mov eax, dword ptr [ebx + 4*ebp - 0x4]
        mov dword ptr [ebx + 4*edi], eax
        lea edi, [ebp - 0x1]
L_call_00477190:
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x18]
        push ecx
        push edx
        push eax
        push edi
        push ebx
        call ext_00476CA0
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00477B30] sub_00477B30 (63 bytes)
extern "C" void __cdecl fn_00477B30(unsigned int* first, unsigned int* last, void* comp) {
    int len = last - first;
    for (int hole = len / 2; hole > 0; ) {
        --hole;
        fn_00477190(first, hole, len, first[hole], comp);
    }
}

// [0x00478C60] sub_00478C60 (74 bytes)
extern "C" void ext_00477190();

extern "C" __declspec(naked) void __cdecl fn_00478C60(unsigned int* first, unsigned int* last, int comp) {
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
        call ext_00477190
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

// [0x00477A80] sub_00477A80 (162 bytes)
extern "C" void ext_00477120();

extern "C" __declspec(naked) void __cdecl fn_00477A80(unsigned* first, unsigned* mid, unsigned* last, void* pred) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, esi
        sub eax, ecx
        sar eax, 0x2
        cmp eax, 0x28
        jle small_path
        add eax, 1
        cdq
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        and edx, 0x7
        add eax, edx
        push ebp
        sar eax, 0x3
        push edi
        lea edx, [8*eax]
        mov dword ptr [esp + 0x1c], edx
        push ebx
        lea edi, [4*eax]
        add edx, ecx
        lea eax, [edi + ecx]
        push edx
        push eax
        push ecx
        mov dword ptr [esp + 0x24], eax
        call ext_00477120
        mov eax, ebx
        mov ebx, dword ptr [esp + 0x28]
        push eax
        lea ecx, [edi + ebx]
        push ecx
        mov edx, ebx
        sub edx, edi
        push ebx
        push edx
        call ext_00477120
        mov ebp, esi
        sub ebp, edi
        mov edi, dword ptr [esp + 0x40]
        push edi
        push esi
        sub esi, dword ptr [esp + 0x44]
        push ebp
        push esi
        call ext_00477120
        mov eax, dword ptr [esp + 0x44]
        push edi
        push ebp
        push ebx
        push eax
        call ext_00477120
        add esp, 0x40
        pop edi
        pop ebp
        pop ebx
        pop esi
        ret
    small_path:
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push esi
        push eax
        push ecx
        call ext_00477120
        add esp, 0x10
        pop esi
        ret
    }
}

// [0x004786B0] sub_004786B0 (174 bytes)
extern "C" void ext_00609850();
extern "C" void ext_00476860();
extern "C" __declspec(naked) void __cdecl fn_004786B0(void* first, void* last, void* pred) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        cmp ebx, eax
        je L_ret_ebx
        push esi
        lea esi, [ebx + 0x4]
        cmp esi, eax
        je L_ret_esi
        push ebp
        push edi
        lea ebp, [esi + 0x4]
    L_loop:
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        lea ecx, [esp + 0x24]
        call ext_00476860
        test al, al
        je L_else
        cmp ebx, esi
        je L_adv
        cmp esi, ebp
        je L_adv
        push 0
        push 0
        push ebp
        push esi
        push ebx
        call ext_00609850
        add esp, 0x14
        jmp L_adv
    L_else:
        mov edx, dword ptr [ebp - 0x8]
        mov eax, dword ptr [esi]
        lea edi, [ebp - 0x8]
        push edx
        push eax
        lea ecx, [esp + 0x24]
        call ext_00476860
        test al, al
        je L_adv
    L_inner:
        mov ecx, dword ptr [edi - 0x4]
        mov edx, dword ptr [esi]
        mov ebx, edi
        sub edi, 0x4
        push ecx
        push edx
        lea ecx, [esp + 0x24]
        call ext_00476860
        test al, al
        jne L_inner
        cmp ebx, esi
        je L_skip
        cmp esi, ebp
        je L_skip
        push 0
        push 0
        push ebp
        push esi
        push ebx
        call ext_00609850
        add esp, 0x14
    L_skip:
        mov ebx, dword ptr [esp + 0x14]
    L_adv:
        add esi, 0x4
        add ebp, 0x4
        cmp esi, dword ptr [esp + 0x18]
        jne L_loop
        pop edi
        pop ebp
    L_ret_esi:
        pop esi
    L_ret_ebx:
        pop ebx
        ret
    }
}

// [0x00473790] sub_00473790 (223 bytes)
extern "C" void ext_0046FE90();
extern "C" void ext_004736F0();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" __declspec(naked) void __fastcall fn_00473790(void* self) {
    __asm {
        push -1
        push 0x882e50
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x28]
        push edi
        mov edi, dword ptr [esp + 0x20]
        cmp eax, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        mov dword ptr [esi + 0x24], eax
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x28], ecx
        mov edx, dword ptr [edi + 0x8]
        lea ebp, [esi + 0x154]
        mov ecx, ebp
        setb byte ptr [esp + 0x20]
        mov dword ptr [esi + 0x2c], edx
        mov dword ptr [esp + 0xc], ebp
        call ext_0065C640
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0x0
        call ext_004736F0
        mov ecx, ebp
        mov dword ptr [esi + 0x15c], eax
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esi + 0x30]
        test ecx, ecx
        je skip_block
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebp, eax
        mov ecx, ebp
        mov dword ptr [esp + 0xc], ebp
        call ext_0065C640
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10]
        push edi
        mov dword ptr [esp + 0x1c], 0x1
        call edx
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        call edx
        mov ecx, ebp
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
    skip_block:
        cmp byte ptr [esp + 0x20], 0x0
        je skip_unwind
        mov ecx, esi
        call ext_0046FE90
    skip_unwind:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00472BA0] sub_00472BA0 (226 bytes)
extern "C" __declspec(naked) void __fastcall fn_00472BA0(void* self) {
    __asm {
        push -1
        push 0x882ee0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push ebp
        push esi
        mov esi, ecx
        lea ebp, [esi + 0x20]
        push edi
        mov ecx, ebp
        mov dword ptr [esp + 0xc], ebp
        call ext_0065C640
        mov ecx, 0xaee8ac
        mov dword ptr [esp + 0x1c], 0x0
        mov dword ptr [esp + 0x10], ecx
        call ext_0065C640
        mov edi, dword ptr [esi + 0xf8]
        add edi, 0xcc
        cmp dword ptr [edi + 0x8], 0x0
        mov byte ptr [esp + 0x1c], 0x1
        jne L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        mov eax, dword ptr [edi + 0x8]
        mov ecx, dword ptr [edi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        mov edx, dword ptr [edi + 0xc]
        mov eax, dword ptr [edx + 0x8]
        add eax, -0x1
        jns L_ok3
        xor eax, eax
    L_ok3:
        mov ecx, dword ptr [esi + 0xf8]
        mov dword ptr [esi + 0x10], eax
        call ext_0065D570
        sub eax, 0x1
        jns L_ok4
        xor eax, eax
    L_ok4:
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esi + 0xf8]
        mov ecx, dword ptr [eax + 0x134]
        mov eax, dword ptr [eax + 0x130]
        add ecx, -0x1
        add eax, -0x1
        mov dword ptr [esi + 0x1c], ecx
        mov ecx, 0xaee8ac
        mov dword ptr [esi + 0x18], eax
        mov byte ptr [esp + 0x1c], 0x0
        call ext_0065C650
        mov ecx, ebp
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00473670] sub_00473670 (53 bytes)
extern "C" void ext_0065D0C0();
extern "C" void ext_00472BA0();
extern "C" void __fastcall fn_00473670(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *fn1_t)(void*, int);
    typedef void (__thiscall *fn2_t)(void*);

    void* f8 = *(void**)((char*)self + 0xf8);
    ((fn1_t)ext_0065D0C0)(f8, a1 + 1);

    void* cc = *(void**)((char*)self + 0xcc);
    void* edx = *(void**)((char*)cc + 0x26c);
    *(int*)((char*)edx + 0x1e8) = a1;

    ((fn2_t)ext_00472BA0)(self);
}

// [0x004736B0] sub_004736B0 (53 bytes)
extern "C" void ext_0065D0E0();
extern "C" void __fastcall fn_004736B0(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *fn1_t)(void*, int);
    typedef void (__thiscall *fn2_t)(void*);

    void* f8 = *(void**)((char*)self + 0xf8);
    ((fn1_t)ext_0065D0E0)(f8, a1 + 1);

    void* cc = *(void**)((char*)self + 0xcc);
    void* edx = *(void**)((char*)cc + 0x26c);
    *(int*)((char*)edx + 0x1ec) = a1;

    ((fn2_t)ext_00472BA0)(self);
}

// [0x0047A4A0] sub_0047A4A0 (64 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FC0;
extern "C" int mem_00924FE0;
extern "C" int mem_00934424;

extern "C" __declspec(naked) void* __fastcall fn_0047A4A0(void* self, int edx_unused, const void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push offset mem_00934424
        push edi
        mov esi, ecx
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je is_not_background
        mov eax, dword ptr [esi + 0x24]
        pop edi
        pop esi
        ret 0x4
    is_not_background:
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push edi
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x18]
        call ext_005DF5C0
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00473620] sub_00473620 (73 bytes)
extern "C" void ext_00472BA0();
extern "C" void ext_0065D0F0();
extern "C" void __fastcall fn_00473620(void* self, int edx_unused, const int* pt) {
    typedef void (__thiscall *fn1_t)(void*, int, int);
    typedef void (__thiscall *fn2_t)(void*);

    void* f8 = *(void**)((char*)self + 0xf8);
    ((fn1_t)ext_0065D0F0)(f8, pt[0] + 1, pt[1] + 1);

    void* cc = *(void**)((char*)self + 0xcc);
    void* edx = *(void**)((char*)cc + 0x26c);
    *(int*)((char*)edx + 0x1e8) = pt[0];
    *(int*)((char*)edx + 0x1ec) = pt[1];

    ((fn2_t)ext_00472BA0)(self);
}

// [0x00473BE0] sub_00473BE0 (65 bytes)
extern "C" void ext_0046FC10();
extern "C" void ext_00473620();
extern "C" void ext_0065D0A0();

extern "C" void __fastcall fn_00473BE0(void* self, int edx_unused, char* arg) {
    typedef void (__thiscall *fn_float_t)(void*, float);
    typedef void (__thiscall *fn_ptr_t)(void*, void*);

    float f1 = *(float*)(arg + 0x1c);
    void* obj = *(void**)((char*)self + 0xf8);
    ((fn_float_t)ext_0065D0A0)(obj, f1);

    if (*(unsigned char*)(arg + 0x82) != 0) {
        float f2 = *(float*)(arg + 0x20);
        ((fn_float_t)ext_0046FC10)(self, f2);
    }

    ((fn_ptr_t)ext_00473620)(self, arg + 0x38);
}

// [0x0047A7F0] sub_0047A7F0 (132 bytes)
extern "C" void ext_005A3F20();
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0047A7F0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x34]
        push esi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x18]
        call ext_005DF5C0
        mov esi, eax
        test esi, esi
        je short loc_47A862
        push 0x93c18c
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x30], 0
        call ext_005A3F20
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
loc_47A862:
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0x2c
        ret 0x8
    }
}

// [0x00472EB0] sub_00472EB0 (190 bytes)
extern "C" void ext_0046F920();
extern "C" void ext_00472350();
extern "C" void ext_00472BA0();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" int mem_00AD89B1;

extern "C" __declspec(naked) void __fastcall fn_00472EB0(void* self) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        push edi
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        mov eax, dword ptr [esi + 0x248]
        mov edx, dword ptr [eax]
        lea ecx, [esi + 0x248]
        mov dword ptr [esp + 0x18], 0
        call edx
        cmp byte ptr [esi + 0x294], 0
        mov ecx, dword ptr [esi + 0x30]
        mov bl, al
        mov eax, dword ptr [ecx]
        je loc_472f17
        mov edx, dword ptr [eax + 0x154]
        call edx
        jmp loc_472f27
    loc_472f17:
        movzx edx, byte ptr [mem_00AD89B1]
        mov eax, dword ptr [eax + 0x158]
        push edx
        call eax
    loc_472f27:
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        mov ecx, esi
        call ext_00472BA0
        mov ecx, esi
        mov byte ptr [esi + 0x290], bl
        call ext_0046F920
        cmp byte ptr [esi + 0x290], 0
        jne loc_472f5a
        mov ecx, esi
        call ext_00472350
    loc_472f5a:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov al, bl
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00472540] sub_00472540 (264 bytes)
extern "C" void ext_004804A0();
extern "C" void ext_00480530();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" __declspec(naked) void __fastcall fn_00472540(void* self) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov ecx, [esi+0x34]
        cmp ecx, ebx
        push edi
        mov [esi+0x108], ebx
        mov [esi+0x174], ebx
        mov [esi+0x178], ebx
        mov [esi+0x15c], ebx
        mov [esi+0x158], ebx
        mov [esi+0x290], bl
        mov [esi+0x291], bl
        mov [esi+0x292], bl
        mov [esi+0x293], bl
        mov [esi+0x17c], bl
        mov byte ptr [esi+0x295], 1
        mov [esi+0x288], ebx
        mov [esi+0x150], bl
        mov [esi+0x151], bl
        je L1
        call ext_004804A0
        mov ecx, [esi+0x34]
        call ext_00480530
    L1:
        mov ecx, [esi+0xcc]
        mov eax, [ecx]
        mov edx, [eax+0x84]
        call edx
        mov [esi+0x10], ebx
        mov [esi+0x14], ebx
        mov [esi+0x18], ebx
        mov [esi+0x1c], ebx
        lea edi, [esi+0x24]
        mov dword ptr [edi], 0xc
        mov [edi+4], ebx
        mov byte ptr [edi+8], 1
        mov ecx, [esi+0x30]
        cmp ecx, ebx
        je L2
        mov eax, [ecx]
        mov edx, [eax+0x1d8]
        push ebp
        call edx
        mov ebp, eax
        mov ecx, ebp
        mov [esp+0x10], ebp
        call ext_0065C640
        mov ecx, [esi+0x30]
        mov eax, [ecx]
        mov edx, [eax+0x10]
        push edi
        mov [esp+0x20], ebx
        call edx
        mov ecx, ebp
        mov dword ptr [esp+0x1c], 0xffffffff
        call ext_0065C650
        pop ebp
    L2:
        mov ecx, [esp+0x10]
        mov [esi+0x288], ebx
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00478B00] sub_00478B00 (274 bytes)
extern "C" void ext_00477520();
extern "C" void ext_00478470();
extern "C" int mem_00924FE0;
extern "C" int mem_00925134;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00478B00(void* self) {
    __asm {
        push -1
        _emit 0x68
        _emit 0x58
        _emit 0x38
        _emit 0x88
        _emit 0x00
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        sub esp, 0x1c
        lea eax, [esp+0x58]
        mov [esp+0x2c], esp
        mov ecx, esp
        push eax
        mov dword ptr [esp+0x40], 0
        call dword ptr [mem_00924FE0]
        mov ebx, [esp+0x54]
        mov ebp, [esp+0x50]
        mov ecx, [esp+0x4c]
        mov edx, [esp+0x48]
        push ebx
        push ebp
        push ecx
        push edx
        lea eax, [esp+0x3c]
        push eax
        call ext_00477520
        mov esi, [eax]
        mov edi, [eax+4]
        add esp, 0x30
        test esi, esi
        je L1
        cmp esi, ebp
        je L2
    L1:
        call dword ptr [mem_00925134]
    L2:
        cmp edi, ebx
        jne L3
        mov ebx, [esp+0x28]
        lea ecx, [esp+0x3c]
        mov [ebx], esi
        mov [ebx+4], edi
        mov dword ptr [esp+0x20], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, ebx
        mov ecx, [esp+0x18]
        mov fs:[0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    L3:
        sub esp, 0x1c
        lea edx, [esp+0x58]
        mov [esp+0x50], esp
        mov ecx, esp
        push edx
        mov [esp+0x4c], esi
        mov [esp+0x50], edi
        call dword ptr [mem_00924FE0]
        test esi, esi
        jne L4
        call dword ptr [mem_00925134]
    L4:
        cmp edi, [esi+8]
        jb L5
        call dword ptr [mem_00925134]
    L5:
        push edi
        push esi
        mov esi, [esp+0x4c]
        push ebx
        push ebp
        lea eax, [edi+0x1c]
        push eax
        mov eax, [esp+0x5c]
        push eax
        push esi
        call ext_00478470
        add esp, 0x38
        lea ecx, [esp+0x3c]
        mov dword ptr [esp+0x20], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, [esp+0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov fs:[0], ecx
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x00472420] sub_00472420 (280 bytes)
extern "C" void ext_00472350();
extern "C" void ext_004804A0();
extern "C" void ext_00493E10();
extern "C" void ext_0052EE10();
extern "C" void ext_0052FF10();
extern "C" void ext_00530610();
extern "C" void ext_0059C770();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" int mem_00AD89B0;

extern "C" __declspec(naked) void __fastcall fn_00472420(void* self) {
    __asm {
        push -0x1
        push 0x882e50
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        call ext_00472350
        mov ecx, dword ptr [esi + 0x30]
        test ecx, ecx
        jne loc_004724d7
        cmp byte ptr [mem_00AD89B0], cl
        je loc_00472459
        call ext_0052FF10
        jmp loc_0047245e
    loc_00472459:
        call ext_0052EE10
    loc_0047245e:
        mov ecx, dword ptr [esi + 0x34]
        mov dword ptr [esi + 0x30], eax
        call ext_004804A0
        mov eax, dword ptr [esi + 0x38]
        test eax, eax
        je loc_00472476
        mov ecx, dword ptr [esi + 0x34]
        mov dword ptr [ecx + 0x4], eax
    loc_00472476:
        mov eax, dword ptr [esi + 0xcc]
        mov edx, dword ptr [esi + 0x30]
        lea ecx, [eax + 0x258]
        movzx eax, byte ptr [ecx + 0x8]
        push eax
        mov dword ptr [ecx], edx
        call ext_00493E10
        mov ecx, dword ptr [esi + 0x30]
        mov dword ptr [esi + 0x1a0], ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1d8]
        call eax
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0x8], edi
        call ext_0065C640
        mov ecx, dword ptr [esi + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        mov dword ptr [esp + 0x14], 0x0
        call eax
        test eax, eax
        je loc_0047250b
        mov ecx, dword ptr [esi + 0x34]
        push ecx
        mov ecx, eax
        call ext_00530610
        jmp loc_0047250b
    loc_004724d7:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1d8]
        call eax
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0x8], edi
        call ext_0065C640
        mov ecx, dword ptr [esi + 0xcc]
        push 0x1
        mov dword ptr [esp + 0x18], 0x1
        call ext_0059C770
        mov ecx, dword ptr [esi + 0x34]
        call ext_004804A0
    loc_0047250b:
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esi + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x154]
        call eax
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}
