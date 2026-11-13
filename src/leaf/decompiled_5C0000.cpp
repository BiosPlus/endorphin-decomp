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

// [0x005C7280] sub_005C7280 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B444BC;
extern "C" int mem_00B444B8;

extern "C" __declspec(naked) void* __fastcall fn_005C7280(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a484e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B444BC], al
        jne L_done
        or dword ptr [mem_00B444BC], eax
        mov ecx, offset mem_00B444B8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B444B8], 0x963e14
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B444B8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C72E0] sub_005C72E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B444C4;
extern "C" int mem_00B444C0;

extern "C" __declspec(naked) void* __fastcall fn_005C72E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a486e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B444C4], al
        jne L_done
        or dword ptr [mem_00B444C4], eax
        mov ecx, offset mem_00B444C0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B444C0], 0x963fc4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B444C0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C7340] sub_005C7340 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B444CC;
extern "C" int mem_00B444C8;

extern "C" __declspec(naked) void* __fastcall fn_005C7340(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a488e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B444CC], al
        jne L_done
        or dword ptr [mem_00B444CC], eax
        mov ecx, offset mem_00B444C8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B444C8], 0x964174
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B444C8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005CBF80] sub_005CBF80 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4451C;
extern "C" int mem_00B44518;

extern "C" __declspec(naked) void* __fastcall fn_005CBF80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a499e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4451C], al
        jne L_done
        or dword ptr [mem_00B4451C], eax
        mov ecx, offset mem_00B44518
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44518], 0x964c6c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44518
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005CC750] sub_005CC750 (30 bytes)
extern "C" void ext_005CBF80();

extern "C" __declspec(naked) void __fastcall fn_005CC750(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005CBF80
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005CBFE0] sub_005CBFE0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B44524;
extern "C" int mem_00B44520;

extern "C" __declspec(naked) void* __fastcall fn_005CBFE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a49be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B44524], al
        jne L_done
        or dword ptr [mem_00B44524], eax
        mov ecx, offset mem_00B44520
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44520], 0x964e1c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44520
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005CC040] sub_005CC040 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4452C;
extern "C" int mem_00B44528;

extern "C" __declspec(naked) void* __fastcall fn_005CC040(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a49de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4452C], al
        jne L_done
        or dword ptr [mem_00B4452C], eax
        mov ecx, offset mem_00B44528
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44528], 0x964fcc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44528
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005CC770] sub_005CC770 (30 bytes)
extern "C" void ext_005CBFE0();

extern "C" __declspec(naked) void __fastcall fn_005CC770(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005CBFE0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005CC790] sub_005CC790 (30 bytes)
extern "C" void ext_005CC040();

extern "C" __declspec(naked) void __fastcall fn_005CC790(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005CC040
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005CC0A0] sub_005CC0A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B44534;
extern "C" int mem_00B44530;

extern "C" __declspec(naked) void* __fastcall fn_005CC0A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a49fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B44534], al
        jne L_done
        or dword ptr [mem_00B44534], eax
        mov ecx, offset mem_00B44530
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44530], 0x96517c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44530
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005CF420] sub_005CF420 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B44C20;
extern "C" int mem_00B44C1C;

extern "C" __declspec(naked) void* __fastcall fn_005CF420(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a4f9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B44C20], al
        jne L_done
        or dword ptr [mem_00B44C20], eax
        mov ecx, offset mem_00B44C1C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B44C1C], 0x965ac4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B44C1C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005CC7B0] sub_005CC7B0 (30 bytes)
extern "C" void ext_005CC0A0();

extern "C" __declspec(naked) void __fastcall fn_005CC7B0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005CC0A0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005CF4A0] sub_005CF4A0 (30 bytes)
extern "C" void ext_005CF420();

extern "C" __declspec(naked) void __fastcall fn_005CF4A0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005CF420
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005CFDB0] sub_005CFDB0 (92 bytes)
extern "C" int mem_00924FC0;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) int __stdcall fn_005CFDB0(void* a1) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        push 0x92f10c
        push ebp
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_5CFDD1
        mov eax, 0x1
        pop ebp
        ret 0x4
L_5CFDD1:
        push ebx
        mov ebx, dword ptr [mem_00924FC4]
        push esi
        push edi
        xor edi, edi
        mov esi, 0xb45938
L_5CFDE1:
        push ebp
        push esi
        call ebx
        add esp, 0x8
        test al, al
        jne L_5CFE03
        add esi, 0x1c
        add edi, 0x1
        cmp esi, 0xb459a8
        jl L_5CFDE1
        pop edi
        pop esi
        pop ebx
        xor eax, eax
        pop ebp
        ret 0x4
