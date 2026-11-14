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
