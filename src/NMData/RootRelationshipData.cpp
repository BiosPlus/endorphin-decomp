// Decompiled translation unit: src/NMData/RootRelationshipData.cpp

// [0x005EBEA0] NMData::RootRelationshipData::vfunc_22 (17 bytes)
extern "C" void ext_005EB5A0();

extern "C" __declspec(naked) void* __fastcall fn_005EBEA0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_005EB5A0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x005EE2B0] NMData::RootRelationshipData::vfunc_33 (24 bytes)
extern "C" void ext_005EDFD0();
extern "C" int mem_00924FD4;

extern "C" void __fastcall fn_005EE2B0(void* self) {
    ((void (__fastcall*)(void*))ext_005EDFD0)(self);
    typedef void* (__thiscall *AssignFn)(void*, const char*);
    ((AssignFn)mem_00924FD4)((char*)self + 0x14, "root");
}
