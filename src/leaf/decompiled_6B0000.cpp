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

// [0x006B67A0] sub_006B67A0 (49 bytes)
extern "C" int (__stdcall *mem_00925618)(void*, unsigned int, unsigned int, long);
extern "C" void __fastcall fn_006B67A0(char* self, int edx_unused, unsigned int a1, unsigned short a2, unsigned short a3) {
    if (a1 != 0xd) {
        mem_00925618(*(void**)(self + 0xc8), 0x100, a1, (long)(((unsigned int)a3 << 16) | a2));
    }
}

// [0x006B53D0] sub_006B53D0 (49 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006AD0D0();
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_006B53D0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x64], 0
        je skip_invalidate
        mov ecx, dword ptr [esi + 0x58]
        call ext_006AD0D0
        test al, al
        jne skip_invalidate
        push 1
        mov byte ptr [esi + 0x64], al
        mov eax, dword ptr [esi + 0x20]
        push 0
        push eax
        call dword ptr [mem_00925688]
skip_invalidate:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        ret 4
    }
}

// [0x006B2230] sub_006B2230 (53 bytes)
extern "C" void ext_006B0C40();

extern "C" __declspec(naked) void* __fastcall fn_006B2230(void* self, int edx_unused, int a0, unsigned char a1, unsigned char a2, unsigned char a3, unsigned char a4) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_006B0C40
        mov cl, byte ptr [esp + 0xc]
        mov al, byte ptr [esp + 0x10]
        mov dl, byte ptr [esp + 0x14]
        mov byte ptr [esi + 0x10], cl
        mov cl, byte ptr [esp + 0x18]
        mov byte ptr [esi + 0x12], al
        mov dword ptr [esi], 0x9917d8
        mov byte ptr [esi + 0x11], dl
        mov byte ptr [esi + 0x13], cl
        mov eax, esi
        pop esi
        ret 0x14
    }
}

extern "C" void ext_006A64AE();
extern "C" void ext_006A5CEC();

// [0x006B4870] sub_006B4870 (54 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B4870(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x8]
        push esi
        push 0x0
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push edx
        push eax
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x40
        call ext_006A64AE
        push eax
        push 0x0
        mov ecx, esi
        call ext_006A5CEC
        pop esi
        ret 0x10
    }
}

// [0x006B7420] sub_006B7420 (60 bytes)
extern "C" __declspec(naked) int __fastcall fn_006B7420(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov dl, byte ptr [ecx + 0x60]
        test dl, dl
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x68], eax
        jne L_active
        cmp eax, 0xd
        je L_zero
        or eax, -1
        ret 0x8
    L_zero:
        test dl, dl
        je L_ret0
    L_active:
        cmp eax, 0xd
        je L_ret0
        push 0
        push eax
        mov eax, dword ptr [ecx + 0x90]
        push 0x100
        push eax
        call dword ptr [mem_00925618]
    L_ret0:
        xor eax, eax
        ret 0x8
    }
}

// [0x006B87B0] sub_006B87B0 (60 bytes)
extern "C" void ext_006A5E72();
extern "C" int mem_0092561C;
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_006B87B0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        lea esi, [edi + 0x5c]
        test esi, esi
        jne short L_006B87BF
        xor eax, eax
        jmp short L_006B87C2
L_006B87BF:
        mov eax, dword ptr [esi + 0x20]
L_006B87C2:
        push eax
        call dword ptr [mem_0092561C]
        test eax, eax
        je short L_006B87E9
        mov eax, dword ptr [edi + 0x7c]
        push 0x0
        push 0x0
        push 0x184
        push eax
        call dword ptr [mem_00925694]
        push 0x0
        mov ecx, esi
        call ext_006A5E72
L_006B87E9:
        pop edi
        pop esi
        ret
    }
}

// [0x006B2F70] sub_006B2F70 (61 bytes)
extern "C" void ext_006A6E8C();
extern "C" int mem_0092414C;

extern "C" __declspec(naked) int __fastcall fn_006B2F70(void* self) {
    __asm {
        sub esp, 0x94
        push 0x90
        lea eax, [esp + 0x8]
        push 0x0
        push eax
        call ext_006A6E8C
        add esp, 0xc
        lea ecx, [esp]
        push ecx
        mov dword ptr [esp + 0x4], 0x94
        call dword ptr [mem_0092414C]
        xor eax, eax
        cmp dword ptr [esp + 0x10], 0x2
        sete al
        add esp, 0x94
        ret
    }
}

// [0x006B4DA0] sub_006B4DA0 (63 bytes)
extern "C" void ext_006A6172();
extern "C" void ext_006A7D30();
extern "C" void ext_006AD1C0();
extern "C" int mem_0092566C;

struct Dec6B4DA0Rect { long left; long top; long right; long bottom; };

extern "C" int __fastcall fn_006B4DA0(void* self, int edx_unused, void* a1) {
    Dec6B4DA0Rect rc;
    void* hwnd = *(void**)((char*)self + 0x20);
    typedef int (__stdcall *PFN_GetClientRect)(void*, Dec6B4DA0Rect*);
    (*(PFN_GetClientRect*)&mem_0092566C)(hwnd, &rc);
    void* sel = *(void**)((char*)self + 0x54);
    void* v = ((void* (__thiscall*)(void*))ext_006AD1C0)(sel);
    void* r = ((void* (__thiscall*)(void*))ext_006A7D30)(v);
    ((void (__thiscall*)(void*, Dec6B4DA0Rect*, void*))ext_006A6172)(a1, &rc, r);
    return 1;
}

// [0x006B1750] sub_006B1750 (64 bytes)
extern "C" void ext_006A5EA8();
extern "C" int mem_009255E8;

extern "C" __declspec(naked) void __fastcall fn_006B1750(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x70], 0x0
        jne short L_006B1782
        mov eax, dword ptr [esi + 0x20]
        lea ecx, [esp + 0x4]
        push ecx
        mov byte ptr [esi + 0x70], 0x1
        mov dword ptr [esp + 0x8], 0x10
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0xc], 0x2
        call dword ptr [mem_009255E8]
L_006B1782:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        add esp, 0x10
        ret 0xc
    }
}

// [0x006B52D0] sub_006B52D0 (65 bytes)
extern "C" void ext_006A5EA8();
extern "C" int mem_00925694;

extern "C" void __fastcall fn_006B52D0(void* self, int edx_unused, int a1) {
    ext_006A5EA8();
    char* p = (char*)self;
    if (*(unsigned char*)(p + 0xdc) != 0) {
        void* hwnd = *(void**)(p + 0x88);
        typedef int (__stdcall *PFN_SendMessageA)(void*, unsigned int, unsigned int, long);
        PFN_SendMessageA send = (PFN_SendMessageA)mem_00925694;
        send(hwnd, 0xb1, 0, 0);
        send(*(void**)(p + 0x88), 0xb7, 0, 0);
    }
}

// [0x006B12F0] sub_006B12F0 (68 bytes)
// Rounds a double arg to nearest int: n = ext_006A6DE0(x) (helper pops x from the x87 stack, returns int in eax);
// if |x - n| > mem_00993828 (0.5) then n += (x < 0 ? -1 : +1). Returns n.
extern "C" void ext_006A6DE0();
extern "C" int mem_00993828;

extern "C" __declspec(naked) int __cdecl fn_006B12F0(double x) {
    __asm {
        fld qword ptr [esp + 4]
        fld st(0)
        call ext_006A6DE0
        mov ecx, eax
        mov dword ptr [esp + 4], ecx
        fild dword ptr [esp + 4]
        fsubr st, st(1)
        fabs
        fcomp qword ptr [mem_00993828]
        fnstsw ax
        test ah, 0x5
        jp short far_006B12F0
        fstp st(0)
        mov eax, ecx
        ret
far_006B12F0:
        fldz
        fcompp
        fnstsw ax
        test ah, 0x5
        jp short neg_006B12F0
        mov eax, 0x1
        add eax, ecx
        ret
neg_006B12F0:
        or eax, -0x1
        add eax, ecx
        ret
    }
}

// [0x006B0E30] sub_006B0E30 (69 bytes)
extern "C" int mem_00925694;
extern "C" void ext_006A663A();

extern "C" __declspec(naked) void __fastcall fn_006B0E30(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_006A663A
        cmp byte ptr [esi + 0x60], 0x0
        jne clear_flag
        mov ecx, dword ptr [esi + 0x20]
        push edi
        mov edi, dword ptr [mem_00925694]
        push -0x1
        push 0x0
        push 0xb1
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x20]
        push 0x0
        push 0x0
        push 0xb7
        push edx
        call edi
        pop edi
        pop esi
        ret 0x4
clear_flag:
        mov byte ptr [esi + 0x60], 0x0
        pop esi
        ret 0x4
    }
}

// [0x006B8B70] sub_006B8B70 (73 bytes)
extern "C" int mem_0092561C;
extern "C" int mem_009256CC;
extern "C" int mem_00925694;

extern "C" __declspec(naked) int __fastcall fn_006B8B70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        test esi, esi
        jne L_has_self
        xor eax, eax
        jmp L_push_hwnd
    L_has_self:
        mov eax, dword ptr [esi + 0x20]
    L_push_hwnd:
        push eax
        call dword ptr [mem_0092561C]
        test eax, eax
        je L_fail
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_009256CC]
        test eax, eax
        je L_fail
        mov ecx, dword ptr [esi + 0x20]
        push 0x0
        push 0x0
        push 0x18b
        push ecx
        call dword ptr [mem_00925694]
        test eax, eax
        je L_fail
        mov eax, 0x1
        pop esi
        ret
    L_fail:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x006B0720] sub_006B0720 (74 bytes)
extern "C" void ext_006A7BF0();
extern "C" void ext_006A5FFE();
extern "C" int mem_00924094;
extern "C" int mem_009240D4;

extern "C" __declspec(naked) void __fastcall fn_006B0720(void* self) {
    __asm {
        sub esp, 0x3c
        push esi
        lea esi, [ecx + 0x90]
        test esi, esi
        je init_006B0720
        cmp dword ptr [esi + 0x4], 0x0
        jne done_006B0720
    init_006B0720:
        mov ecx, dword ptr [ecx + 0x14]
        call ext_006A7BF0
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x4]
        push ecx
        push 0x3c
        push edx
        call dword ptr [mem_00924094]
        lea eax, [esp + 0x4]
        push eax
        mov byte ptr [esp + 0x1d], 0x0
        call dword ptr [mem_009240D4]
        push eax
        mov ecx, esi
        call ext_006A5FFE
    done_006B0720:
        pop esi
        add esp, 0x3c
        ret
    }
}

// [0x006B0DE0] sub_006B0DE0 (76 bytes)
extern "C" void ext_006A6004();
extern "C" void ext_006A7D50();
extern "C" void ext_006AD1C0();
extern "C" int mem_00925658;
extern "C" __declspec(naked) void __fastcall fn_006B0DE0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        push edi
        mov dword ptr [esi + 0x54], ecx
        call ext_006AD1C0
        mov ecx, dword ptr [esi + 0x20]
        mov dword ptr [esi + 0x58], eax
        mov eax, dword ptr [eax + 0x19c]
        push ecx
        mov dword ptr [esi + 0x5c], eax
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov ecx, dword ptr [esi + 0x54]
        mov edi, eax
        call ext_006AD1C0
        mov ecx, eax
        call ext_006A7D50
        mov edx, dword ptr [edi]
        push eax
        mov eax, dword ptr [edx + 0x38]
        mov ecx, edi
        call eax
        pop edi
        pop esi
        ret 4
    }
}

// [0x006B16F0] sub_006B16F0 (82 bytes)
extern "C" __declspec(naked) int __fastcall fn_006B16F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 2Ch
        mov eax, dword ptr [ecx + 74h]
        xor edx, edx
        cmp eax, edx
        mov byte ptr [ecx + 70h], dl
        mov dword ptr [esp], 2Ch
        jne short L_nonnull
        mov dword ptr [esp + 8], edx
        jmp short L_second
L_nonnull:
        push esi
        mov esi, dword ptr [eax + 20h]
        mov dword ptr [esp + 0Ch], esi
        pop esi
L_second:
        cmp eax, edx
        jne short L_nonnull2
        mov dword ptr [esp + 0Ch], edx
        jmp short L_send
L_nonnull2:
        mov eax, dword ptr [eax + 20h]
        mov dword ptr [esp + 0Ch], eax
L_send:
        mov ecx, dword ptr [ecx + 20h]
        lea eax, [esp]
        push eax
        push edx
        push 411h
        push ecx
        call dword ptr [mem_00925694]
        xor eax, eax
        add esp, 2Ch
        ret 8
    }
}

// [0x006B83F0] sub_006B83F0 (84 bytes)
extern "C" void ext_008727F0();

extern "C" void __fastcall fn_006B83F0(void* self, int edx_unused, int a1, int a2, int a3) {
    int out;
    ((void (__fastcall*)(void*))ext_006A5EA8)(self);
    int r = ((int (__thiscall*)(void*, int, int, int*))ext_008727F0)(self, a2, a3, &out);
    ((int (__stdcall*)(void*, unsigned int, int, int))mem_00925694)(*(void**)((char*)self + 0x20), 0x186, r, 0);
    void* target = *(void**)((char*)self + 0x38);
    if (target == 0) {
        target = ((void* (__stdcall*)(void*))mem_00925650)(*(void**)((char*)self + 0x20));
    }
    void* wnd = ext_006A5E00(target);
    ext_006A60D0(wnd);
}

// [0x006B8390] sub_006B8390 (87 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6010();
extern "C" int mem_0092407C;

extern "C" __declspec(naked) int __fastcall fn_006B8390(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [edi + 0x58]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ecx
        mov ecx, esi
        call edx
        lea esi, [edi + 0x5c]
        test esi, esi
        je skip_brush
        cmp dword ptr [esi + 0x4], 0x0
        je skip_brush
        mov ecx, esi
        call ext_006A5FF2
    skip_brush:
        mov edi, dword ptr [edi + 0x54]
        push edi
        call dword ptr [mem_0092407C]
        push eax
        mov ecx, esi
        call ext_006A5FFE
        test esi, esi
        jne has_obj
        pop edi
        xor eax, eax
        pop esi
        ret 0x8
    has_obj:
        mov eax, dword ptr [esi + 0x4]
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x006B0CD0] sub_006B0CD0 (88 bytes)
extern "C" void ext_006A5F38();
extern "C" void ext_006A5FF2();

