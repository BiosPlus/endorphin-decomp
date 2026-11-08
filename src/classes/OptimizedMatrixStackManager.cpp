// Decompiled translation unit: src/classes/OptimizedMatrixStackManager.cpp

// [0x0054E990] OptimizedMatrixStackManager::vfunc_4 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054E990(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        cmp eax, dword ptr [ecx + 0x8]
        jge L_ge
        mov edx, dword ptr [ecx + 0x20]
        mov edx, dword ptr [edx + 0x10]
        add ecx, 0x20
        jmp edx
    L_ge:
        mov eax, dword ptr [ecx + 0xc]
        mov eax, dword ptr [eax + 0x10]
        add ecx, 0xc
        jmp eax
    }
}
