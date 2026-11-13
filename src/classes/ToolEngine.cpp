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

// [0x004809E0] ToolEngine::vfunc_7 (35 bytes)
extern "C" __declspec(naked) int __fastcall fn_004809E0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x18]
        test eax, eax
        je ret_one_004809E0
        mov edx, dword ptr [ecx + 0x1c]
        sub edx, eax
        sar edx, 0x2
        je ret_one_004809E0
        cmp byte ptr [ecx + 0x30], 0x0
        jne ret_one_004809E0
        xor eax, eax
        pop ecx
        ret
ret_one_004809E0:
        mov eax, 0x1
        pop ecx
        ret
    }
}

// [0x00480060] ToolEngine::vfunc_17 (53 bytes)
extern "C" void ext_00494000();
extern "C" __declspec(naked) void __fastcall fn_00480060(void* self) {
    __asm {
        sub esp, 0xc
        push esi
        push 0x0
        push 0x0
        mov esi, ecx
        push -0x1
        lea ecx, [esp + 0x10]
        call ext_00494000
        mov eax, dword ptr [esi + 0x10]
        mov eax, dword ptr [eax + 0x60]
        push 0x1
        lea edx, [esp + 0x8]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        lea ecx, [esi + 0x10]
        push 0x3
        push edx
        call eax
        pop esi
        add esp, 0xc
        ret 0x4
    }
}

// [0x00480160] ToolEngine::vfunc_27 (54 bytes)
extern "C" __declspec(naked) void __fastcall fn_00480160(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x3b0]
        mov ecx, dword ptr [eax + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xb4]
        call edx
        test eax, eax
        je done
        mov esi, dword ptr [esi + 0x3b0]
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xb4]
        call edx
        mov byte ptr [eax + 0x86], 1
done:
        pop esi
        ret
    }
}

// [0x004812B0] ToolEngine::vfunc_10 (80 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004812B0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x10]
        mov edx, dword ptr [eax + 0xc]
        add ecx, 0x10
        push esi
        push edi
        call edx
        mov edi, eax
        mov esi, dword ptr [edi + 0x4]
        test esi, esi
        je L_ret4
        mov ecx, dword ptr [edi + 0x8]
        mov eax, ecx
        sub eax, esi
        sar eax, 0x2
        cmp eax, 0x1
        jne L_ret4
        cmp esi, ecx
        push ebx
        mov ebx, dword ptr [mem_00925134]
        jbe L_chk2
        call ebx
    L_chk2:
        cmp esi, dword ptr [edi + 0x8]
        jb L_ok
        call ebx
    L_ok:
        mov esi, dword ptr [esi]
        mov eax, dword ptr [esi + 0xc]
        mov edx, dword ptr [eax]
        lea ecx, [esi + 0xc]
        pop ebx
        pop edi
        pop esi
        jmp edx
    L_ret4:
        pop edi
        mov eax, 0x4
        pop esi
        ret
    }
}

// [0x00480E40] ToolEngine::vfunc_9 (91 bytes)
extern "C" void ext_00584C00();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00480E40(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x10]
        mov edx, dword ptr [eax + 0xc]
        push ebx
        push ebp
        add ecx, 0x10
        push esi
        push edi
        call edx
        mov ebp, dword ptr [mem_00925134]
        mov esi, eax
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_loop
        call ebp
    L_loop:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk_eq
        call ebp
    L_chk_eq:
        cmp edi, ebx
        je L_false
        cmp edi, dword ptr [esi + 0x8]
        jb L_deref
        call ebp
    L_deref:
        mov ecx, dword ptr [edi]
        call ext_00584C00
        test al, al
        jne L_true
        cmp edi, dword ptr [esi + 0x8]
        jb L_inc
        call ebp
    L_inc:
        add edi, 0x4
        jmp L_loop
    L_true:
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret
    L_false:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret
    }
}

// [0x00481FA0] ToolEngine::vfunc_54 (39 bytes)
extern "C" void __fastcall ext_00481D80(void* self);

