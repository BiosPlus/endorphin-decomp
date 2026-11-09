// Decompiled translation unit: src/leaf/decompiled_590000.cpp

// [0x005940D0] sub_005940D0 (15 bytes)
extern "C" void ext_006425D0();
extern "C" int __fastcall fn_005940D0(void* self) {
    typedef int (__fastcall *Callee)(void*);
    void* inner = *(void**)((char*)self + 0xf8);
    return ((Callee)ext_006425D0)(inner) - 1;
}

// [0x0059AE20] sub_0059AE20 (19 bytes)
extern "C" void ext_0041A920();
extern "C" void __fastcall fn_0059AE20(void* self, int edx_unused, int a1) {
    typedef void (__fastcall *Callee)(void*, int, int*);
    ((Callee)ext_0041A920)((char*)self + 0x2fc, edx_unused, &a1);
}

// [0x00599F10] sub_00599F10 (21 bytes)
extern "C" void ext_00599060();
extern "C" int __fastcall fn_00599F10(void* self, int edx_unused, int a1) {
    typedef int* (__fastcall *Callee)(void*, int, int*);
    return *((Callee)ext_00599060)((char*)self + 0x2cc, edx_unused, &a1);
}
