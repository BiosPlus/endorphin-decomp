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
extern "C" void ext_006D8580(); extern "C" void ext_006D8730(); extern "C" void ext_00726AA0(); extern "C" void ext_0079D6D0();
extern "C" void ext_006BC7D0(); extern "C" void ext_006D80A0(); extern "C" void ext_006E8600(); extern "C" void ext_006E8620(); extern "C" void ext_006E86A0(); extern "C" void ext_006E86C0(); extern "C" void ext_006E86F0(); extern "C" void ext_006E8750(); extern "C" void ext_00726770(); extern "C" void ext_00726840(); extern "C" void ext_00726860(); extern "C" void ext_007268D0(); extern "C" void ext_00726B40(); extern "C" void ext_00726BE0(); extern "C" void ext_00726C20(); extern "C" void ext_0077FB40();
extern "C" void ext_006A5C5C(); extern "C" void ext_006B99C0(); extern "C" void ext_006C30A0(); extern "C" void ext_006D2130(); extern "C" void ext_006D2160(); extern "C" void ext_006D2170(); extern "C" void ext_006D2200(); extern "C" void ext_006FDF30(); extern "C" void ext_006FDF90(); extern "C" void ext_00703300(); extern "C" void ext_00715550();
extern "C" void ext_006A5C62(); extern "C" void ext_006D2130(); extern "C" void ext_006D2170(); extern "C" void ext_006D80A0(); extern "C" void ext_006D89D0(); extern "C" void ext_00726770(); extern "C" void ext_00726840(); extern "C" void ext_00726860(); extern "C" void ext_007268D0(); extern "C" void ext_00726900(); extern "C" void ext_00726AA0(); extern "C" void ext_00726AE0(); extern "C" void ext_00726B40(); extern "C" void ext_00726BE0(); extern "C" void ext_00743480(); extern "C" void ext_007435A0(); extern "C" void ext_0077FAB0(); extern "C" void ext_0077FAC0();

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

// [0x0073CE30] sub_0073CE30 (256 bytes)
extern "C" void ext_006D2250();
extern "C" void ext_006D2300();
extern "C" void ext_006D8550();
extern "C" void ext_006FC930();
extern "C" void ext_006FDF70();
extern "C" void ext_00726900();
extern "C" void ext_00726AE0();

extern "C" __declspec(naked) void __fastcall fn_0073CE30(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov ebp, ecx
        push 0
        mov ecx, edi
        call ext_006FDF70
        mov ecx, eax
        call ext_006FC930
        cmp dword ptr [eax], 2
        jne fn0073CE30_ret1
        push 0
        mov ecx, edi
        call ext_006FDF70
        mov ecx, eax
        call ext_006FC930
        mov ecx, dword ptr [ebp + 0ach]
        mov esi, eax
        push 0aae060h
        add ecx, 4
        add esi, 20h
        call ext_00726770
        test al, al
        jne fn0073CE30_fail
        mov ecx, dword ptr [ebp + 0ach]
        push 0aae048h
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn0073CE30_fail
        mov ecx, edi
        call ext_006D8550
        mov edi, eax
        test edi, edi
        jle fn0073CE30_ret1
        mov ecx, esi
        call ext_006D2250
        push edi
        mov ecx, esi
        call ext_006D2300
        xor eax, eax
        test edi, edi
        jle fn0073CE30_ret1
fn0073CE30_loop1:
        mov ecx, dword ptr [esi + 10h]
        mov dword ptr [ecx + 4*eax], eax
        inc eax
        cmp eax, edi
        jl fn0073CE30_loop1
fn0073CE30_ret1:
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
fn0073CE30_fail:
        mov ecx, dword ptr [ebp + 0ach]
        push ebx
        add ecx, 4
        call ext_00726900
        mov ebx, eax
        test ebx, ebx
        jle fn0073CE30_fail_end
        mov ecx, esi
        call ext_006D2250
        push ebx
        mov ecx, esi
        call ext_006D2300
        xor edi, edi
        test ebx, ebx
        jle fn0073CE30_fail_end
fn0073CE30_loop2:
        mov edx, dword ptr [esi + 10h]
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        lea eax, [edx + 4*edi]
        mov dword ptr [esp + 14h], eax
        call ext_00726AE0
        mov ecx, dword ptr [esp + 14h]
        inc edi
        cmp edi, ebx
        mov dword ptr [ecx], eax
        jl fn0073CE30_loop2
fn0073CE30_fail_end:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726840
        pop ebx
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
    }
}

// [0x0073CD30] sub_0073CD30 (256 bytes)
extern "C" void ext_006FDF70();
extern "C" void ext_006FC930();
extern "C" void ext_006D83C0();
extern "C" void ext_006D8520();
extern "C" void ext_006D23F0();
extern "C" void ext_00726900();
extern "C" void ext_00726BE0();
extern "C" __declspec(naked) void __fastcall fn_0073CD30(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov edi, ecx
        push 0aae03ch
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn0073CD30_body
        mov ecx, dword ptr [edi + 0ach]
        push 0aae030h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073CD30_end
fn0073CD30_body:
        mov esi, dword ptr [ebp + 8]
        push 0
        mov ecx, esi
        mov ebx, dword ptr [esi + 28h]
        call ext_006FDF70
        mov ecx, eax
        call ext_006FC930
        cmp dword ptr [eax], 2
        jne fn0073CD30_skip
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726900
        cdq
        sub eax, edx
        mov ebx, eax
        sar ebx, 1
fn0073CD30_skip:
        push ebx
        mov ecx, esi
        call ext_006D83C0
        mov ecx, esi
        call ext_006D8520
        test ebx, ebx
        jle fn0073CD30_fin
        mov esi, eax
fn0073CD30_loop:
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 10h]
        push 0
        mov ecx, esi
        call ext_006D23F0
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 10h]
        push 1
        mov ecx, esi
        call ext_006D23F0
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [eax], ecx
        add esi, 10h
        dec ebx
        mov dword ptr [eax + 4], edx
        jne fn0073CD30_loop
fn0073CD30_fin:
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726840
fn0073CD30_end:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x007318F0] sub_007318F0 (288 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006C2720();
extern "C" void ext_006C27E0();
extern "C" void ext_006C59C0();
extern "C" void ext_006C59E0();
extern "C" void ext_006D57D0();
extern "C" void ext_006E7460();
extern "C" void ext_00736C90();
extern "C" void ext_00782F00();
extern "C" void ext_00782F70();

extern "C" __declspec(naked) void __fastcall fn_007318F0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 8bcb18h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 58h
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        lea esi, [ebx+0b8h]
        push edi
        mov ecx, esi
        mov dword ptr [esp+18h], esi
        call ext_00782F70
        mov ebp, dword ptr [ebx+0bch]
        mov dword ptr [esp+10h], 0
        test ebp, ebp
        mov dword ptr [esp+14h], ebp
        jle fn007318F0_after_outer
        jmp fn007318F0_outer_body
fn007318F0_outer_top:
        mov esi, dword ptr [esp+18h]
fn007318F0_outer_body:
        mov eax, dword ptr [esp+10h]
        mov ecx, esi
        push eax
        call ext_00782F00
        mov edi, dword ptr [eax]
        mov ecx, edi
        call ext_006C59E0
        mov ebp, eax
        xor esi, esi
        test ebp, ebp
        jle fn007318F0_inner_end
fn007318F0_inner_top:
        push esi
        mov ecx, edi
        call ext_006C59C0
        push eax
        lea ecx, [esp+20h]
        push 0aa8704h
        push ecx
        call ext_006D57D0
        add esp, 0ch
        lea ecx, [esp+1ch]
        mov dword ptr [esp+70h], 0
        call ext_006E7460
        push eax
        mov ecx, ebx
        call ext_00736C90
        test eax, eax
        je fn007318F0_skip
        push eax
        mov ecx, edi
        call ext_006C27E0
fn007318F0_skip:
        lea ecx, [esp+1ch]
        mov dword ptr [esp+70h], 0ffffffffh
        call ext_006B9D70
        inc esi
        cmp esi, ebp
        jl fn007318F0_inner_top
fn007318F0_inner_end:
        mov eax, dword ptr [esp+10h]
        mov ecx, dword ptr [esp+14h]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp+10h], eax
        jl fn007318F0_outer_top
        mov esi, dword ptr [esp+18h]
        mov ebp, ecx
fn007318F0_after_outer:
        xor ebx, ebx
        test ebp, ebp
        jle fn007318F0_end
fn007318F0_second:
        push ebx
        mov ecx, esi
        call ext_00782F00
        mov edi, dword ptr [eax]
        mov ecx, edi
        call ext_006C2720
        test eax, eax
        jne fn007318F0_nx
        mov ecx, dword ptr [esp+78h]
        push edi
        call ext_006C27E0
fn007318F0_nx:
        inc ebx
        cmp ebx, ebp
        jl fn007318F0_second
fn007318F0_end:
        mov ecx, dword ptr [esp+68h]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 64h
        ret 4
    }
}

// [0x0073A260] sub_0073A260 (288 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006D3880();
extern "C" void ext_006E7460();
extern "C" void ext_0070D0B0();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726A40();
extern "C" void ext_0072CF10();
extern "C" void ext_007415F0();

extern "C" __declspec(naked) void __fastcall fn_0073A260(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -0x1
        push 0x8bcb18
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push esi
        mov esi, ecx
        push 0x5
        mov ecx, dword ptr [esi + 0b4h]
        call ext_0072CF10
        test al, al
        je fn0073A260_fail
        mov ecx, dword ptr [esi + 0ach]
        push 0aabebch
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073A260_fail
        push ebx
        mov ebx, dword ptr [esp + 64h]
        push edi
fn0073A260_loop:
        mov ecx, dword ptr [esi + 4]
        call ext_006D3880
        mov ecx, dword ptr [esi + 0ach]
        mov edi, eax
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 10h]
        call ext_006B9D80
        push ebx
        push edi
        mov ecx, esi
        mov dword ptr [esp + 68h], 0
        call ext_007415F0
        test al, al
        je fn0073A260_else
        lea ecx, [esp + 0ch]
        call ext_006E7460
        push eax
        push edi
        mov ecx, ebx
        call ext_0070D0B0
        cmp eax, -1
        jne fn0073A260_join
        mov ecx, dword ptr [esi + 4]
        push edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 84h]
        jmp fn0073A260_join
fn0073A260_else:
        mov ecx, dword ptr [esi + 4]
        push edi
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 84h]
fn0073A260_join:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 0ch]
        mov dword ptr [esp + 60h], 0ffffffffh
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0ach]
        push 0aabebch
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn0073A260_loop
        pop edi
        pop ebx
        mov al, 1
        pop esi
        mov ecx, dword ptr [esp + 4ch]
        mov dword ptr fs:[0], ecx
        add esp, 58h
        ret 4
fn0073A260_fail:
        mov ecx, dword ptr [esp + 50h]
        mov al, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 58h
        ret 4
    }
}

// [0x00736EA0] sub_00736EA0 (295 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006C2E60();
extern "C" void ext_006C2F10();
extern "C" void ext_006E7460();
extern "C" void ext_007269C0();

// Uses an EH frame (fs:[0] registration, handler 0x8bcb18) and a switch via
// absolute jump table at 0x736FC8 / index byte table at 0x736FE0, so naked asm.
extern "C" __declspec(naked) void __fastcall fn_00736EA0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8bcb18h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 4Ch
        push esi
        push edi
        mov edi, dword ptr [esp + 64h]
        mov esi, ecx
        push 1
        mov ecx, edi
        call ext_006C2E60
        mov ecx, dword ptr [esi + 0ACh]
        push 0AAD908h
        add ecx, 4
        call ext_00726770
        test al, al
        je L_43
        mov ecx, dword ptr [esi + 0ACh]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 0Ch]
        call ext_006B9D80
        push 0AAC078h
        lea ecx, [esp + 0Ch]
        mov dword ptr [esp + 60h], 0
        call ext_006E7460
        push eax
        call dword ptr [mem_009251D0]
        add esp, 8
        test eax, eax
        jne L_24
        push eax
        mov ecx, edi
        call ext_006C2E60
L_24:
        mov ecx, dword ptr [esi + 0ACh]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 8]
        mov dword ptr [esp + 5Ch], -1
        call ext_006B9D70
L_43:
        push 0
        mov ecx, edi
        call ext_006C2F10
        mov ecx, dword ptr [esi + 0ACh]
        push 0AAD900h
        add ecx, 4
        call ext_00726770
        test al, al
        je L_B2
        mov ecx, dword ptr [esi + 0ACh]
        add ecx, 4
        call ext_007269C0
        movsx eax, al
        add eax, -46h
        cmp eax, 13h
        ja L_A4
        xor ecx, ecx
        mov cl, byte ptr [eax + 736FE0h]
        jmp dword ptr [ecx*4 + 736FC8h]
L_8B:
        push 1
        jmp L_9D
L_8F:
        push 2
        jmp L_9D
L_93:
        push 3
        jmp L_9D
L_97:
        push 4
        jmp L_9D
L_9B:
        push 5
L_9D:
        mov ecx, edi
        call ext_006C2F10
L_A4:
        mov ecx, dword ptr [esi + 0ACh]
        add ecx, 4
        call ext_00726840
L_B2:
        mov ecx, dword ptr [esp + 54h]
        pop edi
        mov al, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 58h
        ret 4
    }
}

// [0x0073A380] sub_0073A380 (304 bytes)
extern "C" void ext_006FD740();
extern "C" void ext_006FDE80();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_0073A4B0();

extern "C" __declspec(naked) void __fastcall fn_0073A380(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0aadcbch
        mov ecx, dword ptr [esi + 0ach]
        mov byte ptr [esp + 17h], 1
        add ecx, 4
        xor edi, edi
        call ext_00726770
        mov ebx, dword ptr [esp + 18h]
        test al, al
        je fn0073A380_L466
fn0073A380_L3AD:
        mov ecx, dword ptr [esi + 0ach]
        inc edi
        add ecx, 4
        call ext_00726860
        test al, al
        je fn0073A380_L439
        mov ecx, dword ptr [esi + 0ach]
        push 0aadca8h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073A380_L42B
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn0073A380_L41D
        mov ecx, ebx
        call ext_006FDE80
        push eax
        push ebx
        mov ecx, esi
        call ext_0073A4B0
        test al, al
        je fn0073A380_L40A
        mov al, byte ptr [esp + 13h]
        mov byte ptr [esp + 13h], 1
        test al, al
        jne fn0073A380_L40F
fn0073A380_L40A:
        mov byte ptr [esp + 13h], 0
fn0073A380_L40F:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn0073A380_L41D:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn0073A380_L42B:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn0073A380_L439:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        push 0aadcbch
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn0073A380_L3AD
        test edi, edi
        jne fn0073A380_L49F
fn0073A380_L466:
        mov eax, dword ptr [esi + 1b8h]
        test eax, eax
        je fn0073A380_L49F
        mov eax, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [eax]
        cmp eax, 4
        jne fn0073A380_L49F
        mov ebp, dword ptr [esi + 1b8h]
        xor edi, edi
        test ebp, ebp
        jle fn0073A380_L49F
fn0073A380_L487:
        mov ecx, dword ptr [esi + 1c8h]
        push 0
        mov edx, dword ptr [ecx + edi*4]
        mov ecx, ebx
        push edx
        call ext_006FD740
        inc edi
        cmp edi, ebp
        jl fn0073A380_L487
fn0073A380_L49F:
        mov al, byte ptr [esp + 13h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
    }
}

// [0x0073D4B0] sub_0073D4B0 (320 bytes)
extern "C" void ext_00726B40();
extern "C" void ext_0073C2A0();
extern "C" void ext_0073C5C0();
extern "C" void ext_0079D6D0();
extern "C" void ext_0073C360();
extern "C" void ext_0073C680();
extern "C" void ext_0073D110();
extern "C" void ext_00738C70();
extern "C" void ext_0073C420();
extern "C" void ext_0073C830();
extern "C" void ext_0073C9F0();
extern "C" void ext_0073CF30();
extern "C" void ext_00726860();
extern "C" void ext_00726770();
extern "C" void ext_0073CB50();
extern "C" void ext_0073CD30();
extern "C" void ext_0073CE30();
extern "C" void ext_007268D0();
extern "C" void ext_00726840();
extern "C" void ext_00742970();
extern "C" void ext_00738CB0();
extern "C" void ext_0073A1D0();
extern "C" void ext_0073A260();

extern "C" __declspec(naked) void __fastcall fn_0073D4B0(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0
        push 0aae104h
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726B40
        mov edi, dword ptr [esp + 10h]
        mov ecx, esi
        push edi
        mov ebp, eax
        call ext_0073C2A0
        push edi
        mov ecx, esi
        call ext_0073C5C0
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je fn0073D4B0_else
        push ebx
        push edi
        mov ecx, esi
        call ext_0073C360
        push edi
        mov ecx, esi
        call ext_0073C680
        push edi
        mov ecx, esi
        call ext_0073D110
        push edi
        mov ecx, esi
        call ext_00738C70
        push edi
        mov ecx, esi
        call ext_0073C420
        push edi
        mov ecx, esi
        call ext_0073C830
        push edi
        mov ecx, esi
        call ext_0073C9F0
        push edi
        mov ecx, esi
        call ext_0073CF30
        mov ecx, dword ptr [esi + 0ach]
        push 0aae0f4h
        add ecx, 4
        mov byte ptr [esp + 18h], 0
        xor bl, bl
        call ext_00726770
        test al, al
        je fn0073D4B0_skip1
        mov ecx, dword ptr [esi + 0ach]
        mov byte ptr [esp + 14h], 1
        add ecx, 4
        call ext_00726860
        test al, al
        je fn0073D4B0_skip1
        mov bl, 1
fn0073D4B0_skip1:
        push edi
        mov ecx, esi
        call ext_0073CB50
        push edi
        mov ecx, esi
        call ext_0073CD30
        push edi
        mov ecx, esi
        call ext_0073CE30
        test bl, bl
        pop ebx
        je fn0073D4B0_skip2
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn0073D4B0_skip2:
        mov al, byte ptr [esp + 10h]
        test al, al
        je fn0073D4B0_skip3
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn0073D4B0_skip3:
        cmp ebp, 7bh
        jg fn0073D4B0_end
        push edi
        mov ecx, esi
        call ext_00742970
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
fn0073D4B0_else:
        push edi
        mov ecx, esi
        call ext_00738CB0
        push edi
        mov ecx, esi
        call ext_0073A1D0
        push edi
        mov ecx, esi
        call ext_0073A260
fn0073D4B0_end:
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
    }
}

// [0x00732460] sub_00732460 (352 bytes)
extern "C" void ext_006BC7D0();
extern "C" void ext_006D80A0();
extern "C" void ext_006E8580();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726BE0();
extern "C" void ext_0077FB40();

extern "C" __declspec(naked) void __fastcall fn_00732460(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 8be1b8h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 44h
        push ebx
        mov ebx, ecx
        push esi
        push edi
        lea ecx, [esp + 10h]
        call ext_0077FB40
        mov ecx, dword ptr [ebx + 0ach]
        push 0aad4b8h
        add ecx, 4
        mov dword ptr [esp + 5ch], 0
        call ext_00726770
        test al, al
        je fn00732460_end
        mov ecx, dword ptr [ebx + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00732460_skip
        mov ecx, dword ptr [ebx + 0ach]
        push 0aad4a4h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00732460_mid
        mov esi, dword ptr [ebx + 0ach]
        lea edi, [esp + 30h]
        add esi, 4
        mov dword ptr [esp + 0ch], 4
fn00732460_loop:
        mov ecx, esi
        call ext_00726BE0
        fstp qword ptr [edi]
        mov eax, dword ptr [esp + 0ch]
        add edi, 8
        dec eax
        mov dword ptr [esp + 0ch], eax
        jne fn00732460_loop
        mov ecx, dword ptr [ebx + 0ach]
        add ecx, 4
        call ext_00726840
fn00732460_mid:
        mov ecx, dword ptr [ebx + 0ach]
        add ecx, 4
        call ext_007268D0
fn00732460_skip:
        mov ecx, dword ptr [ebx + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 38h]
        mov dword ptr [esp + 14h], ecx
        mov ecx, dword ptr [esp + 40h]
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [esp + 3ch]
        mov dword ptr [esp + 20h], ecx
        mov ecx, dword ptr [esp + 4ch]
        mov dword ptr [esp + 18h], edx
        mov edx, dword ptr [esp + 44h]
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [esp + 48h]
        sub esp, 20h
        mov dword ptr [esp + 4ch], ecx
        mov ecx, 8
        lea esi, [esp + 30h]
        mov edi, esp
        mov dword ptr [esp + 44h], edx
        mov dword ptr [esp + 48h], eax
        rep movsd
        mov ecx, dword ptr [ebp + 8]
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8580
fn00732460_end:
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 58h], 0ffffffffh
        call ext_006D80A0
        mov ecx, dword ptr [esp + 50h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x007313F0] sub_007313F0 (352 bytes)
typedef unsigned char (__thiscall *Fn_00726770)(void*, const char*);
typedef void* (__thiscall *Fn_006D3CF0)(void*);
typedef unsigned char (__thiscall *Fn_00726860)(void*);
typedef int (__thiscall *Fn_00726B40)(void*, const char*, int);
typedef void (__thiscall *Fn_006BB750)(void*, int);
typedef void (__thiscall *Fn_0072B1E0)(void*, int);
typedef int (__thiscall *Fn_0072B1C0)(void*);
typedef unsigned char* (__thiscall *Fn_006BB7C0)(void*);
typedef unsigned int (__thiscall *Fn_0072B1D0)(void*);
typedef unsigned char (__thiscall *Fn_00726AE0)(void*);
typedef void (__thiscall *Fn_00726840)(void*);
typedef void (__thiscall *Fn_007268D0)(void*);

extern "C" void ext_006BB750();
extern "C" void ext_006BB7C0();
extern "C" void ext_006D3CF0();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726AE0();
extern "C" void ext_00726B40();
extern "C" void ext_0072B1C0();
extern "C" void ext_0072B1D0();
extern "C" void ext_0072B1E0();

#define READER(s) ((char*)(*(void**)((char*)(s) + 0xac)) + 4)

extern "C" __declspec(naked) void __fastcall fn_007313F0(void* self) {
    __asm {
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0aad34ch
        xor edi, edi
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007313F0_ret_edi
        mov ecx, dword ptr [esi + 4]
        push ebx
        call ext_006D3CF0
        mov ecx, dword ptr [esi + 0ach]
        mov ebp, eax
        add ecx, 4
        xor bl, bl
        call ext_00726860
        test al, al
        je fn007313F0_end_outer
        mov ecx, dword ptr [esi + 0ach]
        push 64h
        push 0aacd0ch
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aad344h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, ebp
        call ext_006BB750
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aa9190h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, ebp
        call ext_0072B1E0
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aad334h
        add ecx, 4
        call ext_00726B40
        test eax, eax
        jne fn007313F0_end_mid
        mov ecx, ebp
        call ext_0072B1C0
        test eax, eax
        je fn007313F0_end_mid
        mov ecx, dword ptr [esi + 0ach]
        push 0aad328h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007313F0_set_bl
        mov ecx, ebp
        call ext_006BB7C0
        mov ecx, ebp
        mov dword ptr [esp + 10h], eax
        call ext_0072B1D0
        mov ebx, eax
        test ebx, ebx
        jbe fn007313F0_loop_done
fn007313F0_loop:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esp + 10h]
        inc edi
        cmp edi, ebx
        mov byte ptr [edi + ecx - 1], al
        jb fn007313F0_loop
fn007313F0_loop_done:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007313F0_set_bl:
        mov bl, 1
fn007313F0_end_mid:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn007313F0_end_outer:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        test bl, bl
        pop ebx
        je fn007313F0_destroy
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ecx
        ret
fn007313F0_destroy:
        mov esi, dword ptr [esi + 4]
        push ebp
        mov ecx, esi
        mov edx, dword ptr [esi]
        call dword ptr [edx + 0a0h]
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        pop ecx
        ret
fn007313F0_ret_edi:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret
    }
}