extern "C" void __fastcall fn_00481FA0(void* self) {
    char* esi = (char*)self;
    ext_00481D80(esi + 0x3cc);
    void** vtbl = *(void***)esi;
    typedef void (__fastcall *VFn)(void* self);
    ((VFn)vtbl[0xd4 / 4])(esi);
    vtbl = *(void***)esi;
    ((VFn)vtbl[0xf8 / 4])(esi);
}

// [0x00480F60] ToolEngine::vfunc_19 (154 bytes)
extern "C" void ext_00594000();
extern "C" void ext_0065D120();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00480F60(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call ext_00594000
        lea ecx, [eax + 0xfc]
        call ext_0065D120
        mov eax, dword ptr [esi + 0x10]
        mov edx, dword ptr [eax + 0x10]
        lea ecx, [esi + 0x10]
        call edx
        mov esi, eax
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_00480F96
        call dword ptr [mem_00925134]
    L_00480F96:
        mov ebp, dword ptr [esp + 0x18]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_00480FA0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_00480FAE
        call dword ptr [mem_00925134]
    L_00480FAE:
        cmp edi, ebx
        je L_00480FDA
        cmp edi, dword ptr [esi + 0x8]
        jb L_00480FBD
        call dword ptr [mem_00925134]
    L_00480FBD:
        mov eax, dword ptr [edi]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8]
        push ebp
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_00480FD5
        call dword ptr [mem_00925134]
    L_00480FD5:
        add edi, 0x4
        jmp L_00480FA0
    L_00480FDA:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        pop edi
        pop esi
        pop ebp
        mov byte ptr [eax + 0x108], 0x1
        pop ebx
        je L_00480FF6
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
    L_00480FF6:
        pop ecx
        ret 0x4
    }
}

// [0x004810B0] ToolEngine::vfunc_22 (162 bytes)
extern "C" __declspec(naked) void __fastcall fn_004810B0(void* self, int edx_unused, int a1, int a2, float a3) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call ext_00594000
        lea ecx, [eax + 0xfc]
        call ext_0065D120
        mov eax, dword ptr [esi + 0x10]
        mov edx, dword ptr [eax + 0x10]
        lea ecx, [esi + 0x10]
        call edx
        mov esi, eax
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_004810E6
        call dword ptr [mem_00925134]
    L_004810E6:
        mov ebp, dword ptr [esp + 0x1c]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_004810F0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_004810FE
        call dword ptr [mem_00925134]
    L_004810FE:
        cmp edi, ebx
        je L_00481137
        cmp edi, dword ptr [esi + 0x8]
        jb L_0048110D
        call dword ptr [mem_00925134]
    L_0048110D:
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x18]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        push ecx
        fstp dword ptr [esp]
        push ebp
        push edx
        call eax
        cmp edi, dword ptr [esi + 0x8]
        jb L_00481132
        call dword ptr [mem_00925134]
    L_00481132:
        add edi, 0x4
        jmp L_004810F0
    L_00481137:
        mov eax, dword ptr [esp + 0x10]
        cmp dword ptr [eax + 0x4], 0x0
        pop edi
        pop esi
        pop ebp
        pop ebx
        je L_0048114E
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
    L_0048114E:
        pop ecx
        ret 0xc
    }
}

