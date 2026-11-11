// Decompiled translation unit: src/leaf/decompiled_5C0000.cpp

// [0x005C3AA0] sub_005C3AA0 (9 bytes)
extern "C" void ext_005C3A30();

extern "C" __declspec(naked) void __cdecl fn_005C3AA0() {
    __asm {
        call ext_005C3A30
        fld dword ptr [eax + 4]
        ret
    }
}

// [0x005CF930] sub_005CF930 (14 bytes)
extern "C" void ext_005B11E0();
extern "C" void __fastcall fn_005CF930(void* self) {
    // push 1; add ecx, 0x210; call sub_005B11E0; ret
    __asm {
        push 1
        add ecx, 0x210
        call ext_005B11E0
    }
}

// [0x005CE8D0] sub_005CE8D0 (20 bytes)
extern "C" void ext_00648370();
extern "C" __declspec(naked) void __fastcall fn_005CE8D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        push ecx
        mov ecx, dword ptr [ecx + 0xac]
        call ext_00648370
        ret 4
    }
}

// [0x005C4780] sub_005C4780 (25 bytes)
extern "C" void ext_00648790();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_005C4780(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_00648790
        push esi
        call ext_006A5C5C
        add esp, 4
    done:
        pop esi
        ret
    }
}

// [0x005CEA30] sub_005CEA30 (25 bytes)
extern "C" void ext_00648300();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_005CEA30(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_00648300
        push esi
        call ext_006A5C5C
        add esp, 4
    done:
        pop esi
        ret
    }
}

// [0x005C3760] sub_005C3760 (27 bytes)
extern "C" void ext_00648450();

extern "C" void __fastcall fn_005C3760(void* self) {
    unsigned char* p = (unsigned char*)self;
    void* child = *(void**)(p + 0x16c);
    if (child) {
        typedef void (__fastcall *FnCall)(void*);
        ((FnCall)ext_00648450)(child);
        p[0x168] = 0;
    }
}

// [0x005C3780] sub_005C3780 (27 bytes)
extern "C" void ext_00648460();
extern "C" void __fastcall fn_005C3780(void* self) {
    unsigned char* p = (unsigned char*)self;
    void* child = *(void**)(p + 0x16c);
    if (child) {
        typedef void (__fastcall *FnCall)(void*);
        ((FnCall)ext_00648460)(child);
        p[0x168] = 1;
    }
}

// [0x005C3740] sub_005C3740 (27 bytes)
extern "C" void ext_00648800();
extern "C" void __fastcall fn_005C3740(void* self) {
    unsigned char* p = (unsigned char*)self;
    void* child = *(void**)(p + 0x16c);
    if (child) {
        typedef void (__fastcall *FnCall)(void*);
        ((FnCall)ext_00648800)(child);
        p[0x168] = 0;
    }
}

// [0x005CFC80] sub_005CFC80 (37 bytes)
extern "C" void ext_00530730();
extern "C" __declspec(naked) void __fastcall fn_005CFC80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        je done
        mov eax, dword ptr [esi + 0x154]
        push eax
        call ext_00530730
        mov dword ptr [esi + 0x154], 0
    done:
        pop esi
        ret
    }
}

// [0x005C3F10] sub_005C3F10 (38 bytes)
extern "C" int mem_00B44C08;
extern "C" int mem_00B44C0C;

extern "C" int __fastcall fn_005C3F10(void* self) {
    int begin = mem_00B44C08;
    if (begin == 0) {
        return 0;
    }
    int n = mem_00B44C0C - begin;
    return n / 28;
}

// [0x005CE4F0] sub_005CE4F0 (44 bytes)
extern "C" void __fastcall fn_005CE4F0(void* self) {
    float* f = (float*)self;
    float z = 0.0f;
    f[6] = z;
    f[7] = z;
    f[2] = z;
    f[1] = z;
    f[0] = z;
    f[5] = z;
    f[4] = z;
    f[3] = z;
    f[10] = z;
    f[9] = z;
    f[8] = z;
    f[13] = z;
    f[12] = z;
    f[11] = z;
}

// [0x005CFE10] sub_005CFE10 (51 bytes)
extern "C" __declspec(naked) void __fastcall fn_005CFE10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x2c4]
        test ecx, ecx
        je null_obj
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebx
        call edx
        mov byte ptr [esi + 0x1f2], bl
        pop ebx
        pop esi
        ret 0x4
null_obj:
        mov al, byte ptr [esp + 0x8]
        mov byte ptr [esi + 0x1f2], al
        pop esi
        ret 0x4
    }
}

