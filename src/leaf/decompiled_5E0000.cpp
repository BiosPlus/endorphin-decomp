// Decompiled translation unit: src/leaf/decompiled_5E0000.cpp

extern "C" unsigned int __stdcall ext_005E0770(unsigned int a1);

// [0x005E0E20] sub_005E0E20 (23 bytes)
// __thiscall, ret 4: forwards arg0 to 0x005E0770 and stores the result at this+0x308.
extern "C" void __fastcall fn_005E0E20(void* self, int edx_unused, unsigned int a1) {
    *(unsigned int*)((char*)self + 0x308) = ext_005E0770(a1);
}

extern "C" void __fastcall ext_005E0670(void* self, int edx_unused, unsigned int a1);

// [0x005E0E40] sub_005E0E40 (23 bytes)
// __thiscall, ret 0: calls virtual slot +0xf8 on this, then passes the result to 0x005E0670 with this.
extern "C" __declspec(naked) void __fastcall fn_005E0E40(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf8]
        call edx
        push eax
        mov ecx, esi
        call ext_005E0670
        pop esi
        ret
    }
}

extern "C" void __fastcall ext_005B11E0(void* self, int edx_unused, int a1);

// [0x005E2770] sub_005E2770 (27 bytes)
// __thiscall, ret 0: loads this+0x17c, calls its virtual slot +0x11c, then calls 0x005B11E0 on (result+8) with a single zero stack arg.
extern "C" __declspec(naked) void __fastcall fn_005E2770(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x11c]
        call edx
        push 0
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E27C0] sub_005E27C0 (27 bytes)
// __thiscall, ret 0: loads this+0x17c, calls its virtual slot +0x11c, then calls 0x005B11E0 on (result+8) with a single one-valued stack arg.
extern "C" __declspec(naked) void __fastcall fn_005E27C0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x11c]
        call edx
        push 1
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E2810] sub_005E2810 (27 bytes)
// __thiscall, ret 0: loads this+0x17c, calls its virtual slot +0x11c, then calls 0x005B11E0 on (result+8) with a single two-valued stack arg.
extern "C" __declspec(naked) void __fastcall fn_005E2810(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x11c]
        call edx
        push 2
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E2860] sub_005E2860 (27 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E2860(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x11c]
        call edx
        push 3
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E28B0] sub_005E28B0 (27 bytes)
// __thiscall, ret 0: loads this+0x17c, calls its virtual slot +0x124, then calls 0x005B11E0 on (result+8) with a single zero stack arg.
extern "C" __declspec(naked) void __fastcall fn_005E28B0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x124]
        call edx
        push 0
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E2900] sub_005E2900 (27 bytes)
// __thiscall, ret 0: loads this+0x17c, calls its virtual slot +0x124, then calls 0x005B11E0 on (result+8) with a single 1 stack arg.
extern "C" __declspec(naked) void __fastcall fn_005E2900(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x124]
        call edx
        push 1
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

extern "C" void __fastcall ext_005B11E0(void* self, int edx_unused, int a1);

// [0x005E2950] sub_005E2950 (27 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E2950(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x124]
        call edx
        push 2
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E29A0] sub_005E29A0 (27 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E29A0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x124]
        call edx
        push 3
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E05C0] sub_005E05C0 (40 bytes)
extern "C" void __stdcall fn_005E05C0(float* self) {
    float z = 0.0f;
    self[3] = z;
    self[2] = z;
    self[1] = z;
    self[0] = z;
    self[4] = z;
    self[5] = z;
    self[6] = 1.0f;
    self[7] = z;
    self[8] = z;
    self[9] = z;
}

// [0x005EFAF0] sub_005EFAF0 (52 bytes)
extern "C" void ext_005EF450();
extern "C" void __fastcall fn_005EFAF0(void* self) {
    unsigned int* p = (unsigned int*)self;
    p[0] = 0x0096b604;
    p[1] = 0x0096b5bc;
    p[2] = 0x0096b57c;
    p[3] = 0x0096b52c;
    p[0x150 / 4] = 0x0096b514;
    p[0x154 / 4] = 0x0096b50c;
    ext_005EF450();
}

// [0x005EFFB0] sub_005EFFB0 (52 bytes)
extern "C" __declspec(naked) void __fastcall fn_005EFFB0(void* self) {
    __asm {
        mov dword ptr [ecx], 0x96b814
        mov dword ptr [ecx + 0x4], 0x96b7cc
        mov dword ptr [ecx + 0x8], 0x96b78c
        mov dword ptr [ecx + 0xc], 0x96b73c
        mov dword ptr [ecx + 0x150], 0x96b728
        mov dword ptr [ecx + 0x154], 0x96b720
        jmp ext_005EF450
    }
}

// [0x005E4DE0] sub_005E4DE0 (55 bytes)
// __fastcall-style, ret 0: allocates 0x54 bytes via 0x006A5C62 (cdecl), zeroes the dwords at +0, +4 and +8
// (each store guarded by a null test), sets byte +0x50 to 1 and byte +0x51 to 0, and returns the block pointer.
extern "C" void* __cdecl ext_006A5C62(int size);

extern "C" void* __fastcall fn_005E4DE0(void* self) {
    void* p = ext_006A5C62(0x54);
    if (p) {
        *(int*)p = 0;
    }
    void* q = (char*)p + 4;
    if (q) {
        *(int*)q = 0;
    }
    void* r = (char*)p + 8;
    if (r) {
        *(int*)r = 0;
    }
    ((unsigned char*)p)[0x50] = 1;
    ((unsigned char*)p)[0x51] = 0;
    return p;
}

// [0x005E27E0] sub_005E27E0 (34 bytes)
// __thiscall, ret 4: calls virtual slot +0x120 on this->[+0x17c] with the float arg, then passes the result (ecx) to 0x006123C0.
extern "C" void ext_006123C0();

extern "C" __declspec(naked) void __fastcall fn_005E27E0(void* self, int edx_unused, float a1) {
    __asm {
        mov ecx, dword ptr [ecx + 17Ch]
        fld dword ptr [esp + 4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 120h]
        push ecx
        fstp dword ptr [esp]
        call edx
        mov ecx, eax
        call ext_006123C0
        ret 4
    }
}

// [0x005E2830] sub_005E2830 (34 bytes)
extern "C" void ext_00612410();

extern "C" __declspec(naked) void __fastcall fn_005E2830(void* self, int edx_unused, float value) {
    __asm {
        mov ecx, dword ptr [ecx + 17Ch]
        fld dword ptr [esp + 4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 120h]
        push ecx
        fstp dword ptr [esp]
        call edx
        mov ecx, eax
        call ext_00612410
        ret 4
    }
}

extern "C" void __fastcall ext_00612460(void* self, int edx_unused, float a1);

// [0x005E2880] sub_005E2880 (34 bytes)
// __thiscall, ret 4: loads this+0x17c, calls its virtual slot +0x120 with arg1, then passes the result to 0x00612460 with arg1.
extern "C" __declspec(naked) void __fastcall fn_005E2880(void* self, int edx_unused, float a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        fld dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x120]
        push ecx
        fstp dword ptr [esp]
        call edx
        mov ecx, eax
        call ext_00612460
        ret 0x4
    }
}

// [0x005E2920] sub_005E2920 (34 bytes)
// __thiscall, ret 4: loads this+0x17c, calls its virtual slot +0x128 with arg1, then passes the result to 0x006123C0.
extern "C" __declspec(naked) void __fastcall fn_005E2920(void* self, int edx_unused, float a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        fld dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x128]
        push ecx
        fstp dword ptr [esp]
        call edx
        mov ecx, eax
        call ext_006123C0
        ret 0x4
    }
}

// [0x005E2970] sub_005E2970 (34 bytes)
// __thiscall, ret 4: loads this+0x17c, calls its virtual slot +0x128 with arg1, then passes the result to 0x00612410.
extern "C" __declspec(naked) void __fastcall fn_005E2970(void* self, int edx_unused, float value) {
    __asm {
        mov ecx, dword ptr [ecx + 17Ch]
        fld dword ptr [esp + 4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 128h]
        push ecx
        fstp dword ptr [esp]
        call edx
        mov ecx, eax
        call ext_00612410
        ret 4
    }
}

// [0x005E29C0] sub_005E29C0 (34 bytes)
// __thiscall, ret 4: loads this+0x17c, calls its virtual slot +0x128 with arg1, then passes the result to 0x00612460.
extern "C" __declspec(naked) void __fastcall fn_005E29C0(void* self, int edx_unused, float value) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        fld dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x128]
        push ecx
        fstp dword ptr [esp]
        call edx
        mov ecx, eax
        call ext_00612460
        ret 0x4
    }
}

extern "C" void __fastcall ext_005E1350(void* a1);
extern "C" int mem_00925134;

// [0x005ECC50] sub_005ECC50 (67 bytes)
// __thiscall, ret 0: validates the vector at this+0x1d4..0x1d8 (calling _invalid_parameter_noinfo on bad bounds), then calls 0x005E1350 on each element.
extern "C" void __fastcall fn_005ECC50(void* self) {
    typedef void (*invalid_fn)();
    invalid_fn bad = (invalid_fn)mem_00925134;
    unsigned int* end = *(unsigned int**)((char*)self + 0x1d8);
    unsigned int* begin = *(unsigned int**)((char*)self + 0x1d4);
    if (begin > end) bad();
    unsigned int* p = *(unsigned int**)((char*)self + 0x1d4);
    if (p > *(unsigned int**)((char*)self + 0x1d8)) bad();
    while (p != end) {
        ext_005E1350((void*)*p);
        ++p;
    }
}

// [0x005E2790] sub_005E2790 (34 bytes)
// __thiscall, ret 4: loads this+0x17c, calls its virtual slot +0x120 with the float arg, then passes the result (ecx) to 0x00612370.
extern "C" void ext_00612370();

extern "C" __declspec(naked) void __fastcall fn_005E2790(void* self, int edx_unused, float a1) {
    __asm {
        mov ecx, dword ptr [ecx + 17Ch]
        fld dword ptr [esp + 4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 120h]
        push ecx
        fstp dword ptr [esp]
        call edx
        mov ecx, eax
        call ext_00612370
        ret 4
    }
}

// [0x005E28D0] sub_005E28D0 (34 bytes)
// __thiscall, ret 4: loads this+0x17c, calls its virtual slot +0x128 with arg1, then passes the result to 0x00612370.
extern "C" void ext_00612370();

extern "C" __declspec(naked) void __fastcall fn_005E28D0(void* self, int edx_unused, float a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        fld dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x128]
        push ecx
        fstp dword ptr [esp]
        call edx
        mov ecx, eax
        call ext_00612370
        ret 0x4
    }
}

// [0x005E4D90] sub_005E4D90 (74 bytes)
// __thiscall-style, ret 0x14: allocates 0x54 bytes via 0x006A5C62 (cdecl), stores arg0/arg1/arg2 at +0/+4/+8,
// copies *arg3 to +0xc and 16 dwords from arg3+4 to +0x10, then stores arg4 byte at +0x50 and zero at +0x51.
// Returns the block pointer (or NULL if allocation failed).
extern "C" void* __cdecl ext_006A5C62(int size);

