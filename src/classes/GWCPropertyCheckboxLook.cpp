// Decompiled translation unit: src/classes/GWCPropertyCheckboxLook.cpp

// [0x006B32D0] GWCPropertyCheckboxLook::vfunc_2 (38 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B32D0(void* self, int edx_unused, int* dst, int a2, int a3, const int* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0x8], edx
        mov dword ptr [eax + 0xc], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [eax + 0x8], edx
        ret 16
    }
}
