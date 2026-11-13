// Decompiled translation unit: src/ExprParser/DeclarationsParser.cpp

extern "C" void ext_00505D50();
extern "C" void ext_00671F30();
extern "C" void ext_00685900();
extern "C" int mem_00925134;

// [0x00672CA0] ExprParser::DeclarationsParser::vfunc_2 (107 bytes)
extern "C" __declspec(naked) void __fastcall fn_00672CA0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x8], 0x0
        call ext_00505D50
        test eax, eax
        je L_fail
        mov ecx, dword ptr [esi + 0x18]
        test ecx, ecx
        push ebx
        push edi
        mov edi, dword ptr [eax]
        je L_invalid
        mov eax, dword ptr [esi + 0x1c]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_ok
    L_invalid:
        call dword ptr [mem_00925134]
    L_ok:
        mov ecx, dword ptr [esi + 0x18]
        mov ebx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ecx + 4 * edi]
        push 0x1
        push 0x0
        push ebx
        call ext_00685900
        pop edi
        mov eax, ebx
        pop ebx
        pop esi
        pop ecx
        ret 0x8
    L_fail:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
