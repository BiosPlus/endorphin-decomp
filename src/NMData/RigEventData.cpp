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

// [0x004D3D50] NMData::RigEventData::vfunc_0_off_154 (121 bytes)
extern "C" void ext_00494000();
extern "C" void ext_004940E0();

extern "C" __declspec(naked) void __fastcall fn_004D3D50(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        sub esp, 0xc
        push esi
        push 0x0
        push 0x0
        push 0x40
        lea ecx, [esp + 0x10]
        call ext_00494000
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x14]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        push 0x1
        push 0x1000
        mov ecx, esi
        mov dword ptr [esi + 0x8], eax
        call ext_004940E0
        push 0x1
        push 0x2000
        mov ecx, esi
        call ext_004940E0
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x4], 0x2
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [eax + 0x8], ecx
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [edx], 0x6
        mov dword ptr [eax], 0x6
        pop esi
        add esp, 0xc
        ret 0x10
    }
}
