// Decompiled translation unit: src/leaf/decompiled_470000.cpp

#include <new>
#include <string>
extern "C" void ext_006A5C5C(void*);
extern "C" void __fastcall ext_00678DE0(void*);

extern "C" void __fastcall ext_00678DE0(void*);
extern "C" void ext_00451670();

// [0x00474EE0] sub_00474EE0 (24 bytes)
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

// [0x0047B000] sub_0047B000 (286 bytes)
extern "C" void ext_00406510();
extern "C" void ext_00478B00();
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_0047B000(void* self, int edx_unused, const void* a1) {
    __asm {
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [ecx + 0x34]
        cmp ebp, dword ptr [ecx + 0x38]
        push esi
        lea esi, [ecx + 0x30]
        push edi
        mov dword ptr [esp + 0x10], esi
        jbe l_loop
        call ebx
        mov edi, edi
l_loop:
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe l_chk1
        call ebx
l_chk1:
        test esi, esi
        je l_c2
        cmp esi, esi
        je l_c3
l_c2:
        call ebx
l_c3:
        cmp ebp, edi
        je l_end
        test esi, esi
        jne l_c4
        call ebx
l_c4:
        cmp ebp, dword ptr [esi + 0x8]
        jb l_c5
        call ebx
l_c5:
        mov eax, dword ptr [esp + 0x2c]
        mov esi, dword ptr [ebp]
        sub esp, 0x1c
        mov dword ptr [esp + 0x30], esp
        mov ecx, esp
        push eax
        add esi, 0x16c
        call dword ptr [mem_00924FE0]
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe l_c6
        call ebx
l_c6:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe l_c7
        call dword ptr [mem_00925134]
l_c7:
        push edi
        push esi
        push ebx
        lea ecx, [esp + 0x40]
        push esi
        push ecx
        call ext_00478B00
        mov edi, dword ptr [esi + 0x8]
        add esp, 0x30
        cmp dword ptr [esi + 0x4], edi
        jbe l_c8
        call dword ptr [mem_00925134]
l_c8:
        mov ebx, dword ptr [esp + 0x18]
        test ebx, ebx
        je l_c9
        cmp ebx, esi
        je l_c10
l_c9:
        call dword ptr [mem_00925134]
l_c10:
        cmp dword ptr [esp + 0x1c], edi
        je l_c14
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe l_c11
        call dword ptr [mem_00925134]
l_c11:
        mov edx, dword ptr [esp + 0x1c]
        push edi
        push esi
        push edx
        push ebx
        lea eax, [esp + 0x30]
        push eax
        mov ecx, esi
        call ext_00406510
        mov eax, dword ptr [esp + 0x10]
        cmp ebp, dword ptr [eax + 0x8]
        jb l_c12
        call dword ptr [mem_00925134]
l_c12:
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x14c]
        call eax
l_c14:
        mov eax, dword ptr [esp + 0x10]
        cmp ebp, dword ptr [eax + 0x8]
        jb l_c15
        call dword ptr [mem_00925134]
l_c15:
        mov esi, dword ptr [esp + 0x10]
        mov ebx, dword ptr [mem_00925134]
        add ebp, 0x4
        jmp l_loop
l_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
    }
}

// [0x00476F10] sub_00476F10 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" int mem_00AD9078;
extern "C" int mem_00AD905C;
extern "C" __declspec(naked) void* __fastcall fn_00476F10(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x88379e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD9078], al
        jne done_476F10
        or dword ptr [mem_00AD9078], eax
        push 0xa32860
        push offset mem_00AD905C
        mov dword ptr [esp + 0x10], 0x0
        call ext_00662610
        push 0x916ee0
        call ext_006A6C87
        add esp, 0xc
done_476F10:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD905C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004722F0] sub_004722F0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AD9030;
extern "C" int mem_00AD9014;
extern "C" __declspec(naked) void __fastcall fn_004722F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x882e2e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD9030], al
        jne done_4722F0
        or dword ptr [mem_00AD9030], eax
        push 0xa32430
        push offset mem_00AD9014
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x916de0
        call ext_006A6C87
        add esp, 0xc
    done_4722F0:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD9014
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00476F70] sub_00476F70 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AD9098;
extern "C" int mem_00AD907C;
extern "C" __declspec(naked) void* __fastcall fn_00476F70(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8837be
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD9098], al
        jne done_476F70
        or dword ptr [mem_00AD9098], eax
        push 0xa32888
        push offset mem_00AD907C
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x916f10
        call ext_006A6C87
        add esp, 0xc
    done_476F70:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD907C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00476FD0] sub_00476FD0 (95 bytes)
extern "C" int mem_00AD90B8;
extern "C" int mem_00AD909C;
extern "C" __declspec(naked) void* __fastcall fn_00476FD0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8837de
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD90B8], al
        jne done_476FD0
        or dword ptr [mem_00AD90B8], eax
        push 0xa328a4
        push offset mem_00AD909C
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x916f00
        call ext_006A6C87
        add esp, 0xc
    done_476FD0:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD909C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00477030] sub_00477030 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AD90D8;
extern "C" int mem_00AD90BC;
extern "C" __declspec(naked) void* __fastcall fn_00477030(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8837fe
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD90D8], al
        jne done_477030
        or dword ptr [mem_00AD90D8], eax
        push 0xa2f0cc
        push offset mem_00AD90BC
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x916ef0
        call ext_006A6C87
        add esp, 0xc
    done_477030:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD90BC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00477C60] sub_00477C60 (290 bytes)
// MSVC std::_Median(first, mid, last) on int ranges (operator<).
extern "C" __declspec(naked) void __cdecl fn_00477C60(int* first, int* mid, int* last) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [ecx]
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov eax, edi
        sub eax, ecx
        sar eax, 0x2
        cmp eax, 0x28
        jle NEAR PTR SMALL_00477C60
        add eax, 0x1
        cdq
        and edx, 0x7
        add eax, edx
        sar eax, 0x3
        push ebx
        push ebp
        lea ebp, [eax*8]
        add eax, eax
        add eax, eax
        mov edx, dword ptr [eax + ecx]
        cmp edx, esi
        jge SHORT L1_00477C60
        mov dword ptr [eax + ecx], esi
        mov dword ptr [ecx], edx
L1_00477C60:
        mov edx, dword ptr [ecx + ebp]
        mov esi, dword ptr [eax + ecx]
        cmp edx, esi
        jge SHORT L2_00477C60
        mov dword ptr [ecx + ebp], esi
        mov dword ptr [eax + ecx], edx
L2_00477C60:
        mov edx, dword ptr [eax + ecx]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jge SHORT L3_00477C60
        mov dword ptr [eax + ecx], esi
        mov dword ptr [ecx], edx
L3_00477C60:
        mov edx, dword ptr [esp + 0x18]
        mov ebx, dword ptr [edx]
        mov esi, edx
        sub esi, eax
        mov edi, dword ptr [esi]
        cmp ebx, edi
        jge SHORT L4_00477C60
        mov dword ptr [edx], edi
        mov dword ptr [esi], ebx
L4_00477C60:
        mov edi, dword ptr [eax + edx]
        mov ebx, dword ptr [edx]
        cmp edi, ebx
        jge SHORT L5_00477C60
        mov dword ptr [eax + edx], ebx
        mov dword ptr [edx], edi
L5_00477C60:
        mov edi, dword ptr [edx]
        mov ebx, dword ptr [esi]
        cmp edi, ebx
        jge SHORT L6_00477C60
        mov dword ptr [edx], ebx
        mov dword ptr [esi], edi
L6_00477C60:
        mov edi, dword ptr [esp + 0x1c]
        mov esi, edi
        sub esi, eax
        mov ebx, dword ptr [esi]
        sub edi, ebp
        mov ebp, dword ptr [edi]
        cmp ebx, ebp
        jge SHORT L7_00477C60
        mov dword ptr [esi], ebp
        mov dword ptr [edi], ebx
L7_00477C60:
        mov ebx, dword ptr [esp + 0x1c]
        mov ebp, dword ptr [ebx]
        mov ebx, dword ptr [esi]
        cmp ebp, ebx
        mov dword ptr [esp + 0x14], ebp
        jge SHORT L8_00477C60
        mov ebp, dword ptr [esp + 0x1c]
        mov dword ptr [ebp], ebx
        mov ebx, dword ptr [esp + 0x14]
        mov dword ptr [esi], ebx
L8_00477C60:
        mov ebx, dword ptr [esi]
        mov ebp, dword ptr [edi]
        cmp ebx, ebp
        jge SHORT L9_00477C60
        mov dword ptr [esi], ebp
        mov dword ptr [edi], ebx
L9_00477C60:
        mov edi, dword ptr [edx]
        mov ebx, dword ptr [eax + ecx]
        cmp edi, ebx
        jge SHORT L10_00477C60
        mov dword ptr [edx], ebx
        mov dword ptr [eax + ecx], edi
L10_00477C60:
        mov edi, dword ptr [esi]
        mov ebx, dword ptr [edx]
        cmp edi, ebx
        jge SHORT L11_00477C60
        mov dword ptr [esi], ebx
        mov dword ptr [edx], edi
L11_00477C60:
        mov esi, dword ptr [edx]
        mov edi, dword ptr [eax + ecx]
        cmp esi, edi
        pop ebp
        pop ebx
        jge NEAR PTR FINAL_00477C60
        mov dword ptr [edx], edi
        pop edi
        mov dword ptr [eax + ecx], esi
        pop esi
        ret
SMALL_00477C60:
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [eax]
        cmp edx, esi
        jge SHORT S1_00477C60
        mov dword ptr [eax], esi
        mov dword ptr [ecx], edx
S1_00477C60:
        mov edx, dword ptr [edi]
        mov esi, dword ptr [eax]
        cmp edx, esi
        jge SHORT S2_00477C60
        mov dword ptr [edi], esi
        mov dword ptr [eax], edx
S2_00477C60:
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jge SHORT FINAL_00477C60
        mov dword ptr [eax], esi
        mov dword ptr [ecx], edx
FINAL_00477C60:
        pop edi
        pop esi
        ret
    }
}

// [0x00472910] sub_00472910 (306 bytes)
extern "C" void ext_0046F830();
extern "C" void ext_00472350();
extern "C" void ext_00530290();
extern "C" void ext_00530610();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" int mem_009542B8;
extern "C" int mem_00AD89B8;
extern "C" __declspec(naked) void __fastcall fn_00472910(void* self) {
    __asm {
        push -0x1
        push 0x882e50
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_0046F830
        mov ecx, esi
        call ext_00472350
        mov ecx, dword ptr [esi + 0x30]
        xor ebx, ebx
        cmp ecx, ebx
        je loc_472994
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        push ebp
        call edx
        mov ebp, eax
        mov ecx, ebp
        mov dword ptr [esp + 0x10], ebp
        call ext_0065C640
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xb4]
        mov dword ptr [esp + 0x1c], ebx
        call edx
        mov edi, eax
        cmp edi, ebx
        je loc_472984
        mov eax, dword ptr [mem_009542B8]
        push eax
        mov ecx, edi
        call ext_00530290
        push ebx
        mov ecx, edi
        call ext_00530610
    loc_472984:
        mov ecx, ebp
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_0065C650
        pop ebp
    loc_472994:
        mov ecx, dword ptr [esi + 0x34]
        cmp ecx, ebx
        je loc_4729A7
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xfc]
        push 0x1
        call eax
    loc_4729A7:
        mov dword ptr [esi + 0x34], ebx
        mov ecx, dword ptr [esi + 0x30]
        cmp ecx, ebx
        je loc_472A2A
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1d8]
        call eax
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        mov ecx, dword ptr [esi + 0xcc]
        cmp ecx, ebx
        mov dword ptr [esp + 0x18], 0x1
        je loc_4729E2
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
    loc_4729E2:
        mov dword ptr [esi + 0xcc], ebx
        mov ecx, dword ptr [esi + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xc]
        push ebx
        call eax
        mov ecx, dword ptr [esi + 0x30]
        mov dword ptr [esi + 0x28], ebx
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        lea eax, [esi + 0x24]
        push eax
        call edx
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        call edx
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        call edx
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
    loc_472A2A:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [mem_00AD89B8], ebx
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00478760] sub_00478760 (308 bytes)
extern "C" void ext_00477C60();
extern "C" __declspec(naked) void __fastcall fn_00478760(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov eax, ebp
        sub eax, edi
        sar eax, 2
        cdq
        sub eax, edx
        sar eax, 1
        lea esi, [edi + 4*eax]
        lea eax, [ebp - 4]
        push eax
        push esi
        push edi
        call ext_00477C60
        add esp, 0xc
        cmp edi, esi
        mov ecx, esi
        lea ebx, [esi + 4]
        jae loc_4787a5
loc_478793:
        mov eax, dword ptr [ecx - 4]
        mov edx, dword ptr [ecx]
        cmp edx, eax
        jg loc_4787a5
        jl loc_4787a5
        add ecx, -4
        cmp edi, ecx
        jb loc_478793
loc_4787a5:
        cmp ebx, ebp
        jae loc_4787bf
        mov edx, dword ptr [ecx]
        jmp loc_4787b0
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
loc_4787b0:
        mov eax, dword ptr [ebx]
        cmp edx, eax
        jg loc_4787bf
        jl loc_4787bf
        add ebx, 4
        cmp ebx, ebp
        jb loc_4787b0
loc_4787bf:
        mov eax, ebx
        mov edx, ecx
loc_4787c3:
        cmp eax, ebp
        jae loc_4787e7
loc_4787c7:
        mov edi, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edi, esi
        jg loc_4787e0
        jl loc_4787e7
        mov esi, ebx
        mov ebp, dword ptr [esi]
        mov dword ptr [esi], edi
        mov dword ptr [eax], ebp
        mov ebp, dword ptr [esp + 0x20]
        add ebx, 4
loc_4787e0:
        add eax, 4
        cmp eax, ebp
        jb loc_4787c7
loc_4787e7:
        cmp edx, dword ptr [esp + 0x1c]
        jbe loc_478816
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
loc_4787f0:
        mov esi, dword ptr [edx - 4]
        mov edi, dword ptr [ecx]
        cmp edi, esi
        jg loc_478809
        jl loc_478812
        mov edi, dword ptr [edx - 4]
        mov esi, dword ptr [ecx - 4]
        sub ecx, 4
        mov dword ptr [ecx], edi
        mov dword ptr [edx - 4], esi
loc_478809:
        add edx, -4
        cmp dword ptr [esp + 0x1c], edx
        jb loc_4787f0
loc_478812:
        cmp edx, dword ptr [esp + 0x1c]
loc_478816:
        jne loc_47884e
        cmp eax, ebp
        je loc_478885
        cmp ebx, eax
        je loc_478828
        mov edi, dword ptr [ebx]
        mov esi, dword ptr [ecx]
        mov dword ptr [ecx], edi
        mov dword ptr [ebx], esi
loc_478828:
        mov edi, ecx
        mov ebp, dword ptr [edi]
        mov esi, eax
        mov dword ptr [esp + 0x10], ebp
        mov ebp, dword ptr [esi]
        mov dword ptr [edi], ebp
        mov edi, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x20]
        add ebx, 4
        add ecx, 4
        add eax, 4
        mov dword ptr [esi], edi
        __asm _emit 0xe9 __asm _emit 0x75 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
loc_47884e:
        sub edx, 4
        cmp eax, ebp
        jne loc_478875
        sub ecx, 4
        cmp edx, ecx
        je loc_478864
        mov edi, dword ptr [ecx]
        mov esi, dword ptr [edx]
        mov dword ptr [edx], edi
        mov dword ptr [ecx], esi
loc_478864:
        mov edi, dword ptr [ebx - 4]
        mov esi, dword ptr [ecx]
        sub ebx, 4
        mov dword ptr [ecx], edi
        mov dword ptr [ebx], esi
        __asm _emit 0xe9 __asm _emit 0x4e __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
loc_478875:
        mov esi, dword ptr [eax]
        mov edi, dword ptr [edx]
        mov dword ptr [eax], edi
        mov dword ptr [edx], esi
        add eax, 4
        __asm _emit 0xe9 __asm _emit 0x3e __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
loc_478885:
        mov eax, dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ebx
        mov dword ptr [eax], ecx
        pop ebx
        pop ecx
        ret
    }
}

// [0x0047A880] sub_0047A880 (308 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE8;
extern "C" int mem_00925134;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0047A880(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x3c]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xf8]
        mov ebp, ecx
        mov ecx, edi
        call edx
        cmp eax, 2
        je loc_47A8C7
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xf8]
        mov ecx, edi
        call edx
        test eax, eax
        jne loc_47A95B
loc_47A8C7:
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE8]
        mov esi, dword ptr [edi + 0x170]
        test esi, esi
        mov dword ptr [esp + 0x34], 0
        je loc_47A973
        mov ebx, dword ptr [edi + 0x174]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        je loc_47A973
        cmp esi, ebx
        mov ebx, dword ptr [mem_00925134]
        jbe loc_47A912
        call ebx
loc_47A912:
        cmp esi, dword ptr [edi + 0x174]
        jb loc_47A91C
        call ebx
loc_47A91C:
        push esi
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FDC]
loc_47A927:
        sub esp, 0x1c
        lea edx, [esp + 0x2c]
        mov ecx, esp
        mov dword ptr [esp + 0x58], esp
        push edx
        call dword ptr [mem_00924FE0]
        lea ecx, [ebp + 0x18]
        call ext_005DF5C0
        lea ecx, [esp + 0x10]
        mov esi, eax
        mov dword ptr [esp + 0x34], -1
        call dword ptr [mem_00924FF4]
        test esi, esi
        jne loc_47A99D
loc_47A95B:
        mov eax, dword ptr [ebp + 0x24]
        mov ecx, dword ptr [esp + 0x2c]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 4
loc_47A973:
        cmp dword ptr [ebp + 0x20], 0
        je loc_47A927
        mov eax, dword ptr [ebp + 0x1c]
        mov esi, dword ptr [eax]
        cmp esi, eax
        jne loc_47A988
        call dword ptr [mem_00925134]
loc_47A988:
        mov esi, dword ptr [esi + 0x28]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], -1
        call dword ptr [mem_00924FF4]
loc_47A99D:
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x28
        ret 4
    }
}

// [0x00472A50] sub_00472A50 (335 bytes)
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_0065D570();
extern "C" int mem_00925134;
extern "C" int mem_00AD89B1;

extern "C" __declspec(naked) void __fastcall fn_00472A50(void* self, int edx_unused, int a1) {
    __asm {
        push -0x1
        push 0x882eb8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
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
        mov ecx, 0xaee8ac
        mov dword ptr [esp + 0x24], 0x0
        mov dword ptr [esp + 0x14], ecx
        call ext_0065C640
        mov eax, dword ptr [esi + 0x248]
        mov edx, dword ptr [eax]
        lea ecx, [esi + 0x248]
        mov byte ptr [esp + 0x24], 0x1
        call edx
        mov edi, dword ptr [esi + 0xf8]
        mov ebp, dword ptr [mem_00925134]
        add edi, 0xcc
        cmp dword ptr [edi + 0x8], 0x0
        jne L_472acd
        call ebp
L_472acd:
        mov eax, dword ptr [edi + 0x8]
        mov ecx, dword ptr [edi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_472ada
        call ebp
L_472ada:
        mov edx, dword ptr [edi + 0xc]
        mov ebp, dword ptr [edx + 0x8]
        lea edi, [esi + 0x20]
        mov ecx, edi
        mov dword ptr [esp + 0x18], edi
        call ext_0065C640
        mov ecx, dword ptr [esi + 0xf8]
        mov byte ptr [esp + 0x24], 0x2
        call ext_0065D570
        sub eax, 0x1
        cmp byte ptr [esi + 0x290], 0x0
        mov dword ptr [esi + 0x14], eax
        lea eax, [ebp - 0x1]
        mov dword ptr [esi + 0x10], eax
        je L_472b28
        cmp ebp, dword ptr [esi + 0x178]
        setl al
        mov byte ptr [esi + 0x290], al
        mov byte ptr [esi + 0x291], al
L_472b28:
        mov ecx, edi
        mov byte ptr [esp + 0x24], 0x1
        call ext_0065C650
        mov ecx, 0xaee8ac
        mov byte ptr [esp + 0x24], 0x0
        call ext_0065C650
        mov edx, dword ptr [esi + 0x1d0]
        mov eax, dword ptr [edx]
        lea ecx, [esi + 0x1d0]
        call eax
        cmp byte ptr [esi + 0x294], 0x0
        mov ecx, dword ptr [esi + 0x30]
        mov edx, dword ptr [ecx]
        je L_472b6b
        mov eax, dword ptr [edx + 0x154]
        call eax
        jmp L_472b7b
L_472b6b:
        movzx eax, byte ptr [mem_00AD89B1]
        mov edx, dword ptr [edx + 0x158]
        push eax
        call edx
L_472b7b:
        mov ecx, ebx
        mov dword ptr [esp + 0x24], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x18
        ret 0x4
    }
}

extern "C" void ext_00476860();
extern "C" void ext_00477A80();

// [0x004784F0] sub_004784F0 (438 bytes)
extern "C" __declspec(naked) void __cdecl fn_004784F0() {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov eax, ebx
        sub eax, edi
        sar eax, 2
        cdq
        sub eax, edx
        sar eax, 1
        lea esi, [edi + 4*eax]
        mov eax, dword ptr [esp + 0x24]
        push eax
        lea ecx, [ebx - 4]
        push ecx
        push esi
        push edi
        call ext_00477A80
        add esp, 0x10
        cmp edi, esi
        lea ebp, [esi + 4]
        jae L_478555
    L_478526:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi - 4]
        push edx
        push eax
        lea ecx, [esp + 0x2c]
        call ext_00476860
        test al, al
        jne L_478555
        mov ecx, dword ptr [esi - 4]
        mov edx, dword ptr [esi]
        push ecx
        push edx
        lea ecx, [esp + 0x2c]
        call ext_00476860
        test al, al
        jne L_478555
        add esi, -4
        cmp edi, esi
        jb L_478526
    L_478555:
        cmp ebp, ebx
        jae L_47858F
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_478560:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [ebp]
        push eax
        push ecx
        lea ecx, [esp + 0x2c]
        call ext_00476860
        test al, al
        jne L_47858F
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [esi]
        push edx
        push eax
        lea ecx, [esp + 0x2c]
        call ext_00476860
        test al, al
        jne L_47858F
        add ebp, 4
        cmp ebp, ebx
        jb L_478560
    L_47858F:
        mov edi, ebp
        mov ebx, esi
    L_478593:
        cmp edi, dword ptr [esp + 0x20]
        jae L_4785DC
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_4785A0:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [esi]
        push ecx
        push edx
        lea ecx, [esp + 0x2c]
        call ext_00476860
        test al, al
        jne L_4785CE
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [edi]
        push eax
        push ecx
        lea ecx, [esp + 0x2c]
        call ext_00476860
        test al, al
        jne L_4785DC
        mov edx, dword ptr [edi]
        mov eax, ebp
        mov ecx, dword ptr [eax]
        mov dword ptr [eax], edx
        add ebp, 4
        mov dword ptr [edi], ecx
    L_4785CE:
        add edi, 4
        cmp edi, dword ptr [esp + 0x20]
        jb L_4785A0
    L_4785DC:
        cmp ebx, dword ptr [esp + 0x1c]
        jbe L_478625
    L_4785E2:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [ebx - 4]
        push eax
        push ecx
        lea ecx, [esp + 0x2c]
        call ext_00476860
        test al, al
        jne L_478618
        mov edx, dword ptr [ebx - 4]
        mov eax, dword ptr [esi]
        push edx
        push eax
        lea ecx, [esp + 0x2c]
        call ext_00476860
        test al, al
        jne L_478621
        mov ecx, dword ptr [ebx - 4]
        mov eax, dword ptr [esi - 4]
        sub esi, 4
        mov dword ptr [esi], ecx
        mov dword ptr [ebx - 4], eax
    L_478618:
        add ebx, -4
        cmp dword ptr [esp + 0x1c], ebx
        jb L_4785E2
    L_478621:
        cmp ebx, dword ptr [esp + 0x1c]
    L_478625:
        jne L_47865D
        cmp edi, dword ptr [esp + 0x20]
        je L_478697
        cmp ebp, edi
        je L_47863B
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], edx
        mov dword ptr [ebp], eax
    L_47863B:
        mov ecx, esi
        mov edx, dword ptr [ecx]
        mov eax, edi
        mov dword ptr [esp + 0x10], edx
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov ecx, dword ptr [esp + 0x10]
        add ebp, 4
        add esi, 4
        add edi, 4
        mov dword ptr [eax], ecx
        jmp L_478593
    L_47865D:
        sub ebx, 4
        cmp edi, dword ptr [esp + 0x20]
        jne L_478687
        sub esi, 4
        cmp ebx, esi
        je L_478675
        mov edx, dword ptr [esi]
        mov eax, dword ptr [ebx]
        mov dword ptr [ebx], edx
        mov dword ptr [esi], eax
    L_478675:
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [esi]
        sub ebp, 4
        mov dword ptr [esi], ecx
        mov dword ptr [ebp], eax
        jmp L_478593
    L_478687:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [ebx]
        mov dword ptr [edi], edx
        mov dword ptr [ebx], eax
        add edi, 4
        jmp L_478593
    L_478697:
        mov eax, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 4], ebp
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x00478030] sub_00478030 (465 bytes)
extern "C" void ext_004C1AC0();
extern "C" void ext_006A6DE0();
extern "C" void ext_006A6E92();
extern "C" int mem_00993828;
extern "C" __declspec(naked) void __fastcall fn_00478030(void* self, int edx_unused, float a1, float a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x34
        fld dword ptr [ebp+0x8]
        push ebx
        fdiv dword ptr [ebp+0xc]
        push esi
        mov ebx, ecx
        mov esi, dword ptr [ebx+0x34]
        cmp esi, dword ptr [ebx+0x38]
        push edi
        lea edi, [ebx+0x30]
        mov dword ptr [esp+0x34], ebx
        fstp dword ptr [esp+0x38]
        jbe L_loop
        call dword ptr [mem_00925134]
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_loop:
        lea eax, [ebx+0x30]
        mov ebx, dword ptr [eax+0x8]
        cmp dword ptr [eax+0x4], ebx
        jbe L_071
        call dword ptr [mem_00925134]
L_071:
        test edi, edi
        je L_080
        mov eax, dword ptr [esp+0x34]
        add eax, 0x30
        cmp edi, eax
        je L_086
L_080:
        call dword ptr [mem_00925134]
L_086:
        cmp esi, ebx
        je L_done
        test edi, edi
        mov ebx, dword ptr [mem_00925134]
        jne L_09a
        call ebx
L_09a:
        cmp esi, dword ptr [edi+0x8]
        jb L_0a1
        call ebx
L_0a1:
        cmp esi, dword ptr [edi+0x8]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax+0x15c]
        mov dword ptr [esp+0x3c], ecx
        jb L_0b4
        call ebx
