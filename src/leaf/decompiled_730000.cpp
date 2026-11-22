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

// [0x00730220] sub_00730220 (1104 bytes)
extern "C" void ext_006BA7C0(); extern "C" void ext_006BADB0(); extern "C" void ext_006BC3B0(); extern "C" void ext_006BC430(); extern "C" void ext_006BC440(); extern "C" void ext_006BC460(); extern "C" void ext_006BC520(); extern "C" void ext_006BC540(); extern "C" void ext_006BC610(); extern "C" void ext_006BC630(); extern "C" void ext_006BC6F0(); extern "C" void ext_006BC760(); extern "C" void ext_006BC7C0(); extern "C" void ext_006D2130(); extern "C" void ext_006D2160(); extern "C" void ext_006D3560(); extern "C" void ext_006D37E0(); extern "C" void ext_006D3900(); extern "C" void ext_006D39B0(); extern "C" void ext_006D3A60(); extern "C" void ext_006D3B90(); extern "C" void ext_006D3CB0(); extern "C" void ext_006E7460(); extern "C" void ext_00726B40(); extern "C" void ext_0072F8D0(); extern "C" void ext_00732F10(); extern "C" void ext_00734EE0(); extern "C" void ext_00735140(); extern "C" void ext_00736CB0(); extern "C" void ext_00736D80(); extern "C" void ext_0073E150(); extern "C" void ext_0073EF50(); extern "C" void ext_0073F420(); extern "C" void ext_00740470(); extern "C" void ext_00742E60(); extern "C" void ext_00782D90(); extern "C" void ext_0079C220(); extern "C" void ext_0079CD60();

extern "C" __declspec(naked) void __fastcall fn_00730220(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 08be5c8h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp+38h]
        mov esi, ecx
        push 0aad3a8h
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je fn00730220_26c
        mov eax, dword ptr [esp+3ch]
        mov ecx, esi
        push eax
        call ext_0072F8D0
        mov ecx, dword ptr [esp+34h]
        push eax
        call ext_006BC7C0
        jmp fn00730220_64b
fn00730220_26c:
        push 0aad264h
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je fn00730220_2d6
        mov ecx, dword ptr [esp+40h]
        call ext_006E7460
        mov ecx, dword ptr [esi+4]
        push eax
        call ext_006D3560
        mov edi, eax
        push edi
        mov ecx, edi
        call ext_006BADB0
        push eax
        lea ecx, [esi+0b8h]
        call ext_00782D90
        push edi
        mov ecx, esi
        call ext_00736CB0
fn00730220_2ac:
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx+0ch]
fn00730220_2b3:
        mov edx, dword ptr [eax]
        push 0
        push 0
        mov ecx, eax
        call dword ptr [edx]
        push eax
        mov ecx, edi
        call ext_006BADB0
        mov ecx, dword ptr [esi+0ach]
        push eax
        call ext_0079C220
        jmp fn00730220_64b
fn00730220_2d6:
        push 0aad40ch
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je fn00730220_30b
        mov ecx, dword ptr [esp+40h]
        call ext_006E7460
        mov ecx, dword ptr [esi+4]
        push eax
        call ext_006D37E0
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_0073EF50
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax+0ch]
        jmp fn00730220_2b3
fn00730220_30b:
        push 0aad404h
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je fn00730220_343
        mov ecx, dword ptr [esp+40h]
        call ext_006E7460
        mov ecx, dword ptr [esi+4]
        push eax
        call ext_006D3900
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_0073E150
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax+0ch]
        jmp fn00730220_2b3
fn00730220_343:
        push 0aad20ch
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je fn00730220_37b
        mov ecx, dword ptr [esp+40h]
        call ext_006E7460
        mov ecx, dword ptr [esi+4]
        push eax
        call ext_006D39B0
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_0073F420
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax+0ch]
        jmp fn00730220_2b3
fn00730220_37b:
        push 0aabef8h
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je fn00730220_3ed
        mov edi, dword ptr [esp+3ch]
        push 0aa87b0h
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        jne fn00730220_3b3
        push 0aa8788h
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je fn00730220_64b
fn00730220_3b3:
        mov ecx, edi
        call ext_006E7460
        mov ecx, dword ptr [esp+40h]
        push eax
        call ext_006E7460
        mov ecx, dword ptr [esi+4]
        push eax
        call ext_006D3B90
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_00740470
        mov ecx, dword ptr [esp+34h]
        push edi
        call ext_006BC430
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax+0ch]
        jmp fn00730220_2b3
fn00730220_3ed:
        push 0aad3fch
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je fn00730220_4d4
        mov edi, dword ptr [esp+3ch]
        push 0aad3ech
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je fn00730220_45a
        mov ecx, dword ptr [esp+40h]
        call ext_006E7460
        mov ebx, dword ptr [esp+34h]
        push eax
        mov ecx, ebx
        call ext_006BC630
        mov edi, eax
        cmp edi, -1
        je fn00730220_64b
        push edi
        mov ecx, ebx
        call ext_006BC610
        push eax
        mov ecx, esi
        call ext_00734EE0
        test al, al
        jne fn00730220_64b
        push edi
        mov ecx, ebx
        call ext_006BC6F0
        jmp fn00730220_64b
fn00730220_45a:
        push 0aad100h
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        jne fn00730220_47e
        push 0aad0f4h
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je fn00730220_64b
fn00730220_47e:
        push 0aad100h
        mov ecx, edi
        call ext_006BA7C0
        mov ecx, dword ptr [esp+40h]
        mov byte ptr [esp+3ch], al
        mov ebx, dword ptr [esp+3ch]
        push ebx
        call ext_006E7460
        mov ecx, dword ptr [esi+4]
        push eax
        call ext_006D3A60
        mov edi, eax
        push ebx
        push edi
        mov ecx, esi
        call ext_00735140
        test al, al
        jne fn00730220_4c5
        mov ecx, dword ptr [esi+4]
        push edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax+90h]
        jmp fn00730220_64b
fn00730220_4c5:
        mov ecx, dword ptr [esp+34h]
        push edi
        call ext_006BC760
        jmp fn00730220_64b
fn00730220_4d4:
        push 0aa96f8h
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je fn00730220_50f
        mov ecx, dword ptr [esp+40h]
        call ext_006E7460
        mov ecx, dword ptr [esi+4]
        push eax
        call ext_006D3CB0
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_00736D80
        mov ecx, dword ptr [esp+34h]
        push edi
        call ext_006BC3B0
        jmp fn00730220_2ac
fn00730220_50f:
        push 0aad21ch
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je fn00730220_56f
        mov ecx, dword ptr [esp+3ch]
        push 0aaa374h
        call ext_006BA7C0
        test al, al
        je fn00730220_64b
        mov ecx, dword ptr [esp+40h]
        call ext_006E7460
        mov edi, dword ptr [esp+34h]
        push eax
        mov ecx, edi
        call ext_006BC460
        cmp eax, -1
        je fn00730220_64b
        push eax
        mov ecx, edi
        call ext_006BC440
        mov edi, eax
        lea eax, [esp+40h]
        push eax
        push edi
        mov ecx, esi
        call ext_00732F10
        jmp fn00730220_2ac
fn00730220_56f:
        push 0aab8c0h
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je fn00730220_64b
        mov ecx, dword ptr [esp+3ch]
        push 0aab8c0h
        call ext_006BA7C0
        test al, al
        je fn00730220_64b
        mov ebx, dword ptr [esp+40h]
        mov ecx, ebx
        call ext_006E7460
        mov edi, dword ptr [esp+34h]
        push eax
        mov ecx, edi
        call ext_006BC540
        cmp eax, -1
        je fn00730220_64b
        push eax
        mov ecx, edi
        call ext_006BC520
        mov ecx, dword ptr [esi+0ach]
        push 64h
        push 0aacd0ch
        add ecx, 4
        mov edi, eax
        call ext_00726B40
        push 4
        push 10h
        lea ecx, [esp+14h]
        call ext_006D2130
        lea eax, [esp+1ch]
        mov dword ptr [esp+20h], eax
        mov edx, dword ptr [edi]
        mov ecx, edi
        mov dword ptr [esp+2ch], 0
        call dword ptr [edx+0ch]
        mov ecx, dword ptr [esi+0ach]
        push eax
        lea eax, [esp+10h]
        push eax
        call ext_0079CD60
        push edi
        mov ecx, esi
        call ext_00742E60
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx+0ch]
        mov edx, dword ptr [eax]
        push 0
        push 0
        mov ecx, eax
        call dword ptr [edx]
        push eax
        mov ecx, ebx
        call ext_006E7460
        mov ecx, dword ptr [esi+0ach]
        push eax
        call ext_0079C220
        lea ecx, [esp+0ch]
        mov dword ptr [esp+2ch], 0ffffffffh
        call ext_006D2160
fn00730220_64b:
        mov ecx, dword ptr [esp+24h]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 24h
        ret 10h
    }
}

// [0x007385E0] sub_007385E0 (1328 bytes)
extern "C" void ext_006C3360(); extern "C" void ext_006C3450(); extern "C" void ext_006C3470(); extern "C" void ext_006C3500(); extern "C" void ext_006C3590(); extern "C" void ext_006C35B0();
extern "C" void ext_00726BE0();
extern "C" __declspec(naked) void __fastcall fn_007385E0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        push 0aadb58h
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_afd
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn007385E0_aef
        mov ecx, dword ptr [esi + 0ach]
        push 0aacd0ch
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_647
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_647:
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push ebp
        push edi
        push 0aadb50h
        add ecx, 4
        call ext_00726770
        mov ebx, dword ptr [esp + 14h]
        test al, al
        je fn007385E0_889c
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn007385E0_888e
        mov ecx, dword ptr [esi + 0ach]
        push 0aadb40h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_86c3
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        xor ecx, ecx
        test eax, eax
        sete cl
        push ecx
        push 0
        mov ecx, ebx
        call ext_006C3360
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_86c3:
        mov ecx, dword ptr [esi + 0ach]
        push 0aadb2ch
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_871c
        push 0
        mov ecx, ebx
        call ext_006C3450
        mov edi, dword ptr [esi + 0ach]
        mov ebp, eax
        add edi, 4
        mov dword ptr [esp + 14h], 3
fn007385E0_l1:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebp]
        mov eax, dword ptr [esp + 14h]
        add ebp, 8
        dec eax
        mov dword ptr [esp + 14h], eax
        jne fn007385E0_l1
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_871c:
        mov ecx, dword ptr [esi + 0ach]
        push 0aa8c00h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_8775
        push 0
        mov ecx, ebx
        call ext_006C3470
        mov edi, dword ptr [esi + 0ach]
        mov ebp, eax
        add edi, 4
        mov dword ptr [esp + 14h], 3
fn007385E0_l2:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebp]
        mov eax, dword ptr [esp + 14h]
        add ebp, 8
        dec eax
        mov dword ptr [esp + 14h], eax
        jne fn007385E0_l2
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_8775:
        mov ecx, dword ptr [esi + 0ach]
        push 0aa8a98h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_87ce
        push 0
        mov ecx, ebx
        call ext_006C3500
        mov edi, dword ptr [esi + 0ach]
        mov ebp, eax
        add edi, 4
        mov dword ptr [esp + 14h], 3
fn007385E0_l3:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebp]
        mov eax, dword ptr [esp + 14h]
        add ebp, 8
        dec eax
        mov dword ptr [esp + 14h], eax
        jne fn007385E0_l3
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_87ce:
        mov ecx, dword ptr [esi + 0ach]
        push 0aa8a88h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_8827
        push 0
        mov ecx, ebx
        call ext_006C3590
        mov edi, dword ptr [esi + 0ach]
        mov ebp, eax
        add edi, 4
        mov dword ptr [esp + 14h], 3
fn007385E0_l4:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebp]
        mov eax, dword ptr [esp + 14h]
        add ebp, 8
        dec eax
        mov dword ptr [esp + 14h], eax
        jne fn007385E0_l4
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_8827:
        mov ecx, dword ptr [esi + 0ach]
        push 0aa8bc4h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_8880
        push 0
        mov ecx, ebx
        call ext_006C35B0
        mov edi, dword ptr [esi + 0ach]
        mov ebp, eax
        add edi, 4
        mov dword ptr [esp + 14h], 3
fn007385E0_l5:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebp]
        mov eax, dword ptr [esp + 14h]
        add ebp, 8
        dec eax
        mov dword ptr [esp + 14h], eax
        jne fn007385E0_l5
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_8880:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn007385E0_888e:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_889c:
        mov ecx, dword ptr [esi + 0ach]
        push 0aadb24h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_8ade
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn007385E0_8ad0
        mov ecx, dword ptr [esi + 0ach]
        push 0aadb40h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_8911
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        xor edx, edx
        mov ecx, ebx
        test eax, eax
        sete dl
        push edx
        push 1
        call ext_006C3360
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_8911:
        mov ecx, dword ptr [esi + 0ach]
        push 0aadb2ch
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_896a
        push 1
        mov ecx, ebx
        call ext_006C3450
        mov edi, dword ptr [esi + 0ach]
        mov ebp, eax
        add edi, 4
        mov dword ptr [esp + 14h], 3
fn007385E0_l6:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebp]
        mov eax, dword ptr [esp + 14h]
        add ebp, 8
        dec eax
        mov dword ptr [esp + 14h], eax
        jne fn007385E0_l6
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_896a:
        mov ecx, dword ptr [esi + 0ach]
        push 0aa8c00h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_89c3
        push 1
        mov ecx, ebx
        call ext_006C3470
        mov edi, dword ptr [esi + 0ach]
        mov ebp, eax
        add edi, 4
        mov dword ptr [esp + 14h], 3
fn007385E0_l7:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebp]
        mov eax, dword ptr [esp + 14h]
        add ebp, 8
        dec eax
        mov dword ptr [esp + 14h], eax
        jne fn007385E0_l7
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_89c3:
        mov ecx, dword ptr [esi + 0ach]
        push 0aa8a98h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_8a1c
        push 1
        mov ecx, ebx
        call ext_006C3500
        mov edi, dword ptr [esi + 0ach]
        mov ebp, eax
        add edi, 4
        mov dword ptr [esp + 14h], 3
fn007385E0_l8:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebp]
        mov eax, dword ptr [esp + 14h]
        add ebp, 8
        dec eax
        mov dword ptr [esp + 14h], eax
        jne fn007385E0_l8
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_8a1c:
        mov ecx, dword ptr [esi + 0ach]
        push 0aa8a88h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_8a75
        push 1
        mov ecx, ebx
        call ext_006C3590
        mov edi, dword ptr [esi + 0ach]
        mov ebp, eax
        add edi, 4
        mov dword ptr [esp + 14h], 3
fn007385E0_l9:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebp]
        mov eax, dword ptr [esp + 14h]
        add ebp, 8
        dec eax
        mov dword ptr [esp + 14h], eax
        jne fn007385E0_l9
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_8a75:
        mov ecx, dword ptr [esi + 0ach]
        push 0aa8bc4h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn007385E0_8ac2
        push 1
        mov ecx, ebx
        call ext_006C35B0
        mov edi, dword ptr [esi + 0ach]
        mov ebx, eax
        add edi, 4
        mov ebp, 3
fn007385E0_l10:
        mov ecx, edi
        call ext_00726BE0
        fstp qword ptr [ebx]
        add ebx, 8
        dec ebp
        jne fn007385E0_l10
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_8ac2:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn007385E0_8ad0:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_8ade:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
        pop edi
        pop ebp
        pop ebx
fn007385E0_aef:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn007385E0_afd:
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x00738CB0] sub_00738CB0 (1344 bytes)
extern "C" void ext_006D2130(); extern "C" void ext_006D2160(); extern "C" void ext_006EF800(); extern "C" void ext_006FC9A0(); extern "C" void ext_006FC9B0(); extern "C" void ext_006FC9C0(); extern "C" void ext_006FC9D0(); extern "C" void ext_006FC9E0(); extern "C" void ext_006FDE80(); extern "C" void ext_006FDF70(); extern "C" void ext_00726770(); extern "C" void ext_00726840(); extern "C" void ext_00726860(); extern "C" void ext_007268D0(); extern "C" void ext_00726AA0(); extern "C" void ext_00726AE0(); extern "C" void ext_00726B40(); extern "C" void ext_007391F0(); extern "C" void ext_007393E0(); extern "C" void ext_00739640(); extern "C" void ext_00739970(); extern "C" void ext_00739C00(); extern "C" void ext_00739E90();

// [0x00738CB0] sub_00738CB0 (1344 bytes)
extern "C" __declspec(naked) void __fastcall fn_00738CB0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 08be616h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 9ch
        push ebp
        mov ebp, ecx
        push 4
        push 10h
        lea ecx, [esp + 90h]
        call ext_006D2130
        lea eax, [esp + 98h]
        mov dword ptr [esp + 9ch], eax
        lea ecx, [esp + 88h]
        mov dword ptr [esp + 0a8h], 0
        push ecx
        mov ecx, ebp
        call ext_007391F0
        push 4
        push 10h
        lea ecx, [esp + 60h]
        call ext_006D2130
        lea edx, [esp + 68h]
        mov dword ptr [esp + 6ch], edx
        lea eax, [esp + 58h]
        mov ecx, ebp
        push eax
        mov byte ptr [esp + 0ach], 1
        call ext_007393E0
        push 4
        push 10h
        lea ecx, [esp + 30h]
        call ext_006D2130
        lea ecx, [esp + 38h]
        mov dword ptr [esp + 3ch], ecx
        lea edx, [esp + 28h]
        mov ecx, ebp
        push edx
        mov byte ptr [esp + 0ach], 2
        call ext_00739640
        push 4
        push 10h
        lea ecx, [esp + 78h]
        call ext_006D2130
        lea eax, [esp + 80h]
        mov dword ptr [esp + 84h], eax
        lea ecx, [esp + 70h]
        mov byte ptr [esp + 0a8h], 3
        push ecx
        mov ecx, ebp
        call ext_00739E90
        push 4
        push 10h
        lea ecx, [esp + 18h]
        call ext_006D2130
        lea edx, [esp + 20h]
        mov dword ptr [esp + 24h], edx
        lea eax, [esp + 10h]
        mov ecx, ebp
        push eax
        mov byte ptr [esp + 0ach], 4
        call ext_00739970
        push 4
        push 10h
        lea ecx, [esp + 48h]
        call ext_006D2130
        lea ecx, [esp + 50h]
        mov dword ptr [esp + 54h], ecx
        lea edx, [esp + 40h]
        mov ecx, ebp
        push edx
        mov byte ptr [esp + 0ach], 5
        call ext_00739C00
        mov ecx, dword ptr [ebp + 0ach]
        push 0aadbfch
        add ecx, 4
        call ext_00726770
        test al, al
        je L73915B
        push esi
        push edi
L738DF6:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [ebp + 0ach]
        mov esi, eax
        add ecx, 4
        mov dword ptr [esp + 14h], esi
        call ext_00726860
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [ebp + 0ach]
        push 0aadbech
        add ecx, 4
        call ext_00726770
        test al, al
        je L739122
        jmp L738E47
L738E43:
        mov esi, dword ptr [esp + 14h]
L738E47:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726860
        mov edi, dword ptr [esp + 0b8h]
        push esi
        mov ecx, edi
        call ext_006FDF70
        test eax, eax
        jne L738E6F
        mov ecx, edi
        call ext_006FDE80
L738E6F:
        push esi
        mov ecx, edi
        call ext_006FDF70
        mov ecx, dword ptr [ebp + 0ach]
        push 0b5d2c0h
        push 0aa8e24h
        add ecx, 4
        mov dword ptr [esp + 14h], eax
        call ext_00726AA0
        mov ecx, dword ptr [ebp + 0ach]
        push 0
        push 0aadbe0h
        add ecx, 4
        mov edi, eax
        call ext_00726B40
        mov dword ptr [esp + 10h], eax
        mov esi, 0aadbc8h
        mov ecx, edi
L738EB5:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L738ED9
        test dl, dl
        je L738ED5
        mov al, byte ptr [ecx + 1]
        mov dl, al
        cmp al, byte ptr [esi + 1]
        jne L738ED9
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L738EB5
L738ED5:
        xor ecx, ecx
        jmp L738EDE
L738ED9:
        sbb ecx, ecx
        sbb ecx, -1
L738EDE:
        test ecx, ecx
        jne L738F16
        mov ecx, dword ptr [esp + 90h]
        test ecx, ecx
        jle L7390EB
        mov eax, dword ptr [esp + 10h]
        cmp eax, ecx
        jge L7390EB
        mov ecx, dword ptr [esp + 0a0h]
        mov edx, dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [esp + 0ch]
        push edx
        call ext_006FC9B0
        jmp L7390EB
L738F16:
        mov esi, 0aadbb4h
        mov ecx, edi
L738F1D:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L738F41
        test dl, dl
        je L738F3D
        mov al, byte ptr [ecx + 1]
        mov dl, al
        cmp al, byte ptr [esi + 1]
        jne L738F41
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L738F1D
L738F3D:
        xor ecx, ecx
        jmp L738F46
L738F41:
        sbb ecx, ecx
        sbb ecx, -1
L738F46:
        test ecx, ecx
        jne L738F78
        mov ecx, dword ptr [esp + 60h]
        test ecx, ecx
        jle L7390EB
        mov eax, dword ptr [esp + 10h]
        cmp eax, ecx
        jge L7390EB
        mov ecx, dword ptr [esp + 70h]
        mov edx, dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [esp + 0ch]
        push edx
        call ext_006FC9A0
        jmp L7390EB
L738F78:
        mov esi, 0aadba0h
        mov ecx, edi
L738F7F:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L738FA3
        test dl, dl
        je L738F9F
        mov al, byte ptr [ecx + 1]
        mov dl, al
        cmp al, byte ptr [esi + 1]
        jne L738FA3
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L738F7F
L738F9F:
        xor ecx, ecx
        jmp L738FA8
