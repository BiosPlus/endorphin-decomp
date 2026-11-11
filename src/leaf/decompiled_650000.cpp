// Decompiled translation unit: src/leaf/decompiled_650000.cpp

// [0x0065ACC0] sub_0065ACC0 (10 bytes)
// Calls sub_007C7150 with the dword at [self] as its single stack argument, then returns.
extern "C" void __cdecl ext_007C7150(int value);

extern "C" void __fastcall fn_0065ACC0(void* self) {
    ext_007C7150(*(int*)self);
}

// [0x0065AF20] sub_0065AF20 (10 bytes)
// Calls sub_007C8BC0 with the dword at [self] as its single stack argument, then returns.
extern "C" void __cdecl ext_007C8BC0(int value);

extern "C" void __fastcall fn_0065AF20(void* self) {
    ext_007C8BC0(*(int*)self);
}

// [0x0065C5E0] sub_0065C5E0 (10 bytes)
// Pushes &self->[+0x4c] as a single stack argument to sub_0065C3F0 (no caller cleanup), then returns.
extern "C" void ext_0065C3F0();

extern "C" __declspec(naked) void __fastcall fn_0065C5E0(void* self) {
    __asm {
        lea eax, [ecx + 0x4c]
        push eax
        call ext_0065C3F0
        ret
    }
}

// [0x0065B0F0] sub_0065B0F0 (11 bytes)
extern "C" void ext_007CCDF0(int value);

extern "C" void __fastcall fn_0065B0F0(void* self) {
    ext_007CCDF0(*(int*)((char*)self + 0x34));
}

// [0x0065BB70] sub_0065BB70 (11 bytes)
extern "C" void ext_007C8B90(int value);

extern "C" void __fastcall fn_0065BB70(void* self) {
    ext_007C8B90(*(int*)((char*)self + 0x18));
}

// [0x0065F2A0] sub_0065F2A0 (15 bytes)
// Loads ecx from the global mem_00B58FF4 and pushes the dword at [self] as one stack argument
// to sub_0066C030 (no caller cleanup), then returns. ecx must carry the global, which C++ can't express.
extern "C" void ext_0066C030();
extern "C" int mem_00B58FF4;

extern "C" __declspec(naked) void __fastcall fn_0065F2A0(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [mem_00B58FF4]
        push eax
        call ext_0066C030
        ret
    }
}

// [0x0065BEF0] sub_0065BEF0 (16 bytes)
extern "C" void ext_007C7710();

extern "C" __declspec(naked) void __fastcall fn_0065BEF0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x40]
        fldz
        push eax
        fstp dword ptr [ecx + 0x4]
        call ext_007C7710
        pop ecx
        ret
    }
}

// [0x0065D110] sub_0065D110 (16 bytes)
extern "C" void ext_006619D0();

extern "C" void __fastcall fn_0065D110(void* self) {
    typedef void (__thiscall *Fn)(void* thisp, void* arg);
    ((Fn)&ext_006619D0)((char*)self + 0xcc, (char*)self + 0x6c);
}

// [0x0065D120] sub_0065D120 (16 bytes)
extern "C" void __fastcall fn_0065D120(void* self) {
    typedef void (__thiscall *Fn)(void* thisp, void* arg);
    ((Fn)&ext_006619D0)((char*)self + 0x6c, (char*)self + 0xcc);
}

// [0x0065A980] sub_0065A980 (19 bytes)
extern "C" void ext_007C5FD0();

extern "C" void __fastcall fn_0065A980(void* self, int edx_unused, int a1) {
    typedef void (__cdecl *Fn)(int, int);
    ((Fn)&ext_007C5FD0)(*(int*)self, a1);
}

// [0x0065F260] sub_0065F260 (20 bytes)
extern "C" void ext_0065D5B0();
extern "C" void ext_0065F1F0();

extern "C" __declspec(naked) void __fastcall fn_0065F260(void* self) {
    __asm {
        push esi
        push 1
        push 1
        mov esi, ecx
        call ext_0065D5B0
        mov ecx, esi
        pop esi
        jmp ext_0065F1F0
    }
}