L_5CFE03:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0x4
    }
}

// [0x005C3EA0] sub_005C3EA0 (99 bytes)
extern "C" int mem_00B44C08;
extern "C" int mem_00B44C0C;
extern "C" int mem_00925134;
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __fastcall fn_005C3EA0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ebx, ecx
        push edi
        mov dword ptr [ebx + 0x198], esi
        mov edi, dword ptr [mem_00B44C08]
        test edi, edi
        je fail_005C3EA0
        mov ecx, dword ptr [mem_00B44C0C]
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp esi, eax
        jb ok_005C3EA0
    fail_005C3EA0:
        call dword ptr [mem_00925134]
        mov edi, dword ptr [mem_00B44C08]
    ok_005C3EA0:
        lea eax, [8*esi]
        sub eax, esi
        lea ecx, [edi + 4*eax]
        push ecx
        lea ecx, [ebx + 0x17c]
        call dword ptr [mem_00924FDC]
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x005C3FB0] sub_005C3FB0 (103 bytes)
extern "C" int mem_00B44C08;
extern "C" int mem_00B44C0C;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) int __fastcall fn_005C3FB0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov ebp, ecx
        xor ebx, ebx
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loop_top:
        mov esi, dword ptr [mem_00B44C08]
        test esi, esi
        je not_found
        mov ecx, dword ptr [mem_00B44C0C]
        sub ecx, esi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jae not_found
        lea ecx, [ebp + 0x17c]
        lea eax, [ebx + esi]
        push ecx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        jne found
        add edi, 0x1
        add ebx, 0x1c
        jmp loop_top
found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
not_found:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x005C3A30] sub_005C3A30 (107 bytes)
extern "C" void ext_00648480();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void* __fastcall fn_005C3A30(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x16c]
        test ecx, ecx
        je L_else_005C3A30
        cmp byte ptr [esi + 0x168], 0
        je L_else_005C3A30
        call ext_00648480
        fld dword ptr [eax + 0x30]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x34]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x38]
        lea eax, [esi + 0x170]
        fstp dword ptr [esp + 0xc]
        pop esi
        fld dword ptr [esp]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        add esp, 0x10
        ret
L_else_005C3A30:
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esi + 0x4]
        push edx
        call eax
        add eax, 0x30
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x005C3F40] sub_005C3F40 (109 bytes)
extern "C" int mem_00B44C08;
extern "C" int mem_00B44C0C;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_005C3F40(void* self, int edx_unused, void* out, unsigned int idx) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [mem_00B44C08]
        test edi, edi
        mov dword ptr [esp + 0x8], 0
        je empty
        mov ecx, dword ptr [mem_00B44C0C]
        mov esi, dword ptr [esp + 0x14]
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp esi, eax
        jae empty
        lea eax, [esi*8]
        sub eax, esi
        mov esi, dword ptr [esp + 0x10]
        lea ecx, [edi + eax*4]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    empty:
        mov esi, dword ptr [esp + 0x10]
        mov ecx, esi
        call dword ptr [mem_00924FE8]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005CF3E0] sub_005CF3E0 (58 bytes)
extern "C" void ext_00647CA0();
extern "C" void ext_00648300();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_005CF3E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xac]
        test ecx, ecx
        je short L_done
        push edi
        call ext_00647CA0
        mov edi, dword ptr [esi + 0xac]
        test edi, edi
        je short L_clear
        mov ecx, edi
        call ext_00648300
        push edi
        call ext_006A5C5C
        add esp, 4
    L_clear:
        mov dword ptr [esi + 0xac], 0
        pop edi
    L_done:
        pop esi
        ret
    }
}

// [0x005CFF60] sub_005CFF60 (117 bytes)
extern "C" void ext_0053B470();
extern "C" void ext_00547080();
extern "C" int mem_00B40644;

