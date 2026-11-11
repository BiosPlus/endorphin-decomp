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