// [0x0065A8C0] sub_0065A8C0 (20 bytes)
extern "C" void ext_007C6790(int value);
extern "C" void ext_007C67D0(int value);

extern "C" void __fastcall fn_0065A8C0(void* self) {
    int value = *(int*)self;
    ext_007C6790(value);
    ext_007C67D0(value);
}

// [0x0065B100] sub_0065B100 (21 bytes)
// Loads the dword at [[self]+0x10] (via self->[+0x4]) and calls sub_007C8A70 cdecl with that value
// and the address of mem_00493D90 as its two stack arguments (caller cleans up).
extern "C" void __cdecl ext_007C8A70(int value, int addr);
extern "C" char mem_00493D90;

extern "C" void __fastcall fn_0065B100(void* self) {
    int obj = *(int*)((char*)self + 0x4);
    int value = *(int*)(obj + 0x10);
    ext_007C8A70(value, (int)&mem_00493D90);
}

// [0x0065D0F0] sub_0065D0F0 (23 bytes)
// Pushes its first stack argument to sub_0065D0C0 and its second to sub_0065D0E0 (both stdcall, callee cleans up), then returns 8.
extern "C" void __stdcall ext_0065D0C0(int value);
extern "C" void __stdcall ext_0065D0E0(int value);

extern "C" __declspec(naked) void __stdcall fn_0065D0F0(int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_0065D0C0
        mov edx, dword ptr [esp + 0x8]
        push edx
        call ext_0065D0E0
        ret 0x8
    }
}

// [0x0065AF30] sub_0065AF30 (24 bytes)
extern "C" void __cdecl ext_007C8C10(int a, int b);

extern "C" void __fastcall fn_0065AF30(void* self, int edx_unused, void* a1) {
    ext_007C8C10(*(int*)self, *(int*)(*(int*)((char*)a1 + 0x5c)));
}

// [0x0065BED0] sub_0065BED0 (24 bytes)
extern "C" void __cdecl ext_007C7310(int value);

extern "C" void __fastcall fn_0065BED0(void* self) {
    ext_007C7310(*(int*)((char*)self + 0x40));
    *(int*)((char*)self + 0x40) = 0;
}

// [0x0065F400] sub_0065F400 (24 bytes)
// Saves esi, calls sub_0065F310 with ecx loaded from the global mem_00B58FF4 and two stack args (0, 1),
// stores the result into [self], returns self in eax. ecx must carry the global, which C++ can't express.
extern "C" void ext_0065F310();
extern "C" int mem_00B58FF4;

extern "C" __declspec(naked) void __fastcall fn_0065F400(void* self) {
    __asm {
        push esi
        push 0x0
        mov esi, ecx
        mov ecx, dword ptr [mem_00B58FF4]
        push 0x1
        call ext_0065F310
        mov dword ptr [esi], eax
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0065C620] sub_0065C620 (25 bytes)
extern "C" void ext_006A5C5C();
extern "C" int mem_009242E4;
extern "C" __declspec(naked) void __fastcall fn_0065C620(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done_0065C620
        push esi
        call dword ptr [mem_009242E4]
        push esi
        call ext_006A5C5C
        add esp, 4
    done_0065C620:
        pop esi
        ret
    }
}

// [0x0065BFA0] sub_0065BFA0 (25 bytes)
extern "C" void ext_0065BDA0();
extern "C" __declspec(naked) void* __fastcall fn_0065BFA0(void* self) {
    __asm {
        fldz
        mov dword ptr [ecx], 0x984928
        fst dword ptr [ecx + 0x28]
        fst dword ptr [ecx + 0x24]
        fstp dword ptr [ecx + 0x20]
        call ext_0065BDA0
        mov eax, ecx
        ret
    }
}

// [0x0065D440] sub_0065D440 (26 bytes)
// Calls sub_006A5C62 with 0x6c as its single cdecl stack argument, then stores the returned pointer
// into itself and into eax+4 (each store guarded by a null test), and returns.
extern "C" void* __cdecl ext_006A5C62(int size);

