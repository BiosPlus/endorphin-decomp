// Decompiled translation unit: src/leaf/decompiled_680000.cpp

// [0x0068BC50] sub_0068BC50 (15 bytes)
extern "C" void ext_00695390();
extern "C" __declspec(naked) void __fastcall fn_0068BC50(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        push 0x0
        push eax
        add ecx, 0x10
        call ext_00695390
        ret
    }
}

// [0x0068BC30] sub_0068BC30 (17 bytes)
extern "C" void ext_00695460();
extern "C" __declspec(naked) void __fastcall fn_0068BC30(void* self) {
    __asm {
        push ecx
        add ecx, 0x10
        call ext_00695460
        fstp dword ptr [esp]
        fld dword ptr [esp]
        pop ecx
        ret
    }
}

// [0x006829E0] sub_006829E0 (20 bytes)
extern "C" void ext_0066B080();
extern "C" __declspec(naked) void __fastcall fn_006829E0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x28]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x30]
        call edx
        push eax
        call ext_0066B080
        add esp, 4
        ret
    }
}

// [0x006824C0] sub_006824C0 (22 bytes)
extern "C" void ext_00674150();
extern "C" void __fastcall fn_006824C0(void* self, int edx_unused, int a1) {
    typedef int* (__thiscall *Callee)(void* self, int a1);
    Callee callee = reinterpret_cast<Callee>(&ext_00674150);
    int* result = callee(static_cast<char*>(self) + 4, a1);
    *result = 1;
}

// [0x006813B0] sub_006813B0 (27 bytes)
extern "C" void ext_006812A0();
extern "C" __declspec(naked) void __fastcall fn_006813B0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_006812A0
        add esp, 0x10
        ret 0x8
    }
}

// [0x00682E20] sub_00682E20 (33 bytes)
extern "C" __declspec(naked) int __fastcall fn_00682E20(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        jne short L_nonzero_00682E20
        ret
    L_nonzero_00682E20:
        mov ecx, dword ptr [ecx + 0x8]
        sub ecx, eax
        mov eax, 0xdd67c8a7
        imul ecx
        add edx, ecx
        sar edx, 0x7
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        ret
    }
}

// [0x00687510] sub_00687510 (33 bytes)
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_00687510(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x28
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00681CB0] sub_00681CB0 (35 bytes)
extern "C" int mem_00B5A230;
extern "C" int mem_00B5A22C;
extern "C" void* __cdecl fn_00681CB0() {
    if (!(mem_00B5A230 & 1)) {
        mem_00B5A230 |= 1;
        mem_00B5A22C = 0x0098CC54;
    }
    return &mem_00B5A22C;
}

// [0x00681CE0] sub_00681CE0 (35 bytes)
extern "C" int mem_00B5A238;
extern "C" int mem_00B5A234;
extern "C" void* __cdecl fn_00681CE0() {
    if (!(mem_00B5A238 & 1)) {
        mem_00B5A238 |= 1;
        mem_00B5A234 = 0x0098CC8C;
    }
    return &mem_00B5A234;
}

extern "C" int mem_00B5A240;
extern "C" int mem_00B5A23C;

// [0x00681D10] sub_00681D10 (35 bytes)
extern "C" void* __cdecl fn_00681D10() {
    if (!(mem_00B5A240 & 1)) {
        mem_00B5A240 |= 1;
        mem_00B5A23C = 0x0098CCC4;
    }
    return &mem_00B5A23C;
}

// [0x00681D40] sub_00681D40 (35 bytes)
extern "C" int mem_00B5A248;
extern "C" int mem_00B5A244;
extern "C" void* __cdecl fn_00681D40(void) {
    if (!(mem_00B5A248 & 1)) {
        mem_00B5A248 |= 1;
        mem_00B5A244 = 0x98ccfc;
    }
    return &mem_00B5A244;
}

// [0x00681D70] sub_00681D70 (35 bytes)
extern "C" int mem_00B5A250;
extern "C" int mem_00B5A24C;
extern "C" void* __cdecl fn_00681D70(void) {
    if (!(mem_00B5A250 & 1)) {
        mem_00B5A250 |= 1;
        mem_00B5A24C = 0x98cd34;
    }
    return &mem_00B5A24C;
}

