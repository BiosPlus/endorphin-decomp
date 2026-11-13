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