// [0x00734770] sub_00734770 (368 bytes)
extern "C" void ext_006B9950();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9E60();
extern "C" void ext_006B9EC0();
extern "C" void ext_006D57D0();
extern "C" void ext_006E7460();
extern "C" void ext_006F8A70();
extern "C" void ext_006F8E50();
extern "C" void ext_00726AA0();
extern "C" void ext_00736C90();
extern "C" __declspec(naked) void __fastcall fn_00734770(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push 0x8be2fe
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xe8
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call ext_006B9D10
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0xf4], 0x0
        call ext_006F8A70
        mov ecx, dword ptr [esi + 0xac]
        push 0xb5d2c0
        add ecx, 0x4
        push 0xaad728
        mov byte ptr [esp + 0xfc], 0x1
        call ext_00726AA0
        push eax
        lea ecx, [esp + 0x8]
        call ext_006B9EC0
        lea ecx, [esp + 0x4]
        call ext_006B9950
        test al, al
        jne fn00734770_second
        lea ecx, [esp + 0x4]
        call ext_006E7460
        push eax
        lea eax, [esp + 0xa4]
        push 0xaa8704
        push eax
        call ext_006D57D0
        add esp, 0xc
        lea ecx, [esp + 0xa0]
        mov byte ptr [esp + 0xf4], 0x2
        call ext_006E7460
        push eax
        mov ecx, esi
        call ext_00736C90
        lea ecx, [esp + 0xa0]
        mov dword ptr [esp + 0x50], eax
        mov byte ptr [esp + 0xf4], 0x1
        call ext_006B9D70
    fn00734770_second:
        mov ecx, dword ptr [esi + 0xac]
        push 0xb5d2c0
        add ecx, 0x4
        push 0xaad720
        call ext_00726AA0
        push eax
        lea ecx, [esp + 0x8]
        call ext_006B9EC0
        lea ecx, [esp + 0x4]
        call ext_006B9950
        test al, al
        pop esi
        jne fn00734770_check_obj
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        push ecx
        lea ecx, [esp + 0x54]
        call ext_006B9E60
    fn00734770_check_obj:
        mov eax, dword ptr [esp + 0x4c]
        test eax, eax
        jne fn00734770_call_6f8e50
        lea ecx, [esp + 0x50]
        call ext_006B9950
        test al, al
        jne fn00734770_cleanup
    fn00734770_call_6f8e50:
        mov eax, dword ptr [esp + 0xfc]
        mov ecx, dword ptr [esp + 0xf8]
        lea edx, [esp + 0x4c]
        push edx
        push eax
        call ext_006F8E50
    fn00734770_cleanup:
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0xf0], 0x0
        call ext_006B9D70
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        mov dword ptr [esp + 0xf0], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0xe8]
        mov dword ptr fs:[0], ecx
        add esp, 0xf4
        ret 0x8
    }
}

// [0x00737A70] sub_00737A70 (368 bytes)
extern "C" void ext_006C2C60(); extern "C" void ext_006C2DE0(); extern "C" void ext_006D2370(); extern "C" void ext_006D2390(); extern "C" void ext_006D80A0(); extern "C" void ext_00782D90(); extern "C" void ext_00726DB0();
extern "C" __declspec(naked) void __fastcall fn_00737A70(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8be580h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 40h
        push esi
        mov esi, ecx
        push edi
        push 0aadaf0h
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726770
        mov edi, dword ptr [esp+58h]
        test al, al
        je l1
        mov ecx, dword ptr [esi+0ach]
        push edi
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esi+0cch]
        call ext_00782D90
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726840
    l1:
        lea ecx, [esp+28h]
        call ext_006D2370
        mov ecx, dword ptr [esi+0ach]
        lea eax, [esp+28h]
        push 3
        lea edx, [esp+2ch]
        push eax
        push edx
        add ecx, 4
        push 0aadadch
        mov dword ptr [esp+60h], 0
        call ext_00726DB0
        sub esp, 20h
        lea eax, [esp+48h]
        mov ecx, esp
        mov dword ptr [esp+78h], esp
        push eax
        call ext_006D2390
        mov ecx, edi
        call ext_006C2C60
        lea ecx, [esp+8]
        call ext_006D2370
        mov ecx, dword ptr [esi+0ach]
        lea edx, [esp+8]
        push 3
        lea eax, [esp+0ch]
        push edx
        push eax
        add ecx, 4
        push 0aadac8h
        mov byte ptr [esp+60h], 1
        call ext_00726DB0
        sub esp, 20h
        lea edx, [esp+28h]
        mov ecx, esp
        mov dword ptr [esp+78h], esp
        push edx
        call ext_006D2390
        mov ecx, edi
        call ext_006C2DE0
        mov ecx, dword ptr [esi+0ach]
        push 0aadab8h
        add ecx, 4
        call ext_00726770
        test al, al
        je l2
        mov ecx, dword ptr [esi+0ach]
        push edi
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esi+0e0h]
        call ext_00782D90
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726840
    l2:
        lea ecx, [esp+8]
        mov byte ptr [esp+50h], 0
        call ext_006D80A0
        lea ecx, [esp+28h]
        mov dword ptr [esp+50h], 0ffffffffh
        call ext_006D80A0
        mov ecx, dword ptr [esp+48h]
        pop edi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 4ch
        ret 4
    }
}

// [0x00734FA0] sub_00734FA0 (416 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BA660();
extern "C" void ext_006BC760();
extern "C" void ext_006D3A60();
extern "C" void ext_006E7460();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726AA0();
extern "C" void ext_00735140();
extern "C" __declspec(naked) void __fastcall fn_00734FA0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 008bc263h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 9ch
        push esi
        mov esi, ecx
        lea ecx, [esp + 54h]
        call ext_006B9D10
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0a8h], 0
        call ext_006B9D10
        mov ecx, dword ptr [esi + 0ach]
        push 0aad3fch
        add ecx, 4
        mov byte ptr [esp + 0ach], 1
        call ext_00726770
        test al, al
        je fn00734FA0_cleanup
        push ebx
        mov ebx, dword ptr [esp + 0b4h]
        push ebp
        push edi
fn00734FA0_loop:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 64h]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00734FA0_skip1
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        add ecx, 4
        push 0aa8e24h
        call ext_00726AA0
        push eax
        lea ecx, [esp + 18h]
        call ext_006B9EC0
        push 0aad100h
        lea ecx, [esp + 18h]
        call ext_006BA660
        test eax, eax
        sete al
        test al, al
        mov byte ptr [esp + 10h], al
        jne fn00734FA0_have
        push 0aad0f4h
        lea ecx, [esp + 18h]
        call ext_006BA660
        test eax, eax
        jne fn00734FA0_callB
fn00734FA0_have:
        mov ebp, dword ptr [esp + 10h]
        lea ecx, [esp + 60h]
        push ebp
        call ext_006E7460
        mov ecx, dword ptr [ebx]
        push eax
        call ext_006D3A60
        mov edi, eax
        push ebp
        push edi
        mov ecx, esi
        call ext_00735140
        test al, al
        jne fn00734FA0_alt
        mov ecx, dword ptr [ebx]
        push edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 90h]
        jmp fn00734FA0_callB
fn00734FA0_alt:
        push edi
        mov ecx, ebx
        call ext_006BC760
fn00734FA0_callB:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn00734FA0_skip1:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        push 0aad3fch
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn00734FA0_loop
        pop edi
        pop ebp
        pop ebx
fn00734FA0_cleanup:
        lea ecx, [esp + 8]
        mov byte ptr [esp + 0a8h], 0
        call ext_006B9D70
        lea ecx, [esp + 54h]
        mov dword ptr [esp + 0a8h], 0ffffffffh
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0a0h]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0a8h
        ret 4
    }
}

// [0x0073C830] sub_0073C830 (448 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006BC380();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D2300();
extern "C" void ext_006FC9B0();
extern "C" void ext_006FDE80();
extern "C" void ext_006FDF70();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726900();
extern "C" void ext_00726AE0();
extern "C" void ext_0078D720();

extern "C" __declspec(naked) void __fastcall fn_0073C830(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 8be811h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0ch
        push ebp
        mov ebp, ecx
        push 0aadc04h
        mov dword ptr [esp+0ch], ebp
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073C830_ret1
        mov ecx, dword ptr [ebp+0ach]
        push ebx
        push esi
        push edi
        add ecx, 4
        call ext_00726900
        mov esi, dword ptr [esp+2ch]
        push 0
        mov ecx, esi
        mov dword ptr [esp+14h], eax
        call ext_006FDF70
        mov ebx, eax
        test ebx, ebx
        mov dword ptr [esp+2ch], ebx
        jne fn0073C830_8ab
        mov ecx, esi
        call ext_006FDE80
        push eax
        mov ecx, esi
        call ext_006FDF70
        mov dword ptr [esp+2ch], eax
        mov ebx, eax
fn0073C830_8ab:
        mov ecx, ebx
        call ext_006BC380
        mov edi, eax
        test edi, edi
        jne fn0073C830_910
        push 38h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp+18h], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp+24h], eax
        je fn0073C830_8fc
        lea edi, [esi+8]
        push 4
        push 10h
        mov ecx, edi
        mov dword ptr [esi], eax
        mov dword ptr [esi+4], eax
        call ext_006D2130
        lea eax, [edi+10h]
        mov dword ptr [edi+14h], eax
        push 10h
        lea ecx, [esi+20h]
        mov byte ptr [esp+28h], 1
        call ext_0078D720
        jmp fn0073C830_8fe
fn0073C830_8fc:
        xor esi, esi
fn0073C830_8fe:
        push esi
        mov ecx, ebx
        mov dword ptr [esp+28h], -1
        mov edi, esi
        call ext_006FC9B0
fn0073C830_910:
        mov eax, dword ptr [edi+4]
        cmp eax, 2
        je fn0073C830_91d
        cmp eax, 1
        jne fn0073C830_961
fn0073C830_91d:
        mov ecx, dword ptr [esp+10h]
        lea ebp, [edi+20h]
        push ecx
        mov ecx, ebp
        call ext_006D2300
        mov eax, dword ptr [esp+10h]
        xor esi, esi
        test eax, eax
        jle fn0073C830_95d
fn0073C830_936:
        mov eax, dword ptr [esp+14h]
        mov edx, dword ptr [ebp+10h]
        mov ecx, dword ptr [eax+0ach]
        lea ebx, [edx+esi*4]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [ebx], eax
        mov eax, dword ptr [esp+10h]
        inc esi
        cmp esi, eax
        jl fn0073C830_936
        mov ebx, dword ptr [esp+2ch]
fn0073C830_95d:
        mov ebp, dword ptr [esp+14h]
fn0073C830_961:
        cmp dword ptr [edi+4], 2
        jne fn0073C830_9aa
        mov eax, dword ptr [edi+8]
        lea esi, [edi+8]
        test eax, eax
        jne fn0073C830_9aa
        push 0
        mov ecx, ebx
        call ext_006FC9B0
        test edi, edi
        mov dword ptr [esp+2ch], edi
        je fn0073C830_9aa
        lea ecx, [edi+20h]
        mov dword ptr [esp+24h], 2
        call ext_006D2160
        mov ecx, esi
        mov dword ptr [esp+24h], -1
        call ext_006D2160
        push edi
        call ext_006A5C5C
        add esp, 4
fn0073C830_9aa:
        mov ecx, dword ptr [ebp+0ach]
        add ecx, 4
        call ext_00726840
        pop edi
        pop esi
        pop ebx
        mov al, 1
        pop ebp
        mov ecx, dword ptr [esp+0ch]
        mov dword ptr fs:[0], ecx
        add esp, 18h
        ret 4
fn0073C830_ret1:
        mov ecx, dword ptr [esp+10h]
        mov al, 1
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 18h
        ret 4
    }
}

// [0x0073C680] sub_0073C680 (432 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2130();
extern "C" void ext_006D2300();
extern "C" void ext_006D91C0();
extern "C" void ext_006FC9C0();
extern "C" void ext_006FDE80();
extern "C" void ext_006FDF70();
extern "C" void ext_00726900();
extern "C" void ext_00726AE0();
extern "C" void ext_0078D720();

extern "C" __declspec(naked) void __fastcall fn_0073C680(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 08b9326h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0ch
        push ebx
        mov ebx, dword ptr [esp + 20h]
        push ebp
        push esi
        mov ebp, dword ptr [ebx + 1c4h]
        mov esi, ecx
        push 0aadc90h
        mov dword ptr [esp + 10h], esi
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 14h], ebp
        add ecx, 4
        mov byte ptr [esp + 2ch], 0
        call ext_00726770
        test al, al
        je L_7F9
        mov ecx, dword ptr [esi + 0ach]
        push edi
        add ecx, 4
        call ext_00726900
        cmp eax, ebp
        jne L_7E2
        push 0
        mov ecx, ebx
        call ext_006FDF70
        mov edi, eax
        test edi, edi
        mov dword ptr [esp + 2ch], edi
        jne L_70E
        mov ecx, ebx
        call ext_006FDE80
        push eax
        mov ecx, ebx
        call ext_006FDF70
        mov dword ptr [esp + 2ch], eax
        mov edi, eax
L_70E:
        mov ecx, edi
        call ext_006D91C0
        mov esi, eax
        test esi, esi
        jne L_775
        push 38h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 18h], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 24h], eax
        je L_763
        lea edi, [esi + 8]
        push 4
        push 10h
        mov ecx, edi
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        call ext_006D2130
        lea eax, [edi + 10h]
        mov dword ptr [edi + 14h], eax
        push 10h
        lea ecx, [esi + 20h]
        mov byte ptr [esp + 28h], 1
        call ext_0078D720
        mov edi, dword ptr [esp + 2ch]
        jmp L_765
L_763:
        xor esi, esi
L_765:
        push esi
        mov ecx, edi
        mov dword ptr [esp + 28h], 0ffffffffh
        call ext_006FC9C0
L_775:
        lea ecx, [esi + 20h]
        mov dword ptr [esi + 4], 1
        push ebp
        mov dword ptr [esi], 3
        mov dword ptr [esp + 1ch], ecx
        call ext_006D2300
        xor edi, edi
        mov byte ptr [esp + 2ch], 1
        test ebp, ebp
        jle L_7DE
        xor ebp, ebp
L_79C:
        mov ecx, dword ptr [ebx + 1d4h]
        mov esi, ebp
        add esi, ecx
        mov ecx, dword ptr [esp + 10h]
        mov ecx, dword ptr [ecx + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [esi + 8], eax
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [ebx + 1d4h]
        inc edi
        mov ecx, dword ptr [eax + 10h]
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [edx + ebp + 8]
        add ebp, 0ch
        mov dword ptr [ecx + edi*4 - 4], edx
        cmp edi, eax
        jl L_79C
        mov ebp, eax
L_7DE:
        mov esi, dword ptr [esp + 10h]
L_7E2:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov al, byte ptr [esp + 2ch]
        pop edi
        test al, al
        jne L_813
L_7F9:
        xor edx, edx
        cmp ebp, edx
        jle L_813
        xor eax, eax
        mov ecx, ebp
L_803:
        mov esi, dword ptr [ebx + 1d4h]
        add eax, 0ch
        dec ecx
        mov dword ptr [eax + esi - 4], edx
        jne L_803
L_813:
        mov ecx, dword ptr [esp + 18h]
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 18h
        ret 4
    }
}

// [0x00730670] sub_00730670 (448 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BADB0();
extern "C" void ext_006D3560();
extern "C" void ext_006E7460();
extern "C" void ext_007266C0();
extern "C" void ext_007268D0();
extern "C" void ext_00726860();
extern "C" void ext_00736CB0();
extern "C" void ext_00782D90();
extern "C" void ext_0079C220();
extern "C" void ext_0079D7A0();
extern "C" int mem_009334D8;

extern "C" __declspec(naked) void __fastcall fn_00730670(void* self) {
    __asm {
        push -1
        push 008b9073h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0a4h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ecx, [esp + 18h]
        call ext_006B9D10
        xor ebx, ebx
        lea ecx, [esp + 64h]
        mov dword ptr [esp + 0b8h], ebx
        call ext_006B9D10
        mov ecx, dword ptr [esi + 0ach]
        push 0aad264h
        add ecx, 4
        mov byte ptr [esp + 0bch], 1
        call ext_007266C0
        mov ecx, dword ptr [esi + 0b0h]
        push ebx
        mov ebp, eax
        push ebx
        mov eax, dword ptr [ecx]
        push 0aad418h
        push ebx
        mov dword ptr [esp + 20h], ebp
        call dword ptr [eax + 8]
        cmp ebp, ebx
        mov dword ptr [esp + 0ch], ebx
        jle loc_after_loop
        fild dword ptr [esp + 10h]
        push edi
        fstp qword ptr [esp + 14h]
loc_loop_top:
        fild dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 0b0h]
        push ecx
        fmul qword ptr [mem_009334D8]
        mov edx, dword ptr [ecx]
        fdiv qword ptr [esp + 18h]
        fstp dword ptr [esp]
        push 0
        push 0
        push 0
        call dword ptr [edx + 8]
        mov ecx, dword ptr [esi + 0ach]
        push 0aad264h
        add ecx, 4
        call ext_00726770
        test al, al
        je loc_next
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 20h]
        call ext_006B9EC0
        lea ecx, [esp + 1ch]
        call ext_006E7460
        mov ecx, dword ptr [esi + 4]
        push eax
        call ext_006D3560
        mov edi, eax
        push edi
        mov ecx, edi
        call ext_006BADB0
        push eax
        lea ecx, [esi + 0b8h]
        call ext_00782D90
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je loc_skip_inner
        push edi
        mov ecx, esi
        call ext_00736CB0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax + 0ch]
        mov edx, dword ptr [eax]
        push 0
        push 0
        mov ecx, eax
        call dword ptr [edx]
        push eax
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0ach]
        push eax
        call ext_0079C220
loc_skip_inner:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
loc_next:
        inc ebx
        cmp ebx, ebp
        mov dword ptr [esp + 10h], ebx
        jl loc_loop_top
        pop edi
loc_after_loop:
        call ext_0079D7A0
        mov edx, dword ptr [eax]
        push 0
        push 0
        mov ecx, eax
        call dword ptr [edx + 64h]
        lea ecx, [esp + 64h]
        mov byte ptr [esp + 0b8h], 0
        call ext_006B9D70
        lea ecx, [esp + 18h]
        mov dword ptr [esp + 0b8h], 0ffffffffh
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0b0h]
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0b0h
        ret
    }
}

// [0x00735140] sub_00735140 (448 bytes)
extern "C" void ext_00714570();
extern "C" void ext_00726B40();
extern "C" void ext_00726770();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006D80A0();
extern "C" void ext_006E7460();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726AA0();
extern "C" void ext_00726DB0();
extern "C" void ext_0072BCA0();
extern "C" __declspec(naked) void __fastcall fn_00735140(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 08be391h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 150h
        push esi
        mov esi, ecx
        lea ecx, [esp + 0d4h]
        call ext_00714570
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aad808h
        add ecx, 4
        mov dword ptr [esp + 164h], 0
        call ext_00726B40
        test eax, eax
        jle fn00735140_epi
        push ebx
        mov bl, byte ptr [esp + 16ch]
        push ebp
        push edi
        mov edi, dword ptr [esp + 170h]
        mov ebp, eax
fn00735140_loop:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad7fch
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00735140_next
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00735140_skip2
        lea ecx, [esp + 60h]
        mov byte ptr [esp + 10h], 0
        call ext_00714570
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        add ecx, 4
        push 0aad7f4h
        mov byte ptr [esp + 170h], 1
        call ext_00726AA0
        push eax
        lea ecx, [esp + 18h]
        call ext_006B9D80
        lea eax, [esp + 0e0h]
        push 10h
        lea ecx, [esp + 64h]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        push 0aac1d4h
        add ecx, 4
        mov byte ptr [esp + 178h], 2
        call ext_00726DB0
        test bl, bl
        jne fn00735140_a
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aad7ech
        add ecx, 4
        call ext_00726B40
        test eax, eax
        setne dl
        mov byte ptr [esp + 10h], dl
fn00735140_a:
        test edi, edi
        je fn00735140_b
        mov eax, dword ptr [esp + 10h]
        lea ecx, [esp + 60h]
        push eax
        push ecx
        lea ecx, [esp + 1ch]
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_0072BCA0
fn00735140_b:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
        lea ecx, [esp + 14h]
        mov byte ptr [esp + 168h], 1
        call ext_006B9D70
        lea ecx, [esp + 60h]
        mov byte ptr [esp + 168h], 0
        call ext_006D80A0
fn00735140_skip2:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn00735140_next:
        dec ebp
        jne fn00735140_loop
        pop edi
        pop ebp
        pop ebx
fn00735140_epi:
        lea ecx, [esp + 0d4h]
        mov dword ptr [esp + 15ch], -1
        call ext_006D80A0
        mov ecx, dword ptr [esp + 154h]
        mov al, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 15ch
        ret 8
    }
}

// [0x0073C110] sub_0073C110 (400 bytes)
// [VA] [0x0073C110] sub_0073C110 (400 bytes)
extern "C" void ext_006D80A0(); extern "C" void ext_007008C0(); extern "C" void ext_00700980(); extern "C" void ext_00700A40(); extern "C" void ext_00700AC0(); extern "C" void ext_00700B10(); extern "C" void ext_00700B60(); extern "C" void ext_00726B40(); extern "C" void ext_00726BE0(); extern "C" void ext_00726C20(); extern "C" void ext_0077FB40();
extern "C" __declspec(naked) void __fastcall fn_0073C110(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 8bfd88h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 20h
        push esi
        mov esi, ecx
        push edi
        push 0
        mov ecx, dword ptr [esi + 0ach]
        push 0aadfa4h
        add ecx, 4
        call ext_00726B40
        mov edi, dword ptr [ebp + 8]
        cmp eax, 0c9h
        jle L_24a
        mov ecx, dword ptr [esi + 0ach]
        push 0aa8cech
        add ecx, 4
        call ext_00726770
        test al, al
        je L_1de
        lea ecx, [esp + 8]
        call ext_0077FB40
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 30h], 0
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 8]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 10h]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 18h]
        add ecx, 4
        call ext_00726840
        lea eax, [esp + 8]
        mov ecx, edi
        push eax
        call ext_00700A40
        lea ecx, [esp + 8]
        mov dword ptr [esp + 30h], 0ffffffffh
        call ext_006D80A0
    L_1de:
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aa8cf4h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_00700AC0
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aadf98h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_00700B10
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aa8d0ch
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_00700B60
    L_24a:
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aab9d8h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_00700980
        mov ecx, dword ptr [esi + 0ach]
        push 1
        add ecx, 4
        push 0aadf8ch
        call ext_00726B40
        test eax, eax
        setne cl
        push ecx
        mov ecx, edi
        call ext_007008C0
        mov ecx, dword ptr [esp + 28h]
        pop edi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00731A10] sub_00731A10 (464 bytes)