L_0b4:
        fild dword ptr [esp+0x3c]
        sub esp, 0x8
        fmul dword ptr [esp+0x40]
        fadd qword ptr [mem_00993828]
        fstp dword ptr [esp+0x44]
        fld dword ptr [esp+0x44]
        fstp qword ptr [esp]
        call ext_006A6E92
        fstp dword ptr [esp+0x44]
        fld dword ptr [esp+0x44]
        call ext_006A6DE0
        mov edx, dword ptr [esi]
        fild dword ptr [edx+0x160]
        mov ebx, eax
        fmul dword ptr [esp+0x40]
        fadd qword ptr [mem_00993828]
        fstp dword ptr [esp+0x44]
        fld dword ptr [esp+0x44]
        fstp qword ptr [esp]
        call ext_006A6E92
        fstp dword ptr [esp+0x44]
        add esp, 0x8
        fld dword ptr [esp+0x3c]
        call ext_006A6DE0
        cmp esi, dword ptr [edi+0x8]
        mov dword ptr [esp+0x3c], eax
        jb L_125
        call dword ptr [mem_00925134]
L_125:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax+0xf8]
        call edx
        cmp eax, 0x6
        je L_19f
        cmp esi, dword ptr [edi+0x8]
        jb L_141
        call dword ptr [mem_00925134]
L_141:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax+0xf8]
        call edx
        cmp eax, 0x2
        je L_19f
        cmp esi, dword ptr [edi+0x8]
        jb L_15d
        call dword ptr [mem_00925134]
L_15d:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax+0xf8]
        call edx
        cmp eax, 0x8
        je L_19f
        cmp esi, dword ptr [edi+0x8]
        jb L_179
        call dword ptr [mem_00925134]
L_179:
        mov eax, dword ptr [esp+0x3c]
        mov ecx, dword ptr [esi]
        push eax
        call ext_004C1AC0
        cmp esi, dword ptr [edi+0x8]
        jb L_190
        call dword ptr [mem_00925134]
L_190:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx+0x114]
        push ebx
        call eax
        jmp L_1d3
L_19f:
        cmp esi, dword ptr [edi+0x8]
        jb L_1aa
        call dword ptr [mem_00925134]
L_1aa:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx+0x118]
        push ebx
        call eax
        cmp esi, dword ptr [edi+0x8]
        jb L_1c2
        call dword ptr [mem_00925134]
L_1c2:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp+0x3c]
        mov edx, dword ptr [edx+0x11c]
        push eax
        call edx
L_1d3:
        cmp esi, dword ptr [edi+0x8]
        jb L_1de
        call dword ptr [mem_00925134]
L_1de:
        mov ebx, dword ptr [esp+0x34]
        add esi, 0x4
        jmp L_loop
L_done:
        mov eax, dword ptr [esp+0x34]
        mov ecx, dword ptr [eax+0x58]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx+0x8]
        call eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x00476DB0] sub_00476DB0 (59 bytes)
extern "C" void ext_0058F200();
extern "C" void* __fastcall fn_00476DB0(void* self) {
    ((void(__fastcall*)(void*))ext_0058F200)(self);
    *(volatile unsigned int*)((char*)self + 0x150) = 0x928eac;
    *(unsigned int*)((char*)self + 0x0) = 0x92912c;
    *(unsigned int*)((char*)self + 0x4) = 0x9290e4;
    *(unsigned int*)((char*)self + 0x8) = 0x9290a4;
    *(unsigned int*)((char*)self + 0xc) = 0x929054;
    *(volatile unsigned int*)((char*)self + 0x150) = 0x929040;
    return self;
}

// [0x0047D9F0] sub_0047D9F0 (410 bytes)
extern "C" void ext_004BC800();
extern "C" void ext_004C4C40();
extern "C" void ext_004D01C0();
extern "C" void ext_0058F200();
extern "C" void ext_0059F5C0();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_0047D9F0(void* self) {
    __asm {
        push -1
        push 0x883b3e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        mov byte ptr [esi + 0x4], 1
        mov dword ptr [esi], 0x93c08c
        xor ebp, ebp
        lea ecx, [esi + 8]
        mov dword ptr [esp + 0x1c], ebp
        call ext_004C4C40
        lea edi, [esi + 0x18]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 1
        mov dword ptr [esi], 0x93c1b8
        call ext_0059F5C0
        mov dword ptr [edi + 4], eax
        mov byte ptr [eax + 0x2d], 1
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 8], eax
        mov dword ptr [edi + 8], ebp
        mov dword ptr [esi + 0x24], ebp
        mov dword ptr [esi + 0x28], ebp
        mov dword ptr [esi + 0x2c], ebp
        mov dword ptr [esi + 0x34], ebp
        mov dword ptr [esi + 0x38], ebp
        mov dword ptr [esi + 0x3c], ebp
        lea ebx, [esi + 0x40]
        lea edi, [ebx + 4]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 6
        mov dword ptr [ebx], 0x93c1b0
        call ext_0059F5C0
        mov dword ptr [edi + 4], eax
        mov byte ptr [eax + 0x2d], 1
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 8], eax
        mov dword ptr [edi + 8], ebp
        mov dword ptr [esi + 0x50], 0x93bf7c
        mov dword ptr [esi + 0x54], ebx
        mov dword ptr [esi + 0x58], ebp
        lea edi, [esi + 0x5c]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 9
        call ext_0058F200
        mov dword ptr [edi + 0x150], 0x928eac
        mov dword ptr [edi], 0x92912c
        mov dword ptr [edi + 4], 0x9290e4
        mov dword ptr [edi + 8], 0x9290a4
        mov dword ptr [edi + 0xc], 0x929054
        mov dword ptr [edi + 0x150], 0x929040
        lea ecx, [esi + 0x1b0]
        mov byte ptr [esp + 0x1c], 0xa
        call ext_004BC800
        lea ecx, [esi + 0x238]
        mov byte ptr [esp + 0x1c], 0xb
        call ext_004D01C0
        mov byte ptr [esp + 0x1c], 0xc
        lea edi, [esi + 0x518]
        mov ecx, edi
        call ext_0059F5C0
        mov dword ptr [edi + 4], eax
        mov byte ptr [eax + 0x2d], 1
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 8], eax
        mov dword ptr [edi + 8], ebp
        lea edi, [esi + 0x524]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0xd
        call ext_0059F5C0
        mov dword ptr [edi + 4], eax
        mov byte ptr [eax + 0x2d], 1
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 8], eax
        mov dword ptr [edi + 8], ebp
        lea ecx, [esi + 0x53c]
        mov byte ptr [esp + 0x1c], 0xe
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x00472C90] sub_00472C90 (231 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_0046F920();
extern "C" void ext_00472350();
extern "C" void ext_00472A50();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" int mem_00AEB918;
extern "C" int mem_00B58DFC;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;

extern "C" __declspec(naked) void __fastcall fn_00472C90(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x882ef8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp byte ptr [esi + 0x290], bl
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        __asm _emit 0x74 __asm _emit 0x49
        lea edi, [esi + 0x170]
        mov ecx, edi
        mov dword ptr [ebp - 0x4], ebx
        mov dword ptr [ebp - 0x18], edi
        call ext_0065C640
        mov eax, dword ptr [esi + 0x1f8]
        mov edx, dword ptr [eax]
        lea ecx, [esi + 0x1f8]
        mov byte ptr [ebp - 0x4], 0x1
        call edx
        mov ecx, edi
        mov byte ptr [ebp - 0x4], bl
        call ext_0065C650
        cmp byte ptr [mem_00AEB918], bl
        __asm _emit 0x75 __asm _emit 0x10
        push 0x1
        mov ecx, esi
        call ext_00472A50
        mov ecx, esi
        call ext_0046F920
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        cmp byte ptr [mem_00B58DFC], 0x0
        mov eax, dword ptr [mem_00924E90]
        push eax
        __asm _emit 0x75 __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0x1c]
        mov edx, dword ptr [mem_00924FA0]
        add ecx, 0xc
        push ecx
        push 0x93bcfc
        push edx
        call ext_00435D00
        add esp, 0x8
        push eax
        call dword ptr [mem_00924E94]
        __asm _emit 0xeb __asm _emit 0x11
        mov ecx, dword ptr [mem_00924FA0]
        push 0x93bce4
        push ecx
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov ecx, dword ptr [ebp - 0x14]
        call ext_00472350
        mov eax, 0x472d09
        ret
    }
}

// [0x00472F70] sub_00472F70 (240 bytes)
// try { sub_00472350(this); if (!this->f30) sub_00472420(this);
//       this->f30->vfunc_0x1d8(); sub_0065C640(tmp); this->f0xcc(3); }
// catch (...) { std::cout << "..." << ... << std::endl; }
// Naked: the SEH frame (handler 0x882f18, try level -1) and the catch funclet are
// written out by hand; the catch funclet returns the continuation 0x473014.
extern "C" void ext_00435D00();
extern "C" void ext_00472350();
extern "C" void ext_00472420();
extern "C" void ext_00472BA0();
extern "C" void ext_0059C770();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_0065D120();
extern "C" int mem_00924E90;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_00924FA0;

extern "C" __declspec(naked) void __fastcall fn_00472F70(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x00882f18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        call ext_00472350
        xor ebx, ebx
        cmp dword ptr [esi + 0x30], ebx
        jne have_obj
        mov ecx, esi
        call ext_00472420
    have_obj:
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [ebp - 0x18], edi
        call ext_0065C640
        mov ecx, dword ptr [esi + 0xcc]
        mov dword ptr [ebp - 0x4], ebx
        push 0x3
        mov byte ptr [ebp - 0x4], 0x1
        call ext_0059C770
        mov dword ptr [ebp - 0x4], ebx
        jmp after_catch
    catch_funclet:
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [ebp - 0x1c]
        mov edx, dword ptr [mem_00924FA0]
        push eax
        add ecx, 0xc
        push ecx
        push 0x0093bd18
        push edx
        call ext_00435D00
        add esp, 0x8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, 0x00473014
        ret
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp - 0x18]
        xor ebx, ebx
    after_catch:
        mov ecx, dword ptr [esi + 0xf8]
        call ext_0065D120
        mov ecx, esi
        call ext_00472BA0
        mov ecx, dword ptr [esi + 0x30]
        mov byte ptr [esi + 0x293], bl
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        call edx
        mov ecx, edi
        mov dword ptr [ebp - 0x4], -0x1
        call ext_0065C650
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

// [0x004750C0] sub_004750C0 (150 bytes)
extern "C" void ext_00437F80();
extern "C" void ext_0046AB70();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004750C0(void* self) {
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [ebp + 0x4]
        cmp esi, dword ptr [ebp + 0x8]
        push edi
        jbe short loc_004750D9
        call dword ptr [mem_00925134]
loc_004750D9:
        mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8D __asm _emit 0x49 __asm _emit 0x00 // lea ecx, [ecx]
loc_004750E0:
        mov ebx, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], ebx
        jbe short loc_004750EE
        call dword ptr [mem_00925134]
loc_004750EE:
        cmp esi, ebx
        je short loc_0047514A
        cmp esi, dword ptr [ebp + 0x8]
        jb short loc_004750FD
        call dword ptr [mem_00925134]
loc_004750FD:
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [eax]
        mov ebx, dword ptr [esi]
        lea edx, [esp + 0x20]
        push edx
        push eax
        push edi
        push ecx
        push edi
        mov dword ptr [esp + 0x34], ebx
        call ext_00437F80
        add esp, 0x14
        test al, al
        je short loc_0047512D
        cmp esi, dword ptr [ebp + 0x8]
        jb short loc_00475128
        call dword ptr [mem_00925134]
loc_00475128:
        add esi, 0x4
        jmp short loc_004750E0
loc_0047512D:
        lea eax, [esp + 0x20]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, edi
        call ext_0046AB70
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0xc
        ret 0x8
loc_0047514A:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xc
        ret 0x8
    }
}

extern "C" void ext_00477090();

// [0x00477660] sub_00477660 (841 bytes)
extern "C" __declspec(naked) void __cdecl fn_00477660() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        mov eax, ebp
        sub eax, ebx
        sar eax, 2
        cdq
        push esi
        sub eax, edx
        push edi
        sar eax, 1
        lea edi, [ebx + 4*eax]
        lea eax, [ebp - 4]
        push eax
        push edi
        push ebx
        call ext_00477090
        add esp, 0xc
        cmp ebx, edi
        lea esi, [edi + 4]
        jae L_4776b4
    L_477690:
        fld dword ptr [edi - 4]
        fld dword ptr [edi]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        je L_4776b0
        fcompp
        fnstsw ax
        test ah, 5
        jnp L_4776b4
        add edi, -4
        cmp ebx, edi
        jb L_477690
        jmp L_4776b4
    L_4776b0:
        fstp st(1)
        fstp st(0)
    L_4776b4:
        mov eax, ebp
        sub eax, esi
        add eax, 3
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        cmp eax, 4
        jl L_477732
        fld dword ptr [edi]
    L_4776cb:
        fld dword ptr [esi]
        fcom st(1)
        fnstsw ax
        test ah, 5
        jnp L_47776a
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        je L_477770
        fld dword ptr [esi + 4]
        fcom st(1)
        fnstsw ax
        test ah, 5
        jnp L_477755
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        je L_477757
        fld dword ptr [esi + 8]
        fcom st(1)
        fnstsw ax
        test ah, 5
        jnp L_47775c
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        je L_47775e
        fld dword ptr [esi + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 5
        jnp L_477763
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        je L_477765
        add esi, 0x10
        lea ecx, [ebp - 0xc]
        cmp esi, ecx
        jl L_4776cb
        fstp st(0)
    L_477732:
        cmp esi, ebp
        jae L_477772
        fld dword ptr [edi]
    L_477738:
        fld dword ptr [esi]
        fcom st(1)
        fnstsw ax
        test ah, 5
        jnp L_47776e
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        je L_477770
        add esi, 4
        cmp esi, ebp
        jb L_477738
        jmp L_477770
    L_477755:
        fstp st(1)
    L_477757:
        add esi, 4
        jmp L_477770
    L_47775c:
        fstp st(1)
    L_47775e:
        add esi, 8
        jmp L_477770
    L_477763:
        fstp st(1)
    L_477765:
        add esi, 0xc
        jmp L_477770
    L_47776a:
        fstp st(1)
        jmp L_477770
    L_47776e:
        fstp st(0)
    L_477770:
        fstp st(0)
    L_477772:
        mov ecx, esi
        mov ebx, edi
    L_477776:
        mov eax, ebp
        sub eax, ecx
        add eax, 3
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        cmp eax, 4
        jl L_477877
        nop
    L_477790:
        fld dword ptr [edi]
        fld dword ptr [ecx]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        je L_4777c1
        fcompp
        fnstsw ax
        test ah, 5
        jnp L_4778c7
        mov eax, esi
        fld dword ptr [eax]
        add esi, 4
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [ecx]
        jmp L_4777c5
    L_4777c1:
        fstp st(1)
        fstp st(0)
    L_4777c5:
        fld dword ptr [edi]
        fld dword ptr [ecx + 4]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        je L_4777f9
        fcompp
        fnstsw ax
        test ah, 5
        jnp L_4778ba
        mov eax, esi
        fld dword ptr [eax]
        add esi, 4
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ecx + 4]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [ecx + 4]
        jmp L_4777fd
    L_4777f9:
        fstp st(1)
        fstp st(0)
    L_4777fd:
        fld dword ptr [edi]
        fld dword ptr [ecx + 8]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        je L_477831
        fcompp
        fnstsw ax
        test ah, 5
        jnp L_4778bf
        mov eax, esi
        fld dword ptr [eax]
        add esi, 4
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ecx + 8]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [ecx + 8]
        jmp L_477835
    L_477831:
        fstp st(1)
        fstp st(0)
    L_477835:
        fld dword ptr [edi]
        fld dword ptr [ecx + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        je L_477865
        fcompp
        fnstsw ax
        test ah, 5
        jnp L_4778c4
        mov eax, esi
        fld dword ptr [eax]
        add esi, 4
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [ecx + 0xc]
        jmp L_477869
    L_477865:
        fstp st(1)
        fstp st(0)
    L_477869:
        add ecx, 0x10
        lea edx, [ebp - 0xc]
        cmp ecx, edx
        jl L_477790
    L_477877:
        cmp ecx, ebp
        jae L_4778c7
        jmp L_477880
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_477880:
        fld dword ptr [edi]
        fld dword ptr [ecx]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        je L_4778ad
        fcompp
        fnstsw ax
        test ah, 5
        jnp L_4778c7
        mov eax, esi
        fld dword ptr [eax]
        add esi, 4
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [ecx]
        jmp L_4778b1
    L_4778ad:
        fstp st(1)
        fstp st(0)
    L_4778b1:
        add ecx, 4
        cmp ecx, ebp
        jb L_477880
        jmp L_4778c7
    L_4778ba:
        add ecx, 4
        jmp L_4778c7
    L_4778bf:
        add ecx, 8
        jmp L_4778c7
    L_4778c4:
        add ecx, 0xc
    L_4778c7:
        mov edx, dword ptr [esp + 0x18]
        cmp ebx, edx
        jbe L_47790c
        nop
    L_4778d0:
        fld dword ptr [ebx - 4]
        fld dword ptr [edi]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        je L_4778ff
        fcompp
        fnstsw ax
        test ah, 5
        jnp L_47790a
        fld dword ptr [edi - 4]
        sub edi, 4
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ebx - 4]
        fstp dword ptr [edi]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [ebx - 4]
        jmp L_477903
    L_4778ff:
        fstp st(1)
        fstp st(0)
    L_477903:
        add ebx, -4
        cmp edx, ebx
        jb L_4778d0
    L_47790a:
        cmp ebx, edx
    L_47790c:
        jne L_47794c
        cmp ecx, ebp
        je L_47799b
        cmp esi, ecx
        je L_47792a
        fld dword ptr [edi]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi]
        fstp dword ptr [edi]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esi]
    L_47792a:
        mov edx, edi
        fld dword ptr [edx]
        mov eax, ecx
        fstp dword ptr [esp + 0x1c]
        add esi, 4
        fld dword ptr [eax]
        add edi, 4
        fstp dword ptr [edx]
        add ecx, 4
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [eax]
        jmp L_477776
    L_47794c:
        sub ebx, 4
        cmp ecx, ebp
        jne L_477982
        sub edi, 4
        cmp ebx, edi
        je L_47796a
        fld dword ptr [ebx]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [edi]
        fstp dword ptr [ebx]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [edi]
    L_47796a:
        fld dword ptr [edi]
        sub esi, 4
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi]
        fstp dword ptr [edi]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esi]
        jmp L_477776
    L_477982:
        fld dword ptr [ecx]
        add ecx, 4
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ebx]
        fstp dword ptr [ecx - 4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [ebx]
        jmp L_477776
    L_47799b:
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [eax], edi
        pop edi
        mov dword ptr [eax + 4], esi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0047A010] sub_0047A010 (41 bytes)
extern "C" void ext_00477340();

extern "C" __declspec(naked) void __fastcall fn_0047A010(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_00477340
        add esp, 0x1c
        ret 0xc
    }
}

// [0x004749D0] sub_004749D0 (48 bytes)
extern "C" void ext_0046FF50();
extern "C" void ext_00474300();

extern "C" __declspec(naked) void __fastcall fn_004749D0(void* self, int edx_unused, int arg) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        push esi
        mov esi, ecx
        mov byte ptr [esi + 0x150], 0x0
        jle loc_4749f5
        push eax
        call ext_0046FF50
        push 0x1
        mov ecx, esi
        call ext_00474300
        pop esi
        ret 0x4
loc_4749f5:
        push 0x0
        call ext_00474300
        pop esi
        ret 0x4
    }
}

// [0x00478A10] sub_00478A10 (228 bytes)
extern "C" void ext_006404E0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void* __cdecl fn_00478A10(void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 0Ch
        push esi
        mov esi, dword ptr [esp + 14h]
        cmp dword ptr [esi + 8], 0
        jne L_478A28
        mov eax, 0B53B30h
        pop esi
        add esp, 0Ch
        ret
L_478A28:
        mov eax, dword ptr [esp + 1Ch]
        test eax, eax
        push ebx
        push ebp
        push edi
        je L_478A41
        mov ecx, dword ptr [esp + 24h]
        push eax
        call ext_006404E0
        mov ebx, eax
        jmp L_478A45
L_478A41:
        mov ebx, dword ptr [esp + 24h]
L_478A45:
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [eax]
        mov ebp, dword ptr [esp + 2Ch]
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esp + 18h], edi
        _emit 0x8D
        _emit 0x9B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_478A60:
        test esi, esi
        je L_478A6A
        cmp esi, dword ptr [esp + 20h]
        je L_478A70
