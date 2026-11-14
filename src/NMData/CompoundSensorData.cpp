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
