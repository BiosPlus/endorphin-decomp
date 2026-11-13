// Decompiled translation unit: src/leaf/decompiled_400000.cpp

#include <exception>
#include <new>
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

// [0x00406350] sub_00406350 (43 bytes)
extern "C" void ext_00406140();
extern "C" __declspec(naked) void __fastcall fn_00406350(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x10]
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
        call ext_00406140
        add esp, 0x1c
        ret
    }
}

// [0x004080C0] sub_004080C0 (91 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004080C0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x18]
    L_head_004080C0:
        test esi, esi
        je L_inv1_004080C0
        cmp esi, dword ptr [esp + 0x1c]
        je L_ok1_004080C0
    L_inv1_004080C0:
        call ebp
    L_ok1_004080C0:
        cmp edi, dword ptr [esp + 0x20]
        je L_done_004080C0
        test esi, esi
        mov ebx, edi
        jne L_ok2_004080C0
        call ebp
    L_ok2_004080C0:
        cmp edi, dword ptr [esi + 0x8]
        jb L_ok3_004080C0
        call ebp
    L_ok3_004080C0:
        add edi, 0x4
        test esi, esi
        jne L_ok4_004080C0
        call ebp
    L_ok4_004080C0:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_ok5_004080C0
        call ebp
    L_ok5_004080C0:
        mov ecx, dword ptr [ebx]
        test ecx, ecx
        je L_head_004080C0
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
        jmp L_head_004080C0
    L_done_004080C0:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x0040AB60] sub_0040AB60 (91 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_0040AB60(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov dword ptr [esp + 4], 0
        jne L_mode_nz
        add ecx, 2D0h
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_mode_nz:
        cmp eax, 1
        jne L_other
        add ecx, 308h
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_other:
        push 928B5Dh
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x0040ABC0] sub_0040ABC0 (91 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_0040ABC0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov dword ptr [esp + 4], 0
        jne L_mode_nz
        add ecx, 2ECh
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_mode_nz:
        cmp eax, 1
        jne L_other
        add ecx, 324h
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_other:
        push 928B5Dh
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x00404CD0] sub_00404CD0 (93 bytes)
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00404CD0(void* self) {
    __asm {
        push -1
        push 0x008734E8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x3c]
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x20]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0040FE10] sub_0040FE10 (93 bytes)
extern "C" __declspec(naked) void __stdcall fn_0040FE10(void* a0, int a1, int a2, int a3, int a4, const char* a5, int a6) {
    __asm {
        mov ecx, dword ptr [esp + 0x1c]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push edi
        push ecx
        mov ecx, esi
        call edx
        push 1
        mov ecx, esi
        mov edi, eax
        call ext_006A6010
        mov edx, dword ptr [esp + 0x24]
        mov eax, edx
        lea ebx, [eax + 0x1]
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    loop_0040FE40:
        mov cl, byte ptr [eax]
        add eax, 0x1
        test cl, cl
        jne loop_0040FE40
        push 0x25
        lea ecx, [esp + 0x18]
        push ecx
        sub eax, ebx
        mov ebx, dword ptr [esi]
        push eax
        push edx
        mov edx, dword ptr [ebx + 0x70]
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push edi
        mov ecx, esi
        call edx
        pop edi
        pop esi
        pop ebx
        ret 0x1c
    }
}

// [0x00404BE0] sub_00404BE0 (94 bytes)
extern "C" void ext_00404720();
extern "C" void ext_006A5C6E();

extern "C" __declspec(naked) void __fastcall fn_00404BE0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8734b8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_006A5C6E
        xor eax, eax
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x60], eax
        mov dword ptr [esi + 0x64], eax
        mov dword ptr [esi + 0x5c], eax
        mov eax, dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        mov dword ptr [esi], 0x92979c
        mov dword ptr [esi + 0x54], 0xffffffff
        call ext_00404720
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x004019B0] sub_004019B0 (95 bytes)
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __fastcall fn_004019B0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [edi + 0x1c]
        lea ecx, [edi + 0x20]
        push ecx
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esi + 0x1c], eax
        call dword ptr [mem_00924FE0]
        mov edx, dword ptr [edi + 0x3c]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x3c], edx
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00404F00] sub_00404F00 (96 bytes)
// Formats an int into a 30-byte local buffer via _snprintf, then constructs the std::string at a1 from it; returns a1.
extern "C" int mem_009251E0;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __cdecl fn_00404F00(void* a1, int a2) {
    __asm {
        sub esp, 0x24
        xor eax, eax
        push esi
        mov dword ptr [esp + 0x4], eax
        mov byte ptr [esp + 0x8], al
        mov dword ptr [esp + 0x9], eax
        mov dword ptr [esp + 0xd], eax
        mov dword ptr [esp + 0x11], eax
        mov dword ptr [esp + 0x15], eax
        mov dword ptr [esp + 0x19], eax
        mov dword ptr [esp + 0x1d], eax
        mov dword ptr [esp + 0x21], eax
        mov byte ptr [esp + 0x25], al
        mov eax, dword ptr [esp + 0x30]
        push eax
        push 0x929f48
        lea ecx, [esp + 0x10]
        push 0x1e
        push ecx
        call dword ptr [mem_009251E0]
        mov esi, dword ptr [esp + 0x3c]
        add esp, 0x10
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x004030F0] sub_004030F0 (98 bytes)
extern "C" void ext_006A342A();
extern "C" void ext_006A3430();
extern "C" void ext_006A3436();
extern "C" void ext_006A343C();

extern "C" __declspec(naked) void __fastcall fn_004030F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x57c]
        push edi
        xor edi, edi
        cmp eax, edi
        je L1
        push eax
        call ext_006A343C
        mov dword ptr [esi + 0x57c], edi
    L1:
        mov eax, dword ptr [esi + 0x480]
        cmp eax, edi
        je L2
        push eax
        call ext_006A3436
        mov dword ptr [esi + 0x480], edi
    L2:
        mov eax, dword ptr [esi + 0x47c]
        cmp eax, edi
        je L3
        push eax
        call ext_006A3430
        mov dword ptr [esi + 0x47c], edi
    L3:
        call ext_006A342A
        mov dword ptr [esi + 0x46c], edi
        mov dword ptr [esi + 0x470], edi
        mov dword ptr [esi + 0x474], edi
        pop edi
        pop esi
        ret
    }
}

// [0x00403560] sub_00403560 (104 bytes)
extern "C" int mem_00924FF0;
extern "C" int mem_00925130;
extern "C" int mem_00924FE0;
extern "C" int mem_00928EF0;

extern "C" __declspec(naked) void __fastcall fn_00403560(void* self, int edx_unused, const void* s) {
    __asm {
        push -1
        push 0x872c99
        mov eax, fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        mov ecx, edi
        mov dword ptr [esp + 0x8], esi
        call dword ptr [mem_00924FF0]
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, esi
        call dword ptr [mem_00925130]
        push edi
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi], offset mem_00928EF0
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00404C60] sub_00404C60 (105 bytes)
extern "C" int mem_00924FE4;
extern "C" int mem_00924FE8;
extern "C" int mem_00928B5D;

extern "C" __declspec(naked) void* __fastcall fn_00404C60(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 08734E8h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 14h]
        push esi
        mov esi, ecx
        push offset mem_00928B5D
        lea ecx, [esi + 4]
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], eax
        call dword ptr [mem_00924FE4]
        push offset mem_00928B5D
        lea ecx, [esi + 20h]
        mov dword ptr [esp + 14h], 0
        call dword ptr [mem_00924FE4]
        lea ecx, [esi + 3Ch]
        mov byte ptr [esp + 10h], 1
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 4
    }
}

// [0x0040B640] sub_0040B640 (108 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_00924FD4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_0040B640(void* self) {
    __asm {
        push -1
        push 0x87cc19
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0xe8]
        mov dword ptr [esp + 0x14], 0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x298]
        call dword ptr [mem_00924FD4]
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0040B930] sub_0040B930 (108 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_00924FD4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_0040B930(void* self) {
    __asm {
        push -1
        push 0x87cc19
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0x360]
        mov dword ptr [esp + 0x14], 0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x340]
        call dword ptr [mem_00924FD4]
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0040CAC0] sub_0040CAC0 (40 bytes)
extern "C" void ext_0040B640();
extern "C" void ext_0040C300();

extern "C" __declspec(naked) void __fastcall fn_0040CAC0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0040B640
        mov ecx, esi
        call ext_0040C300
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x164]
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x168]
        mov ecx, esi
        pop esi
        jmp edx
    }
}

// [0x00404D70] sub_00404D70 (111 bytes)
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __fastcall fn_00404D70(void* self, int edx_unused, const void* src) {
    __asm {
        push -1
        push 0x8734e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov eax, dword ptr [edi]
        mov esi, ecx
        lea ecx, [edi + 0x4]
        push ecx
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], eax
        call dword ptr [mem_00924FE0]
        lea edx, [edi + 0x20]
        push edx
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x18], 0x0
        call dword ptr [mem_00924FE0]
        add edi, 0x3c
        push edi
        lea ecx, [esi + 0x3c]
        mov byte ptr [esp + 0x18], 0x1
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

// [0x00406380] sub_00406380 (111 bytes)
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_00406380(void* first, void* last) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x873668
        push eax
        mov dword ptr fs:[0], esp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        cmp esi, edi
        je done
    loop_top:
        lea ecx, [esi + 0x3c]
        mov dword ptr [esp + 0x10], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x20]
        mov byte ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        add esi, 0x58
        cmp esi, edi
        mov dword ptr [esp + 0x18], esi
        jne loop_top
    done:
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x00406590] sub_00406590 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_00406590(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_00406590
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_00406380
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_00406590:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x00403380] sub_00403380 (116 bytes)
extern "C" int mem_009240AC;
extern "C" void ext_006A344E();
typedef void* (__stdcall *CreateCompatibleDCFn)(void*);
typedef void* (__cdecl *DrawDibOpenFn)();
extern "C" void* __fastcall fn_00403380(void* self) {
    char* s = (char*)self;
    *(int*)(s + 0x8c) = 0;
    *(int*)(s + 0x90) = 0;
    *(int*)(s + 0xbc) = 0;
    *(int*)(s + 0xc0) = 0;
    *(int*)(s + 0xc4) = 0;
    *(int*)(s + 0xc8) = 0;
    *(int*)(s + 0xcc) = 0;
    *(int*)(s + 0xd0) = 0x100;
    *(int*)(s + 0xd4) = 0x100;
    *(int*)(s + 0xd8) = 0;
    *(int*)(s + 0xe0) = 0;
    *(int*)(s + 0xe4) = 0;
    *(int*)(s + 0xe8) = 0;
    *(void**)(s + 0xe4) = ((CreateCompatibleDCFn)mem_009240AC)(0);
    *(void**)(s + 0xdc) = ((DrawDibOpenFn)ext_006A344E)();
    return self;
}

// [0x00402630] sub_00402630 (117 bytes)
struct Elem32_00402630 {
    int   a;
    float f1;
    float f2;
    float f3;
    int   b;
    int   c;
    int   d;
    unsigned short w;
    unsigned char  by;
};

extern "C" __declspec(naked) Elem32_00402630* __cdecl fn_00402630(const Elem32_00402630* first, const Elem32_00402630* last, Elem32_00402630* dest) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebp
        je empty_00402630
        push edi
        mov edi, dword ptr [esp + 0x18]
        lea ecx, [edi + 0xc]
        lea edx, [esi + 0xc]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loop_00402630:
        test edi, edi
        je skip_00402630
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        fld dword ptr [edx - 0x8]
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [edx - 0x4]
        fstp dword ptr [ecx - 0x4]
        fld dword ptr [edx]
        fstp dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov eax, dword ptr [edx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov eax, dword ptr [edx + 0xc]
        mov dword ptr [ecx + 0xc], eax
        mov ax, word ptr [edx + 0x10]
        mov word ptr [ecx + 0x10], ax
        mov al, byte ptr [edx + 0x12]
        mov byte ptr [ecx + 0x12], al
skip_00402630:
        add esi, 0x20
        add edi, 0x20
        add ecx, 0x20
        add edx, 0x20
        cmp esi, ebp
        jne loop_00402630
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret
empty_00402630:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebp
        ret
    }
}

// [0x0040C490] sub_0040C490 (119 bytes)
extern "C" void ext_0040B220();
extern "C" int mem_00924FF0;
extern "C" int mem_00925694;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0040C490(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x2c]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_0040B220
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], 0
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esi + 0xa4]
        push eax
        push 0
        push 0x180
        push edx
        call dword ptr [mem_00925694]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x004034B0] sub_004034B0 (123 bytes)
extern "C" int mem_00924090;
extern "C" void ext_006A343C();
extern "C" void ext_006A3436();
extern "C" void ext_006A342A();
extern "C" __declspec(naked) void __fastcall fn_004034B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xe0]
        push edi
        xor edi, edi
        cmp eax, edi
        je L_no_gdi
        push eax
        call dword ptr [mem_00924090]
L_no_gdi:
        mov eax, dword ptr [esi + 0x90]
        cmp eax, edi
        je L_no_frame
        push eax
        call ext_006A343C
