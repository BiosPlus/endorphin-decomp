// Decompiled translation unit: src/NMData/BehaviourData.cpp

// [0x00486C20] NMData::BehaviourData::vfunc_68 (31 bytes)
extern "C" void ext_0047D300();
extern "C" int mem_00AE29D0;

extern "C" __declspec(naked) void __fastcall fn_00486C20(void* self) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        mov byte ptr [ecx + 0x17c], al
        mov ecx, dword ptr [ecx + 0x168]
        mov dword ptr [esp + 0x4], ecx
        mov ecx, dword ptr [mem_00AE29D0]
        jmp ext_0047D300
    }
}

// [0x004A9C60] NMData::BehaviourData::vfunc_69 (35 bytes)
extern "C" void ext_004C1AF0();

extern "C" __declspec(naked) void __fastcall fn_004A9C60(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_004C1AF0
        mov ecx, dword ptr [esi + 0x168]
        pop esi
        mov dword ptr [esp + 0x4], ecx
        mov ecx, dword ptr [mem_00AE29D0]
        jmp ext_0047D300
    }
}

// [0x004A9C90] NMData::BehaviourData::vfunc_73 (35 bytes)
extern "C" void ext_004C1B20();

extern "C" __declspec(naked) void __fastcall fn_004A9C90(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_004C1B20
        mov ecx, dword ptr [esi + 0x168]
        pop esi
        mov dword ptr [esp + 0x4], ecx
        mov ecx, dword ptr [mem_00AE29D0]
        jmp ext_0047D300
    }
}

// [0x004ABF60] NMData::BehaviourData::vfunc_87 (133 bytes)
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004ABF60(void* self) {
    __asm {
        sub esp, 0x8
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x184], 0
        je short L_end
        mov eax, dword ptr [edi + 0x10]
        test eax, eax
        je short L_skip1
        mov eax, dword ptr [eax + 0x10]
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x14]
        call eax
    L_skip1:
        push ebx
        mov ebx, dword ptr [edi + 0x3e0]
        cmp dword ptr [edi + 0x3dc], ebx
        push ebp
        push esi
        lea esi, [edi + 0x3d8]
        jbe short L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe short L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        push ebx
        push esi
        push ebp
        push esi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        call ext_00596660
        mov ecx, dword ptr [edi + 0x2f0]
        xor esi, esi
        cmp ecx, esi
        je short L_skip2
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
    L_skip2:
        mov dword ptr [edi + 0x2f0], esi
        mov dword ptr [edi + 0x184], esi
        pop esi
        pop ebp
        pop ebx
    L_end:
        pop edi
        add esp, 0x8
        ret
    }
}

// [0x004A9AC0] NMData::BehaviourData::vfunc_0_off_154 (141 bytes)
extern "C" void ext_00494000();
extern "C" void ext_004940E0();

extern "C" __declspec(naked) void __fastcall fn_004A9AC0(void* self, int edx_unused, int* a1, int* a2, int* a3, int* a4) {
    __asm {
        sub esp, 0xc
        push esi
        push 0x0
        push 0x0
        push 0x8
        lea ecx, [esp + 0x10]
        call ext_00494000
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x14]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        push 0x1
        push 0x1000
        mov ecx, esi
        mov dword ptr [esi + 0x8], eax
        call ext_004940E0
        push 0x1
        push 0x2000
        mov ecx, esi
        call ext_004940E0
        push 0x0
        push 0x0
        push 0x8
        lea ecx, [esp + 0x10]
        call ext_00494000
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        push 0x1
        push 0x1000
        mov dword ptr [ecx + 0x8], eax
        call ext_004940E0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [ecx], 0x2
        mov dword ptr [edx], 0x2
        pop esi
        add esp, 0xc
        ret 0x10
    }
}

// [0x004ABE70] NMData::BehaviourData::vfunc_8_off_C (145 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_00594000();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004ABE70(void* self, int edx_unused, int a1) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        push ebp
        mov ebp, ecx
        push esi
        lea esi, [ebp + 0x3cc]
        mov byte ptr [ebp + 0x5c], al
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_out
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 0x2
        je L_out
        push ebx
        push edi
        mov edi, eax
    L_top:
        cmp edi, dword ptr [esi + 0x8]
        jbe L_c1
        call dword ptr [mem_00925134]
    L_c1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_c2
        call dword ptr [mem_00925134]
    L_c2:
        cmp esi, esi
        je L_c3
        call dword ptr [mem_00925134]
    L_c3:
        cmp edi, ebx
        je L_done
        cmp edi, dword ptr [esi + 0x8]
        jb L_elem
        call dword ptr [mem_00925134]
    L_elem:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        mov edx, dword ptr [edx + 0x20]
        lea ecx, [eax + 0xc]
        movzx eax, byte ptr [ebp + 0x5c]
        push eax
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_next
        call dword ptr [mem_00925134]
    L_next:
        add edi, 0x4
        jmp L_c1
    L_done:
        call ext_00594000
        lea ecx, [eax + 0x258]
        call ext_00493EE0
        pop edi
        pop ebx
    L_out:
        pop esi
        pop ebp
        ret 0x4
    }
}

