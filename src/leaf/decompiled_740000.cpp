// Decompiled translation unit: src/leaf/decompiled_740000.cpp

// [0x0074AE00] sub_0074AE00 (32 bytes)
// Stores three stack args into self->[0], [4], [8] and zeroes self->[0xC]; ret 0xC.
extern "C" __declspec(naked) void __fastcall fn_0074AE00(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x4], edx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], 0x0
        ret 0xc
    }
}

extern "C" void ext_00700980();

// [0x00747570] sub_00747570 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00747570(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov ecx, dword ptr [esp+8]
        push 0
        call ext_00700980
        mov al, 1
        ret 8
    }
}

extern "C" void ext_006D2160();
extern "C" void ext_006B9D70();

// [0x0074B330] sub_0074B330 (127 bytes)
extern "C" __declspec(naked) void __fastcall fn_0074B330(void* self) {
    __asm {
        push -1
        push 0x008BF312
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0xd0]
        mov dword ptr [esp + 0x10], 0x3
        call ext_006D2160
        lea ecx, [esi + 0xb8]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006D2160
        lea ecx, [esi + 0xa0]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006D2160
        lea ecx, [esi + 0x88]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006D2160
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
