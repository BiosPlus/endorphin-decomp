// Decompiled translation unit: src/ExprParser/Operators/AssignDivide.cpp

// [0x006A10F0] ExprParser::Operators::AssignDivide::vfunc_3 (324 bytes)
extern "C" void ext_0041CF50();
extern "C" void ext_004ECB40();
extern "C" void ext_00672040();
extern "C" void ext_00672080();

extern "C" __declspec(naked) void __fastcall fn_006A10F0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b6c40
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push esi
        mov esi, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x30]
        call edx
        cmp eax, 0xf
        jne L_else
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [esp + 0x28]
        fldz
        fcom dword ptr [esp + 0x28]
        fnstsw ax
        test ah, 0x44
        jnp L_a
        mov ecx, dword ptr [esi + 0x4]
        fstp st(0)
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        push esi
        call eax
        fdiv dword ptr [esp + 0x28]
    L_a:
        fstp dword ptr [esp + 0x28]
        push ecx
        fld dword ptr [esp + 0x2c]
        lea ecx, [esp + 0x8]
        fstp dword ptr [esp]
        call ext_00672080
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xa4]
        lea eax, [esp + 0x4]
        push eax
        push esi
        mov dword ptr [esp + 0x24], 0
        call edx
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        mov dword ptr [esp + 0x1c], -1
        je L_join
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x4]
        push edx
        call eax
        jmp L_join
    L_else:
        mov ecx, esi
        call ext_00672040
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [esp + 0x28]
        fldz
        mov ecx, dword ptr [esi + 0x4]
        fcom dword ptr [esp + 0x28]
        mov edx, dword ptr [ecx]
        fnstsw ax
        test ah, 0x44
        jnp L_b
        mov eax, dword ptr [edx + 0x4]
        fstp st(0)
        push esi
        call eax
        fdiv dword ptr [esp + 0x28]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
    L_b:
        mov eax, dword ptr [edx + 0x1c]
        push ecx
        fstp dword ptr [esp]
        push esi
        call eax
    L_join:
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_004ECB40
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], 1
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov dword ptr [esp + 0x1c], -1
        pop esi
        je L_done
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x8]
        push eax
        call edx
    L_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret 0x8
    }
}
