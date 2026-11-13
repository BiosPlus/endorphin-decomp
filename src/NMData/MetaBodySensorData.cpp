// Decompiled translation unit: src/NMData/MetaBodySensorData.cpp

extern "C" void ext_004275E0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0060E890();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F7F4;
extern "C" int mem_00A9F7FC;
extern "C" int mem_00A9F554;
extern "C" int mem_00A9F6D4;

// [0x0060EA90] NMData::MetaBodySensorData::vfunc_21 (157 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060EA90(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf8]
        push edi
        call edx
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov ecx, esi
        call ext_0060E890
        mov eax, dword ptr [mem_00A9F7F4]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esi + 0x180]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F7FC]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea eax, [esi + 0x19c]
        push eax
        call ext_004275E0
        mov ecx, dword ptr [mem_00A9F554]
        add esp, 0x8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea edx, [esi + 0x1bc]
        push edx
        call ext_004275E0
        mov eax, dword ptr [mem_00A9F6D4]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        add esi, 0x1b8
        push esi
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}
