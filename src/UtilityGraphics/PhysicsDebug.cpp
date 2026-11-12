// Decompiled translation unit: src/UtilityGraphics/PhysicsDebug.cpp

extern "C" void ext_00539740();
extern "C" int mem_00AEFEC0;
extern "C" int mem_00AEFEC4;
extern "C" int mem_00925134;
extern "C" int mem_00925498;
extern "C" int mem_0092540C;
extern "C" int mem_00925490;
extern "C" int mem_00925488;

// [0x00539DF0] UtilityGraphics::PhysicsDebug::vfunc_22 (266 bytes)
extern "C" __declspec(naked) void __fastcall fn_00539DF0(void* self, int edx_unused, int a1) {
    __asm {
        cmp dword ptr [esp + 4], 0x40000
        jne L_exit
        mov ecx, dword ptr [ecx + 0x14]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push ebx
        push esi
        push edi
        call edx
        mov esi, dword ptr [mem_00AEFEC0]
        mov eax, dword ptr [mem_00AEFEC4]
        cmp esi, eax
        mov ebx, dword ptr [mem_00925134]
        jbe L_00539E26
        call ebx
        mov eax, dword ptr [mem_00AEFEC4]
L_00539E26:
        push ebp
        mov ebp, dword ptr [mem_00925498]
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
L_00539E30:
        cmp dword ptr [mem_00AEFEC0], eax
        mov edi, eax
        jbe L_00539E41
        call ebx
        mov eax, dword ptr [mem_00AEFEC4]
L_00539E41:
        cmp esi, edi
        je L_00539EA9
        cmp esi, eax
        jb L_00539E4B
        call ebx
L_00539E4B:
        push esi
        call dword ptr [mem_0092540C]
        cmp esi, dword ptr [mem_00AEFEC4]
        jb L_00539E5C
        call ebx
L_00539E5C:
        push 1
        add esi, 0xc
        call dword ptr [mem_00925490]
        cmp esi, dword ptr [mem_00AEFEC4]
        jb L_00539E71
        call ebx
L_00539E71:
        push esi
        call ebp
        cmp esi, dword ptr [mem_00AEFEC4]
        jb L_00539E7E
        call ebx
L_00539E7E:
        add esi, 0xc
        cmp esi, dword ptr [mem_00AEFEC4]
        jb L_00539E8B
        call ebx
L_00539E8B:
        push esi
        call ebp
        call dword ptr [mem_00925488]
        mov eax, dword ptr [mem_00AEFEC4]
        cmp esi, eax
        jb L_00539EA4
        call ebx
        mov eax, dword ptr [mem_00AEFEC4]
L_00539EA4:
        add esi, 0xc
        jmp L_00539E30
L_00539EA9:
        cmp dword ptr [mem_00AEFEC0], eax
        mov edi, eax
        pop ebp
        jbe L_00539EBB
        call ebx
        mov eax, dword ptr [mem_00AEFEC4]
L_00539EBB:
        mov esi, dword ptr [mem_00AEFEC0]
        cmp esi, eax
        jbe L_00539ECC
        call ebx
        mov eax, dword ptr [mem_00AEFEC4]
L_00539ECC:
        cmp esi, edi
        je L_00539EF4
        mov byte ptr [esp + 0x10], 0
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        push ecx
        push esi
        push eax
        push edi
        call ext_00539740
        add esp, 0x18
        mov dword ptr [mem_00AEFEC4], eax
L_00539EF4:
        pop edi
        pop esi
        pop ebx
L_exit:
        ret 4
    }
}