extern "C" int mem_008BE149;
extern "C" int mem_00B5D2C0;
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9E60();
extern "C" void ext_006BA7E0();
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_006C2990();
extern "C" void ext_006C30A0();
extern "C" void ext_006CD320();
extern "C" void ext_006E7460();
extern "C" void ext_0070CE90();
extern "C" void ext_0070EA70();
extern "C" void ext_0070EA90();
extern "C" void ext_0070EAB0();
extern "C" void ext_0070EB00();
extern "C" void ext_00731A10();

extern "C" __declspec(naked) void __fastcall fn_00731A10(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push offset mem_008BE149
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 138h
        push ebx
        push ebp
        mov dword ptr [esp + 0ch], ecx
        push esi
        mov ecx, dword ptr [esp + 158h]
        push edi
        call ext_006C30A0
        mov edi, dword ptr [esp + 158h]
        mov ebp, eax
        xor ebx, ebx
        cmp ebp, ebx
        je fn00731A10_L731B80
        lea ecx, [esp + 64h]
        call ext_006B9D10
        lea ecx, [esp + 18h]
        mov dword ptr [esp + 150h], ebx
        call ext_006B9D10
        mov ecx, ebp
        mov byte ptr [esp + 150h], 1
        call ext_006CD320
        cmp eax, ebx
        mov dword ptr [esp + 10h], eax
        jle fn00731A10_L731B5B
fn00731A10_L731A86:
        push ebx
        mov ecx, ebp
        call ext_0070CE90
        mov esi, eax
        lea eax, [esp + 0b0h]
        push eax
        mov ecx, esi
        call ext_0070EA90
        push eax
        lea ecx, [esp + 68h]
        mov byte ptr [esp + 154h], 2
        call ext_006B9E60
        lea ecx, [esp + 0b0h]
        mov byte ptr [esp + 150h], 1
        call ext_006B9D70
        lea ecx, [esp + 0fch]
        push ecx
        mov ecx, esi
        call ext_0070EB00
        push eax
        lea ecx, [esp + 1ch]
        mov byte ptr [esp + 154h], 3
        call ext_006B9E60
        lea ecx, [esp + 0fch]
        mov byte ptr [esp + 150h], 1
        call ext_006B9D70
        push 0
        push 1
        lea ecx, [esp + 6ch]
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_006C2990
        test eax, eax
        je fn00731A10_L731B1B
        push eax
        mov ecx, esi
        call ext_0070EA70
fn00731A10_L731B1B:
        push offset mem_00B5D2C0
        lea ecx, [esp + 1ch]
        call ext_006BA7E0
        test al, al
        je fn00731A10_L731B4E
        push 0
        push 1
        lea ecx, [esp + 20h]
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_006C2990
        test eax, eax
        je fn00731A10_L731B4E
        push eax
        mov ecx, esi
        call ext_0070EAB0
fn00731A10_L731B4E:
        mov eax, dword ptr [esp + 10h]
        inc ebx
        cmp ebx, eax
        jl fn00731A10_L731A86
fn00731A10_L731B5B:
        lea ecx, [esp + 18h]
        mov byte ptr [esp + 150h], 0
        call ext_006B9D70
        lea ecx, [esp + 64h]
        mov dword ptr [esp + 150h], -1
        call ext_006B9D70
fn00731A10_L731B80:
        mov ebx, dword ptr [esp + 15ch]
        xor esi, esi
        push esi
        mov ecx, ebx
        call ext_006C2860
        test eax, eax
        jle fn00731A10_L731BB6
fn00731A10_L731B95:
        push esi
        mov ecx, ebx
        call ext_006C28D0
        mov ecx, dword ptr [esp + 14h]
        push eax
        push edi
        call ext_00731A10
        push 0
        mov ecx, ebx
        inc esi
        call ext_006C2860
        cmp esi, eax
        jl fn00731A10_L731B95
fn00731A10_L731BB6:
        mov ecx, dword ptr [esp + 148h]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 144h
        ret 8
    }
}

// [0x0073CF30] sub_0073CF30 (480 bytes)
extern "C" void ext_00726AE0();
extern "C" __declspec(naked) void __fastcall fn_0073CF30(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        push 0aae0c4h
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726770
        mov edi, dword ptr [esp + 0ch]
        test al, al
        je fn0073CF30_a
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [edi + 1b0h], eax
fn0073CF30_a:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae0bch
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073CF30_b
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        cmp eax, 1
        sete al
        mov byte ptr [edi + 1c0h], al
fn0073CF30_b:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae0b4h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073CF30_c
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        cmp eax, 1
        sete cl
        mov byte ptr [edi + 1c2h], cl
fn0073CF30_c:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae0ach
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073CF30_d
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [edi + 1b8h], eax
fn0073CF30_d:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae0a4h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073CF30_e
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [edi + 1a8h], eax
fn0073CF30_e:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae094h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073CF30_f
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [edi + 1b4h], eax
fn0073CF30_f:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae08ch
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073CF30_g
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        cmp eax, 1
        sete dl
        mov byte ptr [edi + 1c1h], dl
fn0073CF30_g:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae084h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073CF30_h
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        cmp eax, 1
        sete al
        mov byte ptr [edi + 1c3h], al
fn0073CF30_h:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae07ch
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073CF30_i
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [edi + 1bch], eax
fn0073CF30_i:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae074h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073CF30_j
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [edi + 1ach], eax
fn0073CF30_j:
        pop edi
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x0073CB50] sub_0073CB50 (480 bytes)
extern "C" void ext_006D8830();
extern "C" void ext_00726AA0();
extern "C" void ext_00726B40();

extern "C" __declspec(naked) void __fastcall fn_0073CB50(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0b5d2c0h
        mov ecx, dword ptr [esi + 0ach]
        push 0aadc2ch
        add ecx, 4
        call ext_00726AA0
        mov edi, eax
        mov ebp, 4
        test edi, edi
        je fn0073CB50_c21
        mov esi, 0aadfe0h
        mov ecx, edi
fn0073CB50_l1:
        mov al, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov dl, al
        cmp al, bl
        jne fn0073CB50_n1
        test dl, dl
        je fn0073CB50_e1
        mov al, byte ptr [ecx + 1]
        mov bl, byte ptr [esi + 1]
        mov dl, al
        cmp al, bl
        jne fn0073CB50_n1
        add ecx, 2
        add esi, 2
        test dl, dl
        jne fn0073CB50_l1
fn0073CB50_e1:
        xor ecx, ecx
        jmp fn0073CB50_c1
fn0073CB50_n1:
        sbb ecx, ecx
        sbb ecx, -1
fn0073CB50_c1:
        test ecx, ecx
        jne fn0073CB50_b
        mov ecx, dword ptr [esp + 14h]
        mov ebp, 1
        push ebp
        call ext_006D8830
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
fn0073CB50_b:
        mov esi, 0aadfd4h
        mov eax, edi
fn0073CB50_l2:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [esi]
        mov cl, dl
        cmp dl, bl
        jne fn0073CB50_n2
        test cl, cl
        je fn0073CB50_e2
        mov dl, byte ptr [eax + 1]
        mov bl, byte ptr [esi + 1]
        mov cl, dl
        cmp dl, bl
        jne fn0073CB50_n2
        add eax, 2
        add esi, 2
        test cl, cl
        jne fn0073CB50_l2
fn0073CB50_e2:
        xor eax, eax
        jmp fn0073CB50_c2
fn0073CB50_n2:
        sbb eax, eax
        sbb eax, -1
fn0073CB50_c2:
        test eax, eax
        jne fn0073CB50_d10
        mov ecx, dword ptr [esp + 14h]
        mov ebp, 2
        push ebp
        call ext_006D8830
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
fn0073CB50_c21:
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aae028h
        add ecx, 4
        call ext_00726B40
        cmp eax, 1
        jne fn0073CB50_c53
        mov ecx, dword ptr [esp + 14h]
        mov ebp, 2
        push ebp
        call ext_006D8830
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
fn0073CB50_c53:
        cmp eax, 2
        je fn0073CB50_d0b
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aae01ch
        add ecx, 4
        call ext_00726AA0
        mov edi, eax
        mov ebp, 2
        test edi, edi
        je fn0073CB50_d10
        mov esi, 0aadfe0h
        mov ecx, edi
fn0073CB50_l3:
        mov al, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov dl, al
        cmp al, bl
        jne fn0073CB50_n3
        test dl, dl
        je fn0073CB50_e3
        mov al, byte ptr [ecx + 1]
        mov bl, byte ptr [esi + 1]
        mov dl, al
        cmp al, bl
        jne fn0073CB50_n3
        add ecx, 2
        add esi, 2
        test dl, dl
        jne fn0073CB50_l3
fn0073CB50_e3:
        xor ecx, ecx
        jmp fn0073CB50_c3
fn0073CB50_n3:
        sbb ecx, ecx
        sbb ecx, -1
fn0073CB50_c3:
        test ecx, ecx
        jne fn0073CB50_e
        mov ecx, dword ptr [esp + 14h]
        mov ebp, 2
        push ebp
        call ext_006D8830
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
fn0073CB50_e:
        mov esi, 0aae014h
        mov eax, edi
fn0073CB50_l4:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [esi]
        mov cl, dl
        cmp dl, bl
        jne fn0073CB50_n4
        test cl, cl
        je fn0073CB50_e4
        mov dl, byte ptr [eax + 1]
        mov bl, byte ptr [esi + 1]
        mov cl, dl
        cmp dl, bl
        jne fn0073CB50_n4
        add eax, 2
        add esi, 2
        test cl, cl
        jne fn0073CB50_l4
fn0073CB50_e4:
        xor eax, eax
        jmp fn0073CB50_c4
fn0073CB50_n4:
        sbb eax, eax
        sbb eax, -1
fn0073CB50_c4:
        test eax, eax
        jne fn0073CB50_d10
fn0073CB50_d0b:
        mov ebp, 3
fn0073CB50_d10:
        mov ecx, dword ptr [esp + 14h]
        push ebp
        call ext_006D8830
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x007391F0] sub_007391F0 (496 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2130();
extern "C" void ext_006D2170();
extern "C" void ext_00726AE0();
extern "C" void ext_00726860();
extern "C" void ext_00726B40();
extern "C" void ext_00726AA0();
extern "C" void ext_00726900();
extern "C" void ext_007268D0();
extern "C" void ext_00743480();
extern "C" void ext_007435A0();

extern "C" __declspec(naked) void __fastcall fn_007391F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8be636h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push 0aadbc8h
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007391F0_ret_early
        push ebx
        push ebp
        push edi
fn007391F0_retry:
        push 38h
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr [esp + 20h], ebx
        je fn007391F0_null
        lea ebp, [edi + 8]
        push 4
        push 10h
        mov ecx, ebp
        mov dword ptr [edi], ebx
        mov dword ptr [edi + 4], ebx
        call ext_006D2130
        lea eax, [ebp + 10h]
        mov dword ptr [ebp + 14h], eax
        lea ebp, [edi + 20h]
        push 4
        push 10h
        mov ecx, ebp
        mov byte ptr [esp + 28h], 1
        call ext_006D2130
        lea ecx, [ebp + 10h]
        mov dword ptr [ebp + 14h], ecx
        jmp fn007391F0_after_alloc
fn007391F0_null:
        xor edi, edi
fn007391F0_after_alloc:
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 20h], 0ffffffffh
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn007391F0_skip_a
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push 0aacd0ch
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aadc2ch
        add ecx, 4
        call ext_00726AA0
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aadc10h
        add ecx, 4
        mov ebp, eax
        call ext_00726AA0
        push ebp
        mov ebx, eax
        call ext_00743480
        push ebx
        mov dword ptr [edi], eax
        call ext_007435A0
        add esp, 8
        mov dword ptr [edi + 4], eax
        mov ecx, dword ptr [esi + 0ach]
        push 0aadc04h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007391F0_skip_b
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726900
        test eax, eax
        lea ebx, [edi + 20h]
        jle fn007391F0_loop_end
        mov ebp, eax
fn007391F0_loop:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [ebx]
        lea edx, [esp + 10h]
        mov ecx, ebx
        push edx
        push eax
        call ext_006D2170
        dec ebp
        jne fn007391F0_loop
fn007391F0_loop_end:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007391F0_skip_b:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn007391F0_skip_a:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 14h], edi
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [ecx]
        push edx
        call ext_006D2170
        mov ecx, dword ptr [esi + 0ach]
        push 0aadbc8h
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn007391F0_retry
        pop edi
        pop ebp
        pop ebx
        mov al, 1
        pop esi
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        add esp, 14h
        ret 4
fn007391F0_ret_early:
        mov ecx, dword ptr [esp + 0ch]
        mov al, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 14h
        ret 4
    }
}

// [0x00739E90] sub_00739E90 (496 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2130();
extern "C" void ext_006D2170();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726900();
extern "C" void ext_00726AA0();
extern "C" void ext_00726AE0();
extern "C" void ext_00726B40();
extern "C" void ext_00743480();
extern "C" void ext_007435A0();

extern "C" __declspec(naked) void __fastcall fn_00739E90(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8be636h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push 0aadb60h
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je near ptr fn00739E90_ret0
        push ebx
        push ebp
        push edi
fn00739E90_38:
        push 38h
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr [esp + 20h], ebx
        je short fn00739E90_nul
        lea ebp, [edi + 8]
        push 4
        push 10h
        mov ecx, ebp
        mov dword ptr [edi], ebx
        mov dword ptr [edi + 4], ebx
        call ext_006D2130
        lea eax, [ebp + 10h]
        mov dword ptr [ebp + 14h], eax
        lea ebp, [edi + 20h]
        push 4
        push 10h
        mov ecx, ebp
        mov byte ptr [esp + 28h], 1
        call ext_006D2130
        lea ecx, [ebp + 10h]
        mov dword ptr [ebp + 14h], ecx
        jmp short fn00739E90_s1
fn00739E90_nul:
        xor edi, edi
fn00739E90_s1:
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 20h], 0ffffffffh
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je near ptr fn00739E90_s2
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push 0aacd0ch
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aadc2ch
        add ecx, 4
        call ext_00726AA0
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aadc10h
        add ecx, 4
        mov ebp, eax
        call ext_00726AA0
        push ebp
        mov ebx, eax
        call ext_00743480
        push ebx
        mov dword ptr [edi], eax
        call ext_007435A0
        add esp, 8
        mov dword ptr [edi + 4], eax
        mov ecx, dword ptr [esi + 0ach]
        push 0aadc90h
        add ecx, 4
        call ext_00726770
        test al, al
        je short fn00739E90_s3
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726900
        test eax, eax
        lea ebx, [edi + 20h]
        jle short fn00739E90_s4
        mov ebp, eax
fn00739E90_loop:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [ebx]
        lea edx, [esp + 10h]
        mov ecx, ebx
        push edx
        push eax
        call ext_006D2170
        dec ebp
        jne short fn00739E90_loop
fn00739E90_s4:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn00739E90_s3:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn00739E90_s2:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 14h], edi
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [ecx]
        push edx
        call ext_006D2170
        mov ecx, dword ptr [esi + 0ach]
        push 0aadb60h
        add ecx, 4
        call ext_00726770
        test al, al
        jne near ptr fn00739E90_38
        pop edi
        pop ebp
        pop ebx
        mov al, 1
        pop esi
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        add esp, 14h
        ret 4
fn00739E90_ret0:
        mov ecx, dword ptr [esp + 0ch]
        mov al, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 14h
        ret 4
    }
}

// [0x0073C420] sub_0073C420 (416 bytes)
extern "C" __declspec(naked) void __fastcall fn_0073C420(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [ebp+0ach]
        call ext_0079D6D0
        test al, al
        jne Lgo
        mov al, 1
        pop ebp
        ret 4
Lgo:
        mov ecx, dword ptr [ebp+0ach]
        push ebx
        push esi
        push edi
        push 0b5d2c0h
        push 0aadfech
        add ecx, 4
        call ext_00726AA0
        mov ebx, dword ptr [esp+14h]
        mov edi, eax
        test edi, edi
        je Lsec
        mov esi, 0aadfe0h
        mov ecx, edi
L1a:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L1d
        test dl, dl
        je L1c
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L1d
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L1a
L1c:
        xor ecx, ecx
        jmp L1e
L1d:
        sbb ecx, ecx
        sbb ecx, -1
L1e:
        test ecx, ecx
        jne Lb
        push 1
        jmp Lcall
Lb:
        mov esi, 0aadfd4h
        mov ecx, edi
L2a:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L2d
        test dl, dl
        je L2c
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L2d
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L2a
L2c:
        xor ecx, ecx
        jmp L2e
L2d:
        sbb ecx, ecx
        sbb ecx, -1
L2e:
        test ecx, ecx
        jne Lc
        push 3
        jmp Lcall
Lc:
        mov esi, 0aadfcch
        mov eax, edi
L3a:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L3d
        test cl, cl
        je L3c
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne L3d
        add eax, 2
        add esi, 2
        test cl, cl
        jne L3a
L3c:
        xor eax, eax
        jmp L3e
L3d:
        sbb eax, eax
        sbb eax, -1
L3e:
        test eax, eax
        jne Lsec
        push 4
Lcall:
        mov ecx, ebx
        call ext_006D8580
Lsec:
        mov ecx, dword ptr [ebp+0ach]
        push 0b5d2c0h
        push 0aadd14h
        add ecx, 4
        call ext_00726AA0
        mov edi, eax
        test edi, edi
        je Lend
        mov esi, 0aadfd4h
        mov ecx, edi
L4a:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L4d
        test dl, dl
        je L4c
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L4d
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L4a
L4c:
        xor ecx, ecx
        jmp L4e
L4d:
        sbb ecx, ecx
        sbb ecx, -1
L4e:
        test ecx, ecx
        jne Ld
        push 3
        mov ecx, ebx
        call ext_006D8730
        pop edi
        pop esi
        pop ebx
        mov al, 1
        pop ebp
        ret 4
Ld:
        mov esi, 0aadfc4h
        mov eax, edi
L5a:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L5d
        test cl, cl
        je L5c
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne L5d
        add eax, 2
        add esi, 2
        test cl, cl
        jne L5a
L5c:
        xor eax, eax
        jmp L5e
L5d:
        sbb eax, eax
        sbb eax, -1
L5e:
        test eax, eax
        jne Lend
        push 4
        mov ecx, ebx
        call ext_006D8730
Lend:
        pop edi
        pop esi
        pop ebx
        mov al, 1
        pop ebp
        ret 4
    }
}

// [0x007325C0] sub_007325C0 (544 bytes)
extern "C" __declspec(naked) void __fastcall fn_007325C0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8h
        push -1
        push 8be1b8h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 44h
        push ebx
        mov ebx, ecx
        push esi
        push edi
        lea ecx, [esp+10h]
        call ext_0077FB40
        mov ecx, dword ptr [ebx+0ach]
        push 0aad510h
        add ecx, 4
        mov dword ptr [esp+5ch], 0
        call ext_00726770
        test al, al
        je fn007325C0_fail1
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn007325C0_fail2
        mov ecx, dword ptr [ebx+0ach]
        push 0
        add ecx, 4
        push 0aad504h
        call ext_00726B40
        mov esi, dword ptr [ebp+8]
        test eax, eax
        setne al
        push eax
        mov ecx, esi
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8600
        mov ecx, dword ptr [ebx+0ach]
        push 0
        push 0aad4fch
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, esi
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E86A0
        mov ecx, dword ptr [ebx+0ach]
        push 0
        push 0
        push 0aad4f0h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E86C0
        mov ecx, dword ptr [ebx+0ach]
        push 0
        push 0
        push 0aad4e4h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E86F0
        mov ecx, dword ptr [ebx+0ach]
        push 0
        push 0
        push 0aad4dch
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8750
        mov ecx, dword ptr [ebx+0ach]
        push 0aad4d0h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007325C0_skip_arr
        mov esi, dword ptr [ebx+0ach]
        lea edi, [esp+30h]
        add esi, 4
        mov dword ptr [esp+0ch], 4
fn007325C0_loop:
        mov ecx, esi
        call ext_00726BE0
        fstp qword ptr [edi]
        mov eax, dword ptr [esp+0ch]
        add edi, 8
        dec eax
        mov dword ptr [esp+0ch], eax
        jne fn007325C0_loop
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726840
fn007325C0_skip_arr:
        mov ecx, dword ptr [esp+30h]
        mov edx, dword ptr [esp+34h]
        mov eax, dword ptr [esp+38h]
        mov dword ptr [esp+10h], ecx
        mov ecx, dword ptr [esp+3ch]
        mov dword ptr [esp+14h], edx
        mov edx, dword ptr [esp+40h]
        mov dword ptr [esp+18h], eax
        mov eax, dword ptr [esp+44h]
        sub esp, 20h
        mov dword ptr [esp+3ch], ecx
        mov ecx, 8
        lea esi, [esp+30h]
        mov edi, esp
        mov dword ptr [esp+40h], edx
        mov dword ptr [esp+44h], eax
        rep movsd
        mov ecx, dword ptr [ebp+8]
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8620
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_007268D0
fn007325C0_fail2:
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726840
fn007325C0_fail1:
        lea ecx, [esp+10h]
        mov dword ptr [esp+58h], -1
        call ext_006D80A0
        mov ecx, dword ptr [esp+50h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00730AC0] sub_00730AC0 (544 bytes)
extern "C" void ext_006B9D10(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9EC0(); extern "C" void ext_006E7410(); extern "C" void ext_006E7460(); extern "C" void ext_00722E20(); extern "C" void ext_00722F80(); extern "C" void ext_00723490(); extern "C" void ext_00723920(); extern "C" void ext_00726610(); extern "C" void ext_00728D40(); extern "C" void ext_00728D50(); extern "C" void ext_00730CE0(); extern "C" void ext_00731550();

extern "C" __declspec(naked) void __fastcall fn_00730AC0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 08be071h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0fe4h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0aad2b4h
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00730AC0_c82
        lea ecx, [esp + 0a8h]
        call ext_00722E20
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 0ffch], 0
        call ext_006B9D10
        lea ecx, [esp + 5ch]
        mov byte ptr [esp + 0ffch], 1
        call ext_006B9D10
        mov ecx, dword ptr [esi + 0ach]
        mov byte ptr [esp + 0ffch], 2
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 14h]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 10h]
        call ext_006E7460
        mov ecx, dword ptr [esi + 0ach]
        push eax
        add ecx, 4
        call ext_00726610
        push eax
        lea ecx, [esp + 60h]
        call ext_006B9EC0
        push 0
        push 1
        push 0
        lea ecx, [esp + 68h]
        call ext_006E7460
        push eax
        lea ecx, [esp + 0b8h]
        call ext_00723490
        mov edi, dword ptr [esp + 1008h]
        mov ebp, dword ptr [esp + 1004h]
        test al, al
        je fn00730AC0_bcc
        push edi
        lea eax, [esp + 0ach]
        push ebp
        push eax
        mov ecx, esi
        call ext_00730CE0
        lea ecx, [esp + 0a8h]
        mov bl, al
        call ext_00723920
        jmp fn00730AC0_c47
