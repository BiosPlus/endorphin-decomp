// Decompiled translation unit: src/NMData/Channel.cpp

extern "C" void ext_004769F0();
extern "C" void ext_00486CB0();
extern "C" void ext_0063EFE0();
extern "C" void ext_004275E0();
extern "C" void ext_00519C00();
extern "C" int mem_00952560;
extern "C" int mem_0095254C;
extern "C" int mem_00A9F838;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;

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

// [0x00519EC0] NMData::Channel::vfunc_1 (209 bytes)
extern "C" __declspec(naked) void __fastcall fn_00519EC0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8b56f9h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 1ch
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0ch]
        push edi
        call edx
        mov eax, dword ptr [mem_00A9F838]
        mov edi, dword ptr [esp + 34h]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esi + 4]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9FA6C]
        add esp, 8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        cmp eax, 0b53a34h
        je short L_end_00519EC0
        cmp eax, 0b53b30h
        je short L_end_00519EC0
        cmp eax, 0b53ab0h
        je short L_end_00519EC0
        cmp eax, 0b53a70h
        je short L_end_00519EC0
        cmp eax, 0b53af0h
        je short L_end_00519EC0
        lea ecx, [esp + 8]
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [mem_00A9FA6C]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 30h], 0
        call ext_0063EFE0
        push eax
        lea ecx, [esp + 0ch]
        push ecx
        call ext_004275E0
        lea edx, [esp + 10h]
        push edx
        call ext_00519C00
        add esp, 0ch
        lea ecx, [esp + 8]
        mov dword ptr [esi + 20h], eax
        mov dword ptr [esp + 2ch], 0ffffffffh
        call dword ptr [mem_00924FF4]
L_end_00519EC0:
        mov ecx, dword ptr [esp + 24h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 28h
        ret 8
    }
}

// [0x00519FA0] NMData::Channel::vfunc_2 (89 bytes)
extern "C" void __fastcall ext_00427550(void* self, int edx_unused, const char* s);
extern "C" int __fastcall ext_00640110(void* self, int edx_unused, int arg);
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00A430F4;

extern "C" __declspec(naked) int __fastcall fn_00519FA0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F838]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov ecx, dword ptr [mem_00A9FA6C]
        push ecx
        mov ecx, edi
        call ext_00640110
        mov edx, dword ptr [esi + 0x20]
        mov dword ptr [esp + 0xc], eax
        mov eax, dword ptr [edx * 4 + mem_00A430F4]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}