L_478A6A:
        call dword ptr [mem_00925134]
L_478A70:
        cmp edi, dword ptr [esp + 10h]
        je L_478AEA
        test ebp, ebp
        je L_478AA6
        test esi, esi
        jne L_478A84
        call dword ptr [mem_00925134]
L_478A84:
        cmp edi, dword ptr [esi + 4]
        jne L_478A8F
        call dword ptr [mem_00925134]
L_478A8F:
        mov edi, dword ptr [edi + 28h]
        mov esi, dword ptr [edi]
        push ebp
        mov ecx, ebx
        add esi, 0Ch
        call ext_006404E0
        push eax
        mov eax, dword ptr [esi]
        mov ecx, edi
        jmp L_478AC4
L_478AA6:
        test esi, esi
        jne L_478AB0
        call dword ptr [mem_00925134]
L_478AB0:
        cmp edi, dword ptr [esi + 4]
        jne L_478ABB
        call dword ptr [mem_00925134]
L_478ABB:
        mov ecx, dword ptr [edi + 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0Ch]
        push ebx
L_478AC4:
        call eax
        mov ecx, dword ptr [esp + 30h]
        test ecx, ecx
        je L_478AD4
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
L_478AD4:
        lea ecx, [esp + 14h]
        call ext_00673C20
        mov edi, dword ptr [esp + 18h]
        mov esi, dword ptr [esp + 14h]
        jmp L_478A60
L_478AEA:
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        pop esi
        add esp, 0Ch
        ret
    }
}

// [0x0047D4D0] sub_0047D4D0 (59 bytes)
extern "C" void ext_005AEC70();
extern "C" __declspec(naked) void __fastcall fn_0047D4D0(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x93c1b0
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_005AEC70
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

// [0x0047A580] sub_0047A580 (64 bytes)
extern "C" void ext_00479620();
extern "C" int mem_00924FC0;
extern "C" int mem_00924FE0;
extern "C" int mem_00934424;

extern "C" __declspec(naked) void* __fastcall fn_0047A580(void* self, int edx_unused, const void* a1) {
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
        call ext_00479620
        pop edi
        pop esi
        ret 0x4
    }
}

extern "C" void ext_0046F920();
extern "C" void ext_00472BA0();
extern "C" void ext_00473940();
extern "C" void ext_0067AE70();

// [0x004744F0] sub_004744F0 (72 bytes)
extern "C" void __fastcall fn_004744F0(void* self) {
    char* s = (char*)self;
    void* obj = s + 0x160;
    do {
        ((void (__thiscall*)(void*, int))ext_0067AE70)(obj, *(int*)(s + 0x148));
        if (*(unsigned char*)(s + 0x12c) == 0) {
            break;
        }
        ((void (__thiscall*)(void*))ext_00473940)(s);
        ((void (__thiscall*)(void*))ext_00472BA0)(s);
        ((void (__thiscall*)(void*))ext_0046F920)(s);
    } while (*(unsigned char*)(s + 0x12c) != 0);
}

extern "C" void ext_0047AA50();

// [0x0047C0B0] sub_0047C0B0 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_0047C0B0(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x30]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        mov byte ptr [esp + 0x10], 0x0
        jbe short lbl1
        call ebp
    lbl1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe short lbl2
        call ebp
    lbl2:
        cmp esi, esi
        je short lbl3
        call ebp
    lbl3:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, edi
        push eax
        sub ecx, ebx
        sar ecx, 0x2
        push ecx
        push edi
        push ebx
        call ext_0047AA50
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x00475900] sub_00475900 (81 bytes)
extern "C" void ext_00475160();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_00475900(void* self, int edx_unused, const std::string& a1, int a2) {
    __asm {
        push -1
        push 0x872c79
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
        call ext_00475160
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00475840] sub_00475840 (82 bytes)
extern "C" void ext_00475160();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_00475840(void* self, int edx_unused, const void* a1) {
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
        call ext_00475160
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

extern "C" void ext_0047C100();
extern "C" void ext_005B8EA0();
extern "C" void ext_004D0050();
extern "C" int mem_0064F920;

// [0x0047CAD0] sub_0047CAD0 (85 bytes)
extern "C" __declspec(naked) void __fastcall fn_0047CAD0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_0047C100
        mov eax, dword ptr [esi + 0x24]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x84]
        call edx
        mov edi, dword ptr [esi + 0x1c]
        mov edx, 0x4
        push edx
        lea eax, [esi + 0x18]
        mov ecx, offset mem_0064F920
        push ecx
        push edi
        push eax
        mov ebx, edi
        mov ebx, dword ptr [ebx]
        push ebx
        push eax
        lea eax, [esp + 0x24]
        push eax
        call ext_005B8EA0
        add esp, 0x1c
        pop edi
        lea ecx, [esi + 0x238]
        pop esi
        pop ebx
        add esp, 0x8
        jmp ext_004D0050
    }
}

// [0x0047DBC0] sub_0047DBC0 (388 bytes)
extern "C" void ext_00401D20();
extern "C" void ext_00476DF0();
extern "C" void ext_0047CAD0();
extern "C" void ext_004BC430();
extern "C" void ext_005A6650();
extern "C" void ext_005AEC70();
extern "C" void ext_006246B0();
extern "C" void ext_0065C660();
extern "C" void ext_0065F440();
extern "C" int mem_00AE29D0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0047DBC0(void* self) {
    __asm {
        push    -1
        push    0x883c29
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x10
        push    ebx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esi], 0x93c1b8
        mov     dword ptr [esp + 0x20], 0xf
        call    ext_0047CAD0
        xor     ebx, ebx
        lea     ecx, [esi + 0x53c]
        mov     dword ptr [mem_00AE29D0], ebx
        mov     byte ptr [esp + 0x20], 0xe
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esi + 0x524]
        mov     byte ptr [esp + 0x20], 0xd
        call    ext_005A6650
        lea     ecx, [esi + 0x518]
        mov     byte ptr [esp + 0x20], 0xc
        call    ext_005A6650
        lea     ecx, [esi + 0x238]
        mov     byte ptr [esp + 0x20], 0xb
        call    ext_00476DF0
        lea     ecx, [esi + 0x1b0]
        mov     byte ptr [esp + 0x20], 0xa
        call    ext_004BC430
        lea     ecx, [esi + 0x5c]
        mov     byte ptr [esp + 0x20], 0x9
        call    ext_00401D20
        mov     ecx, dword ptr [esi + 0x58]
        cmp     ecx, ebx
        mov     byte ptr [esp + 0x20], 0x8
        je      loc_47DC6D
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        push    1
        call    edx
    loc_47DC6D:
        push    edi
        lea     ecx, [esi + 0x50]
        mov     byte ptr [esp + 0x24], 0x7
        call    ext_0065F440
        lea     edi, [esi + 0x44]
        mov     dword ptr [esi + 0x40], 0x93c1b0
        mov     eax, dword ptr [edi + 4]
        mov     ecx, dword ptr [eax]
        push    eax
        push    edi
        push    ecx
        push    edi
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, edi
        mov     byte ptr [esp + 0x38], 0x6
        call    ext_005AEC70
        mov     eax, dword ptr [edi + 4]
        push    eax
        call    ext_006A5C5C
        add     esp, 4
        lea     ecx, [esi + 0x30]
        mov     dword ptr [edi + 4], ebx
        mov     dword ptr [edi + 8], ebx
        mov     byte ptr [esp + 0x24], 0x5
        call    ext_006246B0
        mov     edi, dword ptr [esi + 0x2c]
        cmp     edi, ebx
        mov     byte ptr [esp + 0x24], 0x4
        je      loc_47DCDA
        mov     ecx, edi
        call    ext_004939B0
        push    edi
        call    ext_006A5C5C
        add     esp, 4
    loc_47DCDA:
        mov     edi, dword ptr [esi + 0x28]
        cmp     edi, ebx
        mov     byte ptr [esp + 0x24], 0x3
        je      loc_47DCF6
        mov     ecx, edi
        call    ext_00504A70
        push    edi
        call    ext_006A5C5C
        add     esp, 4
    loc_47DCF6:
        mov     ecx, dword ptr [esi + 0x24]
        cmp     ecx, ebx
        mov     byte ptr [esp + 0x24], 0x2
        pop     edi
        je      loc_47DD0B
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx]
        push    1
        call    eax
    loc_47DD0B:
        lea     ecx, [esi + 0x18]
        mov     byte ptr [esp + 0x20], 0x1
        call    ext_005A6650
        lea     ecx, [esi + 8]
        mov     byte ptr [esp + 0x20], bl
        call    ext_005A6650
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], 0xffffffff
        call    ext_0065C660
        mov     ecx, dword ptr [esp + 0x18]
        pop     esi
        pop     ebx
        mov     fs:[0], ecx
        add     esp, 0x1c
        ret
    }
}

// [0x0047C7F0] sub_0047C7F0 (241 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0047C7F0(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0x14]
        push esi
        mov esi, dword ptr [ebp+8]
        __asm _emit 0x39 __asm _emit 0x75 __asm _emit 0x04
        push edi
        __asm _emit 0x8b __asm _emit 0xd9
        jbe L_47C80B
        call dword ptr [mem_00925134]
L_47C80B:
        mov edi, dword ptr [ebp+4]
        cmp edi, dword ptr [ebp+8]
        jbe L_47C819
        call dword ptr [mem_00925134]
L_47C819:
        push esi
        push ebp
        push edi
        push ebp
        lea eax, [esp+0x20]
        push eax
        mov ecx, ebp
        call ext_00596660
        mov esi, dword ptr [ebx+0x34]
        cmp esi, dword ptr [ebx+0x38]
        lea edi, [ebx+0x30]
        jbe L_47C840
        call dword ptr [mem_00925134]
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
L_47C840:
        mov ebx, dword ptr [edi+8]
        __asm _emit 0x39 __asm _emit 0x5f __asm _emit 0x04
        jbe L_47C852
        call dword ptr [mem_00925134]
        mov ebp, dword ptr [esp+0x1c]
L_47C852:
        test edi, edi
        je L_47C85A
        cmp edi, edi
        je L_47C864
L_47C85A:
        call dword ptr [mem_00925134]
        mov ebp, dword ptr [esp+0x1c]
L_47C864:
        cmp esi, ebx
        je L_47C8D7
        test edi, edi
        mov ebx, dword ptr [mem_00925134]
        jne L_47C874
        call ebx
L_47C874:
        cmp esi, dword ptr [edi+8]
        jb L_47C87B
        call ebx
L_47C87B:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx+0xf8]
        call eax
        cmp eax, 6
        je L_47C8A4
        cmp esi, dword ptr [edi+8]
        jb L_47C893
        call ebx
L_47C893:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx+0xf8]
        call eax
        cmp eax, 2
        jne L_47C8C8
L_47C8A4:
        cmp esi, dword ptr [edi+8]
        jb L_47C8AB
        call ebx
L_47C8AB:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx+0x168]
        cmp edx, dword ptr [esp+0x20]
        jne L_47C8C8
        cmp esi, dword ptr [edi+8]
        jb L_47C8C0
        call ebx
L_47C8C0:
        push esi
        mov ecx, ebp
        call ext_0041A920
L_47C8C8:
        cmp esi, dword ptr [edi+8]
        jb L_47C8CF
        call ebx
L_47C8CF:
        add esi, 4
        jmp L_47C840
L_47C8D7:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
    }
}

// [0x0047D300] sub_0047D300 (456 bytes)
extern "C" void ext_0047C7F0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0047D300(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 087ba98h
        mov eax, DWORD PTR fs:[0]
        push eax
        mov DWORD PTR fs:[0], esp
        sub esp, 14h
        push ebx
        xor ebx, ebx
        push esi
        mov DWORD PTR [esp+10h], ebx
        mov DWORD PTR [esp+14h], ebx
        mov DWORD PTR [esp+18h], ebx
        mov eax, DWORD PTR [esp+2ch]
        push eax
        lea edx, DWORD PTR [esp+10h]
        push edx
        mov DWORD PTR [esp+2ch], ebx
        call ext_0047C7F0
        mov esi, DWORD PTR [esp+10h]
        cmp esi, ebx
        je L_ret
        mov eax, DWORD PTR [esp+14h]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        jne L_a
        push esi
        jmp L_del
L_a:
        cmp esi, eax
        push ebp
        mov ebp, DWORD PTR [mem_00925134]
        push edi
        jbe L_b
        call ebp
        mov eax, DWORD PTR [esp+1ch]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
L_b:
        cmp DWORD PTR [esp+18h], eax
        mov edi, eax
        jbe L_c
        call ebp
        mov eax, DWORD PTR [esp+1ch]
L_c:
        cmp esi, edi
        je L_d
        cmp esi, eax
        jb L_e
        call ebp
L_e:
        mov ecx, DWORD PTR [esi]
        mov edx, DWORD PTR [ecx]
        mov eax, DWORD PTR [edx+12ch]
        push ebx
        call eax
        mov eax, DWORD PTR [esp+1ch]
        cmp esi, eax
        jb L_f
        call ebp
        mov eax, DWORD PTR [esp+1ch]
L_f:
        add esi, 4
        jmp L_b
L_d:
        mov esi, DWORD PTR [esp+18h]
        cmp esi, eax
        jbe L_g
        call ebp
        mov eax, DWORD PTR [esp+1ch]
L_g:
        mov ebx, esi
L_outer:
        cmp DWORD PTR [esp+18h], eax
        mov esi, eax
        jbe L_h
        call ebp
        mov eax, DWORD PTR [esp+1ch]
L_h:
        cmp ebx, esi
        je L_i
        cmp ebx, eax
        jb L_j
        call ebp
        mov eax, DWORD PTR [esp+1ch]
L_j:
        cmp ebx, eax
        mov ecx, DWORD PTR [ebx]
        mov edx, DWORD PTR [ecx+160h]
        mov DWORD PTR [esp+10h], edx
        jb L_k
        call ebp
        mov eax, DWORD PTR [esp+1ch]
L_k:
        mov ecx, DWORD PTR [ebx]
        mov esi, DWORD PTR [esp+18h]
        cmp esi, eax
        mov edx, DWORD PTR [ecx+15ch]
        mov DWORD PTR [esp+34h], edx
        jbe L_l
        call ebp
        mov eax, DWORD PTR [esp+1ch]
L_l:
        cmp DWORD PTR [esp+18h], eax
        mov edi, eax
        jbe L_m
        call ebp
        mov eax, DWORD PTR [esp+1ch]
L_m:
        cmp esi, edi
        je L_n
        cmp esi, ebx
        je L_o
        cmp esi, eax
        jb L_p
        call ebp
        mov eax, DWORD PTR [esp+1ch]
L_p:
        mov ecx, DWORD PTR [esi]
        cmp BYTE PTR [ecx+17ch], 0
        je L_o
        cmp ebx, eax
        jb L_q
        call ebp
        mov eax, DWORD PTR [esp+1ch]
L_q:
        mov edx, DWORD PTR [ebx]
        cmp BYTE PTR [edx+17ch], 0
        je L_o
        cmp esi, eax
        jb L_r
        call ebp
        mov eax, DWORD PTR [esp+1ch]
L_r:
        mov ecx, DWORD PTR [esi]
        mov ecx, DWORD PTR [ecx+160h]
        cmp DWORD PTR [esp+34h], ecx
        jge L_o
        cmp DWORD PTR [esp+10h], ecx
        jle L_o
        cmp esi, eax
        jb L_s
        call ebp
L_s:
        mov ecx, DWORD PTR [esi]
        mov edx, DWORD PTR [ecx]
        mov eax, DWORD PTR [edx+12ch]
        push 1
        call eax
        mov eax, DWORD PTR [esp+1ch]
L_o:
        cmp esi, eax
        jb L_t
        call ebp
        mov eax, DWORD PTR [esp+1ch]
L_t:
        add esi, 4
        jmp L_l
L_n:
        cmp ebx, eax
        jb L_u
        call ebp
        mov eax, DWORD PTR [esp+1ch]
L_u:
        add ebx, 4
        jmp L_outer
L_i:
        mov eax, DWORD PTR [esp+18h]
        test eax, eax
        pop edi
        pop ebp
        je L_ret
        push eax
L_del:
        call ext_006A5C5C
        add esp, 4
L_ret:
        mov ecx, DWORD PTR [esp+1ch]
        pop esi
        pop ebx
        mov DWORD PTR fs:[0], ecx
        add esp, 20h
        ret 4
    }
}

// [0x0047B170] sub_0047B170 (107 bytes)
extern "C" void ext_0047A9C0();
extern "C" int mem_00925134;

struct VecFloat_0047B170 {
    int pad;
    float* first;
    float* last;
    float* end;
};

struct Iter_0047B170 {
    void* cont;
    float* ptr;
};

extern "C" __declspec(naked) void __fastcall fn_0047B170(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov edx, dword ptr [esi + 4]
        test edx, edx
        jne short L_has_first
        xor ecx, ecx
        jmp short L_check_cap
    L_has_first:
        mov ecx, dword ptr [esi + 8]
        sub ecx, edx
        sar ecx, 2
    L_check_cap:
        test edx, edx
        je short L_grow
        mov eax, dword ptr [esi + 0Ch]
        sub eax, edx
        sar eax, 2
        cmp ecx, eax
        jae short L_grow
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esp + 10h]
        fld dword ptr [ecx]
        add eax, 4
        fstp dword ptr [eax - 4]
        mov dword ptr [esi + 8], eax
        pop esi
        add esp, 8
        ret 4
    L_grow:
        push edi
        mov edi, dword ptr [esi + 8]
        cmp edx, edi
        jbe short L_insert
        call dword ptr [mem_00925134]
    L_insert:
        mov edx, dword ptr [esp + 14h]
        push edx
        push edi
        push esi
        lea eax, [esp + 14h]
        push eax
        mov ecx, esi
        call ext_0047A9C0
        pop edi
        pop esi
        add esp, 8
        ret 4
    }
}

// [0x0047D900] sub_0047D900 (107 bytes)
extern "C" void ext_0047D510();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0047D900(void* self, int edx_unused, void* arg0) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [mem_00925134]
        push    esi
        mov     esi, dword ptr [ecx + 0x34]
        cmp     esi, dword ptr [ecx + 0x38]
        push    edi
        lea     edi, [ecx + 0x30]
        jbe     L_47d918
        call    ebp
    L_47d918:
        mov     ebx, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebx
        jbe     L_47d922
        call    ebp
    L_47d922:
        cmp     edi, edi
        je      L_47d928
        call    ebp
    L_47d928:
        cmp     esi, ebx
        je      L_47d963
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_47d933
        call    ebp
    L_47d933:
        cmp     esi, dword ptr [edi + 0x8]
        mov     eax, dword ptr [esi]
        mov     cl, byte ptr [eax + 0x17c]
        mov     byte ptr [esp + 0x13], cl
        jb      L_47d946
        call    ebp
    L_47d946:
        mov     ecx, dword ptr [esp + 0x18]
        push    1
        lea     edx, [esp + 0x17]
        push    edx
        push    esi
        call    ext_0047D510
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_47d95e
        call    ebp
    L_47d95e:
        add     esi, 4
        jmp     L_47d918
    L_47d963:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    }
}

// [0x0047D970] sub_0047D970 (107 bytes)
extern "C" void ext_0047D670();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0047D970(void* self, int edx_unused, void* arg0) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [mem_00925134]
        push    esi
        mov     esi, dword ptr [ecx + 0x34]
        cmp     esi, dword ptr [ecx + 0x38]
        push    edi
        lea     edi, [ecx + 0x30]
        jbe     L_47d988
        call    ebp
    L_47d988:
        mov     ebx, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebx
        jbe     L_47d992
        call    ebp
    L_47d992:
        cmp     edi, edi
        je      L_47d998
        call    ebp
    L_47d998:
        cmp     esi, ebx
        je      L_47d9d3
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_47d9a3
        call    ebp
    L_47d9a3:
        cmp     esi, dword ptr [edi + 0x8]
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax + 0x164]
        mov     dword ptr [esp + 0x10], ecx
        jb      L_47d9b6
        call    ebp
    L_47d9b6:
        mov     ecx, dword ptr [esp + 0x18]
        push    0x1
        lea     edx, [esp + 0x14]
        push    edx
        push    esi
        call    ext_0047D670
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_47d9ce
        call    ebp
    L_47d9ce:
        add     esi, 0x4
        jmp     L_47d988
    L_47d9d3:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}

// [0x004764C0] sub_004764C0 (107 bytes)
extern "C" void ext_00475AE0();
extern "C" void ext_00475B90();
extern "C" void ext_00475C40();
extern "C" void ext_00475CF0();
extern "C" void ext_00475DA0();
extern "C" void ext_00476430();
extern "C" void ext_00644E90();
extern "C" int mem_00A9F67C;
extern "C" int mem_00A9F980;
extern "C" int mem_00A9F84C;

extern "C" void __cdecl fn_004764C0(void* arg) {
    int local;
    ((void (__thiscall*)(void*, int*, int))ext_00476430)(arg, &local, 0);
    ((void (__thiscall*)(int*, int))ext_00475AE0)(&local, mem_00A9F67C);
    ((void (__thiscall*)(int*, int))ext_00475B90)(&local, 0x0093be8c);
    ((void (__thiscall*)(int*, int))ext_00475C40)(&local, mem_00A9F980);
    ((void (__thiscall*)(int*, int))ext_00475CF0)(&local, 0x0093be74);
    ((void (__thiscall*)(int*, int))ext_00475DA0)(&local, mem_00A9F84C);
    ((void (__cdecl*)(void*))ext_00644E90)(arg);
}

// [0x0047B370] sub_0047B370 (390 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00427A60();
extern "C" void ext_004CF9D0();
extern "C" void ext_0050BE20();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_0047B370() {
    __asm {
        push    -1
        push    0x8839e5
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        mov     dword ptr [esp], 0
        cmp     byte ptr [esp + 0x54], 0
        je      L_47B39F
        mov     ecx, dword ptr [esp + 0x4c]
        call    ext_0050BE20
    L_47B39F:
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        add     esi, 0x24
        push    edi
        mov     edi, dword ptr [esi + 4]
        cmp     edi, dword ptr [esi + 8]
        jbe     L_47B3B8
        call    dword ptr [mem_00925134]
    L_47B3B8:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], edi
        jbe     L_47B3DB
        call    dword ptr [mem_00925134]
    L_47B3DB:
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], edi
        lea     ecx, [esp + 0x20]
    L_47B3EB:
        call    ext_00427A60
        mov     ebx, dword ptr [esp + 0x18]
        test    ebx, ebx
        je      L_47B3FE
        cmp     ebx, dword ptr [esp + 0x24]
        je      L_47B404
    L_47B3FE:
        call    dword ptr [mem_00925134]
    L_47B404:
        mov     ebp, dword ptr [esp + 0x1c]
        cmp     ebp, dword ptr [esp + 0x28]
        jae     L_47B4E3
        test    ebx, ebx
        jne     L_47B41C
        call    dword ptr [mem_00925134]
    L_47B41C:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47B427
        call    dword ptr [mem_00925134]
    L_47B427:
        mov     edi, dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x60]
        lea     eax, [edi + 4]
        push    ecx
        push    eax
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      L_47B4C8
        push    0x190
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 0x64], esi
        test    esi, esi
        mov     dword ptr [esp + 0x50], 0
        je      L_47B48C
        push    0x928b5d
        lea     ecx, [esp + 0x30]
        call    dword ptr [mem_00924FE4]
        or      dword ptr [esp + 0x10], 1
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x54], 1
        call    ext_004CF9D0
        mov     esi, eax
        jmp     L_47B48E
    L_47B48C:
        xor     esi, esi
    L_47B48E:
        test    byte ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x50], -1
        je      L_47B4AC
        and     dword ptr [esp + 0x10], -2
        lea     ecx, [esp + 0x2c]
        call    dword ptr [mem_00924FF4]
    L_47B4AC:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x54]
        push    edi
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [esp + 0x5c]
        lea     eax, [esp + 0x64]
        push    eax
        mov     dword ptr [esp + 0x68], esi
        call    ext_0041A920
    L_47B4C8:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47B4D3
        call    dword ptr [mem_00925134]
    L_47B4D3:
        add     ebp, 4
        mov     dword ptr [esp + 0x1c], ebp
        lea     ecx, [esp + 0x14]
        jmp     L_47B3EB
    L_47B4E3:
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret
    }
}

