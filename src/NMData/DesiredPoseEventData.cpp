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

// [0x004869A0] NMData::DesiredPoseEventData::vfunc_59 (34 bytes)
extern "C" void ext_006404E0();
extern "C" int mem_00A9EE2C;
extern "C" __declspec(naked) void __fastcall fn_004869A0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9EE2C]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0Ch]
        mov edi, dword ptr [esi]
        push eax
        call ext_006404E0
        mov edx, dword ptr [edi + 58h]
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x00486A70] NMData::DesiredPoseEventData::vfunc_74 (35 bytes)
extern "C" void ext_005A3DF0();
extern "C" void ext_004C0340();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_00486A70(void* self) {
    __asm {
        mov eax, dword ptr [mem_00B40640]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 19Ch]
        push ecx
        mov ecx, dword ptr [esi + 168h]
        call ext_005A3DF0
        mov ecx, esi
        pop esi
        jmp ext_004C0340
    }
}

// [0x0048DE30] NMData::DesiredPoseEventData::vfunc_87 (58 bytes)
extern "C" void ext_0048D350();
extern "C" void ext_0048D390();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0048DE30(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 234h]
        test ecx, ecx
        je short L_done
        push edi
        call ext_0048D350
        mov edi, dword ptr [esi + 234h]
        test edi, edi
        je short L_clear
        mov ecx, edi
        call ext_0048D390
        push edi
        call ext_006A5C5C
        add esp, 4
    L_clear:
        mov dword ptr [esi + 234h], 0
        pop edi
    L_done:
        pop esi
        ret
    }
}

// [0x00486C40] NMData::DesiredPoseEventData::vfunc_14 (60 bytes)
extern "C" void ext_004C2070();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void* __fastcall fn_00486C40(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x130
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je special
        push eax
        push esi
        call ext_004C2070
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    special:
        add ecx, 0x224
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
