// Decompiled translation unit: src/templates/PointainerVectorType.cpp

// [0x00681B00] Properties::PointainerVectorType<PointainerWithUndo<UndoablePointainerVector<Interpreter>>, Properties::GetPropertySource>::vfunc_1 (28 bytes)
extern "C" void ext_00661620();

extern "C" __declspec(naked) void* __fastcall fn_00681B00(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ecx, esi
        mov dword ptr [esp + 0x4], 0x0
        call ext_00661620
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}
