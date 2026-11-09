// Decompiled translation unit: src/classes/VMCActionApp.cpp

// [0x00464740] VMCActionApp::vfunc_23 (22 bytes)
extern "C" void ext_00439FD0();
extern "C" void ext_006A69A6();
extern "C" int mem_00ACDB40;

extern "C" __declspec(naked) void __fastcall fn_00464740(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_00439FD0
        mov ecx, esi
        pop esi
        jmp ext_006A69A6
    }
}
