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
