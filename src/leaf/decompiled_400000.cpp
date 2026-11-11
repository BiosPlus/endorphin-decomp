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

// [0x0040C010] sub_0040C010 (61 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) int __fastcall fn_0040C010(void* self, int edx_unused, unsigned int idx) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x23c]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        je L_bad_0040C010
        mov eax, dword ptr [esi + 0x240]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_good_0040C010
    L_bad_0040C010:
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esi + 0x23c]
        mov eax, dword ptr [eax + 4*edi]
        pop edi
        pop esi
        ret 0x4
    L_good_0040C010:
        mov eax, dword ptr [ecx + 4*edi]
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00405160] sub_00405160 (63 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00405160(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x564]
        test eax, eax
        je L_cnt_00405160
        mov edx, dword ptr [ecx + 0x568]
        sub edx, eax
        mov eax, 0x2e8ba2e9
        imul edx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_cnt_00405160:
        mov edx, dword ptr [ecx + 0x684]
        add eax, -0x1
        cmp edx, eax
        je L_fail_00405160
        add edx, 0x1
        mov dword ptr [ecx + 0x684], edx
        mov al, 0x1
        ret
    L_fail_00405160:
        xor al, al
        ret
    }
}

// [0x00404770] sub_00404770 (64 bytes)
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_00404770(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        test eax, eax
        mov edx, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x60], edx
        mov dword ptr [ecx + 0x64], eax
        je L_00404797
        mov eax, dword ptr [eax + 0x4]
        push 0x1
        push eax
        mov eax, dword ptr [ecx + 0x20]
        push 0x30
        push eax
        call dword ptr [mem_00925694]
        ret 0x8
L_00404797:
        test edx, edx
        je L_004047AD
        mov edx, dword ptr [edx + 0x4]
        mov ecx, dword ptr [ecx + 0x20]
        push 0x1
        push edx
        push 0x30
        push ecx
        call dword ptr [mem_00925694]
L_004047AD:
        ret 0x8
    }
}

// [0x0040F2B0] sub_0040F2B0 (67 bytes)
extern "C" void ext_006A6118();
extern "C" int mem_009242F4;

extern "C" void __fastcall fn_0040F2B0(void* self) {
    char* p = (char*)self;
    *(int*)p = 0x0092b954;
    if (*(int*)(p + 4) != 0) {
        int i = 0;
        if (*(int*)(p + 8) > 0) {
            do {
                char* base = *(char**)(p + 4);
                ((void (__fastcall *)(void*))mem_009242F4)(base + 4 * i);
                ++i;
            } while (i < *(int*)(p + 8));
        }
        int buf = *(int*)(p + 4);
        ((void (__cdecl *)(int))ext_006A6118)(buf);
    }
}

// [0x004077E0] sub_004077E0 (69 bytes)
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;

extern "C" __declspec(naked) void __fastcall fn_004077E0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x8
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        lea eax, [esp + 0x8]
        mov esi, ecx
        push eax
        mov ecx, edi
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x8]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop esi
        add esp, 0x8
        ret 0x8
    }
}

// [0x0040EFA0] sub_0040EFA0 (69 bytes)
extern "C" int mem_00925680;

extern "C" void __fastcall fn_0040EFA0(void* self) {
    typedef int (__stdcall *GetSysColorFn)(int);
    GetSysColorFn getSysColor = (GetSysColorFn)mem_00925680;
    char* p = (char*)self;
    *(int*)(p + 0x54) = getSysColor(0x12);
    *(int*)(p + 0x58) = getSysColor(0x0f);
    *(int*)(p + 0x5c) = getSysColor(0x11);
    *(int*)(p + 0x60) = getSysColor(0x0f);
    *(int*)(p + 0x64) = getSysColor(0x16);
    *(int*)(p + 0x68) = getSysColor(0x14);
    *(int*)(p + 0x6c) = getSysColor(0x10);
    *(int*)(p + 0x70) = getSysColor(0x15);
}

