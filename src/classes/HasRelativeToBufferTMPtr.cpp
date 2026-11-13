// Decompiled translation unit: src/classes/HasRelativeToBufferTMPtr.cpp

extern "C" void ext_004875A0();
extern "C" void ext_004F9950();
extern "C" void ext_00661B50();
extern "C" int mem_00AEE8A8;
extern "C" int mem_009253C8;
extern "C" int mem_009253D0;

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

// [0x005323C0] HasRelativeToBufferTMPtr::vfunc_12 (57 bytes)
extern "C" __declspec(naked) void __fastcall fn_005323C0(void* self, int edx_unused, Target* target) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [mem_00AEE8A8]
        push eax
        call ext_00661B50
        mov esi, dword ptr [esp + 0xc]
        mov edx, dword ptr [esi]
        add eax, 0x30
        push eax
        mov eax, dword ptr [edx + 0x1c]
        mov ecx, esi
        call eax
        mov eax, dword ptr [edi + 0x8]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x1c]
        add eax, 0x30
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00532320] HasRelativeToBufferTMPtr::vfunc_13 (85 bytes)
extern "C" __declspec(naked) void __fastcall fn_00532320(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [mem_00AEE8A8]
        push edi
        push eax
        call ext_00661B50
        fld dword ptr [eax + 0x38]
        mov edi, dword ptr [mem_009253D0]
        add eax, 0x30
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [esp]
        call edi
        mov eax, dword ptr [esi + 0x8]
        fld dword ptr [eax + 0x38]
        add eax, 0x30
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [esp]
        call edi
        pop edi
        pop esi
        ret
    }
}

// [0x005325F0] HasRelativeToBufferTMPtr::vfunc_2 (40 bytes)
extern "C" void* __fastcall fn_005325F0(void* self, int edx_unused, void* out) {
    BufferMgr* mgr = *(BufferMgr**)&mem_00AEE8A8;
    float* m1 = mgr->getMatrix(*(int*)((char*)self + 4));
    typedef void (__thiscall *Mul_t)(void*, void*, const float*);
    ((Mul_t)ext_004875A0)(*(void**)((char*)self + 8), out, m1);
    return out;
}

// [0x005325B0] HasRelativeToBufferTMPtr::vfunc_1 (58 bytes)
extern "C" void* __fastcall fn_005325B0(void* self, int edx_unused, void* out) {
    struct { int pad; float m[15]; } tmp;
    typedef void* (__thiscall *GetMat_t)(void*, int, void*);
    void* mgr = *(void**)&mem_00AEE8A8;
    void* m1 = ((GetMat_t)ext_00661B50)(mgr, *(int*)((char*)self + 4), out);
    typedef void* (__thiscall *Mul_t)(void*, void*, void*);
    void* res = ((Mul_t)ext_004875A0)(*(void**)((char*)self + 8), tmp.m, m1);
    typedef void (__thiscall *Norm_t)(void*);
    ((Norm_t)ext_004F9950)(res);
    return out;
}

// [0x00532620] HasRelativeToBufferTMPtr::vfunc_3 (96 bytes)
extern "C" void ext_0067DAD0();
extern "C" __declspec(naked) void __fastcall fn_00532620(void* self, int edx_unused, void* out) {
    __asm {
        fldz
        sub esp, 0x40
        push esi
        mov esi, dword ptr [esp+0x48]
        fst dword ptr [esi+0x8]
        push edi
        fst dword ptr [esi+0x4]
        mov edi, ecx
        fst dword ptr [esi]
        push esi
        fst dword ptr [esi+0x14]
        fst dword ptr [esi+0x10]
        fst dword ptr [esi+0xc]
        fst dword ptr [esi+0x20]
        fst dword ptr [esi+0x1c]
        fstp dword ptr [esi+0x18]
        fld1
        fst dword ptr [esi]
        fst dword ptr [esi+0x10]
        fstp dword ptr [esi+0x20]
        mov eax, dword ptr [edi+0x4]
        mov ecx, dword ptr [mem_00AEE8A8]
        push eax
        call ext_00661B50
        push eax
        lea ecx, [esp+0x10]
        push ecx
        mov ecx, dword ptr [edi+0x8]
        call ext_004875A0
        mov ecx, eax
        call ext_0067DAD0
        pop edi
        mov eax, esi
        pop esi
        add esp, 0x40
        ret 0x4
    }
}
