// Decompiled translation unit: src/leaf/decompiled_4D0000.cpp
#include <string>
#include <vector>

extern "C" int mem_00924FF0;

// [0x004DDE10] sub_004DDE10 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_004DDE10(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        mov edi, dword ptr [esi]
        push 0
        push 0
        call dword ptr [mem_00924FF0]
        push eax
        mov eax, dword ptr [edi + 0x8]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004DE440] sub_004DE440 (12 bytes)
extern "C" void ext_004DE160();

extern "C" __declspec(naked) void __fastcall fn_004DE440(void* self) {
    __asm {
        call ext_004DE160
        add eax, dword ptr [ecx + 0x9d0]
        ret
    }
}

// [0x004D0E00] sub_004D0E00 (16 bytes)
extern "C" void ext_004D0B60();

extern "C" __declspec(naked) void __fastcall fn_004D0E00(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x188]
        push eax
        call ext_004D0B60
        add esp, 0x4
        ret
    }
}

// [0x004D3B30] sub_004D3B30 (18 bytes)
extern "C" void ext_004C0340();

extern "C" void __fastcall fn_004D3B30(unsigned char* self, int edx_unused, unsigned char a1) {
    self[0x192] = a1;
    ext_004C0340();
}

// [0x004D3B50] sub_004D3B50 (18 bytes)
extern "C" void __fastcall fn_004D3B50(void* self, int edx_unused, int a1) {
    *(unsigned char*)((char*)self + 0x193) = (unsigned char)a1;
    ext_004C0340();
}

// [0x004D3B70] sub_004D3B70 (18 bytes)
extern "C" void __fastcall fn_004D3B70(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x344) = a1;
    ext_004C0340();
}

// [0x004D3B90] sub_004D3B90 (18 bytes)
extern "C" void ext_004C0340();

extern "C" void __fastcall fn_004D3B90(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x340) = a1;
    ext_004C0340();
}

// [0x004D3BB0] sub_004D3BB0 (18 bytes)
extern "C" void ext_004C0340();
extern "C" void __fastcall fn_004D3BB0(void* self, int edx_unused, int value) {
    (void)edx_unused;
    *(int*)((char*)self + 0x394) = value;
    ext_004C0340();
}

// [0x004D3BD0] sub_004D3BD0 (18 bytes)
extern "C" void __fastcall fn_004D3BD0(void* self, int edx_unused, unsigned char a1) {
    *((unsigned char*)self + 0x194) = a1;
    ext_004C0340();
}

// [0x004D3BF0] sub_004D3BF0 (18 bytes)
extern "C" void __fastcall fn_004D3BF0(void* self, int edx_unused, unsigned char a1) {
    *((unsigned char*)self + 0x195) = a1;
    ext_004C0340();
}

// [0x004D3910] sub_004D3910 (24 bytes)
extern "C" void ext_004D3880();
extern "C" void ext_006798D0();

extern "C" __declspec(naked) void __fastcall fn_004D3910(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0x93e1b8
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_004D3880
        pop ecx
        ret
    }
}

// [0x004D2C70] sub_004D2C70 (25 bytes)
extern "C" void ext_004D2B40();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004D2C70(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_004D2B40
        push esi
        call ext_006A5C5C
        add esp, 0x4
    done:
        pop esi
        ret
    }
}

// [0x004DA800] sub_004DA800 (25 bytes)
extern "C" void ext_004DA2B0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004DA800(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done_004DA800
        mov ecx, esi
        call ext_004DA2B0
        push esi
        call ext_006A5C5C
        add esp, 4
    done_004DA800:
        pop esi
        ret
    }
}

// [0x004D0DE0] sub_004D0DE0 (26 bytes)
extern "C" int __cdecl ext_004D0B20(int);

extern "C" void __fastcall fn_004D0DE0(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x188) = ext_004D0B20(a1);
}

// [0x004DE130] sub_004DE130 (35 bytes)
extern "C" void ext_004C1AC0();
extern "C" void ext_0047C480();
extern "C" int mem_00AE29D0;

extern "C" __declspec(naked) void __fastcall fn_004DE130(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_004C1AC0
        mov ecx, dword ptr [esi + 0x168]
        pop esi
        mov dword ptr [esp + 0x4], ecx
        mov ecx, dword ptr [mem_00AE29D0]
        jmp ext_0047C480
    }
}

// [0x004D4160] sub_004D4160 (39 bytes)
extern "C" int __fastcall fn_004D4160(void* self) {
    struct Elem28 { char d[28]; };
    Elem28* begin = *(Elem28**)((char*)self + 0x448);
    if (!begin) return 0;
    Elem28* end = *(Elem28**)((char*)self + 0x44C);
    return (int)(end - begin);
}

// [0x004D4190] sub_004D4190 (39 bytes)
extern "C" int __fastcall fn_004D4190(void* self) {
    struct Elem28 { char d[28]; };
    Elem28* begin = *(Elem28**)((char*)self + 0x458);
    if (!begin) return 0;
    Elem28* end = *(Elem28**)((char*)self + 0x45C);
    return (int)(end - begin);
}

// [0x004D0DB0] sub_004D0DB0 (45 bytes)
extern "C" int mem_00AE5598;
extern "C" int mem_00AE558C;
extern "C" int mem_00AE5590;
extern "C" int mem_00AE5594;

extern "C" void* __cdecl fn_004D0DB0() {
    if (!(mem_00AE5598 & 1)) {
        float zero = 0.0f;
        mem_00AE5598 |= 1;
        *(float*)&mem_00AE558C = zero;
        *(float*)&mem_00AE5590 = zero;
        *(float*)&mem_00AE5594 = zero;
    }
    return &mem_00AE558C;
}

// [0x004D0010] sub_004D0010 (57 bytes)
extern "C" int mem_00924FE8;

extern "C" void* __fastcall fn_004D0010(void* self) {
    typedef void (__fastcall *ctor_t)(void*);
    ctor_t ctor = (ctor_t)mem_00924FE8;
    ctor(self);
    float zero = 0.0f;
    char* p = (char*)self;
    *(float*)(p + 0x24) = zero;
    *(float*)(p + 0x20) = zero;
    *(float*)(p + 0x1c) = zero;
    *(float*)(p + 0x34) = zero;
    *(float*)(p + 0x30) = zero;
    *(float*)(p + 0x2c) = zero;
    *(float*)(p + 0x28) = zero;
    *(float*)(p + 0x44) = zero;
    *(float*)(p + 0x40) = zero;
    *(float*)(p + 0x3c) = zero;
    *(float*)(p + 0x38) = zero;
    *(float*)(p + 0x50) = zero;
    *(float*)(p + 0x4c) = zero;
    *(float*)(p + 0x48) = zero;
    return self;
}

// [0x004D3DE0] sub_004D3DE0 (57 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00642680();
extern "C" __declspec(naked) void __fastcall fn_004D3DE0(void* self, int edx_unused, int a1) {
    __asm {
        cmp byte ptr [esp + 0x4], 0
        push edi
        mov edi, ecx
        je L_end
        push ebx
        push esi
        call ext_00594000
        mov ebx, dword ptr [eax + 0xf8]
        xor esi, esi
        cmp dword ptr [edi + 0x1ec], esi
        jle L_pop
    L_loop:
        mov ecx, ebx
        call ext_00642680
        add esi, 1
        cmp esi, dword ptr [edi + 0x1ec]
        jl L_loop
    L_pop:
        pop esi
        pop ebx
    L_end:
        pop edi
        ret 4
    }
}

// [0x004D0B20] sub_004D0B20 (63 bytes)
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) int __cdecl fn_004D0B20(int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        push esi
        push edi
        xor edi, edi
        mov esi, 0x00AE5C10
    loop_004D0B20:
        push esi
        push ebx
        call ebp
        add esp, 0x8
        test al, al
        jne found_004D0B20
        add esi, 0x1c
        add edi, 0x1
        cmp esi, 0x00AE5C64
        jl loop_004D0B20
        pop edi
        pop esi
        pop ebp
        mov eax, 0x4
        pop ebx
        ret
    found_004D0B20:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004DE780] sub_004DE780 (76 bytes)
extern "C" void* __cdecl fn_004DE780(void* first_, void* last_, void* dest_) {
    struct Vec16 { float v[4]; };
    Vec16* first = (Vec16*)first_;
    Vec16* last = (Vec16*)last_;
    Vec16* dest = (Vec16*)dest_;
    Vec16* ret = dest + (last - first);
    for (Vec16* p = first; p != last; ++p, ++dest) {
        dest->v[0] = p->v[0];
        dest->v[1] = p->v[1];
        dest->v[2] = p->v[2];
        dest->v[3] = p->v[3];
    }
    return ret;
}

// [0x004D2590] sub_004D2590 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE55B8;
extern "C" int mem_00AE55B4;

extern "C" __declspec(naked) void* __fastcall fn_004D2590(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88cb9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE55B8], al
        jne L_done
        or dword ptr [mem_00AE55B8], eax
        mov ecx, offset mem_00AE55B4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE55B4], 0x947b0c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE55B4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004D26F0] sub_004D26F0 (30 bytes)
extern "C" void ext_004D2590();

extern "C" __declspec(naked) void __fastcall fn_004D26F0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004D2590
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004D25F0] sub_004D25F0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE55C0;
extern "C" int mem_00AE55BC;

extern "C" __declspec(naked) void* __fastcall fn_004D25F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88cbbe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE55C0], al
        jne L_done
        or dword ptr [mem_00AE55C0], eax
        mov ecx, offset mem_00AE55BC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE55BC], 0x947cbc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE55BC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004D2710] sub_004D2710 (30 bytes)
extern "C" void ext_004D25F0();

extern "C" __declspec(naked) void __fastcall fn_004D2710(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004D25F0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004D2650] sub_004D2650 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE55C8;
extern "C" int mem_00AE55C4;

extern "C" __declspec(naked) void* __fastcall fn_004D2650(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88cbde
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE55C8], al
        jne L_done
        or dword ptr [mem_00AE55C8], eax
        mov ecx, offset mem_00AE55C4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE55C4], 0x947e6c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE55C4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004D2730] sub_004D2730 (30 bytes)
extern "C" void ext_004D2650();

extern "C" __declspec(naked) void __fastcall fn_004D2730(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004D2650
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004DE720] sub_004DE720 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE6418;
extern "C" int mem_00AE6414;

extern "C" __declspec(naked) void* __fastcall fn_004DE720(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88da8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE6418], al
        jne L_done
        or dword ptr [mem_00AE6418], eax
        mov ecx, offset mem_00AE6414
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE6414], 0x949dac
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE6414
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004DE370] sub_004DE370 (95 bytes)
extern "C" __declspec(naked) void __cdecl fn_004DE370(void* a1, void* a2, void* a3) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebp
        je done_004DE370
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_004DE370:
        cmp esi, edi
        je next_004DE370
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je skip_004DE370
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x78]
        push esi
        call edx
    skip_004DE370:
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], eax
        cmp dword ptr [edi + 0x4], 0
        je null_004DE370
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push edi
        lea eax, [esp + 0x18]
        push eax
        call edx
        jmp store_004DE370
    null_004DE370:
        mov dword ptr [esp + 0x10], 0
        lea eax, [esp + 0x10]
    store_004DE370:
        mov eax, dword ptr [eax]
        mov dword ptr [esi], eax
    next_004DE370:
        add esi, 0x8
        cmp esi, ebp
        jne loop_004DE370
        pop edi
    done_004DE370:
        pop esi
        pop ebp
        ret
    }
}

// [0x004D0D40] sub_004D0D40 (97 bytes)
// __thiscall (ret 4): linear scan of a 0x1c-stride table at 0xAE5C68..0xAE5CF4 comparing each
// entry against the std::string argument via the imported basic_string operator== (mem_00924FC4).
// Stores the index of the first match into self->[0x190], or 0 if none matches.
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void __fastcall fn_004D0D40(void* self, int edx_unused, const void* name) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        push esi
        push edi
        mov dword ptr [esp + 0x10], ecx
        xor edi, edi
        mov esi, 0xae5c68
        __asm _emit 0x8D __asm _emit 0x9B __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ebx, [ebx] (disp32 form)
loop_top:
        push esi
        push ebx
        call ebp
        add esp, 0x8
        test al, al
        jne found
        add esi, 0x1c
        add edi, 0x1
        cmp esi, 0xae5cf4
        jl loop_top
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ecx + 0x190], 0x0
        pop ebx
        pop ecx
        ret 0x4
found:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x190], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x004D41C0] sub_004D41C0 (103 bytes)
// __thiscall, ret 0x8: returns std::string by value (hidden buffer = a1) copied from
// vector<std::string> element at this+0x448 (begin) / this+0x44c (end), index a2.
// Out-of-range index calls _invalid_parameter_noinfo (mem_00925134) then falls through.
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_004D41C0(void* self, int edx_unused, void* a1, unsigned int a2) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x448]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        je L_fail
        mov ecx, dword ptr [esi + 0x44c]
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
L_fail:
        call dword ptr [mem_00925134]
L_ok:
        mov ecx, dword ptr [esi + 0x448]
        mov esi, dword ptr [esp + 0x10]
        lea eax, [8 * edi]
        sub eax, edi
        lea edx, [ecx + 4 * eax]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004D4230] sub_004D4230 (103 bytes)
extern "C" __declspec(naked) void __fastcall fn_004D4230(void* self, int edx_unused, void* a1, unsigned int a2) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x458]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        je L_fail
        mov ecx, dword ptr [esi + 0x45c]
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
L_fail:
        call dword ptr [mem_00925134]
L_ok:
        mov ecx, dword ptr [esi + 0x458]
        mov esi, dword ptr [esp + 0x10]
        lea eax, [8 * edi]
        sub eax, edi
        lea edx, [ecx + 4 * eax]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004DE3D0] sub_004DE3D0 (107 bytes)
extern "C" __declspec(naked) void* __cdecl fn_004DE3D0(void* first_, void* last_, void* dest_) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebp, esi
        je done_empty
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_top:
        sub esi, 0x8
        sub edi, 0x8
        cmp edi, esi
        je skip_elem
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        je no_release
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x78]
        push edi
        call edx
    no_release:
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [edi + 0x4], eax
        cmp dword ptr [esi + 0x4], 0x0
        je null_src
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        lea eax, [esp + 0x14]
        push eax
        call edx
        jmp store_val
    null_src:
        mov dword ptr [esp + 0x18], 0x0
        lea eax, [esp + 0x18]
    store_val:
        mov eax, dword ptr [eax]
        mov dword ptr [edi], eax
    skip_elem:
        cmp esi, ebp
        jne loop_top
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret
    done_empty:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebp
        ret
    }
}