// [0x004ABDF0] NMData::BehaviourData::vfunc_15 (125 bytes)
extern "C" void ext_004ABAA0();
extern "C" void ext_004ABAC0();
extern "C" void ext_004C3410();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void __fastcall fn_004ABDF0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x361
        push esi
        mov dword ptr [esp + 0x4], 0x0
        jg short L_jg
        je short L_361
        mov edx, eax
        sub edx, 0x21b
        je short L_21b
        sub edx, 0x2c
        jne short L_default
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        call ext_004ABAC0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_21b:
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        call ext_004ABAA0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_jg:
        cmp eax, 0x386
        je short L_361
    L_default:
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        call ext_004C3410
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_361:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_006404E0();
extern "C" int mem_00A9F240;

// [0x004A9B70] NMData::BehaviourData::vfunc_59 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A9B70(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F240]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        mov edi, dword ptr [esi]
        push eax
        call ext_006404E0
        mov edx, dword ptr [edi + 0x58]
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004C8440] NMData::BehaviourData::vfunc_1_off_154 (112 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_004C28C0();
extern "C" int mem_008A1908;

extern "C" __declspec(naked) void __fastcall fn_004C8440(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push offset mem_008A1908
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], eax
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x10], eax
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x34]
        lea edx, [esp + 0x4]
        push edx
        call eax
        lea ecx, [esp + 0x4]
        push ecx
        lea ecx, [esi - 0x154]
        call ext_004C28C0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_004026E0
        mov ecx, dword ptr [esp + 0x14]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 4
    }
}

// [0x004A9A70] NMData::BehaviourData::vfunc_81 (80 bytes)
extern "C" void ext_004EC300();
extern "C" void ext_00594000();
extern "C" void ext_00594620();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_004A9A70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        test eax, eax
        je short L_end
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push ebp
        mov ecx, eax
        call ext_00594620
        mov ebx, eax
        test ebx, ebx
        je short L_pop_ebp_ebx
        push edi
        lea edi, [esi + 0x328]
        push ebp
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x148]
        push ebx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esi + 0x180]
        push edi
        call ext_004EC300
        pop edi
    L_pop_ebp_ebx:
        pop ebp
        pop ebx
    L_end:
        pop esi
        ret 0x4
    }
}

// [0x004AA020] NMData::BehaviourData::vfunc_34 (148 bytes)
extern "C" void ext_00493E40();
extern "C" void ext_00493E70();
extern "C" void ext_00528B90();
extern "C" void ext_005B5AF0();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_004AA020(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x88d648
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x8], 0
        test esi, esi
        mov dword ptr [esp + 0x14], 0
        je L_null
        lea eax, [esi + 0xc]
        jmp L_cont
    L_null:
        xor eax, eax
    L_cont:
        mov edx, dword ptr [mem_00B40640]
        push 0
        push eax
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0xc]
        lea ecx, [esi + 0x4]
        push edx
        call eax
        push eax
        call ext_005B5AF0
        mov edi, dword ptr [esp + 0x28]
        push eax
        mov ecx, edi
        call ext_00493E40
        test eax, eax
        je L_ret
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], 0
        call ext_00493E70
        mov edi, eax
        push eax
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0xc], edi
        call ext_00528B90
        mov eax, edi
    L_ret:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x004A9BA0] NMData::BehaviourData::vfunc_14 (97 bytes)
extern "C" void ext_004C2070();
extern "C" void ext_00661650();
extern "C" __declspec(naked) void* __fastcall fn_004A9BA0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x1b3
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0
        jne L_004A9BD7
        mov ecx, dword ptr [ecx + 0x180]
        mov eax, dword ptr [ecx + 0x10]
        mov edx, dword ptr [eax + 0x38]
        add ecx, 0x10
        push 0x1b3
        push esi
        call edx
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_004A9BD7:
        cmp eax, 0x117
        jne L_004A9BF3
        add ecx, 0x364
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_004A9BF3:
        push eax
        push esi
        call ext_004C2070
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004AC9F0] NMData::BehaviourData::vfunc_17_off_C (99 bytes)
extern "C" void ext_004AC750();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_004AC9F0(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 3e8h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_004AC9F0_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_004AC750
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_004AC9F0_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x004AB9D0] NMData::BehaviourData::vfunc_22 (159 bytes)
extern "C" void ext_00427550();
extern "C" void ext_004C1DE0();
extern "C" void ext_005006E0();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_00640A50();
extern "C" int mem_00A9F3B0;
extern "C" int mem_00A9F17C;
extern "C" int mem_00A9F480;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F6D4;
extern "C" int mem_00941C04;

extern "C" __declspec(naked) void __fastcall fn_004AB9D0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F3B0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x0
        mov esi, ecx
        mov ecx, dword ptr [mem_00A9F17C]
        mov edx, dword ptr [esi + 0x180]
        push eax
        push ecx
        add edx, 0x11c
        push edi
        push edx
        call ext_005006E0
        mov eax, dword ptr [mem_00A9F480]
        add esp, 0x14
        push eax
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x30c]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov ecx, dword ptr [mem_00A9F6D4]
        push ecx
        mov ecx, edi
        call ext_00640110
        mov edx, dword ptr [esi + 0x304]
        push edx
        push eax
        call ext_00640A50
        add esp, 0x8
        push 0x0
        push offset mem_00941C04
        mov ecx, edi
        call ext_00640390
        mov edx, dword ptr [esi + 0x368]
        lea ecx, [esi + 0x368]
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        push edi
        mov ecx, esi
        call ext_004C1DE0
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004ACCD0] NMData::BehaviourData::vfunc_82 (933 bytes)
extern "C" void ext_00401AC0();
extern "C" void ext_0040D9F0();
extern "C" void ext_00410D10();
extern "C" void ext_0041CCC0();
extern "C" void ext_0041CD60();
extern "C" void ext_00489320();
extern "C" void ext_0049AD40();
extern "C" void ext_004A9CE0();
extern "C" void ext_004A9E00();
extern "C" void ext_004ABA70();
extern "C" void ext_004AC8B0();
extern "C" void ext_004AD950();
extern "C" void ext_004AD960();
extern "C" void ext_004EE620();
extern "C" void ext_0050E360();
extern "C" void ext_00593F20();
extern "C" void ext_00594000();
extern "C" int mem_008848F2;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FB0;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FEC;
extern "C" int mem_00924FF4;
extern "C" int mem_00941EC0;
extern "C" int mem_00ADF358;
extern "C" int mem_00ADF5C4;
extern "C" int mem_00B58DFC;