// [0x00681DA0] sub_00681DA0 (35 bytes)
extern "C" int mem_00B5A258;
extern "C" int mem_00B5A254;
extern "C" void* __cdecl fn_00681DA0() {
    if (!(mem_00B5A258 & 1)) {
        mem_00B5A258 |= 1;
        mem_00B5A254 = 0x98cd6c;
    }
    return &mem_00B5A254;
}

// [0x00688B20] sub_00688B20 (37 bytes)
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00688B20(void* self, int edx_unused, void* first, void* last) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je short L_00688B40
        mov edi, edi
L_00688B30:
        lea ecx, [esi + 0x10]
        call dword ptr [mem_00924FF4]
        add esi, 0x2c
        cmp esi, edi
        jne short L_00688B30
L_00688B40:
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x00688BE0] sub_00688BE0 (37 bytes)
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00688BE0(void* self, int edx_unused, void* first, void* last) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done_00688BE0
        __asm _emit 0x8b
        __asm _emit 0xff
loop_00688BE0:
        lea ecx, [esi + 0x8]
        call dword ptr [mem_00924FF4]
        add esi, 0x24
        cmp esi, edi
        jne loop_00688BE0
done_00688BE0:
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x00681140] sub_00681140 (46 bytes)
extern "C" void ext_006A5C5C(void* p);

extern "C" void __stdcall fn_00681140(void* p) {
    unsigned int* self = (unsigned int*)p;
    if (self[1] != 0) {
        ext_006A5C5C((void*)self[1]);
    }
    self[1] = 0;
    self[2] = 0;
    self[3] = 0;
}

// [0x00689570] sub_00689570 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_00689570(void* self) {
    __asm {
        fldz
        mov eax, ecx
        xor ecx, ecx
        fst qword ptr [eax + 0x10]
        fstp qword ptr [eax + 0x18]
        mov byte ptr [eax], cl
        fld1
        mov byte ptr [eax + 0x1], cl
        mov byte ptr [eax + 0x2], cl
        mov byte ptr [eax + 0x3], cl
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x24], ecx
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [eax + 0x2c], ecx
        fstp qword ptr [eax + 0x30]
        ret
    }
}

// [0x0068DDD0] sub_0068DDD0 (52 bytes)
extern "C" __declspec(naked) void __fastcall fn_0068DDD0(void* self, int edx_unused, void* src) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        push esi
        mov dword ptr [eax + 0x4], 0x928efc
        push edi
        mov dword ptr [eax], 0x98dd14
        mov dword ptr [eax + 0x4], 0x98dce4
        mov edx, dword ptr [ecx + 0x8]
        lea esi, [ecx + 0x10]
        lea edi, [eax + 0x10]
        mov ecx, 0x276
        mov dword ptr [eax + 0x8], edx
        rep movsd
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x006812A0] sub_006812A0 (53 bytes)
extern "C" __declspec(naked) void __cdecl fn_006812A0(void* first, void* last) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je done
        push edi
        xor edi, edi
    loop_top:
        mov eax, dword ptr [esi + 0x4]
        cmp eax, edi
        je skip_call
        push eax
        call ext_006A5C5C
        add esp, 0x4
    skip_call:
        mov dword ptr [esi + 0x4], edi
        mov dword ptr [esi + 0x8], edi
        mov dword ptr [esi + 0xc], edi
        add esi, 0x10
        cmp esi, ebx
        jne loop_top
        pop edi
    done:
        pop esi
        pop ebx
        ret
    }
}

// [0x006878E0] sub_006878E0 (55 bytes)
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __cdecl fn_006878E0() {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebp
        je L_done_006878E0
        push ebx
        push edi
        mov edi, dword ptr [esp + 0x1c]
        lea ebx, [edi + 0x8]
    L_loop_006878E0:
        mov eax, dword ptr [edi]
        mov dword ptr [esi], eax
        mov cl, byte ptr [edi + 0x4]
        mov byte ptr [esi + 0x4], cl
        push ebx
        lea ecx, [esi + 0x8]
        call dword ptr [mem_00924FDC]
        add esi, 0x24
        cmp esi, ebp
        jne L_loop_006878E0
        pop edi
        pop ebx
    L_done_006878E0:
        pop esi
        pop ebp
        ret
    }
}