// [0x004D4060] sub_004D4060 (121 bytes)
extern "C" void ext_0041CCC0();
extern "C" int mem_00924FE0;
extern "C" int mem_00A3464C;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_004D4060(void* self, int edx_unused, void* ret) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [ecx + 0x43c]
        test edi, edi
        mov dword ptr [esp + 0x8], 0x0
        jl L_bad
        mov eax, dword ptr [ecx + 0x448]
        add ecx, 0x444
        test eax, eax
        je L_zero
        mov esi, dword ptr [ecx + 0x8]
        sub esi, eax
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_zero:
        add eax, -0x1
        cmp edi, eax
        jg L_bad
        push edi
        call ext_0041CCC0
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    L_bad:
        mov eax, dword ptr [mem_00A3464C]
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x004D40E0] sub_004D40E0 (121 bytes)
// [0x004D40E0] sub_004D40E0 (121 bytes)
extern "C" void ext_0041CCC0();
extern "C" int mem_00924FE0;
extern "C" int mem_00A34650;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_004D40E0(void* self, int edx_unused, void* ret) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [ecx + 0x440]
        test edi, edi
        mov dword ptr [esp + 0x8], 0x0
        jl L_bad
        mov eax, dword ptr [ecx + 0x458]
        add ecx, 0x454
        test eax, eax
        je L_zero
        mov esi, dword ptr [ecx + 0x8]
        sub esi, eax
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_zero:
        add eax, -0x1
        cmp edi, eax
        jg L_bad
        push edi
        call ext_0041CCC0
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    L_bad:
        mov eax, dword ptr [mem_00A34650]
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x004D0260] sub_004D0260 (79 bytes)
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9FAE8;
extern "C" int mem_00A9FAEC;

extern "C" __declspec(naked) void __fastcall fn_004D0260(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9FAE8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        push esi
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        mov edx, dword ptr [mem_00A9FAEC]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        add esi, 0x4
        push esi
        call ext_0053F5F0
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004D9CE0] sub_004D9CE0 (135 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_00594000();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004D9CE0(void* self, int edx_unused, int a1) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        lea esi, [ebp + 0x330]
        mov byte ptr [ebp + 0x191], al
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_loop
        call dword ptr [mem_00925134]
L_loop:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        cmp esi, esi
        je L_chk3
        call dword ptr [mem_00925134]
L_chk3:
        cmp edi, ebx
        je L_done
        cmp edi, dword ptr [esi + 0x8]
        jb L_body
        call dword ptr [mem_00925134]
L_body:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        mov edx, dword ptr [edx + 0x20]
        lea ecx, [eax + 0xc]
        movzx eax, byte ptr [ebp + 0x191]
        push eax
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_next
        call dword ptr [mem_00925134]
L_next:
        add edi, 0x4
        jmp L_loop
L_done:
        call ext_00594000
        lea ecx, [eax + 0x258]
        call ext_00493EE0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x004D01C0] sub_004D01C0 (155 bytes)
extern "C" void ext_006A6C99();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004D01C0(void* self) {
    __asm {
        push -1
        push 0x88ca07
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [mem_00924FE8]
        mov eax, 1
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x8], eax
        mov byte ptr [esi + 0xc], al
        mov eax, dword ptr [mem_00924FF4]
        push eax
        push ecx
        push 4
        push 0x1c
        lea edx, [esi + 0x18]
        xor ebx, ebx
        mov dword ptr [esi + 0x4], ebx
        push edx
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esi + 0x10], 0x140
        mov dword ptr [esi + 0x14], 0xf0
        call ext_006A6C99
        push 0x504a70
        push 0x4d0010
        push 7
        push 0x54
        lea eax, [esi + 0x90]
        push eax
        mov dword ptr [esp + 0x28], ebx
        mov byte ptr [esi + 0x8c], bl
        mov byte ptr [esi + 0x8d], bl
        call ext_006A6C99
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x88], ebx
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004D3940] sub_004D3940 (103 bytes)
extern "C" void ext_00593710();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004D3940(void* self, int edx_unused, void* a1) {
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
        mov dword ptr [esp + 0x30], 0x0
        call dword ptr [mem_00924FE0]
        call ext_00593710
        add esp, 0x1c
        lea ecx, [esp + 0x18]
        mov dword ptr [esi + 0x394], eax
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x10
        ret 0x1c
    }
}

// [0x004DE180] sub_004DE180 (48 bytes)
extern "C" void ext_004C46D0();
extern "C" void ext_00594000();
extern "C" void ext_006A6DE0();
extern "C" __declspec(naked) void __fastcall fn_004DE180(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        call ext_00594000
        fld dword ptr [eax + 0x234]
        lea ecx, [esi + 0x18c]
        fstp dword ptr [esp + 0x4]
        call ext_004C46D0
        fmul dword ptr [esp + 0x4]
        call ext_006A6DE0
        mov dword ptr [esi + 0x9d0], eax
        pop esi
        pop ecx
        ret
    }
}

// [0x004D0050] sub_004D0050 (166 bytes)
extern "C" int mem_00924EA8;

extern "C" __declspec(naked) void __fastcall fn_004D0050(void* self) {
    __asm {
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        mov esi, ecx
        push edi
        mov byte ptr [esi + 0x8d], bl
        mov dword ptr [esi], 0x1
        mov dword ptr [esi + 0x4], ebx
        mov byte ptr [esi + 0xc], 0x1
        mov dword ptr [esi + 0x8], 0x1
        mov dword ptr [esi + 0x10], 0x140
        mov dword ptr [esi + 0x14], 0xf0
        mov byte ptr [esi + 0x8c], bl
        xor edi, edi
        lea ebp, [esi + 0x18]
        jmp short loop1_body
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
loop1_body:
        mov ecx, ebp
        mov byte ptr [esi + edi + 0x88], bl
        call dword ptr [mem_00924EA8]
        add edi, 0x1
        add ebp, 0x1c
loop1_cond:
        cmp edi, 0x4
        jl loop1_body
        add esi, 0xb0
        mov edi, 0x7
loop2_body:
        lea ecx, [esi - 0x20]
        call dword ptr [mem_00924EA8]
        fldz
        fst dword ptr [esi + 0x4]
        fst dword ptr [esi]
        fst dword ptr [esi - 0x4]
        fst dword ptr [esi + 0x14]
        fst dword ptr [esi + 0x10]
        fst dword ptr [esi + 0xc]
        fst dword ptr [esi + 0x8]
        fst dword ptr [esi + 0x24]
        fst dword ptr [esi + 0x20]
        fst dword ptr [esi + 0x1c]
        fst dword ptr [esi + 0x18]
        fst dword ptr [esi + 0x30]
        fst dword ptr [esi + 0x2c]
        fstp dword ptr [esi + 0x28]
        add esi, 0x54
        sub edi, 0x1
        jne loop2_body
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004D1F00] sub_004D1F00 (186 bytes)
extern "C" void __fastcall ext_0059DCA0(void* self, float v);
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_004D1F00(void* self) {
    __asm {
        sub esp, 0x40
        push ebx
        mov ebx, ecx
        fld dword ptr [ebx + 0x1c]
        fadd dword ptr [ebx + 0x18]
        fstp dword ptr [ebx + 0x18]
        fldz
        fcom dword ptr [ebx + 0x18]
        fnstsw ax
        test ah, 0x41
        jne L_4D1F20
        fstp dword ptr [ebx + 0x18]
        jmp L_4D1F35
L_4D1F20:
        fstp st(0)
        fld1
        fcom dword ptr [ebx + 0x18]
        fnstsw ax
        test ah, 0x5
        jp L_4D1F33
        fstp dword ptr [ebx + 0x18]
        jmp L_4D1F35
L_4D1F33:
        fstp st(0)
L_4D1F35:
        fld dword ptr [ebx + 0x18]
        push esi
        push edi
        push ecx
        mov ecx, dword ptr [ebx]
        fstp dword ptr [esp]
        call ext_0059DCA0
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 0x38c]
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0x14]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [mem_00B40640]
        push eax
        call edx
        mov esi, eax
        mov eax, dword ptr [ebx + 0x1d0]
        test eax, eax
        mov ecx, 0x10
        lea edi, [esp + 0xc]
        rep movsd
        pop edi
        pop esi
        je L_4D1F92
        mov eax, dword ptr [eax + 0x234]
        test eax, eax
        je L_4D1F92
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xac]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, eax
        call edx
L_4D1F92:
        mov ebx, dword ptr [ebx + 0x1cc]
        test ebx, ebx
        je L_4D1FB5
        mov ecx, dword ptr [ebx + 0x234]
        test ecx, ecx
        je L_4D1FB5
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xac]
        lea edx, [esp + 0x4]
        push edx
        call eax
L_4D1FB5:
        pop ebx
        add esp, 0x40
        ret
    }
}

// [0x004D8C30] sub_004D8C30 (313 bytes)
extern "C" void ext_004D4160();
extern "C" void ext_00665010();
extern "C" int mem_00924FE0;
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) int __fastcall fn_004D8C30(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        mov eax, fs:[0]
        push 0x8b2ae2
        push eax
        mov fs:[0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        xor ebx, ebx
        xor edi, edi
        call ext_004D4160
        test eax, eax
        jle L_d1e
        xor ebp, ebp
    L_c61:
        mov eax, dword ptr [esp + 0x58]
        push eax
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x2c]
        push ecx
        mov dword ptr [esp + 0x54], ebx
        call ext_00665010
        mov eax, dword ptr [esi + 0x448]
        add esp, 4
        cmp eax, ebx
        je L_inv
        mov ecx, dword ptr [esi + 0x44c]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L_cb0
    L_inv:
        call dword ptr [mem_00925134]
    L_cb0:
        mov eax, dword ptr [esi + 0x448]
        add eax, ebp
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE0]
        lea edx, [esp + 0x10]
        push edx
        mov byte ptr [esp + 0x54], 1
        call ext_00665010
        lea eax, [esp + 0x30]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        call dword ptr [mem_00924FC4]
        add esp, 0xc
        test al, al
        mov byte ptr [esp + 0x50], bl
        lea ecx, [esp + 0x10]
        jne L_d3a
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x50], -1
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        add edi, 1
        add ebp, 0x1c
        call ext_004D4160
        cmp edi, eax
        jl L_c61
    L_d1e:
        mov ecx, esi
        call ext_004D4160
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 0x38]
        mov fs:[0], ecx
        add esp, 0x44
        ret 4
    L_d3a:
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x50], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x48]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x44
        ret 4
    }
}

// [0x004D8D70] sub_004D8D70 (313 bytes)
extern "C" void ext_004D4190();
extern "C" void ext_00665010();
extern "C" int mem_00924FE0;
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) int __fastcall fn_004D8D70(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        mov eax, fs:[0]
        push 0x8b2ae2
        push eax
        mov fs:[0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        xor ebx, ebx
        xor edi, edi
        call ext_004D4190
        test eax, eax
        jle d70_end
        xor ebp, ebp
    d70_loop:
        mov eax, dword ptr [esp + 0x58]
        push eax
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x2c]
        push ecx
        mov dword ptr [esp + 0x54], ebx
        call ext_00665010
        mov eax, dword ptr [esi + 0x458]
        add esp, 4
        cmp eax, ebx
        je d70_inv
        mov ecx, dword ptr [esi + 0x45c]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb d70_ok
    d70_inv:
        call dword ptr [mem_00925134]
    d70_ok:
        mov eax, dword ptr [esi + 0x458]
        add eax, ebp
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE0]
        lea edx, [esp + 0x10]
        push edx
        mov byte ptr [esp + 0x54], 1
        call ext_00665010
        lea eax, [esp + 0x30]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        call dword ptr [mem_00924FC4]
        add esp, 0xc
        test al, al
        mov byte ptr [esp + 0x50], bl
        lea ecx, [esp + 0x10]
        jne d70_neq
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x50], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        add edi, 1
        add ebp, 0x1c
        call ext_004D4190
        cmp edi, eax
        jl d70_loop
    d70_end:
        mov ecx, esi
        call ext_004D4190
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 0x38]
        mov fs:[0], ecx
        add esp, 0x44
        ret 4
    d70_neq:
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x50], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x48]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x44
        ret 4
    }
}

// [0x004D0360] sub_004D0360 (459 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0067EFD0();
extern "C" void ext_0067F080();
extern "C" int mem_00924EA8;
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F1B0;
extern "C" int mem_00A9F054;
extern "C" int mem_00A9F37C;
extern "C" int mem_00A9EE44;

extern "C" __declspec(naked) void __fastcall fn_004D0360(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x10
        push esi
        push edi
        mov esi, ecx
        call dword ptr [mem_00924EA8]
        fldz
        mov edi, dword ptr [esp + 0x1c]
        fst dword ptr [esi + 0x24]
        fst dword ptr [esi + 0x20]
        mov ecx, edi
        fst dword ptr [esi + 0x1c]
        fst dword ptr [esi + 0x34]
        fst dword ptr [esi + 0x30]
        fst dword ptr [esi + 0x2c]
        fst dword ptr [esi + 0x28]
        fst dword ptr [esi + 0x44]
        fst dword ptr [esi + 0x40]
        fst dword ptr [esi + 0x3c]
        fst dword ptr [esi + 0x38]
        fst dword ptr [esi + 0x50]
        fst dword ptr [esi + 0x4c]
        fstp dword ptr [esi + 0x48]
        mov eax, dword ptr [mem_00A9F838]
        push eax
        call ext_0063EFE0
        push eax
        push esi
        call ext_004275E0
        mov ecx, dword ptr [mem_00A9F1B0]
        add esp, 8
        push 1
        push 0
        push ecx
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_3e9
        cmp eax, 0xb53b30
        je L_3e9
        cmp eax, 0xb53ab0
        je L_3e9
        cmp eax, 0xb53a70
        je L_3e9
        cmp eax, 0xb53af0
        jne L_3ee
    L_3e9:
        mov eax, 0xb53b30
    L_3ee:
        push eax
        lea edx, [esp + 0xc]
        push edx
        call ext_0067EFD0
        fld dword ptr [eax]
        fstp dword ptr [esi + 0x1c]
        add esp, 8
        fld dword ptr [eax + 4]
        push 1
        fstp dword ptr [esi + 0x20]
        push 0
        fld dword ptr [eax + 8]
        mov ecx, edi
        fstp dword ptr [esi + 0x24]
        mov eax, dword ptr [mem_00A9F054]
        push eax
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_441
        cmp eax, 0xb53b30
        je L_441
        cmp eax, 0xb53ab0
        je L_441
        cmp eax, 0xb53a70
        je L_441
        cmp eax, 0xb53af0
        jne L_446
    L_441:
        mov eax, 0xb53b30
    L_446:
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        call ext_0067F080
        fld dword ptr [eax]
        fstp dword ptr [esi + 0x28]
        add esp, 8
        fld dword ptr [eax + 4]
        push 1
        fstp dword ptr [esi + 0x2c]
        push 0
        fld dword ptr [eax + 8]
        mov ecx, edi
        fstp dword ptr [esi + 0x30]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esi + 0x34]
        mov edx, dword ptr [mem_00A9F37C]
        push edx
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_4a0
        cmp eax, 0xb53b30
        je L_4a0
        cmp eax, 0xb53ab0
        je L_4a0
        cmp eax, 0xb53a70
        je L_4a0
        cmp eax, 0xb53af0
        jne L_4a5
    L_4a0:
        mov eax, 0xb53b30
    L_4a5:
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_0067F080
        fld dword ptr [eax]
        fstp dword ptr [esi + 0x38]
        add esp, 8
        fld dword ptr [eax + 4]
        push 1
        fstp dword ptr [esi + 0x3c]
        push 0
        fld dword ptr [eax + 8]
        fstp dword ptr [esi + 0x40]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esi + 0x44]
        mov ecx, dword ptr [mem_00A9EE44]
        push ecx
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_4ff
        cmp eax, 0xb53b30
        je L_4ff
        cmp eax, 0xb53ab0
        je L_4ff
        cmp eax, 0xb53a70
        je L_4ff
        cmp eax, 0xb53af0
        jne L_504
    L_4ff:
        mov eax, 0xb53b30
    L_504:
        push eax
        lea edx, [esp + 0xc]
        push edx
        call ext_0067EFD0
        fld dword ptr [eax]
        fstp dword ptr [esi + 0x48]
        add esp, 8
        fld dword ptr [eax + 4]
        pop edi
        fstp dword ptr [esi + 0x4c]
        fld dword ptr [eax + 8]
        fstp dword ptr [esi + 0x50]
        pop esi
        add esp, 0x10
        ret 4
    }
}

