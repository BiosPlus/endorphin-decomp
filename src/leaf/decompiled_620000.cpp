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