// [0x005C3030] sub_005C3030 (54 bytes)
extern "C" void ext_005B7260();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_005C3030(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x164], 0x0
        je done
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esi + 0x4]
        push edx
        call eax
        mov ecx, dword ptr [esp + 0x8]
        add eax, 0x30
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0x164]
        call ext_005B7260
done:
        pop esi
        ret 0x4
    }
}

// [0x005C3090] sub_005C3090 (54 bytes)
extern "C" void ext_005B72A0();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_005C3090(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x164], 0
        je done
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esi + 0x4]
        push edx
        call eax
        mov ecx, dword ptr [esp + 0x8]
        add eax, 0x30
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0x164]
        call ext_005B72A0
    done:
        pop esi
        ret 0x4
    }
}

// [0x005C40C0] sub_005C40C0 (56 bytes)
extern "C" void ext_006484F0();
extern "C" __declspec(naked) void __fastcall fn_005C40C0(void* self, int edx_unused, void* other) {
    __asm {
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x16c], 0
        je L_ret
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xec]
        mov ecx, esi
        call edx
        test al, al
        je L_pop
        mov eax, dword ptr [esi + 0x16c]
        mov ecx, dword ptr [edi + 0x16c]
        push eax
        call ext_006484F0
L_pop:
        pop esi
L_ret:
        pop edi
        ret 4
    }
}

// [0x005C38F0] sub_005C38F0 (60 bytes)
extern "C" void ext_005B6B60();
extern "C" int mem_00AE5598;
extern "C" int mem_00AE558C;
extern "C" int mem_00AE5590;
extern "C" int mem_00AE5594;

extern "C" __declspec(naked) void* __fastcall fn_005C38F0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x164]
        test ecx, ecx
        je L_zero_init
        jmp ext_005B6B60
    L_zero_init:
        mov eax, 1
        test byte ptr [mem_00AE5598], al
        jne L_done
        fldz
        or dword ptr [mem_00AE5598], eax
        fst dword ptr [mem_00AE558C]
        fst dword ptr [mem_00AE5590]
        fstp dword ptr [mem_00AE5594]
    L_done:
        mov eax, offset mem_00AE558C
        ret
    }
}

extern "C" void ext_005B6B90();
extern "C" int mem_00AE5598;
extern "C" int mem_00AE558C;
extern "C" int mem_00AE5590;
extern "C" int mem_00AE5594;

// [0x005C3930] sub_005C3930 (60 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005C3930(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x164]
        test ecx, ecx
        je short L_005C393F
        jmp ext_005B6B90
L_005C393F:
        mov eax, 1
        test byte ptr [mem_00AE5598], al
        jne short L_005C3966
        fldz
        or dword ptr [mem_00AE5598], eax
        fst dword ptr [mem_00AE558C]
        fst dword ptr [mem_00AE5590]
        fstp dword ptr [mem_00AE5594]
L_005C3966:
        mov eax, offset mem_00AE558C
        ret
    }
}

// [0x005C3970] sub_005C3970 (60 bytes)
extern "C" void ext_005B6BC0();
extern "C" int mem_00AE5598;
extern "C" int mem_00AE558C;
extern "C" int mem_00AE5590;
extern "C" int mem_00AE5594;

extern "C" __declspec(naked) void* __fastcall fn_005C3970(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x164]
        test ecx, ecx
        je init
        jmp ext_005B6BC0
    init:
        mov eax, 1
        test byte ptr [mem_00AE5598], al
        jne done
        fldz
        or dword ptr [mem_00AE5598], eax
        fst dword ptr [mem_00AE558C]
        fst dword ptr [mem_00AE5590]
        fstp dword ptr [mem_00AE5594]
    done:
        mov eax, offset mem_00AE558C
        ret
    }
}

// [0x005C39B0] sub_005C39B0 (60 bytes)
extern "C" void ext_005B6BF0();
extern "C" int mem_00AE5598;
extern "C" int mem_00AE558C;
extern "C" int mem_00AE5590;
extern "C" int mem_00AE5594;

extern "C" __declspec(naked) void __fastcall fn_005C39B0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x164]
        test ecx, ecx
        je short L_005C39BF
        jmp ext_005B6BF0
L_005C39BF:
        mov eax, 1
        test byte ptr [mem_00AE5598], al
        jne short L_005C39E6
        fldz
        or dword ptr [mem_00AE5598], eax
        fst dword ptr [mem_00AE558C]
        fst dword ptr [mem_00AE5590]
        fstp dword ptr [mem_00AE5594]