extern "C" __declspec(naked) void __fastcall fn_004ACCD0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_008848F2
        push eax
        mov eax, dword ptr [esp + 10h]
        mov dword ptr fs:[0], esp
        sub esp, 50h
        push ebx
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 364h]
        mov dword ptr [esi + 168h], eax
        call ext_004EE620
        mov eax, dword ptr [esi + 168h]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esi + 2f4h], ebx
        je L_4ad062
        mov ecx, dword ptr [mem_00ADF358]
        cmp ecx, ebx
        je L_4ad062
        push ebp
        push edi
        lea edi, [eax + 458h]
        push edi
        call ext_004AD950
        mov dword ptr [esi + 2f4h], eax
        mov ecx, dword ptr [mem_00ADF358]
        push edi
        call ext_004AD960
        push offset mem_00941EC0
        mov dword ptr [esi + 2f8h], eax
        lea eax, [esp + 2ch]
        push edi
        push eax
        call dword ptr [mem_00924ECC]
        add esp, 0ch
        lea ecx, [esp + 28h]
        push ecx
        mov ecx, dword ptr [mem_00ADF358]
        mov dword ptr [esp + 6ch], ebx
        call ext_004AD950
        lea edx, [esp + 28h]
        mov dword ptr [esi + 2fch], eax
        mov ecx, dword ptr [mem_00ADF358]
        push edx
        call ext_004AD960
        lea ebp, [esi + 30ch]
        mov ecx, ebp
        mov dword ptr [esi + 300h], eax
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_4acfcd
        push offset mem_00ADF5C4
        push ebp
        call dword ptr [mem_00924FC4]
        add esp, 8
        test al, al
        je L_4ace62
        cmp byte ptr [mem_00B58DFC], bl
        jne L_4ace62
        call ext_00594000
        test eax, eax
        je L_4ace62
        call ext_00594000
        mov ecx, eax
        call ext_00593F20
        mov ecx, eax
        call ext_0041CD60
        cmp dword ptr [esi + 304h], eax
        mov dword ptr [esi + 308h], 0ffffffffh
        jge short L_4ace50
        call ext_00594000
        mov ecx, dword ptr [esi + 304h]
        push ecx
        lea ecx, [eax + 298h]
        call ext_0050E360
        mov eax, dword ptr [eax]
        mov ecx, esi
        mov dword ptr [esi + 180h], eax
        call ext_004A9CE0
        push eax
        lea edx, [esp + 48h]
        push edx
        mov ecx, esi
        call ext_004A9E00
        push eax
        lea ecx, [esi + 30h]
        mov byte ptr [esp + 6ch], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 44h]
        mov byte ptr [esp + 68h], bl
        call dword ptr [mem_00924FF4]
        jmp L_4ad04e

    L_4ace50:
        lea eax, [esi + 188h]
        mov dword ptr [esi + 304h], ebx
        mov dword ptr [esi + 180h], eax

    L_4ace62:
        mov ecx, dword ptr [esi + 2f4h]
        cmp ecx, ebx
        je L_4aceff
        lea edx, [esp + 18h]
        push edx
        call ext_00410D10
        mov ecx, dword ptr [esi + 2f4h]
        mov edi, eax
        lea eax, [esp + 20h]
        push eax
        call ext_00489320
        mov ecx, dword ptr [edi + 4]
        mov edx, dword ptr [edi]
        push ebp
        push ecx
        mov ecx, dword ptr [eax + 4]
        push edx
        mov edx, dword ptr [eax]
        push ecx
        push edx
        lea eax, [esp + 24h]
        push eax
        call ext_004ABA70
        add esp, 18h
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, dword ptr [esi + 2f4h]
        call ext_00410D10
        push eax
        lea ecx, [esp + 14h]
        call ext_0049AD40
        test al, al
        je short L_4aceff
        mov ecx, dword ptr [esi + 2f4h]
        lea edx, [esp + 20h]
        push edx
        call ext_00489320
        push eax
        lea ecx, [esp + 14h]
        call ext_0040D9F0
        mov dword ptr [esi + 304h], eax
        push eax

    L_4acee7:
        mov ecx, dword ptr [esi + 2f4h]
        call ext_0041CCC0
        push eax
        mov ecx, esi
        call ext_004AC8B0
        jmp L_4ad04e

    L_4aceff:
        mov ecx, dword ptr [esi + 2fch]
        cmp ecx, ebx
        je L_4acfa6
        lea eax, [esp + 20h]
        push eax
        call ext_00410D10
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 2fch]
        mov edi, eax
        call ext_00489320
        mov edx, dword ptr [edi + 4]
        mov ecx, dword ptr [edi]
        push ebp
        push edx
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [eax]
        push ecx
        push edx
        push eax
        lea ecx, [esp + 24h]
        push ecx
        call ext_004ABA70
        mov ecx, dword ptr [esi + 2fch]
        add esp, 18h
        lea edx, [esp + 20h]
        push edx
        call ext_00410D10
        push eax
        lea ecx, [esp + 14h]
        call ext_0049AD40
        test al, al
        je short L_4acfa6
        mov ecx, dword ptr [esi + 2fch]
        lea eax, [esp + 20h]
        push eax
        mov dword ptr [esi + 304h], 0ffffffffh
        call ext_00489320
        push eax
        lea ecx, [esp + 14h]
        call ext_0040D9F0
        mov ecx, dword ptr [esi + 2fch]
        push eax
        mov dword ptr [esi + 308h], eax
        call ext_0041CCC0
        push eax
        mov ecx, esi
        call ext_004AC8B0
        jmp L_4ad04e

    L_4acfa6:
        mov ecx, dword ptr [esi + 2f4h]
        cmp ecx, ebx
        je L_4ad048
        push ebx
        mov dword ptr [esi + 304h], ebx
        call ext_0041CCC0
        push eax
        mov ecx, esi
        call ext_004AC8B0
        jmp L_4ad04e

    L_4acfcd:
        cmp dword ptr [esi + 304h], ebx
        jge short L_4ad004
        mov edi, dword ptr [esi + 2fch]
        cmp edi, ebx
        je short L_4ad004
        mov ebx, dword ptr [esi + 308h]
        mov ecx, edi
        call ext_00401AC0
        cmp ebx, eax
        jae short L_4ad002
        push ebx
        mov ecx, edi
        call ext_0041CCC0
        push eax
        mov ecx, esi
        call ext_004AC8B0
        jmp short L_4ad04e

    L_4ad002:
        xor ebx, ebx

    L_4ad004:
        mov edi, dword ptr [esi + 2f4h]
        cmp edi, ebx
        je short L_4ad048
        mov ecx, edi
        call ext_00401AC0
        mov ecx, dword ptr [esi + 304h]
        cmp ecx, eax
        jae short L_4ad036
        push ebp
        push ecx
        mov ecx, edi
        call ext_0041CCC0
        push eax
        call dword ptr [mem_00924FB0]
        add esp, 8
        test al, al
        je short L_4ad03c

    L_4ad036:
        mov dword ptr [esi + 304h], ebx

    L_4ad03c:
        mov ecx, dword ptr [esi + 304h]
        push ecx
        jmp L_4acee7

    L_4ad048:
        mov dword ptr [esi + 304h], ebx

    L_4ad04e:
        lea ecx, [esp + 28h]
        mov dword ptr [esp + 68h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        pop edi
        pop ebp

    L_4ad062:
        mov ecx, dword ptr [esp + 58h]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 5ch
        ret 4
    }
}

