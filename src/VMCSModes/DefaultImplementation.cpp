// Decompiled translation unit: src/VMCSModes/DefaultImplementation.cpp

// [0x004F9E50] VMCSModes::DefaultImplementation::vfunc_133 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F9E50(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x08 // mov eax, dword ptr [ecx + 0x8]
        __asm _emit 0x8B __asm _emit 0x48 __asm _emit 0x14 // mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x34 // mov ecx, dword ptr [ecx + 0x34]
        __asm _emit 0x8B __asm _emit 0x11 // mov edx, dword ptr [ecx]
        __asm _emit 0x8B __asm _emit 0x42 __asm _emit 0x1C // mov eax, dword ptr [edx + 0x1c]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}

// [0x004F9D00] VMCSModes::DefaultImplementation::vfunc_97 (19 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F9D00(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x08 // mov eax, dword ptr [ecx + 0x8]
        __asm _emit 0x8B __asm _emit 0x48 __asm _emit 0x14 // mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x34 // mov ecx, dword ptr [ecx + 0x34]
        __asm _emit 0x8B __asm _emit 0x11 // mov edx, dword ptr [ecx]
        __asm _emit 0x8B __asm _emit 0x82 __asm _emit 0xCC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edx + 0xcc]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}

// [0x004F9860] VMCSModes::DefaultImplementation::vfunc_38 (18 bytes)
extern "C" void ext_00469530();

extern "C" void __fastcall fn_004F9860(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *Callee)(void*, int, int);
    ((Callee)ext_00469530)(*(void**)((char*)self + 0x8), a1, 0);
}

// [0x004F98A0] VMCSModes::DefaultImplementation::vfunc_27 (19 bytes)
extern "C" void ext_00468A30();

extern "C" bool __fastcall fn_004F98A0(void* self, int edx_unused, void** out) {
    typedef void* (__fastcall *Callee)(void*);
    *out = ((Callee)ext_00468A30)(*(void**)((char*)self + 0x8));
    return true;
}

// [0x004F98D0] VMCSModes::DefaultImplementation::vfunc_29 (19 bytes)
extern "C" void ext_00468AC0();

extern "C" bool __fastcall fn_004F98D0(void* self, int edx_unused, void** out) {
    typedef void* (__fastcall *Callee)(void*);
    *out = ((Callee)ext_00468AC0)(*(void**)((char*)self + 0x8));
    return true;
}

// [0x004F9BF0] VMCSModes::DefaultImplementation::vfunc_104 (22 bytes)
extern "C" void ext_00480560();

extern "C" bool __fastcall fn_004F9BF0(void* self) {
    typedef bool (__fastcall *Callee)(void*);
    void* a = *(void**)((char*)self + 0x8);
    void* b = *(void**)((char*)a + 0x14);
    void* c = *(void**)((char*)b + 0x34);
    return !((Callee)ext_00480560)(c);
}

// [0x004FB3A0] VMCSModes::DefaultImplementation::vfunc_59 (22 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00469060();
extern "C" __declspec(naked) void __fastcall fn_004FB3A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov ecx, dword ptr [esi + 0x8]
        pop esi
        jmp ext_00469060
    }
}

// [0x004FAC20] VMCSModes::DefaultImplementation::vfunc_0 (26 bytes)
extern "C" void ext_004667A0();
extern "C" void __fastcall fn_004FAC20(void* self) {
    typedef void (__thiscall *Callee)(void*, int);
    typedef void (__fastcall *VFn)(void*);
    void* a = *(void**)((char*)self + 0x4);
    ((Callee)ext_004667A0)(a, 0);
    void* b = *(void**)((char*)self + 0x4);
    void* c = *(void**)((char*)b + 0xc);
    void* vt = *(void**)c;
    ((VFn)(*(void**)vt))(c);
}

// [0x004FADB0] VMCSModes::DefaultImplementation::vfunc_14 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FADB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 2
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov edx, dword ptr [edx + 0x38]
        jmp edx
    }
}

// [0x004FADD0] VMCSModes::DefaultImplementation::vfunc_17 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FADD0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 3
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x44]
        pop esi
        jmp eax
    }
}

// [0x004FADF0] VMCSModes::DefaultImplementation::vfunc_19 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FADF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 3
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4c]
        pop esi
        jmp eax
    }
}

// [0x004FAE10] VMCSModes::DefaultImplementation::vfunc_20 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FAE10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x50]
        pop esi
        jmp eax
    }
}

// [0x004FAE30] VMCSModes::DefaultImplementation::vfunc_21 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FAE30(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x54]
        pop esi
        jmp eax
    }
}

// [0x004FAE50] VMCSModes::DefaultImplementation::vfunc_15 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FAE50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 2
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x3c]
        pop esi
        jmp eax
    }
}

// [0x004FAF50] VMCSModes::DefaultImplementation::vfunc_25 (27 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FAF50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 0x1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x64]
        pop esi
        jmp eax
    }
}

// [0x004FAF70] VMCSModes::DefaultImplementation::vfunc_26 (27 bytes)
extern "C" void ext_004667A0();
extern "C" __declspec(naked) void __fastcall fn_004FAF70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x68]
        pop esi
        jmp eax
    }
}

// [0x004F9B70] VMCSModes::DefaultImplementation::vfunc_39 (41 bytes)
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" void* __fastcall fn_004F9B70(void* self) {
    typedef void (__fastcall *Callee)(void*);
    void* a = *(void**)((char*)self + 0x8);
    void* b = *(void**)((char*)a + 0x14);
    void* esi = (char*)b + 0x20;
    ((Callee)ext_0065C640)(esi);
    a = *(void**)((char*)self + 0x8);
    b = *(void**)((char*)a + 0x14);
    void* edi = *(void**)((char*)b + 0x10);
    ((Callee)ext_0065C650)(esi);
    return edi;
}

// [0x004F9BA0] VMCSModes::DefaultImplementation::vfunc_40 (41 bytes)
extern "C" void* __fastcall fn_004F9BA0(void* self) {
    typedef void (__fastcall *Callee)(void*);
    void* a = *(void**)((char*)self + 0x8);
    void* b = *(void**)((char*)a + 0x14);
    void* esi = (char*)b + 0x20;
    ((Callee)ext_0065C640)(esi);
    a = *(void**)((char*)self + 0x8);
    b = *(void**)((char*)a + 0x14);
    void* edi = *(void**)((char*)b + 0x14);
    ((Callee)ext_0065C650)(esi);
    return edi;
}

// [0x004FA170] VMCSModes::DefaultImplementation::vfunc_106 (54 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FA170(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x08 // mov eax, dword ptr [ecx + 0x8]
        __asm _emit 0x8B __asm _emit 0x48 __asm _emit 0x14 // mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x34 // mov eax, dword ptr [ecx + 0x34]
        __asm _emit 0x8B __asm _emit 0x88 __asm _emit 0xD0 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [eax + 0x3d0]
        __asm _emit 0x05 __asm _emit 0xCC __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 // add eax, 0x3cc
        __asm _emit 0x85 __asm _emit 0xC9 // test ecx, ecx
        __asm _emit 0x75 __asm _emit 0x0C // jne +0x0c
        __asm _emit 0x33 __asm _emit 0xC0 // xor eax, eax
        __asm _emit 0x33 __asm _emit 0xD2 // xor edx, edx
        __asm _emit 0x85 __asm _emit 0xC0 // test eax, eax
        __asm _emit 0x0F __asm _emit 0x95 __asm _emit 0xC2 // setne dl
        __asm _emit 0x8A __asm _emit 0xC2 // mov al, dl
        __asm _emit 0xC3 // ret
        __asm _emit 0x8B __asm _emit 0x40 __asm _emit 0x08 // mov eax, dword ptr [eax + 0x8]
        __asm _emit 0x2B __asm _emit 0xC1 // sub eax, ecx
        __asm _emit 0xC1 __asm _emit 0xF8 __asm _emit 0x02 // sar eax, 0x2
        __asm _emit 0x33 __asm _emit 0xD2 // xor edx, edx
        __asm _emit 0x85 __asm _emit 0xC0 // test eax, eax
        __asm _emit 0x0F __asm _emit 0x95 __asm _emit 0xC2 // setne dl
        __asm _emit 0x8A __asm _emit 0xC2 // mov al, dl
        __asm _emit 0xC3 // ret
    }
}

