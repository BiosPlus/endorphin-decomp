// Decompiled translation unit: src/classes/NodeView.cpp

extern "C" bool __fastcall ext_00584C00(void* self);

struct NodeViewVt {
    void* v0;
    void* v1;
    bool (__thiscall *v2)(void* self, void* a, bool b);
};

// [0x004444E0] NodeView::vfunc_1_off_150 (49 bytes)
extern "C" bool __fastcall fn_004444E0(void* self, int edx_unused, void* arg) {
    if (!arg) {
        return false;
    }
    NodeViewVt* vt = *(NodeViewVt**)self;
    return vt->v2(self, arg, !ext_00584C00(arg));
}
