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
