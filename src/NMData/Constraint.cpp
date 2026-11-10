// Decompiled translation unit: src/NMData/Constraint.cpp

extern "C" void ext_0058A1A0();

// [0x006114B0] NMData::Constraint::vfunc_33 (30 bytes)
extern "C" void __fastcall fn_006114B0(void* self) {
    ext_0058A1A0();
    char* p = (char*)self;
    *(float*)(p + 0x154) = 1.0f;
    *(float*)(p + 0x158) = 1.0f;
    *(float*)(p + 0x15c) = 1.0f;
}

// [0x0061D250] NMData::Constraint::vfunc_68 (72 bytes)
extern "C" int mem_00AE5598;
extern "C" int mem_00AE558C;
extern "C" int mem_00AE5590;
extern "C" int mem_00AE5594;

extern "C" __declspec(naked) void __stdcall fn_0061D250(float* out) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00AE5598], al
        jne ready
        fldz
        or dword ptr [mem_00AE5598], eax
        fst dword ptr [mem_00AE558C]
        fst dword ptr [mem_00AE5590]
        fstp dword ptr [mem_00AE5594]
ready:
        mov eax, dword ptr [esp + 4]
        fld dword ptr [mem_00AE558C]
        fstp dword ptr [eax]
        fld dword ptr [mem_00AE5590]
        fstp dword ptr [eax + 4]
        fld dword ptr [mem_00AE5594]
        fstp dword ptr [eax + 8]
        ret 4
    }
}
