// Decompiled translation unit: src/leaf/decompiled_590000.cpp

// [0x005940D0] sub_005940D0 (15 bytes)
extern "C" void ext_006425D0();
extern "C" int __fastcall fn_005940D0(void* self) {
    typedef int (__fastcall *Callee)(void*);
    void* inner = *(void**)((char*)self + 0xf8);
    return ((Callee)ext_006425D0)(inner) - 1;
}
