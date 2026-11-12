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