extern "C" void __fastcall fn_0065D440(void* self) {
    void* p = ext_006A5C62(0x6c);
    if (p) {
        *(void**)p = p;
    }
    void* q = (char*)p + 4;
    if (q) {
        *(void**)q = p;
    }
}

// [0x0065C340] sub_0065C340 (26 bytes)
extern "C" void ext_007C9BC0();

extern "C" void __fastcall fn_0065C340(void* self, int edx_unused, int a1) {
    typedef int (__cdecl *Fn)(int);
    int r = ((Fn)ext_007C9BC0)(a1);
    *(int*)((char*)self + 0x8c) = r;
}

// [0x0065C260] sub_0065C260 (26 bytes)
// If the dword at [self+0x8c] is nonzero, passes it to sub_007D8700, then passes that result to sub_007C97F0.
extern "C" int __cdecl ext_007D8700(int value);
extern "C" void __cdecl ext_007C97F0(int value);

extern "C" void __fastcall fn_0065C260(void* self) {
    int v = *(int*)((char*)self + 0x8c);
    if (v) {
        int r = ext_007D8700(v);
        ext_007C97F0(r);
    }
}

// [0x0065AC90] sub_0065AC90 (28 bytes)
// Calls sub_0065F400 on &self->[+0x4] (ecx), zeroes [self] and [self+0x8], returns self in eax.
extern "C" void __fastcall ext_0065F400(void* self);

extern "C" void* __fastcall fn_0065AC90(void* self) {
    ext_0065F400((char*)self + 0x4);
    *(int*)self = 0;
    *(int*)((char*)self + 0x8) = 0;
    return self;
}

// [0x0065C230] sub_0065C230 (35 bytes)
// If the dword at [self+0x8c] is nonzero, passes it to sub_007D8700, then passes that result to sub_007C9260.
// Returns 1 if the second call's result is nonzero, else 0 (also 0 when [self+0x8c] is zero).
extern "C" int __cdecl ext_007C9260(int value);

extern "C" __declspec(naked) int __fastcall fn_0065C230(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8c]
        test eax, eax
        je short L_zero_0065C230
        push eax
        call ext_007D8700
        push eax
        call ext_007C9260
        add esp, 8
        neg eax
        sbb eax, eax
        neg eax
        ret
L_zero_0065C230:
        __asm _emit 0x32
        __asm _emit 0xC0
        ret
    }
}

// [0x00659E10] sub_00659E10 (36 bytes)
extern "C" void ext_00659DB0();
extern "C" void ext_00645EB0();

extern "C" __declspec(naked) void __fastcall fn_00659E10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 0x0097DE5C
        mov dword ptr [esi + 0x4], 0x0097DE44
        mov dword ptr [esi + 0x8], 0x0097DE10
        call ext_00659DB0
        mov ecx, esi
        pop esi
        jmp ext_00645EB0
    }
}

// [0x0065BDF0] sub_0065BDF0 (37 bytes)
extern "C" void __fastcall fn_0065BDF0(void* self, int edx_unused, void* a1) {
    unsigned char* s = (unsigned char*)self;
    unsigned char* a = (unsigned char*)a1;
    *(unsigned char*)(s + 0x1c) = *(a + 0x83);
    if (*(a + 0x84) != 0) {
        *(float*)(s + 0x2c) = *(float*)(a + 0x44);
        *(float*)(s + 0x30) = *(float*)(a + 0x48);
    }
}

// [0x0065AA00] sub_0065AA00 (38 bytes)
extern "C" void ext_007C6C10();
extern "C" void ext_007C6C20();
extern "C" int mem_00B55748;

extern "C" void __fastcall fn_0065AA00(void* self) {
    int eax = mem_00B55748;
    int ecx = *(int*)(eax + 0x28);
    if (*(unsigned char*)(ecx + 0x1c) != 0) {
        int edx = *(int*)self;
        ((void (__cdecl*)(int))ext_007C6C10)(edx);
        int eax2 = *(int*)self;
        ((void (__cdecl*)(int))ext_007C6C20)(eax2);
    }
}