L_005C39E6:
        mov eax, offset mem_00AE558C
        ret
    }
}

// [0x005C39F0] sub_005C39F0 (62 bytes)
extern "C" void ext_005B6C80();
extern "C" int mem_00AE5598;
extern "C" int mem_00AE558C;
extern "C" int mem_00AE5590;
extern "C" int mem_00AE5594;
extern "C" __declspec(naked) void __fastcall fn_005C39F0(void* self, int edx_unused, int a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0x164]
        test ecx, ecx
        je short zero_init
        jmp ext_005B6C80
    zero_init:
        mov eax, 1
        test byte ptr [mem_00AE5598], al
        jne short done
        fldz
        or dword ptr [mem_00AE5598], eax
        fst dword ptr [mem_00AE558C]
        fst dword ptr [mem_00AE5590]
        fstp dword ptr [mem_00AE5594]
    done:
        mov eax, offset mem_00AE558C
        ret 4
    }
}

// [0x005C8650] sub_005C8650 (62 bytes)
extern "C" void ext_005C83D0();
extern "C" void __fastcall fn_005C8650(void* self) {
    unsigned int* p = (unsigned int*)self;
    p[0] = 0x965704;
    p[1] = 0x9656bc;
    p[2] = 0x96567c;
    p[3] = 0x96562c;
    p[0x150 / 4] = 0x965614;
    p[0x154 / 4] = 0x96560c;
    p[0x158 / 4] = 0x965600;
    ext_005C83D0();
}

// [0x005C88B0] sub_005C88B0 (62 bytes)
extern "C" void ext_005C83D0();
extern "C" void __fastcall fn_005C88B0(void* self) {
    unsigned char* p = (unsigned char*)self;
    *(unsigned int*)(p + 0x00) = 0x0096590c;
    *(unsigned int*)(p + 0x04) = 0x009658c4;
    *(unsigned int*)(p + 0x08) = 0x00965884;
    *(unsigned int*)(p + 0x0c) = 0x00965834;
    *(unsigned int*)(p + 0x150) = 0x00965820;
    *(unsigned int*)(p + 0x154) = 0x00965818;
    *(unsigned int*)(p + 0x158) = 0x0096580c;
    ext_005C83D0();
}

// [0x005CFCE0] sub_005CFCE0 (64 bytes)
extern "C" int mem_00924FC4;
extern "C" char mem_00B45854[];
extern "C" __declspec(naked) int __stdcall fn_005CFCE0(const void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        push esi
        push edi
        xor edi, edi
        mov esi, offset mem_00B45854
    loop_top:
        push ebx
        push esi
        call ebp
        add esp, 8
        test al, al
        jne found
        add esi, 1Ch
        add edi, 1
        cmp esi, offset mem_00B45854 + 38h
        jl loop_top
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
    found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x005CFD20] sub_005CFD20 (64 bytes)
extern "C" int mem_00924FC4;
extern "C" char mem_00B45890[];
extern "C" __declspec(naked) int __stdcall fn_005CFD20(const void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        push esi
        push edi
        xor edi, edi
        mov esi, offset mem_00B45890
    loop_top:
        push ebx
        push esi
        call ebp
        add esp, 8
        test al, al
        jne found
        add esi, 1Ch
        add edi, 1
        cmp esi, offset mem_00B45890 + 70h
        jl loop_top
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
    found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x005C2BE0] sub_005C2BE0 (66 bytes)
extern "C" void ext_005C1D50();
extern "C" void ext_005BE9F0();
extern "C" __declspec(naked) void __fastcall fn_005C2BE0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 3
        je set2
        cmp eax, 1
        jne not1
        xor eax, eax
        jmp compare
    not1:
        cmp eax, 4
        jne compare
        cmp dword ptr [ecx + 0x158], 0
        jne compare
    set2:
        mov eax, 2
    compare:
        mov edx, dword ptr [ecx + 0x184]
        cmp edx, eax
        je done
        mov dword ptr [esp + 4], eax
        jge to_be9f0
        jmp ext_005C1D50
    to_be9f0:
        jmp ext_005BE9F0
    done:
        ret 8
    }
}