extern "C" void ext_0046C180();
extern "C" void ext_0046FC50();
extern "C" void ext_00473120();
extern "C" void ext_006426F0();

struct Vec3_00473280 {
    float x, y, z;
    Vec3_00473280(const Vec3_00473280& o) : x(o.x), y(o.y), z(o.z) {}
};

// [0x00473280] sub_00473280 (112 bytes)
extern "C" void __fastcall fn_00473280(void* self, int edx_unused, int arg0) {
    typedef void (__thiscall *Fn1)(void*, int);
    typedef void (__thiscall *Fn0)(void*);
    typedef void (__thiscall *FnVec3)(void*, Vec3_00473280);

    ((Fn1)ext_00473120)(self, arg0);
    ((Fn0)ext_0046FC50)(self);
    ((Fn0)ext_0046C180)((char*)self + 0x180);

    char* p1 = *(char**)((char*)self + 0xcc);
    char* p2 = *(char**)(p1 + 0x26c);
    ((FnVec3)ext_006426F0)((char*)self + 0xd4, *(Vec3_00473280*)(p2 + 0x1b4));

    p1 = *(char**)((char*)self + 0xcc);
    p2 = *(char**)(p1 + 0x26c);
    *(int*)((char*)self + 0x174) = *(int*)(p2 + 0x1fc);
}

// [0x0047B1E0] sub_0047B1E0 (390 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00427A60();
extern "C" void ext_004D2C90();
extern "C" void ext_0050BE20();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_0047B1E0() {
    __asm {
        push    -1
        push    0x8839e5
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        mov     dword ptr [esp], 0
        cmp     byte ptr [esp + 0x54], 0
        je      L_47B20F
        mov     ecx, dword ptr [esp + 0x4c]
        call    ext_0050BE20
    L_47B20F:
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        add     esi, 0x24
        push    edi
        mov     edi, dword ptr [esi + 4]
        cmp     edi, dword ptr [esi + 8]
        jbe     L_47B228
        call    dword ptr [mem_00925134]
    L_47B228:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], edi
        jbe     L_47B24B
        call    dword ptr [mem_00925134]
    L_47B24B:
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], edi
        lea     ecx, [esp + 0x20]
    L_47B25B:
        call    ext_00427A60
        mov     ebx, dword ptr [esp + 0x18]
        test    ebx, ebx
        je      L_47B26E
        cmp     ebx, dword ptr [esp + 0x24]
        je      L_47B274
    L_47B26E:
        call    dword ptr [mem_00925134]
    L_47B274:
        mov     ebp, dword ptr [esp + 0x1c]
        cmp     ebp, dword ptr [esp + 0x28]
        jae     L_47B353
        test    ebx, ebx
        jne     L_47B28C
        call    dword ptr [mem_00925134]
    L_47B28C:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47B297
        call    dword ptr [mem_00925134]
    L_47B297:
        mov     edi, dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x60]
        lea     eax, [edi + 4]
        push    ecx
        push    eax
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      L_47B338
        push    0x32c
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 0x64], esi
        test    esi, esi
        mov     dword ptr [esp + 0x50], 0
        je      L_47B2FC
        push    0x928b5d
        lea     ecx, [esp + 0x30]
        call    dword ptr [mem_00924FE4]
        or      dword ptr [esp + 0x10], 1
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x54], 1
        call    ext_004D2C90
        mov     esi, eax
        jmp     L_47B2FE
    L_47B2FC:
        xor     esi, esi
    L_47B2FE:
        test    byte ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x50], -1
        je      L_47B31C
        and     dword ptr [esp + 0x10], -2
        lea     ecx, [esp + 0x2c]
        call    dword ptr [mem_00924FF4]
    L_47B31C:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x54]
        push    edi
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [esp + 0x5c]
        lea     eax, [esp + 0x64]
        push    eax
        mov     dword ptr [esp + 0x68], esi
        call    ext_0041A920
    L_47B338:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47B343
        call    dword ptr [mem_00925134]
    L_47B343:
        add     ebp, 4
        mov     dword ptr [esp + 0x1c], ebp
        lea     ecx, [esp + 0x14]
        jmp     L_47B25B
    L_47B353:
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret
    }
}

// [0x00473870] sub_00473870 (204 bytes)
extern "C" void ext_00473280();
extern "C" void ext_006622C0();
extern "C" __declspec(naked) void __fastcall fn_00473870(void* self) {
    __asm {
        push    -1
        push    0x8a56c8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        call    ext_0046F890
        test    al, al
        jne     L_ret
        push    ebx
        push    ebp
        lea     ebx, [esi + 0x154]
        push    edi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x10], ebx
        call    ext_0065C640
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], 0
        mov     byte ptr [esi + 0x150], 1
        call    ext_004736F0
        cmp     dword ptr [esi + 0x30], 0
        mov     dword ptr [esi + 0x15c], eax
        jne     L_skip_472420
        mov     ecx, esi
        call    ext_00472420
    L_skip_472420:
        mov     ecx, dword ptr [esi + 0xf8]
        add     ecx, 0x6c
        call    ext_006622C0
        mov     edi, dword ptr [esi + 0xf8]
        mov     ebp, dword ptr [mem_00925134]
        add     edi, 0x6c
        cmp     dword ptr [edi + 8], 0
        jne     L_ok1
        call    ebp
    L_ok1:
        mov     eax, dword ptr [edi + 8]
        mov     ecx, dword ptr [edi + 0xc]
        cmp     ecx, dword ptr [eax + 4]
        jne     L_ok2
        call    ebp
    L_ok2:
        mov     edx, dword ptr [edi + 0xc]
        mov     eax, dword ptr [edx + 8]
        push    1
        mov     ecx, esi
        mov     dword ptr [esi + 0x158], eax
        call    ext_00473280
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], -1
        call    ext_0065C650
        pop     edi
        pop     ebp
        pop     ebx
    L_ret:
        mov     ecx, dword ptr [esp + 8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x00474300] sub_00474300 (299 bytes)
extern "C" void ext_0046FC50();
extern "C" void ext_00472350();
extern "C" void ext_00472C90();
extern "C" void ext_00473280();
extern "C" void ext_0065D110();
extern "C" void ext_0067ADD0();
extern "C" void ext_0067B3D0();
extern "C" void ext_0067B530();
extern "C" int mem_00928E78;
extern "C" int mem_0092BD70;

extern "C" void __fastcall fn_00474300(void* self, int edx_unused, unsigned char arg1) {
    char* base = (char*)self;
    ((void (__thiscall*)(void*))ext_00472350)(self);
    if (*(unsigned char*)(base + 0x293) == 0) {
        ((void (__thiscall*)(void*, int))ext_00473280)(self, 1);
    }
    ((void (__thiscall*)(void*))ext_0065D110)(*(void**)(base + 0xf8));

    void* obj30 = *(void**)(base + 0x30);
    *(unsigned char*)(base + 0x290) = 1;
    *(unsigned char*)(base + 0x291) = 1;
    *(unsigned char*)(base + 0x292) = 0;
    *(int*)(base + 0x108) = 0;
    typedef unsigned char (__thiscall* Fn138)(void*);
    *(unsigned char*)(base + 0x294) = (*(Fn138*)(*(char**)obj30 + 0x138))(obj30);

    if (*(int*)(base + 0x288) > 0x78) {
        *(int*)(base + 0x288) = 0x78;
    }
    ((void (__thiscall*)(void*))ext_0046FC50)(self);

    volatile double d = (*(double*)&mem_00928E78 / (double)*(int*)(base + 0x288)) + *(double*)&mem_0092BD70;
    int val;
    __asm {
        fld d
        fistp val
    }

    *(unsigned char*)(base + 0x17c) = arg1;
    if (arg1 && val <= 9) {
        while (*(int*)(base + 0x108) < *(int*)(base + 0x174)) {
            ((void (__thiscall*)(void*))ext_00472C90)(self);
        }
        ((void (__thiscall*)(void*))ext_00472350)(self);
        return;
    }

    void* sub10c = base + 0x10c;
    *(unsigned char*)(base + 0x295) = 1;
    ((void (__thiscall*)(void*, int, int, int))ext_0067B3D0)(sub10c, val, *(int*)(base + 0x278), 4);
    ((void (__thiscall*)(void*))ext_0067B530)(sub10c);

    if (arg1) {
        while (*(unsigned char*)(base + 0x290) != 0) {
            ((void (__cdecl*)(int))ext_0067ADD0)(10);
        }
    }
}

// [0x0047B6A0] sub_0047B6A0 (390 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00427A60();
extern "C" void ext_004C6780();
extern "C" void ext_0050BE20();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_0047B6A0() {
    __asm {
        push    -1
        push    0x8839e5
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        mov     dword ptr [esp], 0
        cmp     byte ptr [esp + 0x54], 0
        je      L_47B6CF
        mov     ecx, dword ptr [esp + 0x4c]
        call    ext_0050BE20
    L_47B6CF:
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        add     esi, 0x24
        push    edi
        mov     edi, dword ptr [esi + 4]
        cmp     edi, dword ptr [esi + 8]
        jbe     L_47B6E8
        call    dword ptr [mem_00925134]
    L_47B6E8:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], edi
        jbe     L_47B70B
        call    dword ptr [mem_00925134]
    L_47B70B:
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], edi
        lea     ecx, [esp + 0x20]
    L_47B71B:
        call    ext_00427A60
        mov     ebx, dword ptr [esp + 0x18]
        test    ebx, ebx
        je      L_47B72E
        cmp     ebx, dword ptr [esp + 0x24]
        je      L_47B734
    L_47B72E:
        call    dword ptr [mem_00925134]
    L_47B734:
        mov     ebp, dword ptr [esp + 0x1c]
        cmp     ebp, dword ptr [esp + 0x28]
        jae     L_47B813
        test    ebx, ebx
        jne     L_47B74C
        call    dword ptr [mem_00925134]
    L_47B74C:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47B757
        call    dword ptr [mem_00925134]
    L_47B757:
        mov     edi, dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x60]
        lea     eax, [edi + 4]
        push    ecx
        push    eax
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      L_47B7F8
        push    0x18c
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 0x64], esi
        test    esi, esi
        mov     dword ptr [esp + 0x50], 0
        je      L_47B7BC
        push    0x928b5d
        lea     ecx, [esp + 0x30]
        call    dword ptr [mem_00924FE4]
        or      dword ptr [esp + 0x10], 1
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x54], 1
        call    ext_004C6780
        mov     esi, eax
        jmp     L_47B7BE
    L_47B7BC:
        xor     esi, esi
    L_47B7BE:
        test    byte ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x50], -1
        je      L_47B7DC
        and     dword ptr [esp + 0x10], -2
        lea     ecx, [esp + 0x2c]
        call    dword ptr [mem_00924FF4]
    L_47B7DC:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x54]
        push    edi
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [esp + 0x5c]
        lea     eax, [esp + 0x64]
        push    eax
        mov     dword ptr [esp + 0x68], esi
        call    ext_0041A920
    L_47B7F8:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47B803
        call    dword ptr [mem_00925134]
    L_47B803:
        add     ebp, 4
        mov     dword ptr [esp + 0x1c], ebp
        lea     ecx, [esp + 0x14]
        jmp     L_47B71B
    L_47B813:
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret
    }
}

// [0x0047B830] sub_0047B830 (390 bytes)
extern "C" void ext_004CD2D0();

extern "C" __declspec(naked) void __cdecl fn_0047B830() {
    __asm {
        push    -1
        push    0x8839e5
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        mov     dword ptr [esp], 0
        cmp     byte ptr [esp + 0x54], 0
        je      L_47B85F
        mov     ecx, dword ptr [esp + 0x4c]
        call    ext_0050BE20
    L_47B85F:
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        add     esi, 0x24
        push    edi
        mov     edi, dword ptr [esi + 4]
        cmp     edi, dword ptr [esi + 8]
        jbe     L_47B878
        call    dword ptr [mem_00925134]
    L_47B878:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], edi
        jbe     L_47B89B
        call    dword ptr [mem_00925134]
    L_47B89B:
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], edi
        lea     ecx, [esp + 0x20]
    L_47B8AB:
        call    ext_00427A60
        mov     ebx, dword ptr [esp + 0x18]
        test    ebx, ebx
        je      L_47B8BE
        cmp     ebx, dword ptr [esp + 0x24]
        je      L_47B8C4
    L_47B8BE:
        call    dword ptr [mem_00925134]
    L_47B8C4:
        mov     ebp, dword ptr [esp + 0x1c]
        cmp     ebp, dword ptr [esp + 0x28]
        jae     L_47B9A3
        test    ebx, ebx
        jne     L_47B8DC
        call    dword ptr [mem_00925134]
    L_47B8DC:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47B8E7
        call    dword ptr [mem_00925134]
    L_47B8E7:
        mov     edi, dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x60]
        lea     eax, [edi + 4]
        push    ecx
        push    eax
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      L_47B988
        push    0x1a4
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 0x64], esi
        test    esi, esi
        mov     dword ptr [esp + 0x50], 0
        je      L_47B94C
        push    0x928b5d
        lea     ecx, [esp + 0x30]
        call    dword ptr [mem_00924FE4]
        or      dword ptr [esp + 0x10], 1
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x54], 1
        call    ext_004CD2D0
        mov     esi, eax
        jmp     L_47B94E
    L_47B94C:
        xor     esi, esi
    L_47B94E:
        test    byte ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x50], -1
        je      L_47B96C
        and     dword ptr [esp + 0x10], -2
        lea     ecx, [esp + 0x2c]
        call    dword ptr [mem_00924FF4]
    L_47B96C:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x54]
        push    edi
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [esp + 0x5c]
        lea     eax, [esp + 0x64]
        push    eax
        mov     dword ptr [esp + 0x68], esi
        call    ext_0041A920
    L_47B988:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47B993
        call    dword ptr [mem_00925134]
    L_47B993:
        add     ebp, 4
        mov     dword ptr [esp + 0x1c], ebp
        lea     ecx, [esp + 0x14]
        jmp     L_47B8AB
    L_47B9A3:
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret
    }
}

// [0x0047B9C0] sub_0047B9C0 (390 bytes)
extern "C" void ext_004C9380();

extern "C" __declspec(naked) void __cdecl fn_0047B9C0() {
    __asm {
        push    -1
        push    0x8839e5
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        mov     dword ptr [esp], 0
        cmp     byte ptr [esp + 0x54], 0
        je      L_47B9EF
        mov     ecx, dword ptr [esp + 0x4c]
        call    ext_0050BE20
    L_47B9EF:
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        add     esi, 0x24
        push    edi
        mov     edi, dword ptr [esi + 4]
        cmp     edi, dword ptr [esi + 8]
        jbe     L_47BA08
        call    dword ptr [mem_00925134]
    L_47BA08:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], edi
        jbe     L_47BA2B
        call    dword ptr [mem_00925134]
    L_47BA2B:
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], edi
        lea     ecx, [esp + 0x20]
    L_47BA3B:
        call    ext_00427A60
        mov     ebx, dword ptr [esp + 0x18]
        test    ebx, ebx
        je      L_47BA4E
        cmp     ebx, dword ptr [esp + 0x24]
        je      L_47BA54
    L_47BA4E:
        call    dword ptr [mem_00925134]
    L_47BA54:
        mov     ebp, dword ptr [esp + 0x1c]
        cmp     ebp, dword ptr [esp + 0x28]
        jae     L_47BB33
        test    ebx, ebx
        jne     L_47BA6C
        call    dword ptr [mem_00925134]
    L_47BA6C:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47BA77
        call    dword ptr [mem_00925134]
    L_47BA77:
        mov     edi, dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x60]
        lea     eax, [edi + 4]
        push    ecx
        push    eax
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      L_47BB18
        push    0x1a0
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 0x64], esi
        test    esi, esi
        mov     dword ptr [esp + 0x50], 0
        je      L_47BADC
        push    0x928b5d
        lea     ecx, [esp + 0x30]
        call    dword ptr [mem_00924FE4]
        or      dword ptr [esp + 0x10], 1
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x54], 1
        call    ext_004C9380
        mov     esi, eax
        jmp     L_47BADE
    L_47BADC:
        xor     esi, esi
    L_47BADE:
        test    byte ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x50], -1
        je      L_47BAFC
        and     dword ptr [esp + 0x10], -2
        lea     ecx, [esp + 0x2c]
        call    dword ptr [mem_00924FF4]
    L_47BAFC:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x54]
        push    edi
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [esp + 0x5c]
        lea     eax, [esp + 0x64]
        push    eax
        mov     dword ptr [esp + 0x68], esi
        call    ext_0041A920
    L_47BB18:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47BB23
        call    dword ptr [mem_00925134]
    L_47BB23:
        add     ebp, 4
        mov     dword ptr [esp + 0x1c], ebp
        lea     ecx, [esp + 0x14]
        jmp     L_47BA3B
    L_47BB33:
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret
    }
}

// [0x0047BCE0] sub_0047BCE0 (390 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00427A60();
extern "C" void ext_0048DAB0();
extern "C" void ext_0050BE20();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0047BCE0(void* self) {
    __asm {
        push    -1
        push    0x8839e5
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        mov     dword ptr [esp], 0
        cmp     byte ptr [esp + 0x54], 0
        je      L_47BD0F
        mov     ecx, dword ptr [esp + 0x4c]
        call    ext_0050BE20
    L_47BD0F:
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        add     esi, 0x24
        push    edi
        mov     edi, dword ptr [esi + 4]
        cmp     edi, dword ptr [esi + 8]
        jbe     L_47BD28
        call    dword ptr [mem_00925134]
    L_47BD28:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], edi
        jbe     L_47BD4B
        call    dword ptr [mem_00925134]
    L_47BD4B:
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], edi
        lea     ecx, [esp + 0x20]
    L_47BD5B:
        call    ext_00427A60
        mov     ebx, dword ptr [esp + 0x18]
        test    ebx, ebx
        je      L_47BD6E
        cmp     ebx, dword ptr [esp + 0x24]
        je      L_47BD74
    L_47BD6E:
        call    dword ptr [mem_00925134]
    L_47BD74:
        mov     ebp, dword ptr [esp + 0x1c]
        cmp     ebp, dword ptr [esp + 0x28]
        jae     L_47BE53
        test    ebx, ebx
        jne     L_47BD8C
        call    dword ptr [mem_00925134]
    L_47BD8C:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47BD97
        call    dword ptr [mem_00925134]
    L_47BD97:
        mov     edi, dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x60]
        lea     eax, [edi + 4]
        push    ecx
        push    eax
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      L_47BE38
        push    0x238
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 0x64], esi
        test    esi, esi
        mov     dword ptr [esp + 0x50], 0
        je      L_47BDFC
        push    0x928b5d
        lea     ecx, [esp + 0x30]
        call    dword ptr [mem_00924FE4]
        or      dword ptr [esp + 0x10], 1
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x54], 1
        call    ext_0048DAB0
        mov     esi, eax
        jmp     L_47BDFE
    L_47BDFC:
        xor     esi, esi
    L_47BDFE:
        test    byte ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x50], 0xffffffff
        je      L_47BE1C
        and     dword ptr [esp + 0x10], -2
        lea     ecx, [esp + 0x2c]
        call    dword ptr [mem_00924FF4]
    L_47BE1C:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x54]
        push    edi
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [esp + 0x5c]
        lea     eax, [esp + 0x64]
        push    eax
        mov     dword ptr [esp + 0x68], esi
        call    ext_0041A920
    L_47BE38:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47BE43
        call    dword ptr [mem_00925134]
    L_47BE43:
        add     ebp, 4
        mov     dword ptr [esp + 0x1c], ebp
        lea     ecx, [esp + 0x14]
        jmp     L_47BD5B
    L_47BE53:
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret
    }
}

// [0x0047B500] sub_0047B500 (408 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00427A60();
extern "C" void ext_004AC5A0();
extern "C" void ext_0050BE20();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_0047B500() {
    __asm {
        push    -1
        push    0x8839e5
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        mov     dword ptr [esp], 0
        cmp     byte ptr [esp + 0x54], 0
        je      L_47B52F
        mov     ecx, dword ptr [esp + 0x4c]
        call    ext_0050BE20
    L_47B52F:
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        add     esi, 0x24
        push    edi
        mov     edi, dword ptr [esi + 4]
        cmp     edi, dword ptr [esi + 8]
        jbe     L_47B548
        call    dword ptr [mem_00925134]
    L_47B548:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], edi
        jbe     L_47B56B
        call    dword ptr [mem_00925134]
    L_47B56B:
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], edi
        lea     ecx, [esp + 0x20]
        call    ext_00427A60
    L_47B580:
        mov     ebx, dword ptr [esp + 0x18]
        test    ebx, ebx
        je      L_47B58E
        cmp     ebx, dword ptr [esp + 0x24]
        je      L_47B594
    L_47B58E:
        call    dword ptr [mem_00925134]
    L_47B594:
        mov     ebp, dword ptr [esp + 0x1c]
        cmp     ebp, dword ptr [esp + 0x28]
        jae     L_47B685
        test    ebx, ebx
        jne     L_47B5AC
        call    dword ptr [mem_00925134]
    L_47B5AC:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47B5B7
        call    dword ptr [mem_00925134]
    L_47B5B7:
        mov     edi, dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x60]
        lea     eax, [edi + 4]
        push    ecx
        push    eax
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      L_47B66A
        push    0x3e8
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 0x64], esi
        test    esi, esi
        mov     dword ptr [esp + 0x50], 0
        je      L_47B62E
        push    0x928b5d
        lea     ecx, [esp + 0x30]
        call    dword ptr [mem_00924FE4]
        or      dword ptr [esp + 0x10], 1
        mov     ecx, 0xadf3cc
        mov     byte ptr [esp + 0x50], 1
        call    dword ptr [mem_00924FF0]
        push    eax
        push    0
        push    0x14
        push    0
        lea     edx, [esp + 0x3c]
        push    edx
        mov     ecx, esi
        call    ext_004AC5A0
        mov     esi, eax
        jmp     L_47B630
    L_47B62E:
        xor     esi, esi
    L_47B630:
        test    byte ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x50], -1
        je      L_47B64E
        and     dword ptr [esp + 0x10], -2
        lea     ecx, [esp + 0x2c]
        call    dword ptr [mem_00924FF4]
    L_47B64E:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x54]
        push    edi
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [esp + 0x5c]
        lea     eax, [esp + 0x64]
        push    eax
        mov     dword ptr [esp + 0x68], esi
        call    ext_0041A920
    L_47B66A:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47B675
        call    dword ptr [mem_00925134]
    L_47B675:
        add     ebp, 4
        mov     dword ptr [esp + 0x1c], ebp
        lea     ecx, [esp + 0x14]
        jmp     L_47B580
    L_47B685:
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret
    }
}