L_no_frame:
        mov eax, dword ptr [esi + 0x8c]
        cmp eax, edi
        je L_no_stream
        push eax
        call ext_006A3436
L_no_stream:
        call ext_006A342A
        mov dword ptr [esi + 0xe8], edi
        mov dword ptr [esi + 0x8c], edi
        mov dword ptr [esi + 0x90], edi
        mov dword ptr [esi + 0xbc], edi
        mov dword ptr [esi + 0xc0], edi
        mov dword ptr [esi + 0xc4], edi
        mov dword ptr [esi + 0xc8], edi
        mov dword ptr [esi + 0xcc], edi
        mov dword ptr [esi + 0xe0], edi
        mov dword ptr [esi + 0xd8], edi
        pop edi
        pop esi
        ret
    }
}

// [0x00406510] sub_00406510 (125 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924FF4;
extern "C" void ext_00406090();

extern "C" __declspec(naked) void __fastcall fn_00406510(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, ecx
        je L_00406522
        cmp esi, dword ptr [esp + 0x18]
        je L_00406528
    L_00406522:
        call dword ptr [mem_00925134]
    L_00406528:
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, edx
        je L_0040657F
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        push edi
        mov byte ptr [esp + 0x20], 0x0
        mov esi, dword ptr [esp + 0x20]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push esi
        push ecx
        push eax
        push edx
        call ext_00406090
        mov ebx, dword ptr [ebp + 0x8]
        mov edi, eax
        add esp, 0x18
        cmp edi, ebx
        mov esi, edi
        je L_00406572
    L_00406563:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, ebx
        jne L_00406563
    L_00406572:
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [ebp + 0x8], edi
        pop edi
        pop ebx
    L_0040657F:
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 0x4], ecx
        pop ebp
        ret 0x14
    }
}

// [0x004065D0] sub_004065D0 (59 bytes)
extern "C" void ext_00406510();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004065D0(void* self) {
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
        jbe m4065d0_ok1
        call ebp
    m4065d0_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m4065d0_ok2
        call ebp
    m4065d0_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00406510
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0040F0F0] sub_0040F0F0 (126 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" int mem_00874F08;
extern "C" int mem_0092407C;
extern "C" int mem_00925648;
extern "C" int mem_0092A23C;
extern "C" int mem_0092A254;

extern "C" __declspec(naked) void __fastcall fn_0040F0F0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        push -1
        push offset mem_00874F08
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        xor eax, eax
        mov dword ptr [esp + 4], eax
        mov dword ptr [esp], offset mem_0092A254
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x2c]
        push eax
        call dword ptr [mem_0092407C]
        push eax
        lea ecx, [esp + 4]
        call ext_006A5FFE
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [eax + 4]
        lea edx, [esp + 0x20]
        push edx
        push ecx
        call dword ptr [mem_00925648]
        lea ecx, [esp]
        mov dword ptr [esp + 0x10], 0xffffffff
        mov dword ptr [esp], offset mem_0092A23C
        call ext_006A5FF2
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x18
    }
}

// [0x00403420] sub_00403420 (130 bytes)
extern "C" void ext_006A345A();

extern "C" int __fastcall fn_00403420(char* self, int edx_unused, int frame) {
    typedef void* (__stdcall *GetFrameFn)(void*, int);
    typedef int (__stdcall *DrawDibDrawFn)(void*, void*, int, int, int, int, void*, void*, int, int, int, int, unsigned int);
    if (frame < *(int*)(self + 0xc4)) {
        unsigned char* hdr = (unsigned char*)((GetFrameFn)ext_006A3442)(*(void**)(self + 0x90), frame);
        unsigned char* lpBits = hdr + *(int*)hdr + 4 * *(int*)(hdr + 0x20);
        *(unsigned char**)(self + 0xbc) = lpBits;
        ((DrawDibDrawFn)ext_006A345A)(*(void**)(self + 0xdc), *(void**)(self + 0xe4), 0, 0,
                     *(int*)(self + 0xd0), *(int*)(self + 0xd4),
                     hdr, lpBits, 0, 0,
                     *(int*)(self + 0xc8), *(int*)(self + 0xcc), 0);
        *(int*)(self + 0xd8) = *(int*)(self + 0xc0) * frame;
    }
    return *(int*)(self + 0xe8);
}

// [0x0040AC20] sub_0040AC20 (131 bytes)
extern "C" void ext_00665010();
extern "C" int mem_00924FCC;
extern "C" int mem_00924FE0;
extern "C" int mem_00B59208;

extern "C" __declspec(naked) void __fastcall fn_0040AC20(void* self) {
    __asm {
        push -1
        push 0x88afd3
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        push offset mem_00B59208
        lea eax, [esp + 0xc]
        push 0x92ab70
        push eax
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FCC]
        lea ecx, [esp + 0x14]
        push ecx
        mov dword ptr [esp + 0x3c], 0x1
        call ext_00665010
        mov esi, dword ptr [esp + 0x44]
        add esp, 0x10
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x1
        mov byte ptr [esp + 0x2c], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x004062C0] sub_004062C0 (141 bytes)
extern "C" void ext_00404CD0();
extern "C" void ext_00404D70();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void* __cdecl fn_004062C0(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x00873641
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, dword ptr [ebp + 0xc]
        je loop_done
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        push edi
        mov ecx, esi
        call ext_00404D70
    skip_ctor:
        add esi, 0x58
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x58
        jmp loop_top
    unwind_funclet:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
    destroy_top:
        mov ecx, esi
        call ext_00404CD0
        add esi, 0x58
        cmp esi, edi
        jne destroy_top
    rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    loop_done:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00406610] sub_00406610 (41 bytes)
extern "C" void ext_004062C0();

extern "C" __declspec(naked) void __fastcall fn_00406610(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_004062C0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x004063F0] sub_004063F0 (141 bytes)
// try { for (n = count; n; --n) { if (p) ctor(p, a); p += 0x58; } }
// catch (...) { destroy [begin, p); throw; }
// Naked: MSVC /EHsc treats extern "C" callees as nothrow, which drops the try block,
// so the SEH frame is written out by hand.
extern "C" void ext_00404CD0();
extern "C" void ext_00404D70();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_004063F0(void* begin, unsigned int count, const void* a) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x00873691
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [ebp + 0xc]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, ebx
        jbe epilogue
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call ext_00404D70
    skip_ctor:
        sub edi, 0x1
        add esi, 0x58
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
    exit_path:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je done_dtor
    dtor_loop:
        mov ecx, esi
        call ext_00404CD0
        add esi, 0x58
        cmp esi, edi
        jne dtor_loop
    done_dtor:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    epilogue:
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

// [0x004064D0] sub_004064D0 (55 bytes)
extern "C" void ext_004063F0();

extern "C" __declspec(naked) int __fastcall fn_004064D0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_004063F0
        mov eax, esi
        imul eax, eax, 0x58
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x004023D0] sub_004023D0 (143 bytes)
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

// try { for (p = first; p != last; ++p, ++dest) { if (dest) ctor(dest, p); } }
// catch (...) { destroy [begin, dest); throw; }
// return dest;
// Naked: EH frame written out by hand (see fn_004062C0 for the same pattern).
extern "C" __declspec(naked) void* __cdecl fn_004023D0(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x00872d71
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, dword ptr [ebp + 0xc]
        je exit_path
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FE0]
    skip_ctor:
        add esi, 0x1c
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x1c
        jmp loop_top
    handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je handler_rethrow
    destroy_loop:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, edi
        jne destroy_loop
    handler_rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_path:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0040E6F0] sub_0040E6F0 (143 bytes)
// try { for (n = count; n; --n) { if (p) ctor(p, a); p += 0x1c; } }
// catch (...) { destroy [begin, p); throw; }
// Naked: same reason as fn_004063F0, the SEH frame is written out by hand.
extern "C" int mem_00924FE0;
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_0040E6F0(void* begin, unsigned int count, const void* a) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x00874bf1
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [ebp + 0xc]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, ebx
        jbe epilogue
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
    skip_ctor:
        sub edi, 0x1
        add esi, 0x1c
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je destroy_done
    destroy_loop:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, edi
        jne destroy_loop
    destroy_done:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    epilogue:
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

// [0x00406480] sub_00406480 (41 bytes)
extern "C" void ext_004023D0();

extern "C" __declspec(naked) void __fastcall fn_00406480(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_004023D0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0040E890] sub_0040E890 (60 bytes)
extern "C" void ext_0040E6F0();

extern "C" __declspec(naked) void* __fastcall fn_0040E890(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp+10h]
        push esi
        mov esi, dword ptr [esp+10h]
        push edi
        mov edi, dword ptr [esp+10h]
        mov byte ptr [esp+8], 0
        mov eax, dword ptr [esp+8]
        push eax
        mov eax, dword ptr [esp+1Ch]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_0040E6F0
        add esp, 18h
        lea ecx, [8*esi]
        sub ecx, esi
        lea eax, [edi+4*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0Ch
    }
}

// [0x00403E80] sub_00403E80 (144 bytes)
extern "C" void ext_00403290();
extern "C" void ext_00403560();
extern "C" void ext_006A347E();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_00403E80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x892ed9
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], esp
        mov edx, dword ptr [eax]
        sub esp, 0x44
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 0x20]
        lea ecx, [edx + 4*ecx]
        mov edx, dword ptr [esi + 0x500]
        push ecx
        push eax
        push 0
        push edx
        call ext_006A347E
        test eax, eax
        je ok
        mov ecx, esi
        call ext_00403290
        push 0x929710
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x54], 0
        call ext_00403560
        push 0x9ce04c
        lea ecx, [esp + 0x24]
        push ecx
        mov dword ptr [esp + 0x28], 0x928f28
        call ext_006A6DD2
    ok:
        mov ecx, dword ptr [esp + 0x48]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x50
        ret 0x4
    }
}

// [0x00401690] sub_00401690 (145 bytes)
extern "C" void ext_0041BB60();
extern "C" void ext_0044A0F0();
extern "C" void ext_0044A100();
extern "C" void ext_0044A110();
extern "C" void ext_0044A120();
extern "C" void ext_005434E0();
extern "C" void ext_006A5E6C();
extern "C" int mem_00928A88;

extern "C" __declspec(naked) void __fastcall fn_00401690(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x164]
        mov ecx, dword ptr [esi + 0xac]
        push eax
        call ext_0044A0F0
        mov ecx, dword ptr [esi + 0x168]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        call ext_0044A100
        mov edx, dword ptr [esi + 0x16c]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        call ext_0044A110
        mov eax, dword ptr [esi + 0x170]
        mov ecx, dword ptr [esi + 0xac]
        push eax
        call ext_0044A120
        mov ecx, dword ptr [esi + 0x164]
        push ecx
        mov ecx, dword ptr [esi + 0xb0]
        call ext_0041BB60
        mov edx, dword ptr [esi + 0x164]
        mov ecx, dword ptr [esi + 0xb8]
        push edx
        call ext_005434E0
        mov eax, dword ptr [esi + 0x164]
        mov ecx, dword ptr [esi + 0xb4]
        push eax
        call ext_005434E0
        push 0
        push offset mem_00928A88
        mov ecx, esi
        call ext_006A5E6C
        pop esi
        ret
    }
}

// [0x00402B60] sub_00402B60 (146 bytes)
extern "C" void ext_004026E0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00402B60(void* self) {
    __asm {
        push -1
        push 0x872e14
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0xf4]
        mov dword ptr [esp + 0x10], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0xd8]
        mov byte ptr [esp + 0x10], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0xbc]
        mov byte ptr [esp + 0x10], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x8c]
        mov byte ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x50]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x38]
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_004026E0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004093D0] sub_004093D0 (155 bytes)
extern "C" void ext_00458200();
extern "C" void ext_00531AE0();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A601C();
extern "C" void ext_006A60B2();
extern "C" __declspec(naked) void __fastcall fn_004093D0(void* self) {
    __asm {
        push -1
        push 0x874050
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x92a5ec
        lea edi, [esi + 0x1b8]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0x4
        call ext_006A5FF2
        mov ecx, edi
        mov byte ptr [esp + 0x14], 0x3
        mov dword ptr [edi], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esi + 0x1b0]
        mov byte ptr [esp + 0x14], 0x2
        call ext_006A60B2
        lea ecx, [esi + 0x13c]
        mov byte ptr [esp + 0x14], 0x1
        call ext_006A601C
        lea ecx, [esi + 0x12c]
        mov byte ptr [esp + 0x14], 0x0
        call ext_00531AE0
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00458200
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0040D6E0] sub_0040D6E0 (161 bytes)
extern "C" void ext_0040B220();
extern "C" int mem_00924FF0;
extern "C" int mem_00925694;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0040D6E0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        push edi
        lea eax, [esi + 0x340]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_0040B220
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esi + 0xa4]
        mov edi, dword ptr [mem_00925694]
        push eax
        push -1
        push 0x1a2
        push edx
        call edi
        cmp eax, -1
        push 0
        je short loc_40d74e
        push eax
        mov eax, dword ptr [esi + 0xa4]
        push 0x186
        push eax
        jmp short loc_40d75c
    loc_40d74e:
        mov ecx, dword ptr [esi + 0xa4]
        push -1
        push 0x186
        push ecx
    loc_40d75c:
        call edi
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0040B7B0] sub_0040B7B0 (164 bytes)
extern "C" void ext_0040FD30();
extern "C" void ext_0040FD40();
extern "C" void ext_0040FD50();
extern "C" void ext_006A7BC0();
extern "C" int mem_0093A0C4;
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0D0;

