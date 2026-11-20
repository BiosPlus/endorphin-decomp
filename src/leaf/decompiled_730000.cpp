// Decompiled translation unit: src/leaf/decompiled_730000.cpp
extern "C" void ext_00726A40();
extern "C" int mem_009251D0; /* u32 0x0062D91A */

extern "C" int mem_009251D0; /* u32 0x0062D91A */
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

// [0x0073EF50] sub_0073EF50 (1231 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006BAA50();
extern "C" void ext_006BAC80();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D80A0();
extern "C" void ext_006DC9E0();
extern "C" void ext_006E7460();
extern "C" void ext_0070BB60();
extern "C" void ext_0070BB80();
extern "C" void ext_0070BC20();
extern "C" void ext_0070BCC0();
extern "C" void ext_0070BD60();
extern "C" void ext_0070BE00();
extern "C" void ext_0070BEA0();
extern "C" void ext_0070BF50();
extern "C" void ext_0070BFF0();
extern "C" void ext_00725A60();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726A40();
extern "C" void ext_00726AA0();
extern "C" void ext_00726B40();
extern "C" void ext_00726BE0();
extern "C" void ext_00742E60();
extern "C" void ext_0077FB40();
extern "C" void ext_0079CD60();
extern "C" void ext_0079D6D0();
extern "C" int mem_00995B48;
extern "C" int mem_009939D8;

extern "C" __declspec(naked) void __fastcall fn_0073EF50(void* self, int dummy_edx, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x8be8fc
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xdc
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0xac]
        call ext_0079D6D0
        test al, al
        je loc_73f2ef
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726A40
        mov edi, dword ptr [ebp + 0x8]
        push eax
        mov ecx, edi
        call ext_006BAC80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726860
        test al, al
        je loc_73f406
        lea ecx, [esp + 0x18]
        call ext_0077FB40
        mov ecx, dword ptr [esi + 0xac]
        xor ebx, ebx
        push 0xaabd8c
        push 0xaae4d0
        add ecx, 0x4
        mov dword ptr [esp + 0xf8], ebx
        call ext_00726AA0
        push eax
        lea ecx, [esp + 0xa0]
        call ext_006B9D80
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0xf0], 0x1
        push ecx
        mov ecx, eax
        call ext_006BAA50
        mov ecx, eax
        mov byte ptr [esp + 0xf0], 0x2
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_0070BB60
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0xf0], 0x1
        call ext_006B9D70
        lea ecx, [esp + 0x9c]
        mov byte ptr [esp + 0xf0], bl
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        push 0xaa8dc4
        add ecx, 0x4
        call ext_00726770
        test al, al
        je loc_73f09c
        mov edi, dword ptr [esi + 0xac]
        lea ebx, [esp + 0x18]
        add edi, 0x4
        mov dword ptr [esp + 0xc], 0x3
    loc_73f06a:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebx]
        mov eax, dword ptr [esp + 0xc]
        add ebx, 0x8
        dec eax
        mov dword ptr [esp + 0xc], eax
        jne loc_73f06a
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
        mov ecx, dword ptr [ebp + 0x8]
        lea edx, [esp + 0x18]
        push edx
        call ext_0070BB80
    loc_73f09c:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaa8dcc
        add ecx, 0x4
        call ext_00726770
        test al, al
        je loc_73f0fa
        mov edi, dword ptr [esi + 0xac]
        lea ebx, [esp + 0x18]
        add edi, 0x4
        mov dword ptr [esp + 0xc], 0x3
    loc_73f0c8:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebx]
        mov eax, dword ptr [esp + 0xc]
        add ebx, 0x8
        dec eax
        mov dword ptr [esp + 0xc], eax
        jne loc_73f0c8
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
        mov ecx, dword ptr [ebp + 0x8]
        lea eax, [esp + 0x18]
        push eax
        call ext_0070BC20
    loc_73f0fa:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaa8dd4
        add ecx, 0x4
        call ext_00726770
        test al, al
        je loc_73f158
        mov edi, dword ptr [esi + 0xac]
        lea ebx, [esp + 0x18]
        add edi, 0x4
        mov dword ptr [esp + 0xc], 0x3
    loc_73f126:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebx]
        mov eax, dword ptr [esp + 0xc]
        add ebx, 0x8
        dec eax
        mov dword ptr [esp + 0xc], eax
        jne loc_73f126
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, dword ptr [ebp + 0x8]
        call ext_0070BCC0
    loc_73f158:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaa8db8
        add ecx, 0x4
        call ext_00726770
        test al, al
        je loc_73f1b6
        mov edi, dword ptr [esi + 0xac]
        lea ebx, [esp + 0x18]
        add edi, 0x4
        mov dword ptr [esp + 0xc], 0x3
    loc_73f184:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebx]
        mov eax, dword ptr [esp + 0xc]
        add ebx, 0x8
        dec eax
        mov dword ptr [esp + 0xc], eax
        jne loc_73f184
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
        mov ecx, dword ptr [ebp + 0x8]
        lea edx, [esp + 0x18]
        push edx
        call ext_0070BD60
    loc_73f1b6:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaa8df8
        add ecx, 0x4
        call ext_00726770
        test al, al
        je loc_73f235
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0xac]
        fstp qword ptr [esp + 0xc]
        mov eax, dword ptr [ecx + 0x1c8]
        add ecx, 0x4
        push eax
        call ext_00725A60
        fld qword ptr [esp + 0xc]
        cmp eax, 0xbb8
        jge loc_73f207
        fmul qword ptr [mem_00995B48]
        jmp loc_73f20d
    loc_73f207:
        fmul qword ptr [mem_009939D8]
    loc_73f20d:
        fstp qword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        mov edi, dword ptr [ebp + 0x8]
        push eax
        push ecx
        mov ecx, edi
        call ext_0070BEA0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
        jmp loc_73f238
    loc_73f235:
        mov edi, dword ptr [ebp + 0x8]
    loc_73f238:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaa8de8
        add ecx, 0x4
        call ext_00726770
        test al, al
        je loc_73f280
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0xac]
        fstp qword ptr [esp + 0xc]
        add ecx, 0x4
        call ext_00726840
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        mov ecx, edi
        call ext_0070BF50
    loc_73f280:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaa8db0
        add ecx, 0x4
        call ext_00726770
        test al, al
        je loc_73f2c8
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0xac]
        fstp qword ptr [esp + 0xc]
        add ecx, 0x4
        call ext_00726840
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, edi
        call ext_0070BE00
    loc_73f2c8:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007268D0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0xf0], 0xffffffff
        call ext_006D80A0
        jmp loc_73f406
    loc_73f2ef:
        mov ecx, dword ptr [esi + 0xac]
        push 0x64
        push 0xaacd0c
        add ecx, 0x4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0xac]
        push 0xaabd8c
        push 0xaae4d0
        add ecx, 0x4
        call ext_00726AA0
        push eax
        lea ecx, [esp + 0x54]
        call ext_006B9D80
        lea ecx, [esp + 0x9c]
        mov dword ptr [esp + 0xf0], 0x3
        push ecx
        mov ecx, eax
        call ext_006BAA50
        mov ecx, eax
        mov byte ptr [esp + 0xf0], 0x4
        call ext_006E7460
        mov edi, dword ptr [ebp + 0x8]
        push eax
        mov ecx, edi
        call ext_0070BB60
        lea ecx, [esp + 0x9c]
        mov byte ptr [esp + 0xf0], 0x3
        call ext_006B9D70
        or ebx, -0x1
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0xf0], ebx
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        push 0x0
        push 0xaad91c
        add ecx, 0x4
        call ext_00726B40
        test eax, eax
        setne dl
        push edx
        mov ecx, edi
        call ext_0070BFF0
        push 0x4
        push 0x10
        lea ecx, [esp + 0x40]
        call ext_006D2130
        lea eax, [esp + 0x48]
        mov dword ptr [esp + 0x4c], eax
        mov edx, dword ptr [edi]
        lea eax, [esp + 0x38]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0xf4], 0x5
        call dword ptr [edx + 0x10]
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx + 0xc]
        mov ecx, dword ptr [esi + 0xac]
        push eax
        lea eax, [esp + 0x3c]
        push eax
        call ext_0079CD60
        mov ecx, edi
        call ext_006DC9E0
        push edi
        mov ecx, esi
        call ext_00742E60
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0xf0], ebx
        call ext_006D2160
    loc_73f406:
        mov ecx, dword ptr [esp + 0xe8]
        pop edi
        pop esi
        mov al, 0x1
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x0073AAB0] sub_0073AAB0 (1376 bytes)
extern "C" void ext_00715600();
extern "C" void ext_00726770();
extern "C" void ext_00726860();
extern "C" void ext_00715570();
extern "C" void ext_00726B40();
extern "C" void ext_00715560();
extern "C" void ext_007155A0();
extern "C" void ext_00726C20();
extern "C" void ext_00715580();
extern "C" void ext_00726BE0();
extern "C" void ext_00726840();
extern "C" void ext_006D2370();
extern "C" void ext_006D23F0();
extern "C" void ext_00715670();
extern "C" void ext_006D80A0();
extern "C" void ext_00715660();
extern "C" void ext_00715650();
extern "C" void ext_007268D0();
extern "C" void ext_006B9D80();
extern "C" void ext_006BA660();
extern "C" void ext_00726A40();
extern "C" void ext_006B9D70();
extern "C" void ext_00726690();
extern "C" void ext_007155B0();
extern "C" void ext_00715550();
extern "C" void ext_006D91C0();
extern "C" void ext_00708000();
extern "C" void ext_00712FC0();
extern "C" void ext_00712A80();
extern "C" void ext_0071E680();
extern "C" void ext_00710F80();
extern "C" void ext_00711CF0();
extern "C" void ext_007156E0();
extern "C" void ext_00715740();