// [0x006816F0] sub_006816F0 (63 bytes)
extern "C" void ext_006812A0();
extern "C" __declspec(naked) void __fastcall fn_006816F0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_006816F0
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_006812A0
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_006816F0:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x0068EE80] sub_0068EE80 (64 bytes)
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) int __stdcall fn_0068EE80(void* arg) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        push esi
        push edi
        xor edi, edi
        mov esi, 0xb5ae40
L_0068EE95:
        push esi
        push ebx
        call ebp
        add esp, 0x8
        test al, al
        jne L_0068EEB7
        add esi, 0x1c
        add edi, 0x1
        cmp esi, 0xb5ae94
        jl L_0068EE95
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
L_0068EEB7:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00687380] sub_00687380 (65 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_00687380(void) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je done_00687380
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_00687380:
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        mov cl, byte ptr [esi + 0x4]
        lea edx, [esi + 0x8]
        mov byte ptr [edi + 0x4], cl
        push edx
        lea ecx, [edi + 0x8]
        call dword ptr [mem_00924FDC]
        add esi, 0x24
        add edi, 0x24
        cmp esi, ebx
        jne loop_00687380
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    done_00687380:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00687420] sub_00687420 (66 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_00687420(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je empty_path
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_top:
        mov eax, dword ptr [esi - 0x24]
        sub esi, 0x24
        sub edi, 0x24
        mov dword ptr [edi], eax
        mov cl, byte ptr [esi + 0x4]
        lea edx, [esi + 0x8]
        mov byte ptr [edi + 0x4], cl
        push edx
        lea ecx, [edi + 0x8]
        call dword ptr [mem_00924FDC]
        cmp esi, ebx
        jne loop_top
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    empty_path:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00681250] sub_00681250 (67 bytes)
extern "C" __declspec(naked) void __fastcall fn_00681250(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x8]
        cmp esi, ecx
        je done
        push edi
    loop_top:
        mov edi, dword ptr [ecx - 0xc]
        mov edx, dword ptr [eax - 0xc]
        sub ecx, 0x10
        sub eax, 0x10
        cmp ecx, esi
        mov dword ptr [eax + 0x4], edi
        mov dword ptr [ecx + 0x4], edx
        mov edi, dword ptr [ecx + 0x8]
        mov edx, dword ptr [eax + 0x8]
        mov dword ptr [eax + 0x8], edi
        mov dword ptr [ecx + 0x8], edx
        mov edi, dword ptr [ecx + 0xc]
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [eax + 0xc], edi
        mov dword ptr [ecx + 0xc], edx
        jne loop_top
        pop edi
    done:
        pop esi
        ret
    }
}

// [0x00687890] sub_00687890 (67 bytes)
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __cdecl fn_00687890(void* first, void* last, const void* value) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebp
        je done
        push ebx
        push edi
        mov edi, dword ptr [esp + 0x1c]
        lea ebx, [edi + 0x10]
    loop_top:
        mov eax, dword ptr [edi]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [edi + 0x8]
        mov dword ptr [esi + 0x8], edx
        mov eax, dword ptr [edi + 0xc]
        push ebx
        lea ecx, [esi + 0x10]
        mov dword ptr [esi + 0xc], eax
        call dword ptr [mem_00924FDC]
        add esi, 0x2c
        cmp esi, ebp
        jne loop_top
        pop edi
        pop ebx
    done:
        pop esi
        pop ebp
        ret
    }
}

// [0x006821D0] sub_006821D0 (69 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_006821D0(void* self, int edx_unused, unsigned int index) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x14]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        je L_bad
        mov ecx, dword ptr [esi + 0x18]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L_ok
    L_bad:
        call dword ptr [mem_00925134]
    L_ok:
        mov ecx, dword ptr [esi + 0x14]
        lea eax, [8*edi]
        sub eax, edi
        pop edi
        lea eax, [ecx + 4*eax]
        pop esi
        ret 0x4
    }
}

// [0x006829A0] sub_006829A0 (42 bytes)
extern "C" void ext_0065D3F0();
extern "C" int mem_00B5ACC8;
extern "C" __declspec(naked) void __fastcall fn_006829A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x88]
        cmp eax, -0x1
        je done
        mov ecx, dword ptr [mem_00B5ACC8]
        test ecx, ecx
        je done
        push eax
        call ext_0065D3F0
        mov dword ptr [esi + 0x88], 0xffffffff
    done:
        pop esi
        ret
    }
}

