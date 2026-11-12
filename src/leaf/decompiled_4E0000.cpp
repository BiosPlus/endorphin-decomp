// Decompiled translation unit: src/leaf/decompiled_4E0000.cpp

// [0x004EE620] sub_004EE620 (15 bytes)
extern "C" void ext_004EE200();

extern "C" void __fastcall fn_004EE620(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x50) = a1;
    ext_004EE200();
}

// [0x004E9D70] sub_004E9D70 (17 bytes)
extern "C" void* __stdcall ext_00468180(int a, int b);
extern "C" void __fastcall ext_00469530(void* self);

extern "C" __declspec(naked) void __fastcall fn_004E9D70(void* self) {
    __asm {
        push 0
        push 5
        call ext_00468180
        mov ecx, eax
        call ext_00469530
        ret
    }
}

// [0x004E87D0] sub_004E87D0 (20 bytes)
extern "C" void ext_004E8570();

extern "C" void __fastcall fn_004E87D0(void* self, int edx_unused, int a1) {
    ((void (__cdecl*)(int, void*))ext_004E8570)(a1, (char*)self + 4);
}

// [0x004E5970] sub_004E5970 (24 bytes)
extern "C" void* __stdcall ext_006798D0(void* a, int b);
extern "C" void __fastcall ext_004E5850(void* self);

extern "C" __declspec(naked) void __fastcall fn_004E5970(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0x93e1b8
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_004E5850
        pop ecx
        ret
    }
}

// [0x004E3DC0] sub_004E3DC0 (25 bytes)
extern "C" void __fastcall ext_004E35B0(void* self);
extern "C" void ext_006A5C5C();

extern "C" void __fastcall fn_004E3DC0(void* self) {
    void* esi = *(void**)self;
    if (esi) {
        ext_004E35B0(esi);
        ((void (__cdecl*)(void*))ext_006A5C5C)(esi);
    }
}

// [0x004E6610] sub_004E6610 (25 bytes)
extern "C" void __fastcall ext_004E5AE0(void* self);
extern "C" void ext_006A5C5C();

extern "C" void __fastcall fn_004E6610(void* self) {
    void* esi = *(void**)self;
    if (esi) {
        ext_004E5AE0(esi);
        ((void (__cdecl*)(void*))ext_006A5C5C)(esi);
    }
}

// [0x004EF890] sub_004EF890 (26 bytes)
extern "C" void ext_006A5C62();
extern "C" void __fastcall fn_004EF890(void* self) {
    void* p = ((void* (__cdecl*)(unsigned int))ext_006A5C62)(0x70);
    if (p) {
        *(void**)p = p;
    }
    void* q = (char*)p + 4;
    if (q) {
        *(void**)q = p;
    }
}

// [0x004EF8B0] sub_004EF8B0 (26 bytes)
extern "C" void __fastcall fn_004EF8B0(void* self) {
    void* p = ((void* (__cdecl*)(unsigned int))ext_006A5C62)(0x4c);
    if (p) {
        *(void**)p = p;
    }
    void** q = (void**)((char*)p + 4);
    if (q) {
        *q = p;
    }
}

// [0x004EFDB0] sub_004EFDB0 (28 bytes)
extern "C" void ext_00451670();

extern "C" __declspec(naked) void __fastcall fn_004EFDB0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x48]
        test eax, eax
        je done
        add ecx, 4
        mov dword ptr [esp], ecx
        lea ecx, [esp]
        push ecx
        lea ecx, [eax + 4]
        call ext_00451670
done:
        pop ecx
        ret
    }
}

// [0x004E51C0] sub_004E51C0 (29 bytes)
extern "C" void __fastcall ext_004E5180(void* self);
extern "C" void ext_006A5C5C();

extern "C" void __fastcall fn_004E51C0(void* self) {
    char* esi = (char*)self;
    ext_004E5180(self);
    void* p = *(void**)(esi + 0x4);
    ((void (__cdecl*)(void*))ext_006A5C5C)(p);
    *(int*)(esi + 0x4) = 0;
}

// [0x004EFDD0] sub_004EFDD0 (29 bytes)
extern "C" void ext_004AEE60();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004EFDD0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004AEE60
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 4
        mov dword ptr [esi + 0x4], 0
        pop esi
        ret
    }
}

// [0x004E7E90] sub_004E7E90 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E7E90(void* self) {
    __asm {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x14], 1
        mov dword ptr [eax + 0x18], 2
        mov byte ptr [eax + 0x1c], cl
        ret
    }
}

// [0x004E9DB0] sub_004E9DB0 (40 bytes)
extern "C" void ext_00661980();

extern "C" void* __fastcall fn_004E9DB0(void* self) {
    ext_00661980();
    unsigned char* p = (unsigned char*)self;
    p[0x4] = 1;
    p[0x5] = 1;
    p[0x6] = 0;
    p[0x7] = 0;
    p[0x8] = 0;
    p[0x9] = 0;
    *(int*)self = 0x94b12c;
    return self;
}

// [0x004E3110] sub_004E3110 (43 bytes)
extern "C" int mem_0092524C;

extern "C" void __fastcall fn_004E3110(void* self) {
    char* s = (char*)self;
    if (*(void**)(s + 0x4)) {
        ((void (__cdecl*)(void*))mem_0092524C)(*(void**)(s + 0x4));
    }
    *(int*)(s + 0x4) = 0;
    *(int*)(s + 0x8) = 0;
    *(int*)(s + 0xc) = 0;
}

// [0x004ECA40] sub_004ECA40 (44 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_004ECA40(void* self, int edx_unused, unsigned int idx) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        je bad_index
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb ok_index
bad_index:
        call dword ptr [mem_00925134]
