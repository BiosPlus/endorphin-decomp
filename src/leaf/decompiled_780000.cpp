// Decompiled translation unit: src/leaf/decompiled_780000.cpp

// [0x00783840] sub_00783840 (32 bytes)
// Stores four stack args into self->[0], [4], [8], [0xC]; ret 0x10.
extern "C" __declspec(naked) void __fastcall fn_00783840(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], edx
        ret 0x10
    }
}

// [0x007895C0] sub_007895C0 (48 bytes)
// Forwards two stack args to a virtual on self->[8] (vtbl+0x14) if non-null,
// otherwise to a virtual on self->[0x14] (vtbl+0x10); ret 0x8.
extern "C" __declspec(naked) void __fastcall fn_007895C0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        je short L_null
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esp + 0x8]
        push edx
        call dword ptr [eax + 0x14]
        ret 0x8
L_null:
        mov edx, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0x10]
        ret 0x8
    }
}

// [0x007895F0] sub_007895F0 (48 bytes)
// Forwards two stack args to a virtual on self->[8] (vtbl+0x1c) if non-null,
// otherwise to a virtual on self->[0x14] (vtbl+0x30); ret 0x8.
extern "C" __declspec(naked) void __fastcall fn_007895F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        je short L_null
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esp + 0x8]
        push edx
        call dword ptr [eax + 0x1c]
        ret 0x8
L_null:
        mov edx, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0x30]
        ret 0x8
    }
}

// [0x00789620] sub_00789620 (48 bytes)
extern "C" __declspec(naked) int __fastcall fn_00789620(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 8]
        test ecx, ecx
        je short L_no_inner
        mov edx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esp + 8]
        push edx
        call dword ptr [eax + 20h]
        ret 8
L_no_inner:
        mov edx, dword ptr [esp + 8]
        mov ecx, dword ptr [eax + 14h]
        push edx
        mov edx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 34h]
        ret 8
    }
}

// [0x00783570] sub_00783570 (63 bytes)
extern "C" int mem_009252C4;
extern "C" __declspec(naked) void __fastcall fn_00783570(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov edx, dword ptr [ecx + 0x4]
        mov al, byte ptr [edx + 0x4]
        test al, al
        je done
        mov eax, dword ptr [esp + 0x4]
        xor ecx, ecx
        sub eax, ecx
        je zero
        dec eax
        je one
        dec eax
        jne go
        mov ecx, 0x2
        jmp go
    one:
        mov ecx, 0x1
        jmp go
    zero:
        xor ecx, ecx
    go:
        mov eax, dword ptr [esp + 0x8]
        push ecx
        mov ecx, dword ptr [edx]
        push eax
        push ecx
        call dword ptr [mem_009252C4]
        add esp, 0xc
    done:
        ret 0x8
    }
}
