// Decompiled translation unit: src/NMData/AnimationEventData.cpp

extern "C" void ext_004C0340();

// [0x004A9C20] NMData::AnimationEventData::vfunc_70 (18 bytes)
extern "C" void __fastcall fn_004A9C20(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x15c) = a1;
    ext_004C0340();
}

// [0x004A9C40] NMData::AnimationEventData::vfunc_71 (18 bytes)
extern "C" void __fastcall fn_004A9C40(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x160) = a1;
    ext_004C0340();
}

// [0x004C1AA0] NMData::AnimationEventData::vfunc_72 (18 bytes)
extern "C" void __fastcall fn_004C1AA0(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x164) = a1;
    ext_004C0340();
}

extern "C" void ext_0047D7C0();
extern "C" int mem_00AE29D0;

// [0x004BFC20] NMData::AnimationEventData::vfunc_13_off_C (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BFC20(void* self, int edx_unused, int a1) {
    __asm {
        add ecx, -0Ch
        push ecx
        mov ecx, dword ptr [mem_00AE29D0]
        call ext_0047D7C0
        mov al, 1
        ret 4
    }
}

extern "C" void ext_00594000();
extern "C" void ext_00599F10();

// [0x004BFBE0] NMData::AnimationEventData::vfunc_63 (25 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BFBE0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 168h]
        test eax, eax
        jne short L_nonnull
        ret
    L_nonnull:
        push eax
        call ext_00594000
        mov ecx, eax
        call ext_00599F10
        ret
    }
}

extern "C" int mem_00924FDC;

// [0x004C1A80] NMData::AnimationEventData::vfunc_23 (28 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C1A80(void* self, int edx_unused, const void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 14h]
        call dword ptr [mem_00924FDC]
        mov ecx, esi
        call ext_004C0340
        pop esi
        ret 4
    }
}

// [0x004D3CB0] NMData::AnimationEventData::vfunc_61 (34 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004D3CB0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 3Ch]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push 24Ah
        push esi
        mov dword ptr [esp + 0Ch], 0
        call edx
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x004DE1B0] NMData::AnimationEventData::vfunc_60 (34 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004DE1B0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 3Ch]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push 334h
        push esi
        mov dword ptr [esp + 0Ch], 0
        call edx
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

extern "C" void ext_00594000();
extern "C" void ext_00594640();

// [0x00486BE0] NMData::AnimationEventData::vfunc_81 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_00486BE0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594640
        mov ecx, esi
        mov dword ptr [esi + 168h], eax
        call ext_004C0340
        pop esi
        ret 4
    }
}

extern "C" int mem_00924FCC;
extern "C" int mem_009443C8;

// [0x004BF800] NMData::AnimationEventData::vfunc_3 (40 bytes)
// Builds a temporary std::string via operator+(const char*, const std::string&) into the sret buffer a1 and returns a1.
extern "C" __declspec(naked) void* __fastcall fn_004BF800(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x14
        push ecx
        push offset mem_009443C8
        push esi
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FCC]
        add esp, 0xc
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

extern "C" void ext_004C1AF0();
extern "C" void ext_0047C480();
extern "C" int mem_00AE29D0;

// [0x004DE0F0] NMData::AnimationEventData::vfunc_69 (51 bytes)
extern "C" __declspec(naked) void __fastcall fn_004DE0F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, eax
        sub ecx, dword ptr [esi + 15Ch]
        push eax
        add dword ptr [esi + 9A0h], ecx
        mov ecx, esi
        call ext_004C1AF0
        mov edx, dword ptr [esi + 168h]
        pop esi
        mov dword ptr [esp + 4], edx
        mov ecx, dword ptr [mem_00AE29D0]
        jmp ext_0047C480
    }
}

// [0x004E2700] NMData::AnimationEventData::vfunc_77 (93 bytes)
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004E2700(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov ebx, ecx
        lea esi, [ebx + 9B0h]
        push edi
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        jbe chk1_ok
        call dword ptr [mem_00925134]
    chk1_ok:
        push ebp
        mov ebp, dword ptr [esi + 4]
        cmp ebp, dword ptr [esi + 8]
        jbe chk2_ok
        call dword ptr [mem_00925134]
    chk2_ok:
        push edi
        push esi
        push ebp
        push esi
        lea eax, [esp + 20h]
        push eax
        mov ecx, esi
        call ext_00596660
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        pop ebp
        jbe chk3_ok
        call dword ptr [mem_00925134]
    chk3_ok:
        mov dword ptr [ebx + 9C4h], edi
        pop edi
        mov dword ptr [ebx + 9C0h], esi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x004E2760] NMData::AnimationEventData::vfunc_85 (55 bytes)