ok_index:
        mov eax, dword ptr [esi + 0x4]
        lea eax, [eax + 8*edi]
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004EBE30] sub_004EBE30 (55 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EBE30(void* self) {
    __asm {
        push 0x48
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je  L_skip0
        mov dword ptr [eax], 0x0
    L_skip0:
        lea ecx, [eax + 0x4]
        test ecx, ecx
        je  L_skip1
        mov dword ptr [ecx], 0x0
    L_skip1:
        lea ecx, [eax + 0x8]
        test ecx, ecx
        je  L_skip2
        mov dword ptr [ecx], 0x0
    L_skip2:
        mov byte ptr [eax + 0x44], 0x1
        mov byte ptr [eax + 0x45], 0x0
        ret
    }
}

// [0x004E7490] sub_004E7490 (57 bytes)
extern "C" void __fastcall fn_004E7490(void* self) {
    unsigned char* p = (unsigned char*)self;
    p[0x34] = 1;
    p[0x48] = 1;
    p[0x5c] = 1;
    p[0x70] = 1;
    p[0x84] = 1;
    p[0x98] = 1;
    p[0xac] = 1;
    p[0xc0] = 1;
    p[0xd4] = 1;
    p[0xe8] = 1;
    p[0xf8] = 1;
}

// [0x004EF970] sub_004EF970 (63 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004EF970(void* self, int edx_unused, int a1, int a2, int a3, const int* a4, unsigned char a5) {
    __asm {
        push 0x18
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
        mov ecx, dword ptr [ecx + 4]
        mov dl, byte ptr [esp + 0x14]
        mov dword ptr [eax + 0x10], ecx
        mov byte ptr [eax + 0x14], dl
        mov byte ptr [eax + 0x15], 0
done:
        ret 0x14
    }
}

// [0x004EF790] sub_004EF790 (67 bytes)
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void* __cdecl fn_004EF790(void* out, char* first1, char* last1, char* first2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ebx
        push edi
        mov edi, dword ptr [esp + 0x20]
        je done
        mov ebp, dword ptr [mem_00924FC4]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loop_top:
        push edi
        push esi
        call ebp
        add esp, 8
        test al, al
        je done
        add esi, 0x1c
        add edi, 0x1c
        cmp esi, ebx
        jne loop_top
done:
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [eax + 4], edi
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004EF730] sub_004EF730 (82 bytes)
extern "C" void __fastcall fn_004EF730(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0x39] == 0) {
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

// [0x004E13E0] sub_004E13E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE6468;
extern "C" int mem_00AE6464;

extern "C" __declspec(naked) void* __fastcall fn_004E13E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88dbce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE6468], al
        jne L_done
        or dword ptr [mem_00AE6468], eax
        mov ecx, offset mem_00AE6464
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE6464], 0x94ac04
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE6464
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004E1B30] sub_004E1B30 (30 bytes)
extern "C" void ext_004E13E0();

extern "C" __declspec(naked) void __fastcall fn_004E1B30(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004E13E0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004ECC40] sub_004ECC40 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE79C8;
extern "C" int mem_00AE79C4;

extern "C" __declspec(naked) void* __fastcall fn_004ECC40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88ef1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE79C8], al
        jne L_done
        or dword ptr [mem_00AE79C8], eax
        mov ecx, offset mem_00AE79C4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE79C4], 0x94ba34
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE79C4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004E13C0] sub_004E13C0 (30 bytes)
extern "C" void ext_004DE720();

extern "C" __declspec(naked) void __fastcall fn_004E13C0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004DE720
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004E3140] sub_004E3140 (89 bytes)
extern "C" void ext_004DE780();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_004E3140(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        test ebx, ebx
        push esi
        push edi
        mov esi, ecx
        je invalid
        cmp ebx, dword ptr [esp + 0x1c]
        je check
    invalid:
        call dword ptr [mem_00925134]
    check:
        mov edi, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x20]
        cmp edi, ecx
        je store
        mov eax, dword ptr [esi + 0x8]
        mov byte ptr [esp + 0x14], 0
        mov edx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x18]
        push edx
        push edi
        push eax
        push ecx
        call ext_004DE780
        add esp, 0x18
        mov dword ptr [esi + 0x8], eax
    store:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x4], edi
        pop edi
        pop esi
        mov dword ptr [eax], ebx
        pop ebx
        ret 0x14
    }
}

// [0x004EFAC0] sub_004EFAC0 (93 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EFAC0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
    L_top:
        test esi, esi
        je L_call1
        cmp esi, dword ptr [esp + 0x1c]
        je L_after1
    L_call1:
        call ebp
    L_after1:
        cmp ebx, dword ptr [esp + 0x20]
        je L_ret
        test esi, esi
        mov edi, ebx
        jne L_a
        call ebp
    L_a:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_b
        call ebp
    L_b:
        add ebx, 0x4
        test esi, esi
        jne L_c
        call ebp
    L_c:
        cmp edi, dword ptr [esi + 0x8]
        jb L_d
        call ebp
    L_d:
        mov eax, dword ptr [edi]
        test eax, eax
        je L_top
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
        jmp L_top
    L_ret:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x004E7E40] sub_004E7E40 (67 bytes)
extern "C" void __cdecl ext_0059F310(int* first, int hole, int len, int value);

extern "C" __declspec(naked) void __cdecl fn_004E7E40(int* first, int* last) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        sub esi, edi
        mov eax, esi
        sar eax, 0x2
        cmp eax, 0x1
        jle done
