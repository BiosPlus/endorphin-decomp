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

// [0x0048DD30] NMData::DesiredPoseEventData::vfunc_17_off_C (99 bytes)
extern "C" void ext_0048DB80();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0048DD30(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 238h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_0048DD30_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_0048DB80
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_0048DD30_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

extern "C" void ext_00427550();
extern "C" void ext_004C1DE0();
extern "C" void ext_004E9CB0();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_006404E0();
extern "C" void ext_0067EF60();
extern "C" int mem_00A9F9C4;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F1A4;
extern "C" int mem_00A9F1A8;

// [0x004869D0] NMData::DesiredPoseEventData::vfunc_22 (149 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004869D0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0Ch]
        push edi
        mov esi, ecx
        call ext_004C1DE0
        mov eax, dword ptr [mem_00A9F9C4]
        push eax
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 180h]
        mov dword ptr [esp + 0Ch], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 10h]
        call ext_00427550
        fld dword ptr [esi + 220h]
        push 093c688h
        push 093c674h
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        mov ecx, dword ptr [mem_00A9F1A4]
        add esp, 10h
        push ecx
        mov ecx, edi
        call ext_006404E0
        mov edx, dword ptr [esi + 19Ch]
        lea ecx, [esi + 19Ch]
        push eax
        mov eax, dword ptr [edx + 0Ch]
        call eax
        mov ecx, dword ptr [mem_00A9F1A8]
        push 0
        push ecx
        mov ecx, edi
        call ext_00640390
        push eax
        lea ecx, [esi + 224h]
        call ext_004E9CB0
        mov eax, edi
        pop edi
        pop esi
        ret 4
    }
}

extern "C" void ext_00660A50();
extern "C" void ext_0048BC80();
extern "C" void ext_0048DDA0();

// [0x0048DE90] NMData::DesiredPoseEventData::vfunc_88 (117 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048DE90(void* self) {
    __asm {
        push -1
        push 0x0087BA98
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x10
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0x0C], edi
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], edi
        push edi
        lea eax, [esp + 0x0C]
        push eax
        lea ecx, [esi + 0x16C]
        push ecx
        mov dword ptr [esp + 0x2C], edi
        call ext_00660A50
        mov ecx, eax
        call ext_0048BC80
        lea edx, [esp + 0x08]
        push edx
        mov ecx, esi
        call ext_0048DDA0
        mov eax, dword ptr [esp + 0x0C]
        cmp eax, edi
        pop edi
        pop esi
        je done
        push eax
        call ext_006A5C5C
        add esp, 4
    done:
        mov ecx, dword ptr [esp + 0x10]
        mov fs:[0], ecx
        add esp, 0x1C
        ret
    }
}

extern "C" void ext_004275E0();
extern "C" void ext_004C24C0();
extern "C" void ext_004E9BD0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0067EE80();
extern "C" int mem_00A9F9C4;
extern "C" int mem_00A9F1A4;
extern "C" int mem_00A9F1A8;

// [0x00487B00] NMData::DesiredPoseEventData::vfunc_21 (254 bytes)
extern "C" __declspec(naked) void __fastcall fn_00487B00(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0Ch]
        push edi
        mov esi, ecx
        call ext_004C24C0
        mov eax, dword ptr [mem_00A9F9C4]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esi + 180h]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F1A4]
        add esp, 8
        push 1
        push 0
        push edx
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0B53A34h
        je L_487_B60
        cmp eax, 0B53B30h
        je L_487_B60
        cmp eax, 0B53AB0h
        je L_487_B60
        cmp eax, 0B53A70h
        je L_487_B60
        cmp eax, 0B53AF0h
        jne L_487_B65
    L_487_B60:
        mov eax, 0B53B30h
    L_487_B65:
        mov edx, dword ptr [esi + 19Ch]
        lea ecx, [esi + 19Ch]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        mov ecx, dword ptr [mem_00A9F1A8]
        push 1
        push 0
        push ecx
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0B53A34h
        je L_487_BAC
        cmp eax, 0B53B30h
        je L_487_BAC
        cmp eax, 0B53AB0h
        je L_487_BAC
        cmp eax, 0B53A70h
        je L_487_BAC
        cmp eax, 0B53AF0h
        jne L_487_BB1
    L_487_BAC:
        mov eax, 0B53B30h
    L_487_BB1:
        cmp eax, 0B53A34h
        je L_487_BE0
        cmp eax, 0B53B30h
        je L_487_BE0
        cmp eax, 0B53AB0h
        je L_487_BE0
        cmp eax, 0B53A70h
        je L_487_BE0
        cmp eax, 0B53AF0h
        je L_487_BE0
        push eax
        lea ecx, [esi + 224h]
        call ext_004E9BD0
    L_487_BE0:
        push 93C688h
        push 93C674h
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 220h]
        add esp, 0Ch
        pop edi
        pop esi
        ret 4
    }
}

// [0x0048B580] NMData::DesiredPoseEventData::vfunc_90 (287 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_004C28C0();
extern "C" void ext_00673C20();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134; /* MSVCR80!_invalid_parameter_noinfo */
extern "C" int mem_00924FF4; /* MSVCP80!std::basic_string destructor */

extern "C" __declspec(naked) void __fastcall fn_0048B580(void* self) {
    __asm {
        push -0x1
        push 0x8b6151
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x40
        mov eax, dword ptr [ecx + 0x168]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x4], ecx
        je loc_48b68f
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x2c], ebx
        mov dword ptr [esp + 0x30], ebx
        lea edi, [eax + 0x5a4]
        mov eax, dword ptr [edi + 0x4]
        mov eax, dword ptr [eax]
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0x58], ebx
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], ebp
    loc_48b5d7:
        cmp esi, ebx
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x20], eax
        je loc_48b5e6
        cmp esi, edi
        je loc_48b5ec
    loc_48b5e6:
        call dword ptr [mem_00925134]
    loc_48b5ec:
        cmp ebp, dword ptr [esp + 0x20]
        je loc_48b646
        cmp esi, ebx
        jne loc_48b5fc
        call dword ptr [mem_00925134]
    loc_48b5fc:
        cmp ebp, dword ptr [esi + 0x4]
        jne loc_48b607
        call dword ptr [mem_00925134]
    loc_48b607:
        mov ecx, dword ptr [ebp + 0x28]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xc]
        lea eax, [esp + 0x34]
        push eax
        call edx
        push eax
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0x5c], 0x1
        call ext_0040ECB0
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x58], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x14]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x18]
        mov esi, dword ptr [esp + 0x14]
        jmp loc_48b5d7
    loc_48b646:
        mov ecx, dword ptr [esp + 0x10]
        lea eax, [esp + 0x24]
        push eax
        call ext_004C28C0
        mov esi, dword ptr [esp + 0x28]
        cmp esi, ebx
        mov dword ptr [esp + 0x58], 0xffffffff
        je loc_48b68c
        mov edi, dword ptr [esp + 0x2c]
        cmp esi, edi
        je loc_48b683
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    loc_48b670:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, edi
        jne loc_48b670
        mov esi, dword ptr [esp + 0x28]
    loc_48b683:
        push esi
        call ext_006A5C5C
        add esp, 0x4
    loc_48b68c:
        pop edi
        pop esi
        pop ebp
    loc_48b68f:
        mov ecx, dword ptr [esp + 0x44]
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x4c
        ret
    }
}