extern "C" __declspec(naked) void __fastcall fn_005CFF60(void* self) {
    __asm {
        mov edx, dword ptr [mem_00B40644]
        sub esp, 0x60
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x4]
        mov eax, dword ptr [eax + 0x14]
        push esi
        lea ecx, [ebx + 0x4]
        push edi
        push edx
        call eax
        fld dword ptr [ebx + 0x1f4]
        mov esi, eax
        fchs
        mov ecx, 0x10
        lea edi, [esp + 0x2c]
        rep movsd
        push ecx
        lea ecx, [esp + 0x10]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [esp + 0x54]
        call ext_0053B470
        push eax
        lea edx, [esp + 0x20]
        push edx
        lea ecx, [esp + 0x64]
        call ext_00547080
        mov ecx, eax
        fld dword ptr [ecx]
        lea eax, [ebx + 0x274]
        fstp dword ptr [eax]
        pop edi
        fld dword ptr [ecx + 0x4]
        pop esi
        fstp dword ptr [eax + 0x4]
        pop ebx
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax + 0xc]
        add esp, 0x60
        ret
    }
}

// [0x005CF960] sub_005CF960 (124 bytes)
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_00493EE0();

extern "C" __declspec(naked) void __fastcall fn_005CF960(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        fld dword ptr [esp + 0x20]
        mov ecx, esi
        fstp dword ptr [ebx + 0x34]
        mov dword ptr [esp + 0x18], 0
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005CF9E0] sub_005CF9E0 (124 bytes)
extern "C" __declspec(naked) void __fastcall fn_005CF9E0(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        fld dword ptr [esp + 0x20]
        mov ecx, esi
        fstp dword ptr [ebx + 0x3c]
        mov dword ptr [esp + 0x18], 0
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005CFA60] sub_005CFA60 (124 bytes)
extern "C" __declspec(naked) void __fastcall fn_005CFA60(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        fld dword ptr [esp + 0x20]
        mov ecx, esi
        fstp dword ptr [ebx + 0x38]
        mov dword ptr [esp + 0x18], 0
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005CFAE0] sub_005CFAE0 (124 bytes)
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_00493EE0();

extern "C" __declspec(naked) void __fastcall fn_005CFAE0(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        fld dword ptr [esp + 0x20]
        mov ecx, esi
        fstp dword ptr [ebx + 0x40]
        mov dword ptr [esp + 0x18], 0
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005CFB60] sub_005CFB60 (124 bytes)
extern "C" __declspec(naked) void __fastcall fn_005CFB60(void* self, int edx_unused, unsigned char a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea esi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        mov al, byte ptr [esp + 0x20]
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0
        mov byte ptr [ebx + 0x30], al
        call ext_00493EE0
        mov ecx, edi
        mov dword ptr [esp + 0x18], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005CF2B0] sub_005CF2B0 (136 bytes)
extern "C" void ext_005B1870();
extern "C" void ext_00648300();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005CF2B0(void* self) {
    __asm {
        push -1
        push 0x8a4f7f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x965c7c
        mov dword ptr [esi + 0x4], 0x965c70
        mov edi, dword ptr [esi + 0xac]
        test edi, edi
        mov dword ptr [esp + 0x14], 0x2
        je L_005CF2FD
        mov ecx, edi
        call ext_00648300
        push edi
        call ext_006A5C5C
        add esp, 0x4
    L_005CF2FD:
        lea ecx, [esi + 0x24]
        mov byte ptr [esp + 0x14], 0x1
        call ext_005B1870
        lea ecx, [esi + 0x8]
        mov byte ptr [esp + 0x14], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065F440
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005CFEC0] sub_005CFEC0 (147 bytes)
extern "C" void ext_0053B470();
extern "C" void ext_00547080();
extern "C" int mem_00B40644;

extern "C" __declspec(naked) void __fastcall fn_005CFEC0(void* self) {
    __asm {
        sub esp, 0x60
        push ebp
        mov ebp, ecx
        cmp byte ptr [ebp + 0x1f1], 0
        jne short L_done_005CFEC0
        mov ecx, dword ptr [mem_00B40644]
        mov eax, dword ptr [ebp + 0x4]
        mov edx, dword ptr [eax + 0x14]
        push ebx
        push esi
        lea ebx, [ebp + 0x4]
        push edi
        push ecx
        mov ecx, ebx
        call edx
        fld dword ptr [ebp + 0x1f4]
        mov esi, eax
        mov ecx, 0x10
        lea edi, [esp + 0x30]
        rep movsd
        push ecx
        lea eax, [esp + 0x14]
        lea ecx, [esp + 0x54]
        fstp dword ptr [esp]
        push eax
        call ext_0053B470
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x7c]
        call ext_00547080
        fld dword ptr [eax]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx]
        fstp dword ptr [esp + 0x60]
        fld dword ptr [eax + 0x4]
        lea ecx, [esp + 0x30]
        fstp dword ptr [esp + 0x64]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [mem_00B40644]
        push eax
        fstp dword ptr [esp + 0x6c]
        fld1
        push ecx
        push 0
        fstp dword ptr [esp + 0x78]
        mov ecx, ebx
        call edx
        pop edi
        pop esi
        pop ebx
    L_done_005CFEC0:
        pop ebp
        add esp, 0x60
        ret 4
    }
}

