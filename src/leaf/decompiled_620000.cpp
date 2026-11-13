// Decompiled translation unit: src/leaf/decompiled_620000.cpp

// [0x00627510] sub_00627510 (27 bytes)
extern "C" void ext_00647F20();

extern "C" __declspec(naked) void __fastcall fn_00627510(void* self) {
    __asm {
        lea eax, [ecx + 0x54]
        mov ecx, dword ptr [ecx + 0x28]
        mov edx, dword ptr [ecx + 0x158]
        mov ecx, dword ptr [edx + 0xac]
        mov dword ptr [esp + 4], eax
        jmp ext_00647F20
    }
}

// [0x006294F0] sub_006294F0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006294F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x28]
        mov ecx, dword ptr [eax + 0x20c]
        mov ecx, dword ptr [ecx + 0x234]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x20]
        push 0x0
        call eax
        fstp dword ptr [esi + 0x30]
        pop esi
        ret
    }
}

// [0x00624630] sub_00624630 (16 bytes)
extern "C" void ext_00624540();
extern "C" void ext_00624590();

extern "C" __declspec(naked) void __fastcall fn_00624630(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00624540
        mov ecx, esi
        pop esi
        jmp ext_00624590
    }
}

// [0x00629DA0] sub_00629DA0 (18 bytes)
extern "C" void __fastcall ext_006203B0(void* self);
extern "C" int mem_00976CAC;

extern "C" void* __fastcall fn_00629DA0(void* self) {
    ext_006203B0(self);
    *(int*)self = (int)&mem_00976CAC;
    return self;
}

// [0x0062E360] sub_0062E360 (18 bytes)
extern "C" void __fastcall ext_0062E290(void* self);
extern "C" int mem_0097961C;

extern "C" void* __fastcall fn_0062E360(void* self) {
    ext_0062E290(self);
    *(int*)self = (int)&mem_0097961C;
    return self;
}

// [0x0062E380] sub_0062E380 (18 bytes)
extern "C" void __fastcall ext_0062E290(void* self);
extern "C" int mem_00979694;

extern "C" void* __fastcall fn_0062E380(void* self) {
    ext_0062E290(self);
    *(int*)self = (int)&mem_00979694;
    return self;
}

// [0x0062E3A0] sub_0062E3A0 (18 bytes)
extern "C" int mem_0097970C;

extern "C" void* __fastcall fn_0062E3A0(void* self) {
    ext_0062E290(self);
    *(int*)self = (int)&mem_0097970C;
    return self;
}

// [0x00629DC0] sub_00629DC0 (20 bytes)
extern "C" void* ext_00594000();
extern "C" float __fastcall ext_00594010(void* a);
extern "C" void __fastcall fn_00629DC0(void* self) {
    void* p = ext_00594000();
    float v = ext_00594010(p);
    *(float*)((char*)self + 0x28) = v;
}

// [0x00629DF0] sub_00629DF0 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_00629DF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594010
        fstp dword ptr [esi + 0x30]
        pop esi
        ret
    }
}

// [0x006271D0] sub_006271D0 (25 bytes)
extern "C" void ext_00647E00();

extern "C" __declspec(naked) void __fastcall fn_006271D0(void* self) {
    __asm {
        lea eax, [ecx + 0x30]
        mov ecx, dword ptr [ecx + 0x28]
        mov edx, dword ptr [ecx + 0x158]
        mov ecx, dword ptr [edx + 0xac]
        push eax
        call ext_00647E00
        ret
    }
}

// [0x00627280] sub_00627280 (25 bytes)
extern "C" void ext_00647E20();

extern "C" __declspec(naked) void __fastcall fn_00627280(void* self) {
    __asm {
        lea eax, [ecx + 0x30]
        mov ecx, dword ptr [ecx + 0x28]
        mov edx, dword ptr [ecx + 0x158]
        mov ecx, dword ptr [edx + 0xac]
        push eax
        call ext_00647E20
        ret
    }
}

// [0x006294D0] sub_006294D0 (25 bytes)
extern "C" void ext_005FF240();

extern "C" __declspec(naked) void __fastcall fn_006294D0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        mov dword ptr [esi], 0x978154
        mov eax, esi
        pop esi
        ret 0x10
    }
}

// [0x00629E20] sub_00629E20 (25 bytes)
extern "C" __declspec(naked) void __fastcall fn_00629E20(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        mov dword ptr [esi], 0x9785c4
        mov eax, esi
        pop esi
        ret 0x10
    }
}

// [0x00629E60] sub_00629E60 (26 bytes)
extern "C" void* __fastcall fn_00629E60(void* self) {
    ext_006203B0(self);
    *(float*)((char*)self + 0x30) = 0.0f;
    *(int*)self = 0x976D1C;
    *(float*)((char*)self + 0x2C) = 0.0f;
    return self;
}

// [0x00629EB0] sub_00629EB0 (26 bytes)
extern "C" void* ext_00594000();
extern "C" float __fastcall ext_00594010(void* a);
extern "C" void __fastcall fn_00629EB0(void* self, int edx_unused, float a1) {
    void* p = ext_00594000();
    float v = ext_00594010(p);
    *(float*)((char*)self + 0x30) = v - a1;
}

// [0x00629F10] sub_00629F10 (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_00629F10(void* self, int edx_unused, float a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594010
        fsub dword ptr [esp + 0x8]
        fstp dword ptr [esi + 0x38]
        pop esi
        ret 0x4
    }
}

// [0x00621720] sub_00621720 (27 bytes)
extern "C" void ext_00621680();

extern "C" __declspec(naked) void __fastcall fn_00621720(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00621680
        add esp, 0x10
        ret 8
    }
}

// [0x0062C0E0] sub_0062C0E0 (27 bytes)
extern "C" void ext_0062C010();

extern "C" __declspec(naked) void __fastcall fn_0062C0E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_0062C010
        add esp, 0x10
        ret 0x8
    }
}

// [0x00629E80] sub_00629E80 (36 bytes)
extern "C" __declspec(naked) void __fastcall fn_00629E80(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594010
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fst dword ptr [esi + 0x28]
        fsub dword ptr [esi + 0x30]
        fstp dword ptr [esi + 0x2c]
        pop esi
        pop ecx
        ret
    }
}

// [0x00629EE0] sub_00629EE0 (36 bytes)
extern "C" __declspec(naked) void __fastcall fn_00629EE0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594010
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fst dword ptr [esi + 0x30]
        fsub dword ptr [esi + 0x38]
        fstp dword ptr [esi + 0x34]
        pop esi
        pop ecx
        ret
    }
}

extern "C" void ext_00647F00();

// [0x00627450] sub_00627450 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_00627450(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x28]
        mov ecx, dword ptr [eax + 0x158]
        mov ecx, dword ptr [ecx + 0xac]
        call ext_00647F00
        add edi, 0x60
        mov ecx, 0x10
        mov esi, eax
        rep movsd
        pop edi
        pop esi
        ret
    }
}

// [0x00622290] sub_00622290 (41 bytes)
extern "C" int mem_00976FC4;
extern "C" __declspec(naked) void __fastcall fn_00622290(void* self) {
    __asm {
        fldz
        mov eax, ecx
        fst dword ptr [eax + 0x4]
        mov dword ptr [eax], offset mem_00976FC4
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x24]
        fstp dword ptr [eax + 0x28]
        ret
    }
}

// [0x00624EE0] sub_00624EE0 (42 bytes)
extern "C" __declspec(naked) int __stdcall fn_00624EE0(const unsigned int* a, const unsigned int* b) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [edx]
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi]
        cmp ecx, eax
        ja L_ret1
        jb L_ret0
        mov eax, dword ptr [edx + 0x4]
        cmp eax, dword ptr [esi + 0x4]
        jb L_ret1
    L_ret0:
        xor eax, eax
        pop esi
        ret 0x8
    L_ret1:
        mov eax, 0x1
        pop esi
        ret 0x8
    }
}

// [0x00626770] sub_00626770 (54 bytes)
extern "C" int mem_00924FC0;
extern "C" int mem_00A97F70;

extern "C" __declspec(naked) int __cdecl fn_00626770(void* arg) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        xor esi, esi
        nop
    loop_top:
        mov eax, dword ptr mem_00A97F70[esi*4]
        push eax
        push edi
        call ebx
        add esp, 8
        test al, al
        jne found
        add esi, 1
        cmp esi, 9
        jl loop_top
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    found:
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret
    }
}

// [0x0062B1F0] sub_0062B1F0 (54 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_005FF040();
extern "C" int mem_00978F64;

extern "C" __declspec(naked) void __fastcall fn_0062B1F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], offset mem_00978F64
        mov eax, dword ptr [esi + 0x34]
        test eax, eax
        je skip
        push eax
        call ext_006A5C5C
        add esp, 4
skip:
        mov dword ptr [esi + 0x34], 0
        mov dword ptr [esi + 0x38], 0
        mov dword ptr [esi + 0x3c], 0
        mov ecx, esi
        pop esi
        jmp ext_005FF040
    }
}

// [0x0062CCF0] sub_0062CCF0 (54 bytes)
extern "C" __declspec(naked) void __fastcall fn_0062CCF0(void* self) {
    __asm {
        push esi
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        __asm _emit 0xC7 __asm _emit 0x06 __asm _emit 0xA4 __asm _emit 0x91 __asm _emit 0x97 __asm _emit 0x00 // mov dword ptr [esi], 0x9791a4
        __asm _emit 0x8B __asm _emit 0x46 __asm _emit 0x2C // mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x85 __asm _emit 0xC0 // test eax, eax
        __asm _emit 0x74 __asm _emit 0x09 // je +9
        __asm _emit 0x50 // push eax
        call ext_006A5C5C
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x04 // add esp, 0x4
        __asm _emit 0xC7 __asm _emit 0x46 __asm _emit 0x2C __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esi + 0x2c], 0
        __asm _emit 0xC7 __asm _emit 0x46 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esi + 0x30], 0
        __asm _emit 0xC7 __asm _emit 0x46 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esi + 0x34], 0
        __asm _emit 0x8B __asm _emit 0xCE // mov ecx, esi
        pop esi
        jmp ext_005FF040
    }
}

// [0x00625910] sub_00625910 (55 bytes)
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_00625910(void* self) {
    __asm {
        push 0x1c
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je short L_null1
        mov dword ptr [eax], 0x0
L_null1:
        lea ecx, [eax + 0x4]
        test ecx, ecx
        je short L_null2
        mov dword ptr [ecx], 0x0
L_null2:
        lea ecx, [eax + 0x8]
        test ecx, ecx
        je short L_null3
        mov dword ptr [ecx], 0x0
L_null3:
        mov byte ptr [eax + 0x18], 0x1
        mov byte ptr [eax + 0x19], 0x0
        ret
    }
}

// [0x006203B0] sub_006203B0 (56 bytes)
extern "C" __declspec(naked) void __fastcall fn_006203B0(void* self) {
    __asm {
        push -1
        push 0x008A6088
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xC], ecx
        mov dword ptr [eax + 0x10], ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax], 0x976C34
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00624F10] sub_00624F10 (57 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00624F10(void* self, int edx_unused, const unsigned int* key) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        cmp byte ptr [ecx + 0x19], 0x0
        jne done
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, dword ptr [edi]
    loop_top:
        mov edx, dword ptr [ecx + 0xc]
        cmp esi, edx
        ja go_right
        jb go_left
        mov edx, dword ptr [ecx + 0x10]
        cmp edx, dword ptr [edi + 0x4]
        jae go_left
    go_right:
        mov ecx, dword ptr [ecx + 0x8]
        jmp check_nil
    go_left:
        mov eax, ecx
        mov ecx, dword ptr [ecx]
    check_nil:
        cmp byte ptr [ecx + 0x19], 0x0
        je loop_top
        pop edi
        pop esi
    done:
        ret 0x4
    }
}

// [0x0062A590] sub_0062A590 (57 bytes)
extern "C" int mem_0092F678;

extern "C" __declspec(naked) float __fastcall fn_0062A590(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x34]
        test eax, eax
        push esi
        jne L_nonzero
        xor esi, esi
        jmp L_have_count
    L_nonzero:
        mov esi, dword ptr [ecx + 0x38]
        sub esi, eax
        sar esi, 0x2
    L_have_count:
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x44]
        call edx
        test esi, esi
        mov dword ptr [esp + 0x4], esi
        fild dword ptr [esp + 0x4]
        jge L_nonneg
        fadd dword ptr [mem_0092F678]
    L_nonneg:
        fdivp st(1), st
        pop esi
        fstp dword ptr [esp]
        fld dword ptr [esp]
        pop ecx
        ret
    }
}

// [0x00621B30] sub_00621B30 (59 bytes)
extern "C" __declspec(naked) void __fastcall fn_00621B30(void* self) {
    __asm {
        push -1
        push 0x008AA388
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xC], ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x1C], ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00622C00] sub_00622C00 (62 bytes)
extern "C" __declspec(naked) void __cdecl fn_00622C00(void) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp edx, esi
        je fill_done_00622C00
        mov ecx, dword ptr [esp + 0x10]
        lea eax, [edx + 0xc]
        push edi
fill_loop_00622C00:
        mov edi, dword ptr [ecx]
        mov dword ptr [edx], edi
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax - 0x8]
        add edx, 0x14
        fld dword ptr [ecx + 0x8]
        add eax, 0x14
        cmp edx, esi
        fstp dword ptr [eax - 0x18]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax - 0x14]
        fld dword ptr [ecx + 0x10]
        fstp dword ptr [eax - 0x10]
        jne fill_loop_00622C00
        pop edi
fill_done_00622C00:
        pop esi
        ret
    }
}

// [0x0062B8B0] sub_0062B8B0 (64 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_0062B8B0(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je copy_empty_0062B8B0
        push edi
        mov edi, dword ptr [esp + 0x18]
copy_loop_0062B8B0:
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x1c]
        push eax
        lea ecx, [edi + 0x1c]
        call dword ptr [mem_00924FDC]
        add esi, 0x38
        add edi, 0x38
        cmp esi, ebx
        jne copy_loop_0062B8B0
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
copy_empty_0062B8B0:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x0062CD30] sub_0062CD30 (65 bytes)
extern "C" __declspec(naked) void __fastcall fn_0062CD30(void* self) {
    __asm {
        push -1
        push 0x008ADAD0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xC], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax], 0x009791A4
        mov dword ptr [eax + 0x2C], ecx
        mov dword ptr [eax + 0x30], ecx
        mov dword ptr [eax + 0x34], ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00629D00] sub_00629D00 (33 bytes)
extern "C" void ext_005FF240();
extern "C" int mem_0097852C;

extern "C" __declspec(naked) void __fastcall fn_00629D00(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        fldz
        fst dword ptr [esi + 0x34]
        mov dword ptr [esi], offset mem_0097852C
        fstp dword ptr [esi + 0x38]
        mov eax, esi
        pop esi
        ret 0x10
    }
}

// [0x0062A0C0] sub_0062A0C0 (33 bytes)
extern "C" void ext_005FF240();

extern "C" __declspec(naked) void* __fastcall fn_0062A0C0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        fldz
        fst dword ptr [esi + 0x38]
        mov dword ptr [esi], 0x97880c
        fstp dword ptr [esi + 0x34]
        mov eax, esi
        pop esi
        ret 0x10
    }
}

// [0x00624E50] sub_00624E50 (36 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00624E50(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi], 0x9773bc
        mov dword ptr [esi + 0x34], ecx
        mov byte ptr [esi + 0x30], 0
        mov eax, esi
        pop esi
        ret 0x10
    }
}

