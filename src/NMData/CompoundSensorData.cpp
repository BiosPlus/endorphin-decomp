// Decompiled translation unit: src/NMData/CompoundSensorData.cpp

// [0x0060F640] NMData::CompoundSensorData::vfunc_62 (89 bytes)
extern "C" void ext_0060E540();
extern "C" void ext_00406510();
extern "C" int mem_00925134;
extern "C" int mem_00924EA8;

extern "C" __declspec(naked) void __fastcall fn_0060F640(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call ext_0060E540
        mov ebx, dword ptr [edi + 0x188]
        cmp dword ptr [edi + 0x184], ebx
        lea esi, [edi + 0x180]
        jbe L_skip1
        call dword ptr [mem_00925134]
    L_skip1:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L_skip2
        call dword ptr [mem_00925134]
    L_skip2:
        push ebx
        push esi
        push ebp
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00406510
        lea ecx, [edi + 0x190]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        jmp dword ptr [mem_00924EA8]
    }
}

// [0x006108F0] NMData::CompoundSensorData::vfunc_8 (37 bytes)
extern "C" void ext_00610730();

extern "C" __declspec(naked) void* __fastcall fn_006108F0(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp+0Ch]
        add ecx, 154h
        push ecx
        push esi
        mov dword ptr [esp+0Ch], 0
        call ext_00610730
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x00610920] NMData::CompoundSensorData::vfunc_59 (318 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_005DF5C0();
extern "C" void ext_00610630();
extern "C" int mem_00924FEC;
extern "C" int mem_00924FE0;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00610920(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea edi, [ebp + 0x190]
        mov ecx, edi
        xor esi, esi
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_61095C
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x2c], esp
        push edi
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x34]
        add ecx, 0x598
        call ext_005DF5C0
        mov esi, eax
    L_61095C:
        push 1
        lea eax, [ebp + 0x154]
        push 0
        push eax
        call ext_00610630
        fld dword ptr [ebp + 0x174]
        mov edi, eax
        mov edx, dword ptr [edi]
        fstp qword ptr [edi + 0x18]
        fld dword ptr [ebp + 0x178]
        mov eax, dword ptr [edx + 0x68]
        add esp, 0xc
        fstp qword ptr [edi + 0x20]
        push esi
        mov ecx, edi
        call eax
        mov esi, dword ptr [ebp + 0x184]
        cmp esi, dword ptr [ebp + 0x188]
        lea ebx, [ebp + 0x180]
        jbe L_6109B0
        call dword ptr [mem_00925134]
        jmp L_6109B0
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_6109B0:
        mov eax, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], eax
        mov dword ptr [esp + 0x10], eax
        jbe L_6109C2
        call dword ptr [mem_00925134]
    L_6109C2:
        mov eax, ebx
        test eax, eax
        je L_6109CC
        cmp eax, ebx
        je L_6109D2
    L_6109CC:
        call dword ptr [mem_00925134]
    L_6109D2:
        cmp esi, dword ptr [esp + 0x10]
        je L_610A44
        mov eax, ebx
        test eax, eax
        jne L_6109E4
        call dword ptr [mem_00925134]
    L_6109E4:
        mov eax, ebx
        cmp esi, dword ptr [eax + 0x8]
        jb L_6109F1
        call dword ptr [mem_00925134]
    L_6109F1:
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x2c], esp
        push esi
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x34]
        add ecx, 0x550
        call ext_005DF5C0
        test eax, eax
        je L_610A2F
        mov eax, dword ptr [eax + 0x170]
        test eax, eax
        je L_610A2F
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [edi + 0x28]
        mov dword ptr [esp + 0x14], eax
        call ext_0041A920
    L_610A2F:
        mov eax, ebx
        cmp esi, dword ptr [eax + 0x8]
        jb L_610A3C
        call dword ptr [mem_00925134]
    L_610A3C:
        add esi, 0x1c
        jmp L_6109B0
    L_610A44:
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [ebp + 0x170], edi
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr [ebp + 0x17c], edx
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x0060EEB0] NMData::CompoundSensorData::vfunc_22 (304 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0060E590();
extern "C" void ext_0063F8D0();
extern "C" void ext_00640110();
extern "C" void ext_00640270();
extern "C" void ext_006404E0();
extern "C" int mem_00A9EDD8;
extern "C" int mem_00A9EFE8;
extern "C" int mem_00A9F7F4;
extern "C" int mem_00924FF0;
extern "C" int mem_00925134;
extern "C" int mem_00A9F268;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0060EEB0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        mov eax, dword ptr [mem_00A9EDD8]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x44]
        push eax
        call ext_006404E0
        mov edi, eax
        push edi
        mov ecx, esi
        call ext_0060E590
        mov ecx, dword ptr [mem_00A9EFE8]
        push ecx
        mov ecx, edi
        call ext_006404E0
        mov edx, dword ptr [mem_00A9F7F4]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x18], eax
        call ext_00640110
        lea ecx, [esi + 0x190]
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
        mov edi, dword ptr [esi + 0x184]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x180
        cmp edi, dword ptr [esi + 0x8]
        jbe L_60EF40
        call ebp
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_60EF40:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_60EF4A
        call ebp
    L_60EF4A:
        cmp esi, esi
        je L_60EF50
        call ebp
    L_60EF50:
        cmp edi, ebx
        je L_60EFC7
        mov eax, dword ptr [mem_00A9F268]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call ext_006404E0
        cmp edi, dword ptr [esi + 0x8]
        mov ebx, eax
        jb L_60EF6C
        call ebp
    L_60EF6C:
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, ebx
        mov ebp, eax
        call ext_0063F8D0
        push ebp
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, ebx
        mov dword ptr [esp + 0x40], 0
        call ext_00640270
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x3c], -1
        call dword ptr [mem_00924FF4]
        cmp edi, dword ptr [esi + 0x8]
        jb L_60EFB9
        call dword ptr [mem_00925134]
    L_60EFB9:
        mov ebp, dword ptr [mem_00925134]
        add edi, 0x1c
        jmp L_60EF40
    L_60EFC7:
        mov ecx, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x44]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 0x4
    }
}

