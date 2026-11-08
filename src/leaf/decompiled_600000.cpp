// Decompiled translation unit: src/leaf/decompiled_600000.cpp

struct SubInterface_609730 {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();
};

struct InnerObj_609730 {
    int pad;                 // +0x00
    SubInterface_609730 sub; // +0x04
};

struct OuterObj_609730 {
    char pad[0xc];       // +0x00..+0x0b
    InnerObj_609730* inner; // +0x0c
};

// [0x00609730] sub_00609730 (14 bytes)
extern "C" void __fastcall fn_00609730(OuterObj_609730* self) {
    self->inner->sub.v9();
}
