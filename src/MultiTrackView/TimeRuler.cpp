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

// [0x00459D40] MultiTrackView::TimeRuler::vfunc_8 (444 bytes)
extern "C" void ext_00413480();
extern "C" void ext_00441020();
extern "C" void ext_00441040();
extern "C" void ext_004410C0();
extern "C" void ext_00468180();
extern "C" void ext_00468660();
extern "C" void ext_004686A0();
extern "C" void ext_00468710();
extern "C" void ext_00468730();
extern "C" void ext_00468790();
extern "C" void ext_00468810();
extern "C" void ext_00468890();
extern "C" void ext_00468920();
extern "C" void ext_00482080();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00459D40(void* self) {
    __asm {
        sub esp, 10h
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 14h], ecx
        call ext_00468180
        mov ebx, dword ptr [esp + 24h]
        mov edi, dword ptr [ebx + 4]
        cmp edi, dword ptr [ebx + 8]
        mov esi, eax
        mov byte ptr [esp + 13h], 0
        jbe short L_459D69
        call dword ptr [mem_00925134]
    L_459D69:
        mov dword ptr [esp + 1Ch], edi
        _emit 0x8D
        _emit 0x49
        _emit 0x00
    L_459D70:
        mov ebp, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], ebp
        jbe short L_459D7E
        call dword ptr [mem_00925134]
    L_459D7E:
        cmp edi, ebp
        je L_459E47
        cmp edi, dword ptr [ebx + 8]
        jb short L_459D91
        call dword ptr [mem_00925134]
    L_459D91:
        mov edi, dword ptr [edi]
        mov ecx, edi
        call ext_00441020
        mov ecx, edi
        mov ebp, eax
        call ext_00441040
        mov edi, dword ptr [edi + 8]
        cmp edi, 3
        mov ebx, eax
        ja short L_459E22
        jmp dword ptr [4*edi + 0x459E70]
    L_459DB4:
        push ebp
        mov ecx, esi
        call ext_004686A0
        jmp short L_459E1D
    L_459DBE:
        mov ecx, esi
        call ext_00468660
        mov ebp, eax
        mov eax, dword ptr [esp + 14h]
        mov edi, dword ptr [ebp]
        mov ecx, dword ptr [eax + 70h]
        add edi, 70h
        call ext_004410C0
        mov edx, dword ptr [edi]
        push eax
        mov ecx, ebp
        call edx
        jmp short L_459E1D
    L_459DE2:
        push ebp
        mov ecx, esi
        call ext_00468890
        push ebx
        mov ecx, esi
        call ext_00468920
        push 1
        mov ecx, esi
        call ext_00468730
        jmp short L_459E16
    L_459DFD:
        push ebp
        mov ecx, esi
        call ext_00468790
        push ebx
        mov ecx, esi
        call ext_00468810
        push 1
        mov ecx, esi
        call ext_00468710
    L_459E16:
        cmp byte ptr [esp + 28h], 0
        jne short L_459E22
    L_459E1D:
        mov byte ptr [esp + 13h], 1
    L_459E22:
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [esp + 1Ch]
        cmp ecx, dword ptr [eax + 8]
        jb short L_459E35
        call dword ptr [mem_00925134]
    L_459E35:
        add dword ptr [esp + 1Ch], 4
        mov ebx, dword ptr [esp + 24h]
        mov edi, dword ptr [esp + 1Ch]
        jmp L_459D70
    L_459E47:
        cmp byte ptr [esp + 13h], 0
        je short L_459E63
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 98h]
        push 5
        call eax
    L_459E63:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 10h
        ret 8
        nop

        // 0x00459E70 jump table
        _emit 0xb4
        _emit 0x9d
        _emit 0x45
        _emit 0x00

        _emit 0xbe
        _emit 0x9d
        _emit 0x45
        _emit 0x00

        _emit 0xe2
        _emit 0x9d
        _emit 0x45
        _emit 0x00

        _emit 0xfd
        _emit 0x9d
        _emit 0x45
        _emit 0x00

        // 0x00459E80
        push -1
        push 087F288h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        lea eax, [esi + 50h]
        lea edi, [esi + 54h]
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 09379C4h
        mov dword ptr [eax], 09379BCh
        mov dword ptr [edi], 09379B4h
        push eax
        push 5
        mov dword ptr [esp + 1Ch], 0
        call ext_00468180
        mov ecx, eax
        call ext_00482080
        push edi
        push 8
        call ext_00468180
        mov ecx, eax
        call ext_00482080
        mov ecx, esi
        mov dword ptr [esp + 14h], 0FFFFFFFFh
        call ext_00413480
        mov ecx, dword ptr [esp + 0Ch]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x00459700] MultiTrackView::TimeRuler::vfunc_6 (496 bytes)