extern "C" void ext_00472350();
extern "C" void ext_00472BA0();
extern "C" void ext_005973F0();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_00662080();
extern "C" int mem_008A56C8;

// [0x004732F0] sub_004732F0 (145 bytes)
extern "C" __declspec(naked) void __fastcall fn_004732F0(void* self) {
    __asm {
        push    -1
        push    offset mem_008A56C8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_00472350
        mov     ecx, dword ptr [esi + 0x30]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x1d8]
        call    edx
        mov     edi, eax
        mov     ecx, edi
        mov     dword ptr [esp + 8], edi
        call    ext_0065C640
        mov     ecx, dword ptr [esi + 0xf8]
        add     ecx, 0xcc
        mov     dword ptr [esp + 0x14], 0
        call    ext_00662080
        mov     ecx, dword ptr [esi + 0xcc]
        call    ext_005973F0
        mov     ecx, esi
        call    ext_00472BA0
        mov     ecx, dword ptr [esi + 0x30]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x154]
        call    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], -1
        call    ext_0065C650
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x00473430] sub_00473430 (145 bytes)
extern "C" void ext_00472350();
extern "C" void ext_00472BA0();
extern "C" void ext_005973F0();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_00662090();
extern "C" int mem_008A56C8;
extern "C" __declspec(naked) void __fastcall fn_00473430(void* self) {
    __asm {
        push    -1
        push    offset mem_008A56C8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_00472350
        mov     ecx, dword ptr [esi + 0x30]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x1d8]
        call    edx
        mov     edi, eax
        mov     ecx, edi
        mov     dword ptr [esp + 8], edi
        call    ext_0065C640
        mov     ecx, dword ptr [esi + 0xf8]
        add     ecx, 0xcc
        mov     dword ptr [esp + 0x14], 0
        call    ext_00662090
        mov     ecx, dword ptr [esi + 0xcc]
        call    ext_005973F0
        mov     ecx, esi
        call    ext_00472BA0
        mov     ecx, dword ptr [esi + 0x30]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x154]
        call    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], -1
        call    ext_0065C650
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x00473390] sub_00473390 (153 bytes)
extern "C" void ext_00472350();
extern "C" void ext_00472BA0();
extern "C" void ext_00480130();
extern "C" void ext_005973F0();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_006622C0();
extern "C" int mem_008A56C8;

extern "C" __declspec(naked) void __fastcall fn_00473390(void* self) {
    __asm {
        push    -1
        push    offset mem_008A56C8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_00472350
        mov     ecx, dword ptr [esi + 0x30]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x1d8]
        call    edx
        mov     edi, eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x8], edi
        call    ext_0065C640
        mov     ecx, dword ptr [esi + 0xf8]
        add     ecx, 0xcc
        mov     dword ptr [esp + 0x14], 0
        call    ext_006622C0
        mov     ecx, dword ptr [esi + 0xcc]
        call    ext_005973F0
        mov     ecx, esi
        call    ext_00472BA0
        mov     ecx, dword ptr [esi + 0x30]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x154]
        call    edx
        mov     ecx, dword ptr [esi + 0x34]
        call    ext_00480130
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], -1
        call    ext_0065C650
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x004734D0] sub_004734D0 (153 bytes)
extern "C" void ext_00472350();
extern "C" void ext_00472BA0();
extern "C" void ext_00480130();
extern "C" void ext_005973F0();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_006620A0();
extern "C" int mem_008A56C8;

extern "C" __declspec(naked) void __fastcall fn_004734D0(void* self) {
    __asm {
        push    -1
        push    offset mem_008A56C8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_00472350
        mov     ecx, dword ptr [esi + 0x30]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x1d8]
        call    edx
        mov     edi, eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x8], edi
        call    ext_0065C640
        mov     ecx, dword ptr [esi + 0xf8]
        add     ecx, 0xcc
        mov     dword ptr [esp + 0x14], 0
        call    ext_006620A0
        mov     ecx, dword ptr [esi + 0xcc]
        call    ext_005973F0
        mov     ecx, esi
        call    ext_00472BA0
        mov     ecx, dword ptr [esi + 0x30]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x154]
        call    edx
        mov     ecx, dword ptr [esi + 0x34]
        call    ext_00480130
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], -1
        call    ext_0065C650
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x00473570] sub_00473570 (163 bytes)
extern "C" void ext_00472350();
extern "C" void ext_00472BA0();
extern "C" void ext_00480130();
extern "C" void ext_005973F0();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_00661F70();

extern "C" __declspec(naked) void __fastcall fn_00473570(void* self, int edx_unused, int arg1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        call ext_00472350
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0x8], edi
        call ext_0065C640
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esi + 0xf8]
        add eax, 1
        push eax
        add ecx, 0xcc
        mov dword ptr [esp + 0x18], 0
        call ext_00661F70
        mov ecx, dword ptr [esi + 0xcc]
        call ext_005973F0
        mov ecx, esi
        call ext_00472BA0
        mov ecx, dword ptr [esi + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x154]
        call eax
        mov ecx, dword ptr [esi + 0x34]
        call ext_00480130
        mov ecx, edi
        mov dword ptr [esp + 0x14], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

extern "C" void __fastcall ext_005304A0(void*, int, int);
extern "C" void __fastcall ext_00597250(void*);

// [0x00472E30] sub_00472E30 (122 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00472E30(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xcc]
        call ext_00597250
        mov eax, dword ptr [esi + 0x220]
        mov edx, dword ptr [eax]
        lea ecx, [esi + 0x220]
        call edx
        mov eax, dword ptr [esi + 0x60]
        mov edx, dword ptr [eax + 0x8]
        lea ecx, [esi + 0x60]
        call edx
        add dword ptr [esi + 0x108], 0x1
        mov eax, dword ptr [esi + 0x174]
        test eax, eax
        mov ecx, dword ptr [esi + 0x108]
        je label_true
        cmp ecx, eax
        jl label_true
        mov ecx, esi
        call ext_00472350
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xb4]
        call edx
        test eax, eax
        je label_false
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xb4]
        push 0x0
        call edx
        mov ecx, eax
        call ext_005304A0
    label_false:
        xor al, al
        pop esi
        ret
    label_true:
        mov al, 0x1
        pop esi
        ret
    }
}

// [0x00473940] sub_00473940 (669 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_00472BA0();
extern "C" void ext_00472E30();
extern "C" void ext_00473870();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_00661F70();
extern "C" void ext_0067AEB0();
extern "C" void ext_0067AEF0();
extern "C" int mem_00925134;
extern "C" int mem_00B58DFC;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;

extern "C" __declspec(naked) void __fastcall fn_00473940(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x00882f50
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x14c]
        push edi
        mov dword ptr [ebp - 0x10], esp
        push eax
        lea ecx, [esi + 0x160]
        mov dword ptr [ebp - 0x1c], esi
        mov dword ptr [ebp - 0x4], 0x0
        mov byte ptr [esi + 0x152], 0x1
        call ext_0067AEF0
    loop_top:
        lea eax, [esi + 0x154]
        mov edi, eax
        mov ecx, edi
        mov dword ptr [ebp - 0x18], edi
        call ext_0065C640
        cmp byte ptr [esi + 0x150], 0x0
        mov byte ptr [ebp - 0x4], 0x1
        je exit_false_1
        mov ecx, dword ptr [esi + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1d8]
        call eax
        mov ecx, eax
        mov dword ptr [ebp - 0x14], eax
        call ext_0065C640
        mov ecx, 0x00aee8ac
        mov byte ptr [ebp - 0x4], 0x2
        mov dword ptr [ebp - 0x20], ecx
        call ext_0065C640
        mov edi, dword ptr [esi + 0xf8]
        add edi, 0xcc
        cmp dword ptr [edi + 0x8], 0x0
        mov byte ptr [ebp - 0x4], 0x3
        jne iter1_ok1
        call dword ptr [mem_00925134]
    iter1_ok1:
        mov ecx, dword ptr [edi + 0x8]
        mov edx, dword ptr [edi + 0xc]
        cmp edx, dword ptr [ecx + 0x4]
        jne iter1_ok2
        call dword ptr [mem_00925134]
    iter1_ok2:
        mov eax, dword ptr [edi + 0xc]
        mov ebx, dword ptr [eax + 0x8]
        mov ecx, esi
        call ext_00473870
        mov edi, dword ptr [esi + 0xf8]
        add edi, 0xcc
        cmp dword ptr [edi + 0x8], 0x0
        jne iter2_ok1
        call dword ptr [mem_00925134]
    iter2_ok1:
        mov ecx, dword ptr [edi + 0x8]
        mov edx, dword ptr [edi + 0xc]
        cmp edx, dword ptr [ecx + 0x4]
        jne iter2_ok2
        call dword ptr [mem_00925134]
    iter2_ok2:
        test ebx, ebx
        mov eax, dword ptr [edi + 0xc]
        mov eax, dword ptr [eax + 0x8]
        jle skip_661f70
        cmp ebx, eax
        je skip_661f70
        mov ecx, dword ptr [esi + 0xf8]
        push ebx
        add ecx, 0xcc
        call ext_00661F70
    skip_661f70:
        mov ecx, 0x00aee8ac
        mov byte ptr [ebp - 0x4], 0x2
        call ext_0065C650
        mov ecx, dword ptr [ebp - 0x14]
        mov byte ptr [ebp - 0x4], 0x1
        call ext_0065C650
        mov ecx, dword ptr [ebp - 0x18]
        mov byte ptr [ebp - 0x4], 0x0
        call ext_0065C650
        mov byte ptr [esi + 0x151], 0x0
    inner_loop:
        cmp byte ptr [esi + 0x150], 0x0
        je check_151
        mov ecx, dword ptr [esi + 0x158]
        cmp ecx, dword ptr [esi + 0x15c]
        jae check_151
        cmp byte ptr [esi + 0x151], 0x0
        jne loop_top
        lea eax, [esi + 0x154]
        mov edi, eax
        mov ecx, edi
        mov dword ptr [ebp - 0x20], edi
        call ext_0065C640
        cmp byte ptr [esi + 0x150], 0x0
        mov byte ptr [ebp - 0x4], 0x4
        mov byte ptr [esi + 0x151], 0x0
        je unlock_and_check_151
        mov ecx, esi
        call ext_00472E30
        mov ecx, dword ptr [esi + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x154]
        call eax
        cmp byte ptr [esi + 0x150], 0x0
        je unlock_and_check_151
        cmp byte ptr [esi + 0x12c], 0x0
        mov byte ptr [ebp - 0x4], 0x0
        mov ecx, edi
        jne unlock_and_continue_inner
        call ext_0065C650
        mov ecx, dword ptr [ebp - 0xc]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    unlock_and_continue_inner:
        call ext_0065C650
        jmp inner_loop
    unlock_and_check_151:
        mov ecx, edi
        mov byte ptr [ebp - 0x4], 0x0
        call ext_0065C650
    check_151:
        cmp byte ptr [esi + 0x151], 0x0
        jne loop_top
        mov ecx, esi
        call ext_00472BA0
        mov dword ptr [ebp - 0x4], -0x1
        jmp after_catch_body
    exit_false_1:
        mov ecx, edi
        mov byte ptr [ebp - 0x4], 0x0
        call ext_0065C650
        mov dword ptr [ebp - 0x4], -0x1
        jmp after_catch_body
    catch_funclet:
        cmp byte ptr [mem_00B58DFC], 0x0
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        jne catch_alt
        mov edx, dword ptr [ebp - 0x24]
        mov eax, dword ptr [mem_00924FA0]
        add edx, 0xc
        push edx
        push 0x0093bd58
        push eax
        call ext_00435D00
        add esp, 0x8
        push eax
        call dword ptr [mem_00924E94]
        jmp catch_endl
    catch_alt:
        mov edx, dword ptr [mem_00924FA0]
        push 0x0093bd40
        push edx
        call ext_00435D00
    catch_endl:
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, 0x00473bb0
        ret
    catch_cont:
        mov esi, dword ptr [ebp - 0x1c]
    after_catch_body:
        mov eax, dword ptr [esi + 0x14c]
        push eax
        lea ecx, [esi + 0x160]
        mov byte ptr [esi + 0x152], 0x0
        call ext_0067AEB0
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

// [0x00479550] sub_00479550 (193 bytes)
extern "C" void ext_00517510();
extern "C" void ext_00527D60();
extern "C" void ext_00528B60();
extern "C" void ext_00587470();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00479550(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [ecx + 0x38]
        cmp dword ptr [ecx + 0x34], ebx
        push ebp
        push esi
        push edi
        lea edi, [ecx + 0x30]
        mov dword ptr [esp + 0x10], ecx
        jbe loc_0047956c
        call dword ptr [mem_00925134]
    loc_0047956c:
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe loc_0047957a
        call dword ptr [mem_00925134]
    loc_0047957a:
        cmp esi, ebx
        mov ebp, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x18], esi
        je loc_00479591
    loc_00479586:
        cmp dword ptr [esi], ebp
        je loc_00479591
        add esi, 0x4
        cmp esi, ebx
        jne loc_00479586
    loc_00479591:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe loc_0047959f
        call dword ptr [mem_00925134]
    loc_0047959f:
        test edi, edi
        je loc_004795a7
        cmp edi, edi
        je loc_004795ad
    loc_004795a7:
        call dword ptr [mem_00925134]
    loc_004795ad:
        cmp esi, ebx
        je loc_00479607
        lea ecx, [ebp + 0xc]
        call ext_00528B60
        mov ecx, dword ptr [ebp + 0x94]
        test ecx, ecx
        je loc_004795c9
        push ebp
        call ext_00587470
    loc_004795c9:
        mov ebx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [ebx + 0x58]
        test ecx, ecx
        je loc_004795da
        push ebp
        call ext_00517510
    loc_004795da:
        test edi, edi
        jne loc_004795e4
        call dword ptr [mem_00925134]
    loc_004795e4:
        cmp esi, dword ptr [edi + 0x8]
        jb loc_004795ef
        call dword ptr [mem_00925134]
    loc_004795ef:
        push esi
        push edi
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, edi
        mov dword ptr [esi], 0
        call ext_00527D60
        mov byte ptr [ebx + 0x4], 1
    loc_00479607:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 4
    }
}

// [0x0047A5C0] sub_0047A5C0 (251 bytes)
extern "C" void ext_00478410();
extern "C" void ext_00528B60();
extern "C" void ext_00536230();
extern "C" void ext_00587470();
extern "C" int mem_00925134;
extern "C" int mem_009251EC;

extern "C" __declspec(naked) void __fastcall fn_0047A5C0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x58]
        test ecx, ecx
        push edi
        je loc_0047A5D6
        lea eax, [esi + 0x30]
        push eax
        call ext_00478410
    loc_0047A5D6:
        mov edi, dword ptr [esi + 0x34]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x30
        cmp edi, dword ptr [esi + 0x8]
        jbe loc_0047A5F0
        call ebp
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loc_0047A5F0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe loc_0047A5FA
        call ebp
    loc_0047A5FA:
        test esi, esi
        je loc_0047A602
        cmp esi, esi
        je loc_0047A604
    loc_0047A602:
        call ebp
    loc_0047A604:
        cmp edi, ebx
        je loc_0047A659
        test esi, esi
        jne loc_0047A60E
        call ebp
    loc_0047A60E:
        cmp edi, dword ptr [esi + 0x8]
        jb loc_0047A615
        call ebp
    loc_0047A615:
        mov ecx, dword ptr [edi]
        add ecx, 0xc
        call ext_00528B60
        cmp edi, dword ptr [esi + 0x8]
        jb loc_0047A626
        call ebp
    loc_0047A626:
        mov ecx, dword ptr [edi]
        cmp dword ptr [ecx + 0x94], 0
        je loc_0047A64D
        cmp edi, dword ptr [esi + 0x8]
        jb loc_0047A63F
        call ebp
        cmp edi, dword ptr [esi + 0x8]
        jb loc_0047A63F
        call ebp
    loc_0047A63F:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [eax + 0x94]
        push eax
        call ext_00587470
    loc_0047A64D:
        cmp edi, dword ptr [esi + 0x8]
        jb loc_0047A654
        call ebp
    loc_0047A654:
        add edi, 4
        jmp loc_0047A5F0
    loc_0047A659:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe loc_0047A663
        call ebp
    loc_0047A663:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe loc_0047A66D
        call ebp
    loc_0047A66D:
        push ebx
        push esi
        push edi
        push esi
        mov ecx, esi
        call ext_00536230
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe loc_0047A682
        call ebp
    loc_0047A682:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe loc_0047A68C
        call ebp
    loc_0047A68C:
        cmp ebx, edi
        je loc_0047A6B6
        mov eax, dword ptr [esi + 0x8]
        sub eax, edi
        sar eax, 2
        test eax, eax
        lea ecx, [4*eax]
        lea ebp, [ecx + ebx]
        jle loc_0047A6B3
        push ecx
        push edi
        push ecx
        push ebx
        call dword ptr [mem_009251EC]
        add esp, 0x10
    loc_0047A6B3:
        mov dword ptr [esi + 0x8], ebp
    loc_0047A6B6:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0047C100] sub_0047C100 (136 bytes)
extern "C" void ext_0047A5C0();
extern "C" void ext_005A0910();
extern "C" void ext_005AE480();

extern "C" __declspec(naked) void __fastcall fn_0047C100(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        call ext_0047A5C0
        mov eax, dword ptr [edi + 0x51c]
        mov ecx, dword ptr [eax]
        lea esi, [edi + 0x518]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005A0910
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [eax], eax
        mov esi, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], esi
        mov eax, dword ptr [edi + 0xc]
        mov ecx, dword ptr [eax]
        lea esi, [edi + 0x8]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005A0910
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + 0x4]
        push eax
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [eax], eax
        mov esi, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], esi
        mov byte ptr [edi + 0x4], 0x1
        pop edi
        pop esi
        ret
    }
}

// [0x0047D870] sub_0047D870 (136 bytes)
extern "C" void ext_0047D5C0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0047D870(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0x34]
        cmp esi, dword ptr [ecx + 0x38]
        push edi
        lea edi, [ecx + 0x30]
        jbe loc_0047D890
        call ebp
        _emit 0x8D
        _emit 0x9B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loc_0047D890:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe loc_0047D89A
        call ebp
    loc_0047D89A:
        cmp edi, edi
        je loc_0047D8A0
        call ebp
    loc_0047D8A0:
        cmp esi, ebx
        je loc_0047D8EE
        cmp esi, dword ptr [edi + 0x8]
        jb loc_0047D8AB
        call ebp
    loc_0047D8AB:
        cmp esi, dword ptr [edi + 0x8]
        mov eax, dword ptr [esi]
        mov ebx, dword ptr [eax + 0x160]
        jb loc_0047D8BA
        call ebp
    loc_0047D8BA:
        cmp esi, dword ptr [edi + 0x8]
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 0x15c]
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x14], ebx
        jb loc_0047D8D1
        call ebp
    loc_0047D8D1:
        mov ecx, dword ptr [esp + 0x1c]
        push 0x1
        lea eax, [esp + 0x14]
        push eax
        push esi
        call ext_0047D5C0
        cmp esi, dword ptr [edi + 0x8]
        jb loc_0047D8E9
        call ebp
    loc_0047D8E9:
        add esi, 0x4
        jmp loc_0047D890
    loc_0047D8EE:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x00476430] sub_00476430 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00476430(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        lea eax, [esp + 0x4]
        push 0xa3273c
        push eax
        mov esi, ecx
        call ext_00662610
        add esp, 0x8
        mov eax, dword ptr [esp + 0x34]
        test eax, eax
        mov dword ptr [esp + 0x28], 0x0
        je L_476483
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esi + 0x18]
        call ext_00474F00
        mov ecx, eax
        call dword ptr [mem_00924FD4]
L_476483:
        lea edx, [esp + 0x4]
        push edx
        lea ecx, [esi + 0x8]
        call ext_00476360
        mov esi, dword ptr [esp + 0x30]
        lea ecx, [esp + 0x4]
        mov dword ptr [esi], eax
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x8
    }
}

// [0x0047A9C0] sub_0047A9C0 (141 bytes)
extern "C" void ext_00479AC0();
extern "C" __declspec(naked) void __fastcall fn_0047A9C0(void* self) {
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
        je      L_0047A9DE
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, eax
        sub     ecx, edi
        sar     ecx, 2
        jne     L_0047A9E2
    L_0047A9DE:
        xor     ebx, ebx
        jmp     L_0047AA03
    L_0047A9E2:
        cmp     edi, eax
        jbe     L_0047A9EC
        call    dword ptr [mem_00925134]
    L_0047A9EC:
        test    ebp, ebp
        je      L_0047A9F4
        cmp     ebp, esi
        je      L_0047A9FA
    L_0047A9F4:
        call    dword ptr [mem_00925134]
    L_0047A9FA:
        mov     ebx, dword ptr [esp + 0x20]
        sub     ebx, edi
        sar     ebx, 2
    L_0047AA03:
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    1
        push    eax
        push    ebp
        mov     ecx, esi
        call    ext_00479AC0
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, dword ptr [esi + 0x8]
        jbe     L_0047AA25
        call    dword ptr [mem_00925134]
    L_0047AA25:
        mov     dword ptr [esp + 0x20], edi
        lea     edi, [edi + 4*ebx]
        cmp     edi, dword ptr [esi + 0x8]
        ja      L_0047AA36
        cmp     edi, dword ptr [esi + 0x4]
        jae     L_0047AA3C
    L_0047AA36:
        call    dword ptr [mem_00925134]
    L_0047AA3C:
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

// [0x0047D510] sub_0047D510 (161 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_0041DFC0();
extern "C" void ext_00476FD0();
extern "C" void ext_00664C30();
extern "C" void ext_006A6DD2();
extern "C" int mem_00892ED9;
extern "C" int mem_009D1278;
extern "C" __declspec(naked) void __stdcall fn_0047D510(void* a1, const unsigned char* a2, int a3) {
    __asm {
        push -1
        push offset mem_00892ED9
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 4Ch
        mov edx, [esp+60h]
        push esi
        mov esi, [esp+60h]
        mov eax, [esi]
        mov [esp+4], eax
        mov al, [edx]
        lea edx, [esp+4]
        push edx
        mov [esp+0Ch], al
        call ext_0041DFC0
        test al, al
        je L_throw
        mov al, 1
        pop esi
        mov ecx, [esp+4Ch]
        mov fs:[0], ecx
        add esp, 58h
        ret 0Ch
    L_throw:
        cmp byte ptr [esp+68h], 0
        je L_ret_false
        mov eax, [esi]
        push eax
        lea ecx, [esp+10h]
        push ecx
        call ext_00664C30
        add esp, 8
        push eax
        mov dword ptr [esp+5Ch], 0
        call ext_00476FD0
        push eax
        lea ecx, [esp+30h]
        call ext_004142E0
        push offset mem_009D1278
        lea edx, [esp+2Ch]
        push edx
        call ext_006A6DD2
    L_ret_false:
        mov ecx, [esp+50h]
        xor al, al
        pop esi
        mov fs:[0], ecx
        add esp, 58h
        ret 0Ch
    }
}

// [0x0047D670] sub_0047D670 (161 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_0041DFC0();
extern "C" void ext_00477030();
extern "C" void ext_00664C30();
extern "C" void ext_006A6DD2();
extern "C" int mem_00892ED9;
extern "C" int mem_009D1278;
extern "C" __declspec(naked) void __fastcall fn_0047D670(void* self, int edx_unused, int* a1, int* a2, bool a3) {
    __asm {
        push    -1
        push    offset mem_00892ED9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x4c
        mov     edx, dword ptr [esp + 0x60]
        push    esi
        mov     esi, dword ptr [esp + 0x60]
        mov     eax, dword ptr [esi]
        mov     dword ptr [esp + 4], eax
        mov     eax, dword ptr [edx]
        lea     edx, [esp + 4]
        push    edx
        mov     dword ptr [esp + 0xc], eax
        call    ext_0041DFC0
        test    al, al
        je      L_not_found
        mov     al, 1
        pop     esi
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x58
        ret     0xc
    L_not_found:
        cmp     byte ptr [esp + 0x68], 0
        je      L_ret_false
        mov     eax, dword ptr [esi]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        call    ext_00664C30
        add     esp, 8
        push    eax
        mov     dword ptr [esp + 0x5c], 0
        call    ext_00477030
        push    eax
        lea     ecx, [esp + 0x30]
        call    ext_004142E0
        push    offset mem_009D1278
        lea     edx, [esp + 0x2c]
        push    edx
        call    ext_006A6DD2
    L_ret_false:
        mov     ecx, dword ptr [esp + 0x50]
        xor     al, al
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x58
        ret     0xc
    }
}

// [0x00475710] sub_00475710 (143 bytes)
extern "C" void ext_00475240();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00475710(void* self) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi + 0x4]
        test    ebx, ebx
        push    edi
        je      L_zero_edi
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, eax
        sub     ecx, ebx
        sar     ecx, 0x5
        jne     L_check_begin_end
