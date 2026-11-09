// Decompiled translation unit: src/Properties/PropertyIteratorTypes/ConstStringType.cpp

extern "C" void ext_0046F7D0();

// [0x00681B30] Properties::PropertyIteratorTypes::ConstStringType::vfunc_9 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_00681B30(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x18
    }
}
