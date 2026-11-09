// Decompiled translation unit: src/classes/MetaBodyJointSelection.cpp

extern "C" void ext_004EC660();
extern "C" void ext_004EE200();

// [0x004EE600] MetaBodyJointSelection::vfunc_1_off_4 (25 bytes)
// Forwards its stack argument to CharacterSelection::vfunc_1_off_4 with `this`, then calls sub_004EE200 on (this - 4).
extern "C" __declspec(naked) void __fastcall fn_004EE600(void* self, int edx_unused, int a0) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_004EC660
        lea ecx, [esi - 4]
        call ext_004EE200
        pop esi
        ret 4
    }
}
