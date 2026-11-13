// Decompiled translation unit: src/classes/VSKIO.cpp

extern "C" void ext_005760E0();
extern "C" void ext_00574CF0();
extern "C" void ext_006639E0();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

// [0x005762C0] VSKIO::vfunc_14 (117 bytes)
extern "C" __declspec(naked) void __fastcall fn_005762C0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x89dca8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0ch
        mov edx, ecx
        push esi
        push edx
        lea ecx, [esp + 8]
        call ext_005760E0
        mov esi, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 20h]
        xor eax, eax
        push eax
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 10h], eax
        mov dword ptr [edx + 488h], eax
        add esi, 20h
        call dword ptr [mem_00924FF0]
        push eax
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0ch]
        call eax
        lea ecx, [esp + 4]
        mov dword ptr [esp + 18h], 0ffffffffh
        call ext_00574CF0
        mov ecx, dword ptr [esp + 10h]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 18h
        ret 4
    }
}

// [0x00576340] VSKIO::vfunc_10 (192 bytes)
extern "C" __declspec(naked) void __fastcall fn_00576340(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x89dcd1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebp
        push esi
        mov esi, ecx
        push edi
        push esi
        lea ecx, [esp + 0x10]
        call ext_005760E0
        mov edi, dword ptr [esp + 0xc]
        mov ebp, dword ptr [esp + 0x44]
        push 0
        mov ecx, ebp
        mov dword ptr [esp + 0x40], 0
        mov dword ptr [esp + 0x18], 1
        mov dword ptr [esi + 0x488], 1
        add edi, 0x20
        call dword ptr [mem_00924FF0]
        push eax
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x14]
        call eax
        mov ecx, ebp
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        call ext_006639E0
        add esp, 8
        mov esi, dword ptr [esi + 0x414]
        mov edx, dword ptr [esi + 4]
        lea ecx, [esi + 4]
        push eax
        mov eax, dword ptr [edx + 0x60]
        mov byte ptr [esp + 0x40], 1
        call eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x3c], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x3c], 0xffffffff
        call ext_00574CF0
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret 4
    }
}

// [0x005749C0] VSKIO::vfunc_3 (37 bytes)
extern "C" void ext_00553720();
extern "C" void ext_00640390();

extern "C" __declspec(naked) void* __fastcall fn_005749C0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x0
        mov esi, ecx
        push 0x92fe14
        mov ecx, edi
        call ext_00640390
        push eax
        mov ecx, esi
        call ext_00553720
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}
