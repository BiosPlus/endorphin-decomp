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
