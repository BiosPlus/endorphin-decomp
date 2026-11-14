// Decompiled translation unit: src/classes/ObjectNode.cpp

extern "C" int mem_00B40640;
extern "C" void ext_00480920();
extern "C" void ext_00593D40();
extern "C" void ext_0067E820();
extern "C" void ext_0067E990();
extern "C" void ext_0067EB90();

// [0x00584A80] ObjectNode::vfunc_13_off_4 (91 bytes)
extern "C" __declspec(naked) void __fastcall fn_00584A80(void* self) {
    __asm {
        sub esp, 0x40
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x4c]
        cmp ebp, 0x3
        push esi
        push edi
        mov ebx, ecx
        jne short L_00584A97
        mov ebp, 2
L_00584A97:
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 0x10]
        push ecx
        push ebp
        lea edx, [esp + 0x18]
        push edx
        mov ecx, ebx
        call eax
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 0xc]
        mov esi, eax
        mov eax, dword ptr [mem_00B40640]
        push eax
        mov ecx, ebx
        call edx
        mov edi, eax
        mov ecx, 0x10
        rep movsd
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x4]
        push ebp
        mov ecx, ebx
        call edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 0x4
    }
}

// [0x00585A80] ObjectNode::vfunc_4_off_4 (392 bytes)
extern "C" __declspec(naked) void __fastcall fn_00585A80(void* self) {
    __asm {
        sub esp, 0x104
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x18]
        mov ebp, dword ptr [ebx + 0x90]
        push esi
        push edi
        call edx
        mov ecx, dword ptr [esp + 0x11c]
        cmp ecx, dword ptr [eax]
        je L_00585BD8
        test ebp, ebp
        je L_00585BD8
        cmp ecx, 1
        jne L_00585AC8
        mov eax, dword ptr [ebx - 0x4]
        mov edx, dword ptr [eax + 0x70]
        lea ecx, [ebx - 0x4]
        call edx
        test al, al
        jne L_00585BD8
L_00585AC8:
        mov ecx, dword ptr [esp + 0x120]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x8]
        push ecx
        mov ecx, ebx
        call edx
        mov esi, eax
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x18]
        mov ecx, 0x10
        lea edi, [esp + 0x54]
        rep movsd
        mov ecx, ebx
        call edx
        cmp dword ptr [eax], 2
        jne L_00585B27
        mov edx, dword ptr [esp + 0x120]
        mov eax, dword ptr [ebp + 0x4]
        mov eax, dword ptr [eax + 0x10]
        push edx
        mov edx, dword ptr [esp + 0x120]
        lea ecx, [ebp + 0x4]
        push edx
        lea edx, [esp + 0x1c]
        push edx
        call eax
        push eax
        lea ecx, [esp + 0x58]
        call ext_0067E820
        lea esi, [esp + 0x54]
        jmp L_00585BEB
L_00585B27:
        call ext_00480920
        mov edx, dword ptr [ebp + 0x4]
        mov edx, dword ptr [edx + 0x10]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x120]
        push eax
        add ebp, 4
        push 0
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, ebp
        call edx
        mov eax, dword ptr [ebp]
        mov eax, dword ptr [eax + 0x10]
        mov ecx, 0x10
        lea esi, [esp + 0x14]
        lea edi, [esp + 0x94]
        rep movsd
        mov ecx, dword ptr [esp + 0x120]
        push ecx
        push 1
        lea edx, [esp + 0xdc]
        push edx
        mov ecx, ebp
        call eax
        push eax
        lea ecx, [esp + 0x98]
        call ext_0067E990
        mov esi, dword ptr [esp + 0x10]
        push esi
        lea ecx, [esp + 0x98]
        push ecx
        lea edx, [esp + 0x1c]
        push edx
        lea eax, [esp + 0x128]
        push eax
        mov ecx, ebx
        call ext_00593D40
        push eax
        mov eax, dword ptr [ebx]
        push esi
        lea ecx, [esp + 0x9c]
        push ecx
        lea edx, [esp + 0x20]
        push edx
        mov edx, dword ptr [eax + 0x18]
        mov ecx, ebx
        call edx
        push eax
        mov ecx, ebx
        call ext_00593D40
        push eax
        lea ecx, [esp + 0x5c]
        call ext_0067EB90
        lea esi, [esp + 0x54]
        jmp short L_00585BEB
L_00585BD8:
        mov ecx, dword ptr [esp + 0x120]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x8]
        push ecx
        mov ecx, ebx
        call edx
        mov esi, eax
L_00585BEB:
        mov eax, dword ptr [esp + 0x118]
        mov ecx, 0x10
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x104
        ret 0xc
    }
}
