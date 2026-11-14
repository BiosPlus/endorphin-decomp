// Decompiled translation unit: src/leaf/decompiled_4E0000.cpp

#include <string>

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

// [0x004E78B0] sub_004E78B0 (179 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004E78B0(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0xc]
        push esi
        push edi
        call edx
        mov esi, eax
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe short L_4E78D0
        call dword ptr [mem_00925134]
        mov edi, edi
L_4E78D0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe short L_4E78DE
        call dword ptr [mem_00925134]
L_4E78DE:
        cmp edi, ebx
        je short L_4E790F
        cmp edi, dword ptr [esi + 0x8]
        jb short L_4E78ED
        call dword ptr [mem_00925134]
L_4E78ED:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [ebp + 0x1c]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x28]
        push 1
        push edx
        call eax
        cmp edi, dword ptr [esi + 0x8]
        jb short L_4E790A
        call dword ptr [mem_00925134]
L_4E790A:
        add edi, 4
        jmp short L_4E78D0
L_4E790F:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe short L_4E7920
        call dword ptr [mem_00925134]
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_4E7920:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe short L_4E792E
        call dword ptr [mem_00925134]
L_4E792E:
        cmp edi, ebx
        je short L_4E795E
        cmp edi, dword ptr [esi + 0x8]
        jb short L_4E793D
        call dword ptr [mem_00925134]
L_4E793D:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        mov edx, dword ptr [edx + 0x24]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ebp + 0x18]
        push eax
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb short L_4E7959
        call dword ptr [mem_00925134]
L_4E7959:
        add edi, 4
        jmp short L_4E7920
L_4E795E:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004E1E90] sub_004E1E90 (183 bytes)
extern "C" void ext_006721D0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004E1E90(void* self) {
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        lea esi, [ebp + 0x10]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], ebp
        jbe short L_4E1EAE
        call dword ptr [mem_00925134]
L_4E1EAE:
        mov dword ptr [esp + 0x14], esi
        lea esi, [ebp + 0x20]
        mov ebx, edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe short L_4E1EC5
        call dword ptr [mem_00925134]
L_4E1EC5:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        jbe short L_4E1ED3
        call dword ptr [mem_00925134]
L_4E1ED3:
        cmp esi, esi
        je short L_4E1EDD
        call dword ptr [mem_00925134]
L_4E1EDD:
        cmp edi, ebp
        je short L_4E1F2B
        cmp edi, dword ptr [esi + 0x8]
        jb short L_4E1EEC
        call dword ptr [mem_00925134]
L_4E1EEC:
        mov ebp, dword ptr [esp + 0x14]
        test ebp, ebp
        jne short L_4E1EFA
        call dword ptr [mem_00925134]
L_4E1EFA:
        cmp ebx, dword ptr [ebp + 0x8]
        jb short L_4E1F05
        call dword ptr [mem_00925134]
L_4E1F05:
        push ebx
        mov ecx, edi
        call ext_006721D0
        cmp ebx, dword ptr [ebp + 0x8]
        jb short L_4E1F18
        call dword ptr [mem_00925134]
L_4E1F18:
        add ebx, 0x8
        cmp edi, dword ptr [esi + 0x8]
        jb short L_4E1F26
        call dword ptr [mem_00925134]
L_4E1F26:
        add edi, 0x8
        jmp short L_4E1EC5
L_4E1F2B:
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ecx + 0x34]
        test eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        je short L_4E1F43
        add ecx, 0x38
        mov dword ptr [eax + 0x298], ecx
L_4E1F43:
        add esp, 0xc
        ret
    }
}

// [0x004E1DC0] sub_004E1DC0 (193 bytes)
extern "C" void ext_00493EE0();

extern "C" __declspec(naked) void __fastcall fn_004E1DC0(void* self, int edx_unused, unsigned char a1) {
    __asm {
        mov al, byte ptr [esp + 4]
        push ebx
        mov ebx, ecx
        cmp dword ptr [ebx + 0x10], 0
        mov byte ptr [ebx + 0x990], al
        je L_tail_4E1DC0
        push ebp
        push esi
        mov esi, dword ptr [ebx + 0x984]
        cmp esi, dword ptr [ebx + 0x988]
        push edi
        lea edi, [ebx + 0x980]
        jbe L_head_4E1DC0
        call dword ptr [mem_00925134]
L_head_4E1DC0:
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe L_chk2_4E1DC0
        call dword ptr [mem_00925134]
L_chk2_4E1DC0:
        cmp edi, edi
        je L_chk3_4E1DC0
        call dword ptr [mem_00925134]
L_chk3_4E1DC0:
        cmp esi, ebp
        je L_exit_4E1DC0
        cmp esi, dword ptr [edi + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jb L_nb1_4E1DC0
        call ebp
L_nb1_4E1DC0:
        movzx eax, byte ptr [ebx + 0x990]
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x2c]
        push eax
        push 0x80000
        call edx
        cmp esi, dword ptr [edi + 0x8]
        jb L_nb2_4E1DC0
        call ebp
L_nb2_4E1DC0:
        mov eax, dword ptr [esi]
        mov byte ptr [eax + 0x4], 1
        cmp esi, dword ptr [edi + 0x8]
        jb L_nb3_4E1DC0
        call ebp
L_nb3_4E1DC0:
        add esi, 0x4
        jmp L_head_4E1DC0
L_exit_4E1DC0:
        movzx eax, byte ptr [ebx + 0x990]
        mov ecx, dword ptr [ebx + 0x10]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x2c]
        push eax
        push 0x2000000
        call edx
        mov eax, dword ptr [ebx + 0x10]
        pop edi
        pop esi
        mov byte ptr [eax + 0x4], 1
        pop ebp
L_tail_4E1DC0:
        call ext_00594000
        lea ecx, [eax + 0x258]
        call ext_00493EE0
        pop ebx
        ret 4
    }
}

// [0x004EF510] sub_004EF510 (194 bytes)
extern "C" void ext_004EF2B0();
extern "C" void ext_006616C0();
extern "C" void ext_00493D90();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004EF510(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88f358
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x24]
        je L_4EF545
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jb L_4EF54B
    L_4EF545:
        call dword ptr [mem_00925134]
    L_4EF54B:
        mov eax, dword ptr [esi + 4]
        mov esi, dword ptr [eax + 4*edi]
        lea ecx, [esp + 8]
        push ecx
        mov ecx, dword ptr [esi + 0x40]
        call ext_004EF2B0
        mov ecx, eax
        mov dword ptr [esp + 0x18], 0
        call ext_006616C0
        lea ecx, [esp + 8]
        mov edi, eax
        mov dword ptr [esp + 0x18], -1
        call ext_00493D90
        push 0
        push 0xa2efec
        push 0xa2e2d8
        push 0
        push edi
        call ext_006A6E9E
        mov ecx, dword ptr [esi + 0x40]
        add esp, 0x14
        add ecx, 0x10
        mov edi, eax
        call ext_006616C0
        push 0
        push 0xa2efec
        push 0xa2e2d8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_4EF5C1
        mov eax, edi
    L_4EF5C1:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x004E77E0] sub_004E77E0 (200 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004E77E0(void* self) {
    __asm {
        push ebp
        mov ebp, ecx
        mov eax, 8
        cmp dword ptr [ebp + 0x18], eax
        jne short L_4E77F6
        cmp dword ptr [ebp + 0x1c], eax
        je L_4E78A6
L_4E77F6:
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0xc]
        push esi
        push edi
        call edx
        mov edi, eax
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe short L_4E7810
        call dword ptr [mem_00925134]
L_4E7810:
        push ebx
L_4E7811:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe short L_4E781F
        call dword ptr [mem_00925134]
L_4E781F:
        cmp esi, ebx
        je short L_4E7854
        cmp dword ptr [ebp + 0x1c], 8
        je short L_4E7844
        cmp esi, dword ptr [edi + 0x8]
        jb short L_4E7834
        call dword ptr [mem_00925134]
L_4E7834:
        mov eax, dword ptr [esi]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x28]
        push 1
        push 0
        call edx
L_4E7844:
        cmp esi, dword ptr [edi + 0x8]
        jb short L_4E784F
        call dword ptr [mem_00925134]
L_4E784F:
        add esi, 4
        jmp short L_4E7811
L_4E7854:
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe short L_4E7862
        call dword ptr [mem_00925134]
L_4E7862:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe short L_4E7870
        call dword ptr [mem_00925134]
L_4E7870:
        cmp esi, ebx
        je short L_4E78A3
        cmp dword ptr [ebp + 0x18], 8
        je short L_4E7893
        cmp esi, dword ptr [edi + 0x8]
        jb short L_4E7885
        call dword ptr [mem_00925134]
L_4E7885:
        mov eax, dword ptr [esi]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push 0
        call edx
L_4E7893:
        cmp esi, dword ptr [edi + 0x8]
        jb short L_4E789E
        call dword ptr [mem_00925134]
L_4E789E:
        add esi, 4
        jmp short L_4E7862
L_4E78A3:
        pop ebx
        pop edi
        pop esi
L_4E78A6:
        pop ebp
        ret
    }
}

// [0x004E7EC0] sub_004E7EC0 (104 bytes)
extern "C" void ext_004E77E0();
extern "C" void ext_00596660();
extern "C" void ext_004E7490();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004E7EC0(void* self) {
    __asm {
        sub esp, 0x8
        push esi
        push edi
        mov edi, ecx
        lea esi, [edi + 0x4]
        mov byte ptr [edi + 0x20], 0x0
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_004E7F22
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 0x2
        je L_004E7F22
        push ebx
        push ebp
        mov ecx, edi
        call ext_004E77E0
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_004E7EF6
        call dword ptr [mem_00925134]
    L_004E7EF6:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L_004E7F04
        call dword ptr [mem_00925134]
    L_004E7F04:
        push ebx
        push esi
        push ebp
        push esi
        lea edx, [esp + 0x20]
        push edx
        mov ecx, esi
        call ext_00596660
        pop ebp
        pop ebx
        mov ecx, edi
        pop edi
        pop esi
        add esp, 0x8
        jmp ext_004E7490
    L_004E7F22:
        pop edi
        pop esi
        add esp, 0x8
        ret
    }
}

extern "C" void ext_00427640();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F6A8;
extern "C" int mem_00A9F574;
extern "C" int mem_00A9F6A4;
extern "C" int mem_00A9F484;
extern "C" int mem_00A9F8BC;
extern "C" int mem_00A9F694;

// [0x004E9BD0] sub_004E9BD0 (217 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E9BD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F6A8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 4]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_00427640
        mov eax, dword ptr [mem_00A9F574]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 5]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_00427640
        mov eax, dword ptr [mem_00A9F6A4]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 6]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_00427640
        mov eax, dword ptr [mem_00A9F484]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 8]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_00427640
        mov eax, dword ptr [mem_00A9F8BC]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 9]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_00427640
        mov eax, dword ptr [mem_00A9F694]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        add esi, 7
        push esi
        mov dword ptr [esp + 0x14], eax
        call ext_00427640
        add esp, 8
        pop edi
        pop esi
        ret 4
    }
}

// [0x004E3480] sub_004E3480 (227 bytes)
extern "C" void ext_0048A120();
extern "C" void ext_006A5C5C();
extern "C" int mem_0092524C;

extern "C" __declspec(naked) void __fastcall fn_004E3480(void* self) {
    __asm {
        push -1
        push 0x8b2507
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov eax, dword ptr [esi + 0x58]
        lea edi, [esi + 0x54]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x18], 4
        je L_4E34CA
        mov ecx, dword ptr [edi + 0x8]
        push edi
        push ecx
        push eax
        call ext_0048A120
        mov edx, dword ptr [edi + 0x4]
        push edx
        call ext_006A5C5C
        add esp, 0x10
L_4E34CA:
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov dword ptr [edi + 0xc], ebx
        mov eax, dword ptr [esi + 0x48]
        cmp eax, ebx
        je L_4E34E3
        push eax
        call ext_006A5C5C
        add esp, 0x4
L_4E34E3:
        mov dword ptr [esi + 0x48], ebx
        mov dword ptr [esi + 0x4c], ebx
        mov dword ptr [esi + 0x50], ebx
        mov eax, dword ptr [esi + 0x38]
        cmp eax, ebx
        je L_4E34FC
        push eax
        call ext_006A5C5C
        add esp, 0x4
L_4E34FC:
        mov dword ptr [esi + 0x38], ebx
        mov dword ptr [esi + 0x3c], ebx
        mov dword ptr [esi + 0x40], ebx
        mov eax, dword ptr [esi + 0x28]
        cmp eax, ebx
        je L_4E3515
        push eax
        call ext_006A5C5C
        add esp, 0x4
L_4E3515:
        mov dword ptr [esi + 0x28], ebx
        mov dword ptr [esi + 0x2c], ebx
        mov dword ptr [esi + 0x30], ebx
        mov eax, dword ptr [esi + 0x18]
        cmp eax, ebx
        je L_4E352E
        push eax
        call ext_006A5C5C
        add esp, 0x4
L_4E352E:
        mov dword ptr [esi + 0x18], ebx
        mov dword ptr [esi + 0x1c], ebx
        mov dword ptr [esi + 0x20], ebx
        mov eax, dword ptr [esi + 0x8]
        cmp eax, ebx
        je L_4E3548
        push eax
        call dword ptr [mem_0092524C]
        add esp, 0x4
L_4E3548:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x10], ebx
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004E5180] sub_004E5180 (62 bytes)
extern "C" void ext_004E3480();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004E5180(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x4]
        mov esi, dword ptr [eax]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        cmp esi, dword ptr [edi + 0x4]
        mov dword ptr [edi + 0x8], 0
        je done_4E5180
        push ebx
        mov edi, edi
    loop_4E5180:
        mov ebx, dword ptr [esi]
        lea ecx, [esi + 0x8]
        call ext_004E3480
        push esi
        call ext_006A5C5C
        add esp, 4
        cmp ebx, dword ptr [edi + 0x4]
        mov esi, ebx
        jne loop_4E5180
        pop ebx
    done_4E5180:
        pop edi
        pop esi
        ret
    }
}

// [0x004E2FE0] sub_004E2FE0 (236 bytes)
extern "C" void ext_005E12F0();
extern "C" int mem_00925134;
extern "C" int mem_00A8F2B8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004E2FE0(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr [ebx + 0x1a4]
        test ecx, ecx
        push esi
        push edi
        je L_a1
        call ext_005E12F0
L_a1:
        mov ecx, dword ptr [ebx + 0x1a8]
        test ecx, ecx
        je L_a2
        call ext_005E12F0
L_a2:
        mov edi, dword ptr [ebx + 0x4]
        cmp edi, dword ptr [ebx + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jbe L_a3
        call ebp
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
L_a3:
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        jbe L_a4
        call ebp
L_a4:
        test ebx, ebx
        je L_a5
        cmp ebx, ebx
        je L_a6
L_a5:
        call ebp
L_a6:
        cmp edi, esi
        je L_done
        test ebx, ebx
        jne L_a7
        call ebp
L_a7:
        cmp edi, dword ptr [ebx + 0x8]
        jb L_a8
        call ebp
L_a8:
        mov ecx, dword ptr [mem_00A8F2B8]
        mov eax, dword ptr [edi]
        mov esi, dword ptr [eax + 0x40]
        push ecx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x3c]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x38], 0
        call edx
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x80]
        mov ecx, esi
        call edx
        cmp edi, dword ptr [ebx + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jb L_a9
        call ebp
L_a9:
        add edi, 0x68
        jmp L_a3
L_done:
        fldz
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        fstp dword ptr [ebx + 0x2c]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x004ECB40] sub_004ECB40 (247 bytes)
extern "C" int mem_00B599BC;

// thiscall (ret 4): self in ecx, one stack arg (out ptr at [esp+4] on entry), returns out ptr.
// Installs an SEH frame (handler 0x88eefb), picks a source via self->+0x4, calls vfuncs, copies result to *out.
extern "C" __declspec(naked) void* __fastcall fn_004ECB40(void* self, int edx_unused, void* out) {
    __asm {
        push -1
        push 0x88eefb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x18
        push ebx
        push ebp
        xor ebp, ebp
        mov eax, ecx
        push esi
        mov dword ptr [esp + 0xc], ebp
        cmp dword ptr [eax + 0x4], ebp
        push edi
        je L_004ECB40_else
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx]
        push eax
        lea eax, [esp + 0x24]
        push eax
        call edx
        mov esi, eax
        mov ecx, dword ptr [esp + 0x1c]
        mov ebx, 0x1
        jmp L_004ECB40_join
    L_004ECB40_else:
        mov ecx, dword ptr [mem_00B599BC]
        mov dword ptr [esp + 0x18], ebp
        mov dword ptr [esp + 0x1c], ecx
        lea esi, [esp + 0x18]
        mov ebx, 0x2
    L_004ECB40_join:
        cmp dword ptr [esi + 0x4], ebp
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x30], ebx
        je L_004ECB40_nosrc
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push esi
        lea edx, [esp + 0x18]
        push edx
        call eax
        mov ecx, dword ptr [esp + 0x1c]
        jmp L_004ECB40_copy
    L_004ECB40_nosrc:
        mov dword ptr [esp + 0x10], ebp
        lea eax, [esp + 0x10]
    L_004ECB40_copy:
        mov edx, dword ptr [eax]
        mov edi, dword ptr [esp + 0x38]
        mov dword ptr [edi], edx
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [edi + 0x4], eax
        or ebx, 0x4
        test bl, 0x2
        mov dword ptr [esp + 0x30], 0x1
        je L_004ECB40_t1
        and ebx, -0x3
        cmp ecx, ebp
        mov dword ptr [esp + 0x10], ebx
        je L_004ECB40_t1
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x18]
        push eax
        call edx
    L_004ECB40_t1:
        test bl, 0x1
        mov dword ptr [esp + 0x30], ebp
        je L_004ECB40_t2
        mov ecx, dword ptr [esp + 0x24]
        and ebx, -0x2
        cmp ecx, ebp
        mov dword ptr [esp + 0x10], ebx
        je L_004ECB40_t2
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x20]
        push edx
        call eax
    L_004ECB40_t2:
        mov ecx, dword ptr [esp + 0x28]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x24
        ret 0x4
    }
}

// [0x004E5C40] sub_004E5C40 (257 bytes)
extern "C" void ext_0051C5A0();
extern "C" void ext_0051CCC0();
extern "C" __declspec(naked) void __fastcall fn_004E5C40(void* self) {
    __asm {
        push -1
        _emit 0x68
        _emit 0xf7
        _emit 0xe0
        _emit 0x88
        _emit 0x00
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov [esp+8], esi
        mov [esi+4], ebx
        mov [esi+8], ebx
        mov [esi+0xc], ebx
        mov [esp+0x14], ebx
        mov [esi+0x14], ebx
        mov [esi+0x18], ebx
        mov [esi+0x1c], ebx
        fldz
        lea ecx, [esi+0x30]
        fstp dword ptr [esi+0x24]
        mov byte ptr [esp+0x14], 1
        mov [esi+0x20], ebx
        call ext_0051C5A0
        lea ecx, [esi+0x74]
        mov byte ptr [esp+0x14], 2
        call ext_0051C5A0
        lea ecx, [esi+0xb8]
        mov byte ptr [esp+0x14], 3
        call ext_0051C5A0
        lea ecx, [esi+0xfc]
        mov byte ptr [esp+0x14], 4
        call ext_0051CCC0
        fld1
        mov [esi+0x160], bl
        fst dword ptr [esi+0x164]
        fldz
        mov ecx, [esp+0xc]
        fst dword ptr [esi+0x168]
        mov [esi+0x1a4], ebx
        fst dword ptr [esi+0x16c]
        mov [esi+0x1a8], ebx
        fst dword ptr [esi+0x170]
        mov eax, esi
        fst dword ptr [esi+0x174]
        fst dword ptr [esi+0x17c]
        fst dword ptr [esi+0x180]
        fst dword ptr [esi+0x184]
        fst dword ptr [esi+0x188]
        fst dword ptr [esi+0x190]
        fst dword ptr [esi+0x194]
        fst dword ptr [esi+0x198]
        fstp dword ptr [esi+0x19c]
        fst dword ptr [esi+0x178]
        fst dword ptr [esi+0x18c]
        fstp dword ptr [esi+0x1a0]
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004E1AD0] sub_004E1AD0 (85 bytes)
extern "C" void ext_004DE160();
extern "C" void ext_00661F70();
extern "C" int mem_00925134;
extern "C" int mem_00B40644;
extern "C" __declspec(naked) void __fastcall fn_004E1AD0(void* self) {
    __asm {
        push edi
        mov edi, ecx
        cmp dword ptr [edi+0x10], 0
        je done
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [mem_00B40644]
        add esi, 8
        cmp dword ptr [esi], 0
        jne l1
        call ebx
    l1:
        mov eax, [esi]
        mov ecx, [esi+4]
        cmp ecx, [eax+4]
        jne l2
        call ebx
    l2:
        mov ecx, edi
        call ext_004DE160
        mov edx, [esi+4]
        mov ecx, [edx+8]
        sub ecx, eax
        test ecx, ecx
        pop esi
        pop ebx
        jg l3
        mov ecx, 1
    l3:
        push ecx
        lea ecx, [edi+0x8c4]
        call ext_00661F70
    done:
        pop edi
        ret
    }
}

// [0x004E1D10] sub_004E1D10 (43 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_004E1AD0();
extern "C" void ext_00594000();
extern "C" __declspec(naked) void __fastcall fn_004E1D10(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, [ecx+0x15c]
        sub eax, [esp+4]
        add eax, 1
        mov [ecx+0x9a0], eax
        call ext_004E1AD0
        call ext_00594000
        lea ecx, [eax+0x258]
        call ext_00493EE0
        ret 4
    }
}

// [0x004E7F30] sub_004E7F30 (277 bytes)
extern "C" void ext_004E7E90();

