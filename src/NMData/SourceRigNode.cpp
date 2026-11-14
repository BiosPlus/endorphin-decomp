// Decompiled translation unit: src/NMData/SourceRigNode.cpp

// [0x005AAAB0] NMData::SourceRigNode::vfunc_59 (94 bytes)
extern "C" void ext_005B18E0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005AAAB0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push 0x934904
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esp + 0x2c]
        lea eax, [esp]
        push eax
        mov dword ptr [esp + 0x28], 0
        call ext_005B18E0
        lea ecx, [esp]
        mov dword ptr [esp + 0x24], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x005ABF30] NMData::SourceRigNode::vfunc_17_off_C (122 bytes)
extern "C" void ext_005ABA70();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_005ABF30(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 194h
        mov edi, ecx
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 8], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 14h], eax
        je L_done
        add edi, -0Ch
        push edi
        mov ecx, esi
        call ext_005ABA70
        mov dword ptr [esi], 9498ACh
        mov dword ptr [esi + 4], 949864h
        mov dword ptr [esi + 8], 949824h
        mov dword ptr [esi + 0Ch], 9497D4h
        mov dword ptr [esi + 150h], 9497C0h
        mov eax, esi
    L_done:
        mov ecx, dword ptr [esp + 0Ch]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}
