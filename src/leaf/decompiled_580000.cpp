// Decompiled translation unit: src/leaf/decompiled_580000.cpp

// [0x0058CFB0] sub_0058CFB0 (8 bytes)
extern "C" void ext_0058B230();

extern "C" __declspec(naked) void __cdecl fn_0058CFB0() {
    __asm {
        call ext_0058B230
        fld dword ptr [eax]
        ret
    }
}

// [0x0058CFC0] sub_0058CFC0 (9 bytes)
extern "C" __declspec(naked) void __cdecl fn_0058CFC0() {
    __asm {
        call ext_0058B230
        fld dword ptr [eax + 4]
        ret
    }
}

// [0x0058CFD0] sub_0058CFD0 (9 bytes)
extern "C" __declspec(naked) void __cdecl fn_0058CFD0() {
    __asm {
        call ext_0058B230
        fld dword ptr [eax + 8]
        ret
    }
}

// [0x0058F570] sub_0058F570 (16 bytes)
extern "C" void ext_0058B4E0();

extern "C" __declspec(naked) void __fastcall fn_0058F570(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        fstp dword ptr [esp]
        call ext_0058B4E0
        ret 4
    }
}

// [0x0058F580] sub_0058F580 (16 bytes)
extern "C" void __fastcall ext_0058B540(void* self, int edx_unused, float a1);

extern "C" void __fastcall fn_0058F580(void* self, int edx_unused, float a1) {
    ext_0058B540(self, edx_unused, a1);
}

// [0x0058F590] sub_0058F590 (16 bytes)
extern "C" void ext_0058B5A0();

extern "C" __declspec(naked) void __fastcall fn_0058F590(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        fstp dword ptr [esp]
        call ext_0058B5A0
        ret 4
    }
}

// [0x0058F600] sub_0058F600 (16 bytes)
extern "C" void ext_0058ABC0();

extern "C" __declspec(naked) void __fastcall fn_0058F600(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        fstp dword ptr [esp]
        call ext_0058ABC0
        ret 4
    }
}

// [0x0058F610] sub_0058F610 (16 bytes)
extern "C" void ext_0058ACA0();
extern "C" void __fastcall fn_0058F610(void* self, int edx_unused, float a1) {
    ((void (__stdcall*)(float))ext_0058ACA0)(a1);
}

// [0x0058F620] sub_0058F620 (16 bytes)
extern "C" void ext_0058AD80();

extern "C" __declspec(naked) void __fastcall fn_0058F620(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        fstp dword ptr [esp]
        call ext_0058AD80
        ret 4
    }
}

// [0x00587450] sub_00587450 (18 bytes)
extern "C" void ext_00586D00();

extern "C" void __fastcall fn_00587450(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x94) = a1;
    ext_00586D00();
}

// [0x0058F550] sub_0058F550 (27 bytes)
extern "C" void ext_0058F4C0();

extern "C" __declspec(naked) void __fastcall fn_0058F550(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_0058F4C0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00584A10] sub_00584A10 (34 bytes)
extern "C" int mem_00924FC8;
extern "C" __declspec(naked) void* __fastcall fn_00584A10(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi + 0x30]
        push 0x928b5d
        push edi
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        mov eax, edi
        jne done
        lea eax, [esi + 0x14]
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x00584BD0] sub_00584BD0 (34 bytes)
extern "C" int mem_00924FC8;
extern "C" __declspec(naked) void* __fastcall fn_00584BD0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi + 0x4c]
        push 0x928b5d
        push edi
        call dword ptr [mem_00924FC8]
        add esp, 8
        test al, al
        mov eax, edi
        jne short done_00584BD0
        lea eax, [esi + 0x14]
    done_00584BD0:
        pop edi
        pop esi
        ret
    }
}

// [0x0058A170] sub_0058A170 (35 bytes)
extern "C" int mem_00A9F3AC;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_0058A170(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F3AC]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

extern "C" int mem_00B40644;

// [0x0058AB30] sub_0058AB30 (44 bytes)
extern "C" __declspec(naked) float __fastcall fn_0058AB30(void* self) {
    __asm {
        sub esp, 0x40
        push esi
        mov esi, dword ptr [mem_00B40644]
        mov eax, ecx
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0x10]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [eax + 0xf0]
        push esi
        push eax
        lea eax, [esp + 0xc]
        push eax
        call edx
        fld dword ptr [eax + 0x30]
        pop esi
        add esp, 0x40
        ret
    }
}

// [0x0058AB60] sub_0058AB60 (44 bytes)
extern "C" int mem_00B40644;
extern "C" __declspec(naked) float __fastcall fn_0058AB60(void* self) {
    __asm {
        sub esp, 0x40
        push esi
        mov esi, dword ptr [mem_00B40644]
        mov eax, ecx
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0x10]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [eax + 0xf0]
        push esi
        push eax
        lea eax, [esp + 0xc]
        push eax
        call edx
        fld dword ptr [eax + 0x34]
        pop esi
        add esp, 0x40
        ret
    }
}

// [0x0058AB90] sub_0058AB90 (44 bytes)
extern "C" __declspec(naked) float __fastcall fn_0058AB90(void* self) {
    __asm {
        sub esp, 0x40
        push esi
        mov esi, dword ptr [mem_00B40644]
        mov eax, ecx
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0x10]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [eax + 0xf0]
        push esi
        push eax
        lea eax, [esp + 0xc]
        push eax
        call edx
        fld dword ptr [eax + 0x38]
        pop esi
        add esp, 0x40
        ret
    }
}

// [0x0058A920] sub_0058A920 (49 bytes)
extern "C" void ext_00552130();
extern "C" int mem_00A85D54;
extern "C" __declspec(naked) void __fastcall fn_0058A920(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 4]
        add ecx, 4
        sub esp, 0x10
        cmp byte ptr [mem_00A85D54], 0
        je L1
        mov edx, dword ptr [eax + 0x30]
        jmp L2
    L1:
        mov edx, dword ptr [eax + 0x28]
    L2:
        call edx
        push 3
        lea ecx, [esp + 4]
        push ecx
        mov ecx, eax
        call ext_00552130
        fld dword ptr [eax + 4]
        add esp, 0x10
        ret
    }
}

// [0x0058A960] sub_0058A960 (49 bytes)
extern "C" void ext_00552130();
extern "C" int mem_00A85D54;
extern "C" __declspec(naked) void __fastcall fn_0058A960(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 4]
        add ecx, 4
        sub esp, 0x10
        cmp byte ptr [mem_00A85D54], 0
        je L1
        mov edx, dword ptr [eax + 0x30]
        jmp L2
    L1:
        mov edx, dword ptr [eax + 0x28]
    L2:
        call edx
        push 3
        lea ecx, [esp + 4]
        push ecx
        mov ecx, eax
        call ext_00552130
        fld dword ptr [eax + 8]
        add esp, 0x10
        ret
    }
}

// [0x0058A9A0] sub_0058A9A0 (62 bytes)
extern "C" int mem_00A85D54;
extern "C" int mem_00B40640;

typedef void* (__thiscall *VCall0)(void* self);
typedef void* (__thiscall *VCall1)(void* self, int a1);

extern "C" __declspec(naked) void __fastcall fn_0058A9A0(void* self, int edx_unused, float v) {
    __asm {
        cmp byte ptr [mem_00A85D54], 0
        mov eax, dword ptr [ecx + 0x4]
        push esi
        lea esi, [ecx + 0x4]
        mov ecx, esi
        je L_24
        mov edx, dword ptr [eax + 0x2c]
        jmp L_call
    L_24:
        mov edx, dword ptr [eax + 0x24]
    L_call:
        call edx
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x30]
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        call edx
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x30]
        pop esi
        ret 0x4
    }
}

// [0x0058A9E0] sub_0058A9E0 (62 bytes)
extern "C" int mem_00A85D54;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_0058A9E0(void* self, int edx_unused, float v) {
    __asm {
        cmp byte ptr [mem_00A85D54], 0
        mov eax, dword ptr [ecx + 0x4]
        push esi
        lea esi, [ecx + 0x4]
        mov ecx, esi
        je L_24
        mov edx, dword ptr [eax + 0x2c]
        jmp L_call
    L_24:
        mov edx, dword ptr [eax + 0x24]
    L_call:
        call edx
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x34]
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        call edx
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x34]
        pop esi
        ret 0x4
    }
}

// [0x0058AA20] sub_0058AA20 (62 bytes)
extern "C" int mem_00A85D54;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_0058AA20(void* self, int edx_unused, float v) {
    __asm {
        cmp byte ptr [mem_00A85D54], 0
        mov eax, dword ptr [ecx + 0x4]
        push esi
        lea esi, [ecx + 0x4]
        mov ecx, esi
        je L_24
        mov edx, dword ptr [eax + 0x2c]
        jmp L_call
    L_24:
        mov edx, dword ptr [eax + 0x24]
    L_call:
        call edx
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x38]
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        call edx
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x38]
        pop esi
        ret 0x4
    }
}

