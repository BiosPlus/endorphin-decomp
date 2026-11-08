// Decompiled translation unit: src/leaf/decompiled_430000.cpp

// [0x00430430] sub_00430430 (24 bytes)
// Reads byte at this+0xf4, replaces stack arg0 with it, and tail-jumps to vtbl[1] of arg0 object.
extern "C" __declspec(naked) void __fastcall fn_00430430(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        movzx eax, byte ptr [eax + 0xf4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 4]
        mov dword ptr [esp + 4], eax
        jmp edx
    }
}

// [0x00430450] sub_00430450 (24 bytes)
// Reads byte at this+0xf5, replaces stack arg0 with it, and tail-jumps to vtbl[1] of arg0 object.
extern "C" __declspec(naked) void __fastcall fn_00430450(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        movzx eax, byte ptr [eax + 0xf5]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 4]
        mov dword ptr [esp + 4], eax
        jmp edx
    }
}

// [0x00430470] sub_00430470 (24 bytes)
// Reads byte at this+0xf6, replaces stack arg0 with it, and tail-jumps to vtbl[1] of arg0 object.
extern "C" __declspec(naked) void __fastcall fn_00430470(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        movzx eax, byte ptr [eax + 0xf6]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 4]
        mov dword ptr [esp + 4], eax
        jmp edx
    }
}

// [0x00430FA0] sub_00430FA0 (28 bytes)
extern "C" void ext_006A64EA();
extern "C" int mem_00925660;

extern "C" __declspec(naked) void __fastcall fn_00430FA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x160]
        mov ecx, dword ptr [esi + 0x20]
        push eax
        push ecx
        call dword ptr [mem_00925660]
        mov ecx, esi
        pop esi
        jmp ext_006A64EA
    }
}

// [0x0043C620] sub_0043C620 (29 bytes)
extern "C" int mem_009242F4;
extern "C" void ext_00454BA0();

extern "C" __declspec(naked) void __fastcall fn_0043C620(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x12c]
        mov dword ptr [esi], 0x00931EDC
        call dword ptr [mem_009242F4]
        mov ecx, esi
        pop esi
        jmp ext_00454BA0
    }
}
