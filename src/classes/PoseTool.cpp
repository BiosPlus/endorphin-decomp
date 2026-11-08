// Decompiled translation unit: src/classes/PoseTool.cpp

// [0x00545120] PoseTool::vfunc_23 (29 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545120(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x88]
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x68]
        mov ecx, esi
        pop esi
        jmp edx
    }
}