extern "C" __declspec(naked) void __fastcall fn_006B0CD0(void* self) {
    __asm {
        push -1
        push 0x008B77E8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00991364
        lea ecx, [esi + 0x64]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x0092A23C
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A5F38
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B4C50] sub_006B4C50 (88 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A641E();

extern "C" __declspec(naked) void __fastcall fn_006B4C50(void* self) {
    __asm {
        push -1
        push 0x008B7A68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00991C5C
        lea ecx, [esi + 0x58]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x0092A23C
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A641E
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B8210] sub_006B8210 (88 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A64A2();

extern "C" __declspec(naked) void __fastcall fn_006B8210(void* self) {
    __asm {
        push -1
        push 0x008B7D48
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00992AF4
        lea ecx, [esi + 0x5C]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x0092A23C
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A64A2
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B1790] sub_006B1790 (110 bytes)
extern "C" int mem_00925630;
extern "C" int mem_0092570C;
extern "C" int mem_00925694;
extern "C" void ext_006B16F0();

extern "C" __declspec(naked) void __fastcall fn_006B1790(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 8
        push esi
        push 0
        push 0
        mov esi, ecx
        call ext_006B16F0
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        lea edx, [esp + 0x4]
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esi + 0x20]
        push edx
        push eax
        mov dword ptr [esp + 0x10], ecx
        call dword ptr [mem_00925630]
        mov edx, dword ptr [esi + 0x74]
        mov eax, dword ptr [edx + 0x20]
        lea ecx, [esp + 0x4]
        push ecx
        push eax
        call dword ptr [mem_0092570C]
        movzx ecx, word ptr [esp + 0x8]
        movzx edx, word ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x10]
        shl ecx, 0x10
        or ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx + 0x20]
        push eax
        push 0x201
        push edx
        call dword ptr [mem_00925694]
        pop esi
        add esp, 0x8
        ret 0xc
    }
}

// [0x006B2BC0] sub_006B2BC0 (88 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006AD3C0();

extern "C" __declspec(naked) void __fastcall fn_006B2BC0(void* self) {
    __asm {
        push -1
        push 0x008B7908
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00991878
        lea ecx, [esi + 0x50]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x0092A23C
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006AD3C0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B40A0] sub_006B40A0 (116 bytes)
extern "C" int mem_00925270;

extern "C" __declspec(naked) bool __fastcall fn_006B40A0(void* self, int edx_unused, void* out) {
    __asm {
        sub esp, 0x24
        push ecx
        lea eax, [esp + 0x4]
        push eax
        call dword ptr [mem_00925270]
        add esp, 0x8
        test eax, eax
        je L_006B40BE
        xor al, al
        add esp, 0x24
        ret 0x4
L_006B40BE:
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        add ecx, 0x76c
        mov word ptr [eax], cx
        movzx ecx, word ptr [esp + 0x18]
        add edx, 0x1
        mov word ptr [eax + 0x2], dx
        movzx edx, word ptr [esp + 0xc]
        mov word ptr [eax + 0x4], cx
        movzx ecx, word ptr [esp + 0x8]
        mov word ptr [eax + 0x6], dx
        movzx edx, word ptr [esp + 0x4]
        mov word ptr [eax + 0x8], cx
        movzx ecx, word ptr [esp]
        mov word ptr [eax + 0xa], dx
        mov word ptr [eax + 0xc], cx
        mov word ptr [eax + 0xe], 0x0
        mov al, 0x1
        add esp, 0x24
        ret 0x4
    }
}

// [0x006B69B0] sub_006B69B0 (119 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_006B0CA0();

extern "C" __declspec(naked) void __fastcall fn_006B69B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x008B7C23
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_006A5C6E
        xor eax, eax
        mov dword ptr [esi], 0x0099263C
        mov dword ptr [esi + 0x54], eax
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x5C], eax
        mov dword ptr [esi + 0x58], 0x0092A5D4
        mov cl, byte ptr [esp + 0x18]
        mov dl, byte ptr [esp + 0x1C]
        mov byte ptr [esi + 0x60], cl
        lea ecx, [esi + 0x70]
        mov byte ptr [esp + 0x10], 0x1
        mov byte ptr [esi + 0x61], dl
        mov dword ptr [esi + 0x64], 0xFFFFFFFF
        mov dword ptr [esi + 0x68], eax
        mov dword ptr [esi + 0x6C], eax
        call ext_006B0CA0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x006B0EC0] sub_006B0EC0 (120 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A7D30();
extern "C" void ext_006A7D50();
extern "C" void ext_006AD1C0();
extern "C" int mem_0092407C;

extern "C" __declspec(naked) void* __fastcall fn_006B0EC0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x54]
        push edi
        call ext_006AD1C0
        mov ecx, eax
        call ext_006A7D30
        mov ecx, dword ptr [esi + 0x54]
        mov ebx, eax
        call ext_006AD1C0
        mov ecx, eax
        call ext_006A7D50
        mov edi, dword ptr [esp + 0x14]
        mov ebp, eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x34]
        push ebx
        mov ecx, edi
        call edx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x38]
        push ebp
        mov ecx, edi
        call edx
        add esi, 0x64
        je skip_wait_6ec0
        cmp dword ptr [esi + 0x4], 0x0
        je skip_wait_6ec0
        mov ecx, esi
        call ext_006A5FF2
    skip_wait_6ec0:
        push ebx
        call dword ptr [mem_0092407C]
        push eax
        mov ecx, esi
        call ext_006A5FFE
        test esi, esi
        jne has_obj_6ec0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x8
    has_obj_6ec0:
        mov eax, dword ptr [esi + 0x4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x006B06A0] sub_006B06A0 (127 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006B3350();
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006B06A0(void* self) {
    __asm {
        push -1
        push 0x008B77A7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x009911EC
        lea ecx, [esi + 0xa4]
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_009242F4]
        lea ecx, [esi + 0xa0]
        call dword ptr [mem_009242F4]
        lea ecx, [esi + 0x90]
        mov dword ptr [ecx], 0x0092A23C
        call ext_006A5FF2
        lea ecx, [esi + 0x8c]
        call dword ptr [mem_009242F4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006B3350
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B6A30] sub_006B6A30 (128 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6310();
extern "C" void ext_006B0CD0();

extern "C" __declspec(naked) void __fastcall fn_006B6A30(void* self) {
    __asm {
        push -1
        push 0x008B7C4E
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0099263C
        cmp byte ptr [esi + 0x61], 0
        mov dword ptr [esp + 0x10], 0x2
        jne skip_del_6a30
        mov ecx, dword ptr [esi + 0x6C]
        test ecx, ecx
        je skip_del_6a30
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
    skip_del_6a30:
        lea ecx, [esi + 0x70]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006B0CD0
        lea ecx, [esi + 0x58]
        mov byte ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x0092A23C
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xFFFFFFFF
        call ext_006A6310
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B4CB0] sub_006B4CB0 (128 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006AD940();
extern "C" void ext_006B4430();
extern "C" void ext_006B4440();
extern "C" void ext_008727BA();
extern "C" int mem_00925650;
extern "C" int mem_00B5D200;

extern "C" __declspec(naked) void __fastcall fn_006B4CB0(void* self) {
    __asm {
        sub esp, 0x8
        push esi
        push edi
        mov esi, ecx
        call ext_006A5EA8
        mov ecx, dword ptr [esi + 0x54]
        call ext_006B4440
        mov ecx, eax
        call ext_006B4430
        mov edi, eax
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        call ext_008727BA
        movzx eax, word ptr [esp + 0x8]
        movzx edx, word ptr [esp + 0xc]
        shl eax, 0x10
        or eax, edx
        cmp eax, dword ptr [edi]
        je short L_006B4D28
        mov dword ptr [edi], eax
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x54]
        mov edi, eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD940
        mov ecx, dword ptr [mem_00B5D200]
        mov edx, dword ptr [edi + 0x20]
        push 0x0
        push eax
        push ecx
        push edx
        call dword ptr [mem_00925618]
    L_006B4D28:
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x006B6480] sub_006B6480 (129 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A7D30();
extern "C" void ext_006A7D50();
extern "C" void ext_006AD1C0();
extern "C" int mem_0092407C;

extern "C" __declspec(naked) void* __fastcall fn_006B6480(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x114]
        push edi
        call ext_006AD1C0
        mov ecx, eax
        call ext_006A7D30
        mov ecx, dword ptr [esi + 0x114]
        mov ebx, eax
        call ext_006AD1C0
        mov ecx, eax
        call ext_006A7D50
        mov edi, dword ptr [esp + 0x14]
        mov ebp, eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x34]
        push ebx
        mov ecx, edi
        call edx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x38]
        push ebp
        mov ecx, edi
        call edx
        add esi, 0x118
        je skip_wait_6480
        cmp dword ptr [esi + 0x4], 0x0
        je skip_wait_6480
        mov ecx, esi
        call ext_006A5FF2
    skip_wait_6480:
        push ebx
        call dword ptr [mem_0092407C]
        push eax
        mov ecx, esi
        call ext_006A5FFE
        test esi, esi
        jne has_obj_6480
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xc
    has_obj_6480:
        mov eax, dword ptr [esi + 0x4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xc
    }
}

// [0x006B5090] sub_006B5090 (132 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6310();
extern "C" void ext_006B0CD0();

extern "C" __declspec(naked) void __fastcall fn_006B5090(void* self) {
    __asm {
        push -1
        push 0x8b7abe
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x99202c
        mov dword ptr [esi + 0x54], 0x992024
        mov ecx, dword ptr [esi + 0xd4]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 0x2
        je skip_006B5090
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 1
        call edx
    skip_006B5090:
        lea ecx, [esi + 0x68]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006B0CD0
        lea ecx, [esi + 0x5c]
        mov byte ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006A6310
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B0490] sub_006B0490 (136 bytes)
extern "C" int mem_0092478C;
extern "C" int mem_00924788;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924784;
extern "C" int mem_00924780;

extern "C" __declspec(naked) void* __cdecl fn_006B0490(void* a1, void* a2) {
    __asm {
        push -1
        push 0x879e7a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_0092478C]
        mov edi, dword ptr [esp + 0x1c]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924788]
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esp + 0x8], 0x1
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924300]
        mov esi, dword ptr [esp + 0x24]
        push eax
        push esi
        call dword ptr [mem_00924784]
        add esp, 0x4
        push eax
        push esi
        push edi
        call dword ptr [mem_00924780]
        mov ecx, dword ptr [esp + 0x20]
        add esp, 0x14
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B6C60] sub_006B6C60 (138 bytes)
extern "C" int mem_009256C0;
extern "C" int mem_00925694;
extern "C" void* __stdcall ext_006A5E00(void* hwnd);

extern "C" __declspec(naked) void __fastcall fn_006B6C60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x6c]
        mov ecx, dword ptr [esi + 0x20]
        mov dword ptr [eax + 0x38], ecx
        mov eax, dword ptr [esi + 0x6c]
        test eax, eax
        je L_6B6C79
        cmp dword ptr [eax + 0x20], 0x0
        jne L_6B6CBC
    L_6B6C79:
        mov eax, dword ptr [esi + 0x20]
        mov ecx, dword ptr [esi + 0x6c]
        mov edx, dword ptr [ecx]
        push 0x0
        push 0x1e240
        push eax
        mov eax, dword ptr [edx + 0x64]
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x40b00000
        push 0x0
        push 0x992778
        push 0x88
        call eax
        mov eax, dword ptr [esi + 0x6c]
        mov ecx, dword ptr [eax + 0x20]
        push 0x0
        push ecx
        call dword ptr [mem_009256C0]
        push eax
        call ext_006A5E00
    L_6B6CBC:
        lea eax, [esi + 0x58]
        test eax, eax
        mov esi, dword ptr [esi + 0x6c]
        jne L_6B6CD6
        mov edx, dword ptr [esi + 0x20]
        push eax
        push eax
        push 0x30
        push edx
        call dword ptr [mem_00925694]
        pop esi
        ret
    L_6B6CD6:
        mov eax, dword ptr [eax + 0x4]
        mov edx, dword ptr [esi + 0x20]
        push 0x0
        push eax
        push 0x30
        push edx
        call dword ptr [mem_00925694]
        pop esi
        ret
    }
}

// [0x006B6290] sub_006B6290 (138 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_006B0CA0();

extern "C" __declspec(naked) void __fastcall fn_006B6290(void* self) {
    __asm {
        push -1
        push 0x008B7B93
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_006A5C6E
        lea edi, [esi + 0x54]
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esi], 0x00992404
        call ext_006A5C6E
        mov dword ptr [edi], 0x00937484
        lea ecx, [esi + 0xa8]
        mov byte ptr [esp + 0x18], 0x1
        call ext_006B0CA0
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x114], ebx
        mov dword ptr [esi + 0x11c], ebx
        mov dword ptr [esi + 0x118], 0x0092A254
        mov dword ptr [esi + 0x124], ebx
        pop edi
        mov dword ptr [esi + 0x120], 0x0092A5D4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B6320] sub_006B6320 (142 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6310();
extern "C" void ext_006A6808();
extern "C" void ext_006B0CD0();

extern "C" __declspec(naked) void __fastcall fn_006B6320(void* self) {
    __asm {
        push -1
        push 0x008B7BCF
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x00992404
        lea ecx, [esi + 0x120]
        mov dword ptr [esp + 0x10], 3
        mov dword ptr [ecx], 0x0092A23C
        call ext_006A5FF2
        lea ecx, [esi + 0x118]
        mov byte ptr [esp + 0x10], 2
        mov dword ptr [ecx], 0x0092A23C
        call ext_006A5FF2
        lea ecx, [esi + 0xa8]
        mov byte ptr [esp + 0x10], 1
        call ext_006B0CD0
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x10], 0
        call ext_006A6808
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A6310
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B5140] sub_006B5140 (143 bytes)
extern "C" void ext_006A6184();
extern "C" int mem_00925694;

extern "C" int __fastcall fn_006B5140(void* self, int edx_unused, int a1) {
    int r = ((int (__fastcall*)(void*))ext_006A5EA8)(self);
    if (r == -1) {
        return r;
    }
    if (*((unsigned char*)self + 0xdc) == 0) {
        return 0;
    }
    int buf[4] = {0, 0, 0, 0};
    ((int (__thiscall*)(void*, int, int*, void*, int))ext_006A6184)((char*)self + 0x68, 0x50000080, buf, self, 1);
    int* p = (int*)((char*)self + 0x5c);
    int wparam = (p == 0) ? 0 : p[1];
    int (__stdcall *send)(int, int, int, int) = (int (__stdcall*)(int, int, int, int))mem_00925694;
    send(*(int*)((char*)self + 0x88), 0x30, wparam, 0);
    if (*((unsigned char*)self + 0xdd) != 0) {
        send(*(int*)((char*)self + 0x88), 0xcf, 1, 0);
    }
    return 0;
}

// [0x006B3A90] sub_006B3A90 (32 bytes)
extern "C" void ext_006ADBF0();

extern "C" __declspec(naked) void* __fastcall fn_006B3A90(void* self) {
    __asm {
        mov eax, dword ptr [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call ext_006ADBF0
        mov dword ptr [esi], 0x9919bc
        mov eax, esi
        pop esi
        ret 8
    }
}

// [0x006B3C90] sub_006B3C90 (32 bytes)
extern "C" void ext_006ADBF0();

extern "C" __declspec(naked) void* __fastcall fn_006B3C90(void* self) {
    __asm {
        mov eax, dword ptr [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call ext_006ADBF0
        mov dword ptr [esi], 0x9919ec
        mov eax, esi
        pop esi
        ret 8
    }
}

// [0x006B4060] sub_006B4060 (32 bytes)
extern "C" void ext_006ADBF0();

extern "C" __declspec(naked) void* __fastcall fn_006B4060(void* self) {
    __asm {
        mov eax, dword ptr [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call ext_006ADBF0
        mov dword ptr [esi], 0x991a14
        mov eax, esi
        pop esi
        ret 8
    }
}

// [0x006B43F0] sub_006B43F0 (46 bytes)
extern "C" void ext_006ADBF0();

extern "C" __declspec(naked) void* __fastcall fn_006B43F0(void* self) {
    __asm {
        mov eax, dword ptr [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call ext_006ADBF0
        mov dl, byte ptr [esp+0x10]
        mov dword ptr [esi], 0x991a38
        mov dword ptr [esi+0x44], 0
        mov byte ptr [esi+0x48], dl
        mov eax, esi
        pop esi
        ret 0xc
    }
}

// [0x006B7380] sub_006B7380 (145 bytes)
extern "C" void ext_006A663A();
extern "C" int mem_00925650;

extern "C" __declspec(naked) void __fastcall fn_006B7380(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_006A663A
        cmp byte ptr [esi + 0x60], 0
        je L_end
        test edi, edi
        jne L_edi_set
        xor ecx, ecx
        jmp L_have_ecx
    L_edi_set:
        mov ecx, dword ptr [edi + 0x20]
    L_have_ecx:
        push ebx
        lea ebx, [esi + 0x70]
        test ebx, ebx
        jne L_ebx_set
        xor eax, eax
        jmp L_have_eax
    L_ebx_set:
        mov eax, dword ptr [ebx + 0x20]
    L_have_eax:
        cmp ecx, eax
        jne L_else
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, eax
        call ext_006A60D0
        pop ebx
        pop edi
        pop esi
        ret 4
    L_else:
        test edi, edi
        je L_edi_skip
        mov edi, dword ptr [edi + 0x20]
    L_edi_skip:
        mov ecx, dword ptr [esi + 0x20]
        push ecx
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        test eax, eax
        je L_eax_skip
        mov eax, dword ptr [eax + 0x20]
    L_eax_skip:
        cmp edi, eax
        jne L_restore
        mov eax, dword ptr [esi + 0x68]
        test eax, eax
        je L_restore
        cmp eax, 0xd
        je L_restore
        mov ecx, ebx
        call ext_006A60D0
        mov dword ptr [esi + 0x68], 0
    L_restore:
        pop ebx
    L_end:
        pop edi
        pop esi
        ret 4
    }
}

// [0x006B4FF0] sub_006B4FF0 (153 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_006B0CA0();

extern "C" __declspec(naked) void __fastcall fn_006B4FF0(void* self) {
    __asm {
        push -1
        push 0x8b7a93
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        call ext_006A5C6E
        mov dword ptr [esi + 0x54], 0x99201c
        xor ebx, ebx
        mov dword ptr [esi], 0x99202c
        mov dword ptr [esi + 0x54], 0x992024
        mov dword ptr [esi + 0x58], ebx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esi + 0x60], ebx
        mov dword ptr [esi + 0x5c], 0x92a5d4
        lea ecx, [esi + 0x68]
        mov byte ptr [esp + 0x14], 0x1
        mov byte ptr [esi + 0x64], bl
        call ext_006B0CA0
        mov al, byte ptr [esp + 0x1c]
        mov cl, byte ptr [esp + 0x24]
        mov dl, byte ptr [esp + 0x20]
        mov dword ptr [esi + 0xd4], ebx
        mov byte ptr [esi + 0xdc], al
        mov dword ptr [esi + 0xd8], ebx
        mov byte ptr [esi + 0xdd], cl
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [esi + 0xde], dl
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x006B6070] sub_006B6070 (31 bytes)
extern "C" void ext_006B4FF0();
extern "C" int mem_009922B4;
extern "C" int mem_009922BC;
extern "C" void* __fastcall fn_006B6070(void* self) {
    int* p = (int*)self;
    ((void (__stdcall*)(int, int, int))ext_006B4FF0)(0, 0, 0);
    p[0] = (int)&mem_009922BC;
    p[0x54 / 4] = (int)&mem_009922B4;
    return self;
}

// [0x006B1340] sub_006B1340 (167 bytes)
extern "C" double __cdecl fn_006B1340(double v1, double v2, double vH) {
    if (vH < 0.0) vH += 1.0;
    if (vH > 1.0) vH -= 1.0;
    if (6.0 * vH < 1.0) return v1 + (v2 - v1) * vH * 6.0;
    if (2.0 * vH < 1.0) return v2;
    if (3.0 * vH < 2.0) return v1 + (v2 - v1) * (2.0 / 3.0 - vH) * 6.0;
    return v1;
}

// [0x006B5320] sub_006B5320 (169 bytes)
extern "C" void ext_006AD940();
extern "C" void ext_006B4440();
extern "C" int mem_009242FC;
extern "C" int mem_00B5D200;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006B5320(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -0x1
        push 0x87cc19
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esi + 0x68]
        mov dword ptr [esp + 0x18], 0x0
        call ext_006A5F4A
        mov ecx, dword ptr [esi + 0x20]
        mov edi, dword ptr [mem_00925650]
        push ecx
        call edi
        push eax
        call ext_006A5E00
        mov edx, dword ptr [eax + 0x20]
        push 0x1
        push 0x0
        push edx
        call dword ptr [mem_00925688]
        mov eax, dword ptr [esi + 0x20]
        push eax
        call edi
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x58]
        mov edi, eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD940
        mov ecx, dword ptr [mem_00B5D200]
        mov edx, dword ptr [edi + 0x20]
        push 0x0
        push eax
        push ecx
        push edx
        call dword ptr [mem_00925694]
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x006B7280] sub_006B7280 (169 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B7280(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -0x1
        push 0x87cc19
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esi + 0x70]
        mov dword ptr [esp + 0x18], 0x0
        call ext_006A5F4A
        mov ecx, dword ptr [esi + 0x20]
        mov edi, dword ptr [mem_00925650]
        push ecx
        call edi
        push eax
        call ext_006A5E00
        mov edx, dword ptr [eax + 0x20]
        push 0x1
        push 0x0
        push edx
        call dword ptr [mem_00925688]
        mov eax, dword ptr [esi + 0x20]
        push eax
        call edi
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x54]
        mov edi, eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD940
        mov ecx, dword ptr [mem_00B5D200]
        mov edx, dword ptr [edi + 0x20]
        push -0x1
        push eax
        push ecx
        push edx
        call dword ptr [mem_00925694]
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x006B86E0] sub_006B86E0 (173 bytes)
extern "C" void ext_006A5F38();
extern "C" void ext_006B85F0();
extern "C" int mem_0092561C;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006B86E0(void* self) {
    __asm {
        push -0x1
        push 0x8b7da0
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x992e1c
        lea edi, [esi + 0x5c]
        test edi, edi
        mov dword ptr [esp + 0x14], 0x4
        jne L_nonnull
        xor eax, eax
        jmp L_have_hwnd
    L_nonnull:
        mov eax, dword ptr [edi + 0x20]
    L_have_hwnd:
        push eax
        call dword ptr [mem_0092561C] // USER32!IsWindow
        test eax, eax
        je L_skip_close
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x68]
        mov ecx, edi
        call edx
    L_skip_close:
        lea ecx, [esi + 0xf4]
        mov byte ptr [esp + 0x14], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0xd8]
        mov byte ptr [esp + 0x14], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0xbc]
        mov byte ptr [esp + 0x14], 0x1
        call dword ptr [mem_00924FF4]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 0x0
        call ext_006B85F0
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_006A5F38
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B7C30] sub_006B7C30 (103 bytes)
extern "C" void ext_006A5F6E();
extern "C" void ext_006B86E0();
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006B7C30(void* self) {
    __asm {
        push -0x1
        push 0x8b7cf0
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x992924
        lea ecx, [esi + 0x88]
        mov dword ptr [esp + 0x10], 0x2
        call ext_006B86E0
        lea ecx, [esi + 0x78]
        call dword ptr [mem_009242F4]
        lea ecx, [esi + 0x74]
        call dword ptr [mem_009242F4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B4E70] sub_006B4E70 (174 bytes)
extern "C" void ext_008727D2();

extern "C" __declspec(naked) void __fastcall fn_006B4E70(void* self) {
    __asm {
        sub esp, 0xc
        push esi
        push edi
        mov esi, ecx
        call ext_006A5EA8
        mov ecx, dword ptr [esi + 0x54]
        call ext_006B4440
        mov ecx, eax
        call ext_006B4430
        fldz
        mov edi, eax
        fstp qword ptr [esp + 0x8]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0
        call ext_008727D2
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [edi + 0x8]
        jne short loc_006B4ECD
        test eax, eax
        jne short loc_006B4EC3
        fld qword ptr [edi]
        fcomp qword ptr [esp + 0x8]
        fnstsw ax
        test ah, 0x44
        jnp short loc_006B4F16
        jmp short loc_006B4ECD
    loc_006B4EC3:
        cmp eax, 2
        sete al
        test al, al
        jne short loc_006B4F16
    loc_006B4ECD:
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [edi], ecx
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [edi + 0x4], edx
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [edi + 0x8], eax
        mov ecx, dword ptr [esi + 0x20]
        push ecx
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x54]
        mov edi, eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD940
        mov edx, dword ptr [mem_00B5D200]
        push 0
        push eax
        mov eax, dword ptr [edi + 0x20]
        push edx
        push eax
        call dword ptr [mem_00925618]
    loc_006B4F16:
        pop edi
        pop esi
        add esp, 0xc
        ret 4
    }
}

// [0x006BE890] sub_006BE890 (176 bytes)
extern "C" void ext_006B9D70();
extern "C" __declspec(naked) void __fastcall fn_006BE890(void* self) {
    __asm {
        push -1
        push 0x8bb3e3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x98]
        mov dword ptr [esp + 0x10], 0x1
        call ext_006B9D70
        lea ecx, [esi + 0x4c]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x92
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xd4
        __asm _emit 0xb5
        __asm _emit 0x00
        ret
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0xd9
        __asm _emit 0xe0
        __asm _emit 0xdd
        __asm _emit 0x1d
        __asm _emit 0x60
        __asm _emit 0xd4
        __asm _emit 0xb5
        __asm _emit 0x00
        ret
    }
}