// [0x00481160] ToolEngine::vfunc_24 (325 bytes)
extern "C" void ext_00594000();
extern "C" void ext_0065D120();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00481160(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr [esp + 0x10], ebp
        call ext_00594000
        lea ecx, [eax + 0xfc]
        call ext_0065D120
        mov eax, dword ptr [ebp + 0x10]
        mov edx, dword ptr [eax + 0x1c]
        add ebp, 0x10
        mov ecx, ebp
        call edx
        mov esi, eax
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_loop_head
        call dword ptr [mem_00925134]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_loop_head:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk_eq
        call dword ptr [mem_00925134]
    L_chk_eq:
        cmp edi, ebx
        je L_after_loop1
        cmp edi, dword ptr [esi + 0x8]
        jb L_body1
        call dword ptr [mem_00925134]
    L_body1:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [esp + 0x1c]
        lea ecx, [eax + 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x10]
        push edx
        call eax
        cmp edi, dword ptr [esi + 0x8]
        jb L_inc1
        call dword ptr [mem_00925134]
    L_inc1:
        add edi, 0x4
        jmp L_loop_head
    L_after_loop1:
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_else
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 0x2
        jne L_done
    L_else:
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0xc]
        mov ecx, ebp
        call eax
        mov ebx, eax
        mov esi, dword ptr [ebx + 0x4]
        test esi, esi
        je L_done
        mov eax, dword ptr [ebx + 0x8]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 0x2
        je L_done
        mov ecx, dword ptr [esp + 0x24]
        mov ebp, dword ptr [mem_00925134]
        shr ecx, 0x3
        and cl, 0x1
        cmp esi, eax
        mov byte ptr [esp + 0x24], cl
        jbe L_pad_ok
        call ebp
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_pad_ok:
        mov edi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], edi
        jbe L_loop2_eq
        call ebp
    L_loop2_eq:
        cmp esi, edi
        je L_done
        cmp byte ptr [esp + 0x24], 0x0
        je L_flag0
        cmp esi, dword ptr [ebx + 0x8]
        jb L_flag1_body
        call ebp
    L_flag1_body:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edx + 0x94]
        push eax
        call edx
        jmp L_loop2_inc
    L_flag0:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_flag0_body
        call ebp
    L_flag0_body:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [esp + 0x1c]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x10]
        push edx
        call eax
    L_loop2_inc:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_loop2_inc_ok
        call ebp
    L_loop2_inc_ok:
        add esi, 0x4
        jmp L_pad_ok
    L_done:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        pop edi
        pop esi
        pop ebp
        mov byte ptr [eax + 0x108], 0x1
        pop ebx
        je L_ret
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
    L_ret:
        add esp, 0x8
        ret 0xc
    }
}

extern "C" void ext_0047FFA0();
extern "C" void ext_004801C0();
extern "C" void ext_00594000();
extern "C" void ext_0065D120();
extern "C" void ext_006A6E9E();
extern "C" void ext_006A7250();
extern "C" int mem_00925134;
extern "C" int mem_00B40640;
extern "C" int mem_0093C2B0;
extern "C" int mem_00A2E2BC;
extern "C" int mem_00A2E35C;