extern "C" void ext_004E1F50();

extern "C" __declspec(naked) void __fastcall fn_004E2760(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0b74h]
        test ecx, ecx
        je short L_ret
        cmp byte ptr [eax + 17Ch], 0
        je short L_ret
        mov edx, dword ptr [esp + 4]
        cmp dword ptr [eax + 9CCh], edx
        je short L_ret
        cmp edx, dword ptr [eax + 160h]
        mov dword ptr [eax + 9CCh], edx
        jne short L_ret
        call ext_004E1F50
    L_ret:
        ret 4
    }
}

// [0x004DE1E0] NMData::AnimationEventData::vfunc_0_off_154 (181 bytes)
extern "C" void ext_00494000();
extern "C" void ext_004940E0();

extern "C" __declspec(naked) void __fastcall fn_004DE1E0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        sub esp, 0xc
        push esi
        push edi
        push 0x0
        push 0x0
        mov edi, ecx
        push 0x20
        lea ecx, [esp + 0x14]
        call ext_00494000
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x18]
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
        mov eax, dword ptr [edi + 0x14]
        test eax, eax
        je L_null1
        add eax, 0x4
        jmp L_cont1
    L_null1:
        xor eax, eax
    L_cont1:
        push 0x0
        push 0x0
        push 0x20
        lea ecx, [esp + 0x14]
        mov dword ptr [esi + 0x8], eax
        call ext_00494000
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x1c]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        push 0x1
        push 0x1000
        mov ecx, esi
        mov dword ptr [esi + 0x8], eax
        call ext_004940E0
        mov edi, dword ptr [edi + 0x14]
        test edi, edi
        je L_null2
        lea eax, [edi + 0x4]
        jmp L_cont2
    L_null2:
        xor eax, eax
    L_cont2:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [esi + 0x8], eax
        pop edi
        mov dword ptr [ecx], 0x6
        mov dword ptr [edx], 0x6
        pop esi
        add esp, 0xc
        ret 0x10
    }
}

extern "C" void ext_004C3410();
extern "C" void ext_004E1B30();

// [0x004E1C50] NMData::AnimationEventData::vfunc_15 (188 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004E1C50(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        sub esp, 0Ch
        cmp dword ptr [esp + 14h], 280h
        push esi
        mov dword ptr [esp + 4], ecx
        mov dword ptr [esp + 8], 0
        jne L_cf0
        mov eax, dword ptr [mem_00AE29D0]
        test eax, eax
        je L_cf0
        push ebp
        mov ebp, dword ptr [eax + 38h]
        cmp dword ptr [eax + 34h], ebp
        push edi
        lea edi, [eax + 30h]
        jbe L_c8a
        call dword ptr [mem_00925134]
    L_c8a:
        push ebx
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe L_c99
        call dword ptr [mem_00925134]
    L_c99:
        mov esi, dword ptr [edi + 4]
        cmp esi, dword ptr [edi + 8]
        jbe L_ca7
        call dword ptr [mem_00925134]
    L_ca7:
        cmp esi, ebx
        mov eax, edi
        mov dword ptr [esp + 18h], esi
        je L_cc0
    L_cb1:
        mov ecx, dword ptr [esp + 10h]
        cmp dword ptr [esi], ecx
        je L_cc0
        add esi, 4
        cmp esi, ebx
        jne L_cb1
    L_cc0:
        test eax, eax
        pop ebx
        je L_cc9
        cmp eax, edi
        je L_ccf
    L_cc9:
        call dword ptr [mem_00925134]
    L_ccf:
        pop edi
        cmp esi, ebp
        pop ebp
        jne L_cf0
        mov edx, dword ptr [esp + 4]
        mov esi, dword ptr [esp + 14h]
        push edx
        push esi
        call ext_004E1B30
        add esp, 8
        mov eax, esi
        pop esi
        add esp, 0Ch
        ret 8
    L_cf0:
        mov eax, dword ptr [esp + 18h]
        mov esi, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 4]
        push eax
        push esi
        call ext_004C3410
        mov eax, esi
        pop esi
        add esp, 0Ch
        ret 8
    }
}

extern "C" void ext_004DE160();
extern "C" void ext_00661F70();
extern "C" int mem_00925134;

