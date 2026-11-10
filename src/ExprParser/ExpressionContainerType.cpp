// Decompiled translation unit: src/ExprParser/ExpressionContainerType.cpp

// [0x00699990] ExprParser::ExpressionContainerType::vfunc_21 (20 bytes)
extern "C" void ext_006997E0();
extern "C" void ext_00699930();

extern "C" int __fastcall fn_00699990(void* self, int edx_unused, int a1) {
    void* p = ((void* (__stdcall *)(int))ext_006997E0)(a1);
    return ((int (__fastcall *)(void*))ext_00699930)(p);
}

extern "C" void ext_006999B0();

// [0x00670CB0] ExprParser::ExpressionContainerType::vfunc_1 (24 bytes)
// Reads one stack arg, passes it to ext_006999B0 (stdcall), then tail-dispatches
// through the returned object's vtable slot 1 with the arg replaced by the result.
extern "C" __declspec(naked) void __cdecl fn_00670CB0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006999B0
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 4]
        jmp eax
    }
}

// [0x00670CD0] ExprParser::ExpressionContainerType::vfunc_2 (24 bytes)
// Reads one stack arg, passes it to ext_006999B0 (stdcall), then tail-dispatches
// through the returned object's vtable slot 2 with the arg replaced by the result.
extern "C" __declspec(naked) void __cdecl fn_00670CD0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006999B0
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 8]
        jmp eax
    }
}

// [0x00670CF0] ExprParser::ExpressionContainerType::vfunc_3 (24 bytes)
// Reads one stack arg, passes it to ext_006999B0 (stdcall), then tail-dispatches
// through the returned object's vtable slot 3 with the arg replaced by the result.
extern "C" __declspec(naked) void __cdecl fn_00670CF0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006999B0
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0xc]
        jmp eax
    }
}

// [0x00670D40] ExprParser::ExpressionContainerType::vfunc_5 (24 bytes)
// Reads one stack arg, passes it to ext_006999B0 (stdcall), then tail-dispatches
// through the returned object's vtable slot 5 with the arg replaced by the result.
extern "C" __declspec(naked) void __cdecl fn_00670D40(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006999B0
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0x14]
        jmp eax
    }
}

// [0x00670D60] ExprParser::ExpressionContainerType::vfunc_6 (24 bytes)
// Reads one stack arg, passes it to ext_006999B0 (stdcall), then tail-dispatches
// through the returned object's vtable slot 6 with the arg replaced by the result.
extern "C" __declspec(naked) void __cdecl fn_00670D60(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006999B0
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0x18]
        jmp eax
    }
}

// [0x00699090] ExprParser::ExpressionContainerType::vfunc_30 (35 bytes)
// Releases the ref-counted pointer held at *a1 (stdcall-style, ret 4): if non-null,
// decrement its refcount (+0x4); on reaching zero, call its vtable[0] (deleting dtor, arg 1).
// Then clear *a1.
extern "C" void __fastcall fn_00699090(void* self, int edx_unused, void** a1) {
    struct RefObj {
        virtual void scalar_delete(int flags) = 0;
        int refcount;
    };
    RefObj* p = (RefObj*)*a1;
    if (p) {
        if (--p->refcount == 0) {
            p->scalar_delete(1);
        }
    }
    *a1 = 0;
}

// [0x00699220] ExprParser::ExpressionContainerType::vfunc_29 (49 bytes)
extern "C" void ext_00699180();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_00699220(void* self, int edx_unused, void** out) {
    __asm {
        push 0Ch
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je L1
        mov ecx, eax
        call ext_00699180
        mov ecx, dword ptr [esp + 4]
        add dword ptr [eax + 4], 1
        mov dword ptr [ecx], eax
        ret 4
    L1:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        add dword ptr [eax + 4], 1
        mov dword ptr [ecx], eax
        ret 4
    }
}

// [0x00699100] ExprParser::ExpressionContainerType::vfunc_31 (56 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_00699100(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 0x60]
        push 0
        push 0xa2e1fc
        push 0xa2e2f8
        push 0
        push edx
        call eax
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je done_00699100
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 4]
        push ecx
        mov ecx, eax
        call edx
    done_00699100:
        ret 8
    }
}

// [0x00699140] ExprParser::ExpressionContainerType::vfunc_32 (56 bytes)
// Calls vtable slot 24 on self with a1 (thiscall, ret 4), dynamic_casts the result via
// __RTDynamicCast(result, 0, 0xA2E2F8, 0xA2E1FC, 0). If non-null, calls its vtable slot 3
// with a2 (thiscall, ret 4). Returns with ret 8.
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_00699140(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [eax + 0x60]
        push 0
        push 0A2E1FCh
        push 0A2E2F8h
        push 0
        push edx
        call eax
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_done
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xc]
        push ecx
        mov ecx, eax
        call edx
    L_done:
        ret 0x8
    }
}