extern "C" __declspec(naked) void* __fastcall fn_005E4D90(void* self, int edx_unused, unsigned int a1, unsigned int a2,
                                        unsigned int a3, const int* a4, unsigned char a5) {
    __asm {
        push 0x54
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je done
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, dword ptr [esp + 0x10]
        push esi
        push edi
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx]
        lea esi, [ecx + 0x4]
        mov dword ptr [eax + 0xc], edx
        lea edi, [eax + 0x10]
        mov ecx, 0x10
        rep movsd
        mov cl, byte ptr [esp + 0x1c]
        pop edi
        mov byte ptr [eax + 0x50], cl
        mov byte ptr [eax + 0x51], 0x0
        pop esi
    done:
        ret 0x14
    }
}

// [0x005E2B30] sub_005E2B30 (78 bytes)
extern "C" void __fastcall fn_005E2B30(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0x51) == 0) {
        *(char**)(q + 0x4) = n;
    }
    *(char**)(p + 0x4) = *(char**)(n + 0x4);
    char* c = *(char**)(s + 0x4);
    if (n == *(char**)(c + 0x4)) {
        *(char**)(c + 0x4) = p;
        *(char**)p = n;
        *(char**)(n + 0x4) = p;
        return;
    }
    char* c2 = *(char**)(n + 0x4);
    if (n == *(char**)c2) {
        *(char**)c2 = p;
    } else {
        *(char**)(c2 + 0x8) = p;
    }
    *(char**)p = n;
    *(char**)(n + 0x4) = p;
}

// [0x005E2B80] sub_005E2B80 (82 bytes)
extern "C" void __fastcall fn_005E2B80(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0x51] == 0) {
        *(char**)(m + 0x4) = x;
    }
    *(char**)(n + 0x4) = *(char**)(x + 0x4);
    char* h = *(char**)(self + 0x4);
    if (x == *(char**)(h + 0x4)) {
        *(char**)(h + 0x4) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    char* q = *(char**)(x + 0x4);
    if (x == *(char**)(q + 0x8)) {
        *(char**)(q + 0x8) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    *(char**)q = n;
    *(char**)(n + 0x8) = x;
    *(char**)(x + 0x4) = n;
}

// [0x005ECDC0] sub_005ECDC0 (82 bytes)
extern "C" int mem_00925134;

// Walks the vector of object pointers at this+0x200 (first at +0x4, last at +0x8)
// and sets byte [obj+0x4] = 1 on each element. The _SECURE_SCL iterator guards
// (cmp esi,esi / range checks) call the _invalid_parameter_noinfo pointer held in
// ebx; they are kept for byte parity.
extern "C" __declspec(naked) void __fastcall fn_005ECDC0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        push esi
        lea esi, [ecx + 0x200]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe vc_loop
        call ebx
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    vc_loop:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        jbe vc_a
        call ebx
    vc_a:
        cmp esi, esi
        je vc_b
        call ebx
    vc_b:
        cmp edi, ebp
        je vc_done
        cmp edi, dword ptr [esi + 0x8]
        jb vc_c
        call ebx
    vc_c:
        mov eax, dword ptr [edi]
        mov byte ptr [eax + 0x4], 1
        cmp edi, dword ptr [esi + 0x8]
        jb vc_d
        call ebx
    vc_d:
        add edi, 4
        jmp vc_loop
    vc_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x005EAEE0] sub_005EAEE0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F14;
extern "C" int mem_00B45F10;

extern "C" __declspec(naked) void* __fastcall fn_005EAEE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a647e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F14], al
        jne L_done
        or dword ptr [mem_00B45F14], eax
        mov ecx, offset mem_00B45F10
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F10], 0x968ee4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F10
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005EAF40] sub_005EAF40 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F1C;
extern "C" int mem_00B45F18;

extern "C" __declspec(naked) void* __fastcall fn_005EAF40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a649e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F1C], al
        jne L_done
        or dword ptr [mem_00B45F1C], eax
        mov ecx, offset mem_00B45F18
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F18], 0x969094
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F18
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005EC8D0] sub_005EC8D0 (30 bytes)
extern "C" void ext_005EAEE0();

extern "C" __declspec(naked) void __fastcall fn_005EC8D0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EAEE0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EC8F0] sub_005EC8F0 (30 bytes)
extern "C" void ext_005EAF40();

extern "C" __declspec(naked) void __fastcall fn_005EC8F0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EAF40
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EAFA0] sub_005EAFA0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F24;
extern "C" int mem_00B45F20;

extern "C" __declspec(naked) void* __fastcall fn_005EAFA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a64be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F24], al
        jne L_done
        or dword ptr [mem_00B45F24], eax
        mov ecx, offset mem_00B45F20
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F20], 0x969244
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F20
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005EC910] sub_005EC910 (30 bytes)
extern "C" void ext_005EAFA0();

extern "C" __declspec(naked) void __fastcall fn_005EC910(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EAFA0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EB000] sub_005EB000 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F2C;
extern "C" int mem_00B45F28;

extern "C" __declspec(naked) void* __fastcall fn_005EB000(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a64de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F2C], al
        jne L_done
        or dword ptr [mem_00B45F2C], eax
        mov ecx, offset mem_00B45F28
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F28], 0x9693f4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F28
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005EC930] sub_005EC930 (30 bytes)
extern "C" void ext_005EB000();

extern "C" __declspec(naked) void __fastcall fn_005EC930(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB000
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EB060] sub_005EB060 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F34;
extern "C" int mem_00B45F30;

extern "C" __declspec(naked) void* __fastcall fn_005EB060(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a64fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F34], al
        jne L_done
        or dword ptr [mem_00B45F34], eax
        mov ecx, offset mem_00B45F30
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F30], 0x9695a4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F30
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005EB0C0] sub_005EB0C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F3C;
extern "C" int mem_00B45F38;

extern "C" __declspec(naked) void* __fastcall fn_005EB0C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a651e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F3C], al
        jne L_done
        or dword ptr [mem_00B45F3C], eax
        mov ecx, offset mem_00B45F38
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F38], 0x969754
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F38
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005EC950] sub_005EC950 (30 bytes)
extern "C" void ext_005EB060();

extern "C" __declspec(naked) void __fastcall fn_005EC950(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB060
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EC970] sub_005EC970 (30 bytes)
extern "C" void ext_005EB0C0();

extern "C" __declspec(naked) void __fastcall fn_005EC970(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB0C0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EB120] sub_005EB120 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F44;
extern "C" int mem_00B45F40;

extern "C" __declspec(naked) void* __fastcall fn_005EB120(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a653e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F44], al
        jne L_done
        or dword ptr [mem_00B45F44], eax
        mov ecx, offset mem_00B45F40
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F40], 0x969904
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F40
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005EC990] sub_005EC990 (30 bytes)
extern "C" void ext_005EB120();

extern "C" __declspec(naked) void __fastcall fn_005EC990(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB120
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EB180] sub_005EB180 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F4C;
extern "C" int mem_00B45F48;

extern "C" __declspec(naked) void* __fastcall fn_005EB180(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a655e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F4C], al
        jne L_done
        or dword ptr [mem_00B45F4C], eax
        mov ecx, offset mem_00B45F48
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F48], 0x969ab4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F48
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005EB1E0] sub_005EB1E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F54;
extern "C" int mem_00B45F50;

extern "C" __declspec(naked) void* __fastcall fn_005EB1E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a657e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F54], al
        jne L_done
        or dword ptr [mem_00B45F54], eax
        mov ecx, offset mem_00B45F50
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F50], 0x969c64
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F50
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005EC9B0] sub_005EC9B0 (30 bytes)
extern "C" void ext_005EB180();

extern "C" __declspec(naked) void __fastcall fn_005EC9B0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB180
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EC9D0] sub_005EC9D0 (30 bytes)
extern "C" void ext_005EB1E0();

extern "C" __declspec(naked) void __fastcall fn_005EC9D0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB1E0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EB240] sub_005EB240 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F5C;
extern "C" int mem_00B45F58;

extern "C" __declspec(naked) void* __fastcall fn_005EB240(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a659e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F5C], al
        jne L_done
        or dword ptr [mem_00B45F5C], eax
        mov ecx, offset mem_00B45F58
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F58], 0x969e14
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F58
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005EC9F0] sub_005EC9F0 (30 bytes)
extern "C" void ext_005EB240();

extern "C" __declspec(naked) void __fastcall fn_005EC9F0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB240
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EB2A0] sub_005EB2A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F64;
extern "C" int mem_00B45F60;

extern "C" __declspec(naked) void* __fastcall fn_005EB2A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a65be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F64], al
        jne L_done
        or dword ptr [mem_00B45F64], eax
        mov ecx, offset mem_00B45F60
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F60], 0x969fc4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F60
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005EB300] sub_005EB300 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F6C;
extern "C" int mem_00B45F68;

extern "C" __declspec(naked) void* __fastcall fn_005EB300(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a65de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F6C], al
        jne L_done
        or dword ptr [mem_00B45F6C], eax
        mov ecx, offset mem_00B45F68
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F68], 0x96a174
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F68
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005ECA10] sub_005ECA10 (30 bytes)
extern "C" void ext_005EB2A0();

extern "C" __declspec(naked) void __fastcall fn_005ECA10(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB2A0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005ECA30] sub_005ECA30 (30 bytes)
extern "C" void ext_005EB300();

extern "C" __declspec(naked) void __fastcall fn_005ECA30(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB300
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EB360] sub_005EB360 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F74;
extern "C" int mem_00B45F70;

extern "C" __declspec(naked) void* __fastcall fn_005EB360(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a65fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F74], al
        jne L_done
        or dword ptr [mem_00B45F74], eax
        mov ecx, offset mem_00B45F70
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F70], 0x96a324
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F70
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005EB3C0] sub_005EB3C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F7C;
extern "C" int mem_00B45F78;

extern "C" __declspec(naked) void* __fastcall fn_005EB3C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a661e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F7C], al
        jne L_done
        or dword ptr [mem_00B45F7C], eax
        mov ecx, offset mem_00B45F78
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F78], 0x96a4d4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F78
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005ECA50] sub_005ECA50 (30 bytes)
extern "C" void ext_005EB360();

extern "C" __declspec(naked) void __fastcall fn_005ECA50(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB360
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005ECA70] sub_005ECA70 (30 bytes)
extern "C" void ext_005EB3C0();

extern "C" __declspec(naked) void __fastcall fn_005ECA70(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB3C0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EB420] sub_005EB420 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F84;
extern "C" int mem_00B45F80;

extern "C" __declspec(naked) void* __fastcall fn_005EB420(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a663e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F84], al
        jne L_done
        or dword ptr [mem_00B45F84], eax
        mov ecx, offset mem_00B45F80
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F80], 0x96a684
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F80
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005ECA90] sub_005ECA90 (30 bytes)
extern "C" void ext_005EB420();

extern "C" __declspec(naked) void __fastcall fn_005ECA90(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB420
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EB480] sub_005EB480 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F8C;
extern "C" int mem_00B45F88;

