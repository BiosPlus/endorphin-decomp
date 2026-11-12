// Decompiled translation unit: src/NMData/Channel.cpp

extern "C" void ext_004769F0();
extern "C" void ext_00486CB0();
extern "C" int mem_00952560;
extern "C" int mem_0095254C;

// [0x0051A730] NMData::Channel::vfunc_17 (73 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051A730(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push offset mem_00952560
        lea eax, [edi + 4]
        push eax
        lea ecx, [esi + 4]
        push ecx
        lea ecx, [esp + 0x1c]
        call ext_00486CB0
        mov edx, dword ptr [edi + 0x20]
        mov eax, dword ptr [esi + 0x20]
        push offset mem_0095254C
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], edx
        push ecx
        lea edx, [esp + 0x18]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], eax
        call ext_004769F0
        pop edi
        pop esi
        ret 0xc
    }
}
