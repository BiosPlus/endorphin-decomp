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