loop_top:
        mov eax, dword ptr [edi + esi - 0x4]
        mov ecx, dword ptr [edi]
        push eax
        lea edx, [esi - 0x4]
        sar edx, 0x2
        push edx
        push 0x0
        push edi
        mov dword ptr [edi + esi - 0x4], ecx
        call ext_0059F310
        sub esi, 0x4
        mov eax, esi
        sar eax, 0x2
        add esp, 0x10
        cmp eax, 0x1
        jg loop_top
done:
        pop edi
        pop esi
        ret
    }
}

// [0x004E1F50] sub_004E1F50 (100 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00598A90();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004E1F50(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x34]
        test eax, eax
        je skip_store
        mov dword ptr [eax + 0x298], 0
skip_store:
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jbe loop_top
        call ebp
loop_top:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe chk2
        call ebp
chk2:
        cmp esi, ebx
        je loop_end
        cmp esi, dword ptr [edi + 0x8]
        jb chk3
        call ebp
chk3:
        mov eax, dword ptr [esi]
        lea ecx, [eax + 0x8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x38]
        call edx
        cmp esi, dword ptr [edi + 0x8]
        jb chk4
        call ebp
chk4:
        add esi, 0x4
        jmp loop_top
loop_end:
        call ext_00594000
        pop edi
        pop esi
        pop ebp
        mov ecx, eax
        pop ebx
        jmp ext_00598A90
    }
}

// [0x004EC380] sub_004EC380 (105 bytes)
extern "C" void ext_00472780();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_004EC380(void* self, int edx_unused, void** out, const void* key) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_00472780
        test esi, esi
        mov edi, eax
        mov dword ptr [esp + 0x10], edi
        jne skip_invalid
        call dword ptr [mem_00925134]
    skip_invalid:
        cmp edi, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0xc], esi
        je return_end
        add edi, 0xc
        push edi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne return_end
        lea ecx, [esp + 0xc]
        jmp load_pair
    return_end:
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x14], esi
        lea ecx, [esp + 0x14]
    load_pair:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [ecx + 0x4]
        pop edi
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 0x10
        ret 8
    }
}

// [0x004E1B50] sub_004E1B50 (76 bytes)
extern "C" void ext_004DE3D0();

extern "C" __declspec(naked) void __fastcall fn_004E1B50(void* self) {
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
        call ext_004DE3D0
        sub esi, ebx
        sar esi, 3
        add esi, esi
        add esp, 0x18
        add esi, esi
        add esi, esi
        mov eax, edi
        pop edi
        sub eax, esi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x004ED640] sub_004ED640 (111 bytes)
extern "C" void ext_00692B50();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_004ED640(void* self) {
    __asm {
        push -1
        push 0x88ef84
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_00692B50
        mov dword ptr [esi + 0x18], 0x9443bc
        xor edi, edi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi], 0x9451b4
        mov dword ptr [esi + 0x4], 0x945184
        mov dword ptr [esi + 0x18], 0x945174
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x38], edi
        mov dword ptr [esi + 0x40], edi
        mov dword ptr [esi + 0x44], edi
        mov dword ptr [esi + 0x48], edi
        mov dword ptr [esi + 0x4c], edi
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004ED720] sub_004ED720 (39 bytes)
extern "C" void ext_004ED640();

extern "C" void* __fastcall fn_004ED720(void* self) {
    unsigned int* p = (unsigned int*)self;
    ext_004ED640();
    p[0] = 0x94524c;
    p[0x04 / 4] = 0x945220;
    p[0x18 / 4] = 0x945210;
    p[0x38 / 4] = 1;
    return self;
}

// [0x004ED750] sub_004ED750 (82 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004ED750(void* self) {
    __asm {
        push -1
        push 0x88ef98
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_004ED640
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        mov dword ptr [esi + 0x50], eax
        mov dword ptr [esi], 0x94bf94
        mov dword ptr [esi + 0x4], 0x94bf68
        mov dword ptr [esi + 0x18], 0x94bf58
        mov dword ptr [esi + 0x58], eax
        mov dword ptr [esi + 0x5c], eax
        mov dword ptr [esi + 0x60], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004E1980] sub_004E1980 (116 bytes)
extern "C" void ext_00661A40();
extern "C" int mem_00925134;

extern "C" __declspec(naked) float __fastcall fn_004E1980(void* self) {
    __asm {
        push ecx
        cmp dword ptr [ecx + 0xb78], 0
        jne L_retval
        cmp dword ptr [ecx + 0xb74], 0
        jne L_retval
        cmp dword ptr [ecx + 0x86c], 0
        push esi
        lea esi, [ecx + 0x864]
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_chk2
        call edi
L_chk2:
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_load
        call edi
L_load:
        mov edx, dword ptr [esi + 0xc]
        mov edi, dword ptr [edx + 0x8]
        test edi, edi
        jne L_call
        fldz
        pop edi
        fstp dword ptr [esp + 0x4]
        pop esi
        fld dword ptr [esp]
        pop ecx
        ret
L_call:
        mov ecx, esi
        call ext_00661A40
        add edi, -0x1
        mov dword ptr [esp + 0x8], edi
        fimul dword ptr [esp + 0x8]
        pop edi
        pop esi
        fstp dword ptr [esp]
        fld dword ptr [esp]
        pop ecx
        ret
L_retval:
        fld dword ptr [ecx + 0x9d8]
        pop ecx
        ret
    }
}