extern "C" void ext_005ABD70();
extern "C" void ext_0066A310();
extern "C" int mem_0088CC56;
extern "C" int mem_0093F004;
extern "C" int mem_0093EFBC;
extern "C" int mem_0093EF7C;
extern "C" int mem_0093EF2C;
extern "C" int mem_0093EF18;

// [0x004D2BE0] sub_004D2BE0 (138 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004D2BE0(void* self) {
    __asm {
        push -1
        push offset mem_0088CC56
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr [esp + 0x0C], esi
        mov dword ptr [esi + 0x0C], ebx
        mov dword ptr [esi + 0x10], ebx
        mov dword ptr [esi + 0x14], ebx
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x18], ebx
        call ext_0066A310
        lea edi, [esi + 0x38]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 1
        call ext_005ABD70
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [edi], offset mem_0093F004
        mov dword ptr [edi + 0x04], offset mem_0093EFBC
        mov dword ptr [edi + 0x08], offset mem_0093EF7C
        mov dword ptr [edi + 0x0C], offset mem_0093EF2C
        mov dword ptr [edi + 0x150], offset mem_0093EF18
        mov dword ptr [esi + 0x1CC], ebx
        mov dword ptr [esi + 0x1D0], ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" int mem_0088D1B8;
extern "C" int mem_009498AC;
extern "C" int mem_00949864;
extern "C" int mem_00949824;
extern "C" int mem_009497D4;
extern "C" int mem_009497C0;

// [0x004D9DF0] sub_004D9DF0 (338 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004D9DF0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push offset mem_0088D1B8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr [esp + 0x0c], esi
        mov dword ptr [esi + 0x04], ebx
        mov dword ptr [esi + 0x08], ebx
        mov dword ptr [esi + 0x0c], ebx
        lea edi, [esi + 0x10]
        mov ecx, edi
        mov dword ptr [esp + 0x18], ebx
        call ext_005ABD70
        fld1
        mov dword ptr [edi], offset mem_009498AC
        mov dword ptr [edi + 0x04], offset mem_00949864
        mov dword ptr [edi + 0x08], offset mem_00949824
        mov dword ptr [edi + 0x0c], offset mem_009497D4
        mov dword ptr [edi + 0x150], offset mem_009497C0
        fst dword ptr [esi + 0x1a4]
        fldz
        mov ecx, dword ptr [esp + 0x24]
        fst dword ptr [esi + 0x1a8]
        mov dl, byte ptr [esp + 0x28]
        fst dword ptr [esi + 0x1ac]
        mov eax, 1
        fst dword ptr [esi + 0x1b0]
        pop edi
        fst dword ptr [esi + 0x1b4]
        fst dword ptr [esi + 0x1bc]
        fst dword ptr [esi + 0x1c0]
        fst dword ptr [esi + 0x1c4]
        fst dword ptr [esi + 0x1c8]
        fst dword ptr [esi + 0x1d0]
        fst dword ptr [esi + 0x1d4]
        fst dword ptr [esi + 0x1d8]
        fstp dword ptr [esi + 0x1dc]
        fst dword ptr [esi + 0x1b8]
        fst dword ptr [esi + 0x1cc]
        fst dword ptr [esi + 0x1e0]
        mov byte ptr [esi + 0x1fa], al
        mov dword ptr [esi + 0x200], eax
        fst dword ptr [esi + 0x1e4]
        mov eax, dword ptr [esp + 0x1c]
        fstp dword ptr [esi + 0x1e8]
        mov dword ptr [esi + 0x204], eax
        mov dword ptr [esi + 0x1ec], ebx
        mov dword ptr [esi + 0x1f4], ebx
        mov byte ptr [esi + 0x1f8], bl
        mov byte ptr [esi + 0x1f9], bl
        mov byte ptr [esi + 0x1fb], bl
        mov byte ptr [esi + 0x1fc], bl
        mov dword ptr [esi + 0x208], ecx
        mov ecx, dword ptr [esp + 0x0c]
        mov dword ptr [esi + 0x20c], ebx
        mov byte ptr [esi + 0x211], bl
        mov dword ptr [esi + 0x214], ebx
        mov dword ptr [esi + 0x1f0], 0x14
        mov byte ptr [esi + 0x210], dl
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x004D0760] sub_004D0760 (881 bytes)
extern "C" void ext_004D0050();
extern "C" void ext_004D0260();
extern "C" void ext_004D0360();
extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_00427A60();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9FAD0;
extern "C" int mem_00A9F73C;
extern "C" int mem_00A9F68C;
extern "C" int mem_00A9ED8C;
extern "C" int mem_00A9F3D8;
extern "C" int mem_00A9F444;
extern "C" int mem_00A9F53C;
extern "C" int mem_00A9F540;
extern "C" int mem_00A9F544;
extern "C" int mem_00A9F548;
extern "C" int mem_00A9F410;
extern "C" int mem_00925134;
extern "C" int mem_00A9ED7C;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void __fastcall fn_004D0760(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 18h
        push ebx
        push esi
        mov esi, ecx
        call ext_004D0050
        mov ebx, dword ptr [esp + 24h]
        cmp ebx, 0B53A34h
        je L_early
        cmp ebx, 0B53B30h
        je L_early
        cmp ebx, 0B53AB0h
        je L_early
        cmp ebx, 0B53A70h
        je L_early
        cmp ebx, 0B53AF0h
        jne L_main
L_early:
        mov byte ptr [esi + 8Dh], 0
        pop esi
        pop ebx
        add esp, 18h
        ret 4
L_main:
        mov eax, dword ptr [mem_00A9FAD0]
        push eax
        mov ecx, ebx
        call ext_0063EFE0
        lea ecx, [esp + 24h]
        push ecx
        push esi
        mov dword ptr [esp + 2Ch], eax
        call ext_0053F5F0
        mov edx, dword ptr [mem_00A9F73C]
        add esp, 8
        push edx
        mov ecx, ebx
        call ext_0063EFE0
        mov dword ptr [esp + 24h], eax
        lea eax, [esp + 24h]
        push eax
        lea ecx, [esi + 0Ch]
        push ecx
        call ext_00427640
        mov edx, dword ptr [mem_00A9F68C]
        add esp, 8
        push edx
        mov ecx, ebx
        call ext_0063EFE0
        mov dword ptr [esp + 24h], eax
        lea eax, [esp + 24h]
        push eax
        lea ecx, [esi + 8]
        push ecx
        call ext_0053F5F0
        mov edx, dword ptr [mem_00A9ED8C]
        add esp, 8
        push 1
        push 0
        push edx
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0B53A34h
        je L_b1
        cmp eax, 0B53B30h
        je L_b1
        cmp eax, 0B53AB0h
        je L_b1
        cmp eax, 0B53A70h
        je L_b1
        cmp eax, 0B53AF0h
        jne L_b2
L_b1:
        mov eax, 0B53B30h
L_b2:
        push ebp
        push edi
        push eax
        lea ecx, [esi + 10h]
        call ext_004D0260
        mov eax, dword ptr [mem_00A9F3D8]
        push 1
        push 0
        push eax
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0B53A34h
        je L_c1
        cmp eax, 0B53B30h
        je L_c1
        cmp eax, 0B53AB0h
        je L_c1
        cmp eax, 0B53A70h
        je L_c1
        cmp eax, 0B53AF0h
        jne L_c2
L_c1:
        mov edi, 0B53B30h
        jmp L_c3
L_c2:
        mov edi, eax
L_c3:
        mov ecx, dword ptr [mem_00A9F444]
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        lea edx, [esp + 2Ch]
        mov dword ptr [esp + 2Ch], eax
        push edx
        lea eax, [esi + 4]
        push eax
        call ext_0053F5F0
        mov ecx, dword ptr [mem_00A9F53C]
        add esp, 8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea edx, [esi + 18h]
        push edx
        call ext_004275E0
        mov eax, dword ptr [mem_00A9F540]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esi + 34h]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F544]
        add esp, 8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea eax, [esi + 50h]
        push eax
        call ext_004275E0
        mov ecx, dword ptr [mem_00A9F548]
        add esp, 8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea edx, [esi + 6Ch]
        push edx
        call ext_004275E0
        mov eax, dword ptr [mem_00A9F410]
        add esp, 8
        push 1
        push 0
        push eax
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0B53A34h
        je L_d1
        cmp eax, 0B53B30h
        je L_d1
        cmp eax, 0B53AB0h
        je L_d1
        cmp eax, 0B53A70h
        je L_d1
        cmp eax, 0B53AF0h
        jne L_d2
L_d1:
        mov edi, 0B53B30h
        jmp L_d3
L_d2:
        mov edi, eax
L_d3:
        mov ecx, dword ptr [mem_00A9F53C]
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        lea edx, [esp + 2Ch]
        mov dword ptr [esp + 2Ch], eax
        push edx
        lea eax, [esi + 88h]
        push eax
        call ext_00427640
        mov ecx, dword ptr [mem_00A9F540]
        add esp, 8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        lea edx, [esp + 2Ch]
        mov dword ptr [esp + 2Ch], eax
        push edx
        lea eax, [esi + 89h]
        push eax
        call ext_00427640
        mov ecx, dword ptr [mem_00A9F544]
        add esp, 8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        lea edx, [esp + 2Ch]
        mov dword ptr [esp + 2Ch], eax
        push edx
        lea eax, [esi + 8Ah]
        push eax
        call ext_00427640
        mov ecx, dword ptr [mem_00A9F548]
        add esp, 8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        lea edx, [esp + 2Ch]
        mov dword ptr [esp + 2Ch], eax
        push edx
        lea eax, [esi + 8Bh]
        push eax
        call ext_00427640
        mov ebp, dword ptr [mem_00925134]
        lea edi, [ebx + 24h]
        mov ebx, dword ptr [edi + 4]
        add esp, 8
        cmp ebx, dword ptr [edi + 8]
        jbe L_e1
        call ebp
L_e1:
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 18h], ebx
        call ext_00427A60
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe L_e2
        call ebp
L_e2:
        lea ecx, [esp + 1Ch]
        mov dword ptr [esp + 1Ch], edi
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esp + 24h], ebx
        call ext_00427A60
        lea ecx, [esi + 90h]
        mov dword ptr [esp + 2Ch], ecx
L_loop:
        mov ebx, dword ptr [esp + 14h]
        test ebx, ebx
        je L_e3
        cmp ebx, dword ptr [esp + 20h]
        je L_e4
L_e3:
        call ebp
L_e4:
        mov edi, dword ptr [esp + 18h]
        cmp edi, dword ptr [esp + 24h]
        jae L_done
        test ebx, ebx
        jne L_e5
        call ebp
L_e5:
        cmp edi, dword ptr [ebx + 8]
        jb L_e6
        call ebp
L_e6:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [mem_00A9ED7C]
        push edx
        add eax, 4
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je L_e7
        mov ebp, dword ptr [esp + 2Ch]
        add dword ptr [esp + 2Ch], 54h
        cmp edi, dword ptr [ebx + 8]
        jb L_e8
        call dword ptr [mem_00925134]
L_e8:
        mov eax, dword ptr [edi]
        push eax
        mov ecx, ebp
        call ext_004D0360
        mov ebp, dword ptr [mem_00925134]
L_e7:
        cmp edi, dword ptr [ebx + 8]
        jb L_e9
        call ebp
L_e9:
        add edi, 4
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 18h], edi
        call ext_00427A60
        jmp L_loop
L_done:
        pop edi
        pop ebp
        mov byte ptr [esi + 8Dh], 1
        pop esi
        pop ebx
        add esp, 18h
        ret 4
    }
}

// [0x004DE330] sub_004DE330 (55 bytes)
extern "C" void ext_0067E990();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_004DE330(void* self, int edx_unused, const int* src) {
    __asm {
        push ebx
        mov eax, ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        lea ebx, [eax + 0x38]
        push edi
        mov ecx, 0x10
        mov edi, ebx
        rep movsd
        mov eax, dword ptr [eax + 0x30]
        mov edx, dword ptr [mem_00B40640]
        lea ecx, [eax + 0x8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x14]
        push edx
        call eax
        push eax
        mov ecx, ebx
        call ext_0067E990
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x004D9D70] sub_004D9D70 (36 bytes)
extern "C" void ext_004D9780();

extern "C" __declspec(naked) void __fastcall fn_004D9D70(void* self, int edx_unused, int a1) {
    __asm {
        cmp byte ptr [ecx + 0x210], 0x0
        je done
        mov eax, dword ptr [ecx + 0x214]
        add eax, 0x160
        je done
        mov edx, dword ptr [esp + 0x4]
        push edx
        push eax
        call ext_004D9780
    done:
        ret 0x4
    }
}

// [0x004D3A10] sub_004D3A10 (37 bytes)
extern "C" void ext_005937B0();
extern "C" __declspec(naked) void __fastcall fn_004D3A10(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x394]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        mov dword ptr [esp + 0xc], 0
        call ext_005937B0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x004DA060] sub_004DA060 (40 bytes)
extern "C" void ext_004D9BC0();
extern "C" void ext_004D9C60();
extern "C" void ext_004D9F50();

extern "C" __declspec(naked) void __fastcall fn_004DA060(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x211], 0
        je done
        call ext_004D9F50
        mov ecx, esi
        call ext_004D9C60
        mov ecx, esi
        call ext_004D9BC0
        mov byte ptr [esi + 0x211], 0
done:
        pop esi
        ret
    }
}

