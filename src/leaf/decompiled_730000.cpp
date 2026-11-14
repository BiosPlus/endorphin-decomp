// Decompiled translation unit: src/leaf/decompiled_730000.cpp

// [0x00736E20] sub_00736E20 (128 bytes)
extern "C" void ext_006C5940();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726A40();

extern "C" __declspec(naked) void __fastcall fn_00736E20(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        push 0aad8f4h
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00736E20_ret1
        mov ecx, dword ptr [esi + 0ach]
        push edi
        add ecx, 4
        call ext_00726A40
        mov edx, eax
        or ecx, -1
        mov edi, edx
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        je fn00736E20_done
        push ebx
        mov ebx, dword ptr [esp + 10h]
fn00736E20_loop:
        push edx
        mov ecx, ebx
        call ext_006C5940
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        mov edx, eax
        or ecx, -1
        mov edi, edx
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        jne fn00736E20_loop
        pop ebx
fn00736E20_done:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        pop edi
        mov al, 1
        pop esi
        ret 4
fn00736E20_ret1:
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x0073AA20] sub_0073AA20 (144 bytes)
extern "C" void ext_0071DE80();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726BE0();

extern "C" __declspec(naked) void __fastcall fn_0073AA20(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        push 0aadb18h
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073AA20_ret1
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn0073AA20_done2
        mov ecx, dword ptr [esi + 0ach]
        push 0aa9190h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073AA20_done1
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esp + 8]
        sub esp, 8
        fstp qword ptr [esp]
        call ext_0071DE80
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn0073AA20_done1:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn0073AA20_done2:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn0073AA20_ret1:
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x00734B50] sub_00734B50 (320 bytes)
extern "C" void ext_006B9950();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006D57D0();
extern "C" void ext_006E7460();
extern "C" void ext_006F8FF0();
extern "C" void ext_006F90F0();
extern "C" void ext_00726AA0();
extern "C" void ext_00736C90();

extern "C" __declspec(naked) void __fastcall fn_00734B50(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 8be35eh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0e4h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0aad7d8h
        mov ecx, dword ptr [esi + 0ach]
        push 0aad720h
        add ecx, 4
        call ext_00726AA0
        push eax
        lea ecx, [esp + 14h]
        call ext_006B9D80
        xor ebx, ebx
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 0fch], ebx
        call ext_006E7460
        push eax
        call ext_006F90F0
        mov edi, eax
        or ebp, -1
        add esp, 4
        cmp edi, ebp
        je fn00734B50_cleanupA
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        add ecx, 4
        push 0aad728h
        call ext_00726AA0
        push eax
        lea ecx, [esp + 60h]
        call ext_006B9D80
        lea ecx, [esp + 5ch]
        mov byte ptr [esp + 0fch], 1
        call ext_006B9950
        test al, al
        jne fn00734B50_cleanupB
        lea ecx, [esp + 5ch]
        call ext_006E7460
        push eax
        lea eax, [esp + 0ach]
        push 0aa8704h
        push eax
        call ext_006D57D0
        add esp, 0ch
        lea ecx, [esp + 0a8h]
        mov byte ptr [esp + 0fch], 2
        call ext_006E7460
        push eax
        mov ecx, esi
        call ext_00736C90
        cmp eax, ebx
        je fn00734B50_skip
        mov ecx, dword ptr [esp + 104h]
        push 1
        push eax
        push edi
        call ext_006F8FF0
fn00734B50_skip:
        lea ecx, [esp + 0a8h]
        mov byte ptr [esp + 0fch], 1
        call ext_006B9D70
fn00734B50_cleanupB:
        lea ecx, [esp + 5ch]
        mov byte ptr [esp + 0fch], bl
        call ext_006B9D70
fn00734B50_cleanupA:
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 0fch], ebp
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0f4h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0f0h
        ret 4
    }
}