L738FA3:
        sbb ecx, ecx
        sbb ecx, -1
L738FA8:
        test ecx, ecx
        jne L738FDA
        mov ecx, dword ptr [esp + 30h]
        test ecx, ecx
        jle L7390EB
        mov eax, dword ptr [esp + 10h]
        cmp eax, ecx
        jge L7390EB
        mov ecx, dword ptr [esp + 40h]
        mov edx, dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [esp + 0ch]
        push edx
        call ext_006FC9E0
        jmp L7390EB
L738FDA:
        mov esi, 0aadb8ch
        mov ecx, edi
L738FE1:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L739005
        test dl, dl
        je L739001
        mov al, byte ptr [ecx + 1]
        mov dl, al
        cmp al, byte ptr [esi + 1]
        jne L739005
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L738FE1
L739001:
        xor ecx, ecx
        jmp L73900A
L739005:
        sbb ecx, ecx
        sbb ecx, -1
L73900A:
        test ecx, ecx
        jne L73903C
        mov ecx, dword ptr [esp + 18h]
        test ecx, ecx
        jle L7390EB
        mov eax, dword ptr [esp + 10h]
        cmp eax, ecx
        jge L7390EB
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [esp + 0ch]
        push edx
        call ext_006EF800
        jmp L7390EB
L73903C:
        mov esi, 0aadb7ch
        mov ecx, edi
L739043:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L739067
        test dl, dl
        je L739063
        mov al, byte ptr [ecx + 1]
        mov dl, al
        cmp al, byte ptr [esi + 1]
        jne L739067
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L739043
L739063:
        xor ecx, ecx
        jmp L73906C
L739067:
        sbb ecx, ecx
        sbb ecx, -1
L73906C:
        test ecx, ecx
        jne L739093
        mov ecx, dword ptr [esp + 48h]
        test ecx, ecx
        jle L7390EB
        mov eax, dword ptr [esp + 10h]
        cmp eax, ecx
        jge L7390EB
        mov ecx, dword ptr [esp + 58h]
        mov edx, dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [esp + 0ch]
        push edx
        call ext_006FC9D0
        jmp L7390EB
L739093:
        mov esi, 0aadb60h
        mov ecx, edi
L73909A:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L7390BE
        test dl, dl
        je L7390BA
        mov al, byte ptr [ecx + 1]
        mov dl, al
        cmp al, byte ptr [esi + 1]
        jne L7390BE
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73909A
L7390BA:
        xor ecx, ecx
        jmp L7390C3
L7390BE:
        sbb ecx, ecx
        sbb ecx, -1
L7390C3:
        test ecx, ecx
        jne L7390EB
        mov ecx, dword ptr [esp + 78h]
        test ecx, ecx
        jle L7390EB
        mov eax, dword ptr [esp + 10h]
        cmp eax, ecx
        jge L7390EB
        mov ecx, dword ptr [esp + 88h]
        mov edx, dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [esp + 0ch]
        push edx
        call ext_006FC9C0
L7390EB:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_007268D0
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [ebp + 0ach]
        push 0aadbech
        add ecx, 4
        call ext_00726770
        test al, al
        jne L738E43
L739122:
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_007268D0
        mov ecx, dword ptr [ebp + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [ebp + 0ach]
        push 0aadbfch
        add ecx, 4
        call ext_00726770
        test al, al
        jne L738DF6
        pop edi
        pop esi
L73915B:
        lea ecx, [esp + 40h]
        mov byte ptr [esp + 0a8h], 4
        call ext_006D2160
        lea ecx, [esp + 10h]
        mov byte ptr [esp + 0a8h], 3
        call ext_006D2160
        lea ecx, [esp + 70h]
        mov byte ptr [esp + 0a8h], 2
        call ext_006D2160
        lea ecx, [esp + 28h]
        mov byte ptr [esp + 0a8h], 1
        call ext_006D2160
        lea ecx, [esp + 58h]
        mov byte ptr [esp + 0a8h], 0
        call ext_006D2160
        lea ecx, [esp + 88h]
        mov dword ptr [esp + 0a8h], 0ffffffffh
        call ext_006D2160
        mov ecx, dword ptr [esp + 0a0h]
        mov al, 1
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0a8h
        ret 4
    }
}

// [0x00733FE0] sub_00733FE0 (1360 bytes)
extern "C" void ext_006F8E10(); extern "C" void ext_006F8E20(); extern "C" void ext_006F8E30(); extern "C" void ext_006F8E40();
extern "C" void ext_006FC9A0(); extern "C" void ext_00734530(); extern "C" void ext_00734770(); extern "C" void ext_007348E0(); extern "C" void ext_00734B50();
extern "C" int mem_00AAD790; extern "C" int mem_00AAD690; extern "C" int mem_00AAD684; extern "C" int mem_00AAD64C;
extern "C" int mem_00AAD60C; extern "C" int mem_00AAD600; extern "C" int mem_00AAD5F8; extern "C" int mem_00AAD5F0;
extern "C" int mem_00AAD5E8; extern "C" int mem_00AAD5E0; extern "C" int mem_00AAD5D4; extern "C" int mem_00AAD5C8;
extern "C" int mem_00AAD5BC; extern "C" int mem_00AAD5B0; extern "C" int mem_00AAD784; extern "C" int mem_00AAD6AC;
extern "C" int mem_00AAD774;

extern "C" __declspec(naked) void __fastcall fn_00733FE0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        mov ecx, edi
        call ext_006B99C0
        mov ecx, dword ptr [esi + 0ach]
        push eax
        push offset mem_00AAD790
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_006FC9A0
        mov ecx, edi
        call ext_006F8E20
        mov ecx, dword ptr [esi + 0ach]
        and eax, 0ffh
        push eax
        push offset mem_00AAD690
        add ecx, 4
        call ext_00726B40
        test eax, eax
        setne al
        push eax
        mov ecx, edi
        call ext_006F8E10
        mov ecx, edi
        call ext_006F8E40
        mov ecx, dword ptr [esi + 0ach]
        and eax, 0ffh
        push eax
        push offset mem_00AAD684
        add ecx, 4
        call ext_00726B40
        test eax, eax
        setne cl
        push ecx
        mov ecx, edi
        call ext_006F8E30

        ; ---- block A (0xaad64c, special 0x43 call) ----
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD64C
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_A_E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_A_M
        push 43h
        push edi
        mov ecx, esi
        call ext_00734770
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_A_M:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f733_A_E:

        ; ---- block B2 (0xaad60c, 0) ----
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD60C
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_B2_E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_B2_M
        push 0
        push edi
        mov ecx, esi
        call ext_00734530
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_B2_M:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f733_B2_E:

        ; ---- block B3 (0xaad600, 1) ----
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD600
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_B3_E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_B3_M
        push 1
        push edi
        mov ecx, esi
        call ext_00734530
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_B3_M:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f733_B3_E:

        ; ---- block B4 (0xaad5f8, 2) ----
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD5F8
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_B4_E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_B4_M
        push 2
        push edi
        mov ecx, esi
        call ext_00734530
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_B4_M:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f733_B4_E:

        ; ---- block B5 (0xaad5f0, 9) ----
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD5F0
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_B5_E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_B5_M
        push 9
        push edi
        mov ecx, esi
        call ext_00734530
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_B5_M:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f733_B5_E:

        ; ---- block B6 (0xaad5e8, 3) ----
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD5E8
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_B6_E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_B6_M
        push 3
        push edi
        mov ecx, esi
        call ext_00734530
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_B6_M:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f733_B6_E:

        ; ---- block B7 (0xaad5e0, 4) ----
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD5E0
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_B7_E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_B7_M
        push 4
        push edi
        mov ecx, esi
        call ext_00734530
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_B7_M:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f733_B7_E:

        ; ---- block B8 (0xaad5d4, 5) ----
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD5D4
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_B8_E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_B8_M
        push 5
        push edi
        mov ecx, esi
        call ext_00734530
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_B8_M:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f733_B8_E:

        ; ---- block B9 (0xaad5c8, 6) ----
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD5C8
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_B9_E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_B9_M
        push 6
        push edi
        mov ecx, esi
        call ext_00734530
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_B9_M:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f733_B9_E:

        ; ---- block B10 (0xaad5bc, 0ah) ----
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD5BC
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_B10_E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_B10_M
        push 0ah
        push edi
        mov ecx, esi
        call ext_00734530
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_B10_M:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f733_B10_E:

        ; ---- block B11 (0xaad5b0, 0bh) ----
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD5B0
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_B11_E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_B11_M
        push 0bh
        push edi
        mov ecx, esi
        call ext_00734530
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_B11_M:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f733_B11_E:

        ; ---- block C (0xaad784) ----
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD784
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_E_START
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_D_840
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD6AC
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_D_RET
f733_D_LOOP:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_D_SKIP
        push edi
        mov ecx, esi
        call ext_007348E0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_D_SKIP:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD6AC
        add ecx, 4
        call ext_00726770
        test al, al
        jne f733_D_LOOP
f733_D_RET:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_D_840:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840

        ; ---- block E (0xaad774) ----
f733_E_START:
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD774
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_E_END
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_E_840
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD6AC
        add ecx, 4
        call ext_00726770
        test al, al
        je f733_F_RET
f733_F_LOOP:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f733_F_SKIP
        push edi
        mov ecx, esi
        call ext_00734B50
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_F_SKIP:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        push offset mem_00AAD6AC
        add ecx, 4
        call ext_00726770
        test al, al
        jne f733_F_LOOP
f733_F_RET:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f733_E_840:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f733_E_END:
        pop edi
        pop esi
        ret 4
    }
}

// [0x0073A4B0] sub_0073A4B0 (1364 bytes)
extern "C" void ext_006FDF70(); extern "C" void ext_006FCD50(); extern "C" void ext_006EF800(); extern "C" void ext_006FC9D0();
extern "C" void ext_006D81F0(); extern "C" void ext_006D23F0(); extern "C" void ext_00784620(); extern "C" void ext_00784640();
extern "C" void ext_00784650(); extern "C" void ext_007846D0(); extern "C" void ext_00784750();
extern "C" __declspec(naked) void __fastcall fn_0073A4B0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 08be731h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 2ch
        mov eax, dword ptr [esp + 40h]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 4ch]
        push eax
        call ext_006FDF70
        mov ebp, eax
        mov ecx, ebp
        mov dword ptr [esp + 20h], ebp
        call ext_00715550
        mov edi, eax
        xor ebx, ebx
        cmp edi, ebx
        jne fn0073A4B0_L538
        push 48h
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 50h], edi
        cmp edi, ebx
        mov dword ptr [esp + 44h], ebx
        je fn0073A4B0_L526
        mov ecx, edi
        call ext_006FCD50
        mov dword ptr [edi + 40h], ebx
        mov dword ptr [edi + 38h], ebx
        mov dword ptr [edi + 4], 2
        mov dword ptr [edi + 44h], 3ff00000h
        jmp fn0073A4B0_L528
fn0073A4B0_L526:
        xor edi, edi
fn0073A4B0_L528:
        push edi
        mov ecx, ebp
        mov dword ptr [esp + 48h], -1
        call ext_006EF800
fn0073A4B0_L538:
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push 0aadd14h
        add ecx, 4
        mov byte ptr [esp + 58h], 1
        call ext_00726B40
        mov dword ptr [edi], ebx
        sub eax, ebx
        mov dword ptr [edi + 4], 2
        je fn0073A4B0_L58C
        sub eax, 2
        je fn0073A4B0_L584
        sub eax, 4
        je fn0073A4B0_L56F
fn0073A4B0_L568:
        mov byte ptr [esp + 50h], 0
        jmp fn0073A4B0_L58E
fn0073A4B0_L56F:
        mov ecx, dword ptr [esp + 4ch]
        mov edx, dword ptr [ecx]
        call dword ptr [edx]
        cmp eax, 4
        jne fn0073A4B0_L568
        mov dword ptr [edi], 3
        jmp fn0073A4B0_L58E
fn0073A4B0_L584:
        mov dword ptr [edi], 4
        jmp fn0073A4B0_L58E
fn0073A4B0_L58C:
        mov dword ptr [edi], ebx
fn0073A4B0_L58E:
        mov ecx, dword ptr [esi + 0ach]
        push 2
        push 0aadd00h
        add ecx, 4
        call ext_00726B40
        mov dword ptr [edi + 38h], eax
        mov eax, dword ptr [edi]
        cmp eax, 3
        jne fn0073A4B0_L6FA
        mov ecx, dword ptr [esp + 4ch]
        call ext_006D81F0
        cmp eax, ebx
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 10h], eax
        je fn0073A4B0_L74D
        mov ecx, dword ptr [esi + 0ach]
        push 0aadcf0h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073A4B0_L5FD
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn0073A4B0_L5FD:
        mov ecx, dword ptr [esi + 0ach]
        push 0aadc60h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073A4B0_L74D
        push 14h
        lea ecx, [esp + 2ch]
        call ext_00784620
        mov dword ptr [esp + 44h], 1
        lea ebx, [edi + 20h]
fn0073A4B0_L62E:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ebp, eax
        lea eax, [esp + 14h]
        push eax
        push ebp
        lea ecx, [esp + 30h]
        call ext_007846D0
        mov eax, dword ptr [esp + 14h]
        cmp eax, -1
        jne fn0073A4B0_L688
        mov ecx, dword ptr [esi + 1c8h]
        lea edx, [esp + 18h]
        push edx
        mov eax, dword ptr [ecx + 4*ebp]
        lea ecx, [edi + 8]
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [ecx]
        push eax
        call ext_006D2170
        push eax
        push ebp
        lea ecx, [esp + 30h]
        mov dword ptr [esp + 20h], eax
        call ext_00784650
        mov eax, dword ptr [esp + 18h]
        jmp fn0073A4B0_L694
fn0073A4B0_L688:
        push 0
        push eax
        lea ecx, [esp + 30h]
        call ext_00784750
fn0073A4B0_L694:
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [ebx]
        lea ecx, [esp + 18h]
        push ecx
        push eax
        mov ecx, ebx
        call ext_006D2170
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [ebx + 10h]
        mov ecx, dword ptr [esp + 1ch]
        cmp dword ptr [eax + 4*edx - 4], ecx
        jl fn0073A4B0_L6C8
        mov ecx, dword ptr [ebx + 10h]
        mov eax, edx
        dec eax
        mov byte ptr [esp + 50h], 0
        mov dword ptr [ecx + 4*eax], 0
fn0073A4B0_L6C8:
        mov eax, dword ptr [esp + 10h]
        dec eax
        mov dword ptr [esp + 10h], eax
        jne fn0073A4B0_L62E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 28h]
        mov dword ptr [esp + 44h], -1
        call ext_00784640
        xor ebx, ebx
        jmp fn0073A4B0_L74D
fn0073A4B0_L6FA:
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push 0aadc60h
        add ecx, 4
        call ext_00726B40
        cmp eax, ebx
        jl fn0073A4B0_L74D
        cmp eax, dword ptr [esi + 1b8h]
        jge fn0073A4B0_L74D
        mov edx, dword ptr [esi + 1c8h]
        lea ecx, [edi + 8]
        mov eax, dword ptr [edx + 4*eax]
        lea edx, [esp + 1ch]
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [ecx]
        push edx
        push eax
        call ext_006D2170
        add edi, 20h
        mov dword ptr [esp + 1ch], eax
        lea ecx, [esp + 1ch]
        mov eax, dword ptr [edi]
        push ecx
        push eax
        mov ecx, edi
        call ext_006D2170
fn0073A4B0_L74D:
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push 0aadce8h
        add ecx, 4
        call ext_00726B40
        mov ebp, eax
        cmp ebp, ebx
        je fn0073A4B0_L9EB
        push 38h
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 1ch], edi
        cmp edi, ebx
        mov dword ptr [esp + 44h], 2
        je fn0073A4B0_L7BD
        mov dword ptr [edi], ebx
        mov dword ptr [edi + 4], ebx
        lea ebx, [edi + 8]
        push 10h
        push 10h
        mov ecx, ebx
        call ext_006D2130
        lea edx, [ebx + 10h]
        mov dword ptr [ebx + 14h], edx
        lea ebx, [edi + 20h]
        push 4
        push 10h
        mov ecx, ebx
        mov byte ptr [esp + 4ch], 3
        call ext_006D2130
        lea eax, [ebx + 10h]
        mov dword ptr [ebx + 14h], eax
        xor ebx, ebx
        jmp fn0073A4B0_L7BF
fn0073A4B0_L7BD:
        xor edi, edi
fn0073A4B0_L7BF:
        mov ecx, dword ptr [esp + 20h]
        push edi
        mov dword ptr [esp + 48h], -1
        call ext_006FC9D0
        lea eax, [ebp - 3]
        mov dword ptr [edi], ebx
        cmp eax, 5
        mov dword ptr [edi + 4], ebx
        ja fn0073A4B0_L833
        ; switch jump table at 0x0073AA04 (6 dwords, not part of this body)
        __asm _emit 0ffh
        __asm _emit 024h
        __asm _emit 085h
        __asm _emit 004h
        __asm _emit 0aah
        __asm _emit 073h
        __asm _emit 000h
        mov dword ptr [edi], 1
        mov dword ptr [edi + 4], ebx
        jmp fn0073A4B0_L838
        mov dword ptr [edi], 1
        mov dword ptr [edi + 4], 2
        jmp fn0073A4B0_L838
        mov ecx, dword ptr [esp + 4ch]
        mov edx, dword ptr [ecx]
        call dword ptr [edx]
        cmp eax, 4
        jne fn0073A4B0_L833
        mov dword ptr [edi], 2
        mov dword ptr [edi + 4], ebx
        jmp fn0073A4B0_L838
        mov ecx, dword ptr [esp + 4ch]
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp eax, 4
        jne fn0073A4B0_L833
        mov dword ptr [edi], 2
        mov dword ptr [edi + 4], 2
        jmp fn0073A4B0_L838
fn0073A4B0_L833:
        mov byte ptr [esp + 50h], 0
fn0073A4B0_L838:
        cmp dword ptr [edi], ebx
        je fn0073A4B0_L9EB
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push 0aadce0h
        add ecx, 4
        call ext_00726B40
        mov ebx, eax
        test ebx, ebx
        je fn0073A4B0_L923
        mov ecx, dword ptr [esi + 0ach]
        push 0aabbc0h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073A4B0_L923
        lea ebp, [edi + 8]
fn0073A4B0_L87C:
        lea ecx, [esp + 28h]
        call ext_0077FAB0
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 44h], 4
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 20h]
        push 0
        lea ecx, [esp + 2ch]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 24h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 20h]
        push 1
        lea ecx, [esp + 2ch]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 24h]
        mov dword ptr [eax], ecx
        sub esp, 10h
        mov ecx, esp
        mov dword ptr [esp + 30h], esp
        mov dword ptr [eax + 4], edx
        lea eax, [esp + 38h]
        push eax
        call ext_0077FAC0
        mov ecx, ebp
        call ext_006D89D0
        lea ecx, [esp + 28h]
        dec ebx
        mov dword ptr [esp + 44h], -1
        call ext_006D80A0
        test ebx, ebx
        jne fn0073A4B0_L87C
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn0073A4B0_L923:
        cmp dword ptr [edi + 4], 2
        jne fn0073A4B0_L9EB
        cmp dword ptr [edi], 1
        jne fn0073A4B0_L93B
        mov ecx, dword ptr [esp + 4ch]
        mov ebp, dword ptr [ecx + 28h]
        jmp fn0073A4B0_L945
fn0073A4B0_L93B:
        mov edx, dword ptr [esp + 4ch]
        mov ebp, dword ptr [edx + 1dch]
fn0073A4B0_L945:
        test ebp, ebp
        je fn0073A4B0_L9EB
        mov ecx, dword ptr [esi + 0ach]
        push 0aadcd4h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073A4B0_L980
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn0073A4B0_L980:
        mov ecx, dword ptr [esi + 0ach]
        push 0aadccch
        add ecx, 4
        call ext_00726770
        test al, al
        je fn0073A4B0_L9EB
        lea ebx, [edi + 20h]
        mov edi, dword ptr [edi + 8]
fn0073A4B0_L99D:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [ebx]
        mov dword ptr [esp + 4ch], eax
        lea eax, [esp + 4ch]
        push eax
        push ecx
        mov ecx, ebx
        call ext_006D2170
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [ebx + 10h]
        mov ecx, dword ptr [eax + 4*edx - 4]
        lea eax, [eax + 4*edx - 4]
        cmp ecx, edi
        jl fn0073A4B0_L9DA
        mov dword ptr [eax], 0
        mov byte ptr [esp + 50h], 0
fn0073A4B0_L9DA:
        dec ebp
        jne fn0073A4B0_L99D
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn0073A4B0_L9EB:
        mov ecx, dword ptr [esp + 3ch]
        mov al, byte ptr [esp + 50h]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 38h
        ret 8
    }
}

// [0x00735700] sub_00735700 (1488 bytes)
extern "C" void ext_006BC7E0(); extern "C" void ext_006BC7F0(); extern "C" void ext_006E7780(); extern "C" void ext_006BB730(); extern "C" void ext_006E7F90(); extern "C" void ext_006B9D80(); extern "C" void ext_006B9D20(); extern "C" void ext_007421F0(); extern "C" void ext_006B9E60(); extern "C" void ext_006B9D70(); extern "C" void ext_006E7460(); extern "C" void ext_006E7D50(); extern "C" void ext_006E7FB0(); extern "C" void ext_006E7FA0(); extern "C" void ext_007266C0(); extern "C" void ext_006B9D10(); extern "C" void ext_006B9EC0(); extern "C" void ext_006BA660(); extern "C" void ext_006E7FC0(); extern "C" void ext_006E7FD0(); extern "C" void ext_006E7FE0(); extern "C" void ext_006E7FF0(); extern "C" void ext_006E8000(); extern "C" void ext_006E8010(); extern "C" void ext_006E8020(); extern "C" void ext_0073B010(); extern "C" void ext_006BA7C0(); extern "C" void ext_006BB760(); extern "C" void ext_006D97C0(); extern "C" void ext_006D9800(); extern "C" void ext_006BB750(); extern "C" void ext_006BB790(); extern "C" void ext_006BB780(); extern "C" void ext_006BB7C0(); extern "C" void ext_006BB7B0(); extern "C" void ext_006BB5D0(); extern "C" void ext_00726C60(); extern "C" void ext_006BB5F0(); extern "C" void ext_006BB870(); extern "C" void ext_006BB7D0(); extern "C" void ext_006BB820(); extern "C" void ext_006BB7E0();

