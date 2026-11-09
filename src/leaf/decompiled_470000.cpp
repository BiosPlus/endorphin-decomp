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
