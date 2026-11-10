// Decompiled translation unit: src/classes/NMMatrixStackManager.cpp

// [0x0054EA30] NMMatrixStackManager::vfunc_1 (77 bytes)
extern "C" int mem_00925134;
extern "C" int mem_009254B8;

extern "C" __declspec(naked) void __fastcall fn_0054EA30(void* self) {
    __asm {
        sub esp, 0x8
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x4]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_54EA49
        call ebp
    L_54EA49:
        lea eax, [edi - 0x40]
        cmp eax, dword ptr [esi + 0x8]
        push ebx
        mov ebx, esi
        mov dword ptr [esp + 0x14], edi
        ja L_54EA5D
        cmp eax, dword ptr [esi + 0x4]
        jae L_54EA5F
    L_54EA5D:
        call ebp
    L_54EA5F:
        lea esi, [edi - 0x40]
        cmp esi, dword ptr [ebx + 0x8]
        pop ebx
        jb L_54EA6A
        call ebp
    L_54EA6A:
        push esi
        push 0xba6
        call dword ptr [mem_009254B8]
        pop edi
        pop esi
        pop ebp
        add esp, 0x8
        ret
    }
}
