// Decompiled translation unit: src/leaf/decompiled_480000.cpp

// [0x004806E0] sub_004806E0 (31 bytes)
extern "C" void ext_004A57F0();

extern "C" __declspec(naked) void __fastcall fn_004806E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x3e4], eax
        mov dword ptr [ecx + 0x3f0], eax
        mov ecx, dword ptr [ecx + 0x3b4]
        mov dword ptr [esp + 0x4], eax
        jmp ext_004A57F0
    }
}

// [0x0048FB30] sub_0048FB30 (33 bytes)
// Returns 0 if this->f4 is 0; otherwise (this->f8 - this->f4) / 124 (signed).
extern "C" int __fastcall fn_0048FB30(const int* self) {
    int a = self[1];
    if (a == 0) {
        return 0;
    }
    return (self[2] - a) / 124;
}

// [0x0048A9A0] sub_0048A9A0 (22 bytes)
extern "C" void ext_0048A120();

extern "C" void __fastcall fn_0048A9A0(void* self, int edx_unused, int a1, int a2) {
    typedef void (__cdecl *fn_t)(int, int, void*);
    ((fn_t)ext_0048A120)(a1, a2, self);
}