// [0x00735700] sub_00735700 (1488 bytes)
extern "C" __declspec(naked) void __fastcall fn_00735700(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8be3fch
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 1a0h
        push ebx
        mov ebx, dword ptr [esp + 1b4h]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, ebx
        call ext_006BC7E0
        mov ecx, ebx
        mov edi, eax
        call ext_006BC7F0
        mov ecx, edi
        mov ebp, eax
        call ext_006E7780
        mov ecx, ebp
        call ext_006BB730
        mov ecx, dword ptr [esi + 0ach]
        push 0aad890h
        add ecx, 4
        call ext_00726770
        test al, al
        je L_864
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je L_856
        mov ecx, edi
        call ext_006E7F90
        mov ecx, dword ptr [esi + 0ach]
        push eax
        push 0aad880h
        add ecx, 4
        call ext_00726AA0
        push eax
        lea ecx, [esp + 0d0h]
        call ext_006B9D80
        sub esp, 4ch
        lea eax, [esp + 118h]
        mov ecx, esp
        mov dword ptr [esp + 5ch], esp
        push eax
        mov dword ptr [esp + 208h], 0
        call ext_006B9D20
        lea ecx, [esp + 1b0h]
        push ecx
        mov ecx, esi
        call ext_007421F0
        push eax
        lea ecx, [esp + 0d0h]
        mov byte ptr [esp + 1bch], 1
        call ext_006B9E60
        lea ecx, [esp + 164h]
        mov byte ptr [esp + 1b8h], 0
        call ext_006B9D70
        lea ecx, [esp + 0cch]
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
        lea ecx, [esp + 0cch]
        mov dword ptr [esp + 1b8h], 0ffffffffh
        call ext_006B9D70
    L_856:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
    L_864:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad860h
        add ecx, 4
        call ext_00726770
        test al, al
        je L_CA9
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je L_C9B
        lea ecx, [esp + 18h]
        call ext_006B9D10
        mov ecx, dword ptr [esi + 0ach]
        push 0aacab8h
        add ecx, 4
        mov dword ptr [esp + 1bch], 2
        call ext_007266C0
        test eax, eax
        jle L_A4E
        mov dword ptr [esp + 10h], eax
        mov bl, 3
    L_8CA:
        mov ecx, dword ptr [esi + 0ach]
        push 0aacab8h
        add ecx, 4
        call ext_00726770
        test al, al
        je L_A3F
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 1ch]
        call ext_006B9EC0
        sub esp, 4ch
        lea edx, [esp + 64h]
        mov ecx, esp
        mov dword ptr [esp + 60h], esp
        push edx
        call ext_006B9D20
        lea eax, [esp + 1b0h]
        mov ecx, esi
        push eax
        call ext_007421F0
        push eax
        lea ecx, [esp + 1ch]
        mov byte ptr [esp + 1bch], bl
        call ext_006B9E60
        lea ecx, [esp + 164h]
        mov byte ptr [esp + 1b8h], 2
        call ext_006B9D70
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je L_A31
        push 0aa9554h
        lea ecx, [esp + 1ch]
        call ext_006BA660
        test eax, eax
        jne L_978
        mov ecx, edi
        call ext_006E7FC0
        jmp L_A1B
    L_978:
        push 0aa9544h
        lea ecx, [esp + 1ch]
        call ext_006BA660
        test eax, eax
        jne L_996
        mov ecx, edi
        call ext_006E7FD0
        jmp L_A1B
    L_996:
        push 0aa9534h
        lea ecx, [esp + 1ch]
        call ext_006BA660
        test eax, eax
        jne L_9B1
        mov ecx, edi
        call ext_006E7FE0
        jmp L_A1B
    L_9B1:
        push 0aa9524h
        lea ecx, [esp + 1ch]
        call ext_006BA660
        test eax, eax
        jne L_9CC
        mov ecx, edi
        call ext_006E7FF0
        jmp L_A1B
    L_9CC:
        push 0aa9514h
        lea ecx, [esp + 1ch]
        call ext_006BA660
        test eax, eax
        jne L_9E7
        mov ecx, edi
        call ext_006E8000
        jmp L_A1B
    L_9E7:
        push 0aa9504h
        lea ecx, [esp + 1ch]
        call ext_006BA660
        test eax, eax
        jne L_A02
        mov ecx, edi
        call ext_006E8010
        jmp L_A1B
    L_A02:
        push 0aa94f4h
        lea ecx, [esp + 1ch]
        call ext_006BA660
        test eax, eax
        jne L_A23
        mov ecx, edi
        call ext_006E8020
    L_A1B:
        push eax
        mov ecx, esi
        call ext_0073B010
    L_A23:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
    L_A31:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
    L_A3F:
        mov eax, dword ptr [esp + 10h]
        dec eax
        mov dword ptr [esp + 10h], eax
        jne L_8CA
    L_A4E:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad85ch
        push 0aabc84h
        add ecx, 4
        call ext_00726AA0
        push eax
        lea ecx, [esp + 11ch]
        call ext_006B9D80
        push 0aad85ch
        lea ecx, [esp + 11ch]
        mov byte ptr [esp + 1bch], 4
        call ext_006BA7C0
        test al, al
        je L_AB3
        mov ecx, ebp
        call ext_006BB760
        mov ecx, dword ptr [esi + 0ach]
        push eax
        push 0aad850h
        add ecx, 4
        call ext_00726B40
        push eax
        call ext_006D97C0
        jmp L_AC5
    L_AB3:
        lea ecx, [esp + 118h]
        call ext_006E7460
        push eax
        call ext_006D9800
    L_AC5:
        add esp, 4
        mov ecx, ebp
        push eax
        call ext_006BB750
        mov ecx, ebp
        call ext_006BB790
        mov ecx, dword ptr [esi + 0ach]
        push eax
        push 0aad844h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, ebp
        call ext_006BB780
        mov ecx, ebp
        call ext_006BB7C0
        mov ecx, dword ptr [esi + 0ach]
        push eax
        push 0aad834h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, ebp
        call ext_006BB7B0
        mov ecx, dword ptr [esi + 0ach]
        push 0aad828h
        add ecx, 4
        call ext_007266C0
        test eax, eax
        jle L_C65
        mov edi, eax
        mov bl, 5
    L_B35:
        lea ecx, [esp + 6ch]
        call ext_006BB5D0
        mov ecx, dword ptr [esi + 0ach]
        push 0aad828h
        add ecx, 4
        mov byte ptr [esp + 1bch], bl
        call ext_00726770
        test al, al
        je L_C1F
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 70h]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je L_C11
        lea ecx, [esp + 64h]
        push 0aac1c4h
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C60
        mov ecx, dword ptr [esp + 0c4h]
        mov edx, dword ptr [eax]
        and ecx, 0ffh
        mov dword ptr [esp + 0bch], edx
        mov eax, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        push 0aabc10h
        add ecx, 4
        mov dword ptr [esp + 0c8h], eax
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        test eax, eax
        setne dl
        add ecx, 4
        mov byte ptr [esp + 0c4h], dl
        call ext_007268D0
        sub esp, 60h
        lea eax, [esp + 0cch]
        mov ecx, esp
        mov dword ptr [esp + 74h], esp
        push eax
        call ext_006BB5F0
        mov ecx, ebp
        call ext_006BB870
    L_C11:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
    L_C1F:
        mov ecx, ebp
        call ext_006BB7D0
        test eax, eax
        je L_C4D
        mov ecx, ebp
        call ext_006BB820
        mov ecx, dword ptr [esi + 0ach]
        push eax
        push 0aad814h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, ebp
        call ext_006BB7E0
    L_C4D:
        lea ecx, [esp + 6ch]
        mov byte ptr [esp + 1b8h], 4
        call ext_006B9D70
        dec edi
        jne L_B35
    L_C65:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
        lea ecx, [esp + 118h]
        mov byte ptr [esp + 1b8h], 2
        call ext_006B9D70
        lea ecx, [esp + 18h]
        mov dword ptr [esp + 1b8h], 0ffffffffh
        call ext_006B9D70
    L_C9B:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
    L_CA9:
        mov ecx, dword ptr [esp + 1b0h]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 1ach
        ret 4
    }
}

// [0x0073D5F0] sub_0073D5F0 (1760 bytes)
extern "C" void ext_006D23F0(); extern "C" void ext_006D7C80(); extern "C" void ext_006DEEC0(); extern "C" void ext_006E7410(); extern "C" void ext_006E7440(); extern "C" void ext_007097B0(); extern "C" void ext_00717EA0(); extern "C" void ext_00717EC0(); extern "C" void ext_00718010(); extern "C" void ext_00718020(); extern "C" void ext_00718030(); extern "C" void ext_00718060(); extern "C" void ext_007180A0(); extern "C" void ext_007180B0(); extern "C" void ext_00726770(); extern "C" void ext_00726840(); extern "C" void ext_00726900(); extern "C" void ext_00726A40(); extern "C" void ext_00726AE0(); extern "C" void ext_00726B40(); extern "C" void ext_00726BE0(); extern "C" void ext_00728D30(); extern "C" void ext_00738C70(); extern "C" void ext_00738CB0(); extern "C" void ext_0073A1D0(); extern "C" void ext_0073A260(); extern "C" void ext_0079D6D0();
extern "C" int mem_0098F3E0; /* double 1e-05 */
extern "C" __declspec(naked) void __fastcall fn_0073D5F0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0
        mov ecx, dword ptr [esi + 0ach]
        push 0aae328h
        add ecx, 4
        mov byte ptr [esp + 1bh], 1
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        push 0aae31ch
        add ecx, 4
        call ext_00726770
        mov ebx, dword ptr [esp + 20h]
        test al, al
        je L73D665
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov edi, eax
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov ebp, eax
        add ecx, 4
        call ext_00726840
        push ebp
        push edi
        mov ecx, ebx
        call ext_00717EA0
L73D665:
        mov ecx, dword ptr [esi + 0ach]
        xor eax, eax
        push 0aae314h
        add ecx, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 24h], eax
        call ext_00726770
        test al, al
        je L73D7A2
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        mov ebp, dword ptr [mem_009251D0]
        mov edi, eax
        push 0aae308h
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne L73D6B5
        mov dword ptr [esp + 14h], eax
        jmp L73D712
L73D6B5:
        push 0aae300h
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne L73D6CE
        mov dword ptr [esp + 14h], 1
        jmp L73D712
L73D6CE:
        push 0aae2f8h
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne L73D6E7
        mov dword ptr [esp + 14h], 2
        jmp L73D712
L73D6E7:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae2d0h
        push 0ah
        add ecx, 4
        call ext_00728D30
        mov ecx, eax
        call ext_006E7410
        push 0
        lea ecx, [esi + 8]
        call ext_006E7440
        mov byte ptr [esp + 13h], 0
L73D712:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        mov edi, eax
        push 0aae308h
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne L73D737
        mov dword ptr [esp + 20h], eax
        jmp L73D794
L73D737:
        push 0aae300h
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne L73D750
        mov dword ptr [esp + 20h], 1
        jmp L73D794
L73D750:
        push 0aae2f8h
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne L73D769
        mov dword ptr [esp + 20h], 2
        jmp L73D794
L73D769:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae2d0h
        push 0ah
        add ecx, 4
        call ext_00728D30
        mov ecx, eax
        call ext_006E7410
        push 0
        lea ecx, [esi + 8]
        call ext_006E7440
        mov byte ptr [esp + 13h], 0
L73D794:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
L73D7A2:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae2c0h
        add ecx, 4
        call ext_00726770
        test al, al
        je L73D802
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [ebx + 1d8h], eax
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov edi, eax
        add ecx, 4
        call ext_00726AE0
        push eax
        push edi
        mov ecx, ebx
        call ext_006D7C80
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
L73D802:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae2b8h
        add ecx, 4
        call ext_00726770
        test al, al
        je L73D850
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov edi, eax
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov ebp, eax
        add ecx, 4
        call ext_00726840
        push ebp
        push edi
        mov ecx, ebx
        call ext_006D7C80
L73D850:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae2ach
        add ecx, 4
        call ext_00726770
        test al, al
        je L73D8A8
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov edi, eax
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [esi + 0ach]
        mov ebp, eax
        add ecx, 4
        call ext_00726840
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 14h]
        push eax
        push ebp
        push ecx
        push edi
        mov ecx, ebx
        call ext_00717EC0
L73D8A8:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae2a4h
        add ecx, 4
        call ext_00726770
        test al, al
        je L73DA35
        mov ecx, dword ptr [esi + 0ach]
        mov edi, dword ptr [ebx + 1b4h]
        imul edi, dword ptr [ebx + 1b0h]
        add ecx, 4
        call ext_00726900
        lea edx, [edi*4]
        cmp eax, edx
        je L73D919
        mov ecx, dword ptr [esi + 0ach]
        push 0aae26ch
        push 9
        add ecx, 4
        call ext_00728D30
        mov ecx, eax
        call ext_006E7410
        push 1
        lea ecx, [esi + 8]
        call ext_006E7440
        mov byte ptr [esp + 13h], 0
        jmp L73DA27
L73D919:
        test edi, edi
        jle L73DA27
        xor ebp, ebp
        mov dword ptr [esp + 20h], edi
L73D927:
        mov ecx, ebx
        call ext_006DEEC0
        mov ecx, dword ptr [esi + 0ach]
        mov edi, eax
        add ecx, 4
        add edi, ebp
        call ext_00726BE0
        fstp qword ptr [esp + 14h]
        push 0
        mov ecx, edi
        call ext_006D23F0
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 14h]
        push 1
        mov ecx, edi
        call ext_006D23F0
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 14h]
        push 2
        mov ecx, edi
        call ext_006D23F0
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 14h]
        push 3
        mov ecx, edi
        call ext_006D23F0
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [eax], ecx
        push 3
        mov ecx, edi
        mov dword ptr [eax + 4], edx
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0098F3E0]
        fnstsw ax
        test ah, 41h
        je L73DA15
        mov ecx, dword ptr [esi + 0ach]
        push 0aae22ch
        push 0ah
        add ecx, 4
        call ext_00728D30
        mov ecx, eax
        call ext_006E7410
        push 2
        lea ecx, [esi + 8]
        call ext_006E7440
        mov byte ptr [esp + 13h], 0
L73DA15:
        mov eax, dword ptr [esp + 20h]
        add ebp, 20h
        dec eax
        mov dword ptr [esp + 20h], eax
        jne L73D927
L73DA27:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
L73DA35:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae21ch
        add ecx, 4
        call ext_00726770
        test al, al
        je L73DAB4
        mov ebp, dword ptr [ebx + 1b0h]
        mov ecx, ebx
        call ext_007180A0
        mov ecx, dword ptr [esi + 0ach]
        mov edi, eax
        add ecx, 4
        call ext_00726900
        cmp eax, ebp
        je L73DA9A
        mov ecx, dword ptr [esi + 0ach]
        push 0aae1e4h
        push 9
        add ecx, 4
        call ext_00728D30
        mov ecx, eax
        call ext_006E7410
        push 3
        lea ecx, [esi + 8]
        call ext_006E7440
        mov byte ptr [esp + 13h], 0
        jmp L73DAB4
L73DA9A:
        test ebp, ebp
        jle L73DAB4
L73DA9E:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [edi], eax
        add edi, 4
        dec ebp
        jne L73DA9E
L73DAB4:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov ecx, dword ptr [esi + 0ach]
        push 0aae1d4h
        add ecx, 4
        call ext_00726770
        test al, al
        je L73DB4F
        mov ebp, dword ptr [ebx + 1b4h]
        mov ecx, ebx
        call ext_007180B0
        mov ecx, dword ptr [esi + 0ach]
        mov edi, eax
        add ecx, 4
        call ext_00726900
        cmp eax, ebp
        je L73DB27
        mov ecx, dword ptr [esi + 0ach]
        push 0aae19ch
        push 9
        add ecx, 4
        call ext_00728D30
        mov ecx, eax
        call ext_006E7410
        push 4
        lea ecx, [esi + 8]
        call ext_006E7440
        mov byte ptr [esp + 13h], 0
        jmp L73DB41
L73DB27:
        test ebp, ebp
        jle L73DB41
L73DB2B:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        mov dword ptr [edi], eax
        add edi, 4
        dec ebp
        jne L73DB2B
L73DB41:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
L73DB4F:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae190h
        add ecx, 4
        call ext_00726770
        test al, al
        je L73DBDF
        mov ecx, ebx
        call ext_00718030
        mov ecx, ebx
        mov ebp, eax
        call ext_00718010
        mov ecx, dword ptr [esi + 0ach]
        mov edi, eax
        add ecx, 4
        call ext_00726900
        cmp eax, ebp
        je L73DBB7
        mov ecx, dword ptr [esi + 0ach]
        push 0aae158h
        push 9
        add ecx, 4
        call ext_00728D30
        mov ecx, eax
        call ext_006E7410
        push 5
        lea ecx, [esi + 8]
        call ext_006E7440
        mov byte ptr [esp + 13h], 0
        jmp L73DBD1
L73DBB7:
        test ebp, ebp
        jle L73DBD1
L73DBBB:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [edi]
        add edi, 8
        dec ebp
        jne L73DBBB
L73DBD1:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
L73DBDF:
        mov ecx, dword ptr [esi + 0ach]
        push 0aae14ch
        add ecx, 4
        call ext_00726770
        test al, al
        je L73DC6F
        mov ecx, ebx
        call ext_00718060
        mov ecx, ebx
        mov ebp, eax
        call ext_00718020
        mov ecx, dword ptr [esi + 0ach]
        mov edi, eax
        add ecx, 4
        call ext_00726900
        cmp eax, ebp
        je L73DC47
        mov ecx, dword ptr [esi + 0ach]
        push 0aae114h
        push 9
        add ecx, 4
        call ext_00728D30
        mov ecx, eax
        call ext_006E7410
        push 6
        lea ecx, [esi + 8]
        call ext_006E7440
        mov byte ptr [esp + 13h], 0
        jmp L73DC61
L73DC47:
        test ebp, ebp
        jle L73DC61
L73DC4B:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [edi]
        add edi, 8
        dec ebp
        jne L73DC4B
L73DC61:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
L73DC6F:
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        push ebx
        mov ecx, esi
        je L73DCA1
        call ext_007097B0
        push ebx
        mov ecx, esi
        call ext_00738C70
        mov al, byte ptr [esp + 13h]
        pop edi
        test al, al
        pop esi
        pop ebp
        setne al
        pop ebx
        add esp, 0ch
        ret 4
L73DCA1:
        call ext_00738CB0
        push ebx
        mov ecx, esi
        call ext_0073A1D0
        push ebx
        mov ecx, esi
        call ext_0073A260
        mov al, byte ptr [esp + 13h]
        pop edi
        test al, al
        pop esi
        pop ebp
        setne al
        pop ebx
        add esp, 0ch
        ret 4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x00730CE0] sub_00730CE0 (1808 bytes)
