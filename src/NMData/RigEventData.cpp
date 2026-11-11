// Decompiled translation unit: src/NMData/RigEventData.cpp

// [0x004D4730] NMData::RigEventData::vfunc_1_off_184 (104 bytes)
extern "C" void ext_004D40E0();
extern "C" int mem_00A34650;
extern "C" int mem_00924FC8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) bool __fastcall fn_004D4730(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        lea eax, [esp + 0x4]
        push eax
        add ecx, 0xfffffe7c
        call ext_004D40E0
        mov ecx, dword ptr [mem_00A34650]
        push ecx
        push eax
        mov dword ptr [esp + 0x30], 0x0
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        lea ecx, [esp + 0x4]
        mov bl, al
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        mov al, bl
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}
