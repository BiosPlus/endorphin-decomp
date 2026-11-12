// Decompiled translation unit: src/MultiTrackView/DiamondMarker.cpp

// [0x00440940] MultiTrackView::DiamondMarker::vfunc_3 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_00440940(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 10h]
        push edx
        call eax
        test eax, eax
        jl short L_zero
        cmp eax, 1
        jle short L_three
        cmp eax, 2
        jne short L_zero
        mov eax, 1
        ret 4
    L_three:
        mov eax, 3
        ret 4
    L_zero:
        xor eax, eax
        ret 4
    }
}

// [0x004410E0] MultiTrackView::DiamondMarker::vfunc_4 (318 bytes)
extern "C" void ext_00441020();
extern "C" void ext_00441040();
extern "C" int mem_00925628;
extern "C" int mem_0092BD70;

extern "C" __declspec(naked) void __fastcall fn_004410E0(void* self) {
    __asm {
        sub esp, 0Ch
        push ebp
        mov ebp, dword ptr [esp + 14h]
        mov eax, dword ptr [ebp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [ebp]
        push eax
        push ecx
        lea edx, [esi + 60h]
        push edx
        call dword ptr [mem_00925628]
        test eax, eax
        jne L_in
        pop esi
        mov eax, 3
        pop ebp
        add esp, 0Ch
        ret 4
    L_in:
        cmp byte ptr [esi + 8Ch], 0
        push ebx
        push edi
        jne L_a
        cmp byte ptr [esi + 8Dh], 0
        je L_ret2
    L_a:
        mov ecx, esi
        call ext_00441020
        mov edx, eax
        mov dword ptr [esp + 20h], edx
        call ext_00441040
        fild dword ptr [esp + 20h]
        mov ecx, dword ptr [esi + 48h]
        mov edi, eax
        fsub qword ptr [ecx + 110h]
        mov dword ptr [esp + 10h], edi
        fmul qword ptr [ecx + 120h]
        fadd qword ptr [ecx + 118h]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 14h]
        fld qword ptr [esp + 14h]
        fistp dword ptr [esp + 20h]
        mov ecx, dword ptr [esi + 48h]
        fild dword ptr [esp + 10h]
        fsub qword ptr [ecx + 110h]
        fmul qword ptr [ecx + 120h]
        fadd qword ptr [ecx + 118h]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 14h]
        fld qword ptr [esp + 14h]
        fistp dword ptr [esp + 10h]
        mov cl, byte ptr [esi + 8Ch]
        test cl, cl
        je L_c
        cmp edx, edi
        jne L_c
        cmp byte ptr [esi + 89h], 0
        jne L_ret0
    L_c:
        mov bl, byte ptr [esi + 8Dh]
        test bl, bl
        je L_d
        cmp edx, edi
        jne L_d
        cmp byte ptr [esi + 89h], 0
        je L_ret1
    L_d:
        test cl, cl
        mov edx, dword ptr [esp + 20h]
        je L_e
        mov eax, dword ptr [ebp]
        cmp eax, edx
        jl L_e
        lea ecx, [edx + 8]
        cmp eax, ecx
        jg L_e
    L_ret0:
        pop edi
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0Ch
        ret 4
    L_e:
        test bl, bl
        mov ecx, dword ptr [esp + 10h]
        je L_f
        mov eax, dword ptr [ebp]
        cmp eax, ecx
        jg L_f
        lea esi, [ecx - 8]
        cmp eax, esi
        jl L_f
    L_ret1:
        pop edi
        pop ebx
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0Ch
        ret 4
    L_f:
        add ecx, -8
        add edx, 8
    L_ret2:
        pop edi
        pop ebx
        pop esi
        mov eax, 2
        pop ebp
        add esp, 0Ch
        ret 4
    }
}
