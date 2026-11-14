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

// [0x00486810] ToolEngine::vfunc_29 (49 bytes)
extern "C" void ext_00486400();
extern "C" void ext_00665870();
extern "C" void ext_00666670();

extern "C" __declspec(naked) void __fastcall fn_00486810(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x604]
        test ecx, ecx
        je done
        call ext_00486400
        mov eax, dword ptr [esi + 0x604]
        push eax
        mov dword ptr [esi + 0x604], 0
        call ext_00665870
        mov ecx, eax
        call ext_00666670
    done:
        pop esi
        ret
    }
}

// [0x00480EA0] ToolEngine::vfunc_49 (61 bytes)
extern "C" void ext_004A66D0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00480EA0(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x10]
        mov edx, dword ptr [eax + 0x2c]
        push ebp
        lea ecx, [ebx + 0x10]
        push esi
        push edi
        call edx
        mov ebp, dword ptr [mem_00925134]
        mov esi, eax
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe chk_ok
        call ebp
        cmp edi, dword ptr [esi + 0x8]
chk_ok:
        jb do_call
        call ebp
do_call:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [ebx + 0x3b4]
        push eax
        call ext_004A66D0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00481EF0] ToolEngine::vfunc_0 (161 bytes)
extern "C" void ext_00494000();
extern "C" void ext_004A5850();
extern "C" void ext_004B07E0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00481EF0(void* self) {
    __asm {
        push -1
        push 0x87ba98
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x28
        push esi
        push edi
        xor esi, esi
        push esi
        push esi
        mov edi, ecx
        push -1
        lea ecx, [esp + 0x14]
        call ext_00494000
        push esi
        push esi
        push esi
        lea ecx, [esp + 0x20]
        call ext_00494000
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x28], esi
        mov dword ptr [esp + 0x2c], esi
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        push esi
        push esi
        lea edx, [esp + 0x30]
        push edx
        lea ecx, [edi + 0x8]
        mov dword ptr [esp + 0x4c], esi
        call ext_004B07E0
        mov eax, dword ptr [esp + 0x24]
        cmp eax, esi
        mov dword ptr [esp + 0x38], -1
        je skip_free
        push eax
        call ext_006A5C5C
        add esp, 4
    skip_free:
        mov ecx, dword ptr [edi + 0x3b4]
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x28], esi
        mov dword ptr [esp + 0x2c], esi
        call ext_004A5850
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 0x34
        ret
    }
}

// [0x004838D0] ToolEngine::vfunc_35 (57 bytes)
extern "C" void ext_004830A0();
extern "C" void ext_00492590();
extern "C" void ext_006AD940();
extern "C" void ext_004825C0();
extern "C" __declspec(naked) void __fastcall fn_004838D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        call ext_00492590
        test al, al
        je done_38D0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x88]
        mov ecx, esi
        call edx
        mov ecx, esi
        call ext_004830A0
    done_38D0:
        mov ecx, esi
        pop esi
        jmp ext_004825C0
    }
}

extern "C" void ext_005870B0();
extern "C" int mem_00925134;

// [0x00480EE0] ToolEngine::vfunc_25 (128 bytes)
extern "C" __declspec(naked) void __fastcall fn_00480EE0(void* self, int edx_unused, int arg1) {
    __asm {
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call ext_00594000
        lea ecx, [eax + 0xfc]
        call ext_0065D120
        mov eax, dword ptr [ebp + 0x10]
        mov edx, dword ptr [eax + 0x10]
        lea ecx, [ebp + 0x10]
        call edx
        mov esi, eax
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe skip_1
        call dword ptr [mem_00925134]
    skip_1:
        push ebx
    loop_top:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe skip_2
        call dword ptr [mem_00925134]
    skip_2:
        cmp edi, ebx
        je loop_done
        cmp edi, dword ptr [esi + 0x8]
        jb skip_3
        call dword ptr [mem_00925134]
    skip_3:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [edi]
        push eax
        call ext_005870B0
        cmp edi, dword ptr [esi + 0x8]
        jb skip_4
        call dword ptr [mem_00925134]
    skip_4:
        add edi, 4
        jmp loop_top
    loop_done:
        cmp dword ptr [ebp + 4], 0
        pop ebx
        je done
        mov ecx, dword ptr [ebp + 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
    done:
        pop edi
        pop esi
        pop ebp
        ret 4
    }
}

extern "C" void ext_00493D30();
extern "C" void ext_00594000();
extern "C" void ext_0065D120();
extern "C" void ext_006AD940();
extern "C" int mem_00925134;

// [0x00481000] ToolEngine::vfunc_31 (161 bytes)
extern "C" __declspec(naked) void __fastcall fn_00481000(void* self, int edx_unused, int arg1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call ext_00594000
        lea ecx, [eax + 0xfc]
        call ext_0065D120
        mov eax, dword ptr [ebp + 0x10]
        mov edx, dword ptr [eax + 0x10]
        lea ecx, [ebp + 0x10]
        call edx
        mov esi, eax
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe loc_00481031
        call dword ptr [mem_00925134]
    loc_00481031:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe loc_0048103f
        call dword ptr [mem_00925134]
    loc_0048103f:
        cmp edi, ebx
        je loc_0048106f
        cmp edi, dword ptr [esi + 0x8]
        jb loc_0048104e
        call dword ptr [mem_00925134]
    loc_0048104e:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [eax + 0x9c]
        push edx
        call eax
        cmp edi, dword ptr [esi + 0x8]
        jb loc_0048106a
        call dword ptr [mem_00925134]
    loc_0048106a:
        add edi, 4
        jmp loc_00481031
    loc_0048106f:
        mov ecx, dword ptr [ebp + 0x4]
        test ecx, ecx
        pop edi
        pop esi
        mov byte ptr [ebp + 0x108], 1
        pop ebp
        pop ebx
        je loc_00481087
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
    loc_00481087:
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        call ext_00493D30
        ret 4
    }
}