extern "C" __declspec(naked) void __fastcall fn_0073AAB0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 08be763h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 94h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp+0b0h]
        mov ebp, ecx
        lea eax, [esp+14h]
        push edi
        push eax
        mov ecx, esi
        call ext_00715600
        mov ecx, dword ptr [ebp+0ach]
        push 0aadb18h
        add ecx, 4
        mov dword ptr [esp+0b0h], 0
        call ext_00726770
        test al, al
        je fn0073AAB0_ACEE
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn0073AAB0_ACDB
        mov ecx, esi
        call ext_00715570
        mov ecx, dword ptr [ebp+0ach]
        push eax
        push 0aac324h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, esi
        call ext_00715560
        mov ecx, esi
        call ext_007155A0
        mov ecx, dword ptr [ebp+0ach]
        sub esp, 8
        add ecx, 4
        fstp qword ptr [esp]
        push 0aa9190h
        call ext_00726C20
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00715580
        mov ecx, dword ptr [ebp+0ach]
        push 0aa8cech
        add ecx, 4
        call ext_00726770
        test al, al
        je short fn0073AAB0_ABCB
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [ebp+0ach]
        fstp qword ptr [esp+18h]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [ebp+0ach]
        fstp qword ptr [esp+20h]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [ebp+0ach]
        fstp qword ptr [esp+28h]
        add ecx, 4
        call ext_00726840
fn0073AAB0_ABCB:
        mov ecx, dword ptr [ebp+0ach]
        push 0aac310h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073AAB0_ACA0
        lea ecx, [esp+38h]
        call ext_006D2370
        mov ecx, dword ptr [ebp+0ach]
        mov byte ptr [esp+0ach], 1
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp+10h]
        push 0
        lea ecx, [esp+3ch]
        call ext_006D23F0
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [esp+14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax+4], edx
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp+10h]
        push 1
        lea ecx, [esp+3ch]
        call ext_006D23F0
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [esp+14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax+4], edx
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp+10h]
        push 2
        lea ecx, [esp+3ch]
        call ext_006D23F0
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [esp+14h]
        mov dword ptr [eax], ecx
        mov ecx, esi
        mov dword ptr [eax+4], edx
        lea eax, [esp+38h]
        push eax
        call ext_00715670
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp+38h]
        mov byte ptr [esp+0ach], 0
        call ext_006D80A0
fn0073AAB0_ACA0:
        mov ecx, esi
        call ext_00715660
        mov ecx, dword ptr [ebp+0ach]
        and eax, 0ffh
        push eax
        push 0aac318h
        add ecx, 4
        call ext_00726B40
        test eax, eax
        setne cl
        push ecx
        mov ecx, esi
        call ext_00715650
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_007268D0
fn0073AAB0_ACDB:
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726840
        jmp fn0073AAB0_AEA2
fn0073AAB0_ACEE:
        xor bl, bl
fn0073AAB0_ACF0:
        mov ecx, dword ptr [ebp+0ach]
        push 0aa9470h
        add ecx, 4
        call ext_00726770
        test al, al
        je short fn0073AAB0_AD62
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp+5ch]
        call ext_006B9D80
        push 0aa8cech
        lea ecx, [esp+5ch]
        mov byte ptr [esp+0b0h], 2
        call ext_006BA660
        test eax, eax
        jne short fn0073AAB0_AD3D
        mov bl, 1
        jmp short fn0073AAB0_AD4B
fn0073AAB0_AD3D:
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726840
fn0073AAB0_AD4B:
        lea ecx, [esp+58h]
        mov byte ptr [esp+0ach], 0
        call ext_006B9D70
        test bl, bl
        je fn0073AAB0_ACF0
        jmp short fn0073AAB0_AD6A
fn0073AAB0_AD62:
        test bl, bl
        je fn0073AAB0_AE94
fn0073AAB0_AD6A:
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn0073AAB0_AE86
        mov ecx, dword ptr [ebp+0ach]
        push 0aa9470h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073AAB0_AE78
        mov bl, 3
fn0073AAB0_AD9D:
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp+5ch]
        call ext_006B9D80
        push 0aa8ca8h
        lea ecx, [esp+5ch]
        mov byte ptr [esp+0b0h], bl
        call ext_006BA660
        test eax, eax
        jne short fn0073AAB0_ADD4
        lea esi, [esp+18h]
        jmp short fn0073AAB0_AE02
fn0073AAB0_ADD4:
        push 0aa8ca4h
        lea ecx, [esp+5ch]
        call ext_006BA660
        test eax, eax
        jne short fn0073AAB0_ADEC
        lea esi, [esp+20h]
        jmp short fn0073AAB0_AE02
fn0073AAB0_ADEC:
        push 0aa8ca0h
        lea ecx, [esp+5ch]
        call ext_006BA660
        test eax, eax
        jne short fn0073AAB0_AE3E
        lea esi, [esp+28h]
fn0073AAB0_AE02:
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je short fn0073AAB0_AE3E
        mov edx, dword ptr [esi+4]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [ebp+0ach]
        push edx
        push eax
        push 0aa8cb0h
        add ecx, 4
        call ext_00726C20
        mov ecx, dword ptr [ebp+0ach]
        fstp qword ptr [esi]
        add ecx, 4
        call ext_007268D0
