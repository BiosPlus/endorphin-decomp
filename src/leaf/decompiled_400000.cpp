// Decompiled translation unit: src/leaf/decompiled_400000.cpp

#include <string>

// [0x00401B60] sub_00401B60 (27 bytes)
extern "C" int mem_00928ECC;
extern "C" int mem_00924FF4;
extern "C" int mem_009251C0;

extern "C" __declspec(naked) void __fastcall fn_00401B60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0xc]
        mov dword ptr [esi], offset mem_00928ECC
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        pop esi
        jmp dword ptr [mem_009251C0]
    }
}

// [0x00401AC0] sub_00401AC0 (33 bytes)
extern "C" int __fastcall fn_00401AC0(void* self) {
    char** p = (char**)self;
    char* begin = p[1];
    if (begin == 0) {
        return 0;
    }
    return (int)(p[2] - begin) / 28;
}

// [0x0040A910] sub_0040A910 (33 bytes)
extern "C" int mem_00924494;

extern "C" __declspec(naked) void __fastcall fn_0040A910(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x68
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924494]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00407730] sub_00407730 (13 bytes)
extern "C" void ext_006A5EA8();

extern "C" int __fastcall fn_00407730(void* self, int edx_unused, int a1, int a2) {
    ext_006A5EA8();
    return 1;
}

// [0x00401040] sub_00401040 (14 bytes)
extern "C" void ext_006A5C5C(int);

extern "C" void __fastcall fn_00401040(void* self, int edx_unused, int a1) {
    ext_006A5C5C(a1);
}

// [0x00402CE0] sub_00402CE0 (15 bytes)
extern "C" void ext_004027B0();

extern "C" __declspec(naked) void __fastcall fn_00402CE0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [eax]
        push eax
        push ecx
        push edx
        push ecx
        call ext_004027B0
        ret
    }
}

// [0x00407830] sub_00407830 (17 bytes)
extern "C" void ext_006A6004();
extern "C" int mem_00925658;

extern "C" __declspec(naked) void __fastcall fn_00407830(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x20]
        push eax
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        ret
    }
}

// [0x00407850] sub_00407850 (17 bytes)
extern "C" void ext_006A5E00();
extern "C" int mem_00925650;

extern "C" __declspec(naked) void __fastcall fn_00407850(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x20]
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        ret
    }
}

// [0x00403160] sub_00403160 (20 bytes)
extern "C" void ext_006A3442();

extern "C" void* __fastcall fn_00403160(void* self, int edx_unused, int a1) {
    typedef void* (__stdcall *GetFrameFn)(void*, int);
    return ((GetFrameFn)ext_006A3442)(*(void**)((char*)self + 0x57c), a1);
}

// [0x0040BF00] sub_0040BF00 (20 bytes)
extern "C" void ext_006A5EDE();
extern "C" void ext_006A60D6();

extern "C" __declspec(naked) void __fastcall fn_0040BF00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 0x4]
        call ext_006A60D6
        mov eax, esi
        pop esi
        ret
    }
}

extern "C" void ext_0040B930();

// [0x0040BC10] sub_0040BC10 (21 bytes)
extern "C" void __fastcall fn_0040BC10(void* self) {
    ext_0040B930();
    void** vtbl = *(void***)self;
    typedef void (__fastcall *Fn)(void*);
    ((Fn)vtbl[0x168 / 4])(self);
}

// [0x0040D4E0] sub_0040D4E0 (23 bytes)
extern "C" void ext_0040C050();
extern "C" void* __fastcall fn_0040D4E0(void* self) {
    typedef void (__thiscall *Fn)(void*, int);
    ((Fn)ext_0040C050)(self, 0x24f);
    *(unsigned int*)self = 0x92b1ac;
    return self;
}

// [0x0040D9C0] sub_0040D9C0 (23 bytes)
extern "C" void ext_0040C050();
extern "C" int mem_0092B50C;

