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

// [0x0054E9B0] OptimizedMatrixStackManager::vfunc_5 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054E9B0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        cmp eax, dword ptr [ecx + 0x8]
        jge L_ge
        mov edx, dword ptr [ecx + 0x20]
        mov edx, dword ptr [edx + 0x14]
        add ecx, 0x20
        jmp edx
    L_ge:
        mov eax, dword ptr [ecx + 0xc]
        mov eax, dword ptr [eax + 0x14]
        add ecx, 0xc
        jmp eax
    }
}

// [0x0054E9D0] OptimizedMatrixStackManager::vfunc_7 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054E9D0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        cmp eax, dword ptr [ecx + 0x8]
        jge L_ge
        mov edx, dword ptr [ecx + 0x20]
        mov edx, dword ptr [edx + 0x1c]
        add ecx, 0x20
        jmp edx
    L_ge:
        mov eax, dword ptr [ecx + 0xc]
        mov eax, dword ptr [eax + 0x1c]
        add ecx, 0xc
        jmp eax
    }
}
