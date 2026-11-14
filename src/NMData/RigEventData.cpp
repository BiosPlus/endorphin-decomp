// Decompiled translation unit: src/NMData/RigEventData.cpp
#include <vector>
#include <string>

// [0x004D4730] NMData::RigEventData::vfunc_1_off_184 (104 bytes)
extern "C" void ext_004D40E0();
extern "C" int mem_00A34650;
extern "C" int mem_00924FC8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) bool __fastcall fn_004D4730(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        lea eax, [esp + 0x4]
        push eax
        add ecx, 0xfffffe7c
        call ext_004D40E0
        mov ecx, dword ptr [mem_00A34650]
        push ecx
        push eax
        mov dword ptr [esp + 0x30], 0x0
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        lea ecx, [esp + 0x4]
        mov bl, al
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        mov al, bl
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x004D3D50] NMData::RigEventData::vfunc_0_off_154 (121 bytes)
extern "C" void ext_00494000();
extern "C" void ext_004940E0();

extern "C" __declspec(naked) void __fastcall fn_004D3D50(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        sub esp, 0xc
        push esi
        push 0x0
        push 0x0
        push 0x40
        lea ecx, [esp + 0x10]
        call ext_00494000
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x14]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        push 0x1
        push 0x1000
        mov ecx, esi
        mov dword ptr [esi + 0x8], eax
        call ext_004940E0
        push 0x1
        push 0x2000
        mov ecx, esi
        call ext_004940E0
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x4], 0x2
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [eax + 0x8], ecx
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [edx], 0x6
        mov dword ptr [eax], 0x6
        pop esi
        add esp, 0xc
        ret 0x10
    }
}

// [0x004D3C60] NMData::RigEventData::vfunc_13 (80 bytes)
// Stack args: p1 (returned in eax), name (const std::string&).
// Compares name against a literal via imported operator==(string, const char*)
// (cdecl, add esp,8). On match: p1->ext_00661650(this+0x398) (ecx = p1).
// Otherwise: ext_0046F7D0(p1) (cdecl, add esp,4). Both return p1 with ret 8.
extern "C" void ext_0046F7D0();
extern "C" void ext_00661650();
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void* __fastcall fn_004D3C60(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        push 0x948360
        push eax
        mov esi, ecx
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je second
        add esi, 0x398
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    second:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004DCD80] NMData::RigEventData::vfunc_83 (33 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_004DCC80();

extern "C" __declspec(naked) void __fastcall fn_004DCD80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0xae6004
        lea ecx, [esi + 0x16c]
        call ext_0040ECB0
        push 0xae6004
        mov ecx, esi
        call ext_004DCC80
        pop esi
        ret
    }
}

// [0x004D3D00] NMData::RigEventData::vfunc_59 (34 bytes)
extern "C" void ext_006404E0();
extern "C" int mem_00A9F218;

extern "C" __declspec(naked) void __fastcall fn_004D3D00(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F218]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0Ch]
        mov edi, dword ptr [esi]
        push eax
        call ext_006404E0
        mov edx, dword ptr [edi + 58h]
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x004DAF20] NMData::RigEventData::vfunc_87 (243 bytes)
extern "C" void ext_004DA090();
extern "C" void ext_004DA2B0();
extern "C" void ext_00528B60();
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004DAF20(void* self) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x18c]
        xor ebx, ebx
        cmp ecx, ebx
        je L_epilog
        push ebp
        push edi
        call ext_004DA090
        mov edi, dword ptr [esi + 0x18c]
        cmp edi, ebx
        je L_skip_del
        mov ecx, edi
        call ext_004DA2B0
        push edi
        call ext_006A5C5C
        add esp, 4
    L_skip_del:
        mov dword ptr [esi + 0x18c], ebx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebp, eax
        mov ecx, ebp
        mov dword ptr [esp + 0x10], ebp
        call ext_0065C640
        mov edi, dword ptr [esi + 0x334]
        add esi, 0x330
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x1c], ebx
        jbe L_chk1
        call dword ptr [mem_00925134]
        mov edi, edi
    L_chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        cmp esi, esi
        je L_loop
        call dword ptr [mem_00925134]
    L_loop:
        cmp edi, ebx
        je L_done
        cmp edi, dword ptr [esi + 0x8]
        jb L_elem
        call dword ptr [mem_00925134]
    L_elem:
        mov ecx, dword ptr [edi]
        add ecx, 0xc
        call ext_00528B60
        cmp edi, dword ptr [esi + 0x8]
        jb L_next
        call dword ptr [mem_00925134]
    L_next:
        add edi, 4
        jmp L_chk1
    L_done:
        mov ecx, ebp
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_0065C650
        pop edi
        pop ebp
    L_epilog:
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004D3C20] NMData::RigEventData::vfunc_14 (54 bytes)
extern "C" void ext_004C2070();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void* __fastcall fn_004D3C20(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x14b
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je special
        push eax
        push esi
        call ext_004C2070
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    special:
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004DB020] NMData::RigEventData::vfunc_84 (74 bytes)
extern "C" void ext_004DA060();
extern "C" void ext_004DA740();

