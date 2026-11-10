// Decompiled translation unit: src/NMData/GraphEngineData.cpp

extern "C" void ext_004B4710();
extern "C" void ext_0055DA20();
extern "C" int mem_00AE0D6C;
extern "C" int mem_00AE0D68;

// [0x004B48E0] NMData::GraphEngineData::vfunc_13 (69 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004B48E0(void* self, int edx_unused, void* a1, int a2_unused) {
    __asm {
        push ecx
        mov eax, 0x1
        test byte ptr [mem_00AE0D6C], al
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0x0
        jne done_init
        or dword ptr [mem_00AE0D6C], eax
        call ext_004B4710
        mov dword ptr [mem_00AE0D68], eax
    done_init:
        mov eax, dword ptr [mem_00AE0D68]
        add esi, 0x8
        push esi
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