extern "C" __declspec(naked) void* __fastcall fn_004E7F30(void* self) {
    __asm {
        push -1
        push 0x88e68a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov edx, ecx
        lea ecx, [edx + 0x4]
        mov dword ptr [edx], 0x94137c
        call ext_004E7E90
        mov dword ptr [edx], 0x9413f4
        xor eax, eax
        mov cl, 1
        mov dword ptr [edx + 0x28], eax
        mov dword ptr [edx + 0x2c], eax
        mov dword ptr [edx + 0x30], eax
        mov byte ptr [edx + 0x34], cl
        mov dword ptr [edx + 0x3c], eax
        mov dword ptr [edx + 0x40], eax
        mov dword ptr [edx + 0x44], eax
        mov byte ptr [edx + 0x48], cl
        mov dword ptr [edx + 0x50], eax
        mov dword ptr [edx + 0x54], eax
        mov dword ptr [edx + 0x58], eax
        mov byte ptr [edx + 0x5c], cl
        mov dword ptr [edx + 0x64], eax
        mov dword ptr [edx + 0x68], eax
        mov dword ptr [edx + 0x6c], eax
        mov byte ptr [edx + 0x70], cl
        mov dword ptr [edx + 0x78], eax
        mov dword ptr [edx + 0x7c], eax
        mov dword ptr [edx + 0x80], eax
        mov byte ptr [edx + 0x84], cl
        mov dword ptr [edx + 0x8c], eax
        mov dword ptr [edx + 0x90], eax
        mov dword ptr [edx + 0x94], eax
        mov byte ptr [edx + 0x98], cl
        mov dword ptr [edx + 0xa0], eax
        mov dword ptr [edx + 0xa4], eax
        mov dword ptr [edx + 0xa8], eax
        mov byte ptr [edx + 0xac], cl
        mov dword ptr [edx + 0xb4], eax
        mov dword ptr [edx + 0xb8], eax
        mov dword ptr [edx + 0xbc], eax
        mov byte ptr [edx + 0xc0], cl
        mov dword ptr [edx + 0xc8], eax
        mov dword ptr [edx + 0xcc], eax
        mov dword ptr [edx + 0xd0], eax
        mov byte ptr [edx + 0xd4], cl
        fldz
        mov dword ptr [edx + 0xdc], eax
        mov dword ptr [edx + 0xe0], eax
        mov dword ptr [edx + 0xe4], eax
        mov byte ptr [edx + 0xe8], cl
        fst dword ptr [edx + 0xf4]
        mov byte ptr [edx + 0xf8], cl
        fst dword ptr [edx + 0xf0]
        mov ecx, dword ptr [esp + 0x4]
        fstp dword ptr [edx + 0xec]
        mov eax, edx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004E76B0] sub_004E76B0 (290 bytes)
extern "C" __declspec(naked) void __cdecl fn_004E76B0(void* p1, void* p2, void* p3, void* p4) {
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [ecx]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, edi
        sub     eax, ecx
        sar     eax, 0x2
        cmp     eax, 0x28
        jle     loc_4e77a9
        add     eax, 0x1
        cdq
        and     edx, 0x7
        add     eax, edx
        sar     eax, 0x3
        push    ebx
        push    ebp
        lea     ebp, [8*eax]
        add     eax, eax
        add     eax, eax
        mov     edx, dword ptr [eax + ecx]
        cmp     edx, esi
        jae     loc_4e76f1
        mov     dword ptr [eax + ecx], esi
        mov     dword ptr [ecx], edx
    loc_4e76f1:
        mov     edx, dword ptr [ecx + ebp]
        mov     esi, dword ptr [eax + ecx]
        cmp     edx, esi
        jae     loc_4e7701
        mov     dword ptr [ecx + ebp], esi
        mov     dword ptr [eax + ecx], edx
    loc_4e7701:
        mov     edx, dword ptr [eax + ecx]
        mov     esi, dword ptr [ecx]
        cmp     edx, esi
        jae     loc_4e770f
        mov     dword ptr [eax + ecx], esi
        mov     dword ptr [ecx], edx
    loc_4e770f:
        mov     edx, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [edx]
        mov     esi, edx
        sub     esi, eax
        mov     edi, dword ptr [esi]
        cmp     ebx, edi
        jae     loc_4e7723
        mov     dword ptr [edx], edi
        mov     dword ptr [esi], ebx
    loc_4e7723:
        mov     edi, dword ptr [eax + edx]
        mov     ebx, dword ptr [edx]
        cmp     edi, ebx
        jae     loc_4e7731
        mov     dword ptr [eax + edx], ebx
        mov     dword ptr [edx], edi
    loc_4e7731:
        mov     edi, dword ptr [edx]
        mov     ebx, dword ptr [esi]
        cmp     edi, ebx
        jae     loc_4e773d
        mov     dword ptr [edx], ebx
        mov     dword ptr [esi], edi
    loc_4e773d:
        mov     edi, dword ptr [esp + 0x1c]
        mov     esi, edi
        sub     esi, eax
        mov     ebx, dword ptr [esi]
        sub     edi, ebp
        mov     ebp, dword ptr [edi]
        cmp     ebx, ebp
        jae     loc_4e7753
        mov     dword ptr [esi], ebp
        mov     dword ptr [edi], ebx
    loc_4e7753:
        mov     ebx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [ebx]
        mov     ebx, dword ptr [esi]
        cmp     ebp, ebx
        mov     dword ptr [esp + 0x14], ebp
        jae     loc_4e7770
        mov     ebp, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp], ebx
        mov     ebx, dword ptr [esp + 0x14]
        mov     dword ptr [esi], ebx
    loc_4e7770:
        mov     ebx, dword ptr [esi]
        mov     ebp, dword ptr [edi]
        cmp     ebx, ebp
        jae     loc_4e777c
        mov     dword ptr [esi], ebp
        mov     dword ptr [edi], ebx
    loc_4e777c:
        mov     edi, dword ptr [edx]
        mov     ebx, dword ptr [eax + ecx]
        cmp     edi, ebx
        jae     loc_4e778a
        mov     dword ptr [edx], ebx
        mov     dword ptr [eax + ecx], edi
    loc_4e778a:
        mov     edi, dword ptr [esi]
        mov     ebx, dword ptr [edx]
        cmp     edi, ebx
        jae     loc_4e7796
        mov     dword ptr [esi], ebx
        mov     dword ptr [edx], edi
    loc_4e7796:
        mov     esi, dword ptr [edx]
        mov     edi, dword ptr [eax + ecx]
        cmp     esi, edi
        pop     ebp
        pop     ebx
        jae     loc_4e77cf
        mov     dword ptr [edx], edi
        pop     edi
        mov     dword ptr [eax + ecx], esi
        pop     esi
        ret
    loc_4e77a9:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax]
        cmp     edx, esi
        jae     loc_4e77b7
        mov     dword ptr [eax], esi
        mov     dword ptr [ecx], edx
    loc_4e77b7:
        mov     edx, dword ptr [edi]
        mov     esi, dword ptr [eax]
        cmp     edx, esi
        jae     loc_4e77c3
        mov     dword ptr [edi], esi
        mov     dword ptr [eax], edx
    loc_4e77c3:
        mov     edx, dword ptr [eax]
        mov     esi, dword ptr [ecx]
        cmp     edx, esi
        jae     loc_4e77cf
        mov     dword ptr [eax], esi
        mov     dword ptr [ecx], edx
    loc_4e77cf:
        pop     edi
        pop     esi
        ret
    }
}

// [0x004ED490] sub_004ED490 (308 bytes)
extern "C" void ext_004E76B0();

extern "C" __declspec(naked) void __fastcall fn_004ED490(void* self) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     eax, ebp
        sub     eax, edi
        sar     eax, 2
        cdq
        sub     eax, edx
        sar     eax, 1
        lea     esi, [edi + 4*eax]
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        lea     ecx, [ebp - 4]
        push    ecx
        push    esi
        push    edi
        call    ext_004E76B0
        add     esp, 0x10
        cmp     edi, esi
        mov     ecx, esi
        lea     ebx, [esi + 4]
        jae     loc_4ed4da
loc_4ed4c8:
        mov     eax, dword ptr [ecx - 4]
        mov     edx, dword ptr [ecx]
        cmp     edx, eax
        ja      loc_4ed4da
        jb      loc_4ed4da
        add     ecx, -4
        cmp     edi, ecx
        jb      loc_4ed4c8
loc_4ed4da:
        cmp     ebx, ebp
        jae     loc_4ed4ef
        mov     edx, dword ptr [ecx]
loc_4ed4e0:
        mov     eax, dword ptr [ebx]
        cmp     edx, eax
        ja      loc_4ed4ef
        jb      loc_4ed4ef
        add     ebx, 4
        cmp     ebx, ebp
        jb      loc_4ed4e0
loc_4ed4ef:
        mov     eax, ebx
        mov     edx, ecx
        cmp     eax, ebp
        jae     loc_4ed517
loc_4ed4f7:
        mov     esi, dword ptr [ecx]
        mov     edi, dword ptr [eax]
        cmp     edi, esi
        ja      loc_4ed510
        jb      loc_4ed517
        mov     esi, ebx
        mov     ebp, dword ptr [esi]
        mov     dword ptr [esi], edi
        mov     dword ptr [eax], ebp
        mov     ebp, dword ptr [esp + 0x20]
        add     ebx, 4
loc_4ed510:
        add     eax, 4
        cmp     eax, ebp
        jb      loc_4ed4f7
loc_4ed517:
        cmp     edx, dword ptr [esp + 0x1c]
        jbe     loc_4ed546
        _emit   0x8d
        _emit   0x49
        _emit   0x00
loc_4ed520:
        mov     esi, dword ptr [edx - 4]
        mov     edi, dword ptr [ecx]
        cmp     edi, esi
        ja      loc_4ed539
        jb      loc_4ed542
        mov     edi, dword ptr [edx - 4]
        mov     esi, dword ptr [ecx - 4]
        sub     ecx, 4
        mov     dword ptr [ecx], edi
        mov     dword ptr [edx - 4], esi
loc_4ed539:
        add     edx, -4
        cmp     dword ptr [esp + 0x1c], edx
        jb      loc_4ed520
loc_4ed542:
        cmp     edx, dword ptr [esp + 0x1c]
loc_4ed546:
        jne     loc_4ed57e
        cmp     eax, ebp
        je      loc_4ed5b5
        cmp     ebx, eax
        je      loc_4ed558
        mov     edi, dword ptr [ebx]
        mov     esi, dword ptr [ecx]
        mov     dword ptr [ecx], edi
        mov     dword ptr [ebx], esi
loc_4ed558:
        mov     edi, ecx
        mov     ebp, dword ptr [edi]
        mov     esi, eax
        mov     dword ptr [esp + 0x10], ebp
        mov     ebp, dword ptr [esi]
        mov     dword ptr [edi], ebp
        mov     edi, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [esp + 0x20]
        add     ebx, 4
        add     ecx, 4
        add     eax, 4
        mov     dword ptr [esi], edi
        jmp     loc_4ed4ef
loc_4ed57e:
        sub     edx, 4
        cmp     eax, ebp
        jne     loc_4ed5a5
        sub     ecx, 4
        cmp     edx, ecx
        je      loc_4ed594
        mov     edi, dword ptr [ecx]
        mov     esi, dword ptr [edx]
        mov     dword ptr [edx], edi
        mov     dword ptr [ecx], esi
loc_4ed594:
        mov     edi, dword ptr [ebx - 4]
        mov     esi, dword ptr [ecx]
        sub     ebx, 4
        mov     dword ptr [ecx], edi
        mov     dword ptr [ebx], esi
        jmp     loc_4ed4ef
loc_4ed5a5:
        mov     esi, dword ptr [eax]
        mov     edi, dword ptr [edx]
        mov     dword ptr [eax], edi
        mov     dword ptr [edx], esi
        add     eax, 4
        jmp     loc_4ed4ef
loc_4ed5b5:
        mov     eax, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax + 4], ebx
        mov     dword ptr [eax], ecx
        pop     ebx
        pop     ecx
        ret
    }
}

// [0x004EF310] sub_004EF310 (321 bytes)
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_004EF310(void* self, int edx_unused, void* src) {
    __asm {
        push -1
        push 0x88f338
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x28]
        mov eax, dword ptr [edi]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esi + 0x8], edx
        mov eax, dword ptr [edi + 0xc]
        mov dword ptr [esi + 0xc], eax
        mov ecx, dword ptr [edi + 0x10]
        mov dword ptr [esi + 0x10], ecx
        mov edx, dword ptr [edi + 0x14]
        xor ebp, ebp
        mov dword ptr [esp + 0x20], ebp
        mov dword ptr [esi + 0x14], edx
        lea eax, [edi + 0x18]
        push eax
        lea ecx, [esi + 0x18]
        mov byte ptr [esp + 0x24], 0x1
        call dword ptr [mem_00924FE0]
        cmp dword ptr [edi + 0x38], ebp
        lea ebx, [edi + 0x34]
        mov byte ptr [esp + 0x20], 0x2
        lea eax, [esp + 0x28]
        je short L1
        mov ecx, dword ptr [ebx + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push ebx
        push eax
        call edx
        jmp short L2
    L1:
        mov dword ptr [esp + 0x28], ebp
    L2:
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 0x34], eax
        mov ecx, dword ptr [ebx + 0x4]
        mov dword ptr [esi + 0x38], ecx
        mov edx, dword ptr [edi + 0x3c]
        lea ebx, [edi + 0x40]
        mov dword ptr [esi + 0x3c], edx
        cmp dword ptr [ebx + 0x4], ebp
        mov byte ptr [esp + 0x20], 0x3
        je short L3
        mov ecx, dword ptr [ebx + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push ebx
        lea edx, [esp + 0x18]
        push edx
        call eax
        jmp short L4
    L3:
        mov dword ptr [esp + 0x28], ebp
        lea eax, [esp + 0x28]
    L4:
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 0x40], ecx
        mov edx, dword ptr [ebx + 0x4]
        mov dword ptr [esi + 0x44], edx
        cmp dword ptr [edi + 0x4c], ebp
        lea ebx, [edi + 0x48]
        mov byte ptr [esp + 0x20], 0x4
        je short L5
        mov ecx, dword ptr [ebx + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push ebx
        lea edx, [esp + 0x2c]
        push edx
        call eax
        jmp short L6
    L5:
        mov dword ptr [esp + 0x28], ebp
        lea eax, [esp + 0x28]
    L6:
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 0x48], ecx
        mov edx, dword ptr [ebx + 0x4]
        mov dword ptr [esi + 0x4c], edx
        mov eax, dword ptr [edi + 0x50]
        mov dword ptr [esi + 0x50], eax
        mov ecx, dword ptr [edi + 0x58]
        mov dword ptr [esi + 0x58], ecx
        mov edx, dword ptr [edi + 0x5c]
        mov dword ptr [esi + 0x5c], edx
        mov eax, dword ptr [edi + 0x60]
        mov dword ptr [esi + 0x60], eax
        movzx ecx, byte ptr [edi + 0x64]
        mov byte ptr [esi + 0x64], cl
        mov dl, byte ptr [edi + 0x65]
        mov byte ptr [esi + 0x65], dl
        mov al, byte ptr [edi + 0x66]
        mov byte ptr [esi + 0x66], al
        movzx ecx, byte ptr [edi + 0x67]
        pop edi
        mov byte ptr [esi + 0x67], cl
        mov ecx, dword ptr [esp + 0x14]
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}

// [0x004E7A20] sub_004E7A20 (349 bytes)
extern "C" void ext_00594000();
extern "C" int mem_00925134;
extern "C" double mem_0092A270;

extern "C" __declspec(naked) void* __fastcall fn_004E7A20(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0xf8], 0
        je loc_4e7b72
        fldz
        push ebx
        fst dword ptr [esi + 0xf4]
        push ebp
        fst dword ptr [esi + 0xf0]
        push edi
        fst dword ptr [esi + 0xec]
        mov eax, dword ptr [esi]
        fstp dword ptr [esp + 0x10]
        mov edx, dword ptr [eax + 0xc]
        call edx
        mov ebp, eax
        mov ebx, dword ptr [ebp + 0x4]
        cmp ebx, dword ptr [ebp + 0x8]
        jbe loc_4e7a65
        call dword ptr [mem_00925134]
    loc_4e7a65:
        mov edi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], edi
        jbe loc_4e7a73
        call dword ptr [mem_00925134]
    loc_4e7a73:
        cmp ebx, edi
        je loc_4e7aec
        cmp ebx, dword ptr [ebp + 0x8]
        jb loc_4e7a82
        call dword ptr [mem_00925134]
    loc_4e7a82:
        mov edi, dword ptr [ebx]
        add edi, 0x4
        call ext_00594000
        mov edx, dword ptr [edi]
        add eax, 0x1c8
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov ecx, edi
        call eax
        fld dword ptr [esi + 0xec]
        fadd dword ptr [eax + 0x30]
        add eax, 0x30
        fstp dword ptr [esi + 0xec]
        fld dword ptr [eax + 0x4]
        fadd dword ptr [esi + 0xf0]
        fstp dword ptr [esi + 0xf0]
        fld dword ptr [eax + 0x8]
        fadd dword ptr [esi + 0xf4]
        fstp dword ptr [esi + 0xf4]
        cmp ebx, dword ptr [ebp + 0x8]
        jb loc_4e7ad6
        call dword ptr [mem_00925134]
    loc_4e7ad6:
        fld dword ptr [esp + 0x10]
        add ebx, 0x4
        fadd qword ptr [mem_0092A270]
        fstp dword ptr [esp + 0x10]
        jmp loc_4e7a65
    loc_4e7aec:
        fldz
        pop edi
        fld dword ptr [esp + 0xc]
        pop ebp
        fcom st(1)
        pop ebx
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne loc_4e7b69
        fld1
        lea eax, [esi + 0xec]
        fdivrp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0xec]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0xf0]
        fmul st, st(1)
        fstp dword ptr [esp + 0xc]
        fmul dword ptr [esi + 0xf4]
        mov byte ptr [esi + 0xf8], 1
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esi + 0xec]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0xf0]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esi + 0xf4]
        mov byte ptr [esi + 0xf8], 0
        pop esi
        add esp, 0x10
        ret
    loc_4e7b69:
        fstp st(0)
        mov byte ptr [esi + 0xf8], 0
    loc_4e7b72:
        lea eax, [esi + 0xec]
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x004E5AE0] sub_004E5AE0 (352 bytes)
extern "C" void ext_0048CB80();
extern "C" void ext_00519CE0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004E5AE0(void* self) {
    __asm {
        push -1
        push 0x88e0b3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        mov ecx, dword ptr [esi + 0x1a8]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr [esp + 0x14], 0x6
        je loc_4e5b1a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    loc_4e5b1a:
        mov ecx, dword ptr [esi + 0x1a4]
        cmp ecx, ebx
        mov byte ptr [esp + 0x14], 0x5
        je loc_4e5b31
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    loc_4e5b31:
        mov eax, dword ptr [esi + 0x12c]
        cmp eax, ebx
        push edi
        lea edi, [esi + 0xfc]
        mov byte ptr [esp + 0x18], 0x4
        je loc_4e5b50
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e5b50:
        mov ecx, edi
        mov dword ptr [edi + 0x30], ebx
        mov dword ptr [edi + 0x34], ebx
        mov dword ptr [edi + 0x38], ebx
        call ext_00519CE0
        mov eax, dword ptr [esi + 0xe8]
        cmp eax, ebx
        lea edi, [esi + 0xb8]
        mov byte ptr [esp + 0x18], 0x3
        je loc_4e5b7e
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e5b7e:
        mov ecx, edi
        mov dword ptr [edi + 0x30], ebx
        mov dword ptr [edi + 0x34], ebx
        mov dword ptr [edi + 0x38], ebx
        call ext_00519CE0
        mov eax, dword ptr [esi + 0xa4]
        cmp eax, ebx
        lea edi, [esi + 0x74]
        mov byte ptr [esp + 0x18], 0x2
        je loc_4e5ba9
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e5ba9:
        mov ecx, edi
        mov dword ptr [edi + 0x30], ebx
        mov dword ptr [edi + 0x34], ebx
        mov dword ptr [edi + 0x38], ebx
        call ext_00519CE0
        mov eax, dword ptr [esi + 0x60]
        cmp eax, ebx
        lea edi, [esi + 0x30]
        mov byte ptr [esp + 0x18], 0x1
        je loc_4e5bd1
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e5bd1:
        mov ecx, edi
        mov dword ptr [edi + 0x30], ebx
        mov dword ptr [edi + 0x34], ebx
        mov dword ptr [edi + 0x38], ebx
        call ext_00519CE0
        mov eax, dword ptr [esi + 0x14]
        cmp eax, ebx
        pop edi
        je loc_4e5bf2
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e5bf2:
        mov dword ptr [esi + 0x14], ebx
        mov dword ptr [esi + 0x18], ebx
        mov dword ptr [esi + 0x1c], ebx
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebx
        mov dword ptr [esp + 0x14], 0xffffffff
        je loc_4e5c26
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_0048CB80
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    loc_4e5c26:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004E8050] sub_004E8050 (353 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E8050(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esi], 0x9413f4
        mov eax, dword ptr [esi + 0xdc]
        xor edi, edi
        cmp eax, edi
        je loc_4e806f
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e806f:
        mov dword ptr [esi + 0xdc], edi
        mov dword ptr [esi + 0xe0], edi
        mov dword ptr [esi + 0xe4], edi
        mov eax, dword ptr [esi + 0xc8]
        cmp eax, edi
        je loc_4e8094
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e8094:
        mov dword ptr [esi + 0xc8], edi
        mov dword ptr [esi + 0xcc], edi
        mov dword ptr [esi + 0xd0], edi
        mov eax, dword ptr [esi + 0xb4]
        cmp eax, edi
        je loc_4e80b9
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e80b9:
        mov dword ptr [esi + 0xb4], edi
        mov dword ptr [esi + 0xb8], edi
        mov dword ptr [esi + 0xbc], edi
        mov eax, dword ptr [esi + 0xa0]
        cmp eax, edi
        je loc_4e80de
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e80de:
        mov dword ptr [esi + 0xa0], edi
        mov dword ptr [esi + 0xa4], edi
        mov dword ptr [esi + 0xa8], edi
        mov eax, dword ptr [esi + 0x8c]
        cmp eax, edi
        je loc_4e8103
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e8103:
        mov dword ptr [esi + 0x8c], edi
        mov dword ptr [esi + 0x90], edi
        mov dword ptr [esi + 0x94], edi
        mov eax, dword ptr [esi + 0x78]
        cmp eax, edi
        je loc_4e8125
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e8125:
        mov dword ptr [esi + 0x78], edi
        mov dword ptr [esi + 0x7c], edi
        mov dword ptr [esi + 0x80], edi
        mov eax, dword ptr [esi + 0x64]
        cmp eax, edi
        je loc_4e8141
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e8141:
        mov dword ptr [esi + 0x64], edi
        mov dword ptr [esi + 0x68], edi
        mov dword ptr [esi + 0x6c], edi
        mov eax, dword ptr [esi + 0x50]
        cmp eax, edi
        je loc_4e815a
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e815a:
        mov dword ptr [esi + 0x50], edi
        mov dword ptr [esi + 0x54], edi
        mov dword ptr [esi + 0x58], edi
        mov eax, dword ptr [esi + 0x3c]
        cmp eax, edi
        je loc_4e8173
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e8173:
        mov dword ptr [esi + 0x3c], edi
        mov dword ptr [esi + 0x40], edi
        mov dword ptr [esi + 0x44], edi
        mov eax, dword ptr [esi + 0x28]
        cmp eax, edi
        je loc_4e818c
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e818c:
        mov dword ptr [esi + 0x28], edi
        mov dword ptr [esi + 0x2c], edi
        mov dword ptr [esi + 0x30], edi
        mov eax, dword ptr [esi + 0x8]
        cmp eax, edi
        je loc_4e81a5
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_4e81a5:
        mov dword ptr [esi + 0x8], edi
        mov dword ptr [esi + 0xc], edi
        mov dword ptr [esi + 0x10], edi
        pop edi
        pop esi
        ret
    }
}