// [0x005C2C30] sub_005C2C30 (178 bytes)
extern "C" void ext_005C2BE0();
extern "C" void ext_005C3740();
extern "C" void ext_005C3760();
extern "C" void ext_005CE8D0();
extern "C" void ext_005CE920();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_005C2C30(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        push edi
        push ebx
        push 0x0
        mov esi, ecx
        call ext_005C2BE0
        mov edi, dword ptr [esi + 0x158]
        test edi, edi
        je skip_a
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [eax + 0x14]
        lea ecx, [esi + 0x4]
        push ebx
        call edx
        push eax
        mov ecx, edi
        call ext_005CE8D0
        mov ecx, dword ptr [esi + 0x158]
        call ext_005CE920
skip_a:
        mov eax, dword ptr [esi + 0x160]
        mov edi, dword ptr [eax]
        lea ebx, [esi + 0x15c]
        mov esi, ebx
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], edi
loop_top:
        test esi, esi
        mov ebp, dword ptr [ebx + 0x4]
        je chk_fail1
        cmp esi, ebx
        je chk_ok1
chk_fail1:
        call dword ptr [mem_00925134]
chk_ok1:
        cmp edi, ebp
        je epilogue
        test esi, esi
        mov ebp, dword ptr [mem_00925134]
        jne chk2
        call ebp
chk2:
        cmp edi, dword ptr [esi + 0x4]
        jne chk3
        call ebp
chk3:
        mov ecx, dword ptr [edi + 0x28]
        call ext_005C3740
        cmp edi, dword ptr [esi + 0x4]
        jne chk4
        call ebp
chk4:
        mov ecx, dword ptr [edi + 0x28]
        call ext_005C3760
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp loop_top
epilogue:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

extern "C" void ext_00401D20();
extern "C" void ext_00648790();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

