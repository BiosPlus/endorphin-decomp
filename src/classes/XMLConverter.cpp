// Decompiled translation unit: src/classes/XMLConverter.cpp

extern "C" void ext_006404E0();
extern "C" int mem_00924FF0;

// [0x00678500] XMLConverter::vfunc_15 (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_00678500(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        add ecx, 4
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 8]
        push eax
        call ext_006404E0
        ret 8
    }
}