L_zero_edi:
        xor     edi, edi
        jmp     L_call_insert
L_check_begin_end:
        cmp     ebx, eax
        jbe     L_check_where
        call    dword ptr [mem_00925134]
L_check_where:
        test    ebp, ebp
        je      L_invalid_where
        cmp     ebp, esi
        je      L_calc_offset
L_invalid_where:
        call    dword ptr [mem_00925134]
L_calc_offset:
        mov     edi, dword ptr [esp + 0x20]
        sub     edi, ebx
        sar     edi, 0x5
L_call_insert:
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    0x1
        push    eax
        push    ebp
        mov     ecx, esi
        call    ext_00475240
        mov     ebx, dword ptr [esi + 0x4]
        cmp     ebx, dword ptr [esi + 0x8]
        jbe     L_recalc_iter
        call    dword ptr [mem_00925134]
L_recalc_iter:
        shl     edi, 0x5
        add     edi, ebx
        cmp     edi, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x20], ebx
        ja      L_invalid_ret
        cmp     edi, dword ptr [esi + 0x4]
        jae     L_done
L_invalid_ret:
        call    dword ptr [mem_00925134]
L_done:
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

// [0x00475960] sub_00475960 (211 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_004276B0();
extern "C" void ext_004722F0();
extern "C" void ext_005CD120();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00475960(void* self) {
    __asm {
        push    -1
        push    0x878f31
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x64
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x80]
        mov     esi, ecx
        push    edi
        lea     ecx, [esp + 0x2c]
        call    dword ptr [mem_00924FE0]
        mov     eax, dword ptr [esp + 0x84]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x44], ecx
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x7c], 0
        call    ext_005CD120
        lea     ecx, [esp + 0x28]
        mov     bl, al
        mov     dword ptr [esp + 0x78], -1
        call    dword ptr [mem_00924FF4]
        test    bl, bl
        je      short L_fail
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     ecx, dword ptr [esp + 0x64]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x70
        ret     0xc
    L_fail:
        cmp     byte ptr [esp + 0x88], 0
        je      short L_ret_false
        lea     eax, [esp + 0xc]
        push    edi
        push    eax
        call    ext_004276B0
        add     esp, 8
        push    eax
        mov     dword ptr [esp + 0x7c], 1
        call    ext_004722F0
        push    eax
        lea     ecx, [esp + 0x50]
        call    ext_004142E0
        push    0x9d1278
        lea     ecx, [esp + 0x4c]
        push    ecx
        call    ext_006A6DD2
    L_ret_false:
        mov     ecx, dword ptr [esp + 0x70]
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x70
        ret     0xc
    }
}

// [0x00475AE0] sub_00475AE0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AD9038;
extern "C" int mem_00AD9034;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00475AE0(void* self, int edx_unused, const char* a1) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x883357
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AD9038], 0x1
        push    esi
        mov     esi, ecx
        jne     loc_475B2F
        or      dword ptr [mem_00AD9038], 0x1
        mov     ecx, offset mem_00AD9034
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AD9034], 0x93b44c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    loc_475B2F:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AD9034
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x00475B90] sub_00475B90 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AD9040;
extern "C" int mem_00AD903C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00475B90(void* self, int edx_unused, const char* a1) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x883387
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AD9040], 0x1
        push    esi
        mov     esi, ecx
        jne     loc_475BDF
        or      dword ptr [mem_00AD9040], 0x1
        mov     ecx, offset mem_00AD903C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AD903C], 0x93b5fc
        mov     dword ptr [esp + 0x2c], 0xffffffff
    loc_475BDF:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AD903C
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x00475C40] sub_00475C40 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AD9048;
extern "C" int mem_00AD9044;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00475C40(void* self, int edx_unused, const char* a1) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8833b7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AD9048], 0x1
        push    esi
        mov     esi, ecx
        jne     loc_475C8F
        or      dword ptr [mem_00AD9048], 0x1
        mov     ecx, offset mem_00AD9044
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AD9044], 0x93b7ac
        mov     dword ptr [esp + 0x2c], 0xffffffff
    loc_475C8F:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AD9044
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x00475CF0] sub_00475CF0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AD9050;
extern "C" int mem_00AD904C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00475CF0(void* self, int edx_unused, const char* a1) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8833e7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AD9050], 0x1
        push    esi
        mov     esi, ecx
        jne     loc_475D3F
        or      dword ptr [mem_00AD9050], 0x1
        mov     ecx, offset mem_00AD904C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AD904C], 0x93b95c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    loc_475D3F:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AD904C
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x00475DA0] sub_00475DA0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AD9058;
extern "C" int mem_00AD9054;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00475DA0(void* self, int edx_unused, const char* a1) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x883417
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AD9058], 0x1
        push    esi
        mov     esi, ecx
        jne     loc_475DEF
        or      dword ptr [mem_00AD9058], 0x1
        mov     ecx, offset mem_00AD9054
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AD9054], 0x93bb0c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    loc_475DEF:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AD9054
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x0047D720] sub_0047D720 (146 bytes)
extern "C" void ext_0047C9A0();
extern "C" void ext_00673C20();
extern "C" int mem_009849C0;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0047D720(void* self) {
    __asm {
        sub     esp, 0xc
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x538]
        cmp     eax, dword ptr [mem_009849C0]
        mov     dword ptr [esp + 0x4], edi
        jge     L_end
        mov     ecx, dword ptr [edi + 0x24]
        push    ebp
        push    esi
        push    ecx
        mov     ecx, edi
        call    ext_0047C9A0
        mov     edx, dword ptr [edi + 0x1c]
        mov     eax, dword ptr [edx]
        add     edi, 0x18
        mov     esi, edi
        mov     ebp, eax
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], ebp
        push    ebx
        _emit   0x8d
        _emit   0x9b
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    L_loop:
        test    esi, esi
        mov     ebx, dword ptr [edi + 0x4]
        je      L_invalid1
        cmp     esi, edi
        je      L_ok1
    L_invalid1:
        call    dword ptr [mem_00925134]
    L_ok1:
        cmp     ebp, ebx
        je      L_loop_end
        test    esi, esi
        jne     L_ok2
        call    dword ptr [mem_00925134]
    L_ok2:
        cmp     ebp, dword ptr [esi + 0x4]
        jne     L_ok3
        call    dword ptr [mem_00925134]
    L_ok3:
        mov     eax, dword ptr [ebp + 0x28]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        call    ext_0047C9A0
        lea     ecx, [esp + 0x14]
        call    ext_00673C20
        mov     ebp, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
        jmp     L_loop
    L_loop_end:
        pop     ebx
        pop     esi
        pop     ebp
    L_end:
        pop     edi
        add     esp, 0xc
        ret
    }
}

// [0x00473060] sub_00473060 (189 bytes)
extern "C" void ext_00472350();
extern "C" void ext_00472420();
extern "C" void ext_00472BA0();
extern "C" void ext_00596FC0();
extern "C" void ext_0059C770();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_0065D120();

extern "C" __declspec(naked) void __fastcall fn_00473060(void* self) {
    __asm {
        push    -1
        push    0x8a56c8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_00472350
        cmp     dword ptr [esi + 0x30], 0
        jne     L_0047308c
        mov     ecx, esi
        call    ext_00472420
    L_0047308c:
        mov     ecx, dword ptr [esi + 0x30]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x1d8]
        call    edx
        mov     edi, eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x8], edi
        call    ext_0065C640
        mov     ecx, dword ptr [esi + 0xcc]
        push    4
        mov     dword ptr [esp + 0x18], 0
        call    ext_0059C770
        mov     ecx, dword ptr [esi + 0xf8]
        call    ext_0065D120
        mov     ecx, esi
        call    ext_00472BA0
        mov     ecx, dword ptr [esi + 0xcc]
        call    ext_00596FC0
        mov     ecx, dword ptr [esi + 0x30]
        mov     dword ptr [esi + 0x108], 0
        mov     byte ptr [esi + 0x293], 0
        mov     byte ptr [esi + 0x290], 1
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x154]
        call    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], -1
        call    ext_0065C650
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x00474C10] sub_00474C10 (48 bytes)
extern "C" void __fastcall fn_00474C10(void* self) {
    void** fields = (void**)((char*)self + 0x18);
    if (fields[0] != 0) {
        ext_006A5C5C(fields[0]);
    }
    fields[0] = 0;
    fields[1] = 0;
    fields[2] = 0;
    ext_00678DE0(self);
}

// [0x00477340] sub_00477340 (49 bytes)
struct Triple12 {
    int a;
    int b;
    int c;
};

extern "C" Triple12* __cdecl fn_00477340(Triple12* first, Triple12* last, Triple12* dest) {
    while (first != last) {
        if (dest) {
            dest->a = first->a;
            dest->b = first->b;
            dest->c = first->c;
        }
        ++first;
        ++dest;
    }
    return dest;
}

// [0x0047D7C0] sub_0047D7C0 (162 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_0047C0B0();
extern "C" void ext_0047C480();
extern "C" void ext_0047D300();
extern "C" void ext_00527AC0();
extern "C" void ext_00587180();
extern "C" void ext_00587920();
extern "C" void ext_00594000();

extern "C" __declspec(naked) void __fastcall fn_0047D7C0(void* self, int edx_unused, void* arg0) {
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        call    ext_00594000
        mov     esi, dword ptr [esp + 0x10]
        mov     ebx, eax
        test    ebx, ebx
        je      loc_47D7E6
        push    0
        push    esi
        mov     ecx, ebx
        call    ext_00587920
        push    esi
        mov     ecx, ebx
        call    ext_00587180
loc_47D7E6:
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [edi + 0x30]
        call    ext_0041A920
        mov     ecx, edi
        call    ext_0047C0B0
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx + 0xf8]
        mov     ecx, esi
        call    eax
        cmp     eax, 2
        je      loc_47D81C
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx + 0xf8]
        mov     ecx, esi
        call    eax
        cmp     eax, 6
        jne     loc_47D82A
loc_47D81C:
        mov     ecx, dword ptr [esi + 0x168]
        push    ecx
        mov     ecx, edi
        call    ext_0047D300
loc_47D82A:
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx + 0xf8]
        mov     ecx, esi
        call    eax
        cmp     eax, 8
        jne     loc_47D849
        mov     ecx, dword ptr [esi + 0x168]
        push    ecx
        mov     ecx, edi
        call    ext_0047C480
loc_47D849:
        mov     ecx, dword ptr [edi + 0x58]
        test    ecx, ecx
        mov     byte ptr [edi + 4], 1
        je      loc_47D85C
        push    0
        push    esi
        call    ext_00527AC0
loc_47D85C:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}

// [0x0047C8F0] sub_0047C8F0 (168 bytes)
extern "C" void ext_004779E0();
extern "C" void ext_0047C000();
extern "C" int mem_00925134;

extern "C" __declspec(naked) unsigned char __fastcall fn_0047C8F0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 12
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov byte ptr [esp + 12], 0
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        push edi
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        mov eax, dword ptr [esp + 16]
        mov ebp, dword ptr [esp + 32]
        push 0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 44], edi
        call ext_004779E0
        mov edi, dword ptr [esi + 8]
        add esp, 20
        cmp dword ptr [esi + 4], edi
        mov ebx, eax
        jbe L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        test esi, esi
        je L_chk4
        cmp esi, esi
        je L_chk5
    L_chk4:
        call dword ptr [mem_00925134]
    L_chk5:
        cmp ebx, edi
        pop edi
        je L_insert
        test esi, esi
        jne L_chk6
        call dword ptr [mem_00925134]
    L_chk6:
        cmp ebx, dword ptr [esi + 8]
        jb L_chk7
        call dword ptr [mem_00925134]
    L_chk7:
        mov ecx, dword ptr [ebp]
        cmp ecx, dword ptr [ebx]
        jb L_insert
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 12
        ret 4
    L_insert:
        push ebp
        push ebx
        push esi
        lea edx, [esp + 28]
        push edx
        mov ecx, esi
        call ext_0047C000
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 12
        ret 4
    }
}

// [0x0047D5C0] sub_0047D5C0 (168 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_00476F70();
extern "C" void ext_0047C8F0();
extern "C" void ext_00664C30();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) bool __fastcall fn_0047D5C0(void* self, int edx_unused, const int* a1, const int* a2, bool a3) {
    __asm {
        push -1
        push 0x892ed9
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x50
        push esi
        mov esi, [esp+0x64]
        mov eax, [esi]
        mov [esp+4], eax
        mov eax, [esp+0x68]
        mov edx, [eax]
        mov eax, [eax+4]
        mov [esp+8], edx
        lea edx, [esp+4]
        push edx
        mov [esp+0x10], eax
        call ext_0047C8F0
        test al, al
        je short L_0047D616
        mov al, 1
        pop esi
        mov ecx, [esp+0x50]
        mov fs:[0], ecx
        add esp, 0x5c
        ret 0xc
L_0047D616:
        cmp byte ptr [esp+0x6c], 0
        je short L_0047D654
        mov eax, [esi]
        push eax
        lea ecx, [esp+0x14]
        push ecx
        call ext_00664C30
        add esp, 8
        push eax
        mov dword ptr [esp+0x60], 0
        call ext_00476F70
        push eax
        lea ecx, [esp+0x34]
        call ext_004142E0
        push 0x9d1278
        lea edx, [esp+0x30]
        push edx
        call ext_006A6DD2
L_0047D654:
        mov ecx, [esp+0x54]
        xor al, al
        pop esi
        mov fs:[0], ecx
        add esp, 0x5c
        ret 0xc
    }
}

// [0x0047C000] sub_0047C000 (172 bytes)
extern "C" void ext_0047ACE0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0047C000(void* self, int edx_unused, int* out, char* cont, char* where, int val) {
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
        sar edx, 1
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
        sar edx, 1
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
        call ext_0047ACE0
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok3
        call dword ptr [mem_00925134]
L_ok3:
        lea edx, [edi + 2*edi]
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

// [0x004797D0] sub_004797D0 (186 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_00476F10();
extern "C" void ext_00478910();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004797D0(void* self, int edx_unused, void* a1, void* a2) {
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
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 30h], ecx
        lea edx, [esp + 14h]
        push edx
        lea eax, [esp + 0ch]
        push eax
        lea ecx, [esi + 4]
        mov dword ptr [esp + 6ch], 0
        call ext_00478910
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 64h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esp + 10h], 0
        jne L_ok_004797D0
        push edi
        call ext_00476F10
        push eax
        lea ecx, [esp + 3ch]
        call ext_004142E0
        push 09d1278h
        lea ecx, [esp + 38h]
        push ecx
        call ext_006A6DD2
L_ok_004797D0:
        mov esi, dword ptr [esp + 8h]
        test esi, esi
        push ebx
        mov ebx, dword ptr [mem_00925134]
        jne L_nz1_004797D0
        call ebx
L_nz1_004797D0:
        mov edi, dword ptr [esp + 10h]
        cmp edi, dword ptr [esi + 4]
        jne L_nz2_004797D0
        call ebx
L_nz2_004797D0:
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

// [0x00474430] sub_00474430 (189 bytes)
extern "C" void ext_0046FDE0();
extern "C" void ext_0046FE50();
extern "C" void ext_0046FE70();
extern "C" void ext_00473120();
extern "C" void ext_00473620();
extern "C" void ext_0065F260();
extern "C" __declspec(naked) void __fastcall fn_00474430(void* self) {
    __asm {
        push -1
        push 0x882f68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
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
        mov ecx, dword ptr [esi + 0xf8]
        xor ebx, ebx
        mov dword ptr [esp + 0x20], ebx
        call ext_0065F260
        mov ecx, esi
        call ext_0046FE50
        test al, al
        jne short L_474497
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], ebx
        call ext_00473620
L_474497:
        mov ecx, esi
        call ext_0046FE70
        test al, al
        jne short L_4744B6
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], ebx
        call ext_0046FDE0
L_4744B6:
        push 1
        mov ecx, esi
        call ext_00473120
        mov ecx, dword ptr [esi + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x154]
        call eax
        mov ecx, edi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x0047AB40] sub_0047AB40 (205 bytes)
extern "C" void ext_00477660();
extern "C" void ext_00477B70();
extern "C" void ext_00477BB0();
extern "C" void ext_00478CB0();
extern "C" void ext_0047AB40();
extern "C" __declspec(naked) void __cdecl fn_0047AB40(void* first, void* last, int ideal) {
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
        jle L_LE_20
        mov esi, dword ptr [esp + 0x24]
        nop
    L_LOOP:
        test esi, esi
        jle L_SMALL_HI
        push edi
        lea eax, [esp + 0x14]
        push ebx
        push eax
        call ext_00477660
        mov ebp, dword ptr [esp + 0x20]
        mov eax, esi
        cdq
        sub eax, edx
        sar eax, 1
        mov esi, eax
        cdq
        sub eax, edx
        sar eax, 1
        add esi, eax
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, edi
        mov edx, eax
        sub ecx, ebp
        sub edx, ebx
        add esp, 0xc
        and ecx, -4
        and edx, -4
        cmp edx, ecx
        push esi
        jge L_RIGHT
        push eax
        push ebx
        call ext_0047AB40
        mov ebx, ebp
        jmp L_AFTER
    L_RIGHT:
        push edi
        push ebp
        call ext_0047AB40
        mov edi, dword ptr [esp + 0x1c]
    L_AFTER:
        mov eax, edi
        sub eax, ebx
        sar eax, 0x2
        add esp, 0xc
        cmp eax, 0x20
        jg L_LOOP
    L_LE_20:
        cmp eax, 0x1
        jle L_EPILOG
        push 0
        push edi
        push ebx
        call ext_00477BB0
        add esp, 0xc
    L_EPILOG:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    L_SMALL_HI:
        cmp eax, 0x20
        jle L_LE_20
        mov eax, edi
        sub eax, ebx
        and eax, -4
        cmp eax, 0x4
        jle L_TAIL
        push 0
        push 0
        push edi
        push ebx
        call ext_00477B70
        add esp, 0x10
    L_TAIL:
        push edi
        push ebx
        call ext_00478CB0
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0047AC10] sub_0047AC10 (205 bytes)
extern "C" void ext_00477D90();
extern "C" void ext_00477DD0();
extern "C" void ext_00478760();
extern "C" void ext_00478D00();
extern "C" void ext_0047AC10();
extern "C" __declspec(naked) void __cdecl fn_0047AC10(void* first, void* last, int ideal) {
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
        jle L_LE_20
        mov esi, dword ptr [esp + 0x24]
        nop
    L_LOOP:
        test esi, esi
        jle L_SMALL_HI
        push edi
        lea eax, [esp + 0x14]
        push ebx
        push eax
        call ext_00478760
        mov ebp, dword ptr [esp + 0x20]
        mov eax, esi
        cdq
        sub eax, edx
        sar eax, 1
        mov esi, eax
        cdq
        sub eax, edx
        sar eax, 1
        add esi, eax
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, edi
        mov edx, eax
        sub ecx, ebp
        sub edx, ebx
        add esp, 0xc
        and ecx, -4
        and edx, -4
        cmp edx, ecx
        push esi
        jge L_RIGHT
        push eax
        push ebx
        call ext_0047AC10
        mov ebx, ebp
        jmp L_AFTER
    L_RIGHT:
        push edi
        push ebp
        call ext_0047AC10
        mov edi, dword ptr [esp + 0x1c]
    L_AFTER:
        mov eax, edi
        sub eax, ebx
        sar eax, 0x2
        add esp, 0xc
        cmp eax, 0x20
        jg L_LOOP
    L_LE_20:
        cmp eax, 0x1
        jle L_EPILOG
        push 0
        push edi
        push ebx
        call ext_00477DD0
        add esp, 0xc
    L_EPILOG:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    L_SMALL_HI:
        cmp eax, 0x20
        jle L_LE_20
        mov eax, edi
        sub eax, ebx
        and eax, -4
        cmp eax, 0x4
        jle L_TAIL
        push 0
        push 0
        push edi
        push ebx
        call ext_00477D90
        add esp, 0x10
    L_TAIL:
        push edi
        push ebx
        call ext_00478D00
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

extern "C" void ext_0046FAD0();
extern "C" void ext_0046FB20();
extern "C" void ext_00472780();
extern "C" void ext_00474A00();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;

// [0x00474F00] sub_00474F00 (207 bytes)
extern "C" __declspec(naked) void __fastcall fn_00474F00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x883151
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x5c
        push ebp
        mov ebp, dword ptr [esp + 0x70]
        push esi
        push edi
        push ebp
        mov edi, ecx
        call ext_00472780
        test edi, edi
        mov esi, eax
        jne L_474F33
        call dword ptr [mem_00925134]
    L_474F33:
        cmp esi, dword ptr [edi + 0x4]
        je L_474F4A
        lea eax, [esi + 0xc]
        push eax
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_474FA3
    L_474F4A:
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE8]
        push eax
        push ebp
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x78], 0x0
        call ext_0046FB20
        push eax
        push esi
        push edi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 0x80], 0x1
        call ext_00474A00
        mov edi, dword ptr [eax]
        mov esi, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x70], 0x0
        call ext_0046FAD0
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x70], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_474FA3:
        test edi, edi
        jne L_474FAD
        call dword ptr [mem_00925134]
    L_474FAD:
        cmp esi, dword ptr [edi + 0x4]
        jne L_474FB8
        call dword ptr [mem_00925134]
    L_474FB8:
        mov ecx, dword ptr [esp + 0x68]
        pop edi
        lea eax, [esi + 0x28]
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x68
        ret 0x4
    }
}

extern "C" void ext_00472730();
extern "C" void ext_004757F0();
extern "C" void ext_00475900();
extern "C" void ext_00476150();
extern "C" void ext_00672D10();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

