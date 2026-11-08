// Decompiled translation unit: src/ExprParser/Operators/Abs.cpp

// [0x006A1CD0] ExprParser::Operators::Abs::vfunc_3 (21 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A1CD0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0xbc]
        jmp eax
    }
}
