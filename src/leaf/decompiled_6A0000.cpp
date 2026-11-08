// Decompiled translation unit: src/leaf/decompiled_6A0000.cpp

// [0x006AD920] sub_006AD920 (18 bytes)
extern "C" void ext_0053A700();

typedef void (__fastcall *SetterFn006AD920)(void* self, int edx_unused, void* a1);

extern "C" void __fastcall fn_006AD920(char* self, int edx_unused, int a1) {
    *(int*)(self + 0x30) = a1;
    return ((SetterFn006AD920)ext_0053A700)((void*)a1, edx_unused, (void*)self);
}