fn0073AAB0_AE3E:
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp+58h]
        mov byte ptr [esp+0ach], 0
        call ext_006B9D70
        mov ecx, dword ptr [ebp+0ach]
        push 0aa9470h
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn0073AAB0_AD9D
fn0073AAB0_AE78:
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_007268D0
fn0073AAB0_AE86:
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726840
fn0073AAB0_AE94:
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726690
fn0073AAB0_AEA2:
        sub esp, 20h
        mov ecx, 8
        lea esi, [esp+38h]
        mov edi, esp
        rep movsd
        mov esi, dword ptr [esp+0d4h]
        mov ecx, esi
        call ext_007155B0
        mov ecx, esi
        call ext_00715550
        cmp eax, 2
        jne fn0073AAB0_AFDF
        mov ecx, dword ptr [ebp+0ach]
        push 0
        push 0
        push 0aadd30h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_007156E0
        mov ecx, dword ptr [ebp+0ach]
        push 0
        push 0
        push 0aadd20h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00715740
        mov ecx, esi
        call ext_006D91C0
        mov esi, eax
        test esi, esi
        je fn0073AAB0_AFDF
        push 0aad1c4h
        mov ecx, esi
        call ext_00708000
        test eax, eax
        jne fn0073AAB0_AF84
        push 0aad1c4h
        call ext_00712FC0
        mov edi, eax
        push edi
        call ext_00712A80
        mov edx, dword ptr [esi]
        add esp, 8
        mov ecx, esi
        push 0
        push 0
        push 0
        push edi
        push eax
        push 0aad1c4h
        call dword ptr [edx+0dch]
        mov edi, eax
        push 1
        push 2
        mov ecx, edi
        call ext_0071E680
        mov ecx, eax
        call ext_00710F80
        push 1
        push 8
        mov ecx, edi
        call ext_00711CF0
fn0073AAB0_AF84:
        push 0aad1dch
        mov ecx, esi
        call ext_00708000
        test eax, eax
        jne fn0073AAB0_AFDF
        push 0aad1dch
        call ext_00712FC0
        mov edi, eax
        push edi
        call ext_00712A80
        mov edx, dword ptr [esi]
        add esp, 8
        mov ecx, esi
        push 0
        push 0
        push 0
        push edi
        push eax
        push 0aad1dch
        call dword ptr [edx+0dch]
        mov esi, eax
        push 1
        push 2
        mov ecx, esi
        call ext_0071E680
        mov ecx, eax
        call ext_00710F80
        push 1
        push 8
        mov ecx, esi
        call ext_00711CF0
fn0073AAB0_AFDF:
        lea ecx, [esp+18h]
        mov dword ptr [esp+0ach], -1
        call ext_006D80A0
        mov ecx, dword ptr [esp+0a4h]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0a0h
        ret 4
    }
}

// [0x00736190] sub_00736190 (1679 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006B9950();
extern "C" void ext_006B99C0();
extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006BA660();
extern "C" void ext_006BA7C0();
extern "C" void ext_006C3030();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D2170();
extern "C" void ext_006D2250();
extern "C" void ext_006E7460();
extern "C" void ext_006E8D10();
extern "C" void ext_006FF230();
extern "C" void ext_007008D0();
extern "C" void ext_007008F0();
extern "C" void ext_00702210();
extern "C" void ext_00702360();
extern "C" void ext_007023A0();
extern "C" void ext_00703B50();
extern "C" void ext_0071C2E0();
extern "C" void ext_0071C330();
extern "C" void ext_00726550();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726A40();
extern "C" void ext_00726AA0();
extern "C" void ext_00736820();
extern "C" void ext_00742A70();
extern "C" void ext_0079D6D0();

extern "C" __declspec(naked) void __fastcall fn_00736190(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8be4c2
        _emit 0x64
        _emit 0xa1
        _emit 0
        _emit 0
        _emit 0
        _emit 0
        push eax
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0
        _emit 0
        _emit 0
        _emit 0
        sub esp, 0x14c
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 4
        push 0x10
        lea ecx, [esp+0x20]
        call ext_006D2130
        lea eax, [esp+0x28]
        mov dword ptr [esp+0x2c], eax
        push 4
        push 0x10
        lea ecx, [esp+0x38]
        mov dword ptr [esp+0x16c], 0
        call ext_006D2130
        lea ecx, [esp+0x40]
        mov dword ptr [esp+0x44], ecx
        push 4
        push 0x10
        lea ecx, [esp+0x68]
        mov byte ptr [esp+0x16c], 1
        call ext_006D2130
        lea edx, [esp+0x70]
        mov dword ptr [esp+0x74], edx
        mov ecx, dword ptr [esi+0xac]
        mov byte ptr [esp+0x164], 2
        call ext_0079D6D0
        test al, al
        je near ptr L_7364C5
        mov ecx, dword ptr [esi+0xac]
        push 0xaad214
        add ecx, 4
        call ext_00726770
        test al, al
        je near ptr L_7364C5
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_00726860
        test al, al
        je near ptr L_7364B7
        mov ecx, dword ptr [esi+0xac]
        push 0xaad20c
        add ecx, 4
        call ext_00726770
        test al, al
        je near ptr L_7364A9
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_00726860
        test al, al
        je near ptr L_73649B
        mov ecx, dword ptr [esi+0xac]
        push 0xaad20c
        add ecx, 4
        call ext_00726770
        cmp al, 1
        jne near ptr L_73648D
        mov edi, dword ptr [esp+0x170]
        mov bl, 5
L_7362A4:
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp+0x114]
        call ext_006B9D80
        lea ecx, [esp+0x110]
        mov byte ptr [esp+0x164], 3
        call ext_006B9950
        test al, al
        jne near ptr L_736450
        lea eax, [esp+0x18]
        lea edx, [esp+0x110]
        push eax
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp+0x60], esp
        push edx
        call ext_006B9D20
        mov ecx, esi
        call ext_00742A70
        cmp eax, -1
        jne near ptr L_736450
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_00726860
        test al, al
        je near ptr L_736450
        mov ecx, dword ptr [esi+0xac]
        push 0xb5d2c0
        push 0xaa8e24
        add ecx, 4
        call ext_00726AA0
        push eax
        lea ecx, [esp+0x7c]
        call ext_006B9D80
        push 0xaabd1c
        lea ecx, [esp+0x7c]
        mov byte ptr [esp+0x168], 4
        call ext_006BA660
        test eax, eax
        jne near ptr L_736431
        lea eax, [esp+0xc4]
        push edi
        push eax
        mov ecx, esi
        call ext_00736820
        lea ecx, [esp+0xc4]
        mov byte ptr [esp+0x164], bl
        call ext_006B9950
        test al, al
        jne near ptr L_73641D
        push 0x4c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+0x10], eax
        test eax, eax
        mov byte ptr [esp+0x164], 6
        je short L_7363B2
        lea ecx, [esp+0x110]
        push ecx
        mov ecx, eax
        call ext_006B9D20
        jmp short L_7363B4
L_7363B2:
        xor eax, eax
L_7363B4:
        mov dword ptr [esp+0x10], eax
        mov eax, dword ptr [esp+0x18]
        lea edx, [esp+0x10]
        lea ecx, [esp+0x18]
        push edx
        push eax
        mov byte ptr [esp+0x16c], bl
        call ext_006D2170
        push 0x4c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+0x10], eax
        test eax, eax
        mov byte ptr [esp+0x164], 7
        je short L_7363FD
        lea ecx, [esp+0xc4]
        push ecx
        mov ecx, eax
        call ext_006B9D20
        jmp short L_7363FF
L_7363FD:
        xor eax, eax
L_7363FF:
        mov dword ptr [esp+0x10], eax
        mov eax, dword ptr [esp+0x30]
        lea edx, [esp+0x10]
        lea ecx, [esp+0x30]
        push edx
        push eax
        mov byte ptr [esp+0x16c], bl
        call ext_006D2170
L_73641D:
        lea ecx, [esp+0xc4]
        mov byte ptr [esp+0x164], 4
        call ext_006B9D70
L_736431:
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_007268D0
        lea ecx, [esp+0x78]
        mov byte ptr [esp+0x164], 3
        call ext_006B9D70
L_736450:
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp+0x110]
        mov byte ptr [esp+0x164], 2
        call ext_006B9D70
        mov ecx, dword ptr [esi+0xac]
        push 0xaad20c
        add ecx, 4
        call ext_00726770
        cmp al, 1
        je near ptr L_7362A4
