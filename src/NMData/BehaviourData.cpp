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
