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