extern "C" __declspec(naked) void* __fastcall fn_005EB480(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a665e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F8C], al
        jne L_done
        or dword ptr [mem_00B45F8C], eax
        mov ecx, offset mem_00B45F88
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F88], 0x96a834
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F88
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005ECAB0] sub_005ECAB0 (30 bytes)
extern "C" void ext_005EB480();

extern "C" __declspec(naked) void __fastcall fn_005ECAB0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB480
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005EB4E0] sub_005EB4E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F94;
extern "C" int mem_00B45F90;

extern "C" __declspec(naked) void* __fastcall fn_005EB4E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a667e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F94], al
        jne L_done
        or dword ptr [mem_00B45F94], eax
        mov ecx, offset mem_00B45F90
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F90], 0x96a9e4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F90
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005EB540] sub_005EB540 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45F9C;
extern "C" int mem_00B45F98;

extern "C" __declspec(naked) void* __fastcall fn_005EB540(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a669e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F9C], al
        jne L_done
        or dword ptr [mem_00B45F9C], eax
        mov ecx, offset mem_00B45F98
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B45F98], 0x96ab94
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45F98
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005ECAD0] sub_005ECAD0 (30 bytes)
extern "C" void ext_005EB4E0();

extern "C" __declspec(naked) void __fastcall fn_005ECAD0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB4E0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005ECAF0] sub_005ECAF0 (30 bytes)
extern "C" void ext_005EB540();

extern "C" __declspec(naked) void __fastcall fn_005ECAF0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005EB540
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005E0BB0] sub_005E0BB0 (91 bytes)
// __thiscall, ret 4: float vec[3] at self; returns 1 if |len(vec) - 1| <= tol, else 0.
extern "C" void ext_006A7250();

extern "C" __declspec(naked) int __fastcall fn_005E0BB0(void* self, int edx_unused, float tol) {
    __asm {
        push ecx
        fld dword ptr [ecx + 0x4]
        fld dword ptr [ecx]
        fld dword ptr [ecx + 0x8]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fld1
        fld st(0)
        fsubrp st(2), st
        fld dword ptr [esp]
        fcom st(2)
        fnstsw ax
        fstp st(2)
        test ah, 0x1
        jne short L_lo_fail
        faddp st(2), st
        fcompp
        fnstsw ax
        test ah, 0x41
        jp short L_fail
        mov eax, 0x1
        pop ecx
        ret 0x4
L_lo_fail:
        fstp st(2)
        fstp st(1)
        fstp st(0)
L_fail:
        xor eax, eax
        pop ecx
        ret 0x4
    }
}

extern "C" void ext_0059F5C0();

// [0x005E0060] sub_005E0060 (104 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E0060(void* self) {
    __asm {
        push -1
        push 0x008a6088
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x8], edi
        lea esi, [edi + 0x4]
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [edi], 0x00968df4
        call ext_0059F5C0
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x4], eax
        mov byte ptr [eax + 0x2d], 1
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, edi
        mov dword ptr [esi + 0x8], 0
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005E0180] sub_005E0180 (104 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E0180(void* self) {
    __asm {
        push -1
        push 0x008a6088
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x8], edi
        lea esi, [edi + 0x4]
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [edi], 0x00968e28
        call ext_0059F5C0
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x4], eax
        mov byte ptr [eax + 0x2d], 1
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, edi
        mov dword ptr [esi + 0x8], 0
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005ED2C0] sub_005ED2C0 (105 bytes)
// __thiscall, ret 8: map-style find on this (head at this+4). Writes a 2-word pair {this or head/node} to out and returns out.
extern "C" __declspec(naked) void __fastcall fn_005ED2C0(void* self) {
    __asm {
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [edx + 0x4]
        sub esp, 0x10
        cmp byte ptr [eax + 0x51], 0x0
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        jne L_phase2
        mov esi, dword ptr [edi]
    L_loop:
        cmp dword ptr [eax + 0xc], esi
        jae L_left
        mov eax, dword ptr [eax + 0x8]
        jmp L_chk
    L_left:
        mov edx, eax
        mov eax, dword ptr [eax]
    L_chk:
        cmp byte ptr [eax + 0x51], 0x0
        je L_loop
    L_phase2:
        mov eax, dword ptr [ecx + 0x4]
        cmp edx, eax
        mov dword ptr [esp + 0xc], edx
        mov dword ptr [esp + 0x8], ecx
        je L_head
        mov esi, dword ptr [edi]
        cmp esi, dword ptr [edx + 0xc]
        jb L_head
        lea ecx, [esp + 0x8]
        jmp L_done
    L_head:
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x14], eax
        lea ecx, [esp + 0x10]
    L_done:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        pop edi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop esi
        add esp, 0x10
        ret 0x8
    }
}

// [0x005E0B20] sub_005E0B20 (108 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E0B20(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_skip_call_005E0B20
        call edi
    L_skip_call_005E0B20:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 51h], 0
        je L_not_nil_005E0B20
        call edi
        pop edi
        pop esi
        ret
    L_not_nil_005E0B20:
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 51h], 0
        jne L_right_nil_005E0B20
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 51h], 0
        jne L_store_left_005E0B20
    L_leftmost_loop_005E0B20:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 51h], 0
        je L_leftmost_loop_005E0B20
    L_store_left_005E0B20:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
    L_right_nil_005E0B20:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 51h], 0
        jne L_done_005E0B20
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_loop2_005E0B20:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jne L_done_005E0B20
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 51h], 0
        je L_loop2_005E0B20
    L_done_005E0B20:
        pop edi
        mov dword ptr [esi + 4], eax
        pop esi
        ret
    }
}

// [0x005E2BE0] sub_005E2BE0 (132 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E2BE0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne SKIP_INV1
        call edi
    SKIP_INV1:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x51], 0x0
        je L_LEFT
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], eax
        cmp byte ptr [eax + 0x51], 0x0
        je L_DONE
    L_INV1:
        call edi
        pop edi
        pop esi
        ret
    L_LEFT:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x51], 0x0
        jne L_CLIMB
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x51], 0x0
        jne L_STORE_C
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    L_RLOOP:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x51], 0x0
        je L_RLOOP
    L_STORE_C:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_CLIMB:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x51], 0x0
        jne L_FIX
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_CLOOP:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax]
        jne L_FIX
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x51], 0x0
        je L_CLOOP
    L_FIX:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x51], 0x0
        jne L_INV1
        mov dword ptr [esi + 0x4], eax
    L_DONE:
        pop edi
        pop esi
        ret
    }
}

// [0x005E02F0] sub_005E02F0 (137 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E02F0(void* self, int edx_unused, int a1) {
    __asm {
        fldz
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x294], eax
        fst dword ptr [ecx + 0x2a4]
        fst dword ptr [ecx + 0x2a0]
        xor eax, eax
        fst dword ptr [ecx + 0x29c]
        fst dword ptr [ecx + 0x2b0]
        fst dword ptr [ecx + 0x2ac]
        fst dword ptr [ecx + 0x2a8]
        fst dword ptr [ecx + 0x2bc]
        fst dword ptr [ecx + 0x2b8]
        fst dword ptr [ecx + 0x2b4]
        mov dword ptr [ecx + 0x2c0], eax
        fst dword ptr [ecx + 0x2cc]
        fst dword ptr [ecx + 0x2c8]
        fst dword ptr [ecx + 0x2c4]
        fst dword ptr [ecx + 0x2d8]
        fst dword ptr [ecx + 0x2d4]
        fst dword ptr [ecx + 0x2d0]
        fst dword ptr [ecx + 0x2e4]
        fst dword ptr [ecx + 0x2e0]
        fstp dword ptr [ecx + 0x2dc]
        mov dword ptr [ecx + 0x2e8], eax
        ret 0x4
    }
}

// [0x005E0EB0] sub_005E0EB0 (149 bytes)
#include <math.h>

extern "C" void ext_006A7250();
extern "C" double mem_00968EC0;
extern "C" double mem_00968EB8;
extern "C" double mem_0092C508;
extern "C" double mem_00932470;
extern "C" float mem_00968E74;
extern "C" float mem_00968E70;

extern "C" __declspec(naked) float __fastcall fn_005E0EB0(void* self, int edx_unused, float* v) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x4]
        push esi
        fld dword ptr [eax]
        mov esi, ecx
        fld dword ptr [eax + 0x8]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x18c]
        test eax, eax
        pop esi
        je else_branch
        cmp byte ptr [eax + 0x4e4], 0
        je else_branch
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_00968EC0]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fcomp qword ptr [mem_00968EB8]
        fnstsw ax
        test ah, 0x41
        mov eax, offset mem_00968E74
        jmp select_ptr
else_branch:
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_0092C508]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fcomp qword ptr [mem_00932470]
        fnstsw ax
        test ah, 0x41
        mov eax, offset mem_00968E70
select_ptr:
        je store_result
        lea eax, [esp + 0x4]
store_result:
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x005E0570] sub_005E0570 (68 bytes)
// __thiscall, ret 0: calls virtual slot +0x70 on this; if false and this+0x190 is non-null,
// calls slot +0x70 on that object; if also false, returns (0x005863A0(obj) == 1). Otherwise returns false.
extern "C" void ext_005863A0();

extern "C" __declspec(naked) void __fastcall fn_005E0570(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x70]
        xor bl, bl
        call edx
        test al, al
        jne short l_false_005E0570
        cmp dword ptr [esi + 0x190], 0x0
        je short l_false_005E0570
        mov ecx, dword ptr [esi + 0x190]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x70]
        call edx
        test al, al
        jne short l_false_005E0570
        mov ecx, dword ptr [esi + 0x190]
        call ext_005863A0
        cmp eax, 0x1
        pop esi
        sete al
        pop ebx
        ret
l_false_005E0570:
        pop esi
        mov al, bl
        pop ebx
        ret
    }
}

// [0x005E09D0] sub_005E09D0 (160 bytes)
extern "C" void ext_00552130();
extern "C" int mem_00B40640;

struct Sub5E09D0_VecHelper {
    float* get_vector(float* out, int idx);
};

struct Sub5E09D0_Sub1 {
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual Sub5E09D0_VecHelper* get_helper(int key);
};

struct Sub5E09D0_Sub2 {
    virtual void d0();
    virtual void d1();
    virtual void apply(float* v);
};

struct Sub5E09D0_Node {
    char pad[4];
    Sub5E09D0_Sub1 sub1;
};

extern "C" void __fastcall fn_005E09D0(void* self) {
    if (!*(unsigned char*)((char*)self + 0x179)) return;
    void* a = *(void**)((char*)self + 0x22c);
    if (!a) return;

    float buf1[4];
    float buf2[4];

    Sub5E09D0_Node* node = *(Sub5E09D0_Node**)((char*)a + 0x20c);
    node->sub1.get_helper(mem_00B40640)->get_vector(buf1, 3);

    Sub5E09D0_Sub1* sub1_self = (Sub5E09D0_Sub1*)((char*)self + 4);
    float* p = sub1_self->get_helper(mem_00B40640)->get_vector(buf2, 3);

    buf1[0] -= p[0];
    buf1[1] -= p[1];
    buf1[2] -= p[2];
    buf1[3] -= p[3];

    Sub5E09D0_Sub2* sub2 = (Sub5E09D0_Sub2*)((char*)self + 0xc);
    sub2->apply(buf1);
}