// [0x00584B10] sub_00584B10 (66 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00584B10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x70]
        push edi
        xor edi, edi
        call edx
        test al, al
        je L_first_fail_00584B10
        pop edi
        mov eax, esi
        pop esi
        ret
    L_first_fail_00584B10:
        mov esi, dword ptr [esi + 0x94]
        test esi, esi
        je L_done_00584B10
    L_loop_00584B10:
        test edi, edi
        jne L_done_00584B10
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x70]
        mov ecx, esi
        call edx
        test al, al
        je L_skip_00584B10
        mov edi, esi
    L_skip_00584B10:
        mov esi, dword ptr [esi + 0x94]
        test esi, esi
        jne L_loop_00584B10
    L_done_00584B10:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x00582A20] sub_00582A20 (73 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_00582A20(void* self) {
    __asm {
        fld1
        push esi
        fldz
        push edi
        xor edi, edi
        xor esi, esi
    L_outer:
        xor edx, edx
    L_inner:
        cmp edi, edx
        lea eax, [esi + edx]
        jne L_off
        fld st(1)
        fcomp dword ptr [ecx + 4*eax]
        jmp L_cmp
    L_off:
        fcom dword ptr [ecx + 4*eax]
    L_cmp:
        fnstsw ax
        test ah, 0x44
        jp L_fail
        add edx, 1
        cmp edx, 3
        jl L_inner
        add esi, 3
        add edi, 1
        cmp esi, 9
        jl L_outer
        fstp st(1)
        pop edi
        fstp st(0)
        mov al, 1
        pop esi
        ret
    L_fail:
        fstp st(1)
        pop edi
        fstp st(0)
        xor al, al
        pop esi
        ret
    }
}

// [0x00585120] sub_00585120 (78 bytes)
extern "C" void __fastcall ext_00554510(void* self);
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_00585120(void* self, int edx_unused, int a1, float a2) {
    __asm {
        sub esp, 0x50
        push esi
        lea eax, [esp + 0x4]
        push eax
        mov eax, dword ptr [mem_00B40640]
        mov esi, ecx
        mov edx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edx + 0x10]
        push eax
        lea ecx, [esi + 0x4]
        push 0x0
        lea eax, [esp + 0x20]
        push eax
        call edx
        mov ecx, eax
        call ext_00554510
        fld dword ptr [esp + 0x5c]
        mov eax, dword ptr [esi + 0xc]
        mov eax, dword ptr [eax + 0xc]
        lea ecx, [esi + 0xc]
        push ecx
        fstp dword ptr [esp]
        lea edx, [esp + 0x8]
        push edx
        mov edx, dword ptr [esp + 0x60]
        push edx
        call eax
        pop esi
        add esp, 0x50
        ret 0x8
    }
}

// [0x0058D560] sub_0058D560 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F938;
extern "C" int mem_00B3F934;

extern "C" __declspec(naked) void* __fastcall fn_0058D560(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89fb2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B3F938], al
        jne L_done
        or dword ptr [mem_00B3F938], eax
        mov ecx, offset mem_00B3F934
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B3F934], 0x95b344
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3F934
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0058D850] sub_0058D850 (30 bytes)
extern "C" void ext_0058D560();

extern "C" __declspec(naked) void __fastcall fn_0058D850(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0058D560
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0058D5C0] sub_0058D5C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F940;
extern "C" int mem_00B3F93C;

extern "C" __declspec(naked) void* __fastcall fn_0058D5C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89fb4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B3F940], al
        jne L_done
        or dword ptr [mem_00B3F940], eax
        mov ecx, offset mem_00B3F93C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B3F93C], 0x95b4f4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3F93C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0058D870] sub_0058D870 (30 bytes)
extern "C" void ext_0058D5C0();

extern "C" __declspec(naked) void __fastcall fn_0058D870(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0058D5C0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0058D620] sub_0058D620 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F948;
extern "C" int mem_00B3F944;

extern "C" __declspec(naked) void* __fastcall fn_0058D620(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89fb6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B3F948], al
        jne L_done
        or dword ptr [mem_00B3F948], eax
        mov ecx, offset mem_00B3F944
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B3F944], 0x95b6a4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3F944
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0058D890] sub_0058D890 (30 bytes)
extern "C" void ext_0058D620();

extern "C" __declspec(naked) void __fastcall fn_0058D890(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0058D620
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0058D680] sub_0058D680 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F950;
extern "C" int mem_00B3F94C;

extern "C" __declspec(naked) void* __fastcall fn_0058D680(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89fb8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B3F950], al
        jne L_done
        or dword ptr [mem_00B3F950], eax
        mov ecx, offset mem_00B3F94C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B3F94C], 0x95b854
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3F94C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0058D8B0] sub_0058D8B0 (30 bytes)
extern "C" void ext_0058D680();

extern "C" __declspec(naked) void __fastcall fn_0058D8B0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0058D680
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0058D6E0] sub_0058D6E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F958;
extern "C" int mem_00B3F954;

extern "C" __declspec(naked) void* __fastcall fn_0058D6E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89fbae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B3F958], al
        jne L_done
        or dword ptr [mem_00B3F958], eax
        mov ecx, offset mem_00B3F954
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B3F954], 0x95ba04
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3F954
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0058D8D0] sub_0058D8D0 (30 bytes)
extern "C" void ext_0058D6E0();

extern "C" __declspec(naked) void __fastcall fn_0058D8D0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0058D6E0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0058D740] sub_0058D740 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F960;
extern "C" int mem_00B3F95C;

extern "C" __declspec(naked) void* __fastcall fn_0058D740(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89fbce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B3F960], al
        jne L_done
        or dword ptr [mem_00B3F960], eax
        mov ecx, offset mem_00B3F95C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B3F95C], 0x95bbb4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3F95C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0058D7A0] sub_0058D7A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F968;
extern "C" int mem_00B3F964;

extern "C" __declspec(naked) void* __fastcall fn_0058D7A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89fbee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B3F968], al
        jne L_done
        or dword ptr [mem_00B3F968], eax
        mov ecx, offset mem_00B3F964
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B3F964], 0x95bd64
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3F964
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0058D8F0] sub_0058D8F0 (30 bytes)
extern "C" void ext_0058D740();

extern "C" __declspec(naked) void __fastcall fn_0058D8F0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0058D740
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0058D910] sub_0058D910 (30 bytes)
extern "C" void ext_0058D7A0();

extern "C" __declspec(naked) void __fastcall fn_0058D910(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0058D7A0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x00586660] sub_00586660 (94 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00586660(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x8c]
        push edi
        call edx
        mov edi, dword ptr [esi + 0x80]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x7c
        cmp edi, dword ptr [esi + 0x8]
        jbe L_chk1
        call ebp
L_chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2
        call ebp
L_chk2:
        cmp esi, esi
        je L_chk3
        call ebp
L_chk3:
        cmp edi, ebx
        je L_done
        cmp edi, dword ptr [esi + 0x8]
        jb L_call
        call ebp
L_call:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8c]
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_inc
        call ebp
L_inc:
        add edi, 0x4
        jmp L_chk1
L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00582A70] sub_00582A70 (100 bytes)
extern "C" int __cdecl ext_005631C0(double, double);
extern "C" int __cdecl ext_0056B670(double, double, double);
extern "C" double mem_0095A0C0;

