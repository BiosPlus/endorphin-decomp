// Decompiled translation unit: src/Properties/TestControl.cpp

extern "C" int mem_00925134;

// [0x004F0590] Properties::TestControl::vfunc_6 (36 bytes)
extern "C" void* __fastcall fn_004F0590(void* self) {
    unsigned char* p = (unsigned char*)self;
    if (*(int*)(p + 0x24) > 0 && *(int*)(p + 0x20) != 0) {
        int* eax = *(int**)(p + 0x1c);
        int esi = *(int*)eax;
        if (esi == (int)eax) {
            ((void (__cdecl*)())mem_00925134)();
        }
        return (void*)(esi + 8);
    }
    return 0;
}
