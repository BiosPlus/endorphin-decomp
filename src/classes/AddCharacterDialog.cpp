// Decompiled translation unit: src/classes/AddCharacterDialog.cpp

extern "C" void ext_0040DA90();
extern "C" void ext_0040E780();
extern "C" void ext_0040E7C0();
extern "C" void ext_0040C330();

// [0x0040E7E0] AddCharacterDialog::vfunc_89 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_0040E7E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0040DA90
        mov ecx, esi
        call ext_0040E780
        mov ecx, esi
        call ext_0040E7C0
        mov ecx, esi
        pop esi
        jmp ext_0040C330
    }
}

// [0x0040CEC0] AddCharacterDialog::vfunc_63 (37 bytes)
extern "C" void ext_0040CD90();
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0040CEC0(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *ThisFn)(void*, int);
    typedef void (__stdcall *StdFn)(int, int, int);
    ((ThisFn)ext_0040CD90)(self, a1);
    ((StdFn)ext_006A5F44)(a1, 0x4f4, (int)self + 0x340);
}

// [0x0040DFE0] AddCharacterDialog::vfunc_84 (49 bytes)
extern "C" void ext_0040AE10();
extern "C" void ext_0040B710();
extern "C" void ext_0040DA50();
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;
extern "C" int mem_00AC88D8;

extern "C" __declspec(naked) void* __fastcall fn_0040DFE0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_0040DA50
        mov ecx, offset mem_00AC88D8
        mov edi, eax
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, esi
        call ext_006A5F50
        mov ecx, esi
        call ext_0040B710
        mov ecx, esi
        call ext_0040AE10
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