// [0x00476360] sub_00476360 (208 bytes)
extern "C" __declspec(naked) void __fastcall fn_00476360(void* self) {
    __asm {
        push -0x1
        mov eax, dword ptr fs:[0x0]
        push 0x883440
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
        jne L_476396
        call dword ptr [mem_00925134]
    L_476396:
        cmp edi, dword ptr [esi + 0x4]
        je L_4763ad
        lea eax, [edi + 0xc]
        push eax
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_476403
    L_4763ad:
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x24], ebx
        lea ecx, [esp + 0x18]
        push ecx
        push ebp
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x64], ebx
        call ext_00475900
        push eax
        push edi
        push esi
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x6c], 0x1
        call ext_00476150
        mov esi, dword ptr [eax]
        mov edi, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0x5c], bl
        call ext_004757F0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_00672D10
    L_476403:
        cmp esi, ebx
        jne L_47640d
        call dword ptr [mem_00925134]
    L_47640d:
        cmp edi, dword ptr [esi + 0x4]
        jne L_476418
        call dword ptr [mem_00925134]
    L_476418:
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

// [0x0047AA50] sub_0047AA50 (238 bytes)
extern "C" void ext_004784F0();
extern "C" void ext_004786B0();
extern "C" void ext_00477B30();
extern "C" void ext_00478C60();

extern "C" __declspec(naked) void __cdecl fn_0047AA50(void* _First, void* _Last, int _Ideal, void* _Pred) {
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
        jle L_0047aae7
        mov esi, dword ptr [esp + 0x24]
        nop
    L_0047aa70:
        test esi, esi
        jle L_0047ab03
        mov eax, dword ptr [esp + 0x28]
        push eax
        push edi
        lea ecx, [esp + 0x18]
        push ebx
        push ecx
        call ext_004784F0
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
        jge L_0047aac7
        mov edx, dword ptr [esp + 0x28]
        push edx
        push esi
        push eax
        push ebx
        call fn_0047AA50
        mov ebx, ebp
        jmp L_0047aad8
    L_0047aac7:
        mov eax, dword ptr [esp + 0x28]
        push eax
        push esi
        push edi
        push ebp
        call fn_0047AA50
        mov edi, dword ptr [esp + 0x20]
    L_0047aad8:
        mov eax, edi
        sub eax, ebx
        sar eax, 0x2
        add esp, 0x10
        cmp eax, 0x20
        jg L_0047aa70
    L_0047aae7:
        cmp eax, 0x1
        jle L_0047aafb
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        push edi
        push ebx
        call ext_004786B0
        add esp, 0xc
    L_0047aafb:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    L_0047ab03:
        cmp eax, 0x20
        jle L_0047aae7
        mov ecx, edi
        sub ecx, ebx
        and ecx, -0x4
        cmp ecx, 0x4
        jle L_0047ab27
        mov edx, dword ptr [esp + 0x28]
        push 0x0
        push 0x0
        push edx
        push edi
        push ebx
        call ext_00477B30
        add esp, 0x14
    L_0047ab27:
        mov eax, dword ptr [esp + 0x28]
        push eax
        push edi
        push ebx
        call ext_00478C60
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00474540] sub_00474540 (243 bytes)
extern "C" void ext_00470090();
extern "C" void ext_00473C70();

extern "C" __declspec(naked) void __fastcall fn_00474540(void* self, int edx_unused, void* a1, void* a2) {
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
        cmp byte ptr [esi + 45h], 0
        mov al, 1
        mov byte ptr [esp + 10h], al
        jne L_474585
        nop
    L_474560:
        lea eax, [esi + 0ch]
        push eax
        push ebx
        mov edi, esi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        mov byte ptr [esp + 10h], al
        je L_47457C
        mov esi, dword ptr [esi]
        jmp L_47457F
    L_47457C:
        mov esi, dword ptr [esi + 8h]
    L_47457F:
        cmp byte ptr [esi + 45h], 0
        je L_474560
    L_474585:
        test al, al
        mov esi, edi
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 14h], ebp
        je L_4745D5
        mov ecx, dword ptr [ebp + 4h]
        cmp edi, dword ptr [ecx]
        jne L_4745C8
        push ebx
        push edi
        push 1
        lea edx, [esp + 20h]
        push edx
        mov ecx, ebp
        call ext_00473C70
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
        ret 8h
    L_4745C8:
        lea ecx, [esp + 14h]
        call ext_00470090
        mov esi, dword ptr [esp + 18h]
    L_4745D5:
        lea edx, [esi + 0ch]
        push ebx
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L_474618
        mov eax, dword ptr [esp + 10h]
        push ebx
        push edi
        push eax
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, ebp
        call ext_00473C70
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
        ret 8h
    L_474618:
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
        ret 8h
    }
}

extern "C" void ext_00475E50();
extern "C" void ext_00666C00();
extern "C" int mem_00924EF4;

// [0x00476050] sub_00476050 (243 bytes)
extern "C" __declspec(naked) void __fastcall fn_00476050(void* self, int edx_unused, void* a1, void* a2) {
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
        jne L_476095
        nop
    L_476070:
        lea eax, [esi + 0ch]
        push eax
        push ebx
        mov edi, esi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        mov byte ptr [esp + 10h], al
        je L_47608C
        mov esi, dword ptr [esi]
        jmp L_47608F
    L_47608C:
        mov esi, dword ptr [esi + 8h]
    L_47608F:
        cmp byte ptr [esi + 39h], 0
        je L_476070
    L_476095:
        test al, al
        mov esi, edi
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 14h], ebp
        je L_4760E5
        mov ecx, dword ptr [ebp + 4h]
        cmp edi, dword ptr [ecx]
        jne L_4760D8
        push ebx
        push edi
        push 1
        lea edx, [esp + 20h]
        push edx
        mov ecx, ebp
        call ext_00475E50
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
    L_4760D8:
        lea ecx, [esp + 14h]
        call ext_00666C00
        mov esi, dword ptr [esp + 18h]
    L_4760E5:
        lea edx, [esi + 0ch]
        push ebx
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L_476128
        mov eax, dword ptr [esp + 10h]
        push ebx
        push edi
        push eax
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, ebp
        call ext_00475E50
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
    L_476128:
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

// [0x00478910] sub_00478910 (243 bytes)
extern "C" void ext_00478210();
extern "C" void ext_0059E220();
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_00478910(void* self, int edx_unused, void* a1, void* a2) {
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
        cmp byte ptr [esi + 2dh], 0
        mov al, 1
        mov byte ptr [esp + 10h], al
        jne L_after_00478910
        nop
    L_top_00478910:
        lea eax, [esi + 0ch]
        push eax
        push ebx
        mov edi, esi
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        mov byte ptr [esp + 10h], al
        je L_else_00478910
        mov esi, dword ptr [esi]
        jmp L_chk_00478910
    L_else_00478910:
        mov esi, dword ptr [esi + 8h]
    L_chk_00478910:
        cmp byte ptr [esi + 2dh], 0
        je L_top_00478910
    L_after_00478910:
        test al, al
        mov esi, edi
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 14h], ebp
        je L_tail_00478910
        mov ecx, dword ptr [ebp + 4h]
        cmp edi, dword ptr [ecx]
        jne L_other_00478910
        push ebx
        push edi
        push 1
        lea edx, [esp + 20h]
        push edx
        mov ecx, ebp
        call ext_00478210
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
    L_other_00478910:
        lea ecx, [esp + 14h]
        call ext_0059E220
        mov esi, dword ptr [esp + 18h]
    L_tail_00478910:
        lea edx, [esi + 0ch]
        push ebx
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L_fail_00478910
        mov eax, dword ptr [esp + 10h]
        push ebx
        push edi
        push eax
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, ebp
        call ext_00478210
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
    L_fail_00478910:
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

// [0x0047C380] sub_0047C380 (252 bytes)
extern "C" void ext_004797D0();
extern "C" void ext_0047C190();
extern "C" void ext_004BF830();
extern "C" void ext_00587450();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0047C380(void* self) {
    __asm {
        push -1
        push 0x883a31
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x34]
        push edi
        lea eax, [esi * 8]
        mov edi, ecx
        sub eax, esi
        lea ecx, [eax * 4 + 0xad9358]
        push ecx
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE0]
        lea edx, [esp + 0xc]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x34], 0
        call ext_0047C190
        mov eax, dword ptr [esp + 0x44]
        mov ecx, dword ptr [esp + 0x40]
        mov edx, dword ptr [esp + 0x3c]
        push eax
        push ecx
        push edx
        lea eax, [esp + 0x18]
        push esi
        push eax
        call ext_004BF830
        mov esi, eax
        add esp, 0x14
        mov dword ptr [esp + 0x44], esi
        lea ecx, [esp + 0x38]
        push ecx
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [edi + 0x40]
        mov byte ptr [esp + 0x38], 1
        mov dword ptr [esp + 0x40], esi
        call ext_004797D0
        add edi, 0x5c
        push edi
        mov ecx, esi
        call ext_00587450
        mov eax, dword ptr [esi]
        mov ebx, dword ptr [esp + 0x48]
        mov edx, dword ptr [eax + 0x148]
        push ebx
        mov ecx, esi
        call edx
        test ebx, ebx
        je L_skip
        mov eax, dword ptr [ebx + 4]
        mov edi, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        lea ecx, [ebx + 4]
        add edi, 0x144
        call edx
        push eax
        mov eax, dword ptr [edi]
        mov ecx, esi
        call eax
    L_skip:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x168]
        mov ecx, esi
        call eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x14
    }
}

// [0x004796D0] sub_004796D0 (254 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_00478910();
extern "C" void ext_005DF5C0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00AD9100;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004796D0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8a1712
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je L_004796D0_tail
        mov ecx, dword ptr [mem_00AD9100]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 2
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
    L_004796D0_tail:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}

// [0x00479890] sub_00479890 (254 bytes)
extern "C" int mem_00A32774;

extern "C" __declspec(naked) void __fastcall fn_00479890(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8a1712
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je L_00479890_tail
        mov ecx, dword ptr [mem_00A32774]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 2
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
    L_00479890_tail:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}

// [0x00479990] sub_00479990 (254 bytes)
extern "C" int mem_00A32778;

extern "C" __declspec(naked) void __fastcall fn_00479990(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8a1712
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je L_00479990_tail
        mov ecx, dword ptr [mem_00A32778]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 2
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
    L_00479990_tail:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}

// [0x0047A6C0] sub_0047A6C0 (290 bytes)
extern "C" void ext_00479890();
extern "C" void ext_00558A10();
extern "C" void ext_00558A20();
extern "C" void ext_00559770();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FC0;
extern "C" int mem_00A9ECE8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0047A6C0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr [esp + 0x34]
        push esi
        push edi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push ebx
        call dword ptr [mem_00924FE0]
        lea edi, [esi + 0x518]
        mov ecx, edi
        call ext_005DF5C0
        mov esi, eax
        test esi, esi
        jne L_47A727
        push ebx
        call ext_00559770
        add esp, 4
        mov esi, eax
        push esi
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push ebx
        call dword ptr [mem_00924FE0]
        mov ecx, edi
        call ext_00479890
    L_47A727:
        push 0x92ce48
        push ebx
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je L_47A7CC
        mov eax, dword ptr [mem_00A9ECE8]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x58], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov ecx, edi
        call ext_005DF5C0
        mov ebx, eax
        test ebx, ebx
        jne L_47A7B3
        mov ecx, dword ptr [mem_00A9ECE8]
        push ecx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], ebx
        call ext_00559770
        add esp, 4
        lea ecx, [esp + 0x10]
        mov ebx, eax
        mov dword ptr [esp + 0x34], -1
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [mem_00A9ECE8]
        push ebx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov ecx, edi
        call ext_00479890
    L_47A7B3:
        lea ecx, [ebx + 0x5c]
        push ecx
        mov ecx, esi
        call ext_00558A10
        add ebx, 0x16c
        push ebx
        mov ecx, esi
        call ext_00558A20
    L_47A7CC:
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x2c
        ret 4
    }
}

// [0x0047C9A0] sub_0047C9A0 (297 bytes)
extern "C" int mem_00925134;
extern "C" void ext_006A6E9E();
extern "C" void ext_0047C380();
extern "C" void ext_0041A920();

extern "C" __declspec(naked) void __fastcall fn_0047C9A0(void* self) {
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        push    ebp
        lea     ebp, [ecx + 30h]
        push    esi
        mov     esi, dword ptr [ebp + 4]
        cmp     esi, dword ptr [ebp + 8]
        push    edi
        mov     dword ptr [esp + 14h], ecx
        mov     byte ptr [esp + 12h], 0
        mov     byte ptr [esp + 13h], 0
        jbe     short L_47C9C8
        call    ebx
    L_47C9C8:
        mov     edi, dword ptr [ebp + 8]
        cmp     dword ptr [ebp + 4], edi
        jbe     short L_47C9D8
        call    ebx
        mov     ebx, dword ptr [mem_00925134]
    L_47C9D8:
        test    ebp, ebp
        je      short L_47C9E0
        cmp     ebp, ebp
        je      short L_47C9E8
    L_47C9E0:
        call    ebx
        mov     ebx, dword ptr [mem_00925134]
    L_47C9E8:
        cmp     esi, edi
        je      short L_47CA5C
        test    ebp, ebp
        jne     short L_47C9F2
        call    ebx
    L_47C9F2:
        cmp     esi, dword ptr [ebp + 8]
        jb      short L_47C9F9
        call    ebx
    L_47C9F9:
        mov     eax, dword ptr [esi]
        push    0
        push    0A32928h
        push    0A2E914h
        push    0
        push    eax
        call    ext_006A6E9E
        add     esp, 14h
        test    eax, eax
        je      short L_47CA4D
        mov     ecx, dword ptr [esp + 1Ch]
        cmp     dword ptr [eax + 168h], ecx
        jne     short L_47CA4D
        mov     ecx, dword ptr [eax + 180h]
        cmp     ecx, 6
        je      short L_47CA36
        cmp     ecx, 2
        je      short L_47CA36
        xor     ecx, ecx
        jmp     short L_47CA3B
    L_47CA36:
        mov     ecx, 1
    L_47CA3B:
        or      byte ptr [esp + 12h], cl
        cmp     dword ptr [eax + 15Ch], 0
        sete    dl
        or      byte ptr [esp + 13h], dl
    L_47CA4D:
        cmp     esi, dword ptr [ebp + 8]
        jb      short L_47CA54
        call    ebx
    L_47CA54:
        add     esi, 4
        jmp     L_47C9C8
    L_47CA5C:
        cmp     byte ptr [esp + 12h], 0
        je      short L_47CABF
        cmp     byte ptr [esp + 13h], 0
        jne     short L_47CABF
        mov     eax, dword ptr [esp + 1Ch]
        mov     ecx, dword ptr [esp + 14h]
        push    eax
        push    0
        push    1
        push    0
        push    0
        call    ext_0047C380
        test    eax, eax
        je      short L_47CABF
        push    0
        push    0A32928h
        push    0A2E914h
        push    0
        push    eax
        call    ext_006A6E9E
        mov     esi, eax
        add     esp, 14h
        test    esi, esi
        je      short L_47CABF
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx + 138h]
        push    0
        mov     ecx, esi
        call    eax
        lea     ecx, [esp + 1Ch]
        push    ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 20h], esi
        call    ext_0041A920
    L_47CABF:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4
    }
}

// [0x00473120] sub_00473120 (339 bytes)
extern "C" void ext_00472420();
extern "C" void ext_00472BA0();
extern "C" void ext_004FFEF0();
extern "C" void ext_004FFF60();
extern "C" void ext_00594750();
extern "C" void ext_00597060();
extern "C" void ext_00597470();
extern "C" void ext_00598A90();
extern "C" void ext_0059C770();
extern "C" void ext_0059D120();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_006622C0();

extern "C" __declspec(naked) void __fastcall fn_00473120(void* self, int edx_unused, int a1) {
    __asm {
        push    -1
        push    0x8a56c8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        cmp     dword ptr [esi + 0x30], 0
        push    edi
        jne     L_00473147
        call    ext_00472420
    L_00473147:
        mov     ecx, dword ptr [esi + 0x30]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x1d8]
        call    edx
        mov     ebx, eax
        mov     ecx, ebx
        mov     dword ptr [esp + 0x10], ebx
        call    ext_0065C640
        mov     ecx, dword ptr [esi + 0xcc]
        push    3
        mov     dword ptr [esp + 0x20], 0
        call    ext_0059C770
        mov     ecx, dword ptr [esi + 0xcc]
        push    6
        call    ext_0059C770
        mov     ecx, dword ptr [esi + 0xf8]
        add     ecx, 0x6c
        call    ext_006622C0
        mov     ecx, esi
        call    ext_00472BA0
        mov     ecx, dword ptr [esi + 0xcc]
        call    ext_00598A90
        mov     ecx, dword ptr [esi + 0xcc]
        call    ext_00597060
        cmp     byte ptr [esp + 0x24], 0
        mov     edi, dword ptr [esi + 0xcc]
        mov     ebp, dword ptr [edi + 0x270]
        je      L_004731de
        test    ebp, ebp
        je      L_004731d5
        cmp     byte ptr [ebp + 0x29], 0
        je      L_004731d5
        mov     ecx, ebp
        call    ext_004FFF60
        push    eax
        jmp     L_004731d7
    L_004731d5:
        push    0
    L_004731d7:
        mov     ecx, edi
        call    ext_00594750
    L_004731de:
        mov     ecx, dword ptr [esi + 0xcc]
        call    ext_0059D120
        test    ebp, ebp
        je      L_004731f9
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        mov     ecx, ebp
        call    ext_004FFEF0
    L_004731f9:
        mov     ecx, dword ptr [esi + 0xcc]
        call    ext_00597470
        mov     ecx, dword ptr [esi + 0x30]
        mov     dword ptr [esi + 0x108], 0
        mov     byte ptr [esi + 0x293], 1
        mov     byte ptr [esi + 0x290], 0
        mov     byte ptr [esi + 0x291], 0
        mov     byte ptr [esi + 0x292], 0
        mov     byte ptr [esi + 0x17c], 0
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x154]
        call    eax
        mov     edx, dword ptr [esi + 0x84]
        mov     eax, dword ptr [edx + 8]
        lea     ecx, [esi + 0x84]
        call    eax
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], 0xffffffff
        call    ext_0065C650
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     4
    }
}

// [0x0047BB50] sub_0047BB50 (390 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00427A60();
extern "C" void ext_004DA8F0();
extern "C" void ext_0050BE20();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0047BB50(void* self) {
    __asm {
        push    -1
        push    0x8839e5
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        mov     dword ptr [esp], 0
        cmp     byte ptr [esp + 0x54], 0
        je      L_47BB7F
        mov     ecx, dword ptr [esp + 0x4c]
        call    ext_0050BE20
    L_47BB7F:
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        add     esi, 0x24
        push    edi
        mov     edi, dword ptr [esi + 4]
        cmp     edi, dword ptr [esi + 8]
        jbe     L_47BB98
        call    dword ptr [mem_00925134]
    L_47BB98:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], edi
        jbe     L_47BBBB
        call    dword ptr [mem_00925134]
    L_47BBBB:
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], edi
        lea     ecx, [esp + 0x20]
    L_47BBCB:
        call    ext_00427A60
        mov     ebx, dword ptr [esp + 0x18]
        test    ebx, ebx
        je      L_47BBDE
        cmp     ebx, dword ptr [esp + 0x24]
        je      L_47BBE4
    L_47BBDE:
        call    dword ptr [mem_00925134]
    L_47BBE4:
        mov     ebp, dword ptr [esp + 0x1c]
        cmp     ebp, dword ptr [esp + 0x28]
        jae     L_47BCC3
        test    ebx, ebx
        jne     L_47BBFC
        call    dword ptr [mem_00925134]
    L_47BBFC:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47BC07
        call    dword ptr [mem_00925134]
    L_47BC07:
        mov     edi, dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x60]
        lea     eax, [edi + 4]
        push    ecx
        push    eax
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      L_47BCA8
        push    0x464
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 0x64], esi
        test    esi, esi
        mov     dword ptr [esp + 0x50], 0
        je      L_47BC6C
        push    0x928b5d
        lea     ecx, [esp + 0x30]
        call    dword ptr [mem_00924FE4]
        or      dword ptr [esp + 0x10], 1
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x54], 1
        call    ext_004DA8F0
        mov     esi, eax
        jmp     L_47BC6E
    L_47BC6C:
        xor     esi, esi
    L_47BC6E:
        test    byte ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x50], -1
        je      L_47BC8C
        and     dword ptr [esp + 0x10], -2
        lea     ecx, [esp + 0x2c]
        call    dword ptr [mem_00924FF4]
    L_47BC8C:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x54]
        push    edi
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [esp + 0x5c]
        lea     eax, [esp + 0x64]
        push    eax
        mov     dword ptr [esp + 0x68], esi
        call    ext_0041A920
    L_47BCA8:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47BCB3
        call    dword ptr [mem_00925134]
    L_47BCB3:
        add     ebp, 4
        mov     dword ptr [esp + 0x1c], ebp
        lea     ecx, [esp + 0x14]
        jmp     L_47BBCB
    L_47BCC3:
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret
    }
}

// [0x0047BE70] sub_0047BE70 (390 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00427A60();
extern "C" void ext_004E6940();
extern "C" void ext_0050BE20();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0047BE70(void* self) {
    __asm {
        push    -1
        push    0x8839e5
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        mov     dword ptr [esp], 0
        cmp     byte ptr [esp + 0x54], 0
        je      L_47BE9F
        mov     ecx, dword ptr [esp + 0x4c]
        call    ext_0050BE20
    L_47BE9F:
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        add     esi, 0x24
        push    edi
        mov     edi, dword ptr [esi + 4]
        cmp     edi, dword ptr [esi + 8]
        jbe     L_47BEB8
        call    dword ptr [mem_00925134]
    L_47BEB8:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], edi
        jbe     L_47BEDB
        call    dword ptr [mem_00925134]
    L_47BEDB:
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], edi
        lea     ecx, [esp + 0x20]
    L_47BEEB:
        call    ext_00427A60
        mov     ebx, dword ptr [esp + 0x18]
        test    ebx, ebx
        je      L_47BEFE
        cmp     ebx, dword ptr [esp + 0x24]
        je      L_47BF04
    L_47BEFE:
        call    dword ptr [mem_00925134]
    L_47BF04:
        mov     ebp, dword ptr [esp + 0x1c]
        cmp     ebp, dword ptr [esp + 0x28]
        jae     L_47BFE3
        test    ebx, ebx
        jne     L_47BF1C
        call    dword ptr [mem_00925134]
    L_47BF1C:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47BF27
        call    dword ptr [mem_00925134]
    L_47BF27:
        mov     edi, dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x60]
        lea     eax, [edi + 4]
        push    ecx
        push    eax
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      L_47BFC8
        push    0xb7c
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 0x64], esi
        test    esi, esi
        mov     dword ptr [esp + 0x50], 0
        je      L_47BF8C
        push    0x928b5d
        lea     ecx, [esp + 0x30]
        call    dword ptr [mem_00924FE4]
        or      dword ptr [esp + 0x10], 1
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x54], 1
        call    ext_004E6940
        mov     esi, eax
        jmp     L_47BF8E
    L_47BF8C:
        xor     esi, esi
    L_47BF8E:
        test    byte ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x50], -1
        je      L_47BFAC
        and     dword ptr [esp + 0x10], -2
        lea     ecx, [esp + 0x2c]
        call    dword ptr [mem_00924FF4]
    L_47BFAC:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x54]
        push    edi
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [esp + 0x5c]
        lea     eax, [esp + 0x64]
        push    eax
        mov     dword ptr [esp + 0x68], esi
        call    ext_0041A920
    L_47BFC8:
        cmp     ebp, dword ptr [ebx + 8]
        jb      L_47BFD3
        call    dword ptr [mem_00925134]
    L_47BFD3:
        add     ebp, 4
        mov     dword ptr [esp + 0x1c], ebp
        lea     ecx, [esp + 0x14]
        jmp     L_47BEEB
    L_47BFE3:
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret
    }
}