// [0x004AD080] NMData::BehaviourData::vfunc_21 (693 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_0049FE40();
extern "C" void ext_004ABFF0();
extern "C" void ext_004AC270();
extern "C" void ext_004C24C0();
extern "C" void ext_004EC300();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_00682E00();
extern "C" void ext_00685AE0();

extern "C" int mem_00873202;
extern "C" int mem_00941C04;
extern "C" int mem_00B53A34;
extern "C" int mem_00B53B30;
extern "C" int mem_00B53AB0;
extern "C" int mem_00B53A70;
extern "C" int mem_00B53AF0;
extern "C" int mem_00AE29D0;
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F480;
extern "C" int mem_00A9F6D4;
extern "C" int mem_00924FDC;
extern "C" int mem_00A9F17C;
extern "C" int mem_00A9F3B0;
extern "C" int mem_00ADF9BC;
extern "C" int mem_00ADF9E0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_004AD080(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push offset mem_00873202
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 38h
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 50h]
        push esi
        push edi
        push ebp
        mov ebx, ecx
        call ext_004C24C0
        push 1
        push 0
        push offset mem_00941C04
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je short L_4ad0db
        cmp eax, offset mem_00B53B30
        je short L_4ad0db
        cmp eax, offset mem_00B53AB0
        je short L_4ad0db
        cmp eax, offset mem_00B53A70
        je short L_4ad0db
        cmp eax, offset mem_00B53AF0
        jne short L_4ad0e0
    L_4ad0db:
        mov eax, offset mem_00B53B30
    L_4ad0e0:
        mov edx, dword ptr [ebx + 368h]
        lea ecx, [ebx + 368h]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        mov eax, dword ptr [mem_00AE29D0]
        test eax, eax
        je short L_4ad11c
        cmp dword ptr [eax + 538h], 5
        jge short L_4ad11c
        mov ecx, dword ptr [mem_00A9F838]
        push ecx
        mov ecx, ebp
        call ext_0063EFE0
        push eax
        lea edx, [ebx + 30Ch]
        push edx
        jmp short L_4ad131
    L_4ad11c:
        mov eax, dword ptr [mem_00A9F480]
        push eax
        mov ecx, ebp
        call ext_0063EFE0
        push eax
        lea ecx, [ebx + 30Ch]
        push ecx
    L_4ad131:
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F6D4]
        add esp, 8
        push edx
        mov ecx, ebp
        call ext_0063EFE0
        mov dword ptr [esp + 58h], eax
        lea eax, [esp + 58h]
        push eax
        lea ecx, [ebx + 304h]
        push ecx
        call ext_0053F5F0
        add esp, 8
        cmp dword ptr [ebx + 168h], 0
        je short L_4ad186
        mov eax, dword ptr [ebx + 168h]
        mov edx, dword ptr [eax + 4]
        lea ecx, [eax + 4]
        mov eax, dword ptr [edx + 24h]
        call eax
        push eax
        lea ecx, [ebx + 328h]
        call dword ptr [mem_00924FDC]
    L_4ad186:
        mov ecx, ebx
        call ext_004AC270
        mov ecx, dword ptr [mem_00A9F17C]
        push 1
        push 0
        push ecx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je short L_4ad1c2
        cmp eax, offset mem_00B53B30
        je short L_4ad1c2
        cmp eax, offset mem_00B53AB0
        je short L_4ad1c2
        cmp eax, offset mem_00B53A70
        je short L_4ad1c2
        cmp eax, offset mem_00B53AF0
        jne short L_4ad1c7
    L_4ad1c2:
        mov eax, offset mem_00B53B30
    L_4ad1c7:
        cmp eax, offset mem_00B53A34
        je short L_4ad243
        cmp eax, offset mem_00B53B30
        je short L_4ad243
        cmp eax, offset mem_00B53AB0
        je short L_4ad243
        cmp eax, offset mem_00B53A70
        je short L_4ad243
        cmp eax, offset mem_00B53AF0
        je short L_4ad243
        mov edx, dword ptr [mem_00A9F17C]
        mov esi, dword ptr [ebx + 180h]
        push 1
        push 0
        push edx
        mov ecx, ebp
        add esi, 11Ch
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je short L_4ad22b
        cmp eax, offset mem_00B53B30
        je short L_4ad22b
        cmp eax, offset mem_00B53AB0
        je short L_4ad22b
        cmp eax, offset mem_00B53A70
        je short L_4ad22b
        cmp eax, offset mem_00B53AF0
        jne short L_4ad230
    L_4ad22b:
        mov eax, offset mem_00B53B30
    L_4ad230:
        mov ecx, dword ptr [mem_00A9F3B0]
        push 1
        push ecx
        push esi
        push eax
        call ext_0049FE40
        add esp, 10h
    L_4ad243:
        mov esi, offset mem_00ADF9BC
    L_4ad248:
        mov edx, dword ptr [esi]
        push edx
        mov ecx, ebx
        call ext_004ABFF0
        mov edi, eax
        test edi, edi
        je L_4ad2ec
        mov eax, dword ptr [esi]
        push eax
        mov ecx, ebp
        call ext_0063EFE0
        cmp eax, offset mem_00B53A34
        je short L_4ad2b9
        cmp eax, offset mem_00B53B30
        je short L_4ad2b9
        cmp eax, offset mem_00B53AB0
        je short L_4ad2b9
        cmp eax, offset mem_00B53A70
        je short L_4ad2b9
        cmp eax, offset mem_00B53AF0
        je short L_4ad2b9
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 2Ch]
        push ecx
        mov ecx, eax
        call edx
        push eax
        mov ecx, edi
        mov dword ptr [esp + 54h], 0
        call ext_00685AE0
        lea ecx, [esp + 2Ch]
        mov dword ptr [esp + 50h], 0ffffffffh
        call dword ptr [mem_00924FF4]
    L_4ad2b9:
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp + 14h]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 10h]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 54h], 1
        call ext_00682E00
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 50h], 0ffffffffh
        call dword ptr [mem_00924FF4]
    L_4ad2ec:
        add esi, 4
        cmp esi, offset mem_00ADF9E0
        jl L_4ad248
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [ebx + 168h]
        mov edx, dword ptr [edx + 148h]
        push eax
        mov ecx, ebx
        call edx
        mov ecx, dword ptr [ebx + 180h]
        lea eax, [ebx + 328h]
        push eax
        call ext_004EC300
        mov ecx, dword ptr [esp + 48h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 44h
        ret 4
    }
}

