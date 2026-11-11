// Decompiled translation unit: src/classes/ObjectNode.cpp

extern "C" int mem_00B40640;

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