// [0x0065D540] sub_0065D540 (39 bytes)
// __stdcall(first, last, dest) ret 0xc: n = last - first; if n != 0, memmove_s(dest, n, first, n); returns dest + n.
extern "C" int mem_009251EC;
extern "C" __declspec(naked) int __stdcall fn_0065D540(int first, int last, int dest) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 0xc]
        sub eax, ecx
        push esi
        lea esi, [eax + edx]
        je skip_copy
        push eax
        push ecx
        push eax
        push edx
        call dword ptr [mem_009251EC]
        add esp, 0x10
    skip_copy:
        mov eax, esi
        pop esi
        ret 0xc
    }
}

// [0x0065BF00] sub_0065BF00 (42 bytes)
extern "C" void __cdecl ext_007C76E0(int v, float a, float b, float c);

extern "C" void __fastcall fn_0065BF00(void* self, int edx_unused, float a1) {
    *(float*)((char*)self + 0x24) = a1;
    ext_007C76E0(*(int*)((char*)self + 0x40), *(float*)((char*)self + 0x20), a1, *(float*)((char*)self + 0x28));
}

// [0x0065C5F0] sub_0065C5F0 (43 bytes)
extern "C" int mem_009241C0;
extern "C" __declspec(naked) void* __fastcall fn_0065C5F0(void* self) {
    __asm {
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        test edi, edi
        je null_0065C5F0
        push edi
        call dword ptr [mem_009241C0]
        mov dword ptr [esi], edi
        pop edi
        mov eax, esi
        pop esi
        ret
    null_0065C5F0:
        xor eax, eax
        mov dword ptr [esi], eax
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0065D760] sub_0065D760 (41 bytes)
extern "C" void __cdecl ext_00480DD0(int, int, int, int, int, int, int);
extern "C" __declspec(naked) void __fastcall fn_0065D760(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        push edx
        call ext_00480DD0
        add esp, 1Ch
        ret 0Ch
    }
}

// [0x0065D570] sub_0065D570 (50 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) int __fastcall fn_0065D570(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x68], 0
        jne L_0065D570_nz
        xor eax, eax
        pop esi
        ret
L_0065D570_nz:
        mov eax, dword ptr [esi + 0x64]
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push edi
        mov edi, dword ptr [eax + 4]
        cmp edi, eax
        jne L_0065D570_a
        call ebx
L_0065D570_a:
        cmp edi, dword ptr [esi + 0x64]
        jne L_0065D570_b
        call ebx
L_0065D570_b:
        mov eax, dword ptr [edi + 8]
        pop edi
        pop ebx
        add eax, 1
        pop esi
        ret
    }
}

// [0x0065CCA0] sub_0065CCA0 (51 bytes)
extern "C" __declspec(naked) void __fastcall fn_0065CCA0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        jne short L_nonzero
        xor ecx, ecx
        test eax, eax
        setne cl
        mov al, cl
        ret
    L_nonzero:
        mov ecx, dword ptr [ecx + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        xor ecx, ecx
        test eax, eax
        setne cl
        mov al, cl
        ret
    }
}

// [0x0065D500] sub_0065D500 (58 bytes)
// Copies 64-byte records from [first, last) to dest (do-while, 16 dwords per record), then returns
// dest + ((last - first) rounded down to a multiple of 64). Three stack args, cdecl.
extern "C" __declspec(naked) void* __cdecl fn_0065D500(const void* first, const void* last, void* dest) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        mov eax, ebx
        sub eax, edx
        sar eax, 0x6
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        shl eax, 0x6
        add eax, ebp
        cmp edx, ebx
        je done
        push esi
        sub ebp, edx
        push edi
    copy_loop:
        lea edi, [edx + ebp]
        mov esi, edx
        add edx, 0x40
        cmp edx, ebx
        mov ecx, 0x10
        rep movsd
        jne copy_loop
        pop edi
        pop esi
    done:
        pop ebp
        pop ebx
        ret
    }
}