// [0x006B2D70] sub_006B2D70 (184 bytes)
extern "C" void ext_006A6004();
extern "C" void ext_006ACE40();
extern "C" void ext_006AD010();
extern "C" int mem_00925658;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;
extern "C" int mem_00925620;
extern "C" int mem_00925678;

extern "C" __declspec(naked) void __fastcall fn_006B2D70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x14]
        mov eax, dword ptr [eax + 0x20]
        push eax
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov esi, eax
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x30]
        lea eax, [edi + 0x50]
        push eax
        mov ecx, esi
        call edx
        mov ebp, eax
        lea eax, [esp + 0x10]
        push eax
        mov ecx, edi
        call ext_006AD010
        lea ecx, [esp + 0x14]
        mov ebx, eax
        push ecx
        mov ecx, ebx
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, ebx
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 0x8]
        push eax
        push edx
        call dword ptr [mem_00924080]
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x30]
        push ebp
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [edi + 0x14]
        mov edx, dword ptr [ecx + 0x20]
        push eax
        push edx
        call dword ptr [mem_00925620]
        mov ebx, dword ptr [esp + 0x24]
        mov esi, dword ptr [esp + 0x20]
        push ebx
        push esi
        mov ecx, edi
        call ext_006ACE40
        mov eax, dword ptr [ebx + 0x8]
        push 0x0
        push -0x3
        push esi
        mov dword ptr [esi + 0x8], eax
        call dword ptr [mem_00925678]
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, dword ptr [esp + 0x14]
        pop edi
        mov dword ptr [esi], ecx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 0x8
    }
}

// [0x006B2AC0] sub_006B2AC0 (47 bytes)
extern "C" void ext_006AD1D0();
extern "C" __declspec(naked) void* __fastcall fn_006B2AC0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_006AD1D0
        xor eax, eax
        mov dword ptr [esi], 0x991878
        mov dword ptr [esi + 0x54], eax
        mov dword ptr [esi + 0x50], 0x92a5d4
        mov byte ptr [esi + 0x58], al
        mov dword ptr [esi + 0x48], 0xff0000
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x006B3320] sub_006B3320 (34 bytes)
extern "C" void ext_006AECD0();

extern "C" void* __fastcall fn_006B3320(void* self, int edx_unused, void* a1, void* a2) {
    typedef void* (__fastcall *Fn)(void*, int, void*, void*, int);
    ((Fn)ext_006AECD0)(self, edx_unused, a1, a2, -1);
    *(int*)self = 0x991974;
    return self;
}

// [0x006B63B0] sub_006B63B0 (194 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006A6184();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_006B63B0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        call ext_006A5EA8
        cmp eax, -1
        jne L_6B63C9
        or eax, eax
        pop esi
        add esp, 0x10
        ret 4

    L_6B63C9:
        push ebx
        push ebp
        push edi
        push 1
        push esi
        lea eax, [esp + 0x18]
        xor edi, edi
        push eax
        lea ebx, [esi + 0xa8]
        push 0x50000000
        mov ecx, ebx
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x2c], edi
        call ext_006A6184

        lea eax, [esi + 0x120]
        cmp eax, edi
        jne L_6B6406
        xor eax, eax
        jmp L_6B6409

    L_6B6406:
        mov eax, dword ptr [eax + 0x4]

    L_6B6409:
        mov ecx, dword ptr [esi + 0xc8]
        mov ebp, dword ptr [mem_00925694]
        push 1
        push eax
        push 0x30
        push ecx
        call ebp

        mov edx, dword ptr [esi + 0x54]
        mov edx, dword ptr [edx + 0x13c]
        push 2
        push esi
        lea ecx, [esi + 0x54]
        lea eax, [esp + 0x18]
        push eax
        push 0x50000022
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x2c], edi
        call edx

        cmp ebx, edi
        jne L_6B6450
        xor ebx, ebx
        jmp L_6B6453

    L_6B6450:
        mov ebx, dword ptr [ebx + 0x20]

    L_6B6453:
        mov eax, dword ptr [esi + 0x74]
        push edi
        push ebx
        push 0x469
        push eax
        call ebp
        push eax
        call ext_006A5E00

        pop edi
        pop ebp
        pop ebx
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 4
    }
}

// [0x006B5410] sub_006B5410 (195 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_0092566C;
extern "C" int mem_009242FC;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006B5410(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x87cee9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x20]
        push esi
        push eax
        call dword ptr [mem_0092566C]
        cmp byte ptr [edi + 0xde], 0
        je loc_006B5461
        mov ecx, dword ptr [esi + 8]
        sub ecx, 0x10
        pop edi
        mov dword ptr [esi], ecx
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 8
    loc_006B5461:
        lea ecx, [esp + 0x20]
        call dword ptr [mem_009242FC]
        lea edx, [esp + 0x20]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0
        call ext_006A5F4A
        lea eax, [esp + 8]
        push eax
        lea ecx, [esp + 0x24]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [ecx + 8]
        push eax
        push edx
        call dword ptr [mem_00924080]
        mov eax, dword ptr [esi + 8]
        sub eax, dword ptr [esp + 8]
        lea ecx, [esp + 0x20]
        sub eax, 4
        mov dword ptr [esi], eax
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 8
    }
}

// [0x006B5720] sub_006B5720 (126 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006A6004();
extern "C" void ext_006B5410();
extern "C" int mem_00925658;
extern "C" int mem_00925620;
extern "C" int mem_00925628;
extern "C" int mem_009256D8;
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_006B5720(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x20]
        push edi
        push eax
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov edi, eax
        push edi
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_006B5410
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [esi + 0x20]
        push edx
        push eax
        call dword ptr [mem_00925620]
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        push ecx
        push edx
        lea eax, [esp + 0x10]
        push eax
        call dword ptr [mem_00925628]
        test eax, eax
        je short loc_006B578F
        mov ecx, dword ptr [esi + 0x20]
        push ecx
        mov byte ptr [esi + 0x64], 0x1
        call dword ptr [mem_009256D8]
        push eax
        call ext_006A5E00
        mov edx, dword ptr [esi + 0x20]
        push 0x1
        push 0x0
        push edx
        call dword ptr [mem_00925688]
    loc_006B578F:
        mov ecx, esi
        call ext_006A5EA8
        pop edi
        pop esi
        add esp, 0x10
        ret 0xc
    }
}

// [0x006B57A0] sub_006B57A0 (134 bytes)
extern "C" int mem_009256E0;

extern "C" __declspec(naked) void __fastcall fn_006B57A0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x64], 0
        je short loc_006B5818
        mov eax, dword ptr [esi + 0x20]
        push edi
        push eax
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov edi, eax
        push edi
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_006B5410
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [esi + 0x20]
        push edx
        push eax
        call dword ptr [mem_00925620]
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        push ecx
        push edx
        lea eax, [esp + 0x10]
        push eax
        call dword ptr [mem_00925628]
        test eax, eax
        pop edi
        je short loc_006B5800
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x13c]
        mov ecx, esi
        call eax
    loc_006B5800:
        call dword ptr [mem_009256E0]
        mov ecx, dword ptr [esi + 0x20]
        push 0x1
        push 0x0
        push ecx
        mov byte ptr [esi + 0x64], 0
        call dword ptr [mem_00925688]
    loc_006B5818:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        add esp, 0x10
        ret 0xc
    }
}


// [0x006B5200] sub_006B5200 (196 bytes)
extern "C" int mem_00925650;
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_006B5200(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_006A663A
        cmp byte ptr [esi + 0xdc], 0
        je L_006B5292
        cmp byte ptr [esi + 0xdd], 0
        jne L_006B529B
        test edi, edi
        je L_006B5227
        mov edi, dword ptr [edi + 0x20]
L_006B5227:
        mov eax, dword ptr [esi + 0x20]
        push ebx
        mov ebx, dword ptr [mem_00925650]
        push eax
        call ebx
        push eax
        call ext_006A5E00
        test eax, eax
        je L_006B5241
        mov eax, dword ptr [eax + 0x20]
L_006B5241:
        cmp edi, eax
        jne L_006B5279
        add esi, 0x68
        mov ecx, esi
        call ext_006A60D0
        mov ecx, dword ptr [esi + 0x20]
        mov edi, dword ptr [mem_00925694]
        push -1
        push 0
        push 0xb1
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x20]
        push 0
        push 0
        push 0xb7
        push edx
        call edi
        pop ebx
        pop edi
        pop esi
        ret 0x4
L_006B5279:
        mov eax, dword ptr [esi + 0x20]
        push eax
        call ebx
        push eax
        call ext_006A5E00
        mov ecx, eax
        call ext_006A60D0
        pop ebx
        pop edi
        pop esi
        ret 0x4
L_006B5292:
        cmp byte ptr [esi + 0xdd], 0
        je L_006B52A8
L_006B529B:
        lea ecx, [esi + 0x68]
        call ext_006A60D0
        pop edi
        pop esi
        ret 0x4
L_006B52A8:
        mov ecx, dword ptr [esi + 0x20]
        push ecx
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, eax
        call ext_006A60D0
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x006B2AF0] sub_006B2AF0 (197 bytes)
extern "C" void ext_006AD290();
extern "C" int mem_009244D4;

extern "C" __declspec(naked) void __fastcall fn_006B2AF0(void* self) {
    __asm {
        push -1
        push 0x8b78f3
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_006AD290
        xor ebx, ebx
        mov dword ptr [esi], 0x991878
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esi + 0x54], ebx
        mov dword ptr [esi + 0x50], 0x92a5d4
        mov edi, dword ptr [esp + 0x20]
        mov eax, dword ptr [edi + 0x48]
        mov dword ptr [esi + 0x48], eax
        mov eax, dword ptr [edi + 0x4]
        mov ecx, 0x1
        mov byte ptr [esp + 0x18], cl
        mov dword ptr [esi + 0x4], eax
        add dword ptr [eax + 0x8], ecx
        lea ecx, [edi + 0x8]
        push ecx
        lea ecx, [esi + 0x8]
        call dword ptr [mem_009244D4]
        lea edx, [edi + 0xc]
        push edx
        lea ecx, [esi + 0xc]
        call dword ptr [mem_009244D4]
        mov eax, dword ptr [edi + 0x10]
        mov dword ptr [esi + 0x10], eax
        mov ecx, dword ptr [edi + 0x14]
        mov dword ptr [esi + 0x14], ecx
        mov edx, dword ptr [edi + 0x18]
        mov dword ptr [esi + 0x18], edx
        mov eax, dword ptr [edi + 0x1c]
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], ebx
        mov dword ptr [esi + 0x24], ebx
        mov dword ptr [esi + 0x28], ebx
        mov dword ptr [esi + 0x2c], ebx
        mov dword ptr [esi + 0x34], ebx
        mov dword ptr [esi + 0x30], ebx
        mov cl, byte ptr [edi + 0x38]
        mov byte ptr [esi + 0x38], cl
        mov edx, dword ptr [edi + 0x3c]
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esi + 0x40], bl
        mov byte ptr [esi + 0x41], bl
        mov byte ptr [esi + 0x58], bl
        pop edi
        mov dword ptr [esi + 0x3c], edx
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006B71B0] sub_006B71B0 (202 bytes)
extern "C" void ext_006A5E5A();
extern "C" void ext_006A5EA8();
extern "C" void ext_006A6004();
extern "C" int mem_00925658;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;
extern "C" int mem_00925620;

extern "C" __declspec(naked) void __fastcall fn_006B71B0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0xc
        push edi
        mov edi, ecx
        call ext_006A5EA8
        cmp byte ptr [edi + 0x60], 0
        je done_006B71B0
        mov eax, dword ptr [edi + 0x90]
        push ebx
        push esi
        push eax
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov esi, eax
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x30]
        lea eax, [edi + 0x58]
        push eax
        mov ecx, esi
        call edx
        push 0x9334d0
        lea ecx, [esp + 0x10]
        mov ebx, eax
        call dword ptr [mem_009242F0]
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x10]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x8]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x30]
        push ebx
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edi + 0x90]
        push ecx
        push edx
        call dword ptr [mem_00925620]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, ecx
        sub eax, dword ptr [esp + 0x14]
        push 0
        sub eax, 1
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        add ecx, -0x12
        push ecx
        push eax
        push 1
        lea ecx, [edi + 0x70]
        call ext_006A5E5A
        pop esi
        pop ebx
    done_006B71B0:
        pop edi
        add esp, 0xc
        ret 0xc
    }
}

// [0x006B8600] sub_006B8600 (209 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_006B85D0();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FD4;
extern "C" int mem_00992E1C;
extern "C" int mem_00928B5D;
extern "C" int mem_009876E0;
extern "C" int mem_008B7DA0;

extern "C" __declspec(naked) void __fastcall fn_006B8600(void* self) {
    __asm {
        push -1
        push offset mem_008B7DA0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call ext_006A5C6E
        xor eax, eax
        lea ecx, [esi + 0x5c]
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esi], offset mem_00992E1C
        mov dword ptr [esi + 0x54], eax
        mov dword ptr [esi + 0x58], eax
        call ext_006B85D0
        lea edi, [esi + 0xbc]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x1
        call dword ptr [mem_00924FE8]
        lea ebp, [esi + 0xd8]
        mov ecx, ebp
        mov byte ptr [esp + 0x1c], 0x2
        call dword ptr [mem_00924FE8]
        lea ebx, [esi + 0xf4]
        mov ecx, ebx
        mov byte ptr [esp + 0x1c], 0x3
        call dword ptr [mem_00924FE8]
        mov eax, 0xa
        push offset mem_00928B5D
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x4
        mov dword ptr [esi + 0x110], eax
        mov dword ptr [esi + 0x114], eax
        mov byte ptr [esi + 0x118], 0x1
        call dword ptr [mem_00924FD4]
        push offset mem_00928B5D
        mov ecx, ebx
        call dword ptr [mem_00924FD4]
        push offset mem_009876E0
        mov ecx, ebp
        call dword ptr [mem_00924FD4]
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006B7BA0] sub_006B7BA0 (143 bytes)
extern "C" void ext_006A5FC2();
extern "C" void ext_006B8600();
extern "C" int mem_009242FC;

extern "C" __declspec(naked) void* __fastcall fn_006B7BA0(void* self, int edx_unused, int a1) {
    __asm {
        push -0x1
        push 0x8b7cf0
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push esi
        push eax
        mov esi, ecx
        push 0x2af9
        mov dword ptr [esp + 0x10], esi
        call ext_006A5FC2
        xor ebx, ebx
        lea ecx, [esi + 0x74]
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esi], 0x992924
        call dword ptr [mem_009242FC]
        lea ecx, [esi + 0x78]
        call dword ptr [mem_009242FC]
        lea ecx, [esi + 0x88]
        mov byte ptr [esp + 0x14], 0x2
        mov dword ptr [esi + 0x7c], ebx
        mov dword ptr [esi + 0x80], 0xffffffff
        mov dword ptr [esi + 0x84], ebx
        call ext_006B8600
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x1a4], ebx
        mov byte ptr [esi + 0x1a8], bl
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006B75F0] sub_006B75F0 (210 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006A5EA8();
extern "C" void ext_006A6184();
extern "C" void ext_006B6C60();
extern "C" void ext_006B81E0();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_006B75F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b789a
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        push esi
        mov esi, ecx
        call ext_006A5EA8
        cmp eax, -0x1
        jne L_006B7629
        or eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x4
L_006B7629:
        push ebx
        xor ebx, ebx
        cmp byte ptr [esi + 0x61], bl
        jne L_006B7664
        push 0x64
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        cmp eax, ebx
        mov dword ptr [esp + 0x24], ebx
        je L_006B7650
        mov ecx, eax
        call ext_006B81E0
        jmp L_006B7652
L_006B7650:
        xor eax, eax
L_006B7652:
        mov ecx, esi
        mov dword ptr [esp + 0x24], 0xffffffff
        mov dword ptr [esi + 0x6c], eax
        call ext_006B6C60
L_006B7664:
        cmp byte ptr [esi + 0x60], bl
        je L_006B76AD
        push 0x1
        push esi
        lea eax, [esp + 0x14]
        push eax
        push 0x50000000
        lea ecx, [esi + 0x70]
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x28], ebx
        call ext_006A6184
        lea eax, [esi + 0x58]
        cmp eax, ebx
        jne L_006B7699
        xor eax, eax
        jmp L_006B769C
L_006B7699:
        mov eax, dword ptr [eax + 0x4]
L_006B769C:
        mov ecx, dword ptr [esi + 0x90]
        push ebx
        push eax
        push 0x30
        push ecx
        call dword ptr [mem_00925694]
L_006B76AD:
        mov ecx, dword ptr [esp + 0x1c]
        pop ebx
        xor eax, eax
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x4
    }
}

// [0x006B8090] sub_006B8090 (211 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006B7D90();
extern "C" void ext_008727EA();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_006B8090(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        call ext_006A5EA8
        mov eax, dword ptr [esp + 0xc]
        lea ebx, [esi + 0x88]
        cmp eax, ebx
        je L_c4
        cmp dword ptr [esi + 0x1a4], 0
        je L_bc
        mov ecx, esi
        call ext_006B7D90
        pop esi
        pop ebx
        ret 4
L_bc:
        cmp eax, ebx
        jne L_exit
L_c4:
        cmp byte ptr [esi + 0x1a8], 0
        jne L_set
        mov eax, dword ptr [esi + 0x84]
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0
        add eax, 1
        push eax
        mov eax, dword ptr [esi + 0xa8]
        push 0xc9
        push eax
        call edi
        test eax, eax
        jle L_103
        mov ecx, ebx
        call ext_008727EA
        mov dword ptr [esi + 0x84], eax
L_103:
        mov eax, dword ptr [esi + 0x80]
        mov ecx, dword ptr [esi + 0xa8]
        push 0
        add eax, 1
        push eax
        push 0xc9
        push ecx
        call edi
        test eax, eax
        jle L_12e
        mov ecx, ebx
        call ext_008727EA
        mov dword ptr [esi + 0x80], eax
L_12e:
        mov edx, dword ptr [esi + 0x84]
        mov eax, dword ptr [esi + 0x80]
        mov ecx, dword ptr [ebx + 0x20]
        push edx
        push eax
        push 0xb1
        push ecx
        call edi
        mov edx, dword ptr [ebx + 0x20]
        push 0
        push 0
        push 0xb7
        push edx
        call edi
        pop edi
L_set:
        mov byte ptr [esi + 0x1a8], 1
L_exit:
        pop esi
        pop ebx
        ret 4
    }
}

// [0x006B6510] sub_006B6510 (228 bytes)
extern "C" void ext_006A5E5A();
extern "C" void ext_006A5EA8();
extern "C" void ext_006A6004();
extern "C" int mem_00925658;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;
extern "C" int mem_00925620;

extern "C" __declspec(naked) void __fastcall fn_006B6510(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_006A5EA8
        mov eax, dword ptr [esi + 0xc8]
        mov ebx, dword ptr [esp + 0x24]
        push eax
        lea ebp, [ebx - 0x10]
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov edi, eax
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0x30]
        lea eax, [esi + 0x120]
        push eax
        mov ecx, edi
        call edx
        push 0x9334d0
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x14], eax
        call dword ptr [mem_009242F0]
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x28]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [edi + 0x8]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        lea ecx, [esp + 0x24]
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [edx + 0x30]
        push eax
        mov ecx, edi
        call edx
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [esi + 0xc8]
        push eax
        push ecx
        call dword ptr [mem_00925620]
        mov edi, dword ptr [esp + 0x28]
        mov eax, edi
        sub eax, dword ptr [esp + 0x18]
        push 0x0
        sub eax, 0x1
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 0x1
        mov edx, edi
        sub edx, eax
        push edx
        lea ecx, [ebp - 0x1]
        push ecx
        push eax
        push 0x1
        lea ecx, [esi + 0xa8]
        call ext_006A5E5A
        push 0x0
        push edi
        sub ebx, ebp
        push ebx
        push 0x0
        push ebp
        lea ecx, [esi + 0x54]
        call ext_006A5E5A
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 0xc
    }
}