// [0x005C83D0] sub_005C83D0 (193 bytes)
extern "C" __declspec(naked) void __fastcall fn_005C83D0(void* self) {
    __asm {
        push -1
        push 0x8a4984
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x96542c
        mov dword ptr [esi + 0x4], 0x9653e4
        mov dword ptr [esi + 0x8], 0x9653a4
        mov dword ptr [esi + 0xc], 0x965354
        mov dword ptr [esi + 0x150], 0x96533c
        mov dword ptr [esi + 0x154], 0x965334
        mov dword ptr [esi + 0x158], 0x965328
        lea ecx, [esi + 0x17c]
        mov dword ptr [esp + 0x14], 0x2
        call dword ptr [mem_00924FF4]
        mov edi, dword ptr [esi + 0x16c]
        test edi, edi
        mov byte ptr [esp + 0x14], 0x1
        je skip1
        mov ecx, edi
        call ext_00648790
        push edi
        call ext_006A5C5C
        add esp, 0x4
    skip1:
        mov ecx, dword ptr [esi + 0x15c]
        test ecx, ecx
        mov byte ptr [esp + 0x14], 0x0
        je skip2
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    skip2:
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00401D20
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005C7D20] sub_005C7D20 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B4450C;
extern "C" int mem_00B444F0;

extern "C" __declspec(naked) void __fastcall fn_005C7D20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a492e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4450C], al
        jne skip_init
        or dword ptr [mem_00B4450C], eax
        push 0xa8c778
        push offset mem_00B444F0
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91e050
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B444F0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005C3390] sub_005C3390 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A8AFF4;
extern "C" int mem_00B5CE94;
extern "C" __declspec(naked) void __fastcall fn_005C3390(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A8AFF4
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

// [0x005CC100] sub_005CC100 (218 bytes)
extern "C" void ext_0058F200();
extern "C" void ext_005C3660();
extern "C" __declspec(naked) void __fastcall fn_005CC100(void* self) {
    __asm {
        push -1
        push 0x008a4a83
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_0058F200
        mov dword ptr [esi + 0x150], 0x00928eac
        mov dword ptr [esi + 0x154], 0x00949d5c
        mov dword ptr [esi + 0x158], 0x00963234
        xor eax, eax
        mov dword ptr [esi], 0x0096542c
        mov dword ptr [esi + 4], 0x009653e4
        mov dword ptr [esi + 8], 0x009653a4
        mov dword ptr [esi + 0xc], 0x00965354
        mov dword ptr [esi + 0x150], 0x0096533c
        mov dword ptr [esi + 0x154], 0x00965334
        mov dword ptr [esi + 0x158], 0x00965328
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x15c], eax
        mov dword ptr [esi + 0x164], eax
        mov byte ptr [esi + 0x168], al
        mov dword ptr [esi + 0x16c], eax
        fldz
        fst dword ptr [esi + 0x178]
        lea ecx, [esi + 0x17c]
        fst dword ptr [esi + 0x174]
        mov byte ptr [esp + 0x10], 2
        fstp dword ptr [esi + 0x170]
        call dword ptr [mem_00924FE8]
        mov ecx, esi
        mov byte ptr [esp + 0x10], 3
        call ext_005C3660
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005CC2F0] sub_005CC2F0 (124 bytes)
extern "C" void ext_005C4020();
extern "C" void ext_005CC100();

extern "C" __declspec(naked) void __fastcall fn_005CC2F0(void* self) {
    __asm {
        push -1
        push 0x8a4a38
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_005CC100
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x965704
        mov dword ptr [esi + 0x4], 0x9656bc
        mov dword ptr [esi + 0x8], 0x96567c
        mov dword ptr [esi + 0xc], 0x96562c
        mov dword ptr [esi + 0x150], 0x965614
        mov dword ptr [esi + 0x154], 0x96560c
        mov dword ptr [esi + 0x158], 0x965600
        call ext_005C4020
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005CC520] sub_005CC520 (124 bytes)
extern "C" void ext_005C44A0();
extern "C" void ext_005CC100();

extern "C" __declspec(naked) void __fastcall fn_005CC520(void* self) {
    __asm {
        push -1
        push 0x8a4a38
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_005CC100
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x96590c
        mov dword ptr [esi + 0x4], 0x9658c4
        mov dword ptr [esi + 0x8], 0x965884
        mov dword ptr [esi + 0xc], 0x965834
        mov dword ptr [esi + 0x150], 0x965820
        mov dword ptr [esi + 0x154], 0x965818
        mov dword ptr [esi + 0x158], 0x96580c
        call ext_005C44A0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005C0E70] sub_005C0E70 (480 bytes)
extern "C" void ext_0058F200();
extern "C" void ext_0059F5C0();

extern "C" __declspec(naked) void __fastcall fn_005C0E70(void* self) {
    __asm {
        push -1
        push 0x8a3fb2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call ext_0058F200
        mov dword ptr [esi + 0x150], 0x928eac
        mov dword ptr [esi + 0x154], 0x93e7ec
        xor ebp, ebp
        mov dword ptr [esi], 0x962f64
        mov dword ptr [esi + 0x4], 0x962f1c
        mov dword ptr [esi + 0x8], 0x962edc
        mov dword ptr [esi + 0xc], 0x962e8c
        mov dword ptr [esi + 0x150], 0x962e78
        mov dword ptr [esi + 0x154], 0x962e70
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esi + 0x158], ebp
        lea edi, [esi + 0x15c]
        mov bl, 1
        mov ecx, edi
        mov byte ptr [esp + 0x1c], bl
        call ext_0059F5C0
        mov dword ptr [edi + 0x4], eax
        mov byte ptr [eax + 0x2d], bl
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [edi + 0x8], ebp
        lea edi, [esi + 0x168]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 2
        call ext_0059F5C0
        mov dword ptr [edi + 0x4], eax
        mov byte ptr [eax + 0x2d], bl
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [edi + 0x8], ebp
        fldz
        mov dword ptr [esi + 0x178], ebp
        mov dword ptr [esi + 0x17c], ebp
        mov dword ptr [esi + 0x180], ebp
        mov dword ptr [esi + 0x184], ebp
        fst dword ptr [esi + 0x190]
        fst dword ptr [esi + 0x18c]
        fst dword ptr [esi + 0x188]
        fst dword ptr [esi + 0x19c]
        fst dword ptr [esi + 0x198]
        fst dword ptr [esi + 0x194]
        fst dword ptr [esi + 0x1a8]
        fst dword ptr [esi + 0x1a4]
        fst dword ptr [esi + 0x1a0]
        fst dword ptr [esi + 0x1b4]
        fst dword ptr [esi + 0x1b0]
        fst dword ptr [esi + 0x1ac]
        fst dword ptr [esi + 0x1c0]
        fst dword ptr [esi + 0x1bc]
        fst dword ptr [esi + 0x1b8]
        fst dword ptr [esi + 0x1cc]
        fst dword ptr [esi + 0x1c8]
        fst dword ptr [esi + 0x1c4]
        fst dword ptr [esi + 0x1d8]
        fst dword ptr [esi + 0x1d4]
        fst dword ptr [esi + 0x1d0]
        fst dword ptr [esi + 0x1e4]
        fst dword ptr [esi + 0x1e0]
        fst dword ptr [esi + 0x1dc]
        fst dword ptr [esi + 0x1f0]
        fst dword ptr [esi + 0x1ec]
        fst dword ptr [esi + 0x1e8]
        mov ecx, dword ptr [esp + 0x14]
        fst dword ptr [esi + 0x1fc]
        fst dword ptr [esi + 0x1f8]
        pop edi
        fst dword ptr [esi + 0x1f4]
        mov eax, esi
        fst dword ptr [esi + 0x208]
        fst dword ptr [esi + 0x204]
        fst dword ptr [esi + 0x200]
        mov dword ptr [esi + 0x20c], ebp
        mov byte ptr [esi + 0x210], bl
        fst dword ptr [esi + 0x21c]
        fst dword ptr [esi + 0x218]
        fstp dword ptr [esi + 0x214]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005CFFE0] sub_005CFFE0 (220 bytes)
extern "C" void ext_00547820();
extern "C" void ext_0067E7B0();
extern "C" int mem_00B40644;
extern "C" double mem_00A8CAF0;
extern "C" double mem_00996B98;

extern "C" __declspec(naked) void __fastcall fn_005CFFE0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x60
        cmp dword ptr [ecx + 0x25c], 0
        je loc_005D00B6
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [eax + 0x14]
        push ebx
        push esi
        lea ebx, [ecx + 4]
        mov ecx, dword ptr [mem_00B40644]
        push edi
        push ecx
        mov ecx, ebx
        call edx
        mov esi, eax
        mov ecx, 0x10
        lea edi, [esp + 0x2c]
        rep movsd
        lea eax, [esp + 0x4c]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esp + 0x78]
        call ext_00547820
        lea edx, [esp + 0xc]
        fld dword ptr [esp + 0xc]
        push edx
        fstp dword ptr [esp + 0x30]
        lea eax, [esp + 0x20]
        fld dword ptr [esp + 0x14]
        push eax
        fstp dword ptr [esp + 0x38]
        lea ecx, [esp + 0x54]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x40]
        call ext_00547820
        fld dword ptr [eax]
        push ecx
        fstp dword ptr [esp + 0x40]
        lea ecx, [esp + 0x30]
        fld dword ptr [eax + 4]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [eax + 8]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x4c]
        fld qword ptr [mem_00A8CAF0]
        fstp dword ptr [esp + 0x74]
        fld dword ptr [esp + 0x74]
        fmul qword ptr [mem_00996B98]
        fstp dword ptr [esp + 0x74]
        fld dword ptr [esp + 0x74]
        fstp dword ptr [esp]
        call ext_0067E7B0
        mov eax, dword ptr [mem_00B40644]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx]
        push eax
        lea ecx, [esp + 0x30]
        push ecx
        push 0
        mov ecx, ebx
        call edx
        pop edi
        pop esi
        pop ebx
    loc_005D00B6:
        add esp, 0x60
        ret 4
    }
}