fn00730AC0_bcc:
        mov eax, dword ptr [esi + 0ach]
        mov cl, byte ptr [eax + 18h]
        test cl, cl
        je fn00730AC0_bfe
        test eax, eax
        je fn00730AC0_bee
        add eax, 4
        push edi
        push ebp
        push eax
        mov ecx, esi
        call ext_00730CE0
        mov bl, al
        jmp fn00730AC0_c47
fn00730AC0_bee:
        xor eax, eax
        push edi
        push ebp
        push eax
        mov ecx, esi
        call ext_00730CE0
        mov bl, al
        jmp fn00730AC0_c47
fn00730AC0_bfe:
        lea ecx, [esp + 0a8h]
        call ext_00728D40
        test eax, eax
        je fn00730AC0_c2e
        cmp eax, 3
        lea ecx, [esp + 0a8h]
        je fn00730AC0_c24
        call ext_00728D50
        push eax
        push 7
        jmp fn00730AC0_c3d
fn00730AC0_c24:
        call ext_00728D50
        push eax
        push 3
        jmp fn00730AC0_c3d
fn00730AC0_c2e:
        lea ecx, [esp + 0a8h]
        call ext_00728D50
        push eax
        push 0
fn00730AC0_c3d:
        lea ecx, [esi + 8]
        call ext_006E7410
        xor bl, bl
fn00730AC0_c47:
        lea ecx, [esp + 5ch]
        mov byte ptr [esp + 0ffch], 1
        call ext_006B9D70
        lea ecx, [esp + 10h]
        mov byte ptr [esp + 0ffch], 0
        call ext_006B9D70
        lea ecx, [esp + 0a8h]
        mov dword ptr [esp + 0ffch], 0ffffffffh
        call ext_00722F80
        jmp fn00730AC0_cad
fn00730AC0_c82:
        mov eax, dword ptr [esi + 0ach]
        test eax, eax
        je fn00730AC0_c91
        add eax, 4
        jmp fn00730AC0_c93
fn00730AC0_c91:
        xor eax, eax
fn00730AC0_c93:
        mov edi, dword ptr [esp + 1008h]
        mov ebp, dword ptr [esp + 1004h]
        push edi
        push ebp
        push eax
        mov ecx, esi
        call ext_00730CE0
        mov bl, al
fn00730AC0_cad:
        test bl, bl
        je fn00730AC0_cbc
        push edi
        push ebp
        mov ecx, esi
        call ext_00731550
        jmp fn00730AC0_cbe
fn00730AC0_cbc:
        mov al, bl
fn00730AC0_cbe:
        mov ecx, dword ptr [esp + 0ff4h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0ff0h
        ret 8
    }
}

// [0x007336A0] sub_007336A0 (576 bytes)
extern "C" void ext_006B9950(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9D80(); extern "C" void ext_006E7460();
extern "C" void ext_006F7700(); extern "C" void ext_006F7710(); extern "C" void ext_006F7770(); extern "C" void ext_00726690();
extern "C" void ext_007338E0();
extern "C" __declspec(naked) void __fastcall fn_007336A0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0
        _emit 0
        _emit 0
        _emit 0
        push -1
        push 8be2d3h
        push eax
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0
        _emit 0
        _emit 0
        _emit 0
        sub esp, 9ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0aad6ach
        mov ecx, dword ptr [esi + 0ach]
        mov bl, 1
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007336A0_L743
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 18h]
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 0b4h], 0
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726690
        lea ecx, [esp + 14h]
        call ext_006B9950
        test al, al
        jne fn007336A0_L733728
        xor bl, bl
fn007336A0_L733728:
        or ebp, -1
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 0b4h], ebp
        call ext_006B9D70
        test bl, bl
        je fn007336A0_L7E2
fn007336A0_L743:
        mov eax, dword ptr [esp + 0c0h]
        xor edi, edi
        push eax
        call ext_006F7700
        mov ecx, dword ptr [esi + 0ach]
        add esp, 4
        add ecx, 4
        mov ebx, eax
        push 0aad6ach
        call ext_00726770
        test al, al
        je fn007336A0_L7C3
        mov ebp, dword ptr [esp + 0bch]
fn007336A0_L779:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn007336A0_L7B7
        cmp edi, ebx
        jge fn007336A0_L7A9
        mov ecx, dword ptr [esp + 0c0h]
        push edi
        push ecx
        call ext_006F7710
        add esp, 8
        mov ecx, esi
        push eax
        push ebp
        call ext_007338E0
fn007336A0_L7A9:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn007336A0_L7B7:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        push 0aad6ach
        add ecx, 4
        inc edi
        call ext_00726770
        test al, al
        jne fn007336A0_L779
        jmp fn007336A0_L7C3
fn007336A0_L7E2:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad6ach
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007336A0_L7C3
        mov edi, dword ptr [esp + 0bch]
fn007336A0_L804:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 64h]
        call ext_006B9D80
        lea edx, [esp + 10h]
        lea eax, [esp + 0c0h]
        push edx
        push eax
        push 1
        lea ecx, [esp + 6ch]
        mov dword ptr [esp + 0c0h], 1
        call ext_006E7460
        push eax
        call ext_006F7770
        add esp, 10h
        test al, al
        je fn007336A0_L88A
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn007336A0_L88A
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 0c0h]
        push ecx
        push edx
        call ext_006F7710
        add esp, 8
        mov ecx, esi
        push eax
        push edi
        call ext_007338E0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn007336A0_L88A:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 60h]
        mov dword ptr [esp + 0b4h], ebp
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0ach]
        push 0aad6ach
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn007336A0_L804
fn007336A0_L7C3:
        mov ecx, dword ptr [esp + 0ach]
        pop edi
        pop esi
        pop ebp
        pop ebx
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0
        _emit 0
        _emit 0
        _emit 0
        add esp, 0a8h
        ret 8
    }
}

// [0x00734530] sub_00734530 (576 bytes)
extern "C" void ext_006B9950(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9D80(); extern "C" void ext_006E7460();
extern "C" void ext_006F7700(); extern "C" void ext_006F7710(); extern "C" void ext_006F7770(); extern "C" void ext_00726690();
extern "C" void ext_00734770();
extern "C" __declspec(naked) void __fastcall fn_00734530(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0
        _emit 0
        _emit 0
        _emit 0
        push -1
        push 8be2d3h
        push eax
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0
        _emit 0
        _emit 0
        _emit 0
        sub esp, 9ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0aad6ach
        mov ecx, dword ptr [esi + 0ach]
        mov bl, 1
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00734530_L743
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 18h]
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 0b4h], 0
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726690
        lea ecx, [esp + 14h]
        call ext_006B9950
        test al, al
        jne fn00734530_L733728
        xor bl, bl
fn00734530_L733728:
        or ebp, -1
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 0b4h], ebp
        call ext_006B9D70
        test bl, bl
        je fn00734530_L7E2
fn00734530_L743:
        mov eax, dword ptr [esp + 0c0h]
        xor edi, edi
        push eax
        call ext_006F7700
        mov ecx, dword ptr [esi + 0ach]
        add esp, 4
        add ecx, 4
        mov ebx, eax
        push 0aad6ach
        call ext_00726770
        test al, al
        je fn00734530_L7C3
        mov ebp, dword ptr [esp + 0bch]
fn00734530_L779:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00734530_L7B7
        cmp edi, ebx
        jge fn00734530_L7A9
        mov ecx, dword ptr [esp + 0c0h]
        push edi
        push ecx
        call ext_006F7710
        add esp, 8
        mov ecx, esi
        push eax
        push ebp
        call ext_00734770
fn00734530_L7A9:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn00734530_L7B7:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        push 0aad6ach
        add ecx, 4
        inc edi
        call ext_00726770
        test al, al
        jne fn00734530_L779
        jmp fn00734530_L7C3
fn00734530_L7E2:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad6ach
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00734530_L7C3
        mov edi, dword ptr [esp + 0bch]
fn00734530_L804:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 64h]
        call ext_006B9D80
        lea edx, [esp + 10h]
        lea eax, [esp + 0c0h]
        push edx
        push eax
        push 1
        lea ecx, [esp + 6ch]
        mov dword ptr [esp + 0c0h], 1
        call ext_006E7460
        push eax
        call ext_006F7770
        add esp, 10h
        test al, al
        je fn00734530_L88A
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00734530_L88A
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 0c0h]
        push ecx
        push edx
        call ext_006F7710
        add esp, 8
        mov ecx, esi
        push eax
        push edi
        call ext_00734770
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn00734530_L88A:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 60h]
        mov dword ptr [esp + 0b4h], ebp
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0ach]
        push 0aad6ach
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn00734530_L804
fn00734530_L7C3:
        mov ecx, dword ptr [esp + 0ach]
        pop edi
        pop esi
        pop ebp
        pop ebx
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0
        _emit 0
        _emit 0
        _emit 0
        add esp, 0a8h
        ret 8
    }
}

// [0x00732CC0] sub_00732CC0 (592 bytes)
extern "C" void ext_006B9D10(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9EC0(); extern "C" void ext_006BA260();
extern "C" void ext_006BC440(); extern "C" void ext_006BC460(); extern "C" void ext_006D2130(); extern "C" void ext_006D2160();
extern "C" void ext_006D2170(); extern "C" void ext_006E7460(); extern "C" void ext_006F74E0(); extern "C" void ext_006F7550();
extern "C" void ext_00715550(); extern "C" void ext_00732F10();

extern "C" __declspec(naked) void __fastcall fn_00732CC0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 8be240h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 68h
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 24h]
        call ext_006B9D10
        push 4
        push 10h
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 80h], 0
        call ext_006D2130
        lea eax, [esp + 1ch]
        mov dword ptr [esp + 20h], eax
        mov ecx, dword ptr [esi + 0ach]
        mov byte ptr [esp + 78h], 1
        xor edi, edi
        call ext_0079D6D0
        test al, al
        jne fn00732CC0_L732D4C
        lea ecx, [esp + 0ch]
        mov byte ptr [esp + 78h], al
        call ext_006D2160
        lea ecx, [esp + 24h]
        mov dword ptr [esp + 78h], 0ffffffffh
        call ext_006B9D70
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 68h]
        mov dword ptr fs:[0], ecx
        add esp, 74h
        ret 4
fn00732CC0_L732D4C:
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push ebp
        push 0aad244h
        add ecx, 4
        call ext_00726770
        mov ebp, dword ptr [esp + 88h]
        test al, al
        je fn00732CC0_L732E65
fn00732CC0_L732D70:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00732CC0_L732E3C
        mov ecx, dword ptr [esi + 0ach]
        push 0aad564h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00732CC0_L732DC5
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 30h]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        jmp fn00732CC0_L732DE2
fn00732CC0_L732DC5:
        push 0aaa374h
        lea ecx, [esp + 30h]
        call ext_006B9EC0
        test edi, edi
        jle fn00732CC0_L732DE1
        push edi
        lea ecx, [esp + 30h]
        call ext_006BA260
fn00732CC0_L732DE1:
        inc edi
fn00732CC0_L732DE2:
        lea ecx, [esp + 2ch]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_006BC460
        cmp eax, -1
        je fn00732CC0_L732E2E
        push eax
        mov ecx, ebp
        call ext_006BC440
        lea ecx, [esp + 10h]
        push ecx
        push eax
        mov ecx, esi
        call ext_00732F10
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        lea eax, [esp + 88h]
        mov dword ptr [esp + 88h], edx
        push eax
        push ecx
        lea ecx, [esp + 1ch]
        call ext_006D2170
fn00732CC0_L732E2E:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn00732CC0_L732E3C:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        push 0aad244h
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn00732CC0_L732D70
fn00732CC0_L732E65:
        mov ecx, ebp
        call ext_00715550
        mov ebx, eax
        xor edi, edi
        test ebx, ebx
        jle fn00732CC0_L732ECE
fn00732CC0_L732E74:
        push edi
        mov ecx, ebp
        call ext_006BC440
        mov edx, dword ptr [esp + 24h]
        mov esi, eax
        mov ecx, esi
        mov eax, dword ptr [edx + 4*edi]
        mov dword ptr [esp + 10h], eax
        call ext_006F7550
        test eax, eax
        je fn00732CC0_L732EC9
        mov ecx, esi
        call ext_006F7550
        cmp eax, 1
        jne fn00732CC0_L732EC9
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        jl fn00732CC0_L732EC9
        mov ecx, ebp
        call ext_00715550
        mov ecx, dword ptr [esp + 10h]
        cmp ecx, eax
        jge fn00732CC0_L732EC9
        push ecx
        mov ecx, ebp
        call ext_006BC440
        push eax
        push 1
        mov ecx, esi
        call ext_006F74E0
fn00732CC0_L732EC9:
        inc edi
        cmp edi, ebx
        jl fn00732CC0_L732E74
fn00732CC0_L732ECE:
        lea ecx, [esp + 14h]
        mov byte ptr [esp + 80h], 0
        call ext_006D2160
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 80h], 0ffffffffh
        call ext_006B9D70
        mov ecx, dword ptr [esp + 78h]
        pop ebp
        pop ebx
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 74h
        ret 4
    }
}

// [0x007393E0] sub_007393E0 (608 bytes)
extern "C" void ext_006A5C62(); extern "C" void ext_006D2130(); extern "C" void ext_006D2170(); extern "C" void ext_006D2370();
extern "C" void ext_006D2390(); extern "C" void ext_006D2A30(); extern "C" void ext_006D2BD0(); extern "C" void ext_00726900();
extern "C" void ext_00726AE0(); extern "C" void ext_00743480(); extern "C" void ext_007435A0();
extern "C" __declspec(naked) void __fastcall fn_007393E0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 8be65eh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 34h
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0aadbb4h
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007393E0_L623
fn007393E0_L41E:
        push 38h
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr [esp + 48h], ebx
        je fn007393E0_L472
        mov dword ptr [edi], ebx
        mov dword ptr [edi + 4], ebx
        lea ebx, [edi + 8]
        push 20h
        push 10h
        mov ecx, ebx
        call ext_006D2130
        lea eax, [ebx + 10h]
        mov dword ptr [ebx + 14h], eax
        lea ebx, [edi + 20h]
        push 4
        push 10h
        mov ecx, ebx
        mov byte ptr [esp + 50h], 1
        call ext_006D2130
        lea ecx, [ebx + 10h]
        mov dword ptr [esp + 10h], edi
        mov dword ptr [ebx + 14h], ecx
        xor ebx, ebx
        jmp fn007393E0_L476
fn007393E0_L472:
        mov dword ptr [esp + 10h], ebx
fn007393E0_L476:
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 48h], 0ffffffffh
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn007393E0_L5E2
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push 0aacd0ch
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aadc2ch
        add ecx, 4
        call ext_00726AA0
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aadc10h
        add ecx, 4
        mov edi, eax
        call ext_00726AA0
        push edi
        mov ebx, eax
        call ext_00743480
        mov edi, dword ptr [esp + 14h]
        push ebx
        mov dword ptr [edi], eax
        call ext_007435A0
        add esp, 8
        mov dword ptr [edi + 4], eax
        mov ecx, dword ptr [esi + 0ach]
        push 0aadc44h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007393E0_L5D4
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726900
        mov ecx, eax
        mov eax, 55555556h
        imul ecx
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        test edx, edx
        jle fn007393E0_L5C6
        mov dword ptr [esp + 18h], edx
fn007393E0_L547:
        lea ecx, [esp + 20h]
        call ext_006D2370
        lea ecx, [esp + 20h]
        mov dword ptr [esp + 48h], 2
        call ext_006D2A30
        mov edi, dword ptr [esi + 0ach]
        mov ebx, eax
        add edi, 4
        mov dword ptr [esp + 14h], 3
fn007393E0_L574:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebx]
        mov eax, dword ptr [esp + 14h]
        add ebx, 8
        dec eax
        mov dword ptr [esp + 14h], eax
        jne fn007393E0_L574
        sub esp, 20h
        lea edx, [esp + 40h]
        mov ecx, esp
        mov dword ptr [esp + 34h], esp
        push edx
        call ext_006D2390
        mov eax, dword ptr [esp + 30h]
        lea ecx, [eax + 8]
        call ext_006D2BD0
        lea ecx, [esp + 20h]
        mov dword ptr [esp + 48h], 0ffffffffh
        call ext_006D80A0
        mov eax, dword ptr [esp + 18h]
        dec eax
        mov dword ptr [esp + 18h], eax
        jne fn007393E0_L547
fn007393E0_L5C6:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007393E0_L5D4:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn007393E0_L5E2:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esp + 10h]
        lea edx, [esp + 1ch]
        mov dword ptr [esp + 1ch], ecx
        mov ecx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        call ext_006D2170
        mov ecx, dword ptr [esi + 0ach]
        push 0aadbb4h
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn007393E0_L41E
fn007393E0_L623:
        mov ecx, dword ptr [esp + 40h]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00735F30] sub_00735F30 (608 bytes)
extern "C" void ext_006A5C5C(); extern "C" void ext_006B99C0(); extern "C" void ext_006BC380(); extern "C" void ext_006C30A0(); extern "C" void ext_006D2130(); extern "C" void ext_006D2160(); extern "C" void ext_006D2170(); extern "C" void ext_006D2200(); extern "C" void ext_006FDF30(); extern "C" void ext_006FDF90(); extern "C" void ext_0070C3B0();

extern "C" __declspec(naked) void __fastcall fn_00735F30(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 8be420h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 4ch
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 14h], ecx
        push 4
        push 10h
        lea ecx, [esp + 34h]
        call ext_006D2130
        lea eax, [esp + 3ch]
        mov dword ptr [esp + 40h], eax
        xor ebp, ebp
        push 4
        push 10h
        lea ecx, [esp + 4ch]
        mov dword ptr [esp + 6ch], ebp
        call ext_006D2130
        lea ecx, [esp + 54h]
        mov dword ptr [esp + 58h], ecx
        mov esi, dword ptr [esp + 6ch]
        mov byte ptr [esp + 64h], 1
        mov ecx, esi
        call ext_006B99C0
        mov edi, dword ptr [eax + 1ch]
        mov dword ptr [esp + 10h], ebp
        cmp edi, ebp
        jle fn00735F30_L606E
fn00735F30_L5F9F:
        mov ecx, esi
        call ext_006B99C0
        mov edx, dword ptr [eax + 2ch]
        dec edi
        cmp edi, ebp
        lea eax, [edx + 4*ebp]
        mov eax, dword ptr [edx + 4*ebp]
        mov ebx, dword ptr [eax]
        jle fn00735F30_L7057
        jmp fn00735F30_L5FC0
fn00735F30_L5FBC:
        mov esi, dword ptr [esp + 6ch]
fn00735F30_L5FC0:
        mov ecx, esi
        lea ebp, [4*edi]
        call ext_006B99C0
        mov eax, dword ptr [eax + 2ch]
        push ebx
        add eax, ebp
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        mov ecx, esi
        call ext_0070C3B0
        test al, al
        je fn00735F30_L6044
        mov ecx, dword ptr [esp + 6ch]
        call ext_006B99C0
        mov edx, dword ptr [eax + 2ch]
        add eax, 1ch
        push edi
        mov ecx, eax
        mov ebp, dword ptr [edx + ebp]
        call ext_006D2200
        push ebp
        call ext_006A5C5C
        mov eax, dword ptr [esp + 18h]
        add esp, 4
        mov ecx, dword ptr [eax + 4]
        push esi
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 80h]
        mov ecx, dword ptr [esp + 2ch]
        lea eax, [esp + 18h]
        push eax
        push ecx
        lea ecx, [esp + 34h]
        mov dword ptr [esp + 20h], esi
        call ext_006D2170
        mov eax, dword ptr [esp + 44h]
        lea edx, [esp + 18h]
        push edx
        push eax
        lea ecx, [esp + 4ch]
        mov dword ptr [esp + 20h], ebx
        call ext_006D2170
fn00735F30_L6044:
        mov eax, dword ptr [esp + 10h]
        dec edi
        cmp edi, eax
        jg fn00735F30_L5FBC
        mov esi, dword ptr [esp + 6ch]
        mov ebp, eax
fn00735F30_L7057:
        mov ecx, esi
        call ext_006B99C0
        mov edi, dword ptr [eax + 1ch]
        inc ebp
        cmp ebp, edi
        mov dword ptr [esp + 10h], ebp
        jl fn00735F30_L5F9F
fn00735F30_L606E:
        mov ecx, esi
        call ext_006B99C0
        mov eax, dword ptr [eax + 4]
        xor ebx, ebx
        test eax, eax
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 10h], ebx
        jle fn00735F30_L6150
fn00735F30_L608A:
        mov ecx, esi
        call ext_006B99C0
        mov ecx, dword ptr [eax + 14h]
        lea eax, [ecx + 4*ebx]
        mov ecx, dword ptr [ecx + 4*ebx]
        call ext_006C30A0
        mov ebp, eax
        test ebp, ebp
        mov dword ptr [esp + 20h], ebp
        je fn00735F30_L613F
        push 2
        mov ecx, ebp
        call ext_006FDF30
        xor edi, edi
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov dword ptr [esp + 14h], edi
        jle fn00735F30_L613F
fn00735F30_L60C4:
        push 2
        push edi
        mov ecx, ebp
        call ext_006FDF90
        mov ecx, eax
        call ext_006BC380
        mov ebx, eax
        xor esi, esi
        mov eax, dword ptr [ebx + 8]
        test eax, eax
        mov dword ptr [esp + 1ch], eax
        jle fn00735F30_L612A
        mov ebp, dword ptr [esp + 2ch]
fn00735F30_L60E8:
        mov edi, dword ptr [ebx + 18h]
        xor ecx, ecx
        test ebp, ebp
        mov eax, dword ptr [edi + 4*esi]
        jle fn00735F30_L6119
        mov edx, dword ptr [esp + 3ch]
fn00735F30_L60F8:
        cmp dword ptr [edx], eax
        je fn00735F30_L6106
        inc ecx
        add edx, 4
        cmp ecx, ebp
        jl fn00735F30_L60F8
        jmp fn00735F30_L6119
fn00735F30_L6106:
        cmp ecx, -1
        je fn00735F30_L6119
        mov edx, dword ptr [esp + 54h]
        mov ecx, dword ptr [edx + 4*ecx]
        mov dword ptr [edi + 4*esi], ecx
        mov ebp, dword ptr [esp + 2ch]
fn00735F30_L6119:
        mov eax, dword ptr [esp + 1ch]
        inc esi
        cmp esi, eax
        jl fn00735F30_L60E8
        mov ebp, dword ptr [esp + 20h]
        mov edi, dword ptr [esp + 14h]
fn00735F30_L612A:
        mov eax, dword ptr [esp + 24h]
        inc edi
        cmp edi, eax
        mov dword ptr [esp + 14h], edi
        jl fn00735F30_L60C4
        mov esi, dword ptr [esp + 6ch]
        mov ebx, dword ptr [esp + 10h]
