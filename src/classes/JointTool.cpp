// Decompiled translation unit: src/classes/JointTool.cpp

// [0x005470F0] JointTool::vfunc_23 (28 bytes)
extern "C" __declspec(naked) void __fastcall fn_005470F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x38]
        push 1
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x68]
        mov ecx, esi
        pop esi
        jmp edx
    }
}
