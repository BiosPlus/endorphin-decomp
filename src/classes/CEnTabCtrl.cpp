// Decompiled translation unit: src/classes/CEnTabCtrl.cpp

extern "C" void ext_00404680();
extern "C" void ext_006A5EA2();
extern "C" int mem_00AC9CD8;
extern "C" int mem_00925680;
extern "C" void ext_0041604C();
extern "C" void ext_0041603E();
extern "C" void ext_00416095();

// [0x004160C0] CEnTabCtrl::vfunc_22 (35 bytes)
extern "C" void __fastcall fn_004160C0(void* self) {
    ((void (__fastcall*)(void*))ext_00404680)(self);
    if (mem_00AC9CD8 != 0) {
        ((void (__thiscall*)(void*, int, int, int))ext_006A5EA2)(self, 0, 0x2000, 0);
    }
}

// [0x00416010] CEnTabCtrl::vfunc_85 (46 bytes)
extern "C" __declspec(naked) void __fastcall fn_00416010(void* self) {
    __asm {
        mov eax, dword ptr [mem_00AC9CD8]
        mov edx, eax
        and edx, 0x2
        and eax, 0x1
        cmp dword ptr [esp + 0x4], 0x0
        __asm _emit 0x74 __asm _emit 0x28 // je 0x41604c
        test edx, edx
        __asm _emit 0x74 __asm _emit 0x16 // je 0x41603e
        mov eax, dword ptr [ecx + 0x58]
        cmp eax, -0x1
        __asm _emit 0x75 __asm _emit 0x65 // jne 0x416095
        mov dword ptr [esp + 0x4], 0xf
        jmp dword ptr [mem_00925680]
    }
}
