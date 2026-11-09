// Decompiled translation unit: src/classes/RelationshipRPROMagnet.cpp

extern "C" void ext_007C9260();
extern "C" void ext_007D8700();

// [0x00648EF0] RelationshipRPROMagnet::vfunc_49 (28 bytes)
extern "C" __declspec(naked) void __fastcall fn_00648EF0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x94]
        push eax
        call ext_007D8700
        push eax
        call ext_007C9260
        add esp, 0x8
        neg eax
        sbb eax, eax
        neg eax
        ret
    }
}
