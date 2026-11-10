// Decompiled translation unit: src/classes/SceneNotesFrame.cpp

extern "C" void ext_004564A0();
extern "C" void ext_006A5E4E();

// [0x004552A0] SceneNotesFrame::vfunc_108 (52 bytes)
extern "C" __declspec(naked) void __fastcall fn_004552A0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push edi
        push ebx
        push eax
        mov esi, ecx
        call ext_004564A0
        mov ecx, dword ptr [esi + 0x144]
        push 0x4
        push edi
        push ebx
        push 0x0
        push 0x0
        push 0x0
        call ext_006A5E4E
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}
