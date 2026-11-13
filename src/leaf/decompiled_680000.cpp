// Decompiled translation unit: src/leaf/decompiled_680000.cpp

#include <string>

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

// [0x006867B0] sub_006867B0 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006867B0(void* self) {
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
        lea ecx, [esi + 4]
        call ext_00682FD0
        add esi, 0x94
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

// [0x00686630] sub_00686630 (102 bytes)
extern "C" void ext_00686030();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00686630(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, esi
        call ext_00686030
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_0068665A
        call ebp
    L_0068665A:
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        je L_00686666
        cmp edi, esi
        je L_00686668
    L_00686666:
        call ebp
    L_00686668:
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebx
        je L_0068668A
        test edi, edi
        jne L_00686676
        call ebp
    L_00686676:
        cmp esi, dword ptr [edi + 8]
        jb L_0068667D
        call ebp
    L_0068667D:
        pop edi
        lea eax, [esi + 4]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_0068668A:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x00685CB0] sub_00685CB0 (231 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_00685CB0(char* first, char* last, char* dest_end) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        cmp dword ptr [esp + 0x8], ebx
        je ret_dest
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        lea esi, [ebx + 0x50]
        lea edi, [ebp + 0x50]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
loop_top:
        mov eax, dword ptr [ebx - 0x94]
        sub esi, 0x94
        lea ecx, [esi - 0x40]
        sub ebx, 0x94
        sub edi, 0x94
        push ecx
        sub ebp, 0x94
        lea ecx, [edi - 0x40]
        mov dword ptr [ebp], eax
        call dword ptr [mem_00924FDC]
        mov edx, dword ptr [esi - 0x24]
        lea eax, [esi - 0x20]
        push eax
        lea ecx, [edi - 0x20]
        mov dword ptr [edi - 0x24], edx
        call dword ptr [mem_00924FDC]
        lea ecx, [edi - 0x4]
        lea edx, [esi - 0x4]
        cmp ecx, edx
        je skip_ptr
        mov ecx, dword ptr [edi]
        test ecx, ecx
        je no_old
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [edi - 0x4]
        push edx
        call eax
no_old:
        mov ecx, dword ptr [esi]
        mov dword ptr [edi], ecx
        cmp dword ptr [esi], 0x0
        je null_src
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        lea eax, [esi - 0x4]
        push eax
        lea eax, [esp + 0x1c]
        push eax
        call edx
        jmp store_tmp
null_src:
        mov dword ptr [esp + 0x1c], 0x0
        lea eax, [esp + 0x1c]
store_tmp:
        mov eax, dword ptr [eax]
        mov dword ptr [edi - 0x4], eax
skip_ptr:
        lea ecx, [esi + 0x4]
        push ecx
        lea ecx, [edi + 0x4]
        call dword ptr [mem_00924FDC]
        lea edx, [esi + 0x20]
        push edx
        lea ecx, [edi + 0x20]
        call dword ptr [mem_00924FDC]
        cmp ebx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esi + 0x3c]
        mov dword ptr [edi + 0x3c], eax
        mov ecx, dword ptr [esi + 0x40]
        mov dword ptr [edi + 0x40], ecx
        jne loop_top
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
ret_dest:
        mov eax, dword ptr [esp + 0x10]
        pop ebx
        ret
    }
}

// [0x00682EE0] sub_00682EE0 (234 bytes)
extern "C" void ext_0041CEB0();
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_00682EE0(void* self) {
    __asm {
        push -1
        push 0x8b53c2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        call ext_00661980
        mov dword ptr [esi + 4], 0x93fa30
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi + 8], 0x928efc
        lea ecx, [esi + 0xc]
        mov byte ptr [esp + 0x14], 1
        mov dword ptr [esi], 0x93fd44
        mov dword ptr [esi + 4], 0x93fd3c
        mov dword ptr [esi + 8], 0x93fd10
        call dword ptr [mem_00924FE8]
        mov edi, dword ptr [esp + 0x1c]
        mov eax, dword ptr [edi + 4]
        mov dword ptr [esi + 0x28], eax
        lea eax, [esi + 0x2c]
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x18], 2
        call ext_0041CEB0
        cmp dword ptr [edi + 4], 0
        mov byte ptr [esp + 0x14], 3
        lea eax, [esp + 0x1c]
        je loc_682F72
        mov ecx, dword ptr [edi + 4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push edi
        push eax
        call edx
        jmp loc_682F7A
    loc_682F72:
        mov dword ptr [esp + 0x1c], 0
    loc_682F7A:
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 0x48], eax
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [esi + 0x4c], ecx
        lea ecx, [esi + 0x50]
        mov byte ptr [esp + 0x14], 4
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x6c]
        mov byte ptr [esp + 0x14], 5
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x88], 0xffffffff
        mov dword ptr [esi + 0x8c], 0
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x00686260] sub_00686260 (94 bytes)
extern "C" void ext_00685CB0();

extern "C" __declspec(naked) int __cdecl fn_00686260(int a1, int a2, int a3, int a4, int a5, int a6) {
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
        call ext_00685CB0
        sub esi, ebx
        mov eax, 0xdd67c8a7
        imul esi
        add edx, esi
        sar edx, 0x7
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov ecx, eax
        imul ecx, ecx, 0x94
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

// [0x00686780] sub_00686780 (43 bytes)
extern "C" void ext_00686260();

extern "C" __declspec(naked) void __fastcall fn_00686780(void* self) {
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
        call ext_00686260
        add esp, 0x1c
        ret
    }
}

// [0x00687A40] sub_00687A40 (244 bytes)
extern "C" int mem_00924EF4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_00687A40() {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b5811
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ebp, dword ptr [esp + 0x20]
        lea eax, [edi - 0x1]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        cmp dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x18], 0x0
        jge L_00687AD5
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_00687A80:
        lea eax, [8*esi]
        sub eax, esi
        lea ecx, [esp + 0x2c]
        lea ebx, [ebp + 8*eax]
        push ecx
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_00687AD5
        lea edx, [8*edi]
        sub edx, edi
        lea edi, [ebp + 8*edx]
        push ebx
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        add ebx, 0x1c
        push ebx
        lea ecx, [edi + 0x1c]
        call dword ptr [mem_00924FDC]
        lea eax, [esi - 0x1]
        cdq
        sub eax, edx
        mov edi, esi
        sar eax, 1
        cmp dword ptr [esp + 0x28], edi
        mov esi, eax
        jl L_00687A80
    L_00687AD5:
        lea eax, [8*edi]
        sub eax, edi
        lea ecx, [esp + 0x2c]
        lea esi, [ebp + 8*eax]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FDC]
        lea edx, [esp + 0x48]
        push edx
        lea ecx, [esi + 0x1c]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0x18], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x18], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x00687660] sub_00687660 (245 bytes)
extern "C" void ext_0041CD10();
extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00687660(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x34]
        push edi
        mov ebx, ecx
        push 0x928ce0
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L687660_special
        cmp eax, 0xb53b30
        je L687660_special
        cmp eax, 0xb53ab0
        je L687660_special
        cmp eax, 0xb53a70
        je L687660_special
        cmp eax, 0xb53af0
        je L687660_special
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, eax
        call edx
        mov edi, dword ptr [esp + 0x3c]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x34], 0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], -1
        call dword ptr [mem_00924FF4]
        jmp L687660_tail
L687660_special:
        push 0x98d8b4
        mov ecx, esi
        call ext_0063EFE0
        mov edi, dword ptr [esp + 0x3c]
        push eax
        push edi
        call ext_004275E0
        add esp, 8
L687660_tail:
        cmp dword ptr [edi + 0x14], 0
        jne L687660_end
        mov eax, dword ptr [ebx + 0x11c]
        test eax, eax
        lea ecx, [ebx + 0x118]
        je L687660_end
        mov esi, dword ptr [ecx + 8]
        sub esi, eax
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        je L687660_end
        push 0
        call ext_0041CD10
        push eax
        mov ecx, edi
        call dword ptr [mem_00924FDC]
L687660_end:
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 8
    }
}

// [0x00687B40] sub_00687B40 (172 bytes)
extern "C" void ext_0063EFE0();
extern "C" void ext_0067A350();
extern "C" void ext_00687660();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_00687B40(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push -1
        push 0x8b5725
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x8]
        mov ecx, edi
        mov dword ptr [esp + 0x10], esi
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [esp + 0x48]
        mov ebp, dword ptr [esp + 0x40]
        mov ecx, dword ptr [esp + 0x44]
        push eax
        push ebp
        mov dword ptr [esp + 0x40], 0x0
        call ext_0067A350
        mov ebx, eax
        push 0x98d8cc
        mov ecx, ebp
        mov dword ptr [esi], ebx
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, eax
        call edx
        push 0x98d8c0
        push eax
        mov byte ptr [esp + 0x40], 0x1
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        lea ecx, [esp + 0x14]
        mov byte ptr [esi + 0x4], al
        mov byte ptr [esp + 0x38], 0x0
        call dword ptr [mem_00924FF4]
        push edi
        push ebp
        mov ecx, ebx
        call ext_00687660
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0xc
    }
}

// [0x006861C0] sub_006861C0 (156 bytes)
extern "C" void ext_0049BD50();
extern "C" void ext_00682FD0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_006861C0(void* first, unsigned int count, const void* val) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x008B5531
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
    loop_x:
        cmp edi, ebx
        jbe exit_x
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_x
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [eax]
        add eax, 0x4
        mov dword ptr [esi], ecx
        push eax
        lea ecx, [esi + 0x4]
        call ext_0049BD50
    skip_x:
        sub edi, 0x1
        add esi, 0x94
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_x
    handler_x:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow_x
    dtor_x:
        lea ecx, [esi + 0x4]
        call ext_00682FD0
        add esi, 0x94
        cmp esi, edi
        jne dtor_x
    rethrow_x:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_x:
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

// [0x00685DA0] sub_00685DA0 (159 bytes)
extern "C" void ext_0049BD50();
extern "C" void ext_00682FD0();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) char* __cdecl fn_00685DA0(char* first, char* last, char* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8b54e1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
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
        je done
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_copy
        mov eax, dword ptr [edi]
        lea ecx, [edi + 4]
        push ecx
        lea ecx, [esi + 4]
        mov dword ptr [esi], eax
        call ext_0049BD50
    skip_copy:
        add esi, 0x94
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x94
        jmp loop_top
    unwind_funclet:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
    dtor_loop:
        lea ecx, [esi + 4]
        call ext_00682FD0
        add esi, 0x94
        cmp esi, edi
        jne dtor_loop
    rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    done:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00686800] sub_00686800 (41 bytes)
extern "C" void ext_00685DA0();

extern "C" __declspec(naked) void __fastcall fn_00686800(void* self) {
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
        call ext_00685DA0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00686740] sub_00686740 (58 bytes)
extern "C" void ext_006861C0();

extern "C" __declspec(naked) int __fastcall fn_00686740(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_006861C0
        mov eax, esi
        imul eax, eax, 0x94
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

extern "C" void ext_00428A60();
extern "C" void ext_00688B50();
extern "C" void ext_0041DD40();
extern "C" void ext_006A5C5C(void* p);
extern "C" void ext_0065C660();

// [0x006895E0] sub_006895E0 (271 bytes)
extern "C" __declspec(naked) void __fastcall fn_006895E0(void* self) {
    __asm {
        push -1
        push 0x8b5941
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x98d8f4
        lea ecx, [esi + 0x140]
        mov dword ptr [esp + 0x18], 0x9
        call ext_00428A60
        lea ecx, [esi + 0x130]
        mov byte ptr [esp + 0x18], 0x8
        call ext_00688B50
        mov eax, dword ptr [esi + 0x11c]
        lea edi, [esi + 0x118]
        xor ebx, ebx
        cmp eax, ebx
        mov byte ptr [esp + 0x18], 0x7
        je skip_inner
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [edi + 0x8]
        push edx
        push edi
        push ecx
        push eax
        call ext_0041DD40
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
skip_inner:
        lea ecx, [esi + 0xd8]
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov dword ptr [edi + 0xc], ebx
        mov byte ptr [esp + 0x18], 0x6
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0xbc]
        mov byte ptr [esp + 0x18], 0x5
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x94]
        mov byte ptr [esp + 0x18], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x78]
        mov byte ptr [esp + 0x18], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x18], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x2c]
        mov byte ptr [esp + 0x18], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x10]
        mov byte ptr [esp + 0x18], bl
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x18], -1
        call ext_0065C660
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;

// [0x00687540] sub_00687540 (286 bytes)
extern "C" __declspec(naked) void __fastcall fn_00687540(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, dword ptr [esp + 0x34]
        mov esi, ecx
        push 0x98d8a4
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea eax, [esi + 0x78]
        push eax
        call ext_004275E0
        add esp, 8
        push 0x98d898
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esi + 0x94]
        push ecx
        call ext_004275E0
        add esp, 8
        push 0x98d888
        mov ecx, edi
        mov dword ptr [esi + 0x70], 0
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 8]
        push ecx
        mov ecx, eax
        call edx
        cmp dword ptr [esp + 0x1c], 0
        mov dword ptr [esp + 0x2c], 0
        je L_done
        mov edi, dword ptr [mem_00924FC0]
        lea eax, [esp + 8]
        push 0x98d880
        push eax
        call edi
        add esp, 8
        test al, al
        je L_try1
        mov dword ptr [esi + 0x70], 0
        jmp L_done
    L_try1:
        lea ecx, [esp + 8]
        push 0x953720
        push ecx
        call edi
        add esp, 8
        test al, al
        je L_try2
        mov dword ptr [esi + 0x70], 1
        jmp L_done
    L_try2:
        lea edx, [esp + 8]
        push 0x98d874
        push edx
        call edi
        add esp, 8
        test al, al
        je L_try3
        mov dword ptr [esi + 0x70], 2
        jmp L_done
    L_try3:
        lea eax, [esp + 8]
        push 0x98d864
        push eax
        call edi
        add esp, 8
        test al, al
        je L_done
        mov dword ptr [esi + 0x70], 3
    L_done:
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 4
    }
}

// [0x00682220] sub_00682220 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" int mem_00B5ACB0;
extern "C" int mem_00B5AC94;

extern "C" __declspec(naked) void __fastcall fn_00682220(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b515e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5ACB0], al
        jne skip_init
        or dword ptr [mem_00B5ACB0], eax
        push 0xa2f0cc
        push offset mem_00B5AC94
        mov dword ptr [esp + 0x10], 0x0
        call ext_00662610
        push 0x921da0
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5AC94
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00683090] sub_00683090 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B5AD40;
extern "C" int mem_00B5AD24;

extern "C" __declspec(naked) void __fastcall fn_00683090(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b52ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5AD40], al
        jne skip_init
        or dword ptr [mem_00B5AD40], eax
        push 0xa353f8
        push offset mem_00B5AD24
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x921e10
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5AD24
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006866A0] sub_006866A0 (112 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_0041FF30();
extern "C" void ext_00683090();
extern "C" void ext_00686630();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) void __fastcall fn_006866A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b4989
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x60
        push esi
        mov esi, dword ptr [esp + 0x74]
        push esi
        call ext_00686630
        test eax, eax
        jne skip_throw_006866A0
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        call ext_00404F00
        add esp, 0x8
        push eax
        mov dword ptr [esp + 0x70], 0
        call ext_00683090
        push eax
        lea ecx, [esp + 0x28]
        call ext_0041FF30
        push 0x9d3748
        lea edx, [esp + 0x24]
        push edx
        call ext_006A6DD2
    skip_throw_006866A0:
        mov ecx, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x6c
        ret 0x4
    }
}

// [0x0068E350] sub_0068E350 (320 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0041CDA0();
extern "C" void ext_0068C530();
extern "C" void ext_0068DDD0();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_0068E350(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8b5c6c
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null
        push esi
        push 0
        push 0xaa3000
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x9e8
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0068DDD0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_0041CDA0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 1
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 2
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null:
        push 0x9e8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 3
        je L_nullret
        mov ecx, eax
        call ext_0068C530
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nullret:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x00689E20] sub_00689E20 (332 bytes)
extern "C" void ext_00689570();
extern "C" __declspec(naked) void __fastcall fn_00689E20(void* self) {
    __asm {
        push -0x1
        push 0x8b5941
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        mov ecx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x8], ecx
        xor ebx, ebx
        lea ecx, [esi + 0x10]
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esi], 0x98d8f4
        mov dword ptr [esi + 0x4], eax
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x2c]
        mov byte ptr [esp + 0x14], 0x1
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x14], 0x2
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x78]
        mov byte ptr [esp + 0x14], 0x3
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x94]
        mov byte ptr [esp + 0x14], 0x4
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0xbc]
        mov byte ptr [esp + 0x14], 0x5
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0xd8]
        mov byte ptr [esp + 0x14], 0x6
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0xf8]
        mov byte ptr [esp + 0x14], 0x7
        call ext_00689570
        mov dword ptr [esi + 0x134], ebx
        mov dword ptr [esi + 0x138], ebx
        mov dword ptr [esi + 0x13c], ebx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x144], ebx
        mov dword ptr [esi + 0x148], ebx
        mov dword ptr [esi + 0x14c], ebx
        mov byte ptr [esi + 0x50], bl
        mov byte ptr [esi + 0xb0], bl
        mov dword ptr [esi + 0x70], ebx
        mov byte ptr [esi + 0xb4], bl
        mov byte ptr [esi + 0xb2], bl
        mov byte ptr [esi + 0xb3], bl
        mov dword ptr [esi + 0x48], ebx
        mov dword ptr [esi + 0x74], ebx
        mov dword ptr [esi + 0xc], ebx
        mov byte ptr [esi + 0xb6], bl
        mov byte ptr [esi + 0xb7], bl
        mov byte ptr [esi + 0xb8], bl
        mov byte ptr [esi + 0xb9], bl
        mov byte ptr [esi + 0xba], bl
        mov byte ptr [esi + 0x154], bl
        mov byte ptr [esi + 0xb5], bl
        mov dword ptr [esi + 0x150], ebx
        mov byte ptr [esi + 0xb1], 0x1
        mov byte ptr [esi + 0xbb], 0x1
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00682AD0] sub_00682AD0 (334 bytes)
extern "C" void ext_006829E0();
extern "C" void ext_0041CEB0();
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FCC;
extern "C" int mem_00924FD8;

extern "C" __declspec(naked) void* __fastcall fn_00682AD0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b520e
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x74
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        push 0x93f988
        mov esi, ecx
        mov dword ptr [esp + 0x90], ebx
        mov dword ptr [esp + 0x14], ebx
        call ext_006829E0
        mov ebp, dword ptr [mem_00924ECC]
        push eax
        lea eax, [esp + 0x1c]
        push eax
        call ebp
        mov edi, dword ptr [esp + 0xa0]
        lea ecx, [esi + 0xc]
        push ecx
        push eax
        push edi
        mov dword ptr [esp + 0xa4], 1
        call dword ptr [mem_00924FD0]
        add esp, 0x18
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x10], 1
        mov byte ptr [esp + 0x8c], bl
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi + 0x8c]
        cmp eax, ebx
        je L_end
        mov eax, dword ptr [eax + 0x4]
        cmp eax, ebx
        je L_end
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x58]
        call eax
        test al, al
        je L_end
        lea ecx, [esp + 0x68]
        push ecx
        mov ecx, dword ptr [esi + 0x8c]
        call ext_0041CEB0
        push eax
        lea edx, [esp + 0x50]
        push 0x98ceac
        push edx
        mov dword ptr [esp + 0x98], 2
        call dword ptr [mem_00924FCC]
        push 0x98cea8
        push eax
        lea eax, [esp + 0x44]
        push eax
        mov byte ptr [esp + 0xa4], 3
        call ebp
        add esp, 0x18
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x90], 4
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x8c], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x8c], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x8c], bl
        call dword ptr [mem_00924FF4]
    L_end:
        mov ecx, dword ptr [esp + 0x84]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x80
        ret 0x4
    }
}

// [0x00688280] sub_00688280 (340 bytes)
extern "C" void ext_00687A40();
extern "C" int mem_00924EF4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_00688280() {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b57ea
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ebx, dword ptr [esp + 0x28]
        mov ebp, dword ptr [esp + 0x20]
        lea esi, [edi + edi + 0x2]
        cmp esi, ebx
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0x24], edi
        jge L_00688324
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_006882C0:
        lea eax, [8*esi]
        sub eax, esi
        lea eax, [ebp + 8*eax]
        lea ecx, [eax - 0x38]
        push ecx
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_006882E2
        sub esi, 0x1
    L_006882E2:
        lea eax, [8*edi]
        lea edx, [8*esi]
        sub edx, esi
        sub eax, edi
        lea ebx, [ebp + 8*edx]
        lea edi, [ebp + 8*eax]
        push ebx
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        add ebx, 0x1c
        push ebx
        lea ecx, [edi + 0x1c]
        call dword ptr [mem_00924FDC]
        mov edi, esi
        lea esi, [esi + esi + 0x2]
        cmp esi, dword ptr [esp + 0x28]
        jl L_006882C0
        mov ebx, dword ptr [esp + 0x28]
        cmp esi, ebx
    L_00688324:
        jne L_00688359
        lea edx, [8*edi]
        lea ecx, [8*ebx]
        sub ecx, ebx
        sub edx, edi
        lea esi, [ebp + 8*ecx - 0x38]
        lea edi, [ebp + 8*edx]
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        add esi, 0x1c
        push esi
        lea ecx, [edi + 0x1c]
        call dword ptr [mem_00924FDC]
        lea edi, [ebx - 0x1]
    L_00688359:
        sub esp, 0x38
        mov esi, esp
        mov dword ptr [esp + 0x60], esp
        lea eax, [esp + 0x64]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x64], esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x80]
        push ecx
        lea ecx, [esi + 0x1c]
        mov byte ptr [esp + 0x54], 0x1
        call dword ptr [mem_00924FE0]
        mov edx, dword ptr [esp + 0x5c]
        push edx
        push edi
        push ebp
        mov byte ptr [esp + 0x5c], 0x0
        call ext_00687A40
        add esp, 0x44
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0x18], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x18], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x006883E0] sub_006883E0 (170 bytes)
extern "C" int mem_00924FDC; extern "C" int mem_00924FF4;
extern "C" void ext_00688280(); extern "C" void ext_006981A0();
extern "C" __declspec(naked) void __cdecl fn_006883E0() {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x8b5811
        push eax
        mov fs:[0], esp
        push esi
        push edi
        mov esi, [esp+0x18]
        mov edi, [esp+0x20]
        push esi
        mov ecx, edi
        mov dword ptr [esp+0x14], 0
        call dword ptr [mem_00924FDC]
        lea eax, [esi+0x1c]
        push eax
        lea ecx, [edi+0x1c]
        call dword ptr [mem_00924FDC]
        sub esp, 0x38
        lea edx, [esp+0x5c]
        mov ecx, esp
        mov [esp+0x50], esp
        push edx
        call ext_006981A0
        mov ecx, [esp+0x54]
        sub ecx, esi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        push eax
        push 0
        push esi
        call ext_00688280
        add esp, 0x44
        lea ecx, [esp+0x40]
        mov dword ptr [esp+0x10], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+0x24]
        mov dword ptr [esp+0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, [esp+8]
        pop edi
        mov fs:[0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x00688A40] sub_00688A40 (175 bytes)
extern "C" void ext_00688280();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __cdecl fn_00688A40() {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b5869
        push eax
        mov dword ptr fs:[0x0], esp
        mov ecx, dword ptr [esp + 0x14]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x5
        mov ebp, edx
        shr ebp, 0x1f
        add ebp, edx
        mov eax, ebp
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        test esi, esi
        jle L_end
        lea eax, [8*esi]
        sub eax, esi
        lea edi, [edi + 8*eax]
        nop
    L_loop:
        sub esp, 0x38
        mov ebx, esp
        mov dword ptr [esp + 0x5c], esp
        sub edi, 0x38
        push edi
        mov ecx, ebx
        sub esi, 1
        mov dword ptr [esp + 0x60], ebx
        call dword ptr [mem_00924FE0]
        lea ecx, [edi + 0x1c]
        push ecx
        lea ecx, [ebx + 0x1c]
        mov dword ptr [esp + 0x54], 0x0
        call dword ptr [mem_00924FE0]
        mov edx, dword ptr [esp + 0x58]
        push ebp
        push esi
        push edx
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_00688280
        add esp, 0x44
        test esi, esi
        jg L_loop
    L_end:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x00688D60] sub_00688D60 (189 bytes)
extern "C" void ext_006883E0(); extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __cdecl fn_00688D60() {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x8b5869
        push eax
        mov fs:[0], esp
        push ebx
        push ebp
        mov ebp, [esp+0x18]
        push esi
        mov esi, [esp+0x20]
        mov ecx, esi
        sub ecx, ebp
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 1
        push edi
        jle done
        mov ebx, 0x38
        add esi, -0x38
        sub ebx, ebp
        cmp eax, 1
        jle skip
    top:
        push 0
        sub esp, 0x38
        mov edi, esp
        mov [esp+0x60], esp
        push esi
        mov ecx, edi
        mov [esp+0x64], edi
        call dword ptr [mem_00924FE0]
        lea eax, [esi+0x1c]
        push eax
        lea ecx, [edi+0x1c]
        mov dword ptr [esp+0x58], 0
        call dword ptr [mem_00924FE0]
        push esi
        push esi
        push ebp
        mov dword ptr [esp+0x60], 0xffffffff
        call ext_006883E0
        add esp, 0x48
    skip:
        sub esi, 0x38
        lea ecx, [ebx+esi]
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 1
        jg top
    done:
        mov ecx, [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret
    }
}

extern "C" void ext_0057BDF0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924EF4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __cdecl fn_00688110() {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x8b57ba
        push eax
        mov fs:[0], esp
        mov eax, [esp+0x14]
        sub esp, 0x3c
        push ebx
        mov ebx, [esp+0x50]
        cmp ebx, eax
        je Lend
        push ebp
        lea ebp, [ebx+0x38]
        cmp ebp, eax
        je Lpop3
        lea eax, [ebp-0x38]
        push esi
        mov [esp+0x58], eax
        push edi
        _emit 0x8b
        _emit 0xff
    Lloop:
        push ebp
        lea ecx, [esp+0x18]
        mov edi, ebp
        call dword ptr [mem_00924FE0]
        mov esi, [esp+0x5c]
        add esi, 0x70
        lea ecx, [esi-0x1c]
        push ecx
        lea ecx, [esp+0x34]
        mov dword ptr [esp+0x58], 0
        call dword ptr [mem_00924FE0]
        lea edx, [esp+0x14]
        push ebx
        push edx
        mov dword ptr [esp+0x5c], 1
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L1cb
        mov ecx, [esp+0x60]
        mov edx, [esp+0x60]
        mov byte ptr [esp+0x10], 0
        mov eax, [esp+0x10]
        push eax
        push ecx
        push edx
        push esi
        push ebp
        push ebx
        call ext_0057BDF0
        add esp, 0x18
        lea eax, [esp+0x14]
        push eax
        mov ecx, ebx
        call dword ptr [mem_00924FDC]
        lea ecx, [esp+0x30]
        push ecx
        lea ecx, [ebx+0x1c]
        jmp L225
    L1cb:
        mov esi, [esp+0x5c]
        lea edx, [esp+0x14]
        push esi
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L210
    L1e2:
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        lea eax, [esi+0x1c]
        push eax
        lea ecx, [edi+0x1c]
        call dword ptr [mem_00924FDC]
        mov edi, esi
        sub esi, 0x38
        lea ecx, [esp+0x14]
        push esi
        push ecx
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne L1e2
    L210:
        lea edx, [esp+0x14]
        push edx
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        lea eax, [esp+0x30]
        push eax
        lea ecx, [edi+0x1c]
    L225:
        call dword ptr [mem_00924FDC]
        lea ecx, [esp+0x30]
        mov dword ptr [esp+0x54], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+0x14]
        mov dword ptr [esp+0x54], -1
        call dword ptr [mem_00924FF4]
        add dword ptr [esp+0x5c], 0x38
        add ebp, 0x38
        cmp ebp, [esp+0x60]
        jne Lloop
        pop edi
        pop esi
    Lpop3:
        pop ebp
    Lend:
        mov ecx, [esp+0x40]
        pop ebx
        mov fs:[0], ecx
        add esp, 0x48
        ret
    }
}

