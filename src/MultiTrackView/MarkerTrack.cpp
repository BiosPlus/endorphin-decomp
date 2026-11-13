// Decompiled translation unit: src/MultiTrackView/MarkerTrack.cpp

// [0x0043BD40] MultiTrackView::MarkerTrack::vfunc_2 (414 bytes)
extern "C" void ext_0043B450();
extern "C" void ext_0043B4D0();
extern "C" void ext_0043F2C0();
extern "C" void ext_00441020();
extern "C" int mem_00925134;
extern "C" int mem_0092BD70;

extern "C" __declspec(naked) void __fastcall fn_0043BD40(void* self, int edx_unused, int a1, int* a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x87b27b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xb8
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [esp + 0x28]
        call ext_0043B450
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov esi, dword ptr [edi + 0x18]
        mov dword ptr [esp + 0x28], ecx
        mov ecx, dword ptr [edi + 0x28]
        lea ebx, [edi + 0x14]
        mov dword ptr [esp + 0x2c], edx
        mov edx, dword ptr [eax + 0x8]
        sub ecx, 0x2
        cmp esi, dword ptr [ebx + 0x8]
        mov dword ptr [esp + 0xcc], 0x0
        mov dword ptr [esp + 0x34], ecx
        mov dword ptr [esp + 0x30], edx
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        mov eax, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], eax
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x24], eax
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        cmp ebx, ebx
        je L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp esi, dword ptr [esp + 0x24]
        je L_endloop
        cmp esi, dword ptr [ebx + 0x8]
        jb L_chk4
        call dword ptr [mem_00925134]
    L_chk4:
        mov ecx, dword ptr [edi + 0x24]
        mov esi, dword ptr [esi]
        fld qword ptr [ecx + 0xe8]
        fcomp qword ptr [esi + 0x58]
        fnstsw ax
        test ah, 0x41
        jp L_else
        fld qword ptr [ecx + 0xf0]
        fcomp qword ptr [esi + 0x50]
        fnstsw ax
        test ah, 0x1
        jne L_else
        mov ecx, esi
        call ext_00441020
        mov dword ptr [esp + 0x1c], eax
        fild dword ptr [esp + 0x1c]
        mov eax, dword ptr [edi + 0x24]
        fsub qword ptr [eax + 0x110]
        fmul qword ptr [eax + 0x120]
        fadd qword ptr [eax + 0x118]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x1c]
        fld qword ptr [esp + 0x1c]
        fistp dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [edi + 0x24]
        push esi
        mov dword ptr [esp + 0x2c], eax
        call ext_0043F2C0
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x4]
        lea eax, [esp + 0x28]
        push eax
        push ecx
        lea eax, [esp + 0xb8]
        push eax
        mov ecx, esi
        mov byte ptr [esi + 0x8a], 0x1
        call edx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 0x60], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x64], edx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x68], ecx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esi + 0x6c], edx
        jmp L_join
    L_else:
        mov byte ptr [esi + 0x8a], 0x0
    L_join:
        mov eax, dword ptr [esp + 0x18]
        cmp eax, dword ptr [ebx + 0x8]
        jb L_chk5
        call dword ptr [mem_00925134]
    L_chk5:
        add dword ptr [esp + 0x18], 0x4
        mov esi, dword ptr [esp + 0x18]
        jmp L_chk2
    L_endloop:
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0xcc], 0xffffffff
        call ext_0043B4D0
        mov ecx, dword ptr [esp + 0xc4]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}
