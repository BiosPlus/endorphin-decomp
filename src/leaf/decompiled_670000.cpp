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

// [0x00678100] sub_00678100 (15 bytes)
extern "C" void ext_00677D10();
extern "C" void __fastcall fn_00678100(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x10) = a1;
    ext_00677D10();
}

// [0x00671F20] sub_00671F20 (15 bytes)
extern "C" void ext_00671F10();
extern "C" void ext_00693620();
extern "C" void ext_0068ED90();
extern "C" void __cdecl fn_00671F20() {
    ext_00671F10();
    ext_00693620();
    ext_0068ED90();
}
