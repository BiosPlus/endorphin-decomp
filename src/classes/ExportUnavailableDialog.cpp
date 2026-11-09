// Decompiled translation unit: src/classes/ExportUnavailableDialog.cpp

// [0x00461630] ExportUnavailableDialog::vfunc_63 (22 bytes)
extern "C" void ext_006A5F44();

// [0x00461630] ExportUnavailableDialog::vfunc_63 (22 bytes)
extern "C" __declspec(naked) void __fastcall fn_00461630(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x11c
        push ecx
        push 1
        push eax
        call ext_006A5F44
        ret 0x4
    }
}
