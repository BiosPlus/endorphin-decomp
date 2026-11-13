// Decompiled translation unit: src/classes/GraphEngine.cpp

extern "C" void ext_0048FC70();
extern "C" double __cdecl ext_006A6E92(double x);
extern "C" int mem_0092520C;

// [0x004904F0] GraphEngine::vfunc_0_off_4 (111 bytes)
extern "C" void __fastcall fn_004904F0(void* self) {
    char* s = (char*)self;
    char* edi = *(char**)(s + 0x5c);
    if (edi == 0) {
        return;
    }
    *(s + 0x44) = 0;
    *(int*)(s + 0x34) = (int)ext_006A6E92(*(float*)(edi + 0x1c) / *(double*)(s + 0x4c));
    float f = *(float*)(edi + 0x20);
    *(int*)(s + 0x38) = (int)((double (__cdecl*)(double))mem_0092520C)(f / *(double*)(s + 0x4c));
    ((void (__thiscall*)(void*, int))ext_0048FC70)(s - 4, 0);
    void* obj = *(void**)(s + 0x10);
    if (obj != 0) {
        unsigned char val = *(unsigned char*)(*(char**)(s + 0x5c) + 0x19);
        (*(void (__thiscall**)(void*, int))(*(int*)obj + 4))(obj, (int)val);
    }
}
