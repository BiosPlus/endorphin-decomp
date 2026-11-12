// Decompiled translation unit: src/NMData/RigNode.cpp

// [0x005AA900] NMData::RigNode::vfunc_14 (210 bytes)
extern "C" void* __fastcall ext_0058F6B0(void* self, int edx_unused, void* a1, int a2);
extern "C" void* __fastcall ext_00661680(void* self, int edx_unused, int a1, int a2);
extern "C" void* __cdecl ext_0046F7D0(void* p);

extern "C" __declspec(naked) void* __fastcall fn_005AA900(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0xd
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0
        je L979
        cmp eax, 0x134
        je L930
        push edi
        mov edi, dword ptr [esp + 0x10]
        push eax
        push edi
        call ext_0058F6B0
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0x8
    L930:
        cmp dword ptr [esi + 0x190], 0
        je LFAIL
        mov ecx, dword ptr [esi + 0x190]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        call edx
        test al, al
        je LFAIL
        mov eax, dword ptr [esi + 0x154]
        cmp eax, 1
        je L95E
        cmp eax, 3
        jne LFAIL
    L95E:
        add esi, 0x158
        push esi
        mov esi, dword ptr [esp + 0x10]
        push 3
        mov ecx, esi
        call ext_00661680
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L979:
        cmp dword ptr [esi + 0x190], 0
        je LFAIL
        mov ecx, dword ptr [esi + 0x190]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        call edx
        test al, al
        je LFAIL
        mov eax, dword ptr [esi + 0x154]
        cmp eax, 2
        je L9A3
        cmp eax, 3
        jne LFAIL
    L9A3:
        add esi, 0x164
        push esi
        mov esi, dword ptr [esp + 0x10]
        push 3
        mov ecx, esi
        call ext_00661680
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    LFAIL:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
