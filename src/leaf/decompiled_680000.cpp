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

// [0x00688C50] sub_00688C50 (107 bytes)
extern "C" void ext_00687E50();
extern "C" void ext_00687EB0();
extern "C" int mem_00925134;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00688C50(void* self, int edx_unused) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, ecx
        je L_invalid
        cmp esi, dword ptr [esp + 0x18]
        je L_cont
    L_invalid:
        call dword ptr [mem_00925134]
    L_cont:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, eax
        je L_store
        push ebx
        push edi
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push eax
        call ext_00687E50
        mov edi, dword ptr [ebp + 8]
        mov ebx, eax
        add esp, 0xc
        cmp ebx, edi
        mov esi, ebx
        je L_done
        nop
    L_loop:
        lea ecx, [esi + 0x10]
        call dword ptr [mem_00924FF4]
        add esi, 0x2c
        cmp esi, edi
        jne L_loop
    L_done:
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [ebp + 8], ebx
        pop ebx
    L_store:
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 4], ecx
        pop ebp
        ret 0x14
    }
}

// [0x00688CC0] sub_00688CC0 (107 bytes)
extern "C" __declspec(naked) void __fastcall fn_00688CC0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, ecx
        je L_invalid
        cmp esi, dword ptr [esp + 0x18]
        je L_cont
    L_invalid:
        call dword ptr [mem_00925134]
    L_cont:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, eax
        je L_store
        push ebx
        push edi
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push eax
        call ext_00687EB0
        mov edi, dword ptr [ebp + 8]
        mov ebx, eax
        add esp, 0xc
        cmp ebx, edi
        mov esi, ebx
        je L_done
        nop
    L_loop:
        lea ecx, [esi + 8]
        call dword ptr [mem_00924FF4]
        add esi, 0x24
        cmp esi, edi
        jne L_loop
    L_done:
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [ebp + 8], ebx
        pop ebx
    L_store:
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 4], ecx
        pop ebp
        ret 0x14
    }
}

// [0x00688EE0] sub_00688EE0 (59 bytes)
extern "C" void ext_00688C50();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00688EE0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m688ee0_ok1
        call ebp
    m688ee0_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m688ee0_ok2
        call ebp
    m688ee0_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00688C50
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00688F20] sub_00688F20 (59 bytes)
extern "C" void ext_00688CC0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00688F20(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m688f20_ok1
        call ebp
    m688f20_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m688f20_ok2
        call ebp
    m688f20_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00688CC0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00685890] sub_00685890 (109 bytes)
extern "C" void ext_0041CF50();
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void* __fastcall fn_00685890(void* self, int edx_unused, const void* src) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        lea eax, [edi + 0xc]
        push eax
        lea ecx, [esi + 0xc]
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [edi + 0x28]
        lea edx, [edi + 0x2c]
        mov dword ptr [esi + 0x28], ecx
        push edx
        lea ecx, [esi + 0x2c]
        call dword ptr [mem_00924FDC]
        lea eax, [edi + 0x48]
        push eax
        lea ecx, [esi + 0x48]
        call ext_0041CF50
        lea ecx, [edi + 0x50]
        push ecx
        lea ecx, [esi + 0x50]
        call dword ptr [mem_00924FDC]
        lea edx, [edi + 0x6c]
        push edx
        lea ecx, [esi + 0x6c]
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [edi + 0x88]
        mov dword ptr [esi + 0x88], eax
        mov ecx, dword ptr [edi + 0x8c]
        pop edi
        mov dword ptr [esi + 0x8c], ecx
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x00686180] sub_00686180 (51 bytes)
extern "C" void ext_00685890();
extern "C" __declspec(naked) void __cdecl fn_00686180(void* first, void* last, const void* src) {
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
        lea ebx, [edi + 0x4]
    body:
        mov eax, dword ptr [edi]
        push ebx
        lea ecx, [esi + 0x4]
        mov dword ptr [esi], eax
        call ext_00685890
        add esi, 0x94
        cmp esi, ebp
        jne body
        pop edi
        pop ebx
    done:
        pop esi
        pop ebp
        ret
    }
}

// [0x00688E20] sub_00688E20 (109 bytes)
extern "C" void ext_0041DD40();
extern "C" void ext_0062BA00();