// [0x006B48B0] sub_006B48B0 (238 bytes)
// CMemDC(CDC* pDC): off-screen memory DC constructor (MFC style, SEH frame).
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6190();
extern "C" void ext_006A6196();
extern "C" void ext_006A61A2();
extern "C" void ext_006A6334();
extern "C" int mem_009240AC;
extern "C" int mem_0092408C;

extern "C" __declspec(naked) void* __fastcall fn_006B48B0(void* self, int edx_unused, void* pDC) {
    __asm {
        push -1
        push 0x8b7a53
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0xc], esi
        call ext_006A61A2
        xor ecx, ecx
        lea ebp, [esi + 0x10]
        mov dword ptr [esi], 0x92d814
        mov dword ptr [esp + 0x20], ecx
        mov dword ptr [ebp + 0x4], ecx
        mov dword ptr [ebp], 0x92c4ac
        mov ebx, dword ptr [esp + 0x28]
        xor eax, eax
        mov dword ptr [esi + 0x1c], ebx
        mov dword ptr [esi + 0x18], ecx
        cmp dword ptr [ebx + 0xc], ecx
        mov byte ptr [esp + 0x20], 0x1
        sete al
        cmp eax, ecx
        mov dword ptr [esi + 0x30], eax
        je L_006B4976
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x58]
        push edi
        lea edi, [esi + 0x20]
        push edi
        mov ecx, ebx
        call edx
        mov eax, dword ptr [ebx + 0x4]
        push eax
        call dword ptr [mem_009240AC]
        push eax
        mov ecx, esi
        call ext_006A6190
        mov eax, dword ptr [edi + 0xc]
        sub eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, dword ptr [edi]
        push eax
        mov eax, dword ptr [ebx + 0x4]
        push ecx
        push eax
        call dword ptr [mem_0092408C]
        push eax
        mov ecx, ebp
        call ext_006A5FFE
        test ebp, ebp
        je L_006B4953
        mov ebp, dword ptr [ebp + 0x4]
L_006B4953:
        mov ecx, dword ptr [esi + 0x4]
        push ebp
        push ecx
        call ext_006A6196
        mov edx, dword ptr [esi + 0x24]
        mov dword ptr [esi + 0x18], eax
        mov eax, dword ptr [edi]
        push edx
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, esi
        call ext_006A6334
        pop edi
        jmp L_006B4988
L_006B4976:
        mov edx, dword ptr [ebx + 0xc]
        mov dword ptr [esi + 0xc], edx
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [esi + 0x4], eax
        mov ecx, dword ptr [ebx + 0x8]
        mov dword ptr [esi + 0x8], ecx
L_006B4988:
        mov ecx, dword ptr [esp + 0x18]
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x18
        ret 0x4
    }
}

// [0x006B49C0] sub_006B49C0 (220 bytes)
extern "C" void ext_006A5ECC();
extern "C" void ext_006A5EBA();
extern "C" void ext_006A6172();
extern "C" void ext_006AD1C0();
extern "C" void ext_006A7D30();
extern "C" void ext_006ACFC0();
extern "C" void ext_006ACFA0();
extern "C" void ext_006B4440();
extern "C" void ext_006B48B0();
extern "C" void ext_006AD890();
extern "C" void ext_0041B860();
extern "C" int mem_0092566C;

extern "C" __declspec(naked) void __fastcall fn_006B49C0(void* self) {
    __asm {
        push -1
        push 0x8b7c73
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x98
        push esi
        mov esi, ecx
        push esi
        lea ecx, [esp + 0x4c]
        call ext_006A5ECC
        lea eax, [esp + 0x48]
        push eax
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0xa8], 0x0
        call ext_006B48B0
        mov edx, dword ptr [esi + 0x20]
        lea ecx, [esp + 0x4]
        push ecx
        push edx
        mov byte ptr [esp + 0xac], 0x1
        call dword ptr [mem_0092566C]
        mov ecx, dword ptr [esi + 0x54]
        call ext_006AD1C0
        mov ecx, eax
        call ext_006A7D30
        push eax
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x1c]
        call ext_006A6172
        mov ecx, dword ptr [esi + 0x54]
        call ext_006ACFC0
        mov ecx, dword ptr [esi + 0x54]
        push eax
        call ext_006ACFA0
        lea ecx, [esp + 0x8]
        lea edx, [esp + 0x18]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0x54]
        push edx
        call ext_006B4440
        mov ecx, eax
        call ext_006AD890
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0xa4], 0x0
        call ext_0041B860
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0xa4], 0xffffffff
        call ext_006A5EBA
        mov ecx, dword ptr [esp + 0x9c]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0xa4
        ret
    }
}

// [0x006B8290] sub_006B8290 (247 bytes)
// Wheel-style listbox step: q = delta / 120 (signed); LB_GETCURSEL(0x188)/LB_SETCURSEL(0x186)/LB_GETCOUNT(0x18b) on hwnd at self+0x20.
// C++03 attempt 1 (12% match, compiler hoisted SendMessage ptr / different reg allocation) -> switched to naked asm.
extern "C" void ext_006A5EA8();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_006B8290(void* self, int edx_unused, int a0, short delta, int a2, int a3) {
    __asm {
        push ebx
        mov bx, word ptr [esp + 0xc]
        push esi
        mov esi, ecx
        movsx ecx, bx
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 0x6
        push edi
        mov edi, edx
        shr edi, 0x1f
        add edi, edx
        test bx, bx
        jle NEG_OR_ZERO
        mov eax, dword ptr [esi + 0x20]
        mov ebx, dword ptr [mem_00925694]
        push 0
        push 0
        push 0x188
        push eax
        call ebx
        sub eax, edi
        test eax, eax
        jle SET_ZERO
        mov ecx, dword ptr [esi + 0x20]
        push 0
        push 0
        push 0x188
        push ecx
        call ebx
        mov edx, dword ptr [esi + 0x20]
        push 0
        sub eax, edi
        push eax
        push 0x186
        push edx
        call ebx
        mov ecx, esi
        call ext_006A5EA8
        pop edi
        pop esi
        pop ebx
        ret 0x10
SET_ZERO:
        mov edx, dword ptr [esi + 0x20]
        xor eax, eax
        push eax
        push eax
        push 0x186
        push edx
        call ebx
        mov ecx, esi
        call ext_006A5EA8
        pop edi
        pop esi
        pop ebx
        ret 0x10
NEG_OR_ZERO:
        jge EPILOGUE
        mov eax, dword ptr [esi + 0x20]
        mov ebx, dword ptr [mem_00925694]
        push ebp
        push 0
        push 0
        push 0x188
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0x20]
        push 0
        push 0
        push 0x18b
        push ecx
        mov ebp, eax
        call ebx
        sub ebp, edi
        sub eax, 0x1
        cmp ebp, eax
        pop ebp
        push 0
        push 0
        jge CLAMP_TO_LAST
        mov edx, dword ptr [esi + 0x20]
        push 0x188
        push edx
        call ebx
        sub eax, edi
        jmp SEND_TARGET
CLAMP_TO_LAST:
        mov eax, dword ptr [esi + 0x20]
        push 0x18b
        push eax
        call ebx
        sub eax, 0x1
SEND_TARGET:
        mov ecx, dword ptr [esi + 0x20]
        push 0
        push eax
        push 0x186
        push ecx
        call ebx
EPILOGUE:
        mov ecx, esi
        call ext_006A5EA8
        pop edi
        pop esi
        pop ebx
        ret 0x10
    }
}

// [0x006B2FB0] sub_006B2FB0 (254 bytes)
extern "C" void ext_006B2F70();
extern "C" int mem_00B5D248;
extern "C" int mem_00B5D23C;
extern "C" int mem_00B5D24C;
extern "C" int mem_00924208;
extern "C" int mem_009241D8;
extern "C" int mem_00B5D22C;
extern "C" int mem_00B5D230;
extern "C" int mem_00B5D234;
extern "C" int mem_00B5D238;
extern "C" int mem_00B5D240;
extern "C" int mem_00B5D244;

extern "C" __declspec(naked) int __cdecl fn_006B2FB0(void) {
    __asm {
        push ebx
        xor ebx, ebx
        cmp dword ptr [mem_00B5D248], ebx
        je L_init
        xor eax, eax
        cmp dword ptr [mem_00B5D23C], ebx
        pop ebx
        setne al
        ret
L_init:
        push esi
        push edi
        call ext_006B2F70
        push 0x99192c
        mov dword ptr [mem_00B5D24C], eax
        call dword ptr [mem_00924208]
        mov esi, eax
        cmp esi, ebx
        je L_fail
        mov edi, dword ptr [mem_009241D8]
        push 0x991918
        push esi
        call edi
        cmp eax, ebx
        mov dword ptr [mem_00B5D22C], eax
        je L_fail
        push 0x991904
        push esi
        call edi
        cmp eax, ebx
        mov dword ptr [mem_00B5D230], eax
        je L_fail
        push 0x9918f4
        push esi
        call edi
        cmp eax, ebx
        mov dword ptr [mem_00B5D234], eax
        je L_fail
        push 0x9918e0
        push esi
        call edi
        cmp eax, ebx
        mov dword ptr [mem_00B5D238], eax
        je L_fail
        push 0x9918cc
        push esi
        call edi
        cmp eax, ebx
        mov dword ptr [mem_00B5D240], eax
        je L_fail
        push 0x9918bc
        push esi
        call edi
        cmp eax, ebx
        mov dword ptr [mem_00B5D23C], eax
        je L_fail
        push 0x9918a8
        push esi
        call edi
        cmp eax, ebx
        mov dword ptr [mem_00B5D244], eax
        je L_fail
        pop edi
        mov eax, 0x1
        pop esi
        mov dword ptr [mem_00B5D248], eax
        pop ebx
        ret
L_fail:
        pop edi
        pop esi
        mov dword ptr [mem_00B5D22C], ebx
        mov dword ptr [mem_00B5D230], ebx
        mov dword ptr [mem_00B5D234], ebx
        mov dword ptr [mem_00B5D238], ebx
        mov dword ptr [mem_00B5D23C], ebx
        mov dword ptr [mem_00B5D240], ebx
        mov dword ptr [mem_00B5D244], ebx
        mov dword ptr [mem_00B5D248], 0x1
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x006B3120] sub_006B3120 (80 bytes)
extern "C" void ext_006B2FB0();
extern "C" int mem_00B5D234;
extern "C" int mem_0092563C;
extern "C" __declspec(naked) int __stdcall fn_006B3120(int a1, int a2) {
    __asm {
        call ext_006B2FB0
        test eax, eax
        je L_check
        jmp dword ptr [mem_00B5D234]
L_check:
        test byte ptr [esp + 8], 3
        push esi
        push edi
        jne L_fail
        mov esi, dword ptr [esp + 0Ch]
        cmp dword ptr [esi + 8], 0
        jle L_ok
        cmp dword ptr [esi + 0Ch], 0
        jle L_ok
        mov edi, dword ptr [mem_0092563C]
        push 0
        call edi
        cmp dword ptr [esi], eax
        jge L_ok
        push 1
        call edi
        cmp dword ptr [esi + 4], eax
        jl L_fail
L_ok:
        pop edi
        xor eax, eax
        pop esi
        ret 8
L_fail:
        pop edi
        mov eax, 12340042h
        pop esi
        ret 8
    }
}

// [0x006B30B0] sub_006B30B0 (97 bytes)
extern "C" void ext_006B2FB0();
extern "C" int mem_00B5D238;
extern "C" int mem_0092563C;
extern "C" __declspec(naked) int __fastcall fn_006B30B0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        call ext_006B2FB0
        test eax, eax
        je L_check
        mov eax, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push eax
        push ecx
        push edx
        call dword ptr [mem_00B5D238]
        ret 0Ch
L_check:
        test byte ptr [esp + 0Ch], 3
        push esi
        push edi
        jne L_fail
        mov esi, dword ptr [esp + 0Ch]
        test esi, esi
        jl L_ok
        mov edi, dword ptr [mem_0092563C]
        push 0
        call edi
        cmp esi, eax
        jge L_ok
        mov esi, dword ptr [esp + 10h]
        test esi, esi
        jl L_ok
        push 1
        call edi
        cmp esi, eax
        jl L_fail
L_ok:
        pop edi
        xor eax, eax
        pop esi
        ret 0Ch
L_fail:
        pop edi
        mov eax, 12340042h
        pop esi
        ret 0Ch
    }
}

// [0x006B3170] sub_006B3170 (194 bytes)
extern "C" void ext_006B2FB0();
extern "C" int mem_00B5D23C;
extern "C" int mem_009256B8;
extern "C" int mem_0092563C;
extern "C" int mem_00991934;
extern "C" int mem_0092526C;

extern "C" __declspec(naked) void __fastcall fn_006B3170(void* self) {
    __asm {
        sub esp, 10h
        call ext_006B2FB0
        test eax, eax
        je L_check_msg
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 14h]
        push eax
        push ecx
        call dword ptr [mem_00B5D23C]
        add esp, 10h
        ret 8

L_check_msg:
        cmp dword ptr [esp + 14h], 12340042h
        push esi
        push edi
        jne L_fail
        mov esi, dword ptr [esp + 20h]
        xor edi, edi
        cmp esi, edi
        je L_fail
        cmp dword ptr [esi], 28h
        jb L_fail
        push edi
        lea edx, [esp + 0Ch]
        push edx
        push edi
        push 30h
        call dword ptr [mem_009256B8]
        test eax, eax
        je L_fail
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi + 8], edi
        push edi
        mov edi, dword ptr [mem_0092563C]
        call edi
        push 1
        mov dword ptr [esi + 0Ch], eax
        call edi
        cmp dword ptr [esi], 48h
        mov ecx, dword ptr [esp + 0Ch]
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [esp + 8]
        mov dword ptr [esi + 14h], eax
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [esi + 18h], ecx
        mov dword ptr [esi + 1Ch], edx
        mov dword ptr [esi + 20h], eax
        mov dword ptr [esi + 24h], 1
        jb L_success
        push 1Fh
        push offset mem_00991934
        push 20h
        add esi, 28h
        push esi
        call dword ptr [mem_0092526C]
        add esp, 10h

L_success:
        pop edi
        mov eax, 1
        pop esi
        add esp, 10h
        ret 8

L_fail:
        pop edi
        xor eax, eax
        pop esi
        add esp, 10h
        ret 8
    }
}

// [0x006B3240] sub_006B3240 (53 bytes)
extern "C" void ext_006B3120();
extern "C" void ext_006B3170();
extern "C" int mem_00925670;

extern "C" __declspec(naked) void __fastcall fn_006B3240(void* self) {
    __asm {
        sub esp, 0x28
        mov eax, dword ptr [esp + 0x2c]
        push 0x2
        push eax
        call ext_006B3120
        lea ecx, [esp]
        push ecx
        push eax
        mov dword ptr [esp + 0x8], 0x28
        call ext_006B3170
        mov eax, dword ptr [esp + 0x30]
        lea edx, [esp + 0x14]
        push edx
        push eax
        call dword ptr [mem_00925670]
        add esp, 0x28
        ret
    }
}

extern "C" void ext_006B30B0();
extern "C" void ext_006B3170();
extern "C" int mem_00925670;

// [0x006B3280] sub_006B3280 (59 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B3280(void* self) {
    __asm {
        sub esp, 0x28
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [eax]
        push 0x2
        push ecx
        push edx
        call ext_006B30B0
        lea ecx, [esp]
        push ecx
        push eax
        mov dword ptr [esp + 0x8], 0x28
        call ext_006B3170
        mov eax, dword ptr [esp + 0x30]
        lea edx, [esp + 0x14]
        push edx
        push eax
        call dword ptr [mem_00925670]
        add esp, 0x28
        ret
    }
}

// [0x006B4AA0] sub_006B4AA0 (255 bytes)
extern "C" void ext_006AD940();
extern "C" void ext_006B4440();
extern "C" int mem_0092449C;
extern "C" int mem_009242F0;
extern "C" int mem_00925688;
extern "C" int mem_00925650;
extern "C" int mem_00B5D200;
extern "C" int mem_00925694;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006B4AA0(void* self) {
    __asm {
        push -0x1
        push 0x877289
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x54]
        push edi
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, eax
        call edx
        push 0x9910e4
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x20], 0x0
        call dword ptr [mem_0092449C]
        test eax, eax
        mov ecx, dword ptr [esi + 0x54]
        jne loc_006B4B04
        call ext_006B4440
        push ecx
        mov ecx, esp
        mov dword ptr [esp + 0x14], esp
        push 0x9910ec
        jmp loc_006B4B15
    loc_006B4B04:
        call ext_006B4440
        push ecx
        mov ecx, esp
        mov dword ptr [esp + 0x14], esp
        push 0x9910e4
    loc_006B4B15:
        mov edi, eax
        call dword ptr [mem_009242F0]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        mov ecx, edi
        call edx
        mov eax, dword ptr [esi + 0x20]
        mov edi, dword ptr [mem_00925688]
        push 0x1
        push 0x0
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x20]
        mov ebx, dword ptr [mem_00925650]
        push ecx
        call ebx
        push eax
        call ext_006A5E00
        mov edx, dword ptr [eax + 0x20]
        push 0x1
        push 0x0
        push edx
        call edi
        mov eax, dword ptr [esi + 0x20]
        push eax
        call ebx
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x54]
        mov edi, eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD940
        mov ecx, dword ptr [mem_00B5D200]
        mov edx, dword ptr [edi + 0x20]
        push 0x0
        push eax
        push ecx
        push edx
        call dword ptr [mem_00925694]
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x006B4BA0] sub_006B4BA0 (49 bytes)
extern "C" void __fastcall fn_006B4BA0(void* self, int edx_unused, int a1, int a2, int a3) {
    if (a1 == 0xd) {
        ((void (__fastcall*)(void*))ext_006B4AA0)(self);
    }
    void* hwnd = *(void**)((char*)self + 0x20);
    void* parent = ((void* (__stdcall*)(void*))mem_00925650)(hwnd);
    void* wnd = ext_006A5E00(parent);
    ext_006A60D0(wnd);
    ((void (__fastcall*)(void*))ext_006A5EA8)(self);
}

// [0x006B6600] sub_006B6600 (274 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5F50();
extern "C" void ext_006B4440();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_0092449C;
extern "C" int mem_009242F4;
extern "C" int mem_00925694;
extern "C" __declspec(naked) void __fastcall fn_006B6600(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 08b7bfbh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push edi
        mov edi, ecx
        call ext_006A5EA8
        cmp dword ptr [esp+18h], 0
        je L_done
        push ebx
        push esi
        lea ecx, [esp+20h]
        call dword ptr [mem_009242FC]
        lea eax, [esp+20h]
        lea esi, [edi+0a8h]
        push eax
        mov ecx, esi
        mov dword ptr [esp+1ch], 0
        call ext_006A5F4A
        mov ecx, dword ptr [edi+114h]
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx+8]
        lea ecx, [esp+0ch]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp+18h], 1
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp+24h]
        call dword ptr [mem_0092449C]
        test eax, eax
        lea ecx, [esp+0ch]
        setne bl
        mov byte ptr [esp+18h], 0
        call dword ptr [mem_009242F4]
        test bl, bl
        je L_cleanup
        mov ecx, dword ptr [edi+114h]
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx+8]
        lea ecx, [esp+0ch]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp+18h], 2
        call dword ptr [mem_00924300]
        push eax
        mov ecx, esi
        call ext_006A5F50
        lea ecx, [esp+0ch]
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [esi+20h]
        mov edi, dword ptr [mem_00925694]
        push -1
        push 0
        push 0b1h
        push eax
        call edi
        mov ecx, dword ptr [esi+20h]
        push 0
        push 0
        push 0b7h
        push ecx
        call edi