// [0x00688B50] sub_00688B50 (72 bytes)
extern "C" __declspec(naked) void __fastcall fn_00688B50(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        je done
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp esi, edi
        je skip
    lp:
        lea ecx, [esi + 0x10]
        call dword ptr [mem_00924FF4]
        add esi, 0x2c
        cmp esi, edi
        jne lp
    skip:
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_006A5C5C
        add esp, 4
        pop edi
    done:
        pop esi
        mov dword ptr [ebx + 4], 0
        mov dword ptr [ebx + 8], 0
        mov dword ptr [ebx + 0xc], 0
        pop ebx
        ret
    }
}

// [0x00682280] sub_00682280 (75 bytes)
extern "C" int mem_00924FBC;
extern "C" __declspec(naked) void __cdecl fn_00682280(void* first, void* last, void* rnd) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        lea esi, [ebx + 0x1c]
        cmp esi, ebp
        push edi
        mov edi, 0x2
        je done
    loop_top:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [eax]
        push edi
        call ecx
        cdq
        idiv edi
        add esp, 0x4
        mov ecx, esi
        lea eax, [edx*8]
        sub eax, edx
        lea eax, [ebx + 4*eax]
        push eax
        call dword ptr [mem_00924FBC]
        add esi, 0x1c
        add edi, 0x1
        cmp esi, ebp
        jne loop_top
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x006872E0] sub_006872E0 (76 bytes)
extern "C" int mem_00A9F838;
extern "C" int mem_00924FC0;
extern "C" __declspec(naked) int __fastcall fn_006872E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x48], 0x15
        jne short L_other_006872E0
        cmp byte ptr [esi + 0xb2], 0x0
        jne short L_zero_006872E0
        cmp byte ptr [esi + 0xb3], 0x0
        jne short L_zero_006872E0
        mov eax, 0x1
        pop esi
        ret
    L_zero_006872E0:
        xor eax, eax
        pop esi
        ret
    L_other_006872E0:
        mov eax, dword ptr [mem_00A9F838]
        push eax
        lea ecx, [esi + 0x10]
        push ecx
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je short L_table_006872E0
        xor al, al
        pop esi
        ret
    L_table_006872E0:
        mov edx, dword ptr [esi + 0x48]
        mov al, byte ptr [edx + 0xaa2fe4]
        pop esi
        ret
    }
}

// [0x00687330] sub_00687330 (77 bytes)
// Copies [first, last) of 0x2c-byte elements to dest: four dword fields, then std::string
// (0x1c bytes at +0x10) assigned via the MSVCP80 operator= import. Returns dest end (or dest if empty).
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_00687330(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je short empty
        push edi
        mov edi, dword ptr [esp + 0x18]
copy_loop:
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [edi + 0x4], ecx
        mov edx, dword ptr [esi + 0x8]
        lea ecx, [esi + 0x10]
        mov dword ptr [edi + 0x8], edx
        mov eax, dword ptr [esi + 0xc]
        push ecx
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0xc], eax
        call dword ptr [mem_00924FDC]
        add esi, 0x2c
        add edi, 0x2c
        cmp esi, ebx
        jne short copy_loop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
empty:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x006873D0] sub_006873D0 (78 bytes)
// Backward counterpart of fn_00687330: copies [first, last) of 0x2c-byte elements into the
// range ending at dest (walking from last to first), same std::string operator= per element.
// Returns the new beginning of the written range (dest - n*0x2c), or dest if empty.
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_006873D0(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je short empty
        push edi
        mov edi, dword ptr [esp + 0x18]
copy_loop:
        mov eax, dword ptr [esi - 0x2c]
        sub esi, 0x2c
        sub edi, 0x2c
        mov dword ptr [edi], eax
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [edi + 0x4], ecx
        mov edx, dword ptr [esi + 0x8]
        lea ecx, [esi + 0x10]
        mov dword ptr [edi + 0x8], edx
        mov eax, dword ptr [esi + 0xc]
        push ecx
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0xc], eax
        call dword ptr [mem_00924FDC]
        cmp esi, ebx
        jne short copy_loop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