// [0x00736B40] sub_00736B40 (335 bytes)
extern "C" void ext_006B9D20();
extern "C" void ext_006B9E60();
extern "C" void ext_006BA0C0();
extern "C" void ext_006BA2F0();
extern "C" void ext_006BA7E0();
extern "C" void ext_006BA890();
extern "C" void ext_006BA9B0();
extern "C" void ext_006FE570();
extern "C" void ext_00783700();

extern "C" __declspec(naked) void __cdecl fn_00736B40(void* a1) {
    __asm {
        push -1
        push 08be559h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0e8h
        push esi
        mov esi, dword ptr [esp + 0fch]
        mov ecx, esi
        call ext_006E7460
        push eax
        lea eax, [esp + 0ch]
        push eax
        call ext_006FE570
        add esp, 8
        lea ecx, [esp + 54h]
        mov dword ptr [esp + 0f4h], 0
        push ecx
        lea ecx, [esp + 0ch]
        call ext_006BA9B0
        push eax
        lea ecx, [esp + 0ch]
        mov byte ptr [esp + 0f8h], 1
        call ext_006B9E60
        lea ecx, [esp + 54h]
        mov byte ptr [esp + 0f4h], 0
        call ext_006B9D70
        push 0aad170h
        lea ecx, [esp + 0ch]
        call ext_006BA7E0
        test al, al
        je fn00736B40_end
        push 0aad168h
        lea ecx, [esp + 0ch]
        call ext_006BA7E0
        test al, al
        je fn00736B40_end
        sub esp, 4ch
        mov ecx, esp
        mov dword ptr [esp + 50h], esp
        push esi
        call ext_006B9D20
        call ext_00783700
        add esp, 4ch
        mov ecx, esi
        push 2eh
        call ext_006BA2F0
        cmp eax, -1
        je fn00736B40_end
        lea edx, [esp + 0a0h]
        push eax
        push edx
        mov ecx, esi
        call ext_006BA890
        push 0aad8ech
        push eax
        lea eax, [esp + 5ch]
        mov byte ptr [esp + 0fch], 2
        push eax
        call ext_006BA0C0
        add esp, 0ch
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0f8h], 3
        call ext_006B9E60
        lea ecx, [esp + 54h]
        mov byte ptr [esp + 0f4h], 2
        call ext_006B9D70
        lea ecx, [esp + 0a0h]
        mov byte ptr [esp + 0f4h], 0
        call ext_006B9D70
fn00736B40_end:
        lea ecx, [esp + 8h]
        mov dword ptr [esp + 0f4h], 0ffffffffh
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0ech]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0f4h
        ret
    }
}

// [0x007355B0] sub_007355B0 (336 bytes)
extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_006BC7E0();
extern "C" void ext_006E7460();
extern "C" void ext_006E7D50();
extern "C" void ext_006E7F90();
extern "C" void ext_006E7FA0();
extern "C" void ext_006E7FB0();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726AA0();
extern "C" void ext_00726B40();
extern "C" void ext_007421F0();

extern "C" __declspec(naked) void __fastcall fn_007355B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 08b9073h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 09ch
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0b0h]
        push edi
        call ext_006BC7E0
        mov ecx, dword ptr [esi + 0ach]
        push 0aad890h
        add ecx, 4
        mov edi, eax
        call ext_00726770
        test al, al
        je fn007355B0_6e7
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn007355B0_6d9
        mov ecx, edi
        call ext_006E7F90
        mov ecx, dword ptr [esi + 0ach]
        push eax
        push 0aad880h
        add ecx, 4
        call ext_00726AA0
        push eax
        lea ecx, [esp + 10h]
        call ext_006B9D80
        sub esp, 04ch
        lea eax, [esp + 058h]
        mov ecx, esp
        mov dword ptr [esp + 054h], esp
        push eax
        mov dword ptr [esp + 0fch], 0
        call ext_006B9D20
        lea ecx, [esp + 0a4h]
        push ecx
        mov ecx, esi
        call ext_007421F0
        push eax
        lea ecx, [esp + 10h]
        mov byte ptr [esp + 0b0h], 1
        call ext_006B9E60
        lea ecx, [esp + 058h]
        mov byte ptr [esp + 0ach], 0
        call ext_006B9D70
        lea ecx, [esp + 0ch]
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_006E7D50
        mov ecx, edi
        call ext_006E7FB0
        mov ecx, dword ptr [esi + 0ach]
        push eax
        push 0aad86ch
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_006E7FA0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
        lea ecx, [esp + 0ch]
        mov dword ptr [esp + 0ach], -1
        call ext_006B9D70