// [0x004EC4A0] sub_004EC4A0 (167 bytes)
extern "C" void ext_0049FF90();
extern "C" void ext_004EBE30();
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_004EC4A0(void* self) {
    __asm {
        push -1
        push 0x88ed96
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov [esp + 8], esi
        call ext_0049FF90
        lea edi, [esi + 0x140]
        mov dword ptr [esi], 0x94b9a0
        mov dword ptr [esi + 8], 0x94b904
        mov dword ptr [esi + 0x10], 0x94b8ac
        mov dword ptr [esi + 0x14], 0x94b8a4
        mov dword ptr [esi + 0x18], 0x94b898
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi + 0x13c], 0x94b890
        call ext_004EBE30
        mov [edi + 4], eax
        mov cl, 1
        mov [eax + 0x45], cl
        mov eax, [edi + 4]
        mov [eax + 4], eax
        mov eax, [edi + 4]
        mov [eax], eax
        mov eax, [edi + 4]
        mov [eax + 8], eax
        mov dword ptr [edi + 8], 0
        mov byte ptr [esp + 0x14], cl
        lea ecx, [esi + 0x14c]
        call dword ptr [mem_00924FE8]
        mov ecx, [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004E7B80] sub_004E7B80 (438 bytes)
extern "C" void ext_004E7390();
extern "C" void ext_004E75C0();

extern "C" __declspec(naked) void __fastcall fn_004E7B80(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov eax, ebx
        sub eax, edi
        sar eax, 2
        cdq
        sub eax, edx
        sar eax, 1
        lea esi, [edi + 4*eax]
        mov eax, dword ptr [esp + 0x24]
        push eax
        lea ecx, [ebx - 4]
        push ecx
        push esi
        push edi
        call ext_004E75C0
        add esp, 0x10
        cmp edi, esi
        lea ebp, [esi + 4]
        jae loc_4E7BE5

    loc_4E7BB6:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi - 4]
        push edx
        push eax
        lea ecx, [esp + 0x2c]
        call ext_004E7390
        test al, al
        jne loc_4E7BE5
        mov ecx, dword ptr [esi - 4]
        mov edx, dword ptr [esi]
        push ecx
        push edx
        lea ecx, [esp + 0x2c]
        call ext_004E7390
        test al, al
        jne loc_4E7BE5
        add esi, -4
        cmp edi, esi
        jb loc_4E7BB6

    loc_4E7BE5:
        cmp ebp, ebx
        jae loc_4E7C1F
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

    loc_4E7BF0:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [ebp]
        push eax
        push ecx
        lea ecx, [esp + 0x2c]
        call ext_004E7390
        test al, al
        jne loc_4E7C1F
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [esi]
        push edx
        push eax
        lea ecx, [esp + 0x2c]
        call ext_004E7390
        test al, al
        jne loc_4E7C1F
        add ebp, 4
        cmp ebp, ebx
        jb loc_4E7BF0

    loc_4E7C1F:
        mov edi, ebp
        mov ebx, esi

    loc_4E7C23:
        cmp edi, dword ptr [esp + 0x20]
        jae loc_4E7C6C
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

    loc_4E7C30:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [esi]
        push ecx
        push edx
        lea ecx, [esp + 0x2c]
        call ext_004E7390
        test al, al
        jne loc_4E7C63
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [edi]
        push eax
        push ecx
        lea ecx, [esp + 0x2c]
        call ext_004E7390
        test al, al
        jne loc_4E7C6C
        mov edx, dword ptr [edi]
        mov eax, ebp
        mov ecx, dword ptr [eax]
        mov dword ptr [eax], edx
        add ebp, 4
        mov dword ptr [edi], ecx

    loc_4E7C63:
        add edi, 4
        cmp edi, dword ptr [esp + 0x20]
        jb loc_4E7C30

    loc_4E7C6C:
        cmp ebx, dword ptr [esp + 0x1c]
        jbe loc_4E7CB5

    loc_4E7C72:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [ebx - 4]
        push eax
        push ecx
        lea ecx, [esp + 0x2c]
        call ext_004E7390
        test al, al
        jne loc_4E7CA8
        mov edx, dword ptr [ebx - 4]
        mov eax, dword ptr [esi]
        push edx
        push eax
        lea ecx, [esp + 0x2c]
        call ext_004E7390
        test al, al
        jne loc_4E7CB1
        mov ecx, dword ptr [ebx - 4]
        mov eax, dword ptr [esi - 4]
        sub esi, 4
        mov dword ptr [esi], ecx
        mov dword ptr [ebx - 4], eax

    loc_4E7CA8:
        add ebx, -4
        cmp dword ptr [esp + 0x1c], ebx
        jb loc_4E7C72

    loc_4E7CB1:
        cmp ebx, dword ptr [esp + 0x1c]

    loc_4E7CB5:
        jne loc_4E7CED
        cmp edi, dword ptr [esp + 0x20]
        je loc_4E7D27
        cmp ebp, edi
        je loc_4E7CCB
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], edx
        mov dword ptr [ebp], eax

    loc_4E7CCB:
        mov ecx, esi
        mov edx, dword ptr [ecx]
        mov eax, edi
        mov dword ptr [esp + 0x10], edx
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov ecx, dword ptr [esp + 0x10]
        add ebp, 4
        add esi, 4
        add edi, 4
        mov dword ptr [eax], ecx
        jmp loc_4E7C23

    loc_4E7CED:
        sub ebx, 4
        cmp edi, dword ptr [esp + 0x20]
        jne loc_4E7D17
        sub esi, 4
        cmp ebx, esi
        je loc_4E7D05
        mov edx, dword ptr [esi]
        mov eax, dword ptr [ebx]
        mov dword ptr [ebx], edx
        mov dword ptr [esi], eax

    loc_4E7D05:
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [esi]
        sub ebp, 4
        mov dword ptr [esi], ecx
        mov dword ptr [ebp], eax
        jmp loc_4E7C23

    loc_4E7D17:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [ebx]
        mov dword ptr [edi], edx
        mov dword ptr [ebx], eax
        add edi, 4
        jmp loc_4E7C23

    loc_4E7D27:
        mov eax, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 4], ebp
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x004EBAB0] sub_004EBAB0 (457 bytes)
extern "C" void ext_00427A60();
extern "C" void ext_00435D00();
extern "C" void ext_0063EFE0();
extern "C" int mem_00924E4C;
extern "C" int mem_00925134;
extern "C" int mem_00AA2350;
extern "C" int mem_00924FC0;
extern "C" int mem_00924E90;
extern "C" int mem_00924E98;
extern "C" int mem_00AA23B8;
extern "C" int mem_00924E94;
extern "C" int mem_00924FF4;
extern "C" int mem_00924E54;
extern "C" int mem_00924FDC;
extern "C" int mem_00924E58;

extern "C" __declspec(naked) void __fastcall fn_004EBAB0(void* self) {
    __asm {
        push -1
        push 0x88ed54
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xb4
        push ebx
        push ebp
        push esi
        push edi
        push 1
        push 2
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_00924E4C]
        mov esi, dword ptr [esp + 0xd4]
        mov edi, dword ptr [esi + 0x28]
        add esi, 0x24
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0xcc], 0
        mov bl, 1
        jbe L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        lea ecx, [esp + 0x1c]
    L_loop_call:
        call ext_00427A60
        mov ebp, dword ptr [esp + 0x14]
        test ebp, ebp
        je L_bad1
        cmp ebp, dword ptr [esp + 0x20]
        je L_good1
    L_bad1:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp L_after1
    L_good1:
        mov esi, dword ptr [mem_00925134]
    L_after1:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, dword ptr [esp + 0x24]
        jae L_end
        test ebp, ebp
        jne L_nz
        call esi
    L_nz:
        cmp edi, dword ptr [ebp + 0x8]
        jb L_nb
        call esi
    L_nb:
        mov esi, dword ptr [edi]
        mov ecx, dword ptr [mem_00AA2350]
        lea eax, [esi + 0x4]
        push ecx
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_skip
        test bl, bl
        jne L_nob
        mov edx, dword ptr [mem_00924E90]
        push edx
        lea eax, [esp + 0x48]
        push 0x92f14c
        push eax
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
    L_nob:
        mov ecx, dword ptr [mem_00AA23B8]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, eax
        call edx
        push eax
        lea eax, [esp + 0x48]
        push eax
        mov byte ptr [esp + 0xd4], 1
        call dword ptr [mem_00924E94]
        add esp, 0x8
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xcc], 0
        call dword ptr [mem_00924FF4]
        xor bl, bl
    L_skip:
        cmp edi, dword ptr [ebp + 0x8]
        jb L_nb2
        call dword ptr [mem_00925134]
    L_nb2:
        add edi, 0x4
        mov dword ptr [esp + 0x18], edi
        lea ecx, [esp + 0x10]
        jmp L_loop_call
    L_end:
        lea ecx, [esp + 0x28]
        push ecx
        lea ecx, [esp + 0x48]
        call dword ptr [mem_00924E54]
        mov ecx, dword ptr [esp + 0xd8]
        push eax
        mov byte ptr [esp + 0xd0], 2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xcc], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0xcc], 0xffffffff
        call dword ptr [mem_00924E58]
        mov ecx, dword ptr [esp + 0xc4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xc0
        ret
    }
}

// [0x004EFF80] sub_004EFF80 (446 bytes)
extern "C" void ext_00419F50();
extern "C" void ext_0045E770();
extern "C" void ext_0055C4E0();
extern "C" void ext_0055C5D0();
extern "C" void ext_00666980();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004EFF80(void* self) {
    __asm {
        sub esp, 0x0C
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x08], 0
        push edi
        jne loc_4EFFAE

        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esi + 0x04]
        mov edi, dword ptr [esp + 0x18]
        push eax
        push ecx
        push 1
        push edi
        mov ecx, esi
        call ext_0055C5D0
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x0C
        ret 0x10

    loc_4EFFAE:
        mov edx, dword ptr [esi + 0x04]
        mov edi, dword ptr [edx]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
        test ebp, ebp
        je loc_4EFFC0
        cmp ebp, esi
        je loc_4EFFC6

    loc_4EFFC0:
        call dword ptr [mem_00925134]

    loc_4EFFC6:
        push ebx
        mov ebx, dword ptr [esp + 0x28]
        cmp ebx, edi
        jne loc_4EFFFA
        mov edi, dword ptr [esp + 0x2C]
        mov eax, dword ptr [edi]
        cmp eax, dword ptr [ebx + 0x0C]
        jae loc_4F0117
        push edi
        mov edi, dword ptr [esp + 0x24]
        push ebx
        push 1
        push edi
        mov ecx, esi
        call ext_0055C5D0
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x0C
        ret 0x10

    loc_4EFFFA:
        test ebp, ebp
        mov edi, dword ptr [esi + 0x04]
        je loc_4F0005
        cmp ebp, esi
        je loc_4F000B

    loc_4F0005:
        call dword ptr [mem_00925134]

    loc_4F000B:
        cmp ebx, edi
        mov edi, dword ptr [esp + 0x2C]
        jne loc_4F0040
        mov ecx, dword ptr [esi + 0x04]
        mov eax, dword ptr [ecx + 0x08]
        mov edx, dword ptr [eax + 0x0C]
        cmp edx, dword ptr [edi]
        jae loc_4F0117
        push edi
        mov edi, dword ptr [esp + 0x24]
        push eax
        push 0
        push edi
        mov ecx, esi
        call ext_0055C5D0
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x0C
        ret 0x10

    loc_4F0040:
        mov eax, dword ptr [edi]
        cmp dword ptr [ebx + 0x0C], eax
        jbe loc_4F00A2
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x24], ebp
        mov dword ptr [esp + 0x28], ebx
        call ext_0055C4E0
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esp + 0x28]
        cmp dword ptr [ecx + 0x0C], eax
        jae loc_4F009F
        mov eax, dword ptr [ecx + 0x08]
        cmp byte ptr [eax + 0x15], 0
        push edi
        mov edi, dword ptr [esp + 0x24]
        je loc_4F0088
        push ecx
        push 0
        push edi
        mov ecx, esi
        call ext_0055C5D0
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x0C
        ret 0x10

    loc_4F0088:
        push ebx
        push 1
        push edi
        mov ecx, esi
        call ext_0055C5D0
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x0C
        ret 0x10

    loc_4F009F:
        cmp dword ptr [ebx + 0x0C], eax

    loc_4F00A2:
        jae loc_4F0117
        mov ecx, dword ptr [esi + 0x04]
        mov dword ptr [esp + 0x14], ecx
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x24], ebp
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x10], esi
        call ext_00419F50
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esp + 0x28]
        call ext_00666980
        test al, al
        mov eax, dword ptr [esp + 0x28]
        jne loc_4F00DD
        mov ecx, dword ptr [edi]
        cmp ecx, dword ptr [eax + 0x0C]
        jae loc_4F0117

    loc_4F00DD:
        mov edx, dword ptr [ebx + 0x08]
        cmp byte ptr [edx + 0x15], 0
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov ecx, esi
        je loc_4F0102
        push ebx
        push 0
        push edi
        call ext_0055C5D0
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x0C
        ret 0x10

    loc_4F0102:
        push eax
        push 1
        push edi
        call ext_0055C5D0
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x0C
        ret 0x10

    loc_4F0117:
        push edi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_0045E770
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x20]
        pop ebx
        pop ebp
        mov dword ptr [ecx], edx
        mov eax, dword ptr [eax + 0x04]
        pop edi
        mov dword ptr [ecx + 0x04], eax
        mov eax, ecx
        pop esi
        add esp, 0x0C
        ret 0x10
    }
}

// [0x004EBE70] sub_004EBE70 (740 bytes)
extern "C" void ext_0046FB80();
extern "C" void ext_0046FBA0();
extern "C" void ext_0046FFE0();
extern "C" void ext_00470030();
extern "C" void ext_00470120();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004EBE70(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a0d5b
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x4c
        cmp byte ptr [eax + 0x45], 0x0
        push ebp
        mov ebp, ecx
        je L_4ebeee
        push 0x929218
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x58], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x5c], 0x1
        mov dword ptr [esp + 0x2c], 0x928ecc
        call dword ptr [mem_00924FE0]
        push 0x9ce164
        lea ecx, [esp + 0x2c]
        push ecx
        mov byte ptr [esp + 0x60], 0x0
        mov dword ptr [esp + 0x30], 0x928ee4
        call ext_006A6DD2

    L_4ebeee:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x10], ebx
        call ext_00470120
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x45], 0x0
        je L_4ebf0d
        mov edi, dword ptr [ebx + 0x8]
        jmp L_4ebf25

    L_4ebf0d:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0x45], 0x0
        je L_4ebf1a
        mov edi, eax
        jmp L_4ebf25

    L_4ebf1a:
        mov ecx, dword ptr [esp + 0x74]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 0x8]
        jne L_4ebf90

    L_4ebf25:
        cmp byte ptr [edi + 0x45], 0x0
        mov esi, dword ptr [ebx + 0x4]
        jne L_4ebf31
        mov dword ptr [edi + 0x4], esi

    L_4ebf31:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_4ebf3e
        mov dword ptr [eax + 0x4], edi
        jmp L_4ebf49

    L_4ebf3e:
        cmp dword ptr [esi], ebx
        jne L_4ebf46
        mov dword ptr [esi], edi
        jmp L_4ebf49

    L_4ebf46:
        mov dword ptr [esi + 0x8], edi

    L_4ebf49:
        mov ebx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 0x10]
        jne L_4ebf69
        cmp byte ptr [edi + 0x45], 0x0
        je L_4ebf5e
        mov eax, esi
        jmp L_4ebf67

    L_4ebf5e:
        push edi
        call ext_0046FBA0
        add esp, 0x4

    L_4ebf67:
        mov dword ptr [ebx], eax

    L_4ebf69:
        mov ebx, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        cmp dword ptr [ebx + 0x8], ecx
        jne L_4ebfe7
        cmp byte ptr [edi + 0x45], 0x0
        je L_4ebf82
        mov eax, esi
        mov dword ptr [ebx + 0x8], eax
        jmp L_4ebfe7

    L_4ebf82:
        push edi
        call ext_0046FB80
        add esp, 0x4
        mov dword ptr [ebx + 0x8], eax
        jmp L_4ebfe7

    L_4ebf90:
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 0x8]
        jne L_4ebfa0
        mov esi, ecx
        jmp L_4ebfba

    L_4ebfa0:
        cmp byte ptr [edi + 0x45], 0x0
        mov esi, dword ptr [ecx + 0x4]
        jne L_4ebfac
        mov dword ptr [edi + 0x4], esi

    L_4ebfac:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x4], ecx

    L_4ebfba:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_4ebfc7
        mov dword ptr [eax + 0x4], ecx
        jmp L_4ebfd5

    L_4ebfc7:
        mov eax, dword ptr [ebx + 0x4]
        cmp dword ptr [eax], ebx
        jne L_4ebfd2
        mov dword ptr [eax], ecx
        jmp L_4ebfd5

    L_4ebfd2:
        mov dword ptr [eax + 0x8], ecx

    L_4ebfd5:
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov dl, byte ptr [ebx + 0x44]
        mov al, byte ptr [ecx + 0x44]
        mov byte ptr [ecx + 0x44], dl
        mov byte ptr [ebx + 0x44], al

    L_4ebfe7:
        mov eax, dword ptr [esp + 0x10]
        mov bl, 0x1
        cmp byte ptr [eax + 0x44], bl
        jne L_4ec0e8
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx + 0x4]
        je L_4ec0e5

    L_4ec002:
        cmp byte ptr [edi + 0x44], bl
        jne L_4ec0e5
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L_4ec074
        mov eax, dword ptr [esi + 0x8]
        cmp byte ptr [eax + 0x44], 0x0
        jne L_4ec02c
        mov byte ptr [eax + 0x44], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x44], 0x0
        call ext_0046FFE0
        mov eax, dword ptr [esi + 0x8]

    L_4ec02c:
        cmp byte ptr [eax + 0x45], 0x0
        jne L_4ec0a4
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0x44], bl
        jne L_4ec041
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x44], bl
        je L_4ec0a0

    L_4ec041:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x44], bl
        jne L_4ec05b
        mov byte ptr [edx + 0x44], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x44], 0x0
        call ext_00470030
        mov eax, dword ptr [esi + 0x8]

    L_4ec05b:
        mov cl, byte ptr [esi + 0x44]
        mov byte ptr [eax + 0x44], cl
        mov byte ptr [esi + 0x44], bl
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x44], bl
        call ext_0046FFE0
        jmp L_4ec0e5

    L_4ec074:
        cmp byte ptr [eax + 0x44], 0x0
        jne L_4ec08b
        mov byte ptr [eax + 0x44], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x44], 0x0
        call ext_00470030
        mov eax, dword ptr [esi]

    L_4ec08b:
        cmp byte ptr [eax + 0x45], 0x0
        jne L_4ec0a4
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x44], bl
        jne L_4ec0b7
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x44], bl
        jne L_4ec0b7

    L_4ec0a0:
        mov byte ptr [eax + 0x44], 0x0

    L_4ec0a4:
        mov edx, dword ptr [ebp + 0x4]
        mov edi, esi
        cmp edi, dword ptr [edx + 0x4]
        mov esi, dword ptr [esi + 0x4]
        jne L_4ec002
        jmp L_4ec0e5

    L_4ec0b7:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x44], bl
        jne L_4ec0cf
        mov byte ptr [edx + 0x44], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x44], 0x0
        call ext_0046FFE0
        mov eax, dword ptr [esi]

    L_4ec0cf:
        mov cl, byte ptr [esi + 0x44]
        mov byte ptr [eax + 0x44], cl
        mov byte ptr [esi + 0x44], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x44], bl
        call ext_00470030

    L_4ec0e5:
        mov byte ptr [edi + 0x44], bl

    L_4ec0e8:
        mov esi, dword ptr [esp + 0x10]
        add esi, 0xc
        mov dword ptr [esp + 0x14], esi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x64], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x64], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_006A5C5C
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0x4
        test eax, eax
        pop edi
        pop esi
        pop ebx
        jbe L_4ec131
        add eax, -0x1
        mov dword ptr [ebp + 0x8], eax

    L_4ec131:
        mov ecx, dword ptr [esp + 0x64]
        mov eax, dword ptr [esp + 0x60]
        mov edx, dword ptr [esp + 0x68]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x50]
        mov dword ptr [eax + 0x4], edx
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0xc
    }
}