L_cleanup:
        lea ecx, [esp+20h]
        call dword ptr [mem_009242F4]
        pop esi
        pop ebx
L_done:
        mov ecx, dword ptr [esp+8]
        pop edi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 8
    }
}

// [0x006B13F0] sub_006B13F0 (282 bytes)
extern "C" void ext_006B12F0();
extern "C" void ext_006B1340();
extern "C" int mem_0092A270;
extern "C" int mem_00991558;
extern "C" int mem_0092C518;
extern "C" __declspec(naked) int __cdecl fn_006B13F0(double a, double b, double c) {
    __asm {
        fldz
        sub esp, 0x18
        fld qword ptr [esp + 0x24]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jp L_141B
        fstp st(0)
        fld qword ptr [esp + 0x2c]
        fld st(0)
        fxch st(1)
        fst qword ptr [esp + 0x8]
        fstp qword ptr [esp + 0x10]
        jmp L_14BE
L_141B:
        fld qword ptr [mem_00993828]
        fld qword ptr [esp + 0x2c]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jp L_143C
        fxch st(1)
        fadd qword ptr [mem_0092A270]
        fmul st, st(1)
        jmp L_1448
L_143C:
        fld st(1)
        fadd st, st(1)
        fxch st(2)
        fmul st, st(1)
        _emit 0xde
        _emit 0xea
        fxch st(1)
L_1448:
        fst qword ptr [esp + 0x24]
        sub esp, 0x18
        fxch st(1)
        fadd st(0), st
        fsub st, st(1)
        fst qword ptr [esp + 0x18]
        fld qword ptr [esp + 0x34]
        fadd qword ptr [mem_00991558]
        fstp qword ptr [esp + 0x10]
        fxch st(1)
        fstp qword ptr [esp + 0x8]
        fstp qword ptr [esp]
        call ext_006B1340
        fstp qword ptr [esp + 0x28]
        fld qword ptr [esp + 0x34]
        fstp qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x3c]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x18]
        fstp qword ptr [esp]
        call ext_006B1340
        fstp qword ptr [esp + 0x20]
        fld qword ptr [esp + 0x34]
        fsub qword ptr [mem_00991558]
        fstp qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x3c]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x18]
        fstp qword ptr [esp]
        call ext_006B1340
        add esp, 0x18
L_14BE:
        fmul qword ptr [mem_0092C518]
        push ebx
        sub esp, 0x8
        fstp qword ptr [esp]
        call ext_006B12F0
        fld qword ptr [esp + 0x14]
        xor ebx, ebx
        fmul qword ptr [mem_0092C518]
        mov bh, al
        fstp qword ptr [esp]
        call ext_006B12F0
        fld qword ptr [esp + 0x1c]
        mov bl, al
        fmul qword ptr [mem_0092C518]
        fstp qword ptr [esp]
        shl ebx, 0x8
        call ext_006B12F0
        movzx eax, al
        add esp, 0x8
        or eax, ebx
        pop ebx
        add esp, 0x18
        ret
    }
}

// [0x006B84A0] sub_006B84A0 (289 bytes)
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FD4;
extern "C" int mem_00877622;
extern "C" int mem_00928B5D;
extern "C" __declspec(naked) void __fastcall fn_006B84A0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_00877622
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push esi
        push edi
        mov edi, dword ptr [esp + 0x50]
        test edi, edi
        mov esi, ecx
        je null_case
        mov dword ptr [esi + 0x58], edi
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 4]
        lea ecx, [esp + 8]
        push ecx
        mov ecx, edi
        call edx
        push eax
        lea ecx, [esi + 0xbc]
        mov dword ptr [esp + 0x4c], 0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x48], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x10]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        call edx
        push eax
        lea ecx, [esi + 0xf4]
        mov dword ptr [esp + 0x4c], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x48], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x14]
        mov ecx, edi
        call edx
        mov dword ptr [esi + 0x114], eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x18]
        mov ecx, edi
        call edx
        mov dword ptr [esi + 0x110], eax
        mov eax, dword ptr [esp + 0x54]
        pop edi
        mov dword ptr [esi + 0x54], eax
        pop esi
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 8
    null_case:
        push offset mem_00928B5D
        lea ecx, [esi + 0xbc]
        mov dword ptr [esi + 0x58], 0
        call dword ptr [mem_00924FD4]
        push offset mem_00928B5D
        lea ecx, [esi + 0xf4]
        call dword ptr [mem_00924FD4]
        mov ecx, dword ptr [esp + 0x54]
        mov dword ptr [esi + 0x54], ecx
        mov ecx, dword ptr [esp + 0x40]
        mov eax, 0xa
        mov dword ptr [esi + 0x114], eax
        mov dword ptr [esi + 0x110], eax
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 8
    }
}

// [0x006B6800] sub_006B6800 (316 bytes)
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5F50();
extern "C" void ext_006AD940();
extern "C" void ext_006B4440();
extern "C" int mem_00925650;
extern "C" int mem_00B5D200;
extern "C" int mem_00925694;
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_0092449C;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006B6800(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x87c90b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x20]
        push edi
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x114]
        mov edi, eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD940
        mov ecx, dword ptr [mem_00B5D200]
        mov edx, dword ptr [edi + 0x20]
        mov ebp, dword ptr [mem_00925694]
        push -1
        push eax
        push ecx
        push edx
        call ebp
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x10]
        lea edi, [esi + 0xa8]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x24], 0
        call ext_006A5F4A
        mov ecx, dword ptr [esi + 0x114]
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp + 0x20], 1
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092449C]
        test eax, eax
        lea ecx, [esp + 0x14]
        setne bl
        mov byte ptr [esp + 0x20], 0
        call dword ptr [mem_009242F4]
        test bl, bl
        je L_006B691B
        mov ecx, dword ptr [esi + 0x114]
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp + 0x20], 2
        call dword ptr [mem_00924300]
        push eax
        mov ecx, edi
        call ext_006A5F50
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [edi + 0x20]
        push -1
        push 0
        push 0xb1
        push eax
        call ebp
        mov ecx, dword ptr [edi + 0x20]
        push 0
        push 0
        push 0xb7
        push ecx
        call ebp
    L_006B691B:
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 8
    }
}

// [0x006B0770] sub_006B0770 (359 bytes)
extern "C" void ext_006A6004();
extern "C" void ext_006ACE20();
extern "C" void ext_006ACE40();
extern "C" int mem_00925658;
extern "C" int mem_00924300;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;
extern "C" int mem_00925620;
extern "C" int mem_00925678;
extern "C" __declspec(naked) void __fastcall fn_006B0770(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x34
        push ebx
        push edi
        mov edi, ecx
        lea ebx, [edi + 0x90]
        test ebx, ebx
        je L_out
        cmp dword ptr [ebx + 0x4], 0
        je L_out
        mov eax, dword ptr [edi + 0x14]
        mov eax, dword ptr [eax + 0x20]
        push ebp
        push esi
        push eax
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov esi, eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x30]
        push ebx
        mov ecx, esi
        call eax
        lea ecx, [edi + 0xa0]
        mov ebx, eax
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 0x8]
        mov ebp, dword ptr [mem_00924080]
        push eax
        push edx
        call ebp
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        lea ecx, [edi + 0xa4]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x8]
        push eax
        push ecx
        call ebp
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x30]
        push ebx
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edi + 0x14]
        mov eax, dword ptr [edx + 0x20]
        push ecx
        push eax
        call dword ptr [mem_00925620]
        lea ecx, [esp + 0x34]
        push ecx
        mov ecx, edi
        call ext_006ACE20
        lea edx, [esp + 0x34]
        push edx
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call ext_006ACE40
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x3c]
        push 0
        push -3
        lea eax, [esp + 0x2c]
        mov dword ptr [esp + 0x2c], ecx
        mov dword ptr [esp + 0x34], edx
        push eax
        call dword ptr [mem_00925678]
        mov eax, dword ptr [esp + 0x48]
        mov esi, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x30]
        mov edi, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0xc], edx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax], esi
        add edi, esi
        mov dword ptr [eax + 0x8], edi
        mov eax, dword ptr [esp + 0x4c]
        mov dword ptr [eax + 0x4], ecx
        mov ecx, dword ptr [esp + 0x2c]
        mov dword ptr [eax + 0xc], edx
        mov edx, ecx
        sub edx, dword ptr [esp + 0x1c]
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x8], ecx
        pop ebp
L_out:
        pop edi
        pop ebx
        add esp, 0x34
        ret 8
    }
}

// [0x006B0520] sub_006B0520 (376 bytes)
extern "C" void ext_00430E20();
extern "C" void ext_006B0490();
extern "C" void ext_006B3320();
extern "C" int mem_009242FC;
extern "C" int mem_009242F8;
extern "C" int mem_009244D4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006B0520(void* self, int edx_unused, int a1, int a2, char a3, int a4, int a5, int a6, int a7) {
    __asm {
        push -1
        push 0x8b7777
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x20]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x14], esi
        call ext_006B3320
        mov dl, byte ptr [esp + 0x28]
        xor edi, edi
        lea ecx, [esi + 0x8c]
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esi], 0x9911ec
        mov byte ptr [esi + 0x88], dl
        call dword ptr [mem_009242FC]
        mov dword ptr [esi + 0x94], edi
        mov dword ptr [esi + 0x90], 0x92a5d4
        mov ecx, dword ptr [esp + 0x30]
        mov eax, dword ptr [esp + 0x2c]
        mov dword ptr [esi + 0x9c], ecx
        lea edi, [esi + 0xa0]
        mov ecx, edi
        mov dword ptr [esi + 0x98], eax
        call dword ptr [mem_009242FC]
        lea ebp, [esi + 0xa4]
        mov ecx, ebp
        call dword ptr [mem_009242FC]
        mov ecx, dword ptr [esi + 0x98]
        mov edx, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x38]
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 4
        mov dword ptr [esi + 0xa8], edx
        mov dword ptr [esi + 0xac], eax
        call dword ptr [mem_009242F8]
        push edi
        lea edx, [esp + 0x28]
        push 0x92f144
        push edx
        call ext_006B0490
        push 0x92f140
        push eax
        lea eax, [esp + 0x3c]
        push eax
        mov byte ptr [esp + 0x30], 5
        call ext_00430E20
        add esp, 0x18
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 6
        call dword ptr [mem_009244D4]
        lea ecx, [esp + 0x28]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x18], 4
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esi + 0x9c]
        push ecx
        mov ecx, ebp
        call dword ptr [mem_009242F8]
        push ebp
        lea edx, [esp + 0x28]
        push 0x92f144
        push edx
        call ext_006B0490
        push 0x92f140
        push eax
        mov byte ptr [esp + 0x2c], 7
        lea eax, [esp + 0x3c]
        push eax
        call ext_00430E20
        add esp, 0x18
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0x1c], 8
        call dword ptr [mem_009244D4]
        lea ecx, [esp + 0x28]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x24]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x1c
    }
}

// [0x006B0280] sub_006B0280 (64 bytes)
extern "C" void ext_006B0520();
extern "C" int mem_00AA80E8;
extern "C" int mem_00AA80E4;
extern "C" __declspec(naked) void __fastcall fn_006B0280(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, [mem_00AA80E8]
        mov edx, [esp+0Ch]
        push esi
        push 0
        push 0
        push eax
        mov eax, [esp+18h]
        mov esi, ecx
        mov ecx, [mem_00AA80E4]
        push ecx
        mov ecx, [esp+18h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call ext_006B0520
        mov dword ptr [esi], 0x9911a4
        mov dword ptr [esi+0B0h], 0
        mov eax, esi
        pop esi
        ret 10h
    }
}

// [0x006B1510] sub_006B1510 (390 bytes)
extern "C" int mem_0092C510;
extern "C" int mem_0093F7B0;
extern "C" int mem_00999B40;
extern "C" __declspec(naked) void __cdecl fn_006B1510(unsigned int rgb, double* h, double* s, double* l) {
    __asm {
        sub esp, 8
        mov eax, dword ptr [esp+0xc]
        movzx ecx, al
        mov dword ptr [esp+0xc], ecx
        movzx edx, ah
        fild dword ptr [esp+0xc]
        fld qword ptr [mem_0092C518]
        shr eax, 0x10
        mov dword ptr [esp+0xc], edx
        fdiv st(1), st
        movzx eax, al
        fxch st(1)
        fst qword ptr [esp]
        fild dword ptr [esp+0xc]
        mov dword ptr [esp+0xc], eax
        fdiv st, st(2)
        fild dword ptr [esp+0xc]
        fdivrp st(3), st
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        jne L1
        fld st(0)
        jmp L2
    L1: fld st(2)
    L2: fcomp st(2)
        fnstsw ax
        test ah, 5
        jp L3
        fld st(1)
        jmp L5
    L3: fcom st(2)
        fnstsw ax
        test ah, 0x41
        jne L4
        fld st(0)
        jmp L5
    L4: fld st(2)
    L5: fxch st(1)
        fcom st(3)
        fnstsw ax
        test ah, 5
        jp L6
        fld st(0)
        jmp L7
    L6: fld st(3)
    L7: fcomp st(3)
        fnstsw ax
        test ah, 0x41
        je L10
        fstp st(2)
        fxch st(1)
        fcom st(2)
        fnstsw ax
        test ah, 5
        jp L8
        fld st(0)
        jmp L9
    L8: fld st(2)
    L9: fxch st(2)
        fxch st(1)
    L10: mov ecx, dword ptr [esp+0x18]
        fld st(2)
        fadd st, st(2)
        fld st(0)
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fxch st(1)
        fst qword ptr [ecx]
        fld st(5)
        fucomp st(5)
        fnstsw ax
        test ah, 0x44
        jp L11
        mov edx, dword ptr [esp+0x14]
        fstp st(5)
        mov eax, dword ptr [esp+0x10]
        fstp st(3)
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fstp st(1)
        fstp st(0)
        fldz
        fst qword ptr [edx]
        fstp qword ptr [eax]
        add esp, 8
        ret
    L11: fld st(4)
        fsub st, st(6)
        fxch st(1)
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 5
        fld qword ptr [mem_0092C510]
        jp L12
        fstp st(5)
        mov ecx, dword ptr [esp+0x14]
        fld st(0)
        fdivrp st(2), st
        fxch st(1)
        fstp qword ptr [ecx]
        jmp L13
    L12: fstp st(2)
        mov edx, dword ptr [esp+0x14]
        fld st(1)
        fsub st, st(4)
        fsubrp st(5), st
        fld st(0)
        fdivrp st(5), st
        fxch st(4)
        fstp qword ptr [edx]
        fxch st(3)
    L13: fld st(2)
        fld qword ptr [esp]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jp L14
        fstp st(0)
        fstp st(2)
        fstp st(2)
        fxch st(1)
        fsubrp st(2), st
        fdivp st(1), st
        jmp L17
    L14: fxch st(3)
        fucomp st(2)
        fnstsw ax
        test ah, 0x44
        jp L15
        fstp st(1)
        fxch st(3)
        fsubrp st(1), st
        fdivrp st(2), st
        faddp st(1), st
        jmp L17
    L15: fstp st(3)
        fstp st(3)
        fsubrp st(2), st
        fdivp st(1), st
        fadd qword ptr [mem_0093F7B0]
    L17: mov ecx, dword ptr [esp+0x10]
        fstp qword ptr [ecx]
        fld qword ptr [ecx]
        fdiv qword ptr [mem_00999B40]
        fst qword ptr [ecx]
        fldz
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L18
        fadd qword ptr [mem_0092A270]
        fstp qword ptr [ecx]
        add esp, 8
        ret
    L18: fstp st(0)
        add esp, 8
        ret
    }
}

// [0x006B6AB0] sub_006B6AB0 (424 bytes)
extern "C" void ext_0041B860();
extern "C" void ext_006A5EBA();
extern "C" void ext_006A5EC6();
extern "C" void ext_006A5ECC();
extern "C" void ext_006A6010();
extern "C" void ext_006A6172();
extern "C" void ext_006A6376();
extern "C" void ext_006A7D30();
extern "C" void ext_006A7D50();
extern "C" void ext_006ACFA0();
extern "C" void ext_006ACFC0();
extern "C" void ext_006AD1C0();
extern "C" void ext_006AD890();
extern "C" void ext_006B4440();
extern "C" void ext_006B48B0();
extern "C" int mem_0092566C;
extern "C" int mem_00B5D25C;
extern "C" int mem_009256CC;
extern "C" int mem_009256C8;

// [0x006B6AB0] sub_006B6AB0 (424 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B6AB0(void* self) {
    __asm {
        push -1
        push 0x8b7c73
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xb8
        push ebp
        push esi
        mov esi, ecx
        push edi
        push esi
        lea ecx, [esp + 0x74]
        call ext_006A5ECC
        lea eax, [esp + 0x70]
        push eax
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0xd0], 0
        call ext_006B48B0
        mov edx, dword ptr [esi + 0x20]
        lea ecx, [esp + 0xc]
        push ecx
        push edx
        mov byte ptr [esp + 0xd4], 1
        call dword ptr [mem_0092566C]
        mov ecx, dword ptr [esi + 0x54]
        call ext_006AD1C0
        mov ecx, eax
        call ext_006A7D30
        push eax
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x44]
        call ext_006A6172
        mov ecx, dword ptr [esi + 0x54]
        call ext_006AD1C0
        mov ecx, eax
        call ext_006A7D50
        push eax
        lea ecx, [esp + 0x40]
        call ext_006A6376
        push 1
        lea ecx, [esp + 0x40]
        call ext_006A6010
        lea ecx, [esi + 0x58]
        push ecx
        lea ecx, [esp + 0x40]
        call ext_006A5EC6
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x18]
        mov edi, eax
        mov dword ptr [esp + 0x2c], ecx
        or eax, -1
        sub eax, dword ptr [mem_00B5D25C]
        mov dword ptr [esp + 0x30], edx
        mov edx, dword ptr [esp + 0x14]
        add ecx, -1
        mov dword ptr [esp + 0x2c], ecx
        mov ecx, dword ptr [esi + 0x54]
        add edx, eax
        add ebp, 1
        mov dword ptr [esp + 0x34], edx
        mov dword ptr [esp + 0x38], ebp
        call ext_006ACFC0
        mov ecx, dword ptr [esi + 0x54]
        push eax
        call ext_006ACFA0
        lea ecx, [esp + 0x40]
        push eax
        lea eax, [esp + 0x34]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0x54]
        call ext_006B4440
        mov ecx, eax
        call ext_006AD890
        push edi
        lea ecx, [esp + 0x40]
        call ext_006A5EC6
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x20], eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x1c], edx
        mov dword ptr [esp + 0x24], eax
        sub eax, dword ptr [mem_00B5D25C]
        mov ecx, dword ptr [esp + 0x18]
        mov esi, dword ptr [esi + 0x6c]
        mov dword ptr [esp + 0x28], ecx
        mov dword ptr [esp + 0x1c], eax
        mov edx, dword ptr [esi + 0x20]
        push edx
        call dword ptr [mem_009256CC]
        mov ecx, dword ptr [esp + 0x40]
        neg eax
        sbb eax, eax
        and eax, 0x200
        or eax, 1
        push eax
        push 3
        lea eax, [esp + 0x24]
        push eax
        push ecx
        call dword ptr [mem_009256C8]
        lea ecx, [esp + 0x3c]
        mov byte ptr [esp + 0xcc], 0
        call ext_0041B860
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0xcc], 0xffffffff
        call ext_006A5EBA
        mov ecx, dword ptr [esp + 0xc4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0xc4
        ret
    }
}