extern "C" __declspec(naked) bool __fastcall fn_00582A70(float* self, int edx_unused, int a1) {
    __asm {
        push esi
        xor esi, esi
    OUTER_TOP:
        xor edx, edx
    INNER_TOP:
        cmp esi, edx
        fld qword ptr [mem_0095A0C0]
        lea eax, [edx + 4*esi]
        jne ELSE_BR
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld1
        fstp qword ptr [esp + 0x8]
        fld dword ptr [ecx + 4*eax]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        jmp AFTER_CALL
    ELSE_BR:
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        fld dword ptr [ecx + 4*eax]
        fstp qword ptr [esp]
        call ext_005631C0
        add esp, 0x10
    AFTER_CALL:
        test al, al
        je RET_FALSE
        add edx, 0x1
        cmp edx, 0x4
        jl INNER_TOP
        add esi, 0x1
        cmp esi, 0x4
        jl OUTER_TOP
        mov al, 0x1
        pop esi
        ret 0x4
    RET_FALSE:
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x00584980] sub_00584980 (115 bytes)
extern "C" void __fastcall fn_00584980(float* self, int edx_unused, const float* a) {
    float s0 = a[0];
    self[0] *= s0;
    self[1] *= s0;
    self[2] *= s0;
    float s1 = a[1];
    self[3] *= s1;
    self[4] *= s1;
    self[5] *= s1;
    float s2 = a[2];
    self[6] *= s2;
    self[7] *= s2;
    self[8] *= s2;
}

// [0x005850C0] sub_005850C0 (89 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_00584980();
extern "C" void ext_0067DB10();
extern "C" __declspec(naked) void __fastcall fn_005850C0(void* self, int edx_unused, const float* scale) {
    __asm {
        sub esp, 24h
        fldz
        push esi
        fst dword ptr [esp + 0ch]
        lea eax, [esp + 4]
        fst dword ptr [esp + 8]
        push eax
        fst dword ptr [esp + 1ch]
        mov esi, ecx
        fst dword ptr [esp + 14h]
        fst dword ptr [esp + 24h]
        fstp dword ptr [esp + 20h]
        fld1
        fst dword ptr [esp + 8]
        fst dword ptr [esp + 18h]
        fstp dword ptr [esp + 28h]
        call ext_0067DAD0
        mov ecx, dword ptr [esp + 2ch]
        push ecx
        lea ecx, [esp + 8]
        call ext_00584980
        lea edx, [esp + 4]
        push edx
        mov ecx, esi
        call ext_0067DB10
        pop esi
        add esp, 24h
        ret 4
    }
}

// [0x00585010] sub_00585010 (126 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __cdecl fn_00585010() {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        cmp eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        je L_00585082
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_00585030:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esp + 0x28]
        cmp ecx, dword ptr [edx]
        je L_00585073
        test esi, esi
        mov ebx, edi
        jne L_00585048
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_00585048:
        cmp edi, dword ptr [esi + 0x8]
        jb L_00585055
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_00585055:
        add edi, 0x4
        test esi, esi
        jne L_00585064
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_00585064:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_0058506B
        call ebp
    L_0058506B:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebx], ecx
    L_00585073:
        add eax, 0x4
        cmp eax, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x18], eax
        jne L_00585030
        pop ebp
        pop ebx
    L_00585082:
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x4], edi
        pop edi
        mov dword ptr [eax], esi
        pop esi
        ret
    }
}

// [0x005860B0] sub_005860B0 (134 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void* __fastcall fn_005860B0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x80]
        cmp esi, dword ptr [ecx + 0x84]
        push edi
        lea edi, [ecx + 0x7c]
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        mov ebp, dword ptr [esp + 0x14]
        nop
L_head:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        cmp edi, edi
        je L_chk3
        call dword ptr [mem_00925134]
L_chk3:
        cmp esi, ebx
        je L_notfound
        cmp esi, dword ptr [edi + 0x8]
        mov ebx, dword ptr [mem_00925134]
        jb L_chk4
        call ebx
L_chk4:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push ebp
        call edx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        jne L_found
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk5
        call ebx
L_chk5:
        add esi, 0x4
        jmp L_head
L_found:
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk6
        call ebx
L_chk6:
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
L_notfound:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
    }
}

// [0x00586140] sub_00586140 (134 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void* __fastcall fn_00586140(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x80]
        cmp esi, dword ptr [ecx + 0x84]
        push edi
        lea edi, [ecx + 0x7c]
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        mov ebp, dword ptr [esp + 0x14]
        nop
L_head:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        cmp edi, edi
        je L_chk3
        call dword ptr [mem_00925134]
L_chk3:
        cmp esi, ebx
        je L_notfound
        cmp esi, dword ptr [edi + 0x8]
        mov ebx, dword ptr [mem_00925134]
        jb L_chk4
        call ebx
L_chk4:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        call edx
        push ebp
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        jne L_found
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk5
        call ebx
L_chk5:
        add esi, 0x4
        jmp L_head
L_found:
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk6
        call ebx
L_chk6:
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
L_notfound:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
    }
}

// [0x00586BE0] sub_00586BE0 (134 bytes)
extern "C" void ext_00585010();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __cdecl fn_00586BE0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        cmp esi, ebx
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x1c], esi
        je L_00586C0B
        mov eax, dword ptr [esp + 0x28]
        mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0xff
L_00586C00:
        cmp dword ptr [esi], eax
        je L_00586C0B
        add esi, 4
        cmp esi, ebx
        jne L_00586C00
L_00586C0B:
        test edi, edi
        mov ebp, dword ptr [mem_00925134]
        je L_00586C1B
        cmp edi, dword ptr [esp + 0x20]
        je L_00586C1D
L_00586C1B:
        call ebp
L_00586C1D:
        cmp esi, ebx
        jne L_00586C2F
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [eax], edi
        pop edi
        mov dword ptr [eax + 4], esi
        pop esi
        pop ebp
        pop ebx
        ret
L_00586C2F:
        test edi, edi
        jne L_00586C35
        call ebp
L_00586C35:
        cmp esi, dword ptr [edi + 8]
        jb L_00586C3C
        call ebp
L_00586C3C:
        mov edx, dword ptr [esp + 0x28]
        mov byte ptr [esp + 0x18], 0
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push edx
        push esi
        push edi
        lea eax, [esi + 4]
        mov esi, dword ptr [esp + 0x24]
        push ebx
        push eax
        push esi
        call ext_00585010
        add esp, 0x1c
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x005873E0] sub_005873E0 (104 bytes)
extern "C" void ext_00586BE0();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005873E0(void* self, int edx_unused, const int* value) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        jbe L_005873F7
        call dword ptr [mem_00925134]
L_005873F7:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        jbe L_00587405
        call dword ptr [mem_00925134]
L_00587405:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_00587413
        call dword ptr [mem_00925134]
L_00587413:
        mov eax, dword ptr [esp + 0x24]
        push eax
        push ebp
        push esi
        push edi
        lea ecx, [esp + 0x20]
        push esi
        push ecx
        call ext_00586BE0
        mov edx, dword ptr [eax + 0x4]
        mov eax, dword ptr [eax]
        add esp, 0x18
        push ebx
        push esi
        push edx
        push eax
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0058A0D0] sub_0058A0D0 (147 bytes)
struct Vec3_58A0D0 {
    float x, y, z;
    Vec3_58A0D0(const Vec3_58A0D0& v) : x(v.x), y(v.y), z(v.z) {}
};

extern "C" bool __fastcall ext_0056B690(void* self, Vec3_58A0D0 v, double eps);

extern "C" int __fastcall fn_0058A0D0(void* self, int edx_unused, const Vec3_58A0D0* other, double eps) {
    if (ext_0056B690(self, other[0], eps) &&
        ext_0056B690((char*)self + 12, other[1], eps) &&
        ext_0056B690((char*)self + 24, other[2], eps))
    {
        return 1;
    }
    return 0;
}

// [0x005863A0] sub_005863A0 (150 bytes)
extern "C" void ext_00584C10();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005863A0(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0x80]
        cmp esi, dword ptr [ecx + 0x84]
        push edi
        lea edi, [ecx + 0x7c]
        mov dword ptr [esp + 0x10], 0
        jbe L_5863C6
        call ebp
    L_5863C6:
        mov ebx, esi
    L_5863C8:
        mov esi, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], esi
        jbe L_5863D2
        call ebp
    L_5863D2:
        cmp edi, edi
        je L_5863D8
        call ebp
    L_5863D8:
        cmp ebx, esi
        je L_58642C
        cmp ebx, dword ptr [edi + 0x8]
        jb L_5863E3
        call ebp
    L_5863E3:
        mov esi, dword ptr [ebx]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc4]
        mov ecx, esi
        call edx
        test al, al
        je L_586420
        push 0
        push 0xa2fbbc
        push 0xa2e2bc
        push 0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_586420
        mov ecx, eax
        call ext_00584C10
        test al, al
        je L_586420
        add dword ptr [esp + 0x10], 1
    L_586420:
        cmp ebx, dword ptr [edi + 0x8]
        jb L_586427
        call ebp
    L_586427:
        add ebx, 4
        jmp L_5863C8
    L_58642C:
        mov eax, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x0058F450] sub_0058F450 (103 bytes)
extern "C" void ext_00593710();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0058F450(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x881709
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        sub esp, 0x1c
        lea eax, [esp + 0x34]
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        mov dword ptr [esp + 0x30], 0
        call dword ptr [mem_00924FE0]
        call ext_00593710
        add esp, 0x1c
        lea ecx, [esp + 0x18]
        mov dword ptr [esi + 0xf0], eax
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x10
        ret 0x1c
    }
}

// [0x0058F4F0] sub_0058F4F0 (96 bytes)
extern "C" void ext_0058F450();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

