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