extern "C" __declspec(naked) void __fastcall fn_0040B7B0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x3b4]
        mov edx, dword ptr [eax + 0x144]
        lea esi, [edi + 0x3b4]
        push 0x1
        mov ecx, esi
        call edx
        mov eax, dword ptr [edi + 0x428]
        mov edx, dword ptr [eax + 0x144]
        add edi, 0x428
        push 0x0
        mov ecx, edi
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
        mov ecx, dword ptr [mem_0093A0C4]
        push ecx
        mov ecx, edi
        call ext_0040FD30
        mov edx, dword ptr [mem_0093A0CC]
        push edx
        mov ecx, edi
        call ext_0040FD40
        mov eax, dword ptr [mem_0093A0C8]
        push eax
        mov ecx, edi
        call ext_006A7BC0
        mov ecx, dword ptr [mem_0093A0D0]
        push ecx
        mov ecx, edi
        call ext_0040FD50
        pop edi
        pop esi
        ret
    }
}

extern "C" void ext_004090C0();

// [0x00409120] sub_00409120 (172 bytes)
extern "C" __declspec(naked) void __fastcall fn_00409120(void* self) {
    __asm {
        call ext_004090C0
        test al, al
        mov edx, dword ptr [ecx + 0x130]
        jne loc_40915b
        test edx, edx
        jne loc_409137
        xor eax, eax
        jmp loc_409142
    loc_409137:
        mov eax, dword ptr [ecx + 0x134]
        sub eax, edx
        sar eax, 2
    loc_409142:
        shl eax, 5
        add eax, 2
        mov edx, eax
        mov eax, 0x2a
        mov dword ptr [ecx + 0xec], 0
        jmp loc_409183
    loc_40915b:
        test edx, edx
        jne loc_409163
        xor eax, eax
        jmp loc_40916e
    loc_409163:
        mov eax, dword ptr [ecx + 0x134]
        sub eax, edx
        sar eax, 2
    loc_40916e:
        shl eax, 5
        add eax, 2
        mov edx, 0x2a
        mov dword ptr [ecx + 0xf0], 0
    loc_409183:
        mov dword ptr [ecx + 0xc4], edx
        mov dword ptr [ecx + 0xc8], eax
        mov dword ptr [ecx + 0xac], edx
        mov dword ptr [ecx + 0xb0], eax
        mov dword ptr [ecx + 0xb4], edx
        mov dword ptr [ecx + 0xb8], eax
        mov dword ptr [ecx + 0x9c], edx
        mov dword ptr [ecx + 0xa0], eax
        mov dword ptr [ecx + 0xbc], edx
        mov dword ptr [ecx + 0xc0], eax
        mov dword ptr [ecx + 0xa4], edx
        mov dword ptr [ecx + 0xa8], eax
        ret
    }
}

// [0x0040F170] sub_0040F170 (186 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6100();
extern "C" void ext_006A6106();
extern "C" void ext_006A610C();
extern "C" int mem_008B7418;
extern "C" int mem_00924084;
extern "C" int mem_0092B93C;
extern "C" int mem_0092A23C;

extern "C" __declspec(naked) void __fastcall fn_0040F170(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        push -1
        push offset mem_008B7418
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push esi
        xor eax, eax
        push edi
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x8], offset mem_0092B93C
        mov ecx, dword ptr [esp + 0x3c]
        push ecx
        push 0x1
        push eax
        mov dword ptr [esp + 0x2c], eax
        call dword ptr [mem_00924084]
        push eax
        lea ecx, [esp + 0xc]
        call ext_006A5FFE
        mov esi, dword ptr [esp + 0x28]
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call ext_006A610C
        mov ecx, dword ptr [esp + 0x2c]
        mov edi, eax
        mov eax, dword ptr [esp + 0x30]
        push eax
        push ecx
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_006A6106
        mov eax, dword ptr [esp + 0x38]
        mov ecx, dword ptr [esp + 0x34]
        push eax
        push ecx
        mov ecx, esi
        call ext_006A6100
        push edi
        mov ecx, esi
        call ext_006A610C
        lea ecx, [esp + 0x8]
        call ext_006A5FF2
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x20], 0xffffffff
        mov dword ptr [esp + 0x8], offset mem_0092A23C
        call ext_006A5FF2
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret 0x18
    }
}

// [0x0040E230] sub_0040E230 (187 bytes)
extern "C" void ext_006A6DD2();
extern "C" int mem_00874B9A;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FBC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0040E230(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push offset mem_00874B9A
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        lea ecx, [ebp - 0x30]
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        call dword ptr [mem_00924FE8]
        mov ebx, dword ptr [ebp + 0xc]
        mov edi, dword ptr [ebp + 0x8]
        mov dword ptr [ebp - 0x4], 0
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    loop_start:
        cmp edi, ebx
        je short done
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp + 0x8], esi
        test esi, esi
        mov byte ptr [ebp - 0x4], 2
        je short skip_copy
        lea eax, [ebp - 0x30]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
    skip_copy:
        push edi
        mov ecx, esi
        mov byte ptr [ebp - 0x4], 1
        call dword ptr [mem_00924FBC]
        add esi, 0x1c
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x1c
        jmp short loop_start
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je short eh_throw
    eh_cleanup_loop:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, edi
        jne short eh_cleanup_loop
    eh_throw:
        push 0
        push 0
        call ext_006A6DD2
    done:
        lea ecx, [ebp - 0x30]
        mov dword ptr [ebp - 0x4], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0040E860] sub_0040E860 (41 bytes)
extern "C" void ext_0040E230();

extern "C" __declspec(naked) void __fastcall fn_0040E860(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_0040E230
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0040B5B0] sub_0040B5B0 (138 bytes)
extern "C" void ext_00664F50();
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0040B5B0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x298]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x4]
        push eax
        mov dword ptr [esp + 0x2c], 0x0
        call ext_00664F50
        add esp, 0x4
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0xe8]
        call ext_006A5F50
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0040B8A0] sub_0040B8A0 (138 bytes)
extern "C" __declspec(naked) void __fastcall fn_0040B8A0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x340]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x4]
        push eax
        mov dword ptr [esp + 0x2c], 0x0
        call ext_00664F50
        add esp, 0x4
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x360]
        call ext_006A5F50
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0040B300] sub_0040B300 (188 bytes)
extern "C" void ext_0040AC20();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_0040B300(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x008b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x34]
        push esi
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x4], esi
        jne short L_nonzero
        mov esi, dword ptr [esp + 0x34]
        push esi
        call ext_0040AC20
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x8
    L_nonzero:
        cmp eax, 0x1
        je short L_str
        cmp eax, 0x2
        je short L_str
        mov esi, dword ptr [esp + 0x34]
        push offset mem_00928B5D
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x8
    L_str:
        lea eax, [esp + 0x8]
        push eax
        call ext_0040AC20
        push eax
        mov dword ptr [esp + 0x30], esi
        mov esi, dword ptr [esp + 0x38]
        push offset mem_00AC8884
        push esi
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x8
    }
}

// [0x00401860] sub_00401860 (191 bytes)
// Loads a library, resolves six procs into [self+0x00..0x14], flags [self+0x18]; frees on failure. Returns self.
extern "C" int mem_009241D4;
extern "C" int mem_009241D8;
extern "C" int mem_009241DC;

extern "C" __declspec(naked) void* __fastcall fn_00401860(void* self) {
    __asm {
        push ebx
        push esi
        push 0x928e38
        mov esi, ecx
        call dword ptr [mem_009241D4]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esi + 0x1c], eax
        je L_4018FD
        push edi
        mov edi, dword ptr [mem_009241D8]
        push 0x928e2c
        push eax
        call edi
        mov dword ptr [esi], eax
        mov eax, dword ptr [esi + 0x1c]
        push 0x928e20
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x1c]
        push 0x928e14
        push ecx
        mov dword ptr [esi + 0x4], eax
        call edi
        mov edx, dword ptr [esi + 0x1c]
        push 0x928e08
        push edx
        mov dword ptr [esi + 0x8], eax
        call edi
        mov dword ptr [esi + 0xc], eax
        mov eax, dword ptr [esi + 0x1c]
        push 0x928dfc
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x1c]
        push 0x928df0
        push ecx
        mov dword ptr [esi + 0x10], eax
        call edi
        cmp dword ptr [esi], ebx
        mov dword ptr [esi + 0x14], eax
        pop edi
        je L_4018F0
        cmp dword ptr [esi + 0x4], ebx
        je L_4018F0
        cmp dword ptr [esi + 0x8], ebx
        je L_4018F0
        cmp dword ptr [esi + 0xc], ebx
        je L_4018F0
        cmp dword ptr [esi + 0x10], ebx
        je L_4018F0
        cmp eax, ebx
        jne L_4018FD
L_4018F0:
        mov edx, dword ptr [esi + 0x1c]
        push edx
        call dword ptr [mem_009241DC]
        mov dword ptr [esi + 0x1c], ebx
L_4018FD:
        cmp dword ptr [esi + 0x1c], ebx
        mov byte ptr [esi + 0x18], 0x1
        mov eax, esi
        jne L_40191C
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x10], ebx
        mov dword ptr [esi + 0x14], ebx
        mov byte ptr [esi + 0x18], bl
L_40191C:
        pop esi
        pop ebx
        ret
    }
}

// [0x00401980] sub_00401980 (48 bytes)
extern "C" int mem_00AC624C;
extern "C" int mem_00AC622C;
extern "C" int mem_00913910;
extern "C" void __fastcall ext_00401860(void* self);
extern "C" void ext_006A6C87(void* arg);

extern "C" void* __fastcall fn_00401980(void* self) {
    if (!(mem_00AC624C & 1)) {
        mem_00AC624C |= 1;
        ext_00401860(&mem_00AC622C);
        ext_006A6C87(&mem_00913910);
    }
    return &mem_00AC622C;
}

// [0x004012F0] sub_004012F0 (197 bytes)
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5E06();

extern "C" __declspec(naked) void __fastcall fn_004012F0(void* self) {
    __asm {
        push -1
        push 0x8729ce
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x92892c
        lea ecx, [esi + 0x110]
        mov dword ptr [esp + 0x10], 0x5
        call ext_006A5DFA
        lea ecx, [esi + 0xbc]
        mov byte ptr [esp + 0x10], 0x4
        call ext_006A5DFA
        mov ecx, dword ptr [esi + 0xb8]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x3
        je L_0040134E
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
    L_0040134E:
        mov ecx, dword ptr [esi + 0xb4]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x2
        je L_00401366
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
    L_00401366:
        mov ecx, dword ptr [esi + 0xb0]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x1
        je L_0040137E
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
    L_0040137E:
        mov ecx, dword ptr [esi + 0xac]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x0
        je L_00401396
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
    L_00401396:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006A5E06
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00401A70] sub_00401A70 (79 bytes)
extern "C" void ext_005877B0();
extern "C" void ext_0065F2A0();

extern "C" __declspec(naked) void __fastcall fn_00401A70(void* self) {
    __asm {
        push -1
        push 0x008A0588
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0xe4]
        mov dword ptr [esp + 0x10], 0x0
        call ext_0065F2A0
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_005877B0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00401D20] sub_00401D20 (89 bytes)
extern "C" void ext_00401A70();
extern "C" void ext_006A6D5C();

extern "C" __declspec(naked) void __fastcall fn_00401D20(void* self) {
    __asm {
        push -1
        push 0x00872CB8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        push 0x00401CC0
        push 0x7
        push 0x8
        lea eax, [esi + 0xf4]
        push eax
        mov dword ptr [esp + 0x20], 0x0
        call ext_006A6D5C
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00401A70
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0040CCC0] sub_0040CCC0 (204 bytes)
extern "C" void ext_006A6010();
extern "C" void ext_006A6E9E();
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0C4;

extern "C" __declspec(naked) int __fastcall fn_0040CCC0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp+0xc]
        test esi, esi
        push edi
        mov edi, ecx
        je L_else
        push 0x0
        push 0xa2e4d8
        push 0xa2e034
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_then
        push eax
        push 0xa2e474
        push 0xa2e034
        push eax
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_then
        push eax
        push 0xa2e01c
        push 0xa2e034
        push eax
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_else
    L_then:
        mov esi, dword ptr [esp+0xc]
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [mem_0093A0CC]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_0093A0C8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x34]
        push ecx
        mov ecx, esi
        call edx
        lea eax, [edi+0x7c]
        jmp L_join
    L_else:
        mov esi, dword ptr [esp+0xc]
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [mem_0093A0CC]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_0093A0C4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x34]
        push ecx
        mov ecx, esi
        call edx
        lea eax, [edi+0x74]
    L_join:
        test eax, eax
        jne L_nonnull
        pop edi
        pop esi
        ret 0xc
    L_nonnull:
        mov eax, dword ptr [eax+0x4]
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x004094D0] sub_004094D0 (211 bytes)
extern "C" void ext_004080C0();
extern "C" void ext_006A60C4();
extern "C" int mem_00925134;
extern "C" int mem_009251EC;

