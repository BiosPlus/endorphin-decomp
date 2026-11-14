// Decompiled translation unit: src/leaf/decompiled_560000.cpp

// [0x005651A0] sub_005651A0 (15 bytes)
extern "C" void __stdcall ext_00564530(int, int);

extern "C" void __stdcall fn_005651A0(int a1) {
    ext_00564530(a1, 2);
}

// [0x00563220] sub_00563220 (24 bytes)
extern "C" int __fastcall ext_007C5610(void* self);

extern "C" unsigned char __fastcall fn_00563220(void* self, int edx_unused, int a1) {
    unsigned char result = 0;
    if (a1) {
        result = (ext_007C5610((void*)a1) == 0x14) ? 1 : 0;
    }
    return result;
}

// [0x00563240] sub_00563240 (24 bytes)
extern "C" unsigned char __stdcall fn_00563240(int a1) {
    unsigned char result = 0;
    if (a1) {
        result = (ext_007C5610((void*)a1) == 0x13) ? 1 : 0;
    }
    return result;
}

// [0x00563260] sub_00563260 (24 bytes)
extern "C" int __fastcall ext_007C5610(void* self);

extern "C" unsigned char __stdcall fn_00563260(void* p) {
    unsigned char r = 0;
    if (p) {
        r = (ext_007C5610(p) == 0x12) ? 1 : 0;
    }
    return r;
}

// [0x0056D820] sub_0056D820 (25 bytes)
extern "C" void ext_00558C10();
extern "C" void* __fastcall fn_0056D820(void* self) {
    ext_00558C10();
    *(unsigned int*)self = 0x009578D4;
    *((unsigned int*)self + 1) = 0x009578C8;
    return self;
}

// [0x00566380] sub_00566380 (25 bytes)
extern "C" void ext_00565120();
extern "C" void ext_00565F00();
extern "C" __declspec(naked) int __fastcall fn_00566380(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_00565120
        push eax
        mov ecx, esi
        call ext_00565F00
        pop esi
        ret 4
    }
}

// [0x0056CDF0] sub_0056CDF0 (25 bytes)
extern "C" void __fastcall ext_00569D10(void* self);
extern "C" void ext_006A5C5C(void* a1);
extern "C" void __fastcall fn_0056CDF0(void* self) {
    void* p = *(void**)self;
    if (!p) {
        return;
    }
    ext_00569D10(p);
    ext_006A5C5C(p);
}

// [0x0056CE10] sub_0056CE10 (25 bytes)
extern "C" void __fastcall ext_00569D90(void* self);
extern "C" void ext_006A5C5C(void* a1);
extern "C" void __fastcall fn_0056CE10(void* self) {
    void* p = *(void**)self;
    if (!p) {
        return;
    }
    ext_00569D90(p);
    ext_006A5C5C(p);
}

// [0x005694F0] sub_005694F0 (27 bytes)
extern "C" void __cdecl ext_005693E0(int a1, int a2, void* self, int a4);
extern "C" __declspec(naked) void __fastcall fn_005694F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_005693E0
        add esp, 0x10
        ret 8
    }
}

// [0x005649D0] sub_005649D0 (34 bytes)
extern "C" void ext_007C569A();
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) bool __fastcall fn_005649D0(void* self, int edx_unused, void* str) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 494h]
        push eax
        call ext_007C569A
        test eax, eax
        sete al
        pop esi
        ret 4
    }
}

// [0x00563430] sub_00563430 (34 bytes)
extern "C" void ext_007C562E();
extern "C" void ext_007C5634();
extern "C" void __fastcall fn_00563430(void* ecx_unused, void* edx_unused, void* self, unsigned char visibility) {
    if (self == 0) return;
    void* vis = ((void* (__thiscall*)(void*))ext_007C5634)(self);
    if (vis == 0) return;
    ((void (__thiscall*)(void*, unsigned short))ext_007C562E)(vis, (unsigned short)visibility);
}

// [0x005631F0] sub_005631F0 (35 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_005631F0(void* ecx_unused, int edx_unused, void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        xor al, al
        test ecx, ecx
        je done
        call ext_007C5610
        cmp eax, 0x1b
        je yes
        cmp eax, 0x1c
        je yes
        xor al, al
        ret 4
    yes:
        mov al, 1
    done:
        ret 4
    }
}

// [0x005650F0] sub_005650F0 (39 bytes)
extern "C" void ext_007C5712();
extern "C" void ext_007C570C();
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_005650F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x478]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x494]
        push eax
        call ext_007C5712
        mov ecx, dword ptr [esi + 0x494]
        pop esi
        jmp ext_007C570C
    }
}

// [0x00564FE0] sub_00564FE0 (39 bytes)
extern "C" void ext_007C56E8();
extern "C" void ext_007C56E2();
extern "C" int mem_00924FF0;
extern "C" __declspec(naked) void __fastcall fn_00564FE0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x494]
        push esi
        call ext_007C56E8
        mov esi, eax
        test esi, esi
        je done
        mov ecx, 0B39FA0h
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, esi
        call ext_007C56E2
done:
        pop esi
        ret
    }
}

// [0x0056B900] sub_0056B900 (41 bytes)
extern "C" __declspec(naked) int __fastcall fn_0056B900(void* self) {
    __asm {
        mov edx, dword ptr [ecx + 0x28]
        test edx, edx
        jne short L_nonzero
        xor eax, eax
        mov ecx, 1
        cmp ecx, eax
        sbb eax, eax
        neg eax
        ret
    L_nonzero:
        mov eax, dword ptr [ecx + 0x2c]
        sub eax, edx
        sar eax, 2
        mov ecx, 1
        cmp ecx, eax
        sbb eax, eax
        neg eax
        ret
    }
}

// [0x005631C0] sub_005631C0 (43 bytes)
extern "C" int __cdecl fn_005631C0(double a1, double a2) {
    if (a1 < a2 && -a2 < a1) {
        return 1;
    }
    return 0;
}

// [0x0056B670] sub_0056B670 (31 bytes)
extern "C" int __cdecl ext_005631C0(double, double);

extern "C" int __cdecl fn_0056B670(double a1, double a2, double a3) {
    return ext_005631C0(a1 - a2, a3);
}

// [0x00567040] sub_00567040 (45 bytes)
extern "C" int mem_00958C0C;

extern "C" __declspec(naked) void __fastcall fn_00567040(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], offset mem_00958C0C
        mov dl, byte ptr [ecx + 0x4]
        mov byte ptr [eax + 0x4], dl
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [ecx + 0x10]
        fstp dword ptr [eax + 0x10]
        fld dword ptr [ecx + 0x14]
        fstp dword ptr [eax + 0x14]
        ret 0x4
    }
}

// [0x005632F0] sub_005632F0 (51 bytes)
extern "C" void ext_005631F0();
extern "C" void ext_00563220();

extern "C" __declspec(naked) int __fastcall fn_005632F0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov esi, ecx
        je L_fail_005632F0
        push edi
        call ext_005631F0
        test al, al
        jne L_ok_005632F0
        push edi
        mov ecx, esi
        call ext_00563220
        test al, al
        je L_fail_005632F0
L_ok_005632F0:
        pop edi
        mov eax, 1
        pop esi
        ret 4
L_fail_005632F0:
        pop edi
        xor eax, eax
        pop esi
        ret 4
    }
}

// [0x005637D0] sub_005637D0 (59 bytes)
extern "C" void ext_00563220();
extern "C" void ext_00563240();
extern "C" void ext_00563260();

extern "C" __declspec(naked) void __fastcall fn_005637D0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_00563220
        test al, al
        jne L_match_005637D0
        push edi
        mov ecx, esi
        call ext_00563240
        test al, al
        jne L_match_005637D0
        push edi
        mov ecx, esi
        call ext_00563260
        test al, al
        jne L_match_005637D0
        pop edi
        xor eax, eax
        pop esi
        ret 4
L_match_005637D0:
        pop edi
        mov eax, 1
        pop esi
        ret 4
    }
}

// [0x00569470] sub_00569470 (64 bytes)
extern "C" void ext_00681250();
extern "C" __declspec(naked) int __fastcall fn_00569470(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x10]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov byte ptr [esp + 0xc], 0
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_00681250
        sub esi, ebx
        add esp, 018h
        sar esi, 4
        shl esi, 4
        mov eax, edi
        pop edi
        sub eax, esi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}

// [0x00565010] sub_00565010 (67 bytes)
extern "C" void ext_007C56AC();
extern "C" void ext_007C56EE();

extern "C" __declspec(naked) void __fastcall fn_00565010(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x494]
        call ext_007C56AC
        mov esi, eax
        test esi, esi
        je done
        push 0
        mov ecx, esi
        call ext_007C56EE
        mov edi, dword ptr [edi + 0x194]
        test edi, edi
        jne nonzero
        push edi
        mov ecx, esi
        call ext_007C56EE
        pop edi
        pop esi
        ret
nonzero:
        cmp edi, 1
        jne done
        push edi
        mov ecx, esi
        call ext_007C56EE
done:
        pop edi
        pop esi
        ret
    }
}

// [0x0056B800] sub_0056B800 (68 bytes)
extern "C" void ext_00553960();
extern "C" void ext_006A6E9E();

typedef void* (__cdecl *RTDynCastFn56B800)(void*, int, void*, void*, int);
typedef unsigned char (__thiscall *SubFn56B800)(void*, void*);

extern "C" int __fastcall fn_0056B800(void* self, int edx_unused, void* a1) {
    void* r = ((RTDynCastFn56B800)ext_006A6E9E)(a1, 0, (void*)0x00A2FBBC, (void*)0x00A36694, 0);
    if (a1 != 0 && r == 0) {
        if (!((SubFn56B800)ext_00553960)(self, a1)) {
            return 1;
        }
    }
    return 0;
}

// [0x00566FF0] sub_00566FF0 (73 bytes)
extern "C" void ext_00610AF0();
extern "C" void ext_00661980();
extern "C" __declspec(naked) void __fastcall fn_00566FF0(void* self) {
    __asm {
        push -1
        push 0x00891E68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00661980
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x00958C0C
        call ext_00610AF0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005634D0] sub_005634D0 (75 bytes)
extern "C" int mem_00925754;
extern "C" int mem_00925750;
extern "C" int mem_0092574C;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __stdcall fn_005634D0(void* a1, void* a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x10]
        add esi, 4
        push 0x928b5d
        mov ecx, esi
        mov dword ptr [esp + 8], 0
        call dword ptr [mem_00925754]
        test al, al
        je short skip_assign
        push 0xb39fd8
        mov ecx, esi
        call dword ptr [mem_00925750]
    skip_assign:
        mov ecx, esi
        call dword ptr [mem_0092574C]
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x00564600] sub_00564600 (81 bytes)
extern "C" void ext_007C569A();
extern "C" int mem_00924FF0;
extern "C" __declspec(naked) void __fastcall fn_00564600(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x27c]
        mov edx, dword ptr [eax + 0x84]
        lea ecx, [esi + 0x27c]
        call edx
        cmp dword ptr [esi + 0x424], 0
        je skip_release
        mov ecx, dword ptr [esi + 0x424]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        push 0xb39f84
        call edx
skip_release:
        mov ecx, dword ptr [esp + 8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x494]
        push eax
        call ext_007C569A
        test eax, eax
        sete al
        pop esi
        ret 4
    }
}

// [0x005693E0] sub_005693E0 (82 bytes)
extern "C" int mem_00924FF4;

struct Range16_005693E0 {
    int pad0;
    char* begin;
    char* end;
    int cap;
};

extern "C" void __cdecl fn_005693E0(Range16_005693E0* first, Range16_005693E0* last) {
    for (; first != last; ++first) {
        char* begin = first->begin;
        if (begin != 0) {
            char* end = first->end;
            if (begin != end) {
                do {
                    ((void (__thiscall*)(void*))mem_00924FF4)(begin);
                    begin += 0x1c;
                } while (begin != end);
            }
            ext_006A5C5C(first->begin);
        }
        first->begin = 0;
        first->end = 0;
        first->cap = 0;
    }
}

// [0x00569970] sub_00569970 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_00569970(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_00569970
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_005693E0
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_00569970:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x00563330] sub_00563330 (97 bytes)
extern "C" void ext_005632F0();
extern "C" void ext_007C5616();
extern "C" void ext_007C561C();

extern "C" __declspec(naked) int __fastcall fn_00563330(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        xor eax, eax
        test esi, esi
        mov ebp, ecx
        mov dword ptr [esp + 0x8], eax
        je L_zero_00563330
        push ebx
        push edi
        mov ecx, esi
        call ext_007C561C
        mov ecx, esi
        mov edi, eax
        call ext_007C5616
        xor esi, esi
        test edi, edi
        mov ebx, eax
        jle L_none_00563330
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_loop_00563330:
        mov eax, dword ptr [ebx + 4*esi]
        push eax
        mov ecx, ebp
        call ext_005632F0
        test al, al
        je L_skip_00563330
        add dword ptr [esp + 0x10], 1
L_skip_00563330:
        add esi, 1
        cmp esi, edi
        jl L_loop_00563330
        mov eax, dword ptr [esp + 0x10]
        pop edi
        pop ebx
        pop esi
        pop ebp
        pop ecx
        ret 4
L_none_00563330:
        pop edi
        mov eax, esi
        pop ebx
L_zero_00563330:
        pop esi
        pop ebp
        pop ecx
        ret 4
    }
}

// [0x00564660] sub_00564660 (100 bytes)
extern "C" void ext_007C56A6();
extern "C" void ext_007C56A0();
extern "C" void ext_007C564C();

typedef void* (__fastcall* FnPtrP)(void*);
typedef int (__fastcall* FnPtrI)(void*);

extern "C" void __fastcall fn_00564660(void* self) {
    unsigned char* s = (unsigned char*)self;
    void* angle = ((FnPtrP)ext_007C56AC)(*(void**)(s + 0x494));
    if (angle) {
        int t = ((FnPtrI)ext_007C56A6)(angle);
        if (t == 0) {
            *(int*)(s + 0x84) = t;
        } else {
            t = ((FnPtrI)ext_007C56A6)(angle);
            if (t == 1) {
                *(int*)(s + 0x84) = t;
            }
        }
    }
    s[0x70] = 1;
    void* cs = ((FnPtrP)ext_007C56A0)(*(void**)(s + 0x494));
    if (cs) {
        if (((FnPtrI)ext_007C564C)((unsigned char*)cs + 0x88) == 2) {
            s[0x70] = 0;
        }
    }
}

// [0x00563280] sub_00563280 (103 bytes)
extern "C" __declspec(naked) int __fastcall fn_00563280(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push edi
        mov esi, ecx
        call ext_00563220
        test al, al
        jne L_set1
        push edi
        mov ecx, esi
        call ext_00563240
        test al, al
        jne L_set1
        push edi
        mov ecx, esi
        call ext_00563260
        test al, al
        jne L_set1
        xor bl, bl
        jmp L_after1
    L_set1:
        mov bl, 1
    L_after1:
        mov edi, dword ptr [esp + 0x14]
        push edi
        mov ecx, esi
        call ext_00563240
        test al, al
        jne L_set2
        push edi
        mov ecx, esi
        call ext_00563260
        test al, al
        je L_after2
    L_set2:
        mov al, 1
    L_after2:
        pop edi
        pop esi
        test bl, bl
        pop ebx
        je L_zero
        test al, al
        je L_zero
        mov eax, 1
        ret 8
    L_zero:
        xor eax, eax
        ret 8
    }
}

// [0x0056B850] sub_0056B850 (106 bytes)
extern "C" void ext_00584BD0();
extern "C" int mem_00924FB0;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FD0;
extern "C" int mem_00B3A9F4;

extern "C" __declspec(naked) void __fastcall fn_0056B850(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        mov dword ptr [esp + 0x4], 0
        call edx
        push eax
        mov ecx, esi
        call ext_00584BD0
        push eax
        call dword ptr [mem_00924FB0]
        add esp, 8
        test al, al
        mov ecx, esi
        je f0056B850_alt
        call ext_00584BD0
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    f0056B850_alt:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        push offset mem_00B3A9F4
        call edx
        mov esi, dword ptr [esp + 0x10]
        push eax
        push esi
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

extern "C" int mem_009250EC;
extern "C" int mem_009250E4;
extern "C" int mem_009250E8;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FD8;
extern "C" int mem_00924EC0;

// [0x00566F70] sub_00566F70 (109 bytes)
// Reads chars from the istream until ':' is seen; on ':' puts it back, reads a word into this+4 and returns true if it equals the literal at 0x958BFC, else appends it to *(this)+0x3c and loops. Otherwise appends the char to *(this)+0x3c. ret 4.
extern "C" __declspec(naked) void __fastcall fn_00566F70(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_009250EC]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov ebx, ecx
    loop_top:
        mov ecx, edi
        call dword ptr [mem_009250E4]
        cmp al, 0x3a
        mov byte ptr [esp + 0x14], al
        jne not_colon
        push 0x3a
        mov ecx, edi
        call dword ptr [mem_009250E8]
        lea esi, [ebx + 0x4]
        push esi
        push edi
        call ebp
        push 0x958bfc
        push esi
        call dword ptr [mem_00924FC0]
        add esp, 0x10
        test al, al
        jne done_true
        mov ecx, dword ptr [ebx]
        push esi
        add ecx, 0x3c
        call dword ptr [mem_00924FD8]
        jmp loop_top
    not_colon:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ebx]
        push eax
        add ecx, 0x3c
        call dword ptr [mem_00924EC0]
        jmp loop_top
    done_true:
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x00565120] sub_00565120 (117 bytes)
extern "C" void ext_007C56D0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00565120(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x30]
        call ext_00584BD0
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], 0
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x494]
        push eax
        call ext_007C56D0
        lea ecx, [esp + 0x4]
        mov esi, eax
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x0056B690] sub_0056B690 (123 bytes)
extern "C" int __cdecl ext_0056B670(double, double, double);

extern "C" __declspec(naked) bool __fastcall fn_0056B690(float* self, int edx_unused, float a1, float a2, float a3, double a4) {
    __asm {
        fld qword ptr [esp + 0x10]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x1c]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [ecx]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        je RET_FALSE
        fld qword ptr [esp + 0x10]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x20]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x4]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        je RET_FALSE
        fld qword ptr [esp + 0x10]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x24]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x8]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        je RET_FALSE
        mov eax, 0x1
        ret 0x14
    RET_FALSE:
        xor eax, eax
        ret 0x14
    }
}

// [0x00565060] sub_00565060 (129 bytes)
extern "C" void ext_007C5706();
extern "C" void ext_007C5694();
extern "C" void ext_007C5700();
extern "C" void ext_007C56FA();
extern "C" void ext_007C56F4();