// [0x004DA090] sub_004DA090 (226 bytes)
extern "C" void ext_004DA060();
extern "C" void ext_0050BE20();
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_004DA090(void* self) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        call ext_004DA060
        mov ecx, esi
        call ext_0050BE20
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0x8], edi
        call ext_0065C640
        mov eax, dword ptr [esi + 0x10]
        mov edx, dword ptr [eax + 0x84]
        lea ecx, [esi + 0x10]
        mov dword ptr [esp + 0x14], 0
        call edx
        fld1
        fst dword ptr [esi + 0x1a4]
        mov ecx, edi
        fldz
        mov dword ptr [esp + 0x14], -1
        fst dword ptr [esi + 0x1a8]
        fst dword ptr [esi + 0x1ac]
        fst dword ptr [esi + 0x1b0]
        fst dword ptr [esi + 0x1b4]
        fst dword ptr [esi + 0x1bc]
        fst dword ptr [esi + 0x1c0]
        fst dword ptr [esi + 0x1c4]
        fst dword ptr [esi + 0x1c8]
        fst dword ptr [esi + 0x1d0]
        fst dword ptr [esi + 0x1d4]
        fst dword ptr [esi + 0x1d8]
        fstp dword ptr [esi + 0x1dc]
        fst dword ptr [esi + 0x1b8]
        fst dword ptr [esi + 0x1cc]
        fstp dword ptr [esi + 0x1e0]
        call ext_0065C650
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004DA2B0] sub_004DA2B0 (86 bytes)
extern "C" void ext_00495250();
extern "C" void ext_004DA090();
extern "C" void ext_006246B0();
extern "C" __declspec(naked) void __fastcall fn_004DA2B0(void* self) {
    __asm {
        push -1
        push 0x88d203
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esp + 0x10], 1
        call ext_004DA090
        lea ecx, [esi + 0x10]
        mov byte ptr [esp + 0x10], 0
        call ext_00495250
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006246B0
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004DADE0] sub_004DADE0 (309 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00495250();
extern "C" void ext_004C2330();
extern "C" void ext_004DA2B0();
extern "C" void ext_004ED6B0();
extern "C" void ext_005B1870();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004DADE0(void* self) {
    __asm {
        push -1
        push 0x88d34a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x949b0c
        mov dword ptr [esi + 0x4], 0x949ac4
        mov dword ptr [esi + 0x8], 0x949a84
        mov dword ptr [esi + 0xc], 0x949a34
        mov dword ptr [esi + 0x150], 0x949a20
        mov dword ptr [esi + 0x154], 0x949a10
        mov dword ptr [esi + 0x158], 0x9499e4
        mov dword ptr [esi + 0x180], 0x9499dc
        mov dword ptr [esi + 0x184], 0x9499d0
        lea ecx, [esi + 0x454]
        mov dword ptr [esp + 0x18], 7
        call ext_004026E0
        lea ecx, [esi + 0x444]
        mov byte ptr [esp + 0x18], 6
        call ext_004026E0
        lea ecx, [esi + 0x3e8]
        mov byte ptr [esp + 0x18], 5
        call ext_004ED6B0
        lea ecx, [esi + 0x398]
        mov byte ptr [esp + 0x18], 4
        call ext_004ED6B0
        lea ecx, [esi + 0x348]
        mov byte ptr [esp + 0x18], 3
        call ext_005B1870
        mov eax, dword ptr [esi + 0x334]
        xor ebx, ebx
        cmp eax, ebx
        je loc_4daeb4
        push eax
        call ext_006A5C5C
        add esp, 4
    loc_4daeb4:
        lea ecx, [esi + 0x19c]
        mov dword ptr [esi + 0x334], ebx
        mov dword ptr [esi + 0x338], ebx
        mov dword ptr [esi + 0x33c], ebx
        mov byte ptr [esp + 0x18], 1
        call ext_00495250
        mov edi, dword ptr [esi + 0x18c]
        cmp edi, ebx
        mov byte ptr [esp + 0x18], bl
        je loc_4daef4
        mov ecx, edi
        call ext_004DA2B0
        push edi
        call ext_006A5C5C
        add esp, 4
    loc_4daef4:
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_004C2330
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004D26B0] sub_004D26B0 (56 bytes)
extern "C" void ext_005ABA70();
extern "C" __declspec(naked) void* __fastcall fn_004D26B0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005ABA70
        mov dword ptr [esi], 0x93ee24
        mov dword ptr [esi + 4], 0x93eddc
        mov dword ptr [esi + 8], 0x93ed9c
        mov dword ptr [esi + 0xc], 0x93ed4c
        mov dword ptr [esi + 0x150], 0x93ed38
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x004D9880] sub_004D9880 (374 bytes)
extern "C" void ext_00586D00();
extern "C" void ext_00594000();
extern "C" void ext_005A1150();
extern "C" void ext_005A13C0();
extern "C" void ext_005A1600();
extern "C" void ext_005E12D0();
extern "C" void ext_00642690();
extern "C" void ext_006426B0();
extern "C" int mem_00B40640;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004D9880(void* self, int edx_unused, char arg_0) {
    __asm {
        sub esp, 0x40
        cmp byte ptr [esp + 0x44], 0
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr [ebx + 0x214]
        mov eax, dword ptr [ecx + 0x5f4]
        push ebp
        push esi
        push edi
        mov dword ptr [ebx + 0x1f4], eax
        je loc_4d9970
        mov edx, dword ptr [mem_00B40640]
        push edx
        push 0
        call ext_005A1150
        mov eax, dword ptr [ebx + 0x214]
        mov edx, dword ptr [mem_00B40640]
        lea ecx, [eax + 0x164]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        push edx
        call eax
        mov esi, eax
        mov eax, dword ptr [ebx + 0x214]
        mov edx, dword ptr [eax + 0x164]
        mov edx, dword ptr [edx]
        mov ecx, 0x10
        lea edi, [esp + 0x10]
        rep movsd
        lea ecx, [eax + 0x164]
        mov eax, dword ptr [ebx + 0x204]
        push eax
        lea eax, [ebx + 0x1a4]
        push eax
        push 0
        call edx
        mov ecx, dword ptr [ebx + 0x214]
        add ecx, 4
        call ext_00586D00
        mov eax, dword ptr [ebx + 0x204]
        mov ecx, dword ptr [ebx + 0x214]
        push eax
        call ext_005A13C0
        mov ecx, dword ptr [ebx + 0x204]
        mov edx, dword ptr [ebx + 0x1f4]
        push ecx
        mov ecx, dword ptr [ebx + 0x214]
        push edx
        call ext_005A1150
        mov ecx, dword ptr [ebx + 0x214]
        call ext_005A1600
        mov ecx, dword ptr [ebx + 0x214]
        mov eax, dword ptr [ecx + 0x164]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0xc]
        add ecx, 0x164
        push edx
        call eax
        mov ecx, 0x10
        lea esi, [esp + 0x10]
        mov edi, eax
        rep movsd
loc_4d9970:
        call ext_00594000
        cmp byte ptr [ebx + 0x1f8], 0
        mov esi, dword ptr [eax + 0xf8]
        jne loc_4d998b
        mov ecx, esi
        call ext_00642690
loc_4d998b:
        cmp byte ptr [ebx + 0x1f9], 0
        jne loc_4d999b
        mov ecx, esi
        call ext_006426B0
loc_4d999b:
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jbe loc_4d99b0
        call ebp
        jmp loc_4d99b0
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
loc_4d99b0:
        mov edi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], edi
        jbe loc_4d99ba
        call ebp
loc_4d99ba:
        test ebx, ebx
        je loc_4d99c2
        cmp ebx, ebx
        je loc_4d99c4
loc_4d99c2:
        call ebp
loc_4d99c4:
        cmp esi, edi
        je loc_4d99ec
        test ebx, ebx
        jne loc_4d99ce
        call ebp
loc_4d99ce:
        cmp esi, dword ptr [ebx + 0x8]
        jb loc_4d99d5
        call ebp
loc_4d99d5:
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je loc_4d99e0
        call ext_005E12D0
loc_4d99e0:
        cmp esi, dword ptr [ebx + 0x8]
        jb loc_4d99e7
        call ebp
loc_4d99e7:
        add esi, 4
        jmp loc_4d99b0
loc_4d99ec:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 4
    }
}

// [0x004D95C0] sub_004D95C0 (436 bytes)
extern "C" void ext_00586D00();
extern "C" void ext_0067E820();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004D95C0(void* self) {
    __asm {
        sub     esp, 0x80
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        lea     ecx, [ebp + 0x10]
        call    ext_00586D00
        mov     ebx, dword ptr [ebp + 0x4]
        cmp     ebx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [mem_00925134]
        jbe     short loc_4d95e4
        call    edi
loc_4d95e4:
        fld1
        fldz
        jmp     short loc_4d95ec
loc_4d95ea:
        fxch    st(1)
loc_4d95ec:
        mov     esi, dword ptr [ebp + 0x8]
        cmp     dword ptr [ebp + 0x4], esi
        jbe     short loc_4d95fe
        fstp    st(0)
        fstp    st(0)
        call    edi
        fld1
        fldz
loc_4d95fe:
        test    ebp, ebp
        je      short loc_4d9606
        cmp     ebp, ebp
        je      short loc_4d9610
loc_4d9606:
        fstp    st(0)
        fstp    st(0)
        call    edi
        fld1
        fldz
loc_4d9610:
        cmp     ebx, esi
        je      loc_4d9765
        cmp     dword ptr [ebp + 0x200], 1
        fxch    st(1)
        fst     dword ptr [esp + 0x10]
        fst     dword ptr [esp + 0x24]
        fst     dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x4c]
        fst     dword ptr [esp + 0x14]
        fst     dword ptr [esp + 0x18]
        fst     dword ptr [esp + 0x1c]
        fst     dword ptr [esp + 0x20]
        fst     dword ptr [esp + 0x28]
        fst     dword ptr [esp + 0x2c]
        fst     dword ptr [esp + 0x30]
        fst     dword ptr [esp + 0x34]
        fst     dword ptr [esp + 0x3c]
        fst     dword ptr [esp + 0x40]
        fst     dword ptr [esp + 0x44]
        fstp    dword ptr [esp + 0x48]
        jne     short loc_4d96ca
        test    ebp, ebp
        jne     short loc_4d9669
        call    edi
loc_4d9669:
        cmp     ebx, dword ptr [ebp + 0x8]
        jb      short loc_4d9670
        call    edi
loc_4d9670:
        mov     eax, dword ptr [ebx]
        mov     edx, dword ptr [ebp + 0x208]
        lea     ecx, [eax + 0x4]
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x10]
        push    edx
        push    1
        lea     edx, [esp + 0x58]
        push    edx
        call    eax
        cmp     ebx, dword ptr [ebp + 0x8]
        mov     ecx, 0x10
        mov     esi, eax
        lea     edi, [esp + 0x10]
        rep     movsd
        mov     edi, dword ptr [mem_00925134]
        jb      short loc_4d96a4
        call    edi
loc_4d96a4:
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [ecx + 0x18c]
        mov     edx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [edx + 0x14]
        lea     ecx, [eax + 0x8]
        mov     eax, dword ptr [ebp + 0x204]
        push    eax
        call    edx
        push    eax
        lea     ecx, [esp + 0x14]
        call    ext_0067E820
        jmp     short loc_4d96fd
loc_4d96ca:
        test    ebp, ebp
        jne     short loc_4d96d0
        call    edi
loc_4d96d0:
        cmp     ebx, dword ptr [ebp + 0x8]
        jb      short loc_4d96d7
        call    edi
loc_4d96d7:
        mov     eax, dword ptr [ebx]
        mov     edx, dword ptr [ebp + 0x208]
        lea     ecx, [eax + 0x4]
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x14]
        push    edx
        call    eax
        mov     ecx, 0x10
        mov     esi, eax
        lea     edi, [esp + 0x10]
        rep     movsd
        mov     edi, dword ptr [mem_00925134]
loc_4d96fd:
        cmp     ebx, dword ptr [ebp + 0x8]
        jb      short loc_4d9704
        call    edi
loc_4d9704:
        mov     ecx, dword ptr [ebx]
        mov     ecx, dword ptr [ecx + 0x234]
        test    ecx, ecx
        je      short loc_4d971f
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0xac]
        lea     eax, [esp + 0x10]
        push    eax
        call    edx
loc_4d971f:
        cmp     byte ptr [ebp + 0x211], 0
        jne     short loc_4d974c
        mov     esi, dword ptr [ebp + 0x4]
        cmp     esi, dword ptr [ebp + 0x8]
        jbe     short loc_4d9732
        call    edi
loc_4d9732:
        cmp     ebp, ebp
        je      short loc_4d9738
        call    edi
loc_4d9738:
        cmp     ebx, esi
        jne     short loc_4d974c
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [ebp + 0x1a4]
        call    ext_0067E820
loc_4d974c:
        cmp     ebx, dword ptr [ebp + 0x8]
        jb      short loc_4d9753
        call    edi
loc_4d9753:
        fldz
        mov     edi, dword ptr [mem_00925134]
        fld1
        add     ebx, 4
        jmp     loc_4d95ea
loc_4d9765:
        pop     edi
        fstp    st(0)
        pop     esi
        fstp    st(0)
        pop     ebp
        pop     ebx
        add     esp, 0x80
        ret
    }
}

// [0x004D3A40] sub_004D3A40 (231 bytes)
extern "C" void ext_004EE590();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004D3A40(void* self) {
    __asm {
        push    -1
        push    0x877622
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        push    esi
        push    edi
        mov     esi, ecx
        push    0x94834c
        lea     ecx, [esp + 0xc]
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esi + 0x3b4]
        mov     dword ptr [esp + 0x4c], 0
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x48], -1
        call    dword ptr [mem_00924FF4]
        lea     edi, [esi + 0x180]
        push    0xae6004
        lea     ecx, [esi + 0x398]
        mov     dword ptr [esi + 0x3d0], 1
        mov     dword ptr [esi + 0x3e4], edi
        call    ext_004EE590
        push    0x948338
        lea     ecx, [esp + 0x28]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esi + 0x404]
        mov     dword ptr [esp + 0x4c], 1
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x48], -1
        call    dword ptr [mem_00924FF4]
        push    0xae6154
        lea     ecx, [esi + 0x3e8]
        mov     dword ptr [esi + 0x420], 1
        mov     dword ptr [esi + 0x434], edi
        call    ext_004EE590
        mov     ecx, dword ptr [esp + 0x40]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret
    }
}

// [0x004D3E40] sub_004D3E40 (388 bytes)
extern "C" void ext_0041CCC0();
extern "C" void ext_004EE590();
extern "C" int mem_00924FB0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924EA8;
extern "C" int mem_00AE6154;
extern "C" int mem_00AE6004;

