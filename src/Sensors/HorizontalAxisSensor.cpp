// Decompiled translation unit: src/Sensors/HorizontalAxisSensor.cpp

// [0x0062BDC0] Sensors::HorizontalAxisSensor::vfunc_27 (354 bytes)
extern "C" void ext_0067B7F0();
extern "C" void ext_006A7250();
extern "C" int mem_00925134;
extern "C" int mem_00993838;

extern "C" __declspec(naked) void __fastcall fn_0062BDC0(void* self) {
    __asm {
        sub esp, 0x38
        fldz
        push ebx
        push ebp
        fst dword ptr [esp + 0x18]
        mov ebp, dword ptr [mem_00925134]
        fst dword ptr [esp + 0x14]
        push esi
        fstp dword ptr [esp + 0x14]
        mov esi, dword ptr [ecx + 0x44]
        cmp esi, dword ptr [ecx + 0x48]
        push edi
        lea edi, [ecx + 0x40]
        mov dword ptr [esp + 0x14], ecx
        jbe L_loop
        call ebp
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
L_loop:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_chk2
        call ebp
        mov ebp, dword ptr [mem_00925134]
L_chk2:
        test edi, edi
        je L_chk3
        cmp edi, edi
        je L_chk4
L_chk3:
        call ebp
        mov ebp, dword ptr [mem_00925134]
L_chk4:
        cmp esi, ebx
        je L_exit
        test edi, edi
        jne L_chk5
        call ebp
L_chk5:
        cmp esi, dword ptr [edi + 0x8]
        jb L_body
        call ebp
L_body:
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x14]
        push esi
        call edx
        fld dword ptr [eax]
        cmp esi, dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x38]
        jb L_body2
        call ebp
L_body2:
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ecx]
        lea eax, [esi + 0x8]
        push eax
        mov eax, dword ptr [edx + 0x14]
        call eax
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fsub dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x28]
        fsub dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x2c]
        fsub dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x3c]
        fadd dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x40]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x44]
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x20]
        cmp esi, dword ptr [edi + 0x8]
        jb L_inc
        call ebp
L_inc:
        add esi, 0x10
        jmp L_loop
L_exit:
        fld dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x20]
        fld st(2)
        fmulp st(3), st
        fld st(1)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        pop edi
        fcomp dword ptr [mem_00993838]
        pop esi
        pop ebp
        pop ebx
        fnstsw ax
        test ah, 0x44
        jnp L_end
        lea ecx, [esp + 0x8]
        call ext_0067B7F0
        fld dword ptr [eax]
        mov ecx, dword ptr [esp + 0x4]
        fstp dword ptr [ecx + 0x30]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x34]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0x38]
L_end:
        add esp, 0x38
        ret
    }
}