extern "C" __declspec(naked) void* __fastcall fn_00688E20(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        test ebp, ebp
        push esi
        mov esi, ecx
        je fail
        cmp ebp, dword ptr [esp + 1Ch]
        je ok
    fail:
        call dword ptr [mem_00925134]
    ok:
        mov ebx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 20h]
        cmp ebx, ecx
        je done
        mov eax, dword ptr [esi + 8]
        push edi
        mov byte ptr [esp + 18h], 0
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 1Ch]
        push edx
        push ebx
        push eax
        push ecx
        call ext_0062BA00
        mov ecx, dword ptr [esi + 8]
        mov edi, eax
        mov eax, dword ptr [esp + 2Ch]
        push eax
        push esi
        push ecx
        push edi
        call ext_0041DD40
        add esp, 28h
        mov dword ptr [esi + 8], edi
        pop edi
    done:
        mov eax, dword ptr [esp + 10h]
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        ret 14h
    }
}

// [0x00688E90] sub_00688E90 (59 bytes)
extern "C" void ext_00688E20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00688E90(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m688e90_ok1
        call ebp
    m688e90_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m688e90_ok2
        call ebp
    m688e90_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00688E20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00687820] sub_00687820 (111 bytes)
extern "C" int mem_00924FC4;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_00687820(void* first, void* last) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp esi, ebx
        push edi
        mov edi, esi
        je L_ret_last
        mov ebp, dword ptr [mem_00924FC4]
    L_top:
        add esi, 0x38
        cmp esi, ebx
        je L_ret_last
        push esi
        push edi
        call ebp
        add esp, 8
        test al, al
        jne L_p2
        mov edi, esi
        jmp L_top
    L_p2:
        add esi, 0x38
        cmp esi, ebx
        je L_ret_dest
    L_p2loop:
        push esi
        push edi
        call ebp
        add esp, 8
        test al, al
        jne L_skip
        add edi, 0x38
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x1c]
        push eax
        lea ecx, [edi + 0x1c]
        call dword ptr [mem_00924FDC]
    L_skip:
        add esi, 0x38
        cmp esi, ebx
        jne L_p2loop
    L_ret_dest:
        lea eax, [edi + 0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_ret_last:
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x00681DD0] sub_00681DD0 (125 bytes)
extern "C" void ext_004989F0();
extern "C" void ext_00681C50();
extern "C" int mem_00B599BC;

extern "C" __declspec(naked) void* __cdecl fn_00681DD0(void* out, int a2, char flag) {
    __asm {
        push -1
        push 0x887089
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        xor eax, eax
        mov dword ptr [esp], eax
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0x4], ecx
        cmp byte ptr [esp + 0x20], al
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x4], 0x1
        je L_flag_zero
        call ext_00681C50
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi], edx
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    L_flag_zero:
        call ext_004989F0
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x4], eax
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [esi], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00681E50] sub_00681E50 (119 bytes)
extern "C" void ext_00681DD0();
extern "C" void ext_00681CB0();
extern "C" void ext_00681CE0();
extern "C" void ext_00681D10();
extern "C" void ext_00681D40();
extern "C" void ext_00681D70();
extern "C" void ext_00681DA0();
extern "C" __declspec(naked) void* __fastcall fn_00681E50(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x6
        ja L_default
        jmp dword ptr [eax * 4 + 0x681E84]
    L_case0:
        jmp ext_00681CB0
    L_case1:
        jmp ext_00681CE0
    L_case2:
        jmp ext_00681D10
    L_case3:
        jmp ext_00681D40
    L_case4:
        jmp ext_00681D70
    L_case6:
        jmp ext_00681DA0
    L_default:
        xor eax, eax
        ret
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x60
        _emit 0x1e
        _emit 0x68
        _emit 0x00
        _emit 0x65
        _emit 0x1e
        _emit 0x68
        _emit 0x00
        _emit 0x6a
        _emit 0x1e
        _emit 0x68
        _emit 0x00
        _emit 0x6f
        _emit 0x1e
        _emit 0x68
        _emit 0x00
        _emit 0x74
        _emit 0x1e
        _emit 0x68
        _emit 0x00
        _emit 0x7e
        _emit 0x1e
        _emit 0x68
        _emit 0x00
        _emit 0x79
        _emit 0x1e
        _emit 0x68
        _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x1
        push ecx
        push esi
        mov dword ptr [esp + 0x10], 0x0
        call ext_00681DD0
        add esp, 0xc
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00688570] sub_00688570 (127 bytes)
// __thiscall (ret 4): scans the 0x2c-stride vector at self+0x134..0x138 for the first element whose
// node (at element[0]+0x10, a basic_string) compares equal to the argument via the imported
// basic_string operator== (mem_00924FC4). Returns that element's first dword, or NULL.
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void* __fastcall fn_00688570(void* self, int edx_unused, const void* name) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x134]
        cmp esi, dword ptr [ecx + 0x138]
        push edi
        lea edi, [ecx + 0x130]
        jbe L_688570_ok1
        call dword ptr [mem_00925134]