extern "C" __declspec(naked) void __fastcall fn_004D3E40(void* self) {
    __asm {
        push ecx
        push ebx
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x170]
        test eax, eax
        lea ebx, [edi + 0x16c]
        je loc_004D3FC0
        mov ecx, dword ptr [ebx + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x2
        jne loc_004D3FC0
        mov eax, dword ptr [edi + 0x400]
        mov edx, dword ptr [eax + 0x8]
        push ebp
        push esi
        lea esi, [edi + 0x400]
        mov ecx, esi
        call edx
        mov edx, dword ptr [eax + 0x4]
        test edx, edx
        mov ebp, dword ptr [mem_00924FB0]
        je loc_004D3EFD
        mov ecx, dword ptr [eax + 0x8]
        sub ecx, edx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        je loc_004D3EFD
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x8]
        push offset mem_00AE6154
        push 0x0
        mov ecx, esi
        call eax
        mov ecx, eax
        call ext_0041CCC0
        push eax
        call ebp
        add esp, 0x8
        test al, al
        je loc_004D3EFD
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x8]
        push 0x0
        mov ecx, esi
        call eax
        mov ecx, eax
        call ext_0041CCC0
        push eax
        push 0x0
        mov ecx, ebx
        call ext_0041CCC0
        mov ecx, eax
        call dword ptr [mem_00924FDC]
        jmp loc_004D3F1E

    loc_004D3EFD:
        push 0x0
        mov ecx, ebx
        call ext_0041CCC0
        mov ecx, eax
        call dword ptr [mem_00924EA8]
        push offset mem_00AE6154
        lea ecx, [edi + 0x3e8]
        call ext_004EE590

    loc_004D3F1E:
        mov edx, dword ptr [edi + 0x3b0]
        mov eax, dword ptr [edx + 0x8]
        lea esi, [edi + 0x3b0]
        mov ecx, esi
        call eax
        mov edx, dword ptr [eax + 0x4]
        test edx, edx
        je loc_004D3F9D
        mov ecx, dword ptr [eax + 0x8]
        sub ecx, edx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        je loc_004D3F9D
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x8]
        push offset mem_00AE6004
        push 0x0
        mov ecx, esi
        call eax
        mov ecx, eax
        call ext_0041CCC0
        push eax
        call ebp
        add esp, 0x8
        test al, al
        je loc_004D3F9D
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x8]
        push 0x0
        mov ecx, esi
        call eax
        mov ecx, eax
        call ext_0041CCC0
        push eax
        push 0x1
        mov ecx, ebx
        call ext_0041CCC0
        mov ecx, eax
        call dword ptr [mem_00924FDC]
        pop esi
        pop ebp
        pop edi
        pop ebx
        pop ecx
        ret

    loc_004D3F9D:
        push 0x1
        mov ecx, ebx
        call ext_0041CCC0
        mov ecx, eax
        call dword ptr [mem_00924EA8]
        push offset mem_00AE6004
        lea ecx, [edi + 0x398]
        call ext_004EE590
        pop esi
        pop ebp

    loc_004D3FC0:
        pop edi
        pop ebx
        pop ecx
        ret
    }
}

// [0x004D3FD0] sub_004D3FD0 (142 bytes)
extern "C" void ext_004D3E40();
extern "C" int mem_00925134;
extern "C" int mem_00924FEC;
extern "C" __declspec(naked) void* __fastcall fn_004D3FD0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_004D3E40
        mov eax, dword ptr [esi + 0x170]
        test eax, eax
        mov edi, dword ptr [mem_00925134]
        je L_call1
        mov ecx, dword ptr [esi + 0x174]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        ja L_check1
L_call1:
        call edi
L_check1:
        mov ecx, dword ptr [esi + 0x170]
        add ecx, 0x1c
        call dword ptr [mem_00924FEC]
        test al, al
        je L_notempty
        pop edi
        mov eax, 0xae6004
        pop esi
        ret
L_notempty:
        mov eax, dword ptr [esi + 0x170]
        test eax, eax
        je L_call2
        mov ecx, dword ptr [esi + 0x174]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        ja L_check2
L_call2:
        call edi
L_check2:
        mov eax, dword ptr [esi + 0x170]
        pop edi
        add eax, 0x1c
        pop esi
        ret
    }
}

extern "C" void ext_00495F90();
extern "C" void ext_004D4060();
extern "C" int mem_00924FF4;

// [0x004D42A0] sub_004D42A0 (102 bytes)
extern "C" __declspec(naked) void __fastcall fn_004D42A0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        lea eax, [esp + 0x4]
        push eax
        mov esi, ecx
        call ext_004D4060
        mov ecx, dword ptr [esp + 0x30]
        push ecx
        push eax
        add esi, 0x454
        push esi
        mov dword ptr [esp + 0x34], 0
        call ext_00495F90
        add esp, 0xc
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 4
    }
}

// [0x004D9480] sub_004D9480 (225 bytes)
extern "C" int mem_00A34650;
extern "C" int mem_00A34654;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" void ext_004D42A0();
extern "C" void ext_004D4190();
extern "C" void ext_004D8D70();
extern "C" void ext_004D8C30();

extern "C" __declspec(naked) void __fastcall fn_004D9480(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x877622
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push esi
        push edi
        push eax
        mov esi, ecx
        call ext_004D42A0
        mov ecx, esi
        call ext_004D4190
        mov ecx, dword ptr [esp + 0x50]
        push ecx
        mov ecx, esi
        mov edi, eax
        call ext_004D8D70
        cmp eax, edi
        mov dword ptr [esi + 0x440], eax
        jne skip1
        mov edx, dword ptr [mem_00A34650]
        push edx
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x4c], 0
        call ext_004D8D70
        lea ecx, [esp + 0x8]
        mov dword ptr [esi + 0x440], eax
        mov dword ptr [esp + 0x48], -1
        call dword ptr [mem_00924FF4]
skip1:
        cmp dword ptr [esi + 0x440], edi
        jne end1
        mov ecx, dword ptr [mem_00A34654]
        push ecx
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x24]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x4c], 1
        call ext_004D8C30
        lea ecx, [esp + 0x24]
        mov dword ptr [esi + 0x440], eax
        mov dword ptr [esp + 0x48], -1
        call dword ptr [mem_00924FF4]
end1:
        mov ecx, dword ptr [esp + 0x40]
        mov byte ptr [esi + 0x188], 0
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret 0x8
    }
}

// [0x004DA820] sub_004DA820 (199 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00596660();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" int mem_00A2FB54;
extern "C" int mem_00A2E2F8;

extern "C" __declspec(naked) void __fastcall fn_004DA820(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], esi
        push edi
        mov ebx, ecx
        jbe L_004DA83B
        call dword ptr [mem_00925134]
    L_004DA83B:
        mov edi, dword ptr [ebp + 4]
        cmp edi, dword ptr [ebp + 8]
        jbe L_004DA849
        call dword ptr [mem_00925134]
    L_004DA849:
        push esi
        push ebp
        push edi
        push ebp
        lea eax, [esp + 0x20]
        push eax
        mov ecx, ebp
        call ext_00596660
        mov ebp, dword ptr [esp + 0x1c]
        mov esi, dword ptr [ebp + 4]
        cmp esi, dword ptr [ebp + 8]
        jbe L_004DA870
        call dword ptr [mem_00925134]
        jmp L_004DA870
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_004DA870:
        mov edi, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], edi
        jbe L_004DA87E
        call dword ptr [mem_00925134]
    L_004DA87E:
        cmp esi, edi
        je L_004DA8DD
        cmp esi, dword ptr [ebp + 8]
        jb L_004DA88D
        call dword ptr [mem_00925134]
    L_004DA88D:
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 0x18]
        push 0
        push offset mem_00A2FB54
        push offset mem_00A2E2F8
        push 0
        push 0
        push 0
        push eax
        push esi
        mov ecx, ebx
        call edx
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        mov dword ptr [esp + 0x1c], eax
        je L_004DA8CD
        mov ecx, dword ptr [esp + 0x20]
        lea eax, [esp + 0x1c]
        push eax
        call ext_0041A920
    L_004DA8CD:
        cmp esi, dword ptr [ebp + 8]
        jb L_004DA8D8
        call dword ptr [mem_00925134]
    L_004DA8D8:
        add esi, 0x1c
        jmp L_004DA870
    L_004DA8DD:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xc
    }
}

// [0x004D4550] sub_004D4550 (244 bytes)
extern "C" void ext_004D3E40();
extern "C" void ext_00660A50();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004D4550(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        mov dword ptr [ebp], 0x0
        push edi
        mov esi, ecx
        mov dword ptr [ebx], 0x0
        call ext_004D3E40
        call ext_00660A50
        mov edi, eax
        mov eax, dword ptr [esi + 0x170]
        test eax, eax
        je L_4D459E
        mov ecx, dword ptr [esi + 0x174]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_4D45A4
L_4D459E:
        call dword ptr [mem_00925134]
L_4D45A4:
        mov eax, dword ptr [esi + 0x170]
        mov edx, dword ptr [edi]
        push 0x0
        push 0xa2fb54
        push 0xa2e2f8
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push eax
        mov eax, dword ptr [edx + 0x18]
        mov ecx, edi
        call eax
        push eax
        call ext_006A6E9E
        add esp, 0x14
        mov dword ptr [ebx], eax
        call ext_00660A50
        mov edi, eax
        mov eax, dword ptr [esi + 0x170]
        test eax, eax
        je L_4D4604
        mov ecx, dword ptr [esi + 0x174]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        ja L_4D460A
L_4D4604:
        call dword ptr [mem_00925134]
L_4D460A:
        mov esi, dword ptr [esi + 0x170]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x18]
        push 0x0
        push 0xa2fb54
        push 0xa2e2f8
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        add esi, 0x1c
        push esi
        mov ecx, edi
        call eax
        push eax
        call ext_006A6E9E
        add esp, 0x14
        pop edi
        pop esi
        mov dword ptr [ebp], eax
        pop ebp
        pop ebx
        ret 0x8
    }
}

extern "C" void ext_005E12F0();
extern "C" void ext_006426A0();
extern "C" void ext_006426C0();
extern "C" void ext_005C1310();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

// [0x004D9F50] sub_004D9F50 (261 bytes)
extern "C" __declspec(naked) void __fastcall fn_004D9F50(void* self) {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 4]
        cmp esi, dword ptr [edi + 8]
        mov dword ptr [esp + 10h], edi
        jbe q_4d9f70
        call ebp
        _emit 0x8d
        _emit 0x49
        _emit 0x00
q_4d9f70:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe q_4d9f7a
        call ebp
q_4d9f7a:
        test edi, edi
        je q_4d9f82
        cmp edi, edi
        je q_4d9f84
q_4d9f82:
        call ebp
q_4d9f84:
        cmp esi, ebx
        je q_4d9fac
        test edi, edi
        jne q_4d9f8e
        call ebp
q_4d9f8e:
        cmp esi, dword ptr [edi + 8]
        jb q_4d9f95
        call ebp
q_4d9f95:
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je q_4d9fa0
        call ext_005E12F0
q_4d9fa0:
        cmp esi, dword ptr [edi + 8]
        jb q_4d9fa7
        call ebp
q_4d9fa7:
        add esi, 4
        jmp q_4d9f70
q_4d9fac:
        call ext_00594000
        cmp byte ptr [edi + 1f8h], 0
        mov esi, dword ptr [eax + 0f8h]
        jne q_4d9fc7
        mov ecx, esi
        call ext_006426A0
q_4d9fc7:
        cmp byte ptr [edi + 1f9h], 0
        jne q_4d9fd7
        mov ecx, esi
        call ext_006426C0
q_4d9fd7:
        mov esi, dword ptr [edi + 214h]
        mov eax, dword ptr [esi + 59ch]
        mov eax, dword ptr [eax]
        add esi, 598h
        mov edi, esi
        mov ebp, eax
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 18h], ebp
q_4d9ff7:
        test edi, edi
        mov ebx, dword ptr [esi + 4]
        je q_4da002
        cmp edi, esi
        je q_4da008
q_4da002:
        call dword ptr [mem_00925134]
q_4da008:
        cmp ebp, ebx
        je q_4da04d
        test edi, edi
        jne q_4da016
        call dword ptr [mem_00925134]
q_4da016:
        cmp ebp, dword ptr [edi + 4]
        jne q_4da021
        call dword ptr [mem_00925134]
q_4da021:
        fld1
        push ecx
        mov ecx, dword ptr [esp + 14h]
        fstp dword ptr [esp]
        mov edx, dword ptr [ecx + 204h]
        mov ecx, dword ptr [ebp + 28h]
        push edx
        call ext_005C1310
        lea ecx, [esp + 14h]
        call ext_00673C20
        mov ebp, dword ptr [esp + 18h]
        mov edi, dword ptr [esp + 14h]
        jmp q_4d9ff7
q_4da04d:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ret
    }
}

// [0x004D0100] sub_004D0100 (179 bytes)
extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_006404E0();
extern "C" void ext_0067F040();
extern "C" void ext_0067F0F0();
extern "C" int mem_00A9ED7C;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F1B0;
extern "C" int mem_00A9F054;
extern "C" int mem_00A9F37C;
extern "C" int mem_00A9EE44;

extern "C" __declspec(naked) void __fastcall fn_004D0100(void* self, int edx_unused, int arg1) {
    __asm {
        mov eax, dword ptr [mem_00A9ED7C]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0ch]
        push eax
        call ext_006404E0
        mov ecx, dword ptr [mem_00A9F838]
        mov esi, eax
        push ecx
        mov ecx, esi
        call ext_00640110
        mov ecx, edi
        mov dword ptr [esp + 0ch], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 10h]
        call ext_00427550
        mov eax, dword ptr [mem_00A9F1B0]
        lea edx, [edi + 1ch]
        push edx
        push 0
        push eax
        mov ecx, esi
        call ext_00640390
        push eax
        call ext_0067F040
        mov edx, dword ptr [mem_00A9F054]
        add esp, 8
        lea ecx, [edi + 28h]
        push ecx
        push 0
        push edx
        mov ecx, esi
        call ext_00640390
        push eax
        call ext_0067F0F0
        mov ecx, dword ptr [mem_00A9F37C]
        add esp, 8
        lea eax, [edi + 38h]
        push eax
        push 0
        push ecx
        mov ecx, esi
        call ext_00640390
        push eax
        call ext_0067F0F0
        mov edx, dword ptr [mem_00A9EE44]
        add esp, 8
        add edi, 48h
        push edi
        push 0
        push edx
        mov ecx, esi
        call ext_00640390
        push eax
        call ext_0067F040
        add esp, 8
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x004D0530] sub_004D0530 (560 bytes)
extern "C" void ext_00427550();
extern "C" void ext_004D0100();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A50();
extern "C" void ext_00640A80();
extern "C" int mem_00A9F3DC;
extern "C" int mem_00A9FAD0;
extern "C" int mem_00A9F444;
extern "C" int mem_00A9F73C;
extern "C" int mem_00A9F68C;
extern "C" int mem_00A9ED8C;
extern "C" int mem_00A9FAE8;
extern "C" int mem_00A9FAEC;
extern "C" int mem_00A9F3D8;
extern "C" int mem_00A9F53C;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F540;
extern "C" int mem_00A9F544;
extern "C" int mem_00A9F548;
extern "C" int mem_00A9F410;

