// Decompiled translation unit: src/ExprParser/VPtrProxyType.cpp

// [0x0066BCE0] ExprParser::VPtrProxyType::vfunc_47 (23 bytes)
// Tail-call thunk: replaces stack arg with *arg0 and jumps to (*arg0)->vtbl's child at [+4] vfunc[47] (+0xbc).
extern "C" __declspec(naked) void __fastcall fn_0066BCE0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0xbc]
        jmp eax
    }
}

extern "C" void ext_00671FE0();

// [0x0066BB90] ExprParser::VPtrProxyType::vfunc_37 (12 bytes)
// Forwards its stack arg as `this` (ecx) to sub_00671FE0, then returns popping 4 bytes.
extern "C" __declspec(naked) void __fastcall fn_0066BB90(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        call ext_00671FE0
        ret 4
    }
}