extern "C" void ext_006B9D10(); extern "C" void ext_006B9D20(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9D80();
extern "C" void ext_006B9EC0(); extern "C" void ext_006B9F80(); extern "C" void ext_006BA1C0(); extern "C" void ext_006BA220();
extern "C" void ext_006BA660(); extern "C" void ext_006BA780(); extern "C" void ext_006BC370(); extern "C" void ext_006BC380();
extern "C" void ext_006C2990(); extern "C" void ext_006C30A0(); extern "C" void ext_006C9360(); extern "C" void ext_006DC480();
extern "C" void ext_006DC6A0(); extern "C" void ext_006E7460(); extern "C" void ext_006E8E50(); extern "C" void ext_006E9030();
extern "C" void ext_006E9460(); extern "C" void ext_006F9DB0(); extern "C" void ext_0070D8A0(); extern "C" void ext_0071FC20();
extern "C" void ext_007266C0(); extern "C" void ext_00726770(); extern "C" void ext_00726840(); extern "C" void ext_00726860();
extern "C" void ext_007268D0(); extern "C" void ext_00726A40(); extern "C" void ext_0072CF10(); extern "C" void ext_007313F0();
extern "C" void ext_00738C30(); extern "C" void ext_00742540(); extern "C" void ext_007425F0(); extern "C" void ext_00784620();
extern "C" void ext_00784640(); extern "C" void ext_0079D6D0(); extern "C" void ext_006B99C0();
extern "C" int mem_009334D8; /* double 100 */

extern "C" __declspec(naked) void __fastcall fn_00730CE0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push -1
        push 08be0ebh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 23ch
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ecx, [esp + 38h]
        call ext_006B9D10
        xor ebp, ebp
        lea ecx, [esp + 200h]
        mov dword ptr [esp + 254h], ebp
        call ext_006B9D10
        push 14h
        lea ecx, [esp + 28h]
        mov byte ptr [esp + 258h], 1
        call ext_00784620
        mov ebx, dword ptr [esp + 264h]
        lea ecx, [esp + 84h]
        mov byte ptr [esp + 254h], 2
        lea eax, [ebx + 4ch]
        push eax
        call ext_006B9D20
        mov esi, dword ptr [esp + 25ch]
        lea ecx, [esp + 24h]
        push ecx
        push esi
        mov ecx, edi
        mov byte ptr [esp + 25ch], 3
        call ext_00742540
        lea edx, [esp + 24h]
        push edx
        call ext_0071FC20
        add esp, 4
        mov ecx, esi
        mov dword ptr [esp + 10h], ebp
        push 0aad264h
        call ext_007266C0
        push 0aad264h
        mov ecx, esi
        mov ebp, eax
        call ext_007266C0
        push 0aad264h
        mov ecx, esi
        mov dword ptr [esp + 1ch], eax
        call ext_007266C0
        mov ecx, dword ptr [esp + 18h]
        add eax, ecx
        lea ecx, [esp + 0d0h]
        add eax, ebp
        mov dword ptr [esp + 18h], eax
        call ext_006B9D10
        push 0aad42ch
        lea ecx, [esp + 0d4h]
        mov byte ptr [esp + 258h], 4
        call ext_006BA220
        lea edx, [esp + 84h]
        lea ecx, [esp + 0d0h]
        push edx
        call ext_006BA1C0
        mov eax, dword ptr [edi + 0b0h]
        push 0
        push 0
        lea ecx, [esp + 0d8h]
        mov ebp, dword ptr [eax]
        call ext_006E7460
        mov ecx, dword ptr [edi + 0b0h]
        push eax
        push 0
        call dword ptr [ebp + 8]
        mov ecx, edi
        call ext_007313F0
        push eax
        mov ecx, ebx
        call ext_006F9DB0
        push 0aad264h
        mov ecx, esi
        call ext_00726770
        test al, al
        je fn00730CE0_L731037
fn00730CE0_L730E34:
        fild dword ptr [esp + 18h]
        fstp qword ptr [esp + 1ch]
fn00730CE0_L730E3C:
        fild dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [edi + 0b0h]
        inc eax
        _emit 0dch
        _emit 00dh
        _emit 0d8h
        _emit 034h
        _emit 093h
        _emit 000h
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 10h], eax
        fdiv qword ptr [esp + 1ch]
        fstp dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 14h]
        push eax
        push 0
        push 0
        push 0
        call dword ptr [edx + 8]
        mov ecx, esi
        call ext_00726A40
        push eax
        lea ecx, [esp + 3ch]
        call ext_006B9EC0
        push 0aa873ch
        lea ecx, [esp + 3ch]
        call ext_006BA660
        test eax, eax
        je fn00730CE0_L730F51
        push 0aa873ch
        lea ecx, [esp + 16ch]
        call ext_006B9D80
        mov ebp, eax
        push 0aa8704h
        lea ecx, [esp + 1b8h]
        mov byte ptr [esp + 258h], 5
        call ext_006B9D80
        push ebp
        lea ecx, [esp + 120h]
        push eax
        push ecx
        mov byte ptr [esp + 260h], 6
        call ext_006B9F80
        add esp, 0ch
        push eax
        lea ecx, [esp + 3ch]
        mov byte ptr [esp + 258h], 7
        call ext_006BA780
        lea ecx, [esp + 11ch]
        mov bl, al
        mov byte ptr [esp + 254h], 6
        call ext_006B9D70
        lea ecx, [esp + 1b4h]
        mov byte ptr [esp + 254h], 5
        call ext_006B9D70
        lea ecx, [esp + 168h]
        mov byte ptr [esp + 254h], 4
        call ext_006B9D70
        test bl, bl
        jne fn00730CE0_L730F51
        push 0
        push 1
        lea ecx, [esp + 40h]
        call ext_006E7460
        mov ecx, dword ptr [esp + 268h]
        push eax
        call ext_006BC370
        mov ecx, eax
        call ext_006C2990
        jmp fn00730CE0_L730F5D
fn00730CE0_L730F51:
        mov ecx, dword ptr [esp + 260h]
        call ext_006BC380
fn00730CE0_L730F5D:
        mov ebp, eax
        test ebp, ebp
        je fn00730CE0_L73101C
        lea ecx, [esp + 84h]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_006DC6A0
        mov ebx, dword ptr [ebp]
        lea ecx, [esp + 84h]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call dword ptr [ebx + 28h]
        mov ecx, esi
        call ext_00726860
        test al, al
        je fn00730CE0_L731012
        mov ecx, ebp
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        push eax
        push esi
        mov ecx, edi
        call ext_00738C30
        mov ecx, ebp
        call ext_006C30A0
        test eax, eax
        je fn00730CE0_L730FE2
        mov ecx, dword ptr [edi + 0ach]
        call ext_0079D6D0
        test al, al
        je fn00730CE0_L730FE2
        mov ecx, ebp
        call ext_006DC480
        push eax
        mov ecx, ebp
        call ext_006C30A0
        mov ecx, eax
        call ext_0070D8A0
fn00730CE0_L730FE2:
        mov ecx, dword ptr [edi + 0b4h]
        push 0bh
        call ext_0072CF10
        test al, al
        je fn00730CE0_L73100B
        push 0
        mov ecx, ebp
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        push eax
        mov ecx, edi
        call ext_007425F0
fn00730CE0_L73100B:
        mov ecx, esi
        call ext_007268D0
fn00730CE0_L731012:
        mov edx, dword ptr [ebp]
        push 0
        mov ecx, ebp
        call dword ptr [edx + 2ch]
fn00730CE0_L73101C:
        mov ecx, esi
        call ext_00726840
        push 0aad264h
        mov ecx, esi
        call ext_00726770
        test al, al
        jne fn00730CE0_L730E3C
fn00730CE0_L731037:
        push 0aa96f8h
        mov ecx, esi
        call ext_00726770
        test al, al
        je fn00730CE0_L7310F4
fn00730CE0_L73104B:
        mov ecx, esi
        call ext_00726A40
        push eax
        lea ecx, [esp + 3ch]
        call ext_006B9EC0
        lea ecx, [esp + 38h]
        call ext_006E7460
        mov ecx, dword ptr [esp + 260h]
        push eax
        call ext_006B99C0
        mov ecx, eax
        call ext_006E9460
        mov ebx, eax
        test ebx, ebx
        je fn00730CE0_L7310D9
        lea ecx, [esp + 84h]
        call ext_006E7460
        push eax
        mov ecx, ebx
        call ext_006DC6A0
        mov ebp, dword ptr [ebx]
        lea ecx, [esp + 84h]
        call ext_006E7460
        push eax
        mov ecx, ebx
        call dword ptr [ebp + 28h]
        mov ecx, esi
        call ext_00726860
        test al, al
        je fn00730CE0_L7310D0
        mov ecx, ebx
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        push eax
        push esi
        mov ecx, edi
        call ext_00738C30
        mov ecx, esi
        call ext_007268D0
fn00730CE0_L7310D0:
        mov eax, dword ptr [ebx]
        push 0
        mov ecx, ebx
        call dword ptr [eax + 2ch]
fn00730CE0_L7310D9:
        mov ecx, esi
        call ext_00726840
        push 0aa96f8h
        mov ecx, esi
        call ext_00726770
        test al, al
        jne fn00730CE0_L73104B
fn00730CE0_L7310F4:
        push 0aad404h
        mov ecx, esi
        call ext_00726770
        test al, al
        je fn00730CE0_L73122D
fn00730CE0_L731108:
        fild dword ptr [esp + 18h]
        fstp qword ptr [esp + 1ch]
fn00730CE0_L731110:
        fild dword ptr [esp + 10h]
        mov ecx, dword ptr [edi + 0b0h]
        mov ebp, dword ptr [esp + 10h]
        inc ebp
        _emit 0dch
        _emit 00dh
        _emit 0d8h
        _emit 034h
        _emit 093h
        _emit 000h
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 10h], ebp
        fdiv qword ptr [esp + 1ch]
        fstp dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 14h]
        push eax
        push 0
        push 0
        push 0
        call dword ptr [edx + 8]
        mov ecx, esi
        call ext_00726A40
        push eax
        lea ecx, [esp + 3ch]
        call ext_006B9EC0
        sub esp, 4ch
        lea edx, [esp + 84h]
        mov ecx, esp
        mov dword ptr [esp + 60h], esp
        push edx
        call ext_006B9D20
        mov ecx, dword ptr [esp + 2ach]
        mov byte ptr [esp + 2a0h], 4
        call ext_006B99C0
        mov ecx, eax
        call ext_006E9030
        mov ebp, eax
        test ebp, ebp
        je fn00730CE0_L731212
        lea ecx, [esp + 84h]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_006DC6A0
        mov ebx, dword ptr [ebp]
        lea ecx, [esp + 84h]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call dword ptr [ebx + 28h]
        mov ecx, esi
        call ext_00726860
        test al, al
        je fn00730CE0_L731208
        mov ecx, ebp
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        push eax
        push esi
        mov ecx, edi
        call ext_00738C30
        mov ecx, dword ptr [edi + 0b4h]
        push 0bh
        call ext_0072CF10
        test al, al
        je fn00730CE0_L731201
        push 0
        mov ecx, ebp
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        push eax
        mov ecx, edi
        call ext_007425F0
fn00730CE0_L731201:
        mov ecx, esi
        call ext_007268D0
fn00730CE0_L731208:
        mov eax, dword ptr [ebp]
        push 0
        mov ecx, ebp
        call dword ptr [eax + 2ch]
fn00730CE0_L731212:
        mov ecx, esi
        call ext_00726840
        push 0aad404h
        mov ecx, esi
        call ext_00726770
        test al, al
        jne fn00730CE0_L731110
fn00730CE0_L73122D:
        push 0aad40ch
        mov ecx, esi
        call ext_00726770
        test al, al
        je fn00730CE0_L731366
fn00730CE0_L731241:
        fild dword ptr [esp + 18h]
        fstp qword ptr [esp + 1ch]
fn00730CE0_L731249:
        fild dword ptr [esp + 10h]
        mov ecx, dword ptr [edi + 0b0h]
        mov ebp, dword ptr [esp + 10h]
        inc ebp
        _emit 0dch
        _emit 00dh
        _emit 0d8h
        _emit 034h
        _emit 093h
        _emit 000h
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 10h], ebp
        fdiv qword ptr [esp + 1ch]
        fstp dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 14h]
        push eax
        push 0
        push 0
        push 0
        call dword ptr [edx + 8]
        mov ecx, esi
        call ext_00726A40
        push eax
        lea ecx, [esp + 3ch]
        call ext_006B9EC0
        sub esp, 4ch
        lea edx, [esp + 84h]
        mov ecx, esp
        mov dword ptr [esp + 60h], esp
        push edx
        call ext_006B9D20
        mov ecx, dword ptr [esp + 2ach]
        mov byte ptr [esp + 2a0h], 4
        call ext_006B99C0
        mov ecx, eax
        call ext_006E8E50
        mov ebp, eax
        test ebp, ebp
        je fn00730CE0_L73134B
        lea ecx, [esp + 84h]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_006DC6A0
        mov ebx, dword ptr [ebp]
        lea ecx, [esp + 84h]
        call ext_006E7460
        push eax
        mov ecx, ebp
        call dword ptr [ebx + 28h]
        mov ecx, esi
        call ext_00726860
        test al, al
        je fn00730CE0_L731341
        mov ecx, ebp
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        push eax
        push esi
        mov ecx, edi
        call ext_00738C30
        mov ecx, dword ptr [edi + 0b4h]
        push 0bh
        call ext_0072CF10
        test al, al
        je fn00730CE0_L73133A
        push 0
        mov ecx, ebp
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        push eax
        mov ecx, edi
        call ext_007425F0
fn00730CE0_L73133A:
        mov ecx, esi
        call ext_007268D0
fn00730CE0_L731341:
        mov eax, dword ptr [ebp]
        push 0
        mov ecx, ebp
        call dword ptr [eax + 2ch]
fn00730CE0_L73134B:
        mov ecx, esi
        call ext_00726840
        push 0aad40ch
        mov ecx, esi
        call ext_00726770
        test al, al
        jne fn00730CE0_L731249
fn00730CE0_L731366:
        push 0
        call ext_0071FC20
        add esp, 4
        lea ecx, [esp + 0d0h]
        mov byte ptr [esp + 254h], 3
        call ext_006B9D70
        lea ecx, [esp + 84h]
        mov byte ptr [esp + 254h], 2
        call ext_006B9D70
        lea ecx, [esp + 24h]
        mov byte ptr [esp + 254h], 1
        call ext_00784640
        lea ecx, [esp + 200h]
        mov byte ptr [esp + 254h], 0
        call ext_006B9D70
        lea ecx, [esp + 38h]
        mov dword ptr [esp + 254h], 0ffffffffh
        call ext_006B9D70
        mov ecx, dword ptr [esp + 24ch]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 248h
        ret 0ch
        nop
        nop
    }
}

// [0x00732F10] sub_00732F10 (1936 bytes)
extern "C" void ext_0079CD60(); extern "C" void ext_0079D6D0(); extern "C" void ext_006D2130(); extern "C" void ext_006D2160();
extern "C" void ext_006F74E0(); extern "C" void ext_006F7550(); extern "C" void ext_006F76E0(); extern "C" void ext_006F76F0();
extern "C" void ext_00726770(); extern "C" void ext_00726840(); extern "C" void ext_00726860(); extern "C" void ext_007268D0();
extern "C" void ext_00726AA0(); extern "C" void ext_00726B40(); extern "C" void ext_007336A0(); extern "C" void ext_007338E0();
extern "C" void ext_00733C80(); extern "C" void ext_00733FE0(); extern "C" void ext_00742E60();

extern "C" __declspec(naked) void __fastcall fn_00732F10(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8be5c8h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 18h
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        mov edi, dword ptr [esp + 30h]
        test al, al
        jne f732F10_L732F91
        push 4
        push 10h
        lea ecx, [esp + 10h]
        call ext_006D2130
        lea eax, [esp + 18h]
        mov dword ptr [esp + 1ch], eax
        mov edx, dword ptr [edi]
        lea eax, [esp + 8]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 2ch], 0
        call dword ptr [edx + 10h]
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx + 0ch]
        mov ecx, dword ptr [esi + 0ach]
        push eax
        lea eax, [esp + 0ch]
        push eax
        call ext_0079CD60
        lea ecx, [esp + 8]
        mov dword ptr [esp + 28h], -1
        call ext_006D2160
f732F10_L732F91:
        push edi
        mov ecx, esi
        call ext_00742E60
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aad69ch
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aad690h
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aad684h
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je f732F10_L73306D
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push 0b5d2c0h
        push 0aad564h
        add ecx, 4
        call ext_00726AA0
        mov ecx, edi
        call ext_006F7550
        mov ecx, dword ptr [esi + 0ach]
        push eax
        push 0aad674h
        add ecx, 4
        call ext_00726B40
        mov ebx, eax
        test ebx, ebx
        jne f732F10_L733042
        mov ecx, dword ptr [esi + 0ach]
        push -1
        push 0aad668h
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esp + 38h]
        mov dword ptr [ecx], eax
        jmp f732F10_L733062
f732F10_L733042:
        cmp ebx, 1
        jne f732F10_L733062
        mov ecx, dword ptr [esi + 0ach]
        push -1
        push 0aad658h
        add ecx, 4
        call ext_00726B40
        mov edx, dword ptr [esp + 38h]
        mov dword ptr [edx], eax
f732F10_L733062:
        push 0
        push ebx
        mov ecx, edi
        call ext_006F74E0
        pop ebx
f732F10_L73306D:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad64ch
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L7330BC
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L7330AE
        push 43h
        push edi
        mov ecx, esi
        call ext_007338E0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L7330AE:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L7330BC:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad640h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L73310B
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L7330FD
        push 44h
        push edi
        mov ecx, esi
        call ext_007338E0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L7330FD:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L73310B:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad634h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L73315A
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L73314C
        push 45h
        push edi
        mov ecx, esi
        call ext_007338E0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L73314C:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L73315A:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad624h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L7331A9
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L73319B
        push 58h
        push edi
        mov ecx, esi
        call ext_007338E0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L73319B:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L7331A9:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad614h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L7331F8
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L7331EA
        push 59h
        push edi
        mov ecx, esi
        call ext_007338E0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L7331EA:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L7331F8:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad60ch
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L733247
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L733239
        push 0
        push edi
        mov ecx, esi
        call ext_007336A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L733239:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L733247:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad600h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L733296
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L733288
        push 1
        push edi
        mov ecx, esi
        call ext_007336A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L733288:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L733296:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad5f8h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L7332E5
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L7332D7
        push 2
        push edi
        mov ecx, esi
        call ext_007336A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L7332D7:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L7332E5:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad5f0h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L733334
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L733326
        push 9
        push edi
        mov ecx, esi
        call ext_007336A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L733326:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L733334:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad5e8h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L733383
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L733375
        push 3
        push edi
        mov ecx, esi
        call ext_007336A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L733375:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L733383:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad5e0h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L7333D2
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L7333C4
        push 4
        push edi
        mov ecx, esi
        call ext_007336A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L7333C4:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L7333D2:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad5d4h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L733421
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L733413
        push 5
        push edi
        mov ecx, esi
        call ext_007336A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L733413:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L733421:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad5c8h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L733470
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L733462
        push 6
        push edi
        mov ecx, esi
        call ext_007336A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L733462:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L733470:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad5bch
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L7334BF
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L7334B1
        push 0ah
        push edi
        mov ecx, esi
        call ext_007336A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L7334B1:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L7334BF:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad5b0h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L73350E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L733500
        push 0bh
        push edi
        mov ecx, esi
        call ext_007336A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L733500:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L73350E:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad5a8h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L73355D
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L73354F
        push 7
        push edi
        mov ecx, esi
        call ext_007336A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L73354F:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L73355D:
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je f732F10_L73367E
        mov ecx, dword ptr [esi + 0ach]
        push 0aad598h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L7335BF
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L7335B1
        push 8
        push edi
        mov ecx, esi
        call ext_007336A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L7335B1:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L7335BF:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad58ch
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L733613
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L733605
        mov ecx, edi
        call ext_006F76F0
        push eax
        mov ecx, esi
        call ext_00733C80
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L733605:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L733613:
        mov ecx, dword ptr [esi + 0ach]
        push 0aad580h
        add ecx, 4
        call ext_00726770
        test al, al
        jne f732F10_L733641
        mov ecx, dword ptr [esi + 0ach]
        push 0aad570h
        add ecx, 4
        call ext_00726770
        test al, al
        je f732F10_L73367E
f732F10_L733641:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je f732F10_L733670
        mov ecx, edi
        call ext_006F76E0
        push eax
        mov ecx, esi
        call ext_00733FE0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
f732F10_L733670:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
f732F10_L73367E:
        mov ecx, dword ptr [esp + 20h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 24h
        ret 8
    }
}

// [0x00737BE0] sub_00737BE0 (2560 bytes)
extern "C" void ext_006B9D10(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9EC0(); extern "C" void ext_006C2F50(); extern "C" void ext_006C3030(); extern "C" void ext_006D2250(); extern "C" void ext_006D3600(); extern "C" void ext_006D3630(); extern "C" void ext_006D3660(); extern "C" void ext_006D3690(); extern "C" void ext_006D36C0(); extern "C" void ext_006D36F0(); extern "C" void ext_006D3720(); extern "C" void ext_006D3750(); extern "C" void ext_006D3780(); extern "C" void ext_006D3C30(); extern "C" void ext_006D8FD0(); extern "C" void ext_006D9030(); extern "C" void ext_006D9070(); extern "C" void ext_006D9170(); extern "C" void ext_006E7460(); extern "C" void ext_00715520(); extern "C" void ext_00726A40(); extern "C" void ext_00731DE0(); extern "C" void ext_0073AA20(); extern "C" void ext_0073AAB0(); extern "C" void ext_0073B010(); extern "C" void ext_0073C110(); extern "C" void ext_0073D4B0(); extern "C" void ext_0073D5F0(); extern "C" void ext_0073DCD0(); extern "C" void ext_00741A10(); extern "C" void ext_0077FB40(); extern "C" void ext_0079D6D0(); extern "C" void ext_006D80A0(); extern "C" void ext_006D3750(); extern "C" int mem_009334D8; /* double 100 */

extern "C" __declspec(naked) void __fastcall fn_00737BE0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 8be5a8h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 6ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 2ch]
        call ext_006B9D10
        mov ecx, dword ptr [esi + 0ach]
        xor ebx, ebx
        push 0aa8e24h
        add ecx, 4
        mov dword ptr [esp + 84h], ebx
        call ext_00726770
        test al, al
        je fn737BE0_738567
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp + 30h]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 2ch]
        mov edi, 0aa8cc4h
        call ext_006E7460
fn737BE0_c1_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c1_ne
        cmp cl, bl
        je fn737BE0_c1_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c1_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c1_loop
fn737BE0_c1_zero:
        xor eax, eax
        jmp fn737BE0_c1_done
fn737BE0_c1_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c1_done:
        cmp eax, ebx
        jne fn737BE0_737CA3
        mov ecx, dword ptr [esi + 4]
        call ext_006D3600
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_0073AA20
        push edi
        jmp fn737BE0_738548

fn737BE0_737CA3:
        lea ecx, [esp + 2ch]
        mov edi, 0aac354h
        call ext_006E7460
fn737BE0_c2_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c2_ne
        cmp cl, bl
        je fn737BE0_c2_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c2_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c2_loop
fn737BE0_c2_zero:
        xor eax, eax
        jmp fn737BE0_c2_done
fn737BE0_c2_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c2_done:
        cmp eax, ebx
        jne fn737BE0_737D20
        mov ecx, dword ptr [esi + 4]
        call ext_006D3630
        mov edi, eax
        push ebx
        mov ecx, edi
        call ext_00715520
        mov ebx, dword ptr [esp + 88h]
        push edi
        mov ecx, ebx
        call ext_006C2F50
        push edi
        mov ecx, esi
        call ext_0073AAB0
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je fn737BE0_73859F
        push ebx
        jmp fn737BE0_738598