// [0x004ABAE0] NMData::BehaviourData::vfunc_84 (769 bytes)
extern "C" void ext_0041CE40();
extern "C" void ext_00489320();
extern "C" void ext_004ECA30();
extern "C" void ext_0051E3D0();
extern "C" void ext_0051E440();
extern "C" void ext_0051EAC0();
extern "C" void ext_00594000();
extern "C" void ext_00594640();
extern "C" void ext_005F3590();
extern "C" void ext_005F3A30();
extern "C" void ext_00660A50();
extern "C" void ext_00660D10();
extern "C" void ext_00660D40();
extern "C" int mem_00925134;
extern "C" int mem_00A8F2B8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004ABAE0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x888a22
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x50
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x184], 0x0
        je L_EXIT
        cmp byte ptr [edi + 0x17c], 0x0
        je L_EXIT
        lea ecx, [edi + 0x364]
        call ext_004ECA30
        push eax
        lea ecx, [esp + 0xb]
        call ext_00660D10
        lea eax, [edi + 0x3c8]
        push eax
        lea ecx, [esp + 0xa]
        mov dword ptr [esp + 0x60], 0x0
        call ext_005F3A30
        lea ecx, [edi + 0x328]
        push ecx
        mov byte ptr [esp + 0x60], 0x1
        call ext_00594000
        mov ecx, eax
        call ext_00594640
        cmp dword ptr [eax + 0x5f4], 0x6
        je L_BB94
        lea ecx, [esp + 0x6]
        mov byte ptr [esp + 0x5c], 0x0
        call ext_005F3590
        lea ecx, [esp + 0x7]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_00660D40
        pop edi
        mov ecx, dword ptr [esp + 0x50]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x5c
        ret 0x4
    L_BB94:
        push esi
        mov esi, dword ptr [esp + 0x68]
        cmp esi, -0x1
        jne L_BBC0
        cmp dword ptr [edi + 0x15c], 0x0
        jne L_BBC0
    L_BBA7:
        mov ecx, dword ptr [edi + 0x184]
        cmp byte ptr [ecx + 0x9], 0x0
        je L_BBB8
        call ext_0051E440
    L_BBB8:
        mov ecx, dword ptr [edi + 0x184]
        jmp L_BBE6
    L_BBC0:
        mov eax, dword ptr [edi + 0x15c]
        cmp esi, eax
        jne L_BBD0
        test eax, eax
        jne L_BBA7
        cmp esi, eax
    L_BBD0:
        jle L_BBEB
        cmp esi, dword ptr [edi + 0x160]
        jge L_BBEB
        mov ecx, dword ptr [edi + 0x184]
        cmp byte ptr [ecx + 0x9], 0x0
        jne L_BBEB
    L_BBE6:
        call ext_0051E3D0
    L_BBEB:
        cmp esi, dword ptr [edi + 0x15c]
        jl L_BC1C
        cmp esi, dword ptr [edi + 0x160]
        jge L_BC22
        mov ecx, dword ptr [edi + 0x184]
        cmp byte ptr [ecx + 0x9], 0x0
        jne L_BC0C
        call ext_0051E3D0
    L_BC0C:
        mov ecx, dword ptr [edi + 0x184]
        call ext_0051EAC0
        jmp L_DAF
    L_BC1C:
        cmp esi, dword ptr [edi + 0x160]
    L_BC22:
        jne L_DAF
        mov ecx, dword ptr [edi + 0x184]
        push ebx
        push ebp
        call ext_0051E440
        call ext_00660A50
        mov edx, dword ptr [edi + 0x168]
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [edx + 0x5ec]
        lea ebp, [eax + 0x18]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x74], ebp
        call ext_00489320
        mov ebx, dword ptr [esp + 0x18]
        mov esi, dword ptr [esp + 0x1c]
        mov ebp, dword ptr [ebp + 0x8]
    L_BC65:
        mov ecx, dword ptr [esp + 0x70]
        cmp dword ptr [ecx + 0x4], ebp
        jbe L_BC77
        call dword ptr [mem_00925134]
    L_BC77:
        test ebx, ebx
        je L_BC81
        cmp ebx, dword ptr [esp + 0x70]
        je L_BC87
    L_BC81:
        call dword ptr [mem_00925134]
    L_BC87:
        cmp esi, ebp
        je L_DAD
        cmp byte ptr [edi + 0x360], 0x0
        jne L_BCE5
        mov edx, dword ptr [mem_00A8F2B8]
        push edx
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE4]
        test ebx, ebx
        mov byte ptr [esp + 0x68], 0x2
        jne L_BCB8
        call dword ptr [mem_00925134]
    L_BCB8:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_BCC3
        call dword ptr [mem_00925134]
    L_BCC3:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x3c]
        lea edx, [esp + 0x28]
        push edx
        call eax
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0x68], 0x1
        call dword ptr [mem_00924FF4]
        jmp L_BD96
    L_BCE5:
        mov ecx, dword ptr [mem_00A8F2B8]
        push ecx
        lea ecx, [esp + 0x1c]
        call ext_0041CE40
        push 0x0093e0ec
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x6c], 0x3
        call dword ptr [mem_00924FE4]
        test ebx, ebx
        mov byte ptr [esp + 0x68], 0x4
        jne L_BD18
        call dword ptr [mem_00925134]
    L_BD18:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_BD23
        call dword ptr [mem_00925134]
    L_BD23:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x14]
        push 0x0
        push eax
        lea eax, [esp + 0x4c]
        push eax
        lea eax, [esp + 0x2c]
        push eax
        call edx
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        lea ebp, [esp + 0x18]
        push ebp
        push eax
        mov eax, dword ptr [edx + 0xa4]
        mov byte ptr [esp + 0x70], 0x5
        call eax
        mov ecx, dword ptr [esp + 0x24]
        test ecx, ecx
        mov byte ptr [esp + 0x68], 0x4
        je L_BD6E
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x20]
        push eax
        call edx
    L_BD6E:
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0x68], 0x3
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x1c]
        test ecx, ecx
        mov byte ptr [esp + 0x68], 0x1
        je L_BD96
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x18]
        push edx
        call eax
    L_BD96:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_BDA1
        call dword ptr [mem_00925134]
    L_BDA1:
        mov ebp, dword ptr [esp + 0x70]
        add esi, 0x4
        jmp L_BC65
    L_DAD:
        pop ebp
        pop ebx
    L_DAF:
        lea ecx, [esp + 0xa]
        mov byte ptr [esp + 0x60], 0x0
        call ext_005F3590
        lea ecx, [esp + 0xb]
        mov dword ptr [esp + 0x60], 0xffffffff
        call ext_00660D40
        pop esi
    L_EXIT:
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x5c
        ret 0x4
    }
}