L_688570_ok1:
        mov ebp, dword ptr [esp + 0x14]
L_688570_top:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_688570_ok2
        call dword ptr [mem_00925134]
L_688570_ok2:
        cmp edi, edi
        je L_688570_ok3
        call dword ptr [mem_00925134]
L_688570_ok3:
        cmp esi, ebx
        je L_688570_notfound
        cmp esi, dword ptr [edi + 0x8]
        jb L_688570_ok4
        call dword ptr [mem_00925134]
L_688570_ok4:
        mov eax, dword ptr [esi]
        add eax, 0x10
        push ebp
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        jne L_688570_found
        cmp esi, dword ptr [edi + 0x8]
        jb L_688570_ok5
        call dword ptr [mem_00925134]
L_688570_ok5:
        add esi, 0x2c
        jmp L_688570_top
L_688570_found:
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
L_688570_notfound:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
    }
}

// [0x006885F0] sub_006885F0 (127 bytes)
// __thiscall (ret 4): scans the 0x24-stride vector at self+0x140..0x148 for the first element whose
// node (at element[0]+0x10, a basic_string) compares equal to the argument via the imported
// basic_string operator== (mem_00924FC4). Returns that element's first dword, or NULL.
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void* __fastcall fn_006885F0(void* self, int edx_unused, const void* name) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x144]
        cmp esi, dword ptr [ecx + 0x148]
        push edi
        lea edi, [ecx + 0x140]
        jbe L_6885F0_ok1
        call dword ptr [mem_00925134]
L_6885F0_ok1:
        mov ebp, dword ptr [esp + 0x14]
L_6885F0_top:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_6885F0_ok2
        call dword ptr [mem_00925134]
L_6885F0_ok2:
        cmp edi, edi
        je L_6885F0_ok3
        call dword ptr [mem_00925134]
L_6885F0_ok3:
        cmp esi, ebx
        je L_6885F0_notfound
        cmp esi, dword ptr [edi + 0x8]
        jb L_6885F0_ok4
        call dword ptr [mem_00925134]
L_6885F0_ok4:
        mov eax, dword ptr [esi]
        add eax, 0x10
        push ebp
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        jne L_6885F0_found
        cmp esi, dword ptr [edi + 0x8]
        jb L_6885F0_ok5
        call dword ptr [mem_00925134]
L_6885F0_ok5:
        add esi, 0x24
        jmp L_6885F0_top
L_6885F0_found:
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
L_6885F0_notfound:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
    }
}

// [0x00681820] sub_00681820 (130 bytes)
extern "C" void ext_0065C5F0();
extern "C" void ext_006799F0();
extern "C" int mem_00924FE8;
extern "C" int mem_008B50A4;
extern "C" __declspec(naked) void __fastcall fn_00681820(void* self) {
    __asm {
        push -1
        push offset mem_008B50A4
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 0Ch], ebx
        mov dword ptr [esp + 14h], ebx
        mov dword ptr [esi + 14h], ebx
        mov dword ptr [esi + 18h], ebx
        mov dword ptr [esi + 1Ch], ebx
        mov dword ptr [esi + 24h], ebx
        mov dword ptr [esi + 28h], ebx
        mov dword ptr [esi + 2Ch], ebx
        lea ecx, [esi + 30h]
        mov byte ptr [esp + 14h], 2
        call ext_0065C5F0
        lea ecx, [esi + 34h]
        mov byte ptr [esp + 14h], 3
        call ext_006799F0
        lea ecx, [esi + 44h]
        mov byte ptr [esp + 14h], 4
        call dword ptr [mem_00924FE8]
        fldz
        mov ecx, dword ptr [esp + 0Ch]
        fstp dword ptr [esi + 40h]
        mov byte ptr [esi + 38h], bl
        mov eax, esi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x00681AA0] sub_00681AA0 (90 bytes)
extern "C" void ext_00681820();
extern "C" void ext_006A6C87();
extern "C" int mem_00B5A220;

extern "C" __declspec(naked) void __fastcall fn_00681AA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b50be
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5A220], al
        jne done
        or dword ptr [mem_00B5A220], eax
        mov ecx, 0xb5a1c0
        mov dword ptr [esp + 0x8], 0x0
        call ext_00681820
        push 0x921d70
        call ext_006A6C87
        add esp, 0x4
    done:
        mov ecx, dword ptr [esp]
        mov eax, 0xb5a1c0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00687150] sub_00687150 (143 bytes)
