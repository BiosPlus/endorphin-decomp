// Decompiled translation unit: src/NMData/ValuePtrData.cpp

// [0x00682C20] NMData::ValuePtrData::vfunc_19 (70 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) int __fastcall fn_00682C20(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x4c]
        test eax, eax
        je ret_arg
        mov edx, dword ptr [eax]
        push 0x0
        push 0xa2e2d8
        push 0xa2e2f8
        add ecx, 0x48
        push 0x0
        push ecx
        mov ecx, eax
        mov eax, dword ptr [edx + 0x60]
        call eax
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je ret_arg
        xor eax, eax
        cmp dword ptr [esp + 0x4], 0x67
        sete al
        add eax, 0x66
        ret 0x4
ret_arg:
        mov eax, dword ptr [esp + 0x4]
        ret 0x4
    }
}
