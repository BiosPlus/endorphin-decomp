// Decompiled translation unit: src/leaf/decompiled_670000.cpp

// [0x0067F8F0] sub_0067F8F0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0067F8F0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        je done_0067F8F0
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov esi, edx
        sub esi, ecx
        sar esi, 0x2
        pop esi
        je done_0067F8F0
        add edx, -0x4
        mov dword ptr [eax + 0x8], edx
    done_0067F8F0:
        pop ecx
        ret
    }
}
