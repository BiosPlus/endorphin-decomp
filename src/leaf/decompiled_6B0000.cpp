// Decompiled translation unit: src/leaf/decompiled_6B0000.cpp

// [0x006B6270] sub_006B6270 (25 bytes)
extern "C" void ext_006B0DE0();

extern "C" __declspec(naked) void __fastcall fn_006B6270(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 0x114], eax
        mov dword ptr [esp + 4], eax
        add ecx, 0xa8
        jmp ext_006B0DE0
    }
}

// [0x006BB730] sub_006BB730 (31 bytes)
extern "C" void ext_006BB900();

extern "C" __declspec(naked) void __fastcall fn_006BB730(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov dword ptr [eax], 0x6
        mov edx, dword ptr [ecx]
        mov dword ptr [edx + 0x4], 0x1
        mov eax, dword ptr [ecx]
        mov dword ptr [eax + 0x8], 0x0
        jmp ext_006BB900
    }
}

extern "C" void ext_006B7DE0();

// [0x006B6030] sub_006B6030 (32 bytes)
// Stores arg0 into this+0xD8; if this+0xD4 is non-null, replace arg0 with the value
// and tail-jump to 0x006B7DE0 with ecx = this+0xD4; otherwise ret 8.
extern "C" __declspec(naked) void __fastcall fn_006B6030(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 0xd8], eax
        mov ecx, dword ptr [ecx + 0xd4]
        test ecx, ecx
        je done_006B6030
        mov dword ptr [esp + 4], eax
        jmp ext_006B7DE0
    done_006B6030:
        ret 8
    }
}

// [0x006B8B10] sub_006B8B10 (8 bytes)
// Calls thunk_MFC80_ord_1903 (ext_006A5EA8) and returns, popping three stack arguments.
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_006B8B10(void* self) {
    __asm {
        call ext_006A5EA8
        ret 0xc
    }
}

// [0x006B0EB0] sub_006B0EB0 (12 bytes)
extern "C" void ext_006A5EA8();
extern "C" void __fastcall fn_006B0EB0(void* self, int edx_unused, int a1, int a2, int a3) {
    *((unsigned char*)self + 0x60) = 1;
    ext_006A5EA8();
}

// [0x006B1800] sub_006B1800 (12 bytes)
extern "C" void ext_006B16F0();
extern "C" __declspec(naked) void __stdcall fn_006B1800(int a1, int a2, int a3) {
    __asm {
        push 0
        push 0
        call ext_006B16F0
        ret 0Ch
    }
}

// [0x006B4D90] sub_006B4D90 (15 bytes)
extern "C" void __stdcall fn_006B4D90(int a1, int a2, int a3) {
    if (a1 != 0xd) {
        ext_006A5EA8();
    }
}

// [0x006BAF60] sub_006BAF60 (16 bytes)
extern "C" void ext_006E6320();
extern "C" __declspec(naked) void __fastcall fn_006BAF60(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        add ecx, 0x4
        push eax
        call ext_006E6320
        ret 0x4
    }
}

// [0x006BC3A0] sub_006BC3A0 (16 bytes)
extern "C" void ext_006E9430();
extern "C" __declspec(naked) void __fastcall fn_006BC3A0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0x4]
        push eax
        call ext_006E9430
        ret 0x4
    }
}

// [0x006BC3F0] sub_006BC3F0 (16 bytes)
extern "C" void ext_006E9610();

extern "C" __declspec(naked) void __fastcall fn_006BC3F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 4]
        push eax
        call ext_006E9610
        ret 4
    }
}

// [0x006BC400] sub_006BC400 (16 bytes)
extern "C" void ext_006E9680();

extern "C" __declspec(naked) void __fastcall fn_006BC400(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 4]
        push eax
        call ext_006E9680
        ret 4
    }
}

// [0x006BC430] sub_006BC430 (16 bytes)
extern "C" void ext_006E97C0();

extern "C" __declspec(naked) void __fastcall fn_006BC430(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 4]
        push eax
        call ext_006E97C0
        ret 4
    }
}