extern "C" __declspec(naked) void __fastcall fn_004D0530(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F3DC]
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 10h]
        push eax
        call ext_006404E0
        mov ecx, dword ptr [mem_00A9FAD0]
        mov edi, eax
        push ecx
        mov ecx, edi
        call ext_00640110
        mov edx, dword ptr [esi]
        push edx
        push eax
        call ext_00640A50
        mov eax, dword ptr [mem_00A9F444]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_00640110
        mov ecx, dword ptr [esi + 4]
        push ecx
        push eax
        call ext_00640A50
        mov edx, dword ptr [mem_00A9F73C]
        add esp, 8
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0Ch]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9F68C]
        add esp, 8
        push edx
        mov ecx, edi
        call ext_00640110
        mov ecx, dword ptr [esi + 8]
        push ecx
        push eax
        call ext_00640A50
        mov edx, dword ptr [mem_00A9ED8C]
        add esp, 8
        push edx
        mov ecx, edi
        call ext_006404E0
        mov ebx, eax
        mov eax, dword ptr [mem_00A9FAE8]
        push eax
        mov ecx, ebx
        call ext_00640110
        mov ecx, dword ptr [esi + 10h]
        push ecx
        push eax
        call ext_00640A50
        mov edx, dword ptr [mem_00A9FAEC]
        add esp, 8
        push edx
        mov ecx, ebx
        call ext_00640110
        mov ecx, dword ptr [esi + 14h]
        push ecx
        push eax
        call ext_00640A50
        mov edx, dword ptr [mem_00A9F3D8]
        add esp, 8
        push edx
        mov ecx, edi
        call ext_006404E0
        mov ebx, eax
        mov eax, dword ptr [mem_00A9F444]
        push eax
        mov ecx, ebx
        call ext_00640110
        mov ecx, dword ptr [esi + 4]
        push ecx
        push eax
        call ext_00640A50
        mov edx, dword ptr [mem_00A9F53C]
        add esp, 8
        push edx
        mov ecx, ebx
        call ext_00640110
        lea ecx, [esi + 18h]
        mov dword ptr [esp + 10h], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 14h]
        call ext_00427550
        mov eax, dword ptr [mem_00A9F540]
        push eax
        mov ecx, ebx
        call ext_00640110
        lea ecx, [esi + 34h]
        mov dword ptr [esp + 10h], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 14h]
        call ext_00427550
        mov ecx, dword ptr [mem_00A9F544]
        push ecx
        mov ecx, ebx
        call ext_00640110
        lea ecx, [esi + 50h]
        mov dword ptr [esp + 10h], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 14h]
        call ext_00427550
        mov edx, dword ptr [mem_00A9F548]
        push edx
        mov ecx, ebx
        call ext_00640110
        lea ecx, [esi + 6Ch]
        mov dword ptr [esp + 10h], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 14h]
        call ext_00427550
        mov eax, dword ptr [mem_00A9F410]
        push eax
        mov ecx, edi
        call ext_006404E0
        mov ecx, dword ptr [mem_00A9F53C]
        mov ebx, eax
        push ecx
        mov ecx, ebx
        call ext_00640110
        movzx edx, byte ptr [esi + 88h]
        push edx
        push eax
        call ext_00640A80
        mov eax, dword ptr [mem_00A9F540]
        add esp, 8
        push eax
        mov ecx, ebx
        call ext_00640110
        movzx ecx, byte ptr [esi + 89h]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9F544]
        add esp, 8
        push edx
        mov ecx, ebx
        call ext_00640110
        movzx ecx, byte ptr [esi + 8Ah]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9F548]
        add esp, 8
        push edx
        mov ecx, ebx
        call ext_00640110
        movzx ecx, byte ptr [esi + 8Bh]
        push ecx
        push eax
        call ext_00640A80
        add esp, 8
        add esi, 90h
        mov ebx, 7
    L_loop:
        push edi
        mov ecx, esi
        call ext_004D0100
        add esi, 54h
        sub ebx, 1
        jne L_loop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x004D2C90] sub_004D2C90 (315 bytes)
extern "C" void ext_004C30D0();
extern "C" void ext_005AA830();
extern "C" void ext_005AA850();
extern "C" void ext_005AA890();
extern "C" void ext_005ABD70();
extern "C" int mem_00948014;

extern "C" __declspec(naked) void __fastcall fn_004D2C90(void* self) {
    __asm {
        push -1
        push 0x88cc84
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x20]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x10], esi
        call ext_004C30D0
        mov dword ptr [esi + 0x180], 0x947afc
        lea ebx, [esi + 0x180]
        xor eax, eax
        mov ecx, 1
        mov dword ptr [esi], 0x948154
        mov dword ptr [esi + 4], 0x94810c
        mov dword ptr [esi + 8], 0x9480cc
        mov dword ptr [esi + 0xc], 0x94807c
        mov dword ptr [esi + 0x150], 0x948064
        mov dword ptr [esi + 0x154], 0x948054
        mov dword ptr [esi + 0x158], 0x948028
        mov dword ptr [ebx], 0x94801c
        mov dword ptr [esi + 0x188], ecx
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esi + 0x18c], eax
        fld1
        mov byte ptr [esp + 0x24], cl
        fstp dword ptr [esi + 0x194]
        lea edi, [esi + 0x198]
        mov ecx, edi
        mov dword ptr [esi + 0x190], eax
        call ext_005ABD70
        mov dword ptr [edi], 0x93ee24
        mov dword ptr [edi + 4], 0x93eddc
        mov dword ptr [edi + 8], 0x93ed9c
        mov dword ptr [edi + 0xc], 0x93ed4c
        mov dword ptr [edi + 0x150], 0x93ed38
        push 3
        mov ecx, edi
        mov byte ptr [esp + 0x28], 2
        mov dword ptr [esi + 0x328], ebx
        call ext_005AA830
        fld dword ptr [mem_00948014]
        lea ecx, [esp + 0x10]
        fst dword ptr [esp + 0x10]
        push ecx
        fst dword ptr [esp + 0x18]
        mov ecx, edi
        fstp dword ptr [esp + 0x1c]
        call ext_005AA850
        fld dword ptr [mem_00948014]
        fst dword ptr [esp + 0x10]
        lea edx, [esp + 0x10]
        fst dword ptr [esp + 0x14]
        push edx
        mov ecx, edi
        fstp dword ptr [esp + 0x1c]
        call ext_005AA890
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x1c
        ret 4
    }
}

// [0x004D2E10] sub_004D2E10 (332 bytes)
extern "C" void ext_004C31B0();
extern "C" void ext_005AA830();
extern "C" void ext_005AA850();
extern "C" void ext_005AA890();
extern "C" void ext_005ABD70();
extern "C" int mem_00948014;

extern "C" __declspec(naked) void __fastcall fn_004D2E10(void* self) {
    __asm {
        push -1
        push 0x88cc84
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x24]
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x30]
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x1c], esi
        call ext_004C31B0
        mov dword ptr [esi + 0x180], 0x947afc
        lea ebx, [esi + 0x180]
        xor eax, eax
        mov ecx, 1
        mov dword ptr [esi], 0x948154
        mov dword ptr [esi + 0x4], 0x94810c
        mov dword ptr [esi + 0x8], 0x9480cc
        mov dword ptr [esi + 0xc], 0x94807c
        mov dword ptr [esi + 0x150], 0x948064
        mov dword ptr [esi + 0x154], 0x948054
        mov dword ptr [esi + 0x158], 0x948028
        mov dword ptr [ebx], 0x94801c
        mov dword ptr [esi + 0x188], ecx
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esi + 0x18c], eax
        fld1
        mov byte ptr [esp + 0x24], cl
        fstp dword ptr [esi + 0x194]
        lea edi, [esi + 0x198]
        mov ecx, edi
        mov dword ptr [esi + 0x190], eax
        call ext_005ABD70
        mov dword ptr [edi], 0x93ee24
        mov dword ptr [edi + 0x4], 0x93eddc
        mov dword ptr [edi + 0x8], 0x93ed9c
        mov dword ptr [edi + 0xc], 0x93ed4c
        mov dword ptr [edi + 0x150], 0x93ed38
        push 3
        mov ecx, edi
        mov byte ptr [esp + 0x28], 2
        mov dword ptr [esi + 0x328], ebx
        call ext_005AA830
        fld dword ptr [mem_00948014]
        lea ecx, [esp + 0x10]
        fst dword ptr [esp + 0x10]
        push ecx
        fst dword ptr [esp + 0x18]
        mov ecx, edi
        fstp dword ptr [esp + 0x1c]
        call ext_005AA850
        fld dword ptr [mem_00948014]
        fst dword ptr [esp + 0x10]
        lea edx, [esp + 0x10]
        fst dword ptr [esp + 0x14]
        push edx
        mov ecx, edi
        fstp dword ptr [esp + 0x1c]
        call ext_005AA890
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x10
    }
}

// [0x004D9C60] sub_004D9C60 (121 bytes)
extern "C" void ext_00586A50();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004D9C60(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        push edi
        jbe L_a
        call ebp
    L_a:
        mov edi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], edi
        jbe L_b
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_b:
        test ebx, ebx
        je L_c
        cmp ebx, ebx
        je L_d
    L_c:
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_d:
        cmp esi, edi
        je L_end
        test ebx, ebx
        jne L_e
        call ebp
    L_e:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_f
        call ebp
    L_f:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0x22c]
        test ecx, ecx
        je L_g
        cmp byte ptr [ebx + 0x1fa], 0
        je L_g
        push 0
        push 0x400
        call ext_00586A50
    L_g:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_h
        call ebp
    L_h:
        add esi, 4
        jmp L_a
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

extern "C" void ext_00528BB0();
extern "C" void ext_00586A50();
extern "C" int mem_00925134;

// [0x004D9BC0] sub_004D9BC0 (149 bytes)
extern "C" __declspec(naked) void __fastcall fn_004D9BC0(void* self) {
    __asm {
        push ecx
        push edi
        mov edi, ecx
        cmp byte ptr [edi + 0x1fa], 0
        mov dword ptr [esp + 0x4], edi
        _emit 0x0F
        _emit 0x84
        _emit 0x7D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push ebx
        mov ebx, dword ptr [edi + 0x20c]
        test ebx, ebx
        je L_call586
        push ebp
        push esi
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        jbe L_loop
        call dword ptr [mem_00925134]
    L_loop:
        mov edi, dword ptr [edi + 0x20c]
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        cmp ebx, edi
        mov edi, dword ptr [mem_00925134]
        je L_chk2
        call edi
    L_chk2:
        cmp esi, ebp
        je L_done
        cmp esi, dword ptr [ebx + 0x8]
        jb L_body
        call edi
    L_body:
        mov ecx, dword ptr [esi]
        push 0
        push 0x1000
        add ecx, 0xc
        call ext_00528BB0
        cmp esi, dword ptr [ebx + 0x8]
        jb L_next
        call edi
    L_next:
        mov edi, dword ptr [esp + 0x10]
        add esi, 0x4
        jmp L_loop
    L_done:
        mov edi, dword ptr [esp + 0x10]
        pop esi
        pop ebp
    L_call586:
        push 0
        push 0x1000
        lea ecx, [edi + 0x10]
        call ext_00586A50
        pop ebx
    L_end:
        pop edi
        pop ecx
        ret
    }
}

// [0x004D2930] sub_004D2930 (236 bytes)
extern "C" void ext_00586A50();
extern "C" void ext_005A1150();
extern "C" void ext_005E02F0();
extern "C" void ext_005E12F0();
extern "C" int mem_00B40640;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004D2930(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x1cc]
        test ecx, ecx
        push edi
        je L_4D2945
        call ext_005E12F0
    L_4D2945:
        mov ecx, dword ptr [esi + 0x1d0]
        test ecx, ecx
        je L_4D2954
        call ext_005E12F0
    L_4D2954:
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je L_4D29D4
        mov eax, dword ptr [mem_00B40640]
        mov edx, dword ptr [esi + 0x20]
        push eax
        push edx
        call ext_005A1150
        cmp dword ptr [esi + 0x20], 4
        jne L_4D297C
        mov eax, dword ptr [esi]
        fld dword ptr [esi + 0x24]
        fstp dword ptr [eax + 0x604]
        jmp L_4D2986
    L_4D297C:
        fld1
        mov ecx, dword ptr [esi]
        fstp dword ptr [ecx + 0x604]
    L_4D2986:
        cmp dword ptr [esi + 0x20], 0
        mov ecx, dword ptr [esi]
        sete dl
        add ecx, 4
        push edx
        push 0x200000
        call ext_00586A50
        mov eax, dword ptr [esi + 0x20]
        cmp eax, 2
        je L_4D29AE
        cmp eax, 4
        je L_4D29AE
        xor al, al
        jmp L_4D29B3
    L_4D29AE:
        mov eax, 1
    L_4D29B3:
        mov ecx, dword ptr [esi]
        push eax
        push 0x1000000
        add ecx, 4
        call ext_00586A50
        mov ecx, dword ptr [esi]
        push 0
        push 0x4000000
        add ecx, 4
        call ext_00586A50
    L_4D29D4:
        mov edi, dword ptr [esi + 0xc]
        mov ebp, dword ptr [mem_00925134]
        add esi, 8
        cmp edi, dword ptr [esi + 8]
        jbe L_4D29E7
        call ebp
    L_4D29E7:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe L_4D29F1
        call ebp
    L_4D29F1:
        cmp esi, esi
        je L_4D29F7
        call ebp
    L_4D29F7:
        cmp edi, ebx
        je L_4D2A17
        cmp edi, dword ptr [esi + 8]
        jb L_4D2A02
        call ebp
    L_4D2A02:
        mov ecx, dword ptr [edi]
        push 0
        call ext_005E02F0
        cmp edi, dword ptr [esi + 8]
        jb L_4D2A12
        call ebp
    L_4D2A12:
        add edi, 4
        jmp L_4D29E7
    L_4D2A17:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004DBD10] sub_004DBD10 (124 bytes)
extern "C" void ext_004D42A0();
extern "C" void ext_004DB940();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004DBD10(void* self, int edx_unused, unsigned int idx) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        cmp dword ptr [esi + 0x43c], edi
        je done
        mov dword ptr [esi + 0x43c], edi
        mov dword ptr [esi + 0x440], 0
        mov eax, dword ptr [esi + 0x448]
        test eax, eax
        je invalid_param
        mov ecx, dword ptr [esi + 0x44c]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb valid_param
    invalid_param:
        call dword ptr [mem_00925134]
    valid_param:
        mov ecx, dword ptr [esi + 0x448]
        lea eax, [8*edi]
        sub eax, edi
        lea edx, [ecx + 4*eax]
        push edx
        mov ecx, esi
        call ext_004DB940
        mov eax, dword ptr [esi + 0x168]
        push eax
        mov ecx, esi
        call ext_004D42A0
    done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x004D2AA0] sub_004D2AA0 (157 bytes)