// [0x00481360] ToolEngine::vfunc_50 (894 bytes)
extern "C" __declspec(naked) void __fastcall fn_00481360(void* self) {
    __asm {
        sub     esp, 0x88
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x3c], esi
        xor     bl, bl
        call    ext_00594000
        lea     ecx, [eax + 0xfc]
        call    ext_0065D120
        mov     eax, dword ptr [esi + 0x10]
        mov     edx, dword ptr [eax + 0x10]
        lea     ecx, [esi + 0x10]
        call    edx
        mov     ebp, eax
        mov     esi, dword ptr [ebp + 0x4]
        test    esi, esi
        mov     dword ptr [esp + 0x14], ebp
        je      L_4816d0
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, ecx
        sub     eax, esi
        sar     eax, 0x2
        cmp     eax, 0x1
        jb      L_4816d0
        cmp     esi, ecx
        jbe     L_4813ba
        call    dword ptr [mem_00925134]
    L_4813ba:
        cmp     esi, dword ptr [ebp + 0x8]
        jb      L_4813c5
        call    dword ptr [mem_00925134]
    L_4813c5:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     dword ptr [esp + 0x1c], ecx
        je      L_4816d0
        mov     eax, dword ptr [ecx + 0x4]
        mov     edx, dword ptr [mem_00B40640]
        mov     eax, dword ptr [eax + 0x14]
        add     ecx, 0x4
        push    edi
        push    edx
        call    eax
        fld     dword ptr [eax + 0x30]
        mov     edi, dword ptr [esp + 0x9c]
        fstp    dword ptr [esp + 0x68]
        fld     dword ptr [eax + 0x34]
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        fstp    dword ptr [esp + 0x6c]
        fld     dword ptr [eax + 0x38]
        mov     dword ptr [esp + 0x1c], 0x0
        fstp    dword ptr [esp + 0x70]
        fld1
        fstp    dword ptr [esp + 0x74]
        jbe     L_48141e
        call    dword ptr [mem_00925134]
    L_48141e:
        mov     ebx, esi
    L_481420:
        mov     esi, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], esi
        mov     dword ptr [esp + 0x3c], ebx
        jbe     L_481432
        call    dword ptr [mem_00925134]
    L_481432:
        cmp     ebx, esi
        je      L_4816ac
        cmp     ebx, dword ptr [edi + 0x8]
        jb      L_481445
        call    dword ptr [mem_00925134]
    L_481445:
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [ecx + 0x8]
        push    0x0
        push    offset mem_00A2E2BC
        push    offset mem_00A2E35C
        push    0x0
        push    eax
        call    ext_006A6E9E
        mov     edi, eax
        add     esp, 0x14
        test    edi, edi
        je      L_48168b
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x40]
        push    edi
        push    edx
        call    ext_004801C0
        mov     esi, dword ptr [ebp + 0x4]
        xor     bl, bl
        cmp     esi, dword ptr [ebp + 0x8]
        mov     byte ptr [esp + 0x17], al
        jbe     L_481490
        call    dword ptr [mem_00925134]
        mov     edi, edi
    L_481490:
        mov     ebp, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esp + 0x18]
        cmp     dword ptr [eax + 0x4], ebp
        jbe     L_4814a2
        call    dword ptr [mem_00925134]
    L_4814a2:
        cmp     esi, ebp
        je      L_4814dc
        mov     ecx, dword ptr [esp + 0x18]
        cmp     esi, dword ptr [ecx + 0x8]
        jb      L_4814b5
        call    dword ptr [mem_00925134]
    L_4814b5:
        mov     eax, dword ptr [esi]
        test    eax, eax
        je      L_4814c4
        test    bl, bl
        jne     L_4814c4
        cmp     eax, edi
        sete    bl
    L_4814c4:
        mov     edx, dword ptr [esp + 0x18]
        cmp     esi, dword ptr [edx + 0x8]
        jb      L_4814d3
        call    dword ptr [mem_00925134]
    L_4814d3:
        mov     ebp, dword ptr [esp + 0x18]
        add     esi, 0x4
        jmp     L_481490
    L_4814dc:
        cmp     byte ptr [esp + 0x17], 0x0
        je      L_481683
        test    bl, bl
        jne     L_481683
        mov     eax, dword ptr [edi + 0x4]
        mov     edx, dword ptr [mem_00B40640]
        mov     eax, dword ptr [eax + 0x14]
        lea     ecx, [edi + 0x4]
        push    edx
        call    eax
        fld     dword ptr [eax + 0x30]
        fstp    dword ptr [esp + 0x48]
        lea     ecx, [esp + 0x68]
        fld     dword ptr [eax + 0x34]
        push    ecx
        fstp    dword ptr [esp + 0x50]
        lea     edx, [esp + 0x8c]
        fld     dword ptr [eax + 0x38]
        push    edx
        fstp    dword ptr [esp + 0x58]
        lea     ecx, [esp + 0x50]
        fld1
        fstp    dword ptr [esp + 0x5c]
        call    ext_0047FFA0
        fld     dword ptr [eax]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [eax + 0xc]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x2c]
        fld     st(1)
        fmulp   st(2), st
        fld     st(2)
        fmulp   st(3), st
        fxch    st(1)
        faddp   st(2), st
        fmul    st(0), st
        faddp   st(1), st
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x10]
        call    ext_006A7250
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0xa0]
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [esi + 0x4]
        fld     dword ptr [esi]
        fld     dword ptr [esi + 0x8]
        fld     st(1)
        fmulp   st(2), st
        fld     st(2)
        fmulp   st(3), st
        fxch    st(1)
        faddp   st(2), st
        fmul    st(0), st
        faddp   st(1), st
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x10]
        call    ext_006A7250
        fstp    dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax + 0x94]
        fstp    dword ptr [esp + 0x34]
        test    eax, eax
        je      L_48164c
        mov     edx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [edx + 0x14]
        lea     ecx, [eax + 0x4]
        mov     eax, dword ptr [mem_00B40640]
        push    eax
        call    edx
        fld     dword ptr [eax + 0x30]
        fstp    dword ptr [esp + 0x58]
        lea     ecx, [esp + 0x78]
        fld     dword ptr [eax + 0x34]
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [eax + 0x38]
        lea     eax, [esp + 0x58]
        fstp    dword ptr [esp + 0x60]
        push    eax
        fld1
        push    ecx
        lea     ecx, [esp + 0x50]
        fstp    dword ptr [esp + 0x6c]
        call    ext_0047FFA0
        fld     dword ptr [esp + 0x7c]
        fld     dword ptr [esp + 0x78]
        fld     dword ptr [esp + 0x80]
        fld     st(1)
        fmulp   st(2), st
        fld     st(2)
        fmulp   st(3), st
        fxch    st(1)
        faddp   st(2), st
        fmul    st(0), st
        faddp   st(1), st
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x10]
        call    ext_006A7250
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x10]
        fcomp   qword ptr [mem_0093C2B0]
        fnstsw  ax
        test    ah, 0x1
        jne     L_481683
    L_48164c:
        cmp     dword ptr [esp + 0x1c], 0x0
        je      L_481664
        fld     dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x34]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jne     L_481683
    L_481664:
        fld     dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x1c], edi
        fstp    dword ptr [esi]
        fld     dword ptr [esp + 0x28]
        fstp    dword ptr [esi + 0x4]
        fld     dword ptr [esp + 0x2c]
        fstp    dword ptr [esi + 0x8]
        fld     dword ptr [esp + 0x30]
        fstp    dword ptr [esi + 0xc]
    L_481683:
        mov     ebp, dword ptr [esp + 0x18]
    L_481687:
        mov     ebx, dword ptr [esp + 0x3c]
    L_48168b:
        mov     edx, dword ptr [esp + 0x9c]
        cmp     ebx, dword ptr [edx + 0x8]
        jb      L_48169d
        call    dword ptr [mem_00925134]
    L_48169d:
        mov     edi, dword ptr [esp + 0x9c]
        add     ebx, 0x4
        jmp     L_481420
    L_4816ac:
        cmp     dword ptr [esp + 0x1c], 0x0
        pop     edi
        je      L_4816c2
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x88
        ret     0x8
    L_4816c2:
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x88
        ret     0x8
    L_4816d0:
        pop     esi
        pop     ebp
        mov     al, bl
        pop     ebx
        add     esp, 0x88
        ret     0x8
    }
}