extern "C" __declspec(naked) void __fastcall fn_004094D0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        lea esi, [ebp + 0x12c]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L4094_a
        call dword ptr [mem_00925134]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L4094_a:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L4094_b
        call dword ptr [mem_00925134]
    L4094_b:
        cmp esi, esi
        je L4094_c
        call dword ptr [mem_00925134]
    L4094_c:
        cmp edi, ebx
        je L4094_end_loop
    L4094_loop:
        cmp edi, dword ptr [esi + 0x8]
        jb L4094_d
        call dword ptr [mem_00925134]
    L4094_d:
        mov eax, dword ptr [edi]
        test eax, eax
        je L4094_e
        push 0
        push eax
        lea ecx, [ebp + 0x13c]
        call ext_006A60C4
    L4094_e:
        cmp edi, dword ptr [esi + 0x8]
        jb L4094_f
        call dword ptr [mem_00925134]
    L4094_f:
        add edi, 4
        jmp L4094_a
    L4094_end_loop:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L4094_g
        call ebp
    L4094_g:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L4094_h
        call ebp
    L4094_h:
        push ebx
        push esi
        push edi
        push esi
        mov ecx, esi
        call ext_004080C0
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L4094_i
        call ebp
    L4094_i:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L4094_j
        call ebp
    L4094_j:
        cmp ebx, edi
        je L4094_ret
        mov eax, dword ptr [esi + 0x8]
        sub eax, edi
        sar eax, 2
        test eax, eax
        lea ecx, [eax*4]
        lea ebp, [ecx + ebx]
        jle L4094_k
        push ecx
        push edi
        push ecx
        push ebx
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L4094_k:
        mov dword ptr [esi + 0x8], ebp
    L4094_ret:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004095D0] sub_004095D0 (89 bytes)
extern "C" void ext_004094D0();
extern "C" void ext_00455C80();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_004095D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_00455C80
        cmp eax, -1
        jne short L004095E8
        or eax, eax
        pop esi
        ret 4
L004095E8:
        mov edx, dword ptr [esi + 0x13c]
        mov eax, dword ptr [edx + 0x13c]
        lea ecx, [esi + 0x13c]
        push 1
        push esi
        call eax
        mov ecx, dword ptr [esi + 0x15c]
        push 0
        push 1
        push 0x401
        push ecx
        call dword ptr [mem_00925694]
        mov ecx, esi
        call ext_004094D0
        mov byte ptr [esi + 0x1ac], 1
        xor eax, eax
        pop esi
        ret 4
    }
}

// [0x0040BF20] sub_0040BF20 (240 bytes)
extern "C" void ext_006A5E60();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A60DC();
extern "C" int mem_009242FC;
extern "C" int mem_00924410;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_0040BF20(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x874789
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x210
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 0x4]
        call ext_006A60DC
loc_0040BF58:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        lea ecx, [ebp - 0x14]
        call dword ptr [mem_009242FC]
        mov esi, dword ptr [ebp - 0x18]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x14]
        push 0x0
        push 0x200
        lea ecx, [ebp - 0x21c]
        push ecx
        mov ecx, esi
        mov byte ptr [ebp - 0x4], 0x2
        call edx
        test eax, eax
        je loc_0040BFBE
        lea eax, [ebp - 0x21c]
        push eax
        push 0x443
        push 0x92abc0
        push 0x92ab9c
        lea ecx, [ebp - 0x14]
        push 0x92ab8c
        push ecx
        call dword ptr [mem_00924410]
        add esp, 0x18
        jmp loc_0040BFDF
loc_0040BFBE:
        push 0x443
        push 0x92abc0
        push 0x92ab9c
        lea edx, [ebp - 0x14]
        push 0x92ab80
        push edx
        call dword ptr [mem_00924410]
        add esp, 0x14
loc_0040BFDF:
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x14]
        call dword ptr [mem_00924300]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x14]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        mov ecx, esi
        call edx
        mov eax, 0x40bf58
        ret
    }
}

// [0x00402180] sub_00402180 (148 bytes)
extern "C" int mem_00872D34;
extern "C" int mem_00928F54;
extern "C" int mem_00928F48;
extern "C" void ext_004034B0();

extern "C" __declspec(naked) void __fastcall fn_00402180(void* self) {
    __asm {
        push -1
        push offset mem_00872D34
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], offset mem_00928F54
        mov dword ptr [esi + 0x4], offset mem_00928F48
        mov ecx, dword ptr [esi + 0x470]
        mov dword ptr [esp + 0x14], 0x2
        call ext_004034B0
        mov edi, dword ptr [esi + 0x470]
        test edi, edi
        mov byte ptr [esp + 0x14], 0x1
        je short loc_4021DD
        mov ecx, edi
        call ext_00403400
        push edi
        call ext_006A5C5C
        add esp, 0x4
loc_4021DD:
        mov ecx, dword ptr [esi + 0x46c]
        test ecx, ecx
        mov byte ptr [esp + 0x14], 0x0
        je short loc_4021F4
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
loc_4021F4:
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00558920
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0040C380] sub_0040C380 (272 bytes)
extern "C" void ext_0042ECC0();
extern "C" void ext_006A60E8();
extern "C" int mem_00925694;
extern "C" int mem_009242FC;
extern "C" int mem_0092449C;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_0040C380(void* self) {
    __asm {
        push -1
        push 0x87cc19
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0x0
        push 0x0
        mov esi, ecx
        mov eax, dword ptr [esi + 0xa4]
        push 0x188
        push eax
        call edi
        test eax, eax
        jl fail_c47c
        mov ecx, dword ptr [esi + 0xa4]
        push 0x0
        push 0x0
        push 0x188
        push ecx
        call edi
        mov edx, dword ptr [esi + 0xa4]
        push 0x0
        push 0x0
        push 0x18b
        push edx
        mov ebx, eax
        call edi
        sub eax, 0x1
        cmp ebx, eax
        jg fail_c47c
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242FC]
        mov ecx, dword ptr [esi + 0xa4]
        lea eax, [esp + 0xc]
        push eax
        push 0x0
        push 0x0
        push 0x188
        push ecx
        mov dword ptr [esp + 0x2c], 0x0
        lea ebx, [esi + 0x84]
        call edi
        push eax
        mov ecx, ebx
        call ext_006A60E8
        push 0x928b5d
        lea ecx, [esp + 0x10]
        call dword ptr [mem_0092449C]
        test eax, eax
        je fail_c472
        mov edx, dword ptr [esi + 0xa4]
        push 0x0
        push 0x0
        push 0x188
        push edx
        call edi
        push eax
        mov ecx, ebx
        call ext_0042ECC0
        test al, al
        jne fail_c472
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    fail_c472:
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
    fail_c47c:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0040C6F0] sub_0040C6F0 (242 bytes)
extern "C" void ext_0040C380();
extern "C" void ext_00664C60();
extern "C" void ext_006A60E8();
extern "C" int mem_00924FE4;
extern "C" int mem_009242FC;
extern "C" int mem_00925694;
extern "C" int mem_00924300;
extern "C" int mem_00924FD4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_009242F4;
extern "C" __declspec(naked) void __fastcall fn_0040C6F0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x87de7c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push esi
        push edi
        mov dword ptr [esp + 0xc], 0
        mov esi, dword ptr [esp + 0x3c]
        mov edi, ecx
        push 0x928b5d
        mov ecx, esi
        mov dword ptr [esp + 0x38], 0
        call dword ptr [mem_00924FE4]
        mov ecx, edi
        mov dword ptr [esp + 0x34], 0
        mov dword ptr [esp + 0xc], 1
        call ext_0040C380
        test al, al
        je near ptr L_0040C7CD
        lea ecx, [esp + 8]
        call dword ptr [mem_009242FC]
        mov ecx, dword ptr [edi + 0xa4]
        lea eax, [esp + 8]
        push eax
        push 0
        push 0
        push 0x188
        push ecx
        mov dword ptr [esp + 0x48], 1
        call dword ptr [mem_00925694]
        push eax
        lea ecx, [edi + 0x84]
        call ext_006A60E8
        lea ecx, [esp + 8]
        call dword ptr [mem_00924300]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FD4]
        lea edx, [esp + 0x10]
        push esi
        push edx
        call ext_00664C60
        add esp, 8
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x38], 2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x34], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 8]
        call dword ptr [mem_009242F4]
    L_0040C7CD:
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
    }
}

// [0x0040D790] sub_0040D790 (111 bytes)
extern "C" void ext_0040BC40();
extern "C" void ext_0040C6F0();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0040D790(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x1c
        push esi
        lea eax, [esp+4]
        push eax
        mov esi, ecx
        call ext_0040C6F0
        push eax
        lea ecx, [esi+0x340]
        mov dword ptr [esp+0x2c], 0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp+4]
        mov dword ptr [esp+0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        call ext_0040BC40
        mov edx, [esi]
        mov eax, [edx+0x168]
        mov ecx, esi
        call eax
        mov ecx, [esp+0x20]
        pop esi
        mov fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0040C1D0] sub_0040C1D0 (289 bytes)
extern "C" void ext_0040EF90();
extern "C" void ext_0042EC80();
extern "C" void ext_006A5F38();
extern "C" void ext_006A5F6E();
extern "C" void ext_006A5FF2();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0040C1D0(void* self) {
    __asm {
        push -1
        push 0x87491f
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov [esp + 4], esi
        mov dword ptr [esi], 0x92ac14
        lea ecx, [esi + 0x324]
        mov dword ptr [esp + 0x10], 0xc
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x308]
        mov byte ptr [esp + 0x10], 0xb
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x2ec]
        mov byte ptr [esp + 0x10], 0xa
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x2d0]
        mov byte ptr [esp + 0x10], 0x9
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x2b4]
        mov byte ptr [esp + 0x10], 0x8
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x298]
        mov byte ptr [esp + 0x10], 0x7
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x224]
        mov byte ptr [esp + 0x10], 0x6
        call ext_0040EF90
        lea ecx, [esi + 0x1b0]
        mov byte ptr [esp + 0x10], 0x5
        call ext_0040EF90
        lea ecx, [esi + 0x13c]
        mov byte ptr [esp + 0x10], 0x4
        call ext_0040EF90
        lea ecx, [esi + 0xe8]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006A5F38
        lea ecx, [esi + 0x84]
        mov byte ptr [esp + 0x10], 0x2
        call ext_0042EC80
        lea ecx, [esi + 0x7c]
        mov byte ptr [esp + 0x10], 0x1
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esi + 0x74]
        mov byte ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A5F6E
        mov ecx, [esp + 8]
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0040CE60] sub_0040CE60 (85 bytes)
extern "C" void ext_0040C1D0();
extern "C" void ext_0040FD00();

extern "C" __declspec(naked) void __fastcall fn_0040CE60(void* self) {
    __asm {
        push -1
        push 0x00874A18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0092AE0C
        lea ecx, [esi + 0x340]
        mov dword ptr [esp + 0x10], 0x0
        call ext_0040FD00
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0040C1D0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0040D5B0] sub_0040D5B0 (134 bytes)
extern "C" void ext_00410230();
extern "C" __declspec(naked) void __fastcall fn_0040D5B0(void* self) {
    __asm {
        push -1
        push 874ab3h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 92b324h
        lea ecx, [esi + 428h]
        mov dword ptr [esp + 10h], 3
        call ext_006A5F38
        lea ecx, [esi + 3c4h]
        mov byte ptr [esp + 10h], 2
        call ext_00410230
        lea ecx, [esi + 360h]
        mov byte ptr [esp + 10h], 1
        call ext_00410230
        lea ecx, [esi + 340h]
        mov byte ptr [esp + 10h], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 10h], -1
        call ext_0040C1D0
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x0040D1F0] sub_0040D1F0 (150 bytes)
extern "C" void ext_0040C1D0();
extern "C" void ext_0040EF90();
extern "C" void ext_0040FD00();
extern "C" void ext_006A5F38();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0040D1F0(void* self) {
    __asm {
        push -1
        push 0x874a71
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x92af84
        lea ecx, [esi + 0x49c]
        mov dword ptr [esp + 0x10], 0x4
        call ext_0040EF90
        lea ecx, [esi + 0x428]
        mov byte ptr [esp + 0x10], 0x3
        call ext_0040FD00
        lea ecx, [esi + 0x3b4]
        mov byte ptr [esp + 0x10], 0x2
        call ext_0040FD00
        lea ecx, [esi + 0x360]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006A5F38
        lea ecx, [esi + 0x340]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0040C1D0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0040F5D0] sub_0040F5D0 (293 bytes)
extern "C" void ext_0040F170();
extern "C" int mem_00925678;
extern "C" __declspec(naked) void __fastcall fn_0040F5D0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        test byte ptr [esp + 0x18], 0x8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x68]
        je short L_keep
        mov edi, dword ptr [esi + 0x5c]
L_keep:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x14]
        mov ebx, dword ptr [esp + 0x10]
        push edi
        push eax
        add ecx, -2
        push ecx
        push eax
        add edx, 2
        push edx
        push ebx
        mov ecx, esi
        call ext_0040F170
        mov eax, dword ptr [esp + 0x18]
        push edi
        lea ecx, [eax + 3]
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        push eax
        add ecx, -3
        push ecx
        push ebx
        mov ecx, esi
        call ext_0040F170
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        push edi
        add edx, -2
        push edx
        add eax, -1
        push eax
        add ecx, 2
        push ecx
        push eax
        push ebx
        mov ecx, esi
        call ext_0040F170
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        push edi
        push eax
        lea edx, [ecx - 4]
        push edx
        add eax, -3
        push eax
        add ecx, -1
        push ecx
        push ebx
        mov ecx, esi
        call ext_0040F170
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x1c]
        push edi
        add eax, -1
        push eax
        add ecx, 1
        push ecx
        push eax
        add edx, -3
        push edx
        push ebx
        mov ecx, esi
        call ext_0040F170
        mov eax, dword ptr [esp + 0x20]
        push edi
        lea ecx, [eax - 4]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        lea edx, [ecx - 1]
        push edx
        add eax, -1
        push eax
        add ecx, 2
        push ecx
        push ebx
        mov ecx, esi
        call ext_0040F170
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x20]
        push edi
        add eax, 1
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push eax
        add ecx, -3
        push ecx
        push eax
        push ebx
        mov ecx, esi
        call ext_0040F170
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push edi
        lea edx, [eax - 1]
        push edx
        lea edx, [ecx + 3]
        push edx
        add eax, 2
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call ext_0040F170
        push -1
        push -1
        lea eax, [esp + 0x1c]
        push eax
        call dword ptr [mem_00925678]
        pop edi
        pop esi
        pop ebx
        ret 0x18
    }
}