// s: by-value std::string (28 bytes on the stack, callee-cleaned via ret 0x1c); declared raw because naked functions cannot take unwinding types.
extern "C" __declspec(naked) void __fastcall fn_0058F4F0(void* self, int edx_unused, void* s) {
    __asm {
        push -1
        push 0x881709
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        sub esp, 0x1c
        lea eax, [esp + 0x34]
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        mov dword ptr [esp + 0x30], 0
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_0058F450
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x10
        ret 0x1c
    }
}

// [0x0058A200] sub_0058A200 (168 bytes)
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_0058A200(void* self, int edx_unused, void* sret, int idx) {
    __asm {
        push -1
        push 0x8a86bc
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 3Ch
        mov dword ptr [esp], 0
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0Ch]
        push esi
        lea edx, [esp + 24h]
        push edx
        call eax
        push 0x92ab70
        push eax
        lea ecx, [esp + 10h]
        push ecx
        mov dword ptr [esp + 54h], 1
        call dword ptr [mem_00924ECC]
        mov ecx, dword ptr [esp + 60h]
        mov esi, dword ptr [esp + 5Ch]
        lea edx, [ecx*8]
        sub edx, ecx
        lea ecx, [edx*4 + 0xb3f838]
        push ecx
        push eax
        push esi
        mov byte ptr [esp + 60h], 2
        call dword ptr [mem_00924FD0]
        add esp, 18h
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 48h], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 24h]
        mov byte ptr [esp + 48h], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 40h]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 48h
        ret 8
    }
}

// [0x0058A2B0] sub_0058A2B0 (184 bytes)
extern "C" void ext_00665010();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) int __fastcall fn_0058A2B0(void* self, int edx_unused, void* s) {
    __asm {
        push -1
        push 8b56f9h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 1ch
        mov eax, dword ptr [esp + 2ch]
        push ebx
        push esi
        push edi
        push eax
        lea ecx, [esp + 10h]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0ch]
        xor edi, edi
        push ecx
        mov dword ptr [esp + 34h], edi
        call ext_00665010
        mov ebx, dword ptr [mem_00924FC4]
        add esp, 4
        mov esi, 0b3f838h
    scan_top:
        lea edx, [esp + 0ch]
        push esi
        push edx
        call ebx
        add esp, 8
        test al, al
        jne found
        add esi, 1ch
        add edi, 1
        cmp esi, 0b3f8fch
        jl scan_top
        lea ecx, [esp + 0ch]
        mov dword ptr [esp + 30h], -1
        call dword ptr [mem_00924FF4]
        pop edi
        pop esi
        mov eax, 8
        pop ebx
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr fs:[0], ecx
        add esp, 28h
        ret 4
    found:
        lea ecx, [esp + 0ch]
        mov dword ptr [esp + 30h], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 28h]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 28h
        ret 4
    }
}

// [0x005877B0] sub_005877B0 (203 bytes)
extern "C" void ext_00528AE0();
extern "C" void ext_006246B0();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005877B0(void* self) {
    __asm {
        push -1
        push 089f593h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0ch]
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esi], 095aa8ch
        mov dword ptr [esi + 4], 095aa44h
        mov dword ptr [esi + 8], 095aa04h
        mov dword ptr [edi], 095a9b4h
        mov eax, dword ptr [esi + 80h]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 1ch], 4
        je short L_no_ptr
        push eax
        call ext_006A5C5C
        add esp, 4
    L_no_ptr:
        lea ecx, [esi + 6ch]
        mov dword ptr [esi + 80h], ebx
        mov dword ptr [esi + 84h], ebx
        mov dword ptr [esi + 88h], ebx
        call ext_006246B0
        lea ecx, [esi + 4ch]
        mov byte ptr [esp + 1ch], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 30h]
        mov byte ptr [esp + 1ch], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 14h]
        mov byte ptr [esp + 1ch], 1
        call dword ptr [mem_00924FF4]
        mov ecx, edi
        mov byte ptr [esp + 1ch], bl
        call ext_00528AE0
        mov ecx, esi
        mov dword ptr [esp + 1ch], 0ffffffffh
        call ext_0065F440
        mov ecx, dword ptr [esp + 14h]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 14h
        ret
    }
}

// [0x00585270] sub_00585270 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B3EB80;
extern "C" int mem_00B3EB64;

extern "C" __declspec(naked) void __fastcall fn_00585270(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89f49e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B3EB80], al
        jne skip_init
        or dword ptr [mem_00B3EB80], eax
        push 0xa85c84
        push offset mem_00B3EB64
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91d140
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3EB64
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00584C30] sub_00584C30 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A2E2BC;
extern "C" int mem_00B5CE94;

extern "C" __declspec(naked) void* __fastcall fn_00584C30(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A2E2BC
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00925354]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp + 0x28]
        push esi
        call ext_0066AC90
        add esp, 0x20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

extern "C" void ext_00661980();
extern "C" int mem_00924FE8;

// [0x00587650] sub_00587650 (332 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00587650(void* self) {
    __asm {
        push -1
        push 0x89f532
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        call ext_00661980
        mov dword ptr [esi + 4], 0x95a19c
        xor ebx, ebx
        mov dword ptr [esi + 8], 0x95a1e4
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esi + 0xc], 0x953474
        mov dword ptr [esi + 0x10], ebx
        lea ecx, [esi + 0x14]
        mov byte ptr [esp + 0x14], 1
        mov dword ptr [esi], 0x95aa8c
        mov dword ptr [esi + 4], 0x95aa44
        mov dword ptr [esi + 8], 0x95aa04
        mov dword ptr [esi + 0xc], 0x95a9b4
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x30]
        mov byte ptr [esp + 0x14], 2
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x4c]
        mov byte ptr [esp + 0x14], 3
        call dword ptr [mem_00924FE8]
        mov byte ptr [esi + 0x68], 1
        mov byte ptr [esi + 0x69], 1
        mov dword ptr [esi + 0x70], ebx
        mov dword ptr [esi + 0x74], ebx
        mov dword ptr [esi + 0x78], ebx
        fld1
        mov dword ptr [esi + 0x80], ebx
        mov dword ptr [esi + 0x84], ebx
        mov dword ptr [esi + 0x88], ebx
        mov byte ptr [esi + 0x8d], bl
        mov dword ptr [esi + 0x90], ebx
        mov dword ptr [esi + 0x94], ebx
        mov dword ptr [esi + 0x98], ebx
        mov dword ptr [esi + 0x9c], ebx
        mov byte ptr [esi + 0x8c], 1
        fst dword ptr [esi + 0xa0]
        fldz
        mov ecx, dword ptr [esp + 0xc]
        fst dword ptr [esi + 0xa4]
        mov byte ptr [esi + 0xe0], 1
        fst dword ptr [esi + 0xa8]
        mov eax, esi
        fst dword ptr [esi + 0xac]
        fst dword ptr [esi + 0xb0]
        fst dword ptr [esi + 0xb8]
        fst dword ptr [esi + 0xbc]
        fst dword ptr [esi + 0xc0]
        fst dword ptr [esi + 0xc4]
        fst dword ptr [esi + 0xcc]
        fst dword ptr [esi + 0xd0]
        fst dword ptr [esi + 0xd4]
        fstp dword ptr [esi + 0xd8]
        fst dword ptr [esi + 0xb4]
        fst dword ptr [esi + 0xc8]
        fstp dword ptr [esi + 0xdc]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00581C00] sub_00581C00 (391 bytes)
extern "C" void ext_0041DD40();
extern "C" void ext_00558F20();
extern "C" void ext_00558F80();
extern "C" void ext_00558FE0();
extern "C" void ext_0055B780();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00581C00(void* self) {
    __asm {
        push -1
        push 0x89a76f
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], edi
        mov eax, dword ptr [edi + 0xe8]
        lea esi, [edi + 0xe4]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x18], 0x6
        je L_skip1
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_0055B780
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_skip1:
        lea ecx, [edi + 0xc4]
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov byte ptr [esp + 0x18], 0x5
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [edi + 0xb8]
        cmp eax, ebx
        lea esi, [edi + 0xb4]
        mov byte ptr [esp + 0x18], 0x4
        je L_skip2
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_0041DD40
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_skip2:
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov eax, dword ptr [edi + 0xa8]
        cmp eax, ebx
        lea esi, [edi + 0xa4]
        mov byte ptr [esp + 0x18], 0x3
        je L_skip3
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_00558FE0
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_skip3:
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov eax, dword ptr [edi + 0x98]
        cmp eax, ebx
        lea esi, [edi + 0x94]
        mov byte ptr [esp + 0x18], 0x2
        je L_skip4
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_00558F80
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_skip4:
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov eax, dword ptr [edi + 0x88]
        cmp eax, ebx
        lea esi, [edi + 0x84]
        mov byte ptr [esp + 0x18], 0x1
        je L_skip5
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_00558F20
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_skip5:
        lea ecx, [edi + 0x20]
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov byte ptr [esp + 0x18], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [edi + 0x4]
        mov dword ptr [esp + 0x18], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00582AE0] sub_00582AE0 (125 bytes)