// [0x004E9B30] sub_004E9B30 (37 bytes)
extern "C" void ext_004E8F70(void* a, void* b);

extern "C" void* __fastcall fn_004E9B30(void* self) {
    char* base = (char*)self;
    char* esi = base + 0x9c;
    if (base[0xac] != 0) {
        ext_004E8F70(base + 4, esi);
        esi[0x10] = 0;
    }
    return esi;
}

// [0x004EDC60] sub_004EDC60 (42 bytes)
extern "C" int mem_00B599BC;
extern "C" void ext_004ED7D0();

extern "C" __declspec(naked) void __fastcall fn_004EDC60(void* self, int edx_unused, int a1) {
    __asm {
        push    ecx
        sub     esp, 8
        mov     eax, esp
        mov     dword ptr [eax], 0
        mov     edx, dword ptr [mem_00B599BC]
        mov     dword ptr [eax+4], edx
        mov     eax, dword ptr [esp+10h]
        mov     dword ptr [esp+8], esp
        push    eax
        add     ecx, 8
        call    ext_004ED7D0
        pop     ecx
        ret     4
    }
}

// [0x004EC2C0] sub_004EC2C0 (52 bytes)
extern "C" void ext_004EC1F0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004EC2C0(void* self) {
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
        call ext_004EC1F0
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

// [0x004E8340] sub_004E8340 (58 bytes)
extern "C" void ext_004AFF30();
extern "C" void ext_004E7490();
extern "C" void ext_004E7EC0();

extern "C" __declspec(naked) void __fastcall fn_004E8340(void* self, int edx_unused, void* src) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_004E7EC0
        mov edi, dword ptr [esp + 0xc]
        push edi
        lea ecx, [esi + 0x4]
        call ext_004AFF30
        mov al, byte ptr [edi + 0x1c]
        mov byte ptr [esi + 0x20], al
        mov ecx, dword ptr [edi + 0x10]
        mov dword ptr [esi + 0x14], ecx
        mov edx, dword ptr [edi + 0x14]
        mov dword ptr [esi + 0x18], edx
        mov eax, dword ptr [edi + 0x18]
        mov ecx, esi
        mov dword ptr [esi + 0x1c], eax
        call ext_004E7490
        pop edi
        pop esi
        ret 0x4
    }
}

extern "C" void ext_0048CCC0();
extern "C" void ext_004E3140();
extern "C" int mem_00925134;

// [0x004E5990] sub_004E5990 (330 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E5990(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x1a4]
        push edi
        xor edi, edi
        cmp ecx, edi
        je lbl1
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    lbl1:
        mov dword ptr [esi + 0x1a4], edi
        mov ecx, dword ptr [esi + 0x1a8]
        cmp ecx, edi
        je lbl2
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    lbl2:
        mov ebx, dword ptr [mem_00925134]
        mov dword ptr [esi + 0x1a8], edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe lbl3
        call ebx
    lbl3:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe lbl4
        call ebx
    lbl4:
        push edi
        push esi
        push ebp
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0048CCC0
        mov edx, dword ptr [esi + 0x30]
        mov eax, dword ptr [edx + 0xc]
        lea ecx, [esi + 0x30]
        call eax
        mov edx, dword ptr [esi + 0x74]
        mov eax, dword ptr [edx + 0xc]
        lea ecx, [esi + 0x74]
        call eax
        mov edx, dword ptr [esi + 0xb8]
        mov eax, dword ptr [edx + 0xc]
        lea ecx, [esi + 0xb8]
        call eax
        mov edx, dword ptr [esi + 0xfc]
        mov eax, dword ptr [edx + 0xc]
        lea ecx, [esi + 0xfc]
        call eax
        fld1
        mov byte ptr [esi + 0x160], 0x0
        fst dword ptr [esi + 0x164]
        fldz
        lea edi, [esi + 0x10]
        fst dword ptr [esi + 0x168]
        fst dword ptr [esi + 0x16c]
        fst dword ptr [esi + 0x170]
        fst dword ptr [esi + 0x174]
        fst dword ptr [esi + 0x17c]
        fst dword ptr [esi + 0x180]
        fst dword ptr [esi + 0x184]
        fst dword ptr [esi + 0x188]
        fst dword ptr [esi + 0x190]
        fst dword ptr [esi + 0x194]
        fst dword ptr [esi + 0x198]
        fstp dword ptr [esi + 0x19c]
        fst dword ptr [esi + 0x178]
        fst dword ptr [esi + 0x18c]
        fstp dword ptr [esi + 0x1a0]
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe lbl5
        call ebx
    lbl5:
        mov ebx, dword ptr [edi + 0x4]
        cmp ebx, dword ptr [edi + 0x8]
        jbe lbl6
        call dword ptr [mem_00925134]
    lbl6:
        push ebp
        push edi
        push ebx
        push edi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, edi
        call ext_004E3140
        fldz
        pop edi
        fst dword ptr [esi + 0x28]
        fstp dword ptr [esi + 0x2c]
        mov dword ptr [esi + 0x20], 0x0
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x004EC460] sub_004EC460 (59 bytes)
extern "C" void ext_004EC1F0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004EC460(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x94b890
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_004EC1F0
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

// [0x004EB950] sub_004EB950 (85 bytes)
extern "C" void ext_004EB600();
extern "C" void ext_004EB6B0();
extern "C" void ext_004EB760();
extern "C" void ext_004EB810();
extern "C" void ext_004EB8C0();
extern "C" int mem_00A9F6A8;
extern "C" int mem_00A9F574;
extern "C" int mem_00A9F6A4;
extern "C" int mem_00A9F8BC;
extern "C" __declspec(naked) void __fastcall fn_004EB950(void* self) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0x94b83c
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_004EB8C0
        mov     ecx, dword ptr [mem_00A9F6A8]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_004EB600
        mov     edx, dword ptr [mem_00A9F574]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_004EB6B0
        mov     eax, dword ptr [mem_00A9F6A4]
        push    eax
        lea     ecx, [esp + 0x4]
        call    ext_004EB760
        mov     ecx, dword ptr [mem_00A9F8BC]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_004EB810
        pop     ecx
        ret
    }
}

// [0x004EE590] sub_004EE590 (98 bytes)
extern "C" void ext_004DA180();
extern "C" void ext_004EDC90();
extern "C" int mem_00924FE8;
extern "C" int mem_00925134;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_004EE590(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        push edi
        sub esp, 1Ch
        mov edi, ecx
        mov ecx, esp
        mov dword ptr [esp + 24h], esp
        call dword ptr [mem_00924FE8]
        lea esi, [edi + 3Ch]
        push 1
        mov ecx, esi
        call ext_004DA180
        mov eax, dword ptr [esi + 4]
        test eax, eax
        je L_invalid_590
        mov ecx, dword ptr [esi + 8]
        sub ecx, eax
        mov eax, 92492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1Fh
        add eax, edx
        jne L_ok_590
L_invalid_590:
        call dword ptr [mem_00925134]
L_ok_590:
        mov ecx, dword ptr [esp + 10h]
        push ecx
        mov ecx, dword ptr [esi + 4]
        call dword ptr [mem_00924FDC]
        mov ecx, edi
        call ext_004EDC90
        pop edi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x004EFA50] sub_004EFA50 (98 bytes)
extern "C" void ext_00676C90();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004EFA50(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
    f4efa50_top:
        test esi, esi
        je f4efa50_call1
        cmp esi, dword ptr [esp + 0x1c]
        je f4efa50_after1
    f4efa50_call1:
        call ebp
    f4efa50_after1:
        cmp ebx, dword ptr [esp + 0x20]
        je f4efa50_ret
        test esi, esi
        mov edi, ebx
        jne f4efa50_a
        call ebp
    f4efa50_a:
        cmp ebx, dword ptr [esi + 0x8]
        jb f4efa50_b
        call ebp
    f4efa50_b:
        add ebx, 0x4
        test esi, esi
        jne f4efa50_c
        call ebp
    f4efa50_c:
        cmp edi, dword ptr [esi + 0x8]
        jb f4efa50_d
        call ebp
    f4efa50_d:
        mov edi, dword ptr [edi]
        test edi, edi
        je f4efa50_top
        mov ecx, edi
        call ext_00676C90
        push edi
        call ext_006A5C5C
        add esp, 0x4
        jmp f4efa50_top
    f4efa50_ret:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x004EFE80] sub_004EFE80 (121 bytes)
extern "C" void ext_004EFA50();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004EFE80(void* self) {
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
        call ext_004EFA50
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

// [0x004E94C0] sub_004E94C0 (127 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004E94C0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        push edi
        jbe L_4e94d8
        call ebp
    L_4e94d8:
        mov edi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], edi
        jbe L_4e94e2
        call ebp
    L_4e94e2:
        cmp esi, edi
        je L_4e953a
        cmp esi, dword ptr [ebx + 0x8]
        jb L_4e94ed
        call ebp
    L_4e94ed:
        mov eax, dword ptr [esi]
        cmp dword ptr [eax + 0x8], 0
        je L_4e952e
        cmp esi, dword ptr [ebx + 0x8]
        jb L_4e94fc
        call ebp
    L_4e94fc:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0x8]
        push 0
        push 0xa2e2d8
        push 0xa2e35c
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        mov dword ptr [esp + 0x14], eax
        je L_4e952e
        mov ecx, dword ptr [esp + 0x18]
        lea edx, [esp + 0x14]
        push edx
        call ext_0041A920
    L_4e952e:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_4e9535
        call ebp
    L_4e9535:
        add esi, 4
        jmp L_4e94d8
    L_4e953a:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004E89E0] sub_004E89E0 (199 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00596660();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" int mem_00A2E2D8;
extern "C" int mem_00A2E2F8;

extern "C" __declspec(naked) void __fastcall fn_004E89E0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], esi
        push edi
        mov ebx, ecx
        jbe L_004E89FB
        call dword ptr [mem_00925134]
    L_004E89FB:
        mov edi, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ebp + 0x8]
        jbe L_004E8A09
        call dword ptr [mem_00925134]
    L_004E8A09:
        push esi
        push ebp
        push edi
        push ebp
        lea eax, [esp + 0x20]
        push eax
        mov ecx, ebp
        call ext_00596660
        mov ebp, dword ptr [esp + 0x1c]
        mov esi, dword ptr [ebp + 0x4]
        cmp esi, dword ptr [ebp + 0x8]
        jbe L_004E8A30
        call dword ptr [mem_00925134]
        jmp L_004E8A30
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_004E8A30:
        mov edi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], edi
        jbe L_004E8A3E
        call dword ptr [mem_00925134]
    L_004E8A3E:
        cmp esi, edi
        je L_004E8A9D
        cmp esi, dword ptr [ebp + 0x8]
        jb L_004E8A4D
        call dword ptr [mem_00925134]
    L_004E8A4D:
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 0x18]
        push 0x0
        push offset mem_00A2E2D8
        push offset mem_00A2E2F8
        push 0x0
        push 0x0
        push 0x0
        push eax
        push esi
        mov ecx, ebx
        call edx
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        mov dword ptr [esp + 0x1c], eax
        je L_004E8A8D
        mov ecx, dword ptr [esp + 0x20]
        lea eax, [esp + 0x1c]
        push eax
        call ext_0041A920
    L_004E8A8D:
        cmp esi, dword ptr [ebp + 0x8]
        jb L_004E8A98
        call dword ptr [mem_00925134]
    L_004E8A98:
        add esi, 0x1c
        jmp L_004E8A30
    L_004E8A9D:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0xc
    }
}

// [0x004E9540] sub_004E9540 (230 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00584C20();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004E9540(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ebx + 4]
        cmp esi, dword ptr [ebx + 8]
        push edi
        jbe L_top
        call ebp
L_top:
        mov edi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], edi
        jbe L_chk2
        call ebp
L_chk2:
        cmp esi, edi
        je L_end
        cmp esi, dword ptr [ebx + 8]
        jb L_c3
        call ebp
L_c3:
        mov eax, dword ptr [esi]
        cmp dword ptr [eax + 8], 0
        je L_next
        cmp esi, dword ptr [ebx + 8]
        jb L_c4
        call ebp
L_c4:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 8]
        push 0
        push 0xa2e2d8
        push 0xa2e35c
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        cmp esi, dword ptr [ebx + 8]
        mov edi, eax
        mov dword ptr [esp + 0x14], edi
        jb L_c5
        call ebp
L_c5:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        push 0
        push 0xa2e2bc
        push 0xa2e35c
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test edi, edi
        je L_next
        test eax, eax
        je L_next
        mov ecx, eax
        call ext_00584C20
        test al, al
        je L_next
        mov ecx, dword ptr [esp + 0x1c]
        lea eax, [esp + 0x14]
        push eax
        call ext_0041A920
L_next:
        cmp esi, dword ptr [ebx + 8]
        jb L_c6
        call ebp
L_c6:
        add esi, 4
        jmp L_top
L_end:
        mov edx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        mov ecx, edx
        xor eax, eax
        and ecx, 8
        pop ebp
        pop ebx
        je L_r1
        test dl, 4
        je L_r1
        mov eax, 3
        ret
L_r1:
        test ecx, ecx
        je L_r2
        mov eax, 1
        ret
L_r2:
        test dl, 4
        je L_r3
        mov eax, 2
L_r3:
        ret
    }
}

// [0x004E8380] sub_004E8380 (279 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00596660();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004E8380(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], esi
        push edi
        jbe L_4E839B
        call ebp
    L_4E839B:
        mov edi, dword ptr [ebx + 4]
        cmp edi, dword ptr [ebx + 8]
        jbe L_4E83A5
        call ebp
    L_4E83A5:
        push esi
        push ebx
        push edi
        push ebx
        lea eax, [esp + 0x20]
        push eax
        mov ecx, ebx
        call ext_00596660
        mov edi, dword ptr [esp + 0x28]
        mov esi, dword ptr [edi + 4]
        cmp esi, dword ptr [edi + 8]
        jbe L_4E83C3
        call ebp
    L_4E83C3:
        mov ebx, esi
    L_4E83C5:
        mov esi, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], esi
        mov dword ptr [esp + 0x14], ebx
        jbe L_4E83D3
        call ebp
    L_4E83D3:
        cmp ebx, esi
        je L_4E848F
        cmp ebx, dword ptr [edi + 8]
        jb L_4E83E2
        call ebp
    L_4E83E2:
        mov ecx, dword ptr [ebx]
        mov ebp, dword ptr [ecx + 0x94]
        test ebp, ebp
        je L_4E845B
        mov edi, edi
    L_4E83F0:
        mov eax, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], eax
        mov dword ptr [esp + 0x28], eax
        jbe L_4E8402
        call dword ptr [mem_00925134]
    L_4E8402:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe L_4E8410
        call dword ptr [mem_00925134]
    L_4E8410:
        mov esi, dword ptr [edi + 4]
        cmp esi, dword ptr [edi + 8]
        jbe L_4E841E
        call dword ptr [mem_00925134]
    L_4E841E:
        cmp esi, ebx
        mov eax, edi
        mov dword ptr [esp + 0x1C], esi
        je L_4E8433
    L_4E8428:
        cmp dword ptr [esi], ebp
        je L_4E8433
        add esi, 4
        cmp esi, ebx
        jne L_4E8428
    L_4E8433:
        test eax, eax
        je L_4E843B
        cmp eax, edi
        je L_4E8441
    L_4E843B:
        call dword ptr [mem_00925134]
    L_4E8441:
        cmp esi, dword ptr [esp + 0x28]
        jne L_4E8453
        mov ebp, dword ptr [ebp + 0x94]
        test ebp, ebp
        jne L_4E83F0
        jmp L_4E8457
    L_4E8453:
        test ebp, ebp
        jne L_4E8472
    L_4E8457:
        mov ebx, dword ptr [esp + 0x14]
    L_4E845B:
        cmp ebx, dword ptr [edi + 8]
        jb L_4E8466
        call dword ptr [mem_00925134]
    L_4E8466:
        mov ecx, dword ptr [esp + 0x24]
        push ebx
        call ext_0041A920
        jmp L_4E8476
    L_4E8472:
        mov ebx, dword ptr [esp + 0x14]
    L_4E8476:
        cmp ebx, dword ptr [edi + 8]
        jb L_4E8481
        call dword ptr [mem_00925134]
    L_4E8481:
        mov ebp, dword ptr [mem_00925134]
        add ebx, 4
        jmp L_4E83C5
    L_4E848F:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x004E9CB0] sub_004E9CB0 (182 bytes)
extern "C" void ext_00640110();
extern "C" void ext_00640A80();
extern "C" int mem_00A9F6A8;
extern "C" int mem_00A9F574;
extern "C" int mem_00A9F6A4;
extern "C" int mem_00A9F484;
extern "C" int mem_00A9F8BC;
extern "C" int mem_00A9F694;

extern "C" __declspec(naked) void __fastcall fn_004E9CB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F6A8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x4]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9F574]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x5]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9F6A4]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x6]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9F484]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x8]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9F8BC]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x9]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9F694]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x7]
        push ecx
        push eax
        call ext_00640A80
        add esp, 0x8
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

extern "C" void ext_0041CE40();
extern "C" void ext_0051AC30();
extern "C" void ext_0051AD40();
extern "C" void ext_005DF910();
extern "C" void ext_00660A50();
extern "C" void ext_00672080();
extern "C" void ext_006720C0();
extern "C" void ext_006720E0();
extern "C" void ext_00672150();
extern "C" void ext_0067E510();
extern "C" void ext_00693DB0();
extern "C" void ext_006944D0();
extern "C" void ext_0088DCBF();
extern "C" int mem_00996B98;
extern "C" int mem_00A3D6C8;
extern "C" int mem_0092C180;
extern "C" int mem_00949D34;
extern "C" int mem_00A8F2B4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" int mem_0093E0FC;
extern "C" int mem_0093E0EC;
extern "C" int mem_0093E0D8;
extern "C" int mem_0093E0C4;
extern "C" int mem_00A8F2B8;

