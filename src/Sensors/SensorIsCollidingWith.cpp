// Decompiled translation unit: src/Sensors/SensorIsCollidingWith.cpp

// [0x00625F40] Sensors::SensorIsCollidingWith::vfunc_17 (23 bytes)
extern "C" void __fastcall ext_00625DE0(void* self);

extern "C" float __fastcall fn_00625F40(void* self) {
    ext_00625DE0(self);
    return (float)(*((unsigned char*)self + 0x30));
}

// [0x006259C0] Sensors::SensorIsCollidingWith::vfunc_2 (99 bytes)
// Compares the std::string at a2 against "Normalized" and "UnNormalized" (operator== via mem_00924FC0).
// On a match calls sub_006259A0(a1, this); otherwise calls sub_00671F30(a1). Returns a1.
extern "C" void ext_006259A0();
extern "C" void ext_00671F30();
extern "C" int mem_00924FC0;
extern "C" __declspec(naked) void* __fastcall fn_006259C0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [mem_00924FC0]
        push 0x960940
        push esi
        mov ebx, ecx
        mov dword ptr [esp + 0x14], 0x0
        call edi
        add esp, 0x8
        test al, al
        jne match
        push 0x95e77c
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne match
        mov esi, dword ptr [esp + 0x14]
        push esi
        call ext_00671F30
        add esp, 0x4
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    match:
        mov esi, dword ptr [esp + 0x14]
        push ebx
        push esi
        call ext_006259A0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    }
}