// [0x006B8790] sub_006B8790 (17 bytes)
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_006B8790(void* self, int edx_unused, void* a1) {
    __asm {
        lea eax, [ecx + 0x5c]
        cmp dword ptr [esp + 0x4], eax
        je done
        call ext_006A5EA8
    done:
        ret 0x4
    }
}

// [0x006B4840] sub_006B4840 (18 bytes)
extern "C" void ext_006A5C6E();
extern "C" void* __fastcall fn_006B4840(void* self) {
    void** s = (void**)self;
    ext_006A5C6E();
    *s = (void*)0x991a6c;
    return s;
}

// [0x006B4E30] sub_006B4E30 (18 bytes)
extern "C" void* __fastcall fn_006B4E30(void* self) {
    void** s = (void**)self;
    ext_006A5C6E();
    *s = (void*)0x991e54;
    return s;
}

// [0x006B4BE0] sub_006B4BE0 (19 bytes)
extern "C" void ext_006B4AA0();
extern "C" void ext_006A5EA8();
extern "C" __declspec(naked) void __fastcall fn_006B4BE0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006B4AA0
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        ret 0x0c
    }
}

// [0x006B1AA0] sub_006B1AA0 (25 bytes)
extern "C" void ext_006B0C40();
extern "C" __declspec(naked) void* __fastcall fn_006B1AA0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_006B0C40
        mov dword ptr [esi], 0x00991768
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x006B1C00] sub_006B1C00 (25 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006B1C00(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_006B0C40
        mov dword ptr [esi], 0x00991784
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x006B1E60] sub_006B1E60 (25 bytes)
extern "C" void ext_006B0C40();
extern "C" __declspec(naked) void* __fastcall fn_006B1E60(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_006B0C40
        mov dword ptr [esi], 0x9917a0
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x006B20A0] sub_006B20A0 (25 bytes)
extern "C" void ext_006B0C40();
extern "C" int mem_009917BC;

extern "C" __declspec(naked) void* __fastcall fn_006B20A0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_006B0C40
        mov dword ptr [esi], offset mem_009917BC
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x006B2400] sub_006B2400 (25 bytes)
extern "C" void ext_006B0C40();
extern "C" __declspec(naked) void* __fastcall fn_006B2400(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_006B0C40
        mov dword ptr [esi], 0x009917f4
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x006B85D0] sub_006B85D0 (25 bytes)
extern "C" void ext_006B95F0();
extern "C" void* __fastcall fn_006B85D0(void* self) {
    ext_006B95F0();
    *(void**)self = (void*)0x992cbc;
    ((int*)self)[23] = 0;
    return self;
}

// [0x006B8B50] sub_006B8B50 (26 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006B87F0();
extern "C" __declspec(naked) void __fastcall fn_006B8B50(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5EA8
        mov ecx, dword ptr [esi + 0x5c]
        test ecx, ecx
        pop esi
        je done_006B8B50
        push 1
        call ext_006B87F0
    done_006B8B50:
        ret 0xc
    }
}

// [0x006B7360] sub_006B7360 (28 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006B6CF0();
extern "C" __declspec(naked) void __fastcall fn_006B7360(void* self) {
    __asm {
        cmp dword ptr [esp + 4], 0
        push esi
        mov esi, ecx
        jne skip_006B7360
        push 0
        call ext_006B6CF0
    skip_006B7360:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        ret 8
    }
}

// [0x006B95F0] sub_006B95F0 (29 bytes)
extern "C" void ext_006A5C6E();
extern "C" __declspec(naked) void* __fastcall fn_006B95F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5C6E
        mov eax, 0x10
        mov dword ptr [esi], 0x99304c
        mov dword ptr [esi + 0x54], eax
        mov dword ptr [esi + 0x58], eax
        mov eax, esi
        pop esi
        ret
    }
}

// [0x006B16A0] sub_006B16A0 (31 bytes)
extern "C" void ext_006A609A();
extern "C" void* __fastcall fn_006B16A0(void* self, int edx_unused, int a1) {
    ext_006A609A();
    *((int*)((unsigned char*)self + 0x74)) = a1;
    *((int*)self) = 0x991564;
    *((unsigned char*)self + 0x70) = 0;
    return self;
}

