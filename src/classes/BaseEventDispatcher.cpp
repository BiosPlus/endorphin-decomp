// Decompiled translation unit: src/classes/BaseEventDispatcher.cpp

// [0x00437AD0] BaseEventDispatcher::vfunc_3 (60 bytes)
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00437AD0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x4]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_00437AEA
        call ebp
L_00437AEA:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_00437AF4
        call ebp
L_00437AF4:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00678D70] BaseEventDispatcher::vfunc_1 (103 bytes)
extern "C" __declspec(naked) void __fastcall fn_00678D70(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x4]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_00678D85
        call dword ptr [mem_00925134]
L_00678D85:
        mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_00678D90:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_00678D9E
        call dword ptr [mem_00925134]
L_00678D9E:
        cmp esi, esi
        je L_00678DA8
        call dword ptr [mem_00925134]
L_00678DA8:
        cmp edi, ebx
        je L_00678DD0
        cmp edi, dword ptr [esi + 0x8]
        jb L_00678DB7
        call dword ptr [mem_00925134]
L_00678DB7:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push ebp
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_00678DCB
        call dword ptr [mem_00925134]
L_00678DCB:
        add edi, 0x4
        jmp L_00678D90
L_00678DD0:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}