// [0x006B0F60] sub_006B0F60 (556 bytes)
extern "C" void ext_006A643C();
extern "C" __declspec(naked) void __fastcall fn_006B0F60(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8b7824
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_006A5EA8
        mov eax, dword ptr [esi + 0x58]
        mov eax, dword ptr [eax + 0x19c]
        cmp dword ptr [esi + 0x5c], eax
        mov ebp, dword ptr [mem_00925650]
        jne L_10F6
        mov ecx, dword ptr [esi + 0x54]
        call ext_006B4440
        mov edi, eax
        test edi, edi
        je L_10F6
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0x8]
        lea eax, [esp + 0x14]
        push eax
        mov ecx, edi
        call edx
        mov ecx, esi
        mov dword ptr [esp + 0x24], 0
        call ext_006A643C
        test eax, 0x800
        jne L_1059
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x28], 1
        call ext_006A5F4A
        mov ecx, dword ptr [esi + 0x54]
        call ext_006B4440
        push ecx
        lea edx, [esp + 0x14]
        mov ecx, esp
        mov dword ptr [esp + 0x1c], esp
        push edx
        mov ebx, eax
        call dword ptr [mem_00924494]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0xc]
        mov ecx, ebx
        call edx
        mov ecx, dword ptr [esi + 0x54]
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp + 0x24], 2
        call dword ptr [mem_00924300]
        push eax
        mov ecx, esi
        call ext_006A5F50
        lea ecx, [esp + 0x18]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x24], 0
        call dword ptr [mem_009242F4]
    L_1059:
        mov eax, dword ptr [esi + 0x20]
        push eax
        call ebp
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [eax + 0x20]
        push 1
        push 0
        push ecx
        call dword ptr [mem_00925688]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0x8]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, edi
        call edx
        mov edi, eax
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x24], 3
        call dword ptr [mem_00924300]
        push eax
        mov ecx, edi
        call dword ptr [mem_0092449C]
        test eax, eax
        lea ecx, [esp + 0x18]
        setne bl
        mov byte ptr [esp + 0x24], 0
        call dword ptr [mem_009242F4]
        test bl, bl
        je L_10E4
        mov eax, dword ptr [esi + 0x20]
        push eax
        call ebp
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x54]
        mov edi, eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD940
        mov ecx, dword ptr [mem_00B5D200]
        mov edx, dword ptr [edi + 0x20]
        push 0
        push eax
        push ecx
        push edx
        call dword ptr [mem_00925694]
    L_10E4:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x24], -1
        call dword ptr [mem_009242F4]
    L_10F6:
        mov edi, dword ptr [esp + 0x2c]
        test edi, edi
        je L_1133
        mov eax, dword ptr [edi + 0x38]
        test eax, eax
        jne L_110B
        mov eax, dword ptr [edi + 0x20]
        push eax
        call ebp
    L_110B:
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x20]
        push ecx
        mov ebx, eax
        call ebp
        push eax
        call ext_006A5E00
        cmp ebx, eax
        je L_1153
        mov edx, dword ptr [esi + 0x20]
        push edx
        call ebp
        push eax
        call ext_006A5E00
        cmp edi, eax
        je L_1153
    L_1133:
        mov eax, dword ptr [esi + 0x20]
        push eax
        call ebp
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [mem_00B5D208]
        mov edx, dword ptr [eax + 0x20]
        push 0
        push edi
        push ecx
        push edx
        call dword ptr [mem_00925694]
    L_1153:
        mov eax, dword ptr [esi + 0x20]
        mov edi, dword ptr [mem_00925694]
        push 0
        push 0
        push 0xb1
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x20]
        push 0
        push 0
        push 0xb7
        push ecx
        call edi
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x18
        ret 4
    }
}

// [0x006B54E0] sub_006B54E0 (566 bytes)
extern "C" void ext_004077E0();
extern "C" void ext_0041B860();
extern "C" void ext_006A5EBA();
extern "C" void ext_006A5EC6();
extern "C" void ext_006A5ECC();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A6010();
extern "C" void ext_006A6172();
extern "C" void ext_006A7D30();
extern "C" void ext_006ACFA0();
extern "C" void ext_006ACFC0();
extern "C" void ext_006AD1C0();
extern "C" void ext_006AD890();
extern "C" void ext_006B4440();
extern "C" void ext_006B48B0();
extern "C" void ext_006B5410();
extern "C" int mem_0092566C;
extern "C" int mem_009256C8;
extern "C" int mem_009242FC;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006B54E0(void* self) {
    __asm {
        push -1
        push 0x8b7aef
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc4
        push ebp
        push esi
        mov esi, ecx
        push esi
        lea ecx, [esp + 0x7c]
        call ext_006A5ECC
        lea eax, [esp + 0x78]
        push eax
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0xd8], 0
        call ext_006B48B0
        mov edx, dword ptr [esi + 0x20]
        lea ecx, [esp + 0x2c]
        push ecx
        push edx
        mov byte ptr [esp + 0xdc], 1
        call dword ptr [mem_0092566C]
        push 1
        lea ecx, [esp + 0x48]
        call ext_006A6010
        lea eax, [esi + 0x5c]
        push eax
        lea ecx, [esp + 0x48]
        call ext_006A5EC6
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x30]
        mov ebp, eax
        mov eax, dword ptr [esp + 0x34]
        mov dword ptr [esp + 0xc], ecx
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esp + 0x38]
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x18], eax
        push ecx
        lea edx, [esp + 0x20]
        add eax, 1
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x20], eax
        call ext_006B5410
        cmp byte ptr [esi + 0xde], 0
        je loc_006B55CB
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x48]
        add eax, -0x10
        mov dword ptr [esp + 0x1c], eax
        mov al, byte ptr [esi + 0x64]
        neg al
        lea ecx, [esp + 0x1c]
        sbb eax, eax
        and eax, 0x200
        or eax, 1
        push eax
        push 3
        push ecx
        push edx
        call dword ptr [mem_009256C8]
        sub dword ptr [esp + 0x14], 0x10
        jmp loc_006B5682
loc_006B55CB:
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0xd8], 2
        call ext_006A5F4A
        lea ecx, [esp + 0x8]
        call dword ptr [mem_0092431C]
        test eax, eax
        jle loc_006B5670
        push edi
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esp + 0x44]
        push edx
        lea ecx, [esp + 0x84]
        call ext_004077E0
        mov eax, dword ptr [esp + 0x28]
        sub eax, dword ptr [esp + 0x40]
        mov ecx, dword ptr [esp + 0x4c]
        sub eax, 4
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x18], eax
        mov al, byte ptr [esi + 0x64]
        neg al
        sbb eax, eax
        and eax, 0x200
        or eax, 0x10
        push eax
        push 4
        lea eax, [esp + 0x28]
        push eax
        push ecx
        call dword ptr [mem_009256C8]
        mov edi, dword ptr [esp + 0x48]
        push 0x25
        lea edx, [esp + 0x24]
        push edx
        lea ecx, [esp + 0x14]
        add edi, 0x70
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x58]
        call eax
        pop edi
loc_006B5670:
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0xd4], 1
        call dword ptr [mem_009242F4]
loc_006B5682:
        mov ecx, dword ptr [esi + 0x58]
        call ext_006AD1C0
        mov ecx, eax
        call ext_006A7D30
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x4c]
        call ext_006A6172
        mov ecx, dword ptr [esi + 0x58]
        sub dword ptr [esp + 0x14], 1
        call ext_006ACFC0
        mov ecx, dword ptr [esi + 0x58]
        push eax
        call ext_006ACFA0
        mov ecx, dword ptr [esi + 0x58]
        lea edx, [esp + 0x10]
        push eax
        push edx
        lea eax, [esp + 0x50]
        push eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD890
        push ebp
        lea ecx, [esp + 0x48]
        call ext_006A5EC6
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0xd4], 0
        call ext_0041B860
        lea ecx, [esp + 0x78]
        mov dword ptr [esp + 0xd4], -1
        call ext_006A5EBA
        mov ecx, dword ptr [esp + 0xcc]
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0xd0
        ret
    }
}

// [0x006B7E30] sub_006B7E30 (577 bytes)
extern "C" void ext_006A5E4E();
extern "C" void ext_006A61B4();
extern "C" void ext_006A61BA();
extern "C" void ext_006B3240();
extern "C" int mem_009242FC;
extern "C" int mem_00924930;
extern "C" int mem_009244D4;
extern "C" int mem_009242F4;
extern "C" int mem_00924858;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;

extern "C" __declspec(naked) void __fastcall fn_006B7E30(void* self, int edx_unused, void* arg0) {
    __asm {
        push -1
        push 0x8b7d2c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x24], ebx
        call dword ptr [mem_009242FC]
        xor esi, esi
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x5c], esi
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x20], esi
        push ecx
        lea edx, [esp + 0x28]
        lea esi, [ebx + 0x74]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x68], 1
        mov byte ptr [esp + 0x1c], 0xd
        mov byte ptr [esp + 0x1d], 0xa
        mov byte ptr [esp + 0x1e], 0
        call dword ptr [mem_00924930]
        push eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x60], 2
        call dword ptr [mem_009244D4]
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x5c], 1
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924858]
        test al, al
        jne loc_6B7F3D
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    loc_6B7ED0:
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092431C]
        lea ecx, [esp + 0x18]
        mov edi, eax
        call dword ptr [mem_0092431C]
        cmp edi, eax
        jle loc_6B7EF9
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_009244D4]
    loc_6B7EF9:
        lea ecx, [esp + 0x1c]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        lea eax, [esp + 0x28]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924930]
        push eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x60], 3
        call dword ptr [mem_009244D4]
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x5c], 1
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924858]
        test al, al
        je loc_6B7ED0
    loc_6B7F3D:
        lea ecx, [ebx + 0x88]
        push ecx
        lea ecx, [esp + 0x44]
        call ext_006A61BA
        lea edx, [esp + 0x28]
        push edx
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x60], 4
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [esp + 0x54]
        push eax
        call dword ptr [mem_00924080]
        mov edi, dword ptr [esp + 0x64]
        mov eax, dword ptr [edi + 8]
        sub eax, dword ptr [edi]
        mov dword ptr [esp + 0x20], 0x15e
        mov dword ptr [esp + 0x64], eax
        cmp eax, 0x15e
        lea eax, [esp + 0x64]
        jl loc_6B7F9C
        lea eax, [esp + 0x20]
    loc_6B7F9C:
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x28]
        add ecx, 0x50
        mov dword ptr [esp + 0x20], eax
        cmp eax, ecx
        mov dword ptr [esp + 0x64], ecx
        lea eax, [esp + 0x64]
        jl loc_6B7FB9
        lea eax, [esp + 0x20]
    loc_6B7FB9:
        mov ebp, dword ptr [eax]
        mov eax, dword ptr [ebx + 0x7c]
        cmp eax, 4
        jl loc_6B7FC8
        add eax, 4
        jmp loc_6B7FCD
    loc_6B7FC8:
        mov eax, 4
    loc_6B7FCD:
        mov esi, dword ptr [edi + 0xc]
        sub esi, dword ptr [edi + 4]
        lea ecx, [esp + 0x30]
        push ecx
        imul esi, eax
        push edi
        call ext_006B3240
        mov eax, dword ptr [esp + 0x44]
        sub eax, dword ptr [esp + 0x3c]
        mov ecx, dword ptr [edi]
        mov edi, dword ptr [edi + 4]
        mov ebx, dword ptr [esp + 0x38]
        mov edx, eax
        sub edx, edi
        add esp, 8
        cmp esi, edx
        jle loc_6B800B
        cmp esi, eax
        jge loc_6B8007
        sub eax, esi
        mov edi, eax
        jmp loc_6B800B
    loc_6B8007:
        mov edi, ebx
        mov esi, eax
    loc_6B800B:
        mov edx, dword ptr [esp + 0x38]
        mov eax, edx
        sub eax, ecx
        cmp ebp, eax
        jle loc_6B8029
        mov eax, edx
        sub eax, ebx
        cmp ebp, eax
        jge loc_6B8025
        sub edx, ebp
        mov ecx, edx
        jmp loc_6B8029
    loc_6B8025:
        mov ecx, ebx
        mov ebp, eax
    loc_6B8029:
        push 0x14
        push esi
        push ebp
        push edi
        push ecx
        mov ecx, dword ptr [esp + 0x38]
        push 0
        call ext_006A5E4E
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x5c], 1
        call ext_006A61B4
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x18]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x50
        ret 4
    }
}

// [0x006B6CF0] sub_006B6CF0 (625 bytes)
extern "C" void* __stdcall ext_006A5E00(void* hwnd);
extern "C" void ext_006A5E72();
extern "C" void ext_006A5F50();
extern "C" void ext_006A60E8();
extern "C" void ext_006AD0C0();
extern "C" void ext_006AD1C0();
extern "C" void ext_006AD940();
extern "C" void ext_006B4440();
extern "C" int mem_009256CC;
extern "C" int mem_00B5D254;
extern "C" int mem_00925568;
extern "C" int mem_00B5D258;
extern "C" int mem_0092566C;
extern "C" int mem_00925688;
extern "C" int mem_00B5D25C;
extern "C" int mem_00925694;
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_0092449C;
extern "C" int mem_009242F4;
extern "C" int mem_00924494;
extern "C" int mem_00925650;
extern "C" int mem_00B5D200;
extern "C" __declspec(naked) void __fastcall fn_006B6CF0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x008B7C9B
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x6c]
        mov eax, dword ptr [eax + 0x20]
        push edi
        push eax
        call dword ptr [mem_009256CC]
        test eax, eax
        je L_end
        mov ecx, dword ptr [esi + 0x6c]
        push 0
        call ext_006A5E72
        mov ecx, dword ptr [mem_00B5D254]
        push ecx
        call dword ptr [mem_00925568]
        mov eax, dword ptr [esi + 0x20]
        lea edx, [esp + 0x2c]
        push edx
        push eax
        mov dword ptr [mem_00B5D258], 0
        call dword ptr [mem_0092566C]
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x2c]
        mov ebp, dword ptr [mem_00925688]
        mov dword ptr [esp + 0x24], eax
        sub eax, dword ptr [mem_00B5D25C]
        mov dword ptr [esp + 0x1c], ecx
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr [esp + 0x20], edx
        push 1
        lea edx, [esp + 0x20]
        mov dword ptr [esp + 0x20], eax
        mov eax, dword ptr [esi + 0x20]
        push edx
        push eax
        mov dword ptr [esp + 0x34], ecx
        call ebp
        mov ecx, dword ptr [esi + 0x54]
        call ext_006AD1C0
        cmp byte ptr [esp + 0x4c], 0
        mov ebx, eax
        mov ecx, dword ptr [ebx + 0x19c]
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], ecx
        je L_f36
        mov eax, dword ptr [esi + 0x6c]
        mov edx, dword ptr [eax + 0x20]
        mov edi, dword ptr [mem_00925694]
        push 0
        push 0
        push 0x188
        push edx
        call edi
        cmp eax, -1
        je L_f36
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_009242FC]
        mov eax, dword ptr [esi + 0x6c]
        mov eax, dword ptr [eax + 0x20]
        push 0
        push 0
        push 0x188
        push eax
        mov dword ptr [esp + 0x54], 0
        call edi
        lea ecx, [esp + 0x4c]
        push ecx
        mov ecx, dword ptr [esi + 0x6c]
        push eax
        call ext_006A60E8
        mov ecx, dword ptr [esi + 0x54]
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp + 0x44], 1
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x50]
        call dword ptr [mem_0092449C]
        test eax, eax
        lea ecx, [esp + 0x10]
        setne bl
        mov byte ptr [esp + 0x44], 0
        call dword ptr [mem_009242F4]
        test bl, bl
        je L_f20
        mov ecx, dword ptr [esi + 0x54]
        call ext_006B4440
        push ecx
        mov ebx, eax
        lea eax, [esp + 0x50]
        mov ecx, esp
        mov dword ptr [esp + 0x14], esp
        push eax
        call dword ptr [mem_00924494]
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0xc]
        mov ecx, ebx
        call eax
        cmp byte ptr [esi + 0x60], 0
        je L_eb6
        mov ecx, dword ptr [esi + 0x54]
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp + 0x44], 2
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x70]
        call ext_006A5F50
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x44], 0
        call dword ptr [mem_009242F4]
    L_eb6:
        mov eax, dword ptr [esi + 0x20]
        push 1
        push 0
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x20]
        mov ebp, dword ptr [mem_00925650]
        push ecx
        call ebp
        push eax
        call ext_006A5E00
        mov edx, dword ptr [eax + 0x20]
        push 1
        push 0
        push edx
        call dword ptr [mem_00925688]
        mov eax, dword ptr [esi + 0x6c]
        mov eax, dword ptr [eax + 0x20]
        push 0
        push 0
        push 0x188
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x20]
        push ecx
        mov ebx, eax
        call ebp
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x54]
        mov ebp, eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD940
        mov edx, dword ptr [mem_00B5D200]
        push ebx
        push eax
        mov eax, dword ptr [ebp + 0x20]
        push edx
        push eax
        call edi
    L_f20:
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0x44], -1
        call dword ptr [mem_009242F4]
        mov ebx, dword ptr [esp + 0x14]
    L_f36:
        mov ecx, dword ptr [esp + 0x18]
        cmp dword ptr [ebx + 0x19c], ecx
        jne L_end
        mov ecx, dword ptr [esi + 0x54]
        push 0
        call ext_006AD0C0
    L_end:
        mov ecx, dword ptr [esp + 0x3c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x38
        ret 4
    }
}

// [0x006B5AE0] sub_006B5AE0 (636 bytes)
extern "C" void ext_006A5E5A();
extern "C" void ext_006A5F50();
extern "C" void ext_006A6004();
extern "C" void ext_006B0DE0();
extern "C" void ext_006B4440();
extern "C" void ext_006B5410();
extern "C" int mem_00924300;
extern "C" int mem_0092431c;
extern "C" int mem_00924ca0;
extern "C" int mem_009244ec;
extern "C" int mem_00924518;
extern "C" int mem_009242f4;
extern "C" int mem_0092566c;
extern "C" int mem_00925658;
extern "C" int mem_00925620;
extern "C" int mem_009242f0;
extern "C" int mem_00924080;
extern "C" __declspec(naked) void __fastcall fn_006B5AE0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b7b4b
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x10]
        sub esp, 0x54
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0xdc], 0x0
        mov dword ptr [esi + 0x58], eax
        je L_6B5D4A
        push ebx
        push ebp
        push edi
        lea ebx, [esi + 0x68]
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x1c], ebx
        call ext_006B0DE0
        cmp byte ptr [esi + 0xdd], 0x0
        mov ecx, dword ptr [esi + 0x58]
        jne L_6B5B5D
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x74]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov dword ptr [esp + 0x6c], 0x0
        call dword ptr [mem_00924300]
        push eax
        mov ecx, ebx
        call ext_006A5F50
        jmp L_6B5C19
    L_6B5B5D:
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x74]
        push ecx
        mov ecx, eax
        call edx
        lea ecx, [esp + 0x74]
        mov dword ptr [esp + 0x6c], 0x1
        xor edi, edi
        call dword ptr [mem_0092431c]
        test eax, eax
        jle L_6B5BBF
        jmp L_6B5B90
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_6B5B90:
        push edi
        lea ecx, [esp + 0x78]
        call dword ptr [mem_00924ca0]
        cmp al, 0x0d
        je L_6B5BBF
        push edi
        lea ecx, [esp + 0x78]
        call dword ptr [mem_00924ca0]
        cmp al, 0x0a
        je L_6B5BBF
        lea ecx, [esp + 0x74]
        add edi, 0x1
        call dword ptr [mem_0092431c]
        cmp edi, eax
        jl L_6B5B90
    L_6B5BBF:
        push edi
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x7c]
        call dword ptr [mem_009244ec]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x6c], 0x2
        call dword ptr [mem_0092431c]
        lea ecx, [esp + 0x74]
        mov edi, eax
        call dword ptr [mem_0092431c]
        cmp edi, eax
        je L_6B5BFD
        push 0x92f680
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924518]
    L_6B5BFD:
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924300]
        push eax
        mov ecx, ebx
        call ext_006A5F50
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242f4]
    L_6B5C19:
        lea ecx, [esp + 0x74]
        mov dword ptr [esp + 0x6c], 0xffffffff
        call dword ptr [mem_009242f4]
        mov edx, dword ptr [esi + 0x20]
        lea ecx, [esp + 0x24]
        push ecx
        push edx
        call dword ptr [mem_0092566c]
        mov eax, dword ptr [esi + 0x20]
        mov ebx, dword ptr [mem_00925658]
        push eax
        call ebx
        push eax
        call ext_006A6004
        mov ecx, dword ptr [esi + 0x58]
        mov edi, eax
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x10]
        lea ebp, [esp + 0x24]
        push ebp
        lea ecx, [esi + 0x5c]
        push ecx
        push edi
        lea ecx, [esp + 0x40]
        push ecx
        mov ecx, eax
        call edx
        push edi
        lea eax, [esp + 0x48]
        push eax
        mov ecx, esi
        call ext_006B5410
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [esi + 0x20]
        push ecx
        push edx
        call dword ptr [mem_00925620]
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [esp + 0x34]
        mov ebp, dword ptr [esp + 0x44]
        mov edi, dword ptr [esp + 0x30]
        sub edi, dword ptr [esp + 0x28]
        push ecx
        mov dword ptr [esp + 0x58], eax
        add ebp, -0x1
        call ebx
        push eax
        call ext_006A6004
        mov ebx, eax
        mov edx, dword ptr [ebx]
        lea eax, [esi + 0x5c]
        push eax
        mov eax, dword ptr [edx + 0x30]
        mov ecx, ebx
        call eax
        push 0x9334d0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x78], eax
        call dword ptr [mem_009242f0]
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esp + 0x18]
        call dword ptr [mem_0092431c]
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [ebx + 0x8]
        push eax
        push edx
        call dword ptr [mem_00924080]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242f4]
        mov ecx, dword ptr [esp + 0x74]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x30]
        push ecx
        mov ecx, ebx
        call edx
        mov eax, dword ptr [ebx + 0x4]
        push eax
        mov ecx, dword ptr [esi + 0x88]
        push ecx
        call dword ptr [mem_00925620]
        mov ecx, dword ptr [esp + 0x54]
        mov eax, edi
        sub eax, dword ptr [esp + 0x20]
        push 0x0
        sub eax, 0x1
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 0x1
        sub edi, eax
        push edi
        sub ebp, ecx
        push ebp
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x2c]
        call ext_006A5E5A
        pop edi
        pop ebp
        pop ebx
    L_6B5D4A:
        mov ecx, dword ptr [esp + 0x58]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x60
        ret 0x4
    }
}