L_73648D:
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_007268D0
L_73649B:
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_00726840
L_7364A9:
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_007268D0
L_7364B7:
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_00726840
L_7364C5:
        mov ecx, dword ptr [esp+0x16c]
        call ext_006B99C0
        mov ebx, dword ptr [eax+0x34]
        xor ebp, ebp
        test ebx, ebx
        mov dword ptr [esp+0x10], ebx
        jle near ptr L_7365DD
L_7364E2:
        mov ecx, dword ptr [esp+0x16c]
        call ext_006B99C0
        mov ecx, dword ptr [eax+0x44]
        mov edx, dword ptr [ecx+4*ebp]
        lea eax, [ecx+4*ebp]
        lea eax, [esp+0x18]
        mov edi, dword ptr [edx]
        push eax
        mov ecx, edi
        call ext_00703B50
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp+0x64], esp
        push eax
        call ext_006B9D20
        mov ecx, esi
        call ext_00742A70
        cmp eax, -1
        je near ptr L_7365D4
        mov ecx, dword ptr [esp+0x40]
        mov ecx, dword ptr [ecx+4*eax]
        call ext_006E7460
        lea edx, [esp+0xc4]
        push eax
        push edx
        call ext_006FF230
        add esp, 8
        lea ecx, [esp+0xc4]
        mov byte ptr [esp+0x164], 8
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_00702360
        mov ecx, edi
        call ext_00702210
        push eax
        lea ecx, [esp+0x7c]
        call ext_006B9D80
        push 0xb5d2c0
        mov ecx, eax
        mov byte ptr [esp+0x168], 9
        call ext_006BA7C0
        lea ecx, [esp+0x78]
        mov bl, al
        mov byte ptr [esp+0x164], 8
        call ext_006B9D70
        test bl, bl
        je short L_7365BC
        lea ecx, [esp+0xc4]
        call ext_006E7460
        mov ecx, dword ptr [esi+0xac]
        push eax
        add ecx, 4
        call ext_00726550
        push eax
        mov ecx, edi
        call ext_007023A0
L_7365BC:
        lea ecx, [esp+0xc4]
        mov byte ptr [esp+0x164], 2
        call ext_006B9D70
        mov ebx, dword ptr [esp+0x10]
L_7365D4:
        inc ebp
        cmp ebp, ebx
        jl near ptr L_7364E2
L_7365DD:
        mov ecx, dword ptr [esp+0x16c]
        push 0
        lea eax, [esp+0x64]
        push 7
        push eax
        call ext_006B99C0
        mov ecx, eax
        call ext_006E8D10
        mov eax, dword ptr [esp+0x60]
        xor ebx, ebx
        test eax, eax
        mov ebp, eax
        jle short L_736683
L_736605:
        mov ecx, dword ptr [esp+0x70]
        mov ecx, dword ptr [ecx+4*ebx]
        call ext_006C3030
        mov edi, eax
        lea edx, [esp+0x18]
        push edx
        mov ecx, edi
        call ext_0071C330
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp+0x64], esp
        push eax
        call ext_006B9D80
        mov ecx, esi
        call ext_00742A70
        cmp eax, -1
        je short L_73667E
        mov ecx, dword ptr [esp+0x40]
        mov ecx, dword ptr [ecx+4*eax]
        call ext_006E7460
        lea edx, [esp+0x78]
        push eax
        push edx
        call ext_006FF230
        add esp, 8
        lea ecx, [esp+0x78]
        mov byte ptr [esp+0x164], 0xa
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_0071C2E0
        lea ecx, [esp+0x78]
        mov byte ptr [esp+0x164], 2
        call ext_006B9D70
L_73667E:
        inc ebx
        cmp ebx, ebp
        jl short L_736605
L_736683:
        push 4
        push 0x10
        lea ecx, [esp+0x50]
        call ext_006D2130
        lea eax, [esp+0x58]
        mov dword ptr [esp+0x5c], eax
        push 0
        lea ecx, [esp+0x4c]
        push 9
        mov bl, 0xb
        push ecx
        mov ecx, dword ptr [esp+0x178]
        mov byte ptr [esp+0x170], bl
        call ext_006B99C0
        mov ecx, eax
        call ext_006E8D10
        mov eax, dword ptr [esp+0x48]
        xor ebp, ebp
        test eax, eax
        jle near ptr L_736750
L_7366CB:
        mov edx, dword ptr [esp+0x58]
        mov ecx, dword ptr [edx+4*ebp]
        call ext_006C3030
        mov edi, eax
        lea eax, [esp+0x18]
        push eax
        mov ecx, edi
        call ext_007008F0
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp+0x64], esp
        push eax
        call ext_006B9D80
        mov ecx, esi
        call ext_00742A70
        cmp eax, -1
        je short L_736743
        mov ecx, dword ptr [esp+0x40]
        mov ecx, dword ptr [ecx+4*eax]
        call ext_006E7460
        lea edx, [esp+0x78]
        push eax
        push edx
        call ext_006FF230
        add esp, 8
        lea ecx, [esp+0x78]
        mov byte ptr [esp+0x164], 0xc
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_007008D0
        lea ecx, [esp+0x78]
        mov byte ptr [esp+0x164], bl
        call ext_006B9D70
L_736743:
        mov eax, dword ptr [esp+0x48]
        inc ebp
        cmp ebp, eax
        jl near ptr L_7366CB
L_736750:
        mov edi, dword ptr [esp+0x18]
        test edi, edi
        je short L_736778
L_736758:
        mov eax, dword ptr [esp+0x28]
        dec edi
        mov esi, dword ptr [eax+4*edi]
        test esi, esi
        je short L_736774
        mov ecx, esi
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 4
L_736774:
        test edi, edi
        jne short L_736758
L_736778:
        lea ecx, [esp+0x18]
        call ext_006D2250
        mov edi, dword ptr [esp+0x30]
        test edi, edi
        je short L_7367A9
L_736789:
        mov ecx, dword ptr [esp+0x40]
        dec edi
        mov esi, dword ptr [ecx+4*edi]
        test esi, esi
        je short L_7367A5
        mov ecx, esi
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 4
L_7367A5:
        test edi, edi
        jne short L_736789
L_7367A9:
        lea ecx, [esp+0x30]
        call ext_006D2250
        lea ecx, [esp+0x60]
        call ext_006D2250
        lea ecx, [esp+0x48]
        mov byte ptr [esp+0x164], 2
        call ext_006D2160
        lea ecx, [esp+0x60]
        mov byte ptr [esp+0x164], 1
        call ext_006D2160
        lea ecx, [esp+0x30]
        mov byte ptr [esp+0x164], 0
        call ext_006D2160
        lea ecx, [esp+0x18]
        mov dword ptr [esp+0x164], -1
        call ext_006D2160
        mov ecx, dword ptr [esp+0x15c]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0
        _emit 0
        _emit 0
        _emit 0
        pop ebx
        add esp, 0x158
        ret 8
    }
}

// [0x00736C90] sub_00736C90 (32 bytes)
extern "C" void ext_00782E70();
extern "C" __declspec(naked) void __fastcall fn_00736C90(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push eax
        add ecx, 0xb8
        call ext_00782E70
        ret 4
    }
}

// [0x00738C30] sub_00738C30 (64 bytes)
extern "C" void ext_006E5EE0();

extern "C" __declspec(naked) void __stdcall fn_00738C30(void* a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0
        push 1
        push 0
        push esi
        push edi
        call ext_006E5EE0
        add esp, 0x14
        test eax, eax
        je done
    again:
        push 0
        push 1
        push 0
        push esi
        push edi
        call ext_006E5EE0
        add esp, 0x14
        test eax, eax
        jne again
    done:
        pop edi
        pop esi
        ret 8
    }
}

// [0x00738C70] sub_00738C70 (64 bytes)
extern "C" void ext_0073A080();
extern "C" void ext_0073A120();
extern "C" void ext_0073A1D0();
extern "C" void ext_0073A260();
extern "C" void ext_0073A380();

