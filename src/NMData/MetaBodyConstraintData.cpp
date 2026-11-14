// Decompiled translation unit: src/NMData/MetaBodyConstraintData.cpp

// [0x004CD090] NMData::MetaBodyConstraintData::vfunc_87 (58 bytes)
extern "C" void ext_004CCC60();
extern "C" void ext_0046AC30();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004CD090(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 180h]
        test ecx, ecx
        je short L_done
        push edi
        call ext_004CCC60
        mov edi, dword ptr [esi + 180h]
        test edi, edi
        je short L_clear
        mov ecx, edi
        call ext_0046AC30
        push edi
        call ext_006A5C5C
        add esp, 4
    L_clear:
        mov dword ptr [esi + 180h], 0
        pop edi
    L_done:
        pop esi
        ret
    }
}

// [0x004CC5B0] NMData::MetaBodyConstraintData::vfunc_15 (88 bytes)
extern "C" void ext_004C3410();
extern "C" void ext_004CBBB0();
extern "C" void ext_00671F30();

extern "C" void* __fastcall fn_004CC5B0(void* self, int edx_unused, void* a1, int a2) {
    volatile int dummy = 0;
    switch (a2) {
    case 0x2d4:
        ((void (__cdecl*)(void*))ext_00671F30)(a1);
        break;
    case 0x2f1:
        if (*(int*)((char*)self + 0x184) == 3) {
            ((void (__cdecl*)(void*, void*))ext_004CBBB0)(a1, self);
        } else {
            ((void (__cdecl*)(void*))ext_00671F30)(a1);
        }
        break;
    default:
        ((void (__thiscall*)(void*, void*, int))ext_004C3410)(self, a1, a2);
        break;
    }
    return a1;
}

// [0x004CA380] NMData::MetaBodyConstraintData::vfunc_59 (34 bytes)
extern "C" void ext_006404E0();
extern "C" int mem_00A9F314;
extern "C" __declspec(naked) void __fastcall fn_004CA380(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F314]
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

// [0x004CD0D0] NMData::MetaBodyConstraintData::vfunc_90 (188 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00594000();
extern "C" void ext_00599E70();
extern "C" void ext_004C2760();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004CD0D0(void* self) {
    __asm {
        push -1
        push 0x88bc71
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0xc], edi
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], edi
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x13c]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x40], edi
        call edx
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x3c], 0xffffffff
        call ext_004026E0
        call ext_00594000
        cmp eax, edi
        je short L_done
        mov eax, dword ptr [esi + 0x168]
        cmp eax, edi
        jne short L_has_p
        call ext_00594000
        mov ecx, eax
        call ext_00599E70
        jmp short L_check_obj
    L_has_p:
        mov eax, dword ptr [eax + 0x38c]
    L_check_obj:
        cmp eax, edi
        je short L_done
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, eax
        call edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x40], 1
        call ext_004C2760
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x3c], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_done:
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x38
        ret
    }
}

extern "C" void __fastcall ext_004CC720(void* self);
extern "C" void __fastcall ext_004CC9E0(void* self);

// [0x004CCAA0] NMData::MetaBodyConstraintData::vfunc_84 (74 bytes)
extern "C" void __fastcall fn_004CCAA0(void* self, int edx_unused, int frame) {
    void* obj = *(void**)((char*)self + 0x180);
    if (obj && *((char*)self + 0x17c)) {
        if (frame >= *(int*)((char*)self + 0x15c) && frame < *(int*)((char*)self + 0x160)) {
            ext_004CC720(obj);
        } else if (frame >= *(int*)((char*)self + 0x160) || frame < *(int*)((char*)self + 0x15c)) {
            ext_004CC9E0(obj);
        }
    }
}

// [0x004CA310] NMData::MetaBodyConstraintData::vfunc_14 (90 bytes)
extern "C" void ext_004C2070();
extern "C" void ext_00661680();

extern "C" __declspec(naked) void* __fastcall fn_004CA310(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0xd
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0
        je L_194
        cmp eax, 0x134
        je L_188
        push eax
        push esi
        call ext_004C2070
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_188:
        add ecx, 0x188
        push ecx
        push 3
        mov ecx, esi
        call ext_00661680
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_194:
        add ecx, 0x194
        push ecx
        push 3
        mov ecx, esi
        call ext_00661680
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}