// [0x00409320] sub_00409320 (170 bytes)
extern "C" void ext_00454BE0();
extern "C" void ext_00455F10();
extern "C" void ext_004581C0();
extern "C" void ext_006A609A();
extern "C" void ext_006A60B8();
extern "C" int mem_0093A0C4;
extern "C" int mem_0093A0C8;

extern "C" __declspec(naked) void* __fastcall fn_00409320(void* self) {
    __asm {
        push -1
        push 874050h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        call ext_004581C0
        xor ebx, ebx
        mov dword ptr [esi], 92a5ech
        mov dword ptr [esp + 14h], ebx
        mov dword ptr [esi + 130h], ebx
        mov dword ptr [esi + 134h], ebx
        mov dword ptr [esi + 138h], ebx
        lea ecx, [esi + 13ch]
        mov byte ptr [esp + 14h], 1
        call ext_006A609A
        lea ecx, [esi + 1b0h]
        mov byte ptr [esp + 14h], 2
        mov byte ptr [esi + 1ach], bl
        call ext_006A60B8
        mov dword ptr [esi + 1bch], ebx
        mov dword ptr [esi + 1b8h], 92a5d4h
        mov eax, dword ptr [mem_0093A0C4]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 18h], 4
        call ext_00455F10
        mov ecx, dword ptr [mem_0093A0C8]
        push ecx
        mov ecx, esi
        call ext_00454BE0
        mov ecx, dword ptr [esp + 0ch]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x004091D0] sub_004091D0 (324 bytes)
extern "C" void ext_004090C0();
extern "C" void ext_006A5E4E();
extern "C" void ext_006A5E72();
extern "C" void ext_006A5EC0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004091D0(void* self) {
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    ext_004090C0
        mov     esi, dword ptr [ecx + 0x130]
        mov     ebp, dword ptr [mem_00925134]
        test    al, al
        lea     edi, [ecx + 0x12c]
        sete    byte ptr [esp + 0x13]
        xor     eax, eax
        cmp     esi, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x1c], edi
        jbe     loc_409210
        call    ebp
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
loc_409210:
        mov     ebx, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebx
        jbe     loc_40921a
        call    ebp
loc_40921a:
        cmp     edi, edi
        je      loc_409220
        call    ebp
loc_409220:
        cmp     esi, ebx
        je      loc_40930c
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_40922f
        call    ebp
loc_40922f:
        mov     ecx, dword ptr [esi]
        push    0x5
        call    ext_006A5E72
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_40923f
        call    ebp
loc_40923f:
        mov     ecx, dword ptr [esi]
        call    ext_006A5EC0
        cmp     eax, 0x89
        sete    bl
        cmp     byte ptr [esp + 0x13], 0x0
        je      loc_4092a1
        test    bl, bl
        mov     ebp, dword ptr [esp + 0x14]
        je      loc_409260
        add     ebp, 0x2
loc_409260:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     al, bl
        neg     al
        sbb     eax, eax
        and     eax, -0x1e
        add     eax, 0x20
        cmp     esi, dword ptr [ecx + 0x8]
        mov     edi, eax
        jb      loc_40927d
        call    dword ptr [mem_00925134]
loc_40927d:
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esi]
        push    0x4
        push    0x20
        push    edi
        push    edx
        push    ebp
        push    0x0
        call    ext_006A5E4E
        neg     bl
        sbb     ebx, ebx
        and     ebx, -0x1a
        add     ebx, 0x22
        add     dword ptr [esp + 0x14], ebx
        jmp     loc_4092eb
loc_4092a1:
        test    bl, bl
        mov     ebp, dword ptr [esp + 0x18]
        je      loc_4092ac
        add     ebp, 0x2
loc_4092ac:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     al, bl
        neg     al
        sbb     eax, eax
        and     eax, -0x1f
        add     eax, 0x20
        cmp     esi, dword ptr [ecx + 0x8]
        mov     edi, eax
        jb      loc_4092c9
        call    dword ptr [mem_00925134]
loc_4092c9:
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esi]
        push    0x4
        push    edi
        push    0x20
        push    ebp
        push    edx
        push    0x0
        call    ext_006A5E4E
        neg     bl
        sbb     ebx, ebx
        and     ebx, -0x1b
        add     ebx, 0x22
        add     dword ptr [esp + 0x18], ebx
loc_4092eb:
        mov     eax, dword ptr [esp + 0x1c]
        cmp     esi, dword ptr [eax + 0x8]
        jb      loc_4092fa
        call    dword ptr [mem_00925134]
loc_4092fa:
        mov     ebp, dword ptr [mem_00925134]
        mov     edi, dword ptr [esp + 0x1c]
        add     esi, 0x4
        jmp     loc_409210
loc_40930c:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
    }
}

// [0x00409470] sub_00409470 (94 bytes)
extern "C" void ext_004564A0();
extern "C" void ext_004091D0();
extern "C" void ext_00409120();
extern "C" void ext_006A5E00();
extern "C" int mem_00925650;
extern "C" int mem_00925688;
extern "C" __declspec(naked) void __fastcall fn_00409470(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_004564A0
        cmp byte ptr [esi + 0x1ac], 0x0
        je short loc_409499
        mov ecx, esi
        call ext_004091D0
loc_409499:
        mov ecx, esi
        call ext_00409120
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        pop esi
        mov dword ptr [esp + 0xc], 0x1
        mov dword ptr [esp + 0x8], 0x0
        mov ecx, dword ptr [eax + 0x20]
        mov dword ptr [esp + 0x4], ecx
        jmp dword ptr [mem_00925688]
    }
}

// [0x004013C0] sub_004013C0 (346 bytes)
extern "C" void ext_006A5C68(); extern "C" void ext_006A5E00(); extern "C" void ext_006A5E4E(); extern "C" void ext_006A5E54(); extern "C" int mem_00925694; extern "C" int mem_00925690;
extern "C" __declspec(naked) void __fastcall fn_004013C0(void* self) {
    __asm {
        sub esp, 0x30
        push ebx
        push esi
        push edi
        mov edi, [mem_00925694]
        push 0
        push 0
        mov esi, ecx
        mov eax, [esi+0x20]
        push 0x474
        push eax
        call edi
        push eax
        call ext_006A5E00
        mov edx, [eax+0x20]
        mov ebx, [mem_00925690]
        lea ecx, [esp+0x1c]
        push ecx
        push edx
        call ebx
        lea eax, [esp+0x1c]
        push eax
        mov ecx, esi
        call ext_006A5E54
        mov edx, [esi+0x20]
        lea ecx, [esp+0x2c]
        push ecx
        push edx
        call ebx
        mov eax, [esp+0x30]
        mov ecx, [esp+0x38]
        mov edx, [esp+0x34]
        push 0
        sub ecx, eax
        add ecx, 0x22
        push ecx
        mov ecx, [esp+0x34]
        sub edx, ecx
        push edx
        push eax
        push ecx
        push 0
        mov ecx, esi
        call ext_006A5E4E
        mov eax, [esp+0x24]
        mov edx, [esi+0x110]
        mov edx, [edx+0x13c]
        lea ecx, [eax-0x3c]
        mov [esp+0x14], eax
        mov eax, [esp+0x28]
        add eax, 7
        mov [esp+0x10], eax
        push 0x4b1
        add eax, 0x14
        push esi
        mov [esp+0x20], eax
        lea eax, [esp+0x14]
        mov [esp+0x14], ecx
        push eax
        lea ecx, [esi+0x110]
        push 0x50010000
        push 0x928a80
        call edx
        mov eax, [esi+0x20]
        push 0
        push 0
        push 0x31
        push eax
        call edi
        push eax
        call ext_006A5C68
        test eax, eax
        je l1
        mov eax, [eax+4]
    l1:
        mov ecx, [esi+0x130]
        push 1
        push eax
        push 0x30
        push ecx
        call edi
        mov eax, [esp+0x1c]
        mov edx, [esi+0xbc]
        mov edx, [edx+0x13c]
        mov [esp+0xc], eax
        add eax, 0x3c
        mov [esp+0x14], eax
        mov eax, [esp+0x28]
        add eax, 7
        mov [esp+0x10], eax
        push 0x493
        add eax, 0x14
        push esi
        mov [esp+0x20], eax
        lea eax, [esp+0x14]
        push eax
        lea ecx, [esi+0xbc]
        push 0x50010000
        push 0x928a78
        call edx
        mov eax, [esi+0x20]
        push 0
        push 0
        push 0x31
        push eax
        call edi
        push eax
        call ext_006A5C68
        test eax, eax
        je l2
        mov eax, [eax+4]
    l2:
        mov ecx, [esi+0xdc]
        push 1
        push eax
        push 0x30
        push ecx
        call edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret
    }
}

// [0x0040D800] sub_0040D800 (346 bytes)
extern "C" void ext_0040BC40(); extern "C" void ext_0040D6E0(); extern "C" void ext_00664A80(); extern "C" void ext_006A5F4A(); extern "C" int mem_009242FC; extern "C" int mem_00924300; extern "C" int mem_00924FD4; extern "C" int mem_009242F4;
extern "C" __declspec(naked) void __fastcall fn_0040D800(void* self) {
    __asm {
        push -1
        _emit 0x68
        _emit 0x19
        _emit 0xcc
        _emit 0x87
        _emit 0x00
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        mov ebx, ecx
        cmp byte ptr [ebx+0x35c], 0
        je done
        push esi
        push edi
        lea ecx, [esp+0xc]
        call dword ptr [mem_009242FC]
        lea eax, [esp+0xc]
        push eax
        lea ecx, [ebx+0x428]
        mov dword ptr [esp+0x1c], 0
        call ext_006A5F4A
        lea ecx, [esp+0xc]
        lea esi, [ebx+0x340]
        call dword ptr [mem_00924300]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FD4]
        push 0
        push 0x928b5d
        push 0x92b4b0
        push esi
        call ext_00664A80
        push 0
        push 0x928b5d
        push 0x92b4ac
        push esi
        mov edi, eax
        call ext_00664A80
        push 0
        push 0x928b5d
        push 0x92b4a8
        push esi
        add edi, eax
        call ext_00664A80
        push 0
        push 0x928b5d
        push 0x92ab74
        push esi
        add edi, eax
        call ext_00664A80
        add esp, 0x40
        push 0
        push 0x928b5d
        push 0x92b4a4
        push esi
        add edi, eax
        call ext_00664A80
        push 0
        push 0x928b5d
        push 0x92b4a0
        push esi
        add edi, eax
        call ext_00664A80
        push 0
        push 0x928b5d
        push 0x92b49c
        push esi
        add edi, eax
        call ext_00664A80
        push 0
        push 0x928b5d
        push 0x92b498
        push esi
        add edi, eax
        call ext_00664A80
        add esp, 0x40
        push 0
        push 0x928b5d
        push 0x92b494
        push esi
        add edi, eax
        call ext_00664A80
        add esp, 0x10
        add eax, edi
        test eax, eax
        pop edi
        pop esi
        jle skip
        mov ecx, ebx
        call ext_0040BC40
    skip:
        mov ecx, ebx
        call ext_0040D6E0
        mov edx, [ebx]
        mov eax, [edx+0x168]
        mov ecx, ebx
        call eax
        lea ecx, [esp+4]
        call dword ptr [mem_009242F4]
    done:
        mov ecx, [esp+8]
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0040ACB0] sub_0040ACB0 (348 bytes)
extern "C" void ext_0040AC20();
extern "C" int mem_00924FCC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_0040ACB0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x874530
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x90
        mov eax, dword ptr [esp + 0xa4]
        push esi
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x4], esi
        jne L_nonnull
        lea eax, [esp + 0x40]
        push eax
        call ext_0040AC20
        push eax
        lea ecx, [esp + 0x28]
        push 0x92ab74
        push ecx
        mov dword ptr [esp + 0xa8], esi
        call dword ptr [mem_00924FCC]
        add esp, 0xc
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x9c], 0x2
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [esp + 0xa4]
        lea edx, [esp + 0x24]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x9c], 0xffffffff
        call dword ptr [mem_00924FF4]
        jmp L_end
