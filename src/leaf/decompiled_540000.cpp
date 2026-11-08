// Decompiled translation unit: src/leaf/decompiled_540000.cpp

// [0x00543530] sub_00543530 (21 bytes)
extern "C" __declspec(naked) void __fastcall fn_00543530(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov byte ptr [ecx + 0x90], 1
        mov byte ptr [ecx + 0x93], 0
        mov eax, dword ptr [eax + 0x40]
        jmp eax
    }
}

// [0x00543580] sub_00543580 (21 bytes)
extern "C" __declspec(naked) void __fastcall fn_00543580(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov byte ptr [ecx + 0x91], 1
        mov byte ptr [ecx + 0x94], 0
        mov eax, dword ptr [eax + 0x4c]
        jmp eax
    }
}

// [0x005435D0] sub_005435D0 (21 bytes)
extern "C" __declspec(naked) void __fastcall fn_005435D0(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov byte ptr [ecx + 0x92], 1
        mov byte ptr [ecx + 0x95], 0
        mov eax, dword ptr [eax + 0x54]
        jmp eax
    }
}

// [0x00540D00] sub_00540D00 (24 bytes)
// idx = this->[0xf8]; this2 = this->slots[idx*15 + 2] (stride 0x3C, starting at +8); tail-call vfunc[7] (+0x1c) on this2.
extern "C" __declspec(naked) void __fastcall fn_00540D00(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xf8]
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov ecx, dword ptr [ecx + 4*edx + 8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1c]
        jmp edx
    }
}
