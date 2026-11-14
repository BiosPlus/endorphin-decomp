// Decompiled translation unit: src/MultiTrackView/TimeRuler.cpp

// [0x00459200] MultiTrackView::TimeRuler::vfunc_11 (15 bytes)
extern "C" void ext_00468180();
extern "C" void __stdcall fn_00459200(int a1, int a2, int a3, int a4) {
    if (a1) {
        ext_00468180();
    }
}

// [0x004593B0] MultiTrackView::TimeRuler::vfunc_0_off_50 (423 bytes)
extern "C" void ext_004407E0();
extern "C" void ext_004408E0();
extern "C" void ext_00441020();
extern "C" void ext_0045DE30();
extern "C" void ext_00468180();
extern "C" void ext_00468660();
extern "C" void ext_004689B0();
extern "C" void ext_00468A00();
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_004593B0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFC0h
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00468180
        mov edi, eax
        mov ecx, edi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 9Ch]
        call eax
        mov ecx, dword ptr [esi + 1Ch]
        mov ebx, eax
        mov dword ptr [esp + 28h], ebx
        call ext_00441020
        cmp eax, ebx
        je L_a
        fild dword ptr [esp + 28h]
        mov ecx, dword ptr [esi + 1Ch]
        sub esp, 8
        fstp qword ptr [esp]
        call ext_004407E0
L_a:
        mov ecx, edi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 84h]
        call eax
        test al, al
        jne L_b
        mov ecx, edi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 88h]
        call eax
        test al, al
        jne L_b
        mov al, 1
        jmp L_c
L_b:
        xor al, al
L_c:
        mov ecx, dword ptr [esi - 20h]
        mov byte ptr [ecx + 190h], al
        call ext_00468180
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0A0h]
        call eax
        mov ecx, edi
        mov dword ptr [esp + 2Ch], eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 84h]
        call eax
        test al, al
        je L_d
        mov ecx, edi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 88h]
        call eax
        test al, al
        jne L_d
        test ebx, ebx
        jle L_d
        fild dword ptr [esp + 2Ch]
        mov ecx, dword ptr [esi - 20h]
        fcomp qword ptr [ecx + 0F0h]
        fnstsw ax
        test ah, 41h
        jne L_d
        fld1
        fcomp qword ptr [ecx + 0E8h]
        fnstsw ax
        test ah, 41h
        jne L_d
        mov ecx, dword ptr [esi + 8]
        call ext_0045DE30
L_d:
        mov ecx, edi
        mov dword ptr [esp + 24h], 0
        call ext_00468660
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 6Ch]
        lea ecx, [esp + 24h]
        push ecx
        mov ecx, eax
        call edx
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [esi + 20h]
        add eax, ebx
        mov dword ptr [esp + 2Ch], eax
        fild dword ptr [esp + 2Ch]
        sub esp, 10h
        fstp qword ptr [esp + 8]
        fild dword ptr [esp + 38h]
        fstp qword ptr [esp]
        call ext_004408E0
        lea ecx, [esp + 30h]
        push ecx
        mov ecx, edi
        call ext_00468A00
        fild dword ptr [esp + 34h]
        mov ecx, dword ptr [esi + 24h]
        sub esp, 10h
        fstp qword ptr [esp + 8]
        fild dword ptr [esp + 40h]
        fstp qword ptr [esp]
        call ext_004408E0
        lea edx, [esp + 38h]
        push edx
        mov ecx, edi
        call ext_004689B0
        fild dword ptr [esp + 3Ch]
        mov ecx, dword ptr [esi + 28h]
        sub esp, 10h
        fstp qword ptr [esp + 8]
        fild dword ptr [esp + 48h]
        fstp qword ptr [esp]
        call ext_004408E0
        mov eax, dword ptr [esi - 20h]
        mov ecx, dword ptr [eax + 20h]
        push 1
        push 0
        push ecx
        call dword ptr [mem_00925688]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x004591B0] MultiTrackView::TimeRuler::vfunc_10 (76 bytes)