fn737BE0_737D20:
        lea ecx, [esp + 2ch]
        mov edi, 0aac374h
        call ext_006E7460
fn737BE0_c3_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c3_ne
        cmp cl, bl
        je fn737BE0_c3_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c3_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c3_loop
fn737BE0_c3_zero:
        xor eax, eax
        jmp fn737BE0_c3_done
fn737BE0_c3_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c3_done:
        cmp eax, ebx
        jne fn737BE0_737D9E
        mov ecx, dword ptr [esi + 4]
        call ext_006D3630
        mov edi, eax
        push 1
        mov ecx, edi
        call ext_00715520
        mov ebx, dword ptr [esp + 88h]
        push edi
        mov ecx, ebx
        call ext_006C2F50
        push edi
        mov ecx, esi
        call ext_0073AAB0
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je fn737BE0_73859F
        push ebx
        jmp fn737BE0_738598

fn737BE0_737D9E:
        lea ecx, [esp + 2ch]
        mov edi, 0aac368h
        call ext_006E7460
fn737BE0_c4_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c4_ne
        cmp cl, bl
        je fn737BE0_c4_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c4_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c4_loop
fn737BE0_c4_zero:
        xor eax, eax
        jmp fn737BE0_c4_done
fn737BE0_c4_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c4_done:
        cmp eax, ebx
        jne fn737BE0_737E1C
        mov ecx, dword ptr [esi + 4]
        call ext_006D3630
        mov edi, eax
        push 2
        mov ecx, edi
        call ext_00715520
        mov ebx, dword ptr [esp + 88h]
        push edi
        mov ecx, ebx
        call ext_006C2F50
        push edi
        mov ecx, esi
        call ext_0073AAB0
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je fn737BE0_73859F
        push ebx
        jmp fn737BE0_738598

fn737BE0_737E1C:
        lea ecx, [esp + 2ch]
        mov edi, 0aac35ch
        call ext_006E7460
fn737BE0_c5_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c5_ne
        cmp cl, bl
        je fn737BE0_c5_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c5_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c5_loop
fn737BE0_c5_zero:
        xor eax, eax
        jmp fn737BE0_c5_done
fn737BE0_c5_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c5_done:
        cmp eax, ebx
        jne fn737BE0_737E9A
        mov ecx, dword ptr [esi + 4]
        call ext_006D3630
        mov edi, eax
        push 3
        mov ecx, edi
        call ext_00715520
        mov ebx, dword ptr [esp + 88h]
        push edi
        mov ecx, ebx
        call ext_006C2F50
        push edi
        mov ecx, esi
        call ext_0073AAB0
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je fn737BE0_73859F
        push ebx
        jmp fn737BE0_738598

fn737BE0_737E9A:
        lea ecx, [esp + 2ch]
        mov edi, 0aa91ach
        call ext_006E7460
fn737BE0_c6_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c6_ne
        cmp cl, bl
        je fn737BE0_c6_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c6_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c6_loop
fn737BE0_c6_zero:
        xor eax, eax
        jmp fn737BE0_c6_done
fn737BE0_c6_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c6_done:
        cmp eax, ebx
        jne fn737BE0_737F76
        mov ecx, dword ptr [esi + 4]
        call ext_006D36C0
        mov edi, eax
        push ebx
        mov ecx, edi
        call ext_006D9170
        mov ecx, dword ptr [esi + 0ach]
        push 0aadb18h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn737BE0_737F70
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn737BE0_737F62
        mov ecx, dword ptr [esi + 0ach]
        push 0aa9190h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn737BE0_737F54
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_006D9030
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn737BE0_737F54:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn737BE0_737F62:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn737BE0_737F70:
        push edi
        jmp fn737BE0_738548

fn737BE0_737F76:
        lea ecx, [esp + 2ch]
        mov edi, 0aa91a4h
        call ext_006E7460
fn737BE0_c7_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c7_ne
        cmp cl, bl
        je fn737BE0_c7_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c7_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c7_loop
fn737BE0_c7_zero:
        xor eax, eax
        jmp fn737BE0_c7_done
fn737BE0_c7_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c7_done:
        cmp eax, ebx
        jne fn737BE0_738123
        mov ecx, dword ptr [esi + 4]
        call ext_006D36C0
        mov edi, eax
        push 1
        mov ecx, edi
        call ext_006D9170
        mov ecx, dword ptr [esi + 0ach]
        push 0aa9184h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn737BE0_738008
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_006D8FD0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn737BE0_738008:
        mov ecx, dword ptr [esi + 0ach]
        push 0aadb18h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn737BE0_73811D
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn737BE0_73810F
        mov ecx, dword ptr [esi + 0ach]
        push 0aa9190h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn737BE0_738079
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_006D9030
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn737BE0_738079:
        mov ecx, dword ptr [esi + 0ach]
        push 0aa8cech
        add ecx, 4
        call ext_00726770
        test al, al
        je fn737BE0_738101
        lea ecx, [esp + 0ch]
        call ext_0077FB40
        mov ecx, dword ptr [esi + 0ach]
        mov byte ptr [esp + 80h], 1
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 0ch]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 14h]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 1ch]
        lea eax, [esp + 0ch]
        mov ecx, edi
        push eax
        call ext_006D9070
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 0ch]
        mov byte ptr [esp + 80h], bl
        call ext_006D80A0
fn737BE0_738101:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
fn737BE0_73810F:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn737BE0_73811D:
        push edi
        jmp fn737BE0_738548

fn737BE0_738123:
        lea ecx, [esp + 2ch]
        mov edi, 0aa9198h
        call ext_006E7460
fn737BE0_c8_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c8_ne
        cmp cl, bl
        je fn737BE0_c8_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c8_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c8_loop
fn737BE0_c8_zero:
        xor eax, eax
        jmp fn737BE0_c8_done
fn737BE0_c8_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c8_done:
        cmp eax, ebx
        jne fn737BE0_7382DC
        mov ecx, dword ptr [esi + 4]
        call ext_006D36C0
        mov edi, eax
        push 2
        mov ecx, edi
        call ext_006D9170
        mov ecx, dword ptr [esi + 0ach]
        push 0aadb18h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn737BE0_738290
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn737BE0_7382C8
        mov ecx, dword ptr [esi + 0ach]
        push 0aa9190h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn737BE0_7381E6
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_006D9030
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn737BE0_7381E6:
        mov ecx, dword ptr [esi + 0ach]
        push 0aa8cech
        add ecx, 4
        call ext_00726770
        test al, al
        je fn737BE0_73826E
        lea ecx, [esp + 0ch]
        call ext_0077FB40
        mov ecx, dword ptr [esi + 0ach]
        mov byte ptr [esp + 80h], 2
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 0ch]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 14h]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 1ch]
        lea eax, [esp + 0ch]
        mov ecx, edi
        push eax
        call ext_006D9070
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 0ch]
        mov byte ptr [esp + 80h], bl
        call ext_006D80A0
fn737BE0_73826E:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        push edi
        jmp fn737BE0_738548

fn737BE0_738290:
        mov ecx, dword ptr [esi + 0ach]
        push 0aa9190h
        add ecx, 4
        call ext_00726770
        test al, al
        je fn737BE0_7382D6
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        fmul qword ptr [mem_009334D8]
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_006D9030
fn737BE0_7382C8:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn737BE0_7382D6:
        push edi
        jmp fn737BE0_738548

fn737BE0_7382DC:
        lea ecx, [esp + 2ch]
        mov edi, 0aadb0ch
        call ext_006E7460
fn737BE0_c9_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c9_ne
        cmp cl, bl
        je fn737BE0_c9_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c9_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c9_loop
fn737BE0_c9_zero:
        xor eax, eax
        jmp fn737BE0_c9_done
fn737BE0_c9_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c9_done:
        cmp eax, ebx
        jne fn737BE0_738330
        mov ecx, dword ptr [esi + 4]
        call ext_006D36C0
        mov edi, eax
        push 3
        mov ecx, edi
        call ext_006D9170
        push edi
        jmp fn737BE0_738548

fn737BE0_738330:
        lea ecx, [esp + 2ch]
        mov edi, 0aac46ch
        call ext_006E7460
fn737BE0_c10_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c10_ne
        cmp cl, bl
        je fn737BE0_c10_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c10_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c10_loop
fn737BE0_c10_zero:
        xor eax, eax
        jmp fn737BE0_c10_done
fn737BE0_c10_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c10_done:
        cmp eax, ebx
        jne fn737BE0_738383
        mov ecx, dword ptr [esi + 4]
        call ext_006D3750
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_0073D5F0
        push edi
        jmp fn737BE0_738548

fn737BE0_738383:
        lea ecx, [esp + 2ch]
        mov edi, 0aa9158h
        call ext_006E7460
fn737BE0_c11_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c11_ne
        cmp cl, bl
        je fn737BE0_c11_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c11_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c11_loop
fn737BE0_c11_zero:
        xor eax, eax
        jmp fn737BE0_c11_done
fn737BE0_c11_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c11_done:
        cmp eax, ebx
        jne fn737BE0_7383D6
        mov ecx, dword ptr [esi + 4]
        call ext_006D3720
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_0073DCD0
        push edi
        jmp fn737BE0_738548

fn737BE0_7383D6:
        lea ecx, [esp + 2ch]
        mov edi, 0aaba0ch
        call ext_006E7460
fn737BE0_c12_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c12_ne
        cmp cl, bl
        je fn737BE0_c12_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c12_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c12_loop
fn737BE0_c12_zero:
        xor eax, eax
        jmp fn737BE0_c12_done
fn737BE0_c12_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c12_done:
        cmp eax, ebx
        jne fn737BE0_73844B
        mov ecx, dword ptr [esi + 4]
        call ext_006D3690
        mov ebx, dword ptr [esp + 88h]
        mov edi, eax
        push edi
        mov ecx, ebx
        call ext_006C2F50
        push edi
        mov ecx, esi
        call ext_0073C110
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je fn737BE0_73859F
        push ebx
        jmp fn737BE0_738598

fn737BE0_73844B:
        lea ecx, [esp + 2ch]
        mov edi, 0aacab8h
        call ext_006E7460
fn737BE0_c13_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c13_ne
        cmp cl, bl
        je fn737BE0_c13_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c13_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c13_loop
fn737BE0_c13_zero:
        xor eax, eax
        jmp fn737BE0_c13_done
fn737BE0_c13_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c13_done:
        cmp eax, ebx
        jne fn737BE0_73849E
        mov ecx, dword ptr [esi + 4]
        call ext_006D3660
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_0073B010
        push edi
        jmp fn737BE0_738548

fn737BE0_73849E:
        lea ecx, [esp + 2ch]
        mov edi, 0aadafch
        call ext_006E7460
fn737BE0_c14_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c14_ne
        cmp cl, bl
        je fn737BE0_c14_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c14_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c14_loop
fn737BE0_c14_zero:
        xor eax, eax
        jmp fn737BE0_c14_done
fn737BE0_c14_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c14_done:
        cmp eax, ebx
        jne fn737BE0_738504
        mov ecx, dword ptr [esi + 4]
        call ext_006D3C30
        mov edi, dword ptr [esp + 88h]
        push eax
        mov ecx, edi
        call ext_006C2F50
        mov ecx, edi
        call ext_006C3030
        push eax
        mov ecx, esi
        call ext_00731DE0
        jmp fn737BE0_73859F

fn737BE0_738504:
        lea ecx, [esp + 2ch]
        mov edi, 0aad0d0h
        call ext_006E7460
fn737BE0_c15_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne fn737BE0_c15_ne
        cmp cl, bl
        je fn737BE0_c15_zero
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne fn737BE0_c15_ne
        add eax, 2
        add edi, 2
        cmp cl, bl
        jne fn737BE0_c15_loop
fn737BE0_c15_zero:
        xor eax, eax
        jmp fn737BE0_c15_done
fn737BE0_c15_ne:
        sbb eax, eax
        sbb eax, -1
fn737BE0_c15_done:
        cmp eax, ebx
        jne fn737BE0_73859F
        mov ecx, dword ptr [esi + 4]
        call ext_006D3780
        push eax

fn737BE0_738548:
        mov edi, dword ptr [esp + 8ch]
        mov ecx, edi
        call ext_006C2F50
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je fn737BE0_73859F
        jmp fn737BE0_738597

fn737BE0_738567:
        mov ecx, dword ptr [esi + 4]
        call ext_006D36F0
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_0073D4B0
        push edi
        mov edi, dword ptr [esp + 8ch]
        mov ecx, edi
        call ext_006C2F50
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je fn737BE0_73859F

fn737BE0_738597:
        push edi

fn737BE0_738598:
        mov ecx, esi
        call ext_00741A10

fn737BE0_73859F:
        lea ecx, [esi + 1b8h]
        call ext_006D2250
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 80h], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 78h]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 78h
        ret 4
    }
}

// [0x00737120] sub_00737120 (2384 bytes)
extern "C" void ext_006D2370(); extern "C" void ext_006D2390(); extern "C" void ext_006D23F0(); extern "C" void ext_0079DD30(); extern "C" void ext_0079DD50(); extern "C" void ext_0079DE00(); extern "C" void ext_0079DF00(); extern "C" void ext_0079E0B0(); extern "C" void ext_0079E260(); extern "C" void ext_0079E410(); extern "C" void ext_0079E4B0(); extern "C" void ext_0079E5B0(); extern "C" void ext_00732CB0();
extern "C" __declspec(naked) void __fastcall fn_00737120(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 8bfd88h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 3ch
        push esi
        mov esi, ecx
        push 0aadab0h
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726770
        test al, al
        je fn00737120_a4d
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je fn00737120_a3f
        mov eax, dword ptr [ebp + 8]
        lea ecx, [esp + 10h]
        mov eax, dword ptr [eax + 4c8h]
        push eax
        call ext_0079DD30
        lea ecx, [esp + 20h]
        call ext_006D2370
        mov ecx, dword ptr [esi + 0ach]
        push 1
        push 0aadaa8h
        add ecx, 4
        mov dword ptr [esp + 50h], 0
        call ext_00726B40
        test eax, eax
        setne cl
        push ecx
        push 0
        lea ecx, [esp + 18h]
        call ext_0079DD50
        mov ecx, dword ptr [esi + 0ach]
        push 1
        push 0aadaa0h
        add ecx, 4
        call ext_00726B40
        test eax, eax
        setne dl
        push edx
        push 1
        lea ecx, [esp + 18h]
        call ext_0079DD50
        mov ecx, dword ptr [esi + 0ach]
        push 1
        push 0aada98h
        add ecx, 4
        call ext_00726B40
        test eax, eax
        setne al
        push eax
        push 2
        lea ecx, [esp + 18h]
        call ext_0079DD50
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aada90h
        add ecx, 4
        call ext_00726B40
        test eax, eax
        setne cl
        push ecx
        push 0
        lea ecx, [esp + 18h]
        call ext_0079DE00
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aada88h
        add ecx, 4
        call ext_00726B40
        test eax, eax
        setne dl
        push edx
        push 1
        lea ecx, [esp + 18h]
        call ext_0079DE00
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aada80h
        add ecx, 4
        call ext_00726B40
        test eax, eax
        setne al
        push eax
        push 2
        lea ecx, [esp + 18h]
        call ext_0079DE00
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aada74h
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 0
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        push 0
        push 0aada68h
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 1
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        push 0
        push 0aada5ch
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 2
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        sub esp, 20h
        mov ecx, esp
        mov dword ptr [esp + 24h], esp
        mov dword ptr [eax + 4], edx
        lea eax, [esp + 40h]
        push eax
        call ext_006D2390
        push 0
        lea ecx, [esp + 34h]
        call ext_0079DF00
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aada50h
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 0
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        push 0
        push 0aada44h
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 1
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        push 0
        push 0aada38h
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 2
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        sub esp, 20h
        mov ecx, esp
        mov dword ptr [esp + 24h], esp
        mov dword ptr [eax + 4], edx
        lea eax, [esp + 40h]
        push eax
        call ext_006D2390
        push 1
        lea ecx, [esp + 34h]
        call ext_0079DF00
        mov ecx, dword ptr [esi + 0ach]
        push 3ff00000h
        push 0
        push 0aada2ch
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 0
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 3ff00000h
        push 0
        push 0aada20h
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 1
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 3ff00000h
        push 0
        push 0aada14h
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 2
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        sub esp, 20h
        mov ecx, esp
        mov dword ptr [esp + 24h], esp
        mov dword ptr [eax + 4], edx
        lea eax, [esp + 40h]
        push eax
        call ext_006D2390
        push 2
        lea ecx, [esp + 34h]
        call ext_0079DF00
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aada0ch
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 0
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aada04h
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 1
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        push 0
        push 0aad9fch
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 2
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        sub esp, 20h
        mov ecx, esp
        mov dword ptr [esp + 24h], esp
        mov dword ptr [eax + 4], edx
        lea eax, [esp + 40h]
        push eax
        call ext_006D2390
        push 0
        lea ecx, [esp + 34h]
        call ext_0079E0B0
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aad9f4h
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 0
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        push 0
        push 0aad9ech
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 1
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        push 0
        push 0aad9e4h
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 2
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        sub esp, 20h
        mov ecx, esp
        mov dword ptr [esp + 24h], esp
        mov dword ptr [eax + 4], edx
        lea eax, [esp + 40h]
        push eax
        call ext_006D2390
        push 1
        lea ecx, [esp + 34h]
        call ext_0079E0B0
        mov ecx, dword ptr [esi + 0ach]
        push 3ff00000h
        push 0
        push 0aad9dch
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 0
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 3ff00000h
        push 0
        push 0aad9d4h
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 1
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 3ff00000h
        push 0
        push 0aad9cch
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 2
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        sub esp, 20h
        mov ecx, esp
        mov dword ptr [esp + 24h], esp
        mov dword ptr [eax + 4], edx
        lea eax, [esp + 40h]
        push eax
        call ext_006D2390
        push 2
        lea ecx, [esp + 34h]
        call ext_0079E0B0
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aad9c4h
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 0
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        push 0
        push 0aad9bch
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 1
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        push 0
        push 0aad9b4h
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 2
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        sub esp, 20h
        mov ecx, esp
        mov dword ptr [esp + 24h], esp
        mov dword ptr [eax + 4], edx
        lea eax, [esp + 40h]
        push eax
        call ext_006D2390
        push 0
        lea ecx, [esp + 34h]
        call ext_0079E260
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aad9ach
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 0
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        push 0
        push 0aad9a4h
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 1
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        push 0
        push 0aad99ch
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 2
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        sub esp, 20h
        mov ecx, esp
        mov dword ptr [esp + 24h], esp
        mov dword ptr [eax + 4], edx
        lea eax, [esp + 40h]
        push eax
        call ext_006D2390
        push 1
        lea ecx, [esp + 34h]
        call ext_0079E260
        push 3ff00000h
        push 0
        push 0aad994h
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 0
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 3ff00000h
        push 0
        push 0aad98ch
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 1
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 3ff00000h
        push 0
        push 0aad984h
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 2
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        sub esp, 20h
        mov ecx, esp
        mov dword ptr [esp + 24h], esp
        mov dword ptr [eax + 4], edx
        lea eax, [esp + 40h]
        push eax
        call ext_006D2390
        push 2
        lea ecx, [esp + 34h]
        call ext_0079E260
        mov ecx, dword ptr [esi + 0ach]
        push 1
        push 0aad97ch
        add ecx, 4
        call ext_00726B40
        push eax
        lea ecx, [esp + 14h]
        call ext_0079E410
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aad970h
        add ecx, 4
        call ext_00726B40
        push eax
        lea ecx, [esp + 14h]
        call ext_00732CB0
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aad968h
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 0
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        push 0
        push 0aad960h
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 1
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        push 0
        push 0
        push 0aad958h
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726C20
        fstp qword ptr [esp + 4]
        push 2
        lea ecx, [esp + 24h]
        call ext_006D23F0
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        sub esp, 20h
        mov ecx, esp
        mov dword ptr [esp + 24h], esp
        mov dword ptr [eax + 4], edx
        lea eax, [esp + 40h]
        push eax
        call ext_006D2390
        lea ecx, [esp + 30h]
        call ext_0079E4B0
        mov ecx, dword ptr [esi + 0ach]
        push 3ff00000h
        push 0
        push 0aa8aa4h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        lea ecx, [esp + 18h]
        fstp qword ptr [esp]
        call ext_0079E5B0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
        lea ecx, [esp + 20h]
        mov dword ptr [esp + 48h], 0ffffffffh
        call ext_006D80A0
fn00737120_a3f:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
fn00737120_a4d:
        mov ecx, dword ptr [esp + 40h]
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x0073E150] sub_0073E150 (3584 bytes)
extern "C" void ext_006BAC80(); extern "C" void ext_006D2130(); extern "C" void ext_006D2160(); extern "C" void ext_006D2370(); extern "C" void ext_006D23F0(); extern "C" void ext_006DC9E0(); extern "C" void ext_00702360(); extern "C" void ext_007023A0(); extern "C" void ext_007023E0(); extern "C" void ext_00702410(); extern "C" void ext_00702430(); extern "C" void ext_007024A0(); extern "C" void ext_007025C0(); extern "C" void ext_00702620(); extern "C" void ext_00702660(); extern "C" void ext_00702750(); extern "C" void ext_007027A0(); extern "C" void ext_007027F0(); extern "C" void ext_007028A0(); extern "C" void ext_00702950(); extern "C" void ext_00702AF0(); extern "C" void ext_00703B60(); extern "C" void ext_00703B80(); extern "C" void ext_00703BB0(); extern "C" void ext_00726B40(); extern "C" void ext_00726BE0(); extern "C" void ext_00742E60(); extern "C" void ext_00783840(); extern "C" void ext_0079CD60(); extern "C" void ext_0079D6D0(); extern "C" int mem_0092A278; extern "C" int mem_0092A270;