extern "C" __declspec(naked) void __fastcall fn_004DB020(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x18c]
        test ecx, ecx
        je done
        cmp byte ptr [eax + 0x17c], 0x0
        je done
        mov edx, dword ptr [esp + 0x4]
        cmp edx, dword ptr [eax + 0x15c]
        jl fallback
        cmp edx, dword ptr [eax + 0x160]
        jge fallback
        push edx
        movzx edx, byte ptr [eax + 0x193]
        movzx eax, byte ptr [eax + 0x192]
        push edx
        push eax
        call ext_004DA740
        ret 0x4
    fallback:
        call ext_004DA060
    done:
        ret 0x4
    }
}

// [0x004DC600] NMData::RigEventData::vfunc_0_off_180 (89 bytes)
extern "C" void ext_004D3E40();
extern "C" void ext_004DB070();
extern "C" void ext_00594000();
extern "C" void ext_00594620();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004DC600(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi - 0x180]
        mov ecx, edi
        call ext_004D3E40
        mov eax, dword ptr [esi - 0x10]
        test eax, eax
        je L_invalid
        mov ecx, dword ptr [esi - 0xc]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_ok
    L_invalid:
        call dword ptr [mem_00925134]
    L_ok:
        mov esi, dword ptr [esi - 0x10]
        push esi
        call ext_00594000
        mov ecx, eax
        call ext_00594620
        test eax, eax
        je L_done
        push eax
        mov ecx, edi
        call ext_004DB070
    L_done:
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x004DCB20] NMData::RigEventData::vfunc_17_off_C (99 bytes)
extern "C" void ext_004DC710();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_004DCB20(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 464h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_004DCB20_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_004DC710
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_004DCB20_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x004D4310] NMData::RigEventData::vfunc_22 (567 bytes)
extern "C" void ext_00427550();
extern "C" void ext_004C1DE0();
extern "C" void ext_004D3A10();
extern "C" void ext_004D3E40();
extern "C" void ext_004D4060();
extern "C" void ext_004D40E0();
extern "C" void ext_00640110();
extern "C" void ext_00640A50();
extern "C" void ext_00640A80();
extern "C" void ext_00640BC0();
extern "C" int mem_00A9FA74;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F720;
extern "C" int mem_00A9F71C;
extern "C" int mem_00A9F734;
extern "C" int mem_00A9F924;
extern "C" int mem_00A9F6DC;
extern "C" int mem_00A9F89C;
extern "C" int mem_00A9F6A0;
extern "C" int mem_00A9F690;
extern "C" int mem_00A9F914;

