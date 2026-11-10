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
