// Decompiled translation unit: src/classes/GWCPropertyItem.cpp

extern "C" void ext_006A6010();
extern "C" void ext_006A6172();
extern "C" void ext_006A7BF0();
extern "C" void ext_006ACE40();
extern "C" void ext_006ACF10();
extern "C" void ext_006ACFD0();
extern "C" void ext_006AD010();
extern "C" void ext_006AD440();
extern "C" void ext_006AD4D0();
extern "C" void ext_006AD580();
extern "C" void ext_006AD890();
extern "C" void ext_006AF310();
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

// [0x006AD600] GWCPropertyItem::vfunc_7 (516 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AD600(void* self) {
    __asm {
        push -1
        push 0x87cee9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea eax, [esp + 0x70]
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, edi
        call ext_006ACE40
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        call ext_006AD440
        mov edx, dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0x6c]
        push edx
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_006A6172
        lea ecx, [esp + 0x1c]
        push ecx
        lea edx, [esp + 0x74]
        push edx
        push esi
        mov ecx, edi
        call ext_006AD4D0
        lea eax, [esp + 0x2c]
        push eax
        lea ecx, [esp + 0x20]
        xor ebp, ebp
        push ecx
        push esi
        mov ecx, edi
        mov dword ptr [esp + 0x38], ebp
        mov dword ptr [esp + 0x3c], ebp
        mov dword ptr [esp + 0x40], ebp
        mov dword ptr [esp + 0x44], ebp
        call ext_006AD580
        mov ecx, dword ptr [edi + 0x14]
        mov ebx, dword ptr [esi]
        call ext_006A7BF0
        mov edx, dword ptr [ebx + 0x30]
        push eax
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x70]
        mov edx, dword ptr [esp + 0x74]
        sub esp, 0x10
        mov dword ptr [esp + 0x20], eax
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x88]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x8c]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, edi
        mov dword ptr [eax + 0xc], edx
        call ext_006ACFD0
        mov ecx, eax
        call ext_006AF310
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov ebx, dword ptr [esp + 0x28]
        lea eax, [ecx + eax + 0x3]
        mov dword ptr [esp + 0x3c], ecx
        mov ecx, dword ptr [esp + 0x2c]
        sub ecx, dword ptr [esp + 0x34]
        mov dword ptr [esp + 0x40], edx
        mov edx, dword ptr [esp + 0x24]
        lea edx, [edx + ecx - 0x4]
        mov dword ptr [esp + 0x3c], eax
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 0x48], ebx
        mov dword ptr [esp + 0x44], edx
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [eax + 0x38]
        push ecx
        mov ecx, esi
        call edx
        push 0x1
        mov ecx, esi
        mov dword ptr [esp + 0x18], eax
        call ext_006A6010
        lea eax, [esp + 0x6c]
        push eax
        mov ecx, edi
        call ext_006AD010
        mov ebx, eax
        push 0x8024
        lea ecx, [esp + 0x40]
        push ecx
        mov dword ptr [esp + 0x6c], ebp
        mov ebp, dword ptr [esi]
        mov ecx, ebx
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, ebx
        call dword ptr [mem_00924300]
        mov edx, dword ptr [ebp + 0x70]
        push eax
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x64], 0xffffffff
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x70]
        mov edx, dword ptr [esp + 0x74]
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x88]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x8c]
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], edx
        lea eax, [esp + 0x5c]
        push eax
        mov ecx, edi
        call ext_006ACF10
        mov edx, dword ptr [esi]
        mov ebx, dword ptr [esp + 0x18]
        mov eax, dword ptr [edx + 0x38]
        push ebx
        mov ecx, esi
        call eax
        mov ecx, dword ptr [edi + 0x44]
        mov dword ptr [ecx + 0x3c], ebx
        mov edx, dword ptr [edi + 0x4]
        movzx eax, byte ptr [edx + 0x4]
        movzx ecx, byte ptr [edi + 0x40]
        push eax
        push ecx
        mov ecx, dword ptr [edi + 0x44]
        lea edx, [esp + 0x54]
        push edx
        push esi
        call ext_006AD890
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x30]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebp
        pop ebx
        add esp, 0x58
        ret 0x18
    }
}