extern "C" __declspec(naked) void* __fastcall fn_004D4310(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push	0x8b2d0b
        mov	eax, dword ptr fs:[0x0]
        push	eax
        mov	dword ptr fs:[0x0], esp
        sub	esp, 0x38
        push	ebx
        push	esi
        push	edi
        mov	esi, ecx
        call ext_004D3E40
        lea	eax, [esp + 0xc]
        push	eax
        mov	ecx, esi
        call ext_004D4060
        mov	ebx, eax
        mov	ecx, dword ptr [mem_00A9FA74]
        mov	edi, dword ptr [esp + 0x54]
        push	ecx
        mov	ecx, edi
        mov	dword ptr [esp + 0x50], 0x0
        call ext_00640110
        mov	ecx, ebx
        mov	dword ptr [esp + 0x54], eax
        call	dword ptr [mem_00924FF0]
        push	eax
        lea	ecx, [esp + 0x58]
        call ext_00427550
        lea	ecx, [esp + 0xc]
        mov	dword ptr [esp + 0x4c], 0xffffffff
        call	dword ptr [mem_00924FF4]
        lea	edx, [esp + 0xc]
        push	edx
        mov	ecx, esi
        call ext_004D40E0
        mov	ebx, eax
        push	0x948520
        mov	ecx, edi
        mov	dword ptr [esp + 0x50], 0x1
        call ext_00640110
        mov	ecx, ebx
        mov	dword ptr [esp + 0x54], eax
        call	dword ptr [mem_00924FF0]
        push	eax
        lea	ecx, [esp + 0x58]
        call ext_00427550
        lea	ecx, [esp + 0xc]
        mov	dword ptr [esp + 0x4c], 0xffffffff
        call	dword ptr [mem_00924FF4]
        mov	eax, dword ptr [mem_00A9F720]
        push	eax
        mov	ecx, edi
        call ext_00640110
        movzx	ecx, byte ptr [esi + 0x190]
        push	ecx
        push	eax
        call ext_00640A80
        add	esp, 0x8
        push	0x948514
        mov	ecx, edi
        call ext_00640110
        movzx	edx, byte ptr [esi + 0x191]
        push	edx
        push	eax
        call ext_00640A80
        mov	eax, dword ptr [mem_00A9F71C]
        add	esp, 0x8
        push	eax
        mov	ecx, edi
        call ext_00640110
        movzx	ecx, byte ptr [esi + 0x192]
        push	ecx
        push	eax
        call ext_00640A80
        mov	edx, dword ptr [mem_00A9F734]
        add	esp, 0x8
        push	edx
        mov	ecx, edi
        call ext_00640110
        movzx	ecx, byte ptr [esi + 0x193]
        push	ecx
        push	eax
        call ext_00640A80
        mov	edx, dword ptr [mem_00A9F924]
        add	esp, 0x8
        push	edx
        mov	ecx, edi
        call ext_00640110
        fld	dword ptr [esi + 0x198]
        push	ecx
        fstp	dword ptr [esp]
        push	eax
        call ext_00640BC0
        mov	eax, dword ptr [mem_00A9F6DC]
        add	esp, 0x8
        push	eax
        mov	ecx, edi
        call ext_00640110
        mov	ecx, dword ptr [esi + 0x344]
        push	ecx
        push	eax
        call ext_00640A50
        mov	edx, dword ptr [mem_00A9F89C]
        add	esp, 0x8
        push	edx
        mov	ecx, edi
        call ext_00640110
        mov	ecx, dword ptr [esi + 0x340]
        push	ecx
        push	eax
        call ext_00640A50
        mov	edx, dword ptr [mem_00A9F6A0]
        add	esp, 0x8
        push	edx
        mov	ecx, edi
        call ext_00640110
        movzx	ecx, byte ptr [esi + 0x194]
        push	ecx
        push	eax
        call ext_00640A80
        mov	edx, dword ptr [mem_00A9F690]
        add	esp, 0x8
        push	edx
        mov	ecx, edi
        call ext_00640110
        movzx	ecx, byte ptr [esi + 0x195]
        push	ecx
        push	eax
        call ext_00640A80
        add	esp, 0x8
        lea	edx, [esp + 0x28]
        push	edx
        mov	ecx, esi
        call ext_004D3A10
        mov	ebx, eax
        mov	eax, dword ptr [mem_00A9F914]
        push	eax
        mov	ecx, edi
        mov	dword ptr [esp + 0x50], 0x2
        call ext_00640110
        mov	ecx, ebx
        mov	dword ptr [esp + 0x54], eax
        call	dword ptr [mem_00924FF0]
        push	eax
        lea	ecx, [esp + 0x58]
        call ext_00427550
        lea	ecx, [esp + 0x28]
        mov	dword ptr [esp + 0x4c], 0xffffffff
        call	dword ptr [mem_00924FF4]
        push	edi
        mov	ecx, esi
        call ext_004C1DE0
        mov	ecx, dword ptr [esp + 0x44]
        mov	eax, edi
        pop	edi
        pop	esi
        pop	ebx
        mov	dword ptr fs:[0x0], ecx
        add	esp, 0x44
        ret	0x4
    }
}