// [0x00483150] ToolEngine::vfunc_53 (150 bytes)
extern "C" void ext_00586D00();
extern "C" void ext_0041A920();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00483150(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, eax
        call ext_00586D00
        lea ebp, [esi + 0x3cc]
        mov ecx, ebp
        call ext_00481D80
        mov eax, dword ptr [esi + 0x10]
        mov edx, dword ptr [eax + 0xc]
        lea ecx, [esi + 0x10]
        call edx
        mov edi, eax
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_chk1
        call dword ptr [mem_00925134]
        jmp L_chk1
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_chk1:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        cmp esi, ebx
        je L_done
        cmp esi, dword ptr [edi + 0x8]
        jb L_body
        call dword ptr [mem_00925134]
L_body:
        mov eax, dword ptr [esi]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x44]
        call edx
        test eax, eax
        je L_skip
        add eax, 0xc
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        push eax
        mov ecx, ebp
        call ext_0041A920
L_skip:
        cmp esi, dword ptr [edi + 0x8]
        jb L_next
        call dword ptr [mem_00925134]
L_next:
        add esi, 0x4
        jmp L_chk1
L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x00481CE0] ToolEngine::vfunc_18 (148 bytes)
extern "C" void ext_004800A0();
extern "C" void ext_004B07E0();
extern "C" void ext_004E9540();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00481CE0(void* self) {
    __asm {
        push -1
        push 0x87ba98
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x10
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        push edi
        mov esi, ecx
        mov [esp + 0x14], ebp
        mov [esp + 0x18], ebp
        mov [esp + 0x1c], ebp
        mov edi, [esp + 0x34]
        mov ecx, [esp + 0x30]
        lea eax, [esp + 0x10]
        push eax
        push edi
        push ecx
        mov [esp + 0x34], ebp
        call ext_004E9540
        add esp, 0xc
        push edi
        mov ecx, esi
        mov ebx, eax
        call ext_004800A0
        lea edx, [esi + 0x3e8]
        push edx
        lea eax, [esi + 0x3dc]
        push eax
        push ebx
        push ebp
        lea ecx, [esp + 0x20]
        push ecx
        lea ecx, [esi + 0x8]
        call ext_004B07E0
        mov eax, [esp + 0x14]
        pop edi
        pop esi
        cmp eax, ebp
        pop ebp
        pop ebx
        je loc_00481D63
        push eax
        call ext_006A5C5C
        add esp, 4
loc_00481D63:
        mov ecx, [esp + 0x10]
        mov fs:[0], ecx
        add esp, 0x1c
        ret 8
    }
}