fn00735F30_L613F:
        mov eax, dword ptr [esp + 28h]
        inc ebx
        cmp ebx, eax
        mov dword ptr [esp + 10h], ebx
        jl fn00735F30_L608A
fn00735F30_L6150:
        lea ecx, [esp + 44h]
        mov byte ptr [esp + 64h], 0
        call ext_006D2160
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 64h], -1
        call ext_006D2160
        mov ecx, dword ptr [esp + 5ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 58h
        ret 4
    }
}

// [0x00735CD0] sub_00735CD0 (608 bytes)
extern "C" __declspec(naked) void __fastcall fn_00735CD0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 08be420h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 4ch
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 14h], ecx
        push 4
        push 10h
        lea ecx, [esp + 34h]
        call ext_006D2130
        lea eax, [esp + 3ch]
        mov dword ptr [esp + 40h], eax
        xor ebp, ebp
        push 4
        push 10h
        lea ecx, [esp + 4ch]
        mov dword ptr [esp + 6ch], ebp
        call ext_006D2130
        lea ecx, [esp + 54h]
        mov dword ptr [esp + 58h], ecx
        mov esi, dword ptr [esp + 6ch]
        mov byte ptr [esp + 64h], 1
        mov ecx, esi
        call ext_006B99C0
        mov edi, dword ptr [eax + 34h]
        mov dword ptr [esp + 10h], ebp
        cmp edi, ebp
        jle fn00735CD0_L0e0e
fn00735CD0_L3d3f:
        mov ecx, esi
        call ext_006B99C0
        mov edx, dword ptr [eax + 44h]
        dec edi
        cmp edi, ebp
        lea eax, [edx + 4*ebp]
        mov eax, dword ptr [edx + 4*ebp]
        mov ebx, dword ptr [eax]
        jle fn00735CD0_L5df7
        jmp fn00735CD0_L5d60
fn00735CD0_L5d5c:
        mov esi, dword ptr [esp + 6ch]
fn00735CD0_L5d60:
        mov ecx, esi
        lea ebp, [4*edi]
        call ext_006B99C0
        mov eax, dword ptr [eax + 44h]
        push ebx
        add eax, ebp
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        mov ecx, esi
        call ext_00703300
        test al, al
        je fn00735CD0_L5de4
        mov ecx, dword ptr [esp + 6ch]
        call ext_006B99C0
        mov edx, dword ptr [eax + 44h]
        add eax, 34h
        push edi
        mov ecx, eax
        mov ebp, dword ptr [edx + ebp]
        call ext_006D2200
        push ebp
        call ext_006A5C5C
        mov eax, dword ptr [esp + 18h]
        add esp, 4
        mov ecx, dword ptr [eax + 4]
        push esi
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 88h]
        mov ecx, dword ptr [esp + 2ch]
        lea eax, [esp + 18h]
        push eax
        push ecx
        lea ecx, [esp + 34h]
        mov dword ptr [esp + 20h], esi
        call ext_006D2170
        mov eax, dword ptr [esp + 44h]
        lea edx, [esp + 18h]
        push edx
        push eax
        lea ecx, [esp + 4ch]
        mov dword ptr [esp + 20h], ebx
        call ext_006D2170
fn00735CD0_L5de4:
        mov eax, dword ptr [esp + 10h]
        dec edi
        cmp edi, eax
        jg fn00735CD0_L5d5c
        mov esi, dword ptr [esp + 6ch]
        mov ebp, eax
fn00735CD0_L5df7:
        mov ecx, esi
        call ext_006B99C0
        mov edi, dword ptr [eax + 34h]
        inc ebp
        cmp ebp, edi
        mov dword ptr [esp + 10h], ebp
        jl fn00735CD0_L3d3f
fn00735CD0_L0e0e:
        mov ecx, esi
        call ext_006B99C0
        mov eax, dword ptr [eax + 4]
        xor ebx, ebx
        test eax, eax
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 10h], ebx
        jle fn00735CD0_L5ef0
fn00735CD0_L5e2a:
        mov ecx, esi
        call ext_006B99C0
        mov ecx, dword ptr [eax + 14h]
        lea eax, [ecx + 4*ebx]
        mov ecx, dword ptr [ecx + 4*ebx]
        call ext_006C30A0
        mov ebp, eax
        test ebp, ebp
        mov dword ptr [esp + 20h], ebp
        je fn00735CD0_L5edf
        push 3
        mov ecx, ebp
        call ext_006FDF30
        xor edi, edi
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov dword ptr [esp + 14h], edi
        jle fn00735CD0_L5edf
fn00735CD0_L5e64:
        push 3
        push edi
        mov ecx, ebp
        call ext_006FDF90
        mov ecx, eax
        call ext_00715550
        mov ebx, eax
        xor esi, esi
        mov eax, dword ptr [ebx + 8]
        test eax, eax
        mov dword ptr [esp + 1ch], eax
        jle fn00735CD0_L5eca
        mov ebp, dword ptr [esp + 2ch]
fn00735CD0_L5e88:
        mov edi, dword ptr [ebx + 18h]
        xor ecx, ecx
        test ebp, ebp
        mov eax, dword ptr [edi + 4*esi]
        jle fn00735CD0_L5eb9
        mov edx, dword ptr [esp + 3ch]
fn00735CD0_L5e98:
        cmp dword ptr [edx], eax
        je fn00735CD0_L5ea6
        inc ecx
        add edx, 4
        cmp ecx, ebp
        jl fn00735CD0_L5e98
        jmp fn00735CD0_L5eb9
fn00735CD0_L5ea6:
        cmp ecx, -1
        je fn00735CD0_L5eb9
        mov edx, dword ptr [esp + 54h]
        mov ecx, dword ptr [edx + 4*ecx]
        mov dword ptr [edi + 4*esi], ecx
        mov ebp, dword ptr [esp + 2ch]
fn00735CD0_L5eb9:
        mov eax, dword ptr [esp + 1ch]
        inc esi
        cmp esi, eax
        jl fn00735CD0_L5e88
        mov ebp, dword ptr [esp + 20h]
        mov edi, dword ptr [esp + 14h]
fn00735CD0_L5eca:
        mov eax, dword ptr [esp + 24h]
        inc edi
        cmp edi, eax
        mov dword ptr [esp + 14h], edi
        jl fn00735CD0_L5e64
        mov esi, dword ptr [esp + 6ch]
        mov ebx, dword ptr [esp + 10h]
fn00735CD0_L5edf:
        mov eax, dword ptr [esp + 28h]
        inc ebx
        cmp ebx, eax
        mov dword ptr [esp + 10h], ebx
        jl fn00735CD0_L5e2a
fn00735CD0_L5ef0:
        lea ecx, [esp + 44h]
        mov byte ptr [esp + 64h], 0
        call ext_006D2160
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 64h], 0ffffffffh
        call ext_006D2160
        mov ecx, dword ptr [esp + 5ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 58h
        ret 4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x007348E0] sub_007348E0 (624 bytes)
extern "C" void ext_006B9950(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9D80();
extern "C" void ext_006D57D0(); extern "C" void ext_006E7460(); extern "C" void ext_006F8AF0();
extern "C" void ext_006F8F30(); extern "C" void ext_006F8FB0(); extern "C" void ext_006F90F0();
extern "C" void ext_00736C90();

extern "C" __declspec(naked) void __fastcall fn_007348E0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 8be32eh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0f0h
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
        lea ecx, [esp + 6ch]
        call ext_006B9D80
        lea ecx, [esp + 68h]
        mov dword ptr [esp + 108h], 0
        call ext_006E7460
        push eax
        call ext_006F90F0
        mov edi, eax
        or ebp, -1
        add esp, 4
        cmp edi, ebp
        je L_EPI_SET
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        add ecx, 4
        push 0aad728h
        call ext_00726AA0
        push eax
        lea ecx, [esp + 20h]
        call ext_006B9D80
        lea ecx, [esp + 1ch]
        mov byte ptr [esp + 108h], 1
        call ext_006B9950
        test al, al
        jne L_CLEANUP1
        lea ecx, [esp + 1ch]
        call ext_006E7460
        push eax
        lea eax, [esp + 0b8h]
        push 0aa8704h
        push eax
        call ext_006D57D0
        add esp, 0ch
        lea ecx, [esp + 0b4h]
        mov byte ptr [esp + 108h], 2
        call ext_006E7460
        push eax
        mov ecx, esi
        call ext_00736C90
        mov ebx, eax
        test ebx, ebx
        jne L_BRANCH2
        lea ecx, [esp + 0b4h]
        mov byte ptr [esp + 108h], 1
        call ext_006B9D70
L_CLEANUP1:
        lea ecx, [esp + 1ch]
        mov byte ptr [esp + 108h], 0
        call ext_006B9D70
L_EPI_SET:
        mov dword ptr [esp + 108h], ebp
        jmp L_UNWIND
L_BRANCH2:
        lea ecx, [esp + 10h]
        call ext_006F8AF0
        mov ebp, dword ptr [esp + 110h]
        lea ecx, [esp + 10h]
        push ecx
        push edi
        mov ecx, ebp
        call ext_006F8FB0
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 0ach]
        and edx, 0ffh
        add ecx, 4
        push edx
        push 0aad7d0h
        mov dword ptr [esp + 18h], ebx
        call ext_00726B40
        mov ecx, dword ptr [esp + 15h]
        test eax, eax
        setne al
        and ecx, 0ffh
        mov byte ptr [esp + 14h], al
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        push 0aad7c8h
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        test eax, eax
        mov eax, dword ptr [esp + 16h]
        setne dl
        and eax, 0ffh
        add ecx, 4
        push eax
        push 0aad7c0h
        mov byte ptr [esp + 1dh], dl
        call ext_00726B40
        mov edx, dword ptr [esp + 17h]
        test eax, eax
        setne cl
        mov byte ptr [esp + 16h], cl
        mov ecx, dword ptr [esi + 0ach]
        and edx, 0ffh
        add ecx, 4
        push edx
        push 0aad7ach
        call ext_00726B40
        mov ecx, dword ptr [esp + 18h]
        test eax, eax
        setne al
        and ecx, 0ffh
        mov byte ptr [esp + 17h], al
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        push 0aad798h
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esp + 10h]
        test eax, eax
        setne dl
        sub esp, 0ch
        mov byte ptr [esp + 24h], dl
        mov edx, dword ptr [esp + 20h]
        mov eax, esp
        push edi
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax + 8], ecx
        mov ecx, ebp
        call ext_006F8F30
        lea ecx, [esp + 0b4h]
        mov byte ptr [esp + 108h], 1
        call ext_006B9D70
        lea ecx, [esp + 1ch]
        mov byte ptr [esp + 108h], 0
        call ext_006B9D70
        mov dword ptr [esp + 108h], 0ffffffffh
L_UNWIND:
        lea ecx, [esp + 68h]
        call ext_006B9D70
        mov ecx, dword ptr [esp + 100h]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0fch
        ret 4
    }
}

// [0x00739C00] sub_00739C00 (656 bytes)
extern "C" __declspec(naked) void __fastcall fn_00739C00(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 008be6eeh
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 18h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 00aadb7ch
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00739C00_end
fn00739C00_top:
        push 38h
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr [esp + 30h], ebx
        je fn00739C00_nobuf
        lea ebp, [edi + 8]
        push 10h
        push 10h
        mov ecx, ebp
        mov dword ptr [edi], ebx
        mov dword ptr [edi + 4], ebx
        call ext_006D2130
        lea eax, [ebp + 10h]
        mov dword ptr [ebp + 14h], eax
        lea ebp, [edi + 20h]
        push 4
        push 10h
        mov ecx, ebp
        mov byte ptr [esp + 38h], 1
        call ext_006D2130
        lea ecx, [ebp + 10h]
        mov dword ptr [ebp + 14h], ecx
        jmp fn00739C00_after
fn00739C00_nobuf:
        xor edi, edi
fn00739C00_after:
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 30h], 0ffffffffh
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00739C00_skip1
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push 00aacd0ch
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        push 00b5d2c0h
        push 00aadc2ch
        add ecx, 4
        call ext_00726AA0
        mov ecx, dword ptr [esi + 0ach]
        push 00b5d2c0h
        push 00aadc10h
        add ecx, 4
        mov ebp, eax
        call ext_00726AA0
        push ebp
        mov ebx, eax
        call ext_00743480
        push ebx
        mov dword ptr [edi], eax
        call ext_007435A0
        add esp, 8
        mov dword ptr [edi + 4], eax
        mov ecx, dword ptr [esi + 0ach]
        push 00aabbc0h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00739C00_skip2
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726900
        cdq
        sub eax, edx
        lea ebx, [edi + 8]
        sar eax, 1
        test eax, eax
        jle fn00739C00_loop2end
        mov ebp, eax
fn00739C00_loop1:
        lea ecx, [esp + 18h]
        call ext_0077FAB0
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 30h], 2
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 18h]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 20h]
        sub esp, 10h
        lea edx, [esp + 28h]
        mov ecx, esp
        mov dword ptr [esp + 20h], esp
        push edx
        call ext_0077FAC0
        mov ecx, ebx
        call ext_006D89D0
        lea ecx, [esp + 18h]
        mov dword ptr [esp + 30h], 0ffffffffh
        call ext_006D80A0
        dec ebp
        jne fn00739C00_loop1
fn00739C00_loop2end:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn00739C00_skip2:
        cmp dword ptr [edi + 4], 2
        jne fn00739C00_skip3
        mov ecx, dword ptr [esi + 0ach]
        push 00aadc88h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00739C00_skip3
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726900
        test eax, eax
        lea ebx, [edi + 20h]
        jle fn00739C00_loop3end
        mov ebp, eax
fn00739C00_loop3:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [ebx]
        mov dword ptr [esp + 10h], eax
        lea eax, [esp + 10h]
        push eax
        push ecx
        mov ecx, ebx
        call ext_006D2170
        dec ebp
        jne fn00739C00_loop3
fn00739C00_loop3end:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn00739C00_skip3:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn00739C00_skip1:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esp + 38h]
        lea edx, [esp + 14h]
        push edx
        mov dword ptr [esp + 18h], edi
        mov eax, dword ptr [ecx]
        push eax
        call ext_006D2170
        mov ecx, dword ptr [esi + 0ach]
        push 00aadb7ch
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn00739C00_top
fn00739C00_end:
        mov ecx, dword ptr [esp + 28h]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 24h
        ret 4
    }
}

// [0x00739970] sub_00739970 (656 bytes)
extern "C" void ext_006A5C62(); extern "C" void ext_006D2170(); extern "C" void ext_00726860(); extern "C" void ext_007268D0();
extern "C" void ext_00726900(); extern "C" void ext_00726AA0(); extern "C" void ext_00726AE0(); extern "C" void ext_00726B40();
extern "C" void ext_00726C20(); extern "C" void ext_00743480(); extern "C" void ext_007435A0(); extern "C" void ext_00743630();
extern "C" void ext_0078D720();
extern "C" int mem_0092A270; extern "C" int mem_0092A278;

extern "C" __declspec(naked) void __fastcall fn_00739970(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 8be6c6h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 1ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0aadb8ch
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je f739970_epilogue
f739970_top:
        push 48h
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr [esp + 30h], ebx
        je f739970_null
        push 10h
        lea ecx, [edi + 8]
        mov dword ptr [edi], ebx
        mov dword ptr [edi + 4], ebx
        call ext_0078D720
        push 10h
        lea ecx, [edi + 20h]
        mov byte ptr [esp + 34h], 1
        call ext_0078D720
        mov dword ptr [edi + 40h], ebx
        mov dword ptr [edi + 38h], ebx
        mov dword ptr [edi + 4], 2
        mov dword ptr [edi + 44h], 3ff00000h
        jmp f739970_after
f739970_null:
        xor edi, edi
f739970_after:
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 30h], 0ffffffffh
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov byte ptr [esp + 0fh], 0
        add ecx, 4
        call ext_00726860
        test al, al
        je f739970_fail
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push 0aacd0ch
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aadc2ch
        add ecx, 4
        call ext_00726AA0
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aadc10h
        add ecx, 4
        mov dword ptr [esp + 18h], eax
        call ext_00726AA0
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aadc7ch
        add ecx, 4
        mov ebx, eax
        call ext_00726AA0
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aadc6ch
        add ecx, 4
        mov dword ptr [esp + 20h], eax
        call ext_00726C20
        mov eax, dword ptr [esp + 10h]
        fstp qword ptr [esp + 1ch]
        push eax
        call ext_00743480
        push ebx
        mov dword ptr [edi], eax
        call ext_007435A0
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [edi + 4], eax
        push ecx
        call ext_00743630
        fld qword ptr [esp + 28h]
        fcom qword ptr [mem_0092A270]
        mov dword ptr [edi + 38h], eax
        add esp, 0ch
        fnstsw ax
        test ah, 41h
        jne f739970_nz
        fld qword ptr [mem_0092A270]
        jmp f739970_st
f739970_nz:
        fld st(0)
f739970_st:
        fstp qword ptr [edi + 40h]
        fcom qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 1
        je f739970_store2
        fstp st(0)
        fld qword ptr [mem_0092A278]
f739970_store2:
        fstp qword ptr [edi + 40h]
        push ebx
        call ext_007435A0
        add esp, 4
        test eax, eax
        je f739970_cleanup
        mov ecx, dword ptr [esi + 0ach]
        push 0aadc60h
        add ecx, 4
        call ext_00726770
        test al, al
        je f739970_cleanup
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726900
        test eax, eax
        setg byte ptr [esp + 0fh]
        test eax, eax
        lea ebx, [edi + 20h]
        jle f739970_skiploop
        mov dword ptr [esp + 10h], eax
f739970_loop:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [ebx]
        lea edx, [esp + 14h]
        mov ecx, ebx
        push edx
        push eax
        call ext_006D2170
        mov eax, dword ptr [esp + 10h]
        dec eax
        mov dword ptr [esp + 10h], eax
        jne f739970_loop
f739970_skiploop:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f739970_cleanup:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f739970_fail:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov al, byte ptr [esp + 0fh]
        test al, al
        je f739970_skipstore
        lea ecx, [esp + 18h]
        mov dword ptr [esp + 18h], edi
        push ecx
        mov ecx, dword ptr [ebp + 8h]
        mov edx, dword ptr [ecx]
        push edx
        call ext_006D2170
f739970_skipstore:
        mov ecx, dword ptr [esi + 0ach]
        push 0aadb8ch
        add ecx, 4
        call ext_00726770
        test al, al
        jne f739970_top
f739970_epilogue:
        mov ecx, dword ptr [esp + 28h]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00731F10] sub_00731F10 (592 bytes)
extern "C" void ext_006BC380(); extern "C" void ext_006C31B0(); extern "C" void ext_006C95F0(); extern "C" void ext_006C9E80();
extern "C" void ext_006C9F70(); extern "C" void ext_006CA020(); extern "C" void ext_006CA6A0(); extern "C" void ext_006CD330();
extern "C" void ext_006DC510(); extern "C" void ext_006DC550(); extern "C" void ext_006E8D10(); extern "C" void ext_006E9C30();
extern "C" void ext_006BADB0(); extern "C" void ext_00789BA0(); extern "C" void ext_00872828();
extern "C" __declspec(naked) void __fastcall fn_00731F10(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 8bdaa0h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 44h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp+60h]
        push edi
        mov ecx, esi
        call ext_006BC380
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp+14h], edi
        call ext_006C31B0
        mov ebx, eax
        push 4
        push 10h
        lea ecx, [esp+44h]
        mov dword ptr [esp+20h], ebx
        call ext_006D2130
        lea eax, [esp+4ch]
        mov dword ptr [esp+50h], eax
        xor ebp, ebp
        push 4
        push 10h
        lea ecx, [esp+2ch]
        mov dword ptr [esp+64h], ebp
        call ext_006D2130
        lea ecx, [esp+34h]
        mov dword ptr [esp+38h], ecx
        mov ecx, ebx
        mov byte ptr [esp+5ch], 1
        call ext_00715550
        mov ebx, eax
        cmp ebx, ebp
        mov dword ptr [esp+64h], ebx
        je fn00731F10_L2125
        push 1
        lea edx, [esp+40h]
        push 7
        push edx
        mov ecx, esi
        call ext_006B99C0
        mov ecx, eax
        call ext_006E8D10
        mov eax, dword ptr [esp+3ch]
        test ebx, ebx
        mov dword ptr [esp+10h], eax
        jle fn00731F10_L203F
fn00731F10_L1FBB:
        mov eax, dword ptr [esp+10h]
        xor edi, edi
        test eax, eax
        jle fn00731F10_L2017
fn00731F10_L1FC5:
        mov ecx, dword ptr [esp+4ch]
        mov ecx, dword ptr [ecx+edi*4]
        call ext_006BADB0
        mov ecx, dword ptr [esp+18h]
        push ebp
        mov esi, eax
        call ext_006E9C30
fn00731F10_L1FDD:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [esi]
        mov cl, dl
        cmp dl, bl
        jne fn00731F10_L2005
        test cl, cl
        je fn00731F10_L2001
        mov dl, byte ptr [eax+1]
        mov bl, byte ptr [esi+1]
        mov cl, dl
        cmp dl, bl
        jne fn00731F10_L2005
        add eax, 2
        add esi, 2
        test cl, cl
        jne fn00731F10_L1FDD
fn00731F10_L2001:
        xor eax, eax
        jmp fn00731F10_L200A
fn00731F10_L2005:
        sbb eax, eax
        sbb eax, -1
fn00731F10_L200A:
        test eax, eax
        je fn00731F10_L2058
        mov eax, dword ptr [esp+10h]
        inc edi
        cmp edi, eax
        jl fn00731F10_L1FC5
fn00731F10_L2017:
        mov eax, dword ptr [esp+24h]
        lea edx, [esp+20h]
        push edx
        mov dword ptr [esp+24h], -1
        push eax
fn00731F10_L2029:
        lea ecx, [esp+2ch]
        call ext_006D2170
        mov eax, dword ptr [esp+64h]
        inc ebp
        cmp ebp, eax
        jl fn00731F10_L1FBB
        mov edi, dword ptr [esp+14h]
fn00731F10_L203F:
        mov ecx, edi
        call ext_006DC550
        mov esi, eax
        xor ebx, ebx
        test esi, esi
        mov dword ptr [esp+1ch], esi
        jle fn00731F10_L2125
        jmp fn00731F10_L206D
fn00731F10_L2058:
        mov ecx, dword ptr [esp+24h]
        lea eax, [esp+1ch]
        inc edi
        push eax
        mov dword ptr [esp+20h], edi
        push ecx
        jmp fn00731F10_L2029
fn00731F10_L2069:
        mov edi, dword ptr [esp+14h]
fn00731F10_L206D:
        push ebx
        mov ecx, edi
        call ext_006DC510
        mov ecx, eax
        call ext_006C95F0
        mov edi, eax
        test edi, edi
        je fn00731F10_L211C
        mov ecx, edi
        call ext_006C9F70
        call ext_00872828
        cmp eax, 1
        jl fn00731F10_L20BD
        cmp eax, dword ptr [esp+64h]
        jg fn00731F10_L20BD
        mov ecx, dword ptr [esp+34h]
        mov eax, dword ptr [ecx+eax*4-4]
        cmp eax, -1
        mov dword ptr [esp+10h], eax
        je fn00731F10_L20BD
        fild dword ptr [esp+10h]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_006CD330
