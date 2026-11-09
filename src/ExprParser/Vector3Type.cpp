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