// [0x0065BF30] sub_0065BF30 (59 bytes)
// Stores three float args at [self+0x20], [self+0x24], [self+0x28], then calls sub_007C76E0 with
// ([self+0x40] as int, then the three floats) cdecl, and returns with ret 0xC.
extern "C" __declspec(naked) void __fastcall fn_0065BF30(void* self, int edx_unused, float a1, float a2, float a3) {
    __asm {
        fld dword ptr [esp + 0x4]
        sub esp, 0x0c
        fstp dword ptr [ecx + 0x20]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [ecx + 0x24]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [ecx + 0x28]
        mov eax, dword ptr [ecx + 0x40]
        fld dword ptr [ecx + 0x28]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x24]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [ecx + 0x20]
        fstp dword ptr [esp]
        push eax
        call ext_007C76E0
        add esp, 0x10
        ret 0x0c
    }
}

// [0x0065D710] sub_0065D710 (69 bytes)
// __thiscall, ret 0x14. Validates arg1 against arg3 (invalid_parameter if arg1 is non-null and != arg3),
// then if arg4 != arg5 updates self->[+0x8] via sub_0065D500(arg5, old [+0x8], arg4).
// Writes (arg2, arg4) to the out buffer (arg0).
extern "C" int mem_00925134;
extern "C" void* __cdecl fn_0065D500(const void* first, const void* last, void* dest);

extern "C" void __fastcall fn_0065D710(void* self, int edx_unused, int* out, int a2, int a3, int a4, int a5) {
    if (a2 == 0 || a2 != a4) {
        void (*invalid_parameter)() = reinterpret_cast<void (*)()>(mem_00925134);
        invalid_parameter();
    }
    if (a3 != a5) {
        *(int*)((char*)self + 0x8) = (int)fn_0065D500((const void*)a5, *(const void**)((char*)self + 0x8), (void*)a3);
    }
    out[0] = a2;
    out[1] = a3;
}

