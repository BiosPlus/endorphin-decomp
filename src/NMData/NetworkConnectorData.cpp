// Decompiled translation unit: src/NMData/NetworkConnectorData.cpp

extern "C" void ext_00525E80();
extern "C" void ext_00526E40();

// [0x005261E0] NMData::NetworkConnectorData::vfunc_27 (10 bytes)
extern "C" __declspec(naked) void __fastcall fn_005261E0(void* self) {
    __asm {
        push ecx
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x60 // add ecx, 0x60
        call ext_00525E80
        ret
    }
}

// [0x005270D0] NMData::NetworkConnectorData::vfunc_26 (10 bytes)
extern "C" __declspec(naked) void __fastcall fn_005270D0(void* self) {
    __asm {
        push ecx
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x60 // add ecx, 0x60
        call ext_00526E40
        ret
    }
}
