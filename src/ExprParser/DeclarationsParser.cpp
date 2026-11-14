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

// [0x00672EC0] ExprParser::DeclarationsParser::vfunc_7 (89 bytes)
extern "C" void ext_0040ECB0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00672EC0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0x8]
        cmp esi, dword ptr [ecx + 0xc]
        push edi
        lea edi, [ecx + 0x4]
        jbe short L_ok1
        call ebp
    L_ok1:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe short L_ok2
        call ebp
    L_ok2:
        test edi, edi
        je short L_bad1
        cmp edi, edi
        je short L_ok3
    L_bad1:
        call ebp
    L_ok3:
        cmp esi, ebx
        je short L_done
        test edi, edi
        jne short L_ok4
        call ebp
    L_ok4:
        cmp esi, dword ptr [edi + 0x8]
        jb short L_ok5
        call ebp
    L_ok5:
        mov ecx, dword ptr [esp + 0x14]
        push esi
        call ext_0040ECB0
        cmp esi, dword ptr [edi + 0x8]
        jb short L_ok6
        call ebp
    L_ok6:
        add esi, 0x20
        jmp short L_ok1
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}
