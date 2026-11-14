// Decompiled translation unit: src/classes/Transform.cpp

// [0x00593630] Transform::vfunc_33 (72 bytes)
extern "C" void ext_00587880();

extern "C" __declspec(naked) void __fastcall fn_00593630(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xe4]
        fld1
        fst dword ptr [eax]
        fldz
        fst dword ptr [eax + 0x4]
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x24]
        fst dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x30]
        fst dword ptr [eax + 0x34]
        fstp dword ptr [eax + 0x38]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x28]
        fstp dword ptr [eax + 0x3c]
        mov dword ptr [ecx + 0xec], 0x2
        jmp ext_00587880
    }
}

// [0x00593910] Transform::vfunc_21 (449 bytes)
extern "C" void ext_00593710();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0067EFD0();
extern "C" int mem_00B40640;
extern "C" int mem_00A9F34C;
extern "C" int mem_00A9F3C8;
extern "C" int mem_00A9F3EC;
extern "C" int mem_00A9F3F0;
extern "C" int mem_00A9F3F4;
extern "C" int mem_00A9F8D8;

extern "C" __declspec(naked) void __fastcall fn_00593910(void* self, int edx_unused, void* arg0) {
    __asm {
        mov edx, dword ptr [mem_00B40640]
        sub esp, 0x1c
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 0x4]
        mov eax, dword ptr [eax + 0xc]
        push esi
        lea ecx, [ebp + 0x4]
        push edi
        push edx
        call eax
        fld1
        fst dword ptr [eax]
        lea esi, [eax + 0x8]
        fldz
        push 0x1
        fst dword ptr [eax + 0x4]
        push 0x0
        fst dword ptr [esi]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x24]
        fst dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x30]
        fst dword ptr [eax + 0x34]
        fstp dword ptr [eax + 0x38]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x28]
        fstp dword ptr [eax + 0x3c]
        mov dword ptr [ebp + 0xec], 0x2
        mov ecx, dword ptr [mem_00A9F34C]
        push ecx
        mov ecx, dword ptr [esp + 0x3c]
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_005939A1
        cmp eax, 0xb53b30
        je loc_005939A1
        cmp eax, 0xb53ab0
        je loc_005939A1
        cmp eax, 0xb53a70
        je loc_005939A1
        cmp eax, 0xb53af0
        jne loc_005939A8
loc_005939A1:
        mov ebx, 0xb53b30
        jmp loc_005939AA
loc_005939A8:
        mov ebx, eax
loc_005939AA:
        cmp ebx, 0xb53a34
        je loc_00593AC7
        cmp ebx, 0xb53b30
        je loc_00593AC7
        cmp ebx, 0xb53ab0
        je loc_00593AC7
        cmp ebx, 0xb53a70
        je loc_00593AC7
        cmp ebx, 0xb53af0
        je loc_00593AC7
        mov edx, dword ptr [mem_00A9F3C8]
        mov eax, dword ptr [mem_00A9F3EC]
        mov ecx, dword ptr [mem_00A9F3F0]
        mov dword ptr [esp + 0x1c], edx
        mov edx, dword ptr [mem_00A9F3F4]
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], ecx
        mov dword ptr [esp + 0x28], edx
        xor edi, edi
        nop
loc_00593A10:
        mov eax, dword ptr [esp + 4*edi + 0x1c]
        push 0x1
        push 0x0
        push eax
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_00593A43
        cmp eax, 0xb53b30
        je loc_00593A43
        cmp eax, 0xb53ab0
        je loc_00593A43
        cmp eax, 0xb53a70
        je loc_00593A43
        cmp eax, 0xb53af0
        jne loc_00593A48
loc_00593A43:
        mov eax, 0xb53b30
loc_00593A48:
        cmp eax, 0xb53a34
        je loc_00593A89
        cmp eax, 0xb53b30
        je loc_00593A89
        cmp eax, 0xb53ab0
        je loc_00593A89
        cmp eax, 0xb53a70
        je loc_00593A89
        cmp eax, 0xb53af0
        je loc_00593A89
        push eax
        lea eax, [esp + 0x14]
        push eax
        call ext_0067EFD0
        fld dword ptr [eax]
        fstp dword ptr [esi - 0x8]
        add esp, 0x8
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi - 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi]
loc_00593A89:
        add edi, 0x1
        add esi, 0x10
        cmp edi, 0x4
        jl loc_00593A10
        mov ecx, dword ptr [mem_00A9F8D8]
        push ecx
        mov ecx, ebx
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x4c], esp
        push ecx
        mov ecx, eax
        call edx
        call ext_00593710
        add esp, 0x1c
        mov dword ptr [ebp + 0xec], eax
loc_00593AC7:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1c
        ret 0x4
    }
}

// [0x00593AE0] Transform::vfunc_22 (299 bytes)
extern "C" void ext_00427550();
extern "C" void ext_00582A70();
extern "C" void ext_005937B0();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_0067F040();
extern "C" int mem_0094CE80;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00593AE0(void* self, int edx_unused, void* arg0) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        mov edx, dword ptr [mem_00B40640]
        sub esp, 0x30
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x8]
        lea ecx, [esi + 0x4]
        push edi
        push edx
        call eax
        cmp dword ptr [esi + 0xec], 2
        mov edi, eax
        jne loc_00593B32
        fld dword ptr [mem_0094CE80]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_00582A70
        test al, al
        jne loc_00593BF4
loc_00593B32:
        mov ecx, dword ptr [mem_00A9F34C]
        push ebx
        push ecx
        mov ecx, dword ptr [esp + 0x50]
        call ext_006404E0
        mov edx, dword ptr [esi + 0xec]
        mov ebx, eax
        push edx
        lea eax, [esp + 0x24]
        push eax
        call ext_005937B0
        add esp, 8
        cmp dword ptr [esi + 0xec], 2
        mov dword ptr [esp + 0x44], 0
        je loc_00593B90
        mov ecx, dword ptr [mem_00A9F8D8]
        push ecx
        mov ecx, ebx
        call ext_00640110
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
loc_00593B90:
        mov edx, dword ptr [mem_00A9F3C8]
        mov eax, dword ptr [mem_00A9F3EC]
        mov ecx, dword ptr [mem_00A9F3F0]
        mov dword ptr [esp + 0x10], edx
        mov edx, dword ptr [mem_00A9F3F4]
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x1c], edx
        xor esi, esi
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
loc_00593BC0:
        mov eax, dword ptr [esp + esi*4 + 0x10]
        push eax
        mov ecx, ebx
        call ext_006404E0
        push edi
        push eax
        call ext_0067F040
        add esi, 1
        add esp, 8
        add edi, 0x10
        cmp esi, 4
        jl loc_00593BC0
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x44], -1
        call dword ptr [mem_00924FF4]
        pop ebx
loc_00593BF4:
        mov ecx, dword ptr [esp + 0x38]
        mov eax, dword ptr [esp + 0x48]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x3c
        ret 4
    }
}