extern "C" void ext_0059F5C0();
extern "C" int mem_00924FE0;
extern "C" int mem_00B5ADB0;
extern "C" __declspec(naked) void* __fastcall fn_00687150(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        __asm _emit 0x68 __asm _emit 0xC4 __asm _emit 0x56 __asm _emit 0x8B __asm _emit 0x00 // push 0x008b56c4 (SEH handler)
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov eax, dword ptr [esp + 0x20]
        xor ebp, ebp
        push eax
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0xC7 __asm _emit 0x06 __asm _emit 0x34 __asm _emit 0xD8 __asm _emit 0x98 __asm _emit 0x00 // mov dword ptr [esi], 0x0098d834
        call dword ptr [mem_00924FE0]
        lea edi, [esi + 0x28]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0x1
        call ext_0059F5C0
        mov dword ptr [edi + 0x4], eax
        mov byte ptr [eax + 0x2d], 0x1
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [edi + 0x8], ebp
        mov dword ptr [esi + 0x34], ebp
        mov ecx, dword ptr [mem_00B5ADB0]
        mov dword ptr [esi + 0x4], ecx
        add dword ptr [mem_00B5ADB0], 0x1
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x24], ebp
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00682D80] sub_00682D80 (49 bytes)
extern "C" void ext_00661DE0();
extern "C" void ext_0041CF50();
extern "C" __declspec(naked) void __fastcall fn_00682D80(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x8c], 0x0
        je done
        mov eax, dword ptr [esi + 0x88]
        cmp eax, -0x1
        je done
        mov ecx, dword ptr [esp + 0x8]
        push eax
        call ext_00661DE0
        mov ecx, dword ptr [esi + 0x8c]
        push eax
        call ext_0041CF50
done:
        pop esi
        ret 0x4
    }
}

// [0x00687470] sub_00687470 (155 bytes)
extern "C" void ext_006981A0();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00687470(void* self) {
    __asm {
        push -1
        push 0x8b56e1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x50]
        push edi
        push esi
        lea ecx, [esp + 0x10]
        call ext_006981A0
        mov edi, dword ptr [esp + 0x58]
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x50], 0
        call dword ptr [mem_00924FDC]
        lea ebx, [edi + 0x1c]
        push ebx
        lea ecx, [esi + 0x1c]
        call dword ptr [mem_00924FDC]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, ebx
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x4c], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x4c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x44]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret
    }
}

// [0x006879E0] sub_006879E0 (90 bytes)
extern "C" int mem_00924EF4;
extern "C" void ext_00687470();

extern "C" __declspec(naked) void __cdecl fn_006879E0(void* a, void* b, void* c) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00924EF4]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        push esi
        call ebx
        add esp, 8
        test al, al
        je short L_skip1
        push edi
        push esi
        call ext_00687470
        add esp, 8
    L_skip1:
        mov ebp, dword ptr [esp + 0x1c]
        push esi
        push ebp
        call ebx
        add esp, 8
        test al, al
        je short L_skip2
        push esi
        push ebp
        call ext_00687470
        add esp, 8
    L_skip2:
        push edi
        push esi
        call ebx
        add esp, 8
        test al, al
        je short L_skip3
        push edi
        push esi
        call ext_00687470
        add esp, 8
    L_skip3:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00687FC0] sub_00687FC0 (158 bytes)
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

// try { for (p = first; p != last; ++p, ++dest) { if (dest) { dest->i = p->i; dest->c = p->c; ctor(&dest->s, &p->s); } } }
// catch (...) { destroy [begin, dest) strings; throw; }
// return dest;
// Naked: EH frame written out by hand (see fn_004062C0 for the same pattern).
extern "C" __declspec(naked) void* __cdecl fn_00687FC0(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x008b5791
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, dword ptr [ebp + 0xc]
        je exit_path
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        mov eax, dword ptr [edi]
        mov dword ptr [esi], eax
        mov cl, byte ptr [edi + 0x4]
        lea edx, [edi + 0x8]
        mov byte ptr [esi + 0x4], cl
        push edx
        lea ecx, [esi + 0x8]
        call dword ptr [mem_00924FE0]
    skip_ctor:
        add esi, 0x24
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x24
        jmp loop_top
    handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je handler_rethrow
    destroy_loop:
        lea ecx, [esi + 0x8]
        call dword ptr [mem_00924FF4]
        add esi, 0x24
        cmp esi, edi
        jne destroy_loop
    handler_rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_path:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00688D30] sub_00688D30 (41 bytes)
