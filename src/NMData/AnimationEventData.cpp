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