// [0x004F9B30] VMCSModes::DefaultImplementation::vfunc_61 (57 bytes)
extern "C" void ext_00594000();
extern "C" void ext_006AD940();
extern "C" void ext_00492570();
extern "C" void ext_004936C0();

extern "C" __declspec(naked) void __fastcall fn_004F9B30(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov esi, eax
        mov ecx, esi
        call ext_00492570
        test al, al
        je short L_no_action_9B30
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x90]
        mov ecx, edi
        call edx
        pop edi
        mov ecx, esi
        pop esi
        jmp ext_004936C0
L_no_action_9B30:
        pop edi
        pop esi
        ret
    }
}

// [0x004F9AA0] VMCSModes::DefaultImplementation::vfunc_71 (58 bytes)
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) bool __fastcall fn_004F9AA0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        mov ecx, dword ptr [ecx + 0x34]
        call ext_005B11F0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1c]
        call eax
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jne short L_nonempty
        xor eax, eax
        test eax, eax
        sete cl
        mov al, cl
        ret
    L_nonempty:
        mov eax, dword ptr [eax + 0x8]
        sub eax, ecx
        sar eax, 0x2
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret
    }
}

// [0x004FA1B0] VMCSModes::DefaultImplementation::vfunc_136 (58 bytes)
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_004FA1B0(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x08 // mov eax, dword ptr [ecx + 0x8]
        __asm _emit 0x8B __asm _emit 0x48 __asm _emit 0x14 // mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x34 // mov ecx, dword ptr [ecx + 0x34]
        __asm call ext_005B11F0
        __asm _emit 0x8B __asm _emit 0x10 // mov edx, dword ptr [eax]
        __asm _emit 0x8B __asm _emit 0xC8 // mov ecx, eax
        __asm _emit 0x8B __asm _emit 0x42 __asm _emit 0x14 // mov eax, dword ptr [edx + 0x14]
        __asm _emit 0xFF __asm _emit 0xD0 // call eax
        __asm _emit 0x8B __asm _emit 0x48 __asm _emit 0x04 // mov ecx, dword ptr [eax + 0x4]
        __asm _emit 0x85 __asm _emit 0xC9 // test ecx, ecx
        __asm _emit 0x75 __asm _emit 0x0A // jne +0x0A
        __asm _emit 0x33 __asm _emit 0xC0 // xor eax, eax
        __asm _emit 0x85 __asm _emit 0xC0 // test eax, eax
        __asm _emit 0x0F __asm _emit 0x95 __asm _emit 0xC1 // setne cl
        __asm _emit 0x8A __asm _emit 0xC1 // mov al, cl
        __asm _emit 0xC3 // ret
        __asm _emit 0x8B __asm _emit 0x40 __asm _emit 0x08 // mov eax, dword ptr [eax + 0x8]
        __asm _emit 0x2B __asm _emit 0xC1 // sub eax, ecx
        __asm _emit 0xC1 __asm _emit 0xF8 __asm _emit 0x02 // sar eax, 0x2
        __asm _emit 0x33 __asm _emit 0xC9 // xor ecx, ecx
        __asm _emit 0x85 __asm _emit 0xC0 // test eax, eax
        __asm _emit 0x0F __asm _emit 0x95 __asm _emit 0xC1 // setne cl
        __asm _emit 0x8A __asm _emit 0xC1 // mov al, cl
        __asm _emit 0xC3 // ret
    }
}

// [0x004FA1F0] VMCSModes::DefaultImplementation::vfunc_137 (58 bytes)
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) bool __fastcall fn_004FA1F0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        mov ecx, dword ptr [ecx + 0x34]
        call ext_005B11F0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x18]
        call eax
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jne short L_nonempty
        xor eax, eax
        test eax, eax
        setne cl
        mov al, cl
        ret
    L_nonempty:
        mov eax, dword ptr [eax + 0x8]
        sub eax, ecx
        sar eax, 2
        xor ecx, ecx
        test eax, eax
        setne cl
        mov al, cl
        ret
    }
}

// [0x004FA230] VMCSModes::DefaultImplementation::vfunc_134 (58 bytes)
extern "C" __declspec(naked) bool __fastcall fn_004FA230(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        mov ecx, dword ptr [ecx + 0x34]
        call ext_005B11F0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x24]
        call eax
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jne short L_nonempty
        xor eax, eax
        test eax, eax
        setne cl
        mov al, cl
        ret
    L_nonempty:
        mov eax, dword ptr [eax + 0x8]
        sub eax, ecx
        sar eax, 2
        xor ecx, ecx
        test eax, eax
        setne cl
        mov al, cl
        ret
    }
}

// [0x004FA2B0] VMCSModes::DefaultImplementation::vfunc_138 (58 bytes)
extern "C" __declspec(naked) bool __fastcall fn_004FA2B0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        mov ecx, dword ptr [ecx + 0x34]
        call ext_005B11F0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x2c]
        call eax
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jne short L_nonempty
        xor eax, eax
        test eax, eax
        setne cl
        mov al, cl
        ret
    L_nonempty:
        mov eax, dword ptr [eax + 0x8]
        sub eax, ecx
        sar eax, 2
        xor ecx, ecx
        test eax, eax
        setne cl
        mov al, cl
        ret
    }
}

// [0x004F9E60] VMCSModes::DefaultImplementation::vfunc_70 (61 bytes)
extern "C" __declspec(naked) bool __fastcall fn_004F9E60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        push edi
        call eax
        mov edx, dword ptr [esi]
        mov edi, eax
        mov eax, dword ptr [edx + 0x9c]
        mov ecx, esi
        call eax
        test eax, eax
        je L_true
        test edi, edi
        je L_false
        cmp dword ptr [edi + 0x38], 0x6
        je L_true
    L_false:
        pop edi
        xor al, al
        pop esi
        ret
    L_true:
        pop edi
        mov al, 0x1
        pop esi
        ret
    }
}

// [0x004F9C10] VMCSModes::DefaultImplementation::vfunc_53 (33 bytes)
extern "C" void ext_00530290();

extern "C" __declspec(naked) void __fastcall fn_004F9C10(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        call eax
        test eax, eax
        je done
        push 0x1
        mov ecx, eax
        call ext_00530290
    done:
        ret
    }
}

// [0x004F9C40] VMCSModes::DefaultImplementation::vfunc_54 (33 bytes)
extern "C" void ext_00530290();

extern "C" __declspec(naked) void __fastcall fn_004F9C40(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        call eax
        test eax, eax
        je done
        push 0x0
        mov ecx, eax
        call ext_00530290
    done:
        ret
    }
}