empty:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00687E50] sub_00687E50 (85 bytes)
extern "C" void ext_00687330();
extern "C" __declspec(naked) void* __cdecl fn_00687E50(void* first, void* last, void* dest) {
    __asm {
        sub esp, 0x8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_00687330
        sub esi, ebx
        mov eax, 0x2e8ba2e9
        imul esi
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        imul eax, eax, 0x2c
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00687EB0] sub_00687EB0 (86 bytes)
extern "C" void ext_00687380();

extern "C" __declspec(naked) void* __cdecl fn_00687EB0(void* a1, void* a2, void* a3) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_00687380
        sub esi, ebx
        mov eax, 0x38e38e39
        imul esi
        sar edx, 3
        add esp, 0x18
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 8*eax]
        lea eax, [edi + 4*eax]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00681C50] sub_00681C50 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5A228;
extern "C" int mem_00B5A224;

extern "C" __declspec(naked) void* __fastcall fn_00681C50(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b50de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5A228], al
        jne L_done
        or dword ptr [mem_00B5A228], eax
        mov ecx, offset mem_00B5A224
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5A224], 0x93f1ac
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5A224
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00683190] sub_00683190 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5AD48;
extern "C" int mem_00B5AD44;

extern "C" __declspec(naked) void* __fastcall fn_00683190(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b52ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5AD48], al
        jne L_done
        or dword ptr [mem_00B5AD48], eax
        mov ecx, offset mem_00B5AD44
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5AD44], 0x98cebc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5AD44
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006836F0] sub_006836F0 (30 bytes)
extern "C" void ext_00683190();

extern "C" __declspec(naked) void __fastcall fn_006836F0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_00683190
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x006850E0] sub_006850E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5AD78;
extern "C" int mem_00B5AD74;

extern "C" __declspec(naked) void* __fastcall fn_006850E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b540e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5AD78], al
        jne L_done
        or dword ptr [mem_00B5AD78], eax
        mov ecx, offset mem_00B5AD74
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5AD74], 0x98d144
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5AD74
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00685BA0] sub_00685BA0 (30 bytes)
extern "C" void ext_006850E0();

extern "C" __declspec(naked) void __fastcall fn_00685BA0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_006850E0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x00685140] sub_00685140 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5AD80;
extern "C" int mem_00B5AD7C;

extern "C" __declspec(naked) void* __fastcall fn_00685140(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b542e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5AD80], al
        jne L_done
        or dword ptr [mem_00B5AD80], eax
        mov ecx, offset mem_00B5AD7C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5AD7C], 0x98d2f4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5AD7C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006851A0] sub_006851A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5AD88;
extern "C" int mem_00B5AD84;

extern "C" __declspec(naked) void* __fastcall fn_006851A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b544e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5AD88], al
        jne L_done
        or dword ptr [mem_00B5AD88], eax
        mov ecx, offset mem_00B5AD84
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5AD84], 0x98d4a4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5AD84
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00685BC0] sub_00685BC0 (30 bytes)
extern "C" void ext_00685140();

extern "C" __declspec(naked) void __fastcall fn_00685BC0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_00685140
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x00685BE0] sub_00685BE0 (30 bytes)
extern "C" void ext_006851A0();

extern "C" __declspec(naked) void __fastcall fn_00685BE0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_006851A0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x00685200] sub_00685200 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5AD90;
extern "C" int mem_00B5AD8C;

extern "C" __declspec(naked) void* __fastcall fn_00685200(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b546e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5AD90], al
        jne L_done
        or dword ptr [mem_00B5AD90], eax
        mov ecx, offset mem_00B5AD8C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5AD8C], 0x98d654
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5AD8C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00685C00] sub_00685C00 (30 bytes)
extern "C" void ext_00685200();

extern "C" __declspec(naked) void __fastcall fn_00685C00(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_00685200
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0068C280] sub_0068C280 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5ADC8;
extern "C" int mem_00B5ADC4;

extern "C" __declspec(naked) void* __fastcall fn_0068C280(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b5b8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5ADC8], al
        jne L_done
        or dword ptr [mem_00B5ADC8], eax
        mov ecx, offset mem_00B5ADC4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5ADC4], 0x98df1c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5ADC4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0068C2E0] sub_0068C2E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5ADD0;
extern "C" int mem_00B5ADCC;

extern "C" __declspec(naked) void* __fastcall fn_0068C2E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b5bae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5ADD0], al
        jne L_done
        or dword ptr [mem_00B5ADD0], eax
        mov ecx, offset mem_00B5ADCC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5ADCC], 0x98e0cc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5ADCC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0068C340] sub_0068C340 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5ADD8;
