// Decompiled translation unit: src/leaf/decompiled_700000.cpp

// [0x007057B0] sub_007057B0 (16 bytes)
extern "C" void __stdcall ext_00783FD0(void* a1);

extern "C" __declspec(naked) void __fastcall fn_007057B0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x40]
        test ecx, ecx
        je done
        push eax
        call ext_00783FD0
    done:
        ret
    }
}