L_nonnull:
        cmp eax, 0x1
        jne L_other
        lea eax, [esp + 0x78]
        push eax
        call ext_0040AC20
        mov esi, eax
        push 0xac8884
        lea ecx, [esp + 0x60]
        push 0x92ab74
        push ecx
        mov dword ptr [esp + 0xa8], 0x3
        call dword ptr [mem_00924FCC]
        push esi
        push eax
        lea edx, [esp + 0x1c]
        push edx
        mov byte ptr [esp + 0xb4], 0x4
        call dword ptr [mem_00924FD0]
        add esp, 0x18
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0x9c], 0x6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x78]
        mov byte ptr [esp + 0x9c], 0x7
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [esp + 0xa4]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x9c], 0xffffffff
        call dword ptr [mem_00924FF4]
        jmp L_end
L_other:
        mov esi, dword ptr [esp + 0xa4]
        push 0x928b5d
        mov ecx, esi
        call dword ptr [mem_00924FE4]
L_end:
        mov ecx, dword ptr [esp + 0x94]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x9c
        ret 8
    }
}

// [0x0040B250] sub_0040B250 (89 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0040B250(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        push esi
        mov dword ptr [esp + 0x4], 0x0
        jne L_nonzero
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        call fn_0040ACB0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_nonzero:
        cmp eax, 0x1
        je L_one
        cmp eax, 0x2
        je L_one
        mov esi, dword ptr [esp + 0xc]
        push 0x92ab7c
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_one:
        mov esi, dword ptr [esp + 0xc]
        push 0x1
        push esi
        call fn_0040ACB0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00405E30] sub_00405E30 (371 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_00925694;
extern "C" int mem_009242FC;
extern "C" int mem_00924FE8;
extern "C" int mem_00924300;
extern "C" int mem_00924FD4;
extern "C" int mem_00925134;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_00405E30(void* self) {
    __asm {
        push -1
        push 087361bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 58h
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push ebp
        push esi
        push edi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 190h]
        push 130bh
        push eax
        call ebx
        lea ecx, [esp + 10h]
        mov edi, eax
        call dword ptr [mem_009242FC]
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 70h], 0
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 10h]
        push ecx
        lea ecx, [esi + 50ch]
        mov byte ptr [esp + 74h], 1
        call ext_006A5F4A
        lea ecx, [esp + 10h]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 18h]
        call dword ptr [mem_00924FD4]
        mov eax, dword ptr [esi + 564h]
        test eax, eax
        je L_invalid1
        mov ecx, dword ptr [esi + 568h]
        sub ecx, eax
        mov eax, 02e8ba2e9h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp edi, eax
        jb L_ok1
L_invalid1:
        call dword ptr [mem_00925134]
L_ok1:
        mov eax, dword ptr [esi + 564h]
        mov ebp, edi
        imul ebp, ebp, 58h
        add eax, ebp
        lea edx, [esp + 14h]
        push edx
        lea ecx, [eax + 3ch]
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esi + 564h]
        test eax, eax
        mov dword ptr [esp + 30h], 1
        je L_invalid2
        mov ecx, dword ptr [esi + 568h]
        sub ecx, eax
        mov eax, 02e8ba2e9h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp edi, eax
        jb L_ok2
L_invalid2:
        call dword ptr [mem_00925134]
L_ok2:
        mov eax, dword ptr [esi + 564h]
        add eax, ebp
        add eax, 3ch
        push eax
        lea ecx, [esp + 50h]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 4ch]
        mov byte ptr [esp + 70h], 2
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 190h]
        mov dword ptr [esp + 3ch], eax
        lea eax, [esp + 30h]
        push eax
        push edi
        push 1306h
        push ecx
        call ebx
        lea ecx, [esp + 4ch]
        mov byte ptr [esp + 70h], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 14h]
        mov byte ptr [esp + 70h], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 10h]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 68h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 64h
        ret
    }
}

// [0x00406640] sub_00406640 (391 bytes)
extern "C" void ext_00402B60();
extern "C" void ext_00406380();
// ext_006A5C5C is already declared earlier as void ext_006A5C5C(int);
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5E84();
extern "C" void ext_006A5EFC();
extern "C" void ext_006A5F2C();
extern "C" void ext_006A5F38();
extern "C" void ext_006A5F6E();
extern "C" int mem_00AC6EB0;

extern "C" __declspec(naked) void __fastcall fn_00406640(void* self) {
    __asm {
        push -1
        push 0x8737a5
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x929f64
        xor ebx, ebx
        lea ecx, [esi + 0x570]
        mov dword ptr [esp + 0x18], 0x10
        mov dword ptr [mem_00AC6EB0], ebx
        call ext_00402B60
        mov eax, dword ptr [esi + 0x564]
        cmp eax, ebx
        lea edi, [esi + 0x560]
        mov byte ptr [esp + 0x18], 0xf
        je L_done_cleanup
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [edi + 0x8]
        push edx
        push edi
        push ecx
        push eax
        call ext_00406380
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_done_cleanup:
        lea ecx, [esi + 0x50c]
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov dword ptr [edi + 0xc], ebx
        mov byte ptr [esp + 0x18], 0xe
        call ext_006A5F38
        lea ecx, [esi + 0x4b8]
        mov byte ptr [esp + 0x18], 0xd
        call ext_006A5EFC
        lea ecx, [esi + 0x464]
        mov byte ptr [esp + 0x18], 0xc
        call ext_006A5DFA
        lea ecx, [esi + 0x410]
        mov byte ptr [esp + 0x18], 0xb
        call ext_006A5DFA
        lea ecx, [esi + 0x3bc]
        mov byte ptr [esp + 0x18], 0xa
        call ext_006A5EFC
        lea ecx, [esi + 0x368]
        mov byte ptr [esp + 0x18], 0x9
        call ext_006A5EFC
        lea ecx, [esi + 0x314]
        mov byte ptr [esp + 0x18], 0x8
        call ext_006A5EFC
        lea ecx, [esi + 0x2c0]
        mov byte ptr [esp + 0x18], 0x7
        call ext_006A5DFA
        lea ecx, [esi + 0x26c]
        mov byte ptr [esp + 0x18], 0x6
        call ext_006A5F38
        lea ecx, [esi + 0x218]
        mov byte ptr [esp + 0x18], 0x5
        call ext_006A5F38
        lea ecx, [esi + 0x1c4]
        mov byte ptr [esp + 0x18], 0x4
        call ext_006A5F38
        lea ecx, [esi + 0x170]
        mov byte ptr [esp + 0x18], 0x3
        call ext_006A5E84
        lea ecx, [esi + 0x11c]
        mov byte ptr [esp + 0x18], 0x2
        call ext_006A5DFA
        lea ecx, [esi + 0xc8]
        mov byte ptr [esp + 0x18], 0x1
        call ext_006A5DFA
        lea ecx, [esi + 0x74]
        mov byte ptr [esp + 0x18], bl
        call ext_006A5F2C
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00408120] sub_00408120 (444 bytes)
extern "C" __declspec(naked) void __fastcall fn_00408120(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_006A5EA8
        mov     edi, dword ptr [esi + 0x4d0]
        add     esi, 0x4c8
        cmp     dword ptr [esi + 0x4], edi
        jbe     L_408145
        call    dword ptr [mem_00925134]
L_408145:
        mov     ebx, esi
L_408147:
        mov     ebp, dword ptr [esi + 0x4]
        cmp     ebp, dword ptr [esi + 0x8]
        jbe     L_408155
        call    dword ptr [mem_00925134]
L_408155:
        test    ebx, ebx
        je      L_40815D
        cmp     ebx, esi
        je      L_408163
L_40815D:
        call    dword ptr [mem_00925134]
L_408163:
        cmp     edi, ebp
        je      L_4081A7
        test    ebx, ebx
        mov     dword ptr [esp + 0x18], edi
        jne     L_408175
        call    dword ptr [mem_00925134]
L_408175:
        cmp     edi, dword ptr [ebx + 0x4]
        ja      L_408180
        call    dword ptr [mem_00925134]
L_408180:
        lea     ebp, [edi - 0x4]
        cmp     ebp, dword ptr [ebx + 0x8]
        jb      L_40818E
        call    dword ptr [mem_00925134]
L_40818E:
        mov     ecx, dword ptr [ebp]
        push    0
        call    ext_006A5E72
        cmp     edi, dword ptr [ebx + 0x4]
        ja      L_4081A3
        call    dword ptr [mem_00925134]
L_4081A3:
        mov     edi, ebp
        jmp     L_408147
L_4081A7:
        mov     edi, dword ptr [esp + 0x34]
        mov     ebx, dword ptr [esi + 0x8]
        add     edi, -0x5
        cmp     dword ptr [esi + 0x4], ebx
        jbe     L_4081BC
        call    dword ptr [mem_00925134]
L_4081BC:
        mov     ebp, esi
        mov     edi, edi
L_4081C0:
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x34], eax
        jbe     L_4081D2
        call    dword ptr [mem_00925134]
L_4081D2:
        test    ebp, ebp
        je      L_4081DA
        cmp     ebp, esi
        je      L_4081E0
L_4081DA:
        call    dword ptr [mem_00925134]
L_4081E0:
        cmp     ebx, dword ptr [esp + 0x34]
        je      L_408262
        test    ebp, ebp
        mov     dword ptr [esp + 0x18], ebx
        jne     L_4081F4
        call    dword ptr [mem_00925134]
L_4081F4:
        cmp     ebx, dword ptr [ebp + 0x4]
        ja      L_4081FF
        call    dword ptr [mem_00925134]
L_4081FF:
        lea     esi, [ebx - 0x4]
        cmp     esi, dword ptr [ebp + 0x8]
        mov     dword ptr [esp + 0x34], esi
        jb      L_408211
        call    dword ptr [mem_00925134]
L_408211:
        mov     esi, dword ptr [esi]
        mov     ecx, dword ptr [esi + 0x20]
        lea     eax, [esp + 0x1c]
        push    eax
        push    ecx
        call    dword ptr [mem_00925690]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, ecx
        sub     edx, eax
        lea     edi, [edi + edx - 0x4]
        mov     edx, dword ptr [esp + 0x28]
        sub     edx, dword ptr [esp + 0x20]
        push    4
        push    edx
        sub     eax, ecx
        push    eax
        push    2
        push    edi
        push    0
        mov     ecx, esi
        call    ext_006A5E4E
        cmp     ebx, dword ptr [ebp + 0x4]
        ja      L_408257
        call    dword ptr [mem_00925134]
L_408257:
        mov     ebx, dword ptr [esp + 0x34]
        mov     esi, ebp
        jmp     L_4081C0
L_408262:
        mov     edi, dword ptr [esi + 0x8]
        cmp     dword ptr [esi + 0x4], edi
        jbe     L_408270
        call    dword ptr [mem_00925134]
L_408270:
        mov     ebx, esi
L_408272:
        mov     ebp, dword ptr [esi + 0x4]
        cmp     ebp, dword ptr [esi + 0x8]
        jbe     L_408280
        call    dword ptr [mem_00925134]
L_408280:
        test    ebx, ebx
        je      L_408288
        cmp     ebx, esi
        je      L_40828E
L_408288:
        call    dword ptr [mem_00925134]
L_40828E:
        cmp     edi, ebp
        je      L_4082D2
        test    ebx, ebx
        mov     dword ptr [esp + 0x18], edi
        jne     L_4082A0
        call    dword ptr [mem_00925134]
L_4082A0:
        cmp     edi, dword ptr [ebx + 0x4]
        ja      L_4082AB
        call    dword ptr [mem_00925134]
L_4082AB:
        lea     ebp, [edi - 0x4]
        cmp     ebp, dword ptr [ebx + 0x8]
        jb      L_4082B9
        call    dword ptr [mem_00925134]
L_4082B9:
        mov     ecx, dword ptr [ebp]
        push    1
        call    ext_006A5E72
        cmp     edi, dword ptr [ebx + 0x4]
        ja      L_4082CE
        call    dword ptr [mem_00925134]
L_4082CE:
        mov     edi, ebp
        jmp     L_408272
L_4082D2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0xc
    }
}

// [0x004041F0] sub_004041F0 (447 bytes)
extern "C" void ext_00403560();
extern "C" void ext_006A3466();
extern "C" void ext_006A3484();
extern "C" void ext_006A348A();
extern "C" void ext_006A3490();
extern "C" void ext_006A3496();
extern "C" void ext_006A349C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00873202;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924074;
extern "C" int mem_00924070;
extern "C" int mem_00929770;
extern "C" int mem_009CE04C;
extern "C" int mem_00928F28;
extern "C" int mem_00929750;