// [0x00486230] ToolEngine::vfunc_20 (133 bytes)
extern "C" void ext_00485C90();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_00486230(void* self) {
    __asm {
        push -1
        push 0x008a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        push 0x60
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x0
        je L_null
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        lea edx, [esi + 0x218]
        push edx
        lea ecx, [esi + 0x10]
        push ecx
        mov ecx, eax
        call ext_00485C90
        mov edi, eax
        jmp L_after
L_null:
        xor edi, edi
L_after:
        mov ecx, dword ptr [esi + 0x600]
        cmp edi, ecx
        mov dword ptr [esp + 0x14], 0xffffffff
        je L_skip
        test ecx, ecx
        je L_skip
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
L_skip:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x600], edi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004866B0] ToolEngine::vfunc_32 (136 bytes)
extern "C" void ext_00486430();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_004866B0(void* self) {
    __asm {
        push -1
        push 0x008a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        push 0xb0
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x0
        je L_null
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        lea edx, [esi + 0x218]
        push edx
        lea ecx, [esi + 0x10]
        push ecx
        mov ecx, eax
        call ext_00486430
        mov edi, eax
        jmp L_after
L_null:
        xor edi, edi
L_after:
        mov ecx, dword ptr [esi + 0x608]
        cmp edi, ecx
        mov dword ptr [esp + 0x14], 0xffffffff
        je L_skip
        test ecx, ecx
        je L_skip
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
L_skip:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x608], edi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00486780] ToolEngine::vfunc_28 (136 bytes)
extern "C" void ext_00486300();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_00486780(void* self) {
    __asm {
        push -1
        push 0x008a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        push 0xb8
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x0
        je L_null
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        lea edx, [esi + 0x218]
        push edx
        lea ecx, [esi + 0x10]
        push ecx
        mov ecx, eax
        call ext_00486300
        mov edi, eax
        jmp L_after
L_null:
        xor edi, edi
L_after:
        mov ecx, dword ptr [esi + 0x604]
        cmp edi, ecx
        mov dword ptr [esp + 0x14], 0xffffffff
        je L_skip
        test ecx, ecx
        je L_skip
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
L_skip:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x604], edi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_00482640();
extern "C" void ext_004831F0();
extern "C" void ext_004A6C70();
extern "C" void ext_00665870();
extern "C" void ext_00666120();
extern "C" void ext_006A5C5C();

// [0x004833B0] ToolEngine::vfunc_62 (150 bytes)
extern "C" __declspec(naked) void __fastcall fn_004833B0(void* self) {
    __asm {
        push -1
        push 0x8843a8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x14
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        mov edx, dword ptr [eax + 0x10]
        lea ecx, [esi + 0x10]
        call edx
        push eax
        push esi
        lea ecx, [esp + 0xc]
        call ext_00482640
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0
        call edx
        mov ecx, dword ptr [esi + 0x3b4]
        call ext_004A6C70
        lea ecx, [esp + 0x4]
        call ext_004831F0
        test al, al
        je L_skip
        cmp dword ptr [esi + 0x4], 0
        je L_skip
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        call edx
    L_skip:
        call ext_00665870
        mov ecx, eax
        call ext_00666120
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        pop esi
        je L_done
        push eax
        call ext_006A5C5C
        add esp, 4
    L_done:
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr fs:[0], ecx
        add esp, 0x20
        ret
    }
}

// [0x004824B0] ToolEngine::vfunc_14 (257 bytes)
extern "C" void ext_00472F70();
extern "C" void ext_00494000();
extern "C" void ext_004940E0();
extern "C" void ext_004A6970();
extern "C" void ext_004AFC60();
extern "C" void ext_004B07E0();
extern "C" void ext_00665870();
extern "C" void ext_00666120();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004824B0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x87ba98
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x28
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x3b0]
        call ext_00472F70
        xor ebx, ebx
        cmp byte ptr [esp + 0x44], bl
        je L_00482589
        lea esi, [edi + 0x10]
        mov byte ptr [edi + 0x368], 0x1
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x50]
        mov ecx, esi
        call edx
        test al, al
        jne L_00482591
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x8]
        mov ecx, esi
        call edx
        push eax
        lea ecx, [esp + 0x28]
        call ext_004A6970
        push ebx
        push ebx
        push -0x1
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x48], ebx
        call ext_00494000
        push ebx
        push 0x1000
        lea ecx, [esp + 0x14]
        call ext_004940E0
        lea esi, [edi + 0x8]
        push ebx
        mov ecx, esi
        call ext_004AFC60
        push ebx
        push ebx
        push -0x1
        lea ecx, [esp + 0x24]
        call ext_00494000
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        push ebx
        push ebx
        lea edx, [esp + 0x34]
        push edx
        mov ecx, esi
        call ext_004B07E0
        mov eax, dword ptr [esp + 0x28]
        cmp eax, ebx
        mov dword ptr [esp + 0x3c], 0xffffffff
        je L_0048257B
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_0048257B:
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x2c], ebx
        mov dword ptr [esp + 0x30], ebx
        jmp L_00482591
    L_00482589:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax]
        mov ecx, edi
        call edx
    L_00482591:
        call ext_00665870
        mov ecx, eax
        call ext_00666120
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x34
        ret 0x4
    }
}