// [0x006271A0] sub_006271A0 (36 bytes)
extern "C" void ext_005FF240();

extern "C" __declspec(naked) void __fastcall fn_006271A0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        fldz
        mov dword ptr [esi], 0x9777ec
        fst dword ptr [esi + 0x38]
        fst dword ptr [esi + 0x34]
        mov eax, esi
        fstp dword ptr [esi + 0x30]
        pop esi
        ret 0x10
    }
}

// [0x00627240] sub_00627240 (36 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00627240(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        fldz
        mov dword ptr [esi], 00977884h
        fst dword ptr [esi + 38h]
        fst dword ptr [esi + 34h]
        mov eax, esi
        fstp dword ptr [esi + 30h]
        pop esi
        ret 10h
    }
}

// [0x00629370] sub_00629370 (36 bytes)
extern "C" void ext_005FF240();

extern "C" __declspec(naked) void* __fastcall fn_00629370(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        fldz
        mov dword ptr [esi], 0x97804c
        fst dword ptr [esi + 0x38]
        fst dword ptr [esi + 0x34]
        mov eax, esi
        fstp dword ptr [esi + 0x30]
        pop esi
        ret 0x10
    }
}

// [0x006293A0] sub_006293A0 (43 bytes)
extern "C" void ext_005FF240();

extern "C" __declspec(naked) void __fastcall fn_006293A0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        fldz
        mov dword ptr [esi], 0x9780bc
        fst dword ptr [esi + 0x3c]
        fst dword ptr [esi + 0x38]
        mov eax, esi
        fstp dword ptr [esi + 0x34]
        mov dword ptr [esi + 0x30], 0x4
        pop esi
        ret 0x10
    }
}

// [0x006296A0] sub_006296A0 (43 bytes)
extern "C" void ext_005FF240();
extern "C" int mem_009782DC;

extern "C" __declspec(naked) void __fastcall fn_006296A0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        fldz
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi], offset mem_009782DC
        fst dword ptr [esi + 0x38]
        fst dword ptr [esi + 0x34]
        mov eax, esi
        fstp dword ptr [esi + 0x30]
        mov dword ptr [esi + 0x3c], ecx
        pop esi
        ret 0x10
    }
}

// [0x00624EA0] sub_00624EA0 (59 bytes)
extern "C" void ext_00624E50();

extern "C" __declspec(naked) void* __fastcall fn_00624EA0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov edx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax + 8], edi
        mov dword ptr [eax + 0xc], ecx
        mov ecx, esi
        call ext_00624E50
        mov dword ptr [esi + 0x38], edi
        pop edi
        mov dword ptr [esi], 0x97742c
        mov eax, esi
        pop esi
        ret 0x10
    }
}

// [0x0062E290] sub_0062E290 (59 bytes)
extern "C" void ext_0062CD30();
extern "C" __declspec(naked) void __fastcall fn_0062E290(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0062CD30
        fldz
        mov dword ptr [esi], 0x009795A4
        fst dword ptr [esi + 0x50]
        fst dword ptr [esi + 0x4C]
        mov eax, esi
        fst dword ptr [esi + 0x48]
        fst dword ptr [esi + 0x80]
        fst dword ptr [esi + 0x7C]
        fst dword ptr [esi + 0x78]
        fst dword ptr [esi + 0x8C]
        fst dword ptr [esi + 0x88]
        fstp dword ptr [esi + 0x84]
        pop esi
        ret
    }
}

// [0x006210E0] sub_006210E0 (66 bytes)
// Fill [first, last) with copies of *value (0x48-byte elements: two std::string at +0x0 and +0x1c,
// doubles at +0x38 and +0x40). Each string is assigned via the MSVCP80 import slot (operator=).
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __cdecl fn_006210E0(void* first, void* last, const void* value) {
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
        lea ebx, [edi + 0x1c]
loop_top:
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FDC]
        push ebx
        lea ecx, [esi + 0x1c]
        call dword ptr [mem_00924FDC]
        fld qword ptr [edi + 0x38]
        fstp qword ptr [esi + 0x38]
        add esi, 0x48
        cmp esi, ebp
        fld qword ptr [edi + 0x40]
        fstp qword ptr [esi - 0x8]
        jne loop_top
        pop edi
        pop ebx
done:
        pop esi
        pop ebp
        ret
    }
}

// [0x00622D30] sub_00622D30 (68 bytes)
extern "C" __declspec(naked) void __cdecl fn_00622D30(void* dst, unsigned int count, const void* src) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        test esi, esi
        jbe L_done_00622D30
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x10]
        lea eax, [ecx + 0xc]
        push edi
    L_loop_00622D30:
        test ecx, ecx
        je L_skip_00622D30
        mov edi, dword ptr [edx]
        mov dword ptr [ecx], edi
        fld dword ptr [edx + 0x4]
        fstp dword ptr [eax - 0x8]
        fld dword ptr [edx + 0x8]
        fstp dword ptr [eax - 0x4]
        fld dword ptr [edx + 0xc]
        fstp dword ptr [eax]
        fld dword ptr [edx + 0x10]
        fstp dword ptr [eax + 0x4]
    L_skip_00622D30:
        sub esi, 1
        add ecx, 0x14
        add eax, 0x14
        test esi, esi
        ja L_loop_00622D30
        pop edi
    L_done_00622D30:
        pop esi
        ret
    }
}

// [0x006233B0] sub_006233B0 (54 bytes)
extern "C" void ext_00622D30();
extern "C" __declspec(naked) void* __fastcall fn_006233B0(void* self, int edx_unused) {
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
        call ext_00622D30
        lea ecx, [esi + 4*esi]
        add esp, 0x18
        lea eax, [edi + 4*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00625950] sub_00625950 (69 bytes)
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_00625950(void* self, int edx_unused, int a1, int a2, int a3, const int* a4, unsigned char a5) {
    __asm {
        push 0x1c
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je done
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 8]
        mov dl, byte ptr [esp + 0x14]
        mov dword ptr [eax + 0x14], ecx
        mov byte ptr [eax + 0x18], dl
        mov byte ptr [eax + 0x19], 0
    done:
        ret 0x14
    }
}

// [0x006296D0] sub_006296D0 (72 bytes)
extern "C" void ext_005FF240();
extern "C" int mem_0097834C;

extern "C" __declspec(naked) void __fastcall fn_006296D0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        fldz
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi], offset mem_0097834C
        fst dword ptr [esi + 0x38]
        fst dword ptr [esi + 0x34]
        mov eax, esi
        fst dword ptr [esi + 0x30]
        fst dword ptr [esi + 0x44]
        fst dword ptr [esi + 0x40]
        fst dword ptr [esi + 0x3c]
        fst dword ptr [esi + 0x50]
        fst dword ptr [esi + 0x4c]
        fstp dword ptr [esi + 0x48]
        fld1
        fst dword ptr [esi + 0x30]
        fst dword ptr [esi + 0x40]
        fstp dword ptr [esi + 0x50]
        mov dword ptr [esi + 0x54], ecx
        pop esi
        ret 0x10
    }
}

// [0x00621040] sub_00621040 (76 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00621040(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je copy_empty_00621040
        push edi
        mov edi, dword ptr [esp + 0x18]
    copy_loop_00621040:
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x1c]
        push eax
        lea ecx, [edi + 0x1c]
        call dword ptr [mem_00924FDC]
        fld qword ptr [esi + 0x38]
        fstp qword ptr [edi + 0x38]
        add esi, 0x48
        fld qword ptr [esi - 0x8]
        add edi, 0x48
        cmp esi, ebx
        fstp qword ptr [edi - 0x8]
        jne copy_loop_00621040
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    copy_empty_00621040:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00621090] sub_00621090 (76 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_00621090(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je done_eq
        push edi
        mov edi, dword ptr [esp + 0x18]
    copy_loop:
        sub esi, 0x48
        sub edi, 0x48
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x1c]
        push eax
        lea ecx, [edi + 0x1c]
        call dword ptr [mem_00924FDC]
        fld qword ptr [esi + 0x38]
        cmp esi, ebx
        fstp qword ptr [edi + 0x38]
        fld qword ptr [esi + 0x40]
        fstp qword ptr [edi + 0x40]
        jne copy_loop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    done_eq:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00624540] sub_00624540 (76 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00624540(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x18]
        push edi
        mov edi, dword ptr [esi + 0x4]
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
        mov edx, dword ptr [eax + 0x48]
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

// [0x00624590] sub_00624590 (76 bytes)
extern "C" __declspec(naked) void __fastcall fn_00624590(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x8]
        push edi
        mov edi, dword ptr [esi + 0x4]
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
        mov edx, dword ptr [eax + 0x30]
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

// [0x006245E0] sub_006245E0 (76 bytes)
extern "C" __declspec(naked) void __fastcall fn_006245E0(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x18]
        push edi
        mov edi, dword ptr [esi + 0x4]
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
        mov edx, dword ptr [eax + 0x74]
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

// [0x00624F50] sub_00624F50 (78 bytes)
extern "C" void __fastcall fn_00624F50(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0x19) == 0) {
        *(char**)(q + 0x4) = n;
    }
    *(char**)(p + 0x4) = *(char**)(n + 0x4);
    char* c = *(char**)(s + 0x4);
    if (n == *(char**)(c + 0x4)) {
        *(char**)(c + 0x4) = p;
        *(char**)p = n;
        *(char**)(n + 0x4) = p;
        return;
    }
    char* c2 = *(char**)(n + 0x4);
    if (n == *(char**)c2) {
        *(char**)c2 = p;
    } else {
        *(char**)(c2 + 0x8) = p;
    }
    *(char**)p = n;
    *(char**)(n + 0x4) = p;
}

// [0x00622700] sub_00622700 (80 bytes)
extern "C" __declspec(naked) void __cdecl fn_00622700(void* first, void* last, void* dest_end) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, esi
        je done_00622700
        lea edx, [eax + 0xc]
        lea ecx, [esi + 0xc]
        push ebx
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
copy_00622700:
        mov ebx, dword ptr [esi - 0x14]
        mov dword ptr [eax - 0x14], ebx
        fld dword ptr [ecx - 0x1c]
        sub esi, 0x14
        fstp dword ptr [edx - 0x1c]
        fld dword ptr [ecx - 0x18]
        sub ecx, 0x14
        sub eax, 0x14
        fstp dword ptr [edx - 0x18]
        fld dword ptr [ecx]
        sub edx, 0x14
        cmp esi, edi
        fstp dword ptr [edx]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [edx + 0x4]
        jne copy_00622700
        pop ebx
done_00622700:
        pop edi
        pop esi
        ret
    }
}

// [0x00622D80] sub_00622D80 (82 bytes)
extern "C" __declspec(naked) void __cdecl fn_00622D80(void* first, void* last, void* dst) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je L_622DCF
        lea ecx, [eax + 0xc]
        lea edx, [esi + 0xc]
        push ebx
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_622DA0:
        test eax, eax
        je L_622DBE
        mov ebx, dword ptr [esi]
        mov dword ptr [eax], ebx
        fld dword ptr [edx - 0x8]
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [edx - 0x4]
        fstp dword ptr [ecx - 0x4]
        fld dword ptr [edx]
        fstp dword ptr [ecx]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [ecx + 0x4]
L_622DBE:
        add esi, 0x14
        add eax, 0x14
        add ecx, 0x14
        add edx, 0x14
        cmp esi, edi
        jne L_622DA0
        pop ebx
L_622DCF:
        pop edi
        pop esi
        ret
    }
}

// [0x00623D80] sub_00623D80 (41 bytes)
extern "C" void ext_00622D80();

extern "C" __declspec(naked) void __fastcall fn_00623D80(void* self) {
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
        call ext_00622D80
        add esp, 0x1c
        ret 0xc
    }
}

// [0x006244E0] sub_006244E0 (82 bytes)
extern "C" void __fastcall fn_006244E0(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0x2d] == 0) {
        *(char**)(m + 0x4) = x;
    }
    *(char**)(n + 0x4) = *(char**)(x + 0x4);
    char* h = *(char**)(self + 0x4);
    if (x == *(char**)(h + 0x4)) {
        *(char**)(h + 0x4) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    char* q = *(char**)(x + 0x4);
    if (x == *(char**)(q + 0x8)) {
        *(char**)(q + 0x8) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    *(char**)q = n;
    *(char**)(n + 0x8) = x;
    *(char**)(x + 0x4) = n;
}

// [0x00624C90] sub_00624C90 (82 bytes)
extern "C" void __fastcall fn_00624C90(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0x19] == 0) {
        *(char**)(m + 0x4) = x;
    }
    *(char**)(n + 0x4) = *(char**)(x + 0x4);
    char* h = *(char**)(self + 0x4);
    if (x == *(char**)(h + 0x4)) {
        *(char**)(h + 0x4) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    char* q = *(char**)(x + 0x4);
    if (x == *(char**)(q + 0x8)) {
        *(char**)(q + 0x8) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    *(char**)q = n;
    *(char**)(n + 0x8) = x;
    *(char**)(x + 0x4) = n;
}

// [0x00622B40] sub_00622B40 (84 bytes)
// __thiscall with ret 0x14: stores three dwords at +0/+4/+8, copy-constructs a
// std::string at +0xc from arg3 (via the MSVCP80 copy-ctor import), copies four floats
// (arg3+0x1c..0x28 -> +0x28..0x34), stores the byte arg4 at +0x38 and clears +0x39.
// Returns self in eax.
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_00622B40(void* self, int edx_unused, int a0, int a1, int a2, const void* a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push edi
        mov dword ptr [esi + 0x4], ecx
        lea edi, [esi + 0xc]
        push ebx
        mov ecx, edi
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x8], edx
        call dword ptr [mem_00924FE0]
        fld dword ptr [ebx + 0x1c]
        mov al, byte ptr [esp + 0x20]
        fstp dword ptr [edi + 0x1c]
        fld dword ptr [ebx + 0x20]
        fstp dword ptr [edi + 0x20]
        fld dword ptr [ebx + 0x24]
        fstp dword ptr [edi + 0x24]
        fld dword ptr [ebx + 0x28]
        fstp dword ptr [edi + 0x28]
        mov byte ptr [esi + 0x38], al
        pop edi
        mov byte ptr [esi + 0x39], 0
        mov eax, esi
        pop esi
        pop ebx
        ret 0x14
    }
}

// [0x00621190] sub_00621190 (86 bytes)
extern "C" void ext_00621040();

extern "C" __declspec(naked) void* __cdecl fn_00621190(void* a1, void* a2, void* a3) {
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
        call ext_00621040
        sub esi, ebx
        mov eax, 0x38e38e39
        imul esi
        sar edx, 0x4
        add esp, 0x18
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 8*eax]
        lea eax, [edi + 8*eax]
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00629D30] sub_00629D30 (86 bytes)
extern "C" void* ext_00594000();
extern "C" float __fastcall ext_00594010(void* a);

extern "C" __declspec(naked) void __fastcall fn_00629D30(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x28]
        mov ecx, dword ptr [eax + 0x20c]
        mov ecx, dword ptr [ecx + 0x234]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x20]
        push 0
        call eax
        fstp dword ptr [esp + 4]
        call ext_00594000
        mov ecx, eax
        call ext_00594010
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 4]
        fld st(0)
        fsub dword ptr [esi + 0x34]
        fld dword ptr [esp + 8]
        fld st(0)
        fsub dword ptr [esi + 0x38]
        fdivp st(2), st
        fxch st(1)
        fstp dword ptr [esi + 0x30]
        fstp dword ptr [esi + 0x38]
        fstp dword ptr [esi + 0x34]
        pop esi
        add esp, 8
        ret
    }
}