// [0x004FAAB0] VMCSModes::DefaultImplementation::vfunc_72 (114 bytes)
extern "C" void ext_005B11F0();
extern "C" void ext_00594000();
extern "C" void ext_00477FA0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004FAAB0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        mov ecx, dword ptr [ecx + 0x34]
        push ebx
        push esi
        call ext_005B11F0
        mov esi, eax
        call ext_00594000
        mov edx, dword ptr [esi]
        mov ebx, dword ptr [eax + 0x26C]
        mov eax, dword ptr [edx + 0x1C]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        je L_ret0
        mov edx, dword ptr [eax + 0x8]
        sub edx, ecx
        sar edx, 2
        je L_ret0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1C]
        push ebp
        push edi
        mov ecx, esi
        call edx
        mov ebp, dword ptr [mem_00925134]
        mov esi, eax
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_b
        call ebp
        cmp edi, dword ptr [esi + 0x8]
    L_b:
        jb L_c
        call ebp
    L_c:
        mov edi, dword ptr [edi]
        push edi
        mov ecx, ebx
        call ext_00477FA0
        pop edi
        pop ebp
        pop esi
        pop ebx
        pop ecx
        ret
    L_ret0:
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret
    }
}

// [0x004FA9F0] VMCSModes::DefaultImplementation::vfunc_140 (186 bytes)
extern "C" void ext_005B11F0();
extern "C" int mem_00924FE4;
extern "C" int mem_00925134;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __fastcall fn_004FA9F0(void* self) {
    __asm {
        push -1
        push 0x8909aa
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push ebx
        push esi
        mov dword ptr [esp + 0x8], 0
        mov ebx, dword ptr [esp + 0x20]
        push edi
        mov esi, ecx
        push 0x928b5d
        mov ecx, ebx
        mov dword ptr [esp + 0x20], 0
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        mov dword ptr [esp + 0x1c], 0
        mov dword ptr [esp + 0xc], 1
        call ext_005B11F0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1c]
        call eax
        mov edi, eax
        mov esi, dword ptr [edi + 0x4]
        test esi, esi
        je short L_004FAA94
        mov eax, dword ptr [edi + 0x8]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        je short L_004FAA94
        cmp esi, eax
        jbe short L_004FAA74
        call dword ptr [mem_00925134]
    L_004FAA74:
        cmp esi, dword ptr [edi + 0x8]
        jb short L_004FAA7F
        call dword ptr [mem_00925134]
    L_004FAA7F:
        mov esi, dword ptr [esi]
        test esi, esi
        je short L_004FAA94
        add esi, 0x490
        push esi
        mov ecx, ebx
        call dword ptr [mem_00924FDC]
    L_004FAA94:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}

// [0x004FAEA0] VMCSModes::DefaultImplementation::vfunc_43 (30 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FAEA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xac]
        pop esi
        jmp eax
    }
}

// [0x004FAF90] VMCSModes::DefaultImplementation::vfunc_109 (30 bytes)
extern "C" void ext_004667A0();

extern "C" void __fastcall fn_004FAF90(void* self) {
    typedef void (__thiscall *Callee)(void*, int);
    typedef void (__thiscall *VFn)(void*);
    void* a = *(void**)((char*)self + 0x4);
    ((Callee)ext_004667A0)(a, 1);
    void* b = *(void**)((char*)self + 0x4);
    void* c = *(void**)((char*)b + 0xc);
    void** vt = *(void***)c;
    ((VFn)vt[109])(c);
}

// [0x004FAFB0] VMCSModes::DefaultImplementation::vfunc_110 (30 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FAFB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1b8]
        pop esi
        jmp eax
    }
}

// [0x004FAFD0] VMCSModes::DefaultImplementation::vfunc_111 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FAFD0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1bc]
        pop esi
        jmp eax
    }
}

// [0x004FAFF0] VMCSModes::DefaultImplementation::vfunc_112 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FAFF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1c0]
        pop esi
        jmp eax
    }
}

// [0x004FB010] VMCSModes::DefaultImplementation::vfunc_113 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FB010(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1c4]
        pop esi
        jmp eax
    }
}

// [0x004FB3E0] VMCSModes::DefaultImplementation::vfunc_118 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FB3E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1d8]
        pop esi
        jmp eax
    }
}

// [0x004FB400] VMCSModes::DefaultImplementation::vfunc_119 (30 bytes)
extern "C" void ext_004667A0();

extern "C" void __fastcall fn_004FB400(void* self) {
    typedef void (__thiscall *Callee)(void*, int);
    typedef void (__thiscall *VFn)(void*);
    void* a = *(void**)((char*)self + 0x4);
    ((Callee)ext_004667A0)(a, 1);
    void* b = *(void**)((char*)self + 0x4);
    void* c = *(void**)((char*)b + 0xc);
    void** vt = *(void***)c;
    ((VFn)vt[119])(c);
}

// [0x004FB420] VMCSModes::DefaultImplementation::vfunc_114 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FB420(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov edx, dword ptr [edx + 0x1c8]
        jmp edx
    }
}

// [0x004FB440] VMCSModes::DefaultImplementation::vfunc_115 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FB440(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov edx, dword ptr [edx + 0x1cc]
        jmp edx
    }
}

// [0x004FB460] VMCSModes::DefaultImplementation::vfunc_116 (30 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FB460(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov edx, dword ptr [edx + 0x1d0]
        jmp edx
    }
}

// [0x004FB480] VMCSModes::DefaultImplementation::vfunc_117 (30 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FB480(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov edx, dword ptr [edx + 0x1d4]
        jmp edx
    }
}

// [0x004FB4A0] VMCSModes::DefaultImplementation::vfunc_121 (30 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FB4A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov edx, dword ptr [edx + 0x1e4]
        jmp edx
    }
}

// [0x004FB4C0] VMCSModes::DefaultImplementation::vfunc_122 (30 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FB4C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov edx, dword ptr [edx + 0x1e8]
        jmp edx
    }
}

// [0x004FB4E0] VMCSModes::DefaultImplementation::vfunc_123 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FB4E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov edx, dword ptr [edx + 0x1ec]
        jmp edx
    }
}

// [0x004FB500] VMCSModes::DefaultImplementation::vfunc_124 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FB500(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov edx, dword ptr [edx + 0x1f0]
        jmp edx
    }
}

// [0x004FB5E0] VMCSModes::DefaultImplementation::vfunc_129 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FB5E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x204]
        pop esi
        jmp eax
    }
}

// [0x004FB600] VMCSModes::DefaultImplementation::vfunc_130 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FB600(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov edx, dword ptr [edx + 0x208]
        jmp edx
    }
}

// [0x004FB620] VMCSModes::DefaultImplementation::vfunc_131 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FB620(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x20c]
        pop esi
        jmp eax
    }
}

// [0x004FB640] VMCSModes::DefaultImplementation::vfunc_120 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FB640(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1e0]
        pop esi
        jmp eax
    }
}

// [0x004FB3C0] VMCSModes::DefaultImplementation::vfunc_58 (30 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00468F90();
extern "C" __declspec(naked) void __fastcall fn_004FB3C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x8]
        push eax
        call ext_00468F90
        pop esi
        ret 0x4
    }
}

// [0x004FAE70] VMCSModes::DefaultImplementation::vfunc_35 (36 bytes)
extern "C" void ext_00472350();
extern "C" __declspec(naked) void __fastcall fn_004FAE70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf4]
        call edx
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        call ext_00472350
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        pop esi
        ret
    }
}