extern "C" __declspec(naked) bool __fastcall fn_00738C70(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        call ext_0073A080
        push edi
        mov ecx, esi
        call ext_0073A120
        push edi
        mov ecx, esi
        call ext_0073A1D0
        push edi
        mov ecx, esi
        call ext_0073A260
        push edi
        mov ecx, esi
        call ext_0073A380
        pop edi
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x00737000] sub_00737000 (80 bytes)
extern "C" void ext_006C2F30();
extern "C" void ext_006F52F0();
extern "C" void ext_00726B40();

extern "C" __declspec(naked) void __fastcall fn_00737000(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        push 1
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad91c
        add ecx, 4
        call ext_00726B40
        mov edi, dword ptr [esp + 0xc]
        test eax, eax
        setne al
        push eax
        mov ecx, edi
        call ext_006F52F0
        mov ecx, dword ptr [esi + 0xac]
        push 0
        push 0xaad910
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_006C2F30
        pop edi
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x007327E0] sub_007327E0 (96 bytes)
extern "C" int mem_00AAD51C;
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00732840();

extern "C" __declspec(naked) void __fastcall fn_007327E0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        push offset mem_00AAD51C
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00726770
        test al, al
        je L_end
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00726860
        test al, al
        je L_726840
        mov eax, dword ptr [esp + 8]
        mov ecx, esi
        push eax
        call ext_00732840
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007268D0
L_726840:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00726840
L_end:
        pop esi
        ret 4
    }
}

// [0x00731EA0] sub_00731EA0 (112 bytes)
extern "C" void ext_006BC380();
extern "C" void ext_006C3030();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00731DE0();
extern "C" int mem_00AAD45C;

extern "C" __declspec(naked) void __fastcall fn_00731EA0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        push offset mem_00AAD45C
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00726770
        test al, al
        je L_end
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00726860
        test al, al
        je L_skip
        mov ecx, dword ptr [esp + 8]
        call ext_006BC380
        mov ecx, eax
        call ext_006C3030
        push eax
        mov ecx, esi
        call ext_00731DE0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007268D0
    L_skip:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00726840
    L_end:
        pop esi
        ret 4
    }
}

// [0x0073E0D0] sub_0073E0D0 (128 bytes)
extern "C" __declspec(naked) int __fastcall fn_0073E0D0(void* self, int edx_unused, int a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0xac]
        push esi
        push edi
        add ecx, 0x4
        call ext_00726A40
        mov edi, dword ptr [mem_009251D0]
        mov esi, eax
        push 0xaae384
        push esi
        call edi
        add esp, 0x8
        test eax, eax
        jne L_next1
        pop edi
        pop esi
        ret 0x4
L_next1:
        push 0xaae374
        push esi
        call edi
        add esp, 0x8
        test eax, eax
        jne L_next2
        pop edi
        mov eax, 0x1
        pop esi
        ret 0x4
L_next2:
        push 0xaae368
        push esi
        call edi
        add esp, 0x8
        test eax, eax
        jne L_next3
        pop edi
        mov eax, 0x2
        pop esi
        ret 0x4
L_next3:
        push 0xaae360
        push esi
        call edi
        add esp, 0x8
        neg eax
        sbb eax, eax
        pop edi
        neg eax
        add eax, 0x3
        pop esi
        ret 0x4
    }
}

// [0x00738B10] sub_00738B10 (128 bytes)
extern "C" void ext_006C9360();
extern "C" void ext_006DC460();
extern "C" void ext_006E5EE0();

extern "C" __declspec(naked) void __fastcall fn_00738B10(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov eax, dword ptr [ebx + 0ach]
        test eax, eax
        je fn00738B10_null1
        lea esi, [eax + 4]
        jmp fn00738B10_s1
fn00738B10_null1:
        xor esi, esi
fn00738B10_s1:
        mov edi, dword ptr [esp + 10h]
        push 0
        push 1
        push 1
        mov ecx, edi
        call ext_006DC460
        mov ecx, eax
        call ext_006C9360
        push eax
        push esi
        call ext_006E5EE0
        add esp, 14h
        test eax, eax
        je fn00738B10_fail
fn00738B10_loop:
        mov eax, dword ptr [ebx + 0ach]
        test eax, eax
        je fn00738B10_null2
        lea esi, [eax + 4]
        jmp fn00738B10_s2
fn00738B10_null2:
        xor esi, esi
fn00738B10_s2:
        push 0
        push 1
        push 1
        mov ecx, edi
        call ext_006DC460
        mov ecx, eax
        call ext_006C9360
        push eax
        push esi
        call ext_006E5EE0
        add esp, 14h
        test eax, eax
        jne fn00738B10_loop
fn00738B10_fail:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x00731BE0] sub_00731BE0 (128 bytes)
extern "C" void ext_006C2990();
extern "C" void ext_006C2B60();
extern "C" void ext_00782EC0();
extern "C" void ext_00782F00();
extern "C" void ext_00782F70();

extern "C" __declspec(naked) void __fastcall fn_00731BE0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0cch]
        mov ecx, edi
        call ext_00782F70
        mov ebp, dword ptr [esi + 0d0h]
        xor esi, esi
        test ebp, ebp
        jle fn00731BE0_skip
        push ebx
fn00731BE0_loop:
        push esi
        mov ecx, edi
        call ext_00782F00
        mov ebx, dword ptr [eax]
        lea eax, [esp + 10h]
        push eax
        push esi
        mov ecx, edi
        mov dword ptr [esp + 18h], 0
        call ext_00782EC0
        mov ecx, dword ptr [esp + 10h]
        push 0
        push 1
        push ecx
        mov ecx, dword ptr [esp + 24h]
        call ext_006C2990
        push eax
        mov ecx, ebx
        call ext_006C2B60
        inc esi
        cmp esi, ebp
        jl fn00731BE0_loop
        pop ebx
        pop edi
        pop esi
        mov al, 1
        pop ebp
        pop ecx
        ret 4
fn00731BE0_skip:
        pop edi
        pop esi
        mov al, 1
        pop ebp
        pop ecx
        ret 4
    }
}

// [0x00731870] sub_00731870 (128 bytes)
extern "C" void ext_0072CF10();
extern "C" void ext_007318F0();
extern "C" void ext_00731A10();
extern "C" void ext_00731BE0();
extern "C" void ext_00731C60();
extern "C" void ext_0079D6D0();

extern "C" __declspec(naked) void __fastcall fn_00731870(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je fn00731870_ret1
        mov edi, dword ptr [esp + 0ch]
        mov ecx, esi
        push edi
        call ext_007318F0
        test al, al
        jne fn00731870_s1
        pop edi
        pop esi
        ret 4
fn00731870_s1:
        mov ecx, dword ptr [esi + 0b4h]
        push 4
        call ext_0072CF10
        test al, al
        je fn00731870_s2
        push edi
        push edi
        mov ecx, esi
        call ext_00731A10
        test al, al
        jne fn00731870_s2
        pop edi
        pop esi
        ret 4
fn00731870_s2:
        push edi
        mov ecx, esi
        call ext_00731BE0
        test al, al
        jne fn00731870_s3
        pop edi
        pop esi
        ret 4
fn00731870_s3:
        push edi
        mov ecx, esi
        call ext_00731C60
        test al, al
        jne fn00731870_ret1
        pop edi
        pop esi
        ret 4
fn00731870_ret1:
        pop edi
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x00731C60] sub_00731C60 (128 bytes)
extern "C" void ext_006C2990();
extern "C" void ext_006C2CE0();
extern "C" void ext_00782EC0();
extern "C" void ext_00782F00();
extern "C" void ext_00782F70();

extern "C" __declspec(naked) void __fastcall fn_00731C60(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0e0h]
        mov ecx, edi
        call ext_00782F70
        mov ebp, dword ptr [esi + 0e4h]
        xor esi, esi
        test ebp, ebp
        jle fn00731C60_skip
        push ebx