// [0x004E1A70] NMData::AnimationEventData::vfunc_0_off_184 (91 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E1A70(void* self, int edx_unused, void* a1) {
    __asm {
        push edi
        mov edi, ecx
        cmp dword ptr [edi - 0x174], 0
        je L_exit
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp dword ptr [esi + 8], 0
        jne L_valid1
        call ebx
    L_valid1:
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0x0C]
        cmp ecx, dword ptr [eax + 4]
        jne L_valid2
        call ebx
    L_valid2:
        lea ecx, [edi - 0x184]
        call ext_004DE160
        mov edx, dword ptr [esi + 0x0C]
        mov ecx, dword ptr [edx + 8]
        sub ecx, eax
        test ecx, ecx
        pop esi
        pop ebx
        jg L_jg
        mov ecx, 1
    L_jg:
        push ecx
        lea ecx, [edi + 0x740]
        call ext_00661F70
    L_exit:
        pop edi
        ret 4
    }
}

extern "C" void ext_00493EE0();
extern "C" void ext_004C1B20();
extern "C" void ext_004E1AD0();
extern "C" void ext_0047C480();

// [0x004E1D60] NMData::AnimationEventData::vfunc_73 (85 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E1D60(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 160h]
        cmp ecx, dword ptr [eax + 4]
        jne L_skip
        mov edx, dword ptr [eax]
        sub edx, dword ptr [esi + 15Ch]
        add dword ptr [esi + 9A0h], edx
    L_skip:
        push eax
        mov ecx, esi
        call ext_004C1B20
        mov ecx, esi
        call ext_004E1AD0
        call ext_00594000
        lea ecx, [eax + 258h]
        call ext_00493EE0
        mov eax, dword ptr [esi + 168h]
        pop esi
        mov dword ptr [esp + 4], eax
        mov ecx, dword ptr [mem_00AE29D0]
        jmp ext_0047C480
    }
}

extern "C" void ext_004DE330();
extern "C" int mem_00925134;

// [0x004E1A00] NMData::AnimationEventData::vfunc_0_off_180 (108 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E1A00(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x9f4], 0
        je done
        cmp byte ptr [esi - 0x4], 0
        je done
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp dword ptr [edi + 0x8], 0
        jne skip1
        call ebx
    skip1:
        mov eax, dword ptr [edi + 0x8]
        mov ecx, dword ptr [edi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne skip2
        call ebx
    skip2:
        mov edx, dword ptr [edi + 0xc]
        mov eax, dword ptr [edx + 0x8]
        sub eax, 1
        cmp eax, dword ptr [esi - 0x24]
        jle restore
        cmp eax, dword ptr [esi - 0x20]
        jg restore
        mov eax, dword ptr [esi - 0x17c]
        mov edx, dword ptr [eax + 0x14]
        mov ebx, dword ptr [esi + 0x9f4]
        lea ecx, [esi - 0x17c]
        push edi
        call edx
        push eax
        mov ecx, ebx
        call ext_004DE330
    restore:
        pop edi
        pop ebx
    done:
        pop esi
        ret 4
    }
}

extern "C" void ext_00479550();
extern "C" void ext_00481BD0();

// [0x004BFC00] NMData::AnimationEventData::vfunc_12_off_C (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BFC00(void* self) {
    __asm {
        push esi
        lea esi, [ecx - 0Ch]
        mov ecx, dword ptr [esp + 0Ch]
        push esi
        call ext_00481BD0
        mov ecx, dword ptr [mem_00AE29D0]
        push esi
        call ext_00479550
        mov al, 1
        pop esi
        ret 8
    }
}

// [0x004DDED0] NMData::AnimationEventData::vfunc_59 (34 bytes)
extern "C" void ext_006404E0();
extern "C" int mem_00A9ED30;
extern "C" __declspec(naked) void __fastcall fn_004DDED0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9ED30]
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

// [0x0048AF30] NMData::AnimationEventData::vfunc_1_off_154 (112 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_004C28C0();

extern "C" __declspec(naked) void __fastcall fn_0048AF30(void* self) {
    __asm {
        push -1
        push 0x8a1908
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
        mov eax, dword ptr [eax + 0x38]
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
        ret 0x4
    }
}

extern "C" void ext_0047C480();
extern "C" void ext_004E1DC0();

// [0x004E26C0] NMData::AnimationEventData::vfunc_68 (50 bytes)
extern "C" void __fastcall fn_004E26C0(void* self, int edx_unused, bool a1) {
    int v = *(int*)((char*)self + 0x168);
    *(bool*)((char*)self + 0x17c) = a1;
    ((void (__thiscall*)(int, int))ext_0047C480)(mem_00AE29D0, v);
    if (!a1) {
        ((void (__thiscall*)(void*, int))ext_004E1DC0)(self, 0);
    }
}

