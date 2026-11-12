// Decompiled translation unit: src/ExprParser/Operators/Assign.cpp

extern "C" void ext_0041CF50();
extern "C" void ext_004ECB40();
extern "C" void ext_00672040();

// [0x0067F630] ExprParser::Operators::Assign::vfunc_3 (130 bytes)
extern "C" __declspec(naked) void __fastcall fn_0067F630(void* self) {
    __asm {
        push -1
        push 0x8b33b8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov ecx, esi
        call ext_00672040
        mov ecx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esp + 0x24]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xa4]
        push edi
        push esi
        call edx
        lea eax, [esp + 0x8]
        push eax
        mov ecx, edi
        call ext_004ECB40
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x1c], 0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        pop edi
        mov dword ptr [esp + 0x14], -1
        pop esi
        je skip_cleanup
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp]
        push eax
        call edx
skip_cleanup:
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x8
    }
}
