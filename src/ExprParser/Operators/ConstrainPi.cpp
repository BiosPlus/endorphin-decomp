// Decompiled translation unit: src/ExprParser/Operators/ConstrainPi.cpp

extern "C" int mem_00990040;
extern "C" int mem_009576E8;
extern "C" int mem_00955090;
extern "C" int mem_00990038;

// [0x006A1910] ExprParser::Operators::ConstrainPi::vfunc_3 (184 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A1910(void* ecx_unused, int edx_unused, void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp+8]
        mov ecx, dword ptr [esi+4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax+4]
        push esi
        call edx
        fstp dword ptr [esp+8]
        fld dword ptr [esp+8]
        fcom qword ptr [mem_00990040]
        fnstsw ax
        test ah, 41h
        jne L_197A
        fld qword ptr [mem_009576E8]
        fcom st(1)
        fnstsw ax
        test ah, 5
        jp L_19B3
        fld qword ptr [mem_00955090]
        jmp L_194E
L_194C:
        fxch st(2)
L_194E:
        fsub st(2), st
        fxch st(2)
        fstp dword ptr [esp+8]
        fld dword ptr [esp+8]
        fcom st(1)
        fnstsw ax
        test ah, 41h
        je L_194C
L_1963:
        mov ecx, dword ptr [esi+4]
        fstp st(1)
        mov eax, dword ptr [ecx]
        fstp st(1)
        mov edx, dword ptr [eax+1ch]
        push ecx
        fstp dword ptr [esp]
        push esi
        call edx
        pop esi
        ret 4
L_197A:
        fld qword ptr [mem_00990038]
        fcom st(1)
        fnstsw ax
        test ah, 41h
        jne L_19B3
        fcom st(1)
        fnstsw ax
        test ah, 41h
        jne L_19B3
        fld qword ptr [mem_00955090]
        jmp L_199C
L_199A:
        fxch st(2)
L_199C:
        fadd st(2), st
        fxch st(2)
        fstp dword ptr [esp+8]
        fld dword ptr [esp+8]
        fcom st(1)
        fnstsw ax
        test ah, 5
        jnp L_199A
        jmp L_1963
L_19B3:
        mov ecx, dword ptr [esi+4]
        fstp st(0)
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax+1ch]
        push ecx
        fstp dword ptr [esp]
        push esi
        call edx
        pop esi
        ret 4
    }
}