// [0x004E3570] NMData::AnimationEventData::vfunc_76 (55 bytes)
extern "C" void ext_0041A920();
extern "C" __declspec(naked) void __fastcall fn_004E3570(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, [esp + 0x10]
        lea esi, [edi + 0x9b0]
        push eax
        mov ecx, esi
        call ext_0041A920
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe short L_ok_004E3570
        call dword ptr [mem_00925134]
    L_ok_004E3570:
        mov dword ptr [edi + 0x9c0], esi
        mov dword ptr [edi + 0x9c4], ebx
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

extern "C" void ext_004E35B0();
extern "C" void ext_004E3AB0();
extern "C" void ext_004E5990();
extern "C" void ext_004E5AE0();
extern "C" void ext_00594000();
extern "C" void ext_006622D0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

// [0x004E7280] NMData::AnimationEventData::vfunc_87 (197 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E7280(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xb74]
        xor ebx, ebx
        cmp ecx, ebx
        push edi
        je L1
        call ext_004E3AB0
        mov edi, dword ptr [esi + 0xb74]
        cmp edi, ebx
        je L2
        mov ecx, edi
        call ext_004E35B0
        push edi
        call ext_006A5C5C
        add esp, 4
    L2:
        mov dword ptr [esi + 0xb74], ebx
    L1:
        mov ecx, dword ptr [esi + 0xb78]
        cmp ecx, ebx
        je L3
        call ext_004E5990
        mov edi, dword ptr [esi + 0xb78]
        cmp edi, ebx
        je L4
        mov ecx, edi
        call ext_004E5AE0
        push edi
        call ext_006A5C5C
        add esp, 4
    L4:
        mov dword ptr [esi + 0xb78], ebx
    L3:
        fldz
        fst dword ptr [esi + 0x9d8]
        fstp dword ptr [esi + 0x9dc]
        call ext_00594000
        lea ecx, [esi + 0x180]
        push ecx
        lea ecx, [eax + 0x168]
        call ext_006622D0
        mov ebx, dword ptr [esi + 0x9b8]
        cmp dword ptr [esi + 0x9b4], ebx
        lea edi, [esi + 0x9b0]
        jbe L5
        call dword ptr [mem_00925134]
    L5:
        mov dword ptr [esi + 0x9c0], edi
        mov eax, 0x7fffffff
        pop edi
        mov dword ptr [esi + 0x9c4], ebx
        mov dword ptr [esi + 0x9c8], eax
        mov dword ptr [esi + 0x9cc], eax
        pop esi
        pop ebx
        ret
    }
}

extern "C" void ext_004769F0();
extern "C" void ext_00486CB0();
extern "C" void ext_0049AD90();
extern "C" void ext_004C1B50();
extern "C" void ext_0058D800();

// [0x004C1F90] NMData::AnimationEventData::vfunc_94 (219 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C1F90(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0Ch]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 24h]
        mov esi, ecx
        mov ecx, edi
        call edx
        push 93F7BCh
        push eax
        lea eax, [esi + 14h]
        push eax
        lea ecx, [esp + 1Ch]
        call ext_00486CB0
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        push ecx
        push edx
        push edi
        mov ecx, esi
        call ext_0058D800
        mov eax, dword ptr [edi + 15Ch]
        mov ecx, dword ptr [esi + 15Ch]
        push 944E30h
        lea edx, [esp + 10h]
        mov dword ptr [esp + 10h], eax
        push edx
        lea eax, [esp + 18h]
        mov dword ptr [esp + 18h], ecx
        push eax
        lea ecx, [esp + 1Ch]
        call ext_004769F0
        mov ecx, dword ptr [edi + 160h]
        mov edx, dword ptr [esi + 160h]
        push 944E24h
        mov dword ptr [esp + 10h], ecx
        lea eax, [esp + 10h]
        push eax
        lea ecx, [esp + 18h]
        push ecx
        lea ecx, [esp + 1Ch]
        mov dword ptr [esp + 1Ch], edx
        call ext_004769F0
        mov dl, byte ptr [edi + 17Ch]
        mov al, byte ptr [esi + 17Ch]
        push 944E18h
        lea ecx, [esp + 10h]
        mov byte ptr [esp + 10h], dl
        push ecx
        lea edx, [esp + 18h]
        push edx
        lea ecx, [esp + 1Ch]
        mov byte ptr [esp + 1Ch], al
        call ext_0049AD90
        push 944E08h
        add edi, 16Ch
        push edi
        add esi, 16Ch
        push esi
        lea ecx, [esp + 1Ch]
        call ext_004C1B50
        pop edi
        pop esi
        ret 0Ch
    }
}
