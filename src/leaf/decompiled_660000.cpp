// Decompiled translation unit: src/leaf/decompiled_660000.cpp

// [0x0066B060] sub_0066B060 (19 bytes)
extern "C" void ext_0065F440();

struct LeafTailTarget {
    void tail();
};
typedef void (LeafTailTarget::*LeafTailFn)();

extern "C" void __fastcall fn_0066B060(void* self) {
    LeafTailTarget* next = (LeafTailTarget*)(self ? (char*)self + 4 : (char*)0);
    LeafTailFn f;
    *(void**)&f = (void*)ext_0065F440;
    (next->*f)();
}
