// Decompiled translation unit: src/classes/VMCSEngine.cpp

struct Inner {
    void** vtbl;
};

struct Mid {
    char pad[0x0c];
    Inner* p;
};

struct Outer {
    char pad[0x18];
    Mid* p;
};

typedef void (__fastcall* Fn_AC)(Inner*);

// [0x00468690] VMCSEngine::vfunc_1 (16 bytes)
extern "C" void __fastcall fn_00468690(Outer* self) {
    Mid* m = self->p;
    Inner* i = m->p;
    Fn_AC f = (Fn_AC)i->vtbl[0xac / 4];
    f(i);
}