// [0x004EFF00] sub_004EFF00 (121 bytes)
extern "C" void ext_004EFAC0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004EFF00(void* self) {
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
        call ext_004EFAC0
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

// [0x004E3A30] sub_004E3A30 (126 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E3A30(void* self) {
    __asm {
        push -1
        push 0x88dd43
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x1c], ecx
        fld1
        fst dword ptr [eax + 0x38]
        mov dword ptr [eax + 0x24], ecx
        fldz
        mov dword ptr [eax + 0x28], ecx
        fst dword ptr [eax + 0x3c]
        mov dword ptr [eax + 0x2c], ecx
        fst dword ptr [eax + 0x40]
        mov dword ptr [eax + 0x30], ecx
        fst dword ptr [eax + 0x44]
        mov dword ptr [eax + 0x34], ecx
        mov ecx, dword ptr [esp + 0x4]
        fst dword ptr [eax + 0x48]
        fst dword ptr [eax + 0x50]
        fst dword ptr [eax + 0x54]
        fst dword ptr [eax + 0x58]
        fst dword ptr [eax + 0x5c]
        fst dword ptr [eax + 0x64]
        fst dword ptr [eax + 0x68]
        fst dword ptr [eax + 0x6c]
        fstp dword ptr [eax + 0x70]
        fst dword ptr [eax + 0x4c]
        fst dword ptr [eax + 0x60]
        fstp dword ptr [eax + 0x74]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004EFB20] sub_004EFB20 (126 bytes)
extern "C" void ext_004EF790();
extern "C" int mem_00925134;

extern "C" __declspec(naked) bool __cdecl fn_004EFB20() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov ecx, edi
        sub ecx, ebp
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov esi, edx
        shr esi, 0x1f
        add esi, edx
        test ebx, ebx
        jne chk_ok1
        call dword ptr [mem_00925134]
chk_ok1:
        lea eax, [8*esi]
        sub eax, esi
        mov esi, dword ptr [esp + 0x20]
        lea eax, [esi + 4*eax]
        cmp eax, dword ptr [ebx + 0x8]
        ja chk_bad2
        cmp eax, dword ptr [ebx + 0x4]
        jae chk_ok2
chk_bad2:
        call dword ptr [mem_00925134]
chk_ok2:
        mov byte ptr [esp + 0x18], 0
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x18]
        push ecx
        push edx
        push esi
        push edi
        lea eax, [esp + 0x2c]
        push ebp
        push eax
        call ext_004EF790
        add esp, 0x18
        xor ecx, ecx
        cmp dword ptr [eax], edi
        pop edi
        pop esi
        sete cl
        pop ebp
        mov al, cl
        pop ebx
        ret
    }
}

// [0x004EFDF0] sub_004EFDF0 (130 bytes)
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004EFDF0(void* self) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x4]
        mov esi, dword ptr [eax]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        cmp esi, dword ptr [edi + 0x4]
        mov dword ptr [edi + 0x8], 0x0
        je L_done
        push ebx
        push ebp
    L_loop:
        mov ebx, dword ptr [esi]
        lea ebp, [esi + 0x8]
        mov dword ptr [esp + 0x10], ebp
        lea ecx, [ebp + 0x1c]
        mov dword ptr [esp + 0x1c], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, ebp
        mov dword ptr [esp + 0x1c], -1
        call dword ptr [mem_00924FF4]
        push esi
        call ext_006A5C5C
        add esp, 0x4
        cmp ebx, dword ptr [edi + 0x4]
        mov esi, ebx
        jne L_loop
        pop ebp
        pop ebx
    L_done:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004ED6B0] sub_004ED6B0 (110 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00692BA0();

extern "C" __declspec(naked) void __fastcall fn_004ED6B0(void* self) {
    __asm {
        push -1
        push 0x88ef84
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x9451b4
        mov dword ptr [esi + 0x4], 0x945184
        mov dword ptr [esi + 0x18], 0x945174
        lea ecx, [esi + 0x3c]
        mov dword ptr [esp + 0x10], 1
        call ext_004026E0
        lea ecx, [esi + 0x1c]
        mov byte ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00692BA0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004EF5E0] sub_004EF5E0 (148 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) bool __fastcall fn_004EF5E0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov ebp, ecx
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        jne L_calc_size
        xor eax, eax
        jmp L_check_size
    L_calc_size:
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 0x2
    L_check_size:
        cmp eax, dword ptr [ebp + 0x30]
        je L_check_first
        pop edi
        xor al, al
        pop ebp
        ret 0x4
    L_check_first:
        test ecx, ecx
        je L_invalid_1
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        jne L_first_valid
    L_invalid_1:
        call dword ptr [mem_00925134]
    L_first_valid:
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x40]
        push ebx
        mov ebx, dword ptr [eax]
        push esi
        mov esi, 0x1
        cmp dword ptr [ebp + 0x30], esi
        jle L_ret_true
    L_loop_check:
        test ecx, ecx
        je L_invalid_2
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp esi, eax
        jb L_elem_valid
    L_invalid_2:
        call dword ptr [mem_00925134]
    L_elem_valid:
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [ecx + 4*esi]
        mov eax, dword ptr [edx + 0x40]
        mov edx, dword ptr [eax]
        mov eax, dword ptr [ebx + 0x48]
        cmp eax, dword ptr [edx + 0x48]
        jne L_ret_false
        add esi, 0x1
        cmp esi, dword ptr [ebp + 0x30]
        jl L_loop_check
    L_ret_true:
        pop esi
        pop ebx
        pop edi
        mov al, 0x1
        pop ebp
        ret 0x4
    L_ret_false:
        pop esi
        pop ebx
        pop edi
        xor al, al
        pop ebp
        ret 0x4
    }
}