// [0x004E27A0] sub_004E27A0 (2111 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E27A0(void* self) {
    __asm {
        push	ebp
        mov	ebp, esp
        and	esp, -0x8
        push	-0x1
        push offset ext_0088DCBF
        mov	eax, dword ptr fs:[0x0]
        push	eax
        mov	dword ptr fs:[0x0], esp
        sub	esp, 0x128
        fld	dword ptr [ebp + 0x8]
        push	ebx
        fmul	qword ptr [mem_00996B98]
        push	esi
        mov	ebx, ecx
        push	edi
        fstp	dword ptr [esp + 0x10]
        mov	dword ptr [esp + 0x14], ebx
        fld	dword ptr [esp + 0x10]
        mov	byte ptr [esp + 0xf], 0x1
        fld	qword ptr [mem_00A3D6C8]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x5
        jnp short loc_004E27F4
        mov	byte ptr [esp + 0xf], 0x0
        loc_004E27F4:
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x1c]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne short loc_004E2809
        fstp	st(1)
        jmp short loc_004E281E
        loc_004E2809:
        fstp	st(0)
        fcomp	qword ptr [mem_0092C180]
        fnstsw	ax
        test	ah, 0x41
        jne short loc_004E2822
        fld	dword ptr [mem_00949D34]
        loc_004E281E:
        fstp	dword ptr [esp + 0x10]
        loc_004E2822:
        mov	eax, dword ptr [mem_00A8F2B4]
        push	eax
        lea	ecx, [esp + 0xb8]
        mov	byte ptr [esp + 0x12], 0x0
        call	dword ptr [mem_00924FE4]
        mov	ecx, dword ptr [ebx + 0x20]
        lea	edx, [esp + 0xb4]
        add	ecx, 0x28
        push	edx
        mov	dword ptr [esp + 0x140], 0x0
        call ext_005DF910
        lea	ecx, [esp + 0xb4]
        mov	byte ptr [esp + 0x1b], al
        mov	dword ptr [esp + 0x13c], 0xffffffff
        call	dword ptr [mem_00924FF4]
        cmp	byte ptr [esp + 0x1b], 0x0
        je short loc_004E2880
        mov	byte ptr [esp + 0xe], 0x1
        loc_004E2880:
        mov	edi, dword ptr [ebx + 0x14]
        cmp	edi, dword ptr [ebx + 0x18]
        lea	esi, [ebx + 0x10]
        jbe short loc_004E2891
        call	dword ptr [mem_00925134]
        loc_004E2891:
        mov	dword ptr [esp + 0x20], esi
        mov	esi, dword ptr [ebx + 0x4]
        cmp	esi, dword ptr [ebx + 0x8]
        mov	dword ptr [esp + 0x24], edi
        jbe short loc_004E28A7
        call	dword ptr [mem_00925134]
        loc_004E28A7:
        mov	dword ptr [esp + 0x2c], esi
        jmp short loc_004E28B0
        _emit 0x8D
        _emit 0x49
        _emit 0x00
        loc_004E28B0:
        mov	edi, dword ptr [ebx + 0x8]
        cmp	dword ptr [ebx + 0x4], edi
        jbe short loc_004E28BE
        call	dword ptr [mem_00925134]
        loc_004E28BE:
        test	ebx, ebx
        je short loc_004E28C6
        cmp	ebx, ebx
        je short loc_004E28CC
        loc_004E28C6:
        call	dword ptr [mem_00925134]
        loc_004E28CC:
        cmp	esi, edi
        je loc_004E2DBC
        test	ebx, ebx
        jne short loc_004E28DE
        call	dword ptr [mem_00925134]
        loc_004E28DE:
        cmp	esi, dword ptr [ebx + 0x8]
        jb short loc_004E28E9
        call	dword ptr [mem_00925134]
        loc_004E28E9:
        mov	eax, dword ptr [esi]
        mov	edi, dword ptr [eax + 0x40]
        call ext_00660A50
        mov	ecx, dword ptr [esp + 0x2c]
        cmp	ecx, dword ptr [ebx + 0x8]
        mov	esi, eax
        jb short loc_004E2904
        call	dword ptr [mem_00925134]
        loc_004E2904:
        fld	dword ptr [ebp + 0xc]
        push	ecx
        mov	ecx, dword ptr [esp + 0x30]
        fstp	dword ptr [esp]
        add	ecx, 0x4
        call ext_0051AD40
        fld	dword ptr [eax]
        fstp	dword ptr [esp + 0xb4]
        fld	dword ptr [eax + 0x4]
        fstp	dword ptr [esp + 0xb8]
        fld	dword ptr [eax + 0x8]
        fstp	dword ptr [esp + 0xbc]
        fld	dword ptr [eax + 0xc]
        fstp	dword ptr [esp + 0xc0]
        fld	dword ptr [ebx + 0x2c]
        fld	dword ptr [ebx + 0x28]
        fcompp
        fnstsw	ax
        test	ah, 0x41
        jne short loc_004E2991
        cmp	dword ptr [esp + 0x20], 0x0
        jne short loc_004E295A
        call	dword ptr [mem_00925134]
        loc_004E295A:
        mov	edx, dword ptr [esp + 0x20]
        mov	eax, dword ptr [esp + 0x24]
        cmp	eax, dword ptr [edx + 0x8]
        jb short loc_004E296D
        call	dword ptr [mem_00925134]
        loc_004E296D:
        fld	dword ptr [ebx + 0x2c]
        mov	edx, dword ptr [esp + 0x24]
        fdiv	dword ptr [ebx + 0x28]
        push	ecx
        lea	ecx, [esp + 0xb8]
        fstp	dword ptr [esp + 0x20]
        fld	dword ptr [esp + 0x20]
        fstp	dword ptr [esp]
        push	ecx
        push	edx
        call ext_00693DB0
        loc_004E2991:
        cmp	byte ptr [esp + 0xf], 0x0
        je loc_004E2CC2
        lea	eax, [esp + 0xb4]
        push	eax
        lea	ecx, [esp + 0x60]
        call ext_00672150
        push offset mem_0093E0FC
        lea	ecx, [esp + 0x3c]
        mov	dword ptr [esp + 0x140], 0x1
        call	dword ptr [mem_00924FE4]
        mov	edx, dword ptr [esi]
        mov	edx, dword ptr [edx + 0x14]
        push	0x0
        push	edi
        lea	eax, [esp + 0x40]
        push	eax
        lea	ecx, [esp + 0xa8]
        push	ecx
        mov	ecx, esi
        mov	byte ptr [esp + 0x14c], 0x2
        call	edx
        mov	ecx, dword ptr [eax + 0x4]
        mov	edx, dword ptr [ecx]
        lea	ebx, [esp + 0x5c]
        push	ebx
        push	eax
        mov	eax, dword ptr [edx + 0xa4]
        mov	byte ptr [esp + 0x144], 0x3
        call	eax
        mov	ecx, dword ptr [esp + 0xa0]
        test	ecx, ecx
        mov	byte ptr [esp + 0x13c], 0x2
        je short loc_004E2A25
        mov	edx, dword ptr [ecx]
        mov	edx, dword ptr [edx + 0x78]
        lea	eax, [esp + 0x9c]
        push	eax
        call	edx
        loc_004E2A25:
        lea	ecx, [esp + 0x38]
        mov	byte ptr [esp + 0x13c], 0x1
        call	dword ptr [mem_00924FF4]
        mov	ecx, dword ptr [esp + 0x60]
        test	ecx, ecx
        mov	dword ptr [esp + 0x13c], 0xffffffff
        je short loc_004E2A56
        mov	eax, dword ptr [ecx]
        mov	eax, dword ptr [eax + 0x78]
        lea	edx, [esp + 0x5c]
        push	edx
        call	eax
        loc_004E2A56:
        cmp	byte ptr [esp + 0xe], 0x0
        je loc_004E2C85
        mov	ecx, dword ptr [mem_00A8F2B4]
        push	ecx
        lea	ecx, [esp + 0x70]
        call ext_0041CE40
        push offset mem_0093E0EC
        lea	ecx, [esp + 0x3c]
        mov	dword ptr [esp + 0x140], 0x4
        call	dword ptr [mem_00924FE4]
        mov	edx, dword ptr [esi]
        mov	edx, dword ptr [edx + 0x14]
        push	0x0
        push	edi
        lea	eax, [esp + 0x40]
        push	eax
        lea	ecx, [esp + 0x98]
        push	ecx
        mov	ecx, esi
        mov	byte ptr [esp + 0x14c], 0x5
        call	edx
        mov	ecx, dword ptr [eax + 0x4]
        mov	edx, dword ptr [ecx]
        lea	ebx, [esp + 0x6c]
        push	ebx
        push	eax
        mov	eax, dword ptr [edx + 0xa4]
        mov	byte ptr [esp + 0x144], 0x6
        call	eax
        mov	ecx, dword ptr [esp + 0x90]
        test	ecx, ecx
        mov	byte ptr [esp + 0x13c], 0x5
        je short loc_004E2AE9
        mov	edx, dword ptr [ecx]
        mov	edx, dword ptr [edx + 0x78]
        lea	eax, [esp + 0x8c]
        push	eax
        call	edx
        loc_004E2AE9:
        lea	ecx, [esp + 0x38]
        mov	byte ptr [esp + 0x13c], 0x4
        call	dword ptr [mem_00924FF4]
        mov	ecx, dword ptr [esp + 0x70]
        test	ecx, ecx
        mov	dword ptr [esp + 0x13c], 0xffffffff
        je short loc_004E2B1A
        mov	eax, dword ptr [ecx]
        mov	eax, dword ptr [eax + 0x78]
        lea	edx, [esp + 0x6c]
        push	edx
        call	eax
        loc_004E2B1A:
        fld	dword ptr [esp + 0x10]
        push	ecx
        lea	ecx, [esp + 0x78]
        fstp	dword ptr [esp]
        call ext_00672080
        push offset mem_0093E0D8
        lea	ecx, [esp + 0x3c]
        mov	dword ptr [esp + 0x140], 0x7
        call	dword ptr [mem_00924FE4]
        mov	edx, dword ptr [esi]
        mov	edx, dword ptr [edx + 0x14]
        push	0x0
        push	edi
        lea	eax, [esp + 0x40]
        push	eax
        lea	ecx, [esp + 0xa0]
        push	ecx
        mov	ecx, esi
        mov	byte ptr [esp + 0x14c], 0x8
        call	edx
        mov	ecx, dword ptr [eax + 0x4]
        mov	edx, dword ptr [ecx]
        lea	ebx, [esp + 0x74]
        push	ebx
        push	eax
        mov	eax, dword ptr [edx + 0xa4]
        mov	byte ptr [esp + 0x144], 0x9
        call	eax
        mov	ecx, dword ptr [esp + 0x98]
        test	ecx, ecx
        mov	byte ptr [esp + 0x13c], 0x8
        je short loc_004E2BA3
        mov	edx, dword ptr [ecx]
        mov	edx, dword ptr [edx + 0x78]
        lea	eax, [esp + 0x94]
        push	eax
        call	edx
        loc_004E2BA3:
        lea	ecx, [esp + 0x38]
        mov	byte ptr [esp + 0x13c], 0x7
        call	dword ptr [mem_00924FF4]
        mov	ecx, dword ptr [esp + 0x78]
        test	ecx, ecx
        mov	dword ptr [esp + 0x13c], 0xffffffff
        je short loc_004E2BD4
        mov	eax, dword ptr [ecx]
        mov	eax, dword ptr [eax + 0x78]
        lea	edx, [esp + 0x74]
        push	edx
        call	eax
        loc_004E2BD4:
        push	0x64
        lea	ecx, [esp + 0x58]
        call ext_006720C0
        push offset mem_0093E0C4
        lea	ecx, [esp + 0x3c]
        mov	dword ptr [esp + 0x140], 0xa
        call	dword ptr [mem_00924FE4]
        mov	edx, dword ptr [esi]
        mov	edx, dword ptr [edx + 0x14]
        push	0x0
        push	edi
        lea	eax, [esp + 0x40]
        push	eax
        lea	ecx, [esp + 0x88]
        push	ecx
        mov	bl, 0xb
        mov	ecx, esi
        mov	byte ptr [esp + 0x14c], bl
        call	edx
        mov	ecx, dword ptr [eax + 0x4]
        mov	edx, dword ptr [ecx]
        lea	esi, [esp + 0x54]
        push	esi
        push	eax
        mov	eax, dword ptr [edx + 0xa4]
        mov	byte ptr [esp + 0x144], 0xc
        call	eax
        mov	ecx, dword ptr [esp + 0x80]
        test	ecx, ecx
        mov	byte ptr [esp + 0x13c], bl
        je short loc_004E2C54
        mov	edx, dword ptr [ecx]
        mov	edx, dword ptr [edx + 0x78]
        lea	eax, [esp + 0x7c]
        push	eax
        call	edx
        loc_004E2C54:
        lea	ecx, [esp + 0x38]
        mov	byte ptr [esp + 0x13c], 0xa
        call	dword ptr [mem_00924FF4]
        mov	ecx, dword ptr [esp + 0x58]
        test	ecx, ecx
        mov	dword ptr [esp + 0x13c], 0xffffffff
        je short loc_004E2C85
        mov	eax, dword ptr [ecx]
        mov	eax, dword ptr [eax + 0x78]
        lea	edx, [esp + 0x54]
        push	edx
        call	eax
        loc_004E2C85:
        mov	ebx, dword ptr [esp + 0x14]
        loc_004E2C89:
        mov	ecx, dword ptr [esp + 0x2c]
        cmp	ecx, dword ptr [ebx + 0x8]
        mov	edi, dword ptr [mem_00925134]
        jb short loc_004E2C9A
        call	edi
        loc_004E2C9A:
        mov	esi, dword ptr [esp + 0x20]
        add	dword ptr [esp + 0x2c], 0x68
        test	esi, esi
        jne short loc_004E2CA9
        call	edi
        loc_004E2CA9:
        mov	edx, dword ptr [esp + 0x24]
        cmp	edx, dword ptr [esi + 0x8]
        jb short loc_004E2CB4
        call	edi
        loc_004E2CB4:
        add	dword ptr [esp + 0x24], 0x10
        mov	esi, dword ptr [esp + 0x2c]
        jmp loc_004E28B0
        loc_004E2CC2:
        mov	ecx, dword ptr [mem_00A8F2B8]
        push	ecx
        lea	ecx, [esp + 0x3c]
        call	dword ptr [mem_00924FE4]
        lea	edx, [esp + 0x38]
        push	edx
        lea	ecx, [esp + 0x68]
        mov	dword ptr [esp + 0x140], 0xd
        call ext_006720E0
        lea	ecx, [esp + 0x38]
        mov	dword ptr [esp + 0x13c], 0xffffffff
        call	dword ptr [mem_00924FF4]
        push offset mem_0093E0EC
        lea	ecx, [esp + 0x118]
        mov	dword ptr [esp + 0x140], 0xe
        call	dword ptr [mem_00924FE4]
        mov	eax, dword ptr [esi]
        mov	eax, dword ptr [eax + 0x14]
        push	0x0
        push	edi
        lea	ecx, [esp + 0x11c]
        push	ecx
        lea	edx, [esp + 0x90]
        push	edx
        mov	ecx, esi
        mov	byte ptr [esp + 0x14c], 0xf
        call	eax
        mov	ecx, dword ptr [eax + 0x4]
        mov	edx, dword ptr [ecx]
        lea	esi, [esp + 0x64]
        push	esi
        push	eax
        mov	eax, dword ptr [edx + 0xa4]
        mov	byte ptr [esp + 0x144], 0x10
        call	eax
        mov	ecx, dword ptr [esp + 0x88]
        test	ecx, ecx
        mov	byte ptr [esp + 0x13c], 0xf
        je short loc_004E2D7F
        mov	edx, dword ptr [ecx]
        mov	edx, dword ptr [edx + 0x78]
        lea	eax, [esp + 0x84]
        push	eax
        call	edx
        loc_004E2D7F:
        lea	ecx, [esp + 0x114]
        mov	byte ptr [esp + 0x13c], 0xe
        call	dword ptr [mem_00924FF4]
        mov	ecx, dword ptr [esp + 0x68]
        test	ecx, ecx
        mov	dword ptr [esp + 0x13c], 0xffffffff
        je loc_004E2C89
        mov	eax, dword ptr [ecx]
        mov	eax, dword ptr [eax + 0x78]
        lea	edx, [esp + 0x64]
        push	edx
        call	eax
        jmp loc_004E2C89
        loc_004E2DBC:
        cmp	byte ptr [ebx + 0x160], 0x0
        je loc_004E2FBF
        fld	dword ptr [ebp + 0xc]
        push	ecx
        lea	ecx, [ebx + 0xfc]
        fstp	dword ptr [esp]
        call ext_0051AD40
        fld	dword ptr [eax]
        fstp	dword ptr [esp + 0x28]
        push	ecx
        fld	dword ptr [eax + 0x4]
        lea	ecx, [ebx + 0x30]
        fstp	dword ptr [esp + 0x30]
        fld	dword ptr [eax + 0x8]
        fstp	dword ptr [esp + 0x34]
        fld	dword ptr [eax + 0xc]
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [ebp + 0xc]
        fstp	dword ptr [esp]
        call ext_0051AC30
        fstp	dword ptr [esp + 0x14]
        push	ecx
        fld	dword ptr [ebp + 0xc]
        lea	ecx, [ebx + 0x74]
        fstp	dword ptr [esp]
        call ext_0051AC30
        fstp	dword ptr [esp + 0x10]
        push	ecx
        fld	dword ptr [ebp + 0xc]
        lea	ecx, [ebx + 0xb8]
        fstp	dword ptr [esp]
        call ext_0051AC30
        fstp	dword ptr [esp + 0x20]
        fld	dword ptr [ebx + 0x2c]
        fld	dword ptr [ebx + 0x28]
        fcompp
        fnstsw	ax
        fldz
        test	ah, 0x41
        jne loc_004E2EE0
        fld	dword ptr [ebx + 0x2c]
        lea	eax, [ebx + 0x164]
        fdiv	dword ptr [ebx + 0x28]
        push	eax
        lea	ecx, [esp + 0xa8]
        fstp	dword ptr [esp + 0x20]
        fst	dword ptr [esp + 0xb4]
        fst	dword ptr [esp + 0xb0]
        fst	dword ptr [esp + 0xac]
        fstp	dword ptr [esp + 0xa8]
        call ext_006944D0
        fld	dword ptr [esp + 0x1c]
        push	ecx
        fstp	dword ptr [esp]
        lea	ecx, [esp + 0x2c]
        push	ecx
        lea	edx, [esp + 0xac]
        push	edx
        call ext_00693DB0
        fld	dword ptr [esp + 0x1c]
        fld	st(0)
        fld1
        fsubrp	st(1), st
        fld	dword ptr [ebx + 0x194]
        fmul	st, st(1)
        fld	st(2)
        fmul	dword ptr [esp + 0x14]
        faddp	st(1), st
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [ebx + 0x198]
        fmul	st, st(1)
        fld	st(2)
        fmul	dword ptr [esp + 0x10]
        faddp	st(1), st
        fstp	dword ptr [esp + 0x10]
        fmul	dword ptr [ebx + 0x19c]
        fld	dword ptr [esp + 0x20]
        fmulp	st(2), st
        faddp	st(1), st
        fstp	dword ptr [esp + 0x20]
        fldz
        loc_004E2EE0:
        fld1
        lea	eax, [esp + 0x28]
        fst	dword ptr [esp + 0xd0]
        push	eax
        fst	dword ptr [esp + 0xe8]
        lea	ecx, [esp + 0xd4]
        fst	dword ptr [esp + 0xfc]
        fstp	dword ptr [esp + 0x110]
        fst	dword ptr [esp + 0xd8]
        fst	dword ptr [esp + 0xdc]
        fst	dword ptr [esp + 0xe0]
        fst	dword ptr [esp + 0xe4]
        fst	dword ptr [esp + 0xec]
        fst	dword ptr [esp + 0xf0]
        fst	dword ptr [esp + 0xf4]
        fst	dword ptr [esp + 0xf8]
        fstp	dword ptr [esp + 0x100]
        fld	dword ptr [esp + 0x18]
        fstp	dword ptr [esp + 0x104]
        fld	dword ptr [esp + 0x14]
        fstp	dword ptr [esp + 0x108]
        fld	dword ptr [esp + 0x24]
        fstp	dword ptr [esp + 0x10c]
        call ext_0067E510
        mov	eax, dword ptr [ebx + 0x1a8]
        test	eax, eax
        je short loc_004E2F97
        mov	eax, dword ptr [eax + 0x234]
        test	eax, eax
        je short loc_004E2F97
        mov	edx, dword ptr [eax]
        mov	edx, dword ptr [edx + 0xac]
        lea	ecx, [esp + 0xd0]
        push	ecx
        mov	ecx, eax
        call	edx
        loc_004E2F97:
        mov	eax, dword ptr [ebx + 0x1a4]
        test	eax, eax
        je short loc_004E2FBF
        mov	eax, dword ptr [eax + 0x234]
        test	eax, eax
        je short loc_004E2FBF
        mov	edx, dword ptr [eax]
        mov	edx, dword ptr [edx + 0xac]
        lea	ecx, [esp + 0xd0]
        push	ecx
        mov	ecx, eax
        call	edx
        loc_004E2FBF:
        fld	dword ptr [ebx + 0x24]
        mov	ecx, dword ptr [esp + 0x134]
        fadd	dword ptr [ebx + 0x2c]
        pop	edi
        pop	esi
        fstp	dword ptr [ebx + 0x2c]
        mov	dword ptr fs:[0x0], ecx
        pop	ebx
        mov	esp, ebp
        pop	ebp
        ret	0x8
    }
}

// [0x004EE630] sub_004EE630 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_004ECC40();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004EE630(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004ECC40
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x004EC300] sub_004EC300 (115 bytes)
extern "C" void ext_00474F00();
extern "C" int mem_008B56F9;
extern "C" int mem_0094B880;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004EC300(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset mem_008B56F9
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        push offset mem_0094B880
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esp + 0x30]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esi + 0x140]
        mov dword ptr [esp + 0x30], 0x0
        call ext_00474F00
        mov ecx, eax
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x004E82C0] sub_004E82C0 (116 bytes)
extern "C" void ext_004A6970();
extern "C" __declspec(naked) void* __fastcall fn_004E82C0(void* self, int edx_dummy, void* arg0) {
    __asm {
        push -1
        push 0x8882e8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x8]
        push edi
        mov edi, ecx
        mov ecx, esi
        mov dword ptr [esp + 0x8], edi
        call edx
        push eax
        mov ecx, edi
        call ext_004A6970
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x54]
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0
        call edx
        mov dword ptr [edi + 0x10], eax
        mov eax, dword ptr [esi + 0x18]
        mov dword ptr [edi + 0x14], eax
        mov ecx, dword ptr [esi + 0x1c]
        mov dword ptr [edi + 0x18], ecx
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x50]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [edi + 0x1c], al
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x004EC160] sub_004EC160 (130 bytes)
extern "C" void ext_004EC160();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004EC160(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b2fe9
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        cmp byte ptr [edi + 0x45], 0
        mov ebx, ecx
        mov esi, edi
        jne done_
    loop_:
        mov eax, dword ptr [esi + 0x8]
        push eax
        mov ecx, ebx
        call ext_004EC160
        mov esi, dword ptr [esi]
        lea ebp, [edi + 0xc]
        mov dword ptr [esp + 0x20], ebp
        lea ecx, [ebp + 0x1c]
        mov dword ptr [esp + 0x18], 0
        call dword ptr [mem_00924FF4]
        mov ecx, ebp
        mov dword ptr [esp + 0x18], -1
        call dword ptr [mem_00924FF4]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0x45], 0
        mov edi, esi
        je loop_
    done_:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 4
    }
}

// [0x004EC1F0] sub_004EC1F0 (203 bytes)
extern "C" void ext_00470120();
extern "C" void ext_004EBE70();
extern "C" void ext_004EC160();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004EC1F0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ebp, dword ptr [eax]
        je L_4EC20A
        cmp edi, esi
        je L_4EC210
L_4EC20A:
        call dword ptr [mem_00925134]
L_4EC210:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_4EC271
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 4]
        je L_4EC227
        cmp eax, esi
        je L_4EC22D
L_4EC227:
        call dword ptr [mem_00925134]
L_4EC22D:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_4EC271
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, esi
        call ext_004EC160
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [esi + 8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax + 8], eax
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ecx
        pop ebx
        add esp, 8
        ret 0x14
L_4EC271:
        test edi, edi
        je L_4EC27B
        cmp edi, dword ptr [esp + 0x28]
        je L_4EC281
L_4EC27B:
        call dword ptr [mem_00925134]
L_4EC281:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_4EC2A8
        lea ecx, [esp + 0x20]
        call ext_00470120
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_004EBE70
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_4EC271
L_4EC2A8:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        add esp, 8
        ret 0x14
    }
}

// [0x004EC580] sub_004EC580 (186 bytes)
extern "C" void ext_0049F8D0();
extern "C" void ext_004EC1F0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004EC580(void* self) {
    __asm {
        push -1
        push 0x88edb6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x94b9a0
        mov dword ptr [esi + 0x8], 0x94b904
        mov dword ptr [esi + 0x10], 0x94b8ac
        mov dword ptr [esi + 0x14], 0x94b8a4
        mov dword ptr [esi + 0x18], 0x94b898
        lea ecx, [esi + 0x14c]
        mov dword ptr [esp + 0x1c], 0x1
        call dword ptr [mem_00924FF4]
        lea edi, [esi + 0x140]
        mov dword ptr [esi + 0x13c], 0x94b890
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push edi
        push ecx
        push edi
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x30], 0
        call ext_004EC1F0
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        mov ecx, esi
        mov dword ptr [edi + 0x4], 0
        mov dword ptr [edi + 0x8], 0
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_0049F8D0
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x004E9630] sub_004E9630 (130 bytes)
extern "C" void ext_004E8AB0();
extern "C" void ext_004E91E0();
extern "C" void ext_006A5C5C();
extern "C" int mem_0087BA98;

