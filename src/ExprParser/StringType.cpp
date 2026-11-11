// Decompiled translation unit: src/ExprParser/StringType.cpp

// [0x0066B510] ExprParser::StringType::vfunc_35 (19 bytes)
extern "C" void ext_00698F80();

typedef void (__thiscall *Callee_00698F80)(void* self, void* arg);

extern "C" void __fastcall fn_0066B510(void* self, int edx_unused, void** a1, void* a2) {
    ((Callee_00698F80)ext_00698F80)(a2, *a1);
}

// [0x00671860] ExprParser::StringType::vfunc_29 (21 bytes)
extern "C" void ext_006714E0();

typedef void* (__thiscall *Callee_006714E0)(void* self, int a, int b);

extern "C" void __fastcall fn_00671860(void* self, int edx_unused, void** a1) {
    *a1 = ((Callee_006714E0)ext_006714E0)((char*)self + 4, 1, 0);
}

// [0x0066EEC0] ExprParser::StringType::vfunc_30 (26 bytes)
extern "C" void ext_0066E050();

typedef void (__thiscall *Callee_0066E050)(void* self, void* arg);

extern "C" void __fastcall fn_0066EEC0(void* self, int edx_unused, void** a1) {
    ((Callee_0066E050)ext_0066E050)((char*)self + 4, *a1);
    *a1 = 0;
}

// [0x0066B270] ExprParser::StringType::vfunc_2 (27 bytes)
extern "C" void ext_0046C490();

typedef void* (__cdecl *Callee_0046C490)(void* a);

extern "C" void* __stdcall fn_0066B270(void** a1) {
    if (*a1) {
        return ((Callee_0046C490)ext_0046C490)(*a1);
    }
    return 0;
}

// [0x00671880] ExprParser::StringType::vfunc_28 (28 bytes)
extern "C" void* __fastcall fn_00671880(void* self, int edx_unused, void** a1, void** a2) {
    *a1 = ((Callee_006714E0)ext_006714E0)((char*)self + 4, 1, (int)*a2);
    return a1;
}

// [0x006718A0] ExprParser::StringType::vfunc_10 (28 bytes)
extern "C" void ext_00671840();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_006718A0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        call ext_00671840
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi]
        push eax
        call dword ptr [mem_00924FDC]
        pop esi
        ret 8
    }
}

// [0x0066B240] ExprParser::StringType::vfunc_1 (42 bytes)
extern "C" int mem_00924FF0;
extern "C" int mem_009251F0;

extern "C" __declspec(naked) void __fastcall fn_0066B240(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        je short empty_str
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        add esp, 4
        ret 4
empty_str:
        fldz
        ret 4
    }
}

// [0x0066B2E0] ExprParser::StringType::vfunc_4 (61 bytes)
extern "C" void ext_004276B0();
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_0066B2E0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov eax, dword ptr [eax]
        test eax, eax
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0
        je short empty_str
        push eax
        push esi
        call ext_004276B0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
empty_str:
        push 0x928b5d
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0066B290] ExprParser::StringType::vfunc_3 (71 bytes)
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void __stdcall fn_0066B290(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        test esi, esi
        je short null_str
        push edi
        mov edi, dword ptr [mem_00924FC0]
        push 0x92f10c
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne short match
        push 0x93a810
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne short match
        pop edi
        xor eax, eax
        pop esi
        ret 0x4
    match:
        pop edi
        mov eax, 0x1
        pop esi
        ret 0x4
    null_str:
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x006718C0] ExprParser::StringType::vfunc_41 (102 bytes)
extern "C" void ext_0041CEB0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006718C0(void* self, int edx_unused, void** a1, void* a2) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, dword ptr [esp + 0x30]
        push esi
        call ext_00671840
        mov ecx, dword ptr [esp + 0x34]
        lea eax, [esp + 0x4]
        push eax
        call ext_0041CEB0
        mov ecx, dword ptr [esi]
        push eax
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 8
    }
}

// [0x00671930] ExprParser::StringType::vfunc_43 (102 bytes)
extern "C" void ext_00671840();
extern "C" void ext_0041CEB0();
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00671930(void* self, int edx_unused, void** a1, void* a2) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, dword ptr [esp + 0x30]
        push esi
        call ext_00671840
        mov ecx, dword ptr [esp + 0x34]
        lea eax, [esp + 0x4]
        push eax
        call ext_0041CEB0
        mov ecx, dword ptr [esi]
        push eax
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 8
    }
}