extern "C" __declspec(naked) void __fastcall fn_0040D9C0(void* self) {
    __asm {
        push esi
        push 0x24f
        mov esi, ecx
        call ext_0040C050
        mov dword ptr [esi], offset mem_0092B50C
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0040E780] sub_0040E780 (24 bytes)
extern "C" void ext_0040C510();
extern "C" void ext_0040E420();
extern "C" __declspec(naked) void __fastcall fn_0040E780(void* self) {
    __asm {
        push esi
        push 0x00ac87f8
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_0040C510
        push 0x0
        __asm _emit 0x8B __asm _emit 0xCE // mov ecx, esi
        call ext_0040E420
        pop esi
        ret
    }
}

// [0x0040E7A0] sub_0040E7A0 (24 bytes)
extern "C" void ext_0040C510();
extern "C" void ext_0040E420();
extern "C" __declspec(naked) void __fastcall fn_0040E7A0(void* self) {
    __asm {
        push esi
        push 0x00ac8814
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_0040C510
        push 0x1
        __asm _emit 0x8B __asm _emit 0xCE // mov ecx, esi
        call ext_0040E420
        pop esi
        ret
    }
}

// [0x0040E7C0] sub_0040E7C0 (24 bytes)
extern "C" void ext_0040C510();
extern "C" void ext_0040E420();
extern "C" __declspec(naked) void __fastcall fn_0040E7C0(void* self) {
    __asm {
        push esi
        push 0x00ac8830
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_0040C510
        push 0x2
        __asm _emit 0x8B __asm _emit 0xCE // mov ecx, esi
        call ext_0040E420
        pop esi
        ret
    }
}

// [0x00401D80] sub_00401D80 (25 bytes)
extern "C" int mem_00928F28;
extern "C" void ext_00401C60();

extern "C" __declspec(naked) void __fastcall fn_00401D80(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_00401C60
        mov dword ptr [esi], offset mem_00928F28
        __asm _emit 0x8B __asm _emit 0xC6 // mov eax, esi
        pop esi
        ret 4
    }
}

// [0x00401E60] sub_00401E60 (25 bytes)
extern "C" int mem_00928ED8;
extern "C" void ext_00401E00();

extern "C" __declspec(naked) void __fastcall fn_00401E60(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_00401E00
        mov dword ptr [esi], offset mem_00928ED8
        __asm _emit 0x8B __asm _emit 0xC6 // mov eax, esi
        pop esi
        ret 4
    }
}

// [0x004024E0] sub_004024E0 (25 bytes)
extern "C" void ext_00401E00();
extern "C" int mem_00928EE4;

extern "C" __declspec(naked) void* __fastcall fn_004024E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_00401E00
        mov dword ptr [esi], offset mem_00928EE4
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x00401DE0] sub_00401DE0 (25 bytes)
extern "C" void ext_00403400();

extern "C" __declspec(naked) void __fastcall fn_00401DE0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_00403400
        push esi
        call ext_006A5C5C
        add esp, 0x4
done:
        pop esi
        ret
    }
}

// [0x0040F0B0] sub_0040F0B0 (25 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_0040EFA0();
extern "C" __declspec(naked) void* __fastcall fn_0040F0B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5C6E
        mov ecx, esi
        mov dword ptr [esi], 0x92b7f4
        call ext_0040EFA0
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00407870] sub_00407870 (27 bytes)
extern "C" void ext_006A6E92();

extern "C" __declspec(naked) float __cdecl fn_00407870(float x) {
    __asm {
        fld dword ptr [esp + 0x4]
        sub esp, 0x8
        fstp qword ptr [esp]
        call ext_006A6E92
        fstp dword ptr [esp + 0xc]
        add esp, 0x8
        fld dword ptr [esp + 0x4]
        ret
    }
}

// [0x004064B0] sub_004064B0 (27 bytes)
extern "C" void ext_00406380();

extern "C" __declspec(naked) void __fastcall fn_004064B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00406380
        add esp, 0x10
        ret 0x8
    }
}

// [0x0040DA90] sub_0040DA90 (27 bytes)
extern "C" void ext_0040C490();
extern "C" void ext_0040C510();
extern "C" int mem_00AC87DC;
extern "C" int mem_00AC853C;

extern "C" __declspec(naked) void __fastcall fn_0040DA90(void* self) {
    __asm {
        push esi
        push offset mem_00AC87DC
        mov esi, ecx
        call ext_0040C510
        push offset mem_00AC853C
        mov ecx, esi
        call ext_0040C490
        pop esi
        ret
    }
}

