// Decompiled translation unit: src/classes/GWCPropertiesCtrl.cpp

// [0x006A7A60] GWCPropertiesCtrl::vfunc_22 (37 bytes)
extern "C" void ext_006A5CE0();
extern "C" void ext_006A5EA2();

extern "C" __declspec(naked) void __fastcall fn_006A7A60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5CE0
        push 0x0
        push 0x2000000
        push 0x0
        mov ecx, esi
        call ext_006A5EA2
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x174]
        mov ecx, esi
        pop esi
        jmp edx
    }
}
