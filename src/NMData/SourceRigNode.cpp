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
