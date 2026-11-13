// Decompiled translation unit: src/classes/GWCPropInPlaceFontButton.cpp

extern "C" void ext_006A5E00();
extern "C" void ext_006A5F6E();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A60D0();
extern "C" void ext_006AD0C0();
extern "C" void ext_006AD940();
extern "C" void ext_006B4430();
extern "C" void ext_006B4440();
extern "C" void ext_006B4450();
extern "C" void ext_008727D8();
extern "C" void ext_008727DE();
extern "C" void ext_008727E4();
extern "C" int mem_00924094;
extern "C" int mem_00925650;
extern "C" int mem_009240D4;
extern "C" int mem_00925688;
extern "C" int mem_00B5D200;
extern "C" int mem_00925694;

// [0x006B60E0] GWCPropInPlaceFontButton::vfunc_79 (382 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B60E0(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8b7b6b
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1a4
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x58]
        push 1
        call ext_006AD0C0
        mov ecx, dword ptr [esi + 0x58]
        call ext_006B4440
        mov ebx, eax
        mov ecx, ebx
        call ext_006B4430
        mov ecx, ebx
        mov edi, eax
        call ext_006B4440
        mov ebp, eax
        mov eax, dword ptr [edi + 4]
        test eax, eax
        je loc_6b613c
        lea ecx, [esp + 0x4c]
        push ecx
        push 0x3c
        push eax
        call dword ptr [mem_00924094]
loc_6b613c:
        mov edx, dword ptr [edi + 4]
        push 0
        neg edx
        push 0
        sbb edx, edx
        lea eax, [esp + 0x54]
        push 0x101
        and edx, eax
        push edx
        lea ecx, [esp + 0x98]
        call ext_008727E4
        lea ecx, [esp + 0x88]
        mov dword ptr [esp + 0x1bc], 0
        mov dword ptr [esp + 0x114], ebp
        call ext_008727DE
        cmp eax, 1
        mov ebp, dword ptr [mem_00925650]
        jne loc_6b6211
        mov ecx, dword ptr [esp + 0x114]
        push ecx
        mov ecx, ebx
        call ext_006B4450
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esp + 0x8c]
        call ext_008727D8
        mov ecx, edi
        call ext_006A5FF2
        lea eax, [esp + 0x10]
        push eax
        call dword ptr [mem_009240D4]
        push eax
        mov ecx, edi
        call ext_006A5FFE
        mov ecx, dword ptr [esi + 0x20]
        push ecx
        call ebp
        push eax
        call ext_006A5E00
        mov edx, dword ptr [eax + 0x20]
        push 1
        push 0
        push edx
        call dword ptr [mem_00925688]
        mov eax, dword ptr [esi + 0x20]
        push eax
        call ebp
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x58]
        mov edi, eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD940
        mov ecx, dword ptr [mem_00B5D200]
        mov edx, dword ptr [edi + 0x20]
        push 0
        push eax
        push ecx
        push edx
        call dword ptr [mem_00925694]
loc_6b6211:
        mov ecx, dword ptr [esi + 0x58]
        push 0
        call ext_006AD0C0
        mov eax, dword ptr [esi + 0x20]
        push eax
        call ebp
        push eax
        call ext_006A5E00
        mov ecx, eax
        call ext_006A60D0
        lea ecx, [esp + 0x88]
        mov dword ptr [esp + 0x1bc], 0xffffffff
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 0x1b4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1b0
        ret
    }
}