// [0x006BB790] sub_006BB790 (31 bytes)
extern "C" void ext_006D98E0();
extern "C" __declspec(naked) void __fastcall fn_006BB790(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x4]
        cmp eax, 0x2
        jne done_006BB790
        call ext_006D98E0
        cmp eax, 0x2
        je is2_006BB790
        jmp ext_006D98E0
    is2_006BB790:
        mov eax, 0x1
    done_006BB790:
        ret
    }
}

// [0x006B2590] sub_006B2590 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B2590(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_006B0C40
        mov cl, byte ptr [esp + 0xc]
        mov dword ptr [esi], 0x991810
        mov byte ptr [esi + 0x10], cl
        mov eax, esi
        pop esi
        ret 8
    }
}

// [0x006B4C30] sub_006B4C30 (32 bytes)
extern "C" void ext_006A5C6E();

extern "C" void* __fastcall fn_006B4C30(void* self) {
    unsigned int* p = (unsigned int*)self;
    ext_006A5C6E();
    p[0] = 0x991c5c;
    p[0x5c / 4] = 0;
    p[0x58 / 4] = 0x92a254;
    return self;
}

// [0x006B4FA0] sub_006B4FA0 (33 bytes)
extern "C" int mem_00924494;

extern "C" __declspec(naked) void __fastcall fn_006B4FA0(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x74
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 8], 0
        call dword ptr [mem_00924494]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x006B4D60] sub_006B4D60 (33 bytes)
extern "C" void ext_006A5EDE();
extern "C" int mem_0092571C;
extern "C" int mem_00925704;
extern "C" int __stdcall fn_006B4D60(int a1, int a2, int a3) {
    ext_006A5EDE();
    void* cursor = ((void* (__stdcall*)(void*, const char*))mem_0092571C)(0, (const char*)0x7f00);
    ((int (__stdcall*)(void*))mem_00925704)(cursor);
    return 1;
}

// [0x006B2900] sub_006B2900 (39 bytes)
extern "C" void ext_006B0C40();

extern "C" void* __fastcall fn_006B2900(void* self, int edx_unused, int a1, unsigned char a2, unsigned char a3) {
    unsigned char* p = (unsigned char*)self;
    (void)edx_unused;
    ((void (__stdcall*)(int))ext_006B0C40)(a1);
    *(unsigned int*)p = 0x991830;
    p[0x10] = a2;
    p[0x11] = a3;
    return self;
}

// [0x006B51D0] sub_006B51D0 (40 bytes)
extern "C" void ext_006A5EA8();
extern "C" __declspec(naked) void __fastcall fn_006B51D0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp dword ptr [esp + 4], 0xd
        push esi
        mov esi, ecx
        jne skip_006B51D0
        cmp byte ptr [esi + 0xdc], 0
        jne skip_006B51D0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x13c]
        call edx
    skip_006B51D0:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        ret 0xc
    }
}

// [0x006B4D30] sub_006B4D30 (41 bytes)
// Calls ext_006A5EA8; if eax == -1, returns 0 (ret 4). Otherwise calls ext_006A673C(this, 0x200, 0, 0x20)
// with ecx = saved this, then returns 0 (ret 4).
extern "C" void ext_006A673C();
extern "C" __declspec(naked) void __fastcall fn_006B4D30(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5EA8
        cmp eax, -1
        jne call_006B4D30
        or eax, eax
        pop esi
        ret 4
    call_006B4D30:
        push 0x20
        push 0
        push 0x200
        mov ecx, esi
        call ext_006A673C
        xor eax, eax
        pop esi
        ret 4
    }
}

// [0x006B0CA0] sub_006B0CA0 (42 bytes)
extern "C" void ext_006A5C6E();

extern "C" void* __fastcall fn_006B0CA0(void* self) {
    unsigned int* p = (unsigned int*)self;
    ext_006A5C6E();
    p[0x54 / 4] = 0;
    p[0x58 / 4] = 0;
    p[0x5c / 4] = 0;
    *((unsigned char*)self + 0x60) = 0;
    volatile unsigned int* vp = (volatile unsigned int*)self;
    vp[0] = 0x991364;
    vp[0x68 / 4] = 0;
    vp[0x64 / 4] = 0x92a254;
    return self;
}