// [0x006255F0] sub_006255F0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4B198;
extern "C" int mem_00B4B194;

extern "C" __declspec(naked) void* __fastcall fn_006255F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8aa8be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4B198], al
        jne L_done
        or dword ptr [mem_00B4B198], eax
        mov ecx, offset mem_00B4B194
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4B194], 0x9772e4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4B194
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006259A0] sub_006259A0 (30 bytes)
extern "C" void ext_006255F0();

extern "C" __declspec(naked) void __fastcall fn_006259A0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_006255F0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x00627790] sub_00627790 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4D7A0;
extern "C" int mem_00B4D79C;

extern "C" __declspec(naked) void* __fastcall fn_00627790(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ab83e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4D7A0], al
        jne L_done
        or dword ptr [mem_00B4D7A0], eax
        mov ecx, offset mem_00B4D79C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4D79C], 0x9779b4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4D79C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006277F0] sub_006277F0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4D7A8;
extern "C" int mem_00B4D7A4;

extern "C" __declspec(naked) void* __fastcall fn_006277F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ab85e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4D7A8], al
        jne L_done
        or dword ptr [mem_00B4D7A8], eax
        mov ecx, offset mem_00B4D7A4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4D7A4], 0x977a8c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4D7A4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00627850] sub_00627850 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4D7B0;
extern "C" int mem_00B4D7AC;

extern "C" __declspec(naked) void* __fastcall fn_00627850(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ab87e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4D7B0], al
        jne L_done
        or dword ptr [mem_00B4D7B0], eax
        mov ecx, offset mem_00B4D7AC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4D7AC], 0x977b64
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4D7AC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006278B0] sub_006278B0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4D7B8;
extern "C" int mem_00B4D7B4;

extern "C" __declspec(naked) void* __fastcall fn_006278B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ab89e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4D7B8], al
        jne L_done
        or dword ptr [mem_00B4D7B8], eax
        mov ecx, offset mem_00B4D7B4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4D7B4], 0x977c3c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4D7B4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00627910] sub_00627910 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4D7C0;
extern "C" int mem_00B4D7BC;

extern "C" __declspec(naked) void* __fastcall fn_00627910(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ab8be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4D7C0], al
        jne L_done
        or dword ptr [mem_00B4D7C0], eax
        mov ecx, offset mem_00B4D7BC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4D7BC], 0x977d14
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4D7BC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0062A110] sub_0062A110 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B515B8;
extern "C" int mem_00B515B4;

extern "C" __declspec(naked) void* __fastcall fn_0062A110(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ad2be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B515B8], al
        jne L_done
        or dword ptr [mem_00B515B8], eax
        mov ecx, offset mem_00B515B4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B515B4], 0x97865c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B515B4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0062A170] sub_0062A170 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B515C0;
extern "C" int mem_00B515BC;

extern "C" __declspec(naked) void* __fastcall fn_0062A170(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ad2de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B515C0], al
        jne L_done
        or dword ptr [mem_00B515C0], eax
        mov ecx, offset mem_00B515BC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B515BC], 0x978734
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B515BC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0062A5D0] sub_0062A5D0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B51C08;
extern "C" int mem_00B51C04;

extern "C" __declspec(naked) void* __fastcall fn_0062A5D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ad5ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B51C08], al
        jne L_done
        or dword ptr [mem_00B51C08], eax
        mov ecx, offset mem_00B51C04
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B51C04], 0x978a54
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B51C04
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0062A630] sub_0062A630 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B51C10;
extern "C" int mem_00B51C0C;

extern "C" __declspec(naked) void* __fastcall fn_0062A630(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ad5ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B51C10], al
        jne L_done
        or dword ptr [mem_00B51C10], eax
        mov ecx, offset mem_00B51C0C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B51C0C], 0x978b2c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B51C0C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0062A690] sub_0062A690 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B51C18;
extern "C" int mem_00B51C14;

extern "C" __declspec(naked) void* __fastcall fn_0062A690(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ad60e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B51C18], al
        jne L_done
        or dword ptr [mem_00B51C18], eax
        mov ecx, offset mem_00B51C14
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B51C14], 0x978c04
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B51C14
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0062A6F0] sub_0062A6F0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B51C20;
extern "C" int mem_00B51C1C;

extern "C" __declspec(naked) void* __fastcall fn_0062A6F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8ad62e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B51C20], al
        jne L_done
        or dword ptr [mem_00B51C20], eax
        mov ecx, offset mem_00B51C1C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B51C1C], 0x978cdc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B51C1C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0062EE00] sub_0062EE00 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B52360;
extern "C" int mem_00B5235C;

extern "C" __declspec(naked) void* __fastcall fn_0062EE00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8adb2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B52360], al
        jne L_done
        or dword ptr [mem_00B52360], eax
        mov ecx, offset mem_00B5235C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5235C], 0x979784
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5235C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0062EE60] sub_0062EE60 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B52368;
extern "C" int mem_00B52364;

extern "C" __declspec(naked) void* __fastcall fn_0062EE60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8adb4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B52368], al
        jne L_done
        or dword ptr [mem_00B52368], eax
        mov ecx, offset mem_00B52364
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B52364], 0x97985c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B52364
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00629AA0] sub_00629AA0 (88 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00629AA0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        fld1
        mov dword ptr [esi], 0x978494
        fst dword ptr [esi + 0x30]
        fldz
        mov eax, esi
        fst dword ptr [esi + 0x34]
        fst dword ptr [esi + 0x38]
        fst dword ptr [esi + 0x3c]
        fst dword ptr [esi + 0x40]
        fst dword ptr [esi + 0x48]
        fst dword ptr [esi + 0x4c]
        fst dword ptr [esi + 0x50]
        fst dword ptr [esi + 0x54]
        fst dword ptr [esi + 0x5c]
        fst dword ptr [esi + 0x60]
        fst dword ptr [esi + 0x64]
        fst dword ptr [esi + 0x68]
        fxch st(1)
        fst dword ptr [esi + 0x44]
        fst dword ptr [esi + 0x58]
        fstp dword ptr [esi + 0x6c]
        fst dword ptr [esi + 0x78]
        fst dword ptr [esi + 0x74]
        fstp dword ptr [esi + 0x70]
        pop esi
        ret 0x10
    }
}

// [0x0062C3F0] sub_0062C3F0 (90 bytes)
extern "C" void ext_005FF240();

extern "C" __declspec(naked) void __fastcall fn_0062C3F0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8ad768
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        fldz
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr [esi], 0x97900c
        fst dword ptr [esi + 0x38]
        fst dword ptr [esi + 0x34]
        xor eax, eax
        fstp dword ptr [esi + 0x30]
        mov dword ptr [esi + 0x3c], ecx
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x44], eax
        mov dword ptr [esi + 0x48], eax
        mov dword ptr [esi + 0x4c], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x0062C4D0] sub_0062C4D0 (54 bytes)
extern "C" void ext_0062C3F0();

extern "C" __declspec(naked) void* __fastcall fn_0062C4D0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0xc], edx
        call ext_0062C3F0
        mov dword ptr [esi], 0x979084
        mov eax, esi
        pop esi
        ret 0x10
    }
}

// [0x0062C510] sub_0062C510 (54 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0062C510(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0xc], edx
        call ext_0062C3F0
        mov dword ptr [esi], 0x9790fc
        mov eax, esi
        pop esi
        ret 0x10
    }
}

// [0x00629850] sub_00629850 (91 bytes)
extern "C" int mem_00928EAC;
extern "C" int mem_009783FC;
extern "C" int mem_009783E4;
extern "C" __declspec(naked) void* __fastcall fn_00629850(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        fld1
        mov dword ptr [esi + 0x30], offset mem_00928EAC
        mov dword ptr [esi], offset mem_009783FC
        mov dword ptr [esi + 0x30], offset mem_009783E4
        fst dword ptr [esi + 0x34]
        fldz
        mov eax, esi
        fst dword ptr [esi + 0x38]
        fst dword ptr [esi + 0x3c]
        fst dword ptr [esi + 0x40]
        fst dword ptr [esi + 0x44]
        fst dword ptr [esi + 0x4c]
        fst dword ptr [esi + 0x50]
        fst dword ptr [esi + 0x54]
        fst dword ptr [esi + 0x58]
        fst dword ptr [esi + 0x60]
        fst dword ptr [esi + 0x64]
        fst dword ptr [esi + 0x68]
        fstp dword ptr [esi + 0x6c]
        fst dword ptr [esi + 0x48]
        fst dword ptr [esi + 0x5c]
        fstp dword ptr [esi + 0x70]
        pop esi
        ret 0x10
    }
}

// [0x00622C40] sub_00622C40 (93 bytes)
extern "C" void ext_00622700();

extern "C" __declspec(naked) int __cdecl fn_00622C40(int a1, int a2, int a3) {
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
        call ext_00622700
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 4*eax]
        add eax, eax
        add eax, eax
        add esp, 0x18
        mov ecx, eax
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00622FE0] sub_00622FE0 (43 bytes)
extern "C" void ext_00622C40();

extern "C" __declspec(naked) void __fastcall fn_00622FE0(void* self) {
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
        call ext_00622C40
        add esp, 0x1c
        ret
    }
}

// [0x0062BA00] sub_0062BA00 (94 bytes)
extern "C" void ext_0062B8B0();

extern "C" __declspec(naked) void* __cdecl fn_0062BA00(void* a1, void* a2, void* a3) {
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
        call ext_0062B8B0
        sub esi, ebx
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        add esp, 0x18
        lea ecx, [eax * 8]
        sub ecx, eax
        lea eax, [edi + ecx * 8]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00620F80] sub_00620F80 (95 bytes)
// __thiscall ret 0x4: copy-constructs the 0x48-byte element (std::string at +0x0 and +0x1c from arg,
// doubles at +0x38/+0x40) inside an SEH frame (state -1 -> 0 between the two string copies).
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_00620F80(void* self, int edx_unused, const void* src) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_00924FE0]
        lea eax, [edi + 0x1c]
        push eax
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x18], 0
        call dword ptr [mem_00924FE0]
        fld qword ptr [edi + 0x38]
        mov ecx, dword ptr [esp + 0xc]
        fstp qword ptr [esi + 0x38]
        fld qword ptr [edi + 0x40]
        pop edi
        fstp qword ptr [esi + 0x40]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x00621130] sub_00621130 (95 bytes)
extern "C" void ext_00621090();

extern "C" __declspec(naked) int __cdecl fn_00621130(int a1, int a2, int a3) {
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
        call ext_00621090
        sub esi, ebx
        mov eax, 0x38e38e39
        imul esi
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 8*eax]
        add eax, eax
        add eax, eax
        add eax, eax
        add esp, 0x18
        mov ecx, eax
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x006215A0] sub_006215A0 (43 bytes)
extern "C" void ext_00621130();

extern "C" __declspec(naked) void __fastcall fn_006215A0(void* self) {
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
        call ext_00621130
        add esp, 0x1c
        ret
    }
}

// [0x00621680] sub_00621680 (96 bytes)
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_00621680(void* first, void* last) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b2fe9
        push eax
        mov dword ptr fs:[0], esp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        cmp esi, edi
        je done
    loop_top:
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        add esi, 0x48
        cmp esi, edi
        mov dword ptr [esp + 0x18], esi
        jne loop_top
    done:
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x00621740] sub_00621740 (89 bytes)
extern "C" void ext_00621190();
extern "C" __declspec(naked) void __fastcall fn_00621740(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        test ebp, ebp
        push esi
        mov esi, ecx
        je L_call_invalid
        cmp ebp, dword ptr [esp + 0x1c]
        je L_cont
    L_call_invalid:
        call dword ptr [mem_00925134]
    L_cont:
        mov ebx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x20]
        cmp ebx, eax
        je L_ret
        mov ecx, dword ptr [esi + 0x8]
        push edi
        push ebx
        push ecx
        push eax
        call ext_00621190
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edi, eax
        mov eax, dword ptr [esi + 0x8]
        push esi
        push eax
        push edi
        call ext_00621680
        add esp, 0x1c
        mov dword ptr [esi + 0x8], edi
        pop edi
    L_ret:
        mov eax, dword ptr [esp + 0x10]
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        ret 0x14
    }
}

// [0x0062B6F0] sub_0062B6F0 (98 bytes)
extern "C" __declspec(naked) void __fastcall fn_0062B6F0(void* self) {
    __asm {
        push -1
        push 0x8ad6a8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        cmp dword ptr [esi + 0xc], 0
        lea eax, [esi + 0x8]
        mov dword ptr [esp + 0x10], 0
        je L_0062B729
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
L_0062B729:
        cmp dword ptr [esi + 0x4], 0
        mov dword ptr [esp + 0x10], 0xffffffff
        je L_0062B742
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x78]
        push esi
        call eax
L_0062B742:
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00624DC0] sub_00624DC0 (108 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00624DC0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_skip_call_00624DC0
        call edi
    L_skip_call_00624DC0:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 19h], 0
        je L_not_nil_00624DC0
        call edi
        pop edi
        pop esi
        ret
    L_not_nil_00624DC0:
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 19h], 0
        jne L_right_nil_00624DC0
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 19h], 0
        jne L_store_left_00624DC0
    L_leftmost_loop_00624DC0:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 19h], 0
        je L_leftmost_loop_00624DC0
    L_store_left_00624DC0:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
    L_right_nil_00624DC0:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 19h], 0
        jne L_done_00624DC0
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_walk_00624DC0:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jne L_done_00624DC0
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 19h], 0
        je L_walk_00624DC0
    L_done_00624DC0:
        pop edi
        mov dword ptr [esi + 4], eax
        pop esi
        ret
    }
}

// [0x00624640] sub_00624640 (110 bytes)
extern "C" void ext_005A07A0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_00624640(void* self, int edx_unused, unsigned int key) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x8], 0x0
        jne L_00624655
        xor eax, eax
        pop esi
        add esp, 0x8
        ret 0x4
    L_00624655:
        mov eax, dword ptr [esp + 0x10]
        push ebx
        push ebp
        push edi
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_005A07A0
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 0x4]
        mov ebp, dword ptr [mem_00925134]
        je L_0062467E
        cmp edi, esi
        je L_00624680
    L_0062467E:
        call ebp
    L_00624680:
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ebx
        je L_006246A2
        test edi, edi
        jne L_0062468E
        call ebp
    L_0062468E:
        cmp esi, dword ptr [edi + 0x4]
        jne L_00624695
        call ebp
    L_00624695:
        mov eax, dword ptr [esi + 0x28]
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 0x8
        ret 0x4
    L_006246A2:
        pop edi
        pop ebp
        pop ebx
        xor eax, eax
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x006267B0] sub_006267B0 (111 bytes)
extern "C" void ext_0060B910();
extern "C" void ext_0063D8F0();

