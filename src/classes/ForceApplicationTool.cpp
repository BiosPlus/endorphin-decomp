// Decompiled translation unit: src/classes/ForceApplicationTool.cpp

// [0x00544380] ForceApplicationTool::vfunc_26 (18 bytes)
extern "C" void ext_005442D0();

extern "C" void __fastcall fn_00544380(void* self) {
    typedef void (__fastcall *VFunc)(void*);
    ext_005442D0();
    void* vt = *(void**)self;
    VFunc f = *(VFunc*)((char*)vt + 0x74);
    f(self);
}

// [0x00544070] ForceApplicationTool::vfunc_24 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_00544070(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x74]
        call edx
        cmp dword ptr [esi + 0x88], 0x0
        je done
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x3c]
        pop esi
        jmp edx
    done:
        pop esi
        ret
    }
}
