// Decompiled translation unit: src/Properties/PropertySelectionEngine.cpp

extern "C" void ext_00677FB0();
extern "C" void ext_00678100();

// [0x004AECA0] Properties::PropertySelectionEngine::vfunc_3 (20 bytes)
// Tail-call: forwards (self->+0x8, flag != 0) to ext_00677FB0.
extern "C" __declspec(naked) void __fastcall fn_004AECA0(void* self) {
    __asm {
        cmp dword ptr [esp + 0xc], 0
        mov ecx, dword ptr [ecx + 0x8]
        setne al
        mov dword ptr [esp + 0xc], eax
        jmp ext_00677FB0
    }
}

// [0x004AEE40] Properties::PropertySelectionEngine::vfunc_2 (28 bytes)
// Calls ext_00678100 with this=self->+0x8 and one stack arg, then stores
// the arg at self->+0xc->+0x4c.
extern "C" __declspec(naked) void __fastcall fn_004AEE40(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        push edi
        call ext_00678100
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [eax + 0x4c], edi
        pop edi
        pop esi
        ret 4
    }
}
