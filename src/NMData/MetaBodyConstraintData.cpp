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
