// Decompiled translation unit: src/classes/GWCHotKeyPropertyValue.cpp

// [0x006B3CC0] GWCHotKeyPropertyValue::vfunc_5 (93 bytes)
extern "C" void __cdecl ext_006A5C5C(void* p);
extern "C" void* __cdecl ext_006A5C62(int n);

extern "C" void __fastcall fn_006B3CC0(void* self, int edx_unused, int a1, unsigned char a2) {
    unsigned char* esi = (unsigned char*)self;
    if (esi[0x34] == 1 && *(int*)(esi + 0x4) == 0x12c) {
        ext_006A5C5C(*(void**)(esi + 0x40));
    }
    unsigned char al = a2;
    esi[0x34] = al;
    if (al == 0) {
        if (*(int*)(esi + 0x4) == 0x12c) {
            *(int*)(esi + 0x40) = a1;
        }
    } else {
        if (*(int*)(esi + 0x4) == 0x12c) {
            void* p = ext_006A5C62(4);
            *(void**)(esi + 0x40) = p;
            *(int*)p = 0;
        }
    }
}