// [0x004053C0] sub_004053C0 (70 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_004053C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x564]
        test eax, eax
        push edi
        mov edi, dword ptr [esi + 0x684]
        je fail_004053C0
        mov ecx, dword ptr [esi + 0x568]
        sub ecx, eax
        mov eax, 0x2e8ba2e9
        imul ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb ok_004053C0
fail_004053C0:
        call dword ptr [mem_00925134]
ok_004053C0:
        mov eax, dword ptr [esi + 0x564]
        imul edi, edi, 0x58
        mov eax, dword ptr [edi + eax]
        pop edi
        pop esi
        ret
    }
}

// [0x004026E0] sub_004026E0 (71 bytes)
extern "C" __declspec(naked) void __fastcall fn_004026E0(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        je done
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp esi, edi
        je skip
    lp:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, edi
        jne lp
    skip:
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_006A5C5C
        add esp, 4
        pop edi
    done:
        pop esi
        mov dword ptr [ebx + 4], 0
        mov dword ptr [ebx + 8], 0
        mov dword ptr [ebx + 0xc], 0
        pop ebx
        ret
    }
}

// [0x0040B2B0] sub_0040B2B0 (72 bytes)
extern "C" int mem_00928B5D;
extern "C" int mem_00AC8884;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __fastcall fn_0040B2B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x1
        push esi
        mov dword ptr [esp + 0x4], 0x0
        je short L_copy
        cmp eax, 0x2
        je short L_copy
        mov esi, dword ptr [esp + 0xc]
        push offset mem_00928B5D
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_copy:
        mov esi, dword ptr [esp + 0xc]
        push offset mem_00AC8884
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0040C330] sub_0040C330 (73 bytes)
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_0040C330(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0xa4]
        push 0x18b
        push eax
        call edi
        cmp eax, 2
        push 0
        jl short neg_branch_0040C330
        mov ecx, dword ptr [esi + 0xa4]
        push 1
        push 0x186
        push ecx
        call edi
        pop edi
        pop esi
        ret
    neg_branch_0040C330:
        mov edx, dword ptr [esi + 0xa4]
        push -1
        push 0x186
        push edx
        call edi
        pop edi
        pop esi
        ret
    }
}

// [0x0040BE90] sub_0040BE90 (73 bytes)
extern "C" void ext_004102D0();
extern "C" void ext_00410310();
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0CC;

extern "C" __declspec(naked) void __fastcall fn_0040BE90(void* self) {
    __asm {
        mov eax, dword ptr [mem_0093A0C8]
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x360]
        push eax
        mov ecx, edi
        call ext_00410310
        mov ecx, dword ptr [mem_0093A0CC]
        push ecx
        mov ecx, edi
        call ext_004102D0
        mov edx, dword ptr [mem_0093A0C8]
        add esi, 0x3c4
        push edx
        mov ecx, esi
        call ext_00410310
        mov eax, dword ptr [mem_0093A0CC]
        push eax
        mov ecx, esi
        call ext_004102D0
        pop edi
        pop esi
        ret
    }
}

// [0x004060F0] sub_004060F0 (75 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __cdecl fn_004060F0(void* first, void* last, const void* src) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        cmp esi, dword ptr [esp + 0xc]
        je done
        push ebx
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x1c]
        lea ebx, [edi + 0x4]
        lea ebp, [edi + 0x20]
    loop_top:
        mov eax, dword ptr [edi]
        push ebx
        lea ecx, [esi + 0x4]
        mov dword ptr [esi], eax
        call dword ptr [mem_00924FDC]
        push ebp
        lea ecx, [esi + 0x20]
        call dword ptr [mem_00924FDC]
        lea eax, [edi + 0x3c]
        push eax
        lea ecx, [esi + 0x3c]
        call dword ptr [mem_00924FDC]
        add esi, 0x58
        cmp esi, dword ptr [esp + 0x18]
        jne loop_top
        pop edi
        pop ebp
        pop ebx
    done:
        pop esi
        ret
    }
}

