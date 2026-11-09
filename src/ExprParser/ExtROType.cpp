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

// [0x0066AFC0] ExprParser::ExtROType::vfunc_1 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066AFC0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 4]
        jmp eax
    }
}

// [0x0066AFE0] ExprParser::ExtROType::vfunc_2 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066AFE0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 8]
        jmp eax
    }
}

// [0x0066B030] ExprParser::ExtROType::vfunc_6 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066B030(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0x18]
        jmp eax
    }
}

// [0x0066B9E0] ExprParser::ExtROType::vfunc_14 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066B9E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0x38]
        jmp eax
    }
}

// [0x0066BA30] ExprParser::ExtROType::vfunc_38 (12 bytes)
extern "C" void ext_00672000();

extern "C" __declspec(naked) void __fastcall fn_0066BA30(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        call ext_00672000
        ret 4
    }
}

// [0x0066BB50] ExprParser::ExtROType::vfunc_47 (29 bytes)
extern "C" void ext_0066BA00();

extern "C" __declspec(naked) void __fastcall fn_0066BB50(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        call ext_0066BA00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xbc]
        push esi
        call edx
        pop esi
        ret 4
    }
}

// [0x0066BA40] ExprParser::ExtROType::vfunc_41 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066BA40(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        call ext_0066BA00
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xa4]
        push edx
        push esi
        call eax
        pop esi
        ret 8
    }
}

// [0x0066BA90] ExprParser::ExtROType::vfunc_43 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066BA90(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        call ext_0066BA00
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xac]
        push edx
        push esi
        call eax
        pop esi
        ret 8
    }
}

// [0x0066BAC0] ExprParser::ExtROType::vfunc_44 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066BAC0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        call ext_0066BA00
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xb0]
        push edx
        push esi
        call eax
        pop esi
        ret 8
    }
}

// [0x0066BAF0] ExprParser::ExtROType::vfunc_45 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066BAF0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        call ext_0066BA00
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xb4]
        push edx
        push esi
        call eax
        pop esi
        ret 8
    }
}

// [0x0066BB20] ExprParser::ExtROType::vfunc_46 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066BB20(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        call ext_0066BA00
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xb8]
        push edx
        push esi
        call eax
        pop esi
        ret 8
    }
}