extern "C" void ext_00687FC0();

extern "C" __declspec(naked) void __fastcall fn_00688D30(void* self) {
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
        call ext_00687FC0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x006887E0] sub_006887E0 (158 bytes)
// try { for (n = count; n; --n) { if (p) ctor(p, a); p += 0x24; } }
// catch (...) { destroy [begin, p); throw; }
// Naked: MSVC /EHsc treats extern "C" callees as nothrow, which drops the try block,
// so the SEH frame is written out by hand.
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_006887E0(void* begin, unsigned int count, const void* a) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x008b5851
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [ebp + 0xc]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, ebx
        jbe epilogue
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [eax]
        mov dword ptr [esi], ecx
        mov dl, byte ptr [eax + 0x4]
        add eax, 0x8
        push eax
        lea ecx, [esi + 0x8]
        mov byte ptr [esi + 0x4], dl
        call dword ptr [mem_00924FE0]
    skip_ctor:
        sub edi, 0x1
        add esi, 0x24
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
    catch_funclet:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je throw_now
    dtor_loop:
        lea ecx, [esi + 0x8]
        call dword ptr [mem_00924FF4]
        add esi, 0x24
        cmp esi, edi
        jne dtor_loop
    throw_now:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    epilogue:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00688C10] sub_00688C10 (54 bytes)
extern "C" void ext_006887E0();

extern "C" __declspec(naked) void* __fastcall fn_00688C10(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_006887E0
        lea ecx, [esi + 8*esi]
        add esp, 0x18
        lea eax, [edi + 4*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00688060] sub_00688060 (169 bytes)
extern "C" void ext_006879E0();

extern "C" void __cdecl fn_00688060(int a, int b, int c) {
    typedef void (__cdecl *Leaf3)(int, int, int);
    int q = (c - a) / 56;
    if (q > 40) {
        int m = (q + 1) / 8;
        int B2 = m * 112;
        int B = m * 56;
        ((Leaf3)ext_006879E0)(a, a + B, a + B2);
        a += B;
        ((Leaf3)ext_006879E0)(b - B, b, b + B);
        ((Leaf3)ext_006879E0)(c - B2, c - B, c);
        c -= B;
        ((Leaf3)ext_006879E0)(a, b, c);
    } else {
        ((Leaf3)ext_006879E0)(a, b, c);
    }
}

// [0x006824E0] sub_006824E0 (170 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" void ext_006821D0();
extern "C" void ext_006823B0();
extern "C" void ext_006824C0();
extern "C" int mem_00AA23C4;
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __fastcall fn_006824E0(void* self) {
    __asm {
        sub esp, 0x8
        push esi
        push edi
        call ext_006823B0
        mov edi, dword ptr [esp + 0x14]
        mov esi, eax
        test esi, esi
        je fail
        mov eax, dword ptr [mem_00AA23C4]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        cmp eax, 0xB53A34
        je fail
        cmp eax, 0xB53B30
        je fail
        cmp eax, 0xB53AB0
        je fail
        cmp eax, 0xB53A70
        je fail
        cmp eax, 0xB53AF0
        je fail
        lea ecx, [esp + 0x8]
        push ecx
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x10], eax
        call ext_0053F5F0
        mov eax, dword ptr [esp + 0x14]
        add esp, 0x8
        push eax
        mov ecx, esi
        call ext_006821D0
        mov ecx, dword ptr [esp + 0x18]
        push eax
        call dword ptr [mem_00924FDC]
        pop edi
        pop esi
        add esp, 0x8
        ret
fail:
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        mov edi, dword ptr [esp + 0x18]
        push eax
        push edi
        call ext_004275E0
        add esp, 0x8
        test esi, esi
        je done
        cmp byte ptr [esp + 0x1c], 0x0
        je done
        push edi
        mov ecx, esi
        call ext_006824C0
done:
        pop edi
        pop esi
        add esp, 0x8
        ret
    }
}

