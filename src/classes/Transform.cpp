// Decompiled translation unit: src/classes/Transform.cpp

// [0x00593630] Transform::vfunc_33 (72 bytes)
extern "C" void ext_00587880();

extern "C" __declspec(naked) void __fastcall fn_00593630(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xe4]
        fld1
        fst dword ptr [eax]
        fldz
        fst dword ptr [eax + 0x4]
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x24]
        fst dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x30]
        fst dword ptr [eax + 0x34]
        fstp dword ptr [eax + 0x38]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x28]
        fstp dword ptr [eax + 0x3c]
        mov dword ptr [ecx + 0xec], 0x2
        jmp ext_00587880
    }
}