fn00731C60_loop:
        push esi
        mov ecx, edi
        call ext_00782F00
        mov ebx, dword ptr [eax]
        lea eax, [esp + 10h]
        push eax
        push esi
        mov ecx, edi
        mov dword ptr [esp + 18h], 0
        call ext_00782EC0
        mov ecx, dword ptr [esp + 10h]
        push 0
        push 1
        push ecx
        mov ecx, dword ptr [esp + 24h]
        call ext_006C2990
        push eax
        mov ecx, ebx
        call ext_006C2CE0
        inc esi
        cmp esi, ebp
        jl fn00731C60_loop
        pop ebx
        pop edi
        pop esi
        mov al, 1
        pop ebp
        pop ecx
        ret 4
fn00731C60_skip:
        pop edi
        pop esi
        mov al, 1
        pop ebp
        pop ecx
        ret 4
    }
}

// [0x0073A1D0] sub_0073A1D0 (144 bytes)
extern "C" void ext_006D37B0();
extern "C" void ext_0070CED0();
extern "C" void ext_0072CF10();
extern "C" void ext_0073F7E0();
extern "C" __declspec(naked) void __fastcall fn_0073A1D0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        push 4
        mov ecx, dword ptr [esi + 0b4h]
        call ext_0072CF10
        test al, al
        je fn0073A1D0_ret1
        mov ecx, dword ptr [esi + 0ach]
        push 0aadca0h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073A1D0_ret1
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push edi
fn0073A1D0_loop:
        mov ecx, dword ptr [esi + 4]
        call ext_006D37B0
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_0073F7E0
        test al, al
        je fn0073A1D0_else
        push edi
        mov ecx, ebx
        call ext_0070CED0
        jmp fn0073A1D0_after
fn0073A1D0_else:
        mov ecx, dword ptr [esi + 4]
        push edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 7ch]
fn0073A1D0_after:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        push 0aadca0h
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn0073A1D0_loop
        pop edi
        pop ebx
        mov al, 1
        pop esi
        ret 4
fn0073A1D0_ret1:
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x00736D80] sub_00736D80 (160 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_00726B40();
extern "C" void ext_00742E60();
extern "C" void ext_0079CD60();

extern "C" __declspec(naked) void __fastcall fn_00736D80(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 8be5c8h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 18h
        push esi
        mov esi, ecx
        push edi
        push 64h
        mov ecx, dword ptr [esi + 0ach]
        push 0aacd0ch
        add ecx, 4
        call ext_00726B40
        push 4
        push 10h
        lea ecx, [esp + 10h]
        call ext_006D2130
        lea eax, [esp + 18h]
        mov dword ptr [esp + 1ch], eax
        mov edi, dword ptr [esp + 30h]
        lea edx, [esp + 8]
        mov dword ptr [esp + 28h], 0
        mov ecx, dword ptr [edi + 0f4h]
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        push edx
        call ext_0079CD60
        push edi
        mov ecx, esi
        call ext_00742E60
        lea ecx, [esp + 8]
        mov dword ptr [esp + 28h], -1
        call ext_006D2160
        mov ecx, dword ptr [esp + 20h]
        pop edi
        mov al, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 24h
        ret 4
    }
}

// [0x00738B90] sub_00738B90 (160 bytes)
extern "C" void ext_006C6350();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006DC9E0();
extern "C" void ext_0079CD60();

extern "C" __declspec(naked) void __fastcall fn_00738B90(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 8be5c8h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 18h
        push esi
        push edi
        mov edi, ecx
        push 4
        push 10h
        lea ecx, [esp + 10h]
        call ext_006D2130
        lea eax, [esp + 18h]
        mov dword ptr [esp + 1ch], eax
        mov esi, dword ptr [esp + 30h]
        lea eax, [esp + 8]
        push eax
        mov ecx, esi
        mov edx, dword ptr [esi]
        mov dword ptr [esp + 2ch], 0
        call dword ptr [edx + 10h]
        mov ecx, dword ptr [esi + 0f0h]
        lea edx, [esp + 8]
        push ecx
        mov ecx, dword ptr [edi + 0ach]
        push edx
        call ext_0079CD60
        mov ecx, esi
        call ext_006DC9E0
        mov ecx, esi
        call ext_006C6350
        lea ecx, [esp + 8]
        mov dword ptr [esp + 28h], 0ffffffffh
        call ext_006D2160
        mov ecx, dword ptr [esp + 20h]
        pop edi
        mov al, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 24h
        ret 4
    }
}

// [0x0073A080] sub_0073A080 (160 bytes)
extern "C" void ext_0072CF10();
extern "C" void ext_006D37E0();
extern "C" void ext_0073EF50();
extern "C" void ext_006FDB00();

extern "C" __declspec(naked) void __fastcall fn_0073A080(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        push 1
        mov ecx, dword ptr [esi + 0b4h]
        call ext_0072CF10
        test al, al
        je fn0073A080_ret1
        mov ecx, dword ptr [esi + 0ach]
        push 0aad40ch
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073A080_ret1
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push edi
fn0073A080_loop:
        mov ecx, dword ptr [esi + 4]
        push 0b5d2c0h
        call ext_006D37E0
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_0073EF50
        test al, al
        je fn0073A080_else
        push 0
        push edi
        mov ecx, ebx
        call ext_006FDB00
        jmp fn0073A080_after
fn0073A080_else:
        mov ecx, dword ptr [esi + 4]
        push edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 80h]
fn0073A080_after:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        push 0aad40ch
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn0073A080_loop
        pop edi
        pop ebx
        mov al, 1
        pop esi
        ret 4
fn0073A080_ret1:
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x00732160] sub_00732160 (64 bytes)
extern "C" void ext_006BC7D0();
extern "C" void ext_006E84E0();
extern "C" void ext_007321A0();
extern "C" void ext_00732460();
extern "C" void ext_007325C0();

extern "C" void __fastcall fn_00732160(void* self, int edx_unused, void* a1) {
    void* tmp = ((void* (__thiscall*)(void*))ext_006BC7D0)(a1);
    ((void (__thiscall*)(void*))ext_006E84E0)(tmp);
    ((void (__thiscall*)(void*, void*))ext_00732460)(self, a1);
    ((void (__thiscall*)(void*, void*))ext_007325C0)(self, a1);
    ((void (__thiscall*)(void*, void*))ext_007321A0)(self, a1);
}

// [0x0073A120] sub_0073A120 (176 bytes)
extern "C" void ext_0072CF10();
extern "C" void ext_006D3900();
extern "C" void ext_0073E150();
extern "C" void ext_006D2170();

extern "C" __declspec(naked) void __fastcall fn_0073A120(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        push 2
        mov ecx, dword ptr [esi + 0b4h]
        call ext_0072CF10
        test al, al
        je fn0073A120_ret1
        mov ecx, dword ptr [esi + 0ach]
        push 0aad404h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073A120_ret1
        push edi
fn0073A120_loop:
        mov ecx, dword ptr [esi + 4]
        push 0b5d2c0h
        call ext_006D3900
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_0073E150
        test al, al
        je fn0073A120_else
        mov edx, dword ptr [esi + 1b8h]
        lea ecx, [esi + 1b8h]
        lea eax, [esp + 8]
        mov dword ptr [esp + 8], edi
        push eax
        push edx
        call ext_006D2170
        jmp fn0073A120_join
fn0073A120_else:
        mov ecx, dword ptr [esi + 4]
        push edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 88h]
fn0073A120_join:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        push 0aad404h
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn0073A120_loop
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 4
fn0073A120_ret1:
        mov al, 1
        pop esi
        pop ecx
        ret 4
    }
}

