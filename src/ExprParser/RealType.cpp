// Decompiled translation unit: src/ExprParser/RealType.cpp

// [0x0066ADC0] ExprParser::RealType::vfunc_3 (32 bytes)
extern "C" double mem_00987B78;

extern "C" int __stdcall fn_0066ADC0(float* value) {
    return ((double)*value >= mem_00987B78) ? 1 : 0;
}

// [0x0066B0B0] ExprParser::RealType::vfunc_8 (17 bytes)
extern "C" void ext_006720C0();

extern "C" __declspec(naked) void __stdcall fn_0066B0B0(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        call ext_006720C0
        ret 0x8
    }
}

// [0x0066AD40] ExprParser::RealType::vfunc_0 (38 bytes)
extern "C" void ext_00672080();

extern "C" __declspec(naked) void __fastcall fn_0066AD40(void* self, int edx_unused, void* a1, float* value) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        fld dword ptr [eax]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        mov dword ptr [esp + 0x8], 0x0
        call ext_00672080
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0066AD80] ExprParser::RealType::vfunc_2 (55 bytes)
extern "C" void ext_006A6DE0();
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __stdcall fn_0066AD80(float* value) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x4]
        fldz
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x1
        jne short neg_path
        fadd qword ptr [mem_00993828]
        call ext_006A6DE0
        ret 0x4
neg_path:
        fsub qword ptr [mem_00993828]
        call ext_006A6DE0
        ret 0x4
    }
}
