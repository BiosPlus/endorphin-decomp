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
