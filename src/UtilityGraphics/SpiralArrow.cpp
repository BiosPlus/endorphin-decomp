// Decompiled translation unit: src/UtilityGraphics/SpiralArrow.cpp

extern "C" void ext_0063E02A();
extern "C" int mem_00925414;
extern "C" int mem_00925134;
extern "C" int mem_009253D0;
extern "C" int mem_00954FA0;
extern "C" int mem_009254CC;
extern "C" int mem_009552D0;
extern "C" int mem_00925404;
extern "C" int mem_009254C8;
extern "C" int mem_009254C4;
extern "C" int mem_009254C0;
extern "C" int mem_009254BC;

// [0x00539940] UtilityGraphics::SpiralArrow::vfunc_22 (348 bytes)
extern "C" __declspec(naked) void __fastcall fn_00539940(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov esi, ecx
        call dword ptr [mem_00925414]
        mov eax, dword ptr [esi + 0x38]
        test eax, eax
        jne L_nonnull
        xor edi, edi
        jmp L_have_n
L_nonnull:
        mov edi, dword ptr [esi + 0x3c]
        sub edi, eax
        sar edi, 0x2
L_have_n:
        push ebx
        mov ecx, eax
        test ecx, ecx
        push ebp
        lea ebx, [edi - 0x4]
        je L_chk1
        mov eax, dword ptr [esi + 0x3c]
        sub eax, ecx
        sar eax, 0x2
        cmp ebx, eax
        jb L_ok1
L_chk1:
        call dword ptr [mem_00925134]
L_ok1:
        mov eax, dword ptr [esi + 0x38]
        mov ecx, eax
        test ecx, ecx
        lea ebp, [eax + 4*ebx]
        lea ebx, [edi - 0x5]
        je L_chk2
        mov eax, dword ptr [esi + 0x3c]
        sub eax, ecx
        sar eax, 0x2
        cmp ebx, eax
        jb L_ok2
L_chk2:
        call dword ptr [mem_00925134]
L_ok2:
        mov ecx, dword ptr [esi + 0x38]
        add edi, -0x6
        test ecx, ecx
        lea ebx, [ecx + 4*ebx]
        je L_chk3
        mov eax, dword ptr [esi + 0x3c]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_ok3
L_chk3:
        call dword ptr [mem_00925134]
L_ok3:
        fld dword ptr [ebp]
        mov edx, dword ptr [esi + 0x38]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ebx]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [edx + 4*edi]
        fstp dword ptr [esp]
        call dword ptr [mem_009253D0]
        fld dword ptr [esi + 0x30]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0x2c]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x28]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x24]
        fmul qword ptr [mem_00954FA0]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        call dword ptr [mem_009254CC]
        call dword ptr [mem_00925414]
        fld dword ptr [esi + 0x1c]
        mov eax, dword ptr [esi + 0x14]
        push 0x1
        push 0x8
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fldz
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esi + 0x20]
        fmul qword ptr [mem_009552D0]
        fstp qword ptr [esp]
        push eax
        call ext_0063E02A
        mov edi, dword ptr [mem_00925404]
        call edi
        call edi
        push 0x8074
        call dword ptr [mem_009254C8]
        mov edi, dword ptr [esi + 0x38]
        cmp edi, dword ptr [esi + 0x3c]
        pop ebp
        pop ebx
        jbe L_chk4
        call dword ptr [mem_00925134]
        cmp edi, dword ptr [esi + 0x3c]
L_chk4:
        jb L_ok4
        call dword ptr [mem_00925134]
L_ok4:
        push edi
        push 0x0
        push 0x1406
        push 0x3
        call dword ptr [mem_009254C4]
        mov ecx, dword ptr [esi + 0x18]
        push ecx
        push 0x0
        push 0x3
        call dword ptr [mem_009254C0]
        pop edi
        pop esi
        add esp, 0x4
        mov dword ptr [esp + 0x4], 0x8074
        jmp dword ptr [mem_009254BC]
    }
}