extern "C" void ext_004D2930();
extern "C" void ext_00596660();
extern "C" int mem_00925134;
extern "C" int mem_009324A4;

extern "C" __declspec(naked) void __fastcall fn_004D2AA0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_004D2930
        mov ecx, dword ptr [esi + 0x1cc]
        xor edi, edi
        cmp ecx, edi
        je L_skip1
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    L_skip1:
        mov dword ptr [esi + 0x1cc], edi
        mov ecx, dword ptr [esi + 0x1d0]
        cmp ecx, edi
        je L_skip2
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    L_skip2:
        lea ecx, [esi + 0x38]
        mov dword ptr [esi + 0x1d0], edi
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x84]
        call edx
        mov ebx, dword ptr [esi + 0x10]
        cmp dword ptr [esi + 0xc], ebx
        lea edi, [esi + 0x8]
        jbe L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        mov ebp, dword ptr [edi + 0x4]
        cmp ebp, dword ptr [edi + 0x8]
        jbe L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        push ebx
        push edi
        push ebp
        push edi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, edi
        call ext_00596660
        fld dword ptr [mem_009324A4]
        fstp dword ptr [esi + 0x18]
        pop edi
        fldz
        mov dword ptr [esi], 0x0
        fstp dword ptr [esi + 0x1c]
        fld1
        fstp dword ptr [esi + 0x24]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

extern "C" void ext_00493D90();
extern "C" void ext_00495250();
extern "C" void ext_004D2AA0();
extern "C" void ext_006A5C5C();

// [0x004D2B40] sub_004D2B40 (158 bytes)
extern "C" __declspec(naked) void __fastcall fn_004D2B40(void* self) {
    __asm {
        push -0x1
        push 0x88cc2d
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esp + 0x14], 0x4
        call ext_004D2AA0
        mov ecx, dword ptr [esi + 0x1d0]
        xor ebx, ebx
        cmp ecx, ebx
        mov byte ptr [esp + 0x14], 0x3
        je loc_4D2B84
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    loc_4D2B84:
        mov ecx, dword ptr [esi + 0x1cc]
        cmp ecx, ebx
        mov byte ptr [esp + 0x14], 0x2
        je loc_4D2B9B
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    loc_4D2B9B:
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x14], 0x1
        call ext_00495250
        lea ecx, [esi + 0x28]
        mov byte ptr [esp + 0x14], bl
        call ext_00493D90
        mov eax, dword ptr [esi + 0xc]
        cmp eax, ebx
        je loc_4D2BC4
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4D2BC4:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x10], ebx
        mov dword ptr [esi + 0x14], ebx
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004D3290] sub_004D3290 (189 bytes)
extern "C" void ext_004D3240();

extern "C" __declspec(naked) void __fastcall fn_004D3290(void* self) {
    __asm {
        push -1
        push 0x88cd04
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov [esp + 0x8], esi
        mov dword ptr [esi], 0x948154
        mov dword ptr [esi + 0x4], 0x94810c
        mov dword ptr [esi + 0x8], 0x9480cc
        mov dword ptr [esi + 0xc], 0x94807c
        mov dword ptr [esi + 0x150], 0x948064
        mov dword ptr [esi + 0x154], 0x948054
        mov dword ptr [esi + 0x158], 0x948028
        mov dword ptr [esi + 0x180], 0x94801c
        mov dword ptr [esp + 0x14], 2
        call ext_004D3240
        lea ecx, [esi + 0x198]
        mov byte ptr [esp + 0x14], 1
        call ext_00495250
        mov edi, [esi + 0x18c]
        test edi, edi
        mov byte ptr [esp + 0x14], 0
        je L_skip_del
        mov ecx, edi
        call ext_004D2B40
        push edi
        call ext_006A5C5C
        add esp, 4
    L_skip_del:
        mov ecx, esi
        mov dword ptr [esp + 0x14], -1
        call ext_004C2330
        mov ecx, [esp + 0xc]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_00586AD0();
extern "C" int mem_00925134;

// [0x004D9A00] sub_004D9A00 (186 bytes)
extern "C" __declspec(naked) void __fastcall fn_004D9A00(void* self) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        mov     edi, dword ptr [ebp + 0x4]
        cmp     edi, dword ptr [ebp + 0x8]
        jbe     L_4d9a15
        call    dword ptr [mem_00925134]
    L_4d9a15:
        mov     ebx, ebp
    L_4d9a17:
        mov     esi, dword ptr [ebp + 0x8]
        cmp     dword ptr [ebp + 0x4], esi
        jbe     L_4d9a25
        call    dword ptr [mem_00925134]
    L_4d9a25:
        test    ebx, ebx
        je      L_4d9a2d
        cmp     ebx, ebp
        je      L_4d9a33
    L_4d9a2d:
        call    dword ptr [mem_00925134]
    L_4d9a33:
        cmp     edi, esi
        je      L_4d9ab4
        call    ext_00594000
        test    ebx, ebx
        mov     ebp, eax
        jne     L_4d9a48
        call    dword ptr [mem_00925134]
    L_4d9a48:
        cmp     edi, dword ptr [ebx + 0x8]
        jb      L_4d9a53
        call    dword ptr [mem_00925134]
    L_4d9a53:
        cmp     edi, dword ptr [ebx + 0x8]
        mov     eax, dword ptr [edi]
        mov     esi, dword ptr [eax + 0x22c]
        jb      L_4d9a66
        call    dword ptr [mem_00925134]
    L_4d9a66:
        mov     ecx, dword ptr [edi]
        call    ext_005E12D0
        test    esi, esi
        je      L_4d9a9f
        mov     ecx, ebx
        cmp     byte ptr [ecx + 0x1fa], 0x0
        je      L_4d9a9f
        push    0x1
        push    0x400
        mov     ecx, esi
        call    ext_00586A50
        add     ebp, 0x168
        push    ebp
        push    0x1
        push    0x400
        mov     ecx, esi
        call    ext_00586AD0
    L_4d9a9f:
        cmp     edi, dword ptr [ebx + 0x8]
        jb      L_4d9aaa
        call    dword ptr [mem_00925134]
    L_4d9aaa:
        add     edi, 0x4
        mov     ebp, ebx
        jmp     L_4d9a17
    L_4d9ab4:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}

// [0x004D9AC0] sub_004D9AC0 (249 bytes)
extern "C" void ext_00528BB0();
extern "C" void ext_00528BF0();
extern "C" void ext_00586A50();
extern "C" void ext_00586AD0();
extern "C" void ext_00594000();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004D9AC0(void* self) {
    __asm {
        sub esp, 8
        push edi
        mov edi, ecx
        cmp byte ptr [edi + 0x1fa], 0
        je L_end
        push ebx
        push esi
        call ext_00594000
        mov ebx, dword ptr [edi + 0x20c]
        test ebx, ebx
        mov dword ptr [esp + 0xc], eax
        je L_nobuf
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        jbe L_a
        call dword ptr [mem_00925134]
L_a:
        push ebp
        jmp L_loop
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_loop:
        mov ebp, dword ptr [edi + 0x20c]
        mov eax, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], eax
        mov dword ptr [esp + 0x14], eax
        jbe L_b
        call dword ptr [mem_00925134]
L_b:
        cmp ebx, ebp
        mov ebp, dword ptr [mem_00925134]
        je L_c
        call ebp
L_c:
        cmp esi, dword ptr [esp + 0x14]
        je L_popebp
        cmp esi, dword ptr [ebx + 0x8]
        jb L_d
        call ebp
L_d:
        mov eax, dword ptr [esp + 0x10]
        movzx ecx, byte ptr [edi + 0x1fc]
        add eax, 0x168
        push eax
        push ecx
        mov ecx, dword ptr [esi]
        push 0x1000
        add ecx, 0xc
        call ext_00528BF0
        cmp esi, dword ptr [ebx + 0x8]
        jb L_e
        call ebp
L_e:
        movzx edx, byte ptr [edi + 0x1fc]
        mov ecx, dword ptr [esi]
        push edx
        push 0x1000
        add ecx, 0xc
        call ext_00528BB0
        cmp esi, dword ptr [ebx + 0x8]
        jb L_f
        call ebp
L_f:
        add esi, 4
        jmp L_loop
L_popebp:
        pop ebp
L_nobuf:
        mov eax, dword ptr [esp + 0xc]
        movzx ecx, byte ptr [edi + 0x1fc]
        add eax, 0x168
        push eax
        push ecx
        lea esi, [edi + 0x10]
        push 0x1000
        mov ecx, esi
        call ext_00586AD0
        movzx edx, byte ptr [edi + 0x1fc]
        push edx
        push 0x1000
        mov ecx, esi
        call ext_00586A50
        pop esi
        pop ebx
L_end:
        pop edi
        add esp, 8
        ret
    }
}

// [0x004D27D0] sub_004D27D0 (338 bytes)
extern "C" void ext_00586A50();
extern "C" void ext_00586AD0();
extern "C" void ext_00594000();
extern "C" void ext_005A1150();
extern "C" void ext_005A13C0();
extern "C" void ext_005E02F0();
extern "C" void ext_005E12D0();
extern "C" int mem_00B40640;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004D27D0(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0x1c]
        mov ecx, dword ptr [esi]
        lea ebx, [esi + 0x18]
        fstp dword ptr [ebx]
        mov eax, dword ptr [mem_00B40640]
        push edi
        push eax
        call ext_005A13C0
        mov ecx, dword ptr [mem_00B40640]
        push ecx
        mov ecx, dword ptr [esi]
        push 6
        call ext_005A1150
        call ext_00594000
        mov ecx, dword ptr [esi]
        add eax, 0x168
        push eax
        push 0
        push 0x200000
        add ecx, 4
        call ext_00586AD0
        mov ecx, dword ptr [esi]
        push 0
        push 0x200000
        add ecx, 4
        call ext_00586A50
        call ext_00594000
        mov ecx, dword ptr [esi]
        add eax, 0x168
        push eax
        push 0
        push 0x1000000
        add ecx, 4
        call ext_00586AD0
        mov ecx, dword ptr [esi]
        push 0
        push 0x1000000
        add ecx, 4
        call ext_00586A50
        fld dword ptr [esi + 0x28]
        mov eax, dword ptr [esi]
        fstp dword ptr [eax + 0x608]
        fld dword ptr [esi + 0x2c]
        add eax, 0x608
        fstp dword ptr [eax + 0x4]
        push ecx
        fld dword ptr [esi + 0x30]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [esi + 0x34]
        fstp dword ptr [eax + 0xc]
        mov ecx, dword ptr [esi]
        fld dword ptr [ebx]
        fstp dword ptr [esp]
        call ext_0059DCA0
        mov ecx, dword ptr [esi]
        push 1
        push 0x4000000
        add ecx, 4
        call ext_00586A50
        mov ebp, dword ptr [esi + 0xc]
        cmp ebp, dword ptr [esi + 0x10]
        lea edi, [esi + 0x8]
        jbe short L_loop
        call dword ptr [mem_00925134]
        jmp short L_loop
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_loop:
        mov eax, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], eax
        mov dword ptr [esp + 0x10], eax
        jbe short L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        cmp edi, edi
        je short L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        cmp ebp, dword ptr [esp + 0x10]
        je short L_done
        cmp ebp, dword ptr [edi + 0x8]
        jb short L_ok1
        call dword ptr [mem_00925134]
L_ok1:
        mov ecx, dword ptr [ebp]
        push ebx
        call ext_005E02F0
        cmp ebp, dword ptr [edi + 0x8]
        jb short L_ok2
        call dword ptr [mem_00925134]
L_ok2:
        add ebp, 4
        jmp short L_loop
L_done:
        mov ecx, dword ptr [esi + 0x1cc]
        test ecx, ecx
        je short L_skip
        call ext_005E12D0
L_skip:
        mov esi, dword ptr [esi + 0x1d0]
        test esi, esi
        pop edi
        je short L_ret
        mov ecx, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 4
        jmp ext_005E12D0
L_ret:
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

extern "C" void ext_004940D0();
extern "C" void ext_004E7F30();
extern "C" void ext_004E8050();
extern "C" void ext_004E87D0();
extern "C" void ext_004E9910();

// [0x004DE020] sub_004DE020 (194 bytes)
extern "C" __declspec(naked) void __fastcall fn_004DE020(void* self) {
    __asm {
        push -1
        push 0x88937b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x11c
        push esi
        mov esi, ecx
        lea ecx, [esp + 0xc]
        call ext_004940D0
        lea ecx, [esp + 0x18]
        call ext_004940D0
        mov eax, dword ptr [esi + 0x154]
        mov eax, dword ptr [eax]
        lea edx, [esp + 0x8]
        push edx
        lea edx, [esp + 0x8]
        push edx
        lea edx, [esp + 0x20]
        lea ecx, [esi + 0x154]
        push edx
        lea edx, [esp + 0x18]
        push edx
        call eax
        mov eax, 0x8
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x4], eax
        mov dword ptr [esp + 0x8], eax
        call ext_004E7F30
        push 0x1
        lea ecx, [esp + 0x10]
        push ecx
        push 0x0
        add esi, 0x16c
        push esi
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x138], 0x0
        call ext_004E9910
        push esi
        lea ecx, [esp + 0x28]
        call ext_004E87D0
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x128], 0xffffffff
        call ext_004E8050
        mov ecx, dword ptr [esp + 0x120]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x128
        ret
    }
}