// [0x004FAEC0] VMCSModes::DefaultImplementation::vfunc_22 (37 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FAEC0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x8c]
        call edx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov edx, dword ptr [edx + 0x58]
        jmp edx
    }
}

// [0x004FAEF0] VMCSModes::DefaultImplementation::vfunc_23 (37 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FAEF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x8c]
        call edx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x5c]
        pop esi
        jmp eax
    }
}

// [0x004FAF20] VMCSModes::DefaultImplementation::vfunc_24 (37 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FAF20(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x8c]
        call edx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x60]
        pop esi
        jmp eax
    }
}

// [0x004FB520] VMCSModes::DefaultImplementation::vfunc_125 (38 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FB520(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov dword ptr [esp + 0x4], 0
        mov eax, dword ptr [edx + 0x1f4]
        jmp eax
    }
}

// [0x004FB550] VMCSModes::DefaultImplementation::vfunc_126 (38 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FB550(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov dword ptr [esp + 0x4], 0
        mov eax, dword ptr [edx + 0x1f8]
        jmp eax
    }
}

// [0x004FB580] VMCSModes::DefaultImplementation::vfunc_127 (38 bytes)
extern "C" void ext_004667A0();

extern "C" __declspec(naked) void __fastcall fn_004FB580(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov dword ptr [esp + 0x4], 0
        mov eax, dword ptr [edx + 0x1fc]
        jmp eax
    }
}

// [0x004FB5B0] VMCSModes::DefaultImplementation::vfunc_128 (38 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FB5B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        pop esi
        mov dword ptr [esp + 0x4], 0
        mov eax, dword ptr [edx + 0x200]
        jmp eax
    }
}

// [0x004FB0C0] VMCSModes::DefaultImplementation::vfunc_47 (47 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00530290();
extern "C" __declspec(naked) void __fastcall fn_004FB0C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        call eax
        test eax, eax
        pop esi
        je L_done_0FB0C0
        push 4
        mov ecx, eax
        call ext_00530290
L_done_0FB0C0:
        ret
    }
}

// [0x004FB0F0] VMCSModes::DefaultImplementation::vfunc_50 (47 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00530290();
extern "C" __declspec(naked) void __fastcall fn_004FB0F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        call eax
        test eax, eax
        pop esi
        je L_done_0FB0F0
        push 3
        mov ecx, eax
        call ext_00530290
    L_done_0FB0F0:
        ret
    }
}

// [0x004FB120] VMCSModes::DefaultImplementation::vfunc_51 (47 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00530290();
extern "C" __declspec(naked) void __fastcall fn_004FB120(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        call eax
        test eax, eax
        pop esi
        je L_done_0FB120
        push 2
        mov ecx, eax
        call ext_00530290
    L_done_0FB120:
        ret
    }
}

// [0x004FB150] VMCSModes::DefaultImplementation::vfunc_52 (47 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00530290();
extern "C" __declspec(naked) void __fastcall fn_004FB150(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        call eax
        test eax, eax
        pop esi
        je L_done_0FB150
        push 9
        mov ecx, eax
        call ext_00530290
    L_done_0FB150:
        ret
    }
}

// [0x004FB320] VMCSModes::DefaultImplementation::vfunc_44 (47 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00530290();
extern "C" __declspec(naked) void __fastcall fn_004FB320(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        call eax
        test eax, eax
        pop esi
        je L_done_04FB320
        push 7
        mov ecx, eax
        call ext_00530290
    L_done_04FB320:
        ret
    }
}

// [0x004FB080] VMCSModes::DefaultImplementation::vfunc_46 (61 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00530290();
extern "C" __declspec(naked) void __fastcall fn_004FB080(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x10c]
        call edx
        test al, al
        je L_done_0FB080
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        call eax
        test eax, eax
        je L_done_0FB080
        push 5
        mov ecx, eax
        call ext_00530290
    L_done_0FB080:
        pop esi
        ret
    }
}

// [0x004FAD60] VMCSModes::DefaultImplementation::vfunc_13 (66 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00594000();
extern "C" void ext_00493F60();
extern "C" int mem_00AEA98C;

extern "C" __declspec(naked) void __fastcall fn_004FAD60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf4]
        call edx
        mov ecx, dword ptr [esi + 0x4]
        push 0x2
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [edx + 0x34]
        push eax
        call edx
        call ext_00594000
        pop esi
        mov dword ptr [esp + 0x4], offset mem_00AEA98C
        lea ecx, [eax + 0x258]
        jmp ext_00493F60
    }
}

// [0x004FB030] VMCSModes::DefaultImplementation::vfunc_45 (69 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00469530();
extern "C" void ext_00530290();
extern "C" __declspec(naked) void __fastcall fn_004FB030(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf4]
        call edx
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        call eax
        test eax, eax
        je L_done_4FB030
        push 6
        mov ecx, eax
        call ext_00530290
    L_done_4FB030:
        mov ecx, dword ptr [esi + 0x8]
        push 0
        push 5
        call ext_00469530
        pop esi
        ret
    }
}

// [0x004FB180] VMCSModes::DefaultImplementation::vfunc_49 (200 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00472350();
extern "C" void ext_00530290();
extern "C" int mem_00AD89B4;

extern "C" __declspec(naked) void __fastcall fn_004FB180(void* self) {
    __asm {
        push -1
        push 0x88fe68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf4]
        push edi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x8c]
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi + 0x8]
        mov edi, dword ptr [eax + 0x14]
        test edi, edi
        mov dword ptr [esp + 0x8], edi
        mov byte ptr [esp + 0xc], 0
        je skip_guard
        cmp dword ptr [mem_00AD89B4], 0
        jne inc_count
        mov ecx, edi
        mov byte ptr [edi + 0x153], 1
        call ext_00472350
inc_count:
        add dword ptr [mem_00AD89B4], 1
skip_guard:
        mov ecx, dword ptr [esi + 0x4]
        push 1
        mov dword ptr [esp + 0x1c], 0
        call ext_004667A0
        mov ecx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        call eax
        mov esi, eax
        test esi, esi
        je no_obj
        push 6
        mov ecx, esi
        call ext_00530290
        mov ecx, dword ptr [esi + 0x4c]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x14]
        push 1
        call eax
no_obj:
        test edi, edi
        je epilog
        sub dword ptr [mem_00AD89B4], 1
        jne epilog
        mov byte ptr [edi + 0x153], 0
epilog:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x004FB250] VMCSModes::DefaultImplementation::vfunc_48 (200 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FB250(void* self) {
    __asm {
        push -1
        push 0x88fe68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf4]
        push edi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x8c]
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi + 0x8]
        mov edi, dword ptr [eax + 0x14]
        test edi, edi
        mov dword ptr [esp + 0x8], edi
        mov byte ptr [esp + 0xc], 0
        je skip_guard
        cmp dword ptr [mem_00AD89B4], 0
        jne inc_count
        mov ecx, edi
        mov byte ptr [edi + 0x153], 1
        call ext_00472350
inc_count:
        add dword ptr [mem_00AD89B4], 1
skip_guard:
        mov ecx, dword ptr [esi + 0x4]
        push 1
        mov dword ptr [esp + 0x1c], 0
        call ext_004667A0
        mov ecx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        call eax
        mov esi, eax
        test esi, esi
        je no_obj
        push 6
        mov ecx, esi
        call ext_00530290
        mov ecx, dword ptr [esi + 0x4c]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x14]
        push 0
        call eax
