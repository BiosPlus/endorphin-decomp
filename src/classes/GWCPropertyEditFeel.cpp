// Decompiled translation unit: src/classes/GWCPropertyEditFeel.cpp

extern "C" void ext_006A5C62();
extern "C" void ext_006B0CA0();
extern "C" void ext_006A5E5A();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5F50();
extern "C" void ext_006A6004();
extern "C" void ext_006A6184();
extern "C" void ext_006A7BF0();
extern "C" void ext_006B0C10();
extern "C" void ext_006B0DE0();
extern "C" void ext_006B4440();
extern "C" int mem_008B78CB;
extern "C" int mem_009334D0;
extern "C" int mem_00925694;
extern "C" int mem_00B5D20C;
extern "C" int mem_00925658;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;
extern "C" int mem_00925620;
extern "C" int mem_00925654;
extern "C" int mem_009242FC;
extern "C" int mem_0092449C;

// [0x006B28A0] GWCPropertyEditFeel::vfunc_6 (86 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B28A0(void* self) {
    __asm {
        push -1
        push 0x00876A9A
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x6c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je L_null
        mov ecx, eax
        call ext_006B0CA0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    L_null:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B25E0] GWCPropertyEditFeel::vfunc_5 (696 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B25E0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push offset mem_008B78CB
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov esi, dword ptr [ebp + 4]
        push edi
        xor edi, edi
        cmp esi, edi
        jne L_6b266a
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x18]
        call edx
        mov ecx, dword ptr [ebp + 0xc]
        mov esi, eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov al, byte ptr [ebp + 0x10]
        neg al
        push ecx
        lea edx, [esp + 0x24]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x2c], edi
        sbb eax, eax
        and eax, 0x20
        or eax, 0x40000084
        push eax
        mov dword ptr [esp + 0x34], edi
        mov dword ptr [esp + 0x38], edi
        call ext_006A6184
        mov ecx, dword ptr [ebp + 0xc]
        call ext_006A7BF0
        cmp eax, edi
        jne L_6b2655
        xor eax, eax
        jmp L_6b2658
    L_6b2655:
        mov eax, dword ptr [eax + 4]
    L_6b2658:
        mov ecx, dword ptr [esi + 0x20]
        push 1
        push eax
        push 0x30
        push ecx
        call dword ptr [mem_00925694]
        mov dword ptr [ebp + 4], esi
    L_6b266a:
        mov eax, dword ptr [ebp + 4]
        mov ecx, dword ptr [ebp + 0xc]
        mov edx, dword ptr [mem_00B5D20C]
        push edi
        push eax
        mov eax, dword ptr [ecx + 0x20]
        push edx
        push eax
        call dword ptr [mem_00925694]
        mov ecx, dword ptr [esp + 0x50]
        mov eax, dword ptr [esp + 0x4c]
        mov edx, dword ptr [esp + 0x58]
        mov ebx, dword ptr [esp + 0x54]
        add ecx, 1
        mov dword ptr [esp + 0x50], ecx
        mov dword ptr [esp + 0x30], ecx
        mov ecx, dword ptr [esi + 0x20]
        add eax, 2
        sub edx, 1
        push ecx
        mov dword ptr [esp + 0x50], eax
        mov dword ptr [esp + 0x5c], edx
        mov dword ptr [esp + 0x30], eax
        mov dword ptr [esp + 0x3c], edx
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov ecx, dword ptr [ebp + 0xc]
        mov edi, eax
        mov edx, dword ptr [edi]
        mov dword ptr [esp + 0x10], edx
        call ext_006A7BF0
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [eax + 0x30]
        mov ecx, edi
        call edx
        push offset mem_009334D0
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x1c], eax
        call dword ptr [mem_009242F0]
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [edi + 8]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 0x18]
        mov edx, dword ptr [edx + 0x30]
        push eax
        mov ecx, edi
        call edx
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [esi + 0x20]
        push eax
        push ecx
        call dword ptr [mem_00925620]
        mov eax, dword ptr [esp + 0x58]
        sub eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x50]
        sub eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        add eax, ecx
        mov ecx, dword ptr [esp + 0x38]
        push 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x34]
        sub ebx, ecx
        push ebx
        push eax
        push ecx
        mov ecx, esi
        call ext_006A5E5A
        mov ebx, dword ptr [esp + 0x5c]
        push ebx
        mov ecx, esi
        call ext_006B0DE0
        mov edi, dword ptr [esi + 0x20]
        call dword ptr [mem_00925654]
        cmp eax, edi
        je L_6b285b
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242FC]
        lea edx, [esp + 0x14]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x48], 0
        call ext_006A5F4A
        mov ecx, ebx
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp + 0x44], 1
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_0092449C]
        test eax, eax
        lea ecx, [esp + 0x18]
        setne byte ptr [esp + 0x5c]
        mov byte ptr [esp + 0x44], 0
        call dword ptr [mem_009242F4]
        cmp byte ptr [esp + 0x5c], 0
        je L_6b2849
        mov ecx, ebx
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x5c]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp + 0x44], 2
        call dword ptr [mem_00924300]
        push eax
        mov ecx, esi
        call ext_006A5F50
        lea ecx, [esp + 0x5c]
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [esi + 0x20]
        mov edi, dword ptr [mem_00925694]
        push -1
        push 0
        push 0xb1
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x20]
        push 0
        push 0
        push 0xb7
        push ecx
        call edi
    L_6b2849:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x44], 0xffffffff
        call dword ptr [mem_009242F4]
    L_6b285b:
        mov edx, dword ptr [esp + 0x4c]
        mov ecx, dword ptr [esp + 0x50]
        push ebx
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 0x68]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0x6c]
        mov dword ptr [eax + 8], edx
        mov dword ptr [eax + 0xc], ecx
        mov ecx, ebp
        call ext_006B0C10
        mov ecx, dword ptr [esp + 0x3c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x38
        ret 0x14
    }
}