// [0x00687F10] sub_00687F10 (172 bytes)
// try { for (p = first; p != last; ++p, ++dest) { if (dest) { dest->i0..i3 = p->i0..i3; ctor(&dest->s, &p->s); } } }
// catch (...) { destroy [begin, dest) strings; throw; }
// return dest;
// Naked: EH frame written out by hand (same pattern as fn_00687FC0; 0x2c stride, string at +0x10).
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __cdecl fn_00687F10(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x008b5771
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, dword ptr [ebp + 0xc]
        je exit_path
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        mov eax, dword ptr [edi]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [edi + 0x8]
        lea ecx, [edi + 0x10]
        mov dword ptr [esi + 0x8], edx
        mov eax, dword ptr [edi + 0xc]
        push ecx
        lea ecx, [esi + 0x10]
        mov dword ptr [esi + 0xc], eax
        call dword ptr [mem_00924FE0]
    skip_ctor:
        add esi, 0x2c
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x2c
        jmp loop_top
    handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je handler_rethrow
        mov edi, edi
    destroy_loop:
        lea ecx, [esi + 0x10]
        call dword ptr [mem_00924FF4]
        add esi, 0x2c
        cmp esi, edi
        jne destroy_loop
    handler_rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_path:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00688730] sub_00688730 (172 bytes)
// Uninitialized fill of count 0x2c-byte elements from *src (each: 4 dwords + std::string at +0x10),
// with an EH frame whose catch path destroys the constructed prefix and rethrows.
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_00688730(void* dst, int count, const void* src) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8b5831
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [ebp + 0xc]
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [ebp + 0x10]
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], 0
loop_top:
        test ebx, ebx
        jbe short exit_label
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        test esi, esi
        mov byte ptr [ebp - 0x4], 1
        je short skip_label
        mov eax, dword ptr [edi]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [edi + 0x8]
        lea ecx, [edi + 0x10]
        mov dword ptr [esi + 0x8], edx
        mov eax, dword ptr [edi + 0xc]
        push ecx
        lea ecx, [esi + 0x10]
        mov dword ptr [esi + 0xc], eax
        call dword ptr [mem_00924FE0]
skip_label:
        sub ebx, 1
        add esi, 0x2c
        mov byte ptr [ebp - 0x4], 0
        mov dword ptr [ebp + 0x8], esi
        jmp short loop_top
handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je short hdone
hloop:
        lea ecx, [esi + 0x10]
        call dword ptr [mem_00924FF4]
        add esi, 0x2c
        cmp esi, edi
        jne short hloop
hdone:
        push 0
        push 0
        call ext_006A6DD2
exit_label:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00688AF0] sub_00688AF0 (41 bytes)
extern "C" void ext_00687F10();

extern "C" __declspec(naked) void __fastcall fn_00688AF0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
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
        call ext_00687F10
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00688BA0] sub_00688BA0 (55 bytes)
extern "C" void ext_00688730();

extern "C" __declspec(naked) int __fastcall fn_00688BA0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_00688730
        mov eax, esi
        imul eax, eax, 0x2c
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0068BC00] sub_0068BC00 (36 bytes)
extern "C" void ext_005111E0();

extern "C" __declspec(naked) int __fastcall fn_0068BC00(void* self, int edx_unused, unsigned int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jbe short loc_zero
        add eax, -1
        mov dword ptr [esp + 4], eax
        lea eax, [esp + 4]
        push eax
        add ecx, 10h
        call ext_005111E0
        ret 4
loc_zero:
        xor eax, eax
        ret 4
    }
}

// [0x0068BDC0] sub_0068BDC0 (39 bytes)
extern "C" void ext_00508680();
extern "C" int mem_0093BD38;
extern "C" int mem_0094FF78;

extern "C" __declspec(naked) void __fastcall fn_0068BDC0(void* self) {
    __asm {
        push ecx
        add ecx, 0x10
        call ext_00508680
        test eax, eax
        mov dword ptr [esp], eax
        fild dword ptr [esp]
        jge short L_0068BDD9
        fadd qword ptr [mem_0093BD38]
    L_0068BDD9:
        fmul qword ptr [mem_0094FF78]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        pop ecx
        ret
    }
}

// [0x0068BE70] sub_0068BE70 (39 bytes)
extern "C" void ext_00508680();
extern "C" int mem_0093BD38;
extern "C" int mem_0098E428;

extern "C" __declspec(naked) void __fastcall fn_0068BE70(void* self) {
    __asm {
        push ecx
        add ecx, 0x10
        call ext_00508680
        test eax, eax
        mov dword ptr [esp], eax
        fild dword ptr [esp]
        jge short L_0068BE89
        fadd qword ptr [mem_0093BD38]
    L_0068BE89:
        fmul qword ptr [mem_0098E428]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        pop ecx
        ret
    }
}

// [0x0068BED0] sub_0068BED0 (43 bytes)
extern "C" void ext_00508680();
extern "C" int mem_0093BD38;
extern "C" int mem_0098E430;

