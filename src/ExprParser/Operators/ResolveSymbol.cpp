// Decompiled translation unit: src/ExprParser/Operators/ResolveSymbol.cpp

// Decompiled translation unit: src/ExprParser/Operators/ResolveSymbol.cpp

extern "C" void ext_0041CEB0();
extern "C" void ext_0041CF50();
extern "C" void ext_00660A50();
extern "C" void ext_0067F960();
extern "C" int mem_00924FF4;

// [0x006A0D80] ExprParser::Operators::ResolveSymbol::vfunc_3 (158 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A0D80(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8926a1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push ebp
        push esi
        push edi
        call ext_0067F960
        mov edi, eax
        call ext_00660A50
        mov ebp, dword ptr [esp + 0x40]
        mov esi, eax
        lea eax, [esp + 0x14]
        push eax
        mov ecx, ebp
        call ext_0041CEB0
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x14]
        push 0
        push edi
        push eax
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x48], 0
        call edx
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0x3c], 1
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        pop edi
        pop esi
        mov byte ptr [esp + 0x30], 0
        pop ebp
        je skip_vcall
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp]
        push edx
        call eax
skip_vcall:
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
    }
}