// [0x004AD340] NMData::BehaviourData::vfunc_88 (1056 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_0041CEB0();
extern "C" void ext_004AC4B0();
extern "C" void ext_004EC300();
extern "C" void ext_004ECA30();
extern "C" void ext_004EE200();
extern "C" void ext_0051F9E0();
extern "C" void ext_00520BD0();
extern "C" void ext_00584C00();
extern "C" void ext_005F3E70();
extern "C" void ext_005F9B90();
extern "C" void ext_00660D10();
extern "C" void ext_00660D40();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6E9E();
extern "C" void ext_00888C4D();
extern "C" int mem_009251EC;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;
extern "C" int mem_00941EC8;
extern "C" int mem_00A36F20;
extern "C" int mem_00A2E2F8;

extern "C" __declspec(naked) void __fastcall fn_004AD340(void* self) {
    __asm {
        push -0x1
        push offset ext_00888C4D
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        lea esi, [ebx + 0x364]
        xor edi, edi
        mov ecx, esi
        mov dword ptr [esp + 0x1c], edi
        call ext_004EE200
        mov ecx, esi
        call ext_004ECA30
        push eax
        lea ecx, [esp + 0x17]
        mov dword ptr [esp + 0x18], eax
        call ext_00660D10
        mov eax, dword ptr [ebx + 0x180]
        cmp eax, edi
        mov dword ptr [esp + 0x50], edi
        je L_004AD39B
        mov byte ptr [eax + 0x138], 0x1
    L_004AD39B:
        mov ecx, dword ptr [ebx + 0x180]
        lea eax, [ebx + 0x328]
        push eax
        call ext_004EC300
        push 0x168
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x24], eax
        cmp eax, edi
        mov byte ptr [esp + 0x50], 0x1
        je L_004AD3D9
        mov ecx, dword ptr [ebx + 0x180]
        push ecx
        mov ecx, eax
        call ext_0051F9E0
        mov esi, eax
        jmp L_004AD3DB
    L_004AD3D9:
        xor esi, esi
    L_004AD3DB:
        mov ecx, dword ptr [ebx + 0x2f0]
        cmp esi, ecx
        mov byte ptr [esp + 0x50], 0x0
        je L_004AD3F6
        cmp ecx, edi
        je L_004AD3F6
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
    L_004AD3F6:
        mov ecx, esi
        mov dword ptr [ebx + 0x2f0], esi
        mov dword ptr [ebx + 0x184], ecx
        call ext_00520BD0
        mov esi, dword ptr [ebx + 0x3d0]
        cmp dword ptr [ebx + 0x3cc], esi
        lea edi, [ebx + 0x3c8]
        jbe L_004AD423
        call dword ptr [mem_00925134]
    L_004AD423:
        mov ebp, dword ptr [edi + 0x4]
        cmp ebp, dword ptr [edi + 0x8]
        jbe L_004AD431
        call dword ptr [mem_00925134]
    L_004AD431:
        push esi
        push edi
        push ebp
        push edi
        lea ecx, [esp + 0x34]
        push ecx
        mov ecx, edi
        call ext_00596660
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je L_004AD59D
        mov edx, dword ptr [ecx + 0x8]
        sub edx, eax
        sar edx, 0x2
        je L_004AD59D
        mov eax, dword ptr [ebx + 0x168]
        mov edi, dword ptr [eax + 0x5ec]
        mov ebp, dword ptr [edi + 0x1c]
        cmp ebp, dword ptr [edi + 0x20]
        mov dword ptr [esp + 0x24], edi
        jbe L_004AD480
        call dword ptr [mem_00925134]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_004AD480:
        mov esi, dword ptr [edi + 0x20]
        cmp dword ptr [edi + 0x1c], esi
        jbe L_004AD48E
        call dword ptr [mem_00925134]
    L_004AD48E:
        cmp ebp, esi
        je L_004AD55E
        cmp ebp, dword ptr [edi + 0x20]
        jb L_004AD4A1
        call dword ptr [mem_00925134]
    L_004AD4A1:
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x10]
        push 0x0
        call eax
        mov esi, eax
        test esi, esi
        mov dword ptr [esp + 0x20], esi
        je L_004AD54B
        jmp L_004AD4C0
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_004AD4C0:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x14]
        mov ecx, esi
        call eax
        test al, al
        jne L_004AD4E4
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x10]
        push 0x0
        mov ecx, esi
        call eax
        mov esi, eax
        test esi, esi
        jne L_004AD4C0
        mov dword ptr [esp + 0x20], esi
        jmp L_004AD54B
    L_004AD4E4:
        mov ecx, dword ptr [esp + 0x14]
        mov edi, dword ptr [ecx + 0x8]
        mov dword ptr [esp + 0x20], esi
        mov esi, ecx
        cmp dword ptr [esi + 0x4], edi
        jbe L_004AD4FC
        call dword ptr [mem_00925134]
    L_004AD4FC:
        mov esi, dword ptr [esi + 0x4]
        mov eax, dword ptr [esp + 0x14]
        cmp esi, dword ptr [eax + 0x8]
        jbe L_004AD512
        call dword ptr [mem_00925134]
    L_004AD50E:
        mov eax, dword ptr [esp + 0x14]
    L_004AD512:
        mov edx, dword ptr [esp + 0x24]
        push edx
        lea ecx, [esp + 0x24]
        push ecx
        push edi
        push eax
        push esi
        push eax
        call ext_005F3E70
        add esp, 0x18
        test al, al
        je L_004AD547
        mov edx, dword ptr [esp + 0x24]
        cmp ebp, dword ptr [edx + 0x20]
        jb L_004AD53B
        call dword ptr [mem_00925134]
    L_004AD53B:
        push ebp
        lea ecx, [ebx + 0x3c8]
        call ext_0041A920
    L_004AD547:
        mov edi, dword ptr [esp + 0x24]
    L_004AD54B:
        cmp ebp, dword ptr [edi + 0x20]
        jb L_004AD556
        call dword ptr [mem_00925134]
    L_004AD556:
        add ebp, 0x4
        jmp L_004AD480
    L_004AD55E:
        mov edi, dword ptr [ebx + 0x3d0]
        cmp dword ptr [ebx + 0x3cc], edi
        jbe L_004AD572
        call dword ptr [mem_00925134]
    L_004AD572:
        mov esi, dword ptr [ebx + 0x3cc]
        cmp esi, dword ptr [ebx + 0x3d0]
        jbe L_004AD586
        call dword ptr [mem_00925134]
    L_004AD586:
        mov eax, dword ptr [esp + 0x24]
        mov ecx, edi
        push eax
        sub ecx, esi
        sar ecx, 0x2
        push ecx
        push edi
        push esi
        call ext_004AC4B0
        add esp, 0x10
    L_004AD59D:
        mov esi, dword ptr [ebx + 0x3e0]
        cmp dword ptr [ebx + 0x3dc], esi
        jbe L_004AD5B1
        call dword ptr [mem_00925134]
    L_004AD5B1:
        mov edi, dword ptr [ebx + 0x3dc]
        cmp edi, dword ptr [ebx + 0x3e0]
        jbe L_004AD5C5
        call dword ptr [mem_00925134]
    L_004AD5C5:
        cmp edi, esi
        je L_004AD5F5
        mov eax, dword ptr [ebx + 0x3e0]
        sub eax, esi
        sar eax, 0x2
        test eax, eax
        lea ecx, [eax * 4]
        lea ebp, [ecx + edi]
        jle L_004AD5EF
        push ecx
        push esi
        push ecx
        push edi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L_004AD5EF:
        mov dword ptr [ebx + 0x3e0], ebp
    L_004AD5F5:
        cmp dword ptr [ebx + 0x10], 0x0
        je L_004AD73C
        mov edi, dword ptr [ebx + 0x184]
        mov esi, dword ptr [edi + 0x15c]
        add edi, 0x158
        cmp esi, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0x20], edi
        jbe L_004AD620
        call dword ptr [mem_00925134]
    L_004AD620:
        mov ebp, esi
    L_004AD622:
        mov esi, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], esi
        mov dword ptr [esp + 0x18], ebp
        jbe L_004AD634
        call dword ptr [mem_00925134]
    L_004AD634:
        cmp ebp, esi
        je L_004AD721
        cmp ebp, dword ptr [edi + 0x8]
        jb L_004AD647
        call dword ptr [mem_00925134]
    L_004AD647:
        mov ecx, dword ptr [ebp + 0x20]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x30]
        lea esi, [ebp + 0x1c]
        call eax
        cmp eax, 0x5
        jne L_004AD687
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, esi
        call ext_0041CEB0
        or dword ptr [esp + 0x1c], 0x1
        push offset mem_00941EC8
        push eax
        mov byte ptr [esp + 0x58], 0x2
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        mov byte ptr [esp + 0x12], 0x1
        jne L_004AD68C
    L_004AD687:
        mov byte ptr [esp + 0x12], 0x0
    L_004AD68C:
        test byte ptr [esp + 0x1c], 0x1
        mov dword ptr [esp + 0x50], 0x0
        je L_004AD6AA
        and dword ptr [esp + 0x1c], -0x2
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FF4]
    L_004AD6AA:
        cmp byte ptr [esp + 0x12], 0x0
        je L_004AD70E
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x60]
        push esi
        call eax
        push 0x0
        push offset mem_00A36F20
        push offset mem_00A2E2F8
        push 0x0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        lea ecx, [esp + 0x24]
        mov ebp, eax
        push ecx
        lea ecx, [ebx + 0x3d8]
        mov dword ptr [esp + 0x28], ebp
        call ext_0041A920
        mov edx, dword ptr [ebx + 0x10]
        mov edi, dword ptr [edx + 0x10]
        mov esi, dword ptr [edi]
        lea eax, [ebx + 0xc]
        push eax
        mov ecx, ebp
        add esi, 0xc
        call ext_005F9B90
        mov edx, dword ptr [esi]
        push eax
        mov ecx, edi
        call edx
        mov ebp, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x20]
    L_004AD70E:
        cmp ebp, dword ptr [edi + 0x8]
        jb L_004AD719
        call dword ptr [mem_00925134]
    L_004AD719:
        add ebp, 0x24
        jmp L_004AD622
    L_004AD721:
        mov ecx, ebx
        call ext_00584C00
        mov byte ptr [esp + 0x24], al
        mov eax, dword ptr [ebx + 0xc]
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [eax + 0x20]
        lea ecx, [ebx + 0xc]
        push edx
        call eax
    L_004AD73C:
        lea ecx, [esp + 0x13]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_00660D40
        mov ecx, dword ptr [esp + 0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret
    }
}