extern "C" __declspec(naked) void __fastcall fn_0068BED0(void* self) {
    __asm {
        push ecx
        add ecx, 0x10
        call ext_00508680
        test eax, eax
        mov dword ptr [esp], eax
        fild dword ptr [esp]
        jge short L_0068BEE9
        fadd qword ptr [mem_0093BD38]
    L_0068BEE9:
        fld qword ptr [mem_0098E430]
        fmul st(1), st
        faddp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        pop ecx
        ret
    }
}

// [0x0068BE40] sub_0068BE40 (47 bytes)
extern "C" void ext_00508680();
extern "C" int mem_0093BD38;
extern "C" int mem_0094FF78;
extern "C" __declspec(naked) float __fastcall fn_0068BE40(void* self, int edx_unused, float a1) {
    __asm {
        push ecx
        add ecx, 0x10
        call ext_00508680
        test eax, eax
        mov dword ptr [esp], eax
        fild dword ptr [esp]
        jge done
        fadd qword ptr [mem_0093BD38]
done:
        fmul qword ptr [mem_0094FF78]
        fmul dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        pop ecx
        ret 0x4
    }
}

// [0x0068BEA0] sub_0068BEA0 (47 bytes)
extern "C" void ext_00508680();
extern "C" int mem_0093BD38;
extern "C" int mem_0098E428;
extern "C" __declspec(naked) float __fastcall fn_0068BEA0(void* self, int edx_unused, float a1) {
    __asm {
        push ecx
        add ecx, 0x10
        call ext_00508680
        test eax, eax
        mov dword ptr [esp], eax
        fild dword ptr [esp]
        jge done
        fadd qword ptr [mem_0093BD38]
    done:
        fmul qword ptr [mem_0098E428]
        fmul dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        pop ecx
        ret 0x4
    }
}

// [0x0068BF00] sub_0068BF00 (51 bytes)
extern "C" void ext_00508680();
extern "C" int mem_0093BD38;
extern "C" int mem_0098E430;
extern "C" __declspec(naked) float __fastcall fn_0068BF00(void* self, int edx_unused, float a1) {
    __asm {
        push ecx
        add ecx, 0x10
        call ext_00508680
        test eax, eax
        mov dword ptr [esp], eax
        fild dword ptr [esp]
        jge short skip_0068BF00
        fadd qword ptr [mem_0093BD38]
skip_0068BF00:
        fld qword ptr [mem_0098E430]
        fmul st(1), st
        faddp st(1), st
        fmul dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        pop ecx
        ret 0x4
    }
}

// [0x0068BDF0] sub_0068BDF0 (73 bytes)
// thiscall with self in ecx (ecx+0x10 passed to ext_00508680), two float stack args, ret 8.
extern "C" void ext_00508680();
extern "C" int mem_0093BD38;
extern "C" int mem_0094FF78;

extern "C" __declspec(naked) void __fastcall fn_0068BDF0(void* self, int edx_unused, float a1, float a2) {
    __asm {
        sub esp, 0x8
        fld dword ptr [esp + 0xc]
        add ecx, 0x10
        fstp qword ptr [esp]
        call ext_00508680
        test eax, eax
        mov dword ptr [esp + 0xc], eax
        fild dword ptr [esp + 0xc]
        jge L_0068BE14
        fadd qword ptr [mem_0093BD38]
    L_0068BE14:
        fmul qword ptr [mem_0094FF78]
        fld dword ptr [esp + 0x10]
        fld qword ptr [esp]
        fsub st(1), st
        fxch st(1)
        fabs
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        add esp, 0x8
        ret 0x8
    }
}

// [0x00682150] sub_00682150 (126 bytes)
extern "C" void ext_00695440();
extern "C" void ext_005111E0();
extern "C" int mem_00B5AC90;
extern "C" int mem_00B5A2B8;

