// Decompiled translation unit: src/ASFData/Bone.cpp

// [0x00569FD0] ASFData::Bone::vfunc_1 (38 bytes)
extern "C" __declspec(naked) int __fastcall fn_00569FD0(void* self) {
    __asm {
        push ecx
        cmp dword ptr [ecx + 0x1e0], 0
        jne fail
        mov eax, dword ptr [ecx + 0x28]
        test eax, eax
        je ok
        mov ecx, dword ptr [ecx + 0x2c]
        sub ecx, eax
        sar ecx, 2
        jne fail
ok:
        mov eax, 1
        pop ecx
        ret
fail:
        xor eax, eax
        pop ecx
        ret
    }
}
