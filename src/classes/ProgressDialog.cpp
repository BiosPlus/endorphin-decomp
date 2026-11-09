// Decompiled translation unit: src/classes/ProgressDialog.cpp

// [0x00447FA0] ProgressDialog::vfunc_3_off_74 (26 bytes)
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00447FA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x58]
        call ext_006A5F50
        pop esi
        ret 0x4
    }
}