// [0x00480680] ToolEngine::vfunc_46 (32 bytes)
extern "C" void ext_004A8C60();
extern "C" __declspec(naked) void __fastcall fn_00480680(void* self, int edx_unused, int a1, int a2, float a3) {
    __asm {
        fld     dword ptr [esp+0Ch]
        mov     eax, dword ptr [esp+08h]
        mov     edx, dword ptr [esp+04h]
        push    ecx
        mov     ecx, dword ptr [ecx+3B4h]
        fstp    dword ptr [esp]
        push    eax
        push    edx
        call    ext_004A8C60
        ret     0Ch
    }
}

// [0x004862C0] ToolEngine::vfunc_21 (49 bytes)
extern "C" void ext_00485E40();
extern "C" void ext_00665870();
extern "C" void ext_00666670();

extern "C" __declspec(naked) void __fastcall fn_004862C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x600]
        test ecx, ecx
        je done
        call ext_00485E40
        mov eax, dword ptr [esi + 0x600]
        push eax
        mov dword ptr [esi + 0x600], 0
        call ext_00665870
        mov ecx, eax
        call ext_00666670
    done:
        pop esi
        ret
    }
}

// [0x00486740] ToolEngine::vfunc_33 (49 bytes)
extern "C" void ext_00486680();
extern "C" void ext_00665870();
extern "C" void ext_00666670();

extern "C" __declspec(naked) void __fastcall fn_00486740(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x608]
        test ecx, ecx
        je done
        call ext_00486680
        mov eax, dword ptr [esi + 0x608]
        push eax
        mov dword ptr [esi + 0x608], 0
        call ext_00665870
        mov ecx, eax
        call ext_00666670
    done:
        pop esi
        ret
    }
}