// [0x0073C2A0] sub_0073C2A0 (192 bytes)
extern "C" void ext_006D2300();
extern "C" void ext_006DEEC0();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726900();
extern "C" void ext_00726BE0();
extern "C" __declspec(naked) void __fastcall fn_0073C2A0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 8
        push edi
        mov edi, ecx
        push 0aadfb8h
        mov dword ptr [esp + 0ch], edi
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073C2A0_ret1
        mov ecx, dword ptr [edi + 0ach]
        push esi
        add ecx, 4
        call ext_00726900
        mov ecx, eax
        mov eax, 55555556h
        imul ecx
        mov ecx, dword ptr [esp + 14h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        add ecx, 28h
        mov esi, edx
        push esi
        call ext_006D2300
        test esi, esi
        jle fn0073C2A0_tail
        push ebx
        push ebp
        xor ebp, ebp
        mov dword ptr [esp + 10h], esi
fn0073C2A0_outer:
        mov ecx, dword ptr [esp + 1ch]
        call ext_006DEEC0
        mov esi, dword ptr [edi + 0ach]
        add eax, ebp
        add esi, 4
        mov edi, eax
        mov ebx, 3
fn0073C2A0_inner:
        mov ecx, esi
        call ext_00726BE0
        fstp qword ptr [edi]
        add edi, 8
        dec ebx
        jne fn0073C2A0_inner
        mov eax, dword ptr [esp + 10h]
        mov edi, dword ptr [esp + 14h]
        add ebp, 20h
        dec eax
        mov dword ptr [esp + 10h], eax
        jne fn0073C2A0_outer
        pop ebp
        pop ebx
fn0073C2A0_tail:
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726840
        pop esi
        mov al, 1
        pop edi
        add esp, 8
        ret 4
fn0073C2A0_ret1:
        mov al, 1
        pop edi
        add esp, 8
        ret 4
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x00731DE0] sub_00731DE0 (192 bytes)
extern "C" void ext_00726B40();
extern "C" void ext_006E9B00();
extern "C" void ext_006B9D70();
extern "C" void ext_006A5C5C();
extern "C" void ext_006D2250();
extern "C" void ext_006E9BB0();
extern "C" void ext_00726900();

extern "C" __declspec(naked) void __fastcall fn_00731DE0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push 0
        push 0aad450h
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726B40
        mov ebx, dword ptr [esp + 14h]
        push eax
        mov ecx, ebx
        call ext_006E9B00
        mov esi, dword ptr [ebx + 0ch]
        lea ebp, [ebx + 0ch]
        test esi, esi
        je fn00731DE0_after_loop
fn00731DE0_loop:
        mov eax, dword ptr [ebp + 10h]
        dec esi
        mov ebx, dword ptr [eax + 4*esi]
        test ebx, ebx
        je fn00731DE0_skip
        mov ecx, ebx
        call ext_006B9D70
        push ebx
        call ext_006A5C5C
        add esp, 4
fn00731DE0_skip:
        test esi, esi
        jne fn00731DE0_loop
        mov ebx, dword ptr [esp + 14h]
fn00731DE0_after_loop:
        mov ecx, ebp
        call ext_006D2250
        mov ecx, dword ptr [edi + 0ach]
        push 0aad440h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00731DE0_ret
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726900
        test eax, eax
        je fn00731DE0_tail
        mov esi, eax
fn00731DE0_loop2:
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        mov ecx, ebx
        call ext_006E9BB0
        dec esi
        jne fn00731DE0_loop2
fn00731DE0_tail:
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726840
fn00731DE0_ret:
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x00734EE0] sub_00734EE0 (192 bytes)
extern "C" void ext_006D3DF0();
extern "C" void ext_006D5190();
extern "C" void ext_006D61A0();
extern "C" void ext_006D6250();
extern "C" void ext_0072CEF0();

extern "C" __declspec(naked) void __fastcall fn_00734EE0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor bl, bl
        mov ecx, dword ptr [edi + 4]
        call ext_006D3DF0
        mov ebp, eax
        mov eax, dword ptr [edi + 0ach]
        push eax
        mov ecx, ebp
        call ext_006D61A0
        mov esi, eax
        test esi, esi
        je fn00734EE0_skip
        push 0
        push 0
        mov ecx, esi
        call ext_0072CEF0
        push 0
        push 1
        mov ecx, esi
        call ext_0072CEF0
        push 0
        push 2
        mov ecx, esi
        call ext_0072CEF0
        push 0
        push 5
        mov ecx, esi
        call ext_0072CEF0
        push 0
        push 6
        mov ecx, esi
        call ext_0072CEF0
        push 0
        push 0ah
        mov ecx, esi
        call ext_0072CEF0
        push 0
        push 7
        mov ecx, esi
        call ext_0072CEF0
        push 0
        push 9
        mov ecx, esi
        call ext_0072CEF0
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [edi + 0ach]
        push ecx
        push esi
        mov eax, dword ptr [edx + 0b8h]
        mov ecx, ebp
        push eax
        call ext_006D6250
        mov edx, dword ptr [esi]
        push 0
        mov ecx, esi
        mov bl, al
        call dword ptr [edx + 4]
fn00734EE0_skip:
        mov ecx, dword ptr [edi + 4]
        push ebp
        call ext_006D5190
        pop edi
        pop esi
        mov al, bl
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x0073C5C0] sub_0073C5C0 (192 bytes)
extern "C" void ext_006D7ED0();
extern "C" void ext_006D80A0();
extern "C" void ext_006D80B0();
extern "C" void ext_00726900();
extern "C" void ext_00726AE0();
extern "C" __declspec(naked) void __fastcall fn_0073C5C0(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, ecx
        push 0aae000h
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073C5C0_ret1
        mov ecx, dword ptr [ebp + 0ach]
        push edi
        add ecx, 4
        call ext_00726900
        mov edi, eax
        test edi, edi
        jle fn0073C5C0_skip
        push ebx
        push esi
        mov esi, dword ptr [esp + 14h]
        push -1
        push -1
        push -1
        mov ecx, esi
        call ext_006D7ED0
        xor ebx, ebx
        test edi, edi
        jle fn0073C5C0_endloop
fn0073C5C0_loop:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726AE0
        test eax, eax
        push -1
        jge fn0073C5C0_pos
        cdq
        xor eax, edx
        mov ecx, esi
        sub eax, edx
        dec eax
        push eax
        call ext_006D80B0
        mov ecx, esi
        call ext_006D80A0
        lea eax, [edi - 1]
        cmp ebx, eax
        jge fn0073C5C0_inc
        push -1
        push -1
        push -1
        mov ecx, esi
        call ext_006D7ED0
        jmp fn0073C5C0_inc
fn0073C5C0_pos:
        push eax
        mov ecx, esi
        call ext_006D80B0
fn0073C5C0_inc:
        inc ebx
        cmp ebx, edi
        jl fn0073C5C0_loop
fn0073C5C0_endloop:
        pop esi
        pop ebx
fn0073C5C0_skip:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726840
        pop edi
        mov al, 1
        pop ebp
        ret 4
fn0073C5C0_ret1:
        mov al, 1
        pop ebp
        ret 4
    }
}

// [0x0073C360] sub_0073C360 (192 bytes)
extern "C" int mem_00AADC44;
extern "C" void ext_006D7990();
extern "C" void ext_006D7AA0();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726900();
extern "C" void ext_00726BE0();

