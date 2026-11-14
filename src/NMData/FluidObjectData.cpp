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
