// Decompiled translation unit: src/NMData/DesiredPoseEventData.cpp

extern "C" void ext_004C1BD0();
extern "C" void ext_004C2230();
extern "C" void ext_004C2250();
extern "C" void ext_004C2270();
extern "C" void ext_00671F30();

// [0x004C3410] NMData::DesiredPoseEventData::vfunc_15 (156 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C3410(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0Ch]
        cmp eax, 334h
        push esi
        mov dword ptr [esp + 4], 0
        jg L_477
        je L_44D
        sub eax, 24Ah
        je L_462
        sub eax, 1Ch
        je L_44D
        sub eax, 6Eh
        jne L_483
    L_438:
        mov esi, dword ptr [esp + 0Ch]
        push ecx
        push esi
        call ext_004C2230
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_44D:
        mov esi, dword ptr [esp + 0Ch]
        push ecx
        push esi
        call ext_004C2250
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_462:
        mov esi, dword ptr [esp + 0Ch]
        push ecx
        push esi
        call ext_004C2270
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_477:
        sub eax, 361h
        je L_438
        sub eax, 25h
        je L_497
    L_483:
        mov esi, dword ptr [esp + 0Ch]
        push esi
        call ext_00671F30
        add esp, 4
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_497:
        mov esi, dword ptr [esp + 0Ch]
        push ecx
        push esi
        call ext_004C1BD0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}
