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

// [0x0066CF10] ExprParser::IntType::vfunc_18 (94 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_00B59660;
extern "C" __declspec(naked) void __fastcall fn_0066CF10(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b33fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B59660], al
        jne L_66CF59
        or dword ptr [mem_00B59660], eax
        push 0
        mov ecx, 0xb59658
        mov dword ptr [esp + 0xc], 0
        call ext_006720C0
        push 0x921750
        call ext_006A6C87
        add esp, 4
    L_66CF59:
        mov ecx, dword ptr [esp]
        mov eax, 0xb59658
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x0066AE60] ExprParser::IntType::vfunc_4 (37 bytes)
extern "C" void ext_0046C500();
extern "C" __declspec(naked) void __fastcall fn_0066AE60(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        mov dword ptr [esp + 0xc], 0
        call ext_0046C500
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