extern "C" void ext_005B18E0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

// [0x005E0380] sub_005E0380 (176 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E0380(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x877622
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push esi
        push edi
        mov esi, ecx
        push 0x934a98
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        mov edi, dword ptr [esp + 0x50]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x4c], 0
        call ext_005B18E0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], -1
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi + 0x18c]
        test eax, eax
        je short loc_005E041D
        cmp byte ptr [eax + 0x4e4], 0
        je short loc_005E041D
        push 0x934a70
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x4c], 1
        call ext_005B18E0
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x48], -1
        call dword ptr [mem_00924FF4]
loc_005E041D:
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 4
    }
}

// [0x005E46B0] sub_005E46B0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B45F0C;
extern "C" int mem_00B45EF0;

extern "C" __declspec(naked) void __fastcall fn_005E46B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a645e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B45F0C], al
        jne skip_init
        or dword ptr [mem_00B45F0C], eax
        push 0xa911c4
        push offset mem_00B45EF0
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91e480
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B45EF0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

extern "C" void ext_00401FD0();
extern "C" void ext_0047FFA0();
extern "C" void ext_004F9950();
extern "C" int mem_00B40640;

// [0x005E1610] sub_005E1610 (296 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E1610(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0xb0
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc0]
        push edi
        mov esi, ecx
        call ext_00401FD0
        cmp dword ptr [esi + 0x190], 0
        lea ecx, [esi + 4]
        je loc_5E169A
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x10]
        push edx
        push 0
        lea edx, [esp + 0x80]
        push edx
        call eax
        mov eax, dword ptr [mem_00B40640]
        mov esi, dword ptr [esi + 0x190]
        mov edx, dword ptr [esi + 4]
        mov edx, dword ptr [edx + 0x10]
        push eax
        lea ecx, [esi + 4]
        push 0
        lea eax, [esp + 0x40]
        push eax
        call edx
        lea eax, [esp + 8]
        push eax
        lea ecx, [esp + 0x7c]
        call ext_004F9950
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esp + 0x3c]
        call ext_004F9950
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        lea ecx, [esp + 0x10]
        call ext_0047FFA0
        jmp loc_5E16BC

    loc_5E169A:
        mov eax, dword ptr [mem_00B40640]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        push eax
        push 0
        lea eax, [esp + 0x40]
        push eax
        call edx
        lea eax, [esp + 0x28]
        push eax
        lea ecx, [esp + 0x3c]
        call ext_004F9950

    loc_5E16BC:
        fld dword ptr [eax]
        lea ecx, [esp + 8]
        fstp dword ptr [esp + 8]
        push ecx
        fld dword ptr [eax + 4]
        lea edx, [esp + 0x2c]
        fstp dword ptr [esp + 0x10]
        push edx
        fld dword ptr [eax + 8]
        lea ecx, [esp + 0x20]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0xc4]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [eax]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax]
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [eax]
        fmul dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x28]
        call ext_0047FFA0
        fld dword ptr [eax]
        fstp dword ptr [edi]
        fld dword ptr [eax + 4]
        fstp dword ptr [edi + 4]
        fld dword ptr [eax + 8]
        fstp dword ptr [edi + 8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [edi + 0xc]
        pop edi
        pop esi
        add esp, 0xb0
        ret 8
    }
}

// [0x005E4990] sub_005E4990 (97 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E4990(void* self, int edx_unused, void* arg1) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x70]
        call edx
        test al, al
        je loc_005E49EA
        fldz
        mov ecx, dword ptr [esp + 0x18]
        lea eax, [esp + 0x4]
        fst dword ptr [esp + 0x10]
        push eax
        fst dword ptr [esp + 0x10]
        push ecx
        fst dword ptr [esp + 0x10]
        mov ecx, esi
        fstp dword ptr [esp + 0xc]
        call fn_005E1610
        fldz
        mov edx, dword ptr [esi + 0xc]
        fst dword ptr [esp + 0x4]
        mov edx, dword ptr [edx + 8]
        fstp dword ptr [esp + 0xc]
        lea ecx, [esi + 0xc]
        lea eax, [esp + 0x4]
        push eax
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x8c]
        mov ecx, esi
        call edx
loc_005E49EA:
        pop esi
        add esp, 0x10
        ret 4
    }
}

extern "C" void ext_0061E840();
// [0x005EBFA0] sub_005EBFA0 (69 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005EBFA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0061E840
        fldz
        mov dword ptr [esi], 0x96ae94
        mov dword ptr [esi + 0x4], 0x96ae4c
        mov dword ptr [esi + 0x8], 0x96ae0c
        mov dword ptr [esi + 0xc], 0x96adbc
        mov dword ptr [esi + 0x150], 0x96ada4
        fst dword ptr [esi + 0x168]
        fst dword ptr [esi + 0x164]
        mov eax, esi
        fstp dword ptr [esi + 0x160]
        pop esi
        ret
    }
}

extern "C" int mem_00924FF0;
extern "C" int mem_0092510C;
extern "C" int mem_00B465D0;
extern "C" int mem_00B465EC;
extern "C" int mem_00B46608;
extern "C" int mem_00B46624;
extern "C" int mem_00B46640;
extern "C" int mem_00B4665C;
extern "C" int mem_00B46678;
extern "C" int mem_00B46694;
extern "C" int mem_00B466B0;
extern "C" int mem_00B466CC;
extern "C" int mem_00B466E8;
extern "C" int mem_00B46704;
extern "C" int mem_00B46720;
extern "C" int mem_00B4673C;
extern "C" int mem_00B46758;

// [0x005E0770] sub_005E0770 (507 bytes)
// __thiscall, ret 4: compares the std::string argument against a table of 15 static std::string keys
// (via MSVCP80 operator==) and returns the matching code (0,1,2,4,0x100,0x200,0x400,6,7,0x700,0x701,0x702,0x704,0x706);
// the final key returns 0x707 on match and 0x700 otherwise.
extern "C" __declspec(naked) unsigned int __stdcall fn_005E0770(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push offset mem_00B465D0
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        mov edi, dword ptr [mem_0092510C]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L1
        pop edi
        xor eax, eax
        pop esi
        ret 0x4
L1:     push offset mem_00B465EC
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L2
        pop edi
        mov eax, 0x1
        pop esi
        ret 0x4
L2:     push offset mem_00B46608
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L3
        pop edi
        mov eax, 0x2
        pop esi
        ret 0x4
L3:     push offset mem_00B46624
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L4
        pop edi
        mov eax, 0x4
        pop esi
        ret 0x4
L4:     push offset mem_00B46640
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L5
        pop edi
        mov eax, 0x100
        pop esi
        ret 0x4
L5:     push offset mem_00B4665C
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L6
        pop edi
        mov eax, 0x200
        pop esi
        ret 0x4
L6:     push offset mem_00B46678
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L7
        pop edi
        mov eax, 0x400
        pop esi
        ret 0x4
L7:     push offset mem_00B46694
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L8
        pop edi
        mov eax, 0x6
        pop esi
        ret 0x4
L8:     push offset mem_00B466B0
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L9
        pop edi
        mov eax, 0x7
        pop esi
        ret 0x4
L9:     push offset mem_00B466CC
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L10
        pop edi
        mov eax, 0x700
        pop esi
        ret 0x4
L10:    push offset mem_00B466E8
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L11
        pop edi
        mov eax, 0x701
        pop esi
        ret 0x4
L11:    push offset mem_00B46704
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L12
        pop edi
        mov eax, 0x702
        pop esi
        ret 0x4
L12:    push offset mem_00B46720
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L13
        pop edi
        mov eax, 0x704
        pop esi
        ret 0x4
L13:    push offset mem_00B4673C
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        test al, al
        je L14
        pop edi
        mov eax, 0x706
        pop esi
        ret 0x4
L14:    push offset mem_00B46758
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call edi
        add esp, 0x8
        neg al
        pop edi
        pop esi
        sbb eax, eax
        and eax, 0x7
        add eax, 0x700
        ret 0x4
    }
}

extern "C" void ext_005E2B30();
extern "C" void ext_005E2B80();
extern "C" void ext_005E4D90();
extern "C" void ext_006A6DD2();
extern "C" int mem_0088F4C2;
extern "C" int mem_0092C530;
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00928ECC;
extern "C" int mem_00924FE0;
extern "C" int mem_009CDF20;
extern "C" int mem_00928ED8;

// [0x005EC410] sub_005EC410 (508 bytes)
extern "C" __declspec(naked) void __fastcall fn_005EC410(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0088F4C2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x8], 0x3c3c3c2
        jb L_005ec48d
        push offset mem_0092C530
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x50], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x54], 0x1
        mov dword ptr [esp + 0x24], offset mem_00928ECC
        call dword ptr [mem_00924FE0]
        push offset mem_009CDF20
        lea ecx, [esp + 0x24]
        push ecx
        mov byte ptr [esp + 0x58], 0x0
        mov dword ptr [esp + 0x28], offset mem_00928ED8
        call ext_006A6DD2
    L_005ec48d:
        mov edx, dword ptr [esp + 0x64]
        mov eax, dword ptr [edi + 0x4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x6c]
        push 0x0
        push edx
        push eax
        push esi
        push eax
        call ext_005E4D90
        mov ebp, eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, 0x1
        add dword ptr [edi + 0x8], ebx
        cmp esi, eax
        jne L_005ec4c7
        mov dword ptr [eax + 0x4], ebp
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], ebp
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x8], ebp
        jmp L_005ec4e9
    L_005ec4c7:
        cmp byte ptr [esp + 0x68], 0x0
        je L_005ec4db
        mov dword ptr [esi], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        jne L_005ec4e9
        mov dword ptr [eax], ebp
        jmp L_005ec4e9
    L_005ec4db:
        mov dword ptr [esi + 0x8], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax + 0x8]
        jne L_005ec4e9
        mov dword ptr [eax + 0x8], ebp
    L_005ec4e9:
        mov edx, dword ptr [ebp + 0x4]
        cmp byte ptr [edx + 0x50], 0x0
        lea eax, [ebp + 0x4]
        mov esi, ebp
        jne L_005ec5e5
        jmp L_005ec500
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_005ec500:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        cmp ecx, dword ptr [edx]
        jne L_005ec55a
        mov edx, dword ptr [edx + 0x8]
        cmp byte ptr [edx + 0x50], 0x0
        jne L_005ec52b
        mov byte ptr [ecx + 0x50], bl
        mov byte ptr [edx + 0x50], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x50], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_005ec5d5
    L_005ec52b:
        cmp esi, dword ptr [ecx + 0x8]
        jne L_005ec53a
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_005E2B30
    L_005ec53a:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x50], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x50], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, edi
        call ext_005E2B80
        jmp L_005ec5d5
    L_005ec55a:
        mov edx, dword ptr [edx]
        cmp byte ptr [edx + 0x50], 0x0
        jne L_005ec578
        mov byte ptr [ecx + 0x50], bl
        mov byte ptr [edx + 0x50], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x50], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_005ec5d5
    L_005ec578:
        cmp esi, dword ptr [ecx]
        jne L_005ec586
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_005E2B80
    L_005ec586:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x50], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x50], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + 0x51], 0x0
        jne L_005ec5af
        mov dword ptr [edx + 0x4], eax
    L_005ec5af:
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edx + 0x4]
        jne L_005ec5c2
        mov dword ptr [edx + 0x4], ecx
        jmp L_005ec5d0
    L_005ec5c2:
        mov edx, dword ptr [eax + 0x4]
        cmp eax, dword ptr [edx]
        jne L_005ec5cd
        mov dword ptr [edx], ecx
        jmp L_005ec5d0
    L_005ec5cd:
        mov dword ptr [edx + 0x8], ecx
    L_005ec5d0:
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x4], ecx
    L_005ec5d5:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x50], 0x0
        lea eax, [esi + 0x4]
        je L_005ec500
    L_005ec5e5:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [esp + 0x54]
        mov byte ptr [eax + 0x50], bl
        mov eax, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        mov dword ptr [eax], edi
        pop ebx
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret 0x10
    }
}