extern "C" __declspec(naked) void __fastcall fn_00565060(void* self) {
    __asm {
        sub esp, 0ch
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 494h]
        call ext_007C5706
        mov esi, eax
        test esi, esi
        je done
        mov eax, dword ptr [edi + 16ch]
        fld dword ptr [edi + 174h]
        mov ecx, dword ptr [edi + 170h]
        fstp dword ptr [esp + 8]
        mov edx, dword ptr [esi + 4ch]
        mov dword ptr [esi + 50h], 1
        mov dword ptr [esp + 0ch], eax
        mov eax, dword ptr [edx]
        mov dword ptr [esp + 10h], ecx
        mov ecx, dword ptr [eax + 4]
        push ecx
        lea ecx, [esi + 54h]
        call ext_007C5694
        fld dword ptr [esp + 8]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_007C5700
        fild dword ptr [esp + 0ch]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_007C56FA
        fild dword ptr [esp + 10h]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_007C56F4
    done:
        pop edi
        pop esi
        add esp, 0ch
        ret
    }
}

// [0x00567070] sub_00567070 (130 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void* __fastcall fn_00567070(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x8]
        cmp esi, dword ptr [ecx + 0xc]
        push edi
        lea edi, [ecx + 0x4]
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov eax, dword ptr [esi]
        add eax, 0x8
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

// [0x00567100] sub_00567100 (130 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void* __fastcall fn_00567100(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x18]
        cmp esi, dword ptr [ecx + 0x1c]
        push edi
        lea edi, [ecx + 0x14]
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov eax, dword ptr [esi]
        add eax, 0x8
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

// [0x005633A0] sub_005633A0 (130 bytes)
extern "C" void ext_007C5622();
extern "C" void ext_007C5628();
extern "C" __declspec(naked) void __fastcall fn_005633A0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov ecx, dword ptr [esp + 0x30]
        push esi
        push edi
        call ext_00584BD0
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF0]
        mov edi, dword ptr [esp + 0x34]
        mov esi, eax
        push esi
        mov ecx, edi
        call ext_007C5628
        mov ecx, edi
        call ext_007C5622
        push esi
        mov ecx, eax
        call ext_007C5628
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 8
    }
}

// [0x00563740] sub_00563740 (144 bytes)
extern "C" void ext_005634D0();
extern "C" int mem_00924E48;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00563740(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x34]
        test esi, esi
        mov ebx, ecx
        je short epilogue
        push edi
        mov edi, dword ptr [esp + 0x3c]
        test edi, edi
        je short pop_edi
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        call edx
        push 0x928b5d
        mov ecx, eax
        call dword ptr [mem_00924E48]
        test eax, eax
        jne short pop_edi
        push edi
        lea eax, [esp + 0x10]
        push eax
        mov ecx, ebx
        call ext_005634D0
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x5c]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0
        call edx
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], -1
        call dword ptr [mem_00924FF4]
pop_edi:
        pop edi
epilogue:
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 8
    }
}

// [0x00564530] sub_00564530 (164 bytes)
extern "C" int mem_00925818;
extern "C" int mem_0092581C;

extern "C" __declspec(naked) int __fastcall fn_00564530(void* self, int edx_unused, int n, int m) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp+0xc]
        mov esi, ecx
        cmp dword ptr [esi+4], edi
        jl L564530_alloc
        mov ecx, dword ptr [esi+8]
        mov dword ptr [esi], edi
        lea eax, [edi+edi]
        mov dword ptr [ecx+8], eax
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        ret 8
L564530_alloc:
        push ebx
        push ebp
        mov ebp, edi
        imul ebp, dword ptr [esp+0x18]
        lea edx, [ebp+ebp]
        push edx
        push 4
        mov dword ptr [esp+0x20], ebp
        call dword ptr [mem_00925818]
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        je L564530_fail
        mov eax, dword ptr [esi+8]
        mov ecx, dword ptr [eax+0x10]
        xor edx, edx
        cmp dword ptr [esi], edx
        mov dword ptr [esp+0x14], ecx
        jle L564530_nocopy
        mov eax, ebx
        sub ecx, ebx
L564530_loop:
        mov ebp, dword ptr [ecx+eax]
        mov dword ptr [eax], ebp
        mov ebp, dword ptr [ecx+eax+4]
        mov dword ptr [eax+4], ebp
        add edx, 1
        add eax, 8
        cmp edx, dword ptr [esi]
        jl L564530_loop
        mov ecx, dword ptr [esp+0x14]
        mov ebp, dword ptr [esp+0x18]
L564530_nocopy:
        push ecx
        call dword ptr [mem_0092581C]
        mov ecx, dword ptr [esi+8]
        mov dword ptr [ecx+0x10], ebx
        mov eax, dword ptr [esi+8]
        add esp, 4
        lea edx, [edi+edi]
        mov dword ptr [eax+8], edx
        mov dword ptr [esi+4], ebp
        pop ebp
        pop ebx
        mov dword ptr [esi], edi
        mov eax, edi
        pop edi
        pop esi
        ret 8
L564530_fail:
        mov eax, dword ptr [esi]
        pop ebp
        pop ebx
        pop edi
        pop esi
        ret 8
    }
}

// [0x00564E60] sub_00564E60 (165 bytes)
extern "C" void ext_007C56CA();
extern "C" void ext_007C56D0();
extern "C" int mem_00924FE0;
extern "C" int mem_009250F4;
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00564E60(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, ecx
        lea eax, [edi + 0xac]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE0]
        push 0xb39b5c
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0
        call dword ptr [mem_009250F4]
        test eax, eax
        jne short L_00564EB7
        push 0x928b5d
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FD4]
    L_00564EB7:
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [edi + 0x494]
        push eax
        call ext_007C56D0
        mov esi, eax
        test esi, esi
        jne short L_00564EE0
        mov ecx, dword ptr [edi + 0x494]
        call ext_007C56CA
        mov esi, eax
    L_00564EE0:
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00560920] sub_00560920 (175 bytes)
extern "C" void ext_0055F340();
extern "C" void ext_00560270();
extern "C" int mem_00925134;

extern "C" __declspec(naked) unsigned char __fastcall fn_00560920(void* self, int edx_unused, float* key) {
    __asm {
        sub esp, 12
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov byte ptr [esp + 12], 0
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        push edi
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        mov eax, dword ptr [esp + 16]
        mov ebp, dword ptr [esp + 32]
        push 0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 44], edi
        call ext_0055F340
        mov edi, dword ptr [esi + 8]
        add esp, 20
        cmp dword ptr [esi + 4], edi
        mov ebx, eax
        jbe L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        test esi, esi
        je L_chk4
        cmp esi, esi
        je L_chk5
    L_chk4:
        call dword ptr [mem_00925134]
    L_chk5:
        cmp ebx, edi
        pop edi
        je L_ret_true
        test esi, esi
        jne L_chk6
        call dword ptr [mem_00925134]
    L_chk6:
        cmp ebx, dword ptr [esi + 8]
        jb L_cmp
        call dword ptr [mem_00925134]
    L_cmp:
        fld dword ptr [ebp]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah, 41h
        je L_ret_true
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 12
        ret 4
    L_ret_true:
        push ebp
        push ebx
        push esi
        lea ecx, [esp + 28]
        push ecx
        mov ecx, esi
        call ext_00560270
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 12
        ret 4
    }
}

// [0x00564F10] sub_00564F10 (198 bytes)
extern "C" void ext_00553760();
extern "C" void ext_00662120();
extern "C" void ext_006629B0();
extern "C" void ext_007C569A();
extern "C" void ext_007C56D6();
extern "C" void ext_007C56DC();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00564F10(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x478]
        call dword ptr [mem_00924FDC]
        mov ecx, esi
        call ext_00553760
        mov ecx, dword ptr [esi + 0x420]
        mov byte ptr [esi + 0x46c], al
        call ext_00662120
        mov ecx, dword ptr [esi + 0x424]
        test ecx, ecx
        je L_00564F6D
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xc]
        push 0xb39d8c
        call eax
        mov eax, dword ptr [esi + 0x170]
        mov ecx, dword ptr [esi + 0x424]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x8]
        push eax
        mov eax, dword ptr [esi + 0x16c]
        push eax
        call edx
    L_00564F6D:
        cmp byte ptr [esi + 0x214], 0
        je L_00564FBE
        lea eax, [esi + 0x1f8]
        push eax
        call ext_006629B0
        add esp, 0x4
        test al, al
        je L_00564FBE
        lea ecx, [esi + 0x1f8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x494]
        push eax
        call ext_007C569A
        test eax, eax
        sete al
        test al, al
        je L_00564FD2
        mov ecx, dword ptr [esi + 0x494]
        call ext_007C56DC
        test eax, eax
        sete al
        pop esi
        ret 0x4
    L_00564FBE:
        mov ecx, dword ptr [esi + 0x494]
        push 0x3c
        push 0x3
        call ext_007C56D6
        test eax, eax
        sete al
    L_00564FD2:
        pop esi
        ret 0x4
    }
}

// [0x00569BB0] sub_00569BB0 (200 bytes)
extern "C" __declspec(naked) void __fastcall fn_00569BB0(void* self) {
    __asm {
        push -1
        push 0x89bd72
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], edi
        mov eax, dword ptr [edi + 0x48]
        lea esi, [edi + 0x44]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x18], 0x2
        je L_569BFF
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_005693E0
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_569BFF:
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov eax, dword ptr [edi + 0x38]
        cmp eax, ebx
        lea esi, [edi + 0x34]
        mov byte ptr [esp + 0x18], 0x1
        je L_569C33
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_005693E0
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_569C33:
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov eax, dword ptr [edi + 0x28]
        cmp eax, ebx
        je L_569C4C
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_569C4C:
        lea ecx, [edi + 0x8]
        mov dword ptr [edi + 0x28], ebx
        mov dword ptr [edi + 0x2c], ebx
        mov dword ptr [edi + 0x30], ebx
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

// [0x00569D90] sub_00569D90 (91 bytes)
extern "C" void ext_00569BB0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00569D90(void* self) {
    __asm {
        push -1
        push 0x0089BE94
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x70]
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00569BB0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00569D10] sub_00569D10 (120 bytes)
extern "C" void ext_00569BB0();
extern "C" void ext_006A6D5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00569D10(void* self) {
    __asm {
        push -1
        push 0x0089BDAC
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x1e8]
        mov dword ptr [esp + 0x10], 0x2
        call dword ptr [mem_00924FF4]
        push 0x005B1130
        push 0x0e
        push 0x18
        lea eax, [esi + 0x8c]
        push eax
        mov byte ptr [esp + 0x20], 0x1
        call ext_006A6D5C
        lea ecx, [esi + 0x70]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00569BB0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0056AC20] sub_0056AC20 (98 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0056AC20(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
    f56ac20_top:
        test esi, esi
        je f56ac20_call1
        cmp esi, dword ptr [esp + 0x1c]
        je f56ac20_after1
    f56ac20_call1:
        call ebp
    f56ac20_after1:
        cmp ebx, dword ptr [esp + 0x20]
        je f56ac20_ret
        test esi, esi
        mov edi, ebx
        jne f56ac20_a
        call ebp
    f56ac20_a:
        cmp ebx, dword ptr [esi + 0x8]
        jb f56ac20_b
        call ebp
    f56ac20_b:
        add ebx, 0x4
        test esi, esi
        jne f56ac20_c
        call ebp
    f56ac20_c:
        cmp edi, dword ptr [esi + 0x8]
        jb f56ac20_d
        call ebp
    f56ac20_d:
        mov edi, dword ptr [edi]
        test edi, edi
        je f56ac20_top
        mov ecx, edi
        call ext_00569D10
        push edi
        call ext_006A5C5C
        add esp, 0x4
        jmp f56ac20_top
    f56ac20_ret:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x0056AC90] sub_0056AC90 (196 bytes)
extern "C" void ext_00569BB0();
extern "C" void ext_006A5C5C(void* a1);
extern "C" int mem_00925134;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0056AC90(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89bf64
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
    L_0056ACB1:
        test edi, edi
        je L_0056ACBB
        cmp edi, dword ptr [esp + 0x28]
        je L_0056ACC1
    L_0056ACBB:
        call dword ptr [mem_00925134]
    L_0056ACC1:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_0056AD3F
        test edi, edi
        mov esi, edi
        mov ebp, ebx
        jne L_0056ACD5
        call dword ptr [mem_00925134]
    L_0056ACD5:
        cmp ebx, dword ptr [edi + 0x8]
        jb L_0056ACE0
        call dword ptr [mem_00925134]
    L_0056ACE0:
        add ebx, 0x4
        test esi, esi
        jne L_0056ACED
        call dword ptr [mem_00925134]
    L_0056ACED:
        cmp ebp, dword ptr [esi + 0x8]
        jb L_0056ACF8
        call dword ptr [mem_00925134]
    L_0056ACF8:
        mov esi, dword ptr [ebp]
        test esi, esi
        mov dword ptr [esp + 0x20], esi
        je L_0056ACB1
        lea ecx, [esi + 0x70]
        mov dword ptr [esp + 0x18], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x18], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x18], -1
        call ext_00569BB0
        push esi
        call ext_006A5C5C
        add esp, 0x4
        jmp L_0056ACB1
    L_0056AD3F:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret 0x10
    }
}

// [0x0056AFE0] sub_0056AFE0 (90 bytes)
extern "C" void ext_0056AC20();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0056AFE0(void* self) {
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
        jbe m56afe0_ok1
        call ebp
    m56afe0_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m56afe0_ok2
        call ebp
    m56afe0_ok2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_0056AC20
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m56afe0_ok3
        call ebp
    m56afe0_ok3:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m56afe0_ok4
        call ebp
    m56afe0_ok4:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0056B0C0] sub_0056B0C0 (90 bytes)
extern "C" void ext_0056AC90();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0056B0C0(void* self) {
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
        jbe m56b0c0_ok1
        call ebp
    m56b0c0_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m56b0c0_ok2
        call ebp
    m56b0c0_ok2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_0056AC90
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m56b0c0_ok3
        call ebp
    m56b0c0_ok3:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m56b0c0_ok4
        call ebp
    m56b0c0_ok4:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0056AF60] sub_0056AF60 (121 bytes)
extern "C" __declspec(naked) void __fastcall fn_0056AF60(void* self) {
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
        call ext_0056AC20
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebp
        pop ebx
        je L_skip
        push eax
        call ext_006A5C5C
        add esp, 4
    L_skip:
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

// [0x0056B040] sub_0056B040 (121 bytes)
extern "C" void ext_0056AC90();

extern "C" __declspec(naked) void __fastcall fn_0056B040(void* self) {
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
        call ext_0056AC90
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebp
        pop ebx
        je L_skip
        push eax
        call ext_006A5C5C
        add esp, 4
    L_skip:
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

extern "C" void ext_00406510();
extern "C" void ext_0056AFE0();
extern "C" void ext_0056B0C0();
extern "C" int mem_00959050;
extern "C" int mem_00924EA8;
extern "C" int mem_00925134;

// [0x0056B360] sub_0056B360 (135 bytes)
extern "C" __declspec(naked) void __fastcall fn_0056B360(void* self) {
    __asm {
        fld dword ptr [mem_00959050]
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        fstp dword ptr [esi]
        xor eax, eax
        fld1
        push edi
        fst dword ptr [esi + 0x28]
        lea ecx, [esi + 0x14]
        fst dword ptr [esi + 0x2c]
        mov dword ptr [esi + 0x30], eax
        fstp dword ptr [esi + 0x24]
        mov dword ptr [esi + 0x34], eax
        mov dword ptr [esi + 0x38], eax
        call ext_0056B0C0
        lea ecx, [esi + 0x4]
        call ext_0056AFE0
        lea ecx, [esi + 0x58]
        call dword ptr [mem_00924EA8]
        lea ecx, [esi + 0x3c]
        call dword ptr [mem_00924EA8]
        mov ebp, dword ptr [esi + 0x7c]
        cmp dword ptr [esi + 0x78], ebp
        lea edi, [esi + 0x74]
        jbe short L_ok1
        call dword ptr [mem_00925134]
L_ok1:
        mov ebx, dword ptr [edi + 0x4]
        cmp ebx, dword ptr [edi + 0x8]
        jbe short L_ok2
        call dword ptr [mem_00925134]
L_ok2:
        push ebp
        push edi
        push ebx
        push edi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, edi
        call ext_00406510
        pop edi
        mov byte ptr [esi + 0x84], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

extern "C" void ext_004026E0();
extern "C" void ext_0056AF60();
extern "C" void ext_0056B040();
extern "C" int mem_00924FF4;

// [0x0056B2E0] sub_0056B2E0 (118 bytes)
extern "C" __declspec(naked) void __fastcall fn_0056B2E0(void* self) {
    __asm {
        push -1
        push 0x89bfbe
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x74]
        mov dword ptr [esp + 0x10], 0x3
        call ext_004026E0
        lea ecx, [esi + 0x58]
        mov byte ptr [esp + 0x10], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x3c]
        mov byte ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x14]
        mov byte ptr [esp + 0x10], 0x0
        call ext_0056B040
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0056AF60
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_0056B360();
extern "C" int mem_00924FE8;

// [0x0056B5D0] sub_0056B5D0 (145 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0056B5D0(void* self) {
    __asm {
        push -1
        push 0x89c039
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi + 0x8], edi
        mov dword ptr [esi + 0xc], edi
        mov dword ptr [esi + 0x10], edi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi + 0x18], edi
        mov dword ptr [esi + 0x1c], edi
        mov dword ptr [esi + 0x20], edi
        fld1
        fst dword ptr [esi + 0x28]
        lea ecx, [esi + 0x3c]
        fst dword ptr [esi + 0x2c]
        mov byte ptr [esp + 0x14], 0x1
        fstp dword ptr [esi + 0x24]
        mov dword ptr [esi + 0x30], edi
        mov dword ptr [esi + 0x34], edi
        mov dword ptr [esi + 0x38], edi
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x58]
        mov byte ptr [esp + 0x14], 0x2
        call dword ptr [mem_00924FE8]
        mov dword ptr [esi + 0x78], edi
        mov dword ptr [esi + 0x7c], edi
        mov dword ptr [esi + 0x80], edi
        mov ecx, esi
        mov byte ptr [esp + 0x14], 0x4
        call ext_0056B360
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0056D960] sub_0056D960 (201 bytes)
// Builds a std::string in the hidden return buffer (a1): *self + "lit1" + *self + "lit2" + *self,
// with an SEH frame around the temporaries; returns the buffer in eax.
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void* __fastcall fn_0056D960(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b4d95
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x58
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 0x92ab78
        lea eax, [esp + 0x4c]
        mov dword ptr [esp + 0x10], 0
        mov edi, dword ptr [mem_00924ECC]
        push esi
        push eax
        call edi
        mov ebp, dword ptr [mem_00924FD0]
        push esi
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        mov dword ptr [esp + 0x84], 1
        call ebp
        push 0x92ab78
        push eax
        lea edx, [esp + 0x30]
        push edx
        mov byte ptr [esp + 0x90], 2
        call edi
        push esi
        mov esi, dword ptr [esp + 0x9c]
        push eax
        push esi
        mov byte ptr [esp + 0x9c], 3
        call ebp
        add esp, 0x30
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 1
        mov byte ptr [esp + 0x6c], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x6c], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x6c], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x64]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x64
        ret 0x4
    }
}