// [0x00484650] ToolEngine::vfunc_51 (285 bytes)
extern "C" void ext_0046B190();
extern "C" void ext_00480700();
extern "C" void ext_004A6970();
extern "C" void ext_00596660();
extern "C" void ext_005B11F0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00484650(void* self) {
    __asm {
        push -1
        push 0x8844d0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call ext_005B11F0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        push eax
        lea ecx, [esp + 0x2c]
        call ext_004A6970
        xor esi, esi
        mov dword ptr [esp + 0x40], esi
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], esi
        xor ecx, ecx
        push ecx
        lea eax, [esp + 0x1c]
        push eax
        push esi
        mov edx, eax
        push edx
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, eax
        mov byte ptr [esp + 0x54], 1
        call ext_00596660
        lea edx, [esp + 0x28]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        call ext_0046B190
        mov edi, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x28]
        add esp, 8
        cmp edi, eax
        jbe L_004846E0
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8D __asm _emit 0x49 __asm _emit 0x00
    L_004846E0:
        cmp dword ptr [esp + 0x1c], eax
        mov ebx, eax
        jbe L_004846F2
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x20]
    L_004846F2:
        cmp edi, ebx
        je L_0048472C
        cmp edi, eax
        jb L_00484700
        call dword ptr [mem_00925134]
    L_00484700:
        mov eax, dword ptr [edi]
        cmp eax, esi
        je L_0048470B
        add eax, 4
        jmp L_0048470D
    L_0048470B:
        xor eax, eax
    L_0048470D:
        push eax
        mov ecx, ebp
        call ext_00480700
        mov eax, dword ptr [esp + 0x20]
        cmp edi, eax
        jb L_00484727
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x20]
    L_00484727:
        add edi, 4
        jmp L_004846E0
    L_0048472C:
        mov eax, dword ptr [esp + 0x1c]
        cmp eax, esi
        je L_0048473D
        push eax
        call ext_006A5C5C
        add esp, 4
    L_0048473D:
        mov eax, dword ptr [esp + 0x2c]
        pop edi
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        cmp eax, esi
        pop esi
        pop ebp
        pop ebx
        je L_0048475E
        push eax
        call ext_006A5C5C
        add esp, 4
    L_0048475E:
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret
    }
}

// [0x00486130] ToolEngine::vfunc_34 (241 bytes)
extern "C" void ext_00408B90();
extern "C" void ext_00468180();
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" void ext_004A91B0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" int mem_00AD89B4;

extern "C" __declspec(naked) void __fastcall fn_00486130(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x40]
        call edx
        push 8
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x10], esi
        test esi, esi
        mov dword ptr [esp + 0x1c], 0
        mov ebx, 1
        je L_004861A1
        mov eax, dword ptr [edi + 0x3b0]
        test eax, eax
        mov dword ptr [esi], eax
        mov byte ptr [esi + 4], bl
        je L_004861A3
        cmp dword ptr [mem_00AD89B4], 0
        jne L_00486199
        mov byte ptr [eax + 0x153], bl
        mov ecx, dword ptr [esi]
        call ext_00472350
    L_00486199:
        add dword ptr [mem_00AD89B4], ebx
        jmp L_004861A3
    L_004861A1:
        xor esi, esi
    L_004861A3:
        mov ebp, dword ptr [edi + 0x3f4]
        cmp esi, ebp
        mov dword ptr [esp + 0x1c], 0xffffffff
        je L_004861E8
        test ebp, ebp
        je L_004861E8
        cmp dword ptr [ebp], 0
        je L_004861DF
        sub dword ptr [mem_00AD89B4], ebx
        jne L_004861DF
        mov ecx, dword ptr [ebp]
        mov byte ptr [ecx + 0x153], 0
        cmp byte ptr [ebp + 4], 0
        je L_004861DF
        mov ecx, dword ptr [ebp]
        call ext_0046F930
    L_004861DF:
        push ebp
        call ext_006A5C5C
        add esp, 4
    L_004861E8:
        mov dword ptr [edi + 0x3f4], esi
        mov ecx, dword ptr [edi + 0x3b4]
        call ext_004A91B0
        mov edi, dword ptr [edi + 0x3b4]
        push edi
        push 5
        call ext_00468180
        mov ecx, eax
        call ext_00408B90
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