extern "C" void ext_005E2BE0();
extern "C" void ext_005EC410();

// [0x005ED200] sub_005ED200 (185 bytes)
extern "C" __declspec(naked) void __fastcall fn_005ED200(void* self, int edx_unused, void* out_pair, void* key_ptr) {
    __asm {
        sub esp, 0xc
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x4]
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x51], 0x0
        mov cl, 0x1
        mov byte ptr [esp + 0xc], cl
        jne L_005ed23e
    L_005ed21e:
        mov edx, dword ptr [ebp]
    L_005ed221:
        cmp edx, dword ptr [eax + 0xc]
        mov esi, eax
        setb cl
        test cl, cl
        mov byte ptr [esp + 0xc], cl
        je L_005ed235
        mov eax, dword ptr [eax]
        jmp L_005ed238
    L_005ed235:
        mov eax, dword ptr [eax + 0x8]
    L_005ed238:
        cmp byte ptr [eax + 0x51], 0x0
        je L_005ed221
    L_005ed23e:
        test cl, cl
        mov edx, esi
        mov dword ptr [esp + 0x14], edx
        mov dword ptr [esp + 0x10], edi
        je L_005ed289
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        lea ecx, [esp + 0x10]
        jne L_005ed280
        push ebp
        push esi
        push 0x1
        push ecx
    L_005ed25c:
        mov ecx, edi
        call ext_005EC410
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        pop edi
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        mov byte ptr [eax + 0x8], 0x1
        pop ebp
        add esp, 0xc
        ret 0x8
    L_005ed280:
        call ext_005E2BE0
        mov edx, dword ptr [esp + 0x14]
    L_005ed289:
        mov eax, dword ptr [edx + 0xc]
        cmp eax, dword ptr [ebp]
        jae L_005ed29f
        mov ecx, dword ptr [esp + 0xc]
        push ebp
        push esi
        push ecx
        lea edx, [esp + 0x1c]
        push edx
        jmp L_005ed25c
    L_005ed29f:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        mov byte ptr [eax + 0x8], 0x0
        pop ebp
        add esp, 0xc
        ret 0x8
    }
}

extern "C" void ext_0056B690();
extern "C" void ext_005E0BB0();

// [0x005E0C10] sub_005E0C10 (524 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E0C10(void* self) {
    __asm {
        sub esp, 0x24
        fld dword ptr [esp + 0x28]
        push ebx
        push esi
        mov esi, ecx
        push edi
        sub esp, 0x14
        fstp qword ptr [esp + 0xc]
        lea ebx, [esi + 0x18]
        fld dword ptr [ebx]
        mov eax, esp
        fstp dword ptr [eax]
        lea edi, [esi + 0xc]
        fld dword ptr [ebx + 0x4]
        lea ecx, [esp + 0x38]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ebx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [edi]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [edi]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x20]
        fmul dword ptr [esi + 0x4]
        fld dword ptr [esi + 0x8]
        fmul dword ptr [esp + 0x24]
        fsubp st(1), st
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esi + 0x8]
        fmul dword ptr [esp + 0x28]
        fld dword ptr [esi]
        fmul dword ptr [esp + 0x2c]
        fsubp st(1), st
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esi]
        fmul dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x34]
        fmul dword ptr [esi + 0x4]
        fsubp st(1), st
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x40]
        call ext_0056B690
        test al, al
        je loc_5E0E11
        fld dword ptr [esp + 0x34]
        sub esp, 0x14
        fstp qword ptr [esp + 0xc]
        mov eax, esp
        fld dword ptr [esi]
        lea ecx, [esp + 0x38]
        fstp dword ptr [eax]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ebx + 0x4]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [ebx]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [ebx]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [ebx + 0x8]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [ebx + 0x8]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [ebx + 0x4]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esp + 0x34]
        fld dword ptr [edi + 0x8]
        fmul dword ptr [esp + 0x30]
        fsubp st(1), st
        fstp dword ptr [esp + 0x34]
        fld dword ptr [edi + 0x8]
        fmul dword ptr [esp + 0x2c]
        fld dword ptr [edi]
        fmul dword ptr [esp + 0x28]
        fsubp st(1), st
        fstp dword ptr [esp + 0x30]
        fld dword ptr [edi]
        fmul dword ptr [esp + 0x24]
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esp + 0x20]
        fsubp st(1), st
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x40]
        call ext_0056B690
        test al, al
        je loc_5E0E11
        fld dword ptr [esp + 0x34]
        sub esp, 0x14
        fstp qword ptr [esp + 0xc]
        mov eax, esp
        fld dword ptr [edi]
        lea ecx, [esp + 0x38]
        fstp dword ptr [eax]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [esi + 0x8]
        fmul dword ptr [ebx + 0x4]
        fld dword ptr [ebx + 0x8]
        fmul dword ptr [esi + 0x4]
        fsubp st(1), st
        fstp dword ptr [esp + 0x38]
        fld dword ptr [ebx + 0x8]
        fmul dword ptr [esi]
        fld dword ptr [ebx]
        fmul dword ptr [esi + 0x8]
        fsubp st(1), st
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [ebx]
        fmul dword ptr [esi + 0x4]
        fld dword ptr [ebx + 0x4]
        fmul dword ptr [esi]
        fsubp st(1), st
        fstp dword ptr [esp + 0x40]
        call ext_0056B690
        test al, al
        je loc_5E0E11
        fld dword ptr [esp + 0x34]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_005E0BB0
        test al, al
        je loc_5E0E11
        fld dword ptr [esp + 0x34]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_005E0BB0
        test al, al
        je loc_5E0E11
        fld dword ptr [esp + 0x34]
        push ecx
        mov ecx, ebx
        fstp dword ptr [esp]
        call ext_005E0BB0
        test al, al
        je loc_5E0E11
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 4
    loc_5E0E11:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x24
        ret 4
    }
}

// [0x005E1370] sub_005E1370 (663 bytes)
extern "C" void ext_005E05C0();
extern "C" void ext_004F9950();
extern "C" void ext_0053B470();
extern "C" void ext_00540D60();
extern "C" void ext_00547820();
extern "C" void ext_0056B670();
extern "C" void ext_0047FFA0();
extern "C" void ext_006936C0();
extern "C" void ext_006A7250();
extern "C" int mem_00B40640;
extern "C" int mem_0092A270;
extern "C" int mem_00968EA0;
extern "C" __declspec(naked) void __fastcall fn_005E1370(void* self, int edx_unused, float* a1, float* out) {
    __asm {
        sub esp, 0x128
        push ebx
        mov ebx, dword ptr [esp + 0x134]
        push esi
        push ebx
        mov esi, ecx
        call ext_005E05C0
        cmp dword ptr [esi + 0x190], 0
        je L_end
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x10]
        push edi
        push edx
        lea ecx, [esi + 0x4]
        push 0
        lea edx, [esp + 0xbc]
        push edx
        call eax
        mov eax, dword ptr [mem_00B40640]
        mov esi, dword ptr [esi + 0x190]
        mov edx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edx + 0x10]
        push eax
        lea ecx, [esi + 0x4]
        push 0
        lea eax, [esp + 0xfc]
        push eax
        call edx
        mov eax, dword ptr [esp + 0x138]
        fld dword ptr [eax]
        mov ecx, 0x10
        fadd dword ptr [esp + 0xe4]
        lea esi, [esp + 0xb4]
        lea edi, [esp + 0x74]
        rep movsd
        fstp dword ptr [esp + 0xa4]
        fld dword ptr [eax + 0x4]
        fadd dword ptr [esp + 0xa8]
        fstp dword ptr [esp + 0xa8]
        fld dword ptr [eax + 0x8]
        fadd dword ptr [esp + 0xac]
        lea eax, [esp + 0x64]
        fstp dword ptr [esp + 0xac]
        push eax
        lea ecx, [esp + 0xf8]
        call ext_004F9950
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esp + 0xb8]
        call ext_004F9950
        lea edx, [esp + 0x54]
        push edx
        lea ecx, [esp + 0x78]
        call ext_004F9950
        lea eax, [esp + 0x64]
        push eax
        lea ecx, [esp + 0x28]
        push ecx
        lea ecx, [esp + 0x1c]
        call ext_0047FFA0
        lea edx, [esp + 0x64]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x5c]
        call ext_0047FFA0
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x2c]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        pop edi
        fstp dword ptr [esp + 0xc]
        fldz
        fcomp dword ptr [esp + 0xc]
        fnstsw ax
        test ah, 0x44
        jnp L_152c
        fld dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x18]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        call ext_006A7250
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        push ecx
        fdiv dword ptr [esp + 0x10]
        lea ecx, [esp + 0x54]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fst dword ptr [ebx + 0x10]
        fsub qword ptr [mem_0092A270]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [esp + 0x28]
        call ext_0053B470
        fld dword ptr [eax]
        fstp dword ptr [ebx]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ebx + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ebx + 0x8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [ebx + 0xc]
L_152c:
        fld dword ptr [esp + 0x20]
        lea ecx, [esp + 0x30]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4c]
        call ext_00540D60
        lea ecx, [esp + 0x40]
        call ext_00540D60
        lea edx, [esp + 0x40]
        push edx
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x38]
        call ext_00547820
        fld dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x10]
        sub esp, 0x10
        fld dword ptr [esp + 0x28]
        fld qword ptr [mem_00968EA0]
        fstp qword ptr [esp + 0x8]
        fldz
        fstp qword ptr [esp]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        call ext_006A7250
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        sub esp, 0x8
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        jne L_end
        lea ecx, [esp + 0x40]
        push ecx
        lea edx, [ebx + 0x14]
        push edx
        add ebx, 0x18
        push ebx
        lea ecx, [esp + 0x3c]
        call ext_006936C0
L_end:
        pop esi
        pop ebx
        add esp, 0x128
        ret 0x8
    }
}

extern "C" void ext_005E0AE0();
extern "C" void ext_005E0B00();
extern "C" void ext_005E0B20();
extern "C" int mem_00929218;
extern "C" int mem_009CE164;
extern "C" int mem_00928EE4;
extern "C" void ext_006A5C5C();

