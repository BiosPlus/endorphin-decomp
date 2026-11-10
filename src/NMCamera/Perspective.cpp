// Decompiled translation unit: src/NMCamera/Perspective.cpp

// [0x00552270] NMCamera::Perspective::vfunc_4 (59 bytes)
extern "C" void ext_005481A0();
extern "C" void ext_005481C0();
extern "C" void ext_0063E048();

extern "C" __declspec(naked) void __fastcall fn_00552270(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_005481A0
        sub esp, 0x8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_005481C0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        mov ecx, esi
        fld qword ptr [esi + 0xc0]
        fstp qword ptr [esp]
        call edx
        sub esp, 0x8
        fstp qword ptr [esp]
        call ext_0063E048
        pop esi
        ret
    }
}