// [0x005CFBE0] sub_005CFBE0 (53 bytes)
extern "C" void ext_0067E880();
extern "C" int mem_00B40644;
extern "C" __declspec(naked) void* __fastcall fn_005CFBE0(void* self) {
    __asm {
        mov edx, dword ptr [mem_00B40644]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x4]
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [edi + 0x4]
        push edx
        call eax
        lea ebx, [edi + 0x284]
        mov esi, eax
        mov ecx, 0x10
        mov edi, ebx
        rep movsd
        mov ecx, ebx
        call ext_0067E880
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x005C3DB0] sub_005C3DB0 (104 bytes)
extern "C" void ext_005B2130();
extern "C" void ext_00694480();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) float __fastcall fn_005C3DB0(void* self, int edx_unused, const float* v) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x15c], 0
        jne L_005C3DC8
        fldz
        pop esi
        add esp, 0x10
        ret 4
L_005C3DC8:
        mov eax, dword ptr [esp + 0x18]
        fld dword ptr [eax]
        mov edx, dword ptr [mem_00B40640]
        fstp dword ptr [esp + 4]
        lea ecx, [esi + 4]
        fld dword ptr [eax + 4]
        push edx
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x14]
        fstp dword ptr [esp + 0x10]
        fld1
        fstp dword ptr [esp + 0x14]
        call eax
        push eax
        lea ecx, [esp + 8]
        call ext_00694480
        mov ecx, dword ptr [esi + 0x15c]
        lea edx, [esp + 4]
        push edx
        call ext_005B2130
        pop esi
        add esp, 0x10
        ret 4
    }
}