// [0x00688880] sub_00688880 (447 bytes)
extern "C" void ext_00687470();
extern "C" void ext_00688060();
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __cdecl fn_00688880(void* out, void* first, void* last) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        lea ecx, [8*eax]
        sub ecx, eax
        lea edx, [edi - 0x38]
        push edx
        lea esi, [ebx + 8*ecx]
        push esi
        push ebx
        call ext_00688060
        add esp, 0xc
        cmp ebx, esi
        lea ebp, [esi + 0x38]
        jae L_006888fb
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_006888d0:
        lea edi, [esi - 0x38]
        push esi
        push edi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_006888f7
        push edi
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_006888f7
        mov esi, edi
        cmp ebx, esi
        jb L_006888d0
    L_006888f7:
        mov edi, dword ptr [esp + 0x20]
    L_006888fb:
        cmp ebp, edi
        jae L_00688923
        nop
    L_00688900:
        mov ebx, dword ptr [mem_00924EF4]
        push esi
        push ebp
        call ebx
        add esp, 0x8
        test al, al
        jne L_00688923
        push ebp
        push esi
        call ebx
        add esp, 0x8
        test al, al
        jne L_00688923
        add ebp, 0x38
        cmp ebp, edi
        jb L_00688900
    L_00688923:
        mov ebx, esi
        mov edi, ebp
        mov dword ptr [esp + 0x10], ebx
        jmp L_00688930
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_00688930:
        cmp edi, dword ptr [esp + 0x20]
        jae L_0068896c
    L_00688936:
        push edi
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_00688963
        push esi
        push edi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_0068896c
        mov eax, ebp
        push edi
        push eax
        add ebp, 0x38
        call ext_00687470
        add esp, 0x8
    L_00688963:
        add edi, 0x38
        cmp edi, dword ptr [esp + 0x20]
        jb L_00688936
    L_0068896c:
        cmp ebx, dword ptr [esp + 0x1c]
        jbe L_006889bc
        add ebx, -0x38
    L_00688975:
        push esi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_006889a0
        push ebx
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_006889b4
        sub esi, 0x38
        push ebx
        push esi
        call ext_00687470
        add esp, 0x8
    L_006889a0:
        mov eax, dword ptr [esp + 0x10]
        sub eax, 0x38
        sub ebx, 0x38
        cmp dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x10], eax
        jb L_00688975
    L_006889b4:
        mov ebx, dword ptr [esp + 0x10]
        cmp ebx, dword ptr [esp + 0x1c]
    L_006889bc:
        jne L_006889ee
        cmp edi, dword ptr [esp + 0x20]
        je L_00688a30
        cmp ebp, edi
        je L_006889d2
        push ebp
        push esi
        call ext_00687470
        add esp, 0x8
    L_006889d2:
        mov eax, edi
        mov ecx, esi
        push eax
        push ecx
        add ebp, 0x38
        add esi, 0x38
        add edi, 0x38
        call ext_00687470
        add esp, 0x8
        jmp L_00688930
    L_006889ee:
        sub ebx, 0x38
        cmp edi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x10], ebx
        jne L_00688a1e
        sub esi, 0x38
        cmp ebx, esi
        je L_00688a0c
        push esi
        push ebx
        call ext_00687470
        add esp, 0x8
    L_00688a0c:
        sub ebp, 0x38
        push ebp
        push esi
        call ext_00687470
        add esp, 0x8
        jmp L_00688930
    L_00688a1e:
        push ebx
        push edi
        call ext_00687470
        add esp, 0x8
        add edi, 0x38
        jmp L_00688930
    L_00688a30:
        mov eax, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x00687BF0] sub_00687BF0 (455 bytes)
extern "C" void ext_0067A0F0();
extern "C" int mem_00A9F7EC;
extern "C" int mem_00A9F804;
extern "C" __declspec(naked) void __fastcall fn_00687BF0(void* self) {
    __asm {
        push -1
        push 08b574eh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 3ch
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ecx, [edi + 10h]
        mov dword ptr [esp + 10h], edi
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [mem_00A9F838]
        mov ebp, dword ptr [esp + 5ch]
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 58h], 0
        call ext_0063EFE0
        cmp eax, 0b53a34h
        mov ebx, 1
        je L_687C71
        cmp eax, 0b53b30h
        je L_687C71
        cmp eax, 0b53ab0h
        je L_687C71
        cmp eax, 0b53a70h
        je L_687C71
        cmp eax, 0b53af0h
        je L_687C71
        mov ecx, dword ptr [esp + 68h]
        push ecx
        mov ecx, dword ptr [esp + 64h]
        push ebp
        call ext_0067A350
        mov dword ptr [esp + 60h], eax
        jmp L_687CAC
    L_687C71:
        push 098d8dch
        mov ecx, ebp
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, dword ptr [esp + 60h]
        push eax
        mov byte ptr [esp + 58h], bl
        call ext_0067A0F0
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 60h], eax
        mov byte ptr [esp + 54h], 0
        call dword ptr [mem_00924FF4]
    L_687CAC:
        mov eax, dword ptr [mem_00A9F804]
        push eax
        mov ecx, ebp
        call ext_0063EFE0
        cmp eax, 0b53a34h
        je L_687CDC
        cmp eax, 0b53b30h
        je L_687CDC
        cmp eax, 0b53ab0h
        je L_687CDC
        cmp eax, 0b53a70h
        je L_687CDC
        cmp eax, 0b53af0h
        jne L_687CE1
    L_687CDC:
        mov dword ptr [edi + 8], ebx
        jmp L_687CF6
    L_687CE1:
        lea ecx, [esp + 5ch]
        push ecx
        lea edx, [edi + 8]
        push edx
        mov dword ptr [esp + 64h], eax
        call ext_0053F5F0
        add esp, 8
    L_687CF6:
        mov eax, dword ptr [mem_00A9F7EC]
        push eax
        mov ecx, ebp
        call ext_0063EFE0
        mov esi, eax
        cmp esi, 0b53a34h
        je L_687D2D
        cmp esi, 0b53b30h
        je L_687D2D
        cmp esi, 0b53ab0h
        je L_687D2D
        cmp esi, 0b53a70h
        je L_687D2D
        cmp esi, 0b53af0h
        jne L_687D32
    L_687D2D:
        mov dword ptr [edi + 0ch], ebx
        jmp L_687D87
    L_687D32:
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 8]
        lea eax, [esp + 30h]
        push eax
        mov ecx, esi
        call edx
        push 098d8d0h
        push eax
        mov byte ptr [esp + 5ch], 2
        call dword ptr [mem_00924FC0]
        add esp, 8
        lea ecx, [esp + 30h]
        mov bl, al
        mov byte ptr [esp + 54h], 0
        call dword ptr [mem_00924FF4]
        test bl, bl
        je L_687D72
        mov dword ptr [edi + 0ch], 7fffffffh
        jmp L_687D87
    L_687D72:
        lea eax, [esp + 5ch]
        push eax
        lea ecx, [edi + 0ch]
        push ecx
        mov dword ptr [esp + 64h], esi
        call ext_0053F5F0
        add esp, 8
    L_687D87:
        mov esi, dword ptr [esp + 60h]
        lea eax, [edi + 10h]
        push eax
        push ebp
        mov ecx, esi
        call ext_00687660
        mov edx, dword ptr [esp + 6ch]
        mov ecx, dword ptr [esp + 4ch]
        mov dword ptr [edi], esi
        mov dword ptr [edi + 4], edx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 48h
        ret 14h
    }
}

// [0x00685900] sub_00685900 (466 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_00671F30();
extern "C" int mem_00B5A0B8;
extern "C" int mem_00B58DFC;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00685900(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x8b54c3
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x44
        push    ebx
        push    esi
        push    edi
        xor     edi, edi
        mov     dword ptr [ebp - 0x14], edi
        xor     edx, edx
        cmp     dword ptr [mem_00B5A0B8], edi
        mov     dword ptr [ebp - 0x10], esp
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0x4], edi
        je      L_685939
        lea     edx, [ecx + 0x2c]
    L_685939:
        cmp     dword ptr [ecx + 0x28], edi
        je      L_685963
        mov     eax, dword ptr [ecx + 0x28]
        mov     esi, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [esi + 0x5c]
        push    ecx
        lea     ecx, [ebp - 0x34]
        push    ecx
        mov     ecx, eax
        call    edx
        mov     byte ptr [ebp - 0x4], 1
        mov     ebx, 1
        jmp     L_685977
    L_685963:
        lea     eax, [ebp - 0x2c]
        push    eax
        call    ext_00671F30
        add     esp, 4
        mov     ebx, 2
        mov     dword ptr [ebp - 0x4], ebx
    L_685977:
        mov     esi, eax
        cmp     dword ptr [esi + 4], edi
        mov     dword ptr [ebp - 0x14], ebx
        lea     eax, [ebp + 0xc]
        je      L_685992
        mov     ecx, dword ptr [esi + 4]
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x70]
        push    esi
        push    eax
        call    edx
        jmp     L_685995
    L_685992:
        mov     dword ptr [ebp + 0xc], edi
    L_685995:
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x24], eax
        mov     esi, dword ptr [esi + 4]
        mov     dword ptr [ebp - 0x20], esi
        test    bl, 2
        mov     dword ptr [ebp - 0x4], 4
        je      L_6859C7
        mov     ecx, dword ptr [ebp - 0x28]
        and     ebx, -3
        cmp     ecx, edi
        mov     dword ptr [ebp - 0x14], ebx
        je      L_6859C7
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        lea     eax, [ebp - 0x2c]
        push    eax
        call    edx
        mov     esi, dword ptr [ebp - 0x20]
    L_6859C7:
        test    bl, 1
        mov     byte ptr [ebp - 0x4], 5
        je      L_6859E5
        mov     ecx, dword ptr [ebp - 0x30]
        cmp     ecx, edi
        je      L_6859E5
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x78]
        lea     edx, [ebp - 0x34]
        push    edx
        call    eax
        mov     esi, dword ptr [ebp - 0x20]
    L_6859E5:
        cmp     esi, edi
        je      L_6859FF
        mov     edx, dword ptr [esi]
        mov     edx, dword ptr [edx + 0x70]
        lea     eax, [ebp - 0x24]
        push    eax
        lea     ecx, [ebp + 0xc]
        push    ecx
        mov     ecx, esi
        call    edx
        mov     esi, dword ptr [ebp - 0x20]
        jmp     L_685A05
    L_6859FF:
        mov     dword ptr [ebp + 0xc], edi
        lea     eax, [ebp + 0xc]
    L_685A05:
        cmp     esi, edi
        mov     eax, dword ptr [eax]
        mov     ebx, dword ptr [ebp + 8]
        mov     dword ptr [ebx], eax
        mov     dword ptr [ebx + 4], esi
        mov     byte ptr [ebp - 4], 0
        je      L_685A24
        mov     edx, dword ptr [esi]
        mov     edx, dword ptr [edx + 0x78]
        lea     eax, [ebp - 0x24]
        push    eax
        mov     ecx, esi
        call    edx
    L_685A24:
        mov     eax, ebx
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
        cmp     byte ptr [mem_00B58DFC], 0
        jne     L_685AAB
        mov     ecx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0xc]
        lea     edx, [ebp - 0x50]
        push    edx
        call    eax
        mov     ecx, dword ptr [mem_00924E90]
        mov     edx, dword ptr [ebp - 0x1c]
        push    ecx
        add     edx, 0xc
        push    edx
        push    0x940614
        push    eax
        mov     eax, dword ptr [mem_00924FA0]
        push    0x98d7fc
        push    eax
        mov     byte ptr [ebp - 4], 7
        call    ext_00435D00
        mov     esi, dword ptr [mem_00924E94]
        add     esp, 8
        push    eax
        call    esi
        add     esp, 8
        push    eax
        call    ext_00435D00
        add     esp, 8
        push    eax
        call    esi
        add     esp, 8
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
        lea     ecx, [ebp - 0x50]
        mov     byte ptr [ebp - 4], 6
        call    dword ptr [mem_00924FF4]
    L_685AAB:
        mov     eax, 0x685ab1
        ret
        mov     esi, dword ptr [ebp + 8]
        push    esi
        call    ext_00671F30
        mov     ecx, dword ptr [ebp - 0xc]
        add     esp, 4
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}

extern "C" void ext_0041CF50();
extern "C" void ext_00671100();
extern "C" void ext_00685900();
extern "C" int mem_00924FB0;
extern "C" int mem_00924FDC;

// [0x00685AE0] sub_00685AE0 (186 bytes)
extern "C" __declspec(naked) void __fastcall fn_00685AE0(void* self, int edx_unused, void* arg) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x8b33b8
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 8
        push    ebx
        push    esi
        push    edi
        push    5
        mov     esi, ecx
        call    ext_00671100
        mov     ebx, dword ptr [esp + 0x28]
        add     esp, 4
        cmp     dword ptr [esi + 0x28], eax
        jne     loc_685b7c
        lea     edi, [esi + 0x2c]
        push    ebx
        push    edi
        call    dword ptr [mem_00924FB0]
        add     esp, 8
        test    al, al
        je      loc_685b7c
        push    ebx
        mov     ecx, edi
        call    dword ptr [mem_00924FDC]
        push    0
        push    0
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    ext_00685900
        push    eax
        lea     ecx, [esi + 0x48]
        mov     dword ptr [esp + 0x20], 0
        call    ext_0041CF50
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        mov     dword ptr [esp + 0x1c], -1
        je      loc_685b86
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        lea     eax, [esp + 0xc]
        push    eax
        call    edx
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x14
        ret     4
    loc_685b7c:
        push    ebx
        lea     ecx, [esi + 0x2c]
        call    dword ptr [mem_00924FDC]
    loc_685b86:
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x14
        ret     4
    }
}

// [0x00683620] sub_00683620 (203 bytes)
extern "C" void ext_00661980();
extern "C" void ext_00671100();
extern "C" int mem_008B53C2;
extern "C" int mem_0093FA30;
extern "C" int mem_00928EFC;
extern "C" int mem_0093FD44;
extern "C" int mem_0093FD3C;
extern "C" int mem_0093FD10;
extern "C" int mem_00924FE8;
extern "C" int mem_0092A0D0;
extern "C" int mem_00924FE4;
extern "C" int mem_00B599BC;
extern "C" __declspec(naked) void __fastcall fn_00683620(void* self) {
    __asm {
        push    -1
        push    offset mem_008B53C2
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        call    ext_00661980
        mov     dword ptr [esi + 4], offset mem_0093FA30
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esi + 8], offset mem_00928EFC
        lea     ecx, [esi + 0xC]
        mov     byte ptr [esp + 0x10], 1
        mov     dword ptr [esi], offset mem_0093FD44
        mov     dword ptr [esi + 4], offset mem_0093FD3C
        mov     dword ptr [esi + 8], offset mem_0093FD10
        call    dword ptr [mem_00924FE8]
        push    0
        mov     byte ptr [esp + 0x14], 2
        call    ext_00671100
        add     esp, 4
        push    offset mem_0092A0D0
        lea     ecx, [esi + 0x2C]
        mov     dword ptr [esi + 0x28], eax
        call    dword ptr [mem_00924FE4]
        mov     dword ptr [esi + 0x48], 0
        mov     eax, dword ptr [mem_00B599BC]
        mov     dword ptr [esi + 0x4C], eax
        lea     ecx, [esi + 0x50]
        mov     byte ptr [esp + 0x10], 4
        call    dword ptr [mem_00924FE8]
        lea     ecx, [esi + 0x6C]
        mov     byte ptr [esp + 0x10], 5
        call    dword ptr [mem_00924FE8]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [esi + 0x88], -1
        mov     dword ptr [esi + 0x8C], 0
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

extern "C" void ext_0041CEB0();
extern "C" void ext_0041CF00();
extern "C" void ext_0041CF50();
extern "C" void ext_00671490();
extern "C" void ext_006829E0();
extern "C" void ext_00685900();
extern "C" int mem_00924FC4;
extern "C" int mem_00924FC0;
extern "C" int mem_00B599BC;
extern "C" int mem_00924EA8;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

// [0x00685E40] sub_00685E40 (308 bytes)
extern "C" __declspec(naked) void __fastcall fn_00685E40(void* self, int edx_unused, void* arg0) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8b5509
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x2c
        push    esi
        mov     esi, ecx
        cmp     dword ptr [esi + 0x28], 0x0
        push    edi
        mov     edi, dword ptr [esp + 0x44]
        je      L_00685e86
        call    ext_006829E0
        push    eax
        push    edi
        call    dword ptr [mem_00924FC4]
        add     esp, 0x8
        test    al, al
        je      L_00685e86
        mov     eax, dword ptr [esi + 0x4c]
        cmp     eax, dword ptr [esi + 0x28]
        je      L_00685f61
    L_00685e86:
        push    edi
        call    ext_00671490
        lea     edi, [esi + 0x2c]
        push    0x92a0d0
        push    edi
        mov     dword ptr [esi + 0x28], eax
        call    dword ptr [mem_00924FC0]
        add     esp, 0xc
        test    al, al
        je      L_00685f24
        mov     ecx, dword ptr [esi + 0x28]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x48]
        push    0x0
        call    edx
        push    eax
        lea     ecx, [esp + 0xc]
        call    ext_0041CF00
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x3c], 0x0
        je      L_00685ed3
        cmp     eax, dword ptr [mem_00B599BC]
        jne     L_00685edd
    L_00685ed3:
        mov     ecx, edi
        call    dword ptr [mem_00924EA8]
        jmp     L_00685f08
    L_00685edd:
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0xc]
        call    ext_0041CEB0
        push    eax
        mov     ecx, edi
        mov     byte ptr [esp + 0x40], 0x1
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0x18]
        mov     byte ptr [esp + 0x3c], 0x0
        call    dword ptr [mem_00924FF4]
    L_00685f08:
        mov     ecx, dword ptr [esp + 0xc]
        test    ecx, ecx
        mov     dword ptr [esp + 0x3c], 0xffffffff
        je      L_00685f24
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        lea     eax, [esp + 0x8]
        push    eax
        call    edx
    L_00685f24:
        push    0x0
        push    0x0
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    ext_00685900
        push    eax
        lea     ecx, [esi + 0x48]
        mov     dword ptr [esp + 0x40], 0x2
        call    ext_0041CF50
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        mov     dword ptr [esp + 0x3c], 0xffffffff
        je      L_00685f61
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        lea     eax, [esp + 0x10]
        push    eax
        call    edx
    L_00685f61:
        mov     ecx, dword ptr [esp + 0x34]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x38
        ret     0x4
    }
}

// [0x006862C0] sub_006862C0 (210 bytes)
extern "C" void ext_00661980();
extern "C" void ext_00685E40();
extern "C" int mem_00924FE0;
extern "C" int mem_00B599BC;
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void* __fastcall fn_006862C0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -0x1
        push 0x8b558e
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_00661980
        xor edi, edi
        mov dword ptr [esi + 0x4], 0x93fa30
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi + 0x8], 0x928efc
        mov eax, dword ptr [esp + 0x1c]
        push eax
        lea ecx, [esi + 0xc]
        mov byte ptr [esp + 0x18], 0x1
        mov dword ptr [esi], 0x93fd44
        mov dword ptr [esi + 0x4], 0x93fd3c
        mov dword ptr [esi + 0x8], 0x93fd10
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        lea ecx, [esi + 0x2c]
        mov byte ptr [esp + 0x18], 0x2
        mov dword ptr [esi + 0x28], edi
        call dword ptr [mem_00924FE0]
        mov dword ptr [esi + 0x48], edi
        mov edx, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0x4c], edx
        lea ecx, [esi + 0x50]
        mov byte ptr [esp + 0x14], 0x4
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x6c]
        mov byte ptr [esp + 0x14], 0x5
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [esp + 0x20]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x18], 0x6
        mov dword ptr [esi + 0x88], -0x1
        mov dword ptr [esi + 0x8c], edi
        call ext_00685E40
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