// [0x004E7390] sub_004E7390 (148 bytes)
extern "C" void ext_006A6E9E();
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_004E7390(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        push 0
        push 0xa2e2bc
        push 0xa2e2d8
        push 0
        push ebx
        call ext_006A6E9E
        mov edi, dword ptr [esp + 0x28]
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je loc_4E7401
        push 0
        push 0xa2e2bc
        push 0xa2e2d8
        push 0
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je loc_4E7401
        mov ecx, dword ptr [eax + 0x98]
        mov edx, dword ptr [esi + 0x98]
        cmp edx, ecx
        jne loc_4E73F8
        mov ecx, dword ptr [esi + 0x9c]
        cmp ecx, dword ptr [eax + 0x9c]
        pop edi
        pop esi
        setg al
        pop ebx
        ret 8
    loc_4E73F8:
        pop edi
        pop esi
        setl al
        pop ebx
        ret 8
    loc_4E7401:
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x24]
        mov ecx, edi
        call eax
        mov edx, dword ptr [ebx]
        push eax
        mov eax, dword ptr [edx + 0x24]
        mov ecx, ebx
        call eax
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}

// [0x004E7430] sub_004E7430 (96 bytes)
extern "C" void ext_004E7390();

extern "C" __declspec(naked) void __cdecl fn_004E7430(void* first, int hole, int top, unsigned val, void* pred) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        lea eax, [edi - 1]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        cmp dword ptr [esp + 0x14], edi
        jge L_early_004E7430
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
L_head_004E7430:
        mov eax, dword ptr [ebx + 4*esi]
        push ebp
        push eax
        lea ecx, [esp + 0x2c]
        call ext_004E7390
        test al, al
        je L_exit_004E7430
        mov ecx, dword ptr [ebx + 4*esi]
        lea eax, [esi - 1]
        cdq
        sub eax, edx
        mov dword ptr [ebx + 4*edi], ecx
        mov edi, esi
        sar eax, 1
        cmp dword ptr [esp + 0x1c], edi
        mov esi, eax
        jl L_head_004E7430
L_exit_004E7430:
        mov dword ptr [ebx + 4*edi], ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        ret
L_early_004E7430:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax + 4*edi], edx
        pop edi
        pop esi
        ret
    }
}

// [0x004E74D0] sub_004E74D0 (100 bytes)
extern "C" __declspec(naked) void __cdecl fn_004E74D0(unsigned* x, unsigned* y, unsigned* z, void* pred) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi]
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi]
        push eax
        push ecx
        lea ecx, [esp + 0x20]
        call ext_004E7390
        test al, al
        je L_skip1_4E74D0
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], edx
        mov dword ptr [edi], eax
L_skip1_4E74D0:
        mov eax, dword ptr [esi]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [ebx]
        push eax
        push ecx
        lea ecx, [esp + 0x24]
        call ext_004E7390
        test al, al
        je L_skip2_4E74D0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [ebx]
        mov dword ptr [ebx], edx
        mov dword ptr [esi], eax
L_skip2_4E74D0:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        lea ecx, [esp + 0x24]
        call ext_004E7390
        test al, al
        pop ebx
        je L_skip3_4E74D0
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], edx
        mov dword ptr [edi], eax
L_skip3_4E74D0:
        pop edi
        pop esi
        ret
    }
}

// [0x004E7540] sub_004E7540 (115 bytes)
extern "C" void ext_004E7390();
extern "C" void ext_004E7430();

extern "C" __declspec(naked) void __cdecl fn_004E7540(void* first, int hole, int len, unsigned val, void* pred) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        lea esi, [edi + edi + 0x2]
        cmp esi, ebp
        mov dword ptr [esp + 0x18], edi
        jge L_after_loop_004E7540
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
L_loop_004E7540:
        mov eax, dword ptr [ebx + 4*esi - 0x4]
        mov ecx, dword ptr [ebx + 4*esi]
        push eax
        push ecx
        lea ecx, [esp + 0x2c]
        call ext_004E7390
        test al, al
        je L_skip_004E7540
        sub esi, 0x1
L_skip_004E7540:
        mov edx, dword ptr [ebx + 4*esi]
        mov dword ptr [ebx + 4*edi], edx
        mov edi, esi
        lea esi, [esi + esi + 0x2]
        cmp esi, ebp
        jl L_loop_004E7540
L_after_loop_004E7540:
        jne L_call_004E7540
        mov eax, dword ptr [ebx + 4*ebp - 0x4]
        mov dword ptr [ebx + 4*edi], eax
        lea edi, [ebp - 0x1]
L_call_004E7540:
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x18]
        push ecx
        push edx
        push eax
        push edi
        push ebx
        call ext_004E7430
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004EFBA0] sub_004EFBA0 (149 bytes)
extern "C" void ext_0041A190();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004EFBA0(void* self, int edx_unused, void* arg) {
    __asm {
        sub esp, 0xc
        mov eax, dword ptr [esp + 0x10]
        push ebx
        push ebp
        mov ebp, dword ptr [eax + 0x38]
        test ebp, ebp
        push esi
        push edi
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x20], ebp
        je L_bfb_004EFBA0
        lea esi, [ecx + 0x240]
    L_bc0_004EFBA0:
        lea ecx, [esp + 0x20]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_0041A190
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        mov ebx, dword ptr [esi + 0x4]
        je L_be0_004EFBA0
        cmp edi, esi
        je L_be6_004EFBA0
    L_be0_004EFBA0:
        call dword ptr [mem_00925134]
    L_be6_004EFBA0:
        cmp dword ptr [esp + 0x18], ebx
        jne L_c0b_004EFBA0
        mov ebp, dword ptr [ebp + 0x38]
        test ebp, ebp
        mov dword ptr [esp + 0x20], ebp
        jne L_bc0_004EFBA0
        mov ecx, dword ptr [esp + 0x10]
    L_bfb_004EFBA0:
        mov eax, dword ptr [ecx + 0x230]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 4
    L_c0b_004EFBA0:
        test edi, edi
        jne L_c15_004EFBA0
        call dword ptr [mem_00925134]
    L_c15_004EFBA0:
        mov eax, dword ptr [esp + 0x18]
        cmp eax, dword ptr [edi + 0x4]
        jne L_c24_004EFBA0
        call dword ptr [mem_00925134]
    L_c24_004EFBA0:
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx + 0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 4
    }
}