extern "C" void ext_00558920();
extern "C" void ext_0056B710();
extern "C" void ext_00581C00();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00582AE0(void* self) {
    __asm {
        push -1
        _emit 0x68
        _emit 0xa5
        _emit 0xa7
        _emit 0x89
        _emit 0x00
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov [esp+4], esi
        mov dword ptr [esi], 0x958094
        mov dword ptr [esi+4], 0x958088
        lea ecx, [esi+0x584]
        mov dword ptr [esp+0x10], 2
        call ext_0056B710
        lea ecx, [esi+0x568]
        mov byte ptr [esp+0x10], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi+0x46c]
        mov byte ptr [esp+0x10], 0
        call ext_00581C00
        mov ecx, esi
        mov dword ptr [esp+0x10], 0xffffffff
        call ext_00558920
        mov ecx, [esp+8]
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00584490] sub_00584490 (108 bytes)
extern "C" void ext_00558920();
extern "C" void ext_0056B710();
extern "C" void ext_00582AE0();
extern "C" __declspec(naked) void __fastcall fn_00584490(void* self) {
    __asm {
        push -1
        push 0x0089F1B6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0095818C
        mov dword ptr [esi + 0x4], 0x00958180
        lea ecx, [esi + 0x964]
        mov dword ptr [esp + 0x10], 0x1
        call ext_00582AE0
        lea ecx, [esi + 0x46c]
        mov byte ptr [esp + 0x10], 0x0
        call ext_0056B710
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00558920
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0058F200] sub_0058F200 (190 bytes)
extern "C" void ext_0058F030();
extern "C" void ext_00593520();
extern "C" void ext_006A6C99();
extern "C" __declspec(naked) void* __fastcall fn_0058F200(void* self) {
    __asm {
        push -1
        push 0x89fcb0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        call ext_00593520
        push 0x401cc0
        push 0x41cee0
        push 7
        push 8
        lea eax, [esi + 0xf4]
        lea edi, [esi + 8]
        push eax
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esi], 0x95bff4
        mov dword ptr [esi + 4], 0x95bfac
        mov dword ptr [edi], 0x95bf6c
        mov dword ptr [esi + 0xc], 0x95bf1c
        mov dword ptr [esi + 0xf0], 2
        call ext_006A6C99
        fldz
        fst dword ptr [esi + 0x134]
        mov ecx, edi
        fst dword ptr [esi + 0x130]
        mov byte ptr [esp + 0x14], 1
        fst dword ptr [esi + 0x12c]
        fst dword ptr [esi + 0x144]
        fst dword ptr [esi + 0x140]
        fst dword ptr [esi + 0x13c]
        fstp dword ptr [esi + 0x138]
        mov byte ptr [esi + 0x148], 0
        call ext_0058F030
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00587DF0] sub_00587DF0 (59 bytes)
#include <new>

extern "C" void ext_0058F200();
extern "C" void* __fastcall fn_00587DF0(void* self) {
    ((void(__fastcall*)(void*))ext_0058F200)(self);
    *(volatile unsigned int*)((char*)self + 0x150) = 0x928eac;
    *(unsigned int*)((char*)self + 0x0) = 0x95ae44;
    *(unsigned int*)((char*)self + 0x4) = 0x95adfc;
    *(unsigned int*)((char*)self + 0x8) = 0x95adbc;
    *(unsigned int*)((char*)self + 0xc) = 0x95ad6c;
    *(volatile unsigned int*)((char*)self + 0x150) = 0x95ad54;
    return self;
}

// [0x00587EA0] sub_00587EA0 (59 bytes)
extern "C" void* __fastcall fn_00587EA0(void* self) {
    ((void(__fastcall*)(void*))ext_0058F200)(self);
    *(volatile unsigned int*)((char*)self + 0x150) = 0x928eac;
    *(unsigned int*)((char*)self + 0x0) = 0x95b024;
    *(unsigned int*)((char*)self + 0x4) = 0x95afdc;
    *(unsigned int*)((char*)self + 0x8) = 0x95af9c;
    *(unsigned int*)((char*)self + 0xc) = 0x95af4c;
    *(volatile unsigned int*)((char*)self + 0x150) = 0x95af34;
    return self;
}

// [0x00587EE0] sub_00587EE0 (129 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00587EE0(void* self) {
    __asm {
        push -1
        push 0x8a2518
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_0058F200
        mov dword ptr [esi + 0x150], 0x928eac
        lea ecx, [esi + 0x154]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi], 0x95b204
        mov dword ptr [esi + 0x4], 0x95b1bc
        mov dword ptr [esi + 0x8], 0x95b17c
        mov dword ptr [esi + 0xc], 0x95b12c
        mov dword ptr [esi + 0x150], 0x95b114
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x174], 0x0
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0058AF80] sub_0058AF80 (110 bytes)
extern "C" void ext_0067E510();
extern "C" __declspec(naked) void __fastcall fn_0058AF80(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x128]
        mov edx, dword ptr [ecx]
        lea eax, [esi + 0x124]
        push edi
        push eax
        mov eax, dword ptr [edx + 0x18]
        call eax
        mov edi, dword ptr [esp + 0xc]
        push eax
        mov ecx, edi
        call ext_0067E510
        mov ecx, dword ptr [esi + 0x110]
        mov edx, dword ptr [ecx]
        lea eax, [esi + 0x10c]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [edi + 0x30]
        mov ecx, dword ptr [esi + 0x118]
        mov edx, dword ptr [ecx]
        lea eax, [esi + 0x114]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [edi + 0x34]
        mov ecx, dword ptr [esi + 0x120]
        mov edx, dword ptr [ecx]
        lea eax, [esi + 0x11c]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [edi + 0x38]
        pop edi
        pop esi
        ret 4
    }
}

extern "C" void ext_0067DAD0();
extern "C" void ext_00694B60();
extern "C" int mem_00A85D54;
// [0x0058B230] sub_0058B230 (108 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0058B230(void* self) {
    __asm {
        sub esp, 0x24
        cmp byte ptr [mem_00A85D54], 0
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        lea ecx, [esi + 4]
        je short L1
        mov edx, dword ptr [eax + 0x30]
        jmp short L2
    L1:
        mov edx, dword ptr [eax + 0x28]
    L2:
        call edx
        fldz
        fst dword ptr [esp + 0xc]
        lea ecx, [esp + 4]
        fst dword ptr [esp + 8]
        push ecx
        fst dword ptr [esp + 0x1c]
        mov ecx, eax
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x20]
        fld1
        fst dword ptr [esp + 8]
        fst dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x28]
        call ext_0067DAD0
        add esi, 0x12c
        push esi
        push 0
        lea ecx, [esp + 0xc]
        call ext_00694B60
        mov eax, esi
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x0058B350] sub_0058B350 (400 bytes)
extern "C" void ext_00672080();
extern "C" void ext_00694B60();
extern "C" void ext_00695070();

