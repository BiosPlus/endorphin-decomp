// Decompiled translation unit: src/NMData/Characterization.cpp

// [0x005AAA70] NMData::Characterization::vfunc_22 (36 bytes)
extern "C" void ext_006404E0();
extern "C" void ext_0058F650();
extern "C" int mem_00A9ED9C;

extern "C" __declspec(naked) int __fastcall fn_005AAA70(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9ED9C]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        call ext_006404E0
        mov esi, eax
        push esi
        mov ecx, edi
        call ext_0058F650
        pop edi
        mov eax, esi
        pop esi
        ret 0x4
    }
}
