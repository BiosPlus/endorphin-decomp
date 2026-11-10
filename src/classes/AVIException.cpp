// Decompiled translation unit: src/classes/AVIException.cpp

extern "C" void ext_00401BB0();
extern "C" void ext_006A5C5C();

// [0x00401DB0] AVIException::vfunc_0 (36 bytes)
// Scalar deleting destructor: set vtable, run base dtor, free this if arg0 & 1.
extern "C" __declspec(naked) void __fastcall fn_00401DB0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 0x928f28
        call ext_00401BB0
        test byte ptr [esp + 0x8], 0x1
        je done
        push esi
        call ext_006A5C5C
        add esp, 0x4
    done:
        mov eax, esi
        pop esi
        ret 0x4
    }
}