// [0x0040F270] sub_0040F270 (28 bytes)
extern "C" __declspec(naked) int __stdcall fn_0040F270(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        or dword ptr [eax + 0x2c], 0xb
        call ext_006A5EA8
        sub eax, -1
        neg eax
        sbb eax, eax
        neg eax
        sub eax, 1
        ret 0x4
    }
}

// [0x00403400] sub_00403400 (30 bytes)
extern "C" void ext_006A3454();
extern "C" int mem_009240A8;

extern "C" __declspec(naked) void __fastcall fn_00403400(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xdc]
        push eax
        call ext_006A3454
        mov ecx, dword ptr [esi + 0xe4]
        push ecx
        call dword ptr [mem_009240A8]
        pop esi
        ret
    }
}

// [0x0040A8E0] sub_0040A8E0 (34 bytes)
extern "C" void ext_0065C640();
extern "C" __declspec(naked) void** __fastcall fn_0040A8E0(void** self, int edx_unused, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1d8]
        call eax
        mov ecx, eax
        mov dword ptr [esi], eax
        call ext_0065C640
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0040FEA0] sub_0040FEA0 (34 bytes)
extern "C" void ext_006A5EA8();

extern "C" void __fastcall fn_0040FEA0(void* self, int edx_unused, int a1, int a2, int a3) {
    int* flag = (int*)((char*)self + 0x54);
    *flag = (*flag == 0);
    ext_006A5EA8();
    *flag = (*flag == 0);
}

// [0x004026B0] sub_004026B0 (36 bytes)
extern "C" int mem_00924FF4;
extern "C" void __fastcall fn_004026B0(void* self, int edx_unused, void* first, void* last) {
    typedef void (__thiscall *dtor_t)(void*);
    char* p = (char*)first;
    while (p != (char*)last) {
        reinterpret_cast<dtor_t>(mem_00924FF4)(p);
        p += 0x1c;
    }
}

// [0x004031E0] sub_004031E0 (36 bytes)
extern "C" void ext_00558920();
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_004031E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x478]
        mov dword ptr [esi], 0x00929364
        mov dword ptr [esi + 0x4], 0x0092935C
        call dword ptr [mem_009242F4]
        mov ecx, esi
        pop esi
        jmp ext_00558920
    }
}

// [0x00403350] sub_00403350 (36 bytes)
extern "C" void ext_00558920();
extern "C" int mem_009242F4;

extern "C" void __fastcall fn_00403350(void* self) {
    char* p = (char*)self;
    *(int*)p = 0x0092945c;
    *(int*)(p + 4) = 0x00929454;
    typedef void (__fastcall *ctor_fn)(void*);
    ((ctor_fn)(*(int*)&mem_009242F4))(p + 0x504);
    ((void (__fastcall *)(void*))ext_00558920)(self);
}

// [0x0040AB30] sub_0040AB30 (36 bytes)
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_0040AB30(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x2b4
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0040C300] sub_0040C300 (37 bytes)
extern "C" void ext_0042EE50();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_0040C300(void* self) {
    __asm {
        push esi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0xa4]
        push 0x184
        push eax
        call dword ptr [mem_00925694]
        lea ecx, [esi + 0x84]
        pop esi
        jmp ext_0042EE50
    }
}

// [0x0040FE70] sub_0040FE70 (37 bytes)
extern "C" void ext_006A5EA8();
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_0040FE70(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        xor eax, eax
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x54], eax
        sete al
        mov dword ptr [esi + 0x54], eax
        call ext_006A5EA8
        mov ecx, dword ptr [esi + 0x20]
        push 1
        push 0
        push ecx
        call dword ptr [mem_00925688]
        pop esi
        ret 0xc
    }
}

extern "C" int mem_00925134;

// [0x00403530] sub_00403530 (38 bytes)
struct Dec403530Base { int pad[2]; unsigned int limit; };
struct Dec403530Cursor { Dec403530Base* base; unsigned int off; };

extern "C" void* __fastcall fn_00403530(Dec403530Cursor* self) {
    typedef void (__cdecl *InvalidParamFn)();
    InvalidParamFn invalid_param = (InvalidParamFn)mem_00925134;
    if (self->base == 0) {
        invalid_param();
    }
    if (self->off >= self->base->limit) {
        invalid_param();
    }
    self->off += 0x1c;
    return self;
}