// [0x00563520] sub_00563520 (210 bytes)
extern "C" int mem_00925754;
extern "C" int mem_00925750;
extern "C" int mem_0092574C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924EC4;
extern "C" int mem_009250F8;
extern "C" int mem_00925120;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00563520(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8b2653
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x3c]
        xor ebx, ebx
        add esi, 4
        push 0x928b5d
        mov ecx, esi
        mov dword ptr [esp + 0x34], ebx
        mov dword ptr [esp + 0xc], ebx
        call dword ptr [mem_00925754]
        test al, al
        je short skip_assign
        push 0xb39fd8
        mov ecx, esi
        call dword ptr [mem_00925750]
    skip_assign:
        mov ecx, esi
        call dword ptr [mem_0092574C]
        mov esi, dword ptr [esp + 0x38]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [eax]
        push ecx
        push 0xb39fbc
        mov ecx, esi
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x10], 1
        call dword ptr [mem_009250F8]
        cmp eax, -1
        je short done
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        sub ecx, 1
        push ecx
        add eax, 1
        push eax
        lea edx, [esp + 0x14]
        push edx
        mov ecx, esi
        call dword ptr [mem_00925120]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x34], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x30], bl
        call dword ptr [mem_00924FF4]
    done:
        mov ecx, dword ptr [esp + 0x28]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 8
    }
}

// [0x00563810] sub_00563810 (183 bytes)
extern "C" void ext_00563520();
extern "C" void ext_005634D0();
extern "C" int mem_00924E48;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00563810(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b2ae2
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push esi
        mov esi, dword ptr [esp + 0x4c]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        push edi
        mov edi, ecx
        mov ecx, esi
        call edx
        push 0x928b5d
        mov ecx, eax
        call dword ptr [mem_00924E48]
        test eax, eax
        jne short epilogue
        push ebp
        mov ebp, dword ptr [esp + 0x58]
        push ebp
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, edi
        call ext_00563520
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x5c]
        lea eax, [esp + 0x28]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x50], 0
        call edx
        push ebp
        lea eax, [esp + 0x10]
        push eax
        mov ecx, edi
        call ext_005634D0
        lea ecx, [esp + 0xc]
        push ecx
        lea ecx, [esi + 0x4c]
        mov byte ptr [esp + 0x50], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x4c], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x4c], -1
        call dword ptr [mem_00924FF4]
        pop ebp
epilogue:
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 8
    }
}

// [0x0056B710] sub_0056B710 (92 bytes)
extern "C" void ext_00558920();
extern "C" void ext_0056B2E0();
extern "C" __declspec(naked) void __fastcall fn_0056B710(void* self) {
    __asm {
        push -1
        push 0x89a648
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x9577dc
        mov dword ptr [esi + 0x4], 0x9577d0
        lea ecx, [esi + 0x46c]
        mov dword ptr [esp + 0x10], 0
        call ext_0056B2E0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00558920
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00563630] sub_00563630 (147 bytes)
extern "C" void ext_00558920();
extern "C" int mem_0092575C;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00563630(void* self) {
    __asm {
        push -1
        push 0x89b7c5
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x958a5c
        mov dword ptr [esi + 0x4], 0x958a54
        mov eax, dword ptr [esi + 0x494]
        push eax
        mov dword ptr [esp + 0x14], 0x2
        mov dword ptr [esi + 0x494], 0x0
        call dword ptr [mem_0092575C]
        mov ecx, dword ptr [esi + 0x494]
        add esp, 0x4
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x1
        je skip_vdel
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
skip_vdel:
        lea ecx, [esi + 0x478]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00558920
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00566E10] sub_00566E10 (152 bytes)
extern "C" void ext_00696980();
extern "C" int mem_009250F0;
extern "C" __declspec(naked) void __fastcall fn_00566E10(void* self) {
    __asm {
        __asm _emit 0x6A __asm _emit 0xFF                         // push -1
        __asm _emit 0x68 __asm _emit 0xF9 __asm _emit 0x56 __asm _emit 0x8B __asm _emit 0x00 // push handler
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        __asm _emit 0x50                                          // push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        __asm _emit 0x83 __asm _emit 0xEC __asm _emit 0x1C        // sub esp, 0x1c
        __asm _emit 0x53                                          // push ebx
        __asm _emit 0x56                                          // push esi
        __asm _emit 0x57                                          // push edi
        __asm _emit 0x8B __asm _emit 0xF1                         // mov esi, ecx
        __asm _emit 0x68 __asm _emit 0xDC __asm _emit 0x8B __asm _emit 0x95 __asm _emit 0x00 // push 0x958bdc
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x10 // lea ecx, [esp+0x10]
        __asm call dword ptr [mem_00924FE4]                       // basic_string ctor
        __asm _emit 0x8B __asm _emit 0x7C __asm _emit 0x24 __asm _emit 0x38 // mov edi, [esp+0x38]
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0C // lea eax, [esp+0xc]
        __asm _emit 0x50                                          // push eax
        __asm _emit 0x57                                          // push edi
        __asm _emit 0xC7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esp+0x38], 0
        __asm call ext_00696980
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x08        // add esp, 8
        __asm _emit 0x84 __asm _emit 0xC0                         // test al, al
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x0C // lea ecx, [esp+0xc]
        __asm _emit 0x0F __asm _emit 0x94 __asm _emit 0xC3        // sete bl
        __asm _emit 0xC7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x30 __asm _emit 0xFF __asm _emit 0xFF __asm _emit 0xFF __asm _emit 0xFF // mov dword ptr [esp+0x30], -1
        __asm call dword ptr [mem_00924FF4]                       // ~basic_string
        __asm _emit 0x84 __asm _emit 0xDB                         // test bl, bl
        __asm _emit 0x74 __asm _emit 0x16                         // je +0x16
        __asm _emit 0x5F                                          // pop edi
        __asm _emit 0x5E                                          // pop esi
        __asm _emit 0x32 __asm _emit 0xC0                         // xor al, al
        __asm _emit 0x5B                                          // pop ebx
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x1C // mov ecx, [esp+0x1c]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x28        // add esp, 0x28
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00        // ret 4
        __asm _emit 0x8B __asm _emit 0x0E                         // mov ecx, [esi]
        __asm _emit 0x51                                          // push ecx
        __asm _emit 0x8B __asm _emit 0xCF                         // mov ecx, edi
        __asm call dword ptr [mem_009250F0]                       // istream >> float&
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x28 // mov ecx, [esp+0x28]
        __asm _emit 0x5F                                          // pop edi
        __asm _emit 0x5E                                          // pop esi
        __asm _emit 0xB0 __asm _emit 0x01                         // mov al, 1
        __asm _emit 0x5B                                          // pop ebx
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x28        // add esp, 0x28
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00        // ret 4
    }
}

// [0x00566EB0] sub_00566EB0 (188 bytes)
extern "C" int mem_009250EC;
extern "C" int mem_00924EAC;
extern "C" int mem_00924FD4;
extern "C" __declspec(naked) void __fastcall fn_00566EB0(void* self) {
    __asm {
        __asm _emit 0x6A __asm _emit 0xFF                         // push -1
        __asm _emit 0x68 __asm _emit 0xF9 __asm _emit 0x56 __asm _emit 0x8B __asm _emit 0x00 // push handler
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        __asm _emit 0x50                                          // push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        __asm _emit 0x83 __asm _emit 0xEC __asm _emit 0x1C        // sub esp, 0x1c
        __asm _emit 0x53                                          // push ebx
        __asm _emit 0x56                                          // push esi
        __asm _emit 0x57                                          // push edi
        __asm _emit 0x8B __asm _emit 0xF1                         // mov esi, ecx
        __asm _emit 0x68 __asm _emit 0xF4 __asm _emit 0x8B __asm _emit 0x95 __asm _emit 0x00 // push 0x958bf4
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x10 // lea ecx, [esp+0x10]
        __asm call dword ptr [mem_00924FE4]                       // basic_string ctor
        __asm _emit 0x8B __asm _emit 0x7C __asm _emit 0x24 __asm _emit 0x38 // mov edi, [esp+0x38]
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0C // lea eax, [esp+0xc]
        __asm _emit 0x50                                          // push eax
        __asm _emit 0x57                                          // push edi
        __asm _emit 0xC7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esp+0x38], 0
        __asm call ext_00696980
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x08        // add esp, 8
        __asm _emit 0x84 __asm _emit 0xC0                         // test al, al
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x0C // lea ecx, [esp+0xc]
        __asm _emit 0x0F __asm _emit 0x94 __asm _emit 0xC3        // sete bl
        __asm _emit 0xC7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x30 __asm _emit 0xFF __asm _emit 0xFF __asm _emit 0xFF __asm _emit 0xFF // mov dword ptr [esp+0x30], -1
        __asm call dword ptr [mem_00924FF4]                       // ~basic_string
        __asm _emit 0x84 __asm _emit 0xDB                         // test bl, bl
        __asm _emit 0x74 __asm _emit 0x16                         // je +0x16
        __asm _emit 0x5F                                          // pop edi
        __asm _emit 0x5E                                          // pop esi
        __asm _emit 0x32 __asm _emit 0xC0                         // xor al, al
        __asm _emit 0x5B                                          // pop ebx
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x1C // mov ecx, [esp+0x1c]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x28        // add esp, 0x28
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00        // ret 4
        __asm _emit 0x8B __asm _emit 0x0E                         // mov ecx, [esi]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x58        // add ecx, 0x58
        __asm _emit 0x51                                          // push ecx
        __asm _emit 0x57                                          // push edi
        __asm call dword ptr [mem_009250EC]                       // basic_istream >> basic_string
        __asm _emit 0x8B __asm _emit 0x0E                         // mov ecx, [esi]
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x08        // add esp, 8
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x58        // add ecx, 0x58
        __asm call dword ptr [mem_00924EAC]                       // basic_string::size
        __asm _emit 0x85 __asm _emit 0xC0                         // test eax, eax
        __asm _emit 0x75 __asm _emit 0x10                         // jne +0x10
        __asm _emit 0x8B __asm _emit 0x0E                         // mov ecx, [esi]
        __asm _emit 0x68 __asm _emit 0xE8 __asm _emit 0x8B __asm _emit 0x95 __asm _emit 0x00 // push 0x958be8
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x58        // add ecx, 0x58
        __asm call dword ptr [mem_00924FD4]                       // basic_string::operator=(char const*)
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x28 // mov ecx, [esp+0x28]
        __asm _emit 0x5F                                          // pop edi
        __asm _emit 0x5E                                          // pop esi
        __asm _emit 0xB0 __asm _emit 0x01                         // mov al, 1
        __asm _emit 0x5B                                          // pop ebx
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x28        // add esp, 0x28
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00        // ret 4
    }
}

// [0x005654A0] sub_005654A0 (278 bytes)
extern "C" void ext_00563260();
extern "C" void ext_005651A0();
extern "C" void ext_007C5664();
extern "C" void ext_007C572A();
extern "C" void ext_007C5730();
extern "C" void ext_007C5736();
extern "C" __declspec(naked) void __fastcall fn_005654A0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, [esp+0xc]
        mov ebx, ecx
        push edi
        mov ecx, ebp
        call ext_007C5664
        mov edi, eax
        test edi, edi
        je L_end2
        push esi
        mov ecx, edi
        call ext_007C5736
        mov esi, [ebx+0x170]
        sub esi, [ebx+0x16c]
        add esi, 1
        cmp esi, 1
        jle L_end1
        cmp byte ptr [ebx+0x46c], 0
        je L_end1
        push ebp
        mov ecx, ebx
        call ext_00563260
        test al, al
        jne L_b
        push 1
        push 0x27
        mov ecx, edi
        call ext_007C5730
        push 1
        push 0x28
        mov ecx, edi
        mov ebx, eax
        call ext_007C5730
        push 1
        push 0x29
        mov ecx, edi
        mov ebp, eax
        call ext_007C5730
        mov ecx, ebx
        mov [esp+0x14], eax
        call ext_007C572A
        mov ecx, ebp
        mov ebx, eax
        call ext_007C572A
        mov ecx, [esp+0x14]
        mov ebp, eax
        call ext_007C572A
        push esi
        mov ecx, ebx
        mov [esp+0x18], eax
        call ext_005651A0
        push esi
        mov ecx, ebp
        call ext_005651A0
        mov ecx, [esp+0x14]
        push esi
        call ext_005651A0
    L_b:
        push 1
        push 0x24
        mov ecx, edi
        call ext_007C5730
        push 1
        push 0x25
        mov ecx, edi
        mov ebx, eax
        call ext_007C5730
        push 1
        push 0x26
        mov ecx, edi
        mov ebp, eax
        call ext_007C5730
        mov ecx, ebx
        mov edi, eax
        call ext_007C572A
        mov ecx, ebp
        mov ebx, eax
        call ext_007C572A
        mov ecx, edi
        mov ebp, eax
        call ext_007C572A
        push esi
        mov ecx, ebx
        mov edi, eax
        call ext_005651A0
        push esi
        mov ecx, ebp
        call ext_005651A0
        push esi
        mov ecx, edi
        call ext_005651A0
    L_end1:
        pop esi
    L_end2:
        pop edi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x0056DBE0] sub_0056DBE0 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" int mem_00B3B4B0;
extern "C" int mem_00B3B494;

extern "C" __declspec(naked) void __fastcall fn_0056DBE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89c9be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B3B4B0], al
        jne skip_init
        or dword ptr [mem_00B3B4B0], eax
        push 0xa85658
        push offset mem_00B3B494
        mov dword ptr [esp + 0x10], 0x0
        call ext_00662610
        push 0x91c700
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3B494
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00561290] sub_00561290 (178 bytes)
extern "C" void __stdcall ext_00560920(float* p);
extern "C" void __stdcall ext_00664840(void* out, float x);
extern "C" void __stdcall ext_0055E8E0(int a);
extern "C" void __fastcall ext_004142E0(void* self, int edx_unused, int a);
extern "C" void __stdcall ext_006A6DD2(void* obj, void* ti);

extern "C" __declspec(naked) bool __fastcall fn_00561290(void* self, int edx_unused, float* a1, float* a2, bool flag) {
    __asm {
        push -1
        push 892ed9h
        mov eax, fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 54h
        mov eax, dword ptr [esp+68h]
        push esi
        mov esi, dword ptr [esp+68h]
        fld dword ptr [esi]
        fstp dword ptr [esp+4]
        fld dword ptr [eax]
        fstp dword ptr [esp+8]
        fld dword ptr [eax+4]
        fstp dword ptr [esp+0ch]
        fld dword ptr [eax+8]
        lea eax, [esp+4]
        push eax
        fstp dword ptr [esp+14h]
        call ext_00560920
        test al, al
        je short L_FALSE
        mov al, 1
        pop esi
        mov ecx, dword ptr [esp+54h]
        mov dword ptr fs:[0], ecx
        add esp, 60h
        ret 0ch
L_FALSE:
        cmp byte ptr [esp+70h], 0
        je short L_RET
        fld dword ptr [esi]
        push ecx
        lea ecx, [esp+18h]
        fstp dword ptr [esp]
        push ecx
        call ext_00664840
        add esp, 8
        push eax
        mov dword ptr [esp+64h], 0
        call ext_0055E8E0
        push eax
        lea ecx, [esp+38h]
        call ext_004142E0
        push 9d1278h
        lea edx, [esp+34h]
        push edx
        call ext_006A6DD2
L_RET:
        mov ecx, dword ptr [esp+58h]
        xor al, al
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 60h
        ret 0ch
    }
}

// [0x0056DA60] sub_0056DA60 (383 bytes)
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) int __stdcall fn_0056DA60(void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [mem_00924FC0]
        push 0x9591f4
        push esi
        call edi
        add esp, 0x8
        test al, al
        je short c1
    r0:
        pop edi
        xor eax, eax
        pop esi
        ret 0x4
    c1:
        push 0x9591e8
        push esi
        call edi
        add esp, 0x8
        test al, al
        je short c2
    r1:
        pop edi
        mov eax, 0x1
        pop esi
        ret 0x4
    c2:
        push 0x9591dc
        push esi
        call edi
        add esp, 0x8
        test al, al
        je short c3
    r2:
        pop edi
        mov eax, 0x2
        pop esi
        ret 0x4
    c3:
        push 0x9591d0
        push esi
        call edi
        add esp, 0x8
        test al, al
        je short c4
    r3:
        pop edi
        mov eax, 0x3
        pop esi
        ret 0x4
    c4:
        push 0x9591c4
        push esi
        call edi
        add esp, 0x8
        test al, al
        je short c5
    r4:
        pop edi
        mov eax, 0x4
        pop esi
        ret 0x4
    c5:
        push 0x9591b8
        push esi
        call edi
        add esp, 0x8
        test al, al
        je short c6
    r5:
        pop edi
        mov eax, 0x5
        pop esi
        ret 0x4
    c6:
        push 0x9591b4
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne near ptr r0
        push 0x9591b0
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne near ptr r1
        push 0x9591ac
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne near ptr r2
        push 0x9591a8
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne near ptr r3
        push 0x9591a4
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne near ptr r4
        push 0x9591a0
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne near ptr r5
        push 0x95919c
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne near ptr r0
        push 0x959198
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne near ptr r1
        push 0x959194
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne near ptr r2
        push 0x959190
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne near ptr r3
        push 0x95918c
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne near ptr r4
        push 0x959188
        push esi
        call edi
        add esp, 0x8
        neg al
        pop edi
        pop esi
        sbb eax, eax
        and eax, 0x5
        ret 0x4
    }
}

