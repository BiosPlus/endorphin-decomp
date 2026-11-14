// Decompiled translation unit: src/classes/XMLSchema.cpp

extern "C" void ext_00406510();
extern "C" void ext_0040ECB0();
extern "C" void ext_00427A60();
extern "C" void ext_0048AE00();
extern "C" void ext_0050BE20();
extern "C" void ext_00596660();
extern "C" void ext_0067A350();
extern "C" void ext_0067A370();
extern "C" void ext_0068B540();

extern "C" int mem_00925134;
extern "C" int mem_00924FC0;
extern "C" int mem_009251EC;

extern "C" int mem_0098C530;
extern "C" int mem_0098C520;
extern "C" int mem_0098C510;

// [0x0067A390] XMLSchema::vfunc_1 (722 bytes)
extern "C" __declspec(naked) void __fastcall fn_0067A390(void* self) {
    __asm {
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov esi, dword ptr [ebx + 0x4c]
        cmp dword ptr [ebx + 0x48], esi
        push edi
        lea edi, [ebx + 0x44]
        mov dword ptr [esp + 0x18], edi
        jbe L_67A3AE
        call dword ptr [mem_00925134]
    L_67A3AE:
        mov ebp, dword ptr [edi + 0x4]
        cmp ebp, dword ptr [edi + 0x8]
        jbe L_67A3BC
        call dword ptr [mem_00925134]
    L_67A3BC:
        push esi
        push edi
        push ebp
        push edi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, edi
        call ext_00596660
        mov edi, dword ptr [ebx + 0x5c]
        cmp dword ptr [ebx + 0x58], edi
        lea esi, [ebx + 0x54]
        jbe L_67A3DD
        call dword ptr [mem_00925134]
    L_67A3DD:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L_67A3EB
        call dword ptr [mem_00925134]
    L_67A3EB:
        push edi
        push esi
        push ebp
        push esi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        call ext_00406510
        mov edi, dword ptr [ebx + 0x6c]
        cmp dword ptr [ebx + 0x68], edi
        lea esi, [ebx + 0x64]
        jbe L_67A40C
        call dword ptr [mem_00925134]
    L_67A40C:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L_67A41A
        call dword ptr [mem_00925134]
    L_67A41A:
        push edi
        push esi
        push ebp
        push esi
        lea edx, [esp + 0x20]
        push edx
        mov ecx, esi
        call ext_00596660
        lea ecx, [ebx + 0x14]
        call ext_0050BE20
        lea ecx, [ebx + 0x34]
        call ext_0050BE20
        lea ecx, [ebx + 0x24]
        call ext_0050BE20
        mov esi, dword ptr [ebx + 0xc]
        cmp dword ptr [ebx + 0x8], esi
        lea ebp, [ebx + 0x4]
        mov dword ptr [esp + 0x10], ebp
        jbe L_67A457
        call dword ptr [mem_00925134]
    L_67A457:
        mov edi, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ebp + 0x8]
        jbe L_67A465
        call dword ptr [mem_00925134]
    L_67A465:
        push esi
        push ebp
        push edi
        push ebp
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, ebp
        call ext_00406510
        mov ebp, dword ptr [esp + 0x38]
        mov esi, dword ptr [ebp + 0x28]
        mov edi, dword ptr [mem_00925134]
        add ebp, 0x24
        cmp esi, dword ptr [ebp + 0x8]
        jbe L_67A48C
        call edi
    L_67A48C:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x20], ebp
        mov dword ptr [esp + 0x24], esi
        call ext_00427A60
    L_67A4A1:
        mov esi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], esi
        jbe L_67A4AB
        call edi
    L_67A4AB:
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x28], ebp
        mov dword ptr [esp + 0x2c], ebp
        mov dword ptr [esp + 0x30], esi
        call ext_00427A60
        mov esi, dword ptr [esp + 0x20]
        test esi, esi
        je L_67A4CE
        cmp esi, dword ptr [esp + 0x2c]
        je L_67A4D0
    L_67A4CE:
        call edi
    L_67A4D0:
        mov edi, dword ptr [esp + 0x24]
        cmp edi, dword ptr [esp + 0x30]
        jae L_67A58C
        test esi, esi
        jne L_67A4E8
        call dword ptr [mem_00925134]
    L_67A4E8:
        cmp edi, dword ptr [esi + 0x8]
        jb L_67A4F3
        call dword ptr [mem_00925134]
    L_67A4F3:
        mov esi, dword ptr [edi]
        lea edi, [esi + 0x4]
        push offset mem_0098C530
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_67A517
        push 0x0
        push esi
        mov ecx, ebx
        call ext_0067A350
        jmp L_67A560
    L_67A517:
        push offset mem_0098C520
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_67A536
        push 0x0
        push esi
        mov ecx, ebx
        call ext_0067A370
        jmp L_67A560
    L_67A536:
        push offset mem_0098C510
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_67A560
        push 0x0
        push esi
        mov ecx, ebx
        call ext_0067A370
        mov ecx, dword ptr [esp + 0x10]
        add eax, 0x10
        push eax
        call ext_0040ECB0
    L_67A560:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x24]
        cmp edx, dword ptr [ecx + 0x8]
        jb L_67A573
        call dword ptr [mem_00925134]
    L_67A573:
        add dword ptr [esp + 0x24], 0x4
        lea ecx, [esp + 0x1c]
        call ext_00427A60
        mov edi, dword ptr [mem_00925134]
        jmp L_67A4A1
    L_67A58C:
        mov ebx, dword ptr [esp + 0x18]
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        jbe L_67A5A0
        call dword ptr [mem_00925134]
        mov edi, edi
    L_67A5A0:
        mov edi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], edi
        mov ebp, dword ptr [mem_00925134]
        jbe L_67A5B0
        call ebp
    L_67A5B0:
        cmp ebx, ebx
        je L_67A5B6
        call ebp
    L_67A5B6:
        cmp esi, edi
        je L_67A5D4
        cmp esi, dword ptr [ebx + 0x8]
        jb L_67A5C1
        call ebp
    L_67A5C1:
        mov ecx, dword ptr [esi]
        call ext_0068B540
        cmp esi, dword ptr [ebx + 0x8]
        jb L_67A5CF
        call ebp
    L_67A5CF:
        add esi, 0x4
        jmp L_67A5A0
    L_67A5D4:
        mov edi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], edi
        jbe L_67A5DE
        call ebp
    L_67A5DE:
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        jbe L_67A5E8
        call ebp
    L_67A5E8:
        cmp esi, edi
        je L_67A618
        mov eax, dword ptr [ebx + 0x8]
        sub eax, edi
        sar eax, 0x2
        test eax, eax
        lea ecx, [4 * eax]
        lea ebp, [ecx + esi]
        jle L_67A60F
        push ecx
        push edi
        push ecx
        push esi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L_67A60F:
        mov dword ptr [ebx + 0x8], ebp
        mov ebp, dword ptr [mem_00925134]
    L_67A618:
        mov ebx, dword ptr [esp + 0x10]
        mov edi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], edi
        jbe L_67A626
        call ebp
    L_67A626:
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        jbe L_67A630
        call ebp
    L_67A630:
        cmp ebx, ebx
        je L_67A636
        call ebp
    L_67A636:
        mov ecx, edi
        sub ecx, esi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        push eax
        push edi
        push esi
        call ext_0048AE00
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0x4
    }
}