// [0x00401A10] sub_00401A10 (78 bytes)
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00401A10(void* self) {
    __asm {
        push -1
        push 0x00872C79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00404720] sub_00404720 (80 bytes)
extern "C" void ext_006A5EA2();
extern "C" int mem_00925688;
extern "C" __declspec(naked) int __fastcall fn_00404720(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        cmp ecx, 2
        ja L_fail
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        mov dword ptr [esi + 0x5c], ecx
        je L_ok
        test ecx, ecx
        push 0
        mov ecx, esi
        je L_zero
        push 0x2000
        push 0
        jmp L_call
L_zero:
        push 0
        push 0x2000
L_call:
        call ext_006A5EA2
        mov eax, dword ptr [esi + 0x20]
        push 1
        push 0
        push eax
        call dword ptr [mem_00925688]
L_ok:
        mov eax, 1
        pop esi
        ret 4
L_fail:
        xor eax, eax
        pop esi
        ret 4
    }
}

// [0x0040B710] sub_0040B710 (81 bytes)
extern "C" void ext_0040FD30();
extern "C" void ext_0040FD40();
extern "C" void ext_0040FD50();
extern "C" void ext_006A7BC0();
extern "C" int mem_0093A0C4;
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0D0;

extern "C" __declspec(naked) void __fastcall fn_0040B710(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x340]
        mov edx, dword ptr [eax + 0x144]
        push esi
        lea esi, [ecx + 0x340]
        push 0x0
        mov ecx, esi
        call edx
        mov eax, dword ptr [mem_0093A0C4]
        push eax
        mov ecx, esi
        call ext_0040FD30
        mov ecx, dword ptr [mem_0093A0CC]
        push ecx
        mov ecx, esi
        call ext_0040FD40
        mov edx, dword ptr [mem_0093A0C8]
        push edx
        mov ecx, esi
        call ext_006A7BC0
        mov eax, dword ptr [mem_0093A0D0]
        push eax
        mov ecx, esi
        call ext_0040FD50
        pop esi
        ret
    }
}

// [0x00401BB0] sub_00401BB0 (84 bytes)
extern "C" int mem_00924FF4;
extern "C" int mem_009251C0;

