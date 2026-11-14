// Decompiled translation unit: src/classes/EffectorWithModes.cpp

// [0x0063D580] EffectorWithModes::vfunc_33 (68 bytes)
extern "C" void ext_0063D4A0();

extern "C" void __fastcall fn_0063D580(void* self) {
    unsigned char* p = static_cast<unsigned char*>(self);
    reinterpret_cast<void (__fastcall*)(void*)>(ext_0063D4A0)(self);
    void* obj = *reinterpret_cast<void**>(p + 0x04);
    if (p[0x5c] != 0) {
        double d = static_cast<double>(*reinterpret_cast<float*>(p + 0xa8));
        int v = *reinterpret_cast<int*>(p + 0x34);
        void** vt = *reinterpret_cast<void***>(obj);
        reinterpret_cast<void (__thiscall*)(void*, int, double)>(vt[3])(obj, v, d);
    } else {
        double d = 0.0;
        int v = *reinterpret_cast<int*>(p + 0x34);
        void** vt = *reinterpret_cast<void***>(obj);
        reinterpret_cast<void (__thiscall*)(void*, int, double)>(vt[3])(obj, v, d);
    }
    obj = *reinterpret_cast<void**>(p + 0x04);
    void** vt = *reinterpret_cast<void***>(obj);
    reinterpret_cast<void (__fastcall*)(void*)>(vt[0])(obj);
}
