// Decompiled translation unit: src/classes/ListBox.cpp

extern "C" void ext_0042ECC0();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6004();
extern "C" void ext_006A617E();
extern "C" int mem_00925658;
extern "C" int mem_0093A0C0;
extern "C" int mem_0093A0B0;
extern "C" int mem_0093A0BC;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;
extern "C" int mem_00925620;

// [0x0042ED30] ListBox::vfunc_81 (275 bytes)
extern "C" __declspec(naked) void __fastcall fn_0042ED30(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b7418
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x20]
        push eax
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov esi, eax
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esp + 0xc], 0x92a5d4
        mov ebx, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [ebx + 0x8]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x28], 0x0
        call ext_0042ECC0
        test al, al
        push 0x0
        je L1
        mov edx, dword ptr [mem_0093A0C0]
        mov eax, dword ptr [mem_0093A0B0]
        push edx
        push eax
        jmp L2
    L1:
        mov ecx, dword ptr [mem_0093A0BC]
        mov edx, dword ptr [mem_0093A0B0]
        push ecx
        push edx
    L2:
        lea ecx, [esp + 0x18]
        call ext_006A617E
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x30]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call edx
        push 0x92f674
        lea ecx, [esp + 0x30]
        call dword ptr [mem_009242F0]
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x30]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x8]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [esp + 0x18]
        add edx, 0x1
        mov dword ptr [ebx + 0x10], edx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [edi + 0x20]
        push eax
        push ecx
        call dword ptr [mem_00925620]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x24], 0xffffffff
        mov dword ptr [esp + 0xc], 0x92a23c
        call ext_006A5FF2
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x4
    }
}