// [0x00566580] sub_00566580 (415 bytes)
extern "C" void ext_00566380();
extern "C" void ext_00594000();
extern "C" void ext_00661E80();
extern "C" void ext_00661F70();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00566580(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x46c], 0
        push edi
        je near ptr loc_566717
        call ext_00594000
        mov edi, eax
        mov eax, dword ptr [edi + 0x23c]
        add edi, 0x238
        test eax, eax
        je short loc_5665bd
        mov ecx, dword ptr [edi + 8]
        sub ecx, eax
        sar ecx, 2
        jne short loc_5665c7

    loc_5665bd:
        mov ebp, dword ptr [mem_00925134]
        call ebp
        jmp short loc_5665cd

    loc_5665c7:
        mov ebp, dword ptr [mem_00925134]

    loc_5665cd:
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [esi + 0x16c]
        mov ebx, dword ptr [edx]
        mov ecx, dword ptr [esi + 0x420]
        add eax, 1
        add ebx, 0x160
        push eax
        mov dword ptr [esp + 0x18], ebx
        call ext_00661F70
        mov dword ptr [esi + 0x470], 0

    loc_5665fb:
        mov ecx, dword ptr [esi + 0x424]
        test ecx, ecx
        je short loc_56660b
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax

    loc_56660b:
        cmp byte ptr [esi + 0x1ba], 0
        je near ptr loc_5666a2
        call ext_00594000
        mov edi, dword ptr [eax + 0x26c]
        mov ecx, dword ptr [edi + 0x1c]
        mov eax, dword ptr [ecx]
        add edi, 0x18
        mov ebx, edi
        mov ebp, eax
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1c], ebp

    loc_566637:
        test ebx, ebx
        mov edx, dword ptr [edi + 4]
        mov dword ptr [esp + 0x24], edx
        je short loc_566646
        cmp ebx, edi
        je short loc_56664c

    loc_566646:
        call dword ptr [mem_00925134]

    loc_56664c:
        cmp ebp, dword ptr [esp + 0x24]
        je short loc_56668a
        test ebx, ebx
        jne short loc_56665c
        call dword ptr [mem_00925134]

    loc_56665c:
        cmp ebp, dword ptr [ebx + 4]
        jne short loc_566667
        call dword ptr [mem_00925134]

    loc_566667:
        mov eax, dword ptr [ebp + 0x28]
        add eax, 0x160
        push eax
        mov ecx, esi
        call ext_00566380
        lea ecx, [esp + 0x18]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x1c]
        mov ebx, dword ptr [esp + 0x18]
        jmp short loc_566637

    loc_56668a:
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_00566380
        mov ebp, dword ptr [mem_00925134]
        mov ebx, dword ptr [esp + 0x14]
        jmp short loc_5666d0

    loc_5666a2:
        cmp byte ptr [esi + 0x1b8], 0
        je short loc_5666bf
        mov edx, dword ptr [esi + 0x414]
        add edx, 0x160
        push edx
        mov ecx, esi
        call ext_00566380

    loc_5666bf:
        cmp byte ptr [esi + 0x1b9], 0
        je short loc_5666d0
        push ebx
        mov ecx, esi
        call ext_00566380

    loc_5666d0:
        mov edi, dword ptr [esi + 0x420]
        add dword ptr [esi + 0x470], 1
        add edi, 8
        cmp dword ptr [edi], 0
        jne short loc_5666e7
        call ebp

    loc_5666e7:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [edi + 4]
        cmp ecx, dword ptr [eax + 4]
        jne short loc_5666f3
        call ebp

    loc_5666f3:
        mov edx, dword ptr [esi + 0x170]
        mov eax, dword ptr [edi + 4]
        add edx, 1
        cmp dword ptr [eax + 8], edx
        jge short loc_566717
        mov ecx, dword ptr [esi + 0x420]
        call ext_00661E80
        test al, al
        jne near ptr loc_5665fb

    loc_566717:
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x005636D0] sub_005636D0 (97 bytes)
extern "C" __declspec(naked) void __fastcall fn_005636D0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x89a648
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00558C10
        lea ecx, [esi + 0x478]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x958a5c
        mov dword ptr [esi + 0x4], 0x958a54
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x494], 0
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00567300] sub_00567300 (51 bytes)
#include <ostream>
#include <vector>
#include <string>

extern "C" void ext_00435D00();
extern "C" int mem_00924E90;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" __declspec(naked) void __fastcall fn_00567300(void* self) {
    __asm {
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [ecx]
        mov edx, dword ptr [esp + 4]
        push eax
        add ecx, 0x58
        push ecx
        push 0x958ca4
        push edx
        call ext_00435D00
        add esp, 8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        ret 4
    }
}

#include <ostream>
#include <vector>
#include <string>

extern "C" void ext_00435D00();
extern "C" int mem_00924E90;
extern "C" int mem_00924E98;
extern "C" int mem_00924E94;

// [0x00567610] sub_00567610 (86 bytes)
extern "C" void __fastcall fn_00567610(void* self, int edx_unused, void* os) {
    typedef void* (__cdecl *CStrOutFn)(void*, const char*);
    typedef void* (__thiscall *EndlFn)(void*, int);
    typedef void* (__cdecl *StrOutFn)(void*, const void*);
    ((EndlFn)mem_00924E98)(((CStrOutFn)ext_00435D00)(os, (const char*)0x00958D0C), mem_00924E90);
    ((EndlFn)mem_00924E98)(((StrOutFn)mem_00924E94)(((CStrOutFn)ext_00435D00)(os, (const char*)0x00936128), (const char*)(*(int*)self) + 0x3C), mem_00924E90);
}

// [0x0056DC40] sub_0056DC40 (86 bytes)
extern "C" void __fastcall fn_0056DC40(void* self, int edx_unused, void* obj, void* os) {
    typedef bool (__thiscall *Vfn70)(void*);
    typedef void* (__cdecl *CStrOutFn)(void*, const char*);
    typedef void* (__thiscall *EndlFn)(void*, int);
    if (((*(Vfn70**)(obj))[0x70 / 4])(obj)) {
        ((EndlFn)mem_00924E98)(((CStrOutFn)ext_00435D00)(os, (const char*)0x00959230), mem_00924E90);
    } else {
        ((EndlFn)mem_00924E98)(((CStrOutFn)ext_00435D00)(os, (const char*)0x00959200), mem_00924E90);
    }
}

extern "C" int mem_00925218;

// [0x00567280] sub_00567280 (118 bytes)
extern "C" void __fastcall fn_00567280(void* self, int edx_unused, void* os) {
    typedef void* (__cdecl *OstreamStrFn)(void* os, const char* s);
    typedef void* (__thiscall *OstreamManipFn)(void* os, int manip);
    typedef int (__cdecl *SprintfFn)(char* buf, const char* fmt, ...);
    int buf[5];
    ((OstreamManipFn)mem_00924E98)(((OstreamStrFn)ext_00435D00)(os, (const char*)0x00958C74), mem_00924E90);
    ((SprintfFn)mem_00925218)((char*)buf, (const char*)0x00958C6C, (double)**(float**)self);
    ((OstreamManipFn)mem_00924E98)(((OstreamStrFn)ext_00435D00)(((OstreamStrFn)ext_00435D00)(os, (const char*)0x00958C60), (const char*)buf), mem_00924E90);
}

extern "C" int mem_00958BD0;
extern "C" double __cdecl fabs(double);

// [0x00567890] sub_00567890 (126 bytes)
extern "C" void __fastcall fn_00567890(void* self, int edx_unused, void* os, float val, bool newline) {
    typedef void* (__cdecl *OstreamStrFn)(void* os, const char* s);
    typedef void* (__thiscall *OstreamManipFn)(void* os, int manip);
    typedef int (__cdecl *SprintfFn)(char* buf, const char* fmt, ...);
    int buf[5];
    double orig = val;
    val = (float)fabs(val);
    if (val < *(double*)&mem_00958BD0) {
        ((SprintfFn)mem_00925218)((char*)buf, (const char*)0x00958D3C);
    } else {
        ((SprintfFn)mem_00925218)((char*)buf, (const char*)0x00958D34, orig);
    }
    ((OstreamStrFn)ext_00435D00)(os, (const char*)buf);
    if (newline) {
        ((OstreamManipFn)mem_00924E98)(os, mem_00924E90);
    }
}

extern "C" void ext_00567890();

// [0x00567B30] sub_00567B30 (88 bytes)
extern "C" void __fastcall fn_00567B30(void* self, int edx_unused, void* os, const float* v, bool newline) {
    typedef void (__thiscall *PrintFloatFn)(void* self, void* os, float val, bool newline);
    typedef void* (__thiscall *OstreamManipFn)(void* os, int manip);
    ((PrintFloatFn)ext_00567890)(self, os, v[0], false);
    ((PrintFloatFn)ext_00567890)(self, os, v[1], false);
    ((PrintFloatFn)ext_00567890)(self, os, v[2], false);
    if (newline) {
        ((OstreamManipFn)mem_00924E98)(os, mem_00924E90);
    }
}

extern "C" void ext_00435D00();
extern "C" int mem_00924E90;
extern "C" int mem_00924E98;
extern "C" int mem_00925134;
extern "C" int mem_00924E94;

// [0x00567780] sub_00567780 (268 bytes)
extern "C" __declspec(naked) void __fastcall fn_00567780(void* self) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x78]
        add eax, 0x74
        test edx, edx
        mov dword ptr [esp + 4], ebx
        je loc_567885
        mov ecx, dword ptr [eax + 8]
        sub ecx, edx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        je loc_567885
        mov ecx, dword ptr [mem_00924E90]
        push esi
        push edi
        push 0x00958D2C
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        call dword ptr [mem_00924E98]
        push eax
        call ext_00435D00
        mov edi, dword ptr [ebx]
        mov esi, dword ptr [edi + 0x78]
        add edi, 0x74
        add esp, 8
        cmp esi, dword ptr [edi + 8]
        jbe loc_5677EC
        call dword ptr [mem_00925134]
    loc_5677EC:
        push ebp
        mov ebp, esi
        nop
    loc_5677F0:
        mov esi, dword ptr [ebx]
        mov ebx, dword ptr [esi + 0x7C]
        add esi, 0x74
        cmp dword ptr [esi + 4], ebx
        jbe loc_567803
        call dword ptr [mem_00925134]
    loc_567803:
        cmp edi, esi
        je loc_56780D
        call dword ptr [mem_00925134]
    loc_56780D:
        cmp ebp, ebx
        je loc_567882
        mov edx, dword ptr [esp + 0x10]
        mov esi, dword ptr [edx]
        mov ebx, dword ptr [esi + 0x78]
        add esi, 0x74
        cmp ebx, dword ptr [esi + 8]
        jbe loc_567828
        call dword ptr [mem_00925134]
    loc_567828:
        cmp edi, esi
        mov esi, dword ptr [mem_00925134]
        je loc_567834
        call esi
    loc_567834:
        cmp ebp, ebx
        je loc_56784A
        mov eax, dword ptr [esp + 0x1C]
        push 0x00958D24
        push eax
        call ext_00435D00
        add esp, 8
    loc_56784A:
        cmp ebp, dword ptr [edi + 8]
        jb loc_567851
        call esi
    loc_567851:
        mov ecx, dword ptr [mem_00924E90]
        mov edx, dword ptr [esp + 0x1C]
        push ecx
        push ebp
        push edx
        call dword ptr [mem_00924E94]
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        cmp ebp, dword ptr [edi + 8]
        jb loc_567876
        call esi
    loc_567876:
        mov ebx, dword ptr [esp + 0x10]
        add ebp, 0x1C
        jmp loc_5677F0
    loc_567882:
        pop ebp
        pop edi
        pop esi
    loc_567885:
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x005646D0] sub_005646D0 (277 bytes)
extern "C" void ext_00663B30();
extern "C" void ext_007C569A();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005646D0(void* self) {
    __asm {
        push -1
        push 0x89b86b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x54
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x414]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x84]
        push edi
        call edx
        push 0xb39fe0
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE0]
        mov edi, dword ptr [esp + 0x70]
        mov ecx, edi
        mov dword ptr [esp + 0x68], 0
        call dword ptr [mem_00924FF0]
        push eax
        lea eax, [esp + 0x48]
        push eax
        call ext_00663B30
        push 0xb3a018
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        mov byte ptr [esp + 0x7c], 1
        call dword ptr [mem_00924FD0]
        add esp, 0x14
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0x68], 3
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi + 0x414]
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0x5c]
        lea ecx, [eax + 0x4]
        lea eax, [esp + 0x28]
        push eax
        call edx
        mov eax, dword ptr [esi + 0x414]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x60]
        lea edx, [esp + 0xc]
        push edx
        call eax
        mov edx, dword ptr [esi + 0x27c]
        mov eax, dword ptr [edx + 0x84]
        lea ecx, [esi + 0x27c]
        call eax
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x494]
        push eax
        call ext_007C569A
        test eax, eax
        lea ecx, [esp + 0xc]
        sete bl
        mov byte ptr [esp + 0x68], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x68], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        pop edi
        pop esi
        mov al, bl
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x60
        ret 4
    }
}

// [0x00563A40] sub_00563A40 (604 bytes)
extern "C" void ext_005637D0();
extern "C" void ext_007C5658();
extern "C" void ext_007C565E();
extern "C" void ext_007C566A();
extern "C" int mem_00958A48;

extern "C" __declspec(naked) void __fastcall fn_00563A40(void* self, int edx_unused, void* a1, float* out) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x74
        fld1
        mov eax, dword ptr [ebp + 0xc]
        push ebx
        fst dword ptr [eax]
        push esi
        fst dword ptr [eax + 0x4]
        push edi
        fstp dword ptr [eax + 0x8]
        mov edi, dword ptr [ebp + 0x8]
        test edi, edi
        mov dword ptr [esp + 0x1c], ecx
        je L_end_00563A40
        push edi
        call ext_005637D0
        test al, al
        je L_noparent_00563A40
        mov ecx, edi
        call ext_007C566A
        mov edi, eax
L_noparent_00563A40:
        test edi, edi
        je L_end_00563A40
L_loop_00563A40:
        mov ecx, edi
        mov byte ptr [esp + 0x1b], 0x0
        call ext_007C5664
        fldz
        fst dword ptr [esp + 0x28]
        mov esi, eax
        test esi, esi
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x20]
        je L_blk2_00563A40
        lea eax, [esp + 0x38]
        push eax
        mov ecx, esi
        call ext_007C565E
        fld dword ptr [eax]
        lea ecx, [esp + 0x44]
        fstp dword ptr [esp + 0x20]
        push ecx
        mov ecx, esi
        call ext_007C565E
        fld dword ptr [eax + 0x4]
        lea edx, [esp + 0x50]
        fstp dword ptr [esp + 0x24]
        push edx
        mov ecx, esi
        call ext_007C565E
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x28]
        sub esp, 0x18
        fld qword ptr [mem_00958A48]
        fstp qword ptr [esp + 0x10]
        fld1
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x38]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        je L_setflag_00563A40
        fld qword ptr [mem_00958A48]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld1
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        je L_setflag_00563A40
        fld qword ptr [mem_00958A48]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld1
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x40]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        mov byte ptr [esp + 0x1b], 0x0
        jne L_blk2_00563A40
L_setflag_00563A40:
        mov byte ptr [esp + 0x1b], 0x1
L_blk2_00563A40:
        mov ecx, edi
        xor bl, bl
        call ext_007C5658
        fldz
        fst dword ptr [esp + 0x34]
        mov esi, eax
        test esi, esi
        fst dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x2c]
        je L_mul_00563A40
        lea eax, [esp + 0x5c]
        push eax
        mov ecx, esi
        call ext_007C565E
        fld dword ptr [eax]
        lea ecx, [esp + 0x68]
        fstp dword ptr [esp + 0x2c]
        push ecx
        mov ecx, esi
        call ext_007C565E
        fld dword ptr [eax + 0x4]
        lea edx, [esp + 0x74]
        fstp dword ptr [esp + 0x30]
        push edx
        mov ecx, esi
        call ext_007C565E
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x34]
        sub esp, 0x18
        fld qword ptr [mem_00958A48]
        fstp qword ptr [esp + 0x10]
        fld1
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x44]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        je L_setbl_00563A40
        fld qword ptr [mem_00958A48]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld1
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x48]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        je L_setbl_00563A40
        fld qword ptr [mem_00958A48]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld1
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x4c]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        jne L_mul_00563A40
L_setbl_00563A40:
        mov bl, 0x1
L_mul_00563A40:
        cmp byte ptr [esp + 0x1b], 0x0
        je L_mulbl_00563A40
        mov eax, dword ptr [ebp + 0xc]
        fld dword ptr [eax]
        fmul dword ptr [esp + 0x20]
        fstp dword ptr [eax]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [esp + 0x24]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [eax + 0x8]
        fmul dword ptr [esp + 0x28]
        jmp L_storez_00563A40
L_mulbl_00563A40:
        test bl, bl
        je L_next_00563A40
        mov eax, dword ptr [ebp + 0xc]
        fld dword ptr [eax]
        fmul dword ptr [esp + 0x2c]
        fstp dword ptr [eax]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [esp + 0x30]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [eax + 0x8]
        fmul dword ptr [esp + 0x34]
L_storez_00563A40:
        fstp dword ptr [eax + 0x8]
L_next_00563A40:
        mov ecx, dword ptr [esp + 0x1c]
        push edi
        call ext_005637D0
        test al, al
        je L_end_00563A40
        test bl, bl
        jne L_end_00563A40
        mov ecx, edi
        call ext_007C566A
        mov edi, eax
        test edi, edi
        jne L_loop_00563A40
L_end_00563A40:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x00567340] sub_00567340 (720 bytes)
extern "C" void ext_00435D00();
extern "C" int mem_00924E90;
extern "C" int mem_00924E98;
extern "C" int mem_00955998;
extern "C" int mem_00925010;
extern "C" int mem_0092A270;
extern "C" int mem_00958CC8;

