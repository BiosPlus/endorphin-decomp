// Decompiled translation unit: src/ExprParser/Operators/Random.cpp

// [0x006A1730] ExprParser::Operators::Random::vfunc_3 (150 bytes)
// thiscall with self in ecx (passed through to ext_006955D0 and used as the final ecx),
// two stack args (a1 at [esp+4], a2 at [esp+8] on entry), ret 8.
extern "C" void ext_006955D0();
extern "C" void ext_00508680();
extern "C" int mem_0093BD38;
extern "C" int mem_0094FF78;

extern "C" __declspec(naked) void __fastcall fn_006A1730(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x8
        push esi
        push edi
        call ext_006955D0
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edi, eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push esi
        call edx
        fstp dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fsub dword ptr [esp + 0x14]
        mov ecx, edi
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fabs
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fstp qword ptr [esp + 0x8]
        call ext_00508680
        test eax, eax
        mov dword ptr [esp + 0x18], eax
        fild dword ptr [esp + 0x18]
        jge L_006A1791
        fadd qword ptr [mem_0093BD38]
    L_006A1791:
        fmul qword ptr [mem_0094FF78]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1c]
        fmul qword ptr [esp + 0x8]
        push ecx
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fadd dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp]
        push esi
        call eax
        pop edi
        pop esi
        add esp, 0x8
        ret 0x8
    }
}