no_obj:
        test edi, edi
        je epilog
        sub dword ptr [mem_00AD89B4], 1
        jne epilog
        mov byte ptr [edi + 0x153], 0
epilog:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x004FA900] VMCSModes::DefaultImplementation::vfunc_139 (225 bytes)
extern "C" void ext_00584A10();
extern "C" void ext_005B11F0();
extern "C" int mem_00924FE4;
extern "C" int mem_00925134;
extern "C" int mem_00924FC8;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __fastcall fn_004FA900(void* self) {
    __asm {
        push -1
        push 0x8909aa
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push ebx
        push esi
        mov dword ptr [esp + 0x8], 0
        mov ebx, dword ptr [esp + 0x20]
        push edi
        mov esi, ecx
        push 0x928b5d
        mov ecx, ebx
        mov dword ptr [esp + 0x20], 0
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        mov dword ptr [esp + 0x1c], 0
        mov dword ptr [esp + 0xc], 1
        call ext_005B11F0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1c]
        call eax
        mov edi, eax
        mov esi, dword ptr [edi + 0x4]
        test esi, esi
        je short L_004FA9CB
        mov eax, dword ptr [edi + 0x8]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        je short L_004FA9CB
        cmp esi, eax
        jbe short L_004FA984
        call dword ptr [mem_00925134]
    L_004FA984:
        cmp esi, dword ptr [edi + 0x8]
        jb short L_004FA98F
        call dword ptr [mem_00925134]
    L_004FA98F:
        mov esi, dword ptr [esi]
        test esi, esi
        je short L_004FA9CB
        add esi, 0x4
        mov ecx, esi
        call ext_00584A10
        push 0x928b5d
        push eax
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        mov ecx, esi
        je short L_004FA9BB
        call ext_00584A10
        jmp short L_004FA9C2
    L_004FA9BB:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x24]
        call eax
    L_004FA9C2:
        push eax
        mov ecx, ebx
        call dword ptr [mem_00924FDC]
    L_004FA9CB:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}

// [0x004F9F00] VMCSModes::DefaultImplementation::vfunc_12 (404 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_00594000();
extern "C" void ext_00664560();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FD8;
extern "C" int mem_00924ED0;

extern "C" __declspec(naked) void __fastcall fn_004F9F00(void* self, int edx_unused, void* a1, void* a2, int a3) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8908f4
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x54
        push ebp
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
        mov ebp, dword ptr [esp + 0x70]
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x80]
        mov ecx, ebp
        call eax
        test al, al
        je L_ret_false
        cmp byte ptr [esp + 0x74], 0
        je L_ret_false
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 0x6c]
        mov edx, dword ptr [edx + 0x2c]
        push 0
        push ebp
        push eax
        mov ecx, edi
        call edx
        pop edi
        pop ebp
        mov ecx, dword ptr [esp + 0x54]
        mov dword ptr fs:[0], ecx
        add esp, 0x60
        ret 0xc
L_ret_false:
        push ebx
        push esi
        mov ebx, 1
        mov byte ptr [ebp + 0x1ba], 0
        mov esi, ebx
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        cmp dword ptr [eax + 0x20], ebx
        jb L_end
        nop
L_loop:
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x6c], 0
        call dword ptr [mem_00924FE8]
        push 0x92ab70
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x70], bl
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x2c]
        push eax
        mov eax, dword ptr [esp + 0x78]
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x50]
        push edx
        push eax
        mov byte ptr [esp + 0x7c], 2
        call ext_00664560
        add esp, 0x10
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x6c], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x48]
        push esi
        push ecx
        call ext_00404F00
        add esp, 0x8
        push eax
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x70], 3
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x6c], bl
        call dword ptr [mem_00924FF4]
        push 0x92ab70
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924ED0]
        lea edx, [esp + 0x2c]
        push edx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FD8]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x2c]
        push esi
        push ebp
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        call edx
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x6c], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x6c], -1
        call dword ptr [mem_00924FF4]
        add esi, ebx
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        cmp esi, dword ptr [eax + 0x20]
        jbe L_loop
L_end:
        mov ecx, dword ptr [esp + 0x64]
        pop esi
        pop ebx
        pop edi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x60
        ret 0xc
    }
}

extern "C" void ext_00469040();
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" void ext_00472420();
extern "C" void ext_00472F70();
extern "C" void ext_00594000();
extern "C" int mem_00AD89B4;
extern "C" int mem_0093BED0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

// [0x004F9970] VMCSModes::DefaultImplementation::vfunc_6 (290 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F9970(void* self, int edx_unused, int arg0) {
    __asm {
        push -1
        push 0x8908a1
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        push edi
        mov edi, dword ptr [eax + 0x14]
        test edi, edi
        mov dword ptr [esp + 0x8], edi
        mov byte ptr [esp + 0xc], 0x1
        je L_4f99bd
        cmp dword ptr [mem_00AD89B4], 0x0
        jne L_4f99b6
        mov ecx, edi
        mov byte ptr [edi + 0x153], 0x1
        call ext_00472350
    L_4f99b6:
        add dword ptr [mem_00AD89B4], 0x1
    L_4f99bd:
        mov ecx, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x34], 0x0
        call ext_00469040
        mov ecx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
        mov ecx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ecx + 0x14]
        call ext_00472420
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov ecx, dword ptr [eax + 0x24]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x3c]
        mov edx, dword ptr [edx + 0x20]
        push 0x0
        push eax
        call edx
        mov eax, dword ptr [mem_0093BED0]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE4]
        mov byte ptr [esp + 0x34], 0x1
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov eax, dword ptr [eax + 0x24]
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0x5c]
        lea ecx, [eax + 0x4]
        lea eax, [esp + 0x10]
        push eax
        call edx
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x34], 0x0
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        call ext_00472F70
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xac]
        mov ecx, esi
        call eax
        test edi, edi
        mov dword ptr [esp + 0x34], 0xffffffff
        je L_4f9a7f
        sub dword ptr [mem_00AD89B4], 0x1
        jne L_4f9a7f
        mov ecx, edi
        mov byte ptr [edi + 0x153], 0x0
        call ext_0046F930
    L_4f9a7f:
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x30
        ret 0x4
    }
}

extern "C" void ext_004925B0();
extern "C" void ext_004938E0();

// [0x004F9AE0] VMCSModes::DefaultImplementation::vfunc_60 (65 bytes)
extern "C" void __fastcall fn_004F9AE0(void* self, int edx_unused, int a1) {
    char* base = ((char* (__cdecl*)())ext_00594000)();
    void* obj = ((void* (__thiscall*)(void*))ext_006AD940)(*(void**)(base + 0x26c));
    if (!((bool (__thiscall*)(void*, int))ext_004925B0)(obj, a1)) {
        typedef void (__thiscall *VFunc)(void*);
        (*(VFunc*)(*(char**)self + 0x90))(self);
        ((void (__thiscall*)(void*, int))ext_004938E0)(obj, a1);
    }
}

// [0x004FA270] VMCSModes::DefaultImplementation::vfunc_135 (58 bytes)
extern "C" void ext_005B11F0();
extern "C" void ext_004E9B30();