extern "C" __declspec(naked) void __fastcall fn_0058B350(void* self, int edx_unused, void* arg) {
    __asm {
        push    -0x1
        push    0x89fa28
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x40
        fldz
        mov     eax, dword ptr [esp + 0x50]
        fst     dword ptr [esp + 0x18]
        push    esi
        fst     dword ptr [esp + 0x18]
        mov     esi, ecx
        fst     dword ptr [esp + 0x14]
        push    edi
        fst     dword ptr [esp + 0x2c]
        push    eax
        fst     dword ptr [esp + 0x2c]
        lea     ecx, [esp + 0x28]
        fst     dword ptr [esp + 0x3c]
        fst     dword ptr [esp + 0x34]
        fst     dword ptr [esp + 0x44]
        fstp    dword ptr [esp + 0x40]
        fld1
        fst     dword ptr [esp + 0x28]
        fst     dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x48]
        fld     dword ptr [eax]
        fstp    dword ptr [esi + 0x138]
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esi + 0x13c]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esi + 0x140]
        fld     dword ptr [eax + 0xc]
        fstp    dword ptr [esi + 0x144]
        call    ext_00695070
        lea     eax, [esp + 0x18]
        push    eax
        push    0x0
        lea     ecx, [esp + 0x2c]
        call    ext_00694B60
        fld     dword ptr [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0xc]
        fstp    dword ptr [esp]
        call    ext_00672080
        mov     ecx, dword ptr [esi + 0xf8]
        mov     edx, dword ptr [ecx]
        lea     eax, [esi + 0xf4]
        lea     edi, [esp + 0x8]
        push    edi
        push    eax
        mov     eax, dword ptr [edx + 0xa4]
        mov     dword ptr [esp + 0x58], 0x0
        call    eax
        mov     ecx, dword ptr [esp + 0xc]
        or      edi, -0x1
        test    ecx, ecx
        mov     dword ptr [esp + 0x50], edi
        je      L_58b431
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        lea     eax, [esp + 0x8]
        push    eax
        call    edx
    L_58b431:
        fld     dword ptr [esp + 0x1c]
        push    ebx
        push    ecx
        lea     ecx, [esp + 0x10]
        fstp    dword ptr [esp]
        call    ext_00672080
        mov     ecx, dword ptr [esi + 0x100]
        mov     edx, dword ptr [ecx]
        lea     eax, [esi + 0xfc]
        lea     ebx, [esp + 0xc]
        push    ebx
        push    eax
        mov     eax, dword ptr [edx + 0xa4]
        mov     dword ptr [esp + 0x5c], 0x1
        call    eax
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        mov     dword ptr [esp + 0x54], edi
        pop     ebx
        je      L_58b480
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        lea     eax, [esp + 0x8]
        push    eax
        call    edx
    L_58b480:
        fld     dword ptr [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x14]
        fstp    dword ptr [esp]
        call    ext_00672080
        mov     ecx, dword ptr [esi + 0x108]
        mov     edx, dword ptr [ecx]
        lea     eax, [esi + 0x104]
        lea     esi, [esp + 0x10]
        push    esi
        push    eax
        mov     eax, dword ptr [edx + 0xa4]
        mov     dword ptr [esp + 0x58], 0x2
        call    eax
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        mov     dword ptr [esp + 0x50], edi
        pop     edi
        pop     esi
        je      L_58b4cf
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        lea     eax, [esp + 0x8]
        push    eax
        call    edx
    L_58b4cf:
        mov     ecx, dword ptr [esp + 0x40]
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x4c
        ret     0x4
    }
}

// [0x0058B600] sub_0058B600 (160 bytes)
extern "C" void ext_0058A0D0();
extern "C" void ext_0067E110();
extern "C" void ext_00694A70();
extern "C" void ext_00694B60();
extern "C" int mem_00B40644;
extern "C" double mem_00A85D58;

extern "C" __declspec(naked) void* __fastcall fn_0058B600(void* self) {
    __asm {
        sub     esp, 0x88
        push    esi
        lea     eax, [esp + 0x28]
        push    eax
        mov     eax, dword ptr [mem_00B40644]
        push    eax
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xf0]
        mov     edx, dword ptr [esi + 0x4]
        mov     edx, dword ptr [edx + 0x10]
        lea     ecx, [esi + 0x4]
        push    eax
        lea     eax, [esp + 0x58]
        push    eax
        call    edx
        mov     ecx, eax
        call    ext_0067E110
        fldz
        fst     dword ptr [esp + 0xc]
        add     esi, 0x12c
        fst     dword ptr [esp + 0x8]
        push    esi
        fst     dword ptr [esp + 0x1c]
        push    0x0
        fst     dword ptr [esp + 0x18]
        lea     ecx, [esp + 0xc]
        fst     dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x24]
        fld1
        fst     dword ptr [esp + 0xc]
        fst     dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x2c]
        call    ext_00694A70
        fld     qword ptr [mem_00A85D58]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x10]
        call    ext_0058A0D0
        test    al, al
        jne     loc_58b696
        push    esi
        push    0x0
        lea     ecx, [esp + 0x30]
        call    ext_00694B60
loc_58b696:
        mov     eax, esi
        pop     esi
        add     esp, 0x88
        ret
    }
}

extern "C" void ext_00694330();
extern "C" void ext_00694A70();

// [0x0058B2A0] sub_0058B2A0 (175 bytes)
extern "C" __declspec(naked) void __fastcall fn_0058B2A0(void* self) {
    __asm {
        sub esp, 0x38
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x108]
        mov edx, dword ptr [ecx]
        lea eax, [esi + 0x104]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x100]
        mov edx, dword ptr [ecx]
        lea eax, [esi + 0xfc]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [esp + 0x4]
        mov ecx, dword ptr [esi + 0xf8]
        mov edx, dword ptr [ecx]
        lea eax, [esi + 0xf4]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x4]
        lea ecx, [esp + 0xc]
        fstp dword ptr [esp + 0x10]
        push ecx
        fld dword ptr [esp + 0xc]
        push 0x0
        fstp dword ptr [esp + 0x1c]
        lea ecx, [esp + 0x20]
        fldz
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x38]
        fld1
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x40]
        call ext_00694A70
        add esi, 0x138
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_00694330
        mov eax, esi
        pop esi
        add esp, 0x38
        ret
    }
}

// [0x0058CFE0] sub_0058CFE0 (36 bytes)
extern "C" void ext_0058B600();
extern "C" void ext_00594000();
extern "C" void ext_00678130();

extern "C" __declspec(naked) void __fastcall fn_0058CFE0(void* self) {
    __asm {
        push ecx
        call ext_0058B600
        fld dword ptr [eax]
        fstp dword ptr [esp]
        call ext_00594000
        fld dword ptr [esp]
        push ecx
        lea ecx, [eax + 0x2E0]
        fstp dword ptr [esp]
        call ext_00678130
        pop ecx
        ret
    }
}

// [0x0058D010] sub_0058D010 (37 bytes)
extern "C" void ext_0058B600();
extern "C" void ext_00594000();
extern "C" void ext_00678130();

extern "C" __declspec(naked) void __fastcall fn_0058D010(void* self) {
    __asm {
        push ecx
        call ext_0058B600
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp]
        call ext_00594000
        fld dword ptr [esp]
        push ecx
        lea ecx, [eax + 0x2E0]
        fstp dword ptr [esp]
        call ext_00678130
        pop ecx
        ret
    }
}

// [0x0058D040] sub_0058D040 (37 bytes)
extern "C" void ext_0058B600();
extern "C" void ext_00594000();
extern "C" void ext_00678130();

extern "C" __declspec(naked) void __fastcall fn_0058D040(void* self) {
    __asm {
        push ecx
        call ext_0058B600
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp]
        call ext_00594000
        fld dword ptr [esp]
        push ecx
        lea ecx, [eax + 0x2E0]
        fstp dword ptr [esp]
        call ext_00678130
        pop ecx
        ret
    }
}

// [0x0058A8A0] sub_0058A8A0 (74 bytes)
extern "C" void ext_0067E410();
extern "C" __declspec(naked) void __fastcall fn_0058A8A0(void* self, int edx_unused, int a1) {
    __asm {
        cmp byte ptr [mem_00A85D54], 0
        mov eax, dword ptr [ecx + 4]
        push esi
        lea esi, [ecx + 4]
        push edi
        mov ecx, esi
        je short L_vf24
        mov edx, dword ptr [eax + 0x2c]
        jmp short L_call
L_vf24:
        mov edx, dword ptr [eax + 0x24]
L_call:
        call edx
        mov edi, dword ptr [esp + 0xc]
        push edi
        push 0
        mov ecx, eax
        call ext_0067E410
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push edi
        push 0
        push ecx
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_0067E410
        pop edi
        pop esi
        ret 4
    }
}

// [0x0058AA60] sub_0058AA60 (202 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_00493F00();
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_0067E410();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_0058AA60(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x89f9b8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea ebx, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebp, eax
        mov ecx, ebp
        mov dword ptr [esp + 0x10], ebp
        call ext_0065C640
        mov ecx, dword ptr [mem_00B40640]
        mov edx, dword ptr [edi + 0xf0]
        mov eax, dword ptr [edi + 0x4]
        push ecx
        lea esi, [edi + 0x4]
        push edx
        mov edx, dword ptr [eax + 0x10]
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x68], 0x0
        call edx
        mov eax, dword ptr [esp + 0x64]
        push eax
        push 0x0
        lea ecx, [esp + 0x1c]
        call ext_0067E410
        mov eax, dword ptr [mem_00B40640]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx]
        push eax
        mov eax, dword ptr [edi + 0xf0]
        lea ecx, [esp + 0x18]
        push ecx
        push eax
        mov ecx, esi
        call edx
        mov ecx, ebx
        call ext_00493F00
        mov ecx, ebx
        call ext_00493EE0
        mov ecx, ebp
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret 0x4
    }
}

