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
