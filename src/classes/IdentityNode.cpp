// Decompiled translation unit: src/classes/IdentityNode.cpp

extern "C" void ext_00480920();

// [0x0059CC60] IdentityNode::vfunc_2_off_4 (8 bytes)
extern "C" __declspec(naked) void __fastcall fn_0059CC60(void* self, int edx_unused, int a1) {
    __asm {
        call ext_00480920
        ret 4
    }
}

// [0x00587880] IdentityNode::vfunc_33 (125 bytes)
extern "C" void ext_0050BE20();
extern "C" void ext_00596660();
extern "C" void ext_00586D00();
extern "C" int mem_00925134;
extern "C" int mem_00924EA8;

extern "C" __declspec(naked) void __fastcall fn_00587880(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        lea edi, [esi + 7Ch]
        mov dword ptr [esi + 98h], eax
        mov dword ptr [esi + 9Ch], eax
        mov dword ptr [esi + 94h], eax
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe chk1_ok
        call dword ptr [mem_00925134]
    chk1_ok:
        mov ebp, dword ptr [edi + 4]
        cmp ebp, dword ptr [edi + 8]
        jbe chk2_ok
        call dword ptr [mem_00925134]
    chk2_ok:
        push ebx
        push edi
        push ebp
        push edi
        lea eax, [esp + 20h]
        push eax
        mov ecx, edi
        call ext_00596660
        lea ecx, [esi + 6Ch]
        call ext_0050BE20
        lea ecx, [esi + 14h]
        call dword ptr [mem_00924EA8]
        lea ecx, [esi + 30h]
        call dword ptr [mem_00924EA8]
        lea ecx, [esi + 4Ch]
        call dword ptr [mem_00924EA8]
        pop edi
        mov ecx, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        jmp ext_00586D00
    }
}
