// Decompiled translation unit: src/ExprParser/ExpressionContainer.cpp

extern "C" void ext_0057CCE0();
extern "C" void ext_00671F30();
extern "C" void ext_006721F0();
extern "C" int mem_00925134;

// [0x0069A1F0] ExprParser::ExpressionContainer::vfunc_2 (105 bytes)
extern "C" __declspec(naked) void __fastcall fn_0069A1F0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x8], 0x0
        call ext_0057CCE0
        test eax, eax
        je short L_0069A245
        mov ecx, dword ptr [esi + 0x1c]
        test ecx, ecx
        push edi
        mov edi, dword ptr [eax]
        je short L_0069A223
        mov eax, dword ptr [esi + 0x20]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb short L_0069A229
    L_0069A223:
        call dword ptr [mem_00925134]
    L_0069A229:
        mov ecx, dword ptr [esi + 0x1c]
        mov esi, dword ptr [esp + 0x10]
        lea edx, [ecx + 8 * edi]
        push edx
        push esi
        call ext_006721F0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0069A245:
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
