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

// [0x00670D10] ExprParser::ExpressionContainerType::vfunc_4 (39 bytes)
extern "C" void ext_0041CEB0();

extern "C" __declspec(naked) int __fastcall fn_00670D10(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        push eax
        mov dword ptr [esp + 0xc], 0
        call ext_006999B0
        mov ecx, eax
        call ext_0041CEB0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0067A7D0] ExprParser::ExpressionContainerType::vfunc_43 (66 bytes)
// Two stack args (both objects); calls vtable slot 1 on arg1 (float result),
// then vtable slot 1 on arg2 and adds it, then tail-dispatches slot 7 (0x1c)
// on arg1's member with the sum. Returns with ret 8.
extern "C" __declspec(naked) void __fastcall fn_0067A7D0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push esi
        call edx
        fstp dword ptr [esp + 8]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        fadd dword ptr [esp + 8]
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1c]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        push ecx
        fstp dword ptr [esp]
        push esi
        call eax
        pop esi
        ret 0x8
    }
}

// [0x0066C0B0] ExprParser::ExpressionContainerType::vfunc_0 (79 bytes)
// Writes a {ptr, ptr} pair to *out: if obj->f4 is non-null, first = *(obj->f4->vfunc_28(obj)), else first = 0; second = obj->f4.
extern "C" __declspec(naked) void __fastcall fn_0066C0B0(void* self, int edx_unused, int* out, int* obj) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x10]
        xor eax, eax
        cmp dword ptr [esi + 0x4], eax
        mov dword ptr [esp + 0x4], eax
        je L_null_0066C0B0
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push esi
        lea edx, [esp + 0x14]
        push edx
        call eax
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0x8
L_null_0066C0B0:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_004ECB40();
extern "C" void ext_0041CF50();

// [0x00699260] ExprParser::ExpressionContainerType::vfunc_34 (99 bytes)
// SEH-guarded temp: out-param call via ext_004ECB40 on arg2, feed result into ext_0041CF50 on arg1,
// then if the returned object is non-null dispatch its vtable slot 0x78 with &temp.
extern "C" __declspec(naked) void __fastcall fn_00699260(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x008b33b8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        mov ecx, dword ptr [esp + 0x1c]
        lea eax, [esp]
        push eax
        call ext_004ECB40
        mov ecx, dword ptr [esp + 0x18]
        push eax
        mov dword ptr [esp + 0x14], 0x0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x4]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 0xffffffff
        je done_00699260
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp]
        push eax
        call edx
done_00699260:
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x8
    }
}

extern "C" void ext_006992E0();
extern "C" void ext_00699720();
extern "C" void ext_0069A7B0();
extern "C" void ext_006A5C62();

// [0x0069A910] ExprParser::ExpressionContainerType::vfunc_23 (187 bytes)
extern "C" __declspec(naked) void __fastcall fn_0069A910(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push -1
        push 0x008b6614
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        push 0x84
        mov ebp, ecx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x14], ebx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov dword ptr [esp + 0x20], 1
        je L_null_0069A960
        mov ecx, eax
        call ext_0069A7B0
        mov edi, eax
        jmp L_cont_0069A962
L_null_0069A960:
        xor edi, edi
L_cont_0069A962:
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [eax + 0x4c]
        mov edx, dword ptr [ecx]
        mov esi, dword ptr [edi]
        add eax, 0x48
        push eax
        mov eax, dword ptr [edx + 0x60]
        mov byte ptr [esp + 0x24], bl
        add esi, 0x28
        call eax
        mov edx, dword ptr [esi]
        push eax
        mov ecx, edi
        call edx
        mov esi, dword ptr [esp + 0x28]
        push edi
        push esi
        mov ecx, ebp
        call ext_006992E0
        cmp byte ptr [esp + 0x30], bl
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x10], 1
        je L_exit_0069A9B4
        mov eax, dword ptr [esp + 0x38]
        mov ecx, dword ptr [esp + 0x34]
        push eax
        push ecx
        mov ecx, edi
        call ext_00699720
L_exit_0069A9B4:
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x14
    }
}

