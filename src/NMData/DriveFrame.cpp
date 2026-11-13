// Decompiled translation unit: src/NMData/DriveFrame.cpp

extern "C" void ext_006125B0();

// [0x005EC060] NMData::DriveFrame::vfunc_67 (15 bytes)
extern "C" __declspec(naked) float __fastcall fn_005EC060(void* self, int edx_unused, int idx) {
    __asm {
        call ext_006125B0
        mov ecx, dword ptr [esp + 0x4]
        fld dword ptr [eax + 4*ecx]
        ret 0x4
    }
}

// [0x00612590] NMData::DriveFrame::vfunc_33 (30 bytes)
extern "C" void ext_006114B0();

extern "C" void __fastcall fn_00612590(void* self) {
    ((void (__fastcall*)(void*))ext_006114B0)(self);
    *(float*)((char*)self + 0x168) = 0.0f;
    *(float*)((char*)self + 0x164) = 0.0f;
    *(float*)((char*)self + 0x160) = 0.0f;
}

// [0x005EC070] NMData::DriveFrame::vfunc_68 (30 bytes)
extern "C" __declspec(naked) float* __fastcall fn_005EC070(void* self, int edx_unused, float* out) {
    __asm {
        call ext_006125B0
        fld dword ptr [eax]
        mov ecx, dword ptr [esp + 0x4]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x8]
        mov eax, ecx
        fstp dword ptr [ecx + 0x8]
        ret 0x4
    }
}

// [0x0061D1A0] NMData::DriveFrame::vfunc_60 (62 bytes)
extern "C" void ext_00611200();

extern "C" __declspec(naked) void __fastcall fn_0061D1A0(void* self, int edx_unused, int idx, float val) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, ecx
        call ext_006125B0
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x4]
        lea ecx, dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x4]
        push ecx
        fstp dword ptr [esp + 0xc]
        mov ecx, esi
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 4*eax + 0x8]
        call ext_00611200
        pop esi
        add esp, 0xc
        ret 0x8
    }
}
