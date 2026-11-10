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

// [0x0054C260] ManagedDisplayList<RenderableList>::vfunc_2 (76 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0054C260(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x14]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_chk1
        call ebp
L_chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2
        call ebp
L_chk2:
        cmp esi, esi
        je L_chk3
        call ebp
L_chk3:
        cmp edi, ebx
        je L_done
        cmp edi, dword ptr [esi + 0x8]
        jb L_call
        call ebp
L_call:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8]
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_inc
        call ebp
L_inc:
        add edi, 0x4
        jmp L_chk1
L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
