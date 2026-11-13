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