// [0x004E7670] sub_004E7670 (63 bytes)
extern "C" void ext_004E7540();

extern "C" void __cdecl fn_004E7670(unsigned int* first, unsigned int* last, int comp) {
    int len = last - first;
    for (int hole = len / 2; hole > 0; ) {
        --hole;
        ((void (__cdecl*)(unsigned int*, int, int, unsigned int, int))ext_004E7540)(first, hole, len, first[hole], comp);
    }
}

// [0x004E7DF0] sub_004E7DF0 (74 bytes)
extern "C" void ext_004E7540();

extern "C" __declspec(naked) void __cdecl fn_004E7DF0(unsigned int* first, unsigned int* last, int comp) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        sub esi, edi
        mov eax, esi
        sar eax, 0x2
        cmp eax, 0x1
        jle done
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    loop_top:
        mov eax, dword ptr [edi + esi - 0x4]
        mov ecx, dword ptr [edi]
        push ebx
        push eax
        lea edx, [esi - 0x4]
        sar edx, 0x2
        push edx
        push 0x0
        push edi
        mov dword ptr [edi + esi - 0x4], ecx
        call ext_004E7540
        sub esi, 0x4
        mov eax, esi
        sar eax, 0x2
        add esp, 0x14
        cmp eax, 0x1
        jg loop_top
        pop ebx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x004ED5D0] sub_004ED5D0 (111 bytes)
extern "C" void __cdecl ext_00609850(unsigned int* a, unsigned int* b, unsigned int* c, int d, int e);

extern "C" void __cdecl fn_004ED5D0(unsigned int* first, unsigned int* last) {
    if (first == last) return;
    unsigned int* esi = first + 1;
    if (esi == last) return;
    unsigned int* edi = esi + 1;
    for (; esi != last; esi++, edi++) {
        unsigned int ecx = *esi;
        if (ecx < *first) {
            if (first != esi && esi != edi) {
                ext_00609850(first, esi, edi, 0, 0);
            }
        } else if (ecx < *(edi - 2)) {
            unsigned int* eax = edi - 2;
            unsigned int* edx;
            do {
                edx = eax;
                eax -= 1;
            } while (ecx < *eax);
            if (edx != esi && esi != edi) {
                ext_00609850(edx, esi, edi, 0, 0);
            }
        }
    }
}

// [0x004EF8D0] sub_004EF8D0 (154 bytes)
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_004EF8D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        mov edx, dword ptr [esp + 0x4]
        push -0x1
        push 0x88f4c2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [ecx + 0x8]
        sub esp, 0x44
        push esi
        mov esi, 0x2762762
        sub esi, eax
        cmp esi, edx
        pop esi
        jae ok
        push 0x92fa58
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x4c], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp]
        push eax
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x50], 0x1
        mov dword ptr [esp + 0x20], 0x928ecc
        call dword ptr [mem_00924FE0]
        push 0x9cdf20
        lea ecx, [esp + 0x20]
        push ecx
        mov byte ptr [esp + 0x54], 0x0
        mov dword ptr [esp + 0x24], 0x928ed8
        call ext_006A6DD2
ok:
        add eax, edx
        mov dword ptr [ecx + 0x8], eax
        mov ecx, dword ptr [esp + 0x44]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret 0x4
    }
}

// [0x004E75C0] sub_004E75C0 (162 bytes)
extern "C" void ext_004E74D0();

extern "C" __declspec(naked) void __cdecl fn_004E75C0(unsigned* first, unsigned* mid, unsigned* last, void* pred) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, esi
        sub eax, ecx
        sar eax, 0x2
        cmp eax, 0x28
        jle small_path
        add eax, 1
        cdq
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        and edx, 0x7
        add eax, edx
        push ebp
        sar eax, 0x3
        push edi
        lea edx, [8*eax]
        mov dword ptr [esp + 0x1c], edx
        push ebx
        lea edi, [4*eax]
        add edx, ecx
        lea eax, [edi + ecx]
        push edx
        push eax
        push ecx
        mov dword ptr [esp + 0x24], eax
        call ext_004E74D0
        mov eax, ebx
        mov ebx, dword ptr [esp + 0x28]
        push eax
        lea ecx, [edi + ebx]
        push ecx
        mov edx, ebx
        sub edx, edi
        push ebx
        push edx
        call ext_004E74D0
        mov ebp, esi
        sub ebp, edi
        mov edi, dword ptr [esp + 0x40]
        push edi
        push esi
        sub esi, dword ptr [esp + 0x44]
        push ebp
        push esi
        call ext_004E74D0
        mov eax, dword ptr [esp + 0x44]
        push edi
        push ebp
        push ebx
        push eax
        call ext_004E74D0
        add esp, 0x40
        pop edi
        pop ebp
        pop ebx
        pop esi
        ret
    small_path:
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push esi
        push eax
        push ecx
        call ext_004E74D0
        add esp, 0x10
        pop esi
        ret
    }
}

