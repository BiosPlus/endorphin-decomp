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