extern "C" __declspec(naked) void __fastcall fn_006267B0(void* self) {
    __asm {
        push -1
        push 0x8a87a8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_0060B910
        fldz
        lea ecx, [esi + 0x44]
        mov dword ptr [esi], 0x977734
        fst dword ptr [ecx + 0x8]
        fst dword ptr [ecx + 0x4]
        mov dword ptr [esp + 0x10], 0
        fst dword ptr [ecx]
        fst dword ptr [ecx + 0x14]
        fst dword ptr [ecx + 0x10]
        fst dword ptr [ecx + 0xc]
        fst dword ptr [ecx + 0x20]
        fst dword ptr [ecx + 0x1c]
        fst dword ptr [ecx + 0x18]
        fst dword ptr [ecx + 0x2c]
        fst dword ptr [ecx + 0x28]
        fstp dword ptr [ecx + 0x24]
        call ext_0063D8F0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00621B70] sub_00621B70 (117 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00621B70(void* self) {
    __asm {
        push -1
        push 0x8aa388
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], edi
        mov eax, dword ptr [edi + 0x14]
        lea esi, [edi + 0x10]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x18], ebx
        je skip_block
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_00621680
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    skip_block:
        mov ecx, edi
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_004026E0
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006246B0] sub_006246B0 (121 bytes)
extern "C" void ext_00536230();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_006246B0(void* self) {
    __asm {
        push -1
        push 0x8882e8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov edi, dword ptr [esi + 0x8]
        xor ebp, ebp
        cmp dword ptr [esi + 0x4], edi
        mov dword ptr [esp + 0x18], ebp
        jbe L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_00536230
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebp
        pop ebx
        je L_nofree
        push eax
        call ext_006A5C5C
        add esp, 4
    L_nofree:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x4], ebp
        mov dword ptr [esi + 0x8], ebp
        mov dword ptr [esi + 0xc], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00621AC0] sub_00621AC0 (98 bytes)
extern "C" void ext_00406510();
extern "C" void ext_00621740();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00621AC0(void* self) {
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
        jbe m621ac0_ok1
        call ebp
    m621ac0_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m621ac0_ok2
        call ebp
    m621ac0_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00406510
        mov edi, dword ptr [esi + 0x18]
        add esi, 0x10
        cmp dword ptr [esi + 0x4], edi
        jbe m621ac0_ok3
        call ebp
    m621ac0_ok3:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m621ac0_ok4
        call ebp
    m621ac0_ok4:
        push edi
        push esi
        push ebx
        push esi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        call ext_00621740
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

extern "C" int mem_00925134;
extern "C" void __fastcall ext_00673C20(void* self);
extern "C" void* __fastcall ext_00648480(void* self, void* edx_unused, void* a1);
extern "C" void __fastcall ext_0067DAD0(void* self);

// [0x006297B0] sub_006297B0 (125 bytes)
extern "C" __declspec(naked) void __fastcall fn_006297B0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x28]
        mov ecx, dword ptr [eax + 0x160]
        mov ecx, dword ptr [ecx]
        add eax, 0x15c
        push edi
        xor edi, edi
        cmp dword ptr [esi + 0x54], edi
        mov ebx, eax
        mov ebp, ecx
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x14], ebp
        jle L_after
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_loop:
        lea ecx, [esp + 0x10]
        call ext_00673C20
        add edi, 0x1
        cmp edi, dword ptr [esi + 0x54]
        jl L_loop
        mov ebp, dword ptr [esp + 0x14]
        mov ebx, dword ptr [esp + 0x10]
    L_after:
        test ebx, ebx
        mov edi, dword ptr [mem_00925134]
        jne L_nz
        call edi
    L_nz:
        cmp ebp, dword ptr [ebx + 0x4]
        jne L_ne
        call edi
    L_ne:
        mov edx, dword ptr [ebp + 0x28]
        mov ecx, dword ptr [edx + 0x16c]
        add esi, 0x30
        push esi
        call ext_00648480
        mov ecx, eax
        call ext_0067DAD0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0062C010] sub_0062C010 (129 bytes)
extern "C" __declspec(naked) void __cdecl fn_0062C010(void* first, void* last) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8ad728
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        cmp esi, edi
        je done
        jmp loop_head
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        __asm _emit 0x8D __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    loop_head:
        cmp dword ptr [esi + 0xc], 0x0
        lea eax, [esi + 0x8]
        mov dword ptr [esp + 0x10], 0x0
        je skip_first
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
    skip_first:
        cmp dword ptr [esi + 0x4], 0x0
        mov dword ptr [esp + 0x10], -0x1
        je skip_second
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x78]
        push esi
        call eax
    skip_second:
        add esi, 0x10
        cmp esi, edi
        mov dword ptr [esp + 0x18], esi
        jne loop_head
    done:
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x0062C450] sub_0062C450 (117 bytes)
extern "C" void ext_005FF040();
extern "C" void ext_0062C010();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0062C450(void* self) {
    __asm {
        push -1
        push 0x8ad768
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], edi
        mov eax, dword ptr [edi + 0x44]
        lea esi, [edi + 0x40]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x18], ebx
        je skip_block
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_0062C010
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    skip_block:
        mov ecx, edi
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_005FF040
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00624D30] sub_00624D30 (132 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00624D30(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne SKIP_INV1
        call edi
    SKIP_INV1:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x19], 0x0
        je L_LEFT
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], eax
        cmp byte ptr [eax + 0x19], 0x0
        je L_DONE
    L_INV1:
        call edi
        pop edi
        pop esi
        ret
    L_LEFT:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x19], 0x0
        jne L_CLIMB
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x19], 0x0
        jne L_STORE_C
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    L_RLOOP:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x19], 0x0
        je L_RLOOP
    L_STORE_C:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_CLIMB:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x19], 0x0
        jne L_FIX
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_CLOOP:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax]
        jne L_FIX
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x19], 0x0
        je L_CLOOP
    L_FIX:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x19], 0x0
        jne L_INV1
        mov dword ptr [esi + 0x4], eax
    L_DONE:
        pop edi
        pop esi
        ret
    }
}

// [0x0062E2D0] sub_0062E2D0 (134 bytes)
extern "C" void ext_006A7250();

extern "C" float __declspec(naked) __fastcall fn_0062E2D0(void* self, int edx_unused, const float* v) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x6c]
        call edx
        fld qword ptr [esi + 0x60]
        mov eax, dword ptr [esp + 0x10]
        fld qword ptr [esi + 0x58]
        fld qword ptr [esi + 0x68]
        fld dword ptr [eax + 0x4]
        fmul qword ptr [esi + 0x60]
        fld dword ptr [eax]
        fmul qword ptr [esi + 0x58]
        faddp st(1), st
        fld dword ptr [eax + 0x8]
        fmul qword ptr [esi + 0x68]
        fadd qword ptr [esi + 0x70]
        faddp st(1), st
        fstp qword ptr [esp + 0x4]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        call ext_006A7250
        fdivr qword ptr [esp + 0x4]
        fstp qword ptr [esi + 0x40]
        fld qword ptr [esi + 0x60]
        fstp dword ptr [esp + 0x10]
        fld qword ptr [esi + 0x68]
        fstp dword ptr [esp + 0x4]
        fld qword ptr [esi + 0x58]
        fstp dword ptr [esi + 0x48]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esi + 0x4c]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [esi + 0x50]
        fld qword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x00629530] sub_00629530 (135 bytes)
extern "C" void __fastcall ext_00673C20(void* self);
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00629530(void* self) {
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov esi, dword ptr [ebp + 0x28]
        add esi, 0x15c
        mov byte ptr [ebp + 0x30], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0xc], eax
        mov eax, dword ptr [eax]
        push edi
        mov edi, esi
        mov ebx, eax
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], ebx
        jmp L_loop_00629530
        _emit 0x8D
        _emit 0x49
        _emit 0x00
    L_loop_00629530:
        test edi, edi
        je L_inv1_00629530
        cmp edi, esi
        je L_ok1_00629530
    L_inv1_00629530:
        call dword ptr [mem_00925134]
    L_ok1_00629530:
        cmp ebx, dword ptr [esp + 0x10]
        je L_done_00629530
        test edi, edi
        jne L_ok2_00629530
        call dword ptr [mem_00925134]
    L_ok2_00629530:
        cmp ebx, dword ptr [edi + 0x4]
        jne L_ok3_00629530
        call dword ptr [mem_00925134]
    L_ok3_00629530:
        mov eax, dword ptr [ebx + 0x28]
        mov ecx, dword ptr [eax + 0x16c]
        cmp byte ptr [ecx + 0x46], 0x0
        jne L_found_00629530
        lea ecx, [esp + 0x14]
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x14]
        jmp L_loop_00629530
    L_found_00629530:
        mov byte ptr [ebp + 0x30], 0x1
    L_done_00629530:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x00629720] sub_00629720 (136 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_00629720(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x28]
        mov ecx, dword ptr [eax + 0x160]
        mov ecx, dword ptr [ecx]
        add eax, 0x15c
        push edi
        xor edi, edi
        cmp dword ptr [esi + 0x3c], edi
        mov ebp, eax
        mov ebx, ecx
        mov dword ptr [esp + 0x10], ebp
        mov dword ptr [esp + 0x14], ebx
        jle L_skip_loop_629720
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_loop_629720:
        lea ecx, [esp + 0x10]
        call ext_00673C20
        add edi, 1
        cmp edi, dword ptr [esi + 0x3c]
        jl L_loop_629720
        mov ebx, dword ptr [esp + 0x14]
        mov ebp, dword ptr [esp + 0x10]
    L_skip_loop_629720:
        test ebp, ebp
        mov edi, dword ptr [mem_00925134]
        jne L_skip_call1_629720
        call edi
    L_skip_call1_629720:
        cmp ebx, dword ptr [ebp + 4]
        jne L_skip_call2_629720
        call edi
    L_skip_call2_629720:
        mov edx, dword ptr [ebx + 0x28]
        mov ecx, dword ptr [edx + 0x16c]
        add esi, 0x30
        call ext_00648480
        fld dword ptr [eax + 0x30]
        fstp dword ptr [esi]
        pop edi
        fld dword ptr [eax + 0x34]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [eax + 0x38]
        mov eax, esi
        fstp dword ptr [esi + 0x8]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x006273B0] sub_006273B0 (150 bytes)
extern "C" void ext_005FF240();
extern "C" int mem_0097791C;

extern "C" __declspec(naked) void __fastcall fn_006273B0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005FF240
        fldz
        mov dword ptr [esi], offset mem_0097791C
        fst dword ptr [esi + 0x38]
        fst dword ptr [esi + 0x34]
        mov eax, esi
        fst dword ptr [esi + 0x30]
        fst dword ptr [esi + 0x44]
        fst dword ptr [esi + 0x40]
        fst dword ptr [esi + 0x3c]
        fst dword ptr [esi + 0x50]
        fst dword ptr [esi + 0x4c]
        fst dword ptr [esi + 0x48]
        fld1
        fst dword ptr [esi + 0x30]
        fst dword ptr [esi + 0x40]
        fst dword ptr [esi + 0x50]
        fxch st(1)
        fst dword ptr [esi + 0x5c]
        fst dword ptr [esi + 0x58]
        fst dword ptr [esi + 0x54]
        fxch st(1)
        fst dword ptr [esi + 0x60]
        fst dword ptr [esi + 0x74]
        fst dword ptr [esi + 0x88]
        fstp dword ptr [esi + 0x9c]
        fst dword ptr [esi + 0x64]
        fst dword ptr [esi + 0x68]
        fst dword ptr [esi + 0x6c]
        fst dword ptr [esi + 0x70]
        fst dword ptr [esi + 0x78]
        fst dword ptr [esi + 0x7c]
        fst dword ptr [esi + 0x80]
        fst dword ptr [esi + 0x84]
        fst dword ptr [esi + 0x8c]
        fst dword ptr [esi + 0x90]
        fst dword ptr [esi + 0x94]
        fstp dword ptr [esi + 0x98]
        pop esi
        ret 0x10
    }
}

// [0x00626E80] sub_00626E80 (39 bytes)
extern "C" void ext_0060B990();
extern "C" void ext_006035D0();

extern "C" __declspec(naked) void* __fastcall fn_00626E80(void* self, int edx_unused, void* src) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_0060B990
        add edi, 0x44
        push edi
        lea ecx, [esi + 0x44]
        mov dword ptr [esi], 0x977734
        call ext_006035D0
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}

#define _DLL
#include <vector>

struct TargetClass_0062B0A0 {
    char pad_00[0x30];
    std::vector<float> m_vec;
    std::vector<float>::iterator m_it;
    float m_sum;
};

// [0x0062B0A0] sub_0062B0A0 (159 bytes)
extern "C" void __fastcall fn_0062B0A0(TargetClass_0062B0A0* self, int edx_unused, float val) {
    self->m_sum -= *self->m_it;
    *self->m_it = val;
    self->m_sum += val;
    if (++self->m_it == self->m_vec.end()) {
        self->m_it = self->m_vec.begin();
    }
}

// [0x0062C100] sub_0062C100 (41 bytes)
extern "C" void ext_005558E0();

extern "C" __declspec(naked) void __fastcall fn_0062C100(void* self) {
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
        call ext_005558E0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0062B760] sub_0062B760 (160 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0062B760(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8ad6a8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        cmp dword ptr [edi + 0x4], 0
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        je L_0062B79A
        mov ecx, dword ptr [edi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push edi
        lea edx, [esp + 0x20]
        push edx
        call eax
        jmp L_0062B7A6
L_0062B79A:
        mov dword ptr [esp + 0x1c], 0
        lea eax, [esp + 0x1c]
L_0062B7A6:
        mov ecx, dword ptr [eax]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], edx
        mov edi, dword ptr [esp + 0x20]
        cmp dword ptr [edi + 0x4], 0
        mov dword ptr [esp + 0x14], 0
        je L_0062B7D4
        mov ecx, dword ptr [edi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push edi
        lea edx, [esp + 0x24]
        push edx
        call eax
        jmp L_0062B7E0
L_0062B7D4:
        mov dword ptr [esp + 0x1c], 0
        lea eax, [esp + 0x1c]
L_0062B7E0:
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 0x8], ecx
        mov edx, dword ptr [edi + 0x4]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xc], edx
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x0062B800] sub_0062B800 (161 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0062B800(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8ad6c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, dword ptr [esp + 0x1c]
        cmp dword ptr [esi + 4], 0
        push edi
        mov edi, ecx
        mov dword ptr [esp + 8], edi
        je L_0062B83C
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push esi
        lea edx, [esp + 0x24]
        push edx
        call eax
        jmp L_0062B848
L_0062B83C:
        mov dword ptr [esp + 0x20], 0
        lea eax, [esp + 0x20]
L_0062B848:
        mov ecx, dword ptr [eax]
        mov dword ptr [edi], ecx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [edi + 4], edx
        add esi, 8
        cmp dword ptr [esi + 4], 0
        mov dword ptr [esp + 0x18], 0
        je L_0062B875
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push esi
        lea edx, [esp + 0x10]
        push edx
        call eax
        jmp L_0062B881
L_0062B875:
        mov dword ptr [esp + 0x20], 0
        lea eax, [esp + 0x20]
L_0062B881:
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 8], ecx
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [edi + 0xc], edx
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}

// [0x0062BD30] sub_0062BD30 (141 bytes)
extern "C" void ext_0062B6F0();
extern "C" void ext_0062B800();
extern "C" void ext_006A6DD2();