fn007355B0_6d9:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007355B0_6e7:
        mov ecx, dword ptr [esp + 0a4h]
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0a8h
        ret 4
    }
}

extern "C" void ext_006A5C62();
extern "C" void ext_006D2130();
extern "C" void ext_006D2170();
extern "C" void ext_006EF800();
extern "C" void ext_006FD480();
extern "C" void ext_006FDE80();
extern "C" void ext_006FDF70();
extern "C" void ext_00715550();
extern "C" void ext_00726900();
extern "C" void ext_00726AE0();
extern "C" void ext_0078D720();

// [0x0073C9F0] sub_0073C9F0 (352 bytes)
__declspec(naked) void __fastcall fn_0073C9F0(void* self) {
    __asm {
        push -0x1
        push 0x8be836
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov ebp, ecx
        xor edi, edi
        mov ecx, esi
        push edi
        call ext_006FDF70
        mov ebx, eax
        cmp ebx, edi
        jne L_73CA31
        mov ecx, esi
        call ext_006FDE80
        push eax
        mov ecx, esi
        call ext_006FDF70
        mov ebx, eax
    L_73CA31:
        mov ecx, dword ptr [ebp + 0xac]
        push 0xaadc60
        add ecx, 0x4
        call ext_00726770
        test al, al
        mov ecx, ebx
        je L_73CB0E
        call ext_00715550
        mov esi, eax
        cmp esi, edi
        jne L_73CAC3
        push 0x48
        call ext_006A5C62
        mov esi, eax
        add esp, 0x4
        mov dword ptr [esp + 0x24], esi
        cmp esi, edi
        mov dword ptr [esp + 0x1c], edi
        je L_73CAB1
        mov dword ptr [esi], edi
        mov dword ptr [esi + 0x4], edi
        lea edi, [esi + 0x8]
        push 0x4
        push 0x10
        mov ecx, edi
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        push 0x10
        lea ecx, [esi + 0x20]
        mov byte ptr [esp + 0x20], 0x1
        call ext_0078D720
        xor eax, eax
        mov dword ptr [esi + 0x4], 0x2
        mov dword ptr [esi + 0x40], eax
        mov dword ptr [esi + 0x38], eax
        mov dword ptr [esi + 0x44], 0x3ff00000
        jmp L_73CAB3
    L_73CAB1:
        xor esi, esi
    L_73CAB3:
        push esi
        mov ecx, ebx
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_006EF800
    L_73CAC3:
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 0x4
        call ext_00726900
        add esi, 0x20
        test eax, eax
        jle L_73CAFE
        mov edi, eax
    L_73CADA:
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 0x4
        call ext_00726AE0
        mov edx, dword ptr [esi]
        lea ecx, [esp + 0x24]
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x2c], eax
        call ext_006D2170
        dec edi
        jne L_73CADA
    L_73CAFE:
        mov ecx, dword ptr [ebp + 0xac]
        add ecx, 0x4
        call ext_00726840
        jmp L_73CB39
    L_73CB0E:
        call ext_00715550
        cmp eax, edi
        je L_73CB39
        push 0x0
        mov ecx, esi
        lea edi, [eax + 0x20]
        call ext_006FD480
        dec eax
        js L_73CB39
        mov ecx, dword ptr [edi]
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        push eax
        push ecx
        mov ecx, edi
        call ext_006D2170
    L_73CB39:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

extern "C" void ext_00730220();

// [0x00730040] sub_00730040 (480 bytes)
extern "C" __declspec(naked) void __fastcall fn_00730040(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8bc6be
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xe8
        push esi
        mov esi, ecx
        push 0xaad3e4
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726770
        test al, al
        je L_730206
        mov ecx, dword ptr [esi + 0xac]
        push ebx
        add ecx, 0x4
        call ext_00726860
        test al, al
        mov bl, 0x1
        je L_7301f3
        mov eax, dword ptr [esp + 0x104]
        push edi
        xor edi, edi
        mov eax, dword ptr [eax]
        test eax, eax
        mov dword ptr [esp + 0xc], eax
        jle L_7301e4
        push ebp
        mov ebp, dword ptr [esp + 0x108]
    L_7300b2:
        mov ecx, dword ptr [esp + 0x10c]
        mov edx, dword ptr [ecx + 0x10]
        lea ecx, [esp + 0x14]
        mov eax, dword ptr [edx + 4*edi]
        push eax
        call ext_006B9D20
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x100], 0x0
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_00726770
        test al, al
        je L_7301c2
    L_7300f4:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726A40
        push eax
        lea ecx, [esp + 0xb0]
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        mov byte ptr [esp + 0x100], bl
        add ecx, 0x4
        call ext_00726A40
        push eax
        lea ecx, [esp + 0x64]
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        mov byte ptr [esp + 0x100], 0x2
        add ecx, 0x4
        call ext_00726860
        test al, al
        je L_730170
        lea ecx, [esp + 0xac]
        lea edx, [esp + 0x60]
        push ecx
        lea eax, [esp + 0x18]
        push edx
        push eax
        push ebp
        mov ecx, esi
        call ext_00730220
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007268D0
    L_730170:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x100], bl
        call ext_006B9D70
        lea ecx, [esp + 0xac]
        mov byte ptr [esp + 0x100], 0x0
        call ext_006B9D70
        lea ecx, [esp + 0x14]
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_00726770
        test al, al
        jne L_7300f4
    L_7301c2:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x100], 0xffffffff
        call ext_006B9D70
        mov eax, dword ptr [esp + 0x10]
        inc edi
        cmp edi, eax
        jl L_7300b2
        pop ebp
    L_7301e4:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007268D0
        pop edi
    L_7301f3:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
        mov al, bl
        pop ebx
        jmp L_730208
    L_730206:
        mov al, 0x1
    L_730208:
        mov ecx, dword ptr [esp + 0xec]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0xf4
        ret 0x8
    }
}