// [0x0060F6A0] NMData::CompoundSensorData::vfunc_21 (382 bytes)
extern "C" void ext_0060E890();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_004275E0();
extern "C" void ext_00427A60();
extern "C" void ext_0040ECB0();
extern "C" int mem_00A9EFE8;
extern "C" int mem_00A9F7F4;
extern "C" int mem_00925134;
extern "C" int mem_00A9F268;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0060F6A0(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0x0]
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x34
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0xf8]
        push esi
        push edi
        call edx
        mov esi, dword ptr [esp + 0x54]
        push esi
        mov ecx, ebx
        call ext_0060E890
        mov eax, dword ptr [mem_00A9EFE8]
        push 1
        push 0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_0060F6A0_08
        cmp eax, 0xb53b30
        je L_0060F6A0_08
        cmp eax, 0xb53ab0
        je L_0060F6A0_08
        cmp eax, 0xb53a70
        je L_0060F6A0_08
        cmp eax, 0xb53af0
        jne L_0060F6A0_07
    L_0060F6A0_08:
        mov edi, 0xb53b30
        jmp L_0060F6A0_09
    L_0060F6A0_07:
        mov edi, eax
    L_0060F6A0_09:
        mov ecx, dword ptr [mem_00A9F7F4]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea edx, [ebx + 0x190]
        push edx
        call ext_004275E0
        mov ebp, dword ptr [mem_00925134]
        lea esi, [edi + 0x24]
        mov edi, dword ptr [esi + 0x4]
        add esp, 0x8
        cmp edi, dword ptr [esi + 0x8]
        jbe L_0060F6A0_10
        call ebp
    L_0060F6A0_10:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_0060F6A0_11
        call ebp
    L_0060F6A0_11:
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        lea ecx, [esp + 0x1c]
    L_0060F6A0_LOOP:
        call ext_00427A60
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        je L_0060F6A0_12
        cmp edi, dword ptr [esp + 0x20]
        je L_0060F6A0_13
    L_0060F6A0_12:
        call ebp
    L_0060F6A0_13:
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [esp + 0x24]
        jae L_0060F6A0_END
        test edi, edi
        jne L_0060F6A0_14
        call ebp
    L_0060F6A0_14:
        cmp esi, dword ptr [edi + 0x8]
        jb L_0060F6A0_15
        call ebp
    L_0060F6A0_15:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [mem_00A9F268]
        push ecx
        add eax, 0x4
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_0060F6A0_SKIP
        cmp esi, dword ptr [edi + 0x8]
        jb L_0060F6A0_16
        call ebp
    L_0060F6A0_16:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x8]
        lea eax, [esp + 0x28]
        push eax
        call edx
        push eax
        lea ecx, [ebx + 0x180]
        mov dword ptr [esp + 0x50], 0x0
        call ext_0040ECB0
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x4c], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_0060F6A0_SKIP:
        cmp esi, dword ptr [edi + 0x8]
        jb L_0060F6A0_17
        call ebp
    L_0060F6A0_17:
        add esi, 0x4
        mov dword ptr [esp + 0x18], esi
        lea ecx, [esp + 0x10]
        jmp L_0060F6A0_LOOP
    L_0060F6A0_END:
        mov ecx, dword ptr [esp + 0x44]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x40
        ret 0x4
    }
}
