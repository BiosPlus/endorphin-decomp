// Decompiled translation unit: src/NMData/FluidObjectData.cpp

// [0x005C32B0] NMData::FluidObjectData::vfunc_15 (32 bytes)
extern "C" void ext_005C3010();

extern "C" __declspec(naked) void __fastcall fn_005C32B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        mov dword ptr [esp + 0xc], 0
        call ext_005C3010
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x005C3270] NMData::FluidObjectData::vfunc_62 (34 bytes)
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005C3270(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0xb44944
        mov ecx, esi
        mov dword ptr [esp + 8], 0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x005C44A0] NMData::FluidObjectData::vfunc_33 (118 bytes)
extern "C" void ext_005C3660();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005C44A0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        push 0x928b5d
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0x17c]
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esi + 0x198], 0
        call ext_005C3660
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x005C32E0] NMData::FluidObjectData::vfunc_13_off_C (145 bytes)
extern "C" void ext_005BF510();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005C32E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        mov ebx, dword ptr [esp + 0x30]
        test ebx, ebx
        push edi
        mov edi, ecx
        je null_path_5C32E0
        mov eax, dword ptr [edi - 0xc]
        mov edx, dword ptr [eax + 0xf8]
        push esi
        lea esi, [edi - 0xc]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call edx
        push eax
        lea ecx, [edi + 0x8]
        mov dword ptr [esp + 0x34], 0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], -1
        call dword ptr [mem_00924FF4]
        push esi
        mov ecx, ebx
        call ext_005BF510
        pop esi
        pop edi
        mov al, 1
        pop ebx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 4
null_path_5C32E0:
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        xor al, al
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 4
    }
}

// [0x005CC650] NMData::FluidObjectData::vfunc_17_off_C (99 bytes)
extern "C" void ext_005CC5C0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005CC650(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 19ch
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_005CC650_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_005CC5C0
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_005CC650_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005CCF60] NMData::FluidObjectData::vfunc_12_off_C (306 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00481BD0();
extern "C" void ext_005BF570();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005CCF60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x87ba98
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 0x158]
        push esi
        xor esi, esi
        cmp eax, esi
        je loc_5ccfa7
        mov eax, dword ptr [eax + 0x20c]
        mov ecx, dword ptr [eax + 0x18c]
        cmp ecx, esi
        je loc_5ccfa7
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x48]
        call edx
        test al, al
        je loc_5cd07d
    loc_5ccfa7:
        mov ecx, dword ptr [esp + 0x2c]
        lea eax, [ebp - 0xc]
        push eax
        call ext_00481BD0
        cmp dword ptr [ebp + 0x158], esi
        je loc_5cd07d
        push ebx
        push edi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], esi
        mov edi, dword ptr [ebp + 0x74]
        cmp edi, dword ptr [ebp + 0x78]
        mov dword ptr [esp + 0x28], esi
        lea esi, [ebp + 0x70]
        jbe loc_5ccfe3
        call dword ptr [mem_00925134]
    loc_5ccfe3:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe loc_5ccff1
        call dword ptr [mem_00925134]
    loc_5ccff1:
        cmp esi, esi
        je loc_5ccffb
        call dword ptr [mem_00925134]
    loc_5ccffb:
        cmp edi, ebx
        je loc_5cd024
        cmp edi, dword ptr [esi + 0x8]
        jb loc_5cd00a
        call dword ptr [mem_00925134]
    loc_5cd00a:
        push edi
        lea ecx, [esp + 0x14]
        call ext_0041A920
        cmp edi, dword ptr [esi + 0x8]
        jb loc_5cd01f
        call dword ptr [mem_00925134]
    loc_5cd01f:
        add edi, 0x4
        jmp loc_5ccfe3
    loc_5cd024:
        lea eax, [esp + 0x34]
        lea esi, [ebp - 0xc]
        push eax
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x38], esi
        call ext_0041A920
        mov ecx, dword ptr [esp + 0x30]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x44]
        lea eax, [esp + 0x10]
        push eax
        call edx
        mov ecx, dword ptr [ebp + 0x158]
        push esi
        call ext_005BF570
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        pop edi
        pop ebx
        je loc_5cd068
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_5cd068:
        pop esi
        mov al, 0x1
        pop ebp
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret 0x8
    loc_5cd07d:
        mov ecx, dword ptr [esp + 0x18]
        pop esi
        xor al, al
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret 0x8
    }
}

