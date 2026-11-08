// Decompiled translation unit: src/leaf/decompiled_4A0000.cpp

struct SubInterface_4AEC60 {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20();
};

struct InnerObj_4AEC60 {
    int pad[2]; // +0x00..+0x07
    SubInterface_4AEC60 sub; // +0x08
};

struct OuterObj_4AEC60 {
    void* vtable; // +0x00
    InnerObj_4AEC60* inner; // +0x04
};

// [0x004AEC60] sub_004AEC60 (14 bytes)
extern "C" void __fastcall fn_004AEC60(OuterObj_4AEC60* self) {
    self->inner->sub.v20();
}

struct Flagged_4A2510 {
    char pad[4];
    unsigned char flag; // +0x04
};

struct Target_4A2510 {
    void** vtbl; // +0x00
};

struct Self_4A2510 {
    char pad[0x14];
    Flagged_4A2510* a; // +0x14
    char pad2[4];
    Target_4A2510* c;  // +0x1c
};

typedef void (__fastcall* Fn_4A2510)(Target_4A2510*);

// [0x004A2510] sub_004A2510 (17 bytes)
extern "C" void __fastcall fn_004A2510(Self_4A2510* self) {
    self->a->flag = 1;
    Target_4A2510* c = self->c;
    Fn_4A2510 f = (Fn_4A2510)c->vtbl[4 / 4];
    f(c);
}
