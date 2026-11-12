// Decompiled translation unit: src/classes/HasRelativeToBufferTMPtr.cpp

extern "C" void ext_00661B50();
extern "C" int mem_00AEE8A8;
extern "C" int mem_009253C8;

struct BufferMgr {
    float* getMatrix(int id);
};

typedef void (__stdcall *glMultMatrixf_t)(const float* m);

// [0x005322F0] HasRelativeToBufferTMPtr::vfunc_11 (37 bytes)
extern "C" void __fastcall fn_005322F0(void* self) {
    BufferMgr* mgr = *(BufferMgr**)&mem_00AEE8A8;
    float* m1 = mgr->getMatrix(*(int*)((char*)self + 4));
    glMultMatrixf_t glMult = *(glMultMatrixf_t*)&mem_009253C8;
    glMult(m1);
    glMult(*(float**)((char*)self + 8));
}

struct Target {
    virtual void vfunc_0();
    virtual void vfunc_1();
    virtual void vfunc_2();
    virtual void vfunc_3();
    virtual void vfunc_4(void*);
};

// [0x00532380] HasRelativeToBufferTMPtr::vfunc_10 (53 bytes)
extern "C" void __fastcall fn_00532380(void* self, int edx_unused, Target* target) {
    void** vtbl = *(void***)target;
    BufferMgr* mgr = *(BufferMgr**)&mem_00AEE8A8;
    float* m1 = mgr->getMatrix(*(int*)((char*)self + 4));
    typedef void (__thiscall *Func_t)(Target*, void*);
    ((Func_t)vtbl[4])(target, m1);
    target->vfunc_4(*(void**)((char*)self + 8));
}