extern "C" int mem_00A9ECE8;
extern "C" int mem_00A9ECEC;
extern "C" int mem_00A9ECF0;
extern "C" int mem_00B5AE98;
extern "C" int mem_00A9ECF4;
extern "C" int mem_00B5AE9C;
extern "C" int mem_00A9ECF8;
extern "C" int mem_00B5AEA0;
extern "C" int mem_00A9ECFC;
extern "C" int mem_00B5AEA4;
extern "C" int mem_00A9ED00;
extern "C" int mem_00B5AEA8;
extern "C" int mem_00A9ED04;
extern "C" int mem_00B5AEAC;
extern "C" int mem_00A9ED08;
extern "C" int mem_00B5AEB0;
extern "C" int mem_00A9ED0C;
extern "C" int mem_00B5AEB4;
extern "C" int mem_00A9ED10;
extern "C" int mem_00B5AEB8;
extern "C" int mem_00A9ED14;
extern "C" int mem_00B5AEBC;
extern "C" int mem_00A9ED18;
extern "C" int mem_00B5AEC0;
extern "C" int mem_00A9ED1C;
extern "C" int mem_00B5AEC4;
extern "C" int mem_00A9ED20;
extern "C" int mem_00B5AEC8;
extern "C" int mem_00A9ED24;
extern "C" int mem_00B5AECC;
extern "C" int mem_00A9ED28;
extern "C" int mem_00B5AED0;
extern "C" int mem_00A9ED2C;
extern "C" int mem_00B5AED4;
extern "C" int mem_00A9ED30;
extern "C" int mem_00B5AED8;
extern "C" int mem_00A9ED34;
extern "C" int mem_00B5AEDC;
extern "C" int mem_00A9ED38;
extern "C" int mem_00B5AEE0;
extern "C" int mem_00A9ED3C;
extern "C" int mem_00B5AEE4;
extern "C" int mem_00A9ED40;
extern "C" int mem_00B5AEE8;
extern "C" int mem_00A9ED44;
extern "C" int mem_00B5AEEC;
extern "C" int mem_00A9ED48;
extern "C" int mem_00B5AEF0;
extern "C" int mem_00A9ED4C;
extern "C" int mem_00B5AEF4;
extern "C" int mem_00A9ED50;
extern "C" int mem_00B5AEF8;
extern "C" int mem_00A9ED54;
extern "C" int mem_00B5AEFC;
extern "C" int mem_00A9ED58;
extern "C" int mem_00B5AF00;
extern "C" int mem_00A9ED5C;
extern "C" int mem_00B5AF04;
extern "C" int mem_00A9ED60;
extern "C" int mem_00B5AF08;
extern "C" int mem_00A9ED64;
extern "C" int mem_00B5AF0C;
extern "C" int mem_00A9ED68;
extern "C" int mem_00B5AF10;
extern "C" int mem_00A9ED6C;
extern "C" int mem_00B5AF14;
extern "C" int mem_00A9ED70;
extern "C" int mem_00B5AF18;
extern "C" int mem_00A9ED74;
extern "C" int mem_00B5AF1C;
extern "C" int mem_00A9ED78;
extern "C" int mem_00B5AF20;
extern "C" int mem_00A9ED7C;
extern "C" int mem_00B5AF24;
extern "C" int mem_00A9ED80;
extern "C" int mem_00B5AF28;
extern "C" int mem_00A9ED84;
extern "C" int mem_00B5AF2C;
extern "C" int mem_00A9ED88;
extern "C" int mem_00B5AF30;
extern "C" int mem_00B5AF34;
extern "C" int mem_00A9ED8C;
extern "C" int mem_00A9ED90;
extern "C" int mem_00B5AF38;
extern "C" int mem_00A9ED94;
extern "C" int mem_00B5AF3C;
extern "C" int mem_00A9ED98;
extern "C" int mem_00B5AF40;
extern "C" int mem_00A9ED9C;
extern "C" int mem_00B5AF44;
extern "C" int mem_00A9EDA0;
extern "C" int mem_00B5AF48;
extern "C" int mem_00A9EDA4;
extern "C" int mem_00B5AF4C;
extern "C" int mem_00A9EDA8;
extern "C" int mem_00B5AF50;
extern "C" int mem_00A9EDAC;
extern "C" int mem_00B5AF54;
extern "C" int mem_00A9EDB0;
extern "C" int mem_00B5AF58;
extern "C" int mem_00A9EDB4;
extern "C" int mem_00B5AF5C;
extern "C" int mem_00A9EDB8;
extern "C" int mem_00B5AF60;
extern "C" int mem_00A9EDBC;
extern "C" int mem_00B5AF64;
extern "C" int mem_00A9EDC0;
extern "C" int mem_00B5AF68;
extern "C" int mem_00A9EDC4;
extern "C" int mem_00B5AF6C;
extern "C" int mem_00A9EDC8;
extern "C" int mem_00B5AF70;
extern "C" int mem_00A9EDCC;
extern "C" int mem_00B5AF74;
extern "C" int mem_00A9EDD0;
extern "C" int mem_00B5AF78;
extern "C" int mem_00A9EDD4;
extern "C" int mem_00B5AF7C;
extern "C" int mem_00A9EDD8;
extern "C" int mem_00B5AF80;
extern "C" int mem_00A9EDDC;
extern "C" int mem_00B5AF84;
extern "C" int mem_00A9EDE0;
extern "C" int mem_00B5AF88;
extern "C" int mem_00A9EDE4;
extern "C" int mem_00B5AF8C;
extern "C" int mem_00A9EDE8;
extern "C" int mem_00B5AF90;
extern "C" int mem_00A9EDEC;
extern "C" int mem_00B5AF94;
extern "C" int mem_00A9EDF0;
extern "C" int mem_00B5AF98;
extern "C" int mem_00A9EDF4;
extern "C" int mem_00B5AF9C;
extern "C" int mem_00A9EDF8;
extern "C" int mem_00B5AFA0;
extern "C" int mem_00A9EDFC;
extern "C" int mem_00B5AFA4;
extern "C" int mem_00A9EE00;
extern "C" int mem_00B5AFA8;
extern "C" int mem_00A9EE04;
extern "C" int mem_00B5AFAC;
extern "C" int mem_00A9EE08;
extern "C" int mem_00B5AFB0;
extern "C" int mem_00A9EE0C;
extern "C" int mem_00B5AFB4;
extern "C" int mem_00A9EE10;
extern "C" int mem_00B5AFB8;
extern "C" int mem_00A9EE14;
extern "C" int mem_00B5AFBC;
extern "C" int mem_00A9EE18;
extern "C" int mem_00B5AFC0;
extern "C" int mem_00A9EE1C;
extern "C" int mem_00B5AFC4;
extern "C" int mem_00A9EE20;
extern "C" int mem_00B5AFC8;
extern "C" int mem_00A9EE24;
extern "C" int mem_00B5AFCC;
extern "C" int mem_00A9EE28;
extern "C" int mem_00B5AFD0;
extern "C" int mem_00B5AFD4;
extern "C" int mem_00B5AFD8;
extern "C" int mem_00A9EE2C;
extern "C" int mem_00A9EE30;
extern "C" int mem_00A9EE34;
extern "C" int mem_00B5AFDC;
extern "C" int mem_00A9EE38;
extern "C" int mem_00B5AFE0;
extern "C" int mem_00A9EE3C;
extern "C" int mem_00B5AFE4;
extern "C" int mem_00A9EE40;
extern "C" int mem_00B5AFE8;
extern "C" int mem_00A9EE44;
extern "C" int mem_00B5AFEC;
extern "C" int mem_00A9EE48;
extern "C" int mem_00B5AFF0;
extern "C" int mem_00A9EE4C;
extern "C" int mem_00B5AFF4;
extern "C" int mem_00A9EE50;
extern "C" int mem_00B5AFF8;
extern "C" int mem_00A9EE54;
extern "C" int mem_00B5AFFC;
extern "C" int mem_00A9EE58;
extern "C" int mem_00B5B000;
extern "C" int mem_00A9EE5C;
extern "C" int mem_00B5B004;
extern "C" int mem_00A9EE60;
extern "C" int mem_00B5B008;
extern "C" int mem_00A9EE64;
extern "C" int mem_00B5B00C;
extern "C" int mem_00A9EE68;
extern "C" int mem_00B5B010;
extern "C" int mem_00A9EE6C;
extern "C" int mem_00B5B014;
extern "C" int mem_00A9EE70;
extern "C" int mem_00B5B018;
extern "C" int mem_00A9EE74;
extern "C" int mem_00B5B01C;
extern "C" int mem_00A9EE78;
extern "C" int mem_00B5B020;
extern "C" int mem_00A9EE7C;
extern "C" int mem_00B5B024;
extern "C" int mem_00A9EE80;
extern "C" int mem_00B5B028;
extern "C" int mem_00A9EE84;
extern "C" int mem_00B5B02C;
extern "C" int mem_00A9EE88;
extern "C" int mem_00B5B030;
extern "C" int mem_00A9EE8C;
extern "C" int mem_00B5B034;
extern "C" int mem_00A9EE90;
extern "C" int mem_00B5B038;
extern "C" int mem_00A9EE94;
extern "C" int mem_00B5B03C;
extern "C" int mem_00A9EE98;
extern "C" int mem_00B5B040;
extern "C" int mem_00A9EE9C;
extern "C" int mem_00B5B044;
extern "C" int mem_00A9EEA0;
extern "C" int mem_00B5B048;
extern "C" int mem_00A9EEA4;
extern "C" int mem_00B5B04C;
extern "C" int mem_00A9EEA8;
extern "C" int mem_00B5B050;
extern "C" int mem_00A9EEAC;
extern "C" int mem_00B5B054;
extern "C" int mem_00A9EEB0;
extern "C" int mem_00B5B058;
extern "C" int mem_00A9EEB4;
extern "C" int mem_00B5B05C;
extern "C" int mem_00A9EEB8;
extern "C" int mem_00B5B060;
extern "C" int mem_00A9EEBC;
extern "C" int mem_00B5B064;
extern "C" int mem_00A9EEC0;
extern "C" int mem_00B5B068;
extern "C" int mem_00A9EEC4;
extern "C" int mem_00B5B06C;
extern "C" int mem_00A9EEC8;
extern "C" int mem_00B5B070;
extern "C" int mem_00A9EECC;
extern "C" int mem_00B5B074;
extern "C" int mem_00B5B078;
extern "C" int mem_00A9EED0;
extern "C" int mem_00A9EED4;
extern "C" int mem_00B5B07C;
extern "C" int mem_00A9EED8;
extern "C" int mem_00B5B080;
extern "C" int mem_00A9EEDC;
extern "C" int mem_00B5B084;
extern "C" int mem_00A9EEE0;
extern "C" int mem_00B5B088;
extern "C" int mem_00A9EEE4;
extern "C" int mem_00B5B08C;
extern "C" int mem_00A9EEE8;
extern "C" int mem_00B5B090;
extern "C" int mem_00A9EEEC;
extern "C" int mem_00B5B094;
extern "C" int mem_00A9EEF0;
extern "C" int mem_00B5B098;
extern "C" int mem_00A9EEF4;
extern "C" int mem_00B5B09C;
extern "C" int mem_00A9EEF8;
extern "C" int mem_00B5B0A0;
extern "C" int mem_00A9EEFC;
extern "C" int mem_00B5B0A4;
extern "C" int mem_00A9EF00;
extern "C" int mem_00B5B0A8;
extern "C" int mem_00A9EF04;
extern "C" int mem_00B5B0AC;
extern "C" int mem_00A9EF08;
extern "C" int mem_00B5B0B0;
extern "C" int mem_00A9EF0C;
extern "C" int mem_00B5B0B4;
extern "C" int mem_00A9EF10;
extern "C" int mem_00B5B0B8;
extern "C" int mem_00A9EF14;
extern "C" int mem_00B5B0BC;
extern "C" int mem_00A9EF18;
extern "C" int mem_00B5B0C0;
extern "C" int mem_00A9EF1C;
extern "C" int mem_00B5B0C4;
extern "C" int mem_00A9EF20;
extern "C" int mem_00B5B0C8;
extern "C" int mem_00A9EF24;
extern "C" int mem_00B5B0CC;
extern "C" int mem_00A9EF28;
extern "C" int mem_00B5B0D0;
extern "C" int mem_00A9EF2C;
extern "C" int mem_00B5B0D4;
extern "C" int mem_00A9EF30;
extern "C" int mem_00B5B0D8;
extern "C" int mem_00A9EF34;
extern "C" int mem_00B5B0DC;
extern "C" int mem_00A9EF38;
extern "C" int mem_00B5B0E0;
extern "C" int mem_00A9EF3C;
extern "C" int mem_00B5B0E4;
extern "C" int mem_00A9EF40;
extern "C" int mem_00B5B0E8;
extern "C" int mem_00A9EF44;
extern "C" int mem_00B5B0EC;
extern "C" int mem_00A9EF48;
extern "C" int mem_00B5B0F0;
extern "C" int mem_00A9EF4C;
extern "C" int mem_00B5B0F4;
extern "C" int mem_00A9EF50;
extern "C" int mem_00B5B0F8;
extern "C" int mem_00A9EF54;
extern "C" int mem_00B5B0FC;
extern "C" int mem_00A9EF58;
extern "C" int mem_00B5B100;
extern "C" int mem_00A9EF5C;
extern "C" int mem_00B5B104;
extern "C" int mem_00A9EF60;
extern "C" int mem_00B5B108;
extern "C" int mem_00A9EF64;
extern "C" int mem_00B5B10C;
extern "C" int mem_00A9EF68;
extern "C" int mem_00B5B110;
extern "C" int mem_00A9EF6C;
extern "C" int mem_00B5B114;
extern "C" int mem_00B5B118;
extern "C" int mem_00B5B11C;
extern "C" int mem_00A9EF70;
extern "C" int mem_00A9EF74;
extern "C" int mem_00A9EF78;
extern "C" int mem_00B5B120;
extern "C" int mem_00A9EF7C;
extern "C" int mem_00B5B124;
extern "C" int mem_00A9EF80;
extern "C" int mem_00B5B128;
extern "C" int mem_00A9EF84;
extern "C" int mem_00B5B12C;
extern "C" int mem_00A9EF88;
extern "C" int mem_00B5B130;
extern "C" int mem_00A9EF8C;
extern "C" int mem_00B5B134;
extern "C" int mem_00A9EF90;
extern "C" int mem_00B5B138;
extern "C" int mem_00A9EF94;
extern "C" int mem_00B5B13C;
extern "C" int mem_00A9EF98;
extern "C" int mem_00B5B140;
extern "C" int mem_00A9EF9C;
extern "C" int mem_00B5B144;
extern "C" int mem_00A9EFA0;
extern "C" int mem_00B5B148;
extern "C" int mem_00A9EFA4;
extern "C" int mem_00B5B14C;
extern "C" int mem_00A9EFA8;
extern "C" int mem_00B5B150;
extern "C" int mem_00A9EFAC;
extern "C" int mem_00B5B154;
extern "C" int mem_00A9EFB0;
extern "C" int mem_00B5B158;
extern "C" int mem_00A9EFB4;
extern "C" int mem_00B5B15C;
extern "C" int mem_00A9EFB8;
extern "C" int mem_00B5B160;
extern "C" int mem_00A9EFBC;
extern "C" int mem_00B5B164;
extern "C" int mem_00A9EFC0;
extern "C" int mem_00B5B168;
extern "C" int mem_00A9EFC4;
extern "C" int mem_00B5B16C;
extern "C" int mem_00A9EFC8;
extern "C" int mem_00B5B170;
extern "C" int mem_00A9EFCC;
extern "C" int mem_00B5B174;
extern "C" int mem_00A9EFD0;
extern "C" int mem_00B5B178;
extern "C" int mem_00A9EFD4;
extern "C" int mem_00B5B17C;
extern "C" int mem_00A9EFD8;
extern "C" int mem_00B5B180;
extern "C" int mem_00A9EFDC;
extern "C" int mem_00B5B184;
extern "C" int mem_00A9EFE0;
extern "C" int mem_00B5B188;
extern "C" int mem_00A9EFE4;
extern "C" int mem_00B5B18C;
extern "C" int mem_00A9EFE8;
extern "C" int mem_00B5B190;
extern "C" int mem_00A9EFEC;
extern "C" int mem_00B5B194;
extern "C" int mem_00A9EFF0;
extern "C" int mem_00B5B198;
extern "C" int mem_00A9EFF4;
extern "C" int mem_00B5B19C;
extern "C" int mem_00A9EFF8;
extern "C" int mem_00B5B1A0;
extern "C" int mem_00A9EFFC;
extern "C" int mem_00B5B1A4;
extern "C" int mem_00A9F000;
extern "C" int mem_00B5B1A8;
extern "C" int mem_00A9F004;
extern "C" int mem_00B5B1AC;
extern "C" int mem_00A9F008;
extern "C" int mem_00B5B1B0;
extern "C" int mem_00A9F00C;
extern "C" int mem_00B5B1B4;
extern "C" int mem_00A9F010;
extern "C" int mem_00B5B1B8;
extern "C" int mem_00B5B1BC;
extern "C" int mem_00A9F014;
extern "C" int mem_00A9F018;
extern "C" int mem_00B5B1C0;
extern "C" int mem_00A9F01C;
extern "C" int mem_00B5B1C4;
extern "C" int mem_00A9F020;
extern "C" int mem_00B5B1C8;
extern "C" int mem_00A9F024;
extern "C" int mem_00B5B1CC;
extern "C" int mem_00A9F028;
extern "C" int mem_00B5B1D0;
extern "C" int mem_00A9F02C;
extern "C" int mem_00B5B1D4;
extern "C" int mem_00A9F030;
extern "C" int mem_00B5B1D8;
extern "C" int mem_00A9F034;
extern "C" int mem_00B5B1DC;
extern "C" int mem_00A9F038;
extern "C" int mem_00B5B1E0;
extern "C" int mem_00A9F03C;
extern "C" int mem_00B5B1E4;
extern "C" int mem_00A9F040;
extern "C" int mem_00B5B1E8;
extern "C" int mem_00A9F044;
extern "C" int mem_00B5B1EC;
extern "C" int mem_00A9F048;
extern "C" int mem_00B5B1F0;
extern "C" int mem_00A9F04C;
extern "C" int mem_00B5B1F4;
extern "C" int mem_00A9F050;
extern "C" int mem_00B5B1F8;
extern "C" int mem_00A9F054;
extern "C" int mem_00B5B1FC;
extern "C" int mem_00A9F058;
extern "C" int mem_00B5B200;
extern "C" int mem_00A9F05C;
extern "C" int mem_00B5B204;
extern "C" int mem_00A9F060;
extern "C" int mem_00B5B208;
extern "C" int mem_00A9F064;
extern "C" int mem_00B5B20C;
extern "C" int mem_00A9F068;
extern "C" int mem_00B5B210;
extern "C" int mem_00A9F06C;
extern "C" int mem_00B5B214;
extern "C" int mem_00A9F070;
extern "C" int mem_00B5B218;
extern "C" int mem_00A9F074;
extern "C" int mem_00B5B21C;
extern "C" int mem_00A9F078;
extern "C" int mem_00B5B220;
extern "C" int mem_00A9F07C;
extern "C" int mem_00B5B224;
extern "C" int mem_00A9F080;
extern "C" int mem_00B5B228;
extern "C" int mem_00A9F084;
extern "C" int mem_00B5B22C;
extern "C" int mem_00A9F088;
extern "C" int mem_00B5B230;
extern "C" int mem_00A9F08C;
extern "C" int mem_00B5B234;
extern "C" int mem_00A9F090;
extern "C" int mem_00B5B238;
extern "C" int mem_00A9F094;
extern "C" int mem_00B5B23C;
extern "C" int mem_00A9F098;
extern "C" int mem_00B5B240;
extern "C" int mem_00A9F09C;
extern "C" int mem_00B5B244;
extern "C" int mem_00A9F0A0;
extern "C" int mem_00B5B248;
extern "C" int mem_00A9F0A4;
extern "C" int mem_00B5B24C;
extern "C" int mem_00A9F0A8;
extern "C" int mem_00B5B250;
extern "C" int mem_00A9F0AC;
extern "C" int mem_00B5B254;
extern "C" int mem_00A9F0B0;
extern "C" int mem_00B5B258;
extern "C" int mem_00B5B25C;
extern "C" int mem_00B5B260;
extern "C" int mem_00A9F0B4;
extern "C" int mem_00A9F0B8;
extern "C" int mem_00A9F0BC;
extern "C" int mem_00B5B264;
extern "C" int mem_00A9F0C0;
extern "C" int mem_00B5B268;
extern "C" int mem_00A9F0C4;
extern "C" int mem_00B5B26C;
extern "C" int mem_00A9F0C8;
extern "C" int mem_00B5B270;
extern "C" int mem_00A9F0CC;
extern "C" int mem_00B5B274;
extern "C" int mem_00A9F0D0;
extern "C" int mem_00B5B278;
extern "C" int mem_00A9F0D4;
extern "C" int mem_00B5B27C;
extern "C" int mem_00A9F0D8;
extern "C" int mem_00B5B280;
extern "C" int mem_00A9F0DC;
extern "C" int mem_00B5B284;
extern "C" int mem_00A9F0E0;
extern "C" int mem_00B5B288;
extern "C" int mem_00A9F0E4;
extern "C" int mem_00B5B28C;
extern "C" int mem_00A9F0E8;
extern "C" int mem_00B5B290;
extern "C" int mem_00A9F0EC;
extern "C" int mem_00B5B294;
extern "C" int mem_00A9F0F0;
extern "C" int mem_00B5B298;
extern "C" int mem_00A9F0F4;
extern "C" int mem_00B5B29C;
extern "C" int mem_00A9F0F8;
extern "C" int mem_00B5B2A0;
extern "C" int mem_00A9F0FC;
extern "C" int mem_00B5B2A4;
extern "C" int mem_00A9F100;
extern "C" int mem_00B5B2A8;
extern "C" int mem_00A9F104;
extern "C" int mem_00B5B2AC;
extern "C" int mem_00A9F108;
extern "C" int mem_00B5B2B0;
extern "C" int mem_00A9F10C;
extern "C" int mem_00B5B2B4;
extern "C" int mem_00A9F110;
extern "C" int mem_00B5B2B8;
extern "C" int mem_00A9F114;
extern "C" int mem_00B5B2BC;
extern "C" int mem_00A9F118;
extern "C" int mem_00B5B2C0;
extern "C" int mem_00A9F11C;
extern "C" int mem_00B5B2C4;
extern "C" int mem_00A9F120;
extern "C" int mem_00B5B2C8;
extern "C" int mem_00A9F124;
extern "C" int mem_00B5B2CC;
extern "C" int mem_00A9F128;
extern "C" int mem_00B5B2D0;
extern "C" int mem_00A9F12C;
extern "C" int mem_00B5B2D4;
extern "C" int mem_00A9F130;
extern "C" int mem_00B5B2D8;
extern "C" int mem_00A9F134;
extern "C" int mem_00B5B2DC;
extern "C" int mem_00A9F138;
extern "C" int mem_00B5B2E0;
extern "C" int mem_00A9F13C;
extern "C" int mem_00B5B2E4;
extern "C" int mem_00A9F140;
extern "C" int mem_00B5B2E8;
extern "C" int mem_00A9F144;
extern "C" int mem_00B5B2EC;
extern "C" int mem_00A9F148;
extern "C" int mem_00B5B2F0;
extern "C" int mem_00A9F14C;
extern "C" int mem_00B5B2F4;
extern "C" int mem_00A9F150;
extern "C" int mem_00B5B2F8;
extern "C" int mem_00A9F154;
extern "C" int mem_00B5B2FC;
extern "C" int mem_00B5B300;
extern "C" int mem_00A9F158;
extern "C" int mem_00A9F15C;
extern "C" int mem_00B5B304;
extern "C" int mem_00A9F160;
extern "C" int mem_00B5B308;
extern "C" int mem_00A9F164;
extern "C" int mem_00B5B30C;
extern "C" int mem_00A9F168;
extern "C" int mem_00B5B310;
extern "C" int mem_00A9F16C;
extern "C" int mem_00B5B314;
extern "C" int mem_00A9F170;
extern "C" int mem_00B5B318;
extern "C" int mem_00A9F174;
extern "C" int mem_00B5B31C;
extern "C" int mem_00A9F178;
extern "C" int mem_00B5B320;
extern "C" int mem_00A9F17C;
extern "C" int mem_00B5B324;
extern "C" int mem_00A9F180;
extern "C" int mem_00B5B328;
extern "C" int mem_00A9F184;
extern "C" int mem_00B5B32C;
extern "C" int mem_00A9F188;
extern "C" int mem_00B5B330;
extern "C" int mem_00A9F18C;
extern "C" int mem_00B5B334;
extern "C" int mem_00A9F190;
extern "C" int mem_00B5B338;
extern "C" int mem_00A9F194;
extern "C" int mem_00B5B33C;
extern "C" int mem_00A9F198;
extern "C" int mem_00B5B340;
extern "C" int mem_00A9F19C;
extern "C" int mem_00B5B344;
extern "C" int mem_00A9F1A0;
extern "C" int mem_00B5B348;
extern "C" int mem_00A9F1A4;
extern "C" int mem_00B5B34C;
extern "C" int mem_00A9F1A8;
extern "C" int mem_00B5B350;
extern "C" int mem_00A9F1AC;
extern "C" int mem_00B5B354;
extern "C" int mem_00A9F1B0;
extern "C" int mem_00B5B358;
extern "C" int mem_00A9F1B4;
extern "C" int mem_00B5B35C;
extern "C" int mem_00A9F1B8;
extern "C" int mem_00B5B360;
extern "C" int mem_00A9F1BC;
extern "C" int mem_00B5B364;
extern "C" int mem_00A9F1C0;
extern "C" int mem_00B5B368;
extern "C" int mem_00A9F1C4;
extern "C" int mem_00B5B36C;
extern "C" int mem_00A9F1C8;
extern "C" int mem_00B5B370;
extern "C" int mem_00A9F1CC;
extern "C" int mem_00B5B374;
extern "C" int mem_00A9F1D0;
extern "C" int mem_00B5B378;
extern "C" int mem_00A9F1D4;
extern "C" int mem_00B5B37C;
extern "C" int mem_00A9F1D8;
extern "C" int mem_00B5B380;
extern "C" int mem_00A9F1DC;
extern "C" int mem_00B5B384;
extern "C" int mem_00A9F1E0;
extern "C" int mem_00B5B388;
extern "C" int mem_00A9F1E4;
extern "C" int mem_00B5B38C;
extern "C" int mem_00A9F1E8;
extern "C" int mem_00B5B390;
extern "C" int mem_00A9F1EC;
extern "C" int mem_00B5B394;
extern "C" int mem_00A9F1F0;
extern "C" int mem_00B5B398;
extern "C" int mem_00A9F1F4;
extern "C" int mem_00B5B39C;
extern "C" int mem_00B5B3A0;
extern "C" int mem_00B5B3A4;
extern "C" int mem_00A9F1F8;
extern "C" int mem_00A9F1FC;
extern "C" int mem_00A9F200;
extern "C" int mem_00B5B3A8;
extern "C" int mem_00A9F204;
extern "C" int mem_00B5B3AC;
extern "C" int mem_00A9F208;
extern "C" int mem_00B5B3B0;
extern "C" int mem_00A9F20C;
extern "C" int mem_00B5B3B4;
extern "C" int mem_00A9F210;
extern "C" int mem_00B5B3B8;
extern "C" int mem_00A9F214;
extern "C" int mem_00B5B3BC;
extern "C" int mem_00A9F218;
extern "C" int mem_00B5B3C0;
extern "C" int mem_00A9F21C;
extern "C" int mem_00B5B3C4;
extern "C" int mem_00A9F220;
extern "C" int mem_00B5B3C8;
extern "C" int mem_00A9F224;
extern "C" int mem_00B5B3CC;
extern "C" int mem_00A9F228;
extern "C" int mem_00B5B3D0;
extern "C" int mem_00A9F22C;
extern "C" int mem_00B5B3D4;
extern "C" int mem_00A9F230;
extern "C" int mem_00B5B3D8;
extern "C" int mem_00A9F234;
extern "C" int mem_00B5B3DC;
extern "C" int mem_00A9F238;
extern "C" int mem_00B5B3E0;
extern "C" int mem_00A9F23C;
extern "C" int mem_00B5B3E4;
extern "C" int mem_00A9F240;
extern "C" int mem_00B5B3E8;
extern "C" int mem_00A9F244;
extern "C" int mem_00B5B3EC;
extern "C" int mem_00A9F248;
extern "C" int mem_00B5B3F0;
extern "C" int mem_00A9F24C;
extern "C" int mem_00B5B3F4;
extern "C" int mem_00A9F250;
extern "C" int mem_00B5B3F8;
extern "C" int mem_00A9F254;
extern "C" int mem_00B5B3FC;
extern "C" int mem_00A9F258;
extern "C" int mem_00B5B400;
extern "C" int mem_00A9F25C;
extern "C" int mem_00B5B404;
extern "C" int mem_00A9F260;
extern "C" int mem_00B5B408;
extern "C" int mem_00A9F264;
extern "C" int mem_00B5B40C;
extern "C" int mem_00A9F268;
extern "C" int mem_00B5B410;
extern "C" int mem_00A9F26C;
extern "C" int mem_00B5B414;
extern "C" int mem_00A9F270;
extern "C" int mem_00B5B418;
extern "C" int mem_00A9F274;
extern "C" int mem_00B5B41C;
extern "C" int mem_00A9F278;
extern "C" int mem_00B5B420;
extern "C" int mem_00A9F27C;
extern "C" int mem_00B5B424;
extern "C" int mem_00A9F280;
extern "C" int mem_00B5B428;
extern "C" int mem_00A9F284;
extern "C" int mem_00B5B42C;
extern "C" int mem_00A9F288;
extern "C" int mem_00B5B430;
extern "C" int mem_00A9F28C;
extern "C" int mem_00B5B434;
extern "C" int mem_00A9F290;
extern "C" int mem_00B5B438;
extern "C" int mem_00A9F294;
extern "C" int mem_00B5B43C;
extern "C" int mem_00A9F298;
extern "C" int mem_00B5B440;
extern "C" int mem_00B5B444;
extern "C" int mem_00A9F29C;
extern "C" int mem_00A9F2A0;
extern "C" int mem_00B5B448;
extern "C" int mem_00A9F2A4;
extern "C" int mem_00B5B44C;
extern "C" int mem_00A9F2A8;
extern "C" int mem_00B5B450;
extern "C" int mem_00A9F2AC;
extern "C" int mem_00B5B454;
extern "C" int mem_00A9F2B0;
extern "C" int mem_00B5B458;
extern "C" int mem_00A9F2B4;
extern "C" int mem_00B5B45C;
extern "C" int mem_00A9F2B8;
extern "C" int mem_00B5B460;
extern "C" int mem_00A9F2BC;
extern "C" int mem_00B5B464;
extern "C" int mem_00A9F2C0;
extern "C" int mem_00B5B468;
extern "C" int mem_00A9F2C4;
extern "C" int mem_00B5B46C;
extern "C" int mem_00A9F2C8;
extern "C" int mem_00B5B470;
extern "C" int mem_00A9F2CC;
extern "C" int mem_00B5B474;
extern "C" int mem_00A9F2D0;
extern "C" int mem_00B5B478;
extern "C" int mem_00A9F2D4;
extern "C" int mem_00B5B47C;
extern "C" int mem_00A9F2D8;
extern "C" int mem_00B5B480;
extern "C" int mem_00A9F2DC;
extern "C" int mem_00B5B484;
extern "C" int mem_00A9F2E0;
extern "C" int mem_00B5B488;
extern "C" int mem_00A9F2E4;
extern "C" int mem_00B5B48C;
extern "C" int mem_00A9F2E8;
extern "C" int mem_00B5B490;
extern "C" int mem_00A9F2EC;
extern "C" int mem_00B5B494;
extern "C" int mem_00A9F2F0;
extern "C" int mem_00B5B498;
extern "C" int mem_00A9F2F4;
extern "C" int mem_00B5B49C;
extern "C" int mem_00A9F2F8;
extern "C" int mem_00B5B4A0;
extern "C" int mem_00A9F2FC;
extern "C" int mem_00B5B4A4;
extern "C" int mem_00A9F300;
extern "C" int mem_00B5B4A8;
extern "C" int mem_00A9F304;
extern "C" int mem_00B5B4AC;
extern "C" int mem_00A9F308;
extern "C" int mem_00B5B4B0;
extern "C" int mem_00A9F30C;
extern "C" int mem_00B5B4B4;
extern "C" int mem_00A9F310;
extern "C" int mem_00B5B4B8;
extern "C" int mem_00A9F314;
extern "C" int mem_00B5B4BC;
extern "C" int mem_00A9F318;
extern "C" int mem_00B5B4C0;
extern "C" int mem_00A9F31C;
extern "C" int mem_00B5B4C4;
extern "C" int mem_00A9F320;
extern "C" int mem_00B5B4C8;
extern "C" int mem_00A9F324;
extern "C" int mem_00B5B4CC;
extern "C" int mem_00A9F328;
extern "C" int mem_00B5B4D0;
extern "C" int mem_00A9F32C;
extern "C" int mem_00B5B4D4;
extern "C" int mem_00A9F330;
extern "C" int mem_00B5B4D8;
extern "C" int mem_00A9F334;
extern "C" int mem_00B5B4DC;
extern "C" int mem_00A9F338;
extern "C" int mem_00B5B4E0;
extern "C" int mem_00B5B4E4;
extern "C" int mem_00B5B4E8;
extern "C" int mem_00A9F33C;
extern "C" int mem_00A9F340;
extern "C" int mem_00A9F344;
extern "C" int mem_00B5B4EC;
extern "C" int mem_00A9F348;
extern "C" int mem_00B5B4F0;
extern "C" int mem_00A9F34C;
extern "C" int mem_00B5B4F4;
extern "C" int mem_00A9F350;
extern "C" int mem_00B5B4F8;
extern "C" int mem_00A9F354;
extern "C" int mem_00B5B4FC;
extern "C" int mem_00A9F358;
extern "C" int mem_00B5B500;
extern "C" int mem_00A9F35C;
extern "C" int mem_00B5B504;
extern "C" int mem_00A9F360;
extern "C" int mem_00B5B508;
extern "C" int mem_00A9F364;
extern "C" int mem_00B5B50C;
extern "C" int mem_00A9F368;
extern "C" int mem_00B5B510;
extern "C" int mem_00A9F36C;
extern "C" int mem_00B5B514;
extern "C" int mem_00A9F370;
extern "C" int mem_00B5B518;
extern "C" int mem_00A9F374;
extern "C" int mem_00B5B51C;
extern "C" int mem_00A9F378;
extern "C" int mem_00B5B520;
extern "C" int mem_00A9F37C;
extern "C" int mem_00B5B524;
extern "C" int mem_00A9F380;
extern "C" int mem_00B5B528;
extern "C" int mem_00A9F384;
extern "C" int mem_00B5B52C;
extern "C" int mem_00A9F388;
extern "C" int mem_00B5B530;
extern "C" int mem_00A9F38C;
extern "C" int mem_00B5B534;
extern "C" int mem_00A9F390;
extern "C" int mem_00B5B538;
extern "C" int mem_00A9F394;
extern "C" int mem_00B5B53C;
extern "C" int mem_00A9F398;
extern "C" int mem_00B5B540;
extern "C" int mem_00A9F39C;
extern "C" int mem_00B5B544;
extern "C" int mem_00A9F3A0;
extern "C" int mem_00B5B548;
extern "C" int mem_00A9F3A4;
extern "C" int mem_00B5B54C;
extern "C" int mem_00A9F3A8;
extern "C" int mem_00B5B550;
extern "C" int mem_00A9F3AC;
extern "C" int mem_00B5B554;
extern "C" int mem_00A9F3B0;
extern "C" int mem_00B5B558;
extern "C" int mem_00A9F3B4;
extern "C" int mem_00B5B55C;
extern "C" int mem_00A9F3B8;
extern "C" int mem_00B5B560;
extern "C" int mem_00A9F3BC;
extern "C" int mem_00B5B564;
extern "C" int mem_00A9F3C0;
extern "C" int mem_00B5B568;
extern "C" int mem_00A9F3C4;
extern "C" int mem_00B5B56C;
extern "C" int mem_00A9F3C8;
extern "C" int mem_00B5B570;
extern "C" int mem_00A9F3CC;
extern "C" int mem_00B5B574;
extern "C" int mem_00A9F3D0;
extern "C" int mem_00B5B578;
extern "C" int mem_00A9F3D4;
extern "C" int mem_00B5B57C;
extern "C" int mem_00A9F3D8;
extern "C" int mem_00B5B580;
extern "C" int mem_00A9F3DC;
extern "C" int mem_00B5B584;
extern "C" int mem_00B5B588;
extern "C" int mem_00A9F3E0;
extern "C" int mem_00A9F3E4;
extern "C" int mem_00B5B58C;
extern "C" int mem_00A9F3E8;
extern "C" int mem_00B5B590;
extern "C" int mem_00A9F3EC;
extern "C" int mem_00B5B594;
extern "C" int mem_00A9F3F0;
extern "C" int mem_00B5B598;
extern "C" int mem_00A9F3F4;
extern "C" int mem_00B5B59C;
extern "C" int mem_00A9F3F8;
extern "C" int mem_00B5B5A0;
extern "C" int mem_00A9F3FC;
extern "C" int mem_00B5B5A4;
extern "C" int mem_00A9F400;
extern "C" int mem_00B5B5A8;
extern "C" int mem_00A9F404;
extern "C" int mem_00B5B5AC;
extern "C" int mem_00A9F408;
extern "C" int mem_00B5B5B0;
extern "C" int mem_00A9F40C;
extern "C" int mem_00B5B5B4;
extern "C" int mem_00A9F410;
extern "C" int mem_00B5B5B8;
extern "C" int mem_00A9F414;
extern "C" int mem_00B5B5BC;
extern "C" int mem_00A9F418;
extern "C" int mem_00B5B5C0;
extern "C" int mem_00A9F41C;
extern "C" int mem_00B5B5C4;
extern "C" int mem_00A9F420;
extern "C" int mem_00B5B5C8;
extern "C" int mem_00A9F424;
extern "C" int mem_00B5B5CC;
extern "C" int mem_00A9F428;
extern "C" int mem_00B5B5D0;
extern "C" int mem_00A9F42C;
extern "C" int mem_00B5B5D4;
extern "C" int mem_00A9F430;
extern "C" int mem_00B5B5D8;
extern "C" int mem_00A9F434;
extern "C" int mem_00B5B5DC;
extern "C" int mem_00A9F438;
extern "C" int mem_00B5B5E0;
extern "C" int mem_00A9F43C;
extern "C" int mem_00B5B5E4;
extern "C" int mem_00A9F440;
extern "C" int mem_00B5B5E8;
extern "C" int mem_00A9F444;
extern "C" int mem_00B5B5EC;
extern "C" int mem_00A9F448;
extern "C" int mem_00B5B5F0;
extern "C" int mem_00A9F44C;
extern "C" int mem_00B5B5F4;
extern "C" int mem_00A9F450;
extern "C" int mem_00B5B5F8;
extern "C" int mem_00A9F454;
extern "C" int mem_00B5B5FC;
extern "C" int mem_00A9F458;
extern "C" int mem_00B5B600;
extern "C" int mem_00A9F45C;
extern "C" int mem_00B5B604;
extern "C" int mem_00A9F460;
extern "C" int mem_00B5B608;
extern "C" int mem_00A9F464;
extern "C" int mem_00B5B60C;
extern "C" int mem_00A9F468;
extern "C" int mem_00B5B610;
extern "C" int mem_00A9F46C;
extern "C" int mem_00B5B614;
extern "C" int mem_00A9F470;
extern "C" int mem_00B5B618;
extern "C" int mem_00A9F474;
extern "C" int mem_00B5B61C;
extern "C" int mem_00A9F478;
extern "C" int mem_00B5B620;
extern "C" int mem_00A9F47C;
extern "C" int mem_00B5B624;
extern "C" int mem_00B5B628;
extern "C" int mem_00B5B62C;
extern "C" int mem_00A9F480;
extern "C" int mem_00A9F484;
extern "C" int mem_00A9F488;
extern "C" int mem_00B5B630;
extern "C" int mem_00A9F48C;
extern "C" int mem_00B5B634;
extern "C" int mem_00A9F490;
extern "C" int mem_00B5B638;
extern "C" int mem_00A9F494;
extern "C" int mem_00B5B63C;
extern "C" int mem_00A9F498;
extern "C" int mem_00B5B640;
extern "C" int mem_00A9F49C;
extern "C" int mem_00B5B644;
extern "C" int mem_00A9F4A0;
extern "C" int mem_00B5B648;
extern "C" int mem_00A9F4A4;
extern "C" int mem_00B5B64C;
extern "C" int mem_00A9F4A8;
extern "C" int mem_00B5B650;
extern "C" int mem_00A9F4AC;
extern "C" int mem_00B5B654;
extern "C" int mem_00A9F4B0;
extern "C" int mem_00B5B658;
extern "C" int mem_00A9F4B4;
extern "C" int mem_00B5B65C;
extern "C" int mem_00A9F4B8;
extern "C" int mem_00B5B660;
extern "C" int mem_00A9F4BC;
extern "C" int mem_00B5B664;
extern "C" int mem_00A9F4C0;
extern "C" int mem_00B5B668;
extern "C" int mem_00A9F4C4;
extern "C" int mem_00B5B66C;
extern "C" int mem_00A9F4C8;
extern "C" int mem_00B5B670;
extern "C" int mem_00A9F4CC;
extern "C" int mem_00B5B674;
extern "C" int mem_00A9F4D0;
extern "C" int mem_00B5B678;
extern "C" int mem_00A9F4D4;
extern "C" int mem_00B5B67C;
extern "C" int mem_00A9F4D8;
extern "C" int mem_00B5B680;
extern "C" int mem_00A9F4DC;
extern "C" int mem_00B5B684;
extern "C" int mem_00A9F4E0;
extern "C" int mem_00B5B688;
extern "C" int mem_00A9F4E4;
extern "C" int mem_00B5B68C;
extern "C" int mem_00A9F4E8;
extern "C" int mem_00B5B690;
extern "C" int mem_00A9F4EC;
extern "C" int mem_00B5B694;
extern "C" int mem_00A9F4F0;
extern "C" int mem_00B5B698;
extern "C" int mem_00A9F4F4;
extern "C" int mem_00B5B69C;
extern "C" int mem_00A9F4F8;
extern "C" int mem_00B5B6A0;
extern "C" int mem_00A9F4FC;
extern "C" int mem_00B5B6A4;
extern "C" int mem_00A9F500;
extern "C" int mem_00B5B6A8;
extern "C" int mem_00A9F504;
extern "C" int mem_00B5B6AC;
extern "C" int mem_00A9F508;
extern "C" int mem_00B5B6B0;
extern "C" int mem_00A9F50C;
extern "C" int mem_00B5B6B4;
extern "C" int mem_00A9F510;
extern "C" int mem_00B5B6B8;
extern "C" int mem_00A9F514;
extern "C" int mem_00B5B6BC;
extern "C" int mem_00A9F518;
extern "C" int mem_00B5B6C0;
extern "C" int mem_00A9F51C;
extern "C" int mem_00B5B6C4;
extern "C" int mem_00A9F520;
extern "C" int mem_00B5B6C8;
extern "C" int mem_00B5B6CC;
extern "C" int mem_00A9F524;
extern "C" int mem_00A9F528;
extern "C" int mem_00B5B6D0;
extern "C" int mem_00A9F52C;
extern "C" int mem_00B5B6D4;
extern "C" int mem_00A9F530;
extern "C" int mem_00B5B6D8;
extern "C" int mem_00A9F534;
extern "C" int mem_00B5B6DC;
extern "C" int mem_00A9F538;
extern "C" int mem_00B5B6E0;
extern "C" int mem_00A9F53C;
extern "C" int mem_00B5B6E4;
extern "C" int mem_00A9F540;
extern "C" int mem_00B5B6E8;
extern "C" int mem_00A9F544;
extern "C" int mem_00B5B6EC;
extern "C" int mem_00A9F548;
extern "C" int mem_00B5B6F0;
extern "C" int mem_00A9F54C;
extern "C" int mem_00B5B6F4;
extern "C" int mem_00A9F550;
extern "C" int mem_00B5B6F8;
extern "C" int mem_00A9F554;
extern "C" int mem_00B5B6FC;
extern "C" int mem_00A9F558;
extern "C" int mem_00B5B700;
extern "C" int mem_00A9F55C;
extern "C" int mem_00B5B704;
extern "C" int mem_00A9F560;
extern "C" int mem_00B5B708;
extern "C" int mem_00A9F564;
extern "C" int mem_00B5B70C;
extern "C" int mem_00A9F568;
extern "C" int mem_00B5B710;
extern "C" int mem_00A9F56C;
extern "C" int mem_00B5B714;
extern "C" int mem_00A9F570;
extern "C" int mem_00B5B718;
extern "C" int mem_00A9F574;
extern "C" int mem_00B5B71C;
extern "C" int mem_00A9F578;
extern "C" int mem_00B5B720;
extern "C" int mem_00A9F57C;
extern "C" int mem_00B5B724;
extern "C" int mem_00A9F580;
extern "C" int mem_00B5B728;
extern "C" int mem_00A9F584;
extern "C" int mem_00B5B72C;
extern "C" int mem_00A9F588;
extern "C" int mem_00B5B730;
extern "C" int mem_00A9F58C;
extern "C" int mem_00B5B734;
extern "C" int mem_00A9F590;
extern "C" int mem_00B5B738;
extern "C" int mem_00A9F594;
extern "C" int mem_00B5B73C;
extern "C" int mem_00A9F598;
extern "C" int mem_00B5B740;
extern "C" int mem_00A9F59C;
extern "C" int mem_00B5B744;
extern "C" int mem_00A9F5A0;
extern "C" int mem_00B5B748;
extern "C" int mem_00A9F5A4;
extern "C" int mem_00B5B74C;
extern "C" int mem_00A9F5A8;
extern "C" int mem_00B5B750;
extern "C" int mem_00A9F5AC;
extern "C" int mem_00B5B754;
extern "C" int mem_00A9F5B0;
extern "C" int mem_00B5B758;
extern "C" int mem_00A9F5B4;
extern "C" int mem_00B5B75C;
extern "C" int mem_00A9F5B8;
extern "C" int mem_00B5B760;
extern "C" int mem_00A9F5BC;
extern "C" int mem_00B5B764;
extern "C" int mem_00A9F5C0;
extern "C" int mem_00B5B768;
extern "C" int mem_00B5B76C;
extern "C" int mem_00B5B770;
extern "C" int mem_00A9F5C4;
extern "C" int mem_00A9F5C8;
extern "C" int mem_00A9F5CC;
extern "C" int mem_00B5B774;
extern "C" int mem_00A9F5D0;
extern "C" int mem_00B5B778;
extern "C" int mem_00A9F5D4;
extern "C" int mem_00B5B77C;
extern "C" int mem_00A9F5D8;
extern "C" int mem_00B5B780;
extern "C" int mem_00A9F5DC;
extern "C" int mem_00B5B784;
extern "C" int mem_00A9F5E0;
extern "C" int mem_00B5B788;
extern "C" int mem_00A9F5E4;
extern "C" int mem_00B5B78C;
extern "C" int mem_00A9F5E8;
extern "C" int mem_00B5B790;
extern "C" int mem_00A9F5EC;
extern "C" int mem_00B5B794;
extern "C" int mem_00A9F5F0;
extern "C" int mem_00B5B798;
extern "C" int mem_00A9F5F4;
extern "C" int mem_00B5B79C;
extern "C" int mem_00A9F5F8;
extern "C" int mem_00B5B7A0;
extern "C" int mem_00A9F5FC;
extern "C" int mem_00B5B7A4;
extern "C" int mem_00A9F600;
extern "C" int mem_00B5B7A8;
extern "C" int mem_00A9F604;
extern "C" int mem_00B5B7AC;
extern "C" int mem_00A9F608;
extern "C" int mem_00B5B7B0;
extern "C" int mem_00A9F60C;
extern "C" int mem_00B5B7B4;
extern "C" int mem_00A9F610;
extern "C" int mem_00B5B7B8;
extern "C" int mem_00A9F614;
extern "C" int mem_00B5B7BC;
extern "C" int mem_00A9F618;
extern "C" int mem_00B5B7C0;
extern "C" int mem_00A9F61C;
extern "C" int mem_00B5B7C4;
extern "C" int mem_00A9F620;
extern "C" int mem_00B5B7C8;
extern "C" int mem_00A9F624;
extern "C" int mem_00B5B7CC;
extern "C" int mem_00A9F628;
extern "C" int mem_00B5B7D0;
extern "C" int mem_00A9F62C;
extern "C" int mem_00B5B7D4;
extern "C" int mem_00A9F630;
extern "C" int mem_00B5B7D8;
extern "C" int mem_00A9F634;
extern "C" int mem_00B5B7DC;
extern "C" int mem_00A9F638;
extern "C" int mem_00B5B7E0;
extern "C" int mem_00A9F63C;
extern "C" int mem_00B5B7E4;
extern "C" int mem_00A9F640;
extern "C" int mem_00B5B7E8;
extern "C" int mem_00A9F644;
extern "C" int mem_00B5B7EC;
extern "C" int mem_00A9F648;
extern "C" int mem_00B5B7F0;
extern "C" int mem_00A9F64C;
extern "C" int mem_00B5B7F4;
extern "C" int mem_00A9F650;
extern "C" int mem_00B5B7F8;
extern "C" int mem_00A9F654;
extern "C" int mem_00B5B7FC;
extern "C" int mem_00A9F658;
extern "C" int mem_00B5B800;
extern "C" int mem_00A9F65C;
extern "C" int mem_00B5B804;
extern "C" int mem_00A9F660;
extern "C" int mem_00B5B808;
extern "C" int mem_00A9F664;
extern "C" int mem_00B5B80C;
extern "C" int mem_00B5B810;
extern "C" int mem_00A9F668;
extern "C" int mem_00A9F66C;
extern "C" int mem_00B5B814;
extern "C" int mem_00A9F670;
extern "C" int mem_00B5B818;
extern "C" int mem_00A9F674;
extern "C" int mem_00B5B81C;
extern "C" int mem_00A9F678;
extern "C" int mem_00B5B820;
extern "C" int mem_00A9F67C;
extern "C" int mem_00B5B824;
extern "C" int mem_00A9F680;
extern "C" int mem_00B5B828;
extern "C" int mem_00A9F684;
extern "C" int mem_00B5B82C;
extern "C" int mem_00A9F688;
extern "C" int mem_00B5B830;
extern "C" int mem_00A9F68C;
extern "C" int mem_00B5B834;
extern "C" int mem_00A9F690;
extern "C" int mem_00B5B838;
extern "C" int mem_00A9F694;
extern "C" int mem_00B5B83C;
extern "C" int mem_00A9F698;
extern "C" int mem_00B5B840;
extern "C" int mem_00A9F69C;
extern "C" int mem_00B5B844;
extern "C" int mem_00A9F6A0;
extern "C" int mem_00B5B848;
extern "C" int mem_00A9F6A4;
extern "C" int mem_00B5B84C;
extern "C" int mem_00A9F6A8;
extern "C" int mem_00B5B850;
extern "C" int mem_00A9F6AC;
extern "C" int mem_00B5B854;
extern "C" int mem_00A9F6B0;
extern "C" int mem_00B5B858;
extern "C" int mem_00A9F6B4;
extern "C" int mem_00B5B85C;
extern "C" int mem_00A9F6B8;
extern "C" int mem_00B5B860;
extern "C" int mem_00A9F6BC;
extern "C" int mem_00B5B864;
extern "C" int mem_00A9F6C0;
extern "C" int mem_00B5B868;
extern "C" int mem_00A9F6C4;
extern "C" int mem_00B5B86C;
extern "C" int mem_00A9F6C8;
extern "C" int mem_00B5B870;
extern "C" int mem_00A9F6CC;
extern "C" int mem_00B5B874;
extern "C" int mem_00A9F6D0;
extern "C" int mem_00B5B878;
extern "C" int mem_00A9F6D4;
extern "C" int mem_00B5B87C;
extern "C" int mem_00A9F6D8;
extern "C" int mem_00B5B880;
extern "C" int mem_00A9F6DC;
extern "C" int mem_00B5B884;
extern "C" int mem_00A9F6E0;
extern "C" int mem_00B5B888;
extern "C" int mem_00A9F6E4;
extern "C" int mem_00B5B88C;
extern "C" int mem_00A9F6E8;
extern "C" int mem_00B5B890;
extern "C" int mem_00A9F6EC;
extern "C" int mem_00B5B894;
extern "C" int mem_00A9F6F0;
extern "C" int mem_00B5B898;
extern "C" int mem_00A9F6F4;
extern "C" int mem_00B5B89C;
extern "C" int mem_00A9F6F8;
extern "C" int mem_00B5B8A0;
extern "C" int mem_00A9F6FC;
extern "C" int mem_00B5B8A4;
extern "C" int mem_00A9F700;
extern "C" int mem_00B5B8A8;
extern "C" int mem_00A9F704;
extern "C" int mem_00B5B8AC;
extern "C" int mem_00B5B8B0;
extern "C" int mem_00B5B8B4;
extern "C" int mem_00A9F708;
extern "C" int mem_00A9F70C;
extern "C" int mem_00A9F710;
extern "C" int mem_00B5B8B8;
extern "C" int mem_00A9F714;
extern "C" int mem_00B5B8BC;
extern "C" int mem_00A9F718;
extern "C" int mem_00B5B8C0;
extern "C" int mem_00A9F71C;
extern "C" int mem_00B5B8C4;
extern "C" int mem_00A9F720;
extern "C" int mem_00B5B8C8;
extern "C" int mem_00A9F724;
extern "C" int mem_00B5B8CC;
extern "C" int mem_00A9F728;
extern "C" int mem_00B5B8D0;
extern "C" int mem_00A9F72C;
extern "C" int mem_00B5B8D4;
extern "C" int mem_00A9F730;
extern "C" int mem_00B5B8D8;
extern "C" int mem_00A9F734;
extern "C" int mem_00B5B8DC;
extern "C" int mem_00A9F738;
extern "C" int mem_00B5B8E0;
extern "C" int mem_00A9F73C;
extern "C" int mem_00B5B8E4;
extern "C" int mem_00A9F740;
extern "C" int mem_00B5B8E8;
extern "C" int mem_00A9F744;
extern "C" int mem_00B5B8EC;
extern "C" int mem_00A9F748;
extern "C" int mem_00B5B8F0;
extern "C" int mem_00A9F74C;
extern "C" int mem_00B5B8F4;
extern "C" int mem_00A9F750;
extern "C" int mem_00B5B8F8;
extern "C" int mem_00A9F754;
extern "C" int mem_00B5B8FC;
extern "C" int mem_00A9F758;
extern "C" int mem_00B5B900;
extern "C" int mem_00A9F75C;
extern "C" int mem_00B5B904;
extern "C" int mem_00A9F760;
extern "C" int mem_00B5B908;
extern "C" int mem_00A9F764;
extern "C" int mem_00B5B90C;
extern "C" int mem_00A9F768;
extern "C" int mem_00B5B910;
extern "C" int mem_00A9F76C;
extern "C" int mem_00B5B914;
extern "C" int mem_00A9F770;
extern "C" int mem_00B5B918;
extern "C" int mem_00A9F774;
extern "C" int mem_00B5B91C;
extern "C" int mem_00A9F778;
extern "C" int mem_00B5B920;
extern "C" int mem_00A9F77C;
extern "C" int mem_00B5B924;
extern "C" int mem_00A9F780;
extern "C" int mem_00B5B928;
extern "C" int mem_00A9F784;
extern "C" int mem_00B5B92C;
extern "C" int mem_00A9F788;
extern "C" int mem_00B5B930;
extern "C" int mem_00A9F78C;
extern "C" int mem_00B5B934;
extern "C" int mem_00A9F790;
extern "C" int mem_00B5B938;
extern "C" int mem_00A9F794;
extern "C" int mem_00B5B93C;
extern "C" int mem_00A9F798;
extern "C" int mem_00B5B940;
extern "C" int mem_00A9F79C;
extern "C" int mem_00B5B944;
extern "C" int mem_00A9F7A0;
extern "C" int mem_00B5B948;
extern "C" int mem_00A9F7A4;
extern "C" int mem_00B5B94C;
extern "C" int mem_00A9F7A8;
extern "C" int mem_00B5B950;
extern "C" int mem_00B5B954;
extern "C" int mem_00A9F7AC;
extern "C" int mem_00A9F7B0;
extern "C" int mem_00B5B958;
extern "C" int mem_00A9F7B4;
extern "C" int mem_00B5B95C;
extern "C" int mem_00A9F7B8;
extern "C" int mem_00B5B960;
extern "C" int mem_00A9F7BC;
extern "C" int mem_00B5B964;
extern "C" int mem_00A9F7C0;
extern "C" int mem_00B5B968;
extern "C" int mem_00A9F7C4;
extern "C" int mem_00B5B96C;
extern "C" int mem_00A9F7C8;
extern "C" int mem_00B5B970;
extern "C" int mem_00A9F7CC;
extern "C" int mem_00B5B974;
extern "C" int mem_00A9F7D0;
extern "C" int mem_00B5B978;
extern "C" int mem_00A9F7D4;
extern "C" int mem_00B5B97C;
extern "C" int mem_00A9F7D8;
extern "C" int mem_00B5B980;
extern "C" int mem_00A9F7DC;
extern "C" int mem_00B5B984;
extern "C" int mem_00A9F7E0;
extern "C" int mem_00B5B988;
extern "C" int mem_00A9F7E4;
extern "C" int mem_00B5B98C;
extern "C" int mem_00A9F7E8;
extern "C" int mem_00B5B990;
extern "C" int mem_00A9F7EC;
extern "C" int mem_00B5B994;
extern "C" int mem_00A9F7F0;
extern "C" int mem_00B5B998;
extern "C" int mem_00A9F7F4;
extern "C" int mem_00B5B99C;
extern "C" int mem_00A9F7F8;
extern "C" int mem_00B5B9A0;
extern "C" int mem_00A9F7FC;
extern "C" int mem_00B5B9A4;
extern "C" int mem_00A9F800;
extern "C" int mem_00B5B9A8;
extern "C" int mem_00A9F804;
extern "C" int mem_00B5B9AC;
extern "C" int mem_00A9F808;
extern "C" int mem_00B5B9B0;
extern "C" int mem_00A9F80C;
extern "C" int mem_00B5B9B4;
extern "C" int mem_00A9F810;
extern "C" int mem_00B5B9B8;
extern "C" int mem_00A9F814;
extern "C" int mem_00B5B9BC;
extern "C" int mem_00A9F818;
extern "C" int mem_00B5B9C0;
extern "C" int mem_00A9F81C;
extern "C" int mem_00B5B9C4;
extern "C" int mem_00A9F820;
extern "C" int mem_00B5B9C8;
extern "C" int mem_00A9F824;
extern "C" int mem_00B5B9CC;
extern "C" int mem_00A9F828;
extern "C" int mem_00B5B9D0;
extern "C" int mem_00A9F82C;
extern "C" int mem_00B5B9D4;
extern "C" int mem_00A9F830;
extern "C" int mem_00B5B9D8;
extern "C" int mem_00A9F834;
extern "C" int mem_00B5B9DC;
extern "C" int mem_00A9F838;
extern "C" int mem_00B5B9E0;
extern "C" int mem_00A9F83C;
extern "C" int mem_00B5B9E4;
extern "C" int mem_00A9F840;
extern "C" int mem_00B5B9E8;
extern "C" int mem_00A9F844;
extern "C" int mem_00B5B9EC;
extern "C" int mem_00A9F848;
extern "C" int mem_00B5B9F0;
extern "C" int mem_00B5B9F4;
extern "C" int mem_00B5B9F8;
extern "C" int mem_00A9F84C;
extern "C" int mem_00A9F850;
extern "C" int mem_00A9F854;
extern "C" int mem_00B5B9FC;
extern "C" int mem_00A9F858;
extern "C" int mem_00B5BA00;
extern "C" int mem_00A9F85C;
extern "C" int mem_00B5BA04;
extern "C" int mem_00A9F860;
extern "C" int mem_00B5BA08;
extern "C" int mem_00A9F864;
extern "C" int mem_00B5BA0C;
extern "C" int mem_00A9F868;
extern "C" int mem_00B5BA10;
extern "C" int mem_00A9F86C;
extern "C" int mem_00B5BA14;
extern "C" int mem_00A9F870;
extern "C" int mem_00B5BA18;
extern "C" int mem_00A9F874;
extern "C" int mem_00B5BA1C;
extern "C" int mem_00A9F878;
extern "C" int mem_00B5BA20;
extern "C" int mem_00A9F87C;
extern "C" int mem_00B5BA24;
extern "C" int mem_00A9F880;
extern "C" int mem_00B5BA28;
extern "C" int mem_00A9F884;
extern "C" int mem_00B5BA2C;
extern "C" int mem_00A9F888;
extern "C" int mem_00B5BA30;
extern "C" int mem_00A9F88C;
extern "C" int mem_00B5BA34;
extern "C" int mem_00A9F890;
extern "C" int mem_00B5BA38;
extern "C" int mem_00A9F894;
extern "C" int mem_00B5BA3C;
extern "C" int mem_00A9F898;
extern "C" int mem_00B5BA40;
extern "C" int mem_00A9F89C;
extern "C" int mem_00B5BA44;
extern "C" int mem_00A9F8A0;
extern "C" int mem_00B5BA48;
extern "C" int mem_00A9F8A4;
extern "C" int mem_00B5BA4C;
extern "C" int mem_00A9F8A8;
extern "C" int mem_00B5BA50;
extern "C" int mem_00A9F8AC;
extern "C" int mem_00B5BA54;
extern "C" int mem_00A9F8B0;
extern "C" int mem_00B5BA58;
extern "C" int mem_00A9F8B4;
extern "C" int mem_00B5BA5C;
extern "C" int mem_00A9F8B8;
extern "C" int mem_00B5BA60;
extern "C" int mem_00A9F8BC;
extern "C" int mem_00B5BA64;
extern "C" int mem_00A9F8C0;
extern "C" int mem_00B5BA68;
extern "C" int mem_00A9F8C4;
extern "C" int mem_00B5BA6C;
extern "C" int mem_00A9F8C8;
extern "C" int mem_00B5BA70;
extern "C" int mem_00A9F8CC;
extern "C" int mem_00B5BA74;
extern "C" int mem_00A9F8D0;
extern "C" int mem_00B5BA78;
extern "C" int mem_00A9F8D4;
extern "C" int mem_00B5BA7C;
extern "C" int mem_00A9F8D8;
extern "C" int mem_00B5BA80;
extern "C" int mem_00A9F8DC;
extern "C" int mem_00B5BA84;
extern "C" int mem_00A9F8E0;
extern "C" int mem_00B5BA88;
extern "C" int mem_00A9F8E4;
extern "C" int mem_00B5BA8C;
extern "C" int mem_00A9F8E8;
extern "C" int mem_00B5BA90;
extern "C" int mem_00A9F8EC;
extern "C" int mem_00B5BA94;
extern "C" int mem_00B5BA98;
extern "C" int mem_00A9F8F0;
extern "C" int mem_00A9F8F4;
extern "C" int mem_00B5BA9C;
extern "C" int mem_00A9F8F8;
extern "C" int mem_00B5BAA0;
extern "C" int mem_00A9F8FC;
extern "C" int mem_00B5BAA4;
extern "C" int mem_00A9F900;
extern "C" int mem_00B5BAA8;
extern "C" int mem_00A9F904;
extern "C" int mem_00B5BAAC;
extern "C" int mem_00A9F908;
extern "C" int mem_00B5BAB0;
extern "C" int mem_00A9F90C;
extern "C" int mem_00B5BAB4;
extern "C" int mem_00A9F910;
extern "C" int mem_00B5BAB8;
extern "C" int mem_00A9F914;
extern "C" int mem_00B5BABC;
extern "C" int mem_00A9F918;
extern "C" int mem_00B5BAC0;
extern "C" int mem_00A9F91C;
extern "C" int mem_00B5BAC4;
extern "C" int mem_00A9F920;
extern "C" int mem_00B5BAC8;
extern "C" int mem_00A9F924;
extern "C" int mem_00B5BACC;
extern "C" int mem_00A9F928;
extern "C" int mem_00B5BAD0;
extern "C" int mem_00A9F92C;
extern "C" int mem_00B5BAD4;
extern "C" int mem_00A9F930;
extern "C" int mem_00B5BAD8;
extern "C" int mem_00A9F934;
extern "C" int mem_00B5BADC;
extern "C" int mem_00A9F938;
extern "C" int mem_00B5BAE0;
extern "C" int mem_00A9F93C;
extern "C" int mem_00B5BAE4;
extern "C" int mem_00A9F940;
extern "C" int mem_00B5BAE8;
extern "C" int mem_00A9F944;
extern "C" int mem_00B5BAEC;
extern "C" int mem_00A9F948;
extern "C" int mem_00B5BAF0;
extern "C" int mem_00A9F94C;
extern "C" int mem_00B5BAF4;
extern "C" int mem_00A9F950;
extern "C" int mem_00B5BAF8;
extern "C" int mem_00A9F954;
extern "C" int mem_00B5BAFC;
extern "C" int mem_00A9F958;
extern "C" int mem_00B5BB00;
extern "C" int mem_00A9F95C;
extern "C" int mem_00B5BB04;
extern "C" int mem_00A9F960;
extern "C" int mem_00B5BB08;
extern "C" int mem_00A9F964;
extern "C" int mem_00B5BB0C;
extern "C" int mem_00A9F968;
extern "C" int mem_00B5BB10;
extern "C" int mem_00A9F96C;
extern "C" int mem_00B5BB14;
extern "C" int mem_00A9F970;
extern "C" int mem_00B5BB18;
extern "C" int mem_00A9F974;
extern "C" int mem_00B5BB1C;
extern "C" int mem_00A9F978;
extern "C" int mem_00B5BB20;
extern "C" int mem_00A9F97C;
extern "C" int mem_00B5BB24;
extern "C" int mem_00A9F980;
extern "C" int mem_00B5BB28;
extern "C" int mem_00A9F984;
extern "C" int mem_00B5BB2C;
extern "C" int mem_00A9F988;
extern "C" int mem_00B5BB30;
extern "C" int mem_00A9F98C;
extern "C" int mem_00B5BB34;
extern "C" int mem_00B5BB38;
extern "C" int mem_00B5BB3C;
extern "C" int mem_00A9F990;
extern "C" int mem_00A9F994;
extern "C" int mem_00A9F998;
extern "C" int mem_00B5BB40;
extern "C" int mem_00A9F99C;
extern "C" int mem_00B5BB44;
extern "C" int mem_00A9F9A0;
extern "C" int mem_00B5BB48;
extern "C" int mem_00A9F9A4;
extern "C" int mem_00B5BB4C;
extern "C" int mem_00A9F9A8;
extern "C" int mem_00B5BB50;
extern "C" int mem_00A9F9AC;
extern "C" int mem_00B5BB54;
extern "C" int mem_00A9F9B0;
extern "C" int mem_00B5BB58;
extern "C" int mem_00A9F9B4;
extern "C" int mem_00B5BB5C;
extern "C" int mem_00A9F9B8;
extern "C" int mem_00B5BB60;
extern "C" int mem_00A9F9BC;
extern "C" int mem_00B5BB64;
extern "C" int mem_00A9F9C0;
extern "C" int mem_00B5BB68;
extern "C" int mem_00A9F9C4;
extern "C" int mem_00B5BB6C;
extern "C" int mem_00A9F9C8;
extern "C" int mem_00B5BB70;
extern "C" int mem_00A9F9CC;
extern "C" int mem_00B5BB74;
extern "C" int mem_00A9F9D0;
extern "C" int mem_00B5BB78;
extern "C" int mem_00A9F9D4;
extern "C" int mem_00B5BB7C;
extern "C" int mem_00A9F9D8;
extern "C" int mem_00B5BB80;
extern "C" int mem_00A9F9DC;
extern "C" int mem_00B5BB84;
extern "C" int mem_00A9F9E0;
extern "C" int mem_00B5BB88;
extern "C" int mem_00A9F9E4;
extern "C" int mem_00B5BB8C;
extern "C" int mem_00A9F9E8;
extern "C" int mem_00B5BB90;
extern "C" int mem_00A9F9EC;
extern "C" int mem_00B5BB94;
extern "C" int mem_00A9F9F0;
extern "C" int mem_00B5BB98;
extern "C" int mem_00A9F9F4;
extern "C" int mem_00B5BB9C;
extern "C" int mem_00A9F9F8;
extern "C" int mem_00B5BBA0;
extern "C" int mem_00A9F9FC;
extern "C" int mem_00B5BBA4;
extern "C" int mem_00A9FA00;
extern "C" int mem_00B5BBA8;
extern "C" int mem_00A9FA04;
extern "C" int mem_00B5BBAC;
extern "C" int mem_00A9FA08;
extern "C" int mem_00B5BBB0;
extern "C" int mem_00A9FA0C;
extern "C" int mem_00B5BBB4;
extern "C" int mem_00A9FA10;
extern "C" int mem_00B5BBB8;
extern "C" int mem_00A9FA14;
extern "C" int mem_00B5BBBC;
extern "C" int mem_00A9FA18;
extern "C" int mem_00B5BBC0;
extern "C" int mem_00A9FA1C;
extern "C" int mem_00B5BBC4;
extern "C" int mem_00A9FA20;
extern "C" int mem_00B5BBC8;
extern "C" int mem_00A9FA24;
extern "C" int mem_00B5BBCC;
extern "C" int mem_00A9FA28;
extern "C" int mem_00B5BBD0;
extern "C" int mem_00A9FA2C;
extern "C" int mem_00B5BBD4;
extern "C" int mem_00A9FA30;
extern "C" int mem_00B5BBD8;
extern "C" int mem_00B5BBDC;
extern "C" int mem_00A9FA34;
extern "C" int mem_00A9FA38;
extern "C" int mem_00B5BBE0;
extern "C" int mem_00A9FA3C;
extern "C" int mem_00B5BBE4;
extern "C" int mem_00A9FA40;
extern "C" int mem_00B5BBE8;
extern "C" int mem_00A9FA44;
extern "C" int mem_00B5BBEC;
extern "C" int mem_00A9FA48;
extern "C" int mem_00B5BBF0;
extern "C" int mem_00A9FA4C;
extern "C" int mem_00B5BBF4;
extern "C" int mem_00A9FA50;
extern "C" int mem_00B5BBF8;
extern "C" int mem_00A9FA54;
extern "C" int mem_00B5BBFC;
extern "C" int mem_00A9FA58;
extern "C" int mem_00B5BC00;
extern "C" int mem_00A9FA5C;
extern "C" int mem_00B5BC04;
extern "C" int mem_00A9FA60;
extern "C" int mem_00B5BC08;
extern "C" int mem_00A9FA64;
extern "C" int mem_00B5BC0C;
extern "C" int mem_00A9FA68;
extern "C" int mem_00B5BC10;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00B5BC14;
extern "C" int mem_00A9FA70;
extern "C" int mem_00B5BC18;
extern "C" int mem_00A9FA74;
extern "C" int mem_00B5BC1C;
extern "C" int mem_00A9FA78;
extern "C" int mem_00B5BC20;
extern "C" int mem_00A9FA7C;
extern "C" int mem_00B5BC24;
extern "C" int mem_00A9FA80;
extern "C" int mem_00B5BC28;
extern "C" int mem_00A9FA84;
extern "C" int mem_00B5BC2C;
extern "C" int mem_00A9FA88;
extern "C" int mem_00B5BC30;
extern "C" int mem_00A9FA8C;
extern "C" int mem_00B5BC34;
extern "C" int mem_00A9FA90;
extern "C" int mem_00B5BC38;
extern "C" int mem_00A9FA94;
extern "C" int mem_00B5BC3C;
extern "C" int mem_00A9FA98;
extern "C" int mem_00B5BC40;
extern "C" int mem_00A9FA9C;
extern "C" int mem_00B5BC44;
extern "C" int mem_00A9FAA0;
extern "C" int mem_00B5BC48;
extern "C" int mem_00A9FAA4;
extern "C" int mem_00B5BC4C;
extern "C" int mem_00A9FAA8;
extern "C" int mem_00B5BC50;
extern "C" int mem_00A9FAAC;
extern "C" int mem_00B5BC54;
extern "C" int mem_00A9FAB0;
extern "C" int mem_00B5BC58;
extern "C" int mem_00A9FAB4;
extern "C" int mem_00B5BC5C;
extern "C" int mem_00A9FAB8;
extern "C" int mem_00B5BC60;
extern "C" int mem_00A9FABC;
extern "C" int mem_00B5BC64;
extern "C" int mem_00A9FAC0;
extern "C" int mem_00B5BC68;
extern "C" int mem_00A9FAC4;
extern "C" int mem_00B5BC6C;
extern "C" int mem_00A9FAC8;
extern "C" int mem_00B5BC70;
extern "C" int mem_00A9FACC;
extern "C" int mem_00B5BC74;
extern "C" int mem_00A9FAD0;
extern "C" int mem_00B5BC78;
extern "C" int mem_00B5BC7C;
extern "C" int mem_00B5BC80;
extern "C" int mem_00A9FAD4;
extern "C" int mem_00A9FAD8;
extern "C" int mem_00A9FADC;
extern "C" int mem_00B5BC84;
extern "C" int mem_00A9FAE0;
extern "C" int mem_00B5BC88;
extern "C" int mem_00A9FAE4;
extern "C" int mem_00B5BC8C;
extern "C" int mem_00A9FAE8;
extern "C" int mem_00B5BC90;
extern "C" int mem_00A9FAEC;
extern "C" int mem_00B5BC94;
extern "C" int mem_00A9FAF0;
extern "C" int mem_00B5BC98;
extern "C" int mem_00A9FAF4;
extern "C" int mem_00B5BC9C;
extern "C" int mem_00B5BCA0;
extern "C" int mem_00B5BCA4;
extern "C" int mem_00B5BCA8;
extern "C" int mem_00B5BCAC;
extern "C" int mem_00B5BCBC;