fn00731F10_L20BD:
        mov ecx, edi
        call ext_006CA6A0
        mov ebp, eax
        xor esi, esi
        test ebp, ebp
        jle fn00731F10_L2118
fn00731F10_L20CC:
        push esi
        mov ecx, edi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9E80
        call ext_00872828
        cmp eax, 1
        jl fn00731F10_L2113
        cmp eax, dword ptr [esp+64h]
        jg fn00731F10_L2113
        mov edx, dword ptr [esp+34h]
        mov eax, dword ptr [edx+eax*4-4]
        cmp eax, -1
        mov dword ptr [esp+10h], eax
        je fn00731F10_L2113
        fild dword ptr [esp+10h]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        push esi
        call ext_006CA020
        mov ecx, eax
        call ext_00789BA0
fn00731F10_L2113:
        inc esi
        cmp esi, ebp
        jl fn00731F10_L20CC
fn00731F10_L2118:
        mov esi, dword ptr [esp+1ch]
fn00731F10_L211C:
        inc ebx
        cmp ebx, esi
        jl fn00731F10_L2069
fn00731F10_L2125:
        lea ecx, [esp+24h]
        mov byte ptr [esp+5ch], 0
        call ext_006D2160
        lea ecx, [esp+3ch]
        mov dword ptr [esp+5ch], -1
        call ext_006D2160
        mov ecx, dword ptr [esp+54h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 50h
        ret 4
    }
}

// [0x00735300] sub_00735300 (688 bytes)
extern "C" void ext_006BC7F0(); extern "C" void ext_006BB730(); extern "C" void ext_00726770(); extern "C" void ext_00726860();
extern "C" void ext_00726AA0(); extern "C" void ext_006B9D80(); extern "C" void ext_006BA7C0(); extern "C" void ext_006BB760();
extern "C" void ext_00726B40(); extern "C" void ext_006D97C0(); extern "C" void ext_006E7460(); extern "C" void ext_006D9800();
extern "C" void ext_006BB750(); extern "C" void ext_006BB790(); extern "C" void ext_006BB780(); extern "C" void ext_006BB7C0();
extern "C" void ext_006BB7B0(); extern "C" void ext_007266C0(); extern "C" void ext_006BB5D0(); extern "C" void ext_00726A40();
extern "C" void ext_006B9EC0(); extern "C" void ext_00726C60(); extern "C" void ext_007268D0(); extern "C" void ext_006BB5F0();
extern "C" void ext_006BB870(); extern "C" void ext_00726840(); extern "C" void ext_006BB7D0(); extern "C" void ext_006BB820();
extern "C" void ext_006BB7E0(); extern "C" void ext_006B9D70();

extern "C" __declspec(naked) void __fastcall fn_00735300(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8be3b3h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0b8h
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 0d4h]
        call ext_006BC7F0
        mov edi, eax
        mov ecx, edi
        call ext_006BB730
        mov ecx, dword ptr [esi + 0ach]
        push 0aad860h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00735300_592
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00735300_584
        mov ecx, dword ptr [esi + 0ach]
        push 0aad85ch
        push 0aabc84h
        add ecx, 4
        call ext_00726AA0
        push eax
        lea ecx, [esp + 7ch]
        call ext_006B9D80
        push 0aad85ch
        lea ecx, [esp + 7ch]
        mov dword ptr [esp + 0d0h], 0
        call ext_006BA7C0
        test al, al
        je fn00735300_3c8
        mov ecx, edi
        call ext_006BB760
        mov ecx, dword ptr [esi + 0ach]
        push eax
        push 0aad850h
        add ecx, 4
        call ext_00726B40
        push eax
        call ext_006D97C0
        jmp fn00735300_3d7
fn00735300_3c8:
        lea ecx, [esp + 78h]
        call ext_006E7460
        push eax
        call ext_006D9800
fn00735300_3d7:
        add esp, 4
        mov ecx, edi
        push eax
        call ext_006BB750
        mov ecx, edi
        call ext_006BB790
        mov ecx, dword ptr [esi + 0ach]
        push eax
        push 0aad844h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_006BB780
        mov ecx, edi
        call ext_006BB7C0
        mov ecx, dword ptr [esi + 0ach]
        push eax
        push 0aad834h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_006BB7B0
        mov ecx, dword ptr [esi + 0ach]
        push 0aad828h
        add ecx, 4
        call ext_007266C0
        test eax, eax
        jle fn00735300_562
        mov ebp, eax
fn00735300_445:
        lea ecx, [esp + 18h]
        call ext_006BB5D0
        mov ecx, dword ptr [esi + 0ach]
        push 0aad828h
        add ecx, 4
        mov byte ptr [esp + 0d0h], 1
        call ext_00726770
        test al, al
        je fn00735300_51c
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 1ch]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00735300_50e
        mov ecx, dword ptr [esi + 0ach]
        lea eax, [esp + 10h]
        push 0aac1c4h
        push eax
        add ecx, 4
        call ext_00726C60
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 68h], ecx
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 70h]
        mov ecx, dword ptr [esi + 0ach]
        and eax, 0ffh
        add ecx, 4
        push eax
        push 0aabc10h
        mov dword ptr [esp + 74h], edx
        call ext_00726B40
        test eax, eax
        setne cl
        mov byte ptr [esp + 70h], cl
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
        sub esp, 60h
        lea edx, [esp + 78h]
        mov ecx, esp
        mov dword ptr [esp + 6ch], esp
        push edx
        call ext_006BB5F0
        mov ecx, edi
        call ext_006BB870
fn00735300_50e:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn00735300_51c:
        mov ecx, edi
        call ext_006BB7D0
        test eax, eax
        je fn00735300_54a
        mov ecx, edi
        call ext_006BB820
        mov ecx, dword ptr [esi + 0ach]
        push eax
        push 0aad814h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_006BB7E0
fn00735300_54a:
        lea ecx, [esp + 18h]
        mov byte ptr [esp + 0cch], 0
        call ext_006B9D70
        dec ebp
        jne fn00735300_445
fn00735300_562:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
        lea ecx, [esp + 78h]
        mov dword ptr [esp + 0cch], 0ffffffffh
        call ext_006B9D70
fn00735300_584:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn00735300_592:
        mov ecx, dword ptr [esp + 0c4h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebp
        add esp, 0c4h
        ret 4
    }
}

// [0x007321A0] sub_007321A0 (704 bytes)
extern "C" void ext_006BC7D0(); extern "C" void ext_006D2370(); extern "C" void ext_006D2390(); extern "C" void ext_006D80A0();
extern "C" void ext_006E82D0(); extern "C" void ext_006E8790(); extern "C" void ext_006E87B0(); extern "C" void ext_006E8860(); extern "C" void ext_006E8900();
extern "C" void ext_00726770(); extern "C" void ext_00726840(); extern "C" void ext_00726860(); extern "C" void ext_007268D0();
extern "C" void ext_00726AE0(); extern "C" void ext_00726B40(); extern "C" void ext_00726BE0(); extern "C" void ext_00726C20(); extern "C" void ext_007873F0();
extern "C" __declspec(naked) void __fastcall fn_007321A0(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 8be19ch
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 94h
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 18h]
        call ext_006D2370
        lea ecx, [esp + 38h]
        mov dword ptr [esp + 0a8h], 0
        call ext_006D2370
        mov edi, dword ptr [ebp + 8]
        mov byte ptr [esp + 0a8h], 1
        mov ecx, edi
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8900
        mov ecx, dword ptr [esi + 0ach]
        push 0aad494h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007321A0_done
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn007321A0_L5
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aad48ch
        add ecx, 4
        call ext_00726B40
        test eax, eax
        jg fn007321A0_L3
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
        jmp fn007321A0_done
fn007321A0_L3:
        mov dword ptr [esp + 10h], eax
fn007321A0_loop:
        lea ecx, [esp + 58h]
        call ext_006E82D0
        mov ecx, dword ptr [esi + 0ach]
        push 0aad484h
        add ecx, 4
        mov byte ptr [esp + 0ach], 2
        call ext_00726770
        test al, al
        je fn007321A0_L4
        mov edi, dword ptr [esi + 0ach]
        lea ebx, [esp + 18h]
        add edi, 4
        mov dword ptr [esp + 0ch], 3
fn007321A0_f1:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebx]
        mov eax, dword ptr [esp + 0ch]
        add ebx, 8
        dec eax
        mov dword ptr [esp + 0ch], eax
        jne fn007321A0_f1
        mov edi, dword ptr [esi + 0ach]
        lea ebx, [esp + 38h]
        add edi, 4
        mov dword ptr [esp + 0ch], 3
fn007321A0_f2:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebx]
        mov eax, dword ptr [esp + 0ch]
        add ebx, 8
        dec eax
        mov dword ptr [esp + 0ch], eax
        jne fn007321A0_f2
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        test eax, eax
        lea ecx, [esp + 18h]
        setne al
        push ecx
        lea ecx, [esp + 64h]
        mov byte ptr [esp + 5ch], al
        call ext_007873F0
        lea edx, [esp + 38h]
        lea ecx, [esp + 80h]
        push edx
        call ext_007873F0
        mov al, byte ptr [esp + 58h]
        sub esp, 48h
        mov edi, esp
        lea ecx, [esp + 0a8h]
        mov dword ptr [esp + 54h], esp
        push ecx
        lea ecx, [edi + 8]
        mov dword ptr [esp + 60h], edi
        mov byte ptr [edi], al
        call ext_006D2390
        lea edx, [esp + 0c8h]
        lea ecx, [edi + 28h]
        push edx
        mov byte ptr [esp + 0f4h], 3
        call ext_006D2390
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [esp + 0f0h], 2
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8860
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007321A0_L4:
        lea ecx, [esp + 80h]
        mov byte ptr [esp + 0a8h], 5
        call ext_006D80A0
        lea ecx, [esp + 60h]
        mov byte ptr [esp + 0a8h], 1
        call ext_006D80A0
        mov eax, dword ptr [esp + 10h]
        dec eax
        mov dword ptr [esp + 10h], eax
        jne fn007321A0_loop
        mov ecx, dword ptr [esi + 0ach]
        mov edi, dword ptr [ebp + 8]
        push 0
        add ecx, 4
        push 0aad478h
        call ext_00726B40
        test eax, eax
        setne al
        push eax
        mov ecx, edi
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8790
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aad468h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E87B0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn007321A0_L5:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007321A0_done:
        lea ecx, [esp + 38h]
        mov byte ptr [esp + 0a8h], 0
        call ext_006D80A0
        lea ecx, [esp + 18h]
        mov dword ptr [esp + 0a8h], 0ffffffffh
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0a0h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00734C90] sub_00734C90 (592 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BA660();
extern "C" void ext_006BC610();
extern "C" void ext_006BC630();
extern "C" void ext_006BC6F0();
extern "C" void ext_006BC760();
extern "C" void ext_006D3A60();
extern "C" void ext_006E7460();
extern "C" void ext_00734EE0();
extern "C" void ext_00735140();

extern "C" __declspec(naked) void __fastcall fn_00734C90(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 8bc263h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 9ch
        push ebp
        push esi
        mov esi, ecx
        lea ecx, [esp + 58h]
        call ext_006B9D10
        lea ecx, [esp + 0ch]
        mov dword ptr [esp + 0ach], 0
        call ext_006B9D10
        mov ecx, dword ptr [esi + 0ach]
        push 0aad3fch
        add ecx, 4
        mov byte ptr [esp + 0b0h], 1
        mov ebp, 1
        call ext_00726770
        test al, al
        je fn00734C90_E92
        push ebx
        mov ebx, dword ptr [esp + 0b8h]
        push edi
fn00734C90_CFD:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 64h]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00734C90_E67
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        add ecx, 4
        push 0aa8e24h
        call ext_00726AA0
        push eax
        lea ecx, [esp + 18h]
        call ext_006B9EC0
        push 0aad3ech
        lea ecx, [esp + 18h]
        call ext_006BA660
        test eax, eax
        jne fn00734C90_DDE
        mov ecx, dword ptr [esi + 0ach]
        push 0aad7e0h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00734C90_E59
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00734C90_DCE
        lea ecx, [esp + 60h]
        call ext_006E7460
        push eax
        mov ecx, ebx
        call ext_006BC630
        mov edi, eax
        cmp edi, -1
        je fn00734C90_DC0
        push edi
        mov ecx, ebx
        call ext_006BC610
        push eax
        mov ecx, esi
        call ext_00734EE0
        test al, al
        jne fn00734C90_DC0
        push edi
        mov ecx, ebx
        call ext_006BC6F0
fn00734C90_DC0:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn00734C90_DCE:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        jmp fn00734C90_E59
fn00734C90_DDE:
        push 0aad100h
        lea ecx, [esp + 18h]
        call ext_006BA660
        test eax, eax
        je fn00734C90_E02
        push 0aad0f4h
        lea ecx, [esp + 18h]
        call ext_006BA660
        test eax, eax
        jne fn00734C90_E59
fn00734C90_E02:
        push 0aad100h
        lea ecx, [esp + 18h]
        call ext_006BA660
        test eax, eax
        sete al
        mov byte ptr [esp + 10h], al
        lea ecx, [esp + 60h]
        mov ebp, dword ptr [esp + 10h]
        push ebp
        call ext_006E7460
        mov ecx, dword ptr [ebx]
        push eax
        call ext_006D3A60
        mov edi, eax
        test edi, edi
        je fn00734C90_E57
        push ebp
        push edi
        mov ecx, esi
        call ext_00735140
        test al, al
        jne fn00734C90_E4F
        mov ecx, dword ptr [ebx]
        push edi
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 90h]
        jmp fn00734C90_E57
fn00734C90_E4F:
        push edi
        mov ecx, ebx
        call ext_006BC760
fn00734C90_E57:
        xor ebp, ebp
fn00734C90_E59:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn00734C90_E67:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        push 0aad3fch
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn00734C90_CFD
        pop edi
        pop ebx
fn00734C90_E92:
        lea ecx, [esp + 0ch]
        mov byte ptr [esp + 0ach], 0
        call ext_006B9D70
        lea ecx, [esp + 58h]
        mov dword ptr [esp + 0ach], 0ffffffffh
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0a4h]
        mov eax, ebp
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0a8h
        ret 4
    }
}

// [0x00730830] sub_00730830 (656 bytes)
extern "C" void ext_006B9950(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9D80(); extern "C" void ext_006BA660();
extern "C" void ext_006BC800(); extern "C" void ext_006BCEE0(); extern "C" void ext_006E7460(); extern "C" void ext_006F9BE0();
extern "C" void ext_00730AC0(); extern "C" void ext_0079D7A0();
extern "C" __declspec(naked) void __fastcall fn_00730830(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x8be041
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xa4
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0xaad2d0
        mov eax, dword ptr [esi + 0xb4]
        mov byte ptr [esp + 0x17], 0x1
        mov ecx, dword ptr [eax + 0xf0]
        mov dword ptr [esp + 0x1c], ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726770
        mov ebp, dword ptr [esp + 0xc4]
        xor ebx, ebx
        test al, al
        je fn00730830_L730A2D
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726860
        test al, al
        je fn00730830_L730A1F
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad2c0
        add ecx, 0x4
        call ext_00726770
        test al, al
        je fn00730830_L730A11
fn00730830_L7308BB:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726A40
        push eax
        lea ecx, [esp + 0x20]
        call ext_006B9D80
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0xbc], ebx
        call ext_006B9950
        test al, al
        jne fn00730830_L7309D4
        mov eax, dword ptr [esp + 0x18]
        xor edi, edi
        cmp eax, ebx
        jle fn00730830_L7309D4
fn00730830_L7308F9:
        mov edx, dword ptr [esi + 0xb4]
        mov eax, dword ptr [edx + 0x100]
        mov ecx, dword ptr [eax + 4*edi]
        call ext_006E7460
        push eax
        lea ecx, [esp + 0x20]
        call ext_006BA660
        test eax, eax
        je fn00730830_L730929
        mov eax, dword ptr [esp + 0x18]
        inc edi
        cmp edi, eax
        jl fn00730830_L7308F9
        jmp fn00730830_L7309D4
fn00730830_L730929:
        mov ecx, dword ptr [esi + 0xb4]
        mov edx, dword ptr [ecx + 0x100]
        mov edi, dword ptr [edx + 4*edi]
        cmp edi, ebx
        je fn00730830_L7309D4
        cmp byte ptr [edi + 0xe4], bl
        je fn00730830_L7309D4
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726860
        test al, al
        je fn00730830_L7309D4
        push edi
        push ebp
        mov ecx, esi
        call ext_00730AC0
        test al, al
        je fn00730830_L7309B4
        push 0x118
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0xbc], 0x1
        je fn00730830_L730992
        push edi
        mov ecx, eax
        call ext_006F9BE0
        jmp fn00730830_L730994
fn00730830_L730992:
        xor eax, eax
fn00730830_L730994:
        lea ecx, [ebp + 0xc4]
        mov dword ptr [esp + 0x14], eax
        lea edx, [esp + 0x14]
        mov byte ptr [esp + 0xbc], bl
        mov eax, dword ptr [ecx]
        push edx
        push eax
        call ext_006D2170
        jmp fn00730830_L7309B8
fn00730830_L7309B4:
        mov byte ptr [esp + 0x13], bl
fn00730830_L7309B8:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007268D0
        call ext_0079D7A0
        mov edx, dword ptr [eax]
        push ebx
        push ebx
        mov ecx, eax
        call dword ptr [edx + 0x64]
fn00730830_L7309D4:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad2c0
        add ecx, 0x4
        call ext_00726770
        test al, al
        jne fn00730830_L7308BB
fn00730830_L730A11:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007268D0
fn00730830_L730A1F:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
fn00730830_L730A2D:
        mov ecx, dword ptr [esi + 0xb4]
        add ecx, 0x108
        call ext_006E7460
        push eax
        lea ecx, [esp + 0x6c]
        call ext_006B9D80
        lea eax, [esp + 0x68]
        mov ecx, ebp
        push eax
        mov dword ptr [esp + 0xc0], 0x2
        call ext_006BCEE0
        lea ecx, [esp + 0x68]
        mov edi, eax
        mov dword ptr [esp + 0xbc], 0xffffffff
        call ext_006B9D70
        cmp edi, ebx
        je fn00730830_L730A92
        mov ecx, dword ptr [esi + 0xb4]
        add ecx, 0x108
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_006BC800
fn00730830_L730A92:
        mov ecx, dword ptr [esp + 0xb4]
        mov al, byte ptr [esp + 0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0xb0
        ret 4
    }
}

// [0x00736820] sub_00736820 (800 bytes)
extern "C" void ext_006B9D10(); extern "C" void ext_006B9D20(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9D80(); extern "C" void ext_006B9EC0();
extern "C" void ext_0072BF40(); extern "C" void ext_0072BF70(); extern "C" void ext_0072C050(); extern "C" void ext_0072C060(); extern "C" void ext_0072C110(); extern "C" void ext_0072C1D0();
extern "C" void ext_00726B40(); extern "C" void ext_00726AA0(); extern "C" void ext_00736B40(); extern "C" void ext_00742B00();
extern "C" __declspec(naked) void __fastcall fn_00736820(void* self) {
    __asm {
        push -1
        push 08be51eh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 15ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 64h
        push 0aacd0ch
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 18h], 0
        add ecx, 4
        call ext_00726B40
        lea ecx, [esp + 0b4h]
        mov edi, eax
        call ext_006B9D10
        cmp edi, 64h
        mov dword ptr [esp + 170h], 1
        mov byte ptr [esp + 0fh], 1
        jle fn00736820_L1
        mov ecx, dword ptr [esi + 0ach]
        push 1
        add ecx, 4
        push 0aad8dch
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        test eax, eax
        setne byte ptr [esp + 13h]
        add ecx, 4
        push 0aad8c8h
        call ext_00726AA0
        push eax
        lea ecx, [esp + 0b8h]
        call ext_006B9EC0
fn00736820_L1:
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        add ecx, 4
        push 0aad8bch
        call ext_00726AA0
        push eax
        lea ecx, [esp + 20h]
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        add ecx, 4
        push 0aad8a8h
        mov byte ptr [esp + 178h], 2
        call ext_00726AA0
        push eax
        lea ecx, [esp + 6ch]
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0ach]
        push 0aad8a0h
        add ecx, 4
        mov byte ptr [esp + 174h], 3
        call ext_00726770
        test al, al
        je fn00736820_L_end
        mov eax, dword ptr [esi + 0ach]
        push 0
        lea edx, [esp + 6ch]
        push 0b5d2c0h
        lea ecx, [eax + 4]
        push edx
        lea edx, [esp + 28h]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 4]
        mov ecx, dword ptr [esi + 0ach]
        mov bl, al
        add ecx, 4
        call ext_00726840
        test bl, bl
        je fn00736820_L_end
        mov al, byte ptr [esp + 0fh]
        test al, al
        jne fn00736820_L_3a3d
        lea ecx, [esp + 100h]
        call ext_0072BF40
        sub esp, 4ch
        lea eax, [esp + 100h]
        mov ecx, esp
        mov dword ptr [esp + 60h], esp
        push eax
        mov byte ptr [esp + 1c0h], 4
        call ext_006B9D20
        lea ecx, [esp + 14ch]
        call ext_0072C060
        push 0
        lea ecx, [esp + 104h]
        call ext_0072C050
        lea ecx, [esp + 100h]
        push 1
        push ecx
        lea edx, [esp + 24h]
        sub esp, 4ch
        mov ecx, esp
        mov dword ptr [esp + 68h], esp
        push edx
        call ext_006B9D20
        call ext_0072C1D0
        add esp, 54h
        cmp al, 1
        jne fn00736820_L_3a29
        lea eax, [esp + 1ch]
        push eax
        call ext_00736B40
        mov eax, dword ptr [esi + 4]
        add esp, 4
        xor edi, edi
        mov ecx, dword ptr [eax + 16ch]
        test ecx, ecx
        jle fn00736820_L_3a29
fn00736820_L_loop:
        mov ecx, dword ptr [eax + 17ch]
        lea edx, [esp + 100h]
        lea eax, [esp + 1ch]
        push edx
        mov ecx, dword ptr [ecx + 4*edi]
        push eax
        push 1
        call ext_0072C110
        test al, al
        jne fn00736820_L_3a29
        mov eax, dword ptr [esi + 4]
        inc edi
        cmp edi, dword ptr [eax + 16ch]
        jl fn00736820_L_loop
fn00736820_L_3a29:
        lea ecx, [esp + 100h]
        mov byte ptr [esp + 170h], 3
        call ext_0072BF70
fn00736820_L_3a3d:
        mov esi, dword ptr [esp + 178h]
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, esi
        call ext_006B9D20
        mov dword ptr [esp + 10h], 1
        lea ecx, [esp + 68h]
        mov byte ptr [esp + 170h], 2
        call ext_006B9D70
        lea ecx, [esp + 1ch]
        mov byte ptr [esp + 170h], 1
        call ext_006B9D70
        lea ecx, [esp + 0b4h]
        mov byte ptr [esp + 170h], 0
        call ext_006B9D70
        mov eax, esi
        jmp fn00736820_L_ret
