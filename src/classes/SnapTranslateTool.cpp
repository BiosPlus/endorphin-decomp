// Decompiled translation unit: src/classes/SnapTranslateTool.cpp

// [0x00544D80] SnapTranslateTool::vfunc_26 (31 bytes)
extern "C" __declspec(naked) void __fastcall fn_00544D80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x80]
        call edx
        mov eax, dword ptr [esi + 0x9c]
        mov edx, dword ptr [eax + 0x68]
        lea ecx, [esi + 0x9c]
        pop esi
        jmp edx
    }
}