extern "C" __declspec(naked) int __cdecl fn_00682150(unsigned int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x008B513E
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B5AC90], al
        jne short L_init_done_00682150
        or dword ptr [mem_00B5AC90], eax
        mov ecx, offset mem_00B5A2B8
        mov dword ptr [esp + 0x8], 0x0
        call ext_00695440
        mov dword ptr [esp + 0x8], 0xffffffff
    L_init_done_00682150:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        jbe short L_zero_00682150
        add eax, -1
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        push eax
        mov ecx, offset mem_00B5A2B8
        call ext_005111E0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret
    L_zero_00682150:
        mov ecx, dword ptr [esp]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006818B0] sub_006818B0 (181 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_0046FAC0();
extern "C" void ext_0065C620();
extern "C" __declspec(naked) void __fastcall fn_006818B0(void* self) {
    __asm {
        push -1
        push offset mem_008B50A4
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x0c], esi
        lea ecx, [esi + 0x44]
        mov dword ptr [esp + 0x18], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x34]
        mov byte ptr [esp + 0x18], 0x3
        call ext_0046FAC0
        lea ecx, [esi + 0x30]
        mov byte ptr [esp + 0x18], 0x2
        call ext_0065C620
        mov eax, dword ptr [esi + 0x24]
        xor ebx, ebx
        cmp eax, ebx
        je short L_0068190C
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_0068190C:
        lea edi, [esi + 0x10]
        mov dword ptr [esi + 0x24], ebx
        mov dword ptr [esi + 0x28], ebx
        mov dword ptr [esi + 0x2c], ebx
        mov eax, dword ptr [edi + 0x4]
        cmp eax, ebx
        je short L_0068193B
        mov edx, dword ptr [esp + 0x0c]
        mov ecx, dword ptr [edi + 0x8]
        push edx
        push edi
        push ecx
        push eax
        call ext_006812A0
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_0068193B:
        mov ecx, esi
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov dword ptr [edi + 0x0c], ebx
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_004026E0
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00686030] sub_00686030 (190 bytes)
extern "C" void ext_00685260();
extern "C" __declspec(naked) void __fastcall fn_00686030(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        push edi
        mov byte ptr [esp + 10h], 0
        jbe L_0068604C
        call dword ptr [mem_00925134]
    L_0068604C:
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_0068605A
        call dword ptr [mem_00925134]
    L_0068605A:
        mov eax, dword ptr [esp + 10h]
        mov ebp, dword ptr [esp + 24h]
        push 0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 2ch], edi
        call ext_00685260
        mov edi, dword ptr [esi + 8]
        add esp, 14h
        cmp dword ptr [esi + 4], edi
        mov ebx, eax
        jbe L_00686084
        call dword ptr [mem_00925134]
    L_00686084:
        test esi, esi
        je L_0068608C
        cmp esi, esi
        je L_00686092
    L_0068608C:
        call dword ptr [mem_00925134]
    L_00686092:
        cmp ebx, edi
        je L_006860C5
        test esi, esi
        jne L_006860A0
        call dword ptr [mem_00925134]
    L_006860A0:
        cmp ebx, dword ptr [esi + 8]
        jb L_006860AB
        call dword ptr [mem_00925134]
    L_006860AB:
        mov ecx, dword ptr [ebp]
        cmp ecx, dword ptr [ebx]
        jl L_006860C5
        mov eax, dword ptr [esp + 20h]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        add esp, 0ch
        ret 8
    L_006860C5:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov edi, dword ptr [esp + 20h]
        mov dword ptr [edi], 0
        jbe L_006860DD
        call dword ptr [mem_00925134]
    L_006860DD:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ret 8
    }
}

// [0x00682FD0] sub_00682FD0 (192 bytes)
extern "C" void ext_0065C660();
extern "C" void ext_0065F440();
extern "C" void ext_006829A0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00682FD0(void* self) {
    __asm {
        push -1
        push 0x8b528a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 8]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x93fd44
        mov dword ptr [esi + 4], 0x93fd3c
        mov dword ptr [edi], 0x93fd10
        mov dword ptr [esp + 0x18], 6
        call ext_006829A0
        lea ecx, [esi + 0x6c]
        mov byte ptr [esp + 0x18], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x50]
        mov byte ptr [esp + 0x18], 4
        call dword ptr [mem_00924FF4]
        cmp dword ptr [esi + 0x4c], 0
        lea eax, [esi + 0x48]
        mov byte ptr [esp + 0x18], 3
        je short L_00683048
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
    L_00683048:
        lea ecx, [esi + 0x2c]
        mov byte ptr [esp + 0x18], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0xc]
        mov byte ptr [esp + 0x18], 1
        call dword ptr [mem_00924FF4]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0
        call ext_0065C660
        mov ecx, esi
        mov dword ptr [esp + 0x18], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00686710] sub_00686710 (39 bytes)
extern "C" void ext_00682FD0();

extern "C" __declspec(naked) void __stdcall fn_00686710(void* begin, void* end) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done
        mov edi, edi
    loop_:
        lea ecx, [esi + 4]
        call ext_00682FD0
        add esi, 0x94
        cmp esi, edi
        jne loop_
    done:
        pop edi
        pop esi
        ret 8
    }
}