fn00736820_L_end:
        sub esp, 4ch
        lea edx, [esp + 0b4h]
        mov ecx, esp
        mov dword ptr [esp + 60h], esp
        push edx
        call ext_006B9D20
        sub esp, 4ch
        lea eax, [esp + 0b4h]
        mov ecx, esp
        mov dword ptr [esp + 0b0h], esp
        push eax
        mov byte ptr [esp + 20ch], 5
        call ext_006B9D20
        mov edi, dword ptr [esp + 210h]
        mov ecx, esi
        push edi
        mov byte ptr [esp + 20ch], 3
        call ext_00742B00
        lea ecx, [esp + 68h]
        mov dword ptr [esp + 10h], 1
        mov byte ptr [esp + 170h], 2
        call ext_006B9D70
        lea ecx, [esp + 1ch]
        mov byte ptr [esp + 170h], 1
        call ext_006B9D70
        lea ecx, [esp + 0b4h]
        mov byte ptr [esp + 170h], 0
        call ext_006B9D70
        mov eax, edi
fn00736820_L_ret:
        mov ecx, dword ptr [esp + 168h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 168h
        ret 8
    }
}

// [0x00739640] sub_00739640 (816 bytes)
extern "C" void ext_0078D720();
extern "C" __declspec(naked) void __fastcall fn_00739640(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8be69eh
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 6Ch
        push ebp
        mov ebp, ecx
        push 0aadba0h
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00739640_early
        push ebx
        push esi
        push edi
fn00739640_top:
        push 38h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 14h], esi
        xor edi, edi
        cmp esi, edi
        mov dword ptr [esp + 84h], edi
        je fn00739640_null
        lea ebx, [esi + 8]
        push 20h
        push 10h
        mov ecx, ebx
        mov dword ptr [esi], edi
        mov dword ptr [esi + 4], edi
        call ext_006D2130
        lea eax, [ebx + 10h]
        mov dword ptr [ebx + 14h], eax
        push 10h
        lea ecx, [esi + 20h]
        mov byte ptr [esp + 88h], 1
        call ext_0078D720
        mov dword ptr [esp + 10h], esi
        jmp fn00739640_c1
fn00739640_null:
        mov dword ptr [esp + 10h], edi
        mov esi, edi
fn00739640_c1:
        mov ecx, dword ptr [ebp + 0ach]
        mov dword ptr [esp + 84h], 0ffffffffh
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00739640_L7398f5
        mov ecx, dword ptr [ebp + 0ach]
        push edi
        push 0aacd0ch
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [ebp + 0ach]
        push 0b5d2c0h
        push 0aadc2ch
        add ecx, 4
        call ext_00726AA0
        mov ecx, dword ptr [ebp + 0ach]
        push 0b5d2c0h
        push 0aadc10h
        add ecx, 4
        mov ebx, eax
        call ext_00726AA0
        push ebx
        mov edi, eax
        call ext_00743480
        push edi
        mov dword ptr [esi], eax
        call ext_007435A0
        add esp, 8
        mov dword ptr [esi + 4], eax
        mov ecx, dword ptr [ebp + 0ach]
        push 0aadc58h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00739640_L739881
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726900
        cdq
        and edx, 3
        lea ebx, [esi + 8]
        add eax, edx
        sar eax, 2
        test eax, eax
        jle fn00739640_L739873
        mov dword ptr [esp + 14h], eax
fn00739640_loop:
        lea ecx, [esp + 1ch]
        call ext_0077FB40
        mov ecx, dword ptr [ebp + 0ach]
        mov dword ptr [esp + 84h], 2
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [ebp + 0ach]
        fstp qword ptr [esp + 1ch]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [ebp + 0ach]
        fstp qword ptr [esp + 24h]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [ebp + 0ach]
        fstp qword ptr [esp + 2ch]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 34h]
        mov ecx, 8
        lea esi, [esp + 1ch]
        lea edi, [esp + 5ch]
        rep movsd
        mov eax, dword ptr [ebx]
        mov ecx, 8
        lea esi, [esp + 1ch]
        lea edi, [esp + 3ch]
        rep movsd
        lea ecx, [esp + 3ch]
        mov byte ptr [esp + 84h], 4
        push ecx
        push eax
        mov ecx, ebx
        call ext_006D2170
        lea ecx, [esp + 3ch]
        mov byte ptr [esp + 84h], 3
        call ext_006D80A0
        lea ecx, [esp + 5ch]
        mov byte ptr [esp + 84h], 2
        call ext_006D80A0
        lea ecx, [esp + 1ch]
        mov dword ptr [esp + 84h], 0ffffffffh
        call ext_006D80A0
        mov eax, dword ptr [esp + 14h]
        dec eax
        mov dword ptr [esp + 14h], eax
        jne fn00739640_loop
        mov esi, dword ptr [esp + 10h]
fn00739640_L739873:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726840
fn00739640_L739881:
        cmp dword ptr [esi + 4], 2
        jne fn00739640_L7398e7
        mov ecx, dword ptr [ebp + 0ach]
        push 0aadc4ch
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00739640_L7398e7
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726900
        test eax, eax
        lea edi, [esi + 20h]
        jle fn00739640_L7398d9
        mov ebx, eax
fn00739640_inner:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [edi]
        lea edx, [esp + 14h]
        mov ecx, edi
        push edx
        push eax
        call ext_006D2170
        dec ebx
        jne fn00739640_inner
fn00739640_L7398d9:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726840
fn00739640_L7398e7:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_007268D0
fn00739640_L7398f5:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 18h]
        mov dword ptr [esp + 18h], esi
        push ecx
        mov ecx, dword ptr [esp + 90h]
        mov edx, dword ptr [ecx]
        push edx
        call ext_006D2170
        mov ecx, dword ptr [ebp + 0ach]
        push 0aadba0h
        add ecx, 4
        call ext_00726770
        test al, al
        jne fn00739640_top
        pop edi
        pop esi
        pop ebx
        mov al, 1
        pop ebp
        mov ecx, dword ptr [esp + 6ch]
        mov dword ptr fs:[0], ecx
        add esp, 78h
        ret 4
fn00739640_early:
        mov ecx, dword ptr [esp + 70h]
        mov al, 1
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 78h
        ret 4
    }
}

// [0x00731550] sub_00731550 (800 bytes)
// Wraps the body in an MSVC SEH frame (state -1, __ehhandler 0x8BE10B), stores the
// stack args (esi = first, ebx = second) and runs a sequence of vtable-driven calls.
// Written as naked asm so the SEH frame and byte encodings stay exact.
extern "C" void ext_006E7460();
extern "C" void ext_006BC800();
extern "C" void ext_006BC380();
extern "C" void ext_006BC370();
extern "C" void ext_006B99C0();
extern "C" void ext_006D55F0();
extern "C" void ext_006E8E20();
extern "C" void ext_006C9FD0();
extern "C" void ext_006E9000();
extern "C" void ext_006DBE10();
extern "C" void ext_0079DAC0();
extern "C" void ext_00785450();
extern "C" void ext_00785480();
extern "C" void ext_0079DCE0();
extern "C" void ext_006DC480();
extern "C" void ext_006C9360();
extern "C" void ext_0079DB30();
extern "C" void ext_006DBDF0();
extern "C" void ext_0079DB20();

extern "C" __declspec(naked) void __fastcall fn_00731550(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 8BE10Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0C0h
        push ebx
        mov ebx, dword ptr [esp + 0D8h]
        push ebp
        push esi
        push edi
        xor edi, edi
        lea ecx, [ebx + 4Ch]
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 14h], edi
        call ext_006E7460
        mov esi, dword ptr [esp + 0E0h]
        push eax
        mov ecx, esi
        call ext_006BC800
        mov eax, dword ptr [ebx + 110h]
        mov ebp, 1
        cmp eax, ebp
        jne short fn00731550_L315BF
        mov ecx, dword ptr [ebx + 108h]
        mov eax, dword ptr [ebx + 10Ch]
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 14h], eax
        jmp near ptr fn00731550_L316A8
fn00731550_L315BF:
        mov ecx, esi
        mov dword ptr [esp + 18h], 0FFFFFFFFh
        mov dword ptr [esp + 1Ch], 7FFFFFFFh
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esp + 24h], 80000000h
        call ext_006BC380
        mov edx, dword ptr [eax]
        lea ecx, [esp + 20h]
        push ecx
        lea ecx, [esp + 1Ch]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 30h]
        mov ecx, esi
        call ext_006BC370
        mov edx, dword ptr [eax]
        lea ecx, [esp + 20h]
        push ecx
        lea ecx, [esp + 1Ch]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 30h]
        mov ecx, esi
        call ext_006B99C0
        mov ecx, eax
        call ext_006D55F0
        mov ebp, eax
        test ebp, ebp
        jle short fn00731550_L31644
fn00731550_L31620:
        push edi
        mov ecx, esi
        call ext_006B99C0
        mov ecx, eax
        call ext_006E8E20
        mov edx, dword ptr [eax]
        lea ecx, [esp + 20h]
        push ecx
        lea ecx, [esp + 1Ch]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 30h]
        inc edi
        cmp edi, ebp
        jl short fn00731550_L31620
fn00731550_L31644:
        mov ecx, esi
        call ext_006B99C0
        mov ecx, eax
        call ext_006C9FD0
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        jle short fn00731550_L3167F
fn00731550_L3165A:
        push edi
        mov ecx, esi
        call ext_006B99C0
        mov ecx, eax
        call ext_006E9000
        mov edx, dword ptr [eax]
        lea ecx, [esp + 20h]
        push ecx
        lea ecx, [esp + 1Ch]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 30h]
        inc edi
        cmp edi, ebp
        jl short fn00731550_L3165A
fn00731550_L3167F:
        lea edx, [esp + 18h]
        lea eax, [esp + 38h]
        push edx
        push eax
        lea ecx, [ebx + 108h]
        call ext_006DBE10
        mov ecx, dword ptr [eax]
        xor edi, edi
        mov dword ptr [esp + 10h], ecx
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esp + 14h], eax
        mov ebp, 1
fn00731550_L316A8:
        or ecx, eax
        je near ptr fn00731550_L3183F
        lea ecx, [esp + 48h]
        call ext_0079DAC0
        lea ecx, [esp + 28h]
        mov dword ptr [esp + 0D8h], edi
        push ecx
        lea ecx, [esp + 4Ch]
        mov dword ptr [esp + 2Ch], ebp
        mov dword ptr [esp + 30h], 80000000h
        mov dword ptr [esp + 34h], 0FFFFFFFFh
        mov dword ptr [esp + 38h], 7FFFFFFFh
        call ext_00785450
        lea edx, [esp + 30h]
        lea ecx, [esp + 48h]
        push edx
        call ext_00785480
        lea eax, [esp + 10h]
        lea ecx, [esp + 48h]
        push eax
        call ext_0079DCE0
        push ebp
        mov ecx, esi
        call ext_006BC380
        mov ecx, eax
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        push eax
        lea ecx, [esp + 50h]
        call ext_0079DB30
        mov ecx, esi
        call ext_006B99C0
        mov ebp, dword ptr [eax + 4]
        test ebp, ebp
        jle short fn00731550_L31761
fn00731550_L31734:
        mov ecx, esi
        call ext_006B99C0
        mov ecx, dword ptr [eax + 14h]
        push 1
        lea eax, [ecx + 4*edi]
        mov ecx, dword ptr [ecx + 4*edi]
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        push eax
        lea ecx, [esp + 50h]
        call ext_0079DB30
        inc edi
        cmp edi, ebp
        jl short fn00731550_L31734
fn00731550_L31761:
        mov ecx, esi
        call ext_006B99C0
        mov ecx, eax
        call ext_006D55F0
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        jle short fn00731550_L317A5
fn00731550_L31777:
        push 1
        push edi
        mov ecx, esi
        call ext_006B99C0
        mov ecx, eax
        call ext_006E8E20
        mov ecx, eax
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        push eax
        lea ecx, [esp + 50h]
        call ext_0079DB30
        inc edi
        cmp edi, ebp
        jl short fn00731550_L31777
fn00731550_L317A5:
        mov ecx, esi
        call ext_006B99C0
        mov ecx, eax
        call ext_006C9FD0
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        jle short fn00731550_L317E9
fn00731550_L317BB:
        push 1
        push edi
        mov ecx, esi
        call ext_006B99C0
        mov ecx, eax
        call ext_006E9000
        mov ecx, eax
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        push eax
        lea ecx, [esp + 50h]
        call ext_0079DB30
        inc edi
        cmp edi, ebp
        jl short fn00731550_L317BB
fn00731550_L317E9:
        lea edx, [esp + 10h]
        lea edi, [ebx + 0E8h]
        lea eax, [esp + 38h]
        push edx
        push eax
        mov ecx, edi
        call ext_006DBDF0
        mov ecx, dword ptr [eax]
        mov dword ptr [edi], ecx
        lea ecx, [esp + 40h]
        mov edx, dword ptr [eax + 4]
        lea eax, [esp + 10h]
        mov dword ptr [edi + 4], edx
        lea edi, [ebx + 0F0h]
        push eax
        push ecx
        mov ecx, edi
        call ext_006DBDF0
        mov edx, dword ptr [eax]
        lea ecx, [esp + 48h]
        mov dword ptr [edi], edx
        mov dword ptr [esp + 0D8h], 0FFFFFFFFh
        mov eax, dword ptr [eax + 4]
        mov dword ptr [edi + 4], eax
        call ext_0079DB20
fn00731550_L3183F:
        push 0AA8CB0h
        mov ecx, esi
        call ext_006BC800
        mov ecx, dword ptr [esp + 0D0h]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0CCh
        ret 8
    }
}

// [0x0073D110] sub_0073D110 (928 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BA7C0();
extern "C" void ext_006D2130();
extern "C" void ext_006D2250();
extern "C" void ext_006D2300();
extern "C" void ext_006D80A0();
extern "C" void ext_006FC940();
extern "C" void ext_006FC9E0();
extern "C" void ext_006FDE80();
extern "C" void ext_006FDF70();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726900();
extern "C" void ext_00726AA0();
extern "C" void ext_00726AE0();
extern "C" void ext_00726B40();
extern "C" void ext_00726BE0();
extern "C" void ext_0077FB40();
extern "C" void ext_0077FD70();
extern "C" void ext_0078D720();
extern "C" void ext_008BE866();
extern "C" char d_AACD0C[];
extern "C" char d_AADC2C[];
extern "C" char d_AADC4C[];
extern "C" char d_AADC58[];
extern "C" char d_AADFE0[];
extern "C" char d_AAE0D4[];
extern "C" char d_AAE0E4[];
extern "C" char d_B5D2C0[];
extern "C" __declspec(naked) void __fastcall fn_0073D110(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset ext_008BE866
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 70h
        push ebx
        push esi
        mov esi, ecx
        push offset d_AAE0E4
        mov bl, 1
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je L_496
        push ebp
        mov ebp, dword ptr [esp+8ch]
        push edi
        push 0
        mov ecx, ebp
        call ext_006FDF70
        mov ebx, eax
        test ebx, ebx
        jne L_172
        mov ecx, ebp
        call ext_006FDE80
        push eax
        mov ecx, ebp
        call ext_006FDF70
        mov ebx, eax
        L_172:
        mov ecx, ebx
        call ext_006FC940
        mov edi, eax
        test edi, edi
        jne L_1E5
        push 38h
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp+10h], edi
        xor eax, eax
        cmp edi, eax
        mov dword ptr [esp+88h], eax
        je L_1D0
        lea ebp, [edi+8]
        push 20h
        push 10h
        mov ecx, ebp
        mov dword ptr [edi], eax
        mov dword ptr [edi+4], eax
        call ext_006D2130
        lea eax, [ebp+10h]
        mov dword ptr [ebp+14h], eax
        push 10h
        lea ecx, [edi+20h]
        mov byte ptr [esp+8ch], 1
        call ext_0078D720
        mov ebp, dword ptr [esp+90h]
        jmp L_1D2
        L_1D0:
        xor edi, edi
        L_1D2:
        push edi
        mov ecx, ebx
        mov dword ptr [esp+8ch], 0ffffffffh
        call ext_006FC9E0
        L_1E5:
        lea ecx, [esp+34h]
        call ext_006B9D10
        mov ecx, dword ptr [esi+0ach]
        mov ebx, 2
        add ecx, 4
        mov dword ptr [esp+88h], ebx
        call ext_00726860
        test al, al
        je L_3A1
        mov ecx, dword ptr [esi+0ach]
        push 0
        push offset d_AACD0C
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi+0ach]
        push offset d_B5D2C0
        push offset d_AADC2C
        add ecx, 4
        call ext_00726AA0
        push eax
        lea ecx, [esp+38h]
        call ext_006B9EC0
        mov dword ptr [edi+4], ebx
        mov ecx, dword ptr [esi+0ach]
        push offset d_AADC58
        add ecx, 4
        call ext_00726770
        test al, al
        je L_325
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726900
        cdq
        and edx, 3
        lea ecx, [esp+14h]
        add eax, edx
        lea ebx, [edi+8]
        mov ebp, eax
        sar ebp, 2
        call ext_0077FB40
        push ebp
        mov ecx, ebx
        mov byte ptr [esp+8ch], 3
        call ext_006D2300
        test ebp, ebp
        jle L_2FF
        xor ebx, ebx
        L_2A0:
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi+0ach]
        fstp qword ptr [esp+14h]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi+0ach]
        fstp qword ptr [esp+1ch]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi+0ach]
        fstp qword ptr [esp+24h]
        add ecx, 4
        call ext_00726BE0
        mov edx, dword ptr [edi+18h]
        lea ecx, [esp+14h]
        fstp qword ptr [esp+2ch]
        push ecx
        mov ecx, ebx
        add ecx, edx
        call ext_0077FD70
        add ebx, 20h
        dec ebp
        jne L_2A0
        L_2FF:
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp+14h]
        mov byte ptr [esp+88h], 2
        call ext_006D80A0
        mov ebp, dword ptr [esp+90h]
        L_325:
        mov ecx, dword ptr [esi+0ach]
        push offset d_AADC4C
        add ecx, 4
        call ext_00726770
        test al, al
        je L_393
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726900
        mov ebx, eax
        lea ecx, [edi+20h]
        push ebx
        call ext_006D2300
        xor ebp, ebp
        test ebx, ebx
        jle L_37E
        L_35B:
        mov edx, dword ptr [edi+30h]
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        lea eax, [edx+4*ebp]
        mov dword ptr [esp+10h], eax
        call ext_00726AE0
        mov ecx, dword ptr [esp+10h]
        inc ebp
        cmp ebp, ebx
        mov dword ptr [ecx], eax
        jl L_35B
        L_37E:
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726840
        mov ebp, dword ptr [esp+90h]
        L_393:
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_007268D0
        L_3A1:
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726840
        mov eax, dword ptr [edi+8]
        lea esi, [edi+8]
        xor bl, bl
        test eax, eax
        je L_45C
        mov eax, dword ptr [edi+20h]
        test eax, eax
        je L_40A
        push offset d_AADFE0
        lea ecx, [esp+38h]
        mov dword ptr [edi+4], 2
        call ext_006BA7C0
        test al, al
        je L_3ED
        mov dword ptr [edi], 1
        mov eax, dword ptr [edi+20h]
        mov ecx, dword ptr [ebp+28h]
        jmp L_454
        L_3ED:
        push offset d_AAE0D4
        lea ecx, [esp+38h]
        call ext_006BA7C0
        test al, al
        je L_45C
        mov dword ptr [edi], 2
        mov eax, dword ptr [edi+20h]
        jmp L_44E
        L_40A:
        push offset d_AADFE0
        lea ecx, [esp+38h]
        mov dword ptr [edi+4], 0
        call ext_006BA7C0
        test al, al
        je L_434
        mov dword ptr [edi], 1
        mov eax, dword ptr [esi]
        cmp eax, dword ptr [ebp+28h]
        jne L_45C
        mov bl, 1
        jmp L_46B
        L_434:
        push offset d_AAE0D4
        lea ecx, [esp+38h]
        call ext_006BA7C0
        test al, al
        je L_45C
        mov dword ptr [edi], 2
        mov eax, dword ptr [esi]
        L_44E:
        mov ecx, dword ptr [ebp+1dch]
        L_454:
        cmp eax, ecx
        jne L_45C
        mov bl, 1
        jmp L_46B
        L_45C:
        mov ecx, esi
        call ext_006D2250
        lea ecx, [edi+20h]
        call ext_006D2250
        L_46B:
        lea ecx, [esp+34h]
        mov dword ptr [esp+88h], 0ffffffffh
        call ext_006B9D70
        pop edi
        pop ebp
        mov al, bl
        pop esi
        pop ebx
        mov ecx, dword ptr [esp+70h]
        mov dword ptr fs:[0], ecx
        add esp, 7ch
        ret 4
        L_496:
        mov ecx, dword ptr [esp+78h]
        mov al, bl
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 7ch
        ret 4
    }
}

