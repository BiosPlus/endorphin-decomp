// Decompiled translation unit: src/NMData/TargetRigNode.cpp

// [0x005AAB10] NMData::TargetRigNode::vfunc_59 (94 bytes)
extern "C" void ext_005B18E0();
extern "C" void ext_005ABA70();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005AAB10(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push 0x9348d8
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

// [0x005ABFB0] NMData::TargetRigNode::vfunc_17_off_C (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_005ABFB0(void* self) {
    __asm {
        push -1
        push 0x008a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x194
        mov edi, ecx
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 8], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 0x14], eax
        je done
        add edi, -12
        push edi
        mov ecx, esi
        call ext_005ABA70
        mov dword ptr [esi], 0x0093ee24
        mov dword ptr [esi + 4], 0x0093eddc
        mov dword ptr [esi + 8], 0x0093ed9c
        mov dword ptr [esi + 0xc], 0x0093ed4c
        mov dword ptr [esi + 0x150], 0x0093ed38
        mov eax, esi
    done:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
