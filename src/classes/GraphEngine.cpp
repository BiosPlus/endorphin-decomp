// Decompiled translation unit: src/classes/GraphEngine.cpp

extern "C" void ext_0048FC70();
extern "C" void ext_004B10A0();
extern "C" void ext_004B10D0();
extern "C" double __cdecl ext_006A6E92(double x);
extern "C" int mem_0092520C;
extern "C" void ext_00492210();
extern "C" float __fastcall ext_0046F860(void* self);
extern "C" void* mem_00AD89B8;

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

// [0x00490560] GraphEngine::vfunc_0 (220 bytes)
extern "C" void __fastcall fn_00490560(void* self, int edx_unused, float* arg) {
    char* s = (char*)self;
    char* eax = *(char**)(s + 0x60);
    if (eax == 0 || *(eax + 0x18) == 0) {
        return;
    }
    float zero = 0.0f;
    float a0 = arg[0];
    float* p = (a0 < 0.0f) ? &zero : &a0;
    int v0 = (int)(*p);
    float f1 = arg[1];
    float a1 = (float)((double (__cdecl*)(double))mem_0092520C)((double)f1);
    int v1 = (int)a1;
    *(int*)(s + 0x38) = (int)((double)v0 / *(double*)(s + 0x50));
    *(int*)(s + 0x3c) = (int)((double)v1 / *(double*)(s + 0x50));
    ((void (__thiscall*)(void*, float))ext_004B10A0)(*(void**)(s + 0x60), (float)v0);
    ((void (__thiscall*)(void*, float))ext_004B10D0)(*(void**)(s + 0x60), (float)v1);
    ((void (__thiscall*)(void*, int))ext_0048FC70)(s, 0);
    void* obj = *(void**)(s + 0x14);
    if (obj != 0) {
        unsigned char val = *(unsigned char*)(*(char**)(s + 0x60) + 0x19);
        (*(void (__thiscall**)(void*, int))(*(int*)obj + 4))(obj, (int)val);
    }
}

// [0x00492350] GraphEngine::vfunc_0_off_C (78 bytes)
extern "C" void __fastcall fn_00492350(void* self) {
    char* s = (char*)self;
    char* eax = *(char**)(s + 0x54);
    if (eax != 0 && *(eax + 0x18) != 0) {
        ((void (__thiscall*)(void*))ext_00492210)(s - 0xc);
        void* ecx = mem_00AD89B8;
        if (ecx != 0) {
            char* a = *(char**)((char*)ecx + 0xf8);
            volatile float temp = *(float*)(a + 0x138);
            *(double*)(s + 0x44) = (double)temp / ext_0046F860(ecx);
        }
    }
}
