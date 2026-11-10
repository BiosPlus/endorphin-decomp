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

// [0x005EBFF0] NMData::Constraint::vfunc_70 (83 bytes)
extern "C" void ext_00610AF0();
extern "C" void ext_00661980();

extern "C" __declspec(naked) void __fastcall fn_005EBFF0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x008A66B8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov ecx, esi
        mov dword ptr [esp + 0x4], 0
        call ext_00661980
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x00958C0C
        call ext_00610AF0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}
