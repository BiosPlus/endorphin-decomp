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