extern "C" __declspec(naked) void __fastcall fn_004FA270(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        mov ecx, dword ptr [ecx + 0x34]
        call ext_005B11F0
        mov ecx, eax
        call ext_004E9B30
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        __asm _emit 0x75 __asm _emit 0x0C // jne +0x0C
        xor eax, eax
        xor edx, edx
        test eax, eax
        setne dl
        mov al, dl
        ret
        mov eax, dword ptr [eax + 0x8]
        sub eax, ecx
        sar eax, 0x2
        xor edx, edx
        test eax, eax
        setne dl
        mov al, dl
        ret
    }
}

extern "C" void ext_004667A0();
extern "C" void ext_004FD750();

// [0x004FB350] VMCSModes::DefaultImplementation::vfunc_57 (80 bytes)
extern "C" int __fastcall fn_004FB350(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    if (!a1) {
        return 0;
    }
    ((void (__thiscall*)(void*, int))ext_004667A0)(*(void**)((char*)self + 4), 1);
    ((void (__thiscall*)(void*))(*(void***)self)[0xd4 / 4])(self);
    return ((int (__cdecl*)(int, int, int, int, int, int))ext_004FD750)(a2, a3, a4, a5, a1, a6);
}

extern "C" void ext_0041A920();
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" void ext_00492540();
extern "C" void ext_00492590();
extern "C" void ext_0052F600();
extern "C" void ext_00594000();
extern "C" void ext_005B11F0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006AD190();
extern "C" void ext_006AD940();
extern "C" int mem_00AD89B4;

// [0x004FBCA0] VMCSModes::DefaultImplementation::vfunc_5 (483 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FBCA0(void* self) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x890a30
        push eax
        mov fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        mov eax, [esi + 8]
        mov eax, [eax + 0x14]
        mov ecx, [eax + 0x30]
        mov edx, [ecx]
        mov eax, [edx + 0xb4]
        push edi
        call eax
        xor edi, edi
        cmp eax, edi
        je L_ret
        push ebx
        push ebp
        mov ebp, [eax + 0x38]
        cmp ebp, 6
        sete bl
        call ext_00594000
        mov ecx, [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        call ext_00492540
        test al, al
        jne L_1
        test bl, bl
        je L_pop_ret
    L_1:
        mov ecx, [esi + 8]
        mov ebx, [ecx + 0x14]
        cmp ebx, edi
        mov [esp + 0x14], ebx
        mov byte ptr [esp + 0x18], 1
        je L_2
        cmp dword ptr [mem_00AD89B4], edi
        jne L_3
        mov ecx, ebx
        mov byte ptr [ebx + 0x153], 1
        call ext_00472350
    L_3:
        add dword ptr [mem_00AD89B4], 1
    L_2:
        mov edx, [esi]
        mov eax, [edx + 0xb4]
        mov ecx, esi
        mov [esp + 0x34], edi
        call eax
        call ext_00594000
        mov ecx, [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        call ext_00492590
        test al, al
        je L_else
        mov [esp + 0x20], edi
        mov [esp + 0x24], edi
        mov [esp + 0x28], edi
        mov byte ptr [esp + 0x34], 1
        call ext_00594000
        mov ecx, [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        call ext_0052F600
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x20]
        mov [esp + 0x14], eax
        call ext_0041A920
        mov edx, [esi + 8]
        mov ecx, [edx + 0x14]
        call ext_006AD190
        mov edx, [eax]
        mov edx, [edx + 0x98]
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, eax
        call edx
        mov eax, [esp + 0x20]
        cmp eax, edi
        mov byte ptr [esp + 0x34], 0
        je L_vec_done
        push eax
        call ext_006A5C5C
        add esp, 4
    L_vec_done:
        mov [esp + 0x20], edi
        mov [esp + 0x24], edi
        mov [esp + 0x28], edi
        jmp L_switch
    L_else:
        mov eax, [esi + 8]
        mov eax, [eax + 0x14]
        mov ecx, [eax + 0x34]
        call ext_005B11F0
        mov edx, [eax]
        mov ecx, eax
        mov eax, [edx + 0x1c]
        call eax
        mov ecx, [esi + 8]
        mov ecx, [ecx + 0x14]
        mov edi, eax
        call ext_006AD190
        mov edx, [eax]
        mov ecx, eax
        mov eax, [edx + 0x98]
        push edi
        call eax
        xor edi, edi
    L_switch:
        cmp ebp, 1
        jne L_c2
        mov edx, [esi]
        mov eax, [edx + 0xd4]
        jmp L_call_mode
    L_c2:
        cmp ebp, 2
        jne L_c3
        mov edx, [esi]
        mov eax, [edx + 0xcc]
        jmp L_call_mode
    L_c3:
        cmp ebp, 3
        jne L_c4
        mov edx, [esi]
        mov eax, [edx + 0xc8]
        jmp L_call_mode
    L_c4:
        cmp ebp, 4
        jne L_guard_dtor
        mov edx, [esi]
        mov eax, [edx + 0xbc]
    L_call_mode:
        mov ecx, esi
        call eax
    L_guard_dtor:
        cmp ebx, edi
        mov dword ptr [esp + 0x34], -1
        je L_pop_ret
        sub dword ptr [mem_00AD89B4], 1
        jne L_pop_ret
        mov ecx, ebx
        mov byte ptr [ebx + 0x153], 0
        call ext_0046F930
    L_pop_ret:
        pop ebp
        pop ebx
    L_ret:
        mov ecx, [esp + 0x24]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 0x28
        ret
    }
}

extern "C" void ext_005864C0();
extern "C" void ext_005869C0();

// [0x004F9C70] VMCSModes::DefaultImplementation::vfunc_99 (137 bytes)
extern "C" void __fastcall fn_004F9C70(void* self, void* edx_unused, void* a1, int a2) {
    if (!a1) return;
    char* obj = (char*)((void* (*)())ext_00594000)();
    char* ecx_val = *(char**)(obj + 0x26c);
    void* ebx_val = obj + 0x168;
    void* esi_val = ecx_val ? (ecx_val + 8) : 0;
    if (a2 == 0) {
        ((void (__thiscall*)(void*, void*))ext_005864C0)(a1, esi_val);
        void** vtbl = *(void***)((char*)a1 + 8);
        ((void (__thiscall*)(void*, void*, int, void*, int))vtbl[8])((char*)a1 + 8, esi_val, a2, ebx_val, a2);
    } else {
        float f = 1.0f / *(float*)(obj + 0x234) * a2;
        ((void (__thiscall*)(void*, void*, float))ext_005869C0)(a1, esi_val, f);
        void** vtbl = *(void***)((char*)a1 + 8);
        ((void (__thiscall*)(void*, void*, int, int, void*, int))vtbl[9])((char*)a1 + 8, esi_val, a2, 0, ebx_val, 0);
    }
}

// [0x004F9D30] VMCSModes::DefaultImplementation::vfunc_100 (274 bytes)
extern "C" void ext_005864C0();
extern "C" void ext_00586930();
extern "C" void ext_005869C0();
extern "C" void ext_00594000();
extern "C" int mem_00A3FFD8;

