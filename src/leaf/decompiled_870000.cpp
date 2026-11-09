// Decompiled translation unit: src/leaf/decompiled_870000.cpp

// [0x00871D00] sub_00871D00 (25 bytes)
extern "C" void ext_00871C50();

extern "C" __declspec(naked) void __fastcall fn_00871D00(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
    loop_00871D08:
        push edi
        mov ecx, esi
        call ext_00871C50
        test al, al
        jne loop_00871D08
        pop edi
        pop esi
        ret 4
    }
}