// [0x005EC610] sub_005EC610 (696 bytes)
extern "C" __declspec(naked) void __fastcall fn_005EC610(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0088F4C2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x48
        cmp byte ptr [eax + 0x51], 0x0
        push ebp
        mov ebp, ecx
        je L_005ec68e
        push offset mem_00929218
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x54], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x58], 0x1
        mov dword ptr [esp + 0x28], offset mem_00928ECC
        call dword ptr [mem_00924FE0]
        push offset mem_009CE164
        lea ecx, [esp + 0x28]
        push ecx
        mov byte ptr [esp + 0x5c], 0x0
        mov dword ptr [esp + 0x2c], offset mem_00928EE4
        call ext_006A6DD2
    L_005ec68e:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x10], ebx
        call ext_005E0B20
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x51], 0x0
        je L_005ec6ad
        mov edi, dword ptr [ebx + 0x8]
        jmp L_005ec6c5
    L_005ec6ad:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0x51], 0x0
        je L_005ec6ba
        mov edi, eax
        jmp L_005ec6c5
    L_005ec6ba:
        mov ecx, dword ptr [esp + 0x70]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 0x8]
        jne L_005ec730
    L_005ec6c5:
        cmp byte ptr [edi + 0x51], 0x0
        mov esi, dword ptr [ebx + 0x4]
        jne L_005ec6d1
        mov dword ptr [edi + 0x4], esi
    L_005ec6d1:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_005ec6de
        mov dword ptr [eax + 0x4], edi
        jmp L_005ec6e9
    L_005ec6de:
        cmp dword ptr [esi], ebx
        jne L_005ec6e6
        mov dword ptr [esi], edi
        jmp L_005ec6e9
    L_005ec6e6:
        mov dword ptr [esi + 0x8], edi
    L_005ec6e9:
        mov ebx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 0x10]
        jne L_005ec709
        cmp byte ptr [edi + 0x51], 0x0
        je L_005ec6fe
        mov eax, esi
        jmp L_005ec707
    L_005ec6fe:
        push edi
        call ext_005E0B00
        add esp, 0x4
    L_005ec707:
        mov dword ptr [ebx], eax
    L_005ec709:
        mov ebx, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        cmp dword ptr [ebx + 0x8], ecx
        jne L_005ec787
        cmp byte ptr [edi + 0x51], 0x0
        je L_005ec722
        mov eax, esi
        mov dword ptr [ebx + 0x8], eax
        jmp L_005ec787
    L_005ec722:
        push edi
        call ext_005E0AE0
        add esp, 0x4
        mov dword ptr [ebx + 0x8], eax
        jmp L_005ec787
    L_005ec730:
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 0x8]
        jne L_005ec740
        mov esi, ecx
        jmp L_005ec75a
    L_005ec740:
        cmp byte ptr [edi + 0x51], 0x0
        mov esi, dword ptr [ecx + 0x4]
        jne L_005ec74c
        mov dword ptr [edi + 0x4], esi
    L_005ec74c:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x4], ecx
    L_005ec75a:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_005ec767
        mov dword ptr [eax + 0x4], ecx
        jmp L_005ec775
    L_005ec767:
        mov eax, dword ptr [ebx + 0x4]
        cmp dword ptr [eax], ebx
        jne L_005ec772
        mov dword ptr [eax], ecx
        jmp L_005ec775
    L_005ec772:
        mov dword ptr [eax + 0x8], ecx
    L_005ec775:
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov dl, byte ptr [ebx + 0x50]
        mov al, byte ptr [ecx + 0x50]
        mov byte ptr [ecx + 0x50], dl
        mov byte ptr [ebx + 0x50], al
    L_005ec787:
        mov eax, dword ptr [esp + 0x10]
        mov bl, 0x1
        cmp byte ptr [eax + 0x50], bl
        jne L_005ec888
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx + 0x4]
        je L_005ec885
    L_005ec7a2:
        cmp byte ptr [edi + 0x50], bl
        jne L_005ec885
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L_005ec814
        mov eax, dword ptr [esi + 0x8]
        cmp byte ptr [eax + 0x50], 0x0
        jne L_005ec7cc
        mov byte ptr [eax + 0x50], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x50], 0x0
        call ext_005E2B30
        mov eax, dword ptr [esi + 0x8]
    L_005ec7cc:
        cmp byte ptr [eax + 0x51], 0x0
        jne L_005ec844
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0x50], bl
        jne L_005ec7e1
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x50], bl
        je L_005ec840
    L_005ec7e1:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x50], bl
        jne L_005ec7fb
        mov byte ptr [edx + 0x50], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x50], 0x0
        call ext_005E2B80
        mov eax, dword ptr [esi + 0x8]
    L_005ec7fb:
        mov cl, byte ptr [esi + 0x50]
        mov byte ptr [eax + 0x50], cl
        mov byte ptr [esi + 0x50], bl
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x50], bl
        call ext_005E2B30
        jmp L_005ec885
    L_005ec814:
        cmp byte ptr [eax + 0x50], 0x0
        jne L_005ec82b
        mov byte ptr [eax + 0x50], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x50], 0x0
        call ext_005E2B80
        mov eax, dword ptr [esi]
    L_005ec82b:
        cmp byte ptr [eax + 0x51], 0x0
        jne L_005ec844
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x50], bl
        jne L_005ec857
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x50], bl
        jne L_005ec857
    L_005ec840:
        mov byte ptr [eax + 0x50], 0x0
    L_005ec844:
        mov edx, dword ptr [ebp + 0x4]
        mov edi, esi
        cmp edi, dword ptr [edx + 0x4]
        mov esi, dword ptr [esi + 0x4]
        jne L_005ec7a2
        jmp L_005ec885
    L_005ec857:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x50], bl
        jne L_005ec86f
        mov byte ptr [edx + 0x50], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x50], 0x0
        call ext_005E2B30
        mov eax, dword ptr [esi]
    L_005ec86f:
        mov cl, byte ptr [esi + 0x50]
        mov byte ptr [eax + 0x50], cl
        mov byte ptr [esi + 0x50], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x50], bl
        call ext_005E2B80
    L_005ec885:
        mov byte ptr [edi + 0x50], bl
    L_005ec888:
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_006A5C5C
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0x4
        test eax, eax
        pop edi
        pop esi
        pop ebx
        jbe L_005ec8a5
        add eax, -0x1
        mov dword ptr [ebp + 0x8], eax
    L_005ec8a5:
        mov ecx, dword ptr [esp + 0x60]
        mov eax, dword ptr [esp + 0x5c]
        mov edx, dword ptr [esp + 0x64]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax + 0x4], edx
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x54
        ret 0xc
    }
}

extern "C" void ext_004875A0();
extern "C" void ext_0067DAD0();
extern "C" void ext_0067E990();
extern "C" void ext_00694880();
extern "C" int mem_00B40640;

// [0x005E1D50] sub_005E1D50 (184 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E1D50(void* self) {
    __asm {
        sub esp, 0x80
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [ebp + 0x4]
        mov edx, dword ptr [eax + 0x8]
        push esi
        lea ebx, [ebp + 0x4]
        push edi
        push ecx
        mov ecx, ebx
        call edx
        mov esi, eax
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x30]
        mov ecx, 0x10
        lea edi, [esp + 0x50]
        rep movsd
        mov esi, dword ptr [ebp + 0x17c]
        mov ecx, ebx
        add esi, 0x4
        call edx
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0xc]
        push eax
        lea eax, [esp + 0x14]
        push eax
        mov eax, dword ptr [mem_00B40640]
        push eax
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_004875A0
        push eax
        lea ecx, [esp + 0x54]
        call ext_0067E990
        fldz
        fst dword ptr [esp + 0x18]
        lea eax, [esp + 0x10]
        fst dword ptr [esp + 0x14]
        push eax
        fst dword ptr [esp + 0x28]
        lea ecx, [esp + 0x54]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x2c]
        fld1
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x34]
        call ext_0067DAD0
        lea esi, [ebp + 0x2f8]
        push esi
        lea ecx, [esp + 0x14]
        call ext_00694880
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x80
        ret
    }
}

extern "C" void ext_00694B60();
extern "C" int mem_00B40644;

// [0x005E1A50] sub_005E1A50 (200 bytes)
extern "C" __declspec(naked) float __fastcall fn_005E1A50(void* self) {
    __asm {
        sub esp, 0x8c
        fldz
        push ebx
        push ebp
        fst dword ptr [esp + 0x10]
        mov ebp, ecx
        fst dword ptr [esp + 0xc]
        mov ecx, dword ptr [mem_00B40644]
        fstp dword ptr [esp + 0x8]
        mov eax, dword ptr [ebp + 0x4]
        mov edx, dword ptr [eax + 0x8]
        push esi
        lea ebx, [ebp + 0x4]
        push edi
        push ecx
        mov ecx, ebx
        call edx
        mov esi, eax
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x30]
        mov ecx, 0x10
        lea edi, [esp + 0x5c]
        rep movsd
        mov esi, dword ptr [ebp + 0x17c]
        mov ecx, ebx
        add esi, 0x4
        call edx
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0xc]
        push eax
        lea eax, [esp + 0x20]
        push eax
        mov eax, dword ptr [mem_00B40644]
        push eax
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_004875A0
        push eax
        lea ecx, [esp + 0x60]
        call ext_0067E990
        fldz
        fst dword ptr [esp + 0x24]
        lea eax, [esp + 0x1c]
        fst dword ptr [esp + 0x20]
        push eax
        fst dword ptr [esp + 0x34]
        lea ecx, [esp + 0x60]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x38]
        fld1
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x40]
        call ext_0067DAD0
        lea ecx, [esp + 0x10]
        push ecx
        push 0
        lea ecx, [esp + 0x24]
        call ext_00694B60
        fld dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8c
        ret
    }
}

// [0x005E1E10] sub_005E1E10 (207 bytes)
extern "C" void ext_004875A0();
extern "C" void ext_0067DAD0();
extern "C" void ext_0067E990();
extern "C" void ext_00694880();
extern "C" int mem_00B40640;
extern "C" int mem_00B40644;
extern "C" __declspec(naked) void __fastcall fn_005E1E10(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x80
        push ebx
        push esi
        mov ebx, ecx
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [ebx + 0x4]
        mov esi, dword ptr [ebx + 0x180]
        mov edx, dword ptr [eax + 0x8]
        push edi
        lea edi, [ebx + 0x4]
        push ecx
        mov ecx, edi
        add esi, 0x4
        call edx
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0xc]
        push eax
        lea eax, [esp + 0x50]
        push eax
        mov eax, dword ptr [mem_00B40644]
        push eax
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_004875A0
        mov eax, dword ptr [edi]
        mov esi, dword ptr [ebx + 0x17c]
        mov edx, dword ptr [eax + 0x30]
        mov ecx, edi
        add esi, 0x4
        call edx
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0xc]
        push eax
        lea eax, [esp + 0x10]
        push eax
        mov eax, dword ptr [mem_00B40644]
        push eax
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_004875A0
        push eax
        lea ecx, [esp + 0x50]
        call ext_0067E990
        fldz
        fst dword ptr [esp + 0x14]
        lea eax, [esp + 0xc]
        fst dword ptr [esp + 0x10]
        push eax
        fst dword ptr [esp + 0x24]
        lea ecx, [esp + 0x50]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x28]
        fld1
        fst dword ptr [esp + 0x10]
        fst dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x30]
        call ext_0067DAD0
        mov ecx, dword ptr [esp + 0x90]
        push ecx
        lea ecx, [esp + 0x10]
        call ext_00694880
        pop edi
        pop esi
        pop ebx
        add esp, 0x80
        ret 4
    }
}

