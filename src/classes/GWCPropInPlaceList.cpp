// Decompiled translation unit: src/classes/GWCPropInPlaceList.cpp

// [0x006B70B0] GWCPropInPlaceList::vfunc_66 (249 bytes)

extern "C" void ext_006A5DA0();
extern "C" void ext_006A5E00();
extern "C" void ext_006A60D0();
extern "C" void ext_006B6CF0();
extern "C" int mem_00925650;
extern "C" int mem_009255A0;
extern "C" int mem_00925654;
extern "C" int mem_009256CC;
extern "C" int mem_009255A8;

extern "C" __declspec(naked) int __fastcall fn_006B70B0(void* self, int edx_unused, void* msg) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp+0xc]
        mov eax, dword ptr [edi+4]
        cmp eax, 0x100
        mov esi, ecx
        jne L161
        mov eax, dword ptr [edi+8]
        cmp eax, 0x1b
        jne L107
        push 0
        call ext_006B6CF0
        mov eax, dword ptr [esi+0x20]
        push eax
GPCALL:
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, eax
        call ext_006A60D0
        mov esi, dword ptr [esi+0x20]
        push 1
        push 0
        push 0
        push esi
        push edi
        call dword ptr [mem_009255A0]
        pop edi
        mov eax, 1
        pop esi
        ret 4
L107:
        cmp eax, 0x0d
        jne L119
        push 1
        call ext_006B6CF0
        mov ecx, dword ptr [esi+0x20]
        push ecx
        jmp GPCALL
L119:
        cmp byte ptr [esi+0x60], 0
        je L139
        lea eax, [esi+0x70]
        test eax, eax
        push ebx
        jne L12B
        xor ebx, ebx
        jmp L12E
L12B:
        mov ebx, dword ptr [eax+0x20]
L12E:
        call dword ptr [mem_00925654]
        cmp eax, ebx
        pop ebx
        je L154
L139:
        mov eax, dword ptr [esi+0x6c]
        test eax, eax
        jne L14F
        push edi
        mov ecx, esi
        mov dword ptr [edi], eax
        call ext_006A5DA0
        pop edi
        pop esi
        ret 4
L14F:
        mov eax, dword ptr [eax+0x20]
        mov dword ptr [edi], eax
L154:
        push edi
        mov ecx, esi
        call ext_006A5DA0
        pop edi
        pop esi
        ret 4
L161:
        cmp eax, 0x20a
        jne L154
        mov eax, dword ptr [esi+0x6c]
        mov edx, dword ptr [eax+0x20]
        push edx
        call dword ptr [mem_009256CC]
        test eax, eax
        je L154
        mov esi, dword ptr [esi+0x6c]
        test esi, esi
        jne L193
        push edi
        mov dword ptr [edi], esi
        call dword ptr [mem_009255A8]
        pop edi
        mov eax, 1
        pop esi
        ret 4
L193:
        mov esi, dword ptr [esi+0x20]
        push edi
        mov dword ptr [edi], esi
        call dword ptr [mem_009255A8]
        pop edi
        mov eax, 1
        pop esi
        ret 4
    }
}