extern "C" __declspec(naked) void __fastcall fn_004041F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push 0xffffffff
        push offset mem_00873202
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x88
        push esi
        push edi
        mov esi, ecx
        call ext_006A3466
        mov ecx, dword ptr [esp + 0xa0]
        push 0x0
        push 0x0
        push 0x0
        push 0x73646976
        lea edi, [esi + 0x8c]
        call dword ptr [mem_00924FF0]
        push eax
        push edi
        call ext_006A349C
        test eax, eax
        je loc_40427c
        push offset mem_00929770
        lea ecx, [esp + 0x78]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x74]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x9c], 0x0
        call ext_00403560
        push offset mem_009CE04C
        lea ecx, [esp + 0x34]
        push ecx
        mov dword ptr [esp + 0x38], offset mem_00928F28
        call ext_006A6DD2
    loc_40427c:
        mov edx, dword ptr [edi]
        push 0x8c
        push esi
        push edx
        call ext_006A3496
        mov eax, dword ptr [esi + 0x3c]
        mov ecx, dword ptr [esi + 0x40]
        sub eax, dword ptr [esi + 0x34]
        sub ecx, dword ptr [esi + 0x38]
        mov edx, dword ptr [edi]
        push edx
        mov dword ptr [esi + 0xc8], eax
        mov dword ptr [esi + 0xcc], ecx
        call ext_006A3490
        push eax
        mov dword ptr [esi + 0xc4], eax
        mov eax, dword ptr [edi]
        push eax
        call ext_006A348A
        cdq
        idiv dword ptr [esi + 0xc4]
        mov ecx, dword ptr [esi + 0xd0]
        mov edx, dword ptr [esi + 0xd4]
        push 0x0
        push 0x0
        mov dword ptr [esi + 0x98], ecx
        lea ecx, [esi + 0xe8]
        push ecx
        push 0x0
        mov dword ptr [esi + 0x9c], edx
        mov edx, dword ptr [esi + 0xe4]
        mov dword ptr [esi + 0xd8], 0x0
        mov dword ptr [esi + 0x94], 0x28
        mov word ptr [esi + 0xa0], 0x1
        mov word ptr [esi + 0xa2], 0x18
        mov dword ptr [esi + 0xa4], 0x0
        mov dword ptr [esi + 0xc0], eax
        lea eax, [esi + 0x94]
        push eax
        push edx
        call dword ptr [mem_00924074]
        push eax
        mov dword ptr [esi + 0xe0], eax
        mov eax, dword ptr [esi + 0xe4]
        push eax
        call dword ptr [mem_00924070]
        mov ecx, dword ptr [edi]
        push 0x0
        push ecx
        call ext_006A3484
        test eax, eax
        mov dword ptr [esi + 0x90], eax
        jne loc_404396
        push offset mem_00929750
        lea ecx, [esp + 0x5c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x58]
        push edx
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x9c], 0x1
        call ext_00403560
        push offset mem_009CE04C
        lea eax, [esp + 0xc]
        push eax
        mov dword ptr [esp + 0x10], offset mem_00928F28
        call ext_006A6DD2
    loc_404396:
        mov ecx, dword ptr [esp + 0x90]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x94
        ret 0x4
    }
}

// [0x00403180] sub_00403180 (89 bytes)
extern "C" void ext_00558C10();
extern "C" int mem_009242FC;
extern "C" __declspec(naked) int __fastcall fn_00403180(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_00558C10
        xor edi, edi
        lea ecx, [esi + 0x478]
        mov dword ptr [esi], 0x929364
        mov dword ptr [esi + 0x4], 0x92935c
        mov dword ptr [esi + 0x46c], edi
        mov dword ptr [esi + 0x470], edi
        mov dword ptr [esi + 0x474], edi
        call dword ptr [mem_009242FC]
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x47c], edi
        mov dword ptr [esi + 0x480], edi
        mov dword ptr [esi + 0x57c], edi
        mov dword ptr [esi + 0x580], eax
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x004032D0] sub_004032D0 (110 bytes)
extern "C" void ext_00558C10();
extern "C" void ext_006A6E8C();
extern "C" int mem_009242FC;
extern "C" int mem_0092944C;

extern "C" void* __fastcall fn_004032D0(void* self, int edx_unused, int a1) {
    char* p = (char*)self;
    typedef void (__thiscall *ThisFn)(void*);
    typedef void* (__cdecl *MemsetFn)(void*, int, unsigned int);

    ((ThisFn)ext_00558C10)(self);
    *(int*)(p + 0x0) = 0x92945c;
    *(int*)(p + 0x4) = 0x929454;
    ((ThisFn)mem_009242FC)(p + 0x504);
    *(int*)(p + 0x470) = 0;
    *(int*)(p + 0x500) = 0;
    *(int*)(p + 0x46c) = 0;
    *(int*)(p + 0x508) = a1;
    ((MemsetFn)ext_006A6E8C)(p + 0x474, 0, 0x8c);
    *(float*)(p + 0x174) = *(float*)&mem_0092944C;
    *(int*)(p + 0x50c) = 0;
    return self;
}

// [0x00401F10] sub_00401F10 (168 bytes)
extern "C" int mem_00872CFC;
extern "C" void ext_004032D0();
extern "C" void ext_00403380();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_00401F10(void* self) {
    __asm {
        push -1
        push offset mem_00872CFC
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_00558C10
        push 0x510
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi], offset mem_00928F54
        mov dword ptr [esi + 4], offset mem_00928F48
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov byte ptr [esp + 0x14], 1
        je short loc_401F6E
        push 0
        mov ecx, eax
        call ext_004032D0
        jmp short loc_401F70
loc_401F6E:
        xor eax, eax
loc_401F70:
        mov dword ptr [esi + 0x46c], eax
        push 0xec
        mov byte ptr [esp + 0x18], 2
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov byte ptr [esp + 0x14], 3
        je short loc_401F9E
        mov ecx, eax
        call ext_00403380
        jmp short loc_401FA0
loc_401F9E:
        xor eax, eax
loc_401FA0:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x470], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00406DC0] sub_00406DC0 (472 bytes)
extern "C" void ext_00557380();
extern "C" void ext_006A5C6E();
extern "C" void ext_006A5FC2();
extern "C" int mem_00AC6EB0;

extern "C" __declspec(naked) void __fastcall fn_00406DC0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8737a5
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0x1fa
        mov dword ptr [esp + 0x14], esi
        call ext_006A5FC2
        lea edi, [esi + 0x74]
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esi], 0x929f64
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi + 0xc8]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 1
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x11c]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 2
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x170]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 3
        call ext_006A5C6E
        mov dword ptr [edi], 0x9298fc
        lea edi, [esi + 0x1c4]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 4
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x218]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 5
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x26c]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 6
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x2c0]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 7
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x314]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 8
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x368]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 9
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x3bc]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0xa
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x410]
        mov byte ptr [esp + 0x18], 0xb
        mov ecx, edi
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x464]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0xc
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x4b8]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0xd
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x50c]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0xe
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        mov dword ptr [esi + 0x564], ebx
        mov dword ptr [esi + 0x568], ebx
        mov dword ptr [esi + 0x56c], ebx
        lea ecx, [esi + 0x570]
        mov byte ptr [esp + 0x18], 0x10
        call ext_00557380
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [mem_00AC6EB0], esi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x0040AAB0] sub_0040AAB0 (115 bytes)
extern "C" void ext_00467670();
extern "C" int mem_00924FC8;
extern "C" int mem_0093A094;
extern "C" int mem_009242F0;
extern "C" int mem_00ACDB40;
extern "C" int mem_009242F4;
extern "C" __declspec(naked) void __fastcall fn_0040AAB0(void* self) {
    __asm {
        push -1
        push 0x87cc19
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        lea esi, [ecx + 0x298]
        push 0x928b5d
        push esi
        call dword ptr [mem_00924FC8]
        add esp, 8
        test al, al
        je short L_0040AB13
        mov eax, dword ptr [mem_0093A094]
        push eax
        lea ecx, [esp + 8]
        call dword ptr [mem_009242F0]
        push esi
        lea ecx, [esp + 8]
        push ecx
        mov ecx, dword ptr [mem_00ACDB40]
        mov dword ptr [esp + 0x18], 0
        call ext_00467670
        lea ecx, [esp + 4]
        call dword ptr [mem_009242F4]
    L_0040AB13:
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0040CAF0] sub_0040CAF0 (362 bytes)
extern "C" void ext_0040A910();
extern "C" void ext_0040AAB0();
extern "C" void ext_0040B5B0();
extern "C" void ext_0040C300();
extern "C" void ext_00419C20();
extern "C" void ext_00419CD0();
extern "C" void ext_00419E30();
extern "C" void ext_006629B0();
extern "C" int mem_00AC88BC;
extern "C" int mem_00924FF0;
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0040CAF0(void* self) {
    __asm {
        push -1
        push 0x8749f8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x98
        push esi
        mov esi, ecx
        push edi
        mov ecx, offset mem_00AC88BC
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F0]
        lea edi, [esi + 0x298]
        mov ecx, edi
        mov dword ptr [esp + 0xa8], 0
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F0]
        push 0
        push 0x70
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        push esi
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0xbc], 1
        call ext_00419C20
        lea ecx, [esp + 8]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xa8], 4
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x30]
        call ext_00419CD0
        cmp eax, 1
        jne fail_path
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esp + 0x34]
        call ext_0040A910
        mov ecx, eax
        mov byte ptr [esp + 0xa8], 5
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xa8], 7
        call dword ptr [mem_009242F4]
        lea eax, [esp + 0x14]
        push eax
        call ext_006629B0
        add esp, 4
        test al, al
        je skip_block
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        mov ecx, esi
        call ext_0040AAB0
        mov ecx, esi
        call ext_0040C300
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x164]
        mov ecx, esi
        call eax
        mov ecx, esi
        call ext_0040B5B0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x168]
        mov ecx, esi
        call eax
    skip_block:
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0xa8], 4
        call dword ptr [mem_00924FF4]
    fail_path:
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0xa8], -1
        call ext_00419E30
        mov ecx, dword ptr [esp + 0xa0]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 0xa4
        ret
    }
}

// [0x0040AE20] sub_0040AE20 (487 bytes)
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" void ext_0040AC20();
extern "C" void ext_006629B0();

extern "C" __declspec(naked) void __fastcall fn_0040AE20(void* self) {
    __asm {
        push -1
        push 0x8745a0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xfc
        push ebx
        push ebp
        push esi
        push edi
        lea eax, [esp + 0x48]
        push eax
        mov edi, ecx
        call ext_0040AC20
        mov ebx, eax
        mov esi, dword ptr [mem_00924FD0]
        push 0xac88a0
        lea ebp, [edi + 0x298]
        lea ecx, [esp + 0xd8]
        push ebp
        push ecx
        mov dword ptr [esp + 0x120], 0
        call esi
        mov edx, dword ptr [esp + 0x128]
        push edx
        push eax
        lea eax, [esp + 0xb0]
        push eax
        mov byte ptr [esp + 0x12c], 1
        call esi
        push ebx
        push eax
        lea ecx, [esp + 0x4c]
        push ecx
        mov byte ptr [esp + 0x138], 2
        call esi
        add esp, 0x24
        lea ecx, [esp + 0x9c]
        mov byte ptr [esp + 0x114], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xd4]
        mov byte ptr [esp + 0x114], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x114], 6
        call dword ptr [mem_00924FF4]
        lea edx, [esp + 0xf0]
        push edx
        mov ecx, edi
        call ext_0040AC20
        mov edi, eax
        push 0xac88a0
        lea eax, [esp + 0xbc]
        push ebp
        push eax
        mov byte ptr [esp + 0x120], 7
        call esi
        mov ecx, dword ptr [esp + 0x128]
        push ecx
        push eax
        lea edx, [esp + 0x94]
        push edx
        mov byte ptr [esp + 0x12c], 8
        call esi
        push 0xac8884
        push eax
        lea eax, [esp + 0x84]
        push eax
        mov byte ptr [esp + 0x138], 9
        call esi
        push edi
        push eax
        lea ecx, [esp + 0x3c]
        push ecx
        mov byte ptr [esp + 0x144], 0xa
        call esi
        add esp, 0x30
        lea ecx, [esp + 0x64]
        mov byte ptr [esp + 0x114], 0xc
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x80]
        mov byte ptr [esp + 0x114], 0xd
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xb8]
        mov byte ptr [esp + 0x114], 0xe
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xf0]
        mov byte ptr [esp + 0x114], 0xf
        call dword ptr [mem_00924FF4]
        lea edx, [esp + 0x2c]
        push edx
        call ext_006629B0
        mov bl, al
        lea eax, [esp + 0x14]
        push eax
        call ext_006629B0
        add esp, 8
        test bl, bl
        jne L_set
        test al, al
        je L_skip
    L_set:
        mov bl, 1
    L_skip:
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x114], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x114], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x10c]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x108
        ret 4
    }
}

