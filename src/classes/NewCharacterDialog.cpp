// Decompiled translation unit: src/classes/NewCharacterDialog.cpp

extern "C" void ext_0040DAB0();
extern "C" void ext_0040E780();
extern "C" void ext_0040E7C0();

extern "C" void ext_0040AE10();
extern "C" void ext_0040B7B0();
extern "C" void ext_0040DA50();
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;
extern "C" int mem_00AC88F4;

// [0x0040E040] NewCharacterDialog::vfunc_84 (61 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0040E040(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_0040DA50
        mov ecx, offset mem_00AC88F4
        mov edi, eax
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, esi
        call ext_006A5F50
        mov ecx, esi
        call ext_0040B7B0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x168]
        mov ecx, esi
        call edx
        mov ecx, esi
        call ext_0040AE10
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x0040E800] NewCharacterDialog::vfunc_89 (23 bytes)
extern "C" __declspec(naked) void __fastcall fn_0040E800(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0040DAB0
        mov ecx, esi
        call ext_0040E780
        mov ecx, esi
        pop esi
        jmp ext_0040E7C0
    }
}

extern "C" void ext_0040CD90();
extern "C" void ext_006A5F44();

// [0x0040D470] NewCharacterDialog::vfunc_63 (88 bytes)
extern "C" void __fastcall fn_0040D470(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *BaseFn)(void*, int);
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    ((BaseFn)ext_0040CD90)(self, a1);
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x4c3, p + 0x3b4);
    ddx(a1, 0x480, p + 0x428);
    ddx(a1, 0x4c5, p + 0x360);
    ddx(a1, 3, p + 0x49c);
}