extern "C" void ext_0043C930();
extern "C" void ext_00468180();
extern "C" void ext_00468660();
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
extern "C" int mem_00925630;
extern "C" int mem_00925638;
extern "C" int mem_00925634;
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_00459700(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x87f238
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        test ebx, ebx
        push edi
        mov edi, ecx
        je L_end
        mov eax, dword ptr [edi + 0x30]
        mov edx, dword ptr [eax + 0x20]
        push esi
        lea ecx, [esp + 0x28]
        push ecx
        push edx
        call dword ptr [mem_00925630]
        mov dword ptr [esp + 0xc], 0x92bd7c
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esp + 0x1c], 0
        call dword ptr [mem_00925638]
        push eax
        lea ecx, [esp + 0x10]
        call ext_006A616C
        call ext_00468180
        mov esi, eax
        mov eax, dword ptr [ebx + 8]
        test eax, eax
        jne L_check_2
        mov ebx, dword ptr [mem_00925634]
        push 0x9379a0
        push 0x65
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push eax
        call ebx
        mov ecx, dword ptr [esp + 0x10]
        push 0x937994
        push 0x66
        push 0
        push ecx
        call ebx
        jmp L_track
    L_check_2:
        cmp eax, 2
        jne L_check_3
        mov ecx, esi
        call ext_00468770
        test al, al
        je L_track
        mov edx, dword ptr [esp + 0x10]
        push 0x937988
        push 0x67
        push 0
        push edx
        jmp L_append
    L_check_3:
        cmp eax, 3
        jne L_track
        mov ecx, esi
        call ext_00468750
        test al, al
        je L_track
        mov eax, dword ptr [esp + 0x10]
        push 0x937988
        push 0x68
        push 0
        push eax
    L_append:
        call dword ptr [mem_00925634]
    L_track:
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, dword ptr [edi + 0x30]
        lea edx, [esp + 0x10]
        push edx
        call ext_0043C930
        add eax, -0x65
        cmp eax, 3
        ja L_cleanup
        jmp dword ptr [eax*4 + 0x4598f0]
    L_case_0:
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x64]
    L_call_and_update:
        call eax
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x98]
        push 5
        call eax
        jmp L_cleanup
    L_case_1:
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x68]
        jmp L_call_and_update
    L_case_2:
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
        mov eax, dword ptr [edx + 0xa0]
        call eax
        sub eax, 1
        push eax
        mov ecx, esi
        call ext_00468920
        jmp L_invalidate
    L_case_3:
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
        mov eax, dword ptr [edx + 0xa0]
        call eax
        sub eax, 1
        push eax
        mov ecx, esi
        call ext_00468810
    L_invalidate:
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x98]
        push 5
        call eax
        mov edi, dword ptr [edi + 0x30]
        mov ecx, dword ptr [edi + 0x20]
        push 1
        push 0
        push ecx
        call dword ptr [mem_00925688]
    L_cleanup:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x1c], -1
        mov dword ptr [esp + 0xc], 0x92bd7c
        call ext_006A6166
        pop esi
    L_end:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0xc
    }
}