// [0x005E1EE0] sub_005E1EE0 (33 bytes)
extern "C" void ext_005E1E10();
extern "C" __declspec(naked) float __cdecl fn_005E1EE0() {
    __asm {
        sub esp, 0x0c
        fldz
        lea eax, [esp]
        fst dword ptr [esp + 0x8]
        push eax
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        call ext_005E1E10
        fld dword ptr [esp]
        add esp, 0x0c
        ret
    }
}

// [0x005E1F10] sub_005E1F10 (34 bytes)
extern "C" void ext_005E1E10();
extern "C" __declspec(naked) float __cdecl fn_005E1F10() {
    __asm {
        sub esp, 0x0c
        fldz
        lea eax, [esp]
        fst dword ptr [esp + 0x8]
        push eax
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        call ext_005E1E10
        fld dword ptr [esp + 0x4]
        add esp, 0x0c
        ret
    }
}

// [0x005E1F40] sub_005E1F40 (34 bytes)
extern "C" void ext_005E1E10();
extern "C" __declspec(naked) float __cdecl fn_005E1F40() {
    __asm {
        sub esp, 0x0c
        fldz
        lea eax, [esp]
        fst dword ptr [esp + 0x8]
        push eax
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        call ext_005E1E10
        fld dword ptr [esp + 0x8]
        add esp, 0x0c
        ret
    }
}

// [0x005E25B0] sub_005E25B0 (36 bytes)
extern "C" void ext_00594000();
extern "C" void ext_005E1A50();
extern "C" void ext_00678130();

extern "C" __declspec(naked) void __fastcall fn_005E25B0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, esi
        mov edi, eax
        call ext_005E1A50
        push ecx
        lea ecx, [edi + 2E0h]
        fstp dword ptr [esp]
        call ext_00678130
        pop edi
        pop esi
        ret
    }
}

// [0x005E2620] sub_005E2620 (36 bytes)
extern "C" void ext_00594000();
extern "C" void ext_005E1EE0();
extern "C" void ext_00678130();

extern "C" __declspec(naked) void __fastcall fn_005E2620(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, esi
        mov edi, eax
        call ext_005E1EE0
        push ecx
        lea ecx, [edi + 2E0h]
        fstp dword ptr [esp]
        call ext_00678130
        pop edi
        pop esi
        ret
    }
}

// [0x005E2690] sub_005E2690 (36 bytes)
extern "C" void ext_00594000();
extern "C" void ext_005E1F10();
extern "C" void ext_00678130();

extern "C" __declspec(naked) void __fastcall fn_005E2690(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, esi
        mov edi, eax
        call ext_005E1F10
        push ecx
        lea ecx, [edi + 2E0h]
        fstp dword ptr [esp]
        call ext_00678130
        pop edi
        pop esi
        ret
    }
}

// [0x005E2700] sub_005E2700 (36 bytes)
extern "C" void ext_00594000();
extern "C" void ext_005E1F40();
extern "C" void ext_00678130();

extern "C" __declspec(naked) void __fastcall fn_005E2700(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, esi
        mov edi, eax
        call ext_005E1F40
        push ecx
        lea ecx, [edi + 2E0h]
        fstp dword ptr [esp]
        call ext_00678130
        pop edi
        pop esi
        ret
    }
}

extern "C" void ext_0067E820();
extern "C" void ext_0067E990();
extern "C" int mem_00B40640;

// [0x005E1760] sub_005E1760 (204 bytes)
// __thiscall, ret 0: if this->sub(+4) virtual slot +0x1c on &this->field4 returns true, copies a
// 64-byte value from virtual slot +0x24 into a local, then (if this+0x17c is set) calls helper
// 0x0067E820 and 0x0067E990; finally copies the local result out via virtual slot +0x2c.
extern "C" __declspec(naked) void __fastcall fn_005E1760(void* self) {
    __asm {
        sub esp, 0x44
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 0x4]
        mov edx, dword ptr [eax + 0x1c]
        lea ebx, [ebp + 0x4]
        mov ecx, ebx
        call edx
        test al, al
        je done
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x24]
        push esi
        push edi
        mov ecx, ebx
        call edx
        mov ecx, dword ptr [ebp + 0x17c]
        test ecx, ecx
        mov dword ptr [esp + 0x10], eax
        je skip_helpers
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0xc]
        add ecx, 0x4
        push edx
        call eax
        mov edx, dword ptr [ebx]
        mov esi, eax
        mov eax, dword ptr [edx + 0x2c]
        mov ecx, 0x10
        lea edi, [esp + 0x14]
        rep movsd
        mov ecx, ebx
        call eax
        push eax
        lea ecx, [esp + 0x18]
        call ext_0067E820
        mov ecx, dword ptr [ebp + 0x17c]
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [mem_00B40640]
        mov edx, dword ptr [edx + 0xc]
        add ecx, 0x4
        push eax
        call edx
        mov edi, eax
        mov eax, dword ptr [esp + 0x10]
        mov ecx, 0x10
        lea esi, [esp + 0x14]
        rep movsd
        mov ebp, dword ptr [ebp + 0x17c]
        mov edx, dword ptr [ebp + 0x4]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [ebp + 0x4]
        push eax
        mov eax, dword ptr [mem_00B40640]
        push eax
        call edx
        mov ecx, eax
        call ext_0067E990
    skip_helpers:
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x2c]
        mov ecx, ebx
        call edx
        mov esi, dword ptr [esp + 0x10]
        mov ecx, 0x10
        mov edi, eax
        rep movsd
        pop edi
        pop esi
    done:
        pop ebp
        pop ebx
        add esp, 0x44
        ret
    }
}

// [0x005E1B20] sub_005E1B20 (297 bytes)
extern "C" void ext_004875A0();
extern "C" void ext_00493EE0();
extern "C" void ext_0058A8A0();
extern "C" void ext_00594000();
extern "C" void ext_006619D0();
extern "C" void ext_0067DAD0();
extern "C" void ext_0067E410();
extern "C" void ext_0067E820();
extern "C" void ext_00694B60();
extern "C" int mem_00B40644;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005E1B20(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x8c
        mov eax, dword ptr [mem_00B40644]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [mem_00B40640]
        push eax
        call ext_006619D0
        fld dword ptr [esp + 0x98]
        fstp dword ptr [esp + 0x8]
        lea ecx, [esp + 0x8]
        fldz
        push ecx
        fst dword ptr [esp + 0x10]
        push 0x0
        fst dword ptr [esp + 0x18]
        lea ecx, [esp + 0x1c]
        fld1
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x58]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x38]
        fst dword ptr [esp + 0x3c]
        fst dword ptr [esp + 0x40]
        fst dword ptr [esp + 0x48]
        fst dword ptr [esp + 0x4c]
        fst dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x54]
        call ext_0067E410
        mov edx, dword ptr [edi + 0x4]
        mov esi, dword ptr [edi + 0x17c]
        mov eax, dword ptr [edx + 0x2c]
        lea ecx, [edi + 0x4]
        add esi, 0x4
        call eax
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0xc]
        push eax
        mov eax, dword ptr [mem_00B40640]
        lea ecx, [esp + 0x58]
        push ecx
        push eax
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_004875A0
        push eax
        lea ecx, [esp + 0x18]
        call ext_0067E820
        fldz
        fst dword ptr [esp + 0x5c]
        lea eax, [esp + 0x54]
        fst dword ptr [esp + 0x58]
        push eax
        fst dword ptr [esp + 0x6c]
        lea ecx, [esp + 0x18]
        fst dword ptr [esp + 0x64]
        fst dword ptr [esp + 0x74]
        fstp dword ptr [esp + 0x70]
        fld1
        fst dword ptr [esp + 0x58]
        fst dword ptr [esp + 0x68]
        fstp dword ptr [esp + 0x78]
        call ext_0067DAD0
        lea ecx, [esp + 0x8]
        push ecx
        push 0x0
        lea ecx, [esp + 0x5c]
        call ext_00694B60
        lea edx, [esp + 0x8]
        push edx
        mov ecx, edi
        call ext_0058A8A0
        call ext_00594000
        lea ecx, [eax + 0x258]
        call ext_00493EE0
        pop edi
        pop esi
        add esp, 0x8c
        ret 0x4
    }
}

// [0x005E1F70] sub_005E1F70 (379 bytes)
extern "C" void ext_006619D0();
extern "C" void ext_0067E600();
extern "C" void ext_004875A0();
extern "C" void ext_0067E820();
extern "C" void ext_0067E880();
extern "C" void ext_0067DAD0();
extern "C" void ext_00694B60();
extern "C" void ext_0058A8A0();
extern "C" void ext_00594000();
extern "C" void ext_00493EE0();
extern "C" int mem_00B40644;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005E1F70(void* self) {
    __asm {
        sub esp, 0CCh
        mov eax, dword ptr [mem_00B40644]
        push ebx
        push esi
        push edi
        mov ebx, ecx
        mov ecx, dword ptr [mem_00B40640]
        push eax
        call ext_006619D0
        fld1
        mov ecx, dword ptr [esp+0DCh]
        fst dword ptr [esp+18h]
        fldz
        push ecx
        fst dword ptr [esp+20h]
        lea ecx, [esp+1Ch]
        fst dword ptr [esp+24h]
        fst dword ptr [esp+28h]
        fst dword ptr [esp+2Ch]
        fst dword ptr [esp+34h]
        fst dword ptr [esp+38h]
        fst dword ptr [esp+3Ch]
        fst dword ptr [esp+40h]
        fst dword ptr [esp+48h]
        fst dword ptr [esp+4Ch]
        fst dword ptr [esp+50h]
        fst dword ptr [esp+54h]
        fst dword ptr [esp+18h]
        fst dword ptr [esp+14h]
        fstp dword ptr [esp+10h]
        fst dword ptr [esp+30h]
        fst dword ptr [esp+44h]
        fstp dword ptr [esp+58h]
        call ext_0067E600
        mov edx, dword ptr [ebx+4]
        mov esi, dword ptr [ebx+17Ch]
        mov eax, dword ptr [edx+2Ch]
        lea ecx, [ebx+4]
        add esi, 4
        call eax
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx+0Ch]
        push eax
        mov eax, dword ptr [mem_00B40640]
        lea ecx, [esp+5Ch]
        push ecx
        push eax
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_004875A0
        push eax
        lea ecx, [esp+1Ch]
        call ext_0067E820
        mov eax, dword ptr [ebx+180h]
        mov edx, dword ptr [mem_00B40640]
        lea ecx, [eax+4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax+0Ch]
        push edx
        call eax
        mov esi, eax
        mov ecx, 10h
        lea edi, [esp+98h]
        rep movsd
        lea ecx, [esp+98h]
        call ext_0067E880
        lea ecx, [esp+18h]
        push ecx
        lea edx, [esp+5Ch]
        push edx
        lea ecx, [esp+0A0h]
        call ext_004875A0
        fldz
        mov ecx, 10h
        mov esi, eax
        lea edi, [esp+18h]
        rep movsd
        fst dword ptr [esp+60h]
        fst dword ptr [esp+5Ch]
        fst dword ptr [esp+6Ch]
        fst dword ptr [esp+64h]
        fst dword ptr [esp+74h]
        lea eax, [esp+58h]
        fstp dword ptr [esp+70h]
        push eax
        fld1
        lea ecx, [esp+1Ch]
        fst dword ptr [esp+5Ch]
        fst dword ptr [esp+6Ch]
        fstp dword ptr [esp+7Ch]
        call ext_0067DAD0
        lea ecx, [esp+0Ch]
        push ecx
        push 0
        lea ecx, [esp+60h]
        call ext_00694B60
        lea edx, [esp+0Ch]
        push edx
        mov ecx, ebx
        call ext_0058A8A0
        call ext_00594000
        lea ecx, [eax+258h]
        call ext_00493EE0
        pop edi
        pop esi
        pop ebx
        add esp, 0CCh
        ret 4
    }
}