// [0x0058B140] sub_0058B140 (74 bytes)
extern "C" void ext_0058A8A0();
extern "C" void ext_0067E110();
extern "C" void ext_00694B60();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_0058B140(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x24
        push esi
        push edi
        mov esi, ecx
        mov edx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edx + 0xc]
        lea edi, [esi + 0x12c]
        push edi
        push 0
        lea eax, [esp + 0x10]
        lea ecx, [esi + 0x4]
        push eax
        mov eax, dword ptr [mem_00B40640]
        push eax
        call edx
        mov ecx, eax
        call ext_0067E110
        mov ecx, eax
        call ext_00694B60
        fld dword ptr [esp + 0x30]
        push edi
        fstp dword ptr [edi]
        mov ecx, esi
        call ext_0058A8A0
        pop edi
        pop esi
        add esp, 0x24
        ret 4
    }
}

// [0x0058B190] sub_0058B190 (78 bytes)
extern "C" __declspec(naked) void __fastcall fn_0058B190(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x24
        push esi
        push edi
        mov esi, ecx
        mov edx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edx + 0xc]
        lea edi, [esi + 0x12c]
        push edi
        push 0
        lea eax, [esp + 0x10]
        lea ecx, [esi + 0x4]
        push eax
        mov eax, dword ptr [mem_00B40640]
        push eax
        call edx
        mov ecx, eax
        call ext_0067E110
        mov ecx, eax
        call ext_00694B60
        fld dword ptr [esp + 0x30]
        push edi
        fstp dword ptr [esi + 0x130]
        mov ecx, esi
        call ext_0058A8A0
        pop edi
        pop esi
        add esp, 0x24
        ret 4
    }
}

// [0x0058B1E0] sub_0058B1E0 (78 bytes)
extern "C" __declspec(naked) void __fastcall fn_0058B1E0(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x24
        push esi
        push edi
        mov esi, ecx
        mov edx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edx + 0xc]
        lea edi, [esi + 0x12c]
        push edi
        push 0
        lea eax, [esp + 0x10]
        lea ecx, [esi + 0x4]
        push eax
        mov eax, dword ptr [mem_00B40640]
        push eax
        call edx
        mov ecx, eax
        call ext_0067E110
        mov ecx, eax
        call ext_00694B60
        fld dword ptr [esp + 0x30]
        push edi
        fstp dword ptr [esi + 0x134]
        mov ecx, esi
        call ext_0058A8A0
        pop edi
        pop esi
        add esp, 0x24
        ret 4
    }
}

// [0x0058AE60] sub_0058AE60 (279 bytes)

extern "C" void ext_00672150();
extern "C" void ext_006944D0();
extern "C" int mem_0089F9E0;

// [0x0058AE60] sub_0058AE60 (279 bytes)
extern "C" __declspec(naked) void __fastcall fn_0058AE60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_0089F9E0
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        push edi
        mov edi, dword ptr [esp + 0x38]
        cmp edi, 6
        mov esi, ecx
        je L_58AEEC
        cmp edi, 3
        jl L_58AEEC
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [esp + 0x3c]
        mov eax, dword ptr [eax + 0xc]
        lea ecx, [esi + 4]
        push edx
        call eax
        fld dword ptr [eax + edi*4]
        fstp dword ptr [esp + 0x3c]
        push ecx
        fld dword ptr [esp + 0x40]
        lea ecx, [esp + 0xc]
        fstp dword ptr [esp]
        call ext_00672080
        mov ecx, dword ptr [esi + edi*8 + 0xf8]
        mov edx, dword ptr [ecx]
        lea eax, [esi + edi*8 + 0xf4]
        lea esi, [esp + 8]
        push esi
        push eax
        mov eax, dword ptr [edx + 0xa4]
        mov dword ptr [esp + 0x38], 1
        call eax
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        mov dword ptr [esp + 0x30], 0xffffffff
        je L_58AF64
        mov eax, esi
        jmp L_58AF5C
    L_58AEEC:
        fldz
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [esp + 0x3c]
        fst dword ptr [esp + 0x24]
        mov eax, dword ptr [eax + 0xc]
        fst dword ptr [esp + 0x20]
        lea ecx, [esi + 4]
        fst dword ptr [esp + 0x1c]
        push edx
        fstp dword ptr [esp + 0x1c]
        call eax
        push eax
        lea ecx, [esp + 0x1c]
        call ext_006944D0
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esp + 0x14]
        call ext_00672150
        mov ecx, dword ptr [esi + 0x128]
        mov edx, dword ptr [ecx]
        lea eax, [esi + 0x124]
        lea esi, [esp + 0x10]
        push esi
        push eax
        mov eax, dword ptr [edx + 0xa4]
        mov dword ptr [esp + 0x38], 0
        call eax
        mov ecx, dword ptr [esp + 0x14]
        test ecx, ecx
        mov dword ptr [esp + 0x30], 0xffffffff
        je L_58AF64
        mov eax, esi
    L_58AF5C:
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        push eax
        call edx
    L_58AF64:
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 8
    }
}

// [0x0058A6D0] sub_0058A6D0 (460 bytes)
extern "C" int mem_0089F9A0;
extern "C" void ext_00672080();
extern "C" void ext_00672150();
extern "C" void ext_006944D0();
extern "C" __declspec(naked) void __fastcall fn_0058A6D0(void* self, int edx_unused, int a1) {
    __asm {
        push    -1
        push    offset mem_0089F9A0
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        fldz
        push    ebx
        mov     ebx, dword ptr [esp + 0x34]
        fst     dword ptr [esp + 0x20]
        push    ebp
        fst     dword ptr [esp + 0x20]
        push    esi
        fst     dword ptr [esp + 0x20]
        push    edi
        fstp    dword ptr [esp + 0x20]
        mov     edi, ecx
        mov     eax, dword ptr [edi + 4]
        mov     edx, dword ptr [eax + 0xc]
        lea     esi, [edi + 4]
        push    ebx
        mov     ecx, esi
        call    edx
        push    eax
        lea     ecx, [esp + 0x24]
        call    ext_006944D0
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x14]
        call    ext_00672150
        mov     ecx, dword ptr [edi + 0x128]
        mov     edx, dword ptr [ecx]
        lea     eax, [edi + 0x124]
        lea     ebp, [esp + 0x10]
        push    ebp
        push    eax
        mov     eax, dword ptr [edx + 0xa4]
        mov     dword ptr [esp + 0x40], 0
        call    eax
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        mov     dword ptr [esp + 0x38], -1
        je      L1
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        mov     eax, ebp
        push    eax
        call    edx
L1:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0xc]
        push    ebx
        mov     ecx, esi
        call    edx
        fld     dword ptr [eax + 0x30]
        fstp    dword ptr [esp + 0x40]
        push    ecx
        fld     dword ptr [esp + 0x44]
        lea     ecx, [esp + 0x14]
        fstp    dword ptr [esp]
        call    ext_00672080
        mov     ecx, dword ptr [edi + 0x110]
        mov     edx, dword ptr [ecx]
        lea     eax, [edi + 0x10c]
        lea     ebp, [esp + 0x10]
        push    ebp
        push    eax
        mov     eax, dword ptr [edx + 0xa4]
        mov     dword ptr [esp + 0x40], 1
        call    eax
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        mov     dword ptr [esp + 0x38], -1
        je      L2
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        mov     eax, ebp
        push    eax
        call    edx
L2:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0xc]
        push    ebx
        mov     ecx, esi
        call    edx
        fld     dword ptr [eax + 0x34]
        fstp    dword ptr [esp + 0x40]
        push    ecx
        fld     dword ptr [esp + 0x44]
        lea     ecx, [esp + 0x14]
        fstp    dword ptr [esp]
        call    ext_00672080
        mov     ecx, dword ptr [edi + 0x118]
        mov     edx, dword ptr [ecx]
        lea     eax, [edi + 0x114]
        lea     ebp, [esp + 0x10]
        push    ebp
        push    eax
        mov     eax, dword ptr [edx + 0xa4]
        mov     dword ptr [esp + 0x40], 2
        call    eax
        mov     ecx, dword ptr [esp + 0x14]
        or      ebp, -1
        test    ecx, ecx
        mov     dword ptr [esp + 0x38], ebp
        je      L3
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        lea     eax, [esp + 0x10]
        push    eax
        call    edx
L3:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0xc]
        push    ebx
        mov     ecx, esi
        call    edx
        fld     dword ptr [eax + 0x38]
        fstp    dword ptr [esp + 0x40]
        push    ecx
        fld     dword ptr [esp + 0x44]
        lea     ecx, [esp + 0x1c]
        fstp    dword ptr [esp]
        call    ext_00672080
        mov     ecx, dword ptr [edi + 0x120]
        mov     edx, dword ptr [ecx]
        lea     eax, [edi + 0x11c]
        lea     esi, [esp + 0x18]
        push    esi
        push    eax
        mov     eax, dword ptr [edx + 0xa4]
        mov     dword ptr [esp + 0x40], 3
        call    eax
        mov     ecx, dword ptr [esp + 0x1c]
        test    ecx, ecx
        pop     edi
        pop     esi
        mov     dword ptr [esp + 0x30], ebp
        pop     ebp
        pop     ebx
        je      L4
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        lea     eax, [esp + 0x8]
        push    eax
        call    edx