extern "C" __declspec(naked) void __fastcall fn_004E9630(void* self, int edx_unused, void* a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push offset mem_0087BA98
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 10h
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0Ch], edi
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 14h], edi
        mov ecx, dword ptr [esp + 28h]
        lea eax, [esp + 8h]
        push eax
        push ecx
        mov dword ptr [esp + 28h], edi
        call ext_004E8AB0
        mov edx, dword ptr [esp + 3Ch]
        mov eax, dword ptr [esp + 38h]
        add esp, 8h
        push edi
        push edx
        push eax
        push eax
        mov eax, dword ptr [esp + 3Ch]
        push eax
        push edi
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, esi
        call ext_004E91E0
        mov eax, dword ptr [esp + 0Ch]
        cmp eax, edi
        pop edi
        pop esi
        je short L_skip
        push eax
        call ext_006A5C5C
        add esp, 4h
    L_skip:
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr fs:[0], ecx
        add esp, 1Ch
        ret 10h
    }
}

// [0x004E96C0] sub_004E96C0 (130 bytes)
extern "C" void ext_00483750();
extern "C" void ext_004E91E0();
extern "C" void ext_006A5C5C();
extern "C" int mem_0087BA98;

extern "C" __declspec(naked) void __fastcall fn_004E96C0(void* self, int edx_unused, void* a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push offset mem_0087BA98
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 10h
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0Ch], edi
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 14h], edi
        mov ecx, dword ptr [esp + 28h]
        lea eax, [esp + 8h]
        push eax
        push ecx
        mov dword ptr [esp + 28h], edi
        call ext_00483750
        mov edx, dword ptr [esp + 3Ch]
        mov eax, dword ptr [esp + 38h]
        add esp, 8h
        push edi
        push edx
        push eax
        push eax
        mov eax, dword ptr [esp + 3Ch]
        push eax
        push edi
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, esi
        call ext_004E91E0
        mov eax, dword ptr [esp + 0Ch]
        cmp eax, edi
        pop edi
        pop esi
        je short L_skip
        push eax
        call ext_006A5C5C
        add esp, 4h
    L_skip:
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr fs:[0], ecx
        add esp, 1Ch
        ret 10h
    }
}

// [0x004E9870] sub_004E9870 (130 bytes)
extern "C" void ext_004E9750();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void* __fastcall fn_004E9870(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push -1
        push 008a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 130h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je short L_null
        mov ecx, dword ptr [esp+28h]
        mov edx, dword ptr [esp+24h]
        push ecx
        mov ecx, dword ptr [esp+24h]
        push edx
        mov edx, dword ptr [esp+24h]
        push ecx
        mov ecx, dword ptr [esp+24h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call ext_004E9750
        jmp short L_done
L_null:
        xor eax, eax
L_done:
        push eax
        mov dword ptr [esp+14h], -1
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp+8]
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret 14h
    }
}

// [0x004E3D30] sub_004E3D30 (131 bytes)
extern "C" void ext_004E1BA0();
extern "C" void ext_004E3B60();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004E3D30(void* self, int edx_unused, void* val) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov edx, dword ptr [esi + 0x4]
        test edx, edx
        push edi
        jne L_4e3d42
        xor ecx, ecx
        jmp L_4e3d4a
    L_4e3d42:
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, edx
        sar ecx, 0x3
    L_4e3d4a:
        test edx, edx
        je L_4e3d8b
        mov eax, dword ptr [esi + 0xc]
        sub eax, edx
        sar eax, 0x3
        cmp ecx, eax
        jae L_4e3d8b
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esi + 0x8]
        mov byte ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0x8]
        push eax
        push ecx
        push esi
        push edx
        push 0x1
        push edi
        call ext_004E1BA0
        add esp, 0x18
        add edi, 0x8
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    L_4e3d8b:
        mov edi, dword ptr [esi + 0x8]
        cmp edx, edi
        jbe L_4e3d98
        call dword ptr [mem_00925134]
    L_4e3d98:
        mov eax, dword ptr [esp + 0x14]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_004E3B60
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x004E99E0] sub_004E99E0 (136 bytes)
extern "C" void ext_00494000();
extern "C" void ext_004E9870();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004E99E0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87ba98
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x2c], edi
        push edi
        push edi
        push -1
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x44], edi
        call ext_00494000
        push edi
        push edi
        push -1
        lea ecx, [esp + 0x20]
        call ext_00494000
        mov edx, dword ptr [esp + 0x40]
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        push edi
        push edx
        lea eax, [esp + 0x30]
        push eax
        mov ecx, esi
        call ext_004E9870
        mov eax, dword ptr [esp + 0x24]
        cmp eax, edi
        pop edi
        pop esi
        je L_skip_004E99E0
        push eax
        call ext_006A5C5C
        add esp, 4
L_skip_004E99E0:
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret 4
    }
}

extern "C" void ext_004DE330();
extern "C" void ext_004E3AB0();
extern "C" void ext_004E3D30();
extern "C" void ext_00519CF0();
extern "C" void ext_00664560();
extern "C" void ext_00664680();
extern "C" void ext_00673C20();
extern "C" int mem_00B40640;

// [0x004E3F20] sub_004E3F20 (1071 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E3F20(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -0x1
        push 0x88ddd1
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xd4
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x20], edi
        call ext_004E3AB0
        mov ebx, dword ptr [esp + 0xf4]
        mov esi, dword ptr [ebx + 0x4]
        test esi, esi
        je L_004e4335
        mov eax, dword ptr [ebx + 0x8]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 0x2
        je L_004e4335
        cmp esi, eax
        jbe L_004e3f75
        call dword ptr [mem_00925134]
    L_004e3f75:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_004e3f80
        call dword ptr [mem_00925134]
    L_004e3f80:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x18c]
        mov esi, dword ptr [esp + 0xf0]
        mov dword ptr [edi + 0x30], eax
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esi + 0x4]
        push ebp
        push edx
        call eax
        push eax
        mov ecx, edi
        call ext_004DE330
        call ext_00660A50
        lea edi, [esi + 0x18c]
        lea ecx, [esp + 0x88]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x28], edi
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0xec], 0x0
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0xc8]
        mov byte ptr [esp + 0xec], 0x1
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0xec], 0x2
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [edi + 0x4]
        mov ebx, dword ptr [eax]
        mov ebp, edi
        mov byte ptr [esp + 0xec], 0x3
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x10], ebp
    L_004e4020:
        test ebp, ebp
        mov esi, dword ptr [edi + 0x4]
        je L_004e402b
        cmp ebp, edi
        je L_004e4031
    L_004e402b:
        call dword ptr [mem_00925134]
    L_004e4031:
        cmp ebx, esi
        je L_004e42e3
        push 0x92ab70
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924FE4]
        test ebp, ebp
        mov byte ptr [esp + 0xec], 0x4
        jne L_004e405a
        call dword ptr [mem_00925134]
    L_004e405a:
        cmp ebx, dword ptr [ebp + 0x4]
        jne L_004e4065
        call dword ptr [mem_00925134]
    L_004e4065:
        lea ecx, [esp + 0x50]
        push ecx
        lea edx, [esp + 0xcc]
        push edx
        lea eax, [esp + 0x3c]
        push eax
        lea ecx, [ebx + 0xc]
        push ecx
        call ext_00664560
        add esp, 0x10
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0xec], 0x3
        call dword ptr [mem_00924FF4]
        push 0x92ab70
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x6c]
        push edx
        lea eax, [esp + 0x8c]
        push eax
        lea ecx, [esp + 0x3c]
        push ecx
        lea edx, [esp + 0x5c]
        push edx
        mov byte ptr [esp + 0xfc], 0x5
        call ext_00664680
        add esp, 0x10
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0xec], 0x3
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esp + 0x24]
        mov eax, dword ptr [eax + 0x30]
        test eax, eax
        je L_004e40ed
        add eax, 0x4
        jmp L_004e40ef
    L_004e40ed:
        xor eax, eax
    L_004e40ef:
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x18]
        push 0x0
        push 0x0
        push eax
        lea eax, [esp + 0x94]
        push eax
        call edx
        mov ebp, eax
        test ebp, ebp
        je L_004e42cd
        mov eax, dword ptr [esp + 0xf8]
        mov edi, dword ptr [eax + 0x8]
        mov esi, eax
        cmp dword ptr [esi + 0x4], edi
        jbe L_004e4128
        call dword ptr [mem_00925134]
    L_004e4128:
        mov esi, dword ptr [esi + 0x4]
        mov eax, dword ptr [esp + 0xf8]
        cmp esi, dword ptr [eax + 0x8]
        jbe L_004e4144
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0xf8]
    L_004e4144:
        cmp esi, edi
        mov dword ptr [esp + 0xa8], esi
        je L_004e415b
        nop
    L_004e4150:
        cmp dword ptr [esi], ebp
        je L_004e415b
        add esi, 0x4
        cmp esi, edi
        jne L_004e4150
    L_004e415b:
        mov edi, dword ptr [eax + 0x8]
        cmp dword ptr [eax + 0x4], edi
        jbe L_004e4170
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0xf8]
    L_004e4170:
        test eax, eax
        je L_004e4178
        cmp eax, eax
        je L_004e417e
    L_004e4178:
        call dword ptr [mem_00925134]
    L_004e417e:
        cmp esi, edi
        je L_004e42c9
        mov edx, dword ptr [ebp]
        mov edx, dword ptr [edx + 0x8]
        lea eax, [esp + 0x6c]
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, ebp
        call edx
        mov ecx, dword ptr [esp + 0x20]
        test ecx, ecx
        mov byte ptr [esp + 0xec], 0x6
        je L_004e42b1
        cmp ecx, dword ptr [mem_00B599BC]
        je L_004e42b1
        mov edi, dword ptr [esp + 0xf8]
        test edi, edi
        jne L_004e41cb
        call dword ptr [mem_00925134]
    L_004e41cb:
        cmp esi, dword ptr [edi + 0x8]
        jb L_004e41d6
        call dword ptr [mem_00925134]
    L_004e41d6:
        mov edi, dword ptr [esp + 0x24]
        push esi
        mov ecx, edi
        call ext_0041A920
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [edi + 0x20]
        call ext_004E3D30
        push 0x928b5d
        lea ecx, [esp + 0xb0]
        call dword ptr [mem_00924FE4]
        mov ebp, dword ptr [esp + 0x10]
        cmp ebx, dword ptr [ebp + 0x4]
        mov byte ptr [esp + 0xec], 0x7
        jne L_004e4218
        call dword ptr [mem_00925134]
    L_004e4218:
        mov ecx, dword ptr [ebx + 0x28]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x20]
        lea eax, [esp + 0xac]
        push eax
        lea eax, [esp + 0x30]
        push eax
        call edx
        push eax
        lea ecx, [edi + 0x10]
        mov byte ptr [esp + 0xf0], 0x8
        call ext_004E3D30
        mov ecx, dword ptr [esp + 0x30]
        test ecx, ecx
        mov byte ptr [esp + 0xec], 0x7
        je L_004e425c
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x2c]
        push edx
        call eax
    L_004e425c:
        lea ecx, [esp + 0xac]
        mov byte ptr [esp + 0xec], 0x6
        call dword ptr [mem_00924FF4]
        cmp ebx, dword ptr [ebp + 0x4]
        mov ebp, dword ptr [mem_00925134]
        jne L_004e427e
        call ebp
    L_004e427e:
        mov ecx, dword ptr [ebx + 0x28]
        call ext_00519CF0
        mov ebx, dword ptr [esp + 0xf8]
        cmp esi, dword ptr [ebx + 0x8]
        jb L_004e4294
        call ebp
    L_004e4294:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x70]
        call eax
        test al, al
        je L_004e42ad
        cmp esi, dword ptr [ebx + 0x8]
        jb L_004e42a8
        call ebp
    L_004e42a8:
        mov ecx, dword ptr [esi]
        mov dword ptr [edi + 0x34], ecx
    L_004e42ad:
        mov ecx, dword ptr [esp + 0x20]
    L_004e42b1:
        test ecx, ecx
        mov byte ptr [esp + 0xec], 0x3
        je L_004e42c9
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x1c]
        push eax
        call edx
    L_004e42c9:
        mov edi, dword ptr [esp + 0x28]
    L_004e42cd:
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x14]
        mov ebp, dword ptr [esp + 0x10]
        jmp L_004e4020
    L_004e42e3:
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0xec], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc8]
        mov byte ptr [esp + 0xec], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x6c]
        mov byte ptr [esp + 0xec], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x88]
        mov dword ptr [esp + 0xec], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop ebp
    L_004e4335:
        mov ecx, dword ptr [esp + 0xe0]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0xe0
        ret 0x8
    }
}

extern "C" void ext_00484F20();
extern "C" void ext_004875A0();
extern "C" void ext_005A0FF0();
extern "C" void ext_005E12D0();
extern "C" void ext_0067E820();
extern "C" void ext_0067E990();

// [0x004E4350] sub_004E4350 (509 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E4350(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x9c
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr [ebx + 0x18]
        cmp dword ptr [ebx + 0x14], ebp
        push esi
        lea esi, [ebx + 0x10]
        mov dword ptr [esp + 0xc], ebx
        jbe L_004e4370
        call dword ptr [mem_00925134]
    L_004e4370:
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_004e437f
        call dword ptr [mem_00925134]
    L_004e437f:
        push ebp
        push esi
        push edi
        push esi
        lea eax, [esp + 0x24]
        push eax
        mov ecx, esi
        call ext_004E3140
        fldz
        mov esi, dword ptr [ebx + 0x4]
        fstp dword ptr [ebx + 0x2c]
        cmp esi, dword ptr [ebx + 0x8]
        mov edi, dword ptr [mem_00925134]
        jbe L_004e43a4
        call edi
    L_004e43a4:
        mov ebp, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], ebp
        mov dword ptr [esp + 0x18], esi
        jbe L_004e43b2
        call edi
    L_004e43b2:
        cmp esi, ebp
        je L_004e44e6
        cmp esi, dword ptr [ebx + 0x8]
        jb L_004e43c1
        call edi
    L_004e43c1:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0xb0]
        mov ecx, dword ptr [ecx + 0x168]
        add eax, 0x20
        push eax
        call ext_005A0FF0
        mov ebp, eax
        test ebp, ebp
        je L_004e44d7
        mov edx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [esp + 0xb4]
        mov edx, dword ptr [edx + 0xc]
        lea ebx, [ebp + 0x4]
        push eax
        mov ecx, ebx
        call edx
        mov esi, eax
        mov eax, dword ptr [ebp + 0x180]
        test eax, eax
        mov ecx, 0x10
        lea edi, [esp + 0x2c]
        rep movsd
        je L_004e4449
        mov edx, dword ptr [esp + 0xb4]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        push edx
        call eax
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 0xc]
        mov esi, eax
        mov eax, dword ptr [esp + 0xb4]
        mov ecx, 0x10
        lea edi, [esp + 0x2c]
        rep movsd
        push eax
        mov ecx, ebx
        call edx
        push eax
        lea ecx, [esp + 0x30]
        call ext_0067E820
    L_004e4449:
        mov eax, dword ptr [ebx]
        mov esi, dword ptr [ebp + 0x17c]
        mov edx, dword ptr [eax + 0x2c]
        mov ecx, ebx
        add esi, 0x4
        call edx
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0xc]
        push eax
        lea eax, [esp + 0x70]
        push eax
        mov eax, dword ptr [esp + 0xbc]
        push eax
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_004875A0
        push eax
        lea ecx, [esp + 0x30]
        call ext_0067E990
        fldz
        mov esi, dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x28]
        mov edi, dword ptr [esp + 0x10]
        fst dword ptr [esp + 0x24]
        cmp esi, dword ptr [edi + 0x8]
        fst dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x1c]
        jb L_004e44a8
        call dword ptr [mem_00925134]
    L_004e44a8:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0x40]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x7c]
        lea eax, [esp + 0x2c]
        push eax
        lea eax, [esp + 0x20]
        push eax
        call edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [edi + 0x10]
        call ext_00484F20
        mov esi, dword ptr [esp + 0x18]
        mov ebx, edi
        mov edi, dword ptr [mem_00925134]
    L_004e44d7:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_004e44de
        call edi
    L_004e44de:
        add esi, 0x68
        jmp L_004e43a4
    L_004e44e6:
        cmp byte ptr [ebx + 0x160], 0x0
        je L_004e4522
        mov ecx, dword ptr [esp + 0xb0]
        mov edx, dword ptr [ecx + 0x168]
        mov eax, dword ptr [edx + 0x38c]
        mov edx, dword ptr [mem_00B40640]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x14]
        push edx
        call eax
        lea edi, [ebx + 0x164]
        mov ecx, 0x10
        mov esi, eax
        rep movsd
    L_004e4522:
        mov ecx, dword ptr [ebx + 0x1a4]
        test ecx, ecx
        pop edi
        je L_004e4532
        call ext_005E12D0
    L_004e4532:
        mov ecx, dword ptr [ebx + 0x1a8]
        test ecx, ecx
        pop esi
        pop ebp
        pop ebx
        je L_004e4544
        call ext_005E12D0
    L_004e4544:
        add esp, 0x9c
        ret 0x8
    }
}

// [0x004E51E0] sub_004E51E0 (263 bytes)
extern "C" void ext_00466870();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004E51E0(void* self) {
    __asm {
        push -1
        push 0x88dfe5
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        lea ecx, [esi + 0xcc]
        mov dword ptr [esp + 0x18], 7
        call ext_00466870
        lea ecx, [esi + 0x6c]
        mov byte ptr [esp + 0x18], 6
        call ext_00466870
        lea ebx, [esi + 0x60]
        mov ecx, ebx
        mov byte ptr [esp + 0x18], 5
        call ext_004E5180
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_006A5C5C
        xor edi, edi
        mov dword ptr [ebx + 4], edi
        mov eax, dword ptr [esi + 0x54]
        add esp, 4
        cmp eax, edi
        je L_004E524F
        push eax
        call ext_006A5C5C
        add esp, 4
    L_004E524F:
        mov dword ptr [esi + 0x54], edi
        mov dword ptr [esi + 0x58], edi
        mov dword ptr [esi + 0x5c], edi
        mov eax, dword ptr [esi + 0x44]
        cmp eax, edi
        je L_004E5268
        push eax
        call ext_006A5C5C
        add esp, 4
    L_004E5268:
        mov dword ptr [esi + 0x44], edi
        mov dword ptr [esi + 0x48], edi
        mov dword ptr [esi + 0x4c], edi
        mov eax, dword ptr [esi + 0x34]
        cmp eax, edi
        je L_004E5281
        push eax
        call ext_006A5C5C
        add esp, 4
    L_004E5281:
        mov dword ptr [esi + 0x34], edi
        mov dword ptr [esi + 0x38], edi
        mov dword ptr [esi + 0x3c], edi
        mov eax, dword ptr [esi + 0x24]
        cmp eax, edi
        je L_004E529A
        push eax
        call ext_006A5C5C
        add esp, 4
    L_004E529A:
        mov dword ptr [esi + 0x24], edi
        mov dword ptr [esi + 0x28], edi
        mov dword ptr [esi + 0x2c], edi
        mov eax, dword ptr [esi + 0x14]
        cmp eax, edi
        je L_004E52B3
        push eax
        call ext_006A5C5C
        add esp, 4
    L_004E52B3:
        mov dword ptr [esi + 0x14], edi
        mov dword ptr [esi + 0x18], edi
        mov dword ptr [esi + 0x1c], edi
        mov eax, dword ptr [esi + 0x4]
        cmp eax, edi
        je L_004E52CC
        push eax
        call ext_006A5C5C
        add esp, 4
    L_004E52CC:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x4], edi
        mov dword ptr [esi + 0x8], edi
        mov dword ptr [esi + 0xc], edi
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004E4E40] sub_004E4E40 (135 bytes)
extern "C" int mem_008B33B8;
extern "C" void ext_0041CF50();
extern "C" void ext_004C4650();
extern "C" void ext_004E13C0();
extern "C" void ext_004E3DE0();
extern "C" void ext_004E4690();

extern "C" __declspec(naked) void __fastcall fn_004E4E40(void* self) {
    __asm {
        push -1
        push offset mem_008B33B8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        lea eax, [esp + 8]
        push esi
        push eax
        call ext_004E13C0
        add esp, 8
        lea edi, [esi + 0x9a8]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        mov dword ptr [esp + 0x18], -1
        je short L_skip
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 8]
        push eax
        call edx
    L_skip:
        push edi
        lea ecx, [esi + 0x18c]
        call ext_004C4650
        mov ecx, esi
        call ext_004E3DE0
        mov ecx, esi
        call ext_004E4690
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x004E58E0] sub_004E58E0 (138 bytes)
extern "C" void ext_004E48C0();
extern "C" void ext_004E4970();
extern "C" void ext_004E4A20();
extern "C" void ext_004E4AD0();
extern "C" void ext_004E4B80();
extern "C" void ext_004E4C30();
extern "C" void ext_004E4CE0();
extern "C" void ext_004E4D90();
extern "C" int mem_00A9F554;
extern "C" int mem_00A9F9C4;
extern "C" __declspec(naked) void __fastcall fn_004E58E0(void* self) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0x93e1b8
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_004E5850
        mov     ecx, dword ptr [mem_00A9F554]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_004E48C0
        push    0x94adec
        lea     ecx, [esp + 0x4]
        call    ext_004E4970
        push    0x94addc
        lea     ecx, [esp + 0x4]
        call    ext_004E4A20
        mov     edx, dword ptr [mem_00A9F9C4]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_004E4AD0
        push    0x94adc4
        lea     ecx, [esp + 0x4]
        call    ext_004E4B80
        push    0x94adac
        lea     ecx, [esp + 0x4]
        call    ext_004E4C30
        push    0x948514
        lea     ecx, [esp + 0x4]
        call    ext_004E4CE0
        push    0x93e1ac
        lea     ecx, [esp + 0x4]
        call    ext_004E4D90
        pop     ecx
        ret
    }
}