// [0x0068F7C0] sub_0068F7C0 (10228 bytes)
extern "C" __declspec(naked) void __fastcall fn_0068F7C0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9ECE8]
        mov ecx, dword ptr [mem_00A9ECEC]
        mov edx, dword ptr [mem_00A9ECF0]
        mov dword ptr [mem_00B5AE98], eax
        mov eax, dword ptr [mem_00A9ECF4]
        mov dword ptr [mem_00B5AE9C], ecx
        mov ecx, dword ptr [mem_00A9ECF8]
        mov dword ptr [mem_00B5AEA0], edx
        mov edx, dword ptr [mem_00A9ECFC]
        mov dword ptr [mem_00B5AEA4], eax
        mov eax, dword ptr [mem_00A9ED00]
        mov dword ptr [mem_00B5AEA8], ecx
        mov ecx, dword ptr [mem_00A9ED04]
        mov dword ptr [mem_00B5AEAC], edx
        mov edx, dword ptr [mem_00A9ED08]
        mov dword ptr [mem_00B5AEB0], eax
        mov eax, dword ptr [mem_00A9ED0C]
        mov dword ptr [mem_00B5AEB4], ecx
        mov ecx, dword ptr [mem_00A9ED10]
        mov dword ptr [mem_00B5AEB8], edx
        mov edx, dword ptr [mem_00A9ED14]
        mov dword ptr [mem_00B5AEBC], eax
        mov eax, dword ptr [mem_00A9ED18]
        mov dword ptr [mem_00B5AEC0], ecx
        mov ecx, dword ptr [mem_00A9ED1C]
        mov dword ptr [mem_00B5AEC4], edx
        mov edx, dword ptr [mem_00A9ED20]
        mov dword ptr [mem_00B5AEC8], eax
        mov eax, dword ptr [mem_00A9ED24]
        mov dword ptr [mem_00B5AECC], ecx
        mov ecx, dword ptr [mem_00A9ED28]
        mov dword ptr [mem_00B5AED0], edx
        mov edx, dword ptr [mem_00A9ED2C]
        mov dword ptr [mem_00B5AED4], eax
        mov eax, dword ptr [mem_00A9ED30]
        mov dword ptr [mem_00B5AED8], ecx
        mov ecx, dword ptr [mem_00A9ED34]
        mov dword ptr [mem_00B5AEDC], edx
        mov edx, dword ptr [mem_00A9ED38]
        mov dword ptr [mem_00B5AEE0], eax
        mov eax, dword ptr [mem_00A9ED3C]
        mov dword ptr [mem_00B5AEE4], ecx
        mov ecx, dword ptr [mem_00A9ED40]
        mov dword ptr [mem_00B5AEE8], edx
        mov edx, dword ptr [mem_00A9ED44]
        mov dword ptr [mem_00B5AEEC], eax
        mov eax, dword ptr [mem_00A9ED48]
        mov dword ptr [mem_00B5AEF0], ecx
        mov ecx, dword ptr [mem_00A9ED4C]
        mov dword ptr [mem_00B5AEF4], edx
        mov edx, dword ptr [mem_00A9ED50]
        mov dword ptr [mem_00B5AEF8], eax
        mov eax, dword ptr [mem_00A9ED54]
        mov dword ptr [mem_00B5AEFC], ecx
        mov ecx, dword ptr [mem_00A9ED58]
        mov dword ptr [mem_00B5AF00], edx
        mov edx, dword ptr [mem_00A9ED5C]
        mov dword ptr [mem_00B5AF04], eax
        mov eax, dword ptr [mem_00A9ED60]
        mov dword ptr [mem_00B5AF08], ecx
        mov ecx, dword ptr [mem_00A9ED64]
        mov dword ptr [mem_00B5AF0C], edx
        mov edx, dword ptr [mem_00A9ED68]
        mov dword ptr [mem_00B5AF10], eax
        mov eax, dword ptr [mem_00A9ED6C]
        mov dword ptr [mem_00B5AF14], ecx
        mov ecx, dword ptr [mem_00A9ED70]
        mov dword ptr [mem_00B5AF18], edx
        mov edx, dword ptr [mem_00A9ED74]
        mov dword ptr [mem_00B5AF1C], eax
        mov eax, dword ptr [mem_00A9ED78]
        mov dword ptr [mem_00B5AF20], ecx
        mov ecx, dword ptr [mem_00A9ED7C]
        mov dword ptr [mem_00B5AF24], edx
        mov edx, dword ptr [mem_00A9ED80]
        mov dword ptr [mem_00B5AF28], eax
        mov eax, dword ptr [mem_00A9ED84]
        mov dword ptr [mem_00B5AF2C], ecx
        mov ecx, dword ptr [mem_00A9ED88]
        mov dword ptr [mem_00B5AF30], edx
        mov dword ptr [mem_00B5AF34], eax
        mov edx, dword ptr [mem_00A9ED8C]
        mov eax, dword ptr [mem_00A9ED90]
        mov dword ptr [mem_00B5AF38], ecx
        mov ecx, dword ptr [mem_00A9ED94]
        mov dword ptr [mem_00B5AF3C], edx
        mov edx, dword ptr [mem_00A9ED98]
        mov dword ptr [mem_00B5AF40], eax
        mov eax, dword ptr [mem_00A9ED9C]
        mov dword ptr [mem_00B5AF44], ecx
        mov ecx, dword ptr [mem_00A9EDA0]
        mov dword ptr [mem_00B5AF48], edx
        mov edx, dword ptr [mem_00A9EDA4]
        mov dword ptr [mem_00B5AF4C], eax
        mov eax, dword ptr [mem_00A9EDA8]
        mov dword ptr [mem_00B5AF50], ecx
        mov ecx, dword ptr [mem_00A9EDAC]
        mov dword ptr [mem_00B5AF54], edx
        mov edx, dword ptr [mem_00A9EDB0]
        mov dword ptr [mem_00B5AF58], eax
        mov eax, dword ptr [mem_00A9EDB4]
        mov dword ptr [mem_00B5AF5C], ecx
        mov ecx, dword ptr [mem_00A9EDB8]
        mov dword ptr [mem_00B5AF60], edx
        mov edx, dword ptr [mem_00A9EDBC]
        mov dword ptr [mem_00B5AF64], eax
        mov eax, dword ptr [mem_00A9EDC0]
        mov dword ptr [mem_00B5AF68], ecx
        mov ecx, dword ptr [mem_00A9EDC4]
        mov dword ptr [mem_00B5AF6C], edx
        mov edx, dword ptr [mem_00A9EDC8]
        mov dword ptr [mem_00B5AF70], eax
        mov eax, dword ptr [mem_00A9EDCC]
        mov dword ptr [mem_00B5AF74], ecx
        mov ecx, dword ptr [mem_00A9EDD0]
        mov dword ptr [mem_00B5AF78], edx
        mov edx, dword ptr [mem_00A9EDD4]
        mov dword ptr [mem_00B5AF7C], eax
        mov eax, dword ptr [mem_00A9EDD8]
        mov dword ptr [mem_00B5AF80], ecx
        mov ecx, dword ptr [mem_00A9EDDC]
        mov dword ptr [mem_00B5AF84], edx
        mov edx, dword ptr [mem_00A9EDE0]
        mov dword ptr [mem_00B5AF88], eax
        mov eax, dword ptr [mem_00A9EDE4]
        mov dword ptr [mem_00B5AF8C], ecx
        mov ecx, dword ptr [mem_00A9EDE8]
        mov dword ptr [mem_00B5AF90], edx
        mov edx, dword ptr [mem_00A9EDEC]
        mov dword ptr [mem_00B5AF94], eax
        mov eax, dword ptr [mem_00A9EDF0]
        mov dword ptr [mem_00B5AF98], ecx
        mov ecx, dword ptr [mem_00A9EDF4]
        mov dword ptr [mem_00B5AF9C], edx
        mov edx, dword ptr [mem_00A9EDF8]
        mov dword ptr [mem_00B5AFA0], eax
        mov eax, dword ptr [mem_00A9EDFC]
        mov dword ptr [mem_00B5AFA4], ecx
        mov ecx, dword ptr [mem_00A9EE00]
        mov dword ptr [mem_00B5AFA8], edx
        mov edx, dword ptr [mem_00A9EE04]
        mov dword ptr [mem_00B5AFAC], eax
        mov eax, dword ptr [mem_00A9EE08]
        mov dword ptr [mem_00B5AFB0], ecx
        mov ecx, dword ptr [mem_00A9EE0C]
        mov dword ptr [mem_00B5AFB4], edx
        mov edx, dword ptr [mem_00A9EE10]
        mov dword ptr [mem_00B5AFB8], eax
        mov eax, dword ptr [mem_00A9EE14]
        mov dword ptr [mem_00B5AFBC], ecx
        mov ecx, dword ptr [mem_00A9EE18]
        mov dword ptr [mem_00B5AFC0], edx
        mov edx, dword ptr [mem_00A9EE1C]
        mov dword ptr [mem_00B5AFC4], eax
        mov eax, dword ptr [mem_00A9EE20]
        mov dword ptr [mem_00B5AFC8], ecx
        mov ecx, dword ptr [mem_00A9EE24]
        mov dword ptr [mem_00B5AFCC], edx
        mov edx, dword ptr [mem_00A9EE28]
        mov dword ptr [mem_00B5AFD0], eax
        mov dword ptr [mem_00B5AFD4], ecx
        mov dword ptr [mem_00B5AFD8], edx
        mov eax, dword ptr [mem_00A9EE2C]
        mov ecx, dword ptr [mem_00A9EE30]
        mov edx, dword ptr [mem_00A9EE34]
        mov dword ptr [mem_00B5AFDC], eax
        mov eax, dword ptr [mem_00A9EE38]
        mov dword ptr [mem_00B5AFE0], ecx
        mov ecx, dword ptr [mem_00A9EE3C]
        mov dword ptr [mem_00B5AFE4], edx
        mov edx, dword ptr [mem_00A9EE40]
        mov dword ptr [mem_00B5AFE8], eax
        mov eax, dword ptr [mem_00A9EE44]
        mov dword ptr [mem_00B5AFEC], ecx
        mov ecx, dword ptr [mem_00A9EE48]
        mov dword ptr [mem_00B5AFF0], edx
        mov edx, dword ptr [mem_00A9EE4C]
        mov dword ptr [mem_00B5AFF4], eax
        mov eax, dword ptr [mem_00A9EE50]
        mov dword ptr [mem_00B5AFF8], ecx
        mov ecx, dword ptr [mem_00A9EE54]
        mov dword ptr [mem_00B5AFFC], edx
        mov edx, dword ptr [mem_00A9EE58]
        mov dword ptr [mem_00B5B000], eax
        mov eax, dword ptr [mem_00A9EE5C]
        mov dword ptr [mem_00B5B004], ecx
        mov ecx, dword ptr [mem_00A9EE60]
        mov dword ptr [mem_00B5B008], edx
        mov edx, dword ptr [mem_00A9EE64]
        mov dword ptr [mem_00B5B00C], eax
        mov eax, dword ptr [mem_00A9EE68]
        mov dword ptr [mem_00B5B010], ecx
        mov ecx, dword ptr [mem_00A9EE6C]
        mov dword ptr [mem_00B5B014], edx
        mov edx, dword ptr [mem_00A9EE70]
        mov dword ptr [mem_00B5B018], eax
        mov eax, dword ptr [mem_00A9EE74]
        mov dword ptr [mem_00B5B01C], ecx
        mov ecx, dword ptr [mem_00A9EE78]
        mov dword ptr [mem_00B5B020], edx
        mov edx, dword ptr [mem_00A9EE7C]
        mov dword ptr [mem_00B5B024], eax
        mov eax, dword ptr [mem_00A9EE80]
        mov dword ptr [mem_00B5B028], ecx
        mov ecx, dword ptr [mem_00A9EE84]
        mov dword ptr [mem_00B5B02C], edx
        mov edx, dword ptr [mem_00A9EE88]
        mov dword ptr [mem_00B5B030], eax
        mov eax, dword ptr [mem_00A9EE8C]
        mov dword ptr [mem_00B5B034], ecx
        mov ecx, dword ptr [mem_00A9EE90]
        mov dword ptr [mem_00B5B038], edx
        mov edx, dword ptr [mem_00A9EE94]
        mov dword ptr [mem_00B5B03C], eax
        mov eax, dword ptr [mem_00A9EE98]
        mov dword ptr [mem_00B5B040], ecx
        mov ecx, dword ptr [mem_00A9EE9C]
        mov dword ptr [mem_00B5B044], edx
        mov edx, dword ptr [mem_00A9EEA0]
        mov dword ptr [mem_00B5B048], eax
        mov eax, dword ptr [mem_00A9EEA4]
        mov dword ptr [mem_00B5B04C], ecx
        mov ecx, dword ptr [mem_00A9EEA8]
        mov dword ptr [mem_00B5B050], edx
        mov edx, dword ptr [mem_00A9EEAC]
        mov dword ptr [mem_00B5B054], eax
        mov eax, dword ptr [mem_00A9EEB0]
        mov dword ptr [mem_00B5B058], ecx
        mov ecx, dword ptr [mem_00A9EEB4]
        mov dword ptr [mem_00B5B05C], edx
        mov edx, dword ptr [mem_00A9EEB8]
        mov dword ptr [mem_00B5B060], eax
        mov eax, dword ptr [mem_00A9EEBC]
        mov dword ptr [mem_00B5B064], ecx
        mov ecx, dword ptr [mem_00A9EEC0]
        mov dword ptr [mem_00B5B068], edx
        mov edx, dword ptr [mem_00A9EEC4]
        mov dword ptr [mem_00B5B06C], eax
        mov eax, dword ptr [mem_00A9EEC8]
        mov dword ptr [mem_00B5B070], ecx
        mov ecx, dword ptr [mem_00A9EECC]
        mov dword ptr [mem_00B5B074], edx
        mov dword ptr [mem_00B5B078], eax
        mov edx, dword ptr [mem_00A9EED0]
        mov eax, dword ptr [mem_00A9EED4]
        mov dword ptr [mem_00B5B07C], ecx
        mov ecx, dword ptr [mem_00A9EED8]
        mov dword ptr [mem_00B5B080], edx
        mov edx, dword ptr [mem_00A9EEDC]
        mov dword ptr [mem_00B5B084], eax
        mov eax, dword ptr [mem_00A9EEE0]
        mov dword ptr [mem_00B5B088], ecx
        mov ecx, dword ptr [mem_00A9EEE4]
        mov dword ptr [mem_00B5B08C], edx
        mov edx, dword ptr [mem_00A9EEE8]
        mov dword ptr [mem_00B5B090], eax
        mov eax, dword ptr [mem_00A9EEEC]
        mov dword ptr [mem_00B5B094], ecx
        mov ecx, dword ptr [mem_00A9EEF0]
        mov dword ptr [mem_00B5B098], edx
        mov edx, dword ptr [mem_00A9EEF4]
        mov dword ptr [mem_00B5B09C], eax
        mov eax, dword ptr [mem_00A9EEF8]
        mov dword ptr [mem_00B5B0A0], ecx
        mov ecx, dword ptr [mem_00A9EEFC]
        mov dword ptr [mem_00B5B0A4], edx
        mov edx, dword ptr [mem_00A9EF00]
        mov dword ptr [mem_00B5B0A8], eax
        mov eax, dword ptr [mem_00A9EF04]
        mov dword ptr [mem_00B5B0AC], ecx
        mov ecx, dword ptr [mem_00A9EF08]
        mov dword ptr [mem_00B5B0B0], edx
        mov edx, dword ptr [mem_00A9EF0C]
        mov dword ptr [mem_00B5B0B4], eax
        mov eax, dword ptr [mem_00A9EF10]
        mov dword ptr [mem_00B5B0B8], ecx
        mov ecx, dword ptr [mem_00A9EF14]
        mov dword ptr [mem_00B5B0BC], edx
        mov edx, dword ptr [mem_00A9EF18]
        mov dword ptr [mem_00B5B0C0], eax
        mov eax, dword ptr [mem_00A9EF1C]
        mov dword ptr [mem_00B5B0C4], ecx
        mov ecx, dword ptr [mem_00A9EF20]
        mov dword ptr [mem_00B5B0C8], edx
        mov edx, dword ptr [mem_00A9EF24]
        mov dword ptr [mem_00B5B0CC], eax
        mov eax, dword ptr [mem_00A9EF28]
        mov dword ptr [mem_00B5B0D0], ecx
        mov ecx, dword ptr [mem_00A9EF2C]
        mov dword ptr [mem_00B5B0D4], edx
        mov edx, dword ptr [mem_00A9EF30]
        mov dword ptr [mem_00B5B0D8], eax
        mov eax, dword ptr [mem_00A9EF34]
        mov dword ptr [mem_00B5B0DC], ecx
        mov ecx, dword ptr [mem_00A9EF38]
        mov dword ptr [mem_00B5B0E0], edx
        mov edx, dword ptr [mem_00A9EF3C]
        mov dword ptr [mem_00B5B0E4], eax
        mov eax, dword ptr [mem_00A9EF40]
        mov dword ptr [mem_00B5B0E8], ecx
        mov ecx, dword ptr [mem_00A9EF44]
        mov dword ptr [mem_00B5B0EC], edx
        mov edx, dword ptr [mem_00A9EF48]
        mov dword ptr [mem_00B5B0F0], eax
        mov eax, dword ptr [mem_00A9EF4C]
        mov dword ptr [mem_00B5B0F4], ecx
        mov ecx, dword ptr [mem_00A9EF50]
        mov dword ptr [mem_00B5B0F8], edx
        mov edx, dword ptr [mem_00A9EF54]
        mov dword ptr [mem_00B5B0FC], eax
        mov eax, dword ptr [mem_00A9EF58]
        mov dword ptr [mem_00B5B100], ecx
        mov ecx, dword ptr [mem_00A9EF5C]
        mov dword ptr [mem_00B5B104], edx
        mov edx, dword ptr [mem_00A9EF60]
        mov dword ptr [mem_00B5B108], eax
        mov eax, dword ptr [mem_00A9EF64]
        mov dword ptr [mem_00B5B10C], ecx
        mov ecx, dword ptr [mem_00A9EF68]
        mov dword ptr [mem_00B5B110], edx
        mov edx, dword ptr [mem_00A9EF6C]
        mov dword ptr [mem_00B5B114], eax
        mov dword ptr [mem_00B5B118], ecx
        mov dword ptr [mem_00B5B11C], edx
        mov eax, dword ptr [mem_00A9EF70]
        mov ecx, dword ptr [mem_00A9EF74]
        mov edx, dword ptr [mem_00A9EF78]
        mov dword ptr [mem_00B5B120], eax
        mov eax, dword ptr [mem_00A9EF7C]
        mov dword ptr [mem_00B5B124], ecx
        mov ecx, dword ptr [mem_00A9EF80]
        mov dword ptr [mem_00B5B128], edx
        mov edx, dword ptr [mem_00A9EF84]
        mov dword ptr [mem_00B5B12C], eax
        mov eax, dword ptr [mem_00A9EF88]
        mov dword ptr [mem_00B5B130], ecx
        mov ecx, dword ptr [mem_00A9EF8C]
        mov dword ptr [mem_00B5B134], edx
        mov edx, dword ptr [mem_00A9EF90]
        mov dword ptr [mem_00B5B138], eax
        mov eax, dword ptr [mem_00A9EF94]
        mov dword ptr [mem_00B5B13C], ecx
        mov ecx, dword ptr [mem_00A9EF98]
        mov dword ptr [mem_00B5B140], edx
        mov edx, dword ptr [mem_00A9EF9C]
        mov dword ptr [mem_00B5B144], eax
        mov eax, dword ptr [mem_00A9EFA0]
        mov dword ptr [mem_00B5B148], ecx
        mov ecx, dword ptr [mem_00A9EFA4]
        mov dword ptr [mem_00B5B14C], edx
        mov edx, dword ptr [mem_00A9EFA8]
        mov dword ptr [mem_00B5B150], eax
        mov eax, dword ptr [mem_00A9EFAC]
        mov dword ptr [mem_00B5B154], ecx
        mov ecx, dword ptr [mem_00A9EFB0]
        mov dword ptr [mem_00B5B158], edx
        mov edx, dword ptr [mem_00A9EFB4]
        mov dword ptr [mem_00B5B15C], eax
        mov eax, dword ptr [mem_00A9EFB8]
        mov dword ptr [mem_00B5B160], ecx
        mov ecx, dword ptr [mem_00A9EFBC]
        mov dword ptr [mem_00B5B164], edx
        mov edx, dword ptr [mem_00A9EFC0]
        mov dword ptr [mem_00B5B168], eax
        mov eax, dword ptr [mem_00A9EFC4]
        mov dword ptr [mem_00B5B16C], ecx
        mov ecx, dword ptr [mem_00A9EFC8]
        mov dword ptr [mem_00B5B170], edx
        mov edx, dword ptr [mem_00A9EFCC]
        mov dword ptr [mem_00B5B174], eax
        mov eax, dword ptr [mem_00A9EFD0]
        mov dword ptr [mem_00B5B178], ecx
        mov ecx, dword ptr [mem_00A9EFD4]
        mov dword ptr [mem_00B5B17C], edx
        mov edx, dword ptr [mem_00A9EFD8]
        mov dword ptr [mem_00B5B180], eax
        mov eax, dword ptr [mem_00A9EFDC]
        mov dword ptr [mem_00B5B184], ecx
        mov ecx, dword ptr [mem_00A9EFE0]
        mov dword ptr [mem_00B5B188], edx
        mov edx, dword ptr [mem_00A9EFE4]
        mov dword ptr [mem_00B5B18C], eax
        mov eax, dword ptr [mem_00A9EFE8]
        mov dword ptr [mem_00B5B190], ecx
        mov ecx, dword ptr [mem_00A9EFEC]
        mov dword ptr [mem_00B5B194], edx
        mov edx, dword ptr [mem_00A9EFF0]
        mov dword ptr [mem_00B5B198], eax
        mov eax, dword ptr [mem_00A9EFF4]
        mov dword ptr [mem_00B5B19C], ecx
        mov ecx, dword ptr [mem_00A9EFF8]
        mov dword ptr [mem_00B5B1A0], edx
        mov edx, dword ptr [mem_00A9EFFC]
        mov dword ptr [mem_00B5B1A4], eax
        mov eax, dword ptr [mem_00A9F000]
        mov dword ptr [mem_00B5B1A8], ecx
        mov ecx, dword ptr [mem_00A9F004]
        mov dword ptr [mem_00B5B1AC], edx
        mov edx, dword ptr [mem_00A9F008]
        mov dword ptr [mem_00B5B1B0], eax
        mov eax, dword ptr [mem_00A9F00C]
        mov dword ptr [mem_00B5B1B4], ecx
        mov ecx, dword ptr [mem_00A9F010]
        mov dword ptr [mem_00B5B1B8], edx
        mov dword ptr [mem_00B5B1BC], eax
        mov edx, dword ptr [mem_00A9F014]
        mov eax, dword ptr [mem_00A9F018]
        mov dword ptr [mem_00B5B1C0], ecx
        mov ecx, dword ptr [mem_00A9F01C]
        mov dword ptr [mem_00B5B1C4], edx
        mov edx, dword ptr [mem_00A9F020]
        mov dword ptr [mem_00B5B1C8], eax
        mov eax, dword ptr [mem_00A9F024]
        mov dword ptr [mem_00B5B1CC], ecx
        mov ecx, dword ptr [mem_00A9F028]
        mov dword ptr [mem_00B5B1D0], edx
        mov edx, dword ptr [mem_00A9F02C]
        mov dword ptr [mem_00B5B1D4], eax
        mov eax, dword ptr [mem_00A9F030]
        mov dword ptr [mem_00B5B1D8], ecx
        mov ecx, dword ptr [mem_00A9F034]
        mov dword ptr [mem_00B5B1DC], edx
        mov edx, dword ptr [mem_00A9F038]
        mov dword ptr [mem_00B5B1E0], eax
        mov eax, dword ptr [mem_00A9F03C]
        mov dword ptr [mem_00B5B1E4], ecx
        mov ecx, dword ptr [mem_00A9F040]
        mov dword ptr [mem_00B5B1E8], edx
        mov edx, dword ptr [mem_00A9F044]
        mov dword ptr [mem_00B5B1EC], eax
        mov eax, dword ptr [mem_00A9F048]
        mov dword ptr [mem_00B5B1F0], ecx
        mov ecx, dword ptr [mem_00A9F04C]
        mov dword ptr [mem_00B5B1F4], edx
        mov edx, dword ptr [mem_00A9F050]
        mov dword ptr [mem_00B5B1F8], eax
        mov eax, dword ptr [mem_00A9F054]
        mov dword ptr [mem_00B5B1FC], ecx
        mov ecx, dword ptr [mem_00A9F058]
        mov dword ptr [mem_00B5B200], edx
        mov edx, dword ptr [mem_00A9F05C]
        mov dword ptr [mem_00B5B204], eax
        mov eax, dword ptr [mem_00A9F060]
        mov dword ptr [mem_00B5B208], ecx
        mov ecx, dword ptr [mem_00A9F064]
        mov dword ptr [mem_00B5B20C], edx
        mov edx, dword ptr [mem_00A9F068]
        mov dword ptr [mem_00B5B210], eax
        mov eax, dword ptr [mem_00A9F06C]
        mov dword ptr [mem_00B5B214], ecx
        mov ecx, dword ptr [mem_00A9F070]
        mov dword ptr [mem_00B5B218], edx
        mov edx, dword ptr [mem_00A9F074]
        mov dword ptr [mem_00B5B21C], eax
        mov eax, dword ptr [mem_00A9F078]
        mov dword ptr [mem_00B5B220], ecx
        mov ecx, dword ptr [mem_00A9F07C]
        mov dword ptr [mem_00B5B224], edx
        mov edx, dword ptr [mem_00A9F080]
        mov dword ptr [mem_00B5B228], eax
        mov eax, dword ptr [mem_00A9F084]
        mov dword ptr [mem_00B5B22C], ecx
        mov ecx, dword ptr [mem_00A9F088]
        mov dword ptr [mem_00B5B230], edx
        mov edx, dword ptr [mem_00A9F08C]
        mov dword ptr [mem_00B5B234], eax
        mov eax, dword ptr [mem_00A9F090]
        mov dword ptr [mem_00B5B238], ecx
        mov ecx, dword ptr [mem_00A9F094]
        mov dword ptr [mem_00B5B23C], edx
        mov edx, dword ptr [mem_00A9F098]
        mov dword ptr [mem_00B5B240], eax
        mov eax, dword ptr [mem_00A9F09C]
        mov dword ptr [mem_00B5B244], ecx
        mov ecx, dword ptr [mem_00A9F0A0]
        mov dword ptr [mem_00B5B248], edx
        mov edx, dword ptr [mem_00A9F0A4]
        mov dword ptr [mem_00B5B24C], eax
        mov eax, dword ptr [mem_00A9F0A8]
        mov dword ptr [mem_00B5B250], ecx
        mov ecx, dword ptr [mem_00A9F0AC]
        mov dword ptr [mem_00B5B254], edx
        mov edx, dword ptr [mem_00A9F0B0]
        mov dword ptr [mem_00B5B258], eax
        mov dword ptr [mem_00B5B25C], ecx
        mov dword ptr [mem_00B5B260], edx
        mov eax, dword ptr [mem_00A9F0B4]
        mov ecx, dword ptr [mem_00A9F0B8]
        mov edx, dword ptr [mem_00A9F0BC]
        mov dword ptr [mem_00B5B264], eax
        mov eax, dword ptr [mem_00A9F0C0]
        mov dword ptr [mem_00B5B268], ecx
        mov ecx, dword ptr [mem_00A9F0C4]
        mov dword ptr [mem_00B5B26C], edx
        mov edx, dword ptr [mem_00A9F0C8]
        mov dword ptr [mem_00B5B270], eax
        mov eax, dword ptr [mem_00A9F0CC]
        mov dword ptr [mem_00B5B274], ecx
        mov ecx, dword ptr [mem_00A9F0D0]
        mov dword ptr [mem_00B5B278], edx
        mov edx, dword ptr [mem_00A9F0D4]
        mov dword ptr [mem_00B5B27C], eax
        mov eax, dword ptr [mem_00A9F0D8]
        mov dword ptr [mem_00B5B280], ecx
        mov ecx, dword ptr [mem_00A9F0DC]
        mov dword ptr [mem_00B5B284], edx
        mov edx, dword ptr [mem_00A9F0E0]
        mov dword ptr [mem_00B5B288], eax
        mov eax, dword ptr [mem_00A9F0E4]
        mov dword ptr [mem_00B5B28C], ecx
        mov ecx, dword ptr [mem_00A9F0E8]
        mov dword ptr [mem_00B5B290], edx
        mov edx, dword ptr [mem_00A9F0EC]
        mov dword ptr [mem_00B5B294], eax
        mov eax, dword ptr [mem_00A9F0F0]
        mov dword ptr [mem_00B5B298], ecx
        mov ecx, dword ptr [mem_00A9F0F4]
        mov dword ptr [mem_00B5B29C], edx
        mov edx, dword ptr [mem_00A9F0F8]
        mov dword ptr [mem_00B5B2A0], eax
        mov eax, dword ptr [mem_00A9F0FC]
        mov dword ptr [mem_00B5B2A4], ecx
        mov ecx, dword ptr [mem_00A9F100]
        mov dword ptr [mem_00B5B2A8], edx
        mov edx, dword ptr [mem_00A9F104]
        mov dword ptr [mem_00B5B2AC], eax
        mov eax, dword ptr [mem_00A9F108]
        mov dword ptr [mem_00B5B2B0], ecx
        mov ecx, dword ptr [mem_00A9F10C]
        mov dword ptr [mem_00B5B2B4], edx
        mov edx, dword ptr [mem_00A9F110]
        mov dword ptr [mem_00B5B2B8], eax
        mov eax, dword ptr [mem_00A9F114]
        mov dword ptr [mem_00B5B2BC], ecx
        mov ecx, dword ptr [mem_00A9F118]
        mov dword ptr [mem_00B5B2C0], edx
        mov edx, dword ptr [mem_00A9F11C]
        mov dword ptr [mem_00B5B2C4], eax
        mov eax, dword ptr [mem_00A9F120]
        mov dword ptr [mem_00B5B2C8], ecx
        mov ecx, dword ptr [mem_00A9F124]
        mov dword ptr [mem_00B5B2CC], edx
        mov edx, dword ptr [mem_00A9F128]
        mov dword ptr [mem_00B5B2D0], eax
        mov eax, dword ptr [mem_00A9F12C]
        mov dword ptr [mem_00B5B2D4], ecx
        mov ecx, dword ptr [mem_00A9F130]
        mov dword ptr [mem_00B5B2D8], edx
        mov edx, dword ptr [mem_00A9F134]
        mov dword ptr [mem_00B5B2DC], eax
        mov eax, dword ptr [mem_00A9F138]
        mov dword ptr [mem_00B5B2E0], ecx
        mov ecx, dword ptr [mem_00A9F13C]
        mov dword ptr [mem_00B5B2E4], edx
        mov edx, dword ptr [mem_00A9F140]
        mov dword ptr [mem_00B5B2E8], eax
        mov eax, dword ptr [mem_00A9F144]
        mov dword ptr [mem_00B5B2EC], ecx
        mov ecx, dword ptr [mem_00A9F148]
        mov dword ptr [mem_00B5B2F0], edx
        mov edx, dword ptr [mem_00A9F14C]
        mov dword ptr [mem_00B5B2F4], eax
        mov eax, dword ptr [mem_00A9F150]
        mov dword ptr [mem_00B5B2F8], ecx
        mov ecx, dword ptr [mem_00A9F154]
        mov dword ptr [mem_00B5B2FC], edx
        mov dword ptr [mem_00B5B300], eax
        mov edx, dword ptr [mem_00A9F158]
        mov eax, dword ptr [mem_00A9F15C]
        mov dword ptr [mem_00B5B304], ecx
        mov ecx, dword ptr [mem_00A9F160]
        mov dword ptr [mem_00B5B308], edx
        mov edx, dword ptr [mem_00A9F164]
        mov dword ptr [mem_00B5B30C], eax
        mov eax, dword ptr [mem_00A9F168]
        mov dword ptr [mem_00B5B310], ecx
        mov ecx, dword ptr [mem_00A9F16C]
        mov dword ptr [mem_00B5B314], edx
        mov edx, dword ptr [mem_00A9F170]
        mov dword ptr [mem_00B5B318], eax
        mov eax, dword ptr [mem_00A9F174]
        mov dword ptr [mem_00B5B31C], ecx
        mov ecx, dword ptr [mem_00A9F178]
        mov dword ptr [mem_00B5B320], edx
        mov edx, dword ptr [mem_00A9F17C]
        mov dword ptr [mem_00B5B324], eax
        mov eax, dword ptr [mem_00A9F180]
        mov dword ptr [mem_00B5B328], ecx
        mov ecx, dword ptr [mem_00A9F184]
        mov dword ptr [mem_00B5B32C], edx
        mov edx, dword ptr [mem_00A9F188]
        mov dword ptr [mem_00B5B330], eax
        mov eax, dword ptr [mem_00A9F18C]
        mov dword ptr [mem_00B5B334], ecx
        mov ecx, dword ptr [mem_00A9F190]
        mov dword ptr [mem_00B5B338], edx
        mov edx, dword ptr [mem_00A9F194]
        mov dword ptr [mem_00B5B33C], eax
        mov eax, dword ptr [mem_00A9F198]
        mov dword ptr [mem_00B5B340], ecx
        mov ecx, dword ptr [mem_00A9F19C]
        mov dword ptr [mem_00B5B344], edx
        mov edx, dword ptr [mem_00A9F1A0]
        mov dword ptr [mem_00B5B348], eax
        mov eax, dword ptr [mem_00A9F1A4]
        mov dword ptr [mem_00B5B34C], ecx
        mov ecx, dword ptr [mem_00A9F1A8]
        mov dword ptr [mem_00B5B350], edx
        mov edx, dword ptr [mem_00A9F1AC]
        mov dword ptr [mem_00B5B354], eax
        mov eax, dword ptr [mem_00A9F1B0]
        mov dword ptr [mem_00B5B358], ecx
        mov ecx, dword ptr [mem_00A9F1B4]
        mov dword ptr [mem_00B5B35C], edx
        mov edx, dword ptr [mem_00A9F1B8]
        mov dword ptr [mem_00B5B360], eax
        mov eax, dword ptr [mem_00A9F1BC]
        mov dword ptr [mem_00B5B364], ecx
        mov ecx, dword ptr [mem_00A9F1C0]
        mov dword ptr [mem_00B5B368], edx
        mov edx, dword ptr [mem_00A9F1C4]
        mov dword ptr [mem_00B5B36C], eax
        mov eax, dword ptr [mem_00A9F1C8]
        mov dword ptr [mem_00B5B370], ecx
        mov ecx, dword ptr [mem_00A9F1CC]
        mov dword ptr [mem_00B5B374], edx
        mov edx, dword ptr [mem_00A9F1D0]
        mov dword ptr [mem_00B5B378], eax
        mov eax, dword ptr [mem_00A9F1D4]
        mov dword ptr [mem_00B5B37C], ecx
        mov ecx, dword ptr [mem_00A9F1D8]
        mov dword ptr [mem_00B5B380], edx
        mov edx, dword ptr [mem_00A9F1DC]
        mov dword ptr [mem_00B5B384], eax
        mov eax, dword ptr [mem_00A9F1E0]
        mov dword ptr [mem_00B5B388], ecx
        mov ecx, dword ptr [mem_00A9F1E4]
        mov dword ptr [mem_00B5B38C], edx
        mov edx, dword ptr [mem_00A9F1E8]
        mov dword ptr [mem_00B5B390], eax
        mov eax, dword ptr [mem_00A9F1EC]
        mov dword ptr [mem_00B5B394], ecx
        mov ecx, dword ptr [mem_00A9F1F0]
        mov dword ptr [mem_00B5B398], edx
        mov edx, dword ptr [mem_00A9F1F4]
        mov dword ptr [mem_00B5B39C], eax
        mov dword ptr [mem_00B5B3A0], ecx
        mov dword ptr [mem_00B5B3A4], edx
        mov eax, dword ptr [mem_00A9F1F8]
        mov ecx, dword ptr [mem_00A9F1FC]
        mov edx, dword ptr [mem_00A9F200]
        mov dword ptr [mem_00B5B3A8], eax
        mov eax, dword ptr [mem_00A9F204]
        mov dword ptr [mem_00B5B3AC], ecx
        mov ecx, dword ptr [mem_00A9F208]
        mov dword ptr [mem_00B5B3B0], edx
        mov edx, dword ptr [mem_00A9F20C]
        mov dword ptr [mem_00B5B3B4], eax
        mov eax, dword ptr [mem_00A9F210]
        mov dword ptr [mem_00B5B3B8], ecx
        mov ecx, dword ptr [mem_00A9F214]
        mov dword ptr [mem_00B5B3BC], edx
        mov edx, dword ptr [mem_00A9F218]
        mov dword ptr [mem_00B5B3C0], eax
        mov eax, dword ptr [mem_00A9F21C]
        mov dword ptr [mem_00B5B3C4], ecx
        mov ecx, dword ptr [mem_00A9F220]
        mov dword ptr [mem_00B5B3C8], edx
        mov edx, dword ptr [mem_00A9F224]
        mov dword ptr [mem_00B5B3CC], eax
        mov eax, dword ptr [mem_00A9F228]
        mov dword ptr [mem_00B5B3D0], ecx
        mov ecx, dword ptr [mem_00A9F22C]
        mov dword ptr [mem_00B5B3D4], edx
        mov edx, dword ptr [mem_00A9F230]
        mov dword ptr [mem_00B5B3D8], eax
        mov eax, dword ptr [mem_00A9F234]
        mov dword ptr [mem_00B5B3DC], ecx
        mov ecx, dword ptr [mem_00A9F238]
        mov dword ptr [mem_00B5B3E0], edx
        mov edx, dword ptr [mem_00A9F23C]
        mov dword ptr [mem_00B5B3E4], eax
        mov eax, dword ptr [mem_00A9F240]
        mov dword ptr [mem_00B5B3E8], ecx
        mov ecx, dword ptr [mem_00A9F244]
        mov dword ptr [mem_00B5B3EC], edx
        mov edx, dword ptr [mem_00A9F248]
        mov dword ptr [mem_00B5B3F0], eax
        mov eax, dword ptr [mem_00A9F24C]
        mov dword ptr [mem_00B5B3F4], ecx
        mov ecx, dword ptr [mem_00A9F250]
        mov dword ptr [mem_00B5B3F8], edx
        mov edx, dword ptr [mem_00A9F254]
        mov dword ptr [mem_00B5B3FC], eax
        mov eax, dword ptr [mem_00A9F258]
        mov dword ptr [mem_00B5B400], ecx
        mov ecx, dword ptr [mem_00A9F25C]
        mov dword ptr [mem_00B5B404], edx
        mov edx, dword ptr [mem_00A9F260]
        mov dword ptr [mem_00B5B408], eax
        mov eax, dword ptr [mem_00A9F264]
        mov dword ptr [mem_00B5B40C], ecx
        mov ecx, dword ptr [mem_00A9F268]
        mov dword ptr [mem_00B5B410], edx
        mov edx, dword ptr [mem_00A9F26C]
        mov dword ptr [mem_00B5B414], eax
        mov eax, dword ptr [mem_00A9F270]
        mov dword ptr [mem_00B5B418], ecx
        mov ecx, dword ptr [mem_00A9F274]
        mov dword ptr [mem_00B5B41C], edx
        mov edx, dword ptr [mem_00A9F278]
        mov dword ptr [mem_00B5B420], eax
        mov eax, dword ptr [mem_00A9F27C]
        mov dword ptr [mem_00B5B424], ecx
        mov ecx, dword ptr [mem_00A9F280]
        mov dword ptr [mem_00B5B428], edx
        mov edx, dword ptr [mem_00A9F284]
        mov dword ptr [mem_00B5B42C], eax
        mov eax, dword ptr [mem_00A9F288]
        mov dword ptr [mem_00B5B430], ecx
        mov ecx, dword ptr [mem_00A9F28C]
        mov dword ptr [mem_00B5B434], edx
        mov edx, dword ptr [mem_00A9F290]
        mov dword ptr [mem_00B5B438], eax
        mov eax, dword ptr [mem_00A9F294]
        mov dword ptr [mem_00B5B43C], ecx
        mov ecx, dword ptr [mem_00A9F298]
        mov dword ptr [mem_00B5B440], edx
        mov dword ptr [mem_00B5B444], eax
        mov edx, dword ptr [mem_00A9F29C]
        mov eax, dword ptr [mem_00A9F2A0]
        mov dword ptr [mem_00B5B448], ecx
        mov ecx, dword ptr [mem_00A9F2A4]
        mov dword ptr [mem_00B5B44C], edx
        mov edx, dword ptr [mem_00A9F2A8]
        mov dword ptr [mem_00B5B450], eax
        mov eax, dword ptr [mem_00A9F2AC]
        mov dword ptr [mem_00B5B454], ecx
        mov ecx, dword ptr [mem_00A9F2B0]
        mov dword ptr [mem_00B5B458], edx
        mov edx, dword ptr [mem_00A9F2B4]
        mov dword ptr [mem_00B5B45C], eax
        mov eax, dword ptr [mem_00A9F2B8]
        mov dword ptr [mem_00B5B460], ecx
        mov ecx, dword ptr [mem_00A9F2BC]
        mov dword ptr [mem_00B5B464], edx
        mov edx, dword ptr [mem_00A9F2C0]
        mov dword ptr [mem_00B5B468], eax
        mov eax, dword ptr [mem_00A9F2C4]
        mov dword ptr [mem_00B5B46C], ecx
        mov ecx, dword ptr [mem_00A9F2C8]
        mov dword ptr [mem_00B5B470], edx
        mov edx, dword ptr [mem_00A9F2CC]
        mov dword ptr [mem_00B5B474], eax
        mov eax, dword ptr [mem_00A9F2D0]
        mov dword ptr [mem_00B5B478], ecx
        mov ecx, dword ptr [mem_00A9F2D4]
        mov dword ptr [mem_00B5B47C], edx
        mov edx, dword ptr [mem_00A9F2D8]
        mov dword ptr [mem_00B5B480], eax
        mov eax, dword ptr [mem_00A9F2DC]
        mov dword ptr [mem_00B5B484], ecx
        mov ecx, dword ptr [mem_00A9F2E0]
        mov dword ptr [mem_00B5B488], edx
        mov edx, dword ptr [mem_00A9F2E4]
        mov dword ptr [mem_00B5B48C], eax
        mov eax, dword ptr [mem_00A9F2E8]
        mov dword ptr [mem_00B5B490], ecx
        mov ecx, dword ptr [mem_00A9F2EC]
        mov dword ptr [mem_00B5B494], edx
        mov edx, dword ptr [mem_00A9F2F0]
        mov dword ptr [mem_00B5B498], eax
        mov eax, dword ptr [mem_00A9F2F4]
        mov dword ptr [mem_00B5B49C], ecx
        mov ecx, dword ptr [mem_00A9F2F8]
        mov dword ptr [mem_00B5B4A0], edx
        mov edx, dword ptr [mem_00A9F2FC]
        mov dword ptr [mem_00B5B4A4], eax
        mov eax, dword ptr [mem_00A9F300]
        mov dword ptr [mem_00B5B4A8], ecx
        mov ecx, dword ptr [mem_00A9F304]
        mov dword ptr [mem_00B5B4AC], edx
        mov edx, dword ptr [mem_00A9F308]
        mov dword ptr [mem_00B5B4B0], eax
        mov eax, dword ptr [mem_00A9F30C]
        mov dword ptr [mem_00B5B4B4], ecx
        mov ecx, dword ptr [mem_00A9F310]
        mov dword ptr [mem_00B5B4B8], edx
        mov edx, dword ptr [mem_00A9F314]
        mov dword ptr [mem_00B5B4BC], eax
        mov eax, dword ptr [mem_00A9F318]
        mov dword ptr [mem_00B5B4C0], ecx
        mov ecx, dword ptr [mem_00A9F31C]
        mov dword ptr [mem_00B5B4C4], edx
        mov edx, dword ptr [mem_00A9F320]
        mov dword ptr [mem_00B5B4C8], eax
        mov eax, dword ptr [mem_00A9F324]
        mov dword ptr [mem_00B5B4CC], ecx
        mov ecx, dword ptr [mem_00A9F328]
        mov dword ptr [mem_00B5B4D0], edx
        mov edx, dword ptr [mem_00A9F32C]
        mov dword ptr [mem_00B5B4D4], eax
        mov eax, dword ptr [mem_00A9F330]
        mov dword ptr [mem_00B5B4D8], ecx
        mov ecx, dword ptr [mem_00A9F334]
        mov dword ptr [mem_00B5B4DC], edx
        mov edx, dword ptr [mem_00A9F338]
        mov dword ptr [mem_00B5B4E0], eax
        mov dword ptr [mem_00B5B4E4], ecx
        mov dword ptr [mem_00B5B4E8], edx
        mov eax, dword ptr [mem_00A9F33C]
        mov ecx, dword ptr [mem_00A9F340]
        mov edx, dword ptr [mem_00A9F344]
        mov dword ptr [mem_00B5B4EC], eax
        mov eax, dword ptr [mem_00A9F348]
        mov dword ptr [mem_00B5B4F0], ecx
        mov ecx, dword ptr [mem_00A9F34C]
        mov dword ptr [mem_00B5B4F4], edx
        mov edx, dword ptr [mem_00A9F350]
        mov dword ptr [mem_00B5B4F8], eax
        mov eax, dword ptr [mem_00A9F354]
        mov dword ptr [mem_00B5B4FC], ecx
        mov ecx, dword ptr [mem_00A9F358]
        mov dword ptr [mem_00B5B500], edx
        mov edx, dword ptr [mem_00A9F35C]
        mov dword ptr [mem_00B5B504], eax
        mov eax, dword ptr [mem_00A9F360]
        mov dword ptr [mem_00B5B508], ecx
        mov ecx, dword ptr [mem_00A9F364]
        mov dword ptr [mem_00B5B50C], edx
        mov edx, dword ptr [mem_00A9F368]
        mov dword ptr [mem_00B5B510], eax
        mov eax, dword ptr [mem_00A9F36C]
        mov dword ptr [mem_00B5B514], ecx
        mov ecx, dword ptr [mem_00A9F370]
        mov dword ptr [mem_00B5B518], edx
        mov edx, dword ptr [mem_00A9F374]
        mov dword ptr [mem_00B5B51C], eax
        mov eax, dword ptr [mem_00A9F378]
        mov dword ptr [mem_00B5B520], ecx
        mov ecx, dword ptr [mem_00A9F37C]
        mov dword ptr [mem_00B5B524], edx
        mov edx, dword ptr [mem_00A9F380]
        mov dword ptr [mem_00B5B528], eax
        mov eax, dword ptr [mem_00A9F384]
        mov dword ptr [mem_00B5B52C], ecx
        mov ecx, dword ptr [mem_00A9F388]
        mov dword ptr [mem_00B5B530], edx
        mov edx, dword ptr [mem_00A9F38C]
        mov dword ptr [mem_00B5B534], eax
        mov eax, dword ptr [mem_00A9F390]
        mov dword ptr [mem_00B5B538], ecx
        mov ecx, dword ptr [mem_00A9F394]
        mov dword ptr [mem_00B5B53C], edx
        mov edx, dword ptr [mem_00A9F398]
        mov dword ptr [mem_00B5B540], eax
        mov eax, dword ptr [mem_00A9F39C]
        mov dword ptr [mem_00B5B544], ecx
        mov ecx, dword ptr [mem_00A9F3A0]
        mov dword ptr [mem_00B5B548], edx
        mov edx, dword ptr [mem_00A9F3A4]
        mov dword ptr [mem_00B5B54C], eax
        mov eax, dword ptr [mem_00A9F3A8]
        mov dword ptr [mem_00B5B550], ecx
        mov ecx, dword ptr [mem_00A9F3AC]
        mov dword ptr [mem_00B5B554], edx
        mov edx, dword ptr [mem_00A9F3B0]
        mov dword ptr [mem_00B5B558], eax
        mov eax, dword ptr [mem_00A9F3B4]
        mov dword ptr [mem_00B5B55C], ecx
        mov ecx, dword ptr [mem_00A9F3B8]
        mov dword ptr [mem_00B5B560], edx
        mov edx, dword ptr [mem_00A9F3BC]
        mov dword ptr [mem_00B5B564], eax
        mov eax, dword ptr [mem_00A9F3C0]
        mov dword ptr [mem_00B5B568], ecx
        mov ecx, dword ptr [mem_00A9F3C4]
        mov dword ptr [mem_00B5B56C], edx
        mov edx, dword ptr [mem_00A9F3C8]
        mov dword ptr [mem_00B5B570], eax
        mov eax, dword ptr [mem_00A9F3CC]
        mov dword ptr [mem_00B5B574], ecx
        mov ecx, dword ptr [mem_00A9F3D0]
        mov dword ptr [mem_00B5B578], edx
        mov edx, dword ptr [mem_00A9F3D4]
        mov dword ptr [mem_00B5B57C], eax
        mov eax, dword ptr [mem_00A9F3D8]
        mov dword ptr [mem_00B5B580], ecx
        mov ecx, dword ptr [mem_00A9F3DC]
        mov dword ptr [mem_00B5B584], edx
        mov dword ptr [mem_00B5B588], eax
        mov edx, dword ptr [mem_00A9F3E0]
        mov eax, dword ptr [mem_00A9F3E4]
        mov dword ptr [mem_00B5B58C], ecx
        mov ecx, dword ptr [mem_00A9F3E8]
        mov dword ptr [mem_00B5B590], edx
        mov edx, dword ptr [mem_00A9F3EC]
        mov dword ptr [mem_00B5B594], eax
        mov eax, dword ptr [mem_00A9F3F0]
        mov dword ptr [mem_00B5B598], ecx
        mov ecx, dword ptr [mem_00A9F3F4]
        mov dword ptr [mem_00B5B59C], edx
        mov edx, dword ptr [mem_00A9F3F8]
        mov dword ptr [mem_00B5B5A0], eax
        mov eax, dword ptr [mem_00A9F3FC]
        mov dword ptr [mem_00B5B5A4], ecx
        mov ecx, dword ptr [mem_00A9F400]
        mov dword ptr [mem_00B5B5A8], edx
        mov edx, dword ptr [mem_00A9F404]
        mov dword ptr [mem_00B5B5AC], eax
        mov eax, dword ptr [mem_00A9F408]
        mov dword ptr [mem_00B5B5B0], ecx
        mov ecx, dword ptr [mem_00A9F40C]
        mov dword ptr [mem_00B5B5B4], edx
        mov edx, dword ptr [mem_00A9F410]
        mov dword ptr [mem_00B5B5B8], eax
        mov eax, dword ptr [mem_00A9F414]
        mov dword ptr [mem_00B5B5BC], ecx
        mov ecx, dword ptr [mem_00A9F418]
        mov dword ptr [mem_00B5B5C0], edx
        mov edx, dword ptr [mem_00A9F41C]
        mov dword ptr [mem_00B5B5C4], eax
        mov eax, dword ptr [mem_00A9F420]
        mov dword ptr [mem_00B5B5C8], ecx
        mov ecx, dword ptr [mem_00A9F424]
        mov dword ptr [mem_00B5B5CC], edx
        mov edx, dword ptr [mem_00A9F428]
        mov dword ptr [mem_00B5B5D0], eax
        mov eax, dword ptr [mem_00A9F42C]
        mov dword ptr [mem_00B5B5D4], ecx
        mov ecx, dword ptr [mem_00A9F430]
        mov dword ptr [mem_00B5B5D8], edx
        mov edx, dword ptr [mem_00A9F434]
        mov dword ptr [mem_00B5B5DC], eax
        mov eax, dword ptr [mem_00A9F438]
        mov dword ptr [mem_00B5B5E0], ecx
        mov ecx, dword ptr [mem_00A9F43C]
        mov dword ptr [mem_00B5B5E4], edx
        mov edx, dword ptr [mem_00A9F440]
        mov dword ptr [mem_00B5B5E8], eax
        mov eax, dword ptr [mem_00A9F444]
        mov dword ptr [mem_00B5B5EC], ecx
        mov ecx, dword ptr [mem_00A9F448]
        mov dword ptr [mem_00B5B5F0], edx
        mov edx, dword ptr [mem_00A9F44C]
        mov dword ptr [mem_00B5B5F4], eax
        mov eax, dword ptr [mem_00A9F450]
        mov dword ptr [mem_00B5B5F8], ecx
        mov ecx, dword ptr [mem_00A9F454]
        mov dword ptr [mem_00B5B5FC], edx
        mov edx, dword ptr [mem_00A9F458]
        mov dword ptr [mem_00B5B600], eax
        mov eax, dword ptr [mem_00A9F45C]
        mov dword ptr [mem_00B5B604], ecx
        mov ecx, dword ptr [mem_00A9F460]
        mov dword ptr [mem_00B5B608], edx
        mov edx, dword ptr [mem_00A9F464]
        mov dword ptr [mem_00B5B60C], eax
        mov eax, dword ptr [mem_00A9F468]
        mov dword ptr [mem_00B5B610], ecx
        mov ecx, dword ptr [mem_00A9F46C]
        mov dword ptr [mem_00B5B614], edx
        mov edx, dword ptr [mem_00A9F470]
        mov dword ptr [mem_00B5B618], eax
        mov eax, dword ptr [mem_00A9F474]
        mov dword ptr [mem_00B5B61C], ecx
        mov ecx, dword ptr [mem_00A9F478]
        mov dword ptr [mem_00B5B620], edx
        mov edx, dword ptr [mem_00A9F47C]
        mov dword ptr [mem_00B5B624], eax
        mov dword ptr [mem_00B5B628], ecx
        mov dword ptr [mem_00B5B62C], edx
        mov eax, dword ptr [mem_00A9F480]
        mov ecx, dword ptr [mem_00A9F484]
        mov edx, dword ptr [mem_00A9F488]
        mov dword ptr [mem_00B5B630], eax
        mov eax, dword ptr [mem_00A9F48C]
        mov dword ptr [mem_00B5B634], ecx
        mov ecx, dword ptr [mem_00A9F490]
        mov dword ptr [mem_00B5B638], edx
        mov edx, dword ptr [mem_00A9F494]
        mov dword ptr [mem_00B5B63C], eax
        mov eax, dword ptr [mem_00A9F498]
        mov dword ptr [mem_00B5B640], ecx
        mov ecx, dword ptr [mem_00A9F49C]
        mov dword ptr [mem_00B5B644], edx
        mov edx, dword ptr [mem_00A9F4A0]
        mov dword ptr [mem_00B5B648], eax
        mov eax, dword ptr [mem_00A9F4A4]
        mov dword ptr [mem_00B5B64C], ecx
        mov ecx, dword ptr [mem_00A9F4A8]
        mov dword ptr [mem_00B5B650], edx
        mov edx, dword ptr [mem_00A9F4AC]
        mov dword ptr [mem_00B5B654], eax
        mov eax, dword ptr [mem_00A9F4B0]
        mov dword ptr [mem_00B5B658], ecx
        mov ecx, dword ptr [mem_00A9F4B4]
        mov dword ptr [mem_00B5B65C], edx
        mov edx, dword ptr [mem_00A9F4B8]
        mov dword ptr [mem_00B5B660], eax
        mov eax, dword ptr [mem_00A9F4BC]
        mov dword ptr [mem_00B5B664], ecx
        mov ecx, dword ptr [mem_00A9F4C0]
        mov dword ptr [mem_00B5B668], edx
        mov edx, dword ptr [mem_00A9F4C4]
        mov dword ptr [mem_00B5B66C], eax
        mov eax, dword ptr [mem_00A9F4C8]
        mov dword ptr [mem_00B5B670], ecx
        mov ecx, dword ptr [mem_00A9F4CC]
        mov dword ptr [mem_00B5B674], edx
        mov edx, dword ptr [mem_00A9F4D0]
        mov dword ptr [mem_00B5B678], eax
        mov eax, dword ptr [mem_00A9F4D4]
        mov dword ptr [mem_00B5B67C], ecx
        mov ecx, dword ptr [mem_00A9F4D8]
        mov dword ptr [mem_00B5B680], edx
        mov edx, dword ptr [mem_00A9F4DC]
        mov dword ptr [mem_00B5B684], eax
        mov eax, dword ptr [mem_00A9F4E0]
        mov dword ptr [mem_00B5B688], ecx
        mov ecx, dword ptr [mem_00A9F4E4]
        mov dword ptr [mem_00B5B68C], edx
        mov edx, dword ptr [mem_00A9F4E8]
        mov dword ptr [mem_00B5B690], eax
        mov eax, dword ptr [mem_00A9F4EC]
        mov dword ptr [mem_00B5B694], ecx
        mov ecx, dword ptr [mem_00A9F4F0]
        mov dword ptr [mem_00B5B698], edx
        mov edx, dword ptr [mem_00A9F4F4]
        mov dword ptr [mem_00B5B69C], eax
        mov eax, dword ptr [mem_00A9F4F8]
        mov dword ptr [mem_00B5B6A0], ecx
        mov ecx, dword ptr [mem_00A9F4FC]
        mov dword ptr [mem_00B5B6A4], edx
        mov edx, dword ptr [mem_00A9F500]
        mov dword ptr [mem_00B5B6A8], eax
        mov eax, dword ptr [mem_00A9F504]
        mov dword ptr [mem_00B5B6AC], ecx
        mov ecx, dword ptr [mem_00A9F508]
        mov dword ptr [mem_00B5B6B0], edx
        mov edx, dword ptr [mem_00A9F50C]
        mov dword ptr [mem_00B5B6B4], eax
        mov eax, dword ptr [mem_00A9F510]
        mov dword ptr [mem_00B5B6B8], ecx
        mov ecx, dword ptr [mem_00A9F514]
        mov dword ptr [mem_00B5B6BC], edx
        mov edx, dword ptr [mem_00A9F518]
        mov dword ptr [mem_00B5B6C0], eax
        mov eax, dword ptr [mem_00A9F51C]
        mov dword ptr [mem_00B5B6C4], ecx
        mov ecx, dword ptr [mem_00A9F520]
        mov dword ptr [mem_00B5B6C8], edx
        mov dword ptr [mem_00B5B6CC], eax
        mov edx, dword ptr [mem_00A9F524]
        mov eax, dword ptr [mem_00A9F528]
        mov dword ptr [mem_00B5B6D0], ecx
        mov ecx, dword ptr [mem_00A9F52C]
        mov dword ptr [mem_00B5B6D4], edx
        mov edx, dword ptr [mem_00A9F530]
        mov dword ptr [mem_00B5B6D8], eax
        mov eax, dword ptr [mem_00A9F534]
        mov dword ptr [mem_00B5B6DC], ecx
        mov ecx, dword ptr [mem_00A9F538]
        mov dword ptr [mem_00B5B6E0], edx
        mov edx, dword ptr [mem_00A9F53C]
        mov dword ptr [mem_00B5B6E4], eax
        mov eax, dword ptr [mem_00A9F540]
        mov dword ptr [mem_00B5B6E8], ecx
        mov ecx, dword ptr [mem_00A9F544]
        mov dword ptr [mem_00B5B6EC], edx
        mov edx, dword ptr [mem_00A9F548]
        mov dword ptr [mem_00B5B6F0], eax
        mov eax, dword ptr [mem_00A9F54C]
        mov dword ptr [mem_00B5B6F4], ecx
        mov ecx, dword ptr [mem_00A9F550]
        mov dword ptr [mem_00B5B6F8], edx
        mov edx, dword ptr [mem_00A9F554]
        mov dword ptr [mem_00B5B6FC], eax
        mov eax, dword ptr [mem_00A9F558]
        mov dword ptr [mem_00B5B700], ecx
        mov ecx, dword ptr [mem_00A9F55C]
        mov dword ptr [mem_00B5B704], edx
        mov edx, dword ptr [mem_00A9F560]
        mov dword ptr [mem_00B5B708], eax
        mov eax, dword ptr [mem_00A9F564]
        mov dword ptr [mem_00B5B70C], ecx
        mov ecx, dword ptr [mem_00A9F568]
        mov dword ptr [mem_00B5B710], edx
        mov edx, dword ptr [mem_00A9F56C]
        mov dword ptr [mem_00B5B714], eax
        mov eax, dword ptr [mem_00A9F570]
        mov dword ptr [mem_00B5B718], ecx
        mov ecx, dword ptr [mem_00A9F574]
        mov dword ptr [mem_00B5B71C], edx
        mov edx, dword ptr [mem_00A9F578]
        mov dword ptr [mem_00B5B720], eax
        mov eax, dword ptr [mem_00A9F57C]
        mov dword ptr [mem_00B5B724], ecx
        mov ecx, dword ptr [mem_00A9F580]
        mov dword ptr [mem_00B5B728], edx
        mov edx, dword ptr [mem_00A9F584]
        mov dword ptr [mem_00B5B72C], eax
        mov eax, dword ptr [mem_00A9F588]
        mov dword ptr [mem_00B5B730], ecx
        mov ecx, dword ptr [mem_00A9F58C]
        mov dword ptr [mem_00B5B734], edx
        mov edx, dword ptr [mem_00A9F590]
        mov dword ptr [mem_00B5B738], eax
        mov eax, dword ptr [mem_00A9F594]
        mov dword ptr [mem_00B5B73C], ecx
        mov ecx, dword ptr [mem_00A9F598]
        mov dword ptr [mem_00B5B740], edx
        mov edx, dword ptr [mem_00A9F59C]
        mov dword ptr [mem_00B5B744], eax
        mov eax, dword ptr [mem_00A9F5A0]
        mov dword ptr [mem_00B5B748], ecx
        mov ecx, dword ptr [mem_00A9F5A4]
        mov dword ptr [mem_00B5B74C], edx
        mov edx, dword ptr [mem_00A9F5A8]
        mov dword ptr [mem_00B5B750], eax
        mov eax, dword ptr [mem_00A9F5AC]
        mov dword ptr [mem_00B5B754], ecx
        mov ecx, dword ptr [mem_00A9F5B0]
        mov dword ptr [mem_00B5B758], edx
        mov edx, dword ptr [mem_00A9F5B4]
        mov dword ptr [mem_00B5B75C], eax
        mov eax, dword ptr [mem_00A9F5B8]
        mov dword ptr [mem_00B5B760], ecx
        mov ecx, dword ptr [mem_00A9F5BC]
        mov dword ptr [mem_00B5B764], edx
        mov edx, dword ptr [mem_00A9F5C0]
        mov dword ptr [mem_00B5B768], eax
        mov dword ptr [mem_00B5B76C], ecx
        mov dword ptr [mem_00B5B770], edx
        mov eax, dword ptr [mem_00A9F5C4]
        mov ecx, dword ptr [mem_00A9F5C8]
        mov edx, dword ptr [mem_00A9F5CC]
        mov dword ptr [mem_00B5B774], eax
        mov eax, dword ptr [mem_00A9F5D0]
        mov dword ptr [mem_00B5B778], ecx
        mov ecx, dword ptr [mem_00A9F5D4]
        mov dword ptr [mem_00B5B77C], edx
        mov edx, dword ptr [mem_00A9F5D8]
        mov dword ptr [mem_00B5B780], eax
        mov eax, dword ptr [mem_00A9F5DC]
        mov dword ptr [mem_00B5B784], ecx
        mov ecx, dword ptr [mem_00A9F5E0]
        mov dword ptr [mem_00B5B788], edx
        mov edx, dword ptr [mem_00A9F5E4]
        mov dword ptr [mem_00B5B78C], eax
        mov eax, dword ptr [mem_00A9F5E8]
        mov dword ptr [mem_00B5B790], ecx
        mov ecx, dword ptr [mem_00A9F5EC]
        mov dword ptr [mem_00B5B794], edx
        mov edx, dword ptr [mem_00A9F5F0]
        mov dword ptr [mem_00B5B798], eax
        mov eax, dword ptr [mem_00A9F5F4]
        mov dword ptr [mem_00B5B79C], ecx
        mov ecx, dword ptr [mem_00A9F5F8]
        mov dword ptr [mem_00B5B7A0], edx
        mov edx, dword ptr [mem_00A9F5FC]
        mov dword ptr [mem_00B5B7A4], eax
        mov eax, dword ptr [mem_00A9F600]
        mov dword ptr [mem_00B5B7A8], ecx
        mov ecx, dword ptr [mem_00A9F604]
        mov dword ptr [mem_00B5B7AC], edx
        mov edx, dword ptr [mem_00A9F608]
        mov dword ptr [mem_00B5B7B0], eax
        mov eax, dword ptr [mem_00A9F60C]
        mov dword ptr [mem_00B5B7B4], ecx
        mov ecx, dword ptr [mem_00A9F610]
        mov dword ptr [mem_00B5B7B8], edx
        mov edx, dword ptr [mem_00A9F614]
        mov dword ptr [mem_00B5B7BC], eax
        mov eax, dword ptr [mem_00A9F618]
        mov dword ptr [mem_00B5B7C0], ecx
        mov ecx, dword ptr [mem_00A9F61C]
        mov dword ptr [mem_00B5B7C4], edx
        mov edx, dword ptr [mem_00A9F620]
        mov dword ptr [mem_00B5B7C8], eax
        mov eax, dword ptr [mem_00A9F624]
        mov dword ptr [mem_00B5B7CC], ecx
        mov ecx, dword ptr [mem_00A9F628]
        mov dword ptr [mem_00B5B7D0], edx
        mov edx, dword ptr [mem_00A9F62C]
        mov dword ptr [mem_00B5B7D4], eax
        mov eax, dword ptr [mem_00A9F630]
        mov dword ptr [mem_00B5B7D8], ecx
        mov ecx, dword ptr [mem_00A9F634]
        mov dword ptr [mem_00B5B7DC], edx
        mov edx, dword ptr [mem_00A9F638]
        mov dword ptr [mem_00B5B7E0], eax
        mov eax, dword ptr [mem_00A9F63C]
        mov dword ptr [mem_00B5B7E4], ecx
        mov ecx, dword ptr [mem_00A9F640]
        mov dword ptr [mem_00B5B7E8], edx
        mov edx, dword ptr [mem_00A9F644]
        mov dword ptr [mem_00B5B7EC], eax
        mov eax, dword ptr [mem_00A9F648]
        mov dword ptr [mem_00B5B7F0], ecx
        mov ecx, dword ptr [mem_00A9F64C]
        mov dword ptr [mem_00B5B7F4], edx
        mov edx, dword ptr [mem_00A9F650]
        mov dword ptr [mem_00B5B7F8], eax
        mov eax, dword ptr [mem_00A9F654]
        mov dword ptr [mem_00B5B7FC], ecx
        mov ecx, dword ptr [mem_00A9F658]
        mov dword ptr [mem_00B5B800], edx
        mov edx, dword ptr [mem_00A9F65C]
        mov dword ptr [mem_00B5B804], eax
        mov eax, dword ptr [mem_00A9F660]
        mov dword ptr [mem_00B5B808], ecx
        mov ecx, dword ptr [mem_00A9F664]
        mov dword ptr [mem_00B5B80C], edx
        mov dword ptr [mem_00B5B810], eax
        mov edx, dword ptr [mem_00A9F668]
        mov eax, dword ptr [mem_00A9F66C]
        mov dword ptr [mem_00B5B814], ecx
        mov ecx, dword ptr [mem_00A9F670]
        mov dword ptr [mem_00B5B818], edx
        mov edx, dword ptr [mem_00A9F674]
        mov dword ptr [mem_00B5B81C], eax
        mov eax, dword ptr [mem_00A9F678]
        mov dword ptr [mem_00B5B820], ecx
        mov ecx, dword ptr [mem_00A9F67C]
        mov dword ptr [mem_00B5B824], edx
        mov edx, dword ptr [mem_00A9F680]
        mov dword ptr [mem_00B5B828], eax
        mov eax, dword ptr [mem_00A9F684]
        mov dword ptr [mem_00B5B82C], ecx
        mov ecx, dword ptr [mem_00A9F688]
        mov dword ptr [mem_00B5B830], edx
        mov edx, dword ptr [mem_00A9F68C]
        mov dword ptr [mem_00B5B834], eax
        mov eax, dword ptr [mem_00A9F690]
        mov dword ptr [mem_00B5B838], ecx
        mov ecx, dword ptr [mem_00A9F694]
        mov dword ptr [mem_00B5B83C], edx
        mov edx, dword ptr [mem_00A9F698]
        mov dword ptr [mem_00B5B840], eax
        mov eax, dword ptr [mem_00A9F69C]
        mov dword ptr [mem_00B5B844], ecx
        mov ecx, dword ptr [mem_00A9F6A0]
        mov dword ptr [mem_00B5B848], edx
        mov edx, dword ptr [mem_00A9F6A4]
        mov dword ptr [mem_00B5B84C], eax
        mov eax, dword ptr [mem_00A9F6A8]
        mov dword ptr [mem_00B5B850], ecx
        mov ecx, dword ptr [mem_00A9F6AC]
        mov dword ptr [mem_00B5B854], edx
        mov edx, dword ptr [mem_00A9F6B0]
        mov dword ptr [mem_00B5B858], eax
        mov eax, dword ptr [mem_00A9F6B4]
        mov dword ptr [mem_00B5B85C], ecx
        mov ecx, dword ptr [mem_00A9F6B8]
        mov dword ptr [mem_00B5B860], edx
        mov edx, dword ptr [mem_00A9F6BC]
        mov dword ptr [mem_00B5B864], eax
        mov eax, dword ptr [mem_00A9F6C0]
        mov dword ptr [mem_00B5B868], ecx
        mov ecx, dword ptr [mem_00A9F6C4]
        mov dword ptr [mem_00B5B86C], edx
        mov edx, dword ptr [mem_00A9F6C8]
        mov dword ptr [mem_00B5B870], eax
        mov eax, dword ptr [mem_00A9F6CC]
        mov dword ptr [mem_00B5B874], ecx
        mov ecx, dword ptr [mem_00A9F6D0]
        mov dword ptr [mem_00B5B878], edx
        mov edx, dword ptr [mem_00A9F6D4]
        mov dword ptr [mem_00B5B87C], eax
        mov eax, dword ptr [mem_00A9F6D8]
        mov dword ptr [mem_00B5B880], ecx
        mov ecx, dword ptr [mem_00A9F6DC]
        mov dword ptr [mem_00B5B884], edx
        mov edx, dword ptr [mem_00A9F6E0]
        mov dword ptr [mem_00B5B888], eax
        mov eax, dword ptr [mem_00A9F6E4]
        mov dword ptr [mem_00B5B88C], ecx
        mov ecx, dword ptr [mem_00A9F6E8]
        mov dword ptr [mem_00B5B890], edx
        mov edx, dword ptr [mem_00A9F6EC]
        mov dword ptr [mem_00B5B894], eax
        mov eax, dword ptr [mem_00A9F6F0]
        mov dword ptr [mem_00B5B898], ecx
        mov ecx, dword ptr [mem_00A9F6F4]
        mov dword ptr [mem_00B5B89C], edx
        mov edx, dword ptr [mem_00A9F6F8]
        mov dword ptr [mem_00B5B8A0], eax
        mov eax, dword ptr [mem_00A9F6FC]
        mov dword ptr [mem_00B5B8A4], ecx
        mov ecx, dword ptr [mem_00A9F700]
        mov dword ptr [mem_00B5B8A8], edx
        mov edx, dword ptr [mem_00A9F704]
        mov dword ptr [mem_00B5B8AC], eax
        mov dword ptr [mem_00B5B8B0], ecx
        mov dword ptr [mem_00B5B8B4], edx
        mov eax, dword ptr [mem_00A9F708]
        mov ecx, dword ptr [mem_00A9F70C]
        mov edx, dword ptr [mem_00A9F710]
        mov dword ptr [mem_00B5B8B8], eax
        mov eax, dword ptr [mem_00A9F714]
        mov dword ptr [mem_00B5B8BC], ecx
        mov ecx, dword ptr [mem_00A9F718]
        mov dword ptr [mem_00B5B8C0], edx
        mov edx, dword ptr [mem_00A9F71C]
        mov dword ptr [mem_00B5B8C4], eax
        mov eax, dword ptr [mem_00A9F720]
        mov dword ptr [mem_00B5B8C8], ecx
        mov ecx, dword ptr [mem_00A9F724]
        mov dword ptr [mem_00B5B8CC], edx
        mov edx, dword ptr [mem_00A9F728]
        mov dword ptr [mem_00B5B8D0], eax
        mov eax, dword ptr [mem_00A9F72C]
        mov dword ptr [mem_00B5B8D4], ecx
        mov ecx, dword ptr [mem_00A9F730]
        mov dword ptr [mem_00B5B8D8], edx
        mov edx, dword ptr [mem_00A9F734]
        mov dword ptr [mem_00B5B8DC], eax
        mov eax, dword ptr [mem_00A9F738]
        mov dword ptr [mem_00B5B8E0], ecx
        mov ecx, dword ptr [mem_00A9F73C]
        mov dword ptr [mem_00B5B8E4], edx
        mov edx, dword ptr [mem_00A9F740]
        mov dword ptr [mem_00B5B8E8], eax
        mov eax, dword ptr [mem_00A9F744]
        mov dword ptr [mem_00B5B8EC], ecx
        mov ecx, dword ptr [mem_00A9F748]
        mov dword ptr [mem_00B5B8F0], edx
        mov edx, dword ptr [mem_00A9F74C]
        mov dword ptr [mem_00B5B8F4], eax
        mov eax, dword ptr [mem_00A9F750]
        mov dword ptr [mem_00B5B8F8], ecx
        mov ecx, dword ptr [mem_00A9F754]
        mov dword ptr [mem_00B5B8FC], edx
        mov edx, dword ptr [mem_00A9F758]
        mov dword ptr [mem_00B5B900], eax
        mov eax, dword ptr [mem_00A9F75C]
        mov dword ptr [mem_00B5B904], ecx
        mov ecx, dword ptr [mem_00A9F760]
        mov dword ptr [mem_00B5B908], edx
        mov edx, dword ptr [mem_00A9F764]
        mov dword ptr [mem_00B5B90C], eax
        mov eax, dword ptr [mem_00A9F768]
        mov dword ptr [mem_00B5B910], ecx
        mov ecx, dword ptr [mem_00A9F76C]
        mov dword ptr [mem_00B5B914], edx
        mov edx, dword ptr [mem_00A9F770]
        mov dword ptr [mem_00B5B918], eax
        mov eax, dword ptr [mem_00A9F774]
        mov dword ptr [mem_00B5B91C], ecx
        mov ecx, dword ptr [mem_00A9F778]
        mov dword ptr [mem_00B5B920], edx
        mov edx, dword ptr [mem_00A9F77C]
        mov dword ptr [mem_00B5B924], eax
        mov eax, dword ptr [mem_00A9F780]
        mov dword ptr [mem_00B5B928], ecx
        mov ecx, dword ptr [mem_00A9F784]
        mov dword ptr [mem_00B5B92C], edx
        mov edx, dword ptr [mem_00A9F788]
        mov dword ptr [mem_00B5B930], eax
        mov eax, dword ptr [mem_00A9F78C]
        mov dword ptr [mem_00B5B934], ecx
        mov ecx, dword ptr [mem_00A9F790]
        mov dword ptr [mem_00B5B938], edx
        mov edx, dword ptr [mem_00A9F794]
        mov dword ptr [mem_00B5B93C], eax
        mov eax, dword ptr [mem_00A9F798]
        mov dword ptr [mem_00B5B940], ecx
        mov ecx, dword ptr [mem_00A9F79C]
        mov dword ptr [mem_00B5B944], edx
        mov edx, dword ptr [mem_00A9F7A0]
        mov dword ptr [mem_00B5B948], eax
        mov eax, dword ptr [mem_00A9F7A4]
        mov dword ptr [mem_00B5B94C], ecx
        mov ecx, dword ptr [mem_00A9F7A8]
        mov dword ptr [mem_00B5B950], edx
        mov dword ptr [mem_00B5B954], eax
        mov edx, dword ptr [mem_00A9F7AC]
        mov eax, dword ptr [mem_00A9F7B0]
        mov dword ptr [mem_00B5B958], ecx
        mov ecx, dword ptr [mem_00A9F7B4]
        mov dword ptr [mem_00B5B95C], edx
        mov edx, dword ptr [mem_00A9F7B8]
        mov dword ptr [mem_00B5B960], eax
        mov eax, dword ptr [mem_00A9F7BC]
        mov dword ptr [mem_00B5B964], ecx
        mov ecx, dword ptr [mem_00A9F7C0]
        mov dword ptr [mem_00B5B968], edx
        mov edx, dword ptr [mem_00A9F7C4]
        mov dword ptr [mem_00B5B96C], eax
        mov eax, dword ptr [mem_00A9F7C8]
        mov dword ptr [mem_00B5B970], ecx
        mov ecx, dword ptr [mem_00A9F7CC]
        mov dword ptr [mem_00B5B974], edx
        mov edx, dword ptr [mem_00A9F7D0]
        mov dword ptr [mem_00B5B978], eax
        mov eax, dword ptr [mem_00A9F7D4]
        mov dword ptr [mem_00B5B97C], ecx
        mov ecx, dword ptr [mem_00A9F7D8]
        mov dword ptr [mem_00B5B980], edx
        mov edx, dword ptr [mem_00A9F7DC]
        mov dword ptr [mem_00B5B984], eax
        mov eax, dword ptr [mem_00A9F7E0]
        mov dword ptr [mem_00B5B988], ecx
        mov ecx, dword ptr [mem_00A9F7E4]
        mov dword ptr [mem_00B5B98C], edx
        mov edx, dword ptr [mem_00A9F7E8]
        mov dword ptr [mem_00B5B990], eax
        mov eax, dword ptr [mem_00A9F7EC]
        mov dword ptr [mem_00B5B994], ecx
        mov ecx, dword ptr [mem_00A9F7F0]
        mov dword ptr [mem_00B5B998], edx
        mov edx, dword ptr [mem_00A9F7F4]
        mov dword ptr [mem_00B5B99C], eax
        mov eax, dword ptr [mem_00A9F7F8]
        mov dword ptr [mem_00B5B9A0], ecx
        mov ecx, dword ptr [mem_00A9F7FC]
        mov dword ptr [mem_00B5B9A4], edx
        mov edx, dword ptr [mem_00A9F800]
        mov dword ptr [mem_00B5B9A8], eax
        mov eax, dword ptr [mem_00A9F804]
        mov dword ptr [mem_00B5B9AC], ecx
        mov ecx, dword ptr [mem_00A9F808]
        mov dword ptr [mem_00B5B9B0], edx
        mov edx, dword ptr [mem_00A9F80C]
        mov dword ptr [mem_00B5B9B4], eax
        mov eax, dword ptr [mem_00A9F810]
        mov dword ptr [mem_00B5B9B8], ecx
        mov ecx, dword ptr [mem_00A9F814]
        mov dword ptr [mem_00B5B9BC], edx
        mov edx, dword ptr [mem_00A9F818]
        mov dword ptr [mem_00B5B9C0], eax
        mov eax, dword ptr [mem_00A9F81C]
        mov dword ptr [mem_00B5B9C4], ecx
        mov ecx, dword ptr [mem_00A9F820]
        mov dword ptr [mem_00B5B9C8], edx
        mov edx, dword ptr [mem_00A9F824]
        mov dword ptr [mem_00B5B9CC], eax
        mov eax, dword ptr [mem_00A9F828]
        mov dword ptr [mem_00B5B9D0], ecx
        mov ecx, dword ptr [mem_00A9F82C]
        mov dword ptr [mem_00B5B9D4], edx
        mov edx, dword ptr [mem_00A9F830]
        mov dword ptr [mem_00B5B9D8], eax
        mov eax, dword ptr [mem_00A9F834]
        mov dword ptr [mem_00B5B9DC], ecx
        mov ecx, dword ptr [mem_00A9F838]
        mov dword ptr [mem_00B5B9E0], edx
        mov edx, dword ptr [mem_00A9F83C]
        mov dword ptr [mem_00B5B9E4], eax
        mov eax, dword ptr [mem_00A9F840]
        mov dword ptr [mem_00B5B9E8], ecx
        mov ecx, dword ptr [mem_00A9F844]
        mov dword ptr [mem_00B5B9EC], edx
        mov edx, dword ptr [mem_00A9F848]
        mov dword ptr [mem_00B5B9F0], eax
        mov dword ptr [mem_00B5B9F4], ecx
        mov dword ptr [mem_00B5B9F8], edx
        mov eax, dword ptr [mem_00A9F84C]
        mov ecx, dword ptr [mem_00A9F850]
        mov edx, dword ptr [mem_00A9F854]
        mov dword ptr [mem_00B5B9FC], eax
        mov eax, dword ptr [mem_00A9F858]
        mov dword ptr [mem_00B5BA00], ecx
        mov ecx, dword ptr [mem_00A9F85C]
        mov dword ptr [mem_00B5BA04], edx
        mov edx, dword ptr [mem_00A9F860]
        mov dword ptr [mem_00B5BA08], eax
        mov eax, dword ptr [mem_00A9F864]
        mov dword ptr [mem_00B5BA0C], ecx
        mov ecx, dword ptr [mem_00A9F868]
        mov dword ptr [mem_00B5BA10], edx
        mov edx, dword ptr [mem_00A9F86C]
        mov dword ptr [mem_00B5BA14], eax
        mov eax, dword ptr [mem_00A9F870]
        mov dword ptr [mem_00B5BA18], ecx
        mov ecx, dword ptr [mem_00A9F874]
        mov dword ptr [mem_00B5BA1C], edx
        mov edx, dword ptr [mem_00A9F878]
        mov dword ptr [mem_00B5BA20], eax
        mov eax, dword ptr [mem_00A9F87C]
        mov dword ptr [mem_00B5BA24], ecx
        mov ecx, dword ptr [mem_00A9F880]
        mov dword ptr [mem_00B5BA28], edx
        mov edx, dword ptr [mem_00A9F884]
        mov dword ptr [mem_00B5BA2C], eax
        mov eax, dword ptr [mem_00A9F888]
        mov dword ptr [mem_00B5BA30], ecx
        mov ecx, dword ptr [mem_00A9F88C]
        mov dword ptr [mem_00B5BA34], edx
        mov edx, dword ptr [mem_00A9F890]
        mov dword ptr [mem_00B5BA38], eax
        mov eax, dword ptr [mem_00A9F894]
        mov dword ptr [mem_00B5BA3C], ecx
        mov ecx, dword ptr [mem_00A9F898]
        mov dword ptr [mem_00B5BA40], edx
        mov edx, dword ptr [mem_00A9F89C]
        mov dword ptr [mem_00B5BA44], eax
        mov eax, dword ptr [mem_00A9F8A0]
        mov dword ptr [mem_00B5BA48], ecx
        mov ecx, dword ptr [mem_00A9F8A4]
        mov dword ptr [mem_00B5BA4C], edx
        mov edx, dword ptr [mem_00A9F8A8]
        mov dword ptr [mem_00B5BA50], eax
        mov eax, dword ptr [mem_00A9F8AC]
        mov dword ptr [mem_00B5BA54], ecx
        mov ecx, dword ptr [mem_00A9F8B0]
        mov dword ptr [mem_00B5BA58], edx
        mov edx, dword ptr [mem_00A9F8B4]
        mov dword ptr [mem_00B5BA5C], eax
        mov eax, dword ptr [mem_00A9F8B8]
        mov dword ptr [mem_00B5BA60], ecx
        mov ecx, dword ptr [mem_00A9F8BC]
        mov dword ptr [mem_00B5BA64], edx
        mov edx, dword ptr [mem_00A9F8C0]
        mov dword ptr [mem_00B5BA68], eax
        mov eax, dword ptr [mem_00A9F8C4]
        mov dword ptr [mem_00B5BA6C], ecx
        mov ecx, dword ptr [mem_00A9F8C8]
        mov dword ptr [mem_00B5BA70], edx
        mov edx, dword ptr [mem_00A9F8CC]
        mov dword ptr [mem_00B5BA74], eax
        mov eax, dword ptr [mem_00A9F8D0]
        mov dword ptr [mem_00B5BA78], ecx
        mov ecx, dword ptr [mem_00A9F8D4]
        mov dword ptr [mem_00B5BA7C], edx
        mov edx, dword ptr [mem_00A9F8D8]
        mov dword ptr [mem_00B5BA80], eax
        mov eax, dword ptr [mem_00A9F8DC]
        mov dword ptr [mem_00B5BA84], ecx
        mov ecx, dword ptr [mem_00A9F8E0]
        mov dword ptr [mem_00B5BA88], edx
        mov edx, dword ptr [mem_00A9F8E4]
        mov dword ptr [mem_00B5BA8C], eax
        mov eax, dword ptr [mem_00A9F8E8]
        mov dword ptr [mem_00B5BA90], ecx
        mov ecx, dword ptr [mem_00A9F8EC]
        mov dword ptr [mem_00B5BA94], edx
        mov dword ptr [mem_00B5BA98], eax
        mov edx, dword ptr [mem_00A9F8F0]
        mov eax, dword ptr [mem_00A9F8F4]
        mov dword ptr [mem_00B5BA9C], ecx
        mov ecx, dword ptr [mem_00A9F8F8]
        mov dword ptr [mem_00B5BAA0], edx
        mov edx, dword ptr [mem_00A9F8FC]
        mov dword ptr [mem_00B5BAA4], eax
        mov eax, dword ptr [mem_00A9F900]
        mov dword ptr [mem_00B5BAA8], ecx
        mov ecx, dword ptr [mem_00A9F904]
        mov dword ptr [mem_00B5BAAC], edx
        mov edx, dword ptr [mem_00A9F908]
        mov dword ptr [mem_00B5BAB0], eax
        mov eax, dword ptr [mem_00A9F90C]
        mov dword ptr [mem_00B5BAB4], ecx
        mov ecx, dword ptr [mem_00A9F910]
        mov dword ptr [mem_00B5BAB8], edx
        mov edx, dword ptr [mem_00A9F914]
        mov dword ptr [mem_00B5BABC], eax
        mov eax, dword ptr [mem_00A9F918]
        mov dword ptr [mem_00B5BAC0], ecx
        mov ecx, dword ptr [mem_00A9F91C]
        mov dword ptr [mem_00B5BAC4], edx
        mov edx, dword ptr [mem_00A9F920]
        mov dword ptr [mem_00B5BAC8], eax
        mov eax, dword ptr [mem_00A9F924]
        mov dword ptr [mem_00B5BACC], ecx
        mov ecx, dword ptr [mem_00A9F928]
        mov dword ptr [mem_00B5BAD0], edx
        mov edx, dword ptr [mem_00A9F92C]
        mov dword ptr [mem_00B5BAD4], eax
        mov eax, dword ptr [mem_00A9F930]
        mov dword ptr [mem_00B5BAD8], ecx
        mov ecx, dword ptr [mem_00A9F934]
        mov dword ptr [mem_00B5BADC], edx
        mov edx, dword ptr [mem_00A9F938]
        mov dword ptr [mem_00B5BAE0], eax
        mov eax, dword ptr [mem_00A9F93C]
        mov dword ptr [mem_00B5BAE4], ecx
        mov ecx, dword ptr [mem_00A9F940]
        mov dword ptr [mem_00B5BAE8], edx
        mov edx, dword ptr [mem_00A9F944]
        mov dword ptr [mem_00B5BAEC], eax
        mov eax, dword ptr [mem_00A9F948]
        mov dword ptr [mem_00B5BAF0], ecx
        mov ecx, dword ptr [mem_00A9F94C]
        mov dword ptr [mem_00B5BAF4], edx
        mov edx, dword ptr [mem_00A9F950]
        mov dword ptr [mem_00B5BAF8], eax
        mov eax, dword ptr [mem_00A9F954]
        mov dword ptr [mem_00B5BAFC], ecx
        mov ecx, dword ptr [mem_00A9F958]
        mov dword ptr [mem_00B5BB00], edx
        mov edx, dword ptr [mem_00A9F95C]
        mov dword ptr [mem_00B5BB04], eax
        mov eax, dword ptr [mem_00A9F960]
        mov dword ptr [mem_00B5BB08], ecx
        mov ecx, dword ptr [mem_00A9F964]
        mov dword ptr [mem_00B5BB0C], edx
        mov edx, dword ptr [mem_00A9F968]
        mov dword ptr [mem_00B5BB10], eax
        mov eax, dword ptr [mem_00A9F96C]
        mov dword ptr [mem_00B5BB14], ecx
        mov ecx, dword ptr [mem_00A9F970]
        mov dword ptr [mem_00B5BB18], edx
        mov edx, dword ptr [mem_00A9F974]
        mov dword ptr [mem_00B5BB1C], eax
        mov eax, dword ptr [mem_00A9F978]
        mov dword ptr [mem_00B5BB20], ecx
        mov ecx, dword ptr [mem_00A9F97C]
        mov dword ptr [mem_00B5BB24], edx
        mov edx, dword ptr [mem_00A9F980]
        mov dword ptr [mem_00B5BB28], eax
        mov eax, dword ptr [mem_00A9F984]
        mov dword ptr [mem_00B5BB2C], ecx
        mov ecx, dword ptr [mem_00A9F988]
        mov dword ptr [mem_00B5BB30], edx
        mov edx, dword ptr [mem_00A9F98C]
        mov dword ptr [mem_00B5BB34], eax
        mov dword ptr [mem_00B5BB38], ecx
        mov dword ptr [mem_00B5BB3C], edx
        mov eax, dword ptr [mem_00A9F990]
        mov ecx, dword ptr [mem_00A9F994]
        mov edx, dword ptr [mem_00A9F998]
        mov dword ptr [mem_00B5BB40], eax
        mov eax, dword ptr [mem_00A9F99C]
        mov dword ptr [mem_00B5BB44], ecx
        mov ecx, dword ptr [mem_00A9F9A0]
        mov dword ptr [mem_00B5BB48], edx
        mov edx, dword ptr [mem_00A9F9A4]
        mov dword ptr [mem_00B5BB4C], eax
        mov eax, dword ptr [mem_00A9F9A8]
        mov dword ptr [mem_00B5BB50], ecx
        mov ecx, dword ptr [mem_00A9F9AC]
        mov dword ptr [mem_00B5BB54], edx
        mov edx, dword ptr [mem_00A9F9B0]
        mov dword ptr [mem_00B5BB58], eax
        mov eax, dword ptr [mem_00A9F9B4]
        mov dword ptr [mem_00B5BB5C], ecx
        mov ecx, dword ptr [mem_00A9F9B8]
        mov dword ptr [mem_00B5BB60], edx
        mov edx, dword ptr [mem_00A9F9BC]
        mov dword ptr [mem_00B5BB64], eax
        mov eax, dword ptr [mem_00A9F9C0]
        mov dword ptr [mem_00B5BB68], ecx
        mov ecx, dword ptr [mem_00A9F9C4]
        mov dword ptr [mem_00B5BB6C], edx
        mov edx, dword ptr [mem_00A9F9C8]
        mov dword ptr [mem_00B5BB70], eax
        mov eax, dword ptr [mem_00A9F9CC]
        mov dword ptr [mem_00B5BB74], ecx
        mov ecx, dword ptr [mem_00A9F9D0]
        mov dword ptr [mem_00B5BB78], edx
        mov edx, dword ptr [mem_00A9F9D4]
        mov dword ptr [mem_00B5BB7C], eax
        mov eax, dword ptr [mem_00A9F9D8]
        mov dword ptr [mem_00B5BB80], ecx
        mov ecx, dword ptr [mem_00A9F9DC]
        mov dword ptr [mem_00B5BB84], edx
        mov edx, dword ptr [mem_00A9F9E0]
        mov dword ptr [mem_00B5BB88], eax
        mov eax, dword ptr [mem_00A9F9E4]
        mov dword ptr [mem_00B5BB8C], ecx
        mov ecx, dword ptr [mem_00A9F9E8]
        mov dword ptr [mem_00B5BB90], edx
        mov edx, dword ptr [mem_00A9F9EC]
        mov dword ptr [mem_00B5BB94], eax
        mov eax, dword ptr [mem_00A9F9F0]
        mov dword ptr [mem_00B5BB98], ecx
        mov ecx, dword ptr [mem_00A9F9F4]
        mov dword ptr [mem_00B5BB9C], edx
        mov edx, dword ptr [mem_00A9F9F8]
        mov dword ptr [mem_00B5BBA0], eax
        mov eax, dword ptr [mem_00A9F9FC]
        mov dword ptr [mem_00B5BBA4], ecx
        mov ecx, dword ptr [mem_00A9FA00]
        mov dword ptr [mem_00B5BBA8], edx
        mov edx, dword ptr [mem_00A9FA04]
        mov dword ptr [mem_00B5BBAC], eax
        mov eax, dword ptr [mem_00A9FA08]
        mov dword ptr [mem_00B5BBB0], ecx
        mov ecx, dword ptr [mem_00A9FA0C]
        mov dword ptr [mem_00B5BBB4], edx
        mov edx, dword ptr [mem_00A9FA10]
        mov dword ptr [mem_00B5BBB8], eax
        mov eax, dword ptr [mem_00A9FA14]
        mov dword ptr [mem_00B5BBBC], ecx
        mov ecx, dword ptr [mem_00A9FA18]
        mov dword ptr [mem_00B5BBC0], edx
        mov edx, dword ptr [mem_00A9FA1C]
        mov dword ptr [mem_00B5BBC4], eax
        mov eax, dword ptr [mem_00A9FA20]
        mov dword ptr [mem_00B5BBC8], ecx
        mov ecx, dword ptr [mem_00A9FA24]
        mov dword ptr [mem_00B5BBCC], edx
        mov edx, dword ptr [mem_00A9FA28]
        mov dword ptr [mem_00B5BBD0], eax
        mov eax, dword ptr [mem_00A9FA2C]
        mov dword ptr [mem_00B5BBD4], ecx
        mov ecx, dword ptr [mem_00A9FA30]
        mov dword ptr [mem_00B5BBD8], edx
        mov dword ptr [mem_00B5BBDC], eax
        mov edx, dword ptr [mem_00A9FA34]
        mov eax, dword ptr [mem_00A9FA38]
        mov dword ptr [mem_00B5BBE0], ecx
        mov ecx, dword ptr [mem_00A9FA3C]
        mov dword ptr [mem_00B5BBE4], edx
        mov edx, dword ptr [mem_00A9FA40]
        mov dword ptr [mem_00B5BBE8], eax
        mov eax, dword ptr [mem_00A9FA44]
        mov dword ptr [mem_00B5BBEC], ecx
        mov ecx, dword ptr [mem_00A9FA48]
        mov dword ptr [mem_00B5BBF0], edx
        mov edx, dword ptr [mem_00A9FA4C]
        mov dword ptr [mem_00B5BBF4], eax
        mov eax, dword ptr [mem_00A9FA50]
        mov dword ptr [mem_00B5BBF8], ecx
        mov ecx, dword ptr [mem_00A9FA54]
        mov dword ptr [mem_00B5BBFC], edx
        mov edx, dword ptr [mem_00A9FA58]
        mov dword ptr [mem_00B5BC00], eax
        mov eax, dword ptr [mem_00A9FA5C]
        mov dword ptr [mem_00B5BC04], ecx
        mov ecx, dword ptr [mem_00A9FA60]
        mov dword ptr [mem_00B5BC08], edx
        mov edx, dword ptr [mem_00A9FA64]
        mov dword ptr [mem_00B5BC0C], eax
        mov eax, dword ptr [mem_00A9FA68]
        mov dword ptr [mem_00B5BC10], ecx
        mov ecx, dword ptr [mem_00A9FA6C]
        mov dword ptr [mem_00B5BC14], edx
        mov edx, dword ptr [mem_00A9FA70]
        mov dword ptr [mem_00B5BC18], eax
        mov eax, dword ptr [mem_00A9FA74]
        mov dword ptr [mem_00B5BC1C], ecx
        mov ecx, dword ptr [mem_00A9FA78]
        mov dword ptr [mem_00B5BC20], edx
        mov edx, dword ptr [mem_00A9FA7C]
        mov dword ptr [mem_00B5BC24], eax
        mov eax, dword ptr [mem_00A9FA80]
        mov dword ptr [mem_00B5BC28], ecx
        mov ecx, dword ptr [mem_00A9FA84]
        mov dword ptr [mem_00B5BC2C], edx
        mov edx, dword ptr [mem_00A9FA88]
        mov dword ptr [mem_00B5BC30], eax
        mov eax, dword ptr [mem_00A9FA8C]
        mov dword ptr [mem_00B5BC34], ecx
        mov ecx, dword ptr [mem_00A9FA90]
        mov dword ptr [mem_00B5BC38], edx
        mov edx, dword ptr [mem_00A9FA94]
        mov dword ptr [mem_00B5BC3C], eax
        mov eax, dword ptr [mem_00A9FA98]
        mov dword ptr [mem_00B5BC40], ecx
        mov ecx, dword ptr [mem_00A9FA9C]
        mov dword ptr [mem_00B5BC44], edx
        mov edx, dword ptr [mem_00A9FAA0]
        mov dword ptr [mem_00B5BC48], eax
        mov eax, dword ptr [mem_00A9FAA4]
        mov dword ptr [mem_00B5BC4C], ecx
        mov ecx, dword ptr [mem_00A9FAA8]
        mov dword ptr [mem_00B5BC50], edx
        mov edx, dword ptr [mem_00A9FAAC]
        mov dword ptr [mem_00B5BC54], eax
        mov eax, dword ptr [mem_00A9FAB0]
        mov dword ptr [mem_00B5BC58], ecx
        mov ecx, dword ptr [mem_00A9FAB4]
        mov dword ptr [mem_00B5BC5C], edx
        mov edx, dword ptr [mem_00A9FAB8]
        mov dword ptr [mem_00B5BC60], eax
        mov eax, dword ptr [mem_00A9FABC]
        mov dword ptr [mem_00B5BC64], ecx
        mov ecx, dword ptr [mem_00A9FAC0]
        mov dword ptr [mem_00B5BC68], edx
        mov edx, dword ptr [mem_00A9FAC4]
        mov dword ptr [mem_00B5BC6C], eax
        mov eax, dword ptr [mem_00A9FAC8]
        mov dword ptr [mem_00B5BC70], ecx
        mov ecx, dword ptr [mem_00A9FACC]
        mov dword ptr [mem_00B5BC74], edx
        mov edx, dword ptr [mem_00A9FAD0]
        mov dword ptr [mem_00B5BC78], eax
        mov dword ptr [mem_00B5BC7C], ecx
        mov dword ptr [mem_00B5BC80], edx
        mov eax, dword ptr [mem_00A9FAD4]
        mov ecx, dword ptr [mem_00A9FAD8]
        mov edx, dword ptr [mem_00A9FADC]
        mov dword ptr [mem_00B5BC84], eax
        mov eax, dword ptr [mem_00A9FAE0]
        mov dword ptr [mem_00B5BC88], ecx
        mov ecx, dword ptr [mem_00A9FAE4]
        mov dword ptr [mem_00B5BC8C], edx
        mov edx, dword ptr [mem_00A9FAE8]
        mov dword ptr [mem_00B5BC90], eax
        mov eax, dword ptr [mem_00A9FAEC]
        mov dword ptr [mem_00B5BC94], ecx
        mov ecx, dword ptr [mem_00A9FAF0]
        mov dword ptr [mem_00B5BC98], edx
        mov edx, dword ptr [mem_00A9FAF4]
        mov dword ptr [mem_00B5BC9C], eax
        mov dword ptr [mem_00B5BCA0], ecx
        mov dword ptr [mem_00B5BCA4], edx
        mov dword ptr [mem_00B5BCA8], 0x98ec70
        mov dword ptr [mem_00B5BCAC], 0x98ec64
        mov byte ptr [mem_00B5BCBC], 0x1
        ret
    }
}

