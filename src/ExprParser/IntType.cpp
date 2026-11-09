// Decompiled translation unit: src/ExprParser/IntType.cpp

// [0x0066B0F0] ExprParser::IntType::vfunc_7 (20 bytes)
extern "C" void __fastcall ext_00672080(void* self, float v);
extern "C" void __fastcall fn_0066B0F0(void* self, int edx_unused, void* a1, float v) {
    ext_00672080(a1, v);
}

// [0x0066AE10] ExprParser::IntType::vfunc_0 (35 bytes)
extern "C" void ext_006720C0();
extern "C" __declspec(naked) void* __fastcall fn_0066AE10(void* self, int edx_unused, void* a1, void** a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call ext_006720C0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0066B140] ExprParser::IntType::vfunc_42 (46 bytes)
typedef void* (__thiscall *IntTypeVfn2)(void* self, void* arg);
extern "C" bool __fastcall fn_0066B140(void* self, int edx_unused, void* a1, void* a2) {
    void* o1 = *(void**)((char*)a1 + 0x4);
    void* r1 = ((IntTypeVfn2)(*(void***)o1)[2])(o1, a1);
    void* o2 = *(void**)((char*)a2 + 0x4);
    void* r2 = ((IntTypeVfn2)(*(void***)o2)[2])(o2, a2);
    return r1 == r2;
}