extern "C" void ext_004DC370();
extern "C" void ext_00493E40();
extern "C" void ext_00528B90();
extern "C" int mem_00B40640;

// [0x004DC450] NMData::RigEventData::vfunc_34 (151 bytes)
extern "C" __declspec(naked) void __fastcall fn_004DC450(void* self, int edx_unused, void* a1) {
    __asm {
        push    -1
        push    0x88d648
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_004DC370
        mov     dword ptr [esp + 0x8], 0
        test    esi, esi
        mov     dword ptr [esp + 0x14], 0
        je      L_null
        lea     eax, [esi + 0xc]
        jmp     L_cont
    L_null:
        xor     eax, eax
    L_cont:
        mov     edx, dword ptr [mem_00B40640]
        push    0
        push    eax
        mov     eax, dword ptr [esi + 4]
        mov     eax, dword ptr [eax + 0xc]
        lea     ecx, [esi + 4]
        push    edx
        call    eax
        mov     edx, dword ptr [esi]
        push    eax
        mov     eax, dword ptr [edx + 0xd8]
        mov     ecx, esi
        call    eax
        mov     ecx, dword ptr [esp + 0x28]
        push    eax
        call    ext_00493E40
        mov     edi, eax
        test    edi, edi
        mov     dword ptr [esp + 8], edi
        je      L_done
        push    edi
        lea     ecx, [esi + 0xc]
        call    ext_00528B90
        add     esi, 0x348
        mov     dword ptr [edi + 0x20], esi
    L_done:
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, edi
        pop     edi
        pop     esi
        mov     fs:[0], ecx
        add     esp, 0x10
        ret     4
    }
}

// [0x004DDD30] NMData::RigEventData::vfunc_88 (194 bytes)
extern "C" void ext_004DA820();
extern "C" void ext_004DDA90();
extern "C" void ext_00660A50();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_004DDD30(void* self) {
    __asm {
        push    -1
        push    0x87ba98
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x10
        push    ebx
        xor     ebx, ebx
        push    edi
        mov     edi, ecx
        lea     eax, [edi + 0x16c]
        mov     dword ptr [esp + 0xc], ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        push    ebx
        lea     ecx, [esp + 0xc]
        push    ecx
        push    eax
        mov     dword ptr [esp + 0x2c], ebx
        call    ext_00660A50
        mov     ecx, eax
        call    ext_004DA820
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      short L_4ddde1
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, ecx
        sub     edx, eax
        sar     edx, 2
        je      short L_4dddd8
        cmp     edx, ebx
        push    ebp
        mov     ebp, dword ptr [mem_00925134]
        push    esi
        ja      short L_4ddda2
        call    ebp
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
    L_4ddda2:
        mov     esi, dword ptr [eax]
        sub     ecx, eax
        sar     ecx, 2
        xor     edx, edx
        cmp     ecx, 2
        jne     short L_4dddbe
        cmp     ecx, 1
        ja      short L_4dddbb
        call    ebp
        mov     eax, dword ptr [esp + 0x14]
    L_4dddbb:
        mov     edx, dword ptr [eax + 4]
    L_4dddbe:
        mov     eax, dword ptr [mem_00B40640]
        push    eax
        push    eax
        push    edx
        push    esi
        mov     ecx, edi
        call    ext_004DDA90
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        pop     esi
        pop     ebp
        je      short L_4ddde1
    L_4dddd8:
        push    eax
        call    ext_006A5C5C
        add     esp, 4
    L_4ddde1:
        mov     ecx, dword ptr [esp + 0x18]
        pop     edi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x1c
        ret
    }
}

