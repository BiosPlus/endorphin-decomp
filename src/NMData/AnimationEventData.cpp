// Decompiled translation unit: src/NMData/AnimationEventData.cpp

extern "C" void ext_004C0340();

// [0x004A9C20] NMData::AnimationEventData::vfunc_70 (18 bytes)
extern "C" void __fastcall fn_004A9C20(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x15c) = a1;
    ext_004C0340();
}

// [0x004A9C40] NMData::AnimationEventData::vfunc_71 (18 bytes)
extern "C" void __fastcall fn_004A9C40(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x160) = a1;
    ext_004C0340();
}

// [0x004C1AA0] NMData::AnimationEventData::vfunc_72 (18 bytes)
extern "C" void __fastcall fn_004C1AA0(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x164) = a1;
    ext_004C0340();
}

extern "C" void ext_0047D7C0();
extern "C" int mem_00AE29D0;

// [0x004BFC20] NMData::AnimationEventData::vfunc_13_off_C (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BFC20(void* self, int edx_unused, int a1) {
    __asm {
        add ecx, -0Ch
        push ecx
        mov ecx, dword ptr [mem_00AE29D0]
        call ext_0047D7C0
        mov al, 1
        ret 4
    }
}

extern "C" void ext_00594000();
extern "C" void ext_00599F10();

// [0x004BFBE0] NMData::AnimationEventData::vfunc_63 (25 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BFBE0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 168h]
        test eax, eax
        jne short L_nonnull
        ret
    L_nonnull:
        push eax
        call ext_00594000
        mov ecx, eax
        call ext_00599F10
        ret
    }
}