extern "C" __declspec(naked) void __fastcall fn_0073E150(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 08be8b0h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 58h
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov ecx, dword ptr [ebx+0ach]
        push edi
        call ext_0079D6D0
        test al, al
        je L73EC1E
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726A40
        mov ebp, dword ptr [esp+78h]
        push eax
        mov ecx, ebp
        call ext_006BAC80
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je L73EF2B
        mov ecx, dword ptr [ebx+0ach]
        push 0b5d2c0h
        push 0aad214h
        add ecx, 4
        call ext_00726AA0
        push eax
        mov ecx, ebp
        call ext_00703B60
        mov ecx, dword ptr [ebx+0ach]
        push 0aa8d90h
        add ecx, 4
        call ext_00726770
        xor edi, edi
        or esi, -1
        test al, al
        je L73E288
        lea ecx, [esp+48h]
        call ext_006D2370
        mov ecx, dword ptr [ebx+0ach]
        mov dword ptr [esp+70h], edi
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp+10h]
        push edi
        lea ecx, [esp+4ch]
        call ext_006D23F0
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [esp+14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax+4], edx
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp+10h]
        push 1
        lea ecx, [esp+4ch]
        call ext_006D23F0
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [esp+14h]
        mov dword ptr [eax], ecx
        push 2
        lea ecx, [esp+4ch]
        mov dword ptr [eax+4], edx
        call ext_006D23F0
        mov dword ptr [eax], edi
        mov dword ptr [eax+4], edi
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726840
        lea eax, [esp+48h]
        mov ecx, ebp
        push eax
        call ext_007027F0
        lea ecx, [esp+48h]
        mov dword ptr [esp+70h], esi
        call ext_006D80A0
L73E288:
        mov ecx, dword ptr [ebx+0ach]
        push 0aa8d9ch
        add ecx, 4
        call ext_00726770
        test al, al
        je L73E358
        lea ecx, [esp+48h]
        call ext_006D2370
        mov ecx, dword ptr [ebx+0ach]
        mov dword ptr [esp+70h], 1
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp+10h]
        push edi
        lea ecx, [esp+4ch]
        call ext_006D23F0
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [esp+14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax+4], edx
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp+10h]
        push 1
        lea ecx, [esp+4ch]
        call ext_006D23F0
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [esp+14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax+4], edx
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp+10h]
        push 2
        lea ecx, [esp+4ch]
        call ext_006D23F0
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [esp+14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax+4], edx
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726840
        lea eax, [esp+48h]
        mov ecx, ebp
        push eax
        call ext_007028A0
        lea ecx, [esp+48h]
        mov dword ptr [esp+70h], esi
        call ext_006D80A0
L73E358:
        mov ecx, dword ptr [ebx+0ach]
        push 0aa8da8h
        add ecx, 4
        call ext_00726770
        test al, al
        je L73E412
        lea ecx, [esp+48h]
        call ext_006D2370
        mov ecx, dword ptr [ebx+0ach]
        mov dword ptr [esp+70h], 2
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp+10h]
        push edi
        lea ecx, [esp+4ch]
        call ext_006D23F0
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [esp+14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax+4], edx
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp+10h]
        push 1
        lea ecx, [esp+4ch]
        call ext_006D23F0
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [esp+14h]
        mov dword ptr [eax], ecx
        push 2
        lea ecx, [esp+4ch]
        mov dword ptr [eax+4], edx
        call ext_006D23F0
        mov dword ptr [eax], edi
        mov dword ptr [eax+4], 03ff00000h
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726840
        lea eax, [esp+48h]
        mov ecx, ebp
        push eax
        call ext_00702950
        lea ecx, [esp+48h]
        mov dword ptr [esp+70h], esi
        call ext_006D80A0
L73E412:
        mov ecx, dword ptr [ebx+0ach]
        push 0aadc6ch
        add ecx, 4
        call ext_00726770
        test al, al
        je L73E4B4
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [ebx+0ach]
        fstp qword ptr [esp+10h]
        add ecx, 4
        call ext_00726840
        fld qword ptr [esp+10h]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 1
        je L73E470
        mov dword ptr [esp+10h], 0
        mov dword ptr [esp+14h], 0
        jmp L73E4A3
L73E470:
        fld qword ptr [esp+10h]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 41h
        jne L73E493
        mov dword ptr [esp+10h], 0
        mov dword ptr [esp+14h], 03ff00000h
        jmp L73E4A3
L73E493:
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [esp+14h]
        mov dword ptr [esp+10h], ecx
        mov dword ptr [esp+14h], edx
L73E4A3:
        mov eax, dword ptr [esp+14h]
        mov ecx, dword ptr [esp+10h]
        push eax
        push ecx
        mov ecx, ebp
        call ext_00702AF0
L73E4B4:
        mov ecx, dword ptr [ebx+0ach]
        push 0aae4bch
        add ecx, 4
        call ext_00726770
        test al, al
        je L73E52B
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [ebx+0ach]
        sub esp, 8
        add ecx, 4
        fstp qword ptr [esp]
        call ext_00726BE0
        sub esp, 8
        lea ecx, [esp+20h]
        fstp qword ptr [esp]
        call ext_00783840
        lea edx, [esp+10h]
        mov ecx, ebp
        push edx
        mov dword ptr [esp+74h], 3
        call ext_00703B80
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp+10h]
        mov dword ptr [esp+70h], esi
        call ext_006D80A0
L73E52B:
        mov ecx, dword ptr [ebx+0ach]
        push 0aae4ach
        add ecx, 4
        call ext_00726770
        test al, al
        je L73E5A2
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [ebx+0ach]
        sub esp, 8
        add ecx, 4
        fstp qword ptr [esp]
        call ext_00726BE0
        sub esp, 8
        lea ecx, [esp+20h]
        fstp qword ptr [esp]
        call ext_00783840
        lea eax, [esp+10h]
        mov ecx, ebp
        push eax
        mov dword ptr [esp+74h], 4
        call ext_00703BB0
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp+10h]
        mov dword ptr [esp+70h], esi
        call ext_006D80A0
L73E5A2:
        mov ecx, dword ptr [ebx+0ach]
        push 0b5d2c0h
        push 0aae494h
        add ecx, 4
        call ext_00726AA0
        mov edi, eax
        xor ecx, ecx
        test edi, edi
        je L73E670
        mov esi, 0aab920h
        mov ecx, edi
L73E5CD:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L73E5F1
        test dl, dl
        je L73E5ED
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L73E5F1
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73E5CD
L73E5ED:
        xor ecx, ecx
        jmp L73E5F6
L73E5F1:
        sbb ecx, ecx
        sbb ecx, -1
L73E5F6:
        test ecx, ecx
        je L73E670
        mov esi, 0aae484h
        mov ecx, edi
L73E601:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L73E625
        test dl, dl
        je L73E621
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L73E625
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73E601
L73E621:
        xor ecx, ecx
        jmp L73E62A
L73E625:
        sbb ecx, ecx
        sbb ecx, -1
L73E62A:
        test ecx, ecx
        jne L73E635
        mov ecx, 1
        jmp L73E670
L73E635:
        mov esi, 0aae478h
        mov eax, edi
L73E63C:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L73E660
        test cl, cl
        je L73E65C
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne L73E660
        add eax, 2
        add esi, 2
        test cl, cl
        jne L73E63C
L73E65C:
        xor eax, eax
        jmp L73E665
L73E660:
        sbb eax, eax
        sbb eax, -1
L73E665:
        neg eax
        sbb eax, eax
        and al, -2
        add eax, 2
        mov ecx, eax
L73E670:
        push ecx
        mov ecx, ebp
        call ext_00702410
        mov ecx, dword ptr [ebx+0ach]
        push 0aae46ch
        add ecx, 4
        call ext_00726770
        test al, al
        je L73E6E0
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [ebx+0ach]
        push eax
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [ebx+0ach]
        push eax
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [ebx+0ach]
        push eax
        add ecx, 4
        call ext_00726AE0
        push eax
        mov ecx, ebp
        call ext_00702430
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726840
L73E6E0:
        mov ecx, dword ptr [ebx+0ach]
        push 0b5d2c0h
        push 0aae454h
        add ecx, 4
        call ext_00726AA0
        mov edi, eax
        xor ecx, ecx
        test edi, edi
        je L73E8E4
        mov esi, 0aab920h
        mov ecx, edi
L73E70B:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L73E72F
        test dl, dl
        je L73E72B
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L73E72F
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73E70B
L73E72B:
        xor ecx, ecx
        jmp L73E734
L73E72F:
        sbb ecx, ecx
        sbb ecx, -1
L73E734:
        test ecx, ecx
        je L73E8E4
        mov esi, 0aae44ch
        mov ecx, edi
L73E743:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L73E767
        test dl, dl
        je L73E763
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L73E767
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73E743
L73E763:
        xor ecx, ecx
        jmp L73E76C
L73E767:
        sbb ecx, ecx
        sbb ecx, -1
L73E76C:
        test ecx, ecx
        jne L73E77A
        mov ecx, 1
        jmp L73E8E4
L73E77A:
        mov esi, 0aabbb4h
        mov ecx, edi
L73E781:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L73E7A5
        test dl, dl
        je L73E7A1
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L73E7A5
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73E781
L73E7A1:
        xor ecx, ecx
        jmp L73E7AA
L73E7A5:
        sbb ecx, ecx
        sbb ecx, -1
L73E7AA:
        test ecx, ecx
        jne L73E7B8
        mov ecx, 2
        jmp L73E8E4
L73E7B8:
        mov esi, 0aabba8h
        mov ecx, edi
L73E7BF:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L73E7E3
        test dl, dl
        je L73E7DF
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L73E7E3
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73E7BF
L73E7DF:
        xor ecx, ecx
        jmp L73E7E8
L73E7E3:
        sbb ecx, ecx
        sbb ecx, -1
L73E7E8:
        test ecx, ecx
        jne L73E7F6
        mov ecx, 3
        jmp L73E8E4
L73E7F6:
        mov esi, 0aabb8ch
        mov ecx, edi
L73E7FD:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L73E821
        test dl, dl
        je L73E81D
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L73E821
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73E7FD
L73E81D:
        xor ecx, ecx
        jmp L73E826
L73E821:
        sbb ecx, ecx
        sbb ecx, -1
L73E826:
        test ecx, ecx
        jne L73E834
        mov ecx, 4
        jmp L73E8E4
L73E834:
        mov esi, 0aabb84h
        mov ecx, edi
L73E83B:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L73E85F
        test dl, dl
        je L73E85B
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L73E85F
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73E83B
L73E85B:
        xor ecx, ecx
        jmp L73E864
L73E85F:
        sbb ecx, ecx
        sbb ecx, -1
L73E864:
        test ecx, ecx
        jne L73E86F
        mov ecx, 5
        jmp L73E8E4
L73E86F:
        mov esi, 0aabbc0h
        mov ecx, edi
L73E876:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L73E89A
        test dl, dl
        je L73E896
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L73E89A
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73E876
L73E896:
        xor ecx, ecx
        jmp L73E89F
L73E89A:
        sbb ecx, ecx
        sbb ecx, -1
L73E89F:
        test ecx, ecx
        jne L73E8AA
        mov ecx, 6
        jmp L73E8E4
L73E8AA:
        mov esi, 0aabb9ch
        mov eax, edi
L73E8B1:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L73E8D5
        test cl, cl
        je L73E8D1
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne L73E8D5
        add eax, 2
        add esi, 2
        test cl, cl
        jne L73E8B1
L73E8D1:
        xor ecx, ecx
        jmp L73E8DA
L73E8D5:
        sbb ecx, ecx
        sbb ecx, -1
L73E8DA:
        neg ecx
        sbb ecx, ecx
        and ecx, -7
        add ecx, 7
L73E8E4:
        push ecx
        mov ecx, ebp
        call ext_007024A0
        mov ecx, dword ptr [ebx+0ach]
        push 0b5d2c0h
        push 0aae42ch
        add ecx, 4
        call ext_00726AA0
        mov edi, eax
        xor ecx, ecx
        test edi, edi
        je L73E9BA
        mov esi, 0aa8ca8h
        mov ecx, edi
L73E917:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L73E93B
        test dl, dl
        je L73E937
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L73E93B
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73E917
L73E937:
        xor ecx, ecx
        jmp L73E940
L73E93B:
        sbb ecx, ecx
        sbb ecx, -1
L73E940:
        test ecx, ecx
        je L73E9BA
        mov esi, 0aa8ca4h
        mov ecx, edi
L73E94B:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L73E96F
        test dl, dl
        je L73E96B
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L73E96F
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73E94B
L73E96B:
        xor ecx, ecx
        jmp L73E974
L73E96F:
        sbb ecx, ecx
        sbb ecx, -1
L73E974:
        test ecx, ecx
        jne L73E97F
        mov ecx, 1
        jmp L73E9BA
L73E97F:
        mov esi, 0aa8ca0h
        mov eax, edi
L73E986:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L73E9AA
        test cl, cl
        je L73E9A6
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne L73E9AA
        add eax, 2
        add esi, 2
        test cl, cl
        jne L73E986
L73E9A6:
        xor eax, eax
        jmp L73E9AF
L73E9AA:
        sbb eax, eax
        sbb eax, -1
L73E9AF:
        neg eax
        sbb eax, eax
        and al, -2
        add eax, 2
        mov ecx, eax
L73E9BA:
        push ecx
        mov ecx, ebp
        call ext_007025C0
        mov ecx, dword ptr [ebx+0ach]
        push 0aae424h
        add ecx, 4
        mov byte ptr [esp+7ch], 0
        call ext_00726770
        test al, al
        je L73EA03
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [ebx+0ach]
        test eax, eax
        setne al
        add ecx, 4
        mov byte ptr [esp+78h], al
        call ext_00726840
L73EA03:
        mov ecx, dword ptr [esp+78h]
        push ecx
        mov ecx, ebp
        call ext_007023E0
        mov ecx, dword ptr [ebx+0ach]
        push 0
        push 0aae414h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, ebp
        call ext_00702620
        mov ecx, dword ptr [ebx+0ach]
        push 0b5d2c0h
        push 0aae408h
        add ecx, 4
        call ext_00726AA0
        mov edi, eax
        xor eax, eax
        test edi, edi
        je L73EBB3
        mov esi, 0aae3fch
        mov eax, edi
L73EA57:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L73EA7B
        test cl, cl
        je L73EA77
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne L73EA7B
        add eax, 2
        add esi, 2
        test cl, cl
        jne L73EA57
L73EA77:
        xor eax, eax
        jmp L73EA80
L73EA7B:
        sbb eax, eax
        sbb eax, -1
L73EA80:
        test eax, eax
        je L73EBB3
        mov esi, 0aae3f0h
        mov eax, edi
L73EA8F:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L73EAB3
        test cl, cl
        je L73EAAF
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne L73EAB3
        add eax, 2
        add esi, 2
        test cl, cl
        jne L73EA8F
L73EAAF:
        xor eax, eax
        jmp L73EAB8
L73EAB3:
        sbb eax, eax
        sbb eax, -1
L73EAB8:
        test eax, eax
        jne L73EAC6
        mov eax, 1
        jmp L73EBB3
L73EAC6:
        mov esi, 0aae3e4h
        mov eax, edi
L73EACD:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L73EAF1
        test cl, cl
        je L73EAED
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne L73EAF1
        add eax, 2
        add esi, 2
        test cl, cl
        jne L73EACD
L73EAED:
        xor eax, eax
        jmp L73EAF6
L73EAF1:
        sbb eax, eax
        sbb eax, -1
L73EAF6:
        test eax, eax
        jne L73EB04
        mov eax, 2
        jmp L73EBB3
L73EB04:
        mov esi, 0aae3cch
        mov eax, edi
L73EB0B:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L73EB2F
        test cl, cl
        je L73EB2B
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne L73EB2F
        add eax, 2
        add esi, 2
        test cl, cl
        jne L73EB0B
L73EB2B:
        xor eax, eax
        jmp L73EB34
L73EB2F:
        sbb eax, eax
        sbb eax, -1
L73EB34:
        test eax, eax
        jne L73EB3F
        mov eax, 3
        jmp L73EBB3
L73EB3F:
        mov esi, 0aae3b8h
        mov eax, edi
L73EB46:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L73EB6A
        test cl, cl
        je L73EB66
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne L73EB6A
        add eax, 2
        add esi, 2
        test cl, cl
        jne L73EB46
L73EB66:
        xor eax, eax
        jmp L73EB6F
L73EB6A:
        sbb eax, eax
        sbb eax, -1
L73EB6F:
        test eax, eax
        jne L73EB7A
        mov eax, 4
        jmp L73EBB3
L73EB7A:
        mov esi, 0aae3a8h
        mov eax, edi
L73EB81:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L73EBA5
        test cl, cl
        je L73EBA1
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne L73EBA5
        add eax, 2
        add esi, 2
        test cl, cl
        jne L73EB81
L73EBA1:
        xor eax, eax
        jmp L73EBAA
L73EBA5:
        sbb eax, eax
        sbb eax, -1
L73EBAA:
        neg eax
        sbb eax, eax
        and al, -5
        add eax, 5
L73EBB3:
        push eax
        mov ecx, ebp
        call ext_00702660
        mov ecx, dword ptr [ebx+0ach]
        push 0
        push 0aae3a0h
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [ebx+0ach]
        push eax
        push 0
        push 0aae398h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, ebp
        call ext_00702750
        mov ecx, dword ptr [ebx+0ach]
        push 0
        push 0aadc7ch
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, ebp
        call ext_007027A0
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_007268D0
        jmp L73EF2B
L73EC1E:
        mov ecx, dword ptr [ebx+0ach]
        push 0b5d2c0h
        push 0aae38ch
        add ecx, 4
        call ext_00726AA0
        mov edi, dword ptr [esp+78h]
        push eax
        mov ecx, edi
        call ext_006BAC80
        mov ecx, dword ptr [ebx+0ach]
        push 0b5d2c0h
        push 0aad2b4h
        add ecx, 4
        call ext_00726AA0
        push eax
        mov ecx, edi
        call ext_00702360
        mov ecx, dword ptr [ebx+0ach]
        push 0b5d2c0h
        push 0aad8a8h
        add ecx, 4
        call ext_00726AA0
        push eax
        mov ecx, edi
        call ext_007023A0
        mov ecx, dword ptr [ebx+0ach]
        push 0b5d2c0h
        push 0aad214h
        add ecx, 4
        call ext_00726AA0
        push eax
        mov ecx, edi
        call ext_00703B60
        push 4
        push 10h
        lea ecx, [esp+38h]
        call ext_006D2130
        lea eax, [esp+40h]
        mov dword ptr [esp+44h], eax
        mov edx, dword ptr [edi]
        lea eax, [esp+30h]
        push eax
        mov ecx, edi
        mov dword ptr [esp+74h], 5
        call dword ptr [edx+10h]
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx+0ch]
        mov ecx, dword ptr [ebx+0ach]
        push eax
        lea eax, [esp+34h]
        push eax
        call ext_0079CD60
        mov ecx, edi
        call ext_006DC9E0
        push edi
        mov ecx, ebx
        call ext_00742E60
        mov ecx, dword ptr [ebx+0ach]
        push 0aae4bch
        add ecx, 4
        call ext_00726770
        test al, al
        je L73ED67
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [ebx+0ach]
        sub esp, 8
        add ecx, 4
        fstp qword ptr [esp]
        call ext_00726BE0
        sub esp, 8
        lea ecx, [esp+20h]
        fstp qword ptr [esp]
        call ext_00783840
        lea ecx, [esp+10h]
        mov byte ptr [esp+70h], 6
        push ecx
        mov ecx, edi
        call ext_00703B80
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp+10h]
        mov byte ptr [esp+70h], 5
        call ext_006D80A0
L73ED67:
        mov ecx, dword ptr [ebx+0ach]
        push 0aae4ach
        add ecx, 4
        call ext_00726770
        test al, al
        je L73EDDC
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [ebx+0ach]
        sub esp, 8
        add ecx, 4
        fstp qword ptr [esp]
        call ext_00726BE0
        sub esp, 8
        lea ecx, [esp+30h]
        fstp qword ptr [esp]
        call ext_00783840
        lea edx, [esp+20h]
        mov ecx, edi
        push edx
        mov byte ptr [esp+74h], 7
        call ext_00703BB0
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp+20h]
        mov byte ptr [esp+70h], 5
        call ext_006D80A0
L73EDDC:
        mov ecx, dword ptr [ebx+0ach]
        push 0b5d2c0h
        push 0aae494h
        add ecx, 4
        call ext_00726AA0
        mov ebp, eax
        xor ecx, ecx
        test ebp, ebp
        je L73EEAA
        mov esi, 0aab920h
        mov ecx, ebp
L73EE05:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L73EE2B
        test dl, dl
        je L73EE27
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L73EE2B
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73EE05
L73EE27:
        xor ecx, ecx
        jmp L73EE30
L73EE2B:
        sbb ecx, ecx
        sbb ecx, -1
L73EE30:
        test ecx, ecx
        je L73EEAA
        mov esi, 0aae484h
        mov ecx, ebp
L73EE39:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne L73EE5F
        test dl, dl
        je L73EE5B
        mov al, byte ptr [ecx+1]
        mov dl, al
        cmp al, byte ptr [esi+1]
        jne L73EE5F
        add ecx, 2
        add esi, 2
        test dl, dl
        jne L73EE39
L73EE5B:
        xor ecx, ecx
        jmp L73EE64
L73EE5F:
        sbb ecx, ecx
        sbb ecx, -1
L73EE64:
        test ecx, ecx
        jne L73EE6F
        mov ecx, 1
        jmp L73EEAA