extern "C" int mem_00B5ADD4;

extern "C" __declspec(naked) void* __fastcall fn_0068C340(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b5bce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5ADD8], al
        jne L_done
        or dword ptr [mem_00B5ADD8], eax
        mov ecx, offset mem_00B5ADD4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5ADD4], 0x98e1a4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5ADD4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0068C3A0] sub_0068C3A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5ADE0;
extern "C" int mem_00B5ADDC;

extern "C" __declspec(naked) void* __fastcall fn_0068C3A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b5bee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5ADE0], al
        jne L_done
        or dword ptr [mem_00B5ADE0], eax
        mov ecx, offset mem_00B5ADDC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5ADDC], 0x98e27c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5ADDC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0068C400] sub_0068C400 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5ADE8;
extern "C" int mem_00B5ADE4;

extern "C" __declspec(naked) void* __fastcall fn_0068C400(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b5c0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5ADE8], al
        jne L_done
        or dword ptr [mem_00B5ADE8], eax
        mov ecx, offset mem_00B5ADE4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5ADE4], 0x98e354
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5ADE4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

extern "C" void ext_0065C660();
extern "C" void ext_0065F440();

// [0x0068BB60] sub_0068BB60 (88 bytes)
extern "C" __declspec(naked) void __fastcall fn_0068BB60(void* self) {
    __asm {
        push -0x1
        push 0x891e68
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x98dd14
        mov dword ptr [ecx], 0x98dce4
        mov dword ptr [esp + 0x10], 0x0
        call ext_0065C660
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00687920] sub_00687920 (89 bytes)
extern "C" void ext_006873D0();

extern "C" __declspec(naked) int __cdecl fn_00687920(int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_006873D0
        sub esi, ebx
        mov eax, 0x2e8ba2e9
        imul esi
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov ecx, eax
        imul ecx, ecx, 0x2c
        add esp, 0x18
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x006886D0] sub_006886D0 (43 bytes)
extern "C" void ext_00687920();

extern "C" __declspec(naked) void __fastcall fn_006886D0(void* self) {
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
        call ext_00687920
        add esp, 0x1c
        ret
    }
}

// [0x00687760] sub_00687760 (77 bytes)
extern "C" void ext_004275E0();
extern "C" int mem_00B53A34;
extern "C" int mem_00B53B30;
extern "C" int mem_00B53AB0;
extern "C" int mem_00B53A70;
extern "C" int mem_00B53AF0;
extern "C" void __fastcall fn_00687760(void* self, int edx_unused, int a1, int a2, int a3) {
    typedef void (__cdecl *Fn)(int, int);
    ((Fn)ext_004275E0)(a1, a2);
    if (a2 == (int)&mem_00B53A34 || a2 == (int)&mem_00B53B30 || a2 == (int)&mem_00B53AB0 ||
        a2 == (int)&mem_00B53A70 || a2 == (int)&mem_00B53AF0) {
        return;
    }
    *(int*)((char*)self + 0x150) |= a3;
}

// [0x00688670] sub_00688670 (93 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00688670(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x140]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_loop
        call ebp
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_loop:
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
        je L_null
        cmp edi, dword ptr [esi + 0x8]
        jb L_chk4
        call ebp
    L_chk4:
        mov eax, dword ptr [edi]
        cmp dword ptr [eax + 0x48], 0x13
        je L_found
        cmp edi, dword ptr [esi + 0x8]
        jb L_chk5
        call ebp
    L_chk5:
        add edi, 0x24
        jmp L_loop
    L_found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_null:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x00687980] sub_00687980 (93 bytes)
extern "C" void ext_00687420();

extern "C" __declspec(naked) int __cdecl fn_00687980(int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_00687420
        sub esi, ebx
        mov eax, 0x38e38e39
        imul esi
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 8*eax]
        add eax, eax
        add eax, eax
        add esp, 0x18
        mov ecx, eax
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00688700] sub_00688700 (43 bytes)
extern "C" void ext_00687980();

extern "C" __declspec(naked) void __fastcall fn_00688700(void* self) {
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
        call ext_00687980
        add esp, 0x1c
        ret
    }
}

