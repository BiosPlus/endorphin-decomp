// Decompiled translation unit: src/Properties/PropertiesControl.cpp

extern "C" void* __stdcall ext_006A89B0(void*);
extern "C" void ext_0041CBD0();

struct Target_0041CBD0 {
    void method(void*);
};
typedef void (Target_0041CBD0::*TargetMethod_0041CBD0)(void*);

// [0x0041CFE0] Properties::PropertiesControl::vfunc_85 (33 bytes)
extern "C" void __fastcall fn_0041CFE0(void* self, int edx_unused, void* arg) {
    void* res = ext_006A89B0(arg);
    if (res) {
        Target_0041CBD0* t = *(Target_0041CBD0**)((char*)self + 0x1a0);
        TargetMethod_0041CBD0 m;
        *(void**)&m = (void*)ext_0041CBD0;
        (t->*m)(res);
    }
}
