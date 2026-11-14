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
