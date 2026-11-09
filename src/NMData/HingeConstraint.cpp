// Decompiled translation unit: src/NMData/HingeConstraint.cpp

// [0x00611770] NMData::HingeConstraint::vfunc_59 (24 bytes)
extern "C" void ext_00610C60();

typedef void (__thiscall *HingeConstraintInnerFn)(void* self, int a1, int a3);

extern "C" void __fastcall fn_00611770(void* self, int edx_unused, int a1, int a2, int a3) {
    HingeConstraintInnerFn f = (HingeConstraintInnerFn)ext_00610C60;
    f((unsigned char*)self + 0x164, a1, a3);
}
