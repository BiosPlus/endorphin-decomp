// Decompiled translation unit: src/ExprParser/Operators/Comma.cpp

// [0x006A1DF0] ExprParser::Operators::Comma::vfunc_2 (34 bytes)
extern "C" __declspec(naked) void __stdcall fn_006A1DF0(void* self, int a2) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        test edx, edx
        je done
        mov eax, dword ptr [ecx + 0x8]
        push esi
        mov esi, eax
        sub esi, edx
        sar esi, 0x2
        pop esi
        je done
        add eax, -0x4
        mov dword ptr [ecx + 0x8], eax
    done:
        ret 0x8
    }
}