// try { for (p = first; p != last; ++p, ++dest) { if (dest) ctor(dest, p); } }
// catch (...) { destroy [saved, dest); throw; }
// return dest;
// Naked: MSVC /EHsc drops the try block around extern "C" callees, so the SEH frame is written out by hand.
extern "C" __declspec(naked) void* __cdecl fn_0062BD30(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8ad6f1
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
        je exit_path
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        push edi
        mov ecx, esi
        call ext_0062B800
    skip_ctor:
        add esi, 0x10
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x10
        jmp loop_top
    handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
    dtor_loop:
        mov ecx, esi
        call ext_0062B6F0
        add esi, 0x10
        cmp esi, edi
        jne dtor_loop
    rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_path:
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

// [0x0062BF80] sub_0062BF80 (141 bytes)
extern "C" __declspec(naked) void __cdecl fn_0062BF80(void* first, unsigned int count, const void* val) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x008AD711
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
    loop_0062BF80:
        cmp edi, ebx
        jbe exit_0062BF80
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_0062BF80
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call ext_0062B800
    skip_0062BF80:
        sub edi, 0x1
        add esi, 0x10
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_0062BF80
    handler_0062BF80:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow_0062BF80
    dtor_0062BF80:
        mov ecx, esi
        call ext_0062B6F0
        add esi, 0x10
        cmp esi, edi
        jne dtor_0062BF80
    rethrow_0062BF80:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_0062BF80:
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

// [0x0062C130] sub_0062C130 (41 bytes)
extern "C" void ext_0062BD30();

extern "C" __declspec(naked) void __fastcall fn_0062C130(void* self) {
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
        call ext_0062BD30
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0062C0A0] sub_0062C0A0 (55 bytes)
extern "C" void ext_0062BF80();

extern "C" __declspec(naked) int __fastcall fn_0062C0A0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_0062BF80
        mov eax, esi
        add esp, 0x18
        shl eax, 0x4
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x006211F0] sub_006211F0 (171 bytes)
extern "C" void ext_0046FAD0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __cdecl fn_006211F0(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8aa2ea
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
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea eax, [edi + 0x1c]
        push eax
        lea ecx, [esi + 0x1c]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FE0]
        fld qword ptr [edi + 0x38]
        fstp qword ptr [esi + 0x38]
        fld qword ptr [edi + 0x40]
        fstp qword ptr [esi + 0x40]
    skip_copy:
        add esi, 0x48
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x48
        jmp loop_top
    unwind_funclet:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
    dtor_loop:
        mov ecx, esi
        call ext_0046FAD0
        add esi, 0x48
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

// [0x006217A0] sub_006217A0 (41 bytes)
extern "C" void ext_006211F0();

extern "C" __declspec(naked) void __fastcall fn_006217A0(void* self) {
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
        call ext_006211F0
        add esp, 0x1c
        ret 0xc
    }
}


// [0x006215D0] sub_006215D0 (173 bytes)
extern "C" void ext_0046FAD0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __cdecl fn_006215D0(void* dest, unsigned int count, const void* src) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8aa34a
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
        jbe done
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        test esi, esi
        mov byte ptr [ebp - 0x4], 1
        je skip_copy
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea eax, [edi + 0x1c]
        push eax
        lea ecx, [esi + 0x1c]
        mov byte ptr [ebp - 0x4], 2
        call dword ptr [mem_00924FE0]
        fld qword ptr [edi + 0x38]
        fstp qword ptr [esi + 0x38]
        fld qword ptr [edi + 0x40]
        fstp qword ptr [esi + 0x40]
    skip_copy:
        sub ebx, 1
        add esi, 0x48
        mov byte ptr [ebp - 0x4], 0
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
    unwind_funclet:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow
    dtor_loop:
        mov ecx, esi
        call ext_0046FAD0
        add esi, 0x48
        cmp esi, edi
        jne dtor_loop
    rethrow:
        push 0
        push 0
        call ext_006A6DD2
    done:
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

// [0x00627970] sub_00627970 (174 bytes)
extern "C" void ext_005FF240();
extern "C" void ext_00627510();

extern "C" __declspec(naked) void* __fastcall fn_00627970(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8ad768
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x8], esi
        call ext_005FF240
        fldz
        mov dword ptr [esi], 0x977ec4
        fst dword ptr [esi + 0x38]
        fst dword ptr [esi + 0x34]
        push 0x0
        fst dword ptr [esi + 0x30]
        mov ecx, esi
        fst dword ptr [esi + 0x44]
        mov dword ptr [esp + 0x14], 0x0
        fst dword ptr [esi + 0x40]
        fst dword ptr [esi + 0x3c]
        fst dword ptr [esi + 0x50]
        fst dword ptr [esi + 0x4c]
        fst dword ptr [esi + 0x48]
        fld1
        fst dword ptr [esi + 0x30]
        fst dword ptr [esi + 0x40]
        fst dword ptr [esi + 0x50]
        fxch st(1)
        fst dword ptr [esi + 0x5c]
        fst dword ptr [esi + 0x58]
        fst dword ptr [esi + 0x54]
        fst dword ptr [esi + 0x68]
        fst dword ptr [esi + 0x64]
        fst dword ptr [esi + 0x60]
        fst dword ptr [esi + 0x74]
        fst dword ptr [esi + 0x70]
        fst dword ptr [esi + 0x6c]
        fxch st(1)
        fst dword ptr [esi + 0x54]
        fst dword ptr [esi + 0x64]
        fstp dword ptr [esi + 0x74]
        fst dword ptr [esi + 0x80]
        fst dword ptr [esi + 0x7c]
        fstp dword ptr [esi + 0x78]
        call ext_00627510
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x006216E0] sub_006216E0 (54 bytes)
extern "C" void ext_006215D0();

extern "C" __declspec(naked) void* __fastcall fn_006216E0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_006215D0
        lea ecx, [esi + 8*esi]
        add esp, 0x18
        lea eax, [edi + 8*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0062BA60] sub_0062BA60 (186 bytes)
extern "C" __declspec(naked) void __cdecl fn_0062BA60(void* first, void* last) {
    __asm {
        sub esp, 0Ch
        push esi
        mov esi, dword ptr [esp + 0x14]
        cmp esi, dword ptr [esp + 0x18]
        je done
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x24]
        push edi
        lea ebx, [ebp + 8]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
loop_top:
        cmp esi, ebp
        je second
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        je skip1
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x78]
        push esi
        call edx
skip1:
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [esi + 4], eax
        cmp dword ptr [ebp + 4], 0
        je zero1
        mov ecx, dword ptr [ebp + 4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push ebp
        lea eax, [esp + 0x18]
        push eax
        call edx
        jmp store1
zero1:
        mov dword ptr [esp + 0x20], 0
        lea eax, [esp + 0x20]
store1:
        mov eax, dword ptr [eax]
        mov dword ptr [esi], eax
second:
        lea edi, [esi + 8]
        cmp edi, ebx
        je next
        mov ecx, dword ptr [esi + 0xc]
        test ecx, ecx
        je skip2
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x78]
        push edi
        call eax
skip2:
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [esi + 0xc], ecx
        cmp dword ptr [ebx + 4], 0
        je zero2
        mov ecx, dword ptr [ebx + 4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push ebx
        lea eax, [esp + 0x1c]
        push eax
        call edx
        jmp store2
zero2:
        mov dword ptr [esp + 0x10], 0
        lea eax, [esp + 0x10]
store2:
        mov eax, dword ptr [eax]
        mov dword ptr [edi], eax
next:
        add esi, 0x10
        cmp esi, dword ptr [esp + 0x24]
        jne loop_top
        pop edi
        pop ebp
        pop ebx
done:
        pop esi
        add esp, 0Ch
        ret
    }
}

// [0x0062B930] sub_0062B930 (204 bytes)
extern "C" __declspec(naked) void* __cdecl fn_0062B930(void* first, void* last, void* dest) {
    __asm {
        sub esp, 8
        push esi
        mov esi, dword ptr [esp + 0x14]
        cmp dword ptr [esp + 0x10], esi
        je early_ret_0062B930
        push ebx
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x24]
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
loop_top_0062B930:
        sub esi, 0x10
        sub edi, 0x10
        cmp edi, esi
        je skip_first_0062B930
        mov ecx, dword ptr [edi + 4]
        test ecx, ecx
        je skip_cleanup1_0062B930
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x78]
        push edi
        call edx
skip_cleanup1_0062B930:
        mov eax, dword ptr [esi + 4]
        mov dword ptr [edi + 4], eax
        cmp dword ptr [esi + 4], 0
        je zero_init1_0062B930
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        lea eax, [esp + 0x14]
        push eax
        call edx
        jmp store1_0062B930
zero_init1_0062B930:
        mov dword ptr [esp + 0x24], 0
        lea eax, [esp + 0x24]
store1_0062B930:
        mov eax, dword ptr [eax]
        mov dword ptr [edi], eax
skip_first_0062B930:
        lea ebp, [edi + 8]
        lea ebx, [esi + 8]
        cmp ebp, ebx
        je check_loop_0062B930
        mov ecx, dword ptr [edi + 0xc]
        test ecx, ecx
        je skip_cleanup2_0062B930
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x78]
        push ebp
        call eax
skip_cleanup2_0062B930:
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [edi + 0xc], ecx
        cmp dword ptr [esi + 0xc], 0
        je zero_init2_0062B930
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push ebx
        lea eax, [esp + 0x18]
        push eax
        call edx
        jmp store2_0062B930
zero_init2_0062B930:
        mov dword ptr [esp + 0x20], 0
        lea eax, [esp + 0x20]
store2_0062B930:
        mov eax, dword ptr [eax]
        mov dword ptr [ebp], eax
check_loop_0062B930:
        cmp esi, dword ptr [esp + 0x1c]
        jne loop_top_0062B930
        mov eax, edi
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 8
        ret
early_ret_0062B930:
        mov eax, dword ptr [esp + 0x18]
        pop esi
        add esp, 8
        ret
    }
}

// [0x0062BF30] sub_0062BF30 (73 bytes)
extern "C" void ext_0062B930();

extern "C" __declspec(naked) void __fastcall fn_0062BF30(void* self) {
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
        call ext_0062B930
        sub esi, ebx
        add esp, 0x18
        sar esi, 4
        shl esi, 4
        mov eax, edi
        pop edi
        sub eax, esi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x006200A0] sub_006200A0 (116 bytes)
extern "C" void ext_005B1870();
extern "C" void ext_00401D20();

extern "C" __declspec(naked) void __fastcall fn_006200A0(void* self) {
    __asm {
        push -1
        push 0x8a2518
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x95ac64
        mov dword ptr [esi + 0x4], 0x95ac1c
        mov dword ptr [esi + 0x8], 0x95abdc
        mov dword ptr [esi + 0xc], 0x95ab8c
        mov dword ptr [esi + 0x150], 0x95ab74
        lea ecx, [esi + 0x154]
        mov dword ptr [esp + 0x10], 0x0
        call ext_005B1870
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00401D20
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006202F0] sub_006202F0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B49E40;
extern "C" int mem_00B49E24;

extern "C" __declspec(naked) void __fastcall fn_006202F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a9d7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B49E40], al
        jne skip_init
        or dword ptr [mem_00B49E40], eax
        push 0xa97c7c
        push offset mem_00B49E24
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91ed70
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B49E24
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00622BA0] sub_00622BA0 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" int mem_00B4AAE8;
extern "C" int mem_00B4AACC;

extern "C" __declspec(naked) void __fastcall fn_00622BA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8aa40e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4AAE8], al
        jne skip_init
        or dword ptr [mem_00B4AAE8], eax
        push 0xa43218
        push offset mem_00B4AACC
        mov dword ptr [esp + 0x10], 0x0
        call ext_00662610
        push 0x91ef70
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4AACC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006202B0] sub_006202B0 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A97C60;
extern "C" int mem_00B5CE94;

extern "C" __declspec(naked) void* __fastcall fn_006202B0(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A97C60
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

// [0x0062B8F0] sub_0062B8F0 (60 bytes)
extern "C" int mem_00A950BC;

extern "C" __declspec(naked) void* __fastcall fn_0062B8F0(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A950BC
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

// [0x0062CC90] sub_0062CC90 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B52300;
extern "C" int mem_00B522E4;

extern "C" __declspec(naked) void __fastcall fn_0062CC90(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8adaae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B52300], al
        jne skip_init
        or dword ptr [mem_00B52300], eax
        push 0xa98938
        push offset mem_00B522E4
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x920180
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B522E4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00620E70] sub_00620E70 (49 bytes)
extern "C" void ext_00587650();

extern "C" void* __fastcall fn_00620E70(void* self) {
    ext_00587650();
    unsigned int* p = (unsigned int*)self;
    p[0] = 0x976e9c;
    p[1] = 0x976e54;
    p[2] = 0x976e14;
    p[3] = 0x976dc4;
    p[0xe4 / 4] = 2;
    return self;
}

// [0x006263D0] sub_006263D0 (61 bytes)
extern "C" void* __fastcall fn_006263D0(void* self, int edx_unused, unsigned int a1, unsigned int a2) {
    ext_00587650();
    unsigned int* p = (unsigned int*)self;
    p[0xe4 / 4] = a1;
    p[0] = 0x97759c;
    p[1] = 0x977554;
    p[2] = 0x977514;
    p[3] = 0x9774c4;
    p[0xe8 / 4] = a2;
    return self;
}

// [0x00625DE0] sub_00625DE0 (338 bytes)
extern "C" void ext_00648640();
extern "C" __declspec(naked) void __fastcall fn_00625DE0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x20
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        mov esi, [ebx+0x34]
        add esi, 0x15c
        mov byte ptr [ebx+0x30], 0
        mov eax, [esi+4]
        mov [esp+0x10], eax
        mov eax, [eax]
        push edi
        mov edi, esi
        mov ebp, eax
        mov [esp+0x10], ebx
        mov [esp+0x1c], esi
        mov [esp+0x20], edi
        mov [esp+0x24], ebp
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0
        _emit 0
        _emit 0
        _emit 0
    L1:
        test edi, edi
        je short L2
        cmp edi, esi
        je short L3
    L2:
        call dword ptr [mem_00925134]
    L3:
        cmp ebp, [esp+0x14]
        je L_end
        test edi, edi
        jne short L4
        call dword ptr [mem_00925134]
    L4:
        cmp ebp, [edi+4]
        jne short L5
        call dword ptr [mem_00925134]
    L5:
        mov eax, [ebp+0x28]
        mov ecx, [eax+0x16c]
        cmp byte ptr [ecx+0x46], 0
        je L_adv1
        mov ebx, [ebx+0x28]
        mov eax, [ebx+0x160]
        mov esi, [eax]
        add ebx, 0x15c
        mov edi, ebx
        mov [esp+0x18], eax
        mov [esp+0x28], edi
        mov [esp+0x2c], esi
        _emit 0x90
    L6:
        test edi, edi
        je short L7
        cmp edi, ebx
        je short L8
    L7:
        call dword ptr [mem_00925134]
    L8:
        cmp esi, [esp+0x18]
        je short L_out
        test edi, edi
        jne short L9
        call dword ptr [mem_00925134]
    L9:
        cmp esi, [edi+4]
        jne short L10
        call dword ptr [mem_00925134]
    L10:
        mov edx, [esi+0x28]
        mov eax, [edx+0x16c]
        cmp byte ptr [eax+0x46], 0
        je short L_adv2
        cmp esi, [edi+4]
        jne short L11
        call dword ptr [mem_00925134]
    L11:
        mov edx, [esp+0x20]
        cmp ebp, [edx+4]
        mov ecx, [esi+0x28]
        mov esi, [ecx+0x16c]
        jne short L12
        call dword ptr [mem_00925134]
    L12:
        mov eax, [ebp+0x28]
        mov ecx, [eax+0x16c]
        push esi
        call ext_00648640
        test al, al
        jne short L_set
    L_adv2:
        lea ecx, [esp+0x28]
        call ext_00673C20
        mov esi, [esp+0x2c]
        mov edi, [esp+0x28]
        jmp L6
    L_out:
        mov esi, [esp+0x1c]
        mov ebx, [esp+0x10]
    L_adv1:
        lea ecx, [esp+0x20]
        call ext_00673C20
        mov ebp, [esp+0x24]
        mov edi, [esp+0x20]
        jmp L1
    L_set:
        mov ecx, [esp+0x10]
        mov byte ptr [ecx+0x30], 1
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00625F60] sub_00625F60 (136 bytes)
extern "C" void ext_00625DE0();