// [0x004E5850] sub_004E5850 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004E5850(void* self) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa3e65c
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_4E58A3
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_4E58A3:
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
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x004EB8C0] sub_004EB8C0 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EB8C0(void* self) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa3ecd4
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_4EB913
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_4EB913:
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
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x004EED30] sub_004EED30 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EED30(void* self) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa3f2b0
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_4EED83
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_4EED83:
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
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x004E3B60] sub_004E3B60 (141 bytes)
extern "C" void ext_004E31D0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004E3B60(void* self) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x4]
        test    edi, edi
        je      L_004E3B7E
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, eax
        sub     ecx, edi
        sar     ecx, 3
        jne     L_004E3B82
    L_004E3B7E:
        xor     ebx, ebx
        jmp     L_004E3BA3
    L_004E3B82:
        cmp     edi, eax
        jbe     L_004E3B8C
        call    dword ptr [mem_00925134]
    L_004E3B8C:
        test    ebp, ebp
        je      L_004E3B94
        cmp     ebp, esi
        je      L_004E3B9A
    L_004E3B94:
        call    dword ptr [mem_00925134]
    L_004E3B9A:
        mov     ebx, dword ptr [esp + 0x20]
        sub     ebx, edi
        sar     ebx, 3
    L_004E3BA3:
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    1
        push    eax
        push    ebp
        mov     ecx, esi
        call    ext_004E31D0
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, dword ptr [esi + 0x8]
        jbe     L_004E3BC5
        call    dword ptr [mem_00925134]
    L_004E3BC5:
        mov     dword ptr [esp + 0x20], edi
        lea     edi, [edi + 8*ebx]
        cmp     edi, dword ptr [esi + 0x8]
        ja      L_004E3BD6
        cmp     edi, dword ptr [esi + 0x4]
        jae     L_004E3BDC
    L_004E3BD6:
        call    dword ptr [mem_00925134]
    L_004E3BDC:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x4], edi
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}

// [0x004E48C0] sub_004E48C0 (165 bytes)
extern "C" int mem_00AE6470;
extern "C" int mem_00AE646C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" void ext_0067A670();
extern "C" void ext_00475960();
extern "C" __declspec(naked) void __fastcall fn_004E48C0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88de27
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE6470], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE6470], 0x1
        mov     ecx, offset mem_00AE646C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE646C], 0x949e84
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE646C
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

// [0x004E4970] sub_004E4970 (165 bytes)
extern "C" int mem_00AE6478;
extern "C" int mem_00AE6474;
extern "C" __declspec(naked) void __fastcall fn_004E4970(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88de57
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE6478], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE6478], 0x1
        mov     ecx, offset mem_00AE6474
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE6474], 0x94a034
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE6474
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

// [0x004E4A20] sub_004E4A20 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE6480;
extern "C" int mem_00AE647C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004E4A20(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88de87
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE6480], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE6480], 0x1
        mov     ecx, offset mem_00AE647C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE647C], 0x94a1e4
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE647C
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

// [0x004E4AD0] sub_004E4AD0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE6488;
extern "C" int mem_00AE6484;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004E4AD0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88deb7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE6488], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE6488], 0x1
        mov     ecx, offset mem_00AE6484
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE6484], 0x94a394
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE6484
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

// [0x004E4B80] sub_004E4B80 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE6490;
extern "C" int mem_00AE648C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004E4B80(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88dee7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE6490], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE6490], 0x1
        mov     ecx, offset mem_00AE648C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE648C], 0x94a544
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE648C
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

// [0x004E4C30] sub_004E4C30 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE6498;
extern "C" int mem_00AE6494;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004E4C30(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88df17
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE6498], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE6498], 0x1
        mov     ecx, offset mem_00AE6494
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE6494], 0x94a6f4
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE6494
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

// [0x004E4CE0] sub_004E4CE0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE64A0;
extern "C" int mem_00AE649C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004E4CE0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88df47
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE64A0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE64A0], 0x1
        mov     ecx, offset mem_00AE649C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE649C], 0x94a8a4
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE649C
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

// [0x004E4D90] sub_004E4D90 (165 bytes)
extern "C" int mem_00AE64A8;
extern "C" int mem_00AE64A4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004E4D90(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88df77
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE64A8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE64A8], 0x1
        mov     ecx, offset mem_00AE64A4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE64A4], 0x94aa54
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE64A4
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

// [0x004EB600] sub_004EB600 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE7140;
extern "C" int mem_00AE713C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004EB600(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88e9f7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE7140], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE7140], 0x1
        mov     ecx, offset mem_00AE713C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE713C], 0x94b184
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE713C
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

// [0x004EB6B0] sub_004EB6B0 (165 bytes)
extern "C" int mem_00AE7148;
extern "C" int mem_00AE7144;
extern "C" __declspec(naked) void __fastcall fn_004EB6B0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88ea27
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE7148], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE7148], 0x1
        mov     ecx, offset mem_00AE7144
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE7144], 0x94b334
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE7144
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

// [0x004EB760] sub_004EB760 (165 bytes)
extern "C" int mem_00AE7150;
extern "C" int mem_00AE714C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004EB760(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88ea57
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE7150], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE7150], 0x1
        mov     ecx, offset mem_00AE714C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE714C], 0x94b4e4
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE714C
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

// [0x004EB810] sub_004EB810 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE7158;
extern "C" int mem_00AE7154;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004EB810(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88ea87
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE7158], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE7158], 0x1
        mov     ecx, offset mem_00AE7154
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE7154], 0x94b694
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE7154
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

// [0x004EE430] sub_004EE430 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE79E0;
extern "C" int mem_00AE79DC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004EE430(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88eff7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE79E0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE79E0], 0x1
        mov     ecx, offset mem_00AE79DC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE79DC], 0x94bbfc
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE79DC
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

// [0x004EE4E0] sub_004EE4E0 (165 bytes)
extern "C" int mem_00AE79E8;
extern "C" int mem_00AE79E4;

extern "C" __declspec(naked) void __fastcall fn_004EE4E0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88f027
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE79E8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE79E8], 0x1
        mov     ecx, offset mem_00AE79E4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE79E4], 0x94bdac
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE79E4
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

// [0x004EE6B0] sub_004EE6B0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE79F0;
extern "C" int mem_00AE79EC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004EE6B0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x88f057
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE79F0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE79F0], 0x1
        mov     ecx, offset mem_00AE79EC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE79EC], 0x94bb24
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE79EC
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

// [0x004EEDC0] sub_004EEDC0 (618 bytes)
extern "C" void ext_004EED30();
extern "C" void ext_004EE430();
extern "C" void ext_004EE4E0();
extern "C" void ext_006790C0();
extern "C" int mem_00A9F260;
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F848;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004EEDC0(void* self) {
    __asm {
        push    -1
        push    0x88b24a
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x74
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x8c]
        push    edi
        xor     ebx, ebx
        push    ebx
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    ext_004EED30
        push    0x94c04c
        lea     ecx, [esp + 0x30]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [mem_00A9F260]
        push    ecx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x8c], ebx
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0x2c]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x90], 1
        call    ext_006790C0
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x88], bl
        call    dword ptr [mem_00924FF4]
        or      edi, -1
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x88], edi
        call    dword ptr [mem_00924FF4]
        push    0x94c02c
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [mem_00A9F260]
        push    ecx
        mov     ebx, 2
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x8c], ebx
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x90], 3
        call    ext_006790C0
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x88], bl
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x88], edi
        call    dword ptr [mem_00924FF4]
        push    0x94c018
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [mem_00A9F260]
        push    ecx
        mov     ebx, 4
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x8c], ebx
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x90], 5
        call    ext_006790C0
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x88], bl
        call    dword ptr [mem_00924FF4]
        mov     dword ptr [esp + 0x88], edi
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FF4]
        push    0x94c000
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [mem_00A9F260]
        push    ecx
        mov     ebx, 6
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x8c], ebx
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x90], 7
        call    ext_006790C0
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x88], bl
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x88], edi
        call    dword ptr [mem_00924FF4]
        push    0x94bfec
        lea     ecx, [esp + 0x68]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [mem_00A9F260]
        push    ecx
        mov     ebx, 8
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x8c], ebx
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0x64]
        push    edx
        lea     eax, [esp + 0x4c]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x90], 9
        call    ext_006790C0
        lea     ecx, [esp + 0x48]
        mov     byte ptr [esp + 0x88], bl
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x64]
        mov     dword ptr [esp + 0x88], edi
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [mem_00A9F838]
        push    ecx
        lea     ecx, [esp + 0x10]
        call    ext_004EE430
        mov     edx, dword ptr [mem_00A9F848]
        push    edx
        lea     ecx, [esp + 0x10]
        call    ext_004EE4E0
        mov     ecx, dword ptr [esp + 0x80]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x80
        ret
    }
}

// [0x004EF030] sub_004EF030 (636 bytes)
extern "C" void ext_004EE630();
extern "C" void ext_004EE6B0();

extern "C" __declspec(naked) void __fastcall fn_004EF030(void* self) {
    __asm {
        push    -1
        push    0x88b24a
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x74
        push    ebx
        push    esi
        lea     eax, [esp + 0x8]
        push    0x94c088
        push    eax
        call    ext_006798D0
        mov     ecx, eax
        call    ext_004EED30
        push    0x94c078
        lea     ecx, [esp + 0xc]
        call    ext_004EE630
        push    0x94c060
        lea     ecx, [esp + 0xc]
        call    ext_004EE6B0
        push    0x94c04c
        lea     ecx, [esp + 0x2c]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [mem_00A9F260]
        push    ecx
        xor     ebx, ebx
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x88], ebx
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0x28]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        mov     byte ptr [esp + 0x8c], 1
        call    ext_006798D0
        mov     ecx, eax
        call    ext_006790C0
        lea     ecx, [esp + 0xc]
        mov     byte ptr [esp + 0x84], bl
        call    dword ptr [mem_00924FF4]
        or      esi, -1
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x84], esi
        call    dword ptr [mem_00924FF4]
        push    0x94c02c
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [mem_00A9F260]
        push    ecx
        mov     ebx, 2
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x88], ebx
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0xc]
        push    edx
        lea     eax, [esp + 0x2c]
        push    eax
        mov     byte ptr [esp + 0x8c], 3
        call    ext_006798D0
        mov     ecx, eax
        call    ext_006790C0
        lea     ecx, [esp + 0x28]
        mov     byte ptr [esp + 0x84], bl
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x84], esi
        call    dword ptr [mem_00924FF4]
        push    0x94c018
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [mem_00A9F260]
        push    ecx
        mov     ebx, 4
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x88], ebx
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0xc]
        push    edx
        lea     eax, [esp + 0x2c]
        mov     byte ptr [esp + 0x88], 5
        push    eax
        call    ext_006798D0
        mov     ecx, eax
        call    ext_006790C0
        lea     ecx, [esp + 0x28]
        mov     byte ptr [esp + 0x84], bl
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x84], esi
        call    dword ptr [mem_00924FF4]
        push    0x94c000
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [mem_00A9F260]
        push    ecx
        mov     ebx, 6
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x88], ebx
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0xc]
        push    edx
        lea     eax, [esp + 0x2c]
        push    eax
        mov     byte ptr [esp + 0x8c], 7
        call    ext_006798D0
        mov     ecx, eax
        call    ext_006790C0
        lea     ecx, [esp + 0x28]
        mov     byte ptr [esp + 0x84], bl
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x84], esi
        call    dword ptr [mem_00924FF4]
        push    0x94bfec
        lea     ecx, [esp + 0x64]
        call    dword ptr [mem_00924FE4]
        mov     ecx, dword ptr [mem_00A9F260]
        push    ecx
        mov     ebx, 8
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x88], ebx
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0x60]
        push    edx
        lea     eax, [esp + 0x48]
        push    eax
        mov     byte ptr [esp + 0x8c], 9
        call    ext_006798D0
        mov     ecx, eax
        call    ext_006790C0
        lea     ecx, [esp + 0x44]
        mov     byte ptr [esp + 0x84], bl
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x60]
        mov     dword ptr [esp + 0x84], esi
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x7c]
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x80
        ret
    }
}

// [0x004E3DE0] sub_004E3DE0 (315 bytes)
extern "C" void ext_00466910();
extern "C" void ext_00466F00();
extern "C" void ext_00594000();
extern "C" void ext_005A1070();
extern "C" void ext_00662120();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF0;
extern "C" int mem_00B40640;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004E3DE0(void* self) {
    __asm {
        push    -1
        push    0x89f614
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x80
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        call    ext_00594000
        lea     esi, [eax + 0x168]
        push    esi
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x30], esi
        call    ext_00466F00
        mov     ecx, esi
        mov     dword ptr [esp + 0x98], 0
        call    ext_00662120
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE8]
        mov     ecx, dword ptr [edi + 0x168]
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x10]
        push    1
        lea     edx, [esp + 0x14]
        push    edx
        mov     byte ptr [esp + 0xa0], 1
        call    eax
        mov     ebp, dword ptr [edi + 0x19c]
        push    0
        lea     esi, [edi + 0x19c]
        push    0
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_00924FF0]
        mov     edx, dword ptr [ebp + 8]
        push    eax
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [edi + 0x168]
        mov     eax, dword ptr [ecx + 4]
        mov     edx, dword ptr [eax + 0x24]
        mov     ebx, dword ptr [edi + 0x1a0]
        add     ecx, 4
        lea     ebp, [edi + 0x1a0]
        call    edx
        push    eax
        mov     eax, dword ptr [ebx + 0x5c]
        mov     ecx, ebp
        call    eax
        push    2
        mov     ecx, esi
        call    ext_005A1070
        mov     ecx, dword ptr [edi + 0x168]
        mov     edx, dword ptr [ecx + 8]
        mov     eax, dword ptr [mem_00B40640]
        mov     edx, dword ptr [edx + 0xc]
        add     ecx, 8
        push    eax
        call    edx
        mov     edx, dword ptr [mem_00B40640]
        mov     esi, eax
        mov     eax, dword ptr [edi + 0x1a4]
        mov     eax, dword ptr [eax + 0xc]
        lea     ecx, [edi + 0x1a4]
        push    edx
        call    eax
        mov     edi, eax
        mov     ecx, 0x10
        rep     movsd
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x98], 0
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x98], 0xffffffff
        call    ext_00466910
        mov     ecx, dword ptr [esp + 0x90]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x8c
        ret
    }
}

// [0x004E9750] sub_004E9750 (151 bytes)
extern "C" void ext_004A6F10();
extern "C" void ext_004E82C0();
extern "C" void ext_004E91E0();
extern "C" void ext_006657F0();

extern "C" __declspec(naked) void* __fastcall fn_004E9750(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        push -1
        push 0088e6beh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 0
        mov dword ptr [esp+0ch], esi
        call ext_006657F0
        mov eax, dword ptr [esp+1ch]
        push eax
        lea ecx, [esi+14h]
        mov dword ptr [esp+18h], 0
        mov dword ptr [esi], 0094b0ech
        mov dword ptr [esi+10h], eax
        call ext_004E82C0
        mov eax, dword ptr [esi+10h]
        lea edi, [esi+34h]
        push eax
        mov ecx, edi
        mov byte ptr [esp+18h], 1
        call ext_004A6F10
        mov ecx, dword ptr [esp+30h]
        mov edx, dword ptr [esp+2ch]
        mov eax, dword ptr [esp+24h]
        push 0
        push 1
        push ecx
        mov ecx, dword ptr [esp+34h]
        push edx
        mov edx, dword ptr [esp+30h]
        push ecx
        push eax
        push edx
        mov ecx, edi
        mov byte ptr [esp+30h], 2
        mov dword ptr [esi+8], eax
        call ext_004E91E0
        mov ecx, dword ptr [esp+0ch]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 18h
    }
}

extern "C" void ext_0041A920();
extern "C" void ext_0050ED40();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

// [0x004E8AB0] sub_004E8AB0 (176 bytes)
__declspec(naked) void __fastcall fn_004E8AB0(void* self) {
    __asm {
        sub     esp, 0x8
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        cmp     dword ptr [ebp + 0x4], esi
        push    edi
        jbe     lbl1
        call    ebx
    lbl1:
        mov     edi, dword ptr [ebp + 0x4]
        cmp     edi, dword ptr [ebp + 0x8]
        jbe     lbl2
        call    ebx
    lbl2:
        push    esi
        push    ebp
        push    edi
        push    ebp
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, ebp
        call    ext_00596660
        mov     esi, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        jne     lbl3
        xor     eax, eax
        jmp     lbl4
    lbl3:
        mov     eax, dword ptr [esi + 0x8]
        sub     eax, ecx
        sar     eax, 0x2
    lbl4:
        push    eax
        mov     ecx, ebp
        call    ext_0050ED40
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, dword ptr [esi + 0x8]
        jbe     lbl5
        call    ebx
        mov     edi, edi
    lbl5:
        mov     ebx, dword ptr [esi + 0x8]
        cmp     dword ptr [esi + 0x4], ebx
        jbe     lbl6
        call    dword ptr [mem_00925134]
    lbl6:
        cmp     edi, ebx
        je      lbl10
        cmp     edi, dword ptr [esi + 0x8]
        jb      lbl7
        call    dword ptr [mem_00925134]
    lbl7:
        mov     eax, dword ptr [edi]
        test    eax, eax
        je      lbl8
        add     eax, 0x4
        mov     dword ptr [esp + 0x20], eax
        je      lbl8
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, ebp
        call    ext_0041A920
    lbl8:
        cmp     edi, dword ptr [esi + 0x8]
        jb      lbl9
        call    dword ptr [mem_00925134]
    lbl9:
        add     edi, 0x4
        jmp     lbl5
    lbl10:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }
}

extern "C" void ext_0041A920();
extern "C" void ext_0050ED40();
extern "C" void ext_00596660();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;

// [0x004E8640] sub_004E8640 (194 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E8640(void* self) {
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        push    ebp
        mov     ebp, dword ptr [esp + 18h]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        cmp     dword ptr [ebp + 4], esi
        push    edi
        jbe     L_a
        call    ebx
L_a:
        mov     edi, dword ptr [ebp + 4]
        cmp     edi, dword ptr [ebp + 8]
        jbe     L_b
        call    ebx
L_b:
        push    esi
        push    ebp
        push    edi
        push    ebp
        lea     eax, [esp + 20h]
        push    eax
        mov     ecx, ebp
        call    ext_00596660
        mov     edi, dword ptr [esp + 1Ch]
        mov     ecx, dword ptr [edi + 4]
        test    ecx, ecx
        jne     L_c
        xor     eax, eax
        jmp     L_d
L_c:
        mov     eax, dword ptr [edi + 8]
        sub     eax, ecx
        sar     eax, 2
L_d:
        push    eax
        mov     ecx, ebp
        call    ext_0050ED40
        mov     esi, dword ptr [edi + 4]
        cmp     esi, dword ptr [edi + 8]
        jbe     L_e
        call    ebx
        mov     edi, edi
L_e:
        mov     ebx, dword ptr [edi + 8]
        cmp     dword ptr [edi + 4], ebx
        jbe     L_f
        call    dword ptr [mem_00925134]
L_f:
        cmp     esi, ebx
        je      L_done
        cmp     esi, dword ptr [edi + 8]
        jb      L_g
        call    dword ptr [mem_00925134]
L_g:
        mov     ecx, dword ptr [esi]
        push    0
        push    0A2E2BCh
        push    0A2E2D8h
        push    0
        push    ecx
        call    ext_006A6E9E
        add     esp, 14h
        test    eax, eax
        mov     dword ptr [esp + 20h], eax
        je      L_next
        lea     edx, [esp + 20h]
        push    edx
        mov     ecx, ebp
        call    ext_0041A920
L_next:
        cmp     esi, dword ptr [edi + 8]
        jb      L_inc
        call    dword ptr [mem_00925134]
L_inc:
        add     esi, 4
        jmp     L_e
L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}

// [0x004E8B60] sub_004E8B60 (194 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_0050ED40();
extern "C" void ext_00596660();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004E8B60(void* self) {
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        cmp     dword ptr [ebp + 4], esi
        push    edi
        jbe     L_chk2
        call    ebx
    L_chk2:
        mov     edi, dword ptr [ebp + 4]
        cmp     edi, dword ptr [ebp + 8]
        jbe     L_call1
        call    ebx
    L_call1:
        push    esi
        push    ebp
        push    edi
        push    ebp
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, ebp
        call    ext_00596660
        mov     edi, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [edi + 4]
        test    ecx, ecx
        jne     L_nonempty
        xor     eax, eax
        jmp     L_have_count
    L_nonempty:
        mov     eax, dword ptr [edi + 8]
        sub     eax, ecx
        sar     eax, 2
    L_have_count:
        push    eax
        mov     ecx, ebp
        call    ext_0050ED40
        mov     esi, dword ptr [edi + 4]
        cmp     esi, dword ptr [edi + 8]
        jbe     L_loop_head
        call    ebx
        mov     edi, edi
    L_loop_head:
        mov     ebx, dword ptr [edi + 8]
        cmp     dword ptr [edi + 4], ebx
        jbe     L_loop_cmp
        call    dword ptr [mem_00925134]
    L_loop_cmp:
        cmp     esi, ebx
        je      L_done
        cmp     esi, dword ptr [edi + 8]
        jb      L_cast
        call    dword ptr [mem_00925134]
    L_cast:
        mov     ecx, dword ptr [esi]
        push    0
        push    0xa2fb78
        push    0xa2e2d8
        push    0
        push    ecx
        call    ext_006A6E9E
        add     esp, 0x14
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        je      L_next
        lea     edx, [esp + 0x20]
        push    edx
        mov     ecx, ebp
        call    ext_0041A920
    L_next:
        cmp     esi, dword ptr [edi + 8]
        jb      L_inc
        call    dword ptr [mem_00925134]
    L_inc:
        add     esi, 4
        jmp     L_loop_head
    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}

