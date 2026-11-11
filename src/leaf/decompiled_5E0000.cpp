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
