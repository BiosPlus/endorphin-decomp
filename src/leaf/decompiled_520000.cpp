// Decompiled translation unit: src/leaf/decompiled_520000.cpp

extern "C" void ext_00521FD0();
extern "C" void ext_00522080();

// [0x00522190] sub_00522190 (25 bytes)
extern "C" void __fastcall fn_00522190(char* self, int edx_unused, int a1) {
    *(int*)(self + 0xc4) = a1;
    void** vtbl = *(void***)self;
    typedef void (__fastcall *VFn)(char*, int, int);
    ((VFn)vtbl[0x17])(self, (int)vtbl, 0);
}

// [0x005220B0] sub_005220B0 (10 bytes)
extern "C" __declspec(naked) void __cdecl fn_005220B0() {
    __asm {
        call ext_00521FD0
        jmp ext_00522080
    }
}

// [0x00525E70] sub_00525E70 (10 bytes)
extern "C" void ext_00525C40();

extern "C" __declspec(naked) void __fastcall fn_00525E70(void* self) {
    __asm {
        push ecx
        add ecx, 0x60
        call ext_00525C40
        ret
    }
}