// [0x0040E1A0] sub_0040E1A0 (39 bytes)
// Fill [first, last) with copies of *value (std::string elements, 0x1c bytes each).
// Each element is assigned via the MSVCP80 import slot (operator=), matching the original call.
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __cdecl fn_0040E1A0(void* first, void* last, const void* value) {
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
        call dword ptr [mem_00924FDC]
        add esi, 0x1c
        cmp esi, edi
        jne loop_top
        pop ebx
done:
        pop edi
        pop esi
        ret
    }
}

// [0x0040B220] sub_0040B220 (41 bytes)
// Returns " " + s via hidden sret pointer (a1); ecx slot is saved and zeroed as in the original.
extern "C" int mem_00924FCC;
extern "C" int mem_0092AB78;

extern "C" __declspec(naked) void* __fastcall fn_0040B220(void* self, int edx_unused, void* a1, const void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push offset mem_0092AB78
        push esi
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FCC]
        add esp, 0xc
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00401050] sub_00401050 (43 bytes)
extern "C" void __fastcall fn_00401050(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    char* p = (char*)self;
    *(int*)(p + 0x164) = a1;
    *(int*)(p + 0x168) = a2;
    *(int*)(p + 0x16c) = a3;
    *(int*)(p + 0x170) = a4;
}

// [0x0040BC40] sub_0040BC40 (43 bytes)
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;

extern "C" void __fastcall fn_0040BC40(void* self) {
    typedef const char* (__thiscall *CStrFn)(void*);
    typedef void (__thiscall *AssignFn)(void*, const char*);
    unsigned char* p = (unsigned char*)self;
    p[0x35c] = 0;
    const char* s = ((CStrFn)mem_00924FF0)(p + 0x340);
    ((AssignFn)ext_006A5F50)(p + 0x428, s);
    p[0x35c] = 1;
}

// [0x0040FDC0] sub_0040FDC0 (46 bytes)
extern "C" void ext_006A5C6E();

extern "C" __declspec(naked) void* __fastcall fn_0040FDC0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5C6E
        xor eax, eax
        mov ecx, 0xe6
        mov dword ptr [esi + 0x54], eax
        mov dword ptr [esi + 0x5c], eax
        mov dword ptr [esi + 0x58], eax
        mov dword ptr [esi + 0x64], eax
        mov dword ptr [esi + 0x6c], eax
        mov dword ptr [esi], 0x92b9d4
        mov dword ptr [esi + 0x60], ecx
        mov dword ptr [esi + 0x68], ecx
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0040FD60] sub_0040FD60 (47 bytes)
extern "C" __declspec(naked) int __fastcall fn_0040FD60(void* self, int edx_unused, unsigned int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jbe L_out_of_range
        cmp eax, 0x2
        ja L_out_of_range
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x144]
        push 0x1
        call edx
        xor eax, eax
        ret 0x8
    L_out_of_range:
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x144]
        push 0x0
        call edx
        xor eax, eax
        ret 0x8
    }
}

// [0x00408090] sub_00408090 (48 bytes)
// __cdecl(first, last, dest): n = (last - first) >> 2; dest -= 4*n; if (n > 0) memmove_s(dest, 4*n, first, 4*n); return dest.
// Naked: the body calls the MSVCR80!memmove_s IAT slot directly, and the original stack/register layout is kept.
extern "C" int mem_009251EC;
extern "C" __declspec(naked) void* __cdecl fn_00408090(void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        sub eax, edx
        sar eax, 2
        push esi
        mov esi, dword ptr [esp + 0x10]
        lea ecx, [4*eax]
        sub esi, ecx
        test eax, eax
        jle done
        push ecx
        push edx
        push ecx
        push esi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    done:
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00401000] sub_00401000 (50 bytes)
extern "C" __declspec(naked) void __stdcall fn_00401000(void* base, int stride, int count, void* callback) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0x10]
        sub edi, 1
        js done
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
loop_top:
        mov ecx, esi
        call ebx
        add esi, ebp
        sub edi, 1
        jns loop_top
        pop esi
        pop ebp
        pop ebx
done:
        pop edi
        ret 0x10
    }
}

