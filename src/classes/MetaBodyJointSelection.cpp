// Decompiled translation unit: src/classes/MetaBodyJointSelection.cpp

extern "C" void ext_004EC660();
extern "C" void ext_004ED6B0();
extern "C" void ext_004EE200();
extern "C" void ext_006A5C5C();

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

// [0x004EDC10] MetaBodyJointSelection::vfunc_0 (69 bytes)
extern "C" void* __fastcall fn_004EDC10(void* self, int edx_unused, int a1) {
    unsigned char* p = static_cast<unsigned char*>(self);
    void* held = *reinterpret_cast<void**>(p + 0x58);
    if (held != 0) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(held);
    }
    *reinterpret_cast<int*>(p + 0x58) = 0;
    *reinterpret_cast<int*>(p + 0x5c) = 0;
    *reinterpret_cast<int*>(p + 0x60) = 0;
    reinterpret_cast<void (__fastcall*)(void*)>(ext_004ED6B0)(self);
    if (a1 & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(self);
    }
    return self;
}
