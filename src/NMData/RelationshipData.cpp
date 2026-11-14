// Decompiled translation unit: src/NMData/RelationshipData.cpp

extern "C" void ext_00404F00();
extern "C" void ext_00427550();
extern "C" void ext_0058F650();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_006404E0();
extern "C" void ext_00640A50();
extern "C" void ext_00640A80();
extern "C" void ext_00662850();
extern "C" void ext_0067F040();
extern "C" int mem_00A9F9AC;
extern "C" int mem_00924FE8;
extern "C" int mem_00925134;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F5D0;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F7F8;
extern "C" int mem_00A9F7FC;
extern "C" int mem_00A9F7F4;
extern "C" int mem_00A9EDA8;
extern "C" int mem_00A9F738;

// [0x005EB5A0] NMData::RelationshipData::vfunc_22 (752 bytes)
extern "C" __declspec(naked) void __fastcall fn_005EB5A0(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0x0]
        push 0x8848f2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x3c
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x5c]
        push edi
        mov ebp, ecx
        call ext_0058F650
        mov eax, dword ptr [ebp + 0x238]
        mov ecx, dword ptr [mem_00A9F9AC]
        push eax
        push ecx
        push edi
        call ext_00662850
        mov eax, dword ptr [ebp + 0x16c]
        lea esi, [ebp + 0x168]
        add esp, 0xc
        test eax, eax
        je L_5EB6C5
        mov edx, dword ptr [esi + 0x8]
        sub edx, eax
        sar edx, 3
        je L_5EB6C5
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE8]
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x54], 0
        jbe short L_5EB621
        call dword ptr [mem_00925134]
L_5EB621:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe short L_5EB62F
        call dword ptr [mem_00925134]
L_5EB62F:
        cmp esi, esi
        je short L_5EB639
        call dword ptr [mem_00925134]
L_5EB639:
        cmp edi, ebx
        je short L_5EB687
        cmp edi, dword ptr [esi + 0x8]
        jb short L_5EB648
        call dword ptr [mem_00925134]
L_5EB648:
        mov eax, dword ptr [edi]
        push eax
        lea ecx, [esp + 0x34]
        push ecx
        call ext_00404F00
        add esp, 0x8
        push eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x58], 1
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x54], 0
        call dword ptr [mem_00924FF4]
        cmp edi, dword ptr [esi + 0x8]
        jb short L_5EB682
        call dword ptr [mem_00925134]
L_5EB682:
        add edi, 0x8
        jmp short L_5EB621
L_5EB687:
        mov edx, dword ptr [mem_00A9F5D0]
        mov ecx, dword ptr [esp + 0x5c]
        push edx
        call ext_00640110
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x54], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov edi, dword ptr [esp + 0x5c]
L_5EB6C5:
        mov eax, dword ptr [ebp + 0x1e0]
        cmp eax, 0x1
        je short L_5EB6DA
        cmp eax, 0x2
        je short L_5EB6DA
        cmp eax, 0x3
        jne short L_5EB6F6
L_5EB6DA:
        push 0x96ad94
        mov ecx, edi
        call ext_00640110
        mov ecx, dword ptr [ebp + 0x1e0]
        push ecx
        push eax
        call ext_00640A50
        add esp, 0x8
L_5EB6F6:
        mov eax, dword ptr [ebp + 0x1e0]
        cmp eax, 0x2
        je short L_5EB706
        cmp eax, 0x3
        jne short L_5EB72C
L_5EB706:
        push 0x96ad84
        mov ecx, edi
        call ext_00640110
        lea ecx, [ebp + 0x1e4]
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
L_5EB72C:
        lea edx, [ebp + 0x210]
        push edx
        push 0x0
        push 0x96ad78
        mov ecx, edi
        call ext_00640390
        push eax
        call ext_0067F040
        add esp, 0x8
        lea eax, [ebp + 0x21c]
        push eax
        push 0x0
        push 0x96ad68
        mov ecx, edi
        call ext_00640390
        push eax
        call ext_0067F040
        add esp, 0x8
        cmp dword ptr [ebp + 0x190], 0x0
        jne short L_5EB7B0
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x70]
        mov ecx, ebp
        call eax
        test al, al
        jne short L_5EB7B0
        mov ecx, dword ptr [mem_00A9F7F8]
        push ecx
        mov ecx, edi
        call ext_00640110
        lea ecx, [ebp + 0x198]
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
        mov edx, dword ptr [mem_00A9F7FC]
        push edx
        jmp short L_5EB7B6
L_5EB7B0:
        mov eax, dword ptr [mem_00A9F7F4]
        push eax
L_5EB7B6:
        mov ecx, edi
        call ext_00640110
        lea ecx, [ebp + 0x1b4]
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
        mov eax, dword ptr [ebp + 0x1d4]
        test eax, eax
        lea esi, [ebp + 0x1d0]
        je short L_5EB85A
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 0x2
        je short L_5EB85A
        mov edx, dword ptr [mem_00A9EDA8]
        push edx
        mov ecx, edi
        call ext_006404E0
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], eax
        jbe short L_5EB811
        call dword ptr [mem_00925134]
L_5EB811:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe short L_5EB81F
        call dword ptr [mem_00925134]
L_5EB81F:
        cmp esi, esi
        je short L_5EB829
        call dword ptr [mem_00925134]
L_5EB829:
        cmp edi, ebx
        je short L_5EB856
        cmp edi, dword ptr [esi + 0x8]
        jb short L_5EB838
        call dword ptr [mem_00925134]
L_5EB838:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [eax + 0x58]
        push edx
        call eax
        cmp edi, dword ptr [esi + 0x8]
        jb short L_5EB851
        call dword ptr [mem_00925134]
L_5EB851:
        add edi, 0x4
        jmp short L_5EB811
L_5EB856:
        mov edi, dword ptr [esp + 0x5c]
L_5EB85A:
        mov ecx, dword ptr [mem_00A9F738]
        push ecx
        mov ecx, edi
        call ext_00640110
        movzx edx, byte ptr [ebp + 0x179]
        push edx
        push eax
        call ext_00640A80
        mov ecx, dword ptr [esp + 0x54]
        add esp, 0x8
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x48
        ret 0x4
    }
}