// [0x00403250] sub_00403250 (51 bytes)
extern "C" void ext_006A3448();
extern "C" void __fastcall fn_00403250(void* self, int edx_unused, long lStart, void** p) {
    typedef long (__stdcall *AVIStreamWrite_t)(void*, long, long, void*, long, unsigned long, long*, long*);
    unsigned char* y = *(unsigned char**)p;
    unsigned long cb = *(unsigned long*)(y + 0x14);
    unsigned char* buf = y + *(unsigned long*)y + 4 * *(unsigned long*)(y + 0x20);
    void* stream = *(void**)((unsigned char*)self + 0x500);
    ((AVIStreamWrite_t)ext_006A3448)(stream, lStart, 1, buf, (long)cb, 0x10, 0, 0);
}

// [0x00405410] sub_00405410 (52 bytes)
extern "C" void ext_006A5F50();
extern "C" int mem_00925660;

extern "C" void __fastcall fn_00405410(void* self) {
    unsigned char* p = (unsigned char*)self;
    typedef void (__stdcall *KillTimerFn)(void*, int);
    ((KillTimerFn)mem_00925660)(*(void**)(p + 0x20), *(int*)(p + 0x680));
    typedef void (__thiscall *AssignFn)(void*, int);
    ((AssignFn)ext_006A5F50)(p + 0x2c0, 0x00929f4c);
    *(int*)(p + 0x684) = 0;
    p[0x688] = 0;
}

// [0x00409080] sub_00409080 (52 bytes)
extern "C" void ext_00407730();
extern "C" void ext_006A608E();

extern "C" __declspec(naked) int __fastcall fn_00409080(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_00407730
        test eax, eax
        je fail_00409080
        push 0x0
        mov ecx, esi
        call ext_006A608E
        test eax, eax
        je fail_00409080
        mov eax, 0x1
        pop esi
        ret 0x8
    fail_00409080:
        xor eax, eax
        pop esi
        ret 0x8
    }
}

// [0x00401080] sub_00401080 (53 bytes)
extern "C" int mem_00925694;
extern "C" __declspec(naked) void __fastcall fn_00401080(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jne short L_nonzero
        mov edx, dword ptr [esp + 8]
        push edx
        push eax
        mov eax, dword ptr [ecx + 0x20]
        push 0x30
        push eax
        call dword ptr [mem_00925694]
        ret 8
    L_nonzero:
        mov edx, dword ptr [esp + 8]
        mov eax, dword ptr [eax + 4]
        push edx
        push eax
        mov eax, dword ptr [ecx + 0x20]
        push 0x30
        push eax
        call dword ptr [mem_00925694]
        ret 8
    }
}

// [0x0040D9F0] sub_0040D9F0 (54 bytes)
extern "C" int mem_00925134;

extern "C" int __fastcall fn_0040D9F0(int* self, int edx_unused, int* other) {
    if (self[0] == 0 || self[0] != other[0]) {
        (*(void (__cdecl**)())&mem_00925134)();
    }
    return (self[1] - other[1]) / 28;
}

// [0x00408050] sub_00408050 (54 bytes)
extern "C" void ext_006A6010();
extern "C" int mem_0093A0CC;

extern "C" __declspec(naked) int __fastcall fn_00408050(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [mem_0093A0CC]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ecx
        mov ecx, esi
        call edx
        lea eax, [edi + 0x4c0]
        test eax, eax
        pop edi
        pop esi
        jne short L_nonzero
        ret 0xc
    L_nonzero:
        mov eax, dword ptr [eax + 0x4]
        ret 0xc
    }
}

// [0x00403290] sub_00403290 (57 bytes)
extern "C" void ext_006A3430();
extern "C" void ext_006A3436();
extern "C" void ext_006A342A();

extern "C" __declspec(naked) void __fastcall fn_00403290(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x470]
        test eax, eax
        je skip_a_00403290
        push eax
        call ext_006A3436
skip_a_00403290:
        mov eax, dword ptr [esi + 0x500]
        test eax, eax
        je skip_b_00403290
        push eax
        call ext_006A3436
skip_b_00403290:
        mov esi, dword ptr [esi + 0x46c]
        test esi, esi
        je skip_c_00403290
        push esi
        call ext_006A3430
skip_c_00403290:
        pop esi
        jmp ext_006A342A
    }
}