L73EE6F:
        mov esi, 0aae478h
        mov eax, ebp
L73EE76:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L73EE9A
        test cl, cl
        je L73EE96
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne L73EE9A
        add eax, 2
        add esi, 2
        test cl, cl
        jne L73EE76
L73EE96:
        xor eax, eax
        jmp L73EE9F
L73EE9A:
        sbb eax, eax
        sbb eax, -1
L73EE9F:
        neg eax
        sbb eax, eax
        and al, -2
        add eax, 2
        mov ecx, eax
L73EEAA:
        push ecx
        mov ecx, edi
        call ext_00702410
        mov ecx, dword ptr [ebx+0ach]
        push 0aae46ch
        add ecx, 4
        call ext_00726770
        test al, al
        je L73EF1A
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [ebx+0ach]
        push eax
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [ebx+0ach]
        push eax
        add ecx, 4
        call ext_00726AE0
        mov ecx, dword ptr [ebx+0ach]
        push eax
        add ecx, 4
        call ext_00726AE0
        push eax
        mov ecx, edi
        call ext_00702430
        mov ecx, dword ptr [ebx+0ach]
        add ecx, 4
        call ext_00726840
L73EF1A:
        lea ecx, [esp+30h]
        mov dword ptr [esp+70h], 0ffffffffh
        call ext_006D2160
L73EF2B:
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

// [0x0073F7E0] sub_0073F7E0 (3216 bytes)
extern "C" void ext_006B9EC0(); extern "C" void ext_006C3FB0(); extern "C" void ext_006C4340(); extern "C" void ext_006C4440(); extern "C" void ext_006C81A0(); extern "C" void ext_006D2300(); extern "C" void ext_006D2370(); extern "C" void ext_006D80A0();
extern "C" void ext_0070EC90(); extern "C" void ext_0070ECB0(); extern "C" void ext_0070ECD0(); extern "C" void ext_0070EED0(); extern "C" void ext_0070EFA0(); extern "C" void ext_0070F070(); extern "C" void ext_0070F140(); extern "C" void ext_00714570();
extern "C" void ext_00726770(); extern "C" void ext_00726840(); extern "C" void ext_00726860(); extern "C" void ext_007268D0(); extern "C" void ext_00726900(); extern "C" void ext_00726A40(); extern "C" void ext_00726AE0(); extern "C" void ext_00726BE0(); extern "C" void ext_00726DB0(); extern "C" void ext_00787430();
extern "C" __declspec(naked) void __fastcall fn_0073F7E0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 08be992h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 3ech
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [esp + 358h]
        call ext_006D2370
        mov esi, dword ptr [ebp + 8]
        xor ebx, ebx
        mov dword ptr [esp + 400h], ebx
        mov dword ptr [esi + 8], ebx
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esi + 0ch]
        call ext_006B9EC0
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je L_740437
        mov dword ptr [esi + 58h], ebx
        mov ecx, dword ptr [edi + 0ach]
        push 0aae528h
        add ecx, 4
        call ext_00726770
        test al, al
        je L_73F8BE
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726A40
        mov ebx, eax
        push 0aabb6ch
        push ebx
        call dword ptr [mem_009251D0]
        add esp, 8
        test eax, eax
        jne L_73F894
        mov dword ptr [esi + 58h], 1
        jmp L_73F8AE
L_73F894:
        push 0aae520h
        push ebx
        call dword ptr [mem_009251D0]
        add esp, 8
        test eax, eax
        jne L_73F8AE
        mov dword ptr [esi + 58h], 2
L_73F8AE:
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726840
        xor ebx, ebx
L_73F8BE:
        mov ecx, dword ptr [edi + 0ach]
        push 0aad39ch
        add ecx, 4
        call ext_00726770
        test al, al
        je L_73F917
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esi + 0ach]
        call ext_006B9EC0
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esi + 0f8h]
        call ext_006B9EC0
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726840
L_73F917:
        mov ecx, dword ptr [edi + 0ach]
        push 0aae518h
        add ecx, 4
        call ext_00726770
        test al, al
        je L_73F9A2
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726900
        mov ebx, eax
        lea ecx, [esi + 2d0h]
        push ebx
        call ext_006D2300
        push ebx
        lea ecx, [esi + 2e8h]
        call ext_006D2300
        test ebx, ebx
        mov dword ptr [esp + 0ch], 0
        jle L_73F994
L_73F962:
        mov eax, dword ptr [esi + 2e0h]
        mov ecx, dword ptr [esp + 0ch]
        lea edx, [eax + 4*ecx]
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        mov dword ptr [esp + 14h], edx
        call ext_00726AE0
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp + 0ch]
        inc eax
        cmp eax, ebx
        mov dword ptr [esp + 0ch], eax
        jl L_73F962
L_73F994:
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726840
L_73F9A2:
        mov ecx, dword ptr [edi + 0ach]
        push 0aae510h
        add ecx, 4
        call ext_00726770
        test al, al
        je L_73FA05
        test ebx, ebx
        mov dword ptr [esp + 0ch], 0
        jle L_73F9F7
L_73F9C5:
        mov edx, dword ptr [esi + 2f8h]
        mov eax, dword ptr [esp + 0ch]
        lea ecx, [edx + 8*eax]
        mov dword ptr [esp + 14h], ecx
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726BE0
        mov eax, dword ptr [esp + 0ch]
        mov edx, dword ptr [esp + 14h]
        inc eax
        fstp qword ptr [edx]
        cmp eax, ebx
        mov dword ptr [esp + 0ch], eax
        jl L_73F9C5
L_73F9F7:
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726840
L_73FA05:
        lea ecx, [esp + 378h]
        call ext_00714570
        mov ecx, dword ptr [edi + 0ach]
        push 10h
        lea eax, [esp + 37ch]
        push 0
        push eax
        push 0aa8cb8h
        add ecx, 4
        mov byte ptr [esp + 410h], 1
        call ext_00726DB0
        lea ecx, [esp + 378h]
        push ecx
        mov ecx, esi
        call ext_0070EED0
        mov ecx, dword ptr [edi + 0ach]
        push 0aae500h
        add ecx, 4
        call ext_00726770
        test al, al
        je L_73FAE7
        lea ecx, [esp + 158h]
        call ext_00714570
        mov ebx, dword ptr [edi + 0ach]
        lea edx, [esp + 158h]
        mov byte ptr [esp + 400h], 2
        add ebx, 4
        mov dword ptr [esp + 0ch], edx
        mov dword ptr [esp + 14h], 10h
L_73FA92:
        mov ecx, ebx
        call ext_00726BE0
        mov eax, dword ptr [esp + 0ch]
        fstp qword ptr [eax]
        add eax, 8
        mov dword ptr [esp + 0ch], eax
        mov eax, dword ptr [esp + 14h]
        dec eax
        mov dword ptr [esp + 14h], eax
        jne L_73FA92
        lea eax, [esp + 158h]
        mov ecx, esi
        push eax
        call ext_0070EFA0
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 158h]
        mov byte ptr [esp + 400h], 1
        call ext_006D80A0
        jmp L_73FB8A
L_73FAE7:
        lea ecx, [esp + 3ch]
        call ext_006D2370
        push 3ff00000h
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, [esp + 5ch]
        mov byte ptr [esp + 420h], 3
        call ext_00787430
        lea ecx, [esp + 3ch]
        push ecx
        mov ecx, esi
        call ext_0070ECB0
        push 3ff00000h
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, [esp + 5ch]
        call ext_00787430
        lea edx, [esp + 3ch]
        mov ecx, esi
        push edx
        call ext_0070EC90
        push 3ff00000h
        push 0
        push 3ff00000h
        push 0
        push 3ff00000h
        push 0
        push 3ff00000h
        push 0
        lea ecx, [esp + 5ch]
        call ext_00787430
        lea eax, [esp + 3ch]
        mov ecx, esi
        push eax
        call ext_0070ECD0
        lea ecx, [esp + 3ch]
        mov byte ptr [esp + 400h], 1
        call ext_006D80A0
L_73FB8A:
        fld qword ptr [esi + 178h]
        fld qword ptr [esi + 170h]
        mov edx, dword ptr [esi + 15ch]
        mov eax, dword ptr [esi + 150h]
        fstp qword ptr [esp + 118h]
        mov ecx, dword ptr [esi + 158h]
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [esi + 148h]
        mov dword ptr [esp + 0ch], eax
        fstp qword ptr [esp + 120h]
        mov eax, dword ptr [esi + 14ch]
        mov dword ptr [esp + 1ch], ecx
        mov ecx, dword ptr [esi + 154h]
        mov dword ptr [esp + 14h], edx
        fld qword ptr [esi + 198h]
        mov edx, dword ptr [esi + 16ch]
        mov dword ptr [esp + 18h], eax
        fld qword ptr [esi + 190h]
        mov eax, dword ptr [esi + 188h]
        mov dword ptr [esp + 10h], ecx
        mov ecx, dword ptr [esi + 168h]
        mov dword ptr [esp + 114h], edx
        fstp qword ptr [esp + 100h]
        mov dword ptr [esp + 0f8h], eax
        lea edx, [esp + 110h]
        fstp qword ptr [esp + 108h]
        mov dword ptr [esp + 110h], ecx
        mov ecx, dword ptr [esi + 18ch]
        lea eax, [esp + 1d8h]
        push edx
        push eax
        mov dword ptr [esp + 104h], ecx
        mov dword ptr [esp + 238h], 0
        mov dword ptr [esp + 23ch], 0
        mov dword ptr [esp + 218h], 0
        mov dword ptr [esp + 21ch], 0
        mov dword ptr [esp + 1f8h], 0
        mov dword ptr [esp + 1fch], 0
        mov dword ptr [esp + 258h], 0
        mov dword ptr [esp + 25ch], 3ff00000h
        call ext_006C4440
        lea ecx, [esp + 100h]
        lea edx, [esp + 1e0h]
        push ecx
        lea eax, [esp + 1e4h]
        push edx
        push eax
        call ext_006C81A0
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [esp + 24ch], ecx
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [esp + 250h], edx
        mov edx, dword ptr [esp + 30h]
        mov dword ptr [esp + 254h], eax
        fld qword ptr [esi + 1d8h]
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [esp + 258h], ecx
        mov ecx, dword ptr [esi + 1b8h]
        mov dword ptr [esp + 25ch], edx
        mov edx, dword ptr [esi + 1bch]
        mov dword ptr [esp + 260h], eax
        fld qword ptr [esi + 1d0h]
        mov eax, dword ptr [esi + 1b0h]
        mov dword ptr [esp + 20h], ecx
        mov ecx, dword ptr [esi + 1b4h]
        mov dword ptr [esp + 24h], edx
        mov edx, dword ptr [esi + 1a8h]
        mov dword ptr [esp + 28h], eax
        fstp qword ptr [esp + 144h]
        mov eax, dword ptr [esi + 1ach]
        mov dword ptr [esp + 2ch], ecx
        mov ecx, dword ptr [esi + 1c8h]
        mov dword ptr [esp + 30h], edx
        mov edx, dword ptr [esi + 1cch]
        mov dword ptr [esp + 34h], eax
        fstp qword ptr [esp + 14ch]
        fld qword ptr [esi + 1f8h]
        mov dword ptr [esp + 13ch], ecx
        mov dword ptr [esp + 140h], edx
        fld qword ptr [esi + 1f0h]
        mov eax, dword ptr [esi + 1e8h]
        mov ecx, dword ptr [esi + 1ech]
        fstp qword ptr [esp + 15ch]
        mov dword ptr [esp + 154h], eax
        lea edx, [esp + 13ch]
        fstp qword ptr [esp + 164h]
        lea eax, [esp + 26ch]
        push edx
        push eax
        mov dword ptr [esp + 160h], ecx
        mov dword ptr [esp + 2cch], 0
        mov dword ptr [esp + 2d0h], 0
        mov dword ptr [esp + 2ach], 0
        mov dword ptr [esp + 2b0h], 0
        mov dword ptr [esp + 28ch], 0
        mov dword ptr [esp + 290h], 0
        mov dword ptr [esp + 2ech], 0
        mov dword ptr [esp + 2f0h], 3ff00000h
        call ext_006C4440
        lea ecx, [esp + 15ch]
        lea edx, [esp + 274h]
        push ecx
        lea eax, [esp + 278h]
        push edx
        push eax
        call ext_006C81A0
        mov ecx, dword ptr [esp + 44h]
        mov edx, dword ptr [esp + 48h]
        mov eax, dword ptr [esp + 3ch]
        mov dword ptr [esp + 2e0h], ecx
        mov ecx, dword ptr [esp + 40h]
        mov dword ptr [esp + 2e4h], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [esp + 2e8h], eax
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [esp + 2ech], ecx
        mov dword ptr [esp + 2f0h], edx
        lea ecx, [esp + 200h]
        mov dword ptr [esp + 2f4h], eax
        lea edx, [esp + 280h]
        push ecx
        lea eax, [esp + 204h]
        push edx
        push eax
        call ext_006C3FB0
        add esp, 34h
        lea ecx, [esp + 1d8h]
        push ecx
        mov ecx, esi
        call ext_0070EED0
        lea ebx, [esi + 60h]
        push 0b5d2c0h
        mov ecx, ebx
        call ext_006B9EC0
        mov ecx, dword ptr [edi + 0ach]
        push 0aae4f0h
        add ecx, 4
        call ext_00726770
        test al, al
        je L_740373
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        mov ecx, ebx
        call ext_006B9EC0
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je L_740373
        mov ecx, dword ptr [edi + 0ach]
        push 0aa8cb8h
        add ecx, 4
        call ext_00726770
        test al, al
        je L_740365
        lea ecx, [esp + 2d8h]
        call ext_00714570
        mov ebx, dword ptr [edi + 0ach]
        lea edx, [esp + 2d8h]
        mov byte ptr [esp + 400h], 4
        add ebx, 4
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 0ch], 10h
L_73FF3A:
        mov ecx, ebx
        call ext_00726BE0
        mov eax, dword ptr [esp + 14h]
        fstp qword ptr [eax]
        add eax, 8
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 0ch]
        dec eax
        mov dword ptr [esp + 0ch], eax
        jne L_73FF3A
        lea eax, [esp + 2d8h]
        mov ecx, esi
        push eax
        call ext_0070F070
        mov ecx, dword ptr [esi + 218h]
        mov edx, dword ptr [esi + 21ch]
        mov eax, dword ptr [esi + 210h]
        mov dword ptr [esp + 24h], ecx
        mov ecx, dword ptr [esi + 214h]
        mov dword ptr [esp + 28h], edx
        mov edx, dword ptr [esi + 208h]
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esi + 20ch]
        mov dword ptr [esp + 30h], ecx
        mov ecx, dword ptr [esi + 238h]
        mov dword ptr [esp + 34h], edx
        mov edx, dword ptr [esi + 23ch]
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esi + 230h]
        mov dword ptr [esp + 1ch], ecx
        mov ecx, dword ptr [esi + 234h]
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [esi + 228h]
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esi + 22ch]
        mov dword ptr [esp + 18h], ecx
        mov ecx, dword ptr [esi + 248h]
        mov dword ptr [esp + 0ch], edx
        mov edx, dword ptr [esi + 24ch]
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [esp + 3ch], ecx
        fld qword ptr [esi + 258h]
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [esp + 40h], edx
        mov edx, dword ptr [esp + 18h]
        push eax
        fld qword ptr [esi + 250h]
        mov eax, dword ptr [esp + 18h]
        push ecx
        mov ecx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 18h]
        push eax
        fstp qword ptr [esp + 54h]
        push ecx
        lea eax, [esp + 16ch]
        fstp qword ptr [esp + 60h]
        push edx
        push eax
        mov dword ptr [esp + 1cch], 0
        mov dword ptr [esp + 1d0h], 0
        mov dword ptr [esp + 1ach], 0
        mov dword ptr [esp + 1b0h], 0
        mov dword ptr [esp + 18ch], 0
        mov dword ptr [esp + 190h], 0
        mov dword ptr [esp + 1ech], 0
        mov dword ptr [esp + 1f0h], 3ff00000h
        call ext_006C4340
        lea ecx, [esp + 58h]
        lea edx, [esp + 174h]
        push ecx
        lea eax, [esp + 178h]
        push edx
        push eax
        call ext_006C81A0
        mov ecx, dword ptr [esp + 5ch]
        mov edx, dword ptr [esp + 60h]
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [esp + 1e0h], ecx
        mov ecx, dword ptr [esp + 58h]
        mov dword ptr [esp + 1e4h], edx
        mov edx, dword ptr [esp + 4ch]
        mov dword ptr [esp + 1e8h], eax
        mov eax, dword ptr [esp + 50h]
        mov dword ptr [esp + 1ech], ecx
        mov ecx, dword ptr [esi + 1b8h]
        mov dword ptr [esp + 1f0h], edx
        mov edx, dword ptr [esi + 1bch]
        mov dword ptr [esp + 1f4h], eax
        mov dword ptr [esp + 34h], ecx
        mov eax, dword ptr [esi + 1b0h]
        mov ecx, dword ptr [esi + 1b4h]
        mov dword ptr [esp + 38h], edx
        mov edx, dword ptr [esi + 1a8h]
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [esi + 1ach]
        mov dword ptr [esp + 40h], ecx
        mov ecx, dword ptr [esi + 1d8h]
        mov dword ptr [esp + 44h], edx
        mov edx, dword ptr [esi + 1dch]
        mov dword ptr [esp + 48h], eax
        mov eax, dword ptr [esi + 1d0h]
        mov dword ptr [esp + 4ch], ecx
        mov ecx, dword ptr [esi + 1d4h]
        mov dword ptr [esp + 50h], edx
        mov edx, dword ptr [esi + 1c8h]
        mov dword ptr [esp + 54h], eax
        mov eax, dword ptr [esi + 1cch]
        mov dword ptr [esp + 58h], ecx
        mov ecx, dword ptr [esi + 1f8h]
        mov dword ptr [esp + 5ch], edx
        mov edx, dword ptr [esi + 1fch]
        mov dword ptr [esp + 60h], eax
        mov eax, dword ptr [esi + 1f0h]
        mov dword ptr [esp + 94h], ecx
        mov ecx, dword ptr [esi + 1f4h]
        mov dword ptr [esp + 98h], edx
        mov edx, dword ptr [esi + 1e8h]
        mov dword ptr [esp + 84h], eax
        mov eax, dword ptr [esi + 1ech]
        mov dword ptr [esp + 88h], ecx
        mov ecx, dword ptr [esp + 50h]
        mov dword ptr [esp + 8ch], edx
        mov edx, dword ptr [esp + 4ch]
        mov dword ptr [esp + 90h], eax
        mov eax, dword ptr [esp + 58h]
        push ecx
        mov ecx, dword ptr [esp + 58h]
        push edx
        mov edx, dword ptr [esp + 68h]
        push eax
        mov eax, dword ptr [esp + 68h]
        push ecx
        push edx
        lea ecx, [esp + 0b4h]
        push eax
        push ecx
        mov dword ptr [esp + 114h], 0
        mov dword ptr [esp + 118h], 0
        mov dword ptr [esp + 0f4h], 0
        mov dword ptr [esp + 0f8h], 0
        mov dword ptr [esp + 0d4h], 0
        mov dword ptr [esp + 0d8h], 0
        mov dword ptr [esp + 134h], 0
        mov dword ptr [esp + 138h], 3ff00000h
        call ext_006C4340
        fld qword ptr [esp + 0a8h]
        fld qword ptr [esp + 0bch]
        fmul st, st(1)
        add esp, 44h
        fstp qword ptr [esp + 78h]
        fld qword ptr [esp + 80h]
        fmul st, st(1)
        fstp qword ptr [esp + 80h]
        fld qword ptr [esp + 88h]
        fmul st, st(1)
        fstp qword ptr [esp + 88h]
        fstp st(0)
        fld qword ptr [esp + 5ch]
        fld qword ptr [esp + 98h]
        fmul st, st(1)
        fstp qword ptr [esp + 98h]
        fld qword ptr [esp + 0a0h]
        fmul st, st(1)
        fstp qword ptr [esp + 0a0h]
        fld qword ptr [esp + 0a8h]
        fmul st, st(1)
        fstp qword ptr [esp + 0a8h]
        fstp st(0)
        fld qword ptr [esp + 6ch]
        fld qword ptr [esp + 0b8h]
        fmul st, st(1)
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esp + 0d8h], edx
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [esp + 0dch], eax
        fstp qword ptr [esp + 0b8h]
        fld qword ptr [esp + 0c0h]
        fmul st, st(1)
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [esp + 0e0h], ecx
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esp + 0e4h], edx
        mov dword ptr [esp + 0e8h], eax
        lea edx, [esp + 158h]
        fstp qword ptr [esp + 0c0h]
        fld qword ptr [esp + 0c8h]
        fmul st, st(1)
        mov dword ptr [esp + 0ech], ecx
        lea eax, [esp + 78h]
        push edx
        lea ecx, [esp + 15ch]
        push eax
        push ecx
        fstp qword ptr [esp + 0d4h]
        fstp st(0)
        call ext_006C3FB0
        add esp, 0ch
        lea edx, [esp + 158h]
        mov ecx, esi
        push edx
        call ext_0070F070
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 2d8h]
        mov byte ptr [esp + 400h], 1
        call ext_006D80A0
L_740365:
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_007268D0
L_740373:
        mov ecx, dword ptr [edi + 0ach]
        push 0aae4e0h
        add ecx, 4
        call ext_00726770
        test al, al
        je L_74040E
        lea ecx, [esp + 2d8h]
        call ext_00714570
        mov ebx, dword ptr [edi + 0ach]
        lea eax, [esp + 2d8h]
        mov byte ptr [esp + 400h], 5
        add ebx, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 0ch], 10h