extern "C" __declspec(naked) void __fastcall fn_00401BB0(void* self) {
    __asm {
        push -1
        push 0x00872C99
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00928EF0
        lea ecx, [esi + 0xC]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_009251C0]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0040B6B0] sub_0040B6B0 (84 bytes)
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) bool __stdcall fn_0040B6B0(const void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [mem_00924FC4]
        push 0xac853c
        push esi
        call edi
        add esp, 8
        test al, al
        jne found
        push 0xac85ac
        push esi
        call edi
        add esp, 8
        test al, al
        jne found
        push 0xac87a4
        push esi
        call edi
        add esp, 8
        test al, al
        jne found
        push 0xac87c0
        push esi
        call edi
        add esp, 8
        test al, al
        jne found
        pop edi
        pop esi
        ret 4
    found:
        pop edi
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x00404E40] sub_00404E40 (85 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00404E40(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je done_00404E40
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_00404E40:
        mov eax, dword ptr [esi]
        lea ecx, [esi + 0x4]
        push ecx
        lea ecx, [edi + 0x4]
        mov dword ptr [edi], eax
        call dword ptr [mem_00924FDC]
        lea edx, [esi + 0x20]
        push edx
        lea ecx, [edi + 0x20]
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x3c]
        push eax
        lea ecx, [edi + 0x3c]
        call dword ptr [mem_00924FDC]
        add esi, 0x58
        add edi, 0x58
        cmp esi, ebx
        jne loop_00404E40
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    done_00404E40:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

extern "C" int mem_00924FDC;

// [0x00404EA0] sub_00404EA0 (86 bytes)
// Backward copy of [first, last) ending at dest; element is 0x58 bytes: int at +0,
// three std::string (0x1c each) at +4, +0x20, +0x3c. Returns the final dest.
extern "C" __declspec(naked) void* __cdecl fn_00404EA0(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je done
        push edi
        mov edi, dword ptr [esp + 0x18]
loop_top:
        mov eax, dword ptr [esi - 0x58]
        sub esi, 0x58
        lea ecx, [esi + 0x4]
        sub edi, 0x58
        push ecx
        lea ecx, [edi + 0x4]
        mov dword ptr [edi], eax
        call dword ptr [mem_00924FDC]
        lea edx, [esi + 0x20]
        push edx
        lea ecx, [edi + 0x20]
        call dword ptr [mem_00924FDC]
        lea eax, [esi + 0x3c]
        push eax
        lea ecx, [edi + 0x3c]
        call dword ptr [mem_00924FDC]
        cmp esi, ebx
        jne loop_top
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
done:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00406090] sub_00406090 (88 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) std::string* __cdecl fn_00406090(std::string* first, std::string* last, std::string* dest) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ebx, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov ecx, edi
        sub ecx, esi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea ecx, [eax*8]
        sub ecx, eax
        cmp esi, edi
        lea ebp, [ebx + ecx*4]
        je done_00406090
        sub ebx, esi
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_00406090:
        push esi
        lea ecx, [ebx + esi]
        call dword ptr [mem_00924FDC]
        add esi, 0x1c
        cmp esi, edi
        jne loop_00406090
    done_00406090:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
    }
}

// [0x00406290] sub_00406290 (43 bytes)
extern "C" void ext_00406090();
extern "C" __declspec(naked) void __fastcall fn_00406290(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0xc]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edx
        call ext_00406090
        add esp, 0x1c
        ret
    }
}

// [0x0040E1D0] sub_0040E1D0 (88 bytes)
extern "C" int mem_00924FBC;

extern "C" __declspec(naked) void* __cdecl fn_0040E1D0(void* a1, void* a2, void* a3) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ebp, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea ecx, [8*eax]
        sub ecx, eax
        add ecx, ecx
        add ecx, ecx
        mov ebx, ebp
        sub ebx, ecx
        cmp edi, esi
        je L_done
        sub ebp, esi
        __asm _emit 0x8b
        __asm _emit 0xff
    L_loop:
        sub esi, 0x1c
        push esi
        lea ecx, [esi + ebp]
        call dword ptr [mem_00924FBC]
        cmp esi, edi
        jne L_loop
    L_done:
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x0040E6C0] sub_0040E6C0 (43 bytes)
extern "C" void ext_0040E1D0();
extern "C" __declspec(naked) void __fastcall fn_0040E6C0(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x0c]
        mov edx, dword ptr [esp + 0x0c]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edx
        call ext_0040E1D0
        add esp, 0x1c
        ret
    }
}

// [0x00401C60] sub_00401C60 (89 bytes)
extern "C" int mem_009251C8;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_00401C60(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x872c99
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_009251C8]
        add edi, 0x0c
        push edi
        lea ecx, [esi + 0x0c]
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esi], 0x928ef0
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00401E00] sub_00401E00 (89 bytes)
extern "C" int mem_009251C8;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_00401E00(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x872c99
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_009251C8]
        add edi, 0x0c
        push edi
        lea ecx, [esi + 0x0c]
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esi], 0x928ecc
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00406140] sub_00406140 (89 bytes)
extern "C" void ext_00404EA0();

extern "C" __declspec(naked) void* __cdecl fn_00406140(void* a1, void* a2, void* a3) {
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
        call ext_00404EA0
        sub esi, ebx
        mov eax, 0x2e8ba2e9
        imul esi
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov ecx, eax
        imul ecx, ecx, 0x58
        add esp, 0x18
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}