extern "C" __declspec(naked) void __fastcall fn_00567340(void* self) {
    __asm {
        mov eax, dword ptr [mem_00924E90]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push eax
        push 0x958d04
        push esi
        mov edi, ecx
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        fld dword ptr [mem_00955998]
        mov ecx, dword ptr [edi]
        fcomp dword ptr [ecx]
        fnstsw ax
        test ah, 0x41
        jne L_56742b
        mov edx, dword ptr [mem_00924E90]
        fld dword ptr [ecx + 0x24]
        push edx
        push ecx
        fstp dword ptr [esp]
        push 0x958cf8
        push esi
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00925010]
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [edi]
        fld dword ptr [ecx + 0x2c]
        push eax
        push ecx
        fstp dword ptr [esp]
        push 0x958cec
        push esi
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00925010]
        mov ecx, eax
        call dword ptr [mem_00924E98]
        push 0x958ce0
        push esi
        call ext_00435D00
        mov edx, dword ptr [edi]
        add esp, 0x8
        cmp dword ptr [edx + 0x30], 0x0
        jne L_567409
        mov eax, dword ptr [mem_00924E90]
        push eax
        push 0x958cdc
        push esi
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        pop edi
        pop esi
        ret 0x4
    L_567409:
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        push 0x958cd8
        push esi
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        pop edi
        pop esi
        ret 0x4
    L_56742b:
        push 0x958cf8
        push esi
        call ext_00435D00
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x38]
        add esp, 0x8
        test eax, eax
        jne L_567449
        push 0x958cd4
        jmp L_567453
    L_567449:
        cmp eax, 0x1
        jne L_56745c
        push 0x958cd0
    L_567453:
        push esi
        call ext_00435D00
        add esp, 0x8
    L_56745c:
        mov ecx, dword ptr [edi]
        fld dword ptr [ecx + 0x24]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fsub qword ptr [mem_0092A270]
        fcomp qword ptr [mem_00958CC8]
        fnstsw ax
        test ah, 0x41
        jne L_5674a5
        mov eax, dword ptr [mem_00924E90]
        fld dword ptr [ecx + 0x24]
        push eax
        push ecx
        fstp dword ptr [esp]
        push 0x92ab74
        push esi
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00925010]
        mov ecx, eax
        jmp L_5674ae
    L_5674a5:
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        mov ecx, esi
    L_5674ae:
        call dword ptr [mem_00924E98]
        push 0x958cec
        push esi
        call ext_00435D00
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x34]
        add esp, 0x8
        cmp eax, 0x2
        jne L_5674d3
        push 0x958cc0
        jmp L_56750c
    L_5674d3:
        cmp eax, 0x1
        jne L_5674df
        push 0x958cbc
        jmp L_56750c
    L_5674df:
        test eax, eax
        jne L_5674ea
        push 0x93f8fc
        jmp L_56750c
    L_5674ea:
        cmp eax, 0x3
        jne L_5674f6
        push 0x958cb8
        jmp L_56750c
    L_5674f6:
        cmp eax, 0x4
        jne L_567502
        push 0x958cb4
        jmp L_56750c
    L_567502:
        cmp eax, 0x5
        jne L_567515
        push 0x958cb0
    L_56750c:
        push esi
        call ext_00435D00
        add esp, 0x8
    L_567515:
        mov ecx, dword ptr [edi]
        fld dword ptr [ecx + 0x2c]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fsub qword ptr [mem_0092A270]
        fcomp qword ptr [mem_00958CC8]
        fnstsw ax
        test ah, 0x41
        jne L_56755e
        mov eax, dword ptr [mem_00924E90]
        fld dword ptr [ecx + 0x2c]
        push eax
        push ecx
        fstp dword ptr [esp]
        push 0x92ab74
        push esi
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00925010]
        mov ecx, eax
        jmp L_567567
    L_56755e:
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        mov ecx, esi
    L_567567:
        call dword ptr [mem_00924E98]
        push 0x958ce0
        push esi
        call ext_00435D00
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x30]
        add esp, 0x8
        test eax, eax
        jne L_56758b
        push 0x958cdc
        jmp L_5675a1
    L_56758b:
        cmp eax, 0x1
        jne L_567597
        push 0x958cd8
        jmp L_5675a1
    L_567597:
        cmp eax, 0x2
        jne L_5675aa
        push 0x958cac
    L_5675a1:
        push esi
        call ext_00435D00
        add esp, 0x8
    L_5675aa:
        mov edi, dword ptr [edi]
        fld dword ptr [edi + 0x28]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fsub qword ptr [mem_0092A270]
        fcomp qword ptr [mem_00958CC8]
        fnstsw ax
        test ah, 0x41
        jne L_5675fc
        mov eax, dword ptr [mem_00924E90]
        fld dword ptr [edi + 0x28]
        push eax
        push ecx
        fstp dword ptr [esp]
        push 0x92ab74
        push esi
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00925010]
        mov ecx, eax
        call dword ptr [mem_00924E98]
        pop edi
        pop esi
        ret 0x4
    L_5675fc:
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924E98]
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00567B90] sub_00567B90 (944 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_00567B30();
extern "C" int mem_00925134;
extern "C" int mem_00924E90;
extern "C" int mem_00924E98;
extern "C" int mem_00955998;
extern "C" int mem_00924E5C;
extern "C" int mem_00924FEC;
extern "C" int mem_00924E94;

extern "C" __declspec(naked) void __fastcall fn_00567B90(void* self) {
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebp, dword ptr [esi]
        add ebp, 0x14
        push edi
        mov edi, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ebp + 0x8]
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x10], ebp
        jbe L_567BB4
        call dword ptr [mem_00925134]
    L_567BB4:
        mov ebx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x20], edi
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_567BC0:
        mov edi, dword ptr [esi]
        mov eax, dword ptr [edi + 0x1c]
        add edi, 0x14
        cmp dword ptr [edi + 0x4], eax
        mov dword ptr [esp + 0x28], eax
        jbe L_567BD7
        call dword ptr [mem_00925134]
    L_567BD7:
        cmp ebp, edi
        je L_567BE1
        call dword ptr [mem_00925134]
    L_567BE1:
        mov eax, dword ptr [esp + 0x20]
        cmp eax, dword ptr [esp + 0x28]
        je L_567F36
        cmp eax, dword ptr [ebp + 0x8]
        jb L_567BFA
        call dword ptr [mem_00925134]
    L_567BFA:
        mov ecx, dword ptr [mem_00924E90]
        mov eax, dword ptr [esp + 0x20]
        mov ebp, dword ptr [eax]
        push ecx
        push 0x958bfc
        push ebx
        mov dword ptr [esp + 0x34], ebp
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        fld dword ptr [mem_00955998]
        mov edx, dword ptr [esi]
        fcomp dword ptr [edx]
        fnstsw ax
        test ah, 0x41
        jp L_567C96
        mov eax, dword ptr [ebp + 0x4]
        test eax, eax
        jl L_567C5F
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        push eax
        push 0x958db4
        push ebx
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        mov ecx, eax
        call dword ptr [mem_00924E98]
    L_567C5F:
        lea edi, [ebp + 0x8]
        mov ecx, edi
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_567C96
        mov edx, dword ptr [mem_00924E90]
        push edx
        push edi
        push 0x958dac
        push ebx
        call ext_00435D00
        add esp, 0x8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
    L_567C96:
        mov eax, dword ptr [mem_00924E90]
        push eax
        lea ecx, [ebp + 0x70]
        push ecx
        push 0x958da4
        push ebx
        call ext_00435D00
        mov edi, dword ptr [mem_00924E94]
        add esp, 0x8
        push eax
        call edi
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov edx, dword ptr [mem_00924E90]
        push edx
        lea eax, [ebp + 0x54]
        push eax
        push 0x958d98
        push ebx
        call ext_00435D00
        add esp, 0x8
        push eax
        call edi
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        push 0x958d8c
        push ebx
        call ext_00435D00
        add esp, 0x8
        push 0x1
        lea ecx, [ebp + 0x8c]
        push ecx
        push ebx
        mov ecx, esi
        call ext_00567B30
        push 0x958d7c
        push ebx
        call ext_00435D00
        add esp, 0x8
        push 0x1
        lea edx, [ebp + 0x98]
        push edx
        push ebx
        mov ecx, esi
        call ext_00567B30
        mov edi, dword ptr [ebp + 0x48]
        cmp edi, dword ptr [ebp + 0x4c]
        jbe L_567D35
        call dword ptr [mem_00925134]
    L_567D35:
        mov eax, dword ptr [ebp + 0x4c]
        cmp dword ptr [ebp + 0x48], eax
        lea esi, [ebp + 0x44]
        mov dword ptr [esp + 0x14], eax
        jbe L_567D4A
        call dword ptr [mem_00925134]
    L_567D4A:
        test esi, esi
        je L_567D52
        cmp esi, esi
        je L_567D58
    L_567D52:
        call dword ptr [mem_00925134]
    L_567D58:
        cmp edi, dword ptr [esp + 0x14]
        je L_567E17
        push 0x958d6c
        push ebx
        call ext_00435D00
        add esp, 0x8
        test esi, esi
        jne L_567D7A
        call dword ptr [mem_00925134]
    L_567D7A:
        cmp edi, dword ptr [esi + 0x8]
        jb L_567D85
        call dword ptr [mem_00925134]
    L_567D85:
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_567D93
        call dword ptr [mem_00925134]
    L_567D93:
        cmp edi, dword ptr [ebp + 0x4c]
        lea eax, [ebp + 0x44]
        jb L_567DA1
        call dword ptr [mem_00925134]
    L_567DA1:
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe L_567DAF
        call dword ptr [mem_00925134]
    L_567DAF:
        cmp esi, ebp
        je L_567DEB
        cmp esi, dword ptr [edi + 0x8]
        jb L_567DBE
        call dword ptr [mem_00925134]
    L_567DBE:
        push 0x92ab78
        push esi
        push ebx
        call dword ptr [mem_00924E94]
        add esp, 0x8
        push eax
        call ext_00435D00
        add esp, 0x8
        cmp esi, dword ptr [edi + 0x8]
        jb L_567DE2
        call dword ptr [mem_00925134]
    L_567DE2:
        mov ebp, dword ptr [esp + 0x28]
        add esi, 0x1c
        jmp L_567D93
    L_567DEB:
        mov eax, dword ptr [mem_00924E90]
        push eax
        mov ecx, ebx
        call dword ptr [mem_00924E98]
        mov eax, dword ptr [esp + 0x28]
        add eax, 0x44
        cmp edi, dword ptr [eax + 0x8]
        jb L_567E0B
        call dword ptr [mem_00925134]
    L_567E0B:
        mov ebp, dword ptr [esp + 0x28]
        add edi, 0x10
        jmp L_567D35
    L_567E17:
        mov edi, dword ptr [ebp + 0x38]
        add ebp, 0x34
        cmp edi, dword ptr [ebp + 0x8]
        mov dword ptr [esp + 0x28], ebp
        jbe L_567E30
        call dword ptr [mem_00925134]
    L_567E2C:
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_567E30:
        mov eax, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], eax
        mov dword ptr [esp + 0x14], eax
        jbe L_567E42
        call dword ptr [mem_00925134]
    L_567E42:
        mov esi, ebp
        test esi, esi
        je L_567E4C
        cmp esi, ebp
        je L_567E52
    L_567E4C:
        call dword ptr [mem_00925134]
    L_567E52:
        cmp edi, dword ptr [esp + 0x14]
        je L_567F11
        push 0x958d5c
        push ebx
        call ext_00435D00
        add esp, 0x8
        test esi, esi
        jne L_567E74
        call dword ptr [mem_00925134]
    L_567E74:
        cmp edi, dword ptr [esi + 0x8]
        jb L_567E7F
        call dword ptr [mem_00925134]
    L_567E7F:
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_567E90
        call dword ptr [mem_00925134]
    L_567E8D:
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_567E90:
        mov eax, ebp
        cmp edi, dword ptr [eax + 0x8]
        jb L_567E9D
        call dword ptr [mem_00925134]
    L_567E9D:
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe L_567EAB
        call dword ptr [mem_00925134]
    L_567EAB:
        cmp esi, ebp
        je L_567EE7
        cmp esi, dword ptr [edi + 0x8]
        jb L_567EBA
        call dword ptr [mem_00925134]
    L_567EBA:
        push 0x92ab78
        push esi
        push ebx
        call dword ptr [mem_00924E94]
        add esp, 0x8
        push eax
        call ext_00435D00
        add esp, 0x8
        cmp esi, dword ptr [edi + 0x8]
        jb L_567EDE
        call dword ptr [mem_00925134]
    L_567EDE:
        mov ebp, dword ptr [esp + 0x28]
        add esi, 0x1c
        jmp L_567E90
    L_567EE7:
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        mov ecx, ebx
        call dword ptr [mem_00924E98]
        mov eax, dword ptr [esp + 0x28]
        cmp edi, dword ptr [eax + 0x8]
        jb L_567F05
        call dword ptr [mem_00925134]
    L_567F05:
        mov ebp, dword ptr [esp + 0x28]
        add edi, 0x10
        jmp L_567E30
    L_567F11:
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x20]
        cmp eax, dword ptr [edx + 0x8]
        jb L_567F24
        call dword ptr [mem_00925134]
    L_567F24:
        add dword ptr [esp + 0x20], 0x4
        mov ebp, dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0x18]
        jmp L_567BC0
    L_567F36:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x4
    }
}

// [0x005647F0] sub_005647F0 (469 bytes)
extern "C" void ext_00553340();
extern "C" void ext_00554EB0();
extern "C" void ext_00563260();
extern "C" void ext_00563A40();
extern "C" void ext_0067E410();
extern "C" void ext_007C5664();
extern "C" void ext_007C5670();
extern "C" void ext_007C5676();

extern "C" __declspec(naked) void __fastcall fn_005647F0(void* self, int edx_unused, void* arg1, void* arg2) {
    __asm {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x28]
        push esi
        push edi
        mov edi, ecx
        mov ecx, ebp
        call ext_007C5664
        mov ebx, eax
        test ebx, ebx
        je label_5649bb
        mov esi, dword ptr [esp + 0x2c]
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [eax + 0x4]
        add esi, 0x4
        push 0x2
        mov ecx, esi
        call edx
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, ebx
        call ext_007C5676
        fld dword ptr [eax]
        lea ecx, [esp + 0x1c]
        fstp dword ptr [esp + 0x10]
        push ecx
        mov ecx, ebx
        call ext_007C5676
        fld dword ptr [eax + 0x4]
        lea edx, [esp + 0x1c]
        fstp dword ptr [esp + 0x14]
        push edx
        mov ecx, ebx
        call ext_007C5676
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x18]
        sub esp, 0xc
        fld dword ptr [esp + 0x1c]
        mov eax, esp
        fstp dword ptr [eax]
        mov dword ptr [esp + 0x3c], esp
        fld dword ptr [esp + 0x20]
        lea ecx, [edi + 0x5c]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [eax + 0x8]
        lea eax, [esp + 0x28]
        push eax
        call ext_00554EB0
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x10]
        lea ecx, [esp + 0x1c]
        fld dword ptr [eax + 0x4]
        push ecx
        fstp dword ptr [esp + 0x18]
        push ebp
        fld dword ptr [eax + 0x8]
        mov ecx, edi
        fstp dword ptr [esp + 0x20]
        fldz
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x24]
        call ext_00563A40
        fld dword ptr [esp + 0x1c]
        fmul dword ptr [esp + 0x10]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edi + 0x420]
        mov edx, dword ptr [edx + 0xc]
        push eax
        fstp dword ptr [esp + 0x14]
        mov ecx, esi
        fld dword ptr [esp + 0x24]
        fmul dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x28]
        fmul dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x1c]
        call edx
        fld dword ptr [esp + 0x10]
        push ebp
        fstp dword ptr [eax + 0x30]
        mov ecx, edi
        fld dword ptr [esp + 0x18]
        fstp dword ptr [eax + 0x34]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [eax + 0x38]
        fld1
        fstp dword ptr [eax + 0x3c]
        call ext_00563260
        test al, al
        jne label_5649bb
        mov ecx, ebp
        call ext_007C5664
        fldz
        mov ebx, eax
        fst dword ptr [esp + 0x18]
        lea eax, [esp + 0x1c]
        fst dword ptr [esp + 0x14]
        push eax
        fstp dword ptr [esp + 0x14]
        mov ecx, ebx
        call ext_007C5670
        fld dword ptr [eax]
        lea ecx, [esp + 0x1c]
        fstp dword ptr [esp + 0x10]
        push ecx
        mov ecx, ebx
        call ext_007C5670
        fld dword ptr [eax + 0x4]
        lea edx, [esp + 0x1c]
        fstp dword ptr [esp + 0x14]
        push edx
        mov ecx, ebx
        call ext_007C5670
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x18]
        sub esp, 0xc
        fld dword ptr [esp + 0x1c]
        mov eax, esp
        fstp dword ptr [eax]
        mov dword ptr [esp + 0x3c], esp
        fld dword ptr [esp + 0x20]
        lea ecx, [edi + 0x5c]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [eax + 0x8]
        lea eax, [esp + 0x28]
        push eax
        call ext_00553340
        fld dword ptr [eax]
        mov edx, dword ptr [esi]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [esp + 0x10]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [edi + 0x420]
        push ecx
        fstp dword ptr [esp + 0x1c]
        push 0x0
        push eax
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_0067E410
    label_5649bb:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x8
    }
}