extern "C" __declspec(naked) void __fastcall fn_004F9D30(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        test ebx, ebx
        je L_epilog1
        push esi
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        test eax, eax
        je L_zero_esi
        lea esi, [eax + 0x8]
        jmp L_have_esi
    L_zero_esi:
        xor esi, esi
    L_have_esi:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0x20]
        jne L_a2_nonzero
        cmp edi, -1
        jne L_a2_nonzero
        push esi
        mov ecx, ebx
        call ext_005864C0
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 0xc
    L_a2_nonzero:
        cmp eax, edi
        jne L_ne
        call ext_00594000
        fld dword ptr [eax + 0x234]
        fld1
        lea eax, [esp + 0xc]
        __asm _emit 0xDE __asm _emit 0xF1
        push eax
        fimul dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x24]
        fld qword ptr [mem_00A3FFD8]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x24]
        fld st(0)
        fld dword ptr [esp + 0x20]
        fld st(0)
        __asm _emit 0xDE __asm _emit 0xEA
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        faddp st(1), st
        jmp L_common
    L_ne:
        call ext_00594000
        fld dword ptr [eax + 0x234]
        test edi, edi
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fld1
        __asm _emit 0xDE __asm _emit 0xF1
        fild dword ptr [esp + 0x1c]
        fmul st, st(1)
        fstp dword ptr [esp + 0x18]
        jge L_pos
        push ecx
        fstp st(0)
        fld dword ptr [esp + 0x1c]
        mov ecx, ebx
        fstp dword ptr [esp]
        push esi
        call ext_005869C0
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 0xc
    L_pos:
        fld qword ptr [mem_00A3FFD8]
        lea ecx, [esp + 0xc]
        fstp dword ptr [esp + 0x1c]
        push ecx
        fld dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x20]
        fld st(0)
        __asm _emit 0xDE __asm _emit 0xEA
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fild dword ptr [esp + 0x24]
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x20]
        fadd dword ptr [esp + 0x20]
    L_common:
        push esi
        fstp dword ptr [esp + 0x18]
        mov ecx, ebx
        call ext_00586930
        pop edi
        pop esi
    L_epilog1:
        pop ebx
        add esp, 8
        ret 0xc
    }
}

extern "C" void ext_00435D00();
extern "C" void ext_00469530();
extern "C" void ext_00472350();
extern "C" void ext_00472F70();
extern "C" void ext_00474430();
extern "C" void ext_00493F80();
extern "C" void ext_00594000();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;

// [0x004FA0A0] VMCSModes::DefaultImplementation::vfunc_36 (207 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FA0A0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x890900
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], 0
        call ext_00472350
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, esi
        call eax
        call ext_00594000
        lea ecx, [eax + 0x258]
        call ext_00493F80
        mov ecx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ecx + 0x14]
        call ext_00474430
        mov dword ptr [ebp - 0x4], 0xffffffff
        jmp cleanup
    catch_handler:
        mov edx, dword ptr [ebp - 0x14]
        mov eax, dword ptr [edx + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        call ext_00472F70
        mov ecx, dword ptr [mem_00924E90]
        mov edx, dword ptr [ebp - 0x18]
        mov eax, dword ptr [mem_00924FA0]
        push ecx
        add edx, 0xc
        push edx
        push 0x94e02c
        push eax
        call ext_00435D00
        add esp, 0x8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, 0x4fa14f
        ret
        mov esi, dword ptr [ebp - 0x14]
    cleanup:
        mov ecx, dword ptr [esi + 0x8]
        push 0x0
        push 0x5
        call ext_00469530
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x004FC160] VMCSModes::DefaultImplementation::vfunc_7 (286 bytes)
extern "C" void ext_00466910();
extern "C" void ext_00466F00();
extern "C" void ext_00472350();
extern "C" void ext_00594000();
extern "C" void ext_00662120();
extern "C" void ext_00663110();
extern "C" void ext_00663DB0();
extern "C" int mem_00AD89B4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004FC160(void* self, int edx_unused, void* arg) {
    __asm {
        push -1
        push 0x890a9f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x88
        mov eax, dword ptr [ecx + 0x8]
        push ebx
        push edi
        mov edi, dword ptr [eax + 0x14]
        test edi, edi
        mov dword ptr [esp + 0x8], edi
        mov byte ptr [esp + 0xc], 0
        mov ebx, 1
        je loc_004FC1B1
        cmp dword ptr [mem_00AD89B4], 0
        jne loc_004FC1AB
        mov ecx, edi
        mov byte ptr [edi + 0x153], bl
        call ext_00472350
loc_004FC1AB:
        add dword ptr [mem_00AD89B4], ebx
loc_004FC1B1:
        push esi
        mov dword ptr [esp + 0x9c], 0
        call ext_00594000
        lea esi, [eax + 0x168]
        push esi
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x34], esi
        call ext_00466F00
        mov ecx, esi
        mov byte ptr [esp + 0x9c], bl
        call ext_00662120
        mov esi, dword ptr [esp + 0xa4]
        push esi
        call ext_00663DB0
        add esp, 4
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE8]
        mov byte ptr [esp + 0x9c], 2
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov ecx, dword ptr [eax + 0x24]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        push ebx
        lea eax, [esp + 0x18]
        push eax
        call edx
        lea eax, [esp + 0x14]
        push eax
        push esi
        call ext_00663110
        add esp, 8
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x9c], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x9c], 0
        call ext_00466910
        test edi, edi
        pop esi
        je loc_004FC265
        sub dword ptr [mem_00AD89B4], ebx
        jne loc_004FC265
        mov byte ptr [edi + 0x153], 0
loc_004FC265:
        mov ecx, dword ptr [esp + 0x90]
        pop edi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x94
        ret 4
    }
}

// [0x004FAC40] VMCSModes::DefaultImplementation::vfunc_8 (288 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00469040();
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" void ext_00472420();
extern "C" void ext_00472F70();
extern "C" void ext_00594000();
extern "C" void ext_005A9110();
extern "C" void ext_005A9970();
extern "C" void ext_0065C830();
extern "C" int mem_00AD89B4;

extern "C" __declspec(naked) void __fastcall fn_004FAC40(void* self, int edx_unused, void* arg0) {
    __asm {
        push -1
        push 0x8909d6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x664
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        push edi
        mov edi, dword ptr [eax + 0x14]
        test edi, edi
        mov dword ptr [esp + 0x8], edi
        mov byte ptr [esp + 0xc], 1
        je loc_004FAC90
        cmp dword ptr [mem_00AD89B4], 0
        jne loc_004FAC89
        mov ecx, edi
        mov byte ptr [edi + 0x153], 1
        call ext_00472350
loc_004FAC89:
        add dword ptr [mem_00AD89B4], 1
loc_004FAC90:
        mov ecx, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x674], 0
        call ext_00469040
        mov ecx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
        mov ecx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ecx + 0x14]
        call ext_00472420
        lea ecx, [esp + 0x10]
        call ext_005A9110
        mov edx, dword ptr [esp + 0x67c]
        push 0
        push edx
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x67c], 1
        call ext_0065C830
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov ecx, dword ptr [eax + 0x24]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x4c]
        lea edx, [esp + 0x10]
        push edx
        call eax
        mov ecx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ecx + 0x14]
        call ext_00472F70
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x674], 0
        call ext_005A9970
        test edi, edi
        mov dword ptr [esp + 0x674], 0xffffffff
        je loc_004FAD47
        sub dword ptr [mem_00AD89B4], 1
        jne loc_004FAD47
        mov ecx, edi
        mov byte ptr [edi + 0x153], 0
        call ext_0046F930
loc_004FAD47:
        mov ecx, dword ptr [esp + 0x66c]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x670
        ret 4
    }
}