L_7403BE:
        mov ecx, ebx
        call ext_00726BE0
        mov eax, dword ptr [esp + 14h]
        fstp qword ptr [eax]
        add eax, 8
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 0ch]
        dec eax
        mov dword ptr [esp + 0ch], eax
        jne L_7403BE
        lea ecx, [esp + 2d8h]
        push ecx
        mov ecx, esi
        call ext_0070F140
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp + 2d8h]
        mov byte ptr [esp + 400h], 1
        call ext_006D80A0
L_74040E:
        mov dword ptr [esi + 5ch], 0
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_007268D0
        lea ecx, [esp + 378h]
        mov byte ptr [esp + 400h], 0
        call ext_006D80A0
L_740437:
        lea ecx, [esp + 358h]
        mov dword ptr [esp + 400h], 0ffffffffh
        call ext_006D80A0
        mov ecx, dword ptr [esp + 3f8h]
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

// [0x0073B010] sub_0073B010 (4352 bytes)
extern "C" void ext_006B9950(); extern "C" void ext_006B9D70(); extern "C" void ext_006B9D80(); extern "C" void ext_006BA660(); extern "C" void ext_006D23B0(); extern "C" void ext_006D80A0(); extern "C" void ext_006F9DB0();
extern "C" void ext_0071AF70(); extern "C" void ext_0071B010(); extern "C" void ext_0071B040(); extern "C" void ext_0071B070(); extern "C" void ext_0071B0B0(); extern "C" void ext_0071B100(); extern "C" void ext_0071B110(); extern "C" void ext_0071B500(); extern "C" void ext_0071B6F0(); extern "C" void ext_0071B7E0(); extern "C" void ext_0071B870(); extern "C" void ext_0071B900(); extern "C" void ext_0071B920(); extern "C" void ext_0071BFB0(); extern "C" void ext_0071BFD0();
extern "C" void ext_0071C030(); extern "C" void ext_0071C090(); extern "C" void ext_0071C0E0(); extern "C" void ext_0071C110(); extern "C" void ext_0071C2E0(); extern "C" void ext_0071C300(); extern "C" void ext_0071C320(); extern "C" void ext_0071C350(); extern "C" void ext_0071C370(); extern "C" void ext_0071C390(); extern "C" void ext_0071C3B0(); extern "C" void ext_0071C3E0(); extern "C" void ext_0071C480(); extern "C" void ext_0071C4B0(); extern "C" void ext_0071C4D0(); extern "C" void ext_0071C4F0(); extern "C" void ext_0071C510(); extern "C" void ext_0071C540(); extern "C" void ext_0071C550(); extern "C" void ext_0071C570(); extern "C" void ext_0071C590(); extern "C" void ext_0071C5B0(); extern "C" void ext_0071C5D0(); extern "C" void ext_0071C5F0(); extern "C" void ext_0071C610(); extern "C" void ext_0071C630(); extern "C" void ext_0071C6E0(); extern "C" void ext_0071C730(); extern "C" void ext_0071C750(); extern "C" void ext_0071C870(); extern "C" void ext_0071C8C0(); extern "C" void ext_0071C8E0(); extern "C" void ext_0071C910(); extern "C" void ext_0071C930(); extern "C" void ext_0071C950(); extern "C" void ext_0071C980(); extern "C" void ext_0071C990(); extern "C" void ext_0071C9B0(); extern "C" void ext_0071C9E0(); extern "C" void ext_0071CC60(); extern "C" void ext_0071CCB0(); extern "C" void ext_0071CD00(); extern "C" void ext_0071CD50();
extern "C" void ext_00726770(); extern "C" void ext_00726840(); extern "C" void ext_00726860(); extern "C" void ext_007268D0(); extern "C" void ext_00726A40(); extern "C" void ext_00726AA0(); extern "C" void ext_00726AE0(); extern "C" void ext_00726B40(); extern "C" void ext_00726BE0(); extern "C" void ext_00726C20(); extern "C" void ext_0077FB40(); extern "C" void ext_0077FB70(); extern "C" void ext_00782D90(); extern "C" void ext_0079D6D0();

extern "C" __declspec(naked) void __fastcall fn_0073B010(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 8be7e0h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0a4h
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0
        push 0aacd0ch
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        push 0aadf80h
        add ecx, 4
        mov ebx, eax
        call ext_00726770
        mov edi, dword ptr [ebp + 8]
        test al, al
        je l73B104
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 14h]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 1ch]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 0ch]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 0ch]
        mov edx, dword ptr [esp + 20h]
        push 3ff00000h
        push 0
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        mov ecx, dword ptr [esp + 28h]
        push edx
        mov edx, dword ptr [esp + 28h]
        push eax
        push ecx
        push edx
        lea ecx, [esp + 44h]
        call ext_006D23B0
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0bch], 0
        call ext_0071AF70
        lea ecx, [esp + 24h]
        mov dword ptr [esp + 0b8h], 0ffffffffh
        call ext_006D80A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73B104:
        mov ecx, dword ptr [esi + 0ach]
        push 0aadf7ch
        add ecx, 4
        call ext_00726770
        test al, al
        je l73B1B8
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 14h]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 1ch]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 0ch]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 0ch]
        mov edx, dword ptr [esp + 20h]
        push 3ff00000h
        push 0
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        mov ecx, dword ptr [esp + 28h]
        push edx
        mov edx, dword ptr [esp + 28h]
        push eax
        push ecx
        push edx
        lea ecx, [esp + 44h]
        call ext_006D23B0
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0bch], 1
        call ext_0071B010
        lea ecx, [esp + 24h]
        mov dword ptr [esp + 0b8h], 0ffffffffh
        call ext_006D80A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73B1B8:
        mov ecx, dword ptr [esi + 0ach]
        push 0aadf74h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73B26C
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 14h]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 1ch]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 0ch]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 0ch]
        mov edx, dword ptr [esp + 20h]
        push 3ff00000h
        push 0
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        mov ecx, dword ptr [esp + 28h]
        push edx
        mov edx, dword ptr [esp + 28h]
        push eax
        push ecx
        push edx
        lea ecx, [esp + 44h]
        call ext_006D23B0
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0bch], 2
        call ext_0071B040
        lea ecx, [esp + 24h]
        mov dword ptr [esp + 0b8h], 0ffffffffh
        call ext_006D80A0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73B26C:
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je l73B2BC
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aa8d5ch
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071B070
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aa8e24h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_0071B100
l73B2BC:
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je l73B36B
        cmp ebx, 75h
        push 0
        jge l73B316
        mov ecx, dword ptr [esi + 0ach]
        push 0aac7b4h
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 0ch], eax
        fild dword ptr [esp + 0ch]
        sub esp, 8
        add ecx, 4
        fstp qword ptr [esp]
        push 0
        push 0aac7bch
        call ext_00726B40
        mov dword ptr [esp + 14h], eax
        fild dword ptr [esp + 14h]
        jmp l73B348
l73B316:
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aac7b4h
        add ecx, 4
        call ext_00726C20
        mov ecx, dword ptr [esi + 0ach]
        sub esp, 8
        add ecx, 4
        fstp qword ptr [esp]
        push 0
        push 0
        push 0aac7bch
        call ext_00726C20
l73B348:
        mov ecx, dword ptr [esi + 0ach]
        sub esp, 8
        add ecx, 4
        fstp qword ptr [esp]
        push 0
        push 0aadf68h
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_0071B500
l73B36B:
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je l73B4F9
        mov ecx, dword ptr [esi + 0ach]
        push 3ff00000h
        push 0
        push 0aadf5ch
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071B6F0
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aadf50h
        add ecx, 4
        call ext_00726AA0
        push eax
        lea ecx, [esp + 48h]
        call ext_006B9D80
        push 0aac924h
        lea ecx, [esp + 48h]
        mov dword ptr [esp + 0bch], 3
        call ext_006BA660
        test eax, eax
        jne l73B3EB
        push 2
        jmp l73B4BC
l73B3EB:
        push 0aac91ch
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B404
        push 1
        jmp l73B4BC
l73B404:
        push 0aa91f0h
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B41D
        push 3
        jmp l73B4BC
l73B41D:
        push 0aac914h
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B436
        push 4
        jmp l73B4BC
l73B436:
        push 0aac910h
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B44C
        push 5
        jmp l73B4BC
l73B44C:
        push 0aac908h
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B462
        push 6
        jmp l73B4BC
l73B462:
        push 0aac900h
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B478
        push 7
        jmp l73B4BC
l73B478:
        push 0aac8f8h
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B48E
        push 8
        jmp l73B4BC
l73B48E:
        push 0aadf48h
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B4A4
        push 9
        jmp l73B4BC
l73B4A4:
        push 0aac8ech
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B4BA
        push 0ah
        jmp l73B4BC
l73B4BA:
        push 0
l73B4BC:
        mov ecx, edi
        call ext_0071B110
        mov ecx, dword ptr [esi + 0ach]
        push 0
        add ecx, 4
        push 0aadf3ch
        call ext_00726B40
        test eax, eax
        setne al
        push eax
        mov ecx, edi
        call ext_0071B900
        lea ecx, [esp + 44h]
        mov dword ptr [esp + 0b8h], 0ffffffffh
        call ext_006B9D70
l73B4F9:
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je l73B8E8
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aac7d4h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_0071BFB0
        mov ecx, dword ptr [esi + 0ach]
        push 0aadf2ch
        add ecx, 4
        call ext_00726770
        test al, al
        je l73B584
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071BFD0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071C030
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73B584:
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aadf1ch
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071C090
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aadf0ch
        add ecx, 4
        call ext_00726AA0
        push eax
        lea ecx, [esp + 48h]
        call ext_006B9D80
        lea ecx, [esp + 44h]
        mov dword ptr [esp + 0b8h], 4
        call ext_006B9950
        test al, al
        jne l73B6E8
        push 0aac9c8h
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B5FF
        push 1
        jmp l73B6EA
l73B5FF:
        push 0aac9bch
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B618
        push 2
        jmp l73B6EA
l73B618:
        push 0aac9ach
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B631
        push 3
        jmp l73B6EA
l73B631:
        push 0aac998h
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        je l73B6E8
        push 0aac984h
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B660
        push 5
        jmp l73B6EA
l73B660:
        push 0aac96ch
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B676
        push 6
        jmp l73B6EA
l73B676:
        push 0aac95ch
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B68C
        push 7
        jmp l73B6EA
l73B68C:
        push 0aac94ch
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B6A2
        push 8
        jmp l73B6EA
l73B6A2:
        push 0aac940h
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B6B8
        push 9
        jmp l73B6EA
l73B6B8:
        push 0aac934h
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B6CE
        push 0ah
        jmp l73B6EA
l73B6CE:
        push 0aac92ch
        lea ecx, [esp + 48h]
        call ext_006BA660
        test eax, eax
        jne l73B6E4
        push 0bh
        jmp l73B6EA
l73B6E4:
        push 0
        jmp l73B6EA
l73B6E8:
        push 4
l73B6EA:
        mov ecx, edi
        call ext_0071B920
        mov ecx, dword ptr [esi + 0ach]
        push 40240000h
        push 0
        push 0aac730h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071B7E0
        mov ecx, dword ptr [esi + 0ach]
        push 40af4000h
        push 0
        push 0aac724h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071B870
        cmp ebx, 0d2h
        jl l73B770
        mov ecx, dword ptr [esi + 0ach]
        push 40418000h
        push 0
        push 0aac7f4h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071C0E0
        jmp l73B794
l73B770:
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0
        push 0aadf00h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071C110
l73B794:
        mov ecx, dword ptr [esi + 0ach]
        push 0aadee8h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73B7D4
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071CC60
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73B7D4:
        mov ecx, dword ptr [esi + 0ach]
        push 0aaded0h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73B814
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071CCB0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73B814:
        mov ecx, dword ptr [esi + 0ach]
        push 0aadeb8h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73B854
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071CD00
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73B854:
        mov ecx, dword ptr [esi + 0ach]
        push 0aadea0h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73B894
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071CD50
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73B894:
        mov ecx, dword ptr [esi + 0ach]
        push 0aa8d64h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73B8D4
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071B0B0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73B8D4:
        lea ecx, [esp + 44h]
        mov dword ptr [esp + 0b8h], 0ffffffffh
        call ext_006B9D70
l73B8E8:
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je l73B9BD
        cmp ebx, 0c8h
        jl l73B928
        mov ecx, dword ptr [esi + 0ach]
        push 0b5d2c0h
        push 0aad214h
        add ecx, 4
        call ext_00726AA0
        push eax
        mov ecx, edi
        call ext_0071C320
        jmp l73B9BD
l73B928:
        mov ecx, dword ptr [esi + 0ach]
        push 0aade8ch
        add ecx, 4
        call ext_00726770
        test al, al
        je l73B963
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        mov ecx, edi
        call ext_0071C2E0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73B963:
        mov ecx, dword ptr [esi + 0ach]
        push 0aade78h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73B99E
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726A40
        push eax
        mov ecx, edi
        call ext_0071C2E0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73B99E:
        mov ecx, edi
        call ext_0071C300
        test eax, eax
        je l73B9BD
        push edi
        mov ecx, edi
        call ext_0071C300
        push eax
        lea ecx, [esi + 0f4h]
        call ext_00782D90
l73B9BD:
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je l73BAB4
        mov ecx, dword ptr [esi + 0ach]
        push 2
        push 0aade64h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_0071C350
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aac5fch
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_0071C370
        mov ecx, dword ptr [esi + 0ach]
        push 1
        add ecx, 4
        push 0aac5cch
        call ext_00726B40
        test eax, eax
        setne cl
        push ecx
        mov ecx, edi
        call ext_0071C390
        mov ecx, dword ptr [esi + 0ach]
        push 3fe00000h
        push 0
        push 0aade50h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071C3B0
        mov ecx, dword ptr [esi + 0ach]
        push 6
        push 0aade44h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_0071C3E0
        mov ecx, dword ptr [esi + 0ach]
        push 40590000h
        push 0
        push 0aade28h
        add ecx, 4
        call ext_00726C20
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071C480
        mov ecx, dword ptr [esi + 0ach]
        push 0
        push 0aade08h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_0071C4B0
l73BAB4:
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je l73BBF4
        mov ecx, dword ptr [esi + 0ach]
        push 1
        add ecx, 4
        push 0aaddfch
        call ext_00726B40
        test eax, eax
        setne dl
        push edx
        mov ecx, edi
        call ext_0071C4D0
        mov ecx, dword ptr [esi + 0ach]
        push 0
        add ecx, 4
        push 0aac6cch
        call ext_00726B40
        test eax, eax
        setne al
        push eax
        mov ecx, edi
        call ext_0071C4F0
        mov ecx, dword ptr [esi + 0ach]
        push 1
        add ecx, 4
        push 0aac76ch
        call ext_00726B40
        test eax, eax
        setne cl
        push ecx
        mov ecx, edi
        call ext_0071C510
        mov ecx, dword ptr [esi + 0ach]
        push 1
        add ecx, 4
        push 0aac74ch
        call ext_00726B40
        test eax, eax
        setne dl
        push edx
        mov ecx, edi
        call ext_0071C540
        mov ecx, dword ptr [esi + 0ach]
        push 1
        add ecx, 4
        push 0aac778h
        call ext_00726B40
        test eax, eax
        setne al
        push eax
        mov ecx, edi
        call ext_0071C550
        mov ecx, dword ptr [esi + 0ach]
        push 0
        add ecx, 4
        push 0aac73ch
        call ext_00726B40
        test eax, eax
        setne cl
        push ecx
        mov ecx, edi
        call ext_0071C590
        mov ecx, dword ptr [esi + 0ach]
        push 0
        add ecx, 4
        push 0aac5bch
        call ext_00726B40
        test eax, eax
        setne dl
        push edx
        mov ecx, edi
        call ext_0071C5B0
        mov ecx, dword ptr [esi + 0ach]
        push 1
        push 0aaddech
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_0071C5F0
        mov ecx, dword ptr [esi + 0ach]
        push 0
        add ecx, 4
        push 0aaddd4h
        call ext_00726B40
        test eax, eax
        setne al
        push eax
        mov ecx, edi
        call ext_0071C5D0
l73BBF4:
        mov ecx, dword ptr [esi + 0ach]
        push 1
        add ecx, 4
        push 0aaddc0h
        call ext_00726B40
        test eax, eax
        setne cl
        push ecx
        mov ecx, edi
        call ext_0071C570
        mov ecx, dword ptr [esi + 0ach]
        push 0
        add ecx, 4
        push 0aaddb4h
        call ext_00726B40
        test eax, eax
        setne dl
        push edx
        mov ecx, edi
        call ext_0071C610
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je l73BD23
        mov ecx, dword ptr [esi + 0ach]
        push 0aadda4h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73BCDB
        lea ecx, [esp + 24h]
        call ext_0077FB40
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 0b8h], 5
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 24h]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 2ch]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 34h]
        lea eax, [esp + 24h]
        mov ecx, edi
        push eax
        call ext_0071C630
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        or ebx, -1
        lea ecx, [esp + 24h]
        mov dword ptr [esp + 0b8h], ebx
        call ext_006D80A0
        jmp l73BD26
l73BCDB:
        push 3ff00000h
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, [esp + 44h]
        call ext_0077FB70
        lea ecx, [esp + 24h]
        mov dword ptr [esp + 0b8h], 6
        push ecx
        mov ecx, edi
        call ext_0071C630
        or ebx, -1
        lea ecx, [esp + 24h]
        mov dword ptr [esp + 0b8h], ebx
        call ext_006D80A0
        jmp l73BD26
l73BD23:
        or ebx, -1
l73BD26:
        mov ecx, dword ptr [esi + 0ach]
        push 0aadd98h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73BDAE
        lea ecx, [esp + 24h]
        call ext_0077FB40
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 0b8h], 7
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 24h]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 2ch]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 34h]
        lea edx, [esp + 24h]
        mov ecx, edi
        push edx
        call ext_0071C6E0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov dword ptr [esp + 0b8h], ebx
        lea ecx, [esp + 24h]
        jmp l73BDEF
l73BDAE:
        push 3ff00000h
        push 0
        push 0
        push 0
        push 3ff00000h
        push 0
        push 0
        push 0
        lea ecx, [esp + 44h]
        call ext_0077FB70
        lea eax, [esp + 24h]
        mov ecx, edi
        push eax
        mov dword ptr [esp + 0bch], 8
        call ext_0071C6E0
        mov dword ptr [esp + 0b8h], ebx
        lea ecx, [esp + 24h]
l73BDEF:
        call ext_006D80A0
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je l73BF0F
        mov ecx, dword ptr [esi + 0ach]
        push 0
        add ecx, 4
        push 0aac790h
        call ext_00726B40
        test eax, eax
        setne cl
        push ecx
        mov ecx, edi
        call ext_0071C730
        mov ecx, dword ptr [esi + 0ach]
        push 0aac784h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73BEB1
        lea ecx, [esp + 24h]
        call ext_0077FB40
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [esp + 0b8h], 9
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 24h]
        add ecx, 4
        call ext_00726BE0
        mov ecx, dword ptr [esi + 0ach]
        fstp qword ptr [esp + 2ch]
        add ecx, 4
        call ext_00726BE0
        fstp qword ptr [esp + 34h]
        lea edx, [esp + 24h]
        mov ecx, edi
        push edx
        call ext_0071C750
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
        mov dword ptr [esp + 0b8h], ebx
        lea ecx, [esp + 24h]
        jmp l73BF0A
l73BEB1:
        push 3ff00000h
        push 0
        push 3fd33333h
        push 33333333h
        push 3fd33333h
        push 33333333h
        push 3fd33333h
        push 33333333h
        lea ecx, [esp + 0b0h]
        call ext_0077FB70
        lea eax, [esp + 90h]
        mov ecx, edi
        push eax
        mov dword ptr [esp + 0bch], 0ah
        call ext_0071C750
        mov dword ptr [esp + 0b8h], ebx
        lea ecx, [esp + 90h]
l73BF0A:
        call ext_006D80A0
l73BF0F:
        mov ecx, dword ptr [esi + 0ach]
        call ext_0079D6D0
        test al, al
        je l73C0F5
        mov ecx, dword ptr [esi + 0ach]
        push 0aadd88h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73C0F5
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726860
        test al, al
        je l73C0E7
        mov ecx, dword ptr [esi + 0ach]
        push 0aadd78h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73BFDF
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        test eax, eax
        setne cl
        push ecx
        mov ecx, edi
        call ext_0071C980
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        push eax
        mov ecx, edi
        call ext_0071C990
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071C9E0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071C9B0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73BFDF:
        mov ecx, dword ptr [esi + 0ach]
        push 0aaddd68h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73C050
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        test eax, eax
        setne dl
        push edx
        mov ecx, edi
        call ext_0071C8C0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        push eax
        mov ecx, edi
        call ext_0071C910
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726BE0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_0071C8E0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73C050:
        mov ecx, dword ptr [esi + 0ach]
        push 0aaddd58h
        add ecx, 4
        call ext_00726770
        test al, al
        je l73C0BC
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        push eax
        mov ecx, edi
        call ext_0071C930
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        push eax
        mov ecx, edi
        call ext_006F9DB0
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726AE0
        test eax, eax
        setne al
        push eax
        mov ecx, edi
        call ext_0071C950
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73C0BC:
        mov ecx, dword ptr [esi + 0ach]
        push 1
        push 0aaddd44h
        add ecx, 4
        call ext_00726B40
        push eax
        mov ecx, edi
        call ext_0071C870
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_007268D0
l73C0E7:
        mov ecx, dword ptr [esi + 0ach]
        add ecx, 4
        call ext_00726840
l73C0F5:
        mov ecx, dword ptr [esp + 0b0h]
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

// [0x00736FE0] sub_00736FE0 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_00736FE0() {
    __asm {
        _emit 0x00
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        add eax, 0x05050505
        add eax, 0x02010505
        add eax, 0x90040503
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
