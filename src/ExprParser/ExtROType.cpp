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

// [0x0066AF60] ExprParser::ExtROType::vfunc_5 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066AF60(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0x14]
        jmp eax
    }
}

// [0x0066AF80] ExprParser::ExtROType::vfunc_15 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066AF80(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0x3c]
        jmp eax
    }
}

// [0x0066AFA0] ExprParser::ExtROType::vfunc_21 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066AFA0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 4], eax
        mov edx, dword ptr [edx + 0x54]
        jmp edx
    }
}