// [0x0065D6C0] sub_0065D6C0 (70 bytes)
// Indexed node lookup: walks the list head stored at [self+0x64] and returns
// head_node->[+0x10] + (index << 6), with a bounds check against the count
// derived from [+0x14]-[+0x10] (64-byte elements). Failed checks call the
// invalid-parameter handler pointer at mem_00925134.
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_0065D6C0(void* self, int edx_unused, unsigned int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x64]
        mov esi, dword ptr [eax]
        cmp esi, eax
        jne L_first
        call ebx
    L_first:
        mov esi, dword ptr [esi]
        cmp esi, dword ptr [edi + 0x64]
        jne L_second
        call ebx
    L_second:
        mov ecx, dword ptr [esi + 0x10]
        test ecx, ecx
        mov edi, dword ptr [esp + 0x10]
        je L_call
        mov eax, dword ptr [esi + 0x14]
        sub eax, ecx
        sar eax, 0x6
        cmp edi, eax
        jb L_index
    L_call:
        call ebx
    L_index:
        mov eax, edi
        shl eax, 0x6
        add eax, dword ptr [esi + 0x10]
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0065D2B0] sub_0065D2B0 (72 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0065D2B0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov esi, ecx
        jl done
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        jne nonnull
        xor eax, eax
        jmp have_size
nonnull:
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
have_size:
        cmp eax, edi
        jle done
        test ecx, ecx
        je invalid
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb store
invalid:
        call dword ptr [mem_00925134]
store:
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 4 * edi], 0x0
done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0065D300] sub_0065D300 (72 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0065D300(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov esi, ecx
        jl done
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        jne nonnull
        xor eax, eax
        jmp have_size
    nonnull:
        mov eax, dword ptr [esi + 0x18]
        sub eax, ecx
        sar eax, 0x2
    have_size:
        cmp eax, edi
        jle done
        test ecx, ecx
        je invalid
        mov eax, dword ptr [esi + 0x18]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb store
    invalid:
        call dword ptr [mem_00925134]
    store:
        mov eax, dword ptr [esi + 0x14]
        mov dword ptr [eax + 4 * edi], 0x0
    done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0065D350] sub_0065D350 (72 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0065D350(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov esi, ecx
        jl done
        mov ecx, dword ptr [esi + 0x34]
        test ecx, ecx
        jne nonnull
        xor eax, eax
        jmp have_size
    nonnull:
        mov eax, dword ptr [esi + 0x38]
        sub eax, ecx
        sar eax, 0x2
    have_size:
        cmp eax, edi
        jle done
        test ecx, ecx
        je invalid
        mov eax, dword ptr [esi + 0x38]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb store
    invalid:
        call dword ptr [mem_00925134]
    store:
        mov eax, dword ptr [esi + 0x34]
        mov dword ptr [eax + 4 * edi], 0x0
    done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0065D3A0] sub_0065D3A0 (72 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0065D3A0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov esi, ecx
        jl done
        mov ecx, dword ptr [esi + 0x44]
        test ecx, ecx
        jne nonnull
        xor eax, eax
        jmp have_size
    nonnull:
        mov eax, dword ptr [esi + 0x48]
        sub eax, ecx
        sar eax, 0x2
    have_size:
        cmp eax, edi
        jle done
        test ecx, ecx
        je invalid
        mov eax, dword ptr [esi + 0x48]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb store
    invalid:
        call dword ptr [mem_00925134]
    store:
        mov eax, dword ptr [esi + 0x44]
        mov dword ptr [eax + 4 * edi], 0x0
    done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0065D3F0] sub_0065D3F0 (72 bytes)
extern "C" __declspec(naked) void __fastcall fn_0065D3F0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov esi, ecx
        jl done
        mov ecx, dword ptr [esi + 0x54]
        test ecx, ecx
        jne nonnull
        xor eax, eax
        jmp have_size
    nonnull:
        mov eax, dword ptr [esi + 0x58]
        sub eax, ecx
        sar eax, 0x2
    have_size:
        cmp eax, edi
        jle done
        test ecx, ecx
        je invalid
        mov eax, dword ptr [esi + 0x58]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb store
    invalid:
        call dword ptr [mem_00925134]
    store:
        mov eax, dword ptr [esi + 0x54]
        mov dword ptr [eax + 4 * edi], 0x0
    done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0065D140] sub_0065D140 (72 bytes)
// Calls _aligned_malloc(arg1 << 6, 16); returns on success. On failure constructs a
// std::exception-derived object (bad_alloc vtable) and throws it via CxxThrowException.
extern "C" void ext_006A6DD2();
extern "C" int mem_009252E4;
extern "C" int mem_009252E0;

extern "C" __declspec(naked) void __fastcall fn_0065D140(void* self, int edx_unused, int size, int unused) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0xc
        shl eax, 0x6
        push 0x10
        push eax
        call dword ptr [mem_009252E4]
        add esp, 0x8
        test eax, eax
        jne done
        push 0x1
        push 0xa9ece4
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009252E0]
        push 0x9cdf94
        lea ecx, [esp + 0x4]
        push ecx
        mov dword ptr [esp + 0x8], 0x928ec0
        call ext_006A6DD2
done:
        add esp, 0xc
        ret 0x8
    }
}

// [0x0065BDA0] sub_0065BDA0 (74 bytes)
extern "C" int mem_00984920;
extern "C" int mem_0093F7B8;
extern "C" int mem_00944240;
extern "C" __declspec(naked) void __fastcall fn_0065BDA0(void* self) {
    __asm {
        fldz
        xor eax, eax
        fst dword ptr [ecx + 0x4]
        mov dword ptr [ecx + 0xc], eax
        fld dword ptr [mem_00984920]
        mov dword ptr [ecx + 0x10], eax
        fstp dword ptr [ecx + 0x8]
        mov byte ptr [ecx + 0x1c], al
        fld dword ptr [mem_0093F7B8]
        fst dword ptr [ecx + 0x14]
        fstp dword ptr [ecx + 0x18]
        fst dword ptr [ecx + 0x20]
        fld dword ptr [mem_00944240]
        fstp dword ptr [ecx + 0x24]
        fstp dword ptr [ecx + 0x28]
        mov dword ptr [ecx + 0x34], eax
        fld1
        mov dword ptr [ecx + 0x38], eax
        fst dword ptr [ecx + 0x2c]
        mov word ptr [ecx + 0x3c], ax
        fstp dword ptr [ecx + 0x30]
        mov dword ptr [ecx + 0x40], eax
        ret
    }
}

