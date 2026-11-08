// Decompiled translation unit: src/StateMachine/State.cpp

struct SubVTable_51F9C0 {
    virtual void v0();
    virtual void v1();
};

struct Inner_51F9C0 {
    char pad[0x8];          // +0x00..+0x07
    SubVTable_51F9C0 sub;   // +0x08
};

struct State_51F9C0 {
    char pad[0x154];        // +0x00..+0x153
    Inner_51F9C0* inner;    // +0x154
};

// [0x0051F9C0] StateMachine::State::vfunc_9 (17 bytes)
extern "C" void __fastcall fn_0051F9C0(State_51F9C0* self) {
    self->inner->sub.v1();
}
