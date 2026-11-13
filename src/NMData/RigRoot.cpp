// Decompiled translation unit: src/NMData/RigRoot.cpp

// [0x005AAA40] NMData::RigRoot::vfunc_22 (36 bytes)
extern "C" void ext_005AA6C0();
extern "C" void ext_006404E0();
extern "C" int mem_00A9F288;

extern "C" __declspec(naked) void* __fastcall fn_005AAA40(void* self, int edx_unused, void* a1) {
    __asm {
        mov     eax, dword ptr [mem_00A9F288]
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        call    ext_006404E0
        mov     esi, eax
        push    esi
        mov     ecx, edi
        call    ext_005AA6C0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