// [0x00567F40] sub_00567F40 (1308 bytes)
extern "C" int mem_0092AB78;
extern "C" int mem_00925134;
extern "C" int mem_00958D48;
extern "C" int mem_00958E50;
extern "C" int mem_00924E94;
extern "C" int mem_00958DCC;
extern "C" int mem_00955998;
extern "C" int mem_00958D6C;
extern "C" int mem_00958D40;
extern "C" int mem_00924E90;
extern "C" int mem_00958E5C;
extern "C" int mem_00958DFC;
extern "C" int mem_00958DDC;
extern "C" int mem_00958E40;
extern "C" int mem_00958E34;
extern "C" int mem_00958E28;
extern "C" int mem_00958E18;
extern "C" int mem_00958DD4;
extern "C" int mem_00958DBC;
extern "C" int mem_00958E64;
extern "C" int mem_00924E98;
extern "C" int mem_00924E5C;
extern "C" int mem_00958E08;
extern "C" int mem_00924FEC;
extern "C" int mem_00958DEC;
extern "C" int mem_00925010;
extern "C" void ext_00435D00();
extern "C" void ext_00567B30();
extern "C" void ext_00567890();
extern "C" __declspec(naked) void __fastcall fn_00567F40(void* self) {
    __asm {
        sub	esp, 0x14
        mov eax, dword ptr [mem_00924E90]
        push	ebx
        push	ebp
        push	esi
        mov	esi, dword ptr [esp + 0x24]
        push	edi
        push	eax
        mov	ebx, ecx
        push offset mem_00958E64
        push	esi
        mov	dword ptr [esp + 0x20], ebx
        call ext_00435D00
        add	esp, 0x8
        mov	ecx, eax
        call dword ptr [mem_00924E98]
        mov	ebp, dword ptr [ebx]
        mov	edi, dword ptr [ebp + 0x8]
        add	ebp, 0x4
        cmp	edi, dword ptr [ebp + 0x8]
        mov	dword ptr [esp + 0x10], ebp
        jbe loc_00567f84
        call dword ptr [mem_00925134]
    loc_00567f84:
        mov	dword ptr [esp + 0x20], edi
    loc_00567f88:
        mov	edi, dword ptr [ebx]
        mov	eax, dword ptr [edi + 0xc]
        add	edi, 0x4
        cmp	dword ptr [edi + 0x4], eax
        mov	dword ptr [esp + 0x28], eax
        jbe loc_00567f9f
        call dword ptr [mem_00925134]
    loc_00567f9f:
        cmp	ebp, edi
        je loc_00567fa9
        call dword ptr [mem_00925134]
    loc_00567fa9:
        mov	eax, dword ptr [esp + 0x20]
        cmp	eax, dword ptr [esp + 0x28]
        je loc_00568452
        cmp	eax, dword ptr [ebp + 0x8]
        jb loc_00567fc2
        call dword ptr [mem_00925134]
    loc_00567fc2:
        mov edx, dword ptr [mem_00924E90]
        mov	ecx, dword ptr [esp + 0x20]
        mov	ebp, dword ptr [ecx]
        push	edx
        push offset mem_00958D48
        push	esi
        mov	dword ptr [esp + 0x34], ebp
        call ext_00435D00
        add	esp, 0x8
        mov	ecx, eax
        call dword ptr [mem_00924E98]
        mov	eax, dword ptr [ebp + 0x4]
        test	eax, eax
        jl loc_00568016
        mov ecx, dword ptr [mem_00924E90]
        push	ecx
        push	eax
        push offset mem_00958E5C
        push	esi
        call ext_00435D00
        add	esp, 0x8
        mov	ecx, eax
        call dword ptr [mem_00924E5C]
        mov	ecx, eax
        call dword ptr [mem_00924E98]
    loc_00568016:
        mov edx, dword ptr [mem_00924E90]
        push	edx
        lea	eax, [ebp + 0x8]
        push	eax
        push offset mem_00958E50
        push	esi
        call ext_00435D00
        mov edi, dword ptr [mem_00924E94]
        add	esp, 0x8
        push	eax
        call	edi
        add	esp, 0x8
        mov	ecx, eax
        call dword ptr [mem_00924E98]
        push offset mem_00958E40
        push	esi
        call ext_00435D00
        add	esp, 0x8
        push	0x1
        lea	ecx, [ebp + 0x54]
        push	ecx
        push	esi
        mov	ecx, ebx
        call ext_00567B30
        push offset mem_00958E34
        push	esi
        call ext_00435D00
        fld	dword ptr [ebp + 0x60]
        add	esp, 0x8
        push	0x1
        push	ecx
        fstp	dword ptr [esp]
        push	esi
        mov	ecx, ebx
        call ext_00567890
        push offset mem_00958E28
        push	esi
        call ext_00435D00
        add	esp, 0x8
        push	0x0
        lea	edx, [ebp + 0x64]
        push	edx
        push	esi
        mov	ecx, ebx
        call ext_00567B30
        mov eax, dword ptr [mem_00924E90]
        push	eax
        lea	ecx, [ebp + 0x70]
        push	ecx
        push	esi
        call	edi
        add	esp, 0x8
        mov	ecx, eax
        call dword ptr [mem_00924E98]
        fldz
        fcomp	dword ptr [ebp + 0x204]
        fnstsw	ax
        test	ah, 0x41
        jp loc_005680e3
        push offset mem_00958E18
        push	esi
        call ext_00435D00
        fld	dword ptr [ebp + 0x204]
        add	esp, 0x8
        push	0x1
        push	ecx
        fstp	dword ptr [esp]
        push	esi
        mov	ecx, ebx
        call ext_00567890
    loc_005680e3:
        fldz
        fcomp	dword ptr [ebp + 0x208]
        fnstsw	ax
        test	ah, 0x41
        jp loc_00568114
        push offset mem_00958E08
        push	esi
        call ext_00435D00
        fld	dword ptr [ebp + 0x208]
        add	esp, 0x8
        push	0x1
        push	ecx
        fstp	dword ptr [esp]
        push	esi
        mov	ecx, ebx
        call ext_00567890
    loc_00568114:
        lea	ebx, [ebp + 0x1e8]
        mov	ecx, ebx
        call dword ptr [mem_00924FEC]
        test	al, al
        jne loc_0056814a
        mov edx, dword ptr [mem_00924E90]
        push	edx
        push	ebx
        push offset mem_00958DFC
        push	esi
        call ext_00435D00
        add	esp, 0x8
        push	eax
        call	edi
        add	esp, 0x8
        mov	ecx, eax
        call dword ptr [mem_00924E98]
    loc_0056814a:
        cmp	dword ptr [ebp + 0x1dc], 0x0
        jle loc_0056820a
        push offset mem_00958DEC
        push	esi
        call ext_00435D00
        xor	ebx, ebx
        add	esp, 0x8
        cmp	dword ptr [ebp + 0x1dc], ebx
        jle loc_0056820a
        lea	edi, [ebp + 0x94]
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    loc_00568180:
        test	ebx, ebx
        je loc_00568192
        push offset mem_00958DDC
        push	esi
        call ext_00435D00
        add	esp, 0x8
    loc_00568192:
        cmp	byte ptr [edi - 0x4], 0x0
        je loc_005681a8
        fld	dword ptr [edi]
        push	ecx
        mov	ecx, esi
        fstp	dword ptr [esp]
        call dword ptr [mem_00925010]
        jmp loc_005681b6
    loc_005681a8:
        push offset mem_00958DD4
        push	esi
        call ext_00435D00
        add	esp, 0x8
    loc_005681b6:
        cmp	byte ptr [edi + 0x14], 0x0
        je loc_005681db
        fld	dword ptr [edi + 0x18]
        mov eax, dword ptr [mem_00924E90]
        fstp	dword ptr [esp + 0x18]
        push	eax
        fld	dword ptr [esp + 0x1c]
        push	ecx
        mov	ecx, esi
        fstp	dword ptr [esp]
        call dword ptr [mem_00925010]
        jmp loc_005681f0
    loc_005681db:
        mov ecx, dword ptr [mem_00924E90]
        push	ecx
        push offset mem_00958DCC
        push	esi
        call ext_00435D00
        add	esp, 0x8
    loc_005681f0:
        mov	ecx, eax
        call dword ptr [mem_00924E98]
        add	ebx, 0x1
        add	edi, 0x30
        cmp	ebx, dword ptr [ebp + 0x1dc]
        jl loc_00568180
    loc_0056820a:
        mov	edx, dword ptr [esp + 0x14]
        fld dword ptr [mem_00955998]
        mov	eax, dword ptr [edx]
        fcomp	dword ptr [eax]
        fnstsw	ax
        test	ah, 0x41
        jp loc_00568411
        mov	ebx, dword ptr [ebp + 0x48]
        cmp	ebx, dword ptr [ebp + 0x4c]
        jbe loc_00568231
        call dword ptr [mem_00925134]
    loc_00568231:
        mov	eax, dword ptr [ebp + 0x4c]
        cmp	dword ptr [ebp + 0x48], eax
        lea	edi, [ebp + 0x44]
        mov	dword ptr [esp + 0x18], eax
        jbe loc_00568246
        call dword ptr [mem_00925134]
    loc_00568246:
        test	edi, edi
        je loc_0056824e
        cmp	edi, edi
        je loc_00568254
    loc_0056824e:
        call dword ptr [mem_00925134]
    loc_00568254:
        cmp	ebx, dword ptr [esp + 0x18]
        je loc_00568315
        push offset mem_00958D6C
        push	esi
        call ext_00435D00
        add	esp, 0x8
        test	edi, edi
        jne loc_00568276
        call dword ptr [mem_00925134]
    loc_00568276:
        cmp	ebx, dword ptr [edi + 0x8]
        jb loc_00568281
        call dword ptr [mem_00925134]
    loc_00568281:
        mov	edi, dword ptr [ebx + 0x4]
        cmp	edi, dword ptr [ebx + 0x8]
        jbe loc_00568290
        call dword ptr [mem_00925134]
        nop
    loc_00568290:
        cmp	ebx, dword ptr [ebp + 0x4c]
        lea	eax, [ebp + 0x44]
        jb loc_0056829e
        call dword ptr [mem_00925134]
    loc_0056829e:
        mov	ebp, dword ptr [ebx + 0x8]
        cmp	dword ptr [ebx + 0x4], ebp
        jbe loc_005682ac
        call dword ptr [mem_00925134]
    loc_005682ac:
        cmp	edi, ebp
        je loc_005682e8
        cmp	edi, dword ptr [ebx + 0x8]
        jb loc_005682bb
        call dword ptr [mem_00925134]
    loc_005682bb:
        push offset mem_0092AB78
        push	edi
        push	esi
        call dword ptr [mem_00924E94]
        add	esp, 0x8
        push	eax
        call ext_00435D00
        add	esp, 0x8
        cmp	edi, dword ptr [ebx + 0x8]
        jb loc_005682df
        call dword ptr [mem_00925134]
    loc_005682df:
        mov	ebp, dword ptr [esp + 0x28]
        add	edi, 0x1c
        jmp loc_00568290
    loc_005682e8:
        mov ecx, dword ptr [mem_00924E90]
        push	ecx
        mov	ecx, esi
        call dword ptr [mem_00924E98]
        mov	eax, dword ptr [esp + 0x28]
        add	eax, 0x44
        cmp	ebx, dword ptr [eax + 0x8]
        jb loc_00568309
        call dword ptr [mem_00925134]
    loc_00568309:
        mov	ebp, dword ptr [esp + 0x28]
        add	ebx, 0x10
        jmp loc_00568231
    loc_00568315:
        mov	ebx, dword ptr [ebp + 0x38]
        add	ebp, 0x34
        cmp	ebx, dword ptr [ebp + 0x8]
        mov	dword ptr [esp + 0x28], ebp
        jbe loc_00568330
        call dword ptr [mem_00925134]
        __asm _emit 0x8D __asm _emit 0x9B __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    loc_00568330:
        mov	eax, dword ptr [ebp + 0x8]
        cmp	dword ptr [ebp + 0x4], eax
        mov	dword ptr [esp + 0x18], eax
        jbe loc_00568342
        call dword ptr [mem_00925134]
    loc_00568342:
        mov	edi, ebp
        test	edi, edi
        je loc_0056834c
        cmp	edi, ebp
        je loc_00568352
    loc_0056834c:
        call dword ptr [mem_00925134]
    loc_00568352:
        cmp	ebx, dword ptr [esp + 0x18]
        je loc_00568411
        push offset mem_00958DBC
        push	esi
        call ext_00435D00
        add	esp, 0x8
        test	edi, edi
        jne loc_00568374
        call dword ptr [mem_00925134]
    loc_00568374:
        cmp	ebx, dword ptr [edi + 0x8]
        jb loc_0056837f
        call dword ptr [mem_00925134]
    loc_0056837f:
        mov	edi, dword ptr [ebx + 0x4]
        cmp	edi, dword ptr [ebx + 0x8]
        jbe loc_00568390
        call dword ptr [mem_00925134]
        __asm _emit 0x8D __asm _emit 0x49 __asm _emit 0x00
    loc_00568390:
        mov	eax, ebp
        cmp	ebx, dword ptr [eax + 0x8]
        jb loc_0056839d
        call dword ptr [mem_00925134]
    loc_0056839d:
        mov	ebp, dword ptr [ebx + 0x8]
        cmp	dword ptr [ebx + 0x4], ebp
        jbe loc_005683ab
        call dword ptr [mem_00925134]
    loc_005683ab:
        cmp	edi, ebp
        je loc_005683e7
        cmp	edi, dword ptr [ebx + 0x8]
        jb loc_005683ba
        call dword ptr [mem_00925134]
    loc_005683ba:
        push offset mem_0092AB78
        push	edi
        push	esi
        call dword ptr [mem_00924E94]
        add	esp, 0x8
        push	eax
        call ext_00435D00
        add	esp, 0x8
        cmp	edi, dword ptr [ebx + 0x8]
        jb loc_005683de
        call dword ptr [mem_00925134]
    loc_005683de:
        mov	ebp, dword ptr [esp + 0x28]
        add	edi, 0x1c
        jmp loc_00568390
    loc_005683e7:
        mov edx, dword ptr [mem_00924E90]
        push	edx
        mov	ecx, esi
        call dword ptr [mem_00924E98]
        mov	eax, dword ptr [esp + 0x28]
        cmp	ebx, dword ptr [eax + 0x8]
        jb loc_00568405
        call dword ptr [mem_00925134]
    loc_00568405:
        mov	ebp, dword ptr [esp + 0x28]
        add	ebx, 0x10
        jmp loc_00568330
    loc_00568411:
        mov eax, dword ptr [mem_00924E90]
        push	eax
        push offset mem_00958D40
        push	esi
        call ext_00435D00
        add	esp, 0x8
        mov	ecx, eax
        call dword ptr [mem_00924E98]
        mov	ecx, dword ptr [esp + 0x10]
        mov	edx, dword ptr [esp + 0x20]
        cmp	edx, dword ptr [ecx + 0x8]
        jb loc_00568440
        call dword ptr [mem_00925134]
    loc_00568440:
        add	dword ptr [esp + 0x20], 0x4
        mov	ebp, dword ptr [esp + 0x10]
        mov	ebx, dword ptr [esp + 0x14]
        jmp loc_00567f88
    loc_00568452:
        pop	edi
        pop	esi
        pop	ebp
        pop	ebx
        add	esp, 0x14
        ret	0x4
    }
}


// [0x00563E80] sub_00563E80 (345 bytes)
extern "C" void ext_00563260();
extern "C" void ext_00563520();
extern "C" void ext_005A0F70();
extern "C" void ext_0067E410();
extern "C" void ext_0067E820();
extern "C" void ext_0067E990();
extern "C" void ext_007C5622();
extern "C" void ext_007C5652();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00563E80(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x89b7dc
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xa8
        push ebx
        mov ebx, dword ptr [esp + 0xbc]
        test ebx, ebx
        push esi
        mov esi, ecx
        je loc_563fc0
        push edi
        mov edi, dword ptr [esp + 0xc8]
        push edi
        call ext_00563260
        test al, al
        je loc_563fbf
        mov ecx, edi
        call ext_007C5622
        mov ecx, eax
        call ext_007C5652
        push eax
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, esi
        call ext_00563520
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esi + 0x414]
        mov dword ptr [esp + 0xc0], 0x0
        call ext_005A0F70
        mov edi, dword ptr [ebx + 0x190]
        test edi, edi
        je loc_563faa
        test eax, eax
        je loc_563faa
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0x10]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [esi + 0x420]
        push eax
        push 0x0
        lea eax, [esp + 0x3c]
        push eax
        call edx
        mov edx, dword ptr [esi + 0x420]
        mov eax, dword ptr [edi + 0x4]
        mov eax, dword ptr [eax + 0x10]
        push edx
        lea ecx, [edi + 0x4]
        push 0x0
        lea edx, [esp + 0x7c]
        push edx
        call eax
        mov edx, dword ptr [ebx + 0x4]
        mov eax, dword ptr [esi + 0x420]
        mov edx, dword ptr [edx + 0xc]
        lea edi, [ebx + 0x4]
        lea ecx, [esp + 0x34]
        push ecx
        push eax
        mov ecx, edi
        call edx
        mov ecx, eax
        call ext_0067E820
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0xc]
        lea eax, [esp + 0x74]
        push eax
        mov eax, dword ptr [esi + 0x420]
        push eax
        mov ecx, edi
        call edx
        mov ecx, eax
        call ext_0067E990
        fldz
        mov edx, dword ptr [edi]
        fst dword ptr [esp + 0xc]
        mov edx, dword ptr [edx + 0xc]
        fst dword ptr [esp + 0x10]
        lea eax, [esp + 0xc]
        fstp dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [esi + 0x420]
        push 0x0
        push eax
        mov ecx, edi
        call edx
        mov ecx, eax
        call ext_0067E410
    loc_563faa:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
    loc_563fbf:
        pop edi
    loc_563fc0:
        mov ecx, dword ptr [esp + 0xb0]
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0xb4
        ret 0x8
    }
}