// [0x004E8C30] sub_004E8C30 (194 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E8C30(void* self) {
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        push    ebp
        mov     ebp, dword ptr [esp + 18h]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        cmp     dword ptr [ebp + 4], esi
        push    edi
        jbe     L_chk2
        call    ebx
    L_chk2:
        mov     edi, dword ptr [ebp + 4]
        cmp     edi, dword ptr [ebp + 8]
        jbe     L_call1
        call    ebx
    L_call1:
        push    esi
        push    ebp
        push    edi
        push    ebp
        lea     eax, [esp + 20h]
        push    eax
        mov     ecx, ebp
        call    ext_00596660
        mov     edi, dword ptr [esp + 1Ch]
        mov     ecx, dword ptr [edi + 4]
        test    ecx, ecx
        jne     L_nonempty
        xor     eax, eax
        jmp     L_have_count
    L_nonempty:
        mov     eax, dword ptr [edi + 8]
        sub     eax, ecx
        sar     eax, 2
    L_have_count:
        push    eax
        mov     ecx, ebp
        call    ext_0050ED40
        mov     esi, dword ptr [edi + 4]
        cmp     esi, dword ptr [edi + 8]
        jbe     L_loop_init
        call    ebx
        mov     edi, edi
    L_loop_init:
        mov     ebx, dword ptr [edi + 8]
        cmp     dword ptr [edi + 4], ebx
        jbe     L_loop_cond
        call    dword ptr [mem_00925134]
    L_loop_cond:
        cmp     esi, ebx
        je      L_done
        cmp     esi, dword ptr [edi + 8]
        jb      L_cast
        call    dword ptr [mem_00925134]
    L_cast:
        mov     ecx, dword ptr [esi]
        push    0
        push    0A2FBBCh
        push    0A2E2D8h
        push    0
        push    ecx
        call    ext_006A6E9E
        add     esp, 14h
        test    eax, eax
        mov     dword ptr [esp + 20h], eax
        je      L_next
        lea     edx, [esp + 20h]
        push    edx
        mov     ecx, ebp
        call    ext_0041A920
    L_next:
        cmp     esi, dword ptr [edi + 8]
        jb      L_inc
        call    dword ptr [mem_00925134]
    L_inc:
        add     esi, 4
        jmp     L_loop_init
    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}

// [0x004E8D00] sub_004E8D00 (194 bytes)
extern "C" int mem_00A2FB54;
extern "C" int mem_00A2E2D8;
extern "C" __declspec(naked) void __fastcall fn_004E8D00(void* self) {
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        push    ebp
        mov     ebp, dword ptr [esp + 18h]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        cmp     dword ptr [ebp + 4], esi
        push    edi
        jbe     L_chk2
        call    ebx
    L_chk2:
        mov     edi, dword ptr [ebp + 4]
        cmp     edi, dword ptr [ebp + 8]
        jbe     L_call1
        call    ebx
    L_call1:
        push    esi
        push    ebp
        push    edi
        push    ebp
        lea     eax, [esp + 20h]
        push    eax
        mov     ecx, ebp
        call    ext_00596660
        mov     edi, dword ptr [esp + 1Ch]
        mov     ecx, dword ptr [edi + 4]
        test    ecx, ecx
        jne     L_nonempty
        xor     eax, eax
        jmp     L_have_count
    L_nonempty:
        mov     eax, dword ptr [edi + 8]
        sub     eax, ecx
        sar     eax, 2
    L_have_count:
        push    eax
        mov     ecx, ebp
        call    ext_0050ED40
        mov     esi, dword ptr [edi + 4]
        cmp     esi, dword ptr [edi + 8]
        jbe     L_loop_init
        call    ebx
        mov     edi, edi
    L_loop_init:
        mov     ebx, dword ptr [edi + 8]
        cmp     dword ptr [edi + 4], ebx
        jbe     L_loop_cmp
        call    dword ptr [mem_00925134]
    L_loop_cmp:
        cmp     esi, ebx
        je      L_done
        cmp     esi, dword ptr [edi + 8]
        jb      L_cast
        call    dword ptr [mem_00925134]
    L_cast:
        mov     ecx, dword ptr [esi]
        push    0
        push    offset mem_00A2FB54
        push    offset mem_00A2E2D8
        push    0
        push    ecx
        call    ext_006A6E9E
        add     esp, 14h
        test    eax, eax
        mov     dword ptr [esp + 20h], eax
        je      L_next
        lea     edx, [esp + 20h]
        push    edx
        mov     ecx, ebp
        call    ext_0041A920
    L_next:
        cmp     esi, dword ptr [edi + 8]
        jb      L_inc
        call    dword ptr [mem_00925134]
    L_inc:
        add     esi, 4
        jmp     L_loop_init
    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}

// [0x004E8DD0] sub_004E8DD0 (194 bytes)
extern "C" int mem_00A2FC50;
extern "C" __declspec(naked) void __fastcall fn_004E8DD0(void* self) {
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        push    ebp
        mov     ebp, dword ptr [esp + 18h]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        cmp     dword ptr [ebp + 4], esi
        push    edi
        jbe     L_chk2
        call    ebx
    L_chk2:
        mov     edi, dword ptr [ebp + 4]
        cmp     edi, dword ptr [ebp + 8]
        jbe     L_call1
        call    ebx
    L_call1:
        push    esi
        push    ebp
        push    edi
        push    ebp
        lea     eax, [esp + 20h]
        push    eax
        mov     ecx, ebp
        call    ext_00596660
        mov     edi, dword ptr [esp + 1Ch]
        mov     ecx, dword ptr [edi + 4]
        test    ecx, ecx
        jne     L_nonempty
        xor     eax, eax
        jmp     L_have_count
    L_nonempty:
        mov     eax, dword ptr [edi + 8]
        sub     eax, ecx
        sar     eax, 2
    L_have_count:
        push    eax
        mov     ecx, ebp
        call    ext_0050ED40
        mov     esi, dword ptr [edi + 4]
        cmp     esi, dword ptr [edi + 8]
        jbe     L_loop_init
        call    ebx
        mov     edi, edi
    L_loop_init:
        mov     ebx, dword ptr [edi + 8]
        cmp     dword ptr [edi + 4], ebx
        jbe     L_loop_cmp
        call    dword ptr [mem_00925134]
    L_loop_cmp:
        cmp     esi, ebx
        je      L_done
        cmp     esi, dword ptr [edi + 8]
        jb      L_cast
        call    dword ptr [mem_00925134]
    L_cast:
        mov     ecx, dword ptr [esi]
        push    0
        push    offset mem_00A2FC50
        push    offset mem_00A2E2D8
        push    0
        push    ecx
        call    ext_006A6E9E
        add     esp, 14h
        test    eax, eax
        mov     dword ptr [esp + 20h], eax
        je      L_next
        lea     edx, [esp + 20h]
        push    edx
        mov     ecx, ebp
        call    ext_0041A920
    L_next:
        cmp     esi, dword ptr [edi + 8]
        jb      L_inc
        call    dword ptr [mem_00925134]
    L_inc:
        add     esi, 4
        jmp     L_loop_init
    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}

// [0x004E8EA0] sub_004E8EA0 (194 bytes)
extern "C" int mem_00A2FC0C;
extern "C" __declspec(naked) void __fastcall fn_004E8EA0(void* self) {
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        push    ebp
        mov     ebp, dword ptr [esp + 18h]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        cmp     dword ptr [ebp + 4], esi
        push    edi
        jbe     L_chk2
        call    ebx
    L_chk2:
        mov     edi, dword ptr [ebp + 4]
        cmp     edi, dword ptr [ebp + 8]
        jbe     L_call1
        call    ebx
    L_call1:
        push    esi
        push    ebp
        push    edi
        push    ebp
        lea     eax, [esp + 20h]
        push    eax
        mov     ecx, ebp
        call    ext_00596660
        mov     edi, dword ptr [esp + 1Ch]
        mov     ecx, dword ptr [edi + 4]
        test    ecx, ecx
        jne     L_nonempty
        xor     eax, eax
        jmp     L_have_count
    L_nonempty:
        mov     eax, dword ptr [edi + 8]
        sub     eax, ecx
        sar     eax, 2
    L_have_count:
        push    eax
        mov     ecx, ebp
        call    ext_0050ED40
        mov     esi, dword ptr [edi + 4]
        cmp     esi, dword ptr [edi + 8]
        jbe     L_loop_start
        call    ebx
        mov     edi, edi
    L_loop_start:
        mov     ebx, dword ptr [edi + 8]
        cmp     dword ptr [edi + 4], ebx
        jbe     L_loop_cmp
        call    dword ptr [mem_00925134]
    L_loop_cmp:
        cmp     esi, ebx
        je      L_done
        cmp     esi, dword ptr [edi + 8]
        jb      L_deref
        call    dword ptr [mem_00925134]
    L_deref:
        mov     ecx, dword ptr [esi]
        push    0
        push    offset mem_00A2FC0C
        push    offset mem_00A2E2D8
        push    0
        push    ecx
        call    ext_006A6E9E
        add     esp, 14h
        test    eax, eax
        mov     dword ptr [esp + 20h], eax
        je      L_next
        lea     edx, [esp + 20h]
        push    edx
        mov     ecx, ebp
        call    ext_0041A920
    L_next:
        cmp     esi, dword ptr [edi + 8]
        jb      L_inc
        call    dword ptr [mem_00925134]
    L_inc:
        add     esi, 4
        jmp     L_loop_start
    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}

// [0x004E8F70] sub_004E8F70 (194 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_0050ED40();
extern "C" void ext_00596660();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" int mem_00A2FBE4;
extern "C" int mem_00A2E2D8;

extern "C" __declspec(naked) void __fastcall fn_004E8F70(void* self) {
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        push    ebp
        mov     ebp, dword ptr [esp + 18h]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        cmp     dword ptr [ebp + 4], esi
        push    edi
        jbe     L_chk2
        call    ebx
    L_chk2:
        mov     edi, dword ptr [ebp + 4]
        cmp     edi, dword ptr [ebp + 8]
        jbe     L_call1
        call    ebx
    L_call1:
        push    esi
        push    ebp
        push    edi
        push    ebp
        lea     eax, [esp + 20h]
        push    eax
        mov     ecx, ebp
        call    ext_00596660
        mov     edi, dword ptr [esp + 1Ch]
        mov     ecx, dword ptr [edi + 4]
        test    ecx, ecx
        jne     L_nonempty
        xor     eax, eax
        jmp     L_have_count
    L_nonempty:
        mov     eax, dword ptr [edi + 8]
        sub     eax, ecx
        sar     eax, 2
    L_have_count:
        push    eax
        mov     ecx, ebp
        call    ext_0050ED40
        mov     esi, dword ptr [edi + 4]
        cmp     esi, dword ptr [edi + 8]
        jbe     L_loop
        call    ebx
        mov     edi, edi
    L_loop:
        mov     ebx, dword ptr [edi + 8]
        cmp     dword ptr [edi + 4], ebx
        jbe     L_cmp_end
        call    dword ptr [mem_00925134]
    L_cmp_end:
        cmp     esi, ebx
        je      L_done
        cmp     esi, dword ptr [edi + 8]
        jb      L_deref
        call    dword ptr [mem_00925134]
    L_deref:
        mov     ecx, dword ptr [esi]
        push    0
        push    offset mem_00A2FBE4
        push    offset mem_00A2E2D8
        push    0
        push    ecx
        call    ext_006A6E9E
        add     esp, 14h
        test    eax, eax
        mov     dword ptr [esp + 20h], eax
        je      L_next
        lea     edx, [esp + 20h]
        push    edx
        mov     ecx, ebp
        call    ext_0041A920
    L_next:
        cmp     esi, dword ptr [edi + 8]
        jb      L_inc
        call    dword ptr [mem_00925134]
    L_inc:
        add     esi, 4
        jmp     L_loop
    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}

// [0x004E9040] sub_004E9040 (194 bytes)
extern "C" int mem_00A2FC34;
extern "C" __declspec(naked) void __fastcall fn_004E9040(void* self) {
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        push    ebp
        mov     ebp, dword ptr [esp + 18h]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        cmp     dword ptr [ebp + 4], esi
        push    edi
        jbe     L_chk2
        call    ebx
    L_chk2:
        mov     edi, dword ptr [ebp + 4]
        cmp     edi, dword ptr [ebp + 8]
        jbe     L_call1
        call    ebx
    L_call1:
        push    esi
        push    ebp
        push    edi
        push    ebp
        lea     eax, [esp + 20h]
        push    eax
        mov     ecx, ebp
        call    ext_00596660
        mov     edi, dword ptr [esp + 1Ch]
        mov     ecx, dword ptr [edi + 4]
        test    ecx, ecx
        jne     L_nonempty
        xor     eax, eax
        jmp     L_have_count
    L_nonempty:
        mov     eax, dword ptr [edi + 8]
        sub     eax, ecx
        sar     eax, 2
    L_have_count:
        push    eax
        mov     ecx, ebp
        call    ext_0050ED40
        mov     esi, dword ptr [edi + 4]
        cmp     esi, dword ptr [edi + 8]
        jbe     L_loop
        call    ebx
        mov     edi, edi
    L_loop:
        mov     ebx, dword ptr [edi + 8]
        cmp     dword ptr [edi + 4], ebx
        jbe     L_cmp_end
        call    dword ptr [mem_00925134]
    L_cmp_end:
        cmp     esi, ebx
        je      L_done
        cmp     esi, dword ptr [edi + 8]
        jb      L_cast
        call    dword ptr [mem_00925134]
    L_cast:
        mov     ecx, dword ptr [esi]
        push    0
        push    offset mem_00A2FC34
        push    offset mem_00A2E2D8
        push    0
        push    ecx
        call    ext_006A6E9E
        add     esp, 14h
        test    eax, eax
        mov     dword ptr [esp + 20h], eax
        je      L_next
        lea     edx, [esp + 20h]
        push    edx
        mov     ecx, ebp
        call    ext_0041A920
    L_next:
        cmp     esi, dword ptr [edi + 8]
        jb      L_inc
        call    dword ptr [mem_00925134]
    L_inc:
        add     esi, 4
        jmp     L_loop
    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}

// [0x004E9110] sub_004E9110 (194 bytes)
extern "C" int mem_00A2E914;
extern "C" __declspec(naked) void __fastcall fn_004E9110(void* self) {
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        push    ebp
        mov     ebp, dword ptr [esp + 18h]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        cmp     dword ptr [ebp + 4], esi
        push    edi
        jbe     L_chk2
        call    ebx
    L_chk2:
        mov     edi, dword ptr [ebp + 4]
        cmp     edi, dword ptr [ebp + 8]
        jbe     L_call1
        call    ebx
    L_call1:
        push    esi
        push    ebp
        push    edi
        push    ebp
        lea     eax, [esp + 20h]
        push    eax
        mov     ecx, ebp
        call    ext_00596660
        mov     edi, dword ptr [esp + 1Ch]
        mov     ecx, dword ptr [edi + 4]
        test    ecx, ecx
        jne     L_nonempty
        xor     eax, eax
        jmp     L_have_count
    L_nonempty:
        mov     eax, dword ptr [edi + 8]
        sub     eax, ecx
        sar     eax, 2
    L_have_count:
        push    eax
        mov     ecx, ebp
        call    ext_0050ED40
        mov     esi, dword ptr [edi + 4]
        cmp     esi, dword ptr [edi + 8]
        jbe     L_loop_head
        call    ebx
        mov     edi, edi
    L_loop_head:
        mov     ebx, dword ptr [edi + 8]
        cmp     dword ptr [edi + 4], ebx
        jbe     L_loop_cmp
        call    dword ptr [mem_00925134]
    L_loop_cmp:
        cmp     esi, ebx
        je      L_done
        cmp     esi, dword ptr [edi + 8]
        jb      L_do_cast
        call    dword ptr [mem_00925134]
    L_do_cast:
        mov     ecx, dword ptr [esi]
        push    0
        push    offset mem_00A2E914
        push    offset mem_00A2E2D8
        push    0
        push    ecx
        call    ext_006A6E9E
        add     esp, 14h
        test    eax, eax
        mov     dword ptr [esp + 20h], eax
        je      L_next
        lea     edx, [esp + 20h]
        push    edx
        mov     ecx, ebp
        call    ext_0041A920
    L_next:
        cmp     esi, dword ptr [edi + 8]
        jb      L_inc
        call    dword ptr [mem_00925134]
    L_inc:
        add     esi, 4
        jmp     L_loop_head
    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}

extern "C" void __cdecl ext_004275E0(void* a, int b);
extern "C" void __fastcall ext_004A1A40(void* self, int edx, void* a);
extern "C" void ext_0063EFE0();
extern "C" void __fastcall ext_006822D0(void* self, int edx, void* a);
extern "C" void __fastcall ext_00682590(void* self, int edx);
extern "C" void __fastcall ext_006826D0(void* self, int edx, void* a);
extern "C" void __fastcall ext_00682860(void* self, int edx);
extern "C" void __fastcall ext_006828F0(void* self, int edx);
extern "C" int mem_00AA23C8;

struct LocalObj_004EBC80 {
    char pad[0x20];
    LocalObj_004EBC80() { ext_00682860(this, 0); }
    ~LocalObj_004EBC80() { ext_006828F0(this, 0); }
};

// [0x004EBC80] sub_004EBC80 (196 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EBC80(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push 88ed68h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 20h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 10h]
        call ext_00682860
        mov eax, dword ptr [mem_00AA23C8]
        mov edi, dword ptr [esp + 40h]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 3Ch], 0
        mov bl, 1
        call ext_0063EFE0
        cmp eax, 0B53A34h
        mov ebp, dword ptr [esp + 44h]
        je L_skip
        cmp eax, 0B53B30h
        je L_skip
        cmp eax, 0B53AB0h
        je L_skip
        cmp eax, 0B53A70h
        je L_skip
        cmp eax, 0B53AF0h
        je L_skip
        push eax
        push ebp
        call ext_004275E0
        add esp, 8
        push ebp
        lea ecx, [esp + 14h]
        call ext_006826D0
        xor bl, bl
    L_skip:
        push edi
        mov ecx, esi
        call ext_004A1A40
        test bl, bl
        je L_end
        lea ecx, [esp + 10h]
        call ext_00682590
        push ebp
        lea ecx, [esp + 14h]
        call ext_006822D0
    L_end:
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 38h], 0FFFFFFFFh
        call ext_006828F0
        mov ecx, dword ptr [esp + 30h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 2Ch
        ret 8
    }
}

// [0x004E8570] sub_004E8570 (200 bytes)
extern "C" void ext_00406510();
extern "C" void ext_0040ECB0();
extern "C" int mem_00925134; /* "P{b" */
extern "C" int mem_00924FF4; /* u32 0x00628FF0 */
extern "C" __declspec(naked) void __cdecl fn_004E8570(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr [esp + 0x38]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        push edi
        jbe L_4E85A0
        call ebp
L_4E85A0:
        mov edi, dword ptr [ebx + 0x4]
        cmp edi, dword ptr [ebx + 0x8]
        jbe L_4E85AA
        call ebp
L_4E85AA:
        push esi
        push ebx
        push edi
        push ebx
        lea eax, [esp + 0x20]
        push eax
        mov ecx, ebx
        call ext_00406510
        mov edi, dword ptr [esp + 0x48]
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_4E85C8
        call ebp
L_4E85C8:
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe L_4E85D6
        call dword ptr [mem_00925134]
L_4E85D6:
        cmp esi, ebp
        je L_4E8625
        cmp esi, dword ptr [edi + 0x8]
        jb L_4E85E5
        call dword ptr [mem_00925134]
L_4E85E5:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xc]
        lea eax, [esp + 0x18]
        push eax
        call edx
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x40], 0x0
        call ext_0040ECB0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x3c], -1
        call dword ptr [mem_00924FF4]
        cmp esi, dword ptr [edi + 0x8]
        jb L_4E8620
        call dword ptr [mem_00925134]
L_4E8620:
        add esi, 0x4
        jmp L_4E85C8
L_4E8625:
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x30
        ret
    }
}

// [0x004E84A0] sub_004E84A0 (204 bytes)
extern "C" void ext_00406510();
extern "C" void ext_0040ECB0();
extern "C" int mem_00925134; /* "P{b" */
extern "C" int mem_00924FF4; /* u32 0x00628FF0 */
extern "C" __declspec(naked) void __cdecl fn_004E84A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr [esp + 0x38]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        push edi
        jbe L_4E84D0
        call ebp
    L_4E84D0:
        mov edi, dword ptr [ebx + 0x4]
        cmp edi, dword ptr [ebx + 0x8]
        jbe L_4E84DA
        call ebp
    L_4E84DA:
        push esi
        push ebx
        push edi
        push ebx
        lea eax, [esp + 0x20]
        push eax
        mov ecx, ebx
        call ext_00406510
        mov edi, dword ptr [esp + 0x48]
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_4E84F8
        call ebp
    L_4E84F8:
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe L_4E8506
        call dword ptr [mem_00925134]
    L_4E8506:
        cmp esi, ebp
        je L_4E8559
        cmp esi, dword ptr [edi + 0x8]
        jb L_4E8515
        call dword ptr [mem_00925134]
    L_4E8515:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [eax + 0x4]
        lea eax, [esp + 0x18]
        push eax
        call edx
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x40], 0
        call ext_0040ECB0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x3c], -1
        call dword ptr [mem_00924FF4]
        cmp esi, dword ptr [edi + 0x8]
        jb L_4E8554
        call dword ptr [mem_00925134]
    L_4E8554:
        add esi, 0x4
        jmp L_4E84F8
    L_4E8559:
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x30
        ret
    }
}
