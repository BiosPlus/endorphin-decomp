// Decompiled translation unit: src/leaf/decompiled_680000.cpp

// [0x0068BC50] sub_0068BC50 (15 bytes)
extern "C" void ext_00695390();
extern "C" __declspec(naked) void __fastcall fn_0068BC50(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        push 0x0
        push eax
        add ecx, 0x10
        call ext_00695390
        ret
    }
}

// [0x0068BC30] sub_0068BC30 (17 bytes)
extern "C" void ext_00695460();
extern "C" __declspec(naked) void __fastcall fn_0068BC30(void* self) {
    __asm {
        push ecx
        add ecx, 0x10
        call ext_00695460
        fstp dword ptr [esp]
        fld dword ptr [esp]
        pop ecx
        ret
    }
}

// [0x006829E0] sub_006829E0 (20 bytes)
extern "C" void ext_0066B080();
extern "C" __declspec(naked) void __fastcall fn_006829E0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x28]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x30]
        call edx
        push eax
        call ext_0066B080
        add esp, 4
        ret
    }
}

// [0x006824C0] sub_006824C0 (22 bytes)
extern "C" void ext_00674150();
extern "C" void __fastcall fn_006824C0(void* self, int edx_unused, int a1) {
    typedef int* (__thiscall *Callee)(void* self, int a1);
    Callee callee = reinterpret_cast<Callee>(&ext_00674150);
    int* result = callee(static_cast<char*>(self) + 4, a1);
    *result = 1;
}