// [0x004DCA50] NMData::RigEventData::vfunc_82 (197 bytes)
extern "C" void ext_004D9480();
extern "C" void ext_004DBBE0();
extern "C" void ext_004EE590();
extern "C" int mem_00A3464C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00A34650;

extern "C" __declspec(naked) void __fastcall fn_004DCA50(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x877622
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        test eax, eax
        push esi
        mov esi, ecx
        mov dword ptr [esi + 0x168], eax
        je L_nullarg
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        call edx
        push eax
        lea ecx, [esi + 0x3e8]
        call ext_004EE590
L_nullarg:
        mov eax, dword ptr [mem_00A3464C]
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x48], 0x0
        call ext_004DBBE0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x44], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [mem_00A34650]
        push edx
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi + 0x168]
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x4c], 0x1
        call ext_004D9480
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x44], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x3c]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 0x4
    }
}

extern "C" void ext_004026E0();
extern "C" void ext_004C28C0();
extern "C" void ext_004DA180();
extern "C" void ext_004DB070();
extern "C" int mem_00924FE4;
extern "C" int mem_00925134;

// [0x004DC4F0] NMData::RigEventData::vfunc_1_off_154 (261 bytes)
extern "C" __declspec(naked) void __fastcall fn_004DC4F0(void* self) {
    __asm {
        push -0x1
        mov eax, dword ptr fs:[0x0]
        push 0x8a1908
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x2c]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c]
        push edi
        mov edi, ecx
        mov ecx, esi
        call edx
        mov edx, dword ptr [eax + 0x4]
        xor ecx, ecx
        cmp edx, ecx
        je L_end
        mov eax, dword ptr [eax + 0x8]
        sub eax, edx
        sar eax, 0x2
        je L_end
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x1c], ecx
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x3c]
        lea eax, [esp + 0x10]
        mov dword ptr [esp + 0x28], ecx
        push eax
        mov ecx, esi
        call edx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x4c], esp
        push 0x928b5d
        call dword ptr [mem_00924FE4]
        push 0x2
        lea ecx, [esp + 0x30]
        call ext_004DA180
        lea eax, [esp + 0x10]
        lea ebx, [edi - 0x154]
        push eax
        mov ecx, ebx
        call ext_004C28C0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x4c], esp
        push 0x928b5d
        call dword ptr [mem_00924FE4]
        push 0x2
        lea ecx, [edi + 0x18]
        call ext_004DA180
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x1c]
        mov ecx, esi
        call eax
        mov ebp, dword ptr [mem_00925134]
        mov esi, eax
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_skip1
        call ebp
        cmp edi, dword ptr [esi + 0x8]
    L_skip1:
        jb L_skip2
        call ebp
    L_skip2:
        mov ecx, dword ptr [edi]
        push ecx
        mov ecx, ebx
        call ext_004DB070
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x28], 0xffffffff
        call ext_004026E0
    L_end:
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0x1c
        ret 0x4
    }
}

// [0x004DA5D0] NMData::RigEventData::vfunc_58 (360 bytes)
extern "C" void ext_00406510();
extern "C" void ext_0040ECB0();
extern "C" void ext_004D3E40();
extern "C" void ext_00594000();
extern "C" void ext_00594640();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FEC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004DA5D0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_004D3E40
        mov ebp, dword ptr [esp + 0x44]
        mov edi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], edi
        jbe L_a1
        call dword ptr [mem_00925134]
L_a1:
        mov ebx, dword ptr [ebp + 0x4]
        cmp ebx, dword ptr [ebp + 0x8]
        jbe L_a2
        call dword ptr [mem_00925134]