// [0x005CFD60] sub_005CFD60 (67 bytes)
extern "C" int mem_00924FC4;
extern "C" char mem_00B45900[];
extern "C" __declspec(naked) int __stdcall fn_005CFD60(const void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        push esi
        push edi
        xor edi, edi
        mov esi, offset mem_00B45900
    loop_top:
        push ebx
        push esi
        call ebp
        add esp, 8
        test al, al
        jne found
        add esi, 1Ch
        add edi, 1
        cmp esi, offset mem_00B45900 + 38h
        jl loop_top
        pop edi
        pop esi
        pop ebp
        mov eax, 3
        pop ebx
        ret 4
    found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x005C6E00] sub_005C6E00 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4445C;
extern "C" int mem_00B44458;

extern "C" __declspec(naked) void* __fastcall fn_005C6E00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a46ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4445C], al
        jne L_done
        or dword ptr [mem_00B4445C], eax
        mov ecx, offset mem_00B44458
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44458], 0x9633f4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44458
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C6E60] sub_005C6E60 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B44464;
extern "C" int mem_00B44460;

extern "C" __declspec(naked) void* __fastcall fn_005C6E60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a46ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B44464], al
        jne L_done
        or dword ptr [mem_00B44464], eax
        mov ecx, offset mem_00B44460
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44460], 0x9634cc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44460
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C6EC0] sub_005C6EC0 (87 bytes)
extern "C" int mem_00B4446C;
extern "C" int mem_00B44468;

extern "C" __declspec(naked) void* __fastcall fn_005C6EC0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a470e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4446C], al
        jne L_done
        or dword ptr [mem_00B4446C], eax
        mov ecx, offset mem_00B44468
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44468], 0x9635a4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44468
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C6F20] sub_005C6F20 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B44474;
extern "C" int mem_00B44470;

extern "C" __declspec(naked) void* __fastcall fn_005C6F20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a472e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B44474], al
        jne L_done
        or dword ptr [mem_00B44474], eax
        mov ecx, offset mem_00B44470
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44470], 0x96367c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44470
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C6F80] sub_005C6F80 (87 bytes)
extern "C" int mem_00B4447C;
extern "C" int mem_00B44478;

extern "C" __declspec(naked) void* __fastcall fn_005C6F80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a474e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4447C], al
        jne L_done
        or dword ptr [mem_00B4447C], eax
        mov ecx, offset mem_00B44478
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44478], 0x963754
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44478
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C6FE0] sub_005C6FE0 (87 bytes)
extern "C" int mem_00B44484;
extern "C" int mem_00B44480;

extern "C" __declspec(naked) void* __fastcall fn_005C6FE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a476e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B44484], al
        jne L_done
        or dword ptr [mem_00B44484], eax
        mov ecx, offset mem_00B44480
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44480], 0x96382c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44480
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C7040] sub_005C7040 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4448C;
extern "C" int mem_00B44488;

extern "C" __declspec(naked) void* __fastcall fn_005C7040(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a478e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4448C], al
        jne L_done
        or dword ptr [mem_00B4448C], eax
        mov ecx, offset mem_00B44488
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44488], 0x963904
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44488
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C70A0] sub_005C70A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B44494;
extern "C" int mem_00B44490;

extern "C" __declspec(naked) void* __fastcall fn_005C70A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a47ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B44494], al
        jne L_done
        or dword ptr [mem_00B44494], eax
        mov ecx, offset mem_00B44490
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44490], 0x9639dc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44490
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C7100] sub_005C7100 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4449C;
extern "C" int mem_00B44498;

extern "C" __declspec(naked) void* __fastcall fn_005C7100(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a47ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4449C], al
        jne L_done
        or dword ptr [mem_00B4449C], eax
        mov ecx, offset mem_00B44498
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44498], 0x963ab4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44498
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C7160] sub_005C7160 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B444A4;
extern "C" int mem_00B444A0;

extern "C" __declspec(naked) void* __fastcall fn_005C7160(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a47ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B444A4], al
        jne L_done
        or dword ptr [mem_00B444A4], eax
        mov ecx, offset mem_00B444A0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B444A0], 0x963b8c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B444A0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C71C0] sub_005C71C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B444AC;
extern "C" int mem_00B444A8;

extern "C" __declspec(naked) void* __fastcall fn_005C71C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a480e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B444AC], al
        jne L_done
        or dword ptr [mem_00B444AC], eax
        mov ecx, offset mem_00B444A8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B444A8], 0x963c64
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B444A8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C7220] sub_005C7220 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B444B4;
extern "C" int mem_00B444B0;

extern "C" __declspec(naked) void* __fastcall fn_005C7220(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a482e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B444B4], al
        jne L_done
        or dword ptr [mem_00B444B4], eax
        mov ecx, offset mem_00B444B0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B444B0], 0x963d3c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B444B0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}