// [0x004E3AB0] sub_004E3AB0 (162 bytes)
extern "C" void ext_00490960();
extern "C" void ext_004E1F50();
extern "C" void ext_00596660();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004E3AB0(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_004E1F50
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        mov ebp, dword ptr [mem_00925134]
        jbe L1
        call ebp
    L1:
        mov ebx, dword ptr [esi + 4]
        cmp ebx, dword ptr [esi + 8]
        jbe L2
        call ebp
    L2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        mov ebx, dword ptr [esi + 0x28]
        cmp dword ptr [esi + 0x24], ebx
        lea edi, [esi + 0x20]
        jbe L3
        call ebp
    L3:
        mov ebp, dword ptr [edi + 4]
        cmp ebp, dword ptr [edi + 8]
        jbe L4
        call dword ptr [mem_00925134]
    L4:
        push ebx
        push edi
        push ebp
        push edi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, edi
        call ext_00490960
        mov ebx, dword ptr [esi + 0x18]
        cmp dword ptr [esi + 0x14], ebx
        lea edi, [esi + 0x10]
        jbe L5
        call dword ptr [mem_00925134]
    L5:
        mov ebp, dword ptr [edi + 4]
        cmp ebp, dword ptr [edi + 8]
        jbe L6
        call dword ptr [mem_00925134]
    L6:
        push ebx
        push edi
        push ebp
        push edi
        lea edx, [esp + 0x20]
        push edx
        mov ecx, edi
        call ext_00490960
        xor eax, eax
        pop edi
        mov dword ptr [esi + 0x30], eax
        mov dword ptr [esi + 0x34], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x004EF7E0] sub_004EF7E0 (168 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_004EF7E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x24]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x14]
        je inv_a
        mov eax, dword ptr [esi + 0x28]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jb ok_a
    inv_a:
        mov ebx, dword ptr [mem_00925134]
        call ebx
        jmp after_a
    ok_a:
        mov ebx, dword ptr [mem_00925134]
    after_a:
        mov eax, dword ptr [esi + 0x24]
        mov esi, dword ptr [eax + 4*edi]
        mov ebp, dword ptr [esp + 0x18]
        xor edi, edi
        cmp dword ptr [esi + 0x24], edi
        jle skip_b
        mov edi, edi
    loop_b:
        mov ecx, dword ptr [esi + 0xc]
        test ecx, ecx
        je inv_b
        mov eax, dword ptr [esi + 0x10]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jb ok_b
    inv_b:
        call ebx
    ok_b:
        mov ecx, dword ptr [esi + 0xc]
        cmp dword ptr [ecx + 4*edi], ebp
        je skip_b
        add edi, 1
        cmp edi, dword ptr [esi + 0x24]
        jl loop_b
    skip_b:
        add edi, 1
        xor ebx, ebx
        cmp edi, dword ptr [esi + 0x24]
        jge done
        nop
    loop_c:
        mov ecx, dword ptr [esi + 0xc]
        test ecx, ecx
        je inv_c
        mov eax, dword ptr [esi + 0x10]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jb ok_c
    inv_c:
        call dword ptr [mem_00925134]
    ok_c:
        mov edx, dword ptr [esi + 0xc]
        mov eax, dword ptr [edx + 4*edi]
        cmp dword ptr [eax + 0x38], ebp
        jne done
        add edi, 1
        add ebx, 1
        cmp edi, dword ptr [esi + 0x24]
        jl loop_c
    done:
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
    }
}

// [0x004E7970] sub_004E7970 (170 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E7970(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        push ebx
        push ebp
        push esi
        push edi
        call edx
        mov esi, eax
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_004E798B
        call dword ptr [mem_00925134]
    L_004E798B:
        mov ebp, dword ptr [esp + 0x18]
        nop
    L_004E7990:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_004E799E
        call dword ptr [mem_00925134]
    L_004E799E:
        cmp edi, ebx
        je L_004E79CF
        cmp edi, dword ptr [esi + 0x8]
        jb L_004E79AD
        call dword ptr [mem_00925134]
    L_004E79AD:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [esp + 0x14]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x28]
        push ebp
        push edx
        call eax
        cmp edi, dword ptr [esi + 0x8]
        jb L_004E79CA
        call dword ptr [mem_00925134]
    L_004E79CA:
        add edi, 0x4
        jmp L_004E7990
    L_004E79CF:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jbe L_004E79E0
        call ebp
        nop
    L_004E79E0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_004E79EA
        call ebp
    L_004E79EA:
        cmp edi, ebx
        je L_004E7A13
        cmp edi, dword ptr [esi + 0x8]
        jb L_004E79F5
        call ebp
    L_004E79F5:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        mov edx, dword ptr [edx + 0x24]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [esp + 0x14]
        push eax
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_004E7A0E
        call ebp
    L_004E7A0E:
        add edi, 0x4
        jmp L_004E79E0
    L_004E7A13:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x004E35B0] sub_004E35B0 (172 bytes)