// [0x0065F7F0] sub_0065F7F0 (82 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924E44;

extern "C" __declspec(naked) void __fastcall fn_0065F7F0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        cmp eax, -0x2
        je L_0065F838
        test eax, eax
        push ebp
        mov ebp, dword ptr [mem_00925134]
        jne L_0065F80C
        call ebp
L_0065F80C:
        push edi
        mov edi, dword ptr [esi]
        mov ecx, edi
        call dword ptr [mem_00924E44]
        mov ecx, dword ptr [esi + 0x4]
        add eax, dword ptr [edi + 0x14]
        add ecx, ebx
        cmp ecx, eax
        ja L_0065F834
        mov ecx, edi
        call dword ptr [mem_00924E44]
        mov edx, dword ptr [esi + 0x4]
        add edx, ebx
        cmp edx, eax
        jae L_0065F836
L_0065F834:
        call ebp
L_0065F836:
        pop edi
        pop ebp
L_0065F838:
        add dword ptr [esi + 0x4], ebx
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x006542C0] sub_006542C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55EF0;
extern "C" int mem_00B55EEC;

extern "C" __declspec(naked) void* __fastcall fn_006542C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b06de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55EF0], al
        jne L_done
        or dword ptr [mem_00B55EF0], eax
        mov ecx, offset mem_00B55EEC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55EEC], 0x9802fc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55EEC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00654320] sub_00654320 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55EF8;
extern "C" int mem_00B55EF4;

extern "C" __declspec(naked) void* __fastcall fn_00654320(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b06fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55EF8], al
        jne L_done
        or dword ptr [mem_00B55EF8], eax
        mov ecx, offset mem_00B55EF4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55EF4], 0x9803d4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55EF4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00654380] sub_00654380 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F00;
extern "C" int mem_00B55EFC;

extern "C" __declspec(naked) void* __fastcall fn_00654380(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b071e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F00], al
        jne L_done
        or dword ptr [mem_00B55F00], eax
        mov ecx, offset mem_00B55EFC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55EFC], 0x9804ac
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55EFC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006543E0] sub_006543E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F08;
extern "C" int mem_00B55F04;

extern "C" __declspec(naked) void* __fastcall fn_006543E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b073e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F08], al
        jne L_done
        or dword ptr [mem_00B55F08], eax
        mov ecx, offset mem_00B55F04
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F04], 0x980584
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F04
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00654440] sub_00654440 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F10;
extern "C" int mem_00B55F0C;

extern "C" __declspec(naked) void* __fastcall fn_00654440(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b075e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F10], al
        jne L_done
        or dword ptr [mem_00B55F10], eax
        mov ecx, offset mem_00B55F0C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F0C], 0x98065c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F0C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006544A0] sub_006544A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F18;
extern "C" int mem_00B55F14;

extern "C" __declspec(naked) void* __fastcall fn_006544A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b077e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F18], al
        jne L_done
        or dword ptr [mem_00B55F18], eax
        mov ecx, offset mem_00B55F14
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F14], 0x980734
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F14
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00654500] sub_00654500 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F20;
extern "C" int mem_00B55F1C;

extern "C" __declspec(naked) void* __fastcall fn_00654500(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b079e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F20], al
        jne L_done
        or dword ptr [mem_00B55F20], eax
        mov ecx, offset mem_00B55F1C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F1C], 0x98080c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F1C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00654560] sub_00654560 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F28;
extern "C" int mem_00B55F24;