// [0x004D3880] sub_004D3880 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004D3880(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa3c114
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_4D38D3
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_4D38D3:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x004DDB40] sub_004DDB40 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004DDB40(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa3d680
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_4DDB93
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_4DDB93:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x004DB240] sub_004DB240 (165 bytes)
extern "C" void ext_00475960();
extern "C" int mem_00AE5D5C;
extern "C" int mem_00AE5D58;
extern "C" __declspec(naked) void __fastcall fn_004DB240(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88d3a7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE5D5C], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE5D5C], 0x1
        mov     ecx, offset mem_00AE5D58
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE5D58], 0x948534
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE5D58
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004DB2F0] sub_004DB2F0 (165 bytes)
extern "C" int mem_00AE5D64;
extern "C" int mem_00AE5D60;
extern "C" __declspec(naked) void __fastcall fn_004DB2F0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88d3d7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE5D64], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE5D64], 0x1
        mov     ecx, offset mem_00AE5D60
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE5D60], 0x9486e4
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE5D60
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004DB3A0] sub_004DB3A0 (165 bytes)
extern "C" int mem_00AE5D6C;
extern "C" int mem_00AE5D68;
extern "C" __declspec(naked) void __fastcall fn_004DB3A0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88d407
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE5D6C], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE5D6C], 0x1
        mov     ecx, offset mem_00AE5D68
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE5D68], 0x948894
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE5D68
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004DB450] sub_004DB450 (165 bytes)
extern "C" int mem_00AE5D74;
extern "C" int mem_00AE5D70;
extern "C" __declspec(naked) void __fastcall fn_004DB450(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88d437
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE5D74], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE5D74], 0x1
        mov     ecx, offset mem_00AE5D70
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE5D70], 0x948a44
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE5D70
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004DB500] sub_004DB500 (165 bytes)
extern "C" int mem_00AE5D7C;
extern "C" int mem_00AE5D78;
extern "C" void ext_0067A670();
extern "C" void ext_00475960();
extern "C" __declspec(naked) void __fastcall fn_004DB500(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88d467
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE5D7C], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE5D7C], 0x1
        mov     ecx, offset mem_00AE5D78
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE5D78], 0x948bf4
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE5D78
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004DB5B0] sub_004DB5B0 (165 bytes)
extern "C" int mem_00AE5D84;
extern "C" int mem_00AE5D80;
extern "C" void ext_0067A670();
extern "C" void ext_00475960();
extern "C" __declspec(naked) void __fastcall fn_004DB5B0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88d497
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE5D84], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE5D84], 0x1
        mov     ecx, offset mem_00AE5D80
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE5D80], 0x948da4
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE5D80
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004DB660] sub_004DB660 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE5D8C;
extern "C" int mem_00AE5D88;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004DB660(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88d4c7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE5D8C], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE5D8C], 0x1
        mov     ecx, offset mem_00AE5D88
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE5D88], 0x948f54
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE5D88
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004DB710] sub_004DB710 (165 bytes)
extern "C" int mem_00AE5D94;
extern "C" int mem_00AE5D90;
extern "C" __declspec(naked) void __fastcall fn_004DB710(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88d4f7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE5D94], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE5D94], 0x1
        mov     ecx, offset mem_00AE5D90
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE5D90], 0x949104
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE5D90
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004DB7C0] sub_004DB7C0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE5D9C;
extern "C" int mem_00AE5D98;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004DB7C0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88d527
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE5D9C], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE5D9C], 0x1
        mov     ecx, offset mem_00AE5D98
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE5D98], 0x9492b4
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE5D98
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004DB870] sub_004DB870 (165 bytes)
extern "C" void ext_0067A670();
extern "C" void ext_00475960();
extern "C" int mem_00AE5DA4;
extern "C" int mem_00AE5DA0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004DB870(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88d557
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE5DA4], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE5DA4], 0x1
        mov     ecx, offset mem_00AE5DA0
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE5DA0], 0x949464
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE5DA0
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004DDBD0] sub_004DDBD0 (348 bytes)
extern "C" void ext_004BE400();
extern "C" void ext_004DB240();
extern "C" void ext_004DB2F0();
extern "C" void ext_004DB3A0();
extern "C" void ext_004DB450();
extern "C" void ext_004DB500();
extern "C" void ext_004DB5B0();
extern "C" void ext_004DB660();
extern "C" void ext_004DB710();
extern "C" void ext_004DB7C0();
extern "C" void ext_004DB870();
extern "C" void ext_004DDB40();
extern "C" void ext_0067A670();
extern "C" int mem_00A9F99C;
extern "C" int mem_00A9F6A0;
extern "C" int mem_00A9F690;
extern "C" int mem_00A9F914;
extern "C" int mem_00AE5DB0;
extern "C" int mem_00AE5DAC;
extern "C" int mem_00AE5DA8;

extern "C" __declspec(naked) void __fastcall fn_004DDBD0(void* self) {
    __asm {
        push    -0x1
        push    0x88d7dc
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    0x93e1b8
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_004DDB40
        mov     ecx, dword ptr [mem_00A9F99C]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_004DB240
        push    0x949cf4
        lea     ecx, [esp + 0x4]
        call    ext_004DB2F0
        push    0x949cd8
        lea     ecx, [esp + 0x4]
        call    ext_004DB3A0
        push    0x949cc4
        lea     ecx, [esp + 0x4]
        call    ext_004DB450
        push    0x949cb0
        lea     ecx, [esp + 0x4]
        call    ext_004DB500
        push    0x948514
        lea     ecx, [esp + 0x4]
        call    ext_004DB5B0
        mov     edx, dword ptr [mem_00A9F6A0]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_004DB660
        mov     eax, dword ptr [mem_00A9F690]
        push    eax
        lea     ecx, [esp + 0x4]
        call    ext_004DB710
        mov     ecx, dword ptr [mem_00A9F914]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_004DB7C0
        test    byte ptr [mem_00AE5DB0], 0x1
        jne     L1
        or      dword ptr [mem_00AE5DB0], 0x1
        mov     ecx, offset mem_00AE5DAC
        mov     dword ptr [esp + 0xc], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE5DAC], 0x949614
        mov     dword ptr [esp + 0xc], -1
    L1:
        push    offset mem_00AE5DAC
        push    0x93f154
        lea     ecx, [esp + 0x8]
        call    ext_004BE400
        mov     eax, 0x2
        test    byte ptr [mem_00AE5DB0], al
        jne     L2
        or      dword ptr [mem_00AE5DB0], eax
        mov     ecx, offset mem_00AE5DA8
        mov     dword ptr [esp + 0xc], 0x1
        call    ext_0067A670
        mov     dword ptr [mem_00AE5DA8], 0x9496ec
        mov     dword ptr [esp + 0xc], -1
    L2:
        push    offset mem_00AE5DA8
        push    0x949ca0
        lea     ecx, [esp + 0x8]
        call    ext_004BE400
        push    0x949c88
        lea     ecx, [esp + 0x4]
        call    ext_004DB870
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x004DDA90] sub_004DDA90 (169 bytes)
extern "C" void ext_004D9DF0();
extern "C" void ext_004DA2B0();
extern "C" void ext_004DD7A0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_004DDA90(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x218
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0xc], eax
        test eax, eax
        mov dword ptr [esp + 0x18], 0
        je SKIP_A
        movzx ecx, byte ptr [esi + 0x438]
        mov edx, dword ptr [esp + 0x2c]
        push ecx
        mov ecx, dword ptr [esp + 0x2c]
        push edx
        push ecx
        mov ecx, eax
        call ext_004D9DF0
        mov ebx, eax
        jmp JOIN_A
    SKIP_A:
        xor ebx, ebx
    JOIN_A:
        mov edi, dword ptr [esi + 0x18c]
        cmp ebx, edi
        mov dword ptr [esp + 0x18], -1
        je SKIP_B
        test edi, edi
        je SKIP_B
        mov ecx, edi
        call ext_004DA2B0
        push edi
        call ext_006A5C5C
        add esp, 4
    SKIP_B:
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x20]
        push edx
        push eax
        push esi
        mov ecx, ebx
        mov dword ptr [esi + 0x18c], ebx
        call ext_004DD7A0
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x004DA740] sub_004DA740 (178 bytes)
extern "C" void ext_004D3DE0();
extern "C" void ext_004D95C0();
extern "C" void ext_004D9880();
extern "C" void ext_004D9A00();
extern "C" void ext_004D9AC0();
extern "C" void ext_004D9D70();
extern "C" void ext_004DA310();
extern "C" int mem_00AE5D54;

extern "C" __declspec(naked) void __fastcall fn_004DA740(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x214], 0x0
        je L_ret_plain
        cmp byte ptr [esi + 0x211], 0x0
        jne L_alt
        push ebx
        push edi
        call ext_004D95C0
        mov edi, dword ptr [esp + 0x18]
        push edi
        mov ecx, esi
        call ext_004D9D70
        mov ebx, dword ptr [esp + 0x10]
        push ebx
        mov ecx, esi
        call ext_004D9880
        push ebx
        mov ecx, esi
        call ext_004DA310
        test bl, bl
        je L_clear
        test edi, edi
        mov byte ptr [mem_00AE5D54], 0x1
        je L_after_set
    L_clear:
        mov byte ptr [mem_00AE5D54], 0x0
    L_after_set:
        mov ecx, esi
        call ext_004D9A00
        mov ecx, esi
        call ext_004D9AC0
        pop edi
        pop ebx
        mov byte ptr [esi + 0x211], 0x1
        pop esi
        ret 0xc
    L_alt:
        call ext_004D95C0
        mov eax, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_004D9D70
        cmp byte ptr [mem_00AE5D54], 0x0
        je L_else
        mov ecx, dword ptr [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_004DA310
        mov byte ptr [mem_00AE5D54], 0x0
        pop esi
        ret 0xc
    L_else:
        mov edx, dword ptr [esp + 0xc]
        push edx
        mov ecx, esi
        call ext_004D3DE0
    L_ret_plain:
        pop esi
        ret 0xc
    }
}

// [0x004DA510] sub_004DA510 (189 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_00495CB0();
extern "C" void ext_004D4550();
extern "C" int mem_00A34654;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004DA510(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push esi
        mov esi, ecx
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esp + 0xc], 0
        call ext_004D4550
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x8]
        push edx
        push eax
        add esi, 0x444
        push esi
        call ext_00495CB0
        mov eax, dword ptr [esi + 0x4]
        add esp, 0xc
        test eax, eax
        je short L_4DA586
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne short L_4DA5BD
L_4DA586:
        mov edx, dword ptr [mem_00A34654]
        push edx
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0
        call ext_0040ECB0
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], -1
        call dword ptr [mem_00924FF4]
L_4DA5BD:
        mov ecx, dword ptr [esp + 0x28]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret
    }
}

// [0x004D4650] sub_004D4650 (215 bytes)
extern "C" void ext_00494300();
extern "C" void ext_00495490();
extern "C" void ext_00495A60();
extern "C" void ext_00495AB0();
extern "C" void ext_00495B20();
extern "C" void ext_004D4060();
extern "C" void ext_004D40E0();
extern "C" void ext_004D4550();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004D4650(void* self, int edx_unused, int a1) {
    __asm {
        push -0x1
        push 0x88d01a
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x6c
        push esi
        push edi
        mov esi, ecx
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0x0
        call ext_004D4550
        lea ecx, [esp + 0x48]
        call ext_00495A60
        mov edx, dword ptr [esp + 0x8]
        push edx
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0x80], 0x0
        call ext_00494300
        lea ecx, [esp + 0x48]
        call ext_00495B20
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, esi
        call ext_004D40E0
        mov edi, eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x80], 0x1
        call ext_004D4060
        push edi
        push eax
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x84], 0x2
        call ext_00495490
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x7c], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x7c], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0x7c], 0xffffffff
        call ext_00495AB0
        mov ecx, dword ptr [esp + 0x74]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x78
        ret 0x4
    }
}

// [0x004DC370] sub_004DC370 (221 bytes)
extern "C" void ext_004D4060();
extern "C" void ext_004D40E0();
extern "C" void ext_004D4160();
extern "C" void ext_004D4190();
extern "C" void ext_004D42A0();
extern "C" void ext_004D8C30();
extern "C" void ext_004D8D70();
extern "C" void ext_004DA510();
extern "C" void ext_004DB070();

extern "C" __declspec(naked) void __fastcall fn_004DC370(void* self) {
    __asm {
        push -1
        push 0x8b2ae2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push ebx
        push esi
        push edi
        lea eax, [esp + 0x28]
        push eax
        mov esi, ecx
        call ext_004D4060
        lea ecx, [esp + 0xc]
        push ecx
        xor ebx, ebx
        mov ecx, esi
        mov dword ptr [esp + 0x50], ebx
        call ext_004D40E0
        mov ecx, esi
        mov byte ptr [esp + 0x4c], 1
        call ext_004DA510
        lea edx, [esp + 0x28]
        push edx
        mov ecx, esi
        call ext_004D8C30
        mov edi, eax
        mov ecx, esi
        mov dword ptr [esi + 0x43c], edi
        call ext_004D4160
        cmp edi, eax
        jne skip_43c
        mov dword ptr [esi + 0x43c], ebx
    skip_43c:
        mov eax, dword ptr [esi + 0x168]
        push eax
        mov ecx, esi
        call ext_004D42A0
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_004D8D70
        mov edi, eax
        mov ecx, esi
        mov dword ptr [esi + 0x440], edi
        call ext_004D4190
        cmp edi, eax
        jne skip_440
        mov edx, dword ptr [esi + 0x168]
        push edx
        mov ecx, esi
        mov dword ptr [esi + 0x440], ebx
        call ext_004DB070
    skip_440:
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x4c], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x28]
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

// [0x004DCB90] sub_004DCB90 (229 bytes)
extern "C" void ext_004C0340();
extern "C" void ext_004D4060();
extern "C" void ext_004D40E0();
extern "C" void ext_004D9480();
extern "C" void ext_004DBBE0();
extern "C" void ext_004EE590();
extern "C" int mem_00925134;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004DCB90(void* self, int edx_unused, const void* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8b2ae2
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x3c
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x170]
        test    eax, eax
        push    edi
        je      loc_4dcbd3
        mov     ecx, dword ptr [esi + 0x174]
        sub     ecx, eax
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
        jne     loc_4dcbd9
    loc_4dcbd3:
        call    dword ptr [mem_00925134]
    loc_4dcbd9:
        mov     edi, dword ptr [esp + 0x54]
        mov     ecx, dword ptr [esi + 0x170]
        push    edi
        call    dword ptr [mem_00924FDC]
        push    edi
        lea     ecx, [esi + 0x3e8]
        call    ext_004EE590
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    ext_004D4060
        lea     edx, [esp + 0xc]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x50], 0x0
        call    ext_004D40E0
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x50], 0x1
        call    ext_004DBBE0
        mov     ecx, dword ptr [esi + 0x168]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    ext_004D9480
        mov     ecx, esi
        call    ext_004C0340
        lea     ecx, [esp + 0xc]
        mov     byte ptr [esp + 0x4c], 0x0
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x4c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x44]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x48
        ret     0x4
    }
}

// [0x004DCC80] sub_004DCC80 (235 bytes)
extern "C" void ext_004C0340();
extern "C" void ext_004D4060();
extern "C" void ext_004D40E0();
extern "C" void ext_004D9480();
extern "C" void ext_004DBBE0();
extern "C" void ext_004EE590();
extern "C" int mem_00925134;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004DCC80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b2ae2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x170]
        test eax, eax
        push edi
        je invalid_path
        mov ecx, dword ptr [esi + 0x174]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        ja ok_path
    invalid_path:
        call dword ptr [mem_00925134]
    ok_path:
        mov ecx, dword ptr [esi + 0x170]
        mov edi, dword ptr [esp + 0x50]
        push edi
        add ecx, 0x1c
        call dword ptr [mem_00924FDC]
        push edi
        lea ecx, [esi + 0x398]
        call ext_004EE590
        lea eax, [esp + 0x24]
        push eax
        mov ecx, esi
        call ext_004D4060
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x4c], 0x0
        call ext_004D40E0
        lea edx, [esp + 0x24]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x4c], 0x1
        call ext_004DBBE0
        mov eax, dword ptr [esi + 0x168]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_004D9480
        mov ecx, esi
        call ext_004C0340
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x48], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x48], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret 0x4
    }
}
