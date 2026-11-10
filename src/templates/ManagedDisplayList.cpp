// Decompiled translation unit: src/templates/ManagedDisplayList.cpp

extern "C" void ext_00532B40();
extern "C" void ext_006A5C5C();
extern "C" int mem_009253E8;

// [0x00533E90] ManagedDisplayList<UtilityGraphics::Grid>::vfunc_0 (54 bytes)
// Resets vtable to ManagedDisplayList<Grid>, deletes the display list at this+0x30 if non-zero (glDeleteLists(list, 1)),
// calls the base-cleanup sub_00532B40 on this, and if (arg & 1) also calls thunk_MFC80_ord_764(this) (operator delete path). Returns this; ret 4.
extern "C" __declspec(naked) void* __fastcall fn_00533E90(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x30]
        test eax, eax
        mov dword ptr [esi], 0x9547fc
        je skip_delete
        push 0x1
        push eax
        call dword ptr [mem_009253E8]
    skip_delete:
        mov ecx, esi
        call ext_00532B40
        test byte ptr [esp + 0x8], 0x1
        je skip_free
        push esi
        call ext_006A5C5C
        add esp, 0x4
    skip_free:
        mov eax, esi
        pop esi
        ret 0x4
    }
}