extern "C" void ext_0043CEB0();
extern "C" void ext_0043DC90();
extern "C" void ext_00468180();
extern "C" void ext_00468660();
extern "C" void ext_004686A0();
extern "C" __declspec(naked) void __fastcall fn_004591B0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x30]
        mov eax, dword ptr [esp + 0x8]
        cmp eax, dword ptr [ecx + 0xfc]
        jge short L_body
        push -1
        call ext_0043DC90
        ret 0xc
    L_body:
        push esi
        push edi
        push eax
        call ext_0043CEB0
        mov edi, eax
        call ext_00468180
        mov esi, eax
        push edi
        mov ecx, esi
        call ext_004686A0
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x98]
        push 0x5
        call eax
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x00459560] MultiTrackView::TimeRuler::vfunc_7 (407 bytes)
extern "C" void ext_0043C930();
extern "C" void ext_00468710();
extern "C" void ext_00468730();
extern "C" void ext_00468750();
extern "C" void ext_00468770();
extern "C" void ext_00468790();
extern "C" void ext_00468810();
extern "C" void ext_00468890();
extern "C" void ext_00468920();
extern "C" void ext_006A6166();
extern "C" void ext_006A616C();
extern "C" int mem_0087F238;
extern "C" int mem_00925630;
extern "C" int mem_00925634;
extern "C" int mem_00925638;
extern "C" int mem_0092BD7C;
extern "C" int mem_0092BF14;
extern "C" int mem_00937960;
extern "C" int mem_00937974;

extern "C" __declspec(naked) void __fastcall fn_00459560(void* self) {
    __asm {
        push -1
        push offset mem_0087F238
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 30h]
        mov edx, dword ptr [eax + 20h]
        lea ecx, [esp + 24h]
        push ecx
        push edx
        call dword ptr [mem_00925630]
        mov dword ptr [esp + 0Ch], offset mem_0092BD7C
        mov dword ptr [esp + 10h], 0
        mov dword ptr [esp + 1Ch], 0
        call dword ptr [mem_00925638]
        push eax
        lea ecx, [esp + 10h]
        call ext_006A616C
        call ext_00468180
        mov ebx, dword ptr [mem_00925634]
        push offset mem_0092BF14
        push 65h
        mov esi, eax
        mov eax, dword ptr [esp + 18h]
        push 0
        push eax
        call ebx
        mov ecx, esi
        call ext_00468770
        test al, al
        je short L_4595EF
        mov ecx, dword ptr [esp + 10h]
        push offset mem_00937974
        push 66h
        push 0
        push ecx
        call ebx
    L_4595EF:
        mov ecx, esi
        call ext_00468750
        test al, al
        je short L_45960A
        mov edx, dword ptr [esp + 10h]
        push offset mem_00937960
        push 67h
        push 0
        push edx
        call ebx
    L_45960A:
        lea eax, [esp + 24h]
        push eax
        lea ecx, [esp + 10h]
        push ecx
        mov ecx, dword ptr [edi + 30h]
        call ext_0043C930
        sub eax, 65h
        je L_4596BD
        sub eax, 1
        je short L_459665
        sub eax, 1
        jne L_4596CA
        push 0
        mov ecx, esi
        call ext_00468710
        push 0
        mov ecx, esi
        call ext_00468790
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0A0h]
        call eax
        sub eax, 1
        push eax
        mov ecx, esi
        call ext_00468810
        jmp short L_459695
    L_459665:
        push 0
        mov ecx, esi
        call ext_00468730
        push 0
        mov ecx, esi
        call ext_00468890
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0A0h]
        call eax
        sub eax, 1
        push eax
        mov ecx, esi
        call ext_00468920
    L_459695:
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 98h]
        push 5
        call eax
        mov edi, dword ptr [edi + 30h]
        mov ecx, dword ptr [edi + 20h]
        push 1
        push 0
        push ecx
        call dword ptr [mem_00925688]
        jmp short L_4596CA
    L_4596BD:
        mov ecx, dword ptr [edi + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 144h]
        call eax
    L_4596CA:
        lea ecx, [esp + 0Ch]
        mov dword ptr [esp + 1Ch], 0FFFFFFFFh
        mov dword ptr [esp + 0Ch], offset mem_0092BD7C
        call ext_006A6166
        mov ecx, dword ptr [esp + 14h]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 14h
        ret 0Ch
    }
}