// [0x006B7A30] sub_006B7A30 (133 bytes)
extern "C" int mem_00925650;
extern "C" int mem_00B5D208;
extern "C" int mem_00925694;
extern "C" __declspec(naked) void __fastcall fn_006B7A30(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925650]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov esi, ecx
        je L_7A7F
        mov eax, dword ptr [edi + 0x38]
        test eax, eax
        push ebp
        jne L_7A51
        mov eax, dword ptr [edi + 0x20]
        push eax
        call ebx
    L_7A51:
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x20]
        push ecx
        mov ebp, eax
        call ebx
        push eax
        call ext_006A5E00
        cmp ebp, eax
        pop ebp
        je L_7AA8
        mov edx, dword ptr [esi + 0x20]
        push edx
        call ebx
        push eax
        call ext_006A5E00
        cmp edi, eax
        je L_7AA8
        cmp edi, dword ptr [esi + 0x6c]
        je L_7AA8
    L_7A7F:
        push 0
        mov ecx, esi
        call ext_006B6CF0
        mov eax, dword ptr [esi + 0x20]
        push eax
        call ebx
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [mem_00B5D208]
        mov edx, dword ptr [eax + 0x20]
        push 0
        push edi
        push ecx
        push edx
        call dword ptr [mem_00925694]
    L_7AA8:
        mov ecx, esi
        call ext_006A5EA8
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x006B7460] sub_006B7460 (364 bytes)
extern "C" void ext_00407850();
extern "C" void ext_0040BEE0();
extern "C" void ext_006A67CC();
extern "C" void ext_006B6CF0();
extern "C" int mem_0092560C;
extern "C" int mem_0092566C;
extern "C" int mem_00925628;
extern "C" int mem_00925650;
extern "C" int mem_00925564;
extern "C" int mem_00B5D254;
extern "C" int mem_00B5D260;

extern "C" __declspec(naked) void __fastcall fn_006B7460(void* self) {
    __asm {
        mov edx, dword ptr [mem_00B5D258]
        sub esp, 0x2c
        push esi
        mov esi, dword ptr [esp + 0x3c]
        push edi
        mov edi, dword ptr [esp + 0x3c]
        cmp edi, 0x201
        jne L_notdown
        mov eax, dword ptr [edx + 0x6c]
        test eax, eax
        je L_down_nochild
        mov eax, dword ptr [eax + 0x20]
L_down_nochild:
        cmp dword ptr [esi + 0x8], eax
        jne L_general_entry
        mov byte ptr [mem_00B5D260], 1
L_general_entry:
        mov eax, dword ptr [edx + 0x6c]
        test eax, eax
        jne L_general_child
        xor ecx, ecx
        jmp L_general
L_notdown:
        cmp edi, 0xa1
        je L_general_entry
        cmp edi, 0x204
        je L_general_entry
        cmp edi, 0xa4
        je L_general_entry
        cmp edi, 0x202
        jne L_pass
        mov eax, dword ptr [mem_00B5D258]
        mov eax, dword ptr [eax + 0x6c]
        test eax, eax
        jne L_up_child
        xor ecx, ecx
        jmp L_up_cmp
L_up_child:
        mov ecx, dword ptr [eax + 0x20]
L_up_cmp:
        mov eax, dword ptr [esi + 0x8]
        cmp eax, ecx
        jne L_pass
        lea ecx, [esp + 0x18]
        push ecx
        push 1
        push eax
        mov dword ptr [esp + 0x24], 0x1c
        mov dword ptr [esp + 0x28], 0x7
        call dword ptr [mem_0092560C]
        mov edx, dword ptr [mem_00B5D258]
        mov ecx, dword ptr [edx + 0x6c]
        call ext_0040BEE0
        cmp dword ptr [esp + 0x28], eax
        mov ecx, dword ptr [mem_00B5D258]
        je L_756e
        mov edx, dword ptr [ecx + 0x6c]
        lea eax, [esp + 0x8]
        push eax
        mov eax, dword ptr [edx + 0x20]
        push eax
        call dword ptr [mem_0092566C]
        mov edx, dword ptr [mem_00B5D258]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [edx + 0x6c]
        call ext_006A67CC
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        lea edx, [esp + 0x10]
        push edx
        call dword ptr [mem_00925628]
        test eax, eax
        je L_pass
        cmp byte ptr [mem_00B5D260], 0
        je L_pass
        mov ecx, dword ptr [mem_00B5D258]
        mov byte ptr [mem_00B5D260], 0
L_756e:
        call ext_00407850
        mov ecx, eax
        call ext_006A60D0
        push 1
        jmp L_75a5
L_general_child:
        mov ecx, dword ptr [eax + 0x20]
L_general:
        mov eax, dword ptr [esi + 0x8]
        cmp eax, ecx
        je L_pass
        mov ecx, dword ptr [edx + 0x20]
        cmp eax, ecx
        je L_pass
        push ecx
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, eax
        call ext_006A60D0
        push 0
L_75a5:
        mov ecx, dword ptr [mem_00B5D258]
        call ext_006B6CF0
L_pass:
        mov eax, dword ptr [esp + 0x38]
        mov ecx, dword ptr [mem_00B5D254]
        push esi
        push edi
        push eax
        push ecx
        call dword ptr [mem_00925564]
        pop edi
        pop esi
        add esp, 0x2c
        ret 0xc
    }
}

// [0x006B87F0] sub_006B87F0 (657 bytes)
extern "C" void ext_006A5F4A();
extern "C" void ext_006A60E8();
extern "C" void ext_006B87B0();
extern "C" int mem_00925694;
extern "C" int mem_009242FC;
extern "C" int mem_0092431C;
extern "C" int mem_009244EC;
extern "C" int mem_00924CEC;
extern "C" int mem_00924494;
extern "C" int mem_00924CE8;
extern "C" int mem_00924CE4;
extern "C" int mem_009242F4;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00925060;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_006B87F0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x008B7DE6
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x5c
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925694]
        push esi
        push edi
        xor ebx, ebx
        push ebx
        push ebx
        mov esi, ecx
        mov eax, dword ptr [esi + 0x7c]
        push 0x188
        push eax
        call ebp
        mov edi, eax
        cmp edi, -1
        jle L_006B8A5E
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242FC]
        lea ecx, [esp + 0x14]
        push ecx
        push edi
        lea ecx, [esi + 0x5c]
        mov dword ptr [esp + 0x7c], ebx
        call ext_006A60E8
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092431C]
        test eax, eax
        jle L_006B8A4C
        cmp byte ptr [esi + 0x118], bl
        je L_006B8A34
        mov ecx, dword ptr [esi + 0x20]
        lea edx, [esp + 0x28]
        push edx
        lea eax, [esp + 0x28]
        push eax
        push 0xb0
        push ecx
        call ebp
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x28]
        cmp eax, ecx
        mov dword ptr [esp + 0x1c], eax
        jl L_006B8891
        mov dword ptr [esp + 0x1c], ecx
    L_006B8891:
        lea ecx, [esp + 0x18]
        call dword ptr [mem_009242FC]
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x78], 0x1
        call ext_006A5F4A
        mov eax, dword ptr [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        lea ecx, [esp + 0x20]
        call dword ptr [mem_009244EC]
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x74], 0x2
        call dword ptr [mem_00924CEC]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924494]
        cmp dword ptr [esi + 0xd4], 0x10
        mov byte ptr [esp + 0x74], 0x3
        jb L_006B88F0
        mov eax, dword ptr [esi + 0xc0]
        jmp L_006B88F6
    L_006B88F0:
        lea eax, [esi + 0xc0]
    L_006B88F6:
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924CE8]
        mov edi, eax
        cmp edi, ebx
        jl L_006B8915
        lea ecx, [esp + 0x10]
        call dword ptr [mem_0092431C]
        mov ebx, eax
        sub ebx, edi
    L_006B8915:
        cmp dword ptr [esi + 0xf0], 0x10
        lea edi, [esi + 0xd8]
        jb L_006B8929
        mov eax, dword ptr [edi + 0x4]
        jmp L_006B892C
    L_006B8929:
        lea eax, [edi + 0x4]
    L_006B892C:
        push eax
        lea edx, [esp + 0x30]
        push edx
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924CE4]
        mov ecx, eax
        call dword ptr [mem_0092431C]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x30], eax
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x10]
        call dword ptr [mem_0092431C]
        sub eax, dword ptr [esp + 0x30]
        cmp ebx, eax
        jg L_006B8966
        mov ebx, eax
    L_006B8966:
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924FE4]
        lea eax, [esi + 0xbc]
        push eax
        lea eax, [esp + 0x54]
        push edi
        push eax
        mov byte ptr [esp + 0x80], 0x4
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        cmp dword ptr [eax + 0x18], 0x10
        mov ecx, dword ptr [eax + 0x14]
        mov byte ptr [esp + 0x74], 0x5
        jb L_006B89AC
        mov eax, dword ptr [eax + 0x4]
        jmp L_006B89AF
    L_006B89AC:
        add eax, 0x4
    L_006B89AF:
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        push eax
        lea ecx, [esp + 0x40]
        call dword ptr [mem_00925060]
        lea ecx, [esp + 0x50]
        mov edi, eax
        mov byte ptr [esp + 0x74], 0x4
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esi + 0x20]
        push edi
        push ebx
        push 0xb1
        push edx
        call ebp
        mov eax, dword ptr [esi + 0x20]
        push 0x0
        push 0x0
        push 0xb7
        push eax
        call ebp
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x20]
        push eax
        push 0x1
        push 0xc2
        push ecx
        call ebp
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x74], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x20]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x18]
        call dword ptr [mem_009242F4]
        jmp L_006B8A4C
    L_006B8A34:
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 0x20]
        push eax
        push 0x1
        push 0xc2
        push edx
        call ebp
    L_006B8A4C:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x74], 0xffffffff
        call dword ptr [mem_009242F4]
    L_006B8A5E:
        cmp byte ptr [esp + 0x7c], 0x0
        je L_006B8A6C
        mov ecx, esi
        call ext_006B87B0
    L_006B8A6C:
        mov ecx, dword ptr [esp + 0x6c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x68
        ret 0x4
    }
}

// [0x006B76D0] sub_006B76D0 (811 bytes)
extern "C" void ext_0049AA40();
extern "C" void ext_006A5C68();
extern "C" void ext_006A5E4E();
extern "C" void ext_006A5E72();
extern "C" void ext_006A6004();
extern "C" void ext_006A60E8();
extern "C" void ext_006A67CC();
extern "C" void ext_006A7D30();
extern "C" void ext_006A7D50();
extern "C" void ext_006AD0C0();
extern "C" void ext_006AD1C0();
extern "C" void ext_006B3240();
extern "C" void ext_006B4440();
extern "C" void ext_006B7460();
extern "C" void ext_008B7CB9();
extern "C" int mem_00925658;
extern "C" int mem_00925694;
extern "C" int mem_009242FC;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;
extern "C" int mem_00B5D25C;
extern "C" int mem_0092566C;
extern "C" int mem_00925688;
extern "C" int mem_00924244;
extern "C" int mem_00925560;
extern "C" int mem_00B5D258;
extern "C" int mem_00B5D254;

extern "C" __declspec(naked) void __fastcall fn_006B76D0(void* self) {
    __asm {
        push    -0x1
        push    offset ext_008B7CB9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x44
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x54]
        push    0x1
        call    ext_006AD0C0
        mov     eax, dword ptr [esi + 0x6c]
        mov     eax, dword ptr [eax + 0x20]
        xor     ebp, ebp
        push    eax
        mov     dword ptr [esp + 0x18], ebp
        call    dword ptr [mem_00925658]
        push    eax
        call    ext_006A6004
        mov     ebx, dword ptr [mem_00925694]
        push    ebp
        mov     edi, eax
        mov     eax, dword ptr [esi + 0x6c]
        mov     ecx, dword ptr [eax + 0x20]
        push    ebp
        push    0x31
        push    ecx
        call    ebx
        push    eax
        call    ext_006A5C68
        mov     edx, dword ptr [edi]
        push    eax
        mov     eax, dword ptr [edx + 0x30]
        mov     ecx, edi
        call    eax
        push    ebp
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esi + 0x6c]
        mov     ecx, dword ptr [eax + 0x20]
        push    ebp
        push    0x18b
        push    ecx
        call    ebx
        test    eax, eax
        _emit   0x0f
        _emit   0x8e
        _emit   0x7e
        _emit   0x00
        _emit   0x00
        _emit   0x00
    L_006B7752:
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_009242FC]
        mov     ecx, dword ptr [esi + 0x6c]
        lea     edx, [esp + 0x10]
        push    edx
        push    ebp
        mov     dword ptr [esp + 0x64], 0x0
        call    ext_006A60E8
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_0092431C]
        push    eax
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_00924300]
        mov     ecx, dword ptr [edi + 0x8]
        push    eax
        push    ecx
        call    dword ptr [mem_00924080]
        mov     eax, dword ptr [esp + 0x1c]
        cmp     dword ptr [esp + 0x14], eax
        jg      L_006B77A5
        mov     dword ptr [esp + 0x14], eax
    L_006B77A5:
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x5c], 0xffffffff
        call    dword ptr [mem_009242F4]
        mov     eax, dword ptr [esi + 0x6c]
        mov     edx, dword ptr [eax + 0x20]
        push    0x0
        push    0x0
        push    0x18b
        push    edx
        add     ebp, 0x1
        call    ebx
        cmp     ebp, eax
        jl      L_006B7752
    L_006B77D0:
        mov     eax, dword ptr [mem_00B5D25C]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [edi]
        mov     edx, dword ptr [edx + 0x30]
        lea     ebp, [ecx + eax + 0x4]
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        mov     ecx, edi
        call    edx
        mov     ecx, dword ptr [esi + 0x20]
        lea     eax, [esp + 0x24]
        push    eax
        push    ecx
        call    dword ptr [mem_0092566C]
        mov     eax, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x3c], eax
        sub     eax, dword ptr [mem_00B5D25C]
        mov     dword ptr [esp + 0x34], edx
        push    0x1
        lea     edx, [esp + 0x38]
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [esi + 0x20]
        push    edx
        push    eax
        mov     dword ptr [esp + 0x4c], ecx
        call    dword ptr [mem_00925688]
        mov     ecx, dword ptr [esi + 0x54]
        call    ext_006B4440
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x8]
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, eax
        call    edx
        mov     ecx, eax
        call    dword ptr [mem_00924300]
        mov     ecx, dword ptr [esi + 0x6c]
        push    eax
        mov     eax, dword ptr [ecx + 0x20]
        push    0x0
        push    0x1a2
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0x6c]
        mov     edx, dword ptr [ecx + 0x20]
        push    0x0
        push    eax
        push    0x186
        push    edx
        call    ebx
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_009242F4]
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    ext_006A67CC
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x30]
        lea     ecx, [eax - 0x2]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        sub     ecx, eax
        lea     eax, [ecx + 0x3]
        cmp     eax, ebp
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x10], eax
        jg      L_006B78B3
        mov     dword ptr [esp + 0x10], ebp
    L_006B78B3:
        mov     eax, 0x14
        cmp     dword ptr [esp + 0x10], eax
        jge     L_006B78C2
        mov     dword ptr [esp + 0x10], eax
    L_006B78C2:
        mov     eax, dword ptr [esi + 0x6c]
        mov     edx, dword ptr [eax + 0x20]
        push    0x0
        push    0x0
        push    0x1a1
        push    edx
        call    ebx
        cmp     dword ptr [esi + 0x64], -0x1
        mov     ebx, eax
        je      L_006B78F2
        mov     ecx, dword ptr [esi + 0x54]
        mov     edi, dword ptr [esi + 0x64]
        call    ext_006B4440
        mov     ecx, eax
        call    ext_0049AA40
        cmp     edi, eax
        jbe     L_006B7903
    L_006B78F2:
        mov     ecx, dword ptr [esi + 0x54]
        call    ext_006B4440
        mov     ecx, eax
        call    ext_0049AA40
        mov     edi, eax
    L_006B7903:
        imul    edi, ebx
        lea     eax, [esp + 0x44]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        add     edi, 0x2
        call    ext_006B3240
        mov     edx, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x58]
        lea     eax, [edi + edx]
        add     esp, 0x8
        cmp     eax, ecx
        jle     L_006B795B
        mov     ebp, dword ptr [esp + 0x28]
        mov     eax, ebp
        sub     eax, dword ptr [esp + 0x48]
        mov     edx, ecx
        sub     edx, dword ptr [esp + 0x30]
        cmp     edx, eax
        jl      L_006B7946
        sub     ecx, dword ptr [esp + 0x14]
        mov     edi, ecx
        jmp     L_006B795B
    L_006B7946:
        cmp     edi, eax
        jle     L_006B7955
        cdq
        idiv    ebx
        mov     edi, eax
        imul    edi, ebx
        add     edi, 0x2
    L_006B7955:
        sub     ebp, edi
        mov     dword ptr [esp + 0x14], ebp
    L_006B795B:
        mov     eax, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esp + 0x10]
        lea     ecx, [ebx + eax]
        mov     eax, dword ptr [esp + 0x4c]
        cmp     ecx, eax
        jle     L_006B7974
        sub     eax, ebx
        mov     dword ptr [esp + 0x18], eax
    L_006B7974:
        mov     ecx, dword ptr [esi + 0x54]
        call    ext_006AD1C0
        mov     ecx, eax
        call    ext_006A7D30
        mov     edx, dword ptr [esi + 0x6c]
        mov     dword ptr [edx + 0x54], eax
        mov     ecx, dword ptr [esi + 0x54]
        call    ext_006AD1C0
        mov     ecx, eax
        call    ext_006A7D50
        mov     ecx, dword ptr [esi + 0x6c]
        mov     edx, dword ptr [esp + 0x14]
        push    0x14
        push    edi
        push    ebx
        mov     dword ptr [ecx + 0x58], eax
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esi + 0x6c]
        push    edx
        push    eax
        push    0x0
        call    ext_006A5E4E
        mov     ecx, dword ptr [esi + 0x6c]
        push    0x5
        call    ext_006A5E72
        mov     ecx, esi
        call    ext_006A60D0
        call    dword ptr [mem_00924244]
        push    eax
        push    0x0
        push    offset ext_006B7460
        push    0x7
        call    dword ptr [mem_00925560]
        mov     ecx, dword ptr [esp + 0x54]
        pop     edi
        mov     dword ptr [mem_00B5D258], esi
        pop     esi
        pop     ebp
        mov     dword ptr [mem_00B5D254], eax
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x50
        ret
    }
}

