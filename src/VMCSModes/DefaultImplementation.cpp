// Decompiled translation unit: src/VMCSModes/DefaultImplementation.cpp

struct Inner_4F9E50 {
    void** vtbl;
};

struct Mid_4F9E50 {
    char pad[0x34];
    Inner_4F9E50* c;
};

struct Mid2_4F9E50 {
    char pad[0x14];
    Mid_4F9E50* b;
};

struct Outer_4F9E50 {
    char pad[0x08];
    Mid2_4F9E50* a;
};

typedef void (__fastcall* Fn_4F9E50)(Inner_4F9E50*);

// [0x004F9E50] VMCSModes::DefaultImplementation::vfunc_133 (16 bytes)
extern "C" void __fastcall fn_004F9E50(Outer_4F9E50* self) {
    Mid2_4F9E50* a = self->a;
    Mid_4F9E50* b = a->b;
    Inner_4F9E50* c = b->c;
    Fn_4F9E50 f = (Fn_4F9E50)c->vtbl[0x1c / 4];
    f(c);
}