L_a2:
        push edi
        push ebp
        push ebx
        push ebp
        lea eax, [esp + 0x20]
        push eax
        mov ecx, ebp
        call ext_00406510
        mov eax, dword ptr [esi + 0x170]
        test eax, eax
        je L_exit
        mov ecx, dword ptr [esi + 0x174]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        je L_exit
        mov edi, dword ptr [esi + 0x170]
        cmp edi, dword ptr [esi + 0x174]
        jbe L_b1
        call dword ptr [mem_00925134]
        cmp edi, dword ptr [esi + 0x174]
L_b1:
        jb L_b2
        call dword ptr [mem_00925134]
L_b2:
        push edi
        call ext_00594000
        mov ecx, eax
        call ext_00594640
        lea edi, [eax + 0x598]
        mov eax, dword ptr [edi + 0x4]
        mov eax, dword ptr [eax]
        mov esi, edi
        mov ebx, eax
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], ebx
L_loop:
        test esi, esi
        mov ebp, dword ptr [edi + 0x4]
        je L_c1
        cmp esi, edi
        je L_c2
L_c1:
        call dword ptr [mem_00925134]
L_c2:
        cmp ebx, ebp
        je L_exit
        test esi, esi
        jne L_c3
        call dword ptr [mem_00925134]
L_c3:
        cmp ebx, dword ptr [esi + 0x4]
        jne L_c4
        call dword ptr [mem_00925134]
L_c4:
        mov ecx, dword ptr [ebx + 0x28]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x3c], 0x0
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_skip
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x48]
        call ext_0040ECB0
L_skip:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x3c], 0xffffffff
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp L_loop
L_exit:
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 0x4
    }
}

extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_0046C0A0();
extern "C" void ext_0047A4A0();
extern "C" void ext_004C24C0();
extern "C" void ext_004D3940();
extern "C" void ext_004D4060();
extern "C" void ext_004D4190();
extern "C" void ext_004D42A0();
extern "C" void ext_004D8C30();
extern "C" void ext_004D8D70();
extern "C" void ext_004DA180();
extern "C" void ext_004DA510();
extern "C" void ext_004DB940();
extern "C" void ext_004EE590();
extern "C" void ext_0053F5F0();
extern "C" void ext_00586300();
extern "C" void ext_00587920();
extern "C" void ext_0063EFE0();
extern "C" int mem_00924FE4;
extern "C" int mem_00925134;
extern "C" int mem_00A3464C;
extern "C" int mem_00A34650;
extern "C" int mem_00AE29D0;
extern "C" int mem_009849B4;
extern "C" int mem_00924FD4;
extern "C" int mem_00A34648;
extern "C" int mem_00924FCC;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9FA74;
extern "C" int mem_00A9F720;
extern "C" int mem_00A9F71C;
extern "C" int mem_00A9F734;
extern "C" int mem_00A9F924;
extern "C" int mem_00A9F6DC;
extern "C" int mem_00A9F89C;
extern "C" int mem_00A9F6A0;
extern "C" int mem_00A9F690;
extern "C" int mem_00A9F914;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FE0;
extern "C" int mem_00B40640;