// [0x006994A0] ExprParser::ExpressionContainerType::vfunc_18 (428 bytes)
extern "C" void ext_0041CF50();
extern "C" void ext_0041E540();
extern "C" void ext_00595C50();
extern "C" void ext_00598F40();
extern "C" void ext_0059B350();
extern "C" void ext_006720E0();
extern "C" void ext_00699360();
extern "C" void ext_006A6C87();
extern "C" int mem_00B5C944;
extern "C" int mem_00B5C934;
extern "C" int mem_00B5C93C;
extern "C" int mem_00B5C940;
extern "C" int mem_00B599BC;
extern "C" int mem_00B5C92C;
extern "C" int mem_00B5C930;

extern "C" __declspec(naked) void* __fastcall fn_006994A0(void* self, void* /*edx*/, void* arg1) {
    __asm {
        push -0x1
        mov eax, dword ptr fs:[0x0]
        push 0x8b646e
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x24]
        push ebp
        push esi
        xor esi, esi
        cmp ebx, esi
        push edi
        mov ebp, ecx
        je L_fallback

        test byte ptr [mem_00B5C944], 0x1
        jne L_map_init_done
        or dword ptr [mem_00B5C944], 0x1
        mov ecx, offset mem_00B5C934 + 4
        mov dword ptr [esp + 0x28], esi
        mov dword ptr [mem_00B5C934], 0x95da28
        call ext_00595C50
        mov dword ptr [mem_00B5C93C], eax
        mov byte ptr [eax + 0x31], 0x1
        mov eax, dword ptr [mem_00B5C93C]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [mem_00B5C93C]
        mov dword ptr [eax], eax
        mov eax, dword ptr [mem_00B5C93C]
        mov dword ptr [eax + 0x8], eax
        push 0x921f70
        mov dword ptr [mem_00B5C940], esi
        call ext_006A6C87
        add esp, 0x4
        mov dword ptr [esp + 0x28], 0xffffffff

    L_map_init_done:
        lea edi, [ebx + 0x2c]
        push edi
        mov ecx, offset mem_00B5C934
        call ext_0059B350
        mov esi, eax
        test esi, esi
        jne L_return_esi

        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x5c]
        push esi
        push esi
        push esi
        push ebx
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, ebp
        call edx
        push eax
        push edi
        mov ecx, offset mem_00B5C934
        mov dword ptr [esp + 0x30], 0x1
        call ext_00598F40
        mov ecx, dword ptr [esp + 0x1c]
        test ecx, ecx
        mov esi, eax
        mov dword ptr [esp + 0x28], 0xffffffff
        je L_check_esi
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x18]
        push edx
        call eax

    L_check_esi:
        test esi, esi
        je L_zero_esi

    L_return_esi:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret 0x4

    L_zero_esi:
        xor esi, esi

    L_fallback:
        mov ebx, 0x2
        test byte ptr [mem_00B5C944], bl
        jne L_fallback_init_done
        mov ecx, dword ptr [mem_00B599BC]
        or dword ptr [mem_00B5C944], ebx
        push 0x921f50
        mov dword ptr [mem_00B5C92C], esi
        mov dword ptr [mem_00B5C930], ecx
        call ext_006A6C87
        add esp, 0x4

    L_fallback_init_done:
        mov eax, dword ptr [mem_00B5C930]
        cmp eax, esi
        je L_do_fallback
        cmp eax, dword ptr [mem_00B599BC]
        jne L_return_fallback

    L_do_fallback:
        call ext_0041E540
        mov ecx, eax
        call ext_00699360
        cmp dword ptr [eax + 0x14], esi
        je L_return_fallback
        push eax
        lea ecx, [esp + 0x14]
        call ext_006720E0
        lea edx, [esp + 0x10]
        push edx
        mov ecx, offset mem_00B5C92C
        mov dword ptr [esp + 0x2c], ebx
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, esi
        mov dword ptr [esp + 0x28], 0xffffffff
        je L_return_fallback
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x10]
        push edx
        call eax

    L_return_fallback:
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        pop esi
        pop ebp
        mov eax, offset mem_00B5C92C
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret 0x4
    }
}