L4:
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     4
    }
}

extern "C" void __cdecl ext_005937B0(void* out, int val);

// [0x0058F4C0] sub_0058F4C0 (37 bytes)
extern "C" void* __fastcall fn_0058F4C0(void* self, int edx_unused, void* out) {
    volatile int flag = 0;
    ext_005937B0(out, *(int*)((char*)self + 0xf0));
    return out;
}

// [0x005817F0] sub_005817F0 (41 bytes)
extern "C" void ext_00581610();
extern "C" __declspec(naked) void __fastcall fn_005817F0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
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
        call ext_00581610
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00581750] sub_00581750 (43 bytes)
extern "C" void ext_005815A0();

extern "C" __declspec(naked) void __fastcall fn_00581750(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edx
        call ext_005815A0
        add esp, 0x1c
        ret
    }
}

// [0x00585C10] sub_00585C10 (211 bytes)
extern "C" void ext_006404E0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00585C10(void* self) {
    __asm {
        push ecx
        push ebp
        mov ebp, dword ptr [esp + 0Ch]
        mov eax, dword ptr [ebp + 4]
        test eax, eax
        je L_27
        mov ecx, dword ptr [ebp + 8]
        sub ecx, eax
        sar ecx, 2
        jne L_2F
L_27:
        mov eax, 0B53B30h
        pop ebp
        pop ecx
        ret
L_2F:
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        je L_47
        mov ecx, dword ptr [esp + 10h]
        push eax
        call ext_006404E0
        mov dword ptr [esp + 0Ch], eax
        jmp L_4F
L_47:
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esp + 0Ch], edx
L_4F:
        push ebx
        mov ebx, dword ptr [ebp + 4]
        cmp ebx, dword ptr [ebp + 8]
        push esi
        push edi
        mov edi, dword ptr [mem_00925134]
        jbe L_62
        call edi
L_62:
        mov esi, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], esi
        mov dword ptr [esp + 10h], esi
        jbe L_70
        call edi
L_70:
        cmp ebx, esi
        je L_D9
        cmp dword ptr [esp + 24h], 0
        je L_AA
        cmp ebx, dword ptr [ebp + 8]
        jb L_82
        call edi
L_82:
        mov edi, dword ptr [ebx]
        mov eax, dword ptr [esp + 24h]
        mov esi, dword ptr [edi]
        mov ecx, dword ptr [esp + 18h]
        push eax
        add esi, 58h
        call ext_006404E0
        mov edx, dword ptr [esi]
        push eax
        mov ecx, edi
        call edx
        mov esi, dword ptr [esp + 10h]
        mov edi, dword ptr [mem_00925134]
        jmp L_BF
L_AA:
        cmp ebx, dword ptr [ebp + 8]
        jb L_B1
        call edi
L_B1:
        mov ecx, dword ptr [ebx]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [eax + 58h]
        push edx
        call eax
L_BF:
        mov ecx, dword ptr [esp + 28h]
        test ecx, ecx
        je L_CD
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
L_CD:
        cmp ebx, dword ptr [ebp + 8]
        jb L_D4
        call edi
L_D4:
        add ebx, 4
        jmp L_70
L_D9:
        mov eax, dword ptr [esp + 18h]
        pop edi
        pop esi
        pop ebx
        pop ebp
        pop ecx
        ret
    }
}

// [0x00585FF0] sub_00585FF0 (62 bytes)
extern "C" void ext_00585C10();
extern "C" int mem_00A9EDAC;

extern "C" __declspec(naked) void __fastcall fn_00585FF0(void* self) {
    __asm {
        push ecx
        lea eax, [ecx + 6Ch]
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        je L_ret_esp8
        mov edx, dword ptr [eax + 8]
        sub edx, ecx
        sar edx, 2
        je L_ret_esp8
        mov ecx, dword ptr [mem_00A9EDAC]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push 0
        push 0
        push ecx
        push esi
        push eax
        call ext_00585C10
        add esp, 14h
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    L_ret_esp8:
        mov eax, dword ptr [esp + 8]
        pop ecx
        ret 4
    }
}

// [0x00584A40] sub_00584A40 (54 bytes)
extern "C" void ext_00660A50();
extern "C" void ext_006A6E9E();
extern "C" int mem_00A2E2BC;
extern "C" int mem_00A2E2F8;

extern "C" __declspec(naked) void* __fastcall fn_00584A40(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00660A50
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x18]
        push 0x0
        push offset mem_00A2E2BC
        push offset mem_00A2E2F8
        push 0x0
        push 0x0
        push 0x0
        push esi
        push ecx
        mov ecx, eax
        call edx
        push eax
        call ext_006A6E9E
        add esp, 0x14
        pop esi
        ret 0x4
    }
}


// [0x00588E60] sub_00588E60 (359 bytes)
extern "C" void ext_00403560();
extern "C" void ext_004D26B0();
extern "C" void ext_00584C30();
extern "C" void ext_005ABD70();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void* __fastcall fn_00588E60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], esp
        sub esp, 0x80
        test eax, eax
        push esi
        je loc_00588F49
        push 0x0
        push 0xa34978
        push 0xa2e2bc
        push 0x0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je loc_00588EE7
        push 0x194
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0x0
        je loc_00588FAF
        push esi
        mov ecx, eax
        call ext_004D26B0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x8c
        ret
loc_00588EE7:
        lea eax, [esp + 0x8]
        push eax
        call ext_00584C30
        add esp, 0x4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 0x1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 0x2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 0x3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
loc_00588F49:
        push 0x194
        call ext_006A5C62
        mov esi, eax
        add esp, 0x4
        mov dword ptr [esp + 0x4], esi
        test esi, esi
        mov dword ptr [esp + 0x8c], 0x4
        je loc_00588FAF
        mov ecx, esi
        call ext_005ABD70
        mov dword ptr [esi], 0x93ee24
        mov dword ptr [esi + 0x4], 0x93eddc
        mov dword ptr [esi + 0x8], 0x93ed9c
        mov dword ptr [esi + 0xc], 0x93ed4c
        mov dword ptr [esi + 0x150], 0x93ed38
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x8c
        ret
loc_00588FAF:
        mov ecx, dword ptr [esp + 0x84]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x8c
        ret
    }
}

// [0x00581710] sub_00581710 (58 bytes)
extern "C" void ext_00581500();

extern "C" __declspec(naked) void* __fastcall fn_00581710(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp+10h]
        push esi
        mov esi, dword ptr [esp+10h]
        push edi
        mov edi, dword ptr [esp+10h]
        mov byte ptr [esp+8], 0
        mov eax, dword ptr [esp+8]
        push eax
        mov eax, dword ptr [esp+1Ch]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_00581500
        mov ecx, esi
        add esp, 18h
        shl ecx, 4
        sub ecx, esi
        lea eax, [edi+4*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0Ch
    }
}

// [0x00584F10] sub_00584F10 (59 bytes)
extern "C" void ext_005F0960();

extern "C" void* __fastcall fn_00584F10(void* self) {
    ext_005F0960();
    unsigned int* p = (unsigned int*)self;
    p[0] = 0x95a31c;
    p[1] = 0x95a2d4;
    p[2] = 0x95a294;
    p[3] = 0x95a244;
    p[0x150 / 4] = 0x95a22c;
    p[0x154 / 4] = 0x95a224;
    return self;
}

// [0x005851E0] sub_005851E0 (66 bytes)
extern "C" void ext_00584F80();
extern "C" __declspec(naked) void* __fastcall fn_005851E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_00584F80
        mov dword ptr [esi], 0x95a31c
        mov dword ptr [esi + 4], 0x95a2d4
        mov dword ptr [esi + 8], 0x95a294
        mov dword ptr [esi + 0xc], 0x95a244
        mov dword ptr [esi + 0x150], 0x95a22c
        mov dword ptr [esi + 0x154], 0x95a224
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x00587D80] sub_00587D80 (66 bytes)
extern "C" void ext_0058F2F0();
extern "C" __declspec(naked) void* __fastcall fn_00587D80(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_0058F2F0
        mov dword ptr [esi + 0x150], 0x928eac
        mov dword ptr [esi], 0x95ae44
        mov dword ptr [esi + 4], 0x95adfc
        mov dword ptr [esi + 8], 0x95adbc
        mov dword ptr [esi + 0xc], 0x95ad6c
        mov dword ptr [esi + 0x150], 0x95ad54
        mov eax, esi
        pop esi
        ret 4
    }
}