extern "C" __declspec(naked) void __fastcall fn_00625F60(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov esi, dword ptr [ebx + 0x38]
        add esi, 0x598
        mov byte ptr [ebx + 0x30], 0
        mov eax, dword ptr [esi + 4]
        mov eax, dword ptr [eax]
        push edi
        mov edi, esi
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], eax
    loc_625F85:
        test edi, edi
        mov ebp, dword ptr [esi + 4]
        je short loc_625F90
        cmp edi, esi
        je short loc_625F96
    loc_625F90:
        call dword ptr [mem_00925134]
    loc_625F96:
        cmp dword ptr [esp + 0x14], ebp
        je short loc_625FE0
        test edi, edi
        jne short loc_625FA6
        call dword ptr [mem_00925134]
    loc_625FA6:
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [edi + 4]
        jne short loc_625FB5
        call dword ptr [mem_00925134]
    loc_625FB5:
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [edx + 0x28]
        cmp dword ptr [ebx + 0x28], eax
        mov dword ptr [ebx + 0x34], eax
        je short loc_625FD1
        mov ecx, ebx
        call ext_00625DE0
        cmp byte ptr [ebx + 0x30], 0
        jne short loc_625FE0
    loc_625FD1:
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x10]
        jmp short loc_625F85
    loc_625FE0:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x006291D0] sub_006291D0 (272 bytes)
extern "C" void ext_00554490();
extern "C" void ext_005FF240();
extern "C" void ext_0067E110();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_006291D0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push    -1
        push    0x8abb88
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x28
        mov     eax, dword ptr [esp + 0x38]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        mov     dword ptr [esp + 0x14], ebx
        call    ext_005FF240
        fldz
        mov     dword ptr [ebx], 0x977fb4
        fst     dword ptr [ebx + 0x38]
        fst     dword ptr [ebx + 0x34]
        lea     ebp, [ebx + 0x54]
        fst     dword ptr [ebx + 0x30]
        lea     edx, [esp + 0x14]
        fst     dword ptr [ebx + 0x44]
        push    edx
        fst     dword ptr [ebx + 0x40]
        mov     dword ptr [esp + 0x44], 0
        fst     dword ptr [ebx + 0x3c]
        fst     dword ptr [ebx + 0x50]
        fst     dword ptr [ebx + 0x4c]
        fst     dword ptr [ebx + 0x48]
        fld1
        fst     dword ptr [ebx + 0x30]
        fst     dword ptr [ebx + 0x40]
        fst     dword ptr [ebx + 0x50]
        fxch    st(1)
        fst     dword ptr [ebp + 8]
        fst     dword ptr [ebp + 4]
        fst     dword ptr [ebp]
        fst     dword ptr [ebp + 0x14]
        fst     dword ptr [ebp + 0x10]
        fst     dword ptr [ebp + 0xc]
        fst     dword ptr [ebp + 0x20]
        fst     dword ptr [ebp + 0x1c]
        fstp    dword ptr [ebp + 0x18]
        fst     dword ptr [ebp]
        fst     dword ptr [ebp + 0x10]
        fstp    dword ptr [ebp + 0x20]
        mov     eax, dword ptr [ebx + 0x28]
        mov     edx, dword ptr [mem_00B40640]
        lea     ecx, [eax + 4]
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x14]
        push    edx
        call    eax
        mov     ecx, eax
        call    ext_0067E110
        mov     esi, eax
        mov     ecx, 9
        mov     edi, ebp
        rep movsd
        mov     eax, dword ptr [ebx + 0x28]
        mov     ecx, dword ptr [eax + 0x20c]
        cmp     dword ptr [ecx + 0x190], 0
        je      done
        mov     edx, ecx
        mov     eax, dword ptr [edx + 0x228]
        mov     edx, dword ptr [eax + 4]
        mov     edx, dword ptr [edx + 0x14]
        lea     ecx, [eax + 4]
        lea     eax, [esp + 0x14]
        push    eax
        mov     eax, dword ptr [mem_00B40640]
        push    eax
        call    edx
        mov     ecx, eax
        call    ext_0067E110
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, ebp
        call    ext_00554490
    done:
        mov     ecx, dword ptr [esp + 0x38]
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x34
        ret     0x10
    }
}

extern "C" void ext_00694840();

// [0x006275A0] sub_006275A0 (104 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006275A0(void* self) {
    __asm {
        sub     esp, 0x24
        fldz
        push    esi
        fst     dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x28]
        fst     dword ptr [esp + 0x8]
        fst     dword ptr [esp + 0x18]
        lea     eax, [esp + 0x4]
        fst     dword ptr [esp + 0x10]
        push    eax
        fst     dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x20]
        fld1
        fst     dword ptr [esp + 0x8]
        fst     dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x28]
        mov     edx, dword ptr [ecx + 0x158]
        mov     ecx, dword ptr [edx + 0xac]
        call    ext_00647F20
        lea     eax, [esi + 0x54]
        push    eax
        lea     ecx, [esp + 0x8]
        call    ext_00554490
        add     esi, 0x78
        push    esi
        lea     ecx, [esp + 0x8]
        call    ext_00694840
        mov     eax, esi
        pop     esi
        add     esp, 0x24
        ret
    }
}

// [0x00627610] sub_00627610 (104 bytes)
extern "C" void ext_00694880();
extern "C" __declspec(naked) void* __fastcall fn_00627610(void* self) {
    __asm {
        sub     esp, 0x24
        fldz
        push    esi
        fst     dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x28]
        fst     dword ptr [esp + 0x8]
        fst     dword ptr [esp + 0x18]
        lea     eax, [esp + 0x4]
        fst     dword ptr [esp + 0x10]
        push    eax
        fst     dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x20]
        fld1
        fst     dword ptr [esp + 0x8]
        fst     dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x28]
        mov     edx, dword ptr [ecx + 0x158]
        mov     ecx, dword ptr [edx + 0xac]
        call    ext_00647F20
        lea     eax, [esi + 0x54]
        push    eax
        lea     ecx, [esp + 0x8]
        call    ext_00554490
        add     esi, 0x78
        push    esi
        lea     ecx, [esp + 0x8]
        call    ext_00694880
        mov     eax, esi
        pop     esi
        add     esp, 0x24
        ret
    }
}

// [0x00625A30] sub_00625A30 (508 bytes)
extern "C" void ext_00624C90();
extern "C" void ext_00624F50();
extern "C" void ext_00625950();
extern "C" void ext_006A6DD2();
extern "C" int mem_0088F4C2;
extern "C" int mem_0092C530;
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00928ECC;
extern "C" int mem_00928ED8;
extern "C" int mem_009CDF20;
extern "C" __declspec(naked) void __fastcall fn_00625A30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0088F4C2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x8], 0x15555554
        jb L_00625aad
        push offset mem_0092C530
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x50], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x54], 0x1
        mov dword ptr [esp + 0x24], offset mem_00928ECC
        call dword ptr [mem_00924FE0]
        push offset mem_009CDF20
        lea ecx, [esp + 0x24]
        push ecx
        mov byte ptr [esp + 0x58], 0x0
        mov dword ptr [esp + 0x28], offset mem_00928ED8
        call ext_006A6DD2
    L_00625aad:
        mov edx, dword ptr [esp + 0x64]
        mov eax, dword ptr [edi + 0x4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x6c]
        push 0x0
        push edx
        push eax
        push esi
        push eax
        call ext_00625950
        mov ebp, eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, 0x1
        add dword ptr [edi + 0x8], ebx
        cmp esi, eax
        jne L_00625ae7
        mov dword ptr [eax + 0x4], ebp
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], ebp
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x8], ebp
        jmp L_00625b09
    L_00625ae7:
        cmp byte ptr [esp + 0x68], 0x0
        je L_00625afb
        mov dword ptr [esi], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        jne L_00625b09
        mov dword ptr [eax], ebp
        jmp L_00625b09
    L_00625afb:
        mov dword ptr [esi + 0x8], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax + 0x8]
        jne L_00625b09
        mov dword ptr [eax + 0x8], ebp
    L_00625b09:
        mov edx, dword ptr [ebp + 0x4]
        cmp byte ptr [edx + 0x18], 0x0
        lea eax, [ebp + 0x4]
        mov esi, ebp
        jne L_00625c05
        jmp L_00625b20
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_00625b20:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        cmp ecx, dword ptr [edx]
        jne L_00625b7a
        mov edx, dword ptr [edx + 0x8]
        cmp byte ptr [edx + 0x18], 0x0
        jne L_00625b4b
        mov byte ptr [ecx + 0x18], bl
        mov byte ptr [edx + 0x18], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x18], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_00625bf5
    L_00625b4b:
        cmp esi, dword ptr [ecx + 0x8]
        jne L_00625b5a
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_00624F50
    L_00625b5a:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x18], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x18], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, edi
        call ext_00624C90
        jmp L_00625bf5
    L_00625b7a:
        mov edx, dword ptr [edx]
        cmp byte ptr [edx + 0x18], 0x0
        jne L_00625b98
        mov byte ptr [ecx + 0x18], bl
        mov byte ptr [edx + 0x18], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x18], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_00625bf5
    L_00625b98:
        cmp esi, dword ptr [ecx]
        jne L_00625ba6
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_00624C90
    L_00625ba6:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x18], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x18], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + 0x19], 0x0
        jne L_00625bcf
        mov dword ptr [edx + 0x4], eax
    L_00625bcf:
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edx + 0x4]
        jne L_00625be2
        mov dword ptr [edx + 0x4], ecx
        jmp L_00625bf0
    L_00625be2:
        mov edx, dword ptr [eax + 0x4]
        cmp eax, dword ptr [edx]
        jne L_00625bed
        mov dword ptr [edx], ecx
        jmp L_00625bf0
    L_00625bed:
        mov dword ptr [edx + 0x8], ecx
    L_00625bf0:
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x4], ecx
    L_00625bf5:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x18], 0x0
        lea eax, [esi + 0x4]
        je L_00625b20
    L_00625c05:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [esp + 0x54]
        mov byte ptr [eax + 0x18], bl
        mov eax, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        mov dword ptr [eax], edi
        pop ebx
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret 0x10
    }
}

extern "C" void ext_00624D30();
extern "C" void ext_00625A30();

// [0x00625C30] sub_00625C30 (218 bytes)
extern "C" __declspec(naked) void __fastcall fn_00625C30(void* self) {
    __asm {
        sub esp, 0xc
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x4]
        mov eax, dword ptr [ecx + 0x4]
        cmp byte ptr [eax + 0x19], 0x0
        mov esi, ecx
        mov cl, 0x1
        mov byte ptr [esp + 0xc], cl
        jne L_00625C75
        mov edx, dword ptr [ebp]
    L_00625C53:
        mov ecx, dword ptr [eax + 0xc]
        cmp ecx, edx
        mov esi, eax
        ja L_00625CB7
        jb L_00625C66
        mov ecx, dword ptr [ebp + 0x4]
        cmp ecx, dword ptr [eax + 0x10]
        jb L_00625CB7
    L_00625C66:
        mov eax, dword ptr [eax + 0x8]
        xor cl, cl
        mov byte ptr [esp + 0xc], cl
    L_00625C6F:
        cmp byte ptr [eax + 0x19], 0x0
        je L_00625C53
    L_00625C75:
        test cl, cl
        mov edx, esi
        mov dword ptr [esp + 0x14], edx
        mov dword ptr [esp + 0x10], edi
        je L_00625CCE
        mov edx, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edx]
        jne L_00625CC1
        push ebp
        push esi
        push 0x1
        lea eax, [esp + 0x1c]
        push eax
    L_00625C93:
        mov ecx, edi
        call ext_00625A30
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        pop edi
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        mov byte ptr [eax + 0x8], 0x1
        pop ebp
        add esp, 0xc
        ret 0x8
    L_00625CB7:
        mov eax, dword ptr [eax]
        mov cl, 0x1
        mov byte ptr [esp + 0xc], cl
        jmp L_00625C6F
    L_00625CC1:
        lea ecx, [esp + 0x10]
        call ext_00624D30
        mov edx, dword ptr [esp + 0x14]
    L_00625CCE:
        mov eax, dword ptr [edx + 0xc]
        mov ecx, dword ptr [ebp]
        cmp ecx, eax
        ja L_00625CE2
        jb L_00625CF0
        mov eax, dword ptr [edx + 0x10]
        cmp eax, dword ptr [ebp + 0x4]
        jae L_00625CF0
    L_00625CE2:
        mov ecx, dword ptr [esp + 0xc]
        push ebp
        push esi
        push ecx
        lea edx, [esp + 0x1c]
        push edx
        jmp L_00625C93
    L_00625CF0:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        mov byte ptr [eax + 0x8], 0x0
        pop ebp
        add esp, 0xc
        ret 0x8
    }
}

// [0x00625FF0] sub_00625FF0 (511 bytes)
extern "C" void ext_00624D30();
extern "C" void ext_00624DC0();
extern "C" void ext_00624EE0();
extern "C" void ext_00625A30();
extern "C" void ext_00625C30();
extern "C" void ext_00666980();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00625FF0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x8], 0x0
        push edi
        jne L_62601e
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esp + 0x18]
        push eax
        push ecx
        push 0x1
        push edi
        mov ecx, esi
        call ext_00625A30
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10

    L_62601e:
        mov edx, dword ptr [esi + 0x4]
        mov edi, dword ptr [edx]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
        test ebp, ebp
        je L_626030
        cmp ebp, esi
        je L_626036
    L_626030:
        call dword ptr [mem_00925134]
    L_626036:
        push ebx
        mov ebx, dword ptr [esp + 0x28]
        cmp ebx, edi
        jne L_62607a
        mov edi, dword ptr [esp + 0x2c]
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [ebx + 0xc]
        cmp ecx, eax
        ja L_62605e
        jb L_6261c8
        mov eax, dword ptr [edi + 0x4]
        cmp eax, dword ptr [ebx + 0x10]
        jae L_6261c8
    L_62605e:
        push edi
        mov edi, dword ptr [esp + 0x24]
        push ebx
        push 0x1
        push edi
        mov ecx, esi
        call ext_00625A30
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10

    L_62607a:
        test ebp, ebp
        mov edi, dword ptr [esi + 0x4]
        je L_626085
        cmp ebp, esi
        je L_62608b
    L_626085:
        call dword ptr [mem_00925134]
    L_62608b:
        cmp ebx, edi
        mov edi, dword ptr [esp + 0x2c]
        jne L_6260c9
        mov ecx, dword ptr [esi + 0x4]
        mov ebx, dword ptr [ecx + 0x8]
        push edi
        lea edx, [ebx + 0xc]
        push edx
        mov ecx, esi
        call ext_00624EE0
        test al, al
        je L_6261c8
        push edi
        mov edi, dword ptr [esp + 0x24]
        push ebx
        push 0x0
        push edi
        mov ecx, esi
        call ext_00625A30
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10

    L_6260c9:
        lea eax, [ebx + 0xc]
        push eax
        push edi
        mov ecx, esi
        call ext_00624EE0
        test al, al
        je L_62613c
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x24], ebp
        mov dword ptr [esp + 0x28], ebx
        call ext_00624D30
        mov eax, dword ptr [esp + 0x28]
        push edi
        add eax, 0xc
        push eax
        mov ecx, esi
        call ext_00624EE0
        test al, al
        je L_62613c
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x19], 0x0
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ecx, esi
        je L_626127
        push eax
        push 0x0
        push edi
        call ext_00625A30
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10

    L_626127:
        push ebx
        push 0x1
        push edi
        call ext_00625A30
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10

    L_62613c:
        push edi
        lea eax, [ebx + 0xc]
        push eax
        mov ecx, esi
        call ext_00624EE0
        test al, al
        je L_6261c8
        mov edx, dword ptr [esi + 0x4]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x24], ebp
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x14], edx
        mov dword ptr [esp + 0x10], esi
        call ext_00624DC0
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x28]
        call ext_00666980
        test al, al
        mov ebp, dword ptr [esp + 0x28]
        jne L_62618e
        lea ecx, [ebp + 0xc]
        push ecx
        push edi
        mov ecx, esi
        call ext_00624EE0
        test al, al
        je L_6261c8
    L_62618e:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0x19], 0x0
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ecx, esi
        je L_6261b3
        push ebx
        push 0x0
        push edi
        call ext_00625A30
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10

    L_6261b3:
        push ebp
        push 0x1
        push edi
        call ext_00625A30
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xc
        ret 0x10

    L_6261c8:
        push edi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_00625C30
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x20]
        pop ebx
        pop ebp
        mov dword ptr [ecx], edx
        mov eax, dword ptr [eax + 0x4]
        pop edi
        mov dword ptr [ecx + 0x4], eax
        mov eax, ecx
        pop esi
        add esp, 0xc
        ret 0x10
    }
}