extern "C" void ext_0048A120();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004E35B0(void* self) {
    __asm {
        push -1
        push 0x88dd43
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov [esp + 0xc], edi
        mov eax, [edi + 0x24]
        lea esi, [edi + 0x20]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x18], 1
        je L_004E35FA
        mov ecx, [esi + 0x8]
        push esi
        push ecx
        push eax
        call ext_0048A120
        mov eax, [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x10
L_004E35FA:
        mov [esi + 0x4], ebx
        mov [esi + 0x8], ebx
        mov [esi + 0xc], ebx
        mov eax, [edi + 0x14]
        cmp eax, ebx
        lea esi, [edi + 0x10]
        mov byte ptr [esp + 0x18], bl
        je L_004E3628
        mov ecx, [esi + 0x8]
        push esi
        push ecx
        push eax
        call ext_0048A120
        mov edx, [esi + 0x4]
        push edx
        call ext_006A5C5C
        add esp, 0x10
L_004E3628:
        mov [esi + 0x4], ebx
        mov [esi + 0x8], ebx
        mov [esi + 0xc], ebx
        mov eax, [edi + 0x4]
        cmp eax, ebx
        je L_004E3641
        push eax
        call ext_006A5C5C
        add esp, 0x4
L_004E3641:
        mov ecx, [esp + 0x10]
        mov [edi + 0x4], ebx
        mov [edi + 0x8], ebx
        mov [edi + 0xc], ebx
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004EF680] sub_004EF680 (173 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924FB0;

extern "C" __declspec(naked) void __fastcall fn_004EF680(void* self) {
    __asm {
        push ecx
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov ebp, ecx
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        mov dword ptr [esp + 0x8], ebp
        jne L_nonempty
        xor eax, eax
        jmp L_cmp
L_nonempty:
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 0x2
L_cmp:
        cmp eax, dword ptr [ebp + 0x30]
        je L_sizeok
        pop edi
        xor al, al
        pop ebp
        pop ecx
        ret 0x4
L_sizeok:
        test ecx, ecx
        je L_inv1
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        jne L_chk1
L_inv1:
        call dword ptr [mem_00925134]
L_chk1:
        mov ecx, dword ptr [edi + 0x4]
        push ebx
        mov ebx, dword ptr [ecx]
        push esi
        mov esi, 0x1
        add ebx, 0x1c
        cmp dword ptr [ebp + 0x30], esi
        jle L_true
        mov ebp, dword ptr [mem_00924FB0]
        jmp L_loop
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_loop:
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        je L_inv2
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp esi, eax
        jb L_ok
L_inv2:
        call dword ptr [mem_00925134]
L_ok:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edx + 4 * esi]
        add eax, 0x1c
        push eax
        push ebx
        call ebp
        add esp, 0x8
        test al, al
        jne L_false
        mov eax, dword ptr [esp + 0x10]
        add esi, 0x1
        cmp esi, dword ptr [eax + 0x30]
        jl L_loop
L_true:
        pop esi
        pop ebx
        pop edi
        mov al, 0x1
        pop ebp
        pop ecx
        ret 0x4
L_false:
        pop esi
        pop ebx
        pop edi
        xor al, al
        pop ebp
        pop ecx
        ret 0x4
    }
}

// [0x004E1BA0] sub_004E1BA0 (174 bytes)
extern "C" void ext_00489880();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void fn_004E1BA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x88dbf1
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [ebp + 0x10]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    L_004E1BD0:
        cmp dword ptr [ebp + 0xc], ebx
        jbe short L_004E1C3D
        mov dword ptr [ebp - 0x1c], esi
        mov dword ptr [ebp - 0x20], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 1
        je short L_004E1C2E
        cmp dword ptr [edi + 0x4], ebx
        je short L_004E1C1E
        mov ecx, dword ptr [edi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push edi
        lea edx, [ebp - 0x24]
        push edx
        call eax
        jmp short L_004E1C24
    L_004E1BF9:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je short L_004E1C15
        mov ebx, dword ptr [ebp + 0x14]
    L_004E1C06:
        push esi
        mov ecx, ebx
        call ext_00489880
        add esi, 8
        cmp esi, edi
        jne short L_004E1C06
    L_004E1C15:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    L_004E1C1E:
        mov dword ptr [ebp - 0x18], ebx
        lea eax, [ebp - 0x18]
    L_004E1C24:
        mov ecx, dword ptr [eax]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], edx
    L_004E1C2E:
        sub dword ptr [ebp + 0xc], 1
        add esi, 8
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp short L_004E1BD0
    L_004E1C3D:
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

// [0x004E7D40] sub_004E7D40 (174 bytes)
extern "C" __declspec(naked) void __cdecl fn_004E7D40(void* first, void* last, void* pred) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        cmp ebx, eax
        je L_ret_ebx
        push esi
        lea esi, [ebx + 0x4]
        cmp esi, eax
        je L_ret_esi
        push ebp
        push edi
        lea ebp, [esi + 0x4]
L_loop:
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        lea ecx, [esp + 0x24]
        call ext_004E7390
        test al, al
        je L_else
        cmp ebx, esi
        je L_adv
        cmp esi, ebp
        je L_adv
        push 0
        push 0
        push ebp
        push esi
        push ebx
        call ext_00609850
        add esp, 0x14
        jmp L_adv
L_else:
        mov edx, dword ptr [ebp - 0x8]
        mov eax, dword ptr [esi]
        lea edi, [ebp - 0x8]
        push edx
        push eax
        lea ecx, [esp + 0x24]
        call ext_004E7390
        test al, al
        je L_adv
L_shift:
        mov ecx, dword ptr [edi - 0x4]
        mov edx, dword ptr [esi]
        mov ebx, edi
        sub edi, 0x4
        push ecx
        push edx
        lea ecx, [esp + 0x24]
        call ext_004E7390
        test al, al
        jne L_shift
        cmp ebx, esi
        je L_restore
        cmp esi, ebp
        je L_restore
        push 0
        push 0
        push ebp
        push esi
        push ebx
        call ext_00609850
        add esp, 0x14
L_restore:
        mov ebx, dword ptr [esp + 0x14]
L_adv:
        add esi, 0x4
        add ebp, 0x4
        cmp esi, dword ptr [esp + 0x18]
        jne L_loop
        pop edi
        pop ebp
L_ret_esi:
        pop esi
L_ret_ebx:
        pop ebx
        ret
    }
}

// [0x004E30D0] sub_004E30D0 (51 bytes)
extern "C" void ext_004E1BA0();

extern "C" __declspec(naked) int __fastcall fn_004E30D0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_004E1BA0
        add esp, 0x18
        lea eax, [edi + 8*esi]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x004E31A0] sub_004E31A0 (41 bytes)
extern "C" void ext_00490760();

extern "C" __declspec(naked) void __fastcall fn_004E31A0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_00490760
        add esp, 0x1c
        ret 0xc
    }
}