// [0x00564090] sub_00564090 (1180 bytes)
extern "C" void ext_004F4E50();
extern "C" void ext_00553230();
extern "C" void ext_00554DC0();
extern "C" void ext_00563260();
extern "C" void ext_0067DAD0();
extern "C" void ext_0067E820();
extern "C" void ext_0067E990();
extern "C" void ext_00694B60();
extern "C" void ext_007C5664();
extern "C" void ext_007C567C();
extern "C" void ext_007C5682();
extern "C" void ext_007C5688();
extern "C" void ext_007C568E();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00564090(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x89b838
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x170
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18c]
        mov eax, dword ptr [ebp + 0x4]
        mov edx, dword ptr [eax + 0x4]
        push esi
        lea ebx, [ebp + 0x4]
        push edi
        mov esi, ecx
        push 0x2
        mov ecx, ebx
        mov dword ptr [esp + 0x14], esi
        call edx
        mov ecx, dword ptr [esi + 0x420]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, ebx
        call edx
        mov ecx, 0x10
        mov esi, eax
        lea edi, [esp + 0xf4]
        rep movsd
        mov esi, dword ptr [esp + 0x190]
        test esi, esi
        je L_564511
        cmp dword ptr [ebp + 0x190], 0x0
        jne L_564127
        mov ecx, dword ptr [ebp + 0x18c]
        mov eax, dword ptr [ecx + 0x154]
        mov edx, dword ptr [eax + 0x4]
        add ecx, 0x154
        call edx
        push eax
        lea ecx, [esp + 0xf8]
        call ext_0067E820
    L_564127:
        fldz
        lea eax, [esp + 0x78]
        fst dword ptr [esp + 0x2c]
        push eax
        fst dword ptr [esp + 0x2c]
        lea ecx, [esp + 0xf8]
        fst dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x128]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x12c]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x130]
        fstp dword ptr [esp + 0x48]
        fst dword ptr [esp + 0x84]
        fst dword ptr [esp + 0x80]
        fst dword ptr [esp + 0x90]
        fst dword ptr [esp + 0x88]
        fst dword ptr [esp + 0x98]
        fstp dword ptr [esp + 0x94]
        fld1
        fst dword ptr [esp + 0x7c]
        fst dword ptr [esp + 0x8c]
        fstp dword ptr [esp + 0x9c]
        call ext_0067DAD0
        lea ecx, [esp + 0x24]
        push ecx
        push 0x0
        lea ecx, [esp + 0x80]
        call ext_00694B60
        fldz
        mov edi, dword ptr [esp + 0x10]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x1c]
        push esi
        fst dword ptr [esp + 0x1c]
        mov ecx, edi
        fst dword ptr [esp + 0x3c]
        fst dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x34]
        call ext_00563260
        test al, al
        je L_56424d
        cmp dword ptr [ebp + 0x1e0], 0x3
        jne L_56424d
        lea edx, [ebp + 0x1e4]
        push edx
        lea ecx, [esp + 0x7c]
        mov byte ptr [esp + 0x1b], 0x1
        call dword ptr [mem_00924FE0]
        mov esi, dword ptr [ebp + 0x190]
        xor ecx, ecx
        test esi, esi
        mov dword ptr [esp + 0x188], ecx
        mov dword ptr [esp + 0x10], ecx
        je L_5642e8
        mov ebp, dword ptr [mem_00924FC4]
    L_564222:
        test ecx, ecx
        jne L_56426a
        cmp dword ptr [esi + 0x1e0], 0x1
        jne L_564254
        mov edx, dword ptr [esi]
        lea eax, [esp + 0x78]
        push eax
        mov eax, dword ptr [edx + 0x24]
        mov ecx, esi
        call eax
        push eax
        call ebp
        add esp, 0x8
        test al, al
        je L_564254
        mov dword ptr [esp + 0x10], esi
        jmp L_56425a
    L_56424d:
        xor bl, bl
        jmp L_564301
    L_564254:
        mov esi, dword ptr [esi + 0x190]
    L_56425a:
        test esi, esi
        mov ecx, dword ptr [esp + 0x10]
        jne L_564222
        test ecx, ecx
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_56426a:
        mov eax, dword ptr [edi + 0x420]
        mov edx, dword ptr [ecx + 0x4]
        mov edx, dword ptr [edx + 0x10]
        push eax
        add ecx, 0x4
        push 0x0
        lea eax, [esp + 0x148]
        push eax
        call edx
        mov ecx, dword ptr [edi + 0x420]
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 0x10]
        push ecx
        push 0x0
        lea edx, [esp + 0xbc]
        push edx
        mov ecx, ebx
        call eax
        lea ecx, [esp + 0x140]
        push ecx
        lea ecx, [esp + 0xb8]
        call ext_0067E990
        fld dword ptr [esp + 0xe4]
        fstp dword ptr [esp + 0x18]
        lea edx, [esp + 0x30]
        fld dword ptr [esp + 0xe8]
        push edx
        fstp dword ptr [esp + 0x20]
        push 0x0
        fld dword ptr [esp + 0xf4]
        lea ecx, [esp + 0xbc]
        fstp dword ptr [esp + 0x28]
        call ext_004F4E50
    L_5642e8:
        lea ecx, [esp + 0x78]
        mov dword ptr [esp + 0x188], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov bl, byte ptr [esp + 0x17]
    L_564301:
        fld dword ptr [esp + 0x3c]
        sub esp, 0xc
        mov eax, esp
        fstp dword ptr [eax]
        mov dword ptr [esp + 0x1c], esp
        fld dword ptr [esp + 0x4c]
        lea esi, [edi + 0x16c]
        fstp dword ptr [eax + 0x4]
        mov ecx, esi
        fld dword ptr [esp + 0x50]
        fstp dword ptr [eax + 0x8]
        lea eax, [esp + 0xb4]
        push eax
        call ext_00554DC0
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x3c]
        sub esp, 0xc
        fld dword ptr [eax + 0x4]
        lea ecx, [esp + 0xb4]
        fstp dword ptr [esp + 0x4c]
        mov dword ptr [esp + 0x1c], esp
        fld dword ptr [eax + 0x8]
        mov eax, esp
        fstp dword ptr [esp + 0x50]
        push ecx
        fld dword ptr [esp + 0x34]
        mov ecx, esi
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [eax + 0x8]
        call ext_00553230
        fld dword ptr [eax]
        sub esp, 0xc
        fstp dword ptr [esp + 0x30]
        lea edx, [esp + 0xb4]
        fld dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x1c], esp
        fstp dword ptr [esp + 0x34]
        mov ecx, esi
        fld dword ptr [eax + 0x8]
        mov eax, esp
        fstp dword ptr [esp + 0x38]
        push edx
        fld dword ptr [esp + 0x28]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [eax + 0x8]
        call ext_00554DC0
        fld dword ptr [eax]
        sub esp, 0xc
        fstp dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x1c], esp
        fld dword ptr [eax + 0x4]
        mov ecx, esi
        fstp dword ptr [esp + 0x28]
        fld dword ptr [eax + 0x8]
        mov eax, esp
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [eax + 0x8]
        lea eax, [esp + 0x140]
        push eax
        call ext_00553230
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x38]
        fld1
        fst dword ptr [esp + 0x48]
        mov edi, dword ptr [esp + 0x190]
        fst dword ptr [esp + 0x4c]
        mov ecx, edi
        fstp dword ptr [esp + 0x50]
        mov dword ptr [esp + 0x188], 0x5
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x6c]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x70]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x74]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x60]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x64]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x68]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x9c]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0xa0]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0xa4]
        call ext_007C5664
        mov esi, eax
        test esi, esi
        je L_5644c9
        lea ecx, [esp + 0x48]
        push ecx
        mov ecx, esi
        call ext_007C568E
        test bl, bl
        mov ecx, esi
        lea edx, [esp + 0x60]
        jne L_5644b7
        lea edx, [esp + 0x6c]
    L_5644b7:
        push edx
        call ext_007C5688
        lea eax, [esp + 0x54]
        push eax
        mov ecx, esi
        call ext_007C5682
    L_5644c9:
        mov ecx, edi
        call ext_007C567C
        mov esi, eax
        test esi, esi
        je L_564511
        lea ecx, [esp + 0x48]
        push ecx
        mov ecx, esi
        call ext_007C568E
        test bl, bl
        mov ecx, esi
        je L_5644fb
        lea edx, [esp + 0x60]
        push edx
        call ext_007C5688
        lea eax, [esp + 0x9c]
        jmp L_564509
    L_5644fb:
        lea edx, [esp + 0x6c]
        push edx
        call ext_007C5688
        lea eax, [esp + 0x54]
    L_564509:
        push eax
        mov ecx, esi
        call ext_007C5682
    L_564511:
        mov ecx, dword ptr [esp + 0x180]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0x17c
        ret 0x8
    }
}

// [0x00565E20] sub_00565E20 (67 bytes)
extern "C" void* __fastcall ext_007C573C(void*);
extern "C" void ext_005633A0();
extern "C" void ext_00563430();
extern "C" void ext_00564090();
extern "C" void ext_005654A0();

extern "C" void* __fastcall fn_00565E20(void* self, int, void* a1, void* a2, void* a3) {
    void* esi = ext_007C573C(a2);
    ((void (__thiscall*)(void*, void*, void*))ext_005633A0)(self, esi, a1);
    ((void (__thiscall*)(void*, void*, void*))ext_00563430)(self, esi, a3);
    ((void (__thiscall*)(void*, void*, void*))ext_00564090)(self, esi, a1);
    ((void (__thiscall*)(void*, void*))ext_005654A0)(self, esi);
    return esi;
}

// [0x005655C0] sub_005655C0 (1339 bytes)
extern "C" void ext_004803F0();
extern "C" void ext_00553230();
extern "C" void ext_00554DC0();
extern "C" void ext_00556EB0();
extern "C" void ext_00563260();
extern "C" void ext_00563A40();
extern "C" void ext_006629B0();
extern "C" void ext_0067DAD0();
extern "C" void ext_0067E650();
extern "C" void ext_0067E820();
extern "C" void ext_00694B60();
extern "C" void ext_007C5664();
extern "C" void ext_007C56B8();
extern "C" void ext_007C56BE();
extern "C" void ext_007C56C4();
extern "C" void ext_007C572A();
extern "C" int mem_00925134;
extern "C" int mem_00957754;
extern "C" int mem_00958A48;
extern "C" int mem_0092A270;

extern "C" __declspec(naked) void __fastcall fn_005655C0(void* self) {
    __asm {
        sub     esp, 0xc0
        cmp     dword ptr [esp + 0xc8], 0x0
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     dword ptr [esp + 0x24], edi
        je      L_565aee
        mov     esi, dword ptr [edi + 0x420]
        add     esi, 0x8
        cmp     dword ptr [esi], 0x0
        jne     L_5655f2
        call    dword ptr [mem_00925134]
    L_5655f2:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi + 0x4]
        cmp     ecx, dword ptr [eax + 0x4]
        jne     L_565602
        call    dword ptr [mem_00925134]
    L_565602:
        mov     edx, dword ptr [esi + 0x4]
        fldz
        mov     ebp, dword ptr [edx + 0x8]
        fst     dword ptr [esp + 0x20]
        mov     esi, dword ptr [esp + 0xd8]
        fst     dword ptr [esp + 0x1c]
        sub     ebp, dword ptr [edi + 0x16c]
        fstp    dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi + 0x4]
        mov     edx, dword ptr [eax + 0x4]
        add     esi, 0x4
        lea     ebx, [edi + 0x16c]
        push    0x2
        mov     ecx, esi
        sub     ebp, 0x1
        call    edx
        mov     ecx, dword ptr [edi + 0x420]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0xc]
        push    ecx
        mov     ecx, esi
        call    edx
        mov     ecx, 0x10
        mov     esi, eax
        lea     edi, [esp + 0x90]
        rep     movsd
        mov     esi, dword ptr [esp + 0xd8]
        cmp     dword ptr [esi + 0x190], 0x0
        jne     L_5656cb
        mov     ecx, dword ptr [esi + 0x18c]
        mov     eax, dword ptr [ecx + 0x154]
        mov     edx, dword ptr [eax + 0x4]
        add     ecx, 0x154
        call    edx
        push    eax
        lea     ecx, [esp + 0x94]
        call    ext_0067E820
        mov     edi, dword ptr [esp + 0x24]
        cmp     byte ptr [edi + 0x180], 0x0
        jne     L_5656cf
        lea     ecx, [esp + 0x50]
        call    ext_004803F0
        fld     dword ptr [mem_00957754]
        push    ecx
        lea     ecx, [esp + 0x54]
        fstp    dword ptr [esp]
        call    ext_0067E650
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0x94]
        call    ext_0067E820
        jmp     L_5656cf
    L_5656cb:
        mov     edi, dword ptr [esp + 0x24]
    L_5656cf:
        fld     dword ptr [esp + 0xc0]
        lea     ecx, [esp + 0x50]
        fstp    dword ptr [esp + 0x28]
        push    ecx
        fld     dword ptr [esp + 0xc8]
        lea     ecx, [esp + 0x94]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0xcc]
        fstp    dword ptr [esp + 0x34]
        fldz
        fst     dword ptr [esp + 0x5c]
        fst     dword ptr [esp + 0x58]
        fst     dword ptr [esp + 0x68]
        fst     dword ptr [esp + 0x60]
        fst     dword ptr [esp + 0x70]
        fstp    dword ptr [esp + 0x6c]
        fld1
        fst     dword ptr [esp + 0x54]
        fst     dword ptr [esp + 0x64]
        fstp    dword ptr [esp + 0x74]
        call    ext_0067DAD0
        lea     edx, [esp + 0x18]
        push    edx
        push    0x0
        lea     ecx, [esp + 0x58]
        call    ext_00694B60
        cmp     byte ptr [ebx + 0xa8], 0x0
        je      L_565827
        lea     eax, [ebx + 0x8c]
        push    eax
        call    ext_006629B0
        add     esp, 0x4
        test    al, al
        je      L_565827
        fldz
        mov     edx, dword ptr [esp + 0xd4]
        lea     ecx, [esp + 0x3c]
        fst     dword ptr [esp + 0x44]
        push    ecx
        fst     dword ptr [esp + 0x44]
        push    edx
        fstp    dword ptr [esp + 0x44]
        mov     ecx, edi
        call    ext_00563A40
        fld     dword ptr [esp + 0x3c]
        fst     qword ptr [esp + 0x34]
        sub     esp, 0x18
        fld     qword ptr [mem_00958A48]
        fstp    qword ptr [esp + 0x10]
        fldz
        fstp    qword ptr [esp + 0x8]
        fstp    qword ptr [esp]
        call    ext_0056B670
        add     esp, 0x18
        test    al, al
        jne     L_5657b7
        fld1
        fdiv    qword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
    L_5657b7:
        fld     dword ptr [esp + 0x40]
        sub     esp, 0x18
        fst     qword ptr [esp + 0x4c]
        fld     qword ptr [mem_00958A48]
        fstp    qword ptr [esp + 0x10]
        fldz
        fstp    qword ptr [esp + 0x8]
        fstp    qword ptr [esp]
        call    ext_0056B670
        add     esp, 0x18
        test    al, al
        jne     L_5657ef
        fld1
        fdiv    qword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x2c]
    L_5657ef:
        fld     dword ptr [esp + 0x44]
        sub     esp, 0x18
        fst     qword ptr [esp + 0x4c]
        fld     qword ptr [mem_00958A48]
        fstp    qword ptr [esp + 0x10]
        fldz
        fstp    qword ptr [esp + 0x8]
        fstp    qword ptr [esp]
        call    ext_0056B670
        add     esp, 0x18
        test    al, al
        jne     L_565827
        fld1
        fdiv    qword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x30]
    L_565827:
        fld     dword ptr [esp + 0x28]
        sub     esp, 0xc
        mov     eax, esp
        fstp    dword ptr [eax]
        mov     dword ptr [esp + 0x40], esp
        fld     dword ptr [esp + 0x38]
        mov     ecx, ebx
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x3c]
        fstp    dword ptr [eax + 0x8]
        lea     eax, [esp + 0x48]
        push    eax
        call    ext_00554DC0
        fld     dword ptr [eax]
        cmp     byte ptr [edi + 0x1e0], 0x0
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x30]
        je      L_5658ab
        fld     dword ptr [esp + 0x18]
        sub     esp, 0xc
        mov     eax, esp
        fstp    dword ptr [eax]
        mov     dword ptr [esp + 0x40], esp
        fld     dword ptr [esp + 0x28]
        push    esi
        fstp    dword ptr [eax + 0x4]
        lea     ecx, [esp + 0x4c]
        fld     dword ptr [esp + 0x30]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [eax + 0x8]
        call    ext_00556EB0
        fld     dword ptr [eax]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x20]
    L_5658ab:
        fld     dword ptr [esp + 0x18]
        sub     esp, 0xc
        mov     eax, esp
        fstp    dword ptr [eax]
        lea     edx, [esp + 0x48]
        fld     dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x40], esp
        fstp    dword ptr [eax + 0x4]
        push    edx
        fld     dword ptr [esp + 0x30]
        mov     ecx, ebx
        fstp    dword ptr [eax + 0x8]
        call    ext_00553230
        fld     dword ptr [eax]
        mov     esi, dword ptr [edi + 0x420]
        fstp    dword ptr [esp + 0x18]
        add     esi, 0x8
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x20]
        cmp     dword ptr [esi], 0x0
        jne     L_5658fc
        call    dword ptr [mem_00925134]
    L_5658fc:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi + 0x4]
        cmp     ecx, dword ptr [eax + 0x4]
        jne     L_56590c
        call    dword ptr [mem_00925134]
    L_56590c:
        mov     edx, dword ptr [esi + 0x4]
        fild    dword ptr [edx + 0x8]
        mov     ecx, dword ptr [esp + 0xd4]
        fsub    qword ptr [mem_0092A270]
        fstp    dword ptr [esp + 0x4c]
        call    ext_007C5664
        mov     esi, eax
        mov     ecx, esi
        call    ext_007C56C4
        mov     ecx, esi
        mov     ebx, eax
        call    ext_007C56BE
        mov     dword ptr [esp + 0x48], eax
        xor     eax, eax
        add     ebx, -0x1
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x34], ebx
        js      L_565aee
    L_565951:
        mov     ecx, dword ptr [esp + 0x48]
        mov     esi, dword ptr [ecx + 4*eax]
        test    esi, esi
        je      L_565ad9
        mov     ecx, esi
        call    ext_007C572A
        test    eax, eax
        je      L_565ad9
        mov     ecx, esi
        call    ext_007C56B8
        cmp     eax, 0x27
        sete    byte ptr [esp + 0x13]
        cmp     eax, 0x28
        sete    byte ptr [esp + 0x14]
        cmp     eax, 0x29
        sete    byte ptr [esp + 0x15]
        cmp     eax, 0x24
        sete    bl
        cmp     eax, 0x25
        sete    cl
        cmp     eax, 0x26
        sete    al
        test    bl, bl
        mov     byte ptr [esp + 0x17], cl
        mov     byte ptr [esp + 0x16], al
        jne     L_5659b8
        test    cl, cl
        jne     L_5659b8
        test    al, al
        mov     byte ptr [esp + 0x12], bl
        je      L_5659bd
    L_5659b8:
        mov     byte ptr [esp + 0x12], 0x1
    L_5659bd:
        mov     edx, dword ptr [esp + 0xd4]
        push    edx
        mov     ecx, edi
        call    ext_00563260
        test    al, al
        jne     L_5659e8
        cmp     byte ptr [esp + 0x12], al
        jne     L_5659f3
        cmp     byte ptr [esp + 0x13], al
        jne     L_5659f3
        cmp     byte ptr [esp + 0x14], al
        jne     L_5659f3
        cmp     byte ptr [esp + 0x15], al
        jmp     L_5659ed
    L_5659e8:
        cmp     byte ptr [esp + 0x12], 0x0
    L_5659ed:
        je      L_565ad9
    L_5659f3:
        mov     ecx, esi
        call    ext_007C572A
        fld     dword ptr [esp + 0x4c]
        mov     eax, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [eax + 0x10]
        fstp    dword ptr [ecx + 8*ebp]
        mov     ecx, esi
        call    ext_007C572A
        fldz
        mov     edx, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [esp + 0xd4]
        mov     eax, dword ptr [edx + 0x10]
        push    ecx
        fstp    dword ptr [eax + 8*ebp + 0x4]
        mov     ecx, edi
        call    ext_00563260
        test    al, al
        jne     L_565a84
        cmp     byte ptr [esp + 0x13], al
        je      L_565a4a
        mov     ecx, esi
        call    ext_007C572A
        fld     dword ptr [esp + 0x28]
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [edx + 0x10]
        fstp    dword ptr [eax + 8*ebp + 0x4]
        jmp     L_565a84
    L_565a4a:
        cmp     byte ptr [esp + 0x14], 0x0
        je      L_565a68
        mov     ecx, esi
        call    ext_007C572A
        fld     dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [ecx + 0x10]
        fstp    dword ptr [edx + 8*ebp + 0x4]
        jmp     L_565a84
    L_565a68:
        cmp     byte ptr [esp + 0x15], 0x0
        je      L_565a84
        mov     ecx, esi
        call    ext_007C572A
        fld     dword ptr [esp + 0x30]
        mov     eax, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [eax + 0x10]
        fstp    dword ptr [ecx + 8*ebp + 0x4]
    L_565a84:
        test    bl, bl
        je      L_565a9f
        mov     ecx, esi
        call    ext_007C572A
        fld     dword ptr [esp + 0x18]
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [edx + 0x10]
        fstp    dword ptr [eax + 8*ebp + 0x4]
        jmp     L_565ad9
    L_565a9f:
        cmp     byte ptr [esp + 0x17], 0x0
        je      L_565abd
        mov     ecx, esi
        call    ext_007C572A
        fld     dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [ecx + 0x10]
        fstp    dword ptr [edx + 8*ebp + 0x4]
        jmp     L_565ad9
    L_565abd:
        cmp     byte ptr [esp + 0x16], 0x0
        je      L_565ad9
        mov     ecx, esi
        call    ext_007C572A
        fld     dword ptr [esp + 0x20]
        mov     eax, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [eax + 0x10]
        fstp    dword ptr [ecx + 8*ebp + 0x4]
    L_565ad9:
        mov     eax, dword ptr [esp + 0x24]
        add     eax, 0x1
        cmp     eax, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x24], eax
        jle     L_565951
    L_565aee:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc0
        ret     0x8
    }
}