// [0x005C46F0] NMData::FluidObjectData::vfunc_22 (139 bytes)
extern "C" void ext_006404E0();
extern "C" void ext_0058F650();
extern "C" void ext_00640110();
extern "C" void ext_00427550();
extern "C" void ext_00640A80();
extern "C" void ext_005B44B0();
extern "C" int mem_00A9EF18;
extern "C" int mem_00A9F7B8;
extern "C" int mem_00A9F724;
extern "C" int mem_00924FEC;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_005C46F0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9EF18]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push eax
        call ext_006404E0
        mov esi, eax
        push esi
        mov ecx, edi
        call ext_0058F650
        lea ebx, [edi + 0x17c]
        mov ecx, ebx
        call dword ptr [mem_00924FEC]
        test al, al
        jne label_005C4744
        mov ecx, dword ptr [mem_00A9F7B8]
        push ecx
        mov ecx, esi
        call ext_00640110
        mov ecx, ebx
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
    label_005C4744:
        mov edx, dword ptr [mem_00A9F724]
        push edx
        mov ecx, esi
        call ext_00640110
        movzx ecx, byte ptr [edi + 0x160]
        push ecx
        push eax
        call ext_00640A80
        mov ecx, dword ptr [edi + 0x15c]
        add esp, 0x8
        test ecx, ecx
        je label_005C4773
        push esi
        call ext_005B44B0
    label_005C4773:
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    }
}

extern "C" void ext_005BF510();
extern "C" void ext_005BF570();
extern "C" void ext_005CC5C0();
extern "C" void ext_006A5C62();

// [0x005CC6C0] NMData::FluidObjectData::vfunc_16_off_C (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_005CC6C0(void* self) {
    __asm {
        push -0x1
        push 0x8a4a23
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        push 0x19c
        mov edi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x0
        je L_null
        lea ecx, [edi - 0xc]
        push ecx
        mov ecx, eax
        call ext_005CC5C0
        mov esi, eax
        jmp L_after
    L_null:
        xor esi, esi
    L_after:
        mov ecx, dword ptr [esp + 0x1c]
        push esi
        mov dword ptr [esp + 0x18], 0x1
        mov dword ptr [esp + 0xc], 0x0
        call ext_005BF510
        mov ecx, dword ptr [edi + 0x158]
        lea edx, [edi - 0xc]
        push edx
        call ext_005BF570
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005C4520] NMData::FluidObjectData::vfunc_21 (452 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_0058F630();
extern "C" void ext_005B18E0();
extern "C" void ext_005B3500();
extern "C" void ext_005B5E50();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9EF58;
extern "C" int mem_00A9F570;

extern "C" __declspec(naked) void __fastcall fn_005C4520(void* self) {
    __asm {
        push -0x1
        push 0x8a3ea4
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x38]
        push edi
        mov esi, ecx
        call ext_0058F630
        mov eax, dword ptr [mem_00A9F724]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0x38]
        push ecx
        lea edx, [esi + 0x160]
        push edx
        mov dword ptr [esp + 0x40], eax
        call ext_00427640
        mov eax, dword ptr [mem_00A9F7B8]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esi + 0x17c]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9EF58]
        add esp, 0x8
        push 0x1
        xor ebx, ebx
        push ebx
        push edx
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_5c45bf
        cmp eax, 0xb53b30
        je loc_5c45bf
        cmp eax, 0xb53ab0
        je loc_5c45bf
        cmp eax, 0xb53a70
        je loc_5c45bf
        cmp eax, 0xb53af0
        jne loc_5c45c4
    loc_5c45bf:
        mov eax, 0xb53b30
    loc_5c45c4:
        cmp eax, 0xb53a34
        je loc_5c46d0
        cmp eax, 0xb53b30
        je loc_5c46d0
        cmp eax, 0xb53ab0
        je loc_5c46d0
        cmp eax, 0xb53a70
        je loc_5c46d0
        cmp eax, 0xb53af0
        je loc_5c46d0
        push 0x4c
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x38], eax
        cmp eax, ebx
        mov dword ptr [esp + 0x30], ebx
        je loc_5c461a
        mov ecx, eax
        call ext_005B3500
        mov ebx, eax
    loc_5c461a:
        mov ecx, dword ptr [esi + 0x15c]
        cmp ebx, ecx
        mov dword ptr [esp + 0x30], 0xffffffff
        je loc_5c4638
        test ecx, ecx
        je loc_5c4638
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    loc_5c4638:
        test esi, esi
        mov dword ptr [esi + 0x15c], ebx
        je loc_5c464a
        lea ecx, [esi + 0x158]
        jmp short loc_5c464c
    loc_5c464a:
        xor ecx, ecx
    loc_5c464c:
        mov eax, ebx
        mov dword ptr [eax + 0x48], ecx
        mov eax, dword ptr [mem_00A9F570]
        push eax
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x15c]
        lea edx, [esp + 0xc]
        push edx
        mov dword ptr [esp + 0x34], 0x1
        call ext_005B18E0
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [mem_00A9EF58]
        push 0x1
        push 0x0
        push eax
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_5c46bf
        cmp eax, 0xb53b30
        je loc_5c46bf
        cmp eax, 0xb53ab0
        je loc_5c46bf
        cmp eax, 0xb53a70
        je loc_5c46bf
        cmp eax, 0xb53af0
        jne loc_5c46c4
    loc_5c46bf:
        mov eax, 0xb53b30
    loc_5c46c4:
        mov ecx, dword ptr [esi + 0x15c]
        push eax
        call ext_005B5E50
    loc_5c46d0:
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    }
}
