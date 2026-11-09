// Decompiled translation unit: src/classes/ToolEngine.cpp

// [0x00482440] ToolEngine::vfunc_4 (33 bytes)
// Toggles the byte flag at this+0x36C (0 -> 1, nonzero -> 0), then tail-jumps
// through vtable slot 2 of the embedded object at this+0x218, passing that
// sub-object as `this`.
extern "C" void __fastcall fn_00482440(void* self) {
    unsigned char* base = (unsigned char*)self;
    unsigned char* flag = base + 0x36C;
    *flag = (unsigned char)(*flag == 0);

    void* sub = base + 0x218;
    void** vtbl = *(void***)sub;
    typedef void (__fastcall *SlotFn)(void*);
    ((SlotFn)vtbl[2])(sub);
}

// [0x004800C0] ToolEngine::vfunc_16 (11 bytes)
extern "C" void ext_004AFC60();

extern "C" __declspec(naked) void __fastcall fn_004800C0(void* self) {
    __asm {
        push 0
        add ecx, 0x8
        call ext_004AFC60
        ret
    }
}

// [0x00485310] ToolEngine::vfunc_56 (15 bytes)
extern "C" void ext_00483D20();

extern "C" __declspec(naked) void __fastcall fn_00485310(void* self) {
    __asm {
        push 1
        lea eax, [ecx + 0x3CC]
        push eax
        call ext_00483D20
        ret
    }
}

// [0x00482490] ToolEngine::vfunc_2 (27 bytes)
extern "C" void ext_00451670();

extern "C" __declspec(naked) void __fastcall fn_00482490(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x22c
        mov dword ptr [esp + 0x8], eax
        call ext_00451670
        ret 0x4
    }
}

// [0x00485150] ToolEngine::vfunc_1 (27 bytes)
extern "C" void ext_005A6300();

extern "C" __declspec(naked) void __fastcall fn_00485150(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x22c
        mov dword ptr [esp + 0x8], eax
        call ext_005A6300
        ret 0x4
    }
}

// [0x004852F0] ToolEngine::vfunc_55 (27 bytes)
// Calls vtable slot 0 of *this (virtual, no args), then calls sub_00483D20 with
// this+0x3CC and the constant 1 pushed as stack arguments (callee pops them).
extern "C" void ext_00483D20();

extern "C" __declspec(naked) void __fastcall fn_004852F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        call edx
        push 1
        lea eax, [esi + 0x3CC]
        push eax
        mov ecx, esi
        call ext_00483D20
        pop esi
        ret
    }
}

// [0x004800E0] ToolEngine::vfunc_13 (29 bytes)
// Walks self->[+0x3B0]->[+0x30], calls vtable slot 45 (+0xB4) of that object
// with the constant argument 3, then passes the returned pointer as `this`
// (ecx) to ext_00530290.
extern "C" void ext_00530290();
extern "C" __declspec(naked) void __fastcall fn_004800E0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x3b0]
        mov ecx, dword ptr [ecx + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xb4]
        push 0x3
        call edx
        mov ecx, eax
        call ext_00530290
        ret
    }
}

// [0x00480100] ToolEngine::vfunc_26 (35 bytes)
// Copies the float argument into a local, then calls vtable slot 25 (+0x64)
// of *this with a pointer to that local as the single stack argument.
extern "C" __declspec(naked) void __fastcall fn_00480100(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0xc
        fld dword ptr [esp + 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x64]
        fst dword ptr [esp]
        lea edx, [esp]
        fst dword ptr [esp + 0x4]
        push edx
        fstp dword ptr [esp + 0xc]
        call eax
        add esp, 0xc
        ret 0x4
    }
}
