// Decompiled translation unit: src/ExprParser/Vector3Type.cpp

// [0x0066B5D0] ExprParser::Vector3Type::vfunc_35 (19 bytes)
extern "C" void ext_00699000();

extern "C" __declspec(naked) void __fastcall fn_0066B5D0(void* self, int edx_unused, void** a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        call ext_00699000
        ret 0x8
    }
}

// [0x006719C0] ExprParser::Vector3Type::vfunc_29 (21 bytes)
extern "C" void ext_006715C0();

extern "C" __declspec(naked) void __fastcall fn_006719C0(void* self, int edx_unused, void** a1) {
    __asm {
        push 0x0
        push 0x0
        add ecx, 0x8
        call ext_006715C0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [ecx], eax
        ret 0x4
    }
}

// [0x0066D0C0] ExprParser::Vector3Type::vfunc_30 (26 bytes)
extern "C" void ext_0066C030();

extern "C" __declspec(naked) void __fastcall fn_0066D0C0(void* self, int edx_unused, void** a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        push eax
        add ecx, 0x8
        call ext_0066C030
        mov dword ptr [esi], 0x0
        pop esi
        ret 0x4
    }
}

// [0x006719E0] ExprParser::Vector3Type::vfunc_28 (28 bytes)
extern "C" void ext_006715C0();

extern "C" __declspec(naked) void __fastcall fn_006719E0(void* self, int edx_unused, void** a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [eax]
        push edx
        push 0x1
        add ecx, 0x8
        call ext_006715C0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [ecx], eax
        mov eax, ecx
        ret 0x8
    }
}

// [0x00671A00] ExprParser::Vector3Type::vfunc_11 (37 bytes)
extern "C" void ext_006719A0();

extern "C" __declspec(naked) void __fastcall fn_00671A00(void* self, int edx_unused, void** a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_006719A0
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi]
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        pop esi
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x8]
        ret 0x8
    }
}

// [0x0066B680] ExprParser::Vector3Type::vfunc_43 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066B680(void* self, int edx_unused, void** a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        call eax
        mov ecx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx]
        fld dword ptr [ecx]
        fadd dword ptr [eax]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x4]
        fadd dword ptr [ecx + 0x4]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x8]
        fadd dword ptr [ecx + 0x8]
        fstp dword ptr [ecx + 0x8]
        ret 0x8
    }
}

// [0x0066B6B0] ExprParser::Vector3Type::vfunc_44 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066B6B0(void* self, int edx_unused, void** a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        call eax
        mov ecx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx]
        fld dword ptr [ecx]
        fsub dword ptr [eax]
        fstp dword ptr [ecx]
        fld dword ptr [ecx + 0x4]
        fsub dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0x8]
        ret 0x8
    }
}

// [0x0066B5A0] ExprParser::Vector3Type::vfunc_33 (34 bytes)
extern "C" void ext_00698B50();

extern "C" __declspec(naked) void __fastcall fn_0066B5A0(void* self, int edx_unused, void** a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x74]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call edx
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        call ext_00698B50
        pop esi
        ret 0xc
    }
}