// [0x006B7A00] sub_006B7A00 (33 bytes)
extern "C" void ext_006B76D0();
extern "C" void ext_006A5EA8();
extern "C" __declspec(naked) void __fastcall fn_006B7A00(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 0Dh
        push esi
        mov esi, ecx
        je L_006B7A11
        cmp eax, 9
        jne L_006B7A16
    L_006B7A11:
        call ext_006B76D0
    L_006B7A16:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        ret 0Ch
    }
}

// [0x006B7AC0] sub_006B7AC0 (176 bytes)
extern "C" void ext_006B6CF0();
extern "C" int mem_0092566C;
extern "C" int mem_00B5D25C;
extern "C" int mem_00925628;
extern "C" int mem_009256CC;
extern "C" int mem_00925650;
extern "C" __declspec(naked) void __fastcall fn_006B7AC0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [esp + 0x14]
        push eax
        push ecx
        call dword ptr [mem_0092566C]
        mov eax, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x8], eax
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0xc], eax
        sub eax, dword ptr [mem_00B5D25C]
        cmp byte ptr [esi + 0x60], 0
        mov dword ptr [esp + 0x4], edx
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x4], eax
        je L_006B7B1E
        mov edx, dword ptr [esp + 0x30]
        mov eax, dword ptr [esp + 0x2c]
        push edx
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        call dword ptr [mem_00925628]
        test eax, eax
        je L_006B7B62
    L_006B7B1E:
        mov eax, dword ptr [esi + 0x6c]
        mov edx, dword ptr [eax + 0x20]
        push edx
        call dword ptr [mem_009256CC]
        test eax, eax
        mov ecx, esi
        je L_006B7B5D
        push 1
        call ext_006B6CF0
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, eax
        call ext_006A60D0
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        add esp, 0x20
        ret 0x0c
    L_006B7B5D:
        call ext_006B76D0
    L_006B7B62:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        add esp, 0x20
        ret 0x0c
    }
}

// [0x006B8CE0] sub_006B8CE0 (1635 bytes)
extern "C" void ext_00672D10();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5E4E();
extern "C" void ext_006A5E72();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A6004();
extern "C" void ext_006B87B0();
extern "C" void ext_006B9640();
extern "C" int mem_0092561C;
extern "C" int mem_009242FC;
extern "C" int mem_00925694;
extern "C" int mem_009244EC;
extern "C" int mem_00924CEC;
extern "C" int mem_00924494;
extern "C" int mem_009242F4;
extern "C" int mem_00924B78;
extern "C" int mem_00924FD0;
extern "C" int mem_00924CE4;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_009242F0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;
extern "C" int mem_00925658;
extern "C" int mem_00924080;
extern "C" int mem_00925614;
extern "C" int mem_00925690;
extern "C" int mem_009256B8;
extern "C" int mem_00924CF0;

extern "C" __declspec(naked) void __fastcall fn_006B8CE0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b7ed2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x110
        push esi
        mov esi, ecx
        lea eax, [esi + 0x5c]
        test eax, eax
        mov dword ptr [esp + 0x38], eax
        je L8D0C
        mov eax, dword ptr [eax + 0x20]
L8D0C:
        push eax
        call dword ptr [mem_0092561C]
        test eax, eax
        je L932B
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x4]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x120], 0x0
        call ext_006A5F4A
        mov eax, dword ptr [esi + 0x20]
        lea ecx, [esp + 0x3c]
        push ecx
        lea edx, [esp + 0x30]
        push edx
        push 0xb0
        push eax
        call dword ptr [mem_00925694]
        mov ecx, dword ptr [esp + 0x3c]
        mov eax, dword ptr [esp + 0x2c]
        cmp ecx, eax
        jge L8D6B
        mov dword ptr [esp + 0x3c], eax
        mov eax, ecx
        mov dword ptr [esp + 0x2c], eax
L8D6B:
        push ebx
        push ebp
        push edi
        push eax
        lea ecx, [esp + 0x44]
        push ecx
        lea ecx, [esp + 0x18]
        call dword ptr [mem_009244EC]
        mov ecx, eax
        mov byte ptr [esp + 0x128], 0x1
        call dword ptr [mem_00924CEC]
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924494]
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x128], 0x3
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [esp + 0x38]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924B78]
        mov ebx, dword ptr [mem_00924FD0]
        lea ecx, [esi + 0xbc]
        push ecx
        lea edi, [esi + 0xd8]
        lea edx, [esp + 0x54]
        push edi
        push edx
        mov byte ptr [esp + 0x134], 0x4
        call ebx
        add esp, 0xc
        mov eax, dword ptr [esp + 0x54]
        mov ebp, 0x10
        cmp dword ptr [esp + 0x68], ebp
        mov byte ptr [esp + 0x128], 0x5
        jae L8E00
        lea eax, [esp + 0x54]
L8E00:
        push eax
        lea eax, [esp + 0x44]
        push eax
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924CE4]
        mov ecx, eax
        mov byte ptr [esp + 0x128], 0x6
        call dword ptr [mem_00924CEC]
        mov ecx, eax
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x70]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x128], 0x8
        call dword ptr [mem_009242F4]
        cmp dword ptr [edi + 0x18], ebp
        jb L8E4F
        mov eax, dword ptr [edi + 0x4]
        jmp L8E52
L8E4F:
        lea eax, [edi + 0x4]
L8E52:
        push eax
        lea ecx, [esp + 0x50]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924CE4]
        mov ecx, eax
        mov byte ptr [esp + 0x128], 0x9
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x94]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x128], 0xb
        call dword ptr [mem_009242F4]
        cmp dword ptr [esp + 0x68], ebp
        mov eax, dword ptr [esp + 0x54]
        jae L8EA0
        lea eax, [esp + 0x54]
L8EA0:
        push eax
        lea edx, [esp + 0x40]
        push edx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924CE4]
        mov ecx, eax
        mov byte ptr [esp + 0x128], 0xc
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0xb0]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x3c]
        mov byte ptr [esp + 0x128], 0xe
        call dword ptr [mem_009242F4]
        cmp byte ptr [esp + 0x130], 0x0
        jne L8F06
        mov eax, dword ptr [esp + 0xc0]
        cmp eax, dword ptr [esp + 0xa4]
        jbe L8F06
        mov ecx, esi
        call ext_006B87B0
        jmp L92BC
L8F06:
        lea ecx, [esp + 0x90]
        push ecx
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x10c]
        push eax
        call ebx
        add esp, 0xc
        cmp dword ptr [eax + 0x18], ebp
        mov byte ptr [esp + 0x128], 0xf
        jb L8F32
        mov eax, dword ptr [eax + 0x4]
        jmp L8F35
L8F32:
        add eax, 0x4
L8F35:
        push eax
        lea ecx, [esp + 0x38]
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0x104]
        mov byte ptr [esp + 0x128], 0x11
        call dword ptr [mem_00924FF4]
        cmp dword ptr [edi + 0x18], ebp
        jb L8F5F
        mov edi, dword ptr [edi + 0x4]
        jmp L8F62
L8F5F:
        add edi, 0x4
L8F62:
        push edi
        lea ecx, [esp + 0x40]
        push ecx
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924CEC]
        mov ecx, eax
        call dword ptr [mem_00924CE4]
        mov ecx, eax
        mov byte ptr [esp + 0x128], 0x12
        call dword ptr [mem_00924CEC]
        mov ecx, eax
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0xec]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x3c]
        mov byte ptr [esp + 0x128], 0x14
        call dword ptr [mem_009242F4]
        xor ebp, ebp
        cmp byte ptr [esp + 0x130], 0x0
        jne L8FD3
        cmp dword ptr [esp + 0x80], ebp
        jne L8FD3
        mov ecx, esi
        call ext_006B87B0
        jmp L929D
L8FD3:
        mov dword ptr [esp + 0x28], ebp
        mov dword ptr [esp + 0x2c], ebp
        mov dword ptr [esp + 0x30], ebp
        mov edx, dword ptr [esp + 0x38]
        push edx
        lea eax, [esp + 0x20]
        mov bl, 0x15
        push eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x130], bl
        call dword ptr [mem_009244EC]
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov byte ptr [esp + 0x128], 0x16
        add edi, 0x13c
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x28]
        push ecx
        lea edx, [esp + 0x74]
        push edx
        mov ecx, esi
        call eax
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x128], bl
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x28]
        cmp ecx, ebp
        mov ebp, dword ptr [mem_00925134]
        je L908F
        mov eax, dword ptr [esp + 0x2c]
        sub eax, ecx
        sar eax, 0x5
        cmp eax, 0x1
        jne L908F
        test eax, eax
        ja L905C
        call ebp
        mov ecx, dword ptr [esp + 0x28]
L905C:
        lea edx, [esp + 0xe8]
        push edx
        push ecx
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je L908F
        mov ecx, esi
        call ext_006B87B0
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x128], 0x14
        call ext_00672D10
        jmp L929D
L908F:
        mov eax, dword ptr [esi + 0x7c]
        push 0x0
        push 0x0
        push 0x184
        push eax
        call dword ptr [mem_00925694]
        mov edi, dword ptr [esp + 0x28]
        cmp edi, dword ptr [esp + 0x2c]
        jbe L90B0
        call ebp
        mov edi, edi
L90B0:
        mov ebx, dword ptr [esp + 0x2c]
        cmp dword ptr [esp + 0x28], ebx
        jbe L90BC
        call ebp
L90BC:
        cmp edi, ebx
        je L9111
        cmp edi, dword ptr [esp + 0x2c]
        jb L90C8
        call ebp
L90C8:
        cmp dword ptr [edi + 0x18], 0x10
        jb L90D3
        mov eax, dword ptr [edi + 0x4]
        jmp L90D6
L90D3:
        lea eax, [edi + 0x4]
L90D6:
        mov ecx, dword ptr [esi + 0x7c]
        push eax
        push -1
        push 0x181
        push ecx
        call dword ptr [mem_00925694]
        cmp edi, dword ptr [esp + 0x2c]
        mov ebx, eax
        jb L90F2
        call ebp
L90F2:
        cmp dword ptr [edi + 0x1c], 0x0
        jne L9104
        mov ecx, dword ptr [esp + 0x44]
        push 0x1
        push ebx
        call ext_006B9640
L9104:
        cmp edi, dword ptr [esp + 0x2c]
        jb L910C
        call ebp
L910C:
        add edi, 0x20
        jmp L90B0
L9111:
        mov edx, dword ptr [esi + 0x7c]
        xor ebp, ebp
        push ebp
        push ebp
        push 0x18b
        push edx
        call dword ptr [mem_00925694]
        mov ebx, eax
        cmp ebx, ebp
        jle L9253
        xor edi, edi
        test ebx, ebx
        jle L9153
L9134:
        mov eax, dword ptr [esi + 0x7c]
        push 0x0
        push ebp
        push 0x18a
        push eax
        call dword ptr [mem_00925694]
        cmp eax, edi
        jle L914C
        mov edi, eax
L914C:
        add ebp, 0x1
        cmp ebp, ebx
        jl L9134
L9153:
        mov ecx, dword ptr [esi + 0x20]
        push ecx
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        lea edx, [esp + 0x88]
        push edx
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [edi + 0x3]
        push ecx
        push 0x92f1b4
        push edx
        call dword ptr [mem_00924080]
        lea eax, [esp + 0x1c]
        push eax
        call dword ptr [mem_00925614]
        mov eax, dword ptr [esi + 0x20]
        mov ecx, dword ptr [esp + 0x8c]
        add dword ptr [esp + 0x20], ecx
        lea edx, [esp + 0xc8]
        push edx
        push eax
        call dword ptr [mem_00925690]
        mov ebp, dword ptr [esi + 0xb0]
        mov ecx, dword ptr [esp + 0xc8]
        imul ebp, edi
        mov edx, dword ptr [esp + 0xcc]
        add dword ptr [esp + 0x1c], ecx
        add dword ptr [esp + 0x20], edx
        add ebp, 0x3
        cmp ebx, 0x19
        jl L91D2
        mov ebx, 0x19
L91D2:
        mov edi, dword ptr [esi + 0xb4]
        add edi, 0x4
        imul edi, ebx
        push 0x0
        lea eax, [esp + 0xdc]
        push eax
        push 0x0
        push 0x30
        add edi, 0x3
        call dword ptr [mem_009256B8]
        mov eax, dword ptr [esp + 0xe0]
        mov ecx, dword ptr [esp + 0x1c]
        sub eax, ecx
        cmp ebp, eax
        jl L9208
        mov ebp, eax
L9208:
        mov edx, dword ptr [esp + 0xe4]
        mov eax, dword ptr [esp + 0x20]
        sub edx, eax
        cmp edi, edx
        jl L921B
        mov edi, edx
L921B:
        push 0x10
        push edi
        mov edi, dword ptr [esp + 0x4c]
        push ebp
        push eax
        push ecx
        mov ecx, dword ptr [mem_00924CF0]
        push ecx
        mov ecx, edi
        call ext_006A5E4E
        push 0x8
        mov ecx, edi
        call ext_006A5E72
        mov edx, dword ptr [esi + 0x7c]
        push 0x0
        push 0x0
        push 0x186
        push edx
        call dword ptr [mem_00925694]
        xor ebp, ebp
        jmp L925D
L9253:
        mov ecx, dword ptr [esp + 0x44]
        push ebp
        call ext_006A5E72
L925D:
        mov esi, dword ptr [esp + 0x28]
        cmp esi, ebp
        mov byte ptr [esp + 0x128], 0x14
        je L9291
        mov edi, dword ptr [esp + 0x2c]
        cmp esi, edi
        je L9288
L9275:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x20
        cmp esi, edi
        jne L9275
        mov esi, dword ptr [esp + 0x28]
L9288:
        push esi
        call ext_006A5C5C
        add esp, 0x4
L9291:
        mov dword ptr [esp + 0x28], ebp
        mov dword ptr [esp + 0x2c], ebp
        mov dword ptr [esp + 0x30], ebp
L929D:
        lea ecx, [esp + 0xe8]
        mov byte ptr [esp + 0x128], 0x11
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x34]
        call dword ptr [mem_009242F4]
L92BC:
        lea ecx, [esp + 0xac]
        mov byte ptr [esp + 0x128], 0xb
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x90]
        mov byte ptr [esp + 0x128], 0x8
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x6c]
        mov byte ptr [esp + 0x128], 0x5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x128], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x18]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        pop edi
        pop ebp
        pop ebx
L932B:
        mov ecx, dword ptr [esp + 0x114]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x11c
        ret 0x4
    }
}

// [0x006B9580] sub_006B9580 (35 bytes)
extern "C" void ext_006B8CE0();
extern "C" int mem_00925660;

extern "C" void __fastcall fn_006B9580(char* self, int edx_unused, unsigned int timerId) {
    if (timerId == 1) {
        typedef int (__stdcall *KillTimerFn)(void*, unsigned int);
        (*(KillTimerFn*)&mem_00925660)(*(void**)(self + 0x20), 1);
        typedef void (__thiscall *FnCE0)(void*, int);
        ((FnCE0)&ext_006B8CE0)(self, 0);
    }
}

// [0x006B94E0] sub_006B94E0 (150 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006B87F0();
extern "C" void ext_006B8B70();
extern "C" void ext_006B8CE0();
extern "C" int mem_00925128;
extern "C" int mem_00924EC4;

extern "C" __declspec(naked) void __fastcall fn_006B94E0(void* self) {
    __asm {
        push ecx
        push ebx
        mov bl, byte ptr [esp + 0xc]
        push esi
        push 1
        mov esi, ecx
        push 0
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esi + 0xbc]
        mov byte ptr [esp + 0x1c], bl
        call dword ptr [mem_00925128]
        mov ecx, dword ptr [mem_00924EC4]
        cmp eax, dword ptr [ecx]
        setne al
        test al, al
        mov byte ptr [esp + 0xb], al
        je loc_006B952A
        lea ecx, [esi + 0x5c]
        call ext_006B8B70
        test al, al
        je loc_006B952A
        push 0
        mov ecx, esi
        call ext_006B87F0
    loc_006B952A:
        push 1
        push 0
        lea edx, [esp + 0x18]
        push edx
        lea ecx, [esi + 0xf4]
        mov byte ptr [esp + 0x1c], bl
        call dword ptr [mem_00925128]
        mov ecx, dword ptr [mem_00924EC4]
        cmp eax, dword ptr [ecx]
        jne loc_006B9554
        mov ecx, esi
        call ext_006A5EA8
    loc_006B9554:
        cmp byte ptr [esp + 0xb], 0
        jne loc_006B9567
        lea ecx, [esi + 0x5c]
        call ext_006B8B70
        test al, al
        je loc_006B9570
    loc_006B9567:
        push 0
        mov ecx, esi
        call ext_006B8CE0
    loc_006B9570:
        pop esi
        pop ebx
        pop ecx
        ret 0xc
    }
}

extern "C" void ext_006B9910();
extern "C" void ext_006B9F40();

// [0x006B9DC0] sub_006B9DC0 (31 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006B9DC0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006B9910
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_006B9F40
        mov eax, esi
        pop esi
        ret 8
    }
}

// [0x006B9E30] sub_006B9E30 (48 bytes)
extern "C" void ext_006B9910();
extern "C" void ext_006B9920();
extern "C" void ext_006B9B40();
extern "C" __declspec(naked) void* __fastcall fn_006B9E30(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006B9910
        mov eax, dword ptr [esp + 0x8]
        test eax, eax
        jne label_ne
        mov ecx, esi
        call ext_006B9920
        mov eax, esi
        pop esi
        ret 8
label_ne:
        push eax
        mov eax, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_006B9B40
        mov eax, esi
        pop esi
        ret 8
    }
}

// [0x006B9E60] sub_006B9E60 (63 bytes)
extern "C" void ext_006B9940();
extern "C" void ext_006E7460();
extern "C" void ext_006B99C0();

extern "C" __declspec(naked) void* __fastcall fn_006B9E60(void* self, int edx_unused, void* other) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov ecx, edi
        call ext_006B9940
        test al, al
        je short label_false
        mov ecx, edi
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_006B99C0
        push eax
        mov ecx, esi
        call ext_006B9B40
        mov eax, esi
        pop edi
        pop esi
        ret 0x4
    label_false:
        mov ecx, esi
        call ext_006B9920
        mov eax, esi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x006BA1C0] sub_006BA1C0 (63 bytes)
extern "C" void ext_006B9920();
extern "C" void ext_006B9940();
extern "C" void ext_006B99C0();
extern "C" void ext_006B9C10();
extern "C" void ext_006E7460();
extern "C" __declspec(naked) void* __fastcall fn_006BA1C0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov ecx, edi
        call ext_006B9940
        test al, al
        jne L_nonnull
        mov ecx, esi
        call ext_006B9920
        mov eax, esi
        pop edi
        pop esi
        ret 0x4
    L_nonnull:
        mov ecx, edi
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_006B99C0
        push eax
        mov ecx, esi
        call ext_006B9C10
        mov eax, esi
        pop edi
        pop esi
        ret 0x4
    }
}
