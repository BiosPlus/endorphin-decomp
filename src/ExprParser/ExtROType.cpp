// Decompiled translation unit: src/ExprParser/ExtROType.cpp

// [0x0066AF40] ExprParser::ExtROType::vfunc_3 (20 bytes)
// Tail-call thunk: replaces stack arg with *arg0 and jumps to (*arg0)->vtbl's child at [+4] vfunc[3].
extern "C" __declspec(naked) void __fastcall fn_0066AF40(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0xc]
        jmp eax
    }
}
