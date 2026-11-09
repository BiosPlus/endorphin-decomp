// Decompiled translation unit: src/classes/UpdateAvailableDialog.cpp

extern "C" int mem_00AD592C;
extern "C" int mem_00A307E0;
extern "C" int mem_00A307E4;

// [0x004614E0] UpdateAvailableDialog::vfunc_7_off_74 (40 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004614E0(void* self) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00AD592C], al
        jne done_004614E0
        or dword ptr [mem_00AD592C], eax
        xor eax, eax
        xor ecx, ecx
        mov dword ptr [mem_00A307E0], eax
        mov dword ptr [mem_00A307E4], ecx
    done_004614E0:
        mov eax, 0xA307D4
        ret
    }
}