// [0x00626210] sub_00626210 (128 bytes)
extern "C" void ext_00624F10();
extern "C" void ext_00625FF0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_00626210(void* self, int edx_unused, void* arg1) {
    __asm {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push ebp
        push esi
        push edi
        push ebx
        mov edi, ecx
        call ext_00624F10
        test edi, edi
        mov ebp, dword ptr [mem_00925134]
        mov esi, eax
        jne loc_626231
        call ebp
loc_626231:
        cmp esi, dword ptr [edi + 0x4]
        je loc_626249
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, eax
        ja loc_626249
        jb loc_626276
        mov eax, dword ptr [ebx + 0x4]
        cmp eax, dword ptr [esi + 0x10]
        jae loc_626276
loc_626249:
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ebx + 0x4]
        lea eax, [esp + 0x18]
        push eax
        push esi
        mov dword ptr [esp + 0x20], ecx
        push edi
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x2c], edx
        mov dword ptr [esp + 0x30], 0x0
        call ext_00625FF0
        mov edi, dword ptr [eax]
        mov esi, dword ptr [eax + 0x4]
loc_626276:
        test edi, edi
        jne loc_62627c
        call ebp
loc_62627c:
        cmp esi, dword ptr [edi + 0x4]
        jne loc_626283
        call ebp
loc_626283:
        pop edi
        lea eax, [esi + 0x14]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x4
    }
}

// [0x006236D0] sub_006236D0 (182 bytes)
extern "C" void ext_005DF940();
extern "C" void ext_00414410();
extern "C" void ext_0055C8F0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00B45B7C;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) int __fastcall fn_006236D0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8aa4a1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x78]
        mov esi, ecx
        mov dword ptr [esp + 0x78], edi
        mov ebx, dword ptr [esp + 0x74]
        push ebx
        mov dword ptr [esp + 0x70], 0
        call ext_005DF940
        test eax, eax
        je L_ok_006236D0
        mov eax, mem_00B45B7C
        push eax
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x74]
        push ecx
        lea edx, [esp + 0x24]
        push edx
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0x74], 1
        call ext_00414410
        push 0x9d1278
        lea eax, [esp + 0x40]
        push eax
        call ext_006A6DD2
L_ok_006236D0:
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x80], 0
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], edi
        call ext_0055C8F0
        push 0
        call ext_006A5C5C
        mov ecx, dword ptr [esp + 0x68]
        add esp, 4
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x64
        ret 8
    }
}

// [0x006295E0] sub_006295E0 (190 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_004F02C0();
extern "C" void ext_005FF240();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;

extern "C" __declspec(naked) void __fastcall fn_006295E0(void* self) {
    __asm {
        push -1
        push 0x8ad768
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_005FF240
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, 0xb4f2dc
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi], 0x978244
        mov byte ptr [esi + 0x30], 0
        mov dword ptr [esp + 0x20], edi
        call ext_004F02C0
        cmp dword ptr [eax], 0
        jne short loc_629653
        mov ecx, dword ptr [mem_00924E90]
        mov dword ptr [eax], esi
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x24]
        push ecx
        mov ecx, edi
        call eax
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        push 0x978210
        push ecx
        jmp short loc_62966f
loc_629653:
        mov edx, dword ptr [mem_00924E90]
        mov eax, dword ptr [edi]
        push edx
        mov edx, dword ptr [eax + 0x24]
        mov ecx, edi
        call edx
        push eax
        mov eax, dword ptr [mem_00924FA0]
        push 0x9781e8
        push eax
loc_62966f:
        call ext_00435D00
        add esp, 8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x00625650] sub_00625650 (696 bytes)

extern "C" void ext_00624C90();
extern "C" void ext_00624CF0();
extern "C" void ext_00624D10();
extern "C" void ext_00624DC0();
extern "C" void ext_00624F50();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_0088F4C2;
extern "C" int mem_00929218;
extern "C" int mem_00928ECC;
extern "C" int mem_00928EE4;
extern "C" int mem_009CE164;

extern "C" __declspec(naked) void __fastcall fn_00625650(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0088F4C2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x48
        cmp byte ptr [eax + 0x19], 0x0
        push ebp
        mov ebp, ecx
        je L_6256ce
        push offset mem_00929218
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x54], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x58], 0x1
        mov dword ptr [esp + 0x28], offset mem_00928ECC
        call dword ptr [mem_00924FE0]
        push offset mem_009CE164
        lea ecx, [esp + 0x28]
        push ecx
        mov byte ptr [esp + 0x5c], 0x0
        mov dword ptr [esp + 0x2c], offset mem_00928EE4
        call ext_006A6DD2
    L_6256ce:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x10], ebx
        call ext_00624DC0
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x19], 0x0
        je L_6256ed
        mov edi, dword ptr [ebx + 0x8]
        jmp L_625705
    L_6256ed:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0x19], 0x0
        je L_6256fa
        mov edi, eax
        jmp L_625705
    L_6256fa:
        mov ecx, dword ptr [esp + 0x70]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 0x8]
        jne L_625770
    L_625705:
        cmp byte ptr [edi + 0x19], 0x0
        mov esi, dword ptr [ebx + 0x4]
        jne L_625711
        mov dword ptr [edi + 0x4], esi
    L_625711:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_62571e
        mov dword ptr [eax + 0x4], edi
        jmp L_625729
    L_62571e:
        cmp dword ptr [esi], ebx
        jne L_625726
        mov dword ptr [esi], edi
        jmp L_625729
    L_625726:
        mov dword ptr [esi + 0x8], edi
    L_625729:
        mov ebx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 0x10]
        jne L_625749
        cmp byte ptr [edi + 0x19], 0x0
        je L_62573e
        mov eax, esi
        jmp L_625747
    L_62573e:
        push edi
        call ext_00624D10
        add esp, 0x4
    L_625747:
        mov dword ptr [ebx], eax
    L_625749:
        mov ebx, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        cmp dword ptr [ebx + 0x8], ecx
        jne L_6257c7
        cmp byte ptr [edi + 0x19], 0x0
        je L_625762
        mov eax, esi
        mov dword ptr [ebx + 0x8], eax
        jmp L_6257c7
    L_625762:
        push edi
        call ext_00624CF0
        add esp, 0x4
        mov dword ptr [ebx + 0x8], eax
        jmp L_6257c7
    L_625770:
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 0x8]
        jne L_625780
        mov esi, ecx
        jmp L_62579a
    L_625780:
        cmp byte ptr [edi + 0x19], 0x0
        mov esi, dword ptr [ecx + 0x4]
        jne L_62578c
        mov dword ptr [edi + 0x4], esi
    L_62578c:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x4], ecx
    L_62579a:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_6257a7
        mov dword ptr [eax + 0x4], ecx
        jmp L_6257b5
    L_6257a7:
        mov eax, dword ptr [ebx + 0x4]
        cmp dword ptr [eax], ebx
        jne L_6257b2
        mov dword ptr [eax], ecx
        jmp L_6257b5
    L_6257b2:
        mov dword ptr [eax + 0x8], ecx
    L_6257b5:
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov dl, byte ptr [ebx + 0x18]
        mov al, byte ptr [ecx + 0x18]
        mov byte ptr [ecx + 0x18], dl
        mov byte ptr [ebx + 0x18], al
    L_6257c7:
        mov eax, dword ptr [esp + 0x10]
        mov bl, 0x1
        cmp byte ptr [eax + 0x18], bl
        jne L_6258c8
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx + 0x4]
        je L_6258c5
    L_6257e2:
        cmp byte ptr [edi + 0x18], bl
        jne L_6258c5
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L_625854
        mov eax, dword ptr [esi + 0x8]
        cmp byte ptr [eax + 0x18], 0x0
        jne L_62580c
        mov byte ptr [eax + 0x18], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x18], 0x0
        call ext_00624C90
        mov eax, dword ptr [esi + 0x8]
    L_62580c:
        cmp byte ptr [eax + 0x19], 0x0
        jne L_625884
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0x18], bl
        jne L_625821
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x18], bl
        je L_625880
    L_625821:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x18], bl
        jne L_62583b
        mov byte ptr [edx + 0x18], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x18], 0x0
        call ext_00624F50
        mov eax, dword ptr [esi + 0x8]
    L_62583b:
        mov cl, byte ptr [esi + 0x18]
        mov byte ptr [eax + 0x18], cl
        mov byte ptr [esi + 0x18], bl
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x18], bl
        call ext_00624C90
        jmp L_6258c5
    L_625854:
        cmp byte ptr [eax + 0x18], 0x0
        jne L_62586b
        mov byte ptr [eax + 0x18], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x18], 0x0
        call ext_00624F50
        mov eax, dword ptr [esi]
    L_62586b:
        cmp byte ptr [eax + 0x19], 0x0
        jne L_625884
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x18], bl
        jne L_625897
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x18], bl
        jne L_625897
    L_625880:
        mov byte ptr [eax + 0x18], 0x0
    L_625884:
        mov edx, dword ptr [ebp + 0x4]
        mov edi, esi
        cmp edi, dword ptr [edx + 0x4]
        mov esi, dword ptr [esi + 0x4]
        jne L_6257e2
        jmp L_6258c5
    L_625897:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x18], bl
        jne L_6258af
        mov byte ptr [edx + 0x18], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x18], 0x0
        call ext_00624C90
        mov eax, dword ptr [esi]
    L_6258af:
        mov cl, byte ptr [esi + 0x18]
        mov byte ptr [eax + 0x18], cl
        mov byte ptr [esi + 0x18], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x18], bl
        call ext_00624F50
    L_6258c5:
        mov byte ptr [edi + 0x18], bl
    L_6258c8:
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_006A5C5C
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0x4
        test eax, eax
        pop edi
        pop esi
        pop ebx
        jbe L_6258e5
        add eax, -0x1
        mov dword ptr [ebp + 0x8], eax
    L_6258e5:
        mov ecx, dword ptr [esp + 0x60]
        mov eax, dword ptr [esp + 0x5c]
        mov edx, dword ptr [esp + 0x64]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax + 0x4], edx
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x54
        ret 0xc
    }
}


// [0x006293D0] sub_006293D0 (56 bytes)
extern "C" void ext_00647F00();
extern "C" void ext_0067E110();
extern "C" void ext_00694D80();

extern "C" __declspec(naked) void* __fastcall fn_006293D0(void* self) {
    __asm {
        sub esp, 0x24
        mov eax, ecx
        mov ecx, [eax + 0x28]
        mov edx, [ecx + 0x158]
        mov ecx, [edx + 0xac]
        push esi
        lea esi, [eax + 0x30]
        push esi
        lea eax, [esp + 0x8]
        push eax
        call ext_00647F00
        mov ecx, eax
        call ext_0067E110
        mov ecx, eax
        call ext_00694D80
        mov eax, esi
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x00627530] sub_00627530 (104 bytes)
extern "C" void ext_00694D80();
extern "C" void ext_00647F20();
extern "C" void ext_00554490();
extern "C" __declspec(naked) void* __fastcall fn_00627530(void* self) {
    __asm {
        sub     esp, 0x24
        fldz
        push    esi
        fst     dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x28]
        fst     dword ptr [esp + 0x8]
        fst     dword ptr [esp + 0x18]
        lea     eax, [esp + 0x4]
        fst     dword ptr [esp + 0x10]
        push    eax
        fst     dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x20]
        fld1
        fst     dword ptr [esp + 0x8]
        fst     dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x28]
        mov     edx, dword ptr [ecx + 0x158]
        mov     ecx, dword ptr [edx + 0xac]
        call    ext_00647F20
        lea     eax, [esi + 0x54]
        push    eax
        lea     ecx, [esp + 0x8]
        call    ext_00554490
        add     esi, 0x78
        push    esi
        lea     ecx, [esp + 0x8]
        call    ext_00694D80
        mov     eax, esi
        pop     esi
        add     esp, 0x24
        ret
    }
}

// [0x00623500] sub_00623500 (244 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_005A07A0();
extern "C" void ext_005AE1B0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00A97D5C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

// s: by-value std::string (28 bytes, callee-cleaned via ret 0x1c); SEH-framed, throws via CxxThrowException on a self-assignment guard.
extern "C" __declspec(naked) void __fastcall fn_00623500(void* self, int edx_unused, void* s) {
    __asm {
        push -1
        push 0x8a3e82
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x68
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        lea eax, [esp + 0x88]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x88], 0x0
        call ext_005A07A0
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebp, dword ptr [esi + 0x4]
        je L_chk1
        cmp edi, esi
        je L_chk2
L_chk1:
        call dword ptr [mem_00925134]
L_chk2:
        mov ebx, dword ptr [esp + 0x14]
        cmp ebx, ebp
        jne L_main
        mov edx, dword ptr [mem_00A97D5C]
        push edx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x88]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esp + 0x3c]
        mov byte ptr [esp + 0x88], 0x1
        call ext_0041FF30
        push 0x9d3748
        lea edx, [esp + 0x38]
        push edx
        call ext_006A6DD2
L_main:
        test edi, edi
        jne L_chk3
        call dword ptr [mem_00925134]
L_chk3:
        cmp ebx, dword ptr [edi + 0x4]
        jne L_chk4
        call dword ptr [mem_00925134]
L_chk4:
        mov eax, dword ptr [ebx + 0x28]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        push ebx
        push edi
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        call ext_005AE1B0
        lea ecx, [esp + 0x88]
        mov dword ptr [esp + 0x80], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x78]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x74
        ret 0x1c
    }
}

// [0x006239A0] sub_006239A0 (37 bytes)
extern "C" void ext_00623500();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_006239A0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        push esi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x20]
        call ext_00623500
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00629460] sub_00629460 (64 bytes)
extern "C" void ext_00647F00();
extern "C" void ext_0067E110();
extern "C" void ext_00694B60();

