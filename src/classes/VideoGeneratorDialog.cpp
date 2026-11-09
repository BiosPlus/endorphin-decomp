// Decompiled translation unit: src/classes/VideoGeneratorDialog.cpp

// [0x004636E0] VideoGeneratorDialog::vfunc_2_off_74 (39 bytes)
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_004636E0(void* self, int edx_unused, unsigned short x, unsigned short y) {
    __asm {
        movzx eax, word ptr [esp + 0x8]
        movzx edx, word ptr [esp + 0x4]
        shl eax, 0x10
        or eax, edx
        push eax
        mov eax, dword ptr [ecx + 0x120]
        push 0x0
        push 0x401
        push eax
        call dword ptr [mem_00925694]
        ret 0x8
    }
}