// [0x00566020] sub_00566020 (35 bytes)
extern "C" void ext_00565CF0();
extern "C" void ext_00566050();
extern "C" __declspec(naked) void __fastcall fn_00566020(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        push ebx
        mov esi, ecx
        call ext_00565CF0
        push edi
        push ebx
        mov ecx, esi
        call ext_00566050
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}

// [0x00569190] sub_00569190 (38 bytes)
// Stack args: arg1 = first, arg2 = last, arg3 = value. For p = first; p != last; p += 0x10: push value, ecx = p, call sub_00406940 (callee cleans the pushed arg). Plain ret.
extern "C" void ext_00406940();

extern "C" __declspec(naked) void __cdecl fn_00569190(void* first, void* last, const void* value) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    loop_top:
        push ebx
        mov ecx, esi
        call ext_00406940
        add esi, 0x10
        cmp esi, edi
        jne loop_top
        pop ebx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x0056C010] sub_0056C010 (469 bytes)
extern "C" void ext_0048EF80();
extern "C" void ext_005EEB90();
extern "C" void ext_00664ED0();
extern "C" void ext_006651D0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE8;
extern "C" int mem_00925134;
extern "C" int mem_00924EAC;
extern "C" int mem_0092500C;
extern "C" int mem_00924EC0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __stdcall fn_0056C010(void* self, void* str) {
    __asm {
        push -1
        push 08848f2h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 40h
        mov eax, dword ptr [esp+54h]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        lea ecx, [esp+1ch]
        xor esi, esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp+18h]
        push ecx
        mov dword ptr [esp+5ch], esi
        call ext_006651D0
        lea edx, [esp+1ch]
        push edx
        call ext_00664ED0
        add esp, 8
        lea ecx, [esp+34h]
        call dword ptr [mem_00924FE8]
        mov edi, dword ptr [esp+60h]
        mov ebp, dword ptr [edi+170h]
        add edi, 168h
        cmp dword ptr [edi+4], ebp
        mov byte ptr [esp+58h], 1
        jbe L_ok1
        call dword ptr [mem_00925134]
L_ok1:
        mov ebx, dword ptr [edi+4]
        cmp ebx, dword ptr [edi+8]
        jbe L_ok2
        call dword ptr [mem_00925134]
L_ok2:
        push ebp
        push edi
        push ebx
        push edi
        lea eax, [esp+20h]
        push eax
        mov ecx, edi
        call ext_0048EF80
        lea ecx, [esp+18h]
        call dword ptr [mem_00924EAC]
        test eax, eax
        jbe L_end
L_loop:
        push esi
        lea ecx, [esp+1ch]
        call dword ptr [mem_0092500C]
        cmp byte ptr [eax], 54h
        lea ecx, [esp+18h]
        jne L_notT
        add esi, 1
        push esi
        call dword ptr [mem_0092500C]
        cmp byte ptr [eax], 58h
        jne L_chkY
        mov ecx, dword ptr [esp+60h]
        push 3
        call ext_005EEB90
        jmp L_iter
L_chkY:
        push esi
        lea ecx, [esp+1ch]
        call dword ptr [mem_0092500C]
        cmp byte ptr [eax], 59h
        jne L_chkZ
        mov ecx, dword ptr [esp+60h]
        push 4
        call ext_005EEB90
        jmp L_iter
L_chkZ:
        push esi
        lea ecx, [esp+1ch]
        call dword ptr [mem_0092500C]
        cmp byte ptr [eax], 5ah
        jne L_iter
        mov ecx, dword ptr [esp+60h]
        push 5
        call ext_005EEB90
        jmp L_iter
L_notT:
        push esi
        call dword ptr [mem_0092500C]
        cmp byte ptr [eax], 52h
        jne L_iter
        add esi, 1
        push esi
        lea ecx, [esp+1ch]
        call dword ptr [mem_0092500C]
        cmp byte ptr [eax], 58h
        jne L_chkY2
        mov ecx, dword ptr [esp+60h]
        push 0
        call ext_005EEB90
        push 58h
        jmp L_store
L_chkY2:
        push esi
        lea ecx, [esp+1ch]
        call dword ptr [mem_0092500C]
        cmp byte ptr [eax], 59h
        jne L_chkZ2
        mov ecx, dword ptr [esp+60h]
        push 1
        call ext_005EEB90
        push 59h
        jmp L_store
L_chkZ2:
        push esi
        lea ecx, [esp+1ch]
        call dword ptr [mem_0092500C]
        cmp byte ptr [eax], 5ah
        jne L_iter
        mov ecx, dword ptr [esp+60h]
        push 2
        call ext_005EEB90
        push 5ah
L_store:
        lea ecx, [esp+38h]
        call dword ptr [mem_00924EC0]
L_iter:
        lea ecx, [esp+18h]
        add esi, 1
        call dword ptr [mem_00924EAC]
        cmp esi, eax
        jb L_loop
L_end:
        lea ecx, [esp+34h]
        mov byte ptr [esp+58h], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+18h]
        mov dword ptr [esp+58h], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp+50h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 4ch
        ret 8
    }
}

// [0x00569440] sub_00569440 (41 bytes)
extern "C" void ext_00569250();
extern "C" __declspec(naked) void __fastcall fn_00569440(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_00569250
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00565FF0] sub_00565FF0 (42 bytes)
extern "C" void ext_00564660();
extern "C" void ext_00565B20();
extern "C" void ext_007C56CA();

extern "C" __declspec(naked) void __fastcall fn_00565FF0(void* self) {
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x494]
        push    edi
        call    ext_007C56CA
        mov     ecx, esi
        mov     edi, eax
        call    ext_00564660
        push    edi
        lea     eax, [esi + 0x27c]
        push    eax
        mov     ecx, esi
        call    ext_00565B20
        pop     edi
        pop     esi
        ret
    }
}

extern "C" void ext_00563740();
extern "C" void ext_00565260();
extern "C" void ext_00565B60();

// [0x00565B20] sub_00565B20 (52 bytes)
extern "C" __declspec(naked) void __fastcall fn_00565B20(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        test    ebx, ebx
        push    edi
        mov     edi, ecx
        je      short done_edi
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        test    esi, esi
        je      short done_esi
        push    ebx
        push    esi
        call    ext_00563740
        push    ebx
        push    esi
        mov     ecx, edi
        call    ext_00565260
        push    ebx
        push    esi
        mov     ecx, edi
        call    ext_00565B60
    done_esi:
        pop     esi
    done_edi:
        pop     edi
        pop     ebx
        ret     8
    }
}

// [0x005694B0] sub_005694B0 (55 bytes)
extern "C" void ext_00569350();

extern "C" __declspec(naked) int __fastcall fn_005694B0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_00569350
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

// [0x005638D0] sub_005638D0 (363 bytes)
extern "C" void ext_00563220();
extern "C" void ext_00563240();
extern "C" void ext_00563260();
extern "C" void ext_00563520();
extern "C" void ext_005A35D0();
extern "C" void ext_007C5622();
extern "C" void ext_007C5652();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005638D0(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8b2d0b
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x54]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x70]
        mov ebx, ecx
        push edi
        mov ecx, esi
        call edx
        test al, al
        jne loc_56390b
        mov ecx, dword ptr [ebx + 0x414]
        push esi
        call ext_005A35D0
    loc_56390b:
        xor edi, edi
        push 0x928b5d
        lea ecx, [esp + 0x14]
        mov dword ptr [esi + 0x1e0], edi
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x10]
        lea ebp, [esi + 0x1e4]
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x54], edi
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x50], -1
        call dword ptr [mem_00924FF4]
        mov edi, dword ptr [esp + 0x5c]
        test edi, edi
        je loc_563a26
        push edi
        mov ecx, ebx
        call ext_00563220
        test al, al
        je loc_563982
        pop edi
        mov dword ptr [esi + 0x1e0], 1
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 8
    loc_563982:
        push edi
        mov ecx, ebx
        call ext_00563240
        test al, al
        je loc_5639ce
        mov ecx, edi
        mov dword ptr [esi + 0x1e0], 2
        call ext_007C5622
        mov ecx, eax
        call ext_007C5652
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, ebx
        call ext_00563520
        lea edx, [esp + 0x10]
        push edx
        mov ecx, ebp
        mov dword ptr [esp + 0x54], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x10]
        jmp loc_563a18
    loc_5639ce:
        push edi
        mov ecx, ebx
        call ext_00563260
        test al, al
        je loc_563a26
        mov ecx, edi
        mov dword ptr [esi + 0x1e0], 3
        call ext_007C5622
        mov ecx, eax
        call ext_007C5652
        push eax
        lea eax, [esp + 0x30]
        push eax
        mov ecx, ebx
        call ext_00563520
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x54], 2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x2c]
    loc_563a18:
        mov dword ptr [esp + 0x50], -1
        call dword ptr [mem_00924FF4]
    loc_563a26:
        mov ecx, dword ptr [esp + 0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 8
    }
}

extern "C" void ext_00406940();

// [0x00569150] sub_00569150 (57 bytes)
extern "C" __declspec(naked) void __cdecl fn_00569150() {
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     edi, ebx
        sub     edi, esi
        sar     edi, 4
        shl     edi, 4
        add     edi, ebp
        cmp     esi, ebx
        je      done
        sub     ebp, esi
    loop_start:
        push    esi
        lea     ecx, [esi + ebp]
        call    ext_00406940
        add     esi, 0x10
        cmp     esi, ebx
        jne     loop_start
    done:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}

// [0x00569830] sub_00569830 (89 bytes)
extern "C" void ext_00569150();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00569830(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5) {
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
        call ext_00569150
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edi, eax
        mov eax, dword ptr [esi + 0x8]
        push esi
        push eax
        push edi
        call ext_005693E0
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

extern "C" void ext_00569830();
extern "C" void ext_00596660();
extern "C" int mem_00924FD4;
extern "C" int mem_00925134;
extern "C" int mem_00928B5D;

// [0x00569A40] sub_00569A40 (179 bytes)
extern "C" __declspec(naked) void __fastcall fn_00569A40(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        push offset mem_00928B5D
        lea ecx, [edi + 8]
        call dword ptr [mem_00924FD4]
        lea esi, [edi + 0x24]
        mov dword ptr [edi + 4], 0xffffffff
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe loc_569a6e
        call dword ptr [mem_00925134]
    loc_569a6e:
        push ebp
        mov ebp, dword ptr [esi + 4]
        cmp ebp, dword ptr [esi + 8]
        jbe loc_569a7d
        call dword ptr [mem_00925134]
    loc_569a7d:
        push ebx
        push esi
        push ebp
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        mov ebx, dword ptr [edi + 0x3c]
        cmp dword ptr [edi + 0x38], ebx
        lea esi, [edi + 0x34]
        jbe loc_569a9e
        call dword ptr [mem_00925134]
    loc_569a9e:
        mov ebp, dword ptr [esi + 4]
        cmp ebp, dword ptr [esi + 8]
        jbe loc_569aac
        call dword ptr [mem_00925134]
    loc_569aac:
        push ebx
        push esi
        push ebp
        push esi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        call ext_00569830
        lea esi, [edi + 0x44]
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        pop ebp
        jbe loc_569ace
        call dword ptr [mem_00925134]
    loc_569ace:
        mov ebx, dword ptr [esi + 4]
        cmp ebx, dword ptr [esi + 8]
        jbe loc_569adc
        call dword ptr [mem_00925134]
    loc_569adc:
        push edi
        push esi
        push ebx
        push esi
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, esi
        call ext_00569830
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00569DF0] sub_00569DF0 (107 bytes)
extern "C" void ext_00569A40();
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_00569DF0(void* self) {
    __asm {
        push -1
        push 0x89bded
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x958f68
        call dword ptr [mem_00924FE8]
        xor eax, eax
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esi + 0x2c], eax
        mov dword ptr [esi + 0x30], eax
        mov dword ptr [esi + 0x38], eax
        mov dword ptr [esi + 0x3c], eax
        mov dword ptr [esi + 0x40], eax
        mov dword ptr [esi + 0x48], eax
        mov dword ptr [esi + 0x4c], eax
        mov dword ptr [esi + 0x50], eax
        mov ecx, esi
        mov byte ptr [esp + 0x10], 0x3
        call ext_00569A40
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00569B00] sub_00569B00 (162 bytes)
extern "C" void ext_00569A40();
extern "C" void ext_00610AF0();
extern "C" int mem_00924FD4;
extern "C" int mem_0093F7B8;
extern "C" int mem_00928B5D;

extern "C" __declspec(naked) void __fastcall fn_00569B00(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00569A40
        fld1
        fst dword ptr [esi + 0x54]
        push offset mem_00928B5D
        fldz
        lea ecx, [esi + 0x70]
        fst dword ptr [esi + 0x58]
        fst dword ptr [esi + 0x5c]
        fxch st(1)
        fstp dword ptr [esi + 0x60]
        fst dword ptr [esi + 0x6c]
        fst dword ptr [esi + 0x68]
        fstp dword ptr [esi + 0x64]
        call dword ptr [mem_00924FD4]
        xor ebx, ebx
        push offset mem_00928B5D
        lea ecx, [esi + 0x1e8]
        mov dword ptr [esi + 0x1dc], ebx
        mov dword ptr [esi + 0x1e0], ebx
        call dword ptr [mem_00924FD4]
        mov byte ptr [esi + 0x1e4], bl
        mov byte ptr [esi + 0x1e5], bl
        mov byte ptr [esi + 0x1e6], bl
        mov byte ptr [esi + 0x1e7], bl
        lea edi, [esi + 0xa4]
        mov ebx, 7
    loop_569b75:
        lea ecx, [edi - 0x18]
        call ext_00610AF0
        mov ecx, edi
        call ext_00610AF0
        add edi, 0x30
        sub ebx, 1
        jne loop_569b75
        fld dword ptr [mem_0093F7B8]
        pop edi
        fst dword ptr [esi + 0x204]
        fstp dword ptr [esi + 0x208]
        pop esi
        pop ebx
        ret
    }
}

// [0x00569F20] sub_00569F20 (155 bytes)
extern "C" void ext_00569B00();
extern "C" void ext_00569DF0();
extern "C" void ext_006A6C99();

extern "C" __declspec(naked) void __fastcall fn_00569F20(void* self) {
    __asm {
        push -1
        push 0x89be6b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_00569DF0
        fldz
        mov dword ptr [esi], 0x958f80
        fst dword ptr [esi + 0x5c]
        fst dword ptr [esi + 0x58]
        lea ecx, [esi + 0x70]
        fst dword ptr [esi + 0x54]
        mov dword ptr [esp + 0x10], 0
        fst dword ptr [esi + 0x6c]
        fst dword ptr [esi + 0x68]
        fstp dword ptr [esi + 0x64]
        call dword ptr [mem_00924FE8]
        push 0x5b1130
        push 0x566ff0
        push 0xe
        push 0x18
        lea eax, [esi + 0x8c]
        push eax
        mov byte ptr [esp + 0x24], 1
        call ext_006A6C99
        lea ecx, [esi + 0x1e8]
        mov byte ptr [esp + 0x10], 2
        call dword ptr [mem_00924FE8]
        mov ecx, esi
        mov byte ptr [esp + 0x10], 3
        call ext_00569B00
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00569E60] sub_00569E60 (187 bytes)
extern "C" void ext_00569A40();
extern "C" void ext_00569DF0();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FD4;

// EH-frame constructor: two std::string members plus float fields; declared naked because of the fs:[0] SEH frame.
extern "C" __declspec(naked) void __fastcall fn_00569E60(void* self) {
    __asm {
        push -1
        push 0x89be20
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_00569DF0
        lea edi, [esi + 0x54]
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi], 0x958f74
        call dword ptr [mem_00924FE8]
        lea ebx, [esi + 0x70]
        mov ecx, ebx
        mov byte ptr [esp + 0x18], 1
        call dword ptr [mem_00924FE8]
        fldz
        fst dword ptr [esi + 0x94]
        mov ecx, esi
        fst dword ptr [esi + 0x90]
        mov byte ptr [esp + 0x18], 2
        fst dword ptr [esi + 0x8c]
        fst dword ptr [esi + 0xa0]
        fst dword ptr [esi + 0x9c]
        fstp dword ptr [esi + 0x98]
        call ext_00569A40
        push 0x93e1e4
        lea ecx, [esi + 0x8]
        call dword ptr [mem_00924FD4]
        push 0x928b5d
        mov ecx, edi
        call dword ptr [mem_00924FD4]
        push 0x928b5d
        mov ecx, ebx
        call dword ptr [mem_00924FD4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00565300] sub_00565300 (70 bytes)
extern "C" void ext_00563810();
extern "C" void ext_005638D0();
extern "C" void ext_00563E80();
extern "C" void ext_00563FE0();
extern "C" void ext_005647F0();
extern "C" __declspec(naked) void __fastcall fn_00565300(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        test    ebx, ebx
        push    edi
        mov     edi, ecx
        je      short done_edi
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        test    esi, esi
        je      short done_esi
        push    ebx
        push    esi
        call    ext_00563810
        push    ebx
        push    esi
        mov     ecx, edi
        call    ext_005638D0
        push    ebx
        push    esi
        mov     ecx, edi
        call    ext_005647F0
        push    ebx
        push    esi
        mov     ecx, edi
        call    ext_00563E80
        push    ebx
        push    esi
        mov     ecx, edi
        call    ext_00563FE0
    done_esi:
        pop     esi
    done_edi:
        pop     edi
        pop     ebx
        ret     8
    }
}

// [0x005691C0] sub_005691C0 (141 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00402800();

// Naked: MSVC /EHsc treats extern "C" callees as nothrow, which drops the try block,
// so the SEH frame is written out by hand.
extern "C" __declspec(naked) void* __cdecl fn_005691C0(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x89bcc1
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
        push edi
        mov ecx, esi
        call ext_00402800
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
    destroy_loop:
        mov ecx, esi
        call ext_004026E0
        add esi, 0x10
        cmp esi, edi
        jne destroy_loop
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
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00569350] sub_00569350 (141 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00402800();

extern "C" __declspec(naked) void __cdecl fn_00569350(void* first, unsigned int count, const void* val) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x0089BD11
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
    loop_00569350:
        cmp edi, ebx
        jbe exit_00569350
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_00569350
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call ext_00402800
    skip_00569350:
        sub edi, 0x1
        add esi, 0x10
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_00569350
    handler_00569350:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow_00569350
    dtor_00569350:
        mov ecx, esi
        call ext_004026E0
        add esi, 0x10
        cmp esi, edi
        jne dtor_00569350
    rethrow_00569350:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_00569350:
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
