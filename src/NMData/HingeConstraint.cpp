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

// [0x006116B0] NMData::HingeConstraint::vfunc_60 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_006116B0(void* self, int edx_unused, int a1, float a2) {
    __asm {
        sub esp, 0xc
        cmp dword ptr [esp + 0x10], 1
        jge done
        fld dword ptr [esp + 0x14]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xf4]
        fstp dword ptr [esp]
        fldz
        lea edx, [esp]
        fst dword ptr [esp + 4]
        push edx
        fstp dword ptr [esp + 0xc]
        call eax
done:
        add esp, 0xc
        ret 8
    }
}
