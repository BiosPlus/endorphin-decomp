// Decompiled translation unit: src/leaf/decompiled_6B0000.cpp

// [0x006B6270] sub_006B6270 (25 bytes)
extern "C" void ext_006B0DE0();

extern "C" __declspec(naked) void __fastcall fn_006B6270(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 0x114], eax
        mov dword ptr [esp + 4], eax
        add ecx, 0xa8
        jmp ext_006B0DE0
    }
}

// [0x006BB730] sub_006BB730 (31 bytes)
extern "C" void ext_006BB900();

extern "C" __declspec(naked) void __fastcall fn_006BB730(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov dword ptr [eax], 0x6
        mov edx, dword ptr [ecx]
        mov dword ptr [edx + 0x4], 0x1
        mov eax, dword ptr [ecx]
        mov dword ptr [eax + 0x8], 0x0
        jmp ext_006BB900
    }
}

extern "C" void ext_006B7DE0();

// [0x006B6030] sub_006B6030 (32 bytes)
// Stores arg0 into this+0xD8; if this+0xD4 is non-null, replace arg0 with the value
// and tail-jump to 0x006B7DE0 with ecx = this+0xD4; otherwise ret 8.
extern "C" __declspec(naked) void __fastcall fn_006B6030(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 0xd8], eax
        mov ecx, dword ptr [ecx + 0xd4]
        test ecx, ecx
        je done_006B6030
        mov dword ptr [esp + 4], eax
        jmp ext_006B7DE0
    done_006B6030:
        ret 8
    }
}

// [0x006B8B10] sub_006B8B10 (8 bytes)
// Calls thunk_MFC80_ord_1903 (ext_006A5EA8) and returns, popping three stack arguments.
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_006B8B10(void* self) {
    __asm {
        call ext_006A5EA8
        ret 0xc
    }
}

// [0x006B0EB0] sub_006B0EB0 (12 bytes)
extern "C" void ext_006A5EA8();
extern "C" void __fastcall fn_006B0EB0(void* self, int edx_unused, int a1, int a2, int a3) {
    *((unsigned char*)self + 0x60) = 1;
    ext_006A5EA8();
}

// [0x006B1800] sub_006B1800 (12 bytes)
extern "C" void ext_006B16F0();
extern "C" __declspec(naked) void __stdcall fn_006B1800(int a1, int a2, int a3) {
    __asm {
        push 0
        push 0
        call ext_006B16F0
        ret 0Ch
    }
}

// [0x006B4D90] sub_006B4D90 (15 bytes)
extern "C" void __stdcall fn_006B4D90(int a1, int a2, int a3) {
    if (a1 != 0xd) {
        ext_006A5EA8();
    }
}

// [0x006BAF60] sub_006BAF60 (16 bytes)
extern "C" void ext_006E6320();
extern "C" __declspec(naked) void __fastcall fn_006BAF60(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        add ecx, 0x4
        push eax
        call ext_006E6320
        ret 0x4
    }
}

// [0x006BC3A0] sub_006BC3A0 (16 bytes)
extern "C" void ext_006E9430();
extern "C" __declspec(naked) void __fastcall fn_006BC3A0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0x4]
        push eax
        call ext_006E9430
        ret 0x4
    }
}

// [0x006BC3F0] sub_006BC3F0 (16 bytes)
extern "C" void ext_006E9610();

extern "C" __declspec(naked) void __fastcall fn_006BC3F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 4]
        push eax
        call ext_006E9610
        ret 4
    }
}

// [0x006BC400] sub_006BC400 (16 bytes)
extern "C" void ext_006E9680();

extern "C" __declspec(naked) void __fastcall fn_006BC400(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 4]
        push eax
        call ext_006E9680
        ret 4
    }
}

// [0x006BC430] sub_006BC430 (16 bytes)
extern "C" void ext_006E97C0();

extern "C" __declspec(naked) void __fastcall fn_006BC430(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 4]
        push eax
        call ext_006E97C0
        ret 4
    }
}
