// Decompiled translation unit: src/Primitives/Hinge.cpp

extern "C" void ext_0053A930();
extern "C" int mem_009553B0;

// [0x0053BED0] Primitives::Hinge::vfunc_30 (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053BED0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov edx, dword ptr [esp + 8]
        sub esp, 8
        mov eax, esp
        mov dword ptr [eax], offset mem_009553B0
        mov dword ptr [eax + 4], edx
        call ext_0053A930
        ret 8
    }
}
