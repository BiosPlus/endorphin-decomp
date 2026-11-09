// Decompiled translation unit: src/leaf/decompiled_490000.cpp

// [0x00493E10] sub_00493E10 (20 bytes)
// Tail-call thunk: stores the byte argument at self+8, forwards self->inner's vfunc[5] with the arg.
extern "C" __declspec(naked) void __fastcall fn_00493E10(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov byte ptr [ecx + 8], al
        mov ecx, dword ptr [ecx]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0x14]
        jmp eax
    }
}

// [0x00494830] sub_00494830 (33 bytes)
// Returns 0 if this->f0C is 0; otherwise (this->f10 - this->f0C) / 28 (signed).
extern "C" int __fastcall fn_00494830(const int* self) {
    int a = self[3];
    if (a == 0) {
        return 0;
    }
    return (self[4] - a) / 28;
}

// [0x004940D0] sub_004940D0 (8 bytes)
// Calls sub_00494050 (ecx preserved across the call), then returns the original this in eax.
extern "C" void ext_00494050();

extern "C" __declspec(naked) void __fastcall fn_004940D0(void* self) {
    __asm {
        call ext_00494050
        mov eax, ecx
        ret
    }
}

// [0x004940E0] sub_004940E0 (24 bytes)
extern "C" void ext_00494060();

extern "C" __declspec(naked) void __fastcall fn_004940E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test dword ptr [ecx], eax
        setne dl
        cmp dl, byte ptr [esp + 0x8]
        je L_done
        push eax
        call ext_00494060
    L_done:
        ret 0x8
    }
}

// [0x00496CE0] sub_00496CE0 (25 bytes)
// __thiscall with ret 4: pushes arg, calls sub_004948C0 (result pushed), then calls sub_00496CC0 with ecx=this.
extern "C" void ext_004948C0();
extern "C" void ext_00496CC0();

extern "C" __declspec(naked) void __fastcall fn_00496CE0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_004948C0
        push eax
        mov ecx, esi
        call ext_00496CC0
        pop esi
        ret 0x4
    }
}