// [0x005E1090] sub_005E1090 (570 bytes)
extern "C" void ext_0058AF80();
extern "C" void ext_0067E510();
extern "C" void ext_0067E820();
extern "C" void ext_00693DB0();
extern "C" void ext_006944D0();
extern "C" void ext_00694520();
extern "C" int mem_00968ED8;
extern "C" int mem_00968ED0;
extern "C" __declspec(naked) void __fastcall fn_005E1090(void* self) {
    __asm {
        sub esp, 0x74
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x294]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_00968ED8]
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp L_10D5
        mov esi, dword ptr [esi + 0x234]
        fstp st(0)
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esp + 0x7c]
        mov edx, dword ptr [edx]
        lea ecx, [esi + 0x4]
        push eax
        call edx
        pop esi
        add esp, 0x74
        ret 0x4
L_10D5:
        fcomp qword ptr [mem_00968ED0]
        push edi
        mov edi, dword ptr [esp + 0x80]
        push edi
        fnstsw ax
        test ah, 0x41
        jne L_110E
        call ext_0058AF80
        mov esi, dword ptr [esi + 0x298]
        test esi, esi
        je L_12C2
        push esi
        mov ecx, edi
        call ext_0067E820
        pop edi
        pop esi
        add esp, 0x74
        ret 0x4
L_110E:
        mov eax, dword ptr [esi + 0x234]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        fld1
        fst dword ptr [esp + 0x3c]
        lea eax, [esp + 0x3c]
        fldz
        push eax
        fst dword ptr [esp + 0x44]
        mov ecx, esi
        fst dword ptr [esp + 0x48]
        fst dword ptr [esp + 0x4c]
        fst dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x58]
        fst dword ptr [esp + 0x5c]
        fst dword ptr [esp + 0x60]
        fst dword ptr [esp + 0x64]
        fst dword ptr [esp + 0x6c]
        fst dword ptr [esp + 0x70]
        fst dword ptr [esp + 0x74]
        fstp dword ptr [esp + 0x78]
        fst dword ptr [esp + 0x54]
        fst dword ptr [esp + 0x68]
        fstp dword ptr [esp + 0x7c]
        call ext_0058AF80
        mov eax, dword ptr [esi + 0x298]
        test eax, eax
        je L_1181
        push eax
        lea ecx, [esp + 0x40]
        call ext_0067E820
L_1181:
        fldz
        lea ecx, [esp + 0x3c]
        fst dword ptr [esp + 0x38]
        push ecx
        fst dword ptr [esp + 0x38]
        lea ecx, [esp + 0x30]
        fst dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x10]
        call ext_006944D0
        push edi
        lea ecx, [esp + 0x20]
        call ext_006944D0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x70]
        mov ecx, esi
        call eax
        fld dword ptr [esp + 0x8]
        test al, al
        je L_1203
        lea ecx, [esi + 0x2c4]
        push ecx
        add esi, 0x29c
        push esi
        push ecx
        fstp dword ptr [esp]
        lea edx, [esp + 0x38]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        lea ecx, [esp + 0x20]
        call ext_00694520
        jmp L_121A
L_1203:
        push ecx
        fstp dword ptr [esp]
        lea ecx, [esp + 0x30]
        push ecx
        lea edx, [esp + 0x24]
        push edx
        lea ecx, [esp + 0x18]
        call ext_00693DB0
L_121A:
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        call ext_0067E510
        fld dword ptr [edi + 0x30]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edi + 0x34]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x38]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x6c]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmulp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x70]
        fmul st, st(1)
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x74]
        fmul st, st(1)
        fstp dword ptr [esp + 0x34]
        fld1
        fsubrp st(1), st(0)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmul dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x10]
        fmul st, st(1)
        fstp dword ptr [esp + 0x20]
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x1c]
        fadd dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x20]
        fadd dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x24]
        fadd dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [edi + 0x30]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [edi + 0x34]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [edi + 0x38]
L_12C2:
        pop edi
        pop esi
        add esp, 0x74
        ret 0x4
    }
}

// [0x005E25E0] sub_005E25E0 (50 bytes)
extern "C" void ext_00594000();
extern "C" void ext_005E1B20();
extern "C" void ext_006781B0();

typedef void*  (__cdecl    *GetPtrFn005E25E0)();
typedef float  (__thiscall *FloatThisFloatFn005E25E0)(void* ecx_this, float a);
typedef void   (__thiscall *VoidThisFloatFn005E25E0)(void* ecx_this, float a);

extern "C" void __fastcall fn_005E25E0(void* self, int edx_unused, float a1) {
    void* r = ((GetPtrFn005E25E0)ext_00594000)();
    float v = ((FloatThisFloatFn005E25E0)ext_006781B0)(reinterpret_cast<char*>(r) + 0x2e0, a1);
    ((VoidThisFloatFn005E25E0)ext_005E1B20)(self, v);
}

// [0x005E2200] sub_005E2200 (57 bytes)
extern "C" void ext_005E1F70();
extern "C" __declspec(naked) void __fastcall fn_005E2200(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0xc
        fldz
        push esi
        fst dword ptr [esp + 0xc]
        lea eax, [esp + 0x4]
        fst dword ptr [esp + 0x8]
        push eax
        fstp dword ptr [esp + 0x8]
        mov esi, ecx
        call ext_005E1E10
        fld dword ptr [esp + 0x14]
        lea ecx, [esp + 0x4]
        fstp dword ptr [esp + 0x4]
        push ecx
        mov ecx, esi
        call ext_005E1F70
        pop esi
        add esp, 0xc
        ret 4
    }
}

// [0x005E2650] sub_005E2650 (50 bytes)
extern "C" void ext_00594000();
extern "C" void ext_005E2200();
extern "C" void ext_006781B0();

typedef void*  (__cdecl    *GetPtrFn005E2650)();
typedef float  (__thiscall *FloatThisFloatFn005E2650)(void* ecx_this, float a);
typedef void   (__thiscall *VoidThisFloatFn005E2650)(void* ecx_this, float a);

extern "C" void __fastcall fn_005E2650(void* self, int edx_unused, float a1) {
    void* r = ((GetPtrFn005E2650)ext_00594000)();
    float v = ((FloatThisFloatFn005E2650)ext_006781B0)(reinterpret_cast<char*>(r) + 0x2e0, a1);
    ((VoidThisFloatFn005E2650)ext_005E2200)(self, v);
}

// [0x005E2240] sub_005E2240 (57 bytes)
extern "C" void ext_005E1E10();
extern "C" void ext_005E1F70();
extern "C" __declspec(naked) void __fastcall fn_005E2240(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0xc
        fldz
        push esi
        fst dword ptr [esp + 0xc]
        lea eax, [esp + 0x4]
        fst dword ptr [esp + 0x8]
        push eax
        fstp dword ptr [esp + 0x8]
        mov esi, ecx
        call ext_005E1E10
        fld dword ptr [esp + 0x14]
        lea ecx, [esp + 0x4]
        fstp dword ptr [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_005E1F70
        pop esi
        add esp, 0xc
        ret 4
    }
}

// [0x005E2280] sub_005E2280 (57 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E2280(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0xc
        fldz
        push esi
        fst dword ptr [esp + 0xc]
        lea eax, [esp + 0x4]
        fst dword ptr [esp + 0x8]
        push eax
        fstp dword ptr [esp + 0x8]
        mov esi, ecx
        call ext_005E1E10
        fld dword ptr [esp + 0x14]
        lea ecx, [esp + 0x4]
        fstp dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_005E1F70
        pop esi
        add esp, 0xc
        ret 4
    }
}

// [0x005E26C0] sub_005E26C0 (50 bytes)
extern "C" void ext_00594000();
extern "C" void ext_005E2240();
extern "C" void ext_006781B0();

typedef void*  (__cdecl    *GetPtrFn005E26C0)();
typedef float  (__thiscall *FloatThisFloatFn005E26C0)(void* ecx_this, float a);
typedef void   (__thiscall *VoidThisFloatFn005E26C0)(void* ecx_this, float a);

extern "C" void __fastcall fn_005E26C0(void* self, int edx_unused, float a1) {
    void* r = ((GetPtrFn005E26C0)ext_00594000)();
    float v = ((FloatThisFloatFn005E26C0)ext_006781B0)(reinterpret_cast<char*>(r) + 0x2e0, a1);
    ((VoidThisFloatFn005E26C0)ext_005E2240)(self, v);
}

// [0x005E2730] sub_005E2730 (50 bytes)
extern "C" void ext_00594000();
extern "C" void ext_005E2280();
extern "C" void ext_006781B0();

typedef void*  (__cdecl    *GetPtrFn005E2730)();
typedef float  (__thiscall *FloatThisFloatFn005E2730)(void* ecx_this, float a);
typedef void   (__thiscall *VoidThisFloatFn005E2730)(void* ecx_this, float a);

extern "C" void __fastcall fn_005E2730(void* self, int edx_unused, float a1) {
    void* r = ((GetPtrFn005E2730)ext_00594000)();
    float v = ((FloatThisFloatFn005E2730)ext_006781B0)(reinterpret_cast<char*>(r) + 0x2e0, a1);
    ((VoidThisFloatFn005E2730)ext_005E2280)(self, v);
}

// [0x005EDF90] sub_005EDF90 (31 bytes)
extern "C" int mem_00924FDC;
extern "C" void ext_005ED750();

extern "C" void __fastcall fn_005EDF90(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *MfcFn)(void*, int);
    MfcFn f = (MfcFn)mem_00924FDC;
    f((char*)self + 0x198, a1);
    ((void (__thiscall *)(void*))ext_005ED750)(self);
}

// [0x005EDFB0] sub_005EDFB0 (31 bytes)
extern "C" void __fastcall fn_005EDFB0(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *MfcFn)(void*, int);
    MfcFn f = (MfcFn)mem_00924FDC;
    f((char*)self + 0x1b4, a1);
    ((void (__thiscall *)(void*))ext_005ED750)(self);
}