extern "C" void ext_00405FB0();
extern "C" void ext_00408090();
extern "C" void ext_00477500();
extern "C" void ext_00479A90();
extern "C" void ext_004959E0();
extern "C" void ext_004A59A0();

// [0x00479AC0] sub_00479AC0 (437 bytes)
extern "C" __declspec(naked) void __fastcall fn_00479AC0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        fld dword ptr [eax]
        push ebx
        push esi
        fstp dword ptr [esp + 0x18]
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        push edi
        jne l479_a
        xor edi, edi
        jmp l479_b
l479_a:
        mov edi, dword ptr [esi + 0xc]
        sub edi, ecx
        sar edi, 2
l479_b:
        mov ebx, dword ptr [esp + 0x18]
        test ebx, ebx
        je l479_early
        test ecx, ecx
        jne l479_c
        xor eax, eax
        jmp l479_d
l479_c:
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 2
l479_d:
        mov edx, 0x3fffffff
        sub edx, eax
        cmp edx, ebx
        jae l479_e
        call ext_00405FB0
l479_e:
        test ecx, ecx
        jne l479_f
        xor eax, eax
        jmp l479_g
l479_f:
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 2
l479_g:
        add eax, ebx
        cmp edi, eax
        push ebp
        jae l479_big
        mov eax, edi
        shr eax, 1
        mov edx, 0x3fffffff
        sub edx, eax
        cmp edx, edi
        jae l479_h
        xor edi, edi
        jmp l479_i
l479_h:
        add edi, eax
l479_i:
        test ecx, ecx
        jne l479_j
        xor eax, eax
        jmp l479_k
l479_j:
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 2
l479_k:
        add eax, ebx
        cmp edi, eax
        jae l479_l
        test ecx, ecx
        jne l479_m
        xor edi, edi
        jmp l479_n
l479_m:
        mov edi, dword ptr [esi + 0x8]
        sub edi, ecx
        sar edi, 2
l479_n:
        add edi, ebx
l479_l:
        push 0
        push edi
        call ext_004A59A0
        mov ecx, dword ptr [esi + 0x4]
        add esp, 0x8
        mov ebp, eax
        mov eax, dword ptr [esp + 0x18]
        push ebp
        push eax
        push ecx
        mov ecx, esi
        call ext_004959E0
        lea edx, [esp + 0x20]
        push edx
        push ebx
        push eax
        mov ecx, esi
        call ext_00479A90
        mov ecx, dword ptr [esp + 0x18]
        push eax
        mov eax, dword ptr [esi + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_004959E0
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        jne l479_o
        xor ecx, ecx
        jmp l479_p
l479_o:
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 2
l479_p:
        add ebx, ecx
        test eax, eax
        je l479_q
        push eax
        call ext_006A5C5C
        add esp, 4
l479_q:
        lea edx, [ebp + 4*edi]
        lea eax, [ebp + 4*ebx]
        mov dword ptr [esi + 0x4], ebp
        pop ebp
        pop edi
        mov dword ptr [esi + 0xc], edx
        mov dword ptr [esi + 0x8], eax
        pop esi
        pop ebx
        ret 0x10
l479_big:
        mov ebp, dword ptr [esi + 0x8]
        mov edi, dword ptr [esp + 0x18]
        mov ecx, ebp
        sub ecx, edi
        sar ecx, 2
        lea eax, [4*ebx]
        cmp ecx, ebx
        mov dword ptr [esp + 0x1c], eax
        mov ecx, esi
        jae l479_r
        add eax, edi
        push eax
        push ebp
        push edi
        call ext_004959E0
        mov eax, dword ptr [esi + 0x8]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        lea edx, [esp + 0x20]
        push edx
        sub ebx, ecx
        push ebx
        push eax
        mov ecx, esi
        call ext_00479A90
        mov eax, dword ptr [esp + 0x1c]
        add dword ptr [esi + 0x8], eax
        mov esi, dword ptr [esi + 0x8]
        lea edx, [esp + 0x20]
        push edx
        sub esi, eax
        push esi
        push edi
        call ext_00477500
        add esp, 0xc
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret 0x10
l479_r:
        push ebp
        mov ebx, ebp
        sub ebx, eax
        push ebp
        push ebx
        call ext_004959E0
        push ebp
        push ebx
        push edi
        mov dword ptr [esi + 0x8], eax
        call ext_00408090
        mov ecx, dword ptr [esp + 0x28]
        lea eax, [esp + 0x2c]
        push eax
        add ecx, edi
        push ecx
        push edi
        call ext_00477500
        add esp, 0x18
        pop ebp
l479_early:
        pop edi
        pop esi
        pop ebx
        ret 0x10
    }
}

// [0x0047C190] sub_0047C190 (490 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_00673C20();
extern "C" int mem_00924FE0;
extern "C" int mem_00925134;
extern "C" int mem_009251E0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void __fastcall fn_0047C190(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x883a0a
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x70
        mov eax, dword ptr [esp + 0x80]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE0]
        xor eax, eax
        mov dword ptr [esp + 0x88], eax
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], eax
        mov eax, dword ptr [esi + 0x48]
        mov eax, dword ptr [eax]
        add esi, 0x44
        mov edi, esi
        mov ebp, eax
        mov byte ptr [esp + 0x88], 0x1
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], ebp
    LOOP_TOP:
        test edi, edi
        mov ebx, dword ptr [esi + 0x4]
        je LOOP_A
        cmp edi, esi
        je LOOP_B
    LOOP_A:
        call dword ptr [mem_00925134]
    LOOP_B:
        cmp ebp, ebx
        je LOOP_DONE
        test edi, edi
        jne LOOP_C
        call dword ptr [mem_00925134]
    LOOP_C:
        cmp ebp, dword ptr [edi + 0x4]
        jne LOOP_D
        call dword ptr [mem_00925134]
    LOOP_D:
        add ebp, 0xc
        push ebp
        lea ecx, [esp + 0x1c]
        call ext_0040ECB0
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x10]
        jmp LOOP_TOP
    LOOP_DONE:
        mov edi, 0x1
    LOOP_PUSH:
        push edi
        push 0x92e3b4
        lea ecx, [esp + 0x68]
        push 0x1e
        push ecx
        call dword ptr [mem_009251E0]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x3c]
        push eax
        lea ecx, [esp + 0x5c]
        push ecx
        call dword ptr [mem_00924ECC]
        add esp, 0x1c
        mov ecx, dword ptr [esp + 0x90]
        push eax
        mov byte ptr [esp + 0x8c], 0x2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0x88], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        mov ebx, dword ptr [mem_00925134]
        add edi, 0x1
        cmp ecx, eax
        mov dword ptr [esp + 0x10], eax
        jbe CMP1
        call ebx
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
    CMP1:
        cmp ecx, eax
        mov ebp, eax
        jbe CMP2
        call ebx
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
    CMP2:
        cmp ecx, eax
        mov esi, ecx
        jbe CMP3
        call ebx
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
    CMP3:
        cmp esi, ebp
        je SCAN_END
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    SCAN_LOOP:
        mov edx, dword ptr [esp + 0x90]
        push edx
        push esi
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        jne SCAN_FOUND
        add esi, 0x1c
        cmp esi, ebp
        jne SCAN_LOOP
    SCAN_FOUND:
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
    SCAN_END:
        cmp esi, dword ptr [esp + 0x10]
        jne LOOP_PUSH
        xor ebx, ebx
        cmp ecx, ebx
        mov byte ptr [esp + 0x88], 0x0
        je CLEANUP
        cmp ecx, eax
        mov edi, eax
        mov esi, ecx
        je FREE_DONE
    FREE_LOOP:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, edi
        jne FREE_LOOP
        mov ecx, dword ptr [esp + 0x1c]
    FREE_DONE:
        push ecx
        call ext_006A5C5C
        add esp, 0x4
    CLEANUP:
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x88], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x80]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x7c
        ret 0x4
    }
}

extern "C" void ext_0046FFE0();
extern "C" void ext_00470030();
extern "C" void ext_004727D0();
extern "C" void ext_006A6DD2();
extern "C" int mem_0088F4C2;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00928ECC;
extern "C" int mem_00928ED8;
extern "C" int mem_0092C530;
extern "C" int mem_009CDF20;

// [0x00473C70] sub_00473C70 (508 bytes)
extern "C" __declspec(naked) void __fastcall fn_00473C70(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0088F4C2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x8], 0x4924923
        jb L_00473ced
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
    L_00473ced:
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
        call ext_004727D0
        mov ebp, eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, 0x1
        add dword ptr [edi + 0x8], ebx
        cmp esi, eax
        jne L_00473d27
        mov dword ptr [eax + 0x4], ebp
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], ebp
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x8], ebp
        jmp L_00473d49
    L_00473d27:
        cmp byte ptr [esp + 0x68], 0x0
        je L_00473d3b
        mov dword ptr [esi], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        jne L_00473d49
        mov dword ptr [eax], ebp
        jmp L_00473d49
    L_00473d3b:
        mov dword ptr [esi + 0x8], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax + 0x8]
        jne L_00473d49
        mov dword ptr [eax + 0x8], ebp
    L_00473d49:
        mov edx, dword ptr [ebp + 0x4]
        cmp byte ptr [edx + 0x44], 0x0
        lea eax, [ebp + 0x4]
        mov esi, ebp
        jne L_00473e45
        jmp L_00473d60
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_00473d60:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        cmp ecx, dword ptr [edx]
        jne L_00473dba
        mov edx, dword ptr [edx + 0x8]
        cmp byte ptr [edx + 0x44], 0x0
        jne L_00473d8b
        mov byte ptr [ecx + 0x44], bl
        mov byte ptr [edx + 0x44], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x44], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_00473e35
    L_00473d8b:
        cmp esi, dword ptr [ecx + 0x8]
        jne L_00473d9a
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_0046FFE0
    L_00473d9a:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x44], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x44], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, edi
        call ext_00470030
        jmp L_00473e35
    L_00473dba:
        mov edx, dword ptr [edx]
        cmp byte ptr [edx + 0x44], 0x0
        jne L_00473dd8
        mov byte ptr [ecx + 0x44], bl
        mov byte ptr [edx + 0x44], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x44], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_00473e35
    L_00473dd8:
        cmp esi, dword ptr [ecx]
        jne L_00473de6
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_00470030
    L_00473de6:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x44], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x44], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + 0x45], 0x0
        jne L_00473e0f
        mov dword ptr [edx + 0x4], eax
    L_00473e0f:
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edx + 0x4]
        jne L_00473e22
        mov dword ptr [edx + 0x4], ecx
        jmp L_00473e30
    L_00473e22:
        mov edx, dword ptr [eax + 0x4]
        cmp eax, dword ptr [edx]
        jne L_00473e2d
        mov dword ptr [edx], ecx
        jmp L_00473e30
    L_00473e2d:
        mov dword ptr [edx + 0x8], ecx
    L_00473e30:
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x4], ecx
    L_00473e35:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x44], 0x0
        lea eax, [esi + 0x4]
        je L_00473d60
    L_00473e45:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [esp + 0x54]
        mov byte ptr [eax + 0x44], bl
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

extern "C" void ext_0046FF90();
extern "C" void ext_00475A40();
extern "C" void ext_004EF730();

// [0x00475E50] sub_00475E50 (508 bytes)
extern "C" __declspec(naked) void __fastcall fn_00475E50(void* self) {
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
        jb L_00475ecd
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
    L_00475ecd:
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
        call ext_00475A40
        mov ebp, eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, 0x1
        add dword ptr [edi + 0x8], ebx
        cmp esi, eax
        jne L_00475f07
        mov dword ptr [eax + 0x4], ebp
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], ebp
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x8], ebp
        jmp L_00475f29
    L_00475f07:
        cmp byte ptr [esp + 0x68], 0x0
        je L_00475f1b
        mov dword ptr [esi], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        jne L_00475f29
        mov dword ptr [eax], ebp
        jmp L_00475f29
    L_00475f1b:
        mov dword ptr [esi + 0x8], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax + 0x8]
        jne L_00475f29
        mov dword ptr [eax + 0x8], ebp
    L_00475f29:
        mov edx, dword ptr [ebp + 0x4]
        cmp byte ptr [edx + 0x38], 0x0
        lea eax, [ebp + 0x4]
        mov esi, ebp
        jne L_00476025
        jmp L_00475f40
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_00475f40:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        cmp ecx, dword ptr [edx]
        jne L_00475f9a
        mov edx, dword ptr [edx + 0x8]
        cmp byte ptr [edx + 0x38], 0x0
        jne L_00475f6b
        mov byte ptr [ecx + 0x38], bl
        mov byte ptr [edx + 0x38], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x38], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_00476015
    L_00475f6b:
        cmp esi, dword ptr [ecx + 0x8]
        jne L_00475f7a
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_0046FF90
    L_00475f7a:
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
        jmp L_00476015
    L_00475f9a:
        mov edx, dword ptr [edx]
        cmp byte ptr [edx + 0x38], 0x0
        jne L_00475fb8
        mov byte ptr [ecx + 0x38], bl
        mov byte ptr [edx + 0x38], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x38], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_00476015
    L_00475fb8:
        cmp esi, dword ptr [ecx]
        jne L_00475fc6
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_004EF730
    L_00475fc6:
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
        jne L_00475fef
        mov dword ptr [edx + 0x4], eax
    L_00475fef:
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edx + 0x4]
        jne L_00476002
        mov dword ptr [edx + 0x4], ecx
        jmp L_00476010
    L_00476002:
        mov edx, dword ptr [eax + 0x4]
        cmp eax, dword ptr [edx]
        jne L_0047600d
        mov dword ptr [edx], ecx
        jmp L_00476010
    L_0047600d:
        mov dword ptr [edx + 0x8], ecx
    L_00476010:
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x4], ecx
    L_00476015:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x38], 0x0
        lea eax, [esi + 0x4]
        je L_00475f40
    L_00476025:
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

extern "C" void ext_00476EC0();
extern "C" void ext_0059F520();
extern "C" void ext_006244E0();

// [0x00478210] sub_00478210 (508 bytes)
extern "C" __declspec(naked) void __fastcall fn_00478210(void* self) {
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
        jb L_0047828d
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
    L_0047828d:
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
        call ext_0059F520
        mov ebp, eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, 0x1
        add dword ptr [edi + 0x8], ebx
        cmp esi, eax
        jne L_004782c7
        mov dword ptr [eax + 0x4], ebp
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], ebp
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x8], ebp
        jmp L_004782e9
    L_004782c7:
        cmp byte ptr [esp + 0x68], 0x0
        je L_004782db
        mov dword ptr [esi], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        jne L_004782e9
        mov dword ptr [eax], ebp
        jmp L_004782e9
    L_004782db:
        mov dword ptr [esi + 0x8], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax + 0x8]
        jne L_004782e9
        mov dword ptr [eax + 0x8], ebp
    L_004782e9:
        mov edx, dword ptr [ebp + 0x4]
        cmp byte ptr [edx + 0x2c], 0x0
        lea eax, [ebp + 0x4]
        mov esi, ebp
        jne L_004783e5
        jmp L_00478300
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_00478300:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        cmp ecx, dword ptr [edx]
        jne L_0047835a
        mov edx, dword ptr [edx + 0x8]
        cmp byte ptr [edx + 0x2c], 0x0
        jne L_0047832b
        mov byte ptr [ecx + 0x2c], bl
        mov byte ptr [edx + 0x2c], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x2c], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_004783d5
    L_0047832b:
        cmp esi, dword ptr [ecx + 0x8]
        jne L_0047833a
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_00476EC0
    L_0047833a:
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
        jmp L_004783d5
    L_0047835a:
        mov edx, dword ptr [edx]
        cmp byte ptr [edx + 0x2c], 0x0
        jne L_00478378
        mov byte ptr [ecx + 0x2c], bl
        mov byte ptr [edx + 0x2c], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x2c], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_004783d5
    L_00478378:
        cmp esi, dword ptr [ecx]
        jne L_00478386
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_006244E0
    L_00478386:
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
        jne L_004783af
        mov dword ptr [edx + 0x4], eax
    L_004783af:
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edx + 0x4]
        jne L_004783c2
        mov dword ptr [edx + 0x4], ecx
        jmp L_004783d0
    L_004783c2:
        mov edx, dword ptr [eax + 0x4]
        cmp eax, dword ptr [edx]
        jne L_004783cd
        mov dword ptr [edx], ecx
        jmp L_004783d0
    L_004783cd:
        mov dword ptr [edx + 0x8], ecx
    L_004783d0:
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x4], ecx
    L_004783d5:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x2c], 0x0
        lea eax, [esi + 0x4]
        je L_00478300
    L_004783e5:
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

extern "C" void ext_00414510();
extern "C" void ext_00470090();
extern "C" void ext_00470120();
extern "C" void ext_00473C70();
extern "C" void ext_00474540();
extern "C" void ext_00666980();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

// [0x00474A00] sub_00474A00 (518 bytes)
extern "C" __declspec(naked) void __fastcall fn_00474A00(void* self) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x8], 0x0
        push edi
        jne L_474a2e
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esp + 0x18]
        push eax
        push ecx
        push 0x1
        push edi
        mov ecx, esi
        call ext_00473C70
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_474a2e:
        mov edx, dword ptr [esi + 0x4]
        mov edi, dword ptr [edx]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
        test ebp, ebp
        je L_474a40
        cmp ebp, esi
        je L_474a46
    L_474a40:
        call dword ptr [mem_00925134]
    L_474a46:
        push ebx
        mov ebx, dword ptr [esp + 0x28]
        cmp ebx, edi
        jne L_474a85
        mov edi, dword ptr [esp + 0x2c]
        lea eax, [ebx + 0xc]
        push eax
        push edi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_474bdf
        push edi
        mov edi, dword ptr [esp + 0x24]
        push ebx
        push 0x1
        push edi
        mov ecx, esi
        call ext_00473C70
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_474a85:
        test ebp, ebp
        mov edi, dword ptr [esi + 0x4]
        je L_474a90
        cmp ebp, esi
        je L_474a96
    L_474a90:
        call dword ptr [mem_00925134]
    L_474a96:
        cmp ebx, edi
        mov edi, dword ptr [esp + 0x2c]
        jne L_474adc
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx + 0x8]
        add eax, 0xc
        push edi
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_474bdf
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x24]
        push eax
        push 0x0
        push edi
        mov ecx, esi
        call ext_00473C70
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_474adc:
        lea eax, [ebx + 0xc]
        push eax
        push edi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_474b51
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x24], ebp
        mov dword ptr [esp + 0x28], ebx
        call ext_00470090
        mov ecx, dword ptr [esp + 0x28]
        add ecx, 0xc
        push edi
        push ecx
        mov ecx, esi
        call ext_00414510
        test al, al
        je L_474b51
        mov eax, dword ptr [esp + 0x28]
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x45], 0x0
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ecx, esi
        je L_474b3c
        push eax
        push 0x0
        push edi
        call ext_00473C70
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_474b3c:
        push ebx
        push 0x1
        push edi
        call ext_00473C70
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_474b51:
        lea eax, [ebx + 0xc]
        push edi
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_474bdf
        mov eax, dword ptr [esi + 0x4]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x24], ebp
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x10], esi
        call ext_00470120
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x28]
        call ext_00666980
        test al, al
        mov ebp, dword ptr [esp + 0x28]
        jne L_474ba5
        lea edx, [ebp + 0xc]
        push edx
        push edi
        mov ecx, esi
        call ext_00414510
        test al, al
        je L_474bdf
    L_474ba5:
        mov eax, dword ptr [ebx + 0x8]
        cmp byte ptr [eax + 0x45], 0x0
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ecx, esi
        je L_474bca
        push ebx
        push 0x0
        push edi
        call ext_00473C70
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_474bca:
        push ebp
        push 0x1
        push edi
        call ext_00473C70
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_474bdf:
        push edi
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_00474540
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x20]
        pop ebx
        pop ebp
        mov dword ptr [ecx], edx
        mov eax, dword ptr [eax + 0x4]
        pop edi
        mov dword ptr [ecx + 0x4], eax
        mov eax, ecx
        pop esi
        add esp, 0xc
        ret 0x10
    }
}

extern "C" void ext_00414510();
extern "C" void ext_00475E50();
extern "C" void ext_00476050();
extern "C" void ext_00666980();
extern "C" void ext_00666C00();
extern "C" void ext_00667030();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

// [0x00476150] sub_00476150 (518 bytes)
extern "C" __declspec(naked) void __fastcall fn_00476150(void* self) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x8], 0x0
        push edi
        jne L_47617e
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esp + 0x18]
        push eax
        push ecx
        push 0x1
        push edi
        mov ecx, esi
        call ext_00475E50
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_47617e:
        mov edx, dword ptr [esi + 0x4]
        mov edi, dword ptr [edx]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
        test ebp, ebp
        je L_476190
        cmp ebp, esi
        je L_476196
    L_476190:
        call dword ptr [mem_00925134]
    L_476196:
        push ebx
        mov ebx, dword ptr [esp + 0x28]
        cmp ebx, edi
        jne L_4761d5
        mov edi, dword ptr [esp + 0x2c]
        lea eax, [ebx + 0xc]
        push eax
        push edi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_47632f
        push edi
        mov edi, dword ptr [esp + 0x24]
        push ebx
        push 0x1
        push edi
        mov ecx, esi
        call ext_00475E50
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_4761d5:
        test ebp, ebp
        mov edi, dword ptr [esi + 0x4]
        je L_4761e0
        cmp ebp, esi
        je L_4761e6
    L_4761e0:
        call dword ptr [mem_00925134]
    L_4761e6:
        cmp ebx, edi
        mov edi, dword ptr [esp + 0x2c]
        jne L_47622c
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx + 0x8]
        add eax, 0xc
        push edi
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_47632f
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x24]
        push eax
        push 0x0
        push edi
        mov ecx, esi
        call ext_00475E50
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_47622c:
        lea eax, [ebx + 0xc]
        push eax
        push edi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_4762a1
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x24], ebp
        mov dword ptr [esp + 0x28], ebx
        call ext_00666C00
        mov ecx, dword ptr [esp + 0x28]
        add ecx, 0xc
        push edi
        push ecx
        mov ecx, esi
        call ext_00414510
        test al, al
        je L_4762a1
        mov eax, dword ptr [esp + 0x28]
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x39], 0x0
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ecx, esi
        je L_47628c
        push eax
        push 0x0
        push edi
        call ext_00475E50
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_47628c:
        push ebx
        push 0x1
        push edi
        call ext_00475E50
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_4762a1:
        lea eax, [ebx + 0xc]
        push edi
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_47632f
        mov eax, dword ptr [esi + 0x4]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x24], ebp
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x10], esi
        call ext_00667030
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x28]
        call ext_00666980
        test al, al
        mov ebp, dword ptr [esp + 0x28]
        jne L_4762f5
        lea edx, [ebp + 0xc]
        push edx
        push edi
        mov ecx, esi
        call ext_00414510
        test al, al
        je L_47632f
    L_4762f5:
        mov eax, dword ptr [ebx + 0x8]
        cmp byte ptr [eax + 0x39], 0x0
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ecx, esi
        je L_47631a
        push ebx
        push 0x0
        push edi
        call ext_00475E50
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_47631a:
        push ebp
        push 0x1
        push edi
        call ext_00475E50
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10
    L_47632f:
        push edi
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_00476050
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x20]
        pop ebx
        pop ebp
        mov dword ptr [ecx], edx
        mov eax, dword ptr [eax + 0x4]
        pop edi
        mov dword ptr [ecx + 0x4], eax
        mov eax, ecx
        pop esi
        add esp, 0xc
        ret 0x10
    }
}
