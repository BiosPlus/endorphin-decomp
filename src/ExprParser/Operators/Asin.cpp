// Decompiled translation unit: src/ExprParser/Operators/Asin.cpp

extern "C" void ext_006A73BA();
extern "C" int mem_0093F7B8;

// [0x006A1860] ExprParser::Operators::Asin::vfunc_3 (106 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A1860(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push edi
        push esi
        call edx
        fstp dword ptr [esp + 0x10]
        fld1
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_gt
        fstp st(0)
    L_store:
        fstp dword ptr [esp + 0x10]
        jmp L_call
    L_gt:
        fstp st(1)
        fld dword ptr [mem_0093F7B8]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        je L_store
        fstp st(0)
    L_call:
        mov edi, dword ptr [esi + 0x4]
        fld dword ptr [esp + 0x10]
        mov ebx, dword ptr [edi]
        call ext_006A73BA
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        mov eax, dword ptr [ebx + 0x1c]
        push ecx
        fstp dword ptr [esp]
        push esi
        mov ecx, edi
        call eax
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}