// [0x006807A0] sub_006807A0 (94 bytes)
extern "C" void ext_00401C60();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_006807A0(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x877bf8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_00401C60
        lea eax, [edi + 0x28]
        push eax
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esi], 0x98cc20
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [edi + 0x44]
        mov dword ptr [esi + 0x44], ecx
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00687E20] sub_00687E20 (43 bytes)
extern "C" void ext_0062BA00();

extern "C" __declspec(naked) void __fastcall fn_00687E20(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0xc]
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
        call ext_0062BA00
        add esp, 0x1c
        ret
    }
}

// [0x0068C530] sub_0068C530 (94 bytes)
extern "C" void ext_00661980();
extern "C" void ext_00695440();

extern "C" __declspec(naked) void* __fastcall fn_0068C530(void* self) {
    __asm {
        push -1
        push 0x0088B143
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00661980
        xor eax, eax
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x4], 0x00928EFC
        lea ecx, [esi + 0x10]
        mov byte ptr [esp + 0x10], 0x1
        mov dword ptr [esi], 0x0098DD14
        mov dword ptr [esi + 0x4], 0x0098DCE4
        mov dword ptr [esi + 0x8], eax
        call ext_00695440
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006895A0] sub_006895A0 (64 bytes)
extern "C" void ext_0041DD40();
extern "C" __declspec(naked) void __fastcall fn_006895A0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x24]
        test eax, eax
        push esi
        lea esi, [ecx + 0x20]
        je L_clear_006895A0
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_0041DD40
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_006895A0:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x00685260] sub_00685260 (96 bytes)
// lower_bound over 148-byte records keyed by an unsigned dword at offset 0.
extern "C" char* __cdecl fn_00685260(char* first, char* last, const int* value) {
    char* cur = first;
    int count = (int)(last - first) / 148;
    if (count > 0) {
        int key = *value;
        do {
            int half = count / 2;
            char* mid = cur + half * 148;
            if (*(int*)mid < key) {
                cur = mid + 148;
                count = count - half - 1;
            } else {
                count = half;
            }
        } while (count > 0);
    }
    return cur;
}

// [0x006877B0] sub_006877B0 (99 bytes)
extern "C" void ext_00427640();
extern "C" __declspec(naked) void __fastcall fn_006877B0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        lea eax, [esp + 0x14]
        push eax
        push ebx
        mov edi, ecx
        mov dword ptr [esp + 0x1c], esi
        call ext_00427640
        add esp, 0x8
        cmp esi, 0xb53a34
        je L_match
        cmp esi, 0xb53b30
        je L_match
        cmp esi, 0xb53ab0
        je L_match
        cmp esi, 0xb53a70
        je L_match
        cmp esi, 0xb53af0
        je L_match
        mov ecx, dword ptr [esp + 0x18]
        or dword ptr [edi + 0x150], ecx
        pop edi
        pop esi
        pop ebx
        ret 0x10
    L_match:
        mov dl, byte ptr [esp + 0x1c]
        pop edi
        pop esi
        mov byte ptr [ebx], dl
        pop ebx
        ret 0x10
    }
}

// [0x006823B0] sub_006823B0 (104 bytes)
extern "C" int mem_00B5ACB4;
extern "C" int mem_00B5ACB8;
extern "C" int mem_00B5ACBC;
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_006823B0(void* self) {
    __asm {
        mov edx, dword ptr [mem_00B5ACB8]
        sub esp, 0x8
        test edx, edx
        je empty_006823B0
        mov eax, dword ptr [mem_00B5ACBC]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 0x2
        je empty_006823B0
        cmp edx, eax
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, eax
        jbe chk_006823B0
        call ebx
        mov eax, dword ptr [mem_00B5ACBC]
        mov edx, dword ptr [mem_00B5ACB8]
chk_006823B0:
        mov ecx, offset mem_00B5ACB4
        push edi
        mov edi, ecx
        lea ecx, [esi - 0x4]
        cmp ecx, eax
        mov dword ptr [esp + 0x10], esi
        ja bad1_006823B0
        cmp ecx, edx
        jae ok1_006823B0
bad1_006823B0:
        call ebx
ok1_006823B0:
        add esi, -0x4
        cmp esi, dword ptr [edi + 0x8]
        pop edi
        jb ok2_006823B0
        call ebx
ok2_006823B0:
        mov eax, dword ptr [esi]
        pop esi
        pop ebx
        add esp, 0x8
        ret
empty_006823B0:
        xor eax, eax
        add esp, 0x8
        ret
    }
}