extern "C" __declspec(naked) void __fastcall fn_0073C360(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push edi
        mov edi, ecx
        push offset mem_00AADC44
        mov dword ptr [esp + 8], edi
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073C360_ret1
        mov ecx, dword ptr [edi + 0ach]
        push ebx
        push esi
        add ecx, 4
        call ext_00726900
        mov ecx, eax
        mov eax, 55555556h
        imul ecx
        mov ebx, dword ptr [esp + 14h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov ecx, ebx
        mov esi, edx
        push esi
        call ext_006D7990
        mov ecx, ebx
        call ext_006D7AA0
        test esi, esi
        jle fn0073C360_skip
        push ebp
        mov ebp, eax
        mov dword ptr [esp + 18h], esi
fn0073C360_outer:
        mov esi, dword ptr [edi + 0ach]
        mov edi, ebp
        add esi, 4
        mov ebx, 3
fn0073C360_inner:
        mov ecx, esi
        call ext_00726BE0
        fstp qword ptr [edi]
        add edi, 8
        dec ebx
        jne fn0073C360_inner
        mov eax, dword ptr [esp + 18h]
        mov edi, dword ptr [esp + 10h]
        add ebp, 20h
        dec eax
        mov dword ptr [esp + 18h], eax
        jne fn0073C360_outer
        pop ebp
fn0073C360_skip:
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726840
        pop esi
        pop ebx
        mov al, 1
        pop edi
        pop ecx
        ret 4
fn0073C360_ret1:
        mov al, 1
        pop edi
        pop ecx
        ret 4
    }
}

// [0x00732BF0] sub_00732BF0 (192 bytes)
extern "C" void ext_006B9EC0();
extern "C" void ext_00726AA0();
extern "C" void ext_00726AE0();

extern "C" __declspec(naked) void __fastcall fn_00732BF0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        push 0b5d2c0h
        mov ecx, dword ptr [esi + 0ach]
        push 0aad558h
        add ecx, 4
        call ext_00726AA0
        mov edi, dword ptr [esp + 0ch]
        push eax
        mov ecx, edi
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        add ecx, 4
        push 0aad54ch
        call ext_00726AA0
        push eax
        lea ecx, [edi + 4ch]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0ach]
        push 0aad53ch
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00732BF0_done
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        test eax, eax
        setne al
        mov byte ptr [edi + 98h], al
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        test eax, eax
        setne cl
        mov byte ptr [edi + 99h], cl
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        test eax, eax
        setne dl
        mov byte ptr [edi + 9ah], dl
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn00732BF0_done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x00737050] sub_00737050 (208 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006BA660();
extern "C" void ext_00726AA0();

extern "C" __declspec(naked) void __fastcall fn_00737050(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x8bcb18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        mov ecx, dword ptr [ecx + 0xac]
        push 0xb5d2c0
        push 0xaad950
        add ecx, 0x4
        call ext_00726AA0
        push eax
        lea ecx, [esp + 0x4]
        call ext_006B9D80
        push 0xaad944
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x58], 0x0
        call ext_006BA660
        test eax, eax
        je loc_7370e8
        push 0xaad934
        lea ecx, [esp + 0x4]
        call ext_006BA660
        test eax, eax
        jne loc_7370c6
        mov ecx, dword ptr [esp + 0x5c]
        mov dword ptr [ecx + 0x540], 0x1
        jmp loc_7370f6
loc_7370c6:
        push 0xaad928
        lea ecx, [esp + 0x4]
        call ext_006BA660
        test eax, eax
        jne loc_7370e8
        mov edx, dword ptr [esp + 0x5c]
        mov dword ptr [edx + 0x540], 0x2
        jmp loc_7370f6
loc_7370e8:
        mov eax, dword ptr [esp + 0x5c]
        mov dword ptr [eax + 0x540], 0x0
loc_7370f6:
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        mov dword ptr [esp + 0x54], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x4c]
        mov al, 0x1
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 0x4
    }
}

// [0x00736CB0] sub_00736CB0 (208 bytes)
extern "C" void ext_006C30A0();
extern "C" void ext_006DC460();
extern "C" void ext_0070D8A0();
extern "C" void ext_0072CF10();
extern "C" void ext_00736E20();
extern "C" void ext_00736EA0();
extern "C" void ext_00737000();
extern "C" void ext_00737050();
extern "C" void ext_00737120();
extern "C" void ext_00737A70();
extern "C" void ext_00737BE0();
extern "C" void ext_007385E0();
extern "C" void ext_00738B10();
extern "C" void ext_00738B90();
extern "C" void ext_00742E60();
extern "C" void ext_00742ED0();
extern "C" void ext_0079D6D0();

extern "C" __declspec(naked) void __fastcall fn_00736CB0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        push edi
        call ext_00736EA0
        push edi
        mov ecx, esi
        call ext_00737050
        push edi
        mov ecx, esi
        call ext_00737A70
        push edi
        mov ecx, esi
        call ext_00736E20
        push edi
        mov ecx, esi
        call ext_00737BE0
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        push edi
        mov ecx, esi
        jne fn00736CB0_b
        call ext_00738B90
        jmp fn00736CB0_c
fn00736CB0_b:
        call ext_00737120
        mov ecx, dword ptr [esi + 0b4h]
        push 0ah
        call ext_0072CF10
        test al, al
        je fn00736CB0_c
        push edi
        mov ecx, esi
        call ext_007385E0
fn00736CB0_c:
        push edi
        mov ecx, esi
        call ext_00737000
        push edi
        mov ecx, esi
        call ext_00738B10
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je fn00736CB0_d
        push edi
        mov ecx, esi
        call ext_00742ED0
fn00736CB0_d:
        push edi
        mov ecx, esi
        call ext_00742E60
        mov ecx, edi
        call ext_006C30A0
        test eax, eax
        je fn00736CB0_e
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je fn00736CB0_e
        mov ecx, edi
        call ext_006DC460
        push eax
        mov ecx, edi
        call ext_006C30A0
        mov ecx, eax
        call ext_0070D8A0
fn00736CB0_e:
        pop edi
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x00731CE0] sub_00731CE0 (256 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006BADB0();
extern "C" void ext_006C9FD0();
extern "C" void ext_006E9000();
extern "C" void ext_0071C2A0();
extern "C" void ext_00782EC0();
extern "C" void ext_00782F00();
extern "C" void ext_00782F70();

extern "C" __declspec(naked) void __fastcall fn_00731CE0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 18h
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0f4h]
        mov ecx, edi
        mov dword ptr [esp + 20h], edi
        call ext_00782F70
        mov eax, dword ptr [esi + 0f8h]
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [esp + 14h], eax
        call ext_006B99C0
        mov ecx, eax
        call ext_006C9FD0
        mov esi, eax
        mov eax, dword ptr [esp + 14h]
        xor ebp, ebp
        mov dword ptr [esp + 1ch], esi
        test eax, eax
        jle loc_end
loc_outer:
        push ebp
        mov ecx, edi
        call ext_00782F00
        mov ecx, dword ptr [eax]
        lea edx, [esp + 0ch]
        mov dword ptr [esp + 18h], ecx
        push edx
        push ebp
        mov ecx, edi
        mov dword ptr [esp + 14h], 0
        call ext_00782EC0
        test esi, esi
        jle loc_next
        mov dword ptr [esp + 10h], esi
loc_inner:
        mov ecx, dword ptr [esp + 28h]
        push ebp
        call ext_006B99C0
        mov ecx, eax
        call ext_006E9000
        mov esi, dword ptr [esp + 0ch]
        mov edi, eax
        mov ecx, edi
        call ext_006BADB0
loc_cmp:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_neq
        test cl, cl
        je loc_eqend
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne loc_neq
        add eax, 2
        add esi, 2
        test cl, cl
        jne loc_cmp
loc_eqend:
        xor eax, eax
        jmp loc_cmpdone
loc_neq:
        sbb eax, eax
        sbb eax, -1
loc_cmpdone:
        test eax, eax
        jne loc_skip
        mov ecx, dword ptr [esp + 18h]
        push edi
        call ext_0071C2A0
loc_skip:
        mov eax, dword ptr [esp + 10h]
        dec eax
        mov dword ptr [esp + 10h], eax
        jne loc_inner
        mov esi, dword ptr [esp + 1ch]
        mov edi, dword ptr [esp + 20h]
loc_next:
        mov eax, dword ptr [esp + 14h]
        inc ebp
        cmp ebp, eax
        jl loc_outer
loc_end:
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 18h
        ret 4
    }
}