extern "C" __declspec(naked) void* __fastcall fn_00654560(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b07be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F28], al
        jne L_done
        or dword ptr [mem_00B55F28], eax
        mov ecx, offset mem_00B55F24
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F24], 0x9808e4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F24
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006545C0] sub_006545C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F30;
extern "C" int mem_00B55F2C;

extern "C" __declspec(naked) void* __fastcall fn_006545C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b07de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F30], al
        jne L_done
        or dword ptr [mem_00B55F30], eax
        mov ecx, offset mem_00B55F2C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F2C], 0x9809bc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F2C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00654620] sub_00654620 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F38;
extern "C" int mem_00B55F34;

extern "C" __declspec(naked) void* __fastcall fn_00654620(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b07fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F38], al
        jne L_done
        or dword ptr [mem_00B55F38], eax
        mov ecx, offset mem_00B55F34
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F34], 0x980a94
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F34
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00654680] sub_00654680 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F40;
extern "C" int mem_00B55F3C;

extern "C" __declspec(naked) void* __fastcall fn_00654680(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b081e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F40], al
        jne L_done
        or dword ptr [mem_00B55F40], eax
        mov ecx, offset mem_00B55F3C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F3C], 0x980b6c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F3C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006546E0] sub_006546E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F48;
extern "C" int mem_00B55F44;

extern "C" __declspec(naked) void* __fastcall fn_006546E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b083e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F48], al
        jne L_done
        or dword ptr [mem_00B55F48], eax
        mov ecx, offset mem_00B55F44
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F44], 0x980c44
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F44
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00654740] sub_00654740 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F50;
extern "C" int mem_00B55F4C;

extern "C" __declspec(naked) void* __fastcall fn_00654740(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b085e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F50], al
        jne L_done
        or dword ptr [mem_00B55F50], eax
        mov ecx, offset mem_00B55F4C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F4C], 0x980d1c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F4C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006547A0] sub_006547A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F58;
extern "C" int mem_00B55F54;

extern "C" __declspec(naked) void* __fastcall fn_006547A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b087e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F58], al
        jne L_done
        or dword ptr [mem_00B55F58], eax
        mov ecx, offset mem_00B55F54
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F54], 0x980df4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F54
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00654800] sub_00654800 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F60;
extern "C" int mem_00B55F5C;

extern "C" __declspec(naked) void* __fastcall fn_00654800(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b089e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F60], al
        jne L_done
        or dword ptr [mem_00B55F60], eax
        mov ecx, offset mem_00B55F5C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F5C], 0x980ecc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F5C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00654860] sub_00654860 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F68;
extern "C" int mem_00B55F64;

extern "C" __declspec(naked) void* __fastcall fn_00654860(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b08be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F68], al
        jne L_done
        or dword ptr [mem_00B55F68], eax
        mov ecx, offset mem_00B55F64
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F64], 0x980fa4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F64
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006548C0] sub_006548C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F70;
extern "C" int mem_00B55F6C;

extern "C" __declspec(naked) void* __fastcall fn_006548C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b08de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F70], al
        jne L_done
        or dword ptr [mem_00B55F70], eax
        mov ecx, offset mem_00B55F6C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F6C], 0x98107c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F6C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00654920] sub_00654920 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F78;
extern "C" int mem_00B55F74;

extern "C" __declspec(naked) void* __fastcall fn_00654920(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b08fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F78], al
        jne L_done
        or dword ptr [mem_00B55F78], eax
        mov ecx, offset mem_00B55F74
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F74], 0x981154
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F74
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00654980] sub_00654980 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F80;
extern "C" int mem_00B55F7C;

extern "C" __declspec(naked) void* __fastcall fn_00654980(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b091e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F80], al
        jne L_done
        or dword ptr [mem_00B55F80], eax
        mov ecx, offset mem_00B55F7C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F7C], 0x98122c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F7C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006549E0] sub_006549E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55F88;
extern "C" int mem_00B55F84;

extern "C" __declspec(naked) void* __fastcall fn_006549E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b093e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55F88], al
        jne L_done
        or dword ptr [mem_00B55F88], eax
        mov ecx, offset mem_00B55F84
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55F84], 0x981304
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55F84
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}
