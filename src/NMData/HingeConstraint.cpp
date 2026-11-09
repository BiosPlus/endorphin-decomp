// Decompiled translation unit: src/NMData/HingeConstraint.cpp

// [0x00611770] NMData::HingeConstraint::vfunc_59 (24 bytes)
extern "C" void ext_00610C60();

typedef void (__thiscall *HingeConstraintInnerFn)(void* self, int a1, int a3);

extern "C" void __fastcall fn_00611770(void* self, int edx_unused, int a1, int a2, int a3) {
    HingeConstraintInnerFn f = (HingeConstraintInnerFn)ext_00610C60;
    f((unsigned char*)self + 0x164, a1, a3);
}

// [0x006114D0] NMData::HingeConstraint::vfunc_33 (28 bytes)
extern "C" void ext_006114B0();
extern "C" void ext_00610C10();

extern "C" void __fastcall fn_006114D0(void* self) {
    ((void (__fastcall *)(void*))ext_006114B0)(self);
    ((void (__fastcall *)(void*))ext_00610C10)((unsigned char*)self + 0x164);
    *((unsigned char*)self + 0x160) = 1;
}