// [0x005C3C20] sub_005C3C20 (131 bytes)
extern "C" void ext_005B2110();
extern "C" void ext_00694480();
extern "C" int mem_0096320C;
extern "C" int mem_00B40640;
extern "C" __declspec(naked) float __fastcall fn_005C3C20(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x20
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x15c], 0
        jne nz_path
        fld dword ptr [mem_0096320C]
        pop esi
        add esp, 0x20
        ret 4
nz_path:
        fldz
        mov eax, dword ptr [esp + 0x28]
        mov edx, dword ptr [mem_00B40640]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x1c]
        lea ecx, [esi + 4]
        fst dword ptr [esp + 0x18]
        push edx
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 8]
        mov eax, dword ptr [ecx]
        fstp dword ptr [esp + 0x10]
        fld1
        mov eax, dword ptr [eax + 0x14]
        fstp dword ptr [esp + 0x14]
        call eax
        push eax
        lea ecx, [esp + 8]
        call ext_00694480
        mov ecx, dword ptr [esi + 0x15c]
        lea edx, [esp + 4]
        push edx
        lea eax, [esp + 0x18]
        push eax
        call ext_005B2110
        pop esi
        add esp, 0x20
        ret 4
    }
}

// [0x005C3CB0] sub_005C3CB0 (241 bytes)
extern "C" void ext_005B2110();
extern "C" void ext_006943B0();
extern "C" void ext_00694480();
extern "C" void ext_006A6C87();
extern "C" int mem_00B4441C;
extern "C" int mem_00B44418;
extern "C" int mem_00B44414;
extern "C" int mem_00B44410;
extern "C" int mem_00B4440C;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void* __fastcall fn_005C3CB0(void* self, int edx_unused, const float* v) {
    __asm {
        fldz
        sub esp, 0x20
        push esi
        mov eax, 1
        test byte ptr [mem_00B4441C], al
        push edi
        mov edi, ecx
        jne short L_join_5C3CB0
        or dword ptr [mem_00B4441C], eax
        fst dword ptr [mem_00B44418]
        fst dword ptr [mem_00B44414]
        push 0x91e040
        fst dword ptr [mem_00B44410]
        fstp dword ptr [mem_00B4440C]
        call ext_006A6C87
        fldz
        add esp, 4
    L_join_5C3CB0:
        mov eax, dword ptr [esp+0x2c]
        fst dword ptr [mem_00B44418]
        mov edx, dword ptr [mem_00B40640]
        fst dword ptr [mem_00B44414]
        fst dword ptr [mem_00B44410]
        lea ecx, [edi+4]
        fstp dword ptr [mem_00B4440C]
        push edx
        fld dword ptr [eax]
        fstp dword ptr [esp+0xc]
        fld dword ptr [eax+4]
        fstp dword ptr [esp+0x10]
        fld dword ptr [eax+8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax+0x14]
        fstp dword ptr [esp+0x14]
        fld1
        fstp dword ptr [esp+0x18]
        call eax
        mov esi, eax
        push esi
        lea ecx, [esp+0xc]
        call ext_00694480
        mov ecx, dword ptr [edi+0x15c]
        test ecx, ecx
        je short L_skip_5C3CB0
        lea edx, [esp+8]
        push edx
        push offset mem_00B4440C
        call ext_005B2110
        fstp st(0)
    L_skip_5C3CB0:
        push esi
        lea eax, [esp+0x1c]
        push eax
        mov ecx, offset mem_00B4440C
        call ext_006943B0
        fld dword ptr [eax]
        fstp dword ptr [mem_00B4440C]
        pop edi
        fld dword ptr [eax+4]
        pop esi
        fstp dword ptr [mem_00B44410]
        fld dword ptr [eax+8]
        fstp dword ptr [mem_00B44414]
        fld dword ptr [eax+0xc]
        mov eax, offset mem_00B4440C
        fstp dword ptr [mem_00B44418]
        add esp, 0x20
        ret 4
    }
}

extern "C" void ext_00647C70();
extern "C" void ext_00648220();
extern "C" void ext_00648300();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();

