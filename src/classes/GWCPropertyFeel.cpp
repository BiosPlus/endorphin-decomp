// Decompiled translation unit: src/classes/GWCPropertyFeel.cpp

extern "C" void ext_006A5E72();

// [0x006B0C10] GWCPropertyFeel::vfunc_5 (30 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006B0C10(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je short L_empty
        push 0x5
        call ext_006A5E72
        mov eax, dword ptr [esi + 0x4]
        pop esi
        ret 0x14
    L_empty:
        mov eax, ecx
        pop esi
        ret 0x14
    }
}