extern "C" __declspec(naked) void* __fastcall fn_00629460(void* self) {
    __asm {
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x28]
        mov ecx, dword ptr [eax + 0x158]
        mov ecx, dword ptr [ecx + 0xac]
        push edi
        call ext_00647F00
        lea edx, [esp + 0x8]
        push edx
        mov ecx, eax
        call ext_0067E110
        mov eax, dword ptr [esi + 0x30]
        lea edi, [esi + 0x34]
        push edi
        push eax
        lea ecx, [esp + 0x10]
        call ext_00694B60
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x00627680] sub_00627680 (106 bytes)
extern "C" void ext_00554490();
extern "C" void ext_00647F20();
extern "C" void ext_00694B60();
extern "C" __declspec(naked) void* __fastcall fn_00627680(void* self) {
    __asm {
        sub     esp, 0x24
        fldz
        push    esi
        fst     dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x28]
        fst     dword ptr [esp + 0x8]
        fst     dword ptr [esp + 0x18]
        lea     eax, [esp + 0x4]
        fst     dword ptr [esp + 0x10]
        push    eax
        fst     dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x20]
        fld1
        fst     dword ptr [esp + 0x8]
        fst     dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x28]
        mov     edx, dword ptr [ecx + 0x158]
        mov     ecx, dword ptr [edx + 0xac]
        call    ext_00647F20
        lea     eax, [esi + 0x54]
        push    eax
        lea     ecx, [esp + 0x8]
        call    ext_00554490
        add     esi, 0x78
        push    esi
        push    0
        lea     ecx, [esp + 0xc]
        call    ext_00694B60
        mov     eax, esi
        pop     esi
        add     esp, 0x24
        ret
    }
}

extern "C" void ext_006798D0();
extern "C" void ext_0062A3D0();
extern "C" void ext_0062A2D0();
extern "C" int mem_00978A24;

// [0x0062A4F0] sub_0062A4F0 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_0062A4F0(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_0062A3D0
        push offset mem_00978A24
        lea ecx, [esp + 4]
        call ext_0062A2D0
        pop ecx
        ret
    }
}

// [0x0062A520] sub_0062A520 (35 bytes)
extern "C" void ext_0062A460();
extern "C" void ext_0062A350();
extern "C" __declspec(naked) void __fastcall fn_0062A520(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_0062A460
        push offset mem_00978A24
        lea ecx, [esp + 4]
        call ext_0062A350
        pop ecx
        ret
    }
}

// [0x00623970] sub_00623970 (44 bytes)
extern "C" void ext_006233F0();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_00623970(void* self) {
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        push    esi
        mov     esi, ecx
        je      loc_623998
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        sub     esp, 0x1c
        mov     ecx, esp
        mov     dword ptr [esp + 0x2c], esp
        push    eax
        call    dword ptr [mem_00924FE0]
        lea     ecx, [esi + 0x20]
        call    ext_006233F0
loc_623998:
        pop     esi
        ret     0x8
    }
}

// [0x00620470] sub_00620470 (45 bytes)
extern "C" void ext_00620350();
extern "C" void* __fastcall fn_00620470(void* self, int edx_unused, const void* other) {
    ((void (__fastcall*)(void*, int, const void*))ext_00620350)(self, edx_unused, other);
    *(int*)self = 0x00976d1c;
    *(float*)((char*)self + 0x28) = *(const float*)((const char*)other + 0x28);
    *(float*)((char*)self + 0x2c) = *(const float*)((const char*)other + 0x2c);
    *(float*)((char*)self + 0x30) = *(const float*)((const char*)other + 0x30);
    return self;
}

// [0x0062CFE0] sub_0062CFE0 (45 bytes)
extern "C" void ext_0062CD80();
extern "C" void* __fastcall fn_0062CFE0(void* self, int edx_unused, const void* other) {
    ((void (__fastcall*)(void*, int, const void*))ext_0062CD80)(self, edx_unused, other);
    *(int*)self = 0x009794b4;
    *(float*)((char*)self + 0x38) = *(const float*)((const char*)other + 0x38);
    *(float*)((char*)self + 0x3c) = *(const float*)((const char*)other + 0x3c);
    *(float*)((char*)self + 0x40) = *(const float*)((const char*)other + 0x40);
    return self;
}

// [0x00620710] sub_00620710 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_006202B0();
extern "C" void ext_00620470();
extern "C" void ext_00629E60();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_00620710(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa97cf8
        push 0xa97c60
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x38
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_00620470
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, [esp + 0x8]
        push eax
        call ext_006202B0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x38
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_ret0_2
        mov ecx, eax
        call ext_00629E60
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0_2:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    }
}

// [0x0062D8D0] sub_0062D8D0 (329 bytes)
extern "C" void ext_0062CFE0();
extern "C" void ext_0060E820();
extern "C" void ext_0063DDF0();

extern "C" __declspec(naked) void __fastcall fn_0062D8D0(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa98a80
        push 0xa94fec
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x48
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0062CFE0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, [esp + 0x8]
        push eax
        call ext_0060E820
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x48
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_ret0_2
        mov ecx, eax
        call ext_0063DDF0
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0_2:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    }
}

// [0x0062CDE0] sub_0062CDE0 (51 bytes)
extern "C" void ext_0062CD80();
extern "C" void* __fastcall fn_0062CDE0(void* self, int edx_unused, const void* other) {
    ((void (__fastcall*)(void*, int, const void*))ext_0062CD80)(self, edx_unused, other);
    *(int*)self = 0x00979284;
    *(float*)((char*)self + 0x38) = *(const float*)((const char*)other + 0x38);
    *(float*)((char*)self + 0x3c) = *(const float*)((const char*)other + 0x3c);
    *(float*)((char*)self + 0x40) = *(const float*)((const char*)other + 0x40);
    *(float*)((char*)self + 0x44) = *(const float*)((const char*)other + 0x44);
    return self;
}

// [0x0062CE40] sub_0062CE40 (51 bytes)
extern "C" void* __fastcall fn_0062CE40(void* self, int edx_unused, const void* other) {
    ((void (__fastcall*)(void*, int, const void*))ext_0062CD80)(self, edx_unused, other);
    *(int*)self = 0x009792f4;
    *(float*)((char*)self + 0x38) = *(const float*)((const char*)other + 0x38);
    *(float*)((char*)self + 0x3c) = *(const float*)((const char*)other + 0x3c);
    *(float*)((char*)self + 0x40) = *(const float*)((const char*)other + 0x40);
    *(float*)((char*)self + 0x44) = *(const float*)((const char*)other + 0x44);
    return self;
}

// [0x0062D0F0] sub_0062D0F0 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0062CDE0();
extern "C" void ext_0060E820();
extern "C" void ext_0063D970();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_0062D0F0(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa989c8
        push 0xa94fec
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x48
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0062CDE0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, [esp + 0x8]
        push eax
        call ext_0060E820
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x48
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_ret0b
        mov ecx, eax
        call ext_0063D970
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0b:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    }
}

// [0x0062D240] sub_0062D240 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0062CE40();
extern "C" void ext_0060E820();
extern "C" void ext_0063DAB0();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_0062D240(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa989f8
        push 0xa94fec
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x48
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0062CE40
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, [esp + 0x8]
        push eax
        call ext_0060E820
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x48
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_ret0b
        mov ecx, eax
        call ext_0063DAB0
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0b:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    }
}

// [0x0062CFA0] sub_0062CFA0 (51 bytes)
extern "C" __declspec(naked) void __fastcall fn_0062CFA0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_0062CD80
        mov dword ptr [esi], 0x979444
        fld dword ptr [edi + 0x38]
        fstp dword ptr [esi + 0x38]
        fld dword ptr [edi + 0x3c]
        fstp dword ptr [esi + 0x3c]
        fld dword ptr [edi + 0x40]
        fstp dword ptr [esi + 0x40]
        mov eax, dword ptr [edi + 0x44]
        mov dword ptr [esi + 0x44], eax
        pop edi
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0062D780] sub_0062D780 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0060E820();
extern "C" void ext_0062CFA0();
extern "C" void ext_0063DE10();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_0062D780(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa98a4c
        push 0xa94fec
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x48
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0062CFA0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, [esp + 0x8]
        push eax
        call ext_0060E820
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x48
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_ret0b
        mov ecx, eax
        call ext_0063DE10
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0b:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    }
}

extern "C" void ext_0041A920();
extern "C" void ext_00624800();
extern "C" int mem_00924FEC;

// [0x00624950] sub_00624950 (52 bytes)
extern "C" __declspec(naked) void __fastcall fn_00624950(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        lea eax, [esp + 0x0c]
        push eax
        lea ecx, [esi + 0x08]
        call ext_0041A920
        mov edi, dword ptr [esp + 0x10]
        mov ecx, edi
        call dword ptr [mem_00924FEC]
        test al, al
        jnz loc_62497f
        mov ecx, dword ptr [esp + 0x0c]
        push ecx
        push edi
        lea ecx, [esi + 0x60]
        call ext_00624800
    loc_62497f:
        pop edi
        pop esi
        ret 8
    }
}

// [0x00624990] sub_00624990 (52 bytes)
extern "C" void ext_00624730();
extern "C" __declspec(naked) void __fastcall fn_00624990(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        lea eax, [esp + 0x0c]
        push eax
        lea ecx, [esi + 0x18]
        call ext_0041A920
        mov edi, dword ptr [esp + 0x0c]
        mov ecx, dword ptr [esp + 0x10]
        push edi
        push ecx
        lea ecx, [esi + 0x54]
        call ext_00624730
        lea edx, [esi + 0x28]
        add esi, 0x38
        mov dword ptr [edi + 0x0c], edx
        mov dword ptr [edi + 0x10], esi
        pop edi
        pop esi
        ret 8
    }
}

// [0x00625D10] sub_00625D10 (203 bytes)
extern "C" void ext_005FD330();
extern "C" void ext_00624DC0();
extern "C" void ext_00625650();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00625D10(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ebp, dword ptr [eax]
        je L_625D2A
        cmp edi, esi
        je L_625D30
    L_625D2A:
        call dword ptr [mem_00925134]
    L_625D30:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_625D91
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_625D47
        cmp eax, esi
        je L_625D4D
    L_625D47:
        call dword ptr [mem_00925134]
    L_625D4D:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_625D91
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_005FD330
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 8
        ret 0x14
    L_625D91:
        test edi, edi
        je L_625D9B
        cmp edi, dword ptr [esp + 0x28]
        je L_625DA1
    L_625D9B:
        call dword ptr [mem_00925134]
    L_625DA1:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_625DC8
        lea ecx, [esp + 0x20]
        call ext_00624DC0
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_00625650
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_625D91
    L_625DC8:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 8
        ret 0x14
    }
}

// [0x006262D0] sub_006262D0 (252 bytes)
extern "C" void ext_00624950();
extern "C" void ext_00624E50();
extern "C" void ext_00624E80();
extern "C" void ext_00626210();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) int __cdecl fn_006262D0(void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3ea4
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push esi
        mov esi, dword ptr [esp + 0x38]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi]
        push edi
        push eax
        push ecx
        lea edx, [esp + 0x10]
        push edx
        call ext_00624E80
        add esp, 0xc
        lea eax, [esp + 8]
        push eax
        mov ecx, 0xb4b3ec
        call ext_00626210
        mov edi, eax
        mov eax, dword ptr [edi]
        test eax, eax
        jne L_ret_eax
        cmp dword ptr [esi + 8], eax
        je L_ret_zero
        push 0x38
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x3c], eax
        test eax, eax
        mov dword ptr [esp + 0x34], 0
        je L_new_null
        mov ecx, dword ptr [esi]
        sub esp, 0x10
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [edx + 0xc], ecx
        mov ecx, eax
        call ext_00624E50
        jmp L_after_new
    L_new_null:
        xor eax, eax
    L_after_new:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], -1
        mov dword ptr [edi], eax
        call dword ptr [mem_00924FE8]
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [edx + 0x5ec]
        push eax
        mov eax, dword ptr [edi]
        push eax
        mov dword ptr [esp + 0x3c], 1
        call ext_00624950
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], -1
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esp + 0x2c]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        add esp, 0x30
        ret
    L_ret_zero:
        xor eax, eax
    L_ret_eax:
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x30
        ret
    }
}

// [0x00620EB0] sub_00620EB0 (56 bytes)
extern "C" void ext_00587FD0();
extern "C" __declspec(naked) void* __fastcall fn_00620EB0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_00587FD0
        mov dword ptr [esi], 0x976e9c
        mov dword ptr [esi + 4], 0x976e54
        mov dword ptr [esi + 8], 0x976e14
        mov dword ptr [esi + 0xc], 0x976dc4
        mov dword ptr [esi + 0xe4], 2
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x0062CEA0] sub_0062CEA0 (57 bytes)
extern "C" void ext_0062CD80();
extern "C" void* __fastcall fn_0062CEA0(void* self, int edx_unused, const void* other) {
    ((void (__fastcall*)(void*, int, const void*))ext_0062CD80)(self, edx_unused, other);
    *(int*)self = 0x00979364;
    *(float*)((char*)self + 0x38) = *(const float*)((const char*)other + 0x38);
    *(float*)((char*)self + 0x3c) = *(const float*)((const char*)other + 0x3c);
    *(float*)((char*)self + 0x40) = *(const float*)((const char*)other + 0x40);
    *(float*)((char*)self + 0x44) = *(const float*)((const char*)other + 0x44);
    *(float*)((char*)self + 0x48) = *(const float*)((const char*)other + 0x48);
    return self;
}

// [0x0062D390] sub_0062D390 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0060E820();
extern "C" void ext_0062CEA0();
extern "C" void ext_0063DB50();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_0062D390(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push -1
        push 0x8a871a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa98a1c
        push 0xa94fec
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x50
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0062CEA0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
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
        lea eax, [esp + 0x8]
        push eax
        call ext_0060E820
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x50
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_ret0_2
        mov ecx, eax
        call ext_0063DB50
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_ret0_2:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x0062CF00] sub_0062CF00 (57 bytes)
extern "C" void ext_0062CD80();
extern "C" void* __fastcall fn_0062CF00(void* self, int edx_unused, const void* other) {
    ((void (__fastcall*)(void*, int, const void*))ext_0062CD80)(self, edx_unused, other);
    *(int*)self = 0x009793d4;
    *(float*)((char*)self + 0x38) = *(const float*)((const char*)other + 0x38);
    *(float*)((char*)self + 0x3c) = *(const float*)((const char*)other + 0x3c);
    *(float*)((char*)self + 0x40) = *(const float*)((const char*)other + 0x40);
    *(float*)((char*)self + 0x44) = *(const float*)((const char*)other + 0x44);
    *(float*)((char*)self + 0x48) = *(const float*)((const char*)other + 0x48);
    return self;
}

// [0x0062D4E0] sub_0062D4E0 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0060E820();
extern "C" void ext_0062CF00();
extern "C" void ext_0063D950();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_0062D4E0(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa98994
        push 0xa94fec
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x50
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0062CF00
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
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
        lea eax, [esp + 0x8]
        push eax
        call ext_0060E820
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x50
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_ret0_2
        mov ecx, eax
        call ext_0063D950
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_ret0_2:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x0062CF60] sub_0062CF60 (63 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0062CF60(void* self, int edx_unused, const void* other) {
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        mov     esi, ecx
        call    ext_0062CD80
        mov     dword ptr [esi], 0x009793d4
        fld     dword ptr [edi + 0x38]
        fstp    dword ptr [esi + 0x38]
        mov     eax, esi
        fld     dword ptr [edi + 0x3c]
        fstp    dword ptr [esi + 0x3c]
        fld     dword ptr [edi + 0x40]
        fstp    dword ptr [esi + 0x40]
        fld     dword ptr [edi + 0x44]
        fstp    dword ptr [esi + 0x44]
        fld     dword ptr [edi + 0x48]
        pop     edi
        fstp    dword ptr [esi + 0x48]
        mov     dword ptr [esi], 0x00979214
        pop     esi
        ret     4
    }
}