// [0x006B7D90] sub_006B7D90 (42 bytes)
extern "C" void ext_006A5F4A();

extern "C" __declspec(naked) void __fastcall fn_006B7D90(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esi + 0x74]
        push eax
        lea ecx, [esi + 0x88]
        call ext_006A5F4A
        cmp dword ptr [esi + 0x1a4], 0
        je done
        mov ecx, dword ptr [esi + 0x1a4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push esi
        call eax
    done:
        pop esi
        ret
    }
}

// [0x006B8B20] sub_006B8B20 (44 bytes)
extern "C" void ext_006A5EA8();
extern "C" int mem_0092561C;

extern "C" __declspec(naked) void __fastcall fn_006B8B20(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov eax, dword ptr [eax]
        test eax, eax
        push esi
        mov esi, ecx
        mov dword ptr [esi + 0x5c], eax
        je skip_iswindow
        mov eax, dword ptr [eax + 0x20]
        push eax
        call dword ptr [mem_0092561C]
        test eax, eax
        jne skip_iswindow
        mov dword ptr [esi + 0x5c], eax
skip_iswindow:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        ret 0x4
    }
}

// [0x006B0E80] sub_006B0E80 (44 bytes)
extern "C" void* __stdcall ext_006A5E00(void* hwnd);
extern "C" void __fastcall ext_006A60D0(void* self);
extern "C" int mem_00925650;

extern "C" void __fastcall fn_006B0E80(void* self, int edx_unused, int a1, int a2, int a3) {
    if (a1 == 0x1b) {
        void* hwnd = *(void**)((char*)self + 0x20);
        void* parent = ((void* (__stdcall*)(void*))mem_00925650)(hwnd);
        void* wnd = ext_006A5E00(parent);
        ext_006A60D0(wnd);
    }
    ((void (__fastcall*)(void*))ext_006A5EA8)(self);
}

// [0x006B9640] sub_006B9640 (46 bytes)
extern "C" int mem_00925694;
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_006B9640(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esi + 0x20]
        push eax
        push ecx
        push 0x19a
        push edx
        call dword ptr [mem_00925694]
        mov eax, dword ptr [esi + 0x20]
        push 0x1
        push 0x0
        push eax
        call dword ptr [mem_00925688]
        pop esi
        ret 0x8
    }
}

// [0x006B7330] sub_006B7330 (46 bytes)
extern "C" int mem_00B5D208;

extern "C" void __fastcall fn_006B7330(void* self, int edx_unused, int a1, int a2) {
    void* parent = ((void* (__stdcall*)(void*))mem_00925650)(*(void**)((char*)self + 0x20));
    char* wnd = (char*)ext_006A5E00(parent);
    ((int (__stdcall*)(void*, unsigned int, int, int))mem_00925694)(*(void**)(wnd + 0x20), (unsigned int)mem_00B5D208, a1, a2);
}

// [0x006B8190] sub_006B8190 (46 bytes)
extern "C" void ext_006A5E4E();
extern "C" __declspec(naked) void __fastcall fn_006B8190(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        lea eax, [ecx + 0x88]
        test eax, eax
        je done
        cmp dword ptr [eax + 0x20], 0x0
        je done
        mov edx, dword ptr [esp + 0xc]
        push 0x214
        push edx
        mov edx, dword ptr [esp + 0x10]
        push edx
        push 0x0
        push 0x0
        push ecx
        mov ecx, eax
        call ext_006A5E4E
done:
        ret 0xc
    }
}

// [0x006B81E0] sub_006B81E0 (46 bytes)
extern "C" void ext_006A5C6E();

extern "C" void* __fastcall fn_006B81E0(void* self) {
    ext_006A5C6E();
    unsigned int* p = (unsigned int*)self;
    p[0] = 0x992af4;
    p[0x60 / 4] = 0;
    p[0x5c / 4] = 0x92a254;
    p[0x54 / 4] = 0x756662;
    p[0x58 / 4] = 0xcdcdcd;
    return self;
}