// [0x00733C80] sub_00733C80 (864 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006E7460();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726AA0();
extern "C" void ext_00726B40();
extern "C" void ext_00726C20();
extern "C" void ext_0077FE70();
extern "C" void ext_0077FEF0();
extern "C" void ext_0077FF90();
extern "C" int mem_00925218;

extern "C" __declspec(naked) void __fastcall fn_00733C80(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8h
        push -1
        push 8be2abh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 46ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 2ch]
        call ext_006B9D10
        mov ecx, dword ptr [esi + 0ach]
        push 0aad76ch
        add ecx, 4
        mov dword ptr [esp + 484h], 0
        call ext_00726770
        test al, al
        je fn00733C80_fb5
    fn00733C80_loop:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00733C80_8c
        mov ecx, dword ptr [esi + 0ach]
        push 0aad76ch
        add ecx, 4
        push 0aad720h
        call ext_00726AA0
        push eax
        lea ecx, [esp + 30h]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aad764h
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        push 0
        mov ebx, eax
        push 0
        push 0aad75ch
        add ecx, 4
        mov dword ptr [esp + 1ch], ebx
        call ext_00726C20
        fstp qword ptr [esp + 14h]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 14h]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        push 0aad754h
        add ecx, 4
        call ext_00726C20
        mov ecx, dword ptr [esi + 0ach]
        push 0
        fstp qword ptr [esp + 18h]
        push 0
        push 0aad750h
        add ecx, 4
        call ext_00726C20
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aad74ch
        fstp st(0)
        add ecx, 4
        call ext_00726C20
        lea ecx, [esp + 2ch]
        mov edi, 0aaafc8h
        fstp st(0)
        call ext_006E7460
    fn00733C80_cmp1:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn00733C80_ne1
        test cl, cl
        je fn00733C80_eq1
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn00733C80_ne1
        add eax, 2
        add edi, 2
        test cl, cl
        jne fn00733C80_cmp1
    fn00733C80_eq1:
        xor eax, eax
        jmp fn00733C80_done1
    fn00733C80_ne1:
        sbb eax, eax
        sbb eax, -1
    fn00733C80_done1:
        test eax, eax
        je fn00733C80_46
        lea ecx, [esp + 2ch]
        mov edi, 0aaafd8h
        call ext_006E7460
    fn00733C80_cmp2:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn00733C80_ne2
        test cl, cl
        je fn00733C80_eq2
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn00733C80_ne2
        add eax, 2
        add edi, 2
        test cl, cl
        jne fn00733C80_cmp2
    fn00733C80_eq2:
        xor eax, eax
        jmp fn00733C80_done2
    fn00733C80_ne2:
        sbb eax, eax
        sbb eax, -1
    fn00733C80_done2:
        test eax, eax
        je fn00733C80_46
        lea ecx, [esp + 2ch]
        call ext_006E7460
        push eax
        call ext_0077FE70
        mov edi, eax
        add esp, 4
        cmp edi, -1
        je fn00733C80_7e
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push edi
        mov ecx, ebx
        call ext_0077FEF0
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 14h]
        push 0
        push eax
        push ecx
        jmp fn00733C80_f76
    fn00733C80_46:
        mov ebx, dword ptr [esp + 18h]
        mov edi, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push edi
        push 0aad744h
        add ecx, 4
        call ext_00726C20
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        fstp qword ptr [esp + 20h]
        push edi
        push 0aad73ch
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 24h]
        lea ecx, [esp + 2ch]
        call ext_006E7460
        push eax
        lea edx, [esp + 7ch]
        push 0aad738h
        push edx
        call dword ptr [mem_00925218]
        lea eax, [esp + 84h]
        push eax
        call ext_0077FE70
        mov edi, eax
        add esp, 10h
        cmp edi, -1
        je fn00733C80_ed4
        mov ecx, dword ptr [esp + 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push edi
        call ext_0077FEF0
        mov edx, dword ptr [esp + 14h]
        push 0
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push edx
        push edi
        mov ecx, ebx
        call ext_0077FF90
        jmp fn00733C80_ed7
    fn00733C80_ed4:
        mov ebx, dword ptr [ebp + 8]
    fn00733C80_ed7:
        lea ecx, [esp + 2ch]
        call ext_006E7460
        push eax
        lea eax, [esp + 7ch]
        push 0aad734h
        push eax
        call dword ptr [mem_00925218]
        lea ecx, [esp + 84h]
        push ecx
        call ext_0077FE70
        mov edi, eax
        add esp, 10h
        cmp edi, -1
        je fn00733C80_f29
        mov edx, dword ptr [esp + 10h]
        mov ecx, ebx
        push edx
        push edi
        call ext_0077FEF0
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 1ch]
        push 0
        push eax
        push ecx
        push edi
        mov ecx, ebx
        call ext_0077FF90
    fn00733C80_f29:
        lea ecx, [esp + 2ch]
        call ext_006E7460
        push eax
        lea edx, [esp + 7ch]
        push 0aad730h
        push edx
        call dword ptr [mem_00925218]
        lea eax, [esp + 84h]
        push eax
        call ext_0077FE70
        mov edi, eax
        add esp, 10h
        cmp edi, -1
        je fn00733C80_7e
        mov ecx, dword ptr [esp + 10h]
        mov ebx, dword ptr [ebp + 8]
        push ecx
        push edi
        mov ecx, ebx
        call ext_0077FEF0
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 24h]
        push 0
        push edx
        push eax
    fn00733C80_f76:
        push edi
        mov ecx, ebx
        call ext_0077FF90
    fn00733C80_7e:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
    fn00733C80_8c:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        push 0aad76ch
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn00733C80_loop
    fn00733C80_fb5:
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 480h], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 478h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}
