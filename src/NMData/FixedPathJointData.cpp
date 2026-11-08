// Decompiled translation unit: src/NMData/FixedPathJointData.cpp

// [0x005E09B0] NMData::FixedPathJointData::vfunc_44 (20 bytes)
// Tail-call thunk: ecx = this->+0x18c; forwards with ecx = &inner+4 to inner->vtbl[0xb0 / 4].
extern "C" __declspec(naked) void __fastcall fn_005E09B0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x18c]
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [eax + 0xb0]
        add ecx, 4
        jmp edx
    }
}