// [0x004035D0] sub_004035D0 (489 bytes)
extern "C" void ext_004030F0();
extern "C" void ext_00403560();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_004035D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8731a0
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], esp
        sub esp, 0x154
        cmp eax, 0x80044067
        jg L_4036f3
        je L_4036a9
        cmp eax, 0x80040154
        je L_40365f
        cmp eax, 0x80044066
        jne L_4037a2
        call ext_004030F0
        push 0x929614
        lea ecx, [esp + 0x104]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x100]
        push eax
        lea ecx, [esp + 0x7c]
        mov dword ptr [esp + 0x160], 0
        call ext_00403560
        push 0x9ce04c
        lea ecx, [esp + 0x7c]
        push ecx
        mov dword ptr [esp + 0x80], 0x928f28
        call ext_006A6DD2
    L_40365f:
        call ext_004030F0
        push 0x9295d4
        lea ecx, [esp + 0x13c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x138]
        push edx
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x160], 4
        call ext_00403560
        push 0x9ce04c
        lea eax, [esp + 0x4]
        push eax
        mov dword ptr [esp + 0x8], 0x928f28
        call ext_006A6DD2
    L_4036a9:
        call ext_004030F0
        push 0x92959c
        lea ecx, [esp + 0x120]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x11c]
        push ecx
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0x160], 1
        call ext_00403560
        push 0x9ce04c
        lea edx, [esp + 0x54]
        push edx
        mov dword ptr [esp + 0x58], 0x928f28
        call ext_006A6DD2
    L_4036f3:
        cmp eax, 0x8004406d
        je L_403758
        cmp eax, 0x8004406f
        jne L_4037a2
        call ext_004030F0
        push 0x929570
        lea ecx, [esp + 0xe8]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xe4]
        push eax
        lea ecx, [esp + 0xa4]
        mov dword ptr [esp + 0x160], 3
        call ext_00403560
        push 0x9ce04c
        lea ecx, [esp + 0xa4]
        push ecx
        mov dword ptr [esp + 0xa8], 0x928f28
        call ext_006A6DD2
    L_403758:
        call ext_004030F0
        push 0x929544
        lea ecx, [esp + 0xcc]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0xc8]
        push edx
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x160], 2
        call ext_00403560
        push 0x9ce04c
        lea eax, [esp + 0x2c]
        push eax
        mov dword ptr [esp + 0x30], 0x928f28
        call ext_006A6DD2
    L_4037a2:
        mov ecx, dword ptr [esp + 0x154]
        mov dword ptr fs:[0], ecx
        add esp, 0x160
        ret 4
    }
}

// [0x004043B0] sub_004043B0 (186 bytes)
extern "C" void ext_004035D0(); extern "C" void ext_006A3442(); extern "C" void ext_006A3460(); extern "C" void ext_006A3466(); extern "C" void ext_006A3484(); extern "C" void ext_006A3496(); extern "C" void ext_006A34A2(); extern "C" void ext_006A34A8(); extern "C" int mem_00924300;

extern "C" int __fastcall fn_004043B0(void* self) {
    char* p = (char*)self;
    ((void (__stdcall*)())ext_006A3466)();
    int hr = ((int (__stdcall*)(void*, const char*, unsigned int, void*))ext_006A3460)(p + 0x47c, (*(const char* (__thiscall**)(void*))(&mem_00924300))(p + 0x478), 2, 0);
    ((void (__thiscall*)(void*, int))ext_004035D0)(self, hr);
    hr = ((int (__stdcall*)(void*, void*, unsigned int, int))ext_006A34A8)(*(void**)(p + 0x47c), p + 0x480, 0x73646976, 0);
    ((void (__thiscall*)(void*, int))ext_004035D0)(self, hr);
    *(void**)(p + 0x57c) = ((void* (__stdcall*)(void*, void*))ext_006A3484)(*(void**)(p + 0x480), 0);
    ((int (__stdcall*)(void*, void*, int))ext_006A34A2)(*(void**)(p + 0x47c), p + 0x484, 0x6c);
    ((int (__stdcall*)(void*, void*, int))ext_006A3496)(*(void**)(p + 0x480), p + 0x4f0, 0x8c);
    *(int*)(p + 0x46c) = *(int*)(p + 0x498);
    *(int*)(p + 0x470) = *(int*)(p + 0x49c);
    *(int*)(p + 0x474) = *(int*)(p + 0x4a8);
    ((void* (__stdcall*)(void*, int))ext_006A3442)(*(void**)(p + 0x57c), 0);
    return 0;
}

// [0x004049F0] sub_004049F0 (490 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006A5EBA();
extern "C" void ext_006A5EC0();
extern "C" void ext_006A5EC6();
extern "C" void ext_006A5ECC();
extern "C" int mem_0092566C;
extern "C" int mem_00925670;
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_004049F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x87d718
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x94
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x5c]
        test eax, eax
        je l_early
        cmp eax, 1
        jne l_main
    l_early:
        call ext_006A5EA8
        pop esi
        mov ecx, dword ptr [esp + 0x94]
        mov dword ptr fs:[0], ecx
        add esp, 0xa0
        ret
    l_main:
        push ebx
        push ebp
        push edi
        push esi
        lea ecx, [esp + 0x54]
        call ext_006A5ECC
        mov eax, dword ptr [esi + 0x64]
        push eax
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0xb0], 0
        call ext_006A5EC6
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0x65
        call ext_006A5EC0
        mov ecx, dword ptr [esp + 0x54]
        lea edx, [esp + 0x2c]
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esi + 0x20]
        push edx
        push eax
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esp + 0x30], ecx
        mov dword ptr [esp + 0x24], 1
        call dword ptr mem_0092566C
        lea eax, [esp + 0x2c]
        push eax
        lea ecx, [esp + 0x44]
        push ecx
        call dword ptr mem_00925670
        mov eax, dword ptr [esi + 0x20]
        mov ebx, dword ptr mem_00925694
        lea edx, [esp + 0x40]
        push edx
        push 0
        push 0x1328
        push eax
        call ebx
        mov ecx, dword ptr [esp + 0x44]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x148]
        add ecx, -2
        lea eax, [esp + 0x10]
        mov dword ptr [esp + 0x30], ecx
        push eax
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi + 0x20]
        push 0
        push 0
        push 0x1304
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0x20]
        push 0
        push 0
        push 0x130b
        push ecx
        mov edi, eax
        call ebx
        test edi, edi
        mov ebp, eax
        je l_end
        mov edi, edi
    l_loop:
        sub edi, 1
        cmp edi, ebp
        je l_skip
        mov eax, dword ptr [esi + 0x20]
        lea edx, [esp + 0x2c]
        push edx
        push edi
        push 0x130a
        push eax
        mov dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x30], 0
        call ebx
        mov ecx, dword ptr [esi + 0x60]
        push ecx
        lea ecx, [esp + 0x54]
        call ext_006A5EC6
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x144]
        sub dword ptr [esp + 0x38], 2
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x14c]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        call edx
    l_skip:
        test edi, edi
        jne l_loop
        mov eax, dword ptr [esi + 0x64]
        push eax
        lea ecx, [esp + 0x54]
        call ext_006A5EC6
        mov edx, dword ptr [esi + 0x20]
        lea ecx, [esp + 0x2c]
        push ecx
        push ebp
        push 0x130a
        push edx
        mov dword ptr [esp + 0x28], ebp
        mov dword ptr [esp + 0x30], 1
        call ebx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x144]
        add dword ptr [esp + 0x38], 2
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x14c]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        call edx
    l_end:
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0xac], -1
        call ext_006A5EBA
        mov ecx, dword ptr [esp + 0xa4]
        pop edi
        pop ebp
        pop ebx
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xa0
        ret
    }
}

// [0x0040B010] sub_0040B010 (525 bytes)
extern "C" void ext_0040AC20();
extern "C" void ext_006629B0();
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0040B010(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 00874610h
        push eax
        mov eax, dword ptr [esp+14h]
        mov dword ptr fs:[0], esp
        sub esp, 0fch
        test eax, eax
        push ebx
        push esi
        push edi
        mov esi, ecx
        jne L_B105
        lea eax, [esp+44h]
        push eax
        call ext_0040AC20
        mov edi, eax
        push 00ac88a0h
        add esi, 298h
        push esi
        mov esi, dword ptr [mem_00924FD0]
        lea ecx, [esp+0d8h]
        push ecx
        mov dword ptr [esp+11ch], 0
        call esi
        mov edx, dword ptr [esp+124h]
        push edx
        push eax
        lea eax, [esp+0ach]
        push eax
        mov byte ptr [esp+128h], 1
        call esi
        push edi
        push eax
        lea ecx, [esp+2ch]
        push ecx
        mov byte ptr [esp+134h], 2
        call esi
        add esp, 24h
        lea ecx, [esp+98h]
        mov byte ptr [esp+110h], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+0d0h]
        mov byte ptr [esp+110h], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+44h]
        mov byte ptr [esp+110h], 6
        call dword ptr [mem_00924FF4]
        lea edx, [esp+0ch]
        push edx
        call ext_006629B0
        add esp, 4
        lea ecx, [esp+0ch]
        mov bl, al
        mov dword ptr [esp+110h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        mov al, bl
        jmp L_B203
    L_B105:
        cmp eax, 1
        jne L_B201
        lea eax, [esp+0ech]
        push eax
        call ext_0040AC20
        mov edi, eax
        push 00ac88a0h
        add esi, 298h
        push esi
        mov esi, dword ptr [mem_00924FD0]
        lea ecx, [esp+0bch]
        push ecx
        mov dword ptr [esp+11ch], 7
        call esi
        mov edx, dword ptr [esp+124h]
        push edx
        push eax
        lea eax, [esp+90h]
        push eax
        mov byte ptr [esp+128h], 8
        call esi
        push 00ac8884h
        push eax
        lea ecx, [esp+80h]
        push ecx
        mov byte ptr [esp+134h], 9
        call esi
        push edi
        push eax
        lea edx, [esp+54h]
        push edx
        mov byte ptr [esp+140h], 0ah
        call esi
        add esp, 30h
        lea ecx, [esp+60h]
        mov byte ptr [esp+110h], 0ch
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+7ch]
        mov byte ptr [esp+110h], 0dh
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+0b4h]
        mov byte ptr [esp+110h], 0eh
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+0ech]
        mov byte ptr [esp+110h], 0fh
        call dword ptr [mem_00924FF4]
        lea eax, [esp+28h]
        push eax
        call ext_006629B0
        add esp, 4
        lea ecx, [esp+28h]
        mov bl, al
        mov dword ptr [esp+110h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        mov al, bl
        jmp L_B203
    L_B201:
        xor al, al
    L_B203:
        mov ecx, dword ptr [esp+108h]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 108h
        ret 8
    }
}

// [0x0040BC70] sub_0040BC70 (540 bytes)
extern "C" void ext_0040AC20();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0040BC70(void* self) {
    __asm {
        push -1
        push 0x874770
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xe4
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ebp, [esi + 0x340]
        push ebp
        lea ecx, [esi + 0x2b4]
        call dword ptr [mem_00924FDC]
        lea ebx, [esi + 0x2d0]
        push ebp
        mov ecx, ebx
        call dword ptr [mem_00924FDC]
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_0040AC20
        mov dword ptr [esp + 0x10], eax
        mov edi, dword ptr [mem_00924FD0]
        lea eax, [esi + 0x298]
        push 0xac88a0
        push eax
        lea ecx, [esp + 0xc4]
        push ecx
        mov dword ptr [esp + 0x108], 0x0
        call edi
        push ebx
        push eax
        lea edx, [esp + 0x60]
        push edx
        mov byte ptr [esp + 0x114], 0x1
        call edi
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        push eax
        lea edx, [esp + 0xa4]
        mov bl, 0x2
        push edx
        mov byte ptr [esp + 0x120], bl
        call edi
        add esp, 0x24
        push eax
        lea ecx, [esi + 0x2ec]
        mov byte ptr [esp + 0x100], 0x3
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x84]
        mov byte ptr [esp + 0xfc], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0xfc], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xbc]
        mov byte ptr [esp + 0xfc], 0x0
        call dword ptr [mem_00924FF4]
        or ebx, -1
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xfc], ebx
        call dword ptr [mem_00924FF4]
        push 0xac8884
        lea eax, [esp + 0x18]
        push ebp
        push eax
        call edi
        add esp, 0xc
        lea ebp, [esi + 0x308]
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x100], 0x4
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xfc], ebx
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xd8]
        push ecx
        mov ecx, esi
        call ext_0040AC20
        mov ebx, eax
        push 0xac88a0
        lea eax, [esi + 0x298]
        push eax
        lea edx, [esp + 0xa8]
        push edx
        mov dword ptr [esp + 0x108], 0x5
        call edi
        push ebp
        push eax
        lea eax, [esp + 0x7c]
        push eax
        mov byte ptr [esp + 0x114], 0x6
        call edi
        push ebx
        push eax
        lea ecx, [esp + 0x50]
        push ecx
        mov byte ptr [esp + 0x120], 0x7
        call edi
        add esp, 0x24
        push eax
        lea ecx, [esi + 0x324]
        mov byte ptr [esp + 0x100], 0x8
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0xfc], 0x7
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xfc], 0x6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xa0]
        mov byte ptr [esp + 0xfc], 0x5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xd8]
        mov dword ptr [esp + 0xfc], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0xf4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0xf0
        ret
    }
}
