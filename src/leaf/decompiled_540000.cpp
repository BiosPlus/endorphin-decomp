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

// [0x005434C0] sub_005434C0 (25 bytes)
extern "C" __declspec(naked) void __fastcall fn_005434C0(void* self) {
    __asm {
        cmp dword ptr [ecx + 0x88], 0
        jne forward
        mov al, 1
        ret
    forward:
        mov ecx, dword ptr [ecx + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x20]
        jmp edx
    }
}

// [0x005478B0] sub_005478B0 (14 bytes)
extern "C" void ext_005B11E0();
extern "C" __declspec(naked) void __fastcall fn_005478B0(void* self) {
    __asm {
        push 0x5
        add ecx, 0x210
        call ext_005B11E0
        ret
    }
}

// [0x005478C0] sub_005478C0 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_005478C0(void* self) {
    __asm {
        push 0x3
        add ecx, 0x210
        call ext_005B11E0
        ret
    }
}

// [0x005478D0] sub_005478D0 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_005478D0(void* self) {
    __asm {
        push 0x4
        add ecx, 0x210
        call ext_005B11E0
        ret
    }
}

// [0x005470D0] sub_005470D0 (22 bytes)
extern "C" void ext_00543350();
extern "C" float mem_0093F8F0;
extern "C" void __fastcall fn_005470D0(void* self) {
    ext_00543350();
    *(float*)((char*)self + 0xc4) = mem_0093F8F0;
}
