// Decompiled translation unit: src/leaf/decompiled_7B0000.cpp

extern "C" void ext_00872828();
extern "C" int mem_00999AF8;
extern "C" int mem_00999AF0;
extern "C" int mem_00999A78;
extern "C" int mem_009548E0;
extern "C" int mem_00999A70;
extern "C" int mem_009252B4;
extern "C" int mem_00999A60;
extern "C" int mem_00993828;

// [0x007BB140] sub_007BB140 (143 bytes)
extern "C" __declspec(naked) int __cdecl fn_007BB140(double x, int seed) {
    __asm {
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_00999AF8]
        fnstsw ax
        test ah, 0x1
        jne L_7BB157
        mov eax, 0x3ff
        ret
L_7BB157:
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_00999AF0]
        fnstsw ax
        test ah, 0x41
        je L_7BB16B
        xor eax, eax
        ret
L_7BB16B:
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        jne L_7BB193
        fldln2
        fld qword ptr [esp + 0x4]
        fyl2x
        fmul qword ptr [mem_00999A78]
        fadd qword ptr [mem_009548E0]
        fmul qword ptr [mem_00999A70]
        call ext_00872828
        ret
L_7BB193:
        call dword ptr [mem_009252B4]
        mov dword ptr [esp + 0xc], eax
        fild dword ptr [esp + 0xc]
        fmul qword ptr [mem_00999A60]
        fldln2
        fld qword ptr [esp + 0x4]
        fyl2x
        fmul qword ptr [mem_00999A78]
        fadd qword ptr [mem_009548E0]
        fmul qword ptr [mem_00999A70]
        faddp st(1), st
        fsub qword ptr [mem_00993828]
        call ext_00872828
        ret
    }
}
