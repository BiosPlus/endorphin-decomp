// Decompiled translation unit: src/classes/HasConstantTMPtr.cpp

// [0x005321E0] HasConstantTMPtr::vfunc_10 (20 bytes)
// Tail-call thunk: replaces the first stack arg with this->+0x4 and jumps to arg0's vfunc[4].
extern "C" __declspec(naked) void __fastcall fn_005321E0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [eax + 4]
        mov edx, dword ptr [edx + 0x10]
        mov dword ptr [esp + 4], eax
        jmp edx
    }
}

// [0x00532200] HasConstantTMPtr::vfunc_12 (23 bytes)
// Tail-call thunk: replaces the first stack arg with this->+0x4+0x30 and jumps to arg0's vfunc[7].
extern "C" __declspec(naked) void __fastcall fn_00532200(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x1c]
        add eax, 0x30
        mov dword ptr [esp + 4], eax
        jmp edx
    }
}

extern "C" void ext_004F9950();

// [0x0053A6A0] HasConstantTMPtr::vfunc_1 (20 bytes)
// Loads ecx = this->+0x4, forwards arg1 to sub_004F9950 (ret 0x4), returns arg1 in eax.
extern "C" __declspec(naked) void __fastcall fn_0053A6A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_004F9950
        mov eax, esi
        pop esi
        ret 0x4
    }
}
