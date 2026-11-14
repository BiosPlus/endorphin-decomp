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

// [0x0069B070] ExprParser::ExpressionContainer::vfunc_10 (78 bytes)
extern "C" void ext_006A6E9E();
extern "C" void ext_0069A590();
extern "C" void ext_00490C80();
extern "C" void ext_00491150();

extern "C" __declspec(naked) void __fastcall fn_0069B070(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push edi
        push 0
        push 0AA3D80h
        push 0A2E2F8h
        push 0
        push eax
        mov edi, ecx
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_done
        lea ecx, [esi + 0x8]
        push ecx
        lea ecx, [edi + 0x8]
        call ext_0069A590
        lea edx, [esi + 0x18]
        push edx
        lea ecx, [edi + 0x18]
        call ext_00490C80
        add esi, 0x28
        push esi
        lea ecx, [edi + 0x28]
        call ext_00491150
    L_done:
        pop edi
        pop esi
        ret 0x4
    }
}