// [0x004FA750] VMCSModes::DefaultImplementation::vfunc_4 (422 bytes)
extern "C" void ext_00472350();
extern "C" void ext_00594000();
extern "C" void ext_005A3DF0();
extern "C" void ext_005B0CA0();
extern "C" void ext_005B0D90();
extern "C" void ext_005B11F0();
extern "C" void ext_0065C6D0();
extern "C" void ext_0065D120();
extern "C" void ext_00662F80();
extern "C" int mem_00AD89B4;
extern "C" int mem_00925134;
extern "C" int mem_00B40640;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004FA750(void* self) {
    __asm {
        push -1
        push 0x89097e
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0xc8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        mov ebp, dword ptr [eax + 0x14]
        test ebp, ebp
        mov dword ptr [esp + 0x10], ebp
        mov byte ptr [esp + 0x14], 0x0
        je L_skip1
        cmp dword ptr [mem_00AD89B4], 0x0
        jne L_skip2
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 0x1
        call ext_00472350
L_skip2:
        add dword ptr [mem_00AD89B4], 0x1
L_skip1:
        mov dword ptr [esp + 0xdc], 0x0
        call ext_00594000
        lea ecx, [eax + 0xfc]
        call ext_0065D120
        mov ecx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        call ext_005B11F0
        lea ecx, [esp + 0x50]
        mov esi, eax
        call ext_005B0CA0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x1c]
        mov ecx, esi
        mov byte ptr [esp + 0xdc], 0x1
        call eax
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        je L_else
        mov edx, dword ptr [eax + 0x8]
        sub edx, ecx
        sar edx, 0x2
        je L_else
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c]
        push edi
        mov ecx, esi
        call edx
        mov ebx, dword ptr [mem_00925134]
        mov esi, eax
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_chk1
        call ebx
        cmp edi, dword ptr [esi + 0x8]
L_chk1:
        jb L_chk2
        call ebx
L_chk2:
        mov eax, dword ptr [mem_00B40640]
        push eax
        lea ecx, [esp + 0x58]
        push ecx
        mov ecx, dword ptr [edi]
        call ext_005A3DF0
        mov edx, dword ptr [esp + 0xe8]
        push 0x1
        push edx
        lea ecx, [esp + 0x5c]
        call ext_0065C6D0
        lea ecx, [esp + 0x54]
        mov byte ptr [esp + 0xe0], 0x0
        call ext_005B0D90
        pop edi
        jmp L_end
L_else:
        push 0x94e09c
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924FE4]
        mov bl, 0x2
        push 0x94e088
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0xe0], bl
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x34]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        mov byte ptr [esp + 0xe4], 0x3
        call ext_00662F80
        add esp, 0x8
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0xdc], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0xdc], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0xdc], 0x0
        call ext_005B0D90
L_end:
        test ebp, ebp
        je L_ret
        sub dword ptr [mem_00AD89B4], 0x1
        jne L_ret
        mov byte ptr [ebp + 0x153], 0x0
L_ret:
        mov ecx, dword ptr [esp + 0xd4]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xd4
        ret 0x4
    }
}

// [0x004FBF60] VMCSModes::DefaultImplementation::vfunc_1 (501 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00466870();
extern "C" void ext_00466F00();
extern "C" void ext_00469000();
extern "C" void ext_00469170();
extern "C" void ext_00472350();
extern "C" void ext_004A6970();
extern "C" void ext_004AEC60();
extern "C" void ext_00594000();
extern "C" void ext_00594710();
extern "C" void ext_0059B5A0();
extern "C" void ext_006619D0();
extern "C" void ext_00662120();
extern "C" void ext_006690D0();
extern "C" void ext_00669C00();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6E9E();
extern "C" int mem_00AD89B4;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004FBF60(void* self) {
    __asm {
        push -1
        push 0890A6Eh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8Ch
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 14h]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr [esp + 18h], ecx
        mov byte ptr [esp + 1Ch], bl
        je L_4FBFAE
        cmp dword ptr [mem_00AD89B4], ebx
        jne L_4FBFA7
        mov byte ptr [ecx + 153h], 1
        call ext_00472350
L_4FBFA7:
        add dword ptr [mem_00AD89B4], 1
L_4FBFAE:
        push esi
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 2Ch]
        mov dword ptr [esp + 0A0h], ebx
        call ext_004AEC60
        test al, al
        jne L_4FC0AD
        mov ecx, dword ptr [ebp + 8]
        push edi
        call ext_00469170
        push eax
        lea ecx, [esp + 2Ch]
        call ext_004A6970
        mov dword ptr [esp + 14h], ebx
        mov dword ptr [esp + 18h], ebx
        mov dword ptr [esp + 1Ch], ebx
        mov edi, dword ptr [esp + 30h]
        mov esi, dword ptr [esp + 2Ch]
        cmp esi, edi
        mov byte ptr [esp + 0A4h], 2
        jbe L_4FC002
        call dword ptr [mem_00925134]
L_4FC002:
        cmp dword ptr [esp + 2Ch], edi
        jbe L_4FC00E
        call dword ptr [mem_00925134]
L_4FC00E:
        cmp esi, edi
        je L_4FC069
        jb L_4FC01A
        call dword ptr [mem_00925134]
L_4FC01A:
        mov edx, dword ptr [esi]
        push ebx
        push 0A2E914h
        push 0A2E2D8h
        push ebx
        push edx
        call ext_006A6E9E
        add esp, 14h
        cmp eax, ebx
        je L_4FC046
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0F8h]
        call eax
        cmp eax, 6
        je L_4FC05A
L_4FC046:
        cmp esi, edi
        jb L_4FC050
        call dword ptr [mem_00925134]
L_4FC050:
        push esi
        lea ecx, [esp + 14h]
        call ext_0041A920
L_4FC05A:
        cmp esi, edi
        jb L_4FC064
        call dword ptr [mem_00925134]
L_4FC064:
        add esi, 4
        jmp L_4FC002
L_4FC069:
        push ebx
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        call ext_00469000
        mov eax, dword ptr [esp + 14h]
        cmp eax, ebx
        pop edi
        je L_4FC089
        push eax
        call ext_006A5C5C
        add esp, 4
L_4FC089:
        mov eax, dword ptr [esp + 28h]
        cmp eax, ebx
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [esp + 14h], ebx
        mov dword ptr [esp + 18h], ebx
        mov byte ptr [esp + 0A0h], bl
        je L_4FC0AD
        push eax
        call ext_006A5C5C
        add esp, 4
L_4FC0AD:
        call ext_00594000
        lea esi, [eax + 168h]
        push esi
        lea ecx, [esp + 3Ch]
        mov dword ptr [esp + 38h], esi
        call ext_00466F00
        mov byte ptr [esp + 0A0h], 3
        call ext_00594000
        mov ecx, eax
        call ext_0059B5A0
        call ext_00594000
        mov ecx, eax
        call ext_00594710
        mov ecx, esi
        call ext_00662120
        call ext_006690D0
        mov ecx, eax
        call ext_00669C00
        mov ecx, dword ptr [esp + 34h]
        lea edx, [esp + 38h]
        push edx
        mov byte ptr [esp + 0A4h], 4
        call ext_006619D0
        mov eax, dword ptr [esp + 34h]
        lea ecx, [esp + 38h]
        mov byte ptr [eax], 1
        mov byte ptr [esp + 0A0h], bl
        call ext_00466870
        mov eax, dword ptr [esp + 1Ch]
        cmp eax, ebx
        pop esi
        je L_4FC13E
        sub dword ptr [mem_00AD89B4], 1
        jne L_4FC13E
        mov byte ptr [eax + 153h], bl
L_4FC13E:
        mov ecx, dword ptr [esp + 94h]
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 98h
        ret
    }
}