// [0x005CF340] sub_005CF340 (146 bytes)
extern "C" __declspec(naked) void __fastcall fn_005CF340(void* self, int edx_unused, int a1) {
    __asm {
        push -0x1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0xa8
        mov edi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0xc], eax
        test eax, eax
        mov dword ptr [esp + 0x18], 0x0
        je loc_005CF383
        mov ecx, eax
        call ext_00648220
        mov ebx, eax
        jmp loc_005CF385

loc_005CF383:
        xor ebx, ebx

loc_005CF385:
        mov esi, dword ptr [edi + 0xac]
        cmp ebx, esi
        mov dword ptr [esp + 0x18], 0xffffffff
        je loc_005CF3AB
        test esi, esi
        je loc_005CF3AB
        mov ecx, esi
        call ext_00648300
        push esi
        call ext_006A5C5C
        add esp, 0x4

loc_005CF3AB:
        mov eax, dword ptr [esp + 0x20]
        push eax
        push edi
        mov ecx, ebx
        mov dword ptr [edi + 0xac], ebx
        call ext_00647C70
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005C8560] sub_005C8560 (83 bytes)
extern "C" void ext_00480920();
extern "C" void ext_00648420();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005C8560(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x16c], 0
        je done_early
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        jne loc_5c8585
        test ebx, ebx
        jne loc_5c8585
        call ext_00480920
        mov edi, eax
    loc_5c8585:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        jne loc_5c859f
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0xc]
        lea ecx, [esi + 4]
        push edx
        call eax
    loc_5c859f:
        mov ecx, dword ptr [esi + 0x16c]
        push eax
        push edi
        push ebx
        call ext_00648420
        pop edi
        pop ebx
    done_early:
        pop esi
        ret 0xc
    }
}

// [0x005C0200] sub_005C0200 (43 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00587920();

extern "C" __declspec(naked) void __fastcall fn_005C0200(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov esi, ecx
        je done
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi + 0x174]
        call ext_0041A920
        push 0x0
        push edi
        mov ecx, esi
        call ext_00587920
    done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005C06E0] sub_005C06E0 (52 bytes)
extern "C" void ext_005AEC70();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_005C06E0(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_005AEC70
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_006A5C5C
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        pop esi
        add esp, 8
        ret
    }
}

// [0x005CE520] sub_005CE520 (55 bytes)
extern "C" void ext_005B5A10();
extern "C" void ext_005CE4F0();
extern "C" int mem_00924EA8;
extern "C" int mem_0092C8C4;

extern "C" __declspec(naked) void __fastcall fn_005CE520(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x8]
        call dword ptr [mem_00924EA8]
        lea ecx, [esi + 0x24]
        call ext_005B5A10
        fld dword ptr [mem_0092C8C4]
        lea ecx, [esi + 0x74]
        fstp dword ptr [esi + 0x70]
        call ext_005CE4F0
        lea eax, [esi + 0x4]
        mov dword ptr [esi + 0xb0], 0
        mov dword ptr [esi + 0x6c], eax
        pop esi
        ret
    }
}

// [0x005CF150] sub_005CF150 (185 bytes)
extern "C" void ext_005B3500();
extern "C" void ext_005CE4F0();
extern "C" void ext_005CE520();
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_005CF150(void* self) {
    __asm {
        push -1
        push 0x8a4f2d
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_00661980
        lea edi, [esi + 0x4]
        mov dword ptr [edi], 0x963234
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x965c7c
        mov dword ptr [edi], 0x965c70
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x24]
        mov byte ptr [esp + 0x14], 1
        call ext_005B3500
        fldz
        lea ecx, [esi + 0x74]
        fst dword ptr [ecx + 0x8]
        fst dword ptr [ecx + 0x4]
        fst dword ptr [ecx]
        fst dword ptr [ecx + 0x14]
        fst dword ptr [ecx + 0x10]
        fst dword ptr [ecx + 0xc]
        fst dword ptr [ecx + 0x28]
        fst dword ptr [ecx + 0x24]
        fst dword ptr [ecx + 0x20]
        fst dword ptr [ecx + 0x34]
        fst dword ptr [ecx + 0x30]
        fstp dword ptr [ecx + 0x2c]
        call ext_005CE4F0
        mov dword ptr [esi + 0xac], 0
        mov ecx, esi
        mov byte ptr [esp + 0x14], 3
        call ext_005CE520
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x6c], edi
        mov dword ptr [esi + 0xb0], 0
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
