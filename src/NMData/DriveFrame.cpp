// Decompiled translation unit: src/NMData/DriveFrame.cpp

extern "C" void ext_006125B0();

// [0x005EC060] NMData::DriveFrame::vfunc_67 (15 bytes)
extern "C" __declspec(naked) float __fastcall fn_005EC060(void* self, int edx_unused, int idx) {
    __asm {
        call ext_006125B0
        mov ecx, dword ptr [esp + 0x4]
        fld dword ptr [eax + 4*ecx]
        ret 0x4
    }
}

// [0x00612590] NMData::DriveFrame::vfunc_33 (30 bytes)
extern "C" void ext_006114B0();

extern "C" void __fastcall fn_00612590(void* self) {
    ((void (__fastcall*)(void*))ext_006114B0)(self);
    *(float*)((char*)self + 0x168) = 0.0f;
    *(float*)((char*)self + 0x164) = 0.0f;
    *(float*)((char*)self + 0x160) = 0.0f;
}

// [0x005EC070] NMData::DriveFrame::vfunc_68 (30 bytes)
extern "C" __declspec(naked) float* __fastcall fn_005EC070(void* self, int edx_unused, float* out) {
    __asm {
        call ext_006125B0
        fld dword ptr [eax]
        mov ecx, dword ptr [esp + 0x4]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x8]
        mov eax, ecx
        fstp dword ptr [ecx + 0x8]
        ret 0x4
    }
}

// [0x0061D1A0] NMData::DriveFrame::vfunc_60 (62 bytes)
extern "C" void ext_00611200();

extern "C" __declspec(naked) void __fastcall fn_0061D1A0(void* self, int edx_unused, int idx, float val) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, ecx
        call ext_006125B0
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x4]
        lea ecx, dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x4]
        push ecx
        fstp dword ptr [esp + 0xc]
        mov ecx, esi
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 4*eax + 0x8]
        call ext_00611200
        pop esi
        add esp, 0xc
        ret 0x8
    }
}

// [0x0061D040] NMData::DriveFrame::vfunc_21 (265 bytes)
extern "C" void ext_00612650();
extern "C" void ext_0063F530();
extern "C" void ext_0067EFD0();
extern "C" void ext_00611200();
extern "C" void ext_00593910();
extern "C" int mem_00A9EE5C;
extern "C" int mem_00A9F34C;

extern "C" __declspec(naked) void __fastcall fn_0061D040(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        push esi
        mov edi, ecx
        call ext_00612650
        mov eax, dword ptr [mem_00A9EE5C]
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_set1
        cmp eax, 0xb53b30
        je L_set1
        cmp eax, 0xb53ab0
        je L_set1
        cmp eax, 0xb53a70
        je L_set1
        cmp eax, 0xb53af0
        jne L_not1
    L_set1:
        mov esi, 0xb53b30
        jmp L_after1
    L_not1:
        mov esi, eax
    L_after1:
        cmp esi, 0xb53a34
        je L_end
        cmp esi, 0xb53b30
        je L_end
        cmp esi, 0xb53ab0
        je L_end
        cmp esi, 0xb53a70
        je L_end
        cmp esi, 0xb53af0
        je L_end
        lea ecx, dword ptr [esp + 0x8]
        push esi
        push ecx
        call ext_0067EFD0
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_00611200
        mov edx, dword ptr [mem_00A9F34C]
        push 0x1
        push 0x0
        push edx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_set2
        cmp eax, 0xb53b30
        je L_set2
        cmp eax, 0xb53ab0
        je L_set2
        cmp eax, 0xb53a70
        je L_set2
        cmp eax, 0xb53af0
        jne L_not2
    L_set2:
        mov eax, 0xb53b30
    L_not2:
        cmp eax, 0xb53a34
        je L_end
        cmp eax, 0xb53b30
        je L_end
        cmp eax, 0xb53ab0
        je L_end
        cmp eax, 0xb53a70
        je L_end
        cmp eax, 0xb53af0
        je L_end
        push esi
        mov ecx, edi
        call ext_00593910
    L_end:
        pop edi
        pop esi
        add esp, 0xc
        ret 0x4
    }
}

extern "C" void ext_00611270();
extern "C" void ext_00640390();
extern "C" void ext_00593AE0();
extern "C" void ext_0067F040();

// [0x0061D150] NMData::DriveFrame::vfunc_22 (65 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0061D150(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push edi
        mov esi, ecx
        call ext_00611270
        mov eax, dword ptr [mem_00A9EE5C]
        push 0x0
        push eax
        mov ecx, edi
        call ext_00640390
        mov ecx, esi
        mov ebx, eax
        call ext_006125B0
        push eax
        push ebx
        call ext_0067F040
        add esp, 0x8
        push ebx
        mov ecx, esi
        call ext_00593AE0
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}