// [0x007338E0] sub_007338E0 (928 bytes)
extern "C" void ext_006D80A0(); extern "C" void ext_00726AA0(); extern "C" void ext_00726C20(); extern "C" void ext_0079D6D0();
extern "C" void ext_006B9950(); extern "C" void ext_006B9D10(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9E60(); extern "C" void ext_006B9EC0(); extern "C" void ext_006D23F0(); extern "C" void ext_006D57D0(); extern "C" void ext_006E7460(); extern "C" void ext_006EA6D0(); extern "C" void ext_006F75B0(); extern "C" void ext_00736C90();
extern "C" __declspec(naked) void __fastcall fn_007338E0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 8be28fh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 15ch
        push esi
        mov esi, ecx
        lea ecx, [esp+10h]
        call ext_006B9D10
        lea ecx, [esp+5ch]
        mov dword ptr [esp+168h], 0
        call ext_006EA6D0
        mov ecx, dword ptr [esi+0ach]
        mov byte ptr [esp+168h], 1
        call ext_0079D6D0
        test al, al
        je L1
        mov ecx, dword ptr [esi+0ach]
        push 0b5d2c0h
        add ecx, 4
        push 0aad728h
        call ext_00726AA0
        push eax
        lea ecx, [esp+14h]
        call ext_006B9EC0
        lea ecx, [esp+10h]
        call ext_006B9950
        test al, al
        jne L1
        lea ecx, [esp+10h]
        call ext_006E7460
        push eax
        lea eax, [esp+118h]
        push 0aa8704h
        push eax
        call ext_006D57D0
        add esp, 0ch
        lea ecx, [esp+114h]
        mov byte ptr [esp+168h], 2
        call ext_006E7460
        push eax
        mov ecx, esi
        call ext_00736C90
        lea ecx, [esp+114h]
        mov dword ptr [esp+5ch], eax
        mov byte ptr [esp+168h], 1
        call ext_006B9D70
L1:
        mov ecx, dword ptr [esi+0ach]
        push 0b5d2c0h
        add ecx, 4
        push 0aad720h
        call ext_00726AA0
        push eax
        lea ecx, [esp+14h]
        call ext_006B9EC0
        lea ecx, [esp+10h]
        call ext_006B9950
        test al, al
        jne L2
        lea ecx, [esp+10h]
        push ecx
        lea ecx, [esp+64h]
        call ext_006B9E60
L2:
        mov ecx, dword ptr [esi+0ach]
        push 0
        push 0
        push 0aad714h
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp+4]
        push 0
        lea ecx, [esp+0b0h]
        call ext_006D23F0
        mov edx, dword ptr [esp+4]
        mov ecx, dword ptr [esp+8]
        mov dword ptr [eax], edx
        push 0
        push 0
        push 0aad708h
        mov dword ptr [eax+4], ecx
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp+4]
        push 1
        lea ecx, [esp+0b0h]
        call ext_006D23F0
        mov edx, dword ptr [esp+4]
        mov ecx, dword ptr [esp+8]
        mov dword ptr [eax], edx
        push 0
        push 0
        push 0aad6fch
        mov dword ptr [eax+4], ecx
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp+4]
        push 2
        lea ecx, [esp+0b0h]
        call ext_006D23F0
        mov edx, dword ptr [esp+4]
        mov ecx, dword ptr [esp+8]
        mov dword ptr [eax], edx
        push 0
        push 0
        push 0aad6f0h
        mov dword ptr [eax+4], ecx
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp+4]
        push 0
        lea ecx, [esp+0d0h]
        call ext_006D23F0
        mov edx, dword ptr [esp+4]
        mov ecx, dword ptr [esp+8]
        mov dword ptr [eax], edx
        push 0
        push 0
        push 0aad6e4h
        mov dword ptr [eax+4], ecx
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp+4]
        push 1
        lea ecx, [esp+0d0h]
        call ext_006D23F0
        mov edx, dword ptr [esp+4]
        mov ecx, dword ptr [esp+8]
        mov dword ptr [eax], edx
        push 0
        push 0
        push 0aad6d8h
        mov dword ptr [eax+4], ecx
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp+4]
        push 2
        lea ecx, [esp+0d0h]
        call ext_006D23F0
        mov edx, dword ptr [esp+4]
        mov ecx, dword ptr [esp+8]
        mov dword ptr [eax], edx
        push 3ff00000h
        push 0
        mov dword ptr [eax+4], ecx
        mov ecx, dword ptr [esi+0ach]
        push 0aad6cch
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp+4]
        push 0
        lea ecx, [esp+0f0h]
        call ext_006D23F0
        mov edx, dword ptr [esp+4]
        mov ecx, dword ptr [esp+8]
        mov dword ptr [eax], edx
        push 3ff00000h
        push 0
        push 0aad6c0h
        mov dword ptr [eax+4], ecx
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp+4]
        push 1
        lea ecx, [esp+0f0h]
        call ext_006D23F0
        mov edx, dword ptr [esp+4]
        mov ecx, dword ptr [esp+8]
        mov dword ptr [eax], edx
        push 3ff00000h
        push 0
        push 0aad6b4h
        mov dword ptr [eax+4], ecx
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp+4]
        push 2
        lea ecx, [esp+0f0h]
        call ext_006D23F0
        mov edx, dword ptr [esp+4]
        mov ecx, dword ptr [esp+8]
        mov dword ptr [eax], edx
        lea edx, [esp+5ch]
        push 1
        push edx
        mov dword ptr [eax+4], ecx
        mov eax, dword ptr [ebp+0ch]
        mov ecx, dword ptr [ebp+8]
        push eax
        call ext_006F75B0
        lea ecx, [esp+0ech]
        mov byte ptr [esp+168h], 5
        call ext_006D80A0
        lea ecx, [esp+0cch]
        mov byte ptr [esp+168h], 4
        call ext_006D80A0
        lea ecx, [esp+0ach]
        mov byte ptr [esp+168h], 3
        call ext_006D80A0
        lea ecx, [esp+60h]
        mov byte ptr [esp+168h], 0
        call ext_006B9D70
        lea ecx, [esp+10h]
        mov dword ptr [esp+168h], 0ffffffffh
        call ext_006B9D70
        mov ecx, dword ptr [esp+160h]
        pop esi
        mov dword ptr fs:[0], ecx
        mov esp, ebp
        pop ebp
        ret 8
    }
}

// [0x00732840] sub_00732840 (944 bytes)
extern "C" void ext_006B9D10(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9D80(); extern "C" void ext_006BC370(); extern "C" void ext_006C2990(); extern "C" void ext_006C31E0(); extern "C" void ext_006E7460(); extern "C" void ext_007008D0(); extern "C" void ext_00700910(); extern "C" void ext_00700930(); extern "C" void ext_00700950(); extern "C" void ext_00726A40(); extern "C" void ext_00732BF0();
extern "C" __declspec(naked) void __fastcall fn_00732840(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 8be21dh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0d4h
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push 4
        push 10h
        lea ecx, [esp + 24h]
        call ext_006D2130
        lea eax, [esp + 2ch]
        mov dword ptr [esp + 30h], eax
        xor edi, edi
        push 1
        push 10h
        lea ecx, [esp + 3ch]
        mov dword ptr [esp + 0f4h], edi
        call ext_006D2130
        lea ecx, [esp + 44h]
        mov dword ptr [esp + 48h], ecx
        mov ecx, dword ptr [ebp + 0ach]
        push 0aad534h
        add ecx, 4
        mov byte ptr [esp + 0f0h], 1
        mov dword ptr [esp + 1ch], edi
        call ext_00726770
        test al, al
        je L73298D
        mov bl, 3
    L7328BD:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je L732964
        push 9ch
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 10h], esi
        test esi, esi
        mov byte ptr [esp + 0ech], 2
        je L73290F
        push 0b5d2c0h
        mov ecx, esi
        call ext_006B9D80
        lea ecx, [esi + 4ch]
        mov byte ptr [esp + 0ech], bl
        call ext_006B9D10
        jmp L732911
    L73290F:
        xor esi, esi
    L732911:
        push esi
        mov ecx, ebp
        mov byte ptr [esp + 0f0h], 1
        mov dword ptr [esp + 1ch], esi
        call ext_00732BF0
        mov eax, dword ptr [esp + 1ch]
        lea edx, [esp + 10h]
        push edx
        push eax
        lea ecx, [esp + 24h]
        mov dword ptr [esp + 18h], esi
        call ext_006D2170
        mov edx, dword ptr [esp + 34h]
        lea ecx, [esp + 17h]
        push ecx
        push edx
        lea ecx, [esp + 3ch]
        mov byte ptr [esp + 1fh], 0
        call ext_006D2170
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726860
        mov edi, esi
    L732964:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [ebp + 0ach]
        push 0aad534h
        add ecx, 4
        call ext_00726770
        test al, al
        jne L7328BD
    L73298D:
        mov ecx, dword ptr [ebp + 0ach]
        push 0aad528h
        add ecx, 4
        call ext_00726770
        test al, al
        je L732B46
    L7329A8:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 9ch]
        call ext_006B9D80
        mov ecx, dword ptr [ebp + 0ach]
        mov byte ptr [esp + 0ech], 4
        add ecx, 4
        xor ebx, ebx
        call ext_00726A40
        push eax
        lea ecx, [esp + 50h]
        call ext_006B9D80
        push ebx
        push 1
        lea ecx, [esp + 0a0h]
        mov byte ptr [esp + 0f4h], 5
        call ext_006E7460
        mov ecx, dword ptr [esp + 0fch]
        push eax
        call ext_006BC370
        mov ecx, eax
        call ext_006C2990
        mov esi, eax
        test esi, esi
        je L732A2A
        mov ecx, esi
        call ext_006C31E0
        test eax, eax
        je L732A2A
        mov ecx, esi
        call ext_006C31E0
        mov ebx, eax
    L732A2A:
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [esp + 10h], 0
        test eax, eax
        jle L732AAA
    L732A3A:
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 10h]
        lea edi, [eax + 4*ecx]
        lea ecx, [esp + 4ch]
        call ext_006E7460
        mov ecx, dword ptr [edi]
        mov esi, eax
        call ext_006E7460
    L732A57:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L732A7B
        test cl, cl
        je L732A77
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L732A7B
        add eax, 2
        add esi, 2
        test cl, cl
        jne L732A57
    L732A77:
        xor eax, eax
        jmp L732A80
    L732A7B:
        sbb eax, eax
        sbb eax, -1
    L732A80:
        test eax, eax
        je L732A97
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 1ch]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 10h], eax
        jl L732A3A
        jmp L732AA6
    L732A97:
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [eax + 4*ecx]
        mov dword ptr [esp + 18h], edx
    L732AA6:
        mov edi, dword ptr [esp + 18h]
    L732AAA:
        test ebx, ebx
        je L732AF8
        test edi, edi
        je L732AF8
        lea ecx, [edi + 4ch]
        call ext_006E7460
        push eax
        mov ecx, ebx
        call ext_007008D0
        mov al, byte ptr [edi + 98h]
        mov ecx, ebx
        push eax
        call ext_00700910
        mov cl, byte ptr [edi + 99h]
        push ecx
        mov ecx, ebx
        call ext_00700930
        mov dl, byte ptr [edi + 9ah]
        mov ecx, ebx
        push edx
        call ext_00700950
        mov eax, dword ptr [esp + 44h]
        mov ecx, dword ptr [esp + 10h]
        mov byte ptr [eax + ecx], 1
    L732AF8:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 4ch]
        mov byte ptr [esp + 0ech], 4
        call ext_006B9D70
        lea ecx, [esp + 98h]
        mov byte ptr [esp + 0ech], 1
        call ext_006B9D70
        mov ecx, dword ptr [ebp + 0ach]
        push 0aad528h
        add ecx, 4
        call ext_00726770
        test al, al
        jne L7329A8
    L732B46:
        mov eax, dword ptr [esp + 1ch]
        xor edi, edi
        test eax, eax
        jle L732BA6
        mov bl, 6
    L732B52:
        mov edx, dword ptr [esp + 44h]
        cmp byte ptr [edx + edi], 1
        je L732B9D
        mov eax, dword ptr [esp + 2ch]
        mov esi, dword ptr [eax + 4*edi]
        test esi, esi
        mov dword ptr [esp + 10h], esi
        je L732B92
        lea ecx, [esi + 4ch]
        mov byte ptr [esp + 0ech], bl
        call ext_006B9D70
        mov ecx, esi
        mov byte ptr [esp + 0ech], 1
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 4
    L732B92:
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [ecx + 4*edi], 0
    L732B9D:
        mov eax, dword ptr [esp + 1ch]
        inc edi
        cmp edi, eax
        jl L732B52
    L732BA6:
        lea ecx, [esp + 34h]
        mov byte ptr [esp + 0ech], 0
        call ext_006D2160
        lea ecx, [esp + 1ch]
        mov dword ptr [esp + 0ech], 0ffffffffh
        call ext_006D2160
        mov ecx, dword ptr [esp + 0e4h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0e0h
        ret 4
    }
}

// [0x0073F420] sub_0073F420 (960 bytes)
extern "C" void ext_006B9950(); extern "C" void ext_006B9D10(); extern "C" void ext_006B9D20(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9D80(); extern "C" void ext_006B9EC0(); extern "C" void ext_006BA7A0(); extern "C" void ext_006D2130(); extern "C" void ext_006D2160(); extern "C" void ext_006DC9E0(); extern "C" void ext_006E7460(); extern "C" void ext_00704D80(); extern "C" void ext_00704DB0(); extern "C" void ext_00704EB0(); extern "C" void ext_00704EC0(); extern "C" void ext_00705140(); extern "C" void ext_00705160(); extern "C" void ext_00705170(); extern "C" void ext_00705190(); extern "C" void ext_0072BF40(); extern "C" void ext_0072BF70(); extern "C" void ext_0072C050(); extern "C" void ext_0072C060(); extern "C" void ext_0072C110(); extern "C" void ext_0072C1D0(); extern "C" void ext_0072C870(); extern "C" void ext_00736B40(); extern "C" void ext_00742E60(); extern "C" void ext_0079CD60(); extern "C" void ext_0079D6D0();

// [0x0073F420] sub_0073F420 (960 bytes)
extern "C" __declspec(naked) void __fastcall fn_0073F420(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0h]
        push -1
        push 8be944h
        push eax
        mov dword ptr fs:[0h], esp
        sub esp, 168h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je fn0073F420_c1
        mov al, 1
        jmp fn0073F420_epi
fn0073F420_c1:
        push 4
        push 10h
        lea ecx, [esp + 1ch]
        call ext_006D2130
        lea eax, [esp + 24h]
        mov dword ptr [esp + 28h], eax
        mov edi, dword ptr [esp + 188h]
        lea eax, [esp + 14h]
        xor ebp, ebp
        push eax
        mov edx, dword ptr [edi]
        mov ecx, edi
        mov dword ptr [esp + 184h], ebp
        call dword ptr [edx + 10h]
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx + 0ch]
        mov ecx, dword ptr [esi + 0ach]
        push eax
        lea eax, [esp + 18h]
        push eax
        call ext_0079CD60
        mov ecx, edi
        call ext_006DC9E0
        push edi
        mov ecx, esi
        call ext_00742E60
        mov ecx, dword ptr [esi + 0ach]
        push ebp
        add ecx, 4
        push 0aabaa4h
        call ext_00726B40
        test eax, eax
        setne cl
        push ecx
        mov ecx, edi
        call ext_00704D80
        mov ecx, dword ptr [esi + 0ach]
        push ebp
        push 0aacd0ch
        add ecx, 4
        call ext_00726B40
        cmp eax, 64h
        jle fn0073F420_c2
        mov ecx, dword ptr [esi + 0ach]
        push ebp
        add ecx, 4
        push 0aad8dch
        call ext_00726B40
        test eax, eax
        setne dl
        push edx
        mov ecx, edi
        call ext_00705140
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aad8c8h
        add ecx, 4
        call ext_00726AA0
        push eax
        mov ecx, edi
        call ext_00705170
fn0073F420_c2:
        lea ecx, [esp + 2ch]
        call ext_006B9D10
        lea ecx, [esp + 78h]
        mov byte ptr [esp + 180h], 1
        call ext_006B9D10
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aad8bch
        add ecx, 4
        mov byte ptr [esp + 188h], 2
        call ext_00726AA0
        push eax
        lea ecx, [esp + 30h]
        call ext_006B9EC0
        mov ecx, edi
        call ext_00704EB0
        push eax
        lea ecx, [esp + 30h]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aad8a8h
        add ecx, 4
        call ext_00726AA0
        push eax
        lea ecx, [esp + 7ch]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0ach]
        push 0aad8a0h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073F420_fail
        mov eax, dword ptr [esi + 0ach]
        push ebp
        lea edx, [esp + 7ch]
        push 0b5d2c0h
        lea ecx, [eax + 4]
        push edx
        lea edx, [esp + 38h]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 4]
        mov ecx, dword ptr [esi + 0ach]
        mov bl, al
        add ecx, 4
        call ext_00726840
        test bl, bl
        je fn0073F420_fail
        mov ecx, edi
        call ext_00705160
        test al, al
        jne fn0073F420_fail
        lea ecx, [esp + 0c4h]
        call ext_0072BF40
        mov bl, 3
        mov ecx, edi
        mov byte ptr [esp + 180h], bl
        call ext_00705190
        sub esp, 4ch
        mov ecx, esp
        mov dword ptr [esp + 5ch], esp
        push eax
        call ext_006B9D80
        lea ecx, [esp + 110h]
        call ext_0072C060
        mov ecx, edi
        call ext_00705160
        push eax
        lea ecx, [esp + 0c8h]
        call ext_0072C050
        lea eax, [esp + 2ch]
        lea ecx, [esp + 12ch]
        push eax
        call ext_006B9D20
        lea ecx, [esp + 0c4h]
        push 1
        push ecx
        lea edx, [esp + 34h]
        sub esp, 4ch
        mov byte ptr [esp + 1d4h], 4
        mov ecx, esp
        mov dword ptr [esp + 64h], esp
        push edx
        call ext_006B9D20
        call ext_0072C1D0
        add esp, 54h
        cmp al, 1
        jne fn0073F420_s2
        lea eax, [esp + 2ch]
        push eax
        call ext_00736B40
        mov eax, dword ptr [esi + 4h]
        add esp, 4
        mov ecx, dword ptr [eax + 16ch]
        test ecx, ecx
        jle fn0073F420_s1
fn0073F420_loop:
        mov ecx, dword ptr [eax + 17ch]
        lea edx, [esp + 0c4h]
        lea eax, [esp + 2ch]
        push edx
        mov ecx, dword ptr [ecx + 4*ebp]
        push eax
        push 1
        call ext_0072C110
        test al, al
        jne fn0073F420_s1
        mov eax, dword ptr [esi + 4h]
        inc ebp
        cmp ebp, dword ptr [eax + 16ch]
        jl fn0073F420_loop
fn0073F420_s1:
        mov ecx, dword ptr [esi + 4h]
        mov eax, dword ptr [ecx + 16ch]
        test eax, eax
        jne fn0073F420_s2
        lea edx, [esp + 0c4h]
        lea eax, [esp + 2ch]
        push edx
        push 0
        sub esp, 4ch
        mov ecx, esp
        mov dword ptr [esp + 64h], esp
        push eax
        call ext_006B9D20
        call ext_0072C870
        add esp, 54h
fn0073F420_s2:
        lea ecx, [esp + 2ch]
        push ecx
        lea ecx, [esp + 130h]
        call ext_006BA7A0
        test al, al
        je fn0073F420_s3
        push 0b5d2c0h
        lea ecx, [esp + 7ch]
        call ext_006B9EC0
fn0073F420_s3:
        lea ecx, [esp + 12ch]
        mov byte ptr [esp + 180h], bl
        call ext_006B9D70
        lea ecx, [esp + 0c4h]
        mov byte ptr [esp + 180h], 2
        call ext_0072BF70
fn0073F420_fail:
        lea ecx, [esp + 2ch]
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_00704DB0
        lea ecx, [esp + 78h]
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_00704EC0
        lea ecx, [esp + 2ch]
        call ext_006B9950
        test al, al
        lea ecx, [esp + 78h]
        mov byte ptr [esp + 180h], 1
        sete bl
        call ext_006B9D70
        lea ecx, [esp + 2ch]
        mov byte ptr [esp + 180h], 0
        call ext_006B9D70
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 180h], -1
        call ext_006D2160
        mov al, bl
fn0073F420_epi:
        mov ecx, dword ptr [esp + 178h]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0h], ecx
        pop ebx
        add esp, 174h
        ret 4
    }
}

// [0x0073DCD0] sub_0073DCD0 (1024 bytes)
extern "C" void ext_0073E0D0(); extern "C" void ext_0073A1D0(); extern "C" void ext_0073A260(); extern "C" void ext_007097B0(); extern "C" void ext_00738C70(); extern "C" void ext_00738CB0();
extern "C" void ext_006DEEC0(); extern "C" void ext_006D7A90(); extern "C" void ext_006D23F0(); extern "C" void ext_006D7C40(); extern "C" void ext_006D7C80(); extern "C" void ext_006D7CA0(); extern "C" void ext_006D7CC0(); extern "C" void ext_006D7CE0();

extern "C" __declspec(naked) void __fastcall fn_0073DCD0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 14h
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, 4
        push 64h
        mov ecx, dword ptr [esi + 0ach]
        push 0aae350h
        add ecx, edi
        mov dword ptr [esp + 1ch], edi
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        push 0aae344h
        add ecx, edi
        call ext_00726770
        mov ebx, dword ptr [ebp + 8]
        test al, al
        je fn0073DCD0_L1
        push ebx
        mov ecx, esi
        call ext_0073E0D0
        push ebx
        mov ecx, esi
        mov edi, eax
        call ext_0073E0D0
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 14h], eax
        add ecx, 4
        call ext_00726840
fn0073DCD0_L1:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae2ach
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073DCD0_L2
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 18h], eax
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 10h], eax
        add ecx, 4
        call ext_00726840
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 18h]
        push eax
        push ecx
        push edi
        push edx
        mov ecx, ebx
        call ext_006D7C40
fn0073DCD0_L2:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae2c0h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073DCD0_L3
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [ebx + 1c8h], eax
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov edi, eax
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 10h], eax
        add ecx, 4
        call ext_00726840
        mov eax, dword ptr [esp + 10h]
        mov ecx, ebx
        push eax
        push edi
        call ext_006D7C80
fn0073DCD0_L3:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae2b8h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073DCD0_L4
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov edi, eax
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 10h], eax
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esp + 10h]
        push ecx
        push edi
        mov ecx, ebx
        call ext_006D7C80
fn0073DCD0_L4:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae300h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073DCD0_L5
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        test eax, eax
        setne dl
        add ecx, 4
        mov byte ptr [esp + 14h], dl
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        test eax, eax
        setne al
        add ecx, 4
        mov byte ptr [esp + 10h], al
        call ext_00726840
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        push ecx
        push edx
        mov ecx, ebx
        call ext_006D7CA0
fn0073DCD0_L5:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae33ch
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073DCD0_L6
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        test eax, eax
        setne al
        add ecx, 4
        mov byte ptr [esp + 14h], al
        call ext_00726AE0
        test eax, eax
        setne cl
        mov byte ptr [esp + 10h], cl
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 14h]
        push edx
        push eax
        mov ecx, ebx
        call ext_006D7CC0
fn0073DCD0_L6:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae334h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073DCD0_L7
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        test eax, eax
        setne cl
        mov byte ptr [esp + 14h], cl
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        test eax, eax
        setne dl
        add ecx, 4
        mov byte ptr [esp + 10h], dl
        call ext_00726840
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 14h]
        push eax
        push ecx
        mov ecx, ebx
        call ext_006D7CE0
fn0073DCD0_L7:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae2a4h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073DCD0_L8
        xor edi, edi
        mov ecx, ebx
        mov dword ptr [esp + 10h], edi
        call ext_006D7A90
        test eax, eax
        jle fn0073DCD0_L9
        mov dword ptr [esp + 14h], edi
fn0073DCD0_L10:
        mov ecx, ebx
        call ext_006DEEC0
        mov ecx, dword ptr [esi + 0ach]
        mov edi, eax
        mov eax, dword ptr [esp + 14h]
        add ecx, 4
        add edi, eax
        call ext_00726BE0
        fstp qword ptr [esp + 18h]
        push 0
        mov ecx, edi
        call ext_006D23F0
        mov edx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 18h]
        push 1
        mov ecx, edi
        call ext_006D23F0
        mov edx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 18h]
        push 2
        mov ecx, edi
        call ext_006D23F0
        mov edx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [eax], edx
        push 3
        mov dword ptr [eax + 4], ecx
        mov ecx, edi
        call ext_006D23F0
        mov edi, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [eax], 0
        inc edi
        add edx, 20h
        mov ecx, ebx
        mov dword ptr [eax + 4], 3ff00000h
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 14h], edx
        call ext_006D7A90
        cmp edi, eax
        jl fn0073DCD0_L10
fn0073DCD0_L9:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn0073DCD0_L8:
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        push ebx
        mov ecx, esi
        je fn0073DCD0_L11
        call ext_007097B0
        push ebx
        mov ecx, esi
        call ext_00738C70
        mov al, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
fn0073DCD0_L11:
        call ext_00738CB0
        push ebx
        mov ecx, esi
        call ext_0073A1D0
        push ebx
        mov ecx, esi
        call ext_0073A260
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}