// [0x004DBE80] NMData::RigEventData::vfunc_21 (1260 bytes)
extern "C" __declspec(naked) void __fastcall fn_004DBE80(void* self, int /*edx*/, void* arg0) {
    __asm {
        push -0x1
        push 0x88d62d
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x54
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x6c]
        push esi
        push edi
        push ebp
        mov esi, ecx
        call ext_004C24C0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x90], esp
        push 0x928b5d
        call dword ptr [mem_00924FE4]
        lea edi, [esi + 0x16c]
        push 0x2
        mov ecx, edi
        call ext_004DA180
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je L_004dbeef
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_004dbef5
    L_004dbeef:
        call dword ptr [mem_00925134]
    L_004dbef5:
        mov ecx, dword ptr [edi + 0x4]
        push ecx
        lea ecx, [esi + 0x3e8]
        call ext_004EE590
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        mov ebx, 0x1
        je L_004dbf2c
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, ebx
        ja L_004dbf32
    L_004dbf2c:
        call dword ptr [mem_00925134]
    L_004dbf32:
        mov edx, dword ptr [edi + 0x4]
        add edx, 0x1c
        push edx
        lea ecx, [esi + 0x398]
        call ext_004EE590
        mov eax, dword ptr [mem_00A3464C]
        push eax
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [mem_00A34650]
        push ecx
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x70], 0x0
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [mem_00AE29D0]
        mov eax, dword ptr [edx + 0x538]
        cmp eax, dword ptr [mem_009849B4]
        mov byte ptr [esp + 0x6c], bl
        jge L_004dbfce
        mov eax, dword ptr [mem_00A3464C]
        push eax
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FD4]
        mov edx, dword ptr [mem_00A34648]
        lea ecx, [esi + 0x14]
        push ecx
        push edx
        lea eax, [esp + 0x50]
        push eax
        call dword ptr [mem_00924FCC]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x70], 0x2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x6c], bl
        call dword ptr [mem_00924FF4]
        jmp L_004dc04a
    L_004dbfce:
        mov ecx, dword ptr [mem_00A9FA74]
        push ecx
        mov ecx, ebp
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_004dc00d
        cmp eax, 0xb53b30
        je L_004dc00d
        cmp eax, 0xb53ab0
        je L_004dc00d
        cmp eax, 0xb53a70
        je L_004dc00d
        cmp eax, 0xb53af0
        je L_004dc00d
        push eax
        lea edx, [esp + 0x30]
        push edx
        call ext_004275E0
        add esp, 0x8
    L_004dc00d:
        push 0x948520
        mov ecx, ebp
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_004dc04a
        cmp eax, 0xb53b30
        je L_004dc04a
        cmp eax, 0xb53ab0
        je L_004dc04a
        cmp eax, 0xb53a70
        je L_004dc04a
        cmp eax, 0xb53af0
        je L_004dc04a
        push eax
        lea eax, [esp + 0x14]
        push eax
        call ext_004275E0
        add esp, 0x8
    L_004dc04a:
        mov ecx, esi
        call ext_004DA510
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, esi
        call ext_004D8C30
        mov edx, dword ptr [esi + 0x400]
        lea ecx, [esi + 0x400]
        mov dword ptr [esi + 0x43c], eax
        mov eax, dword ptr [edx + 0x8]
        call eax
        mov edi, eax
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je L_004dc097
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_004dc09d
    L_004dc097:
        call dword ptr [mem_00925134]
    L_004dc09d:
        mov edi, dword ptr [edi + 0x4]
        mov ecx, dword ptr [mem_00AE29D0]
        push edi
        call ext_0047A4A0
        push eax
        mov ecx, esi
        call ext_004D42A0
        lea edx, [esp + 0x10]
        push edx
        mov ecx, esi
        call ext_004D8D70
        mov edi, eax
        mov ecx, esi
        mov dword ptr [esi + 0x440], edi
        call ext_004D4190
        cmp edi, eax
        jne L_004dc0dd
        mov dword ptr [esi + 0x440], 0x0
    L_004dc0dd:
        lea eax, [esp + 0x48]
        push eax
        mov ecx, esi
        call ext_004D4060
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x70], 0x3
        call ext_004DB940
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x6c], bl
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [mem_00A9F720]
        push ecx
        mov ecx, ebp
        call ext_0063EFE0
        lea edx, [esp + 0x74]
        mov dword ptr [esp + 0x74], eax
        push edx
        lea eax, [esi + 0x190]
        push eax
        call ext_00427640
        add esp, 0x8
        push 0x948514
        mov ecx, ebp
        call ext_0063EFE0
        lea ecx, [esp + 0x74]
        push ecx
        lea edx, [esi + 0x191]
        push edx
        mov dword ptr [esp + 0x7c], eax
        call ext_00427640
        mov eax, dword ptr [mem_00A9F71C]
        add esp, 0x8
        push eax
        mov ecx, ebp
        call ext_0063EFE0
        lea ecx, [esp + 0x74]
        push ecx
        lea edx, [esi + 0x192]
        push edx
        mov dword ptr [esp + 0x7c], eax
        call ext_00427640
        mov eax, dword ptr [mem_00A9F734]
        add esp, 0x8
        push eax
        mov ecx, ebp
        call ext_0063EFE0
        lea ecx, [esp + 0x74]
        push ecx
        lea edx, [esi + 0x193]
        push edx
        mov dword ptr [esp + 0x7c], eax
        call ext_00427640
        mov eax, dword ptr [mem_00A9F924]
        add esp, 0x8
        push eax
        mov ecx, ebp
        call ext_0063EFE0
        lea ecx, [esp + 0x74]
        push ecx
        lea edx, [esi + 0x198]
        push edx
        mov dword ptr [esp + 0x7c], eax
        call ext_0046C0A0
        mov eax, dword ptr [mem_00A9F6DC]
        add esp, 0x8
        push eax
        mov ecx, ebp
        call ext_0063EFE0
        lea ecx, [esp + 0x74]
        push ecx
        lea edx, [esi + 0x344]
        push edx
        mov dword ptr [esp + 0x7c], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9F89C]
        add esp, 0x8
        push eax
        mov ecx, ebp
        call ext_0063EFE0
        lea ecx, [esp + 0x74]
        push ecx
        lea edx, [esi + 0x340]
        push edx
        mov dword ptr [esp + 0x7c], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9F6A0]
        add esp, 0x8
        push eax
        mov ecx, ebp
        call ext_0063EFE0
        lea ecx, [esp + 0x74]
        push ecx
        lea edx, [esi + 0x194]
        push edx
        mov dword ptr [esp + 0x7c], eax
        call ext_00427640
        mov eax, dword ptr [mem_00A9F690]
        add esp, 0x8
        push eax
        mov ecx, ebp
        call ext_0063EFE0
        lea ecx, [esp + 0x74]
        push ecx
        lea edx, [esi + 0x195]
        push edx
        mov dword ptr [esp + 0x7c], eax
        call ext_00427640
        mov dword ptr [esi + 0x394], ebx
        mov eax, dword ptr [mem_00A9F914]
        add esp, 0x8
        push eax
        mov ecx, ebp
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_004dc2db
        cmp eax, 0xb53b30
        je L_004dc2db
        cmp eax, 0xb53ab0
        je L_004dc2db
        cmp eax, 0xb53a70
        je L_004dc2db
        cmp eax, 0xb53af0
        je L_004dc2db
        lea ecx, [esp + 0x48]
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [mem_00A9F914]
        push ecx
        mov ecx, ebp
        mov byte ptr [esp + 0x70], 0x4
        call ext_0063EFE0
        push eax
        lea edx, [esp + 0x4c]
        push edx
        call ext_004275E0
        sub esp, 0x14
        lea eax, [esp + 0x64]
        mov ecx, esp
        mov dword ptr [esp + 0x90], esp
        push eax
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_004D3940
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x6c], bl
        call dword ptr [mem_00924FF4]
    L_004dc2db:
        push 0x0
        lea ebp, [esi + 0x19c]
        push ebp
        mov ecx, esi
        call ext_00587920
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [mem_00B40640]
        mov edx, dword ptr [edx + 0xc]
        lea edi, [esi + 0x4]
        push eax
        mov ecx, edi
        call edx
        mov ecx, dword ptr [mem_00B40640]
        push eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, edi
        call edx
        push eax
        push 0x2
        mov ecx, ebp
        call ext_00586300
        mov eax, dword ptr [esi + 0x180]
        mov edx, dword ptr [eax]
        lea ecx, [esi + 0x180]
        call edx
        lea ecx, [esp + 0x10]
        mov byte ptr [esi + 0x438], 0x0
        mov byte ptr [esi + 0x188], bl
        mov byte ptr [esp + 0x6c], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x6c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x64]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0x60
        ret 0x4
    }
}
