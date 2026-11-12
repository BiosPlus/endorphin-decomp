// Decompiled translation unit: src/leaf/decompiled_510000.cpp

#include <string>

// [0x0051DE70] sub_0051DE70 (33 bytes)
extern "C" int __fastcall fn_0051DE70(int* self) {
    int a = self[1];
    if (a == 0) {
        return 0;
    }
    return (self[2] - a) / 360;
}

// [0x00515B70] sub_00515B70 (21 bytes)
extern "C" bool ext_00515B20();

extern "C" int __fastcall fn_00515B70(void* self) {
    if (!ext_00515B20()) {
        return 0;
    }
    return *(int*)((char*)self + 0x10);
}

// [0x00517510] sub_00517510 (26 bytes)
extern "C" void ext_005170D0();
extern "C" void ext_00678D70();

extern "C" __declspec(naked) void __fastcall fn_00517510(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005170D0
        push 1
        mov ecx, esi
        call ext_00678D70
        pop esi
        ret 4
    }
}

// [0x00519CF0] sub_00519CF0 (27 bytes)
extern "C" int __cdecl ext_005285A0(int a1);

extern "C" void __fastcall fn_00519CF0(void* self) {
    char* s = (char*)self;
    typedef void (__fastcall *VirtFn)(void*);
    VirtFn vf = (VirtFn)(*(void***)s)[0x40 / 4];
    vf(self);
    *(int*)(s + 0x28) = ext_005285A0(*(int*)(s + 0x20));
}

// [0x00511E40] sub_00511E40 (35 bytes)
extern "C" int mem_00AEBDF8;
extern "C" int mem_00AEBDF4;

extern "C" void* __cdecl fn_00511E40(void) {
    if (!(mem_00AEBDF8 & 1)) {
        mem_00AEBDF8 |= 1;
        mem_00AEBDF4 = 0x951390;
    }
    return &mem_00AEBDF4;
}

// [0x00512950] sub_00512950 (35 bytes)
extern "C" int mem_00AEBE18;
extern "C" int mem_00AEBE14;

extern "C" void* __cdecl fn_00512950(void) {
    if (!(mem_00AEBE18 & 1)) {
        mem_00AEBE18 |= 1;
        mem_00AEBE14 = 0x951358;
    }
    return &mem_00AEBE14;
}

// [0x005170A0] sub_005170A0 (35 bytes)
extern "C" int mem_00AEC0CC;
extern "C" int mem_00AEC0C8;

extern "C" void* __cdecl fn_005170A0(void) {
    if (!(mem_00AEC0CC & 1)) {
        mem_00AEC0CC |= 1;
        mem_00AEC0C8 = 0x951F48;
    }
    return &mem_00AEC0C8;
}

// [0x00517DB0] sub_00517DB0 (34 bytes)
extern "C" void __fastcall ext_00503CA0(void* self);

extern "C" void* __fastcall fn_00517DB0(void* self) {
    ext_00503CA0(self);
    *(double*)((char*)self + 0x28) = 0.0;
    *(void**)self = (void*)0x0094F084;
    *(int*)((char*)self + 0x30) = 0x4B0;
    *((char*)self + 0x20) = 1;
    return self;
}

// [0x005136C0] sub_005136C0 (37 bytes)
extern "C" void ext_00511E40();
extern "C" void ext_0055DA20();

extern "C" __declspec(naked) void* __fastcall fn_005136C0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        push eax
        mov dword ptr [esp + 8], 0
        call ext_00511E40
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x005142F0] sub_005142F0 (35 bytes)
extern "C" void ext_005136C0();

extern "C" __declspec(naked) int __fastcall fn_005142F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        mov dword ptr [esp + 0xc], 0
        call ext_005136C0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x005157F0] sub_005157F0 (38 bytes)
extern "C" void ext_00661980();

extern "C" void* __fastcall fn_005157F0(void* self, int edx_unused, int a1) {
    typedef void (__fastcall *CalleeFn)(void*);
    ((CalleeFn)ext_00661980)(self);
    char* s = (char*)self;
    *(int*)(s + 0x4) = a1;
    *(int*)(s + 0x8) = 0;
    *(int*)(s + 0xC) = 0;
    *(int*)(s + 0x10) = 0;
    *(void**)s = (void*)0x951934;
    return self;
}

// [0x0051E530] sub_0051E530 (41 bytes)
extern "C" void __fastcall fn_0051E530(void* self, int edx_unused, char* first, char* last) {
    char* p = first;
    if (p != last) {
        do {
            void** vtbl = *(void***)p;
            ((void (__thiscall*)(void*, int))vtbl[0])(p, 0);
            p += 0x168;
        } while (p != last);
    }
}

// [0x00519C80] sub_00519C80 (42 bytes)
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_00519C80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0x928b5d
        lea ecx, [esi + 0x4]
        mov dword ptr [esi], 0x95219c
        call dword ptr [mem_00924FE4]
        xor eax, eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esi + 0x20], 0x1
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00519CB0] sub_00519CB0 (44 bytes)
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_00519CB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x4]
        mov dword ptr [esi], 0x95219c
        call dword ptr [mem_00924FE0]
        xor eax, eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esi + 0x20], 0x1
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0051E040] sub_0051E040 (48 bytes)
// Scans records of 0x168 bytes in [begin, end) and returns the first one for
// which pred(record) (__fastcall, this in ecx) returns true; otherwise end-ish.
extern "C" void* __cdecl fn_0051E040(char* begin, char* end, char (__fastcall *pred)(void*)) {
    char* p = begin;
    while (p != end) {
        if (pred(p)) {
            break;
        }
        p += 0x168;
    }
    return p;
}

// [0x00519D10] sub_00519D10 (52 bytes)
// Compares the std::string argument against two runtime-constructed global std::strings
// (at 0x00AECC0C and 0x00AECC28) via the imported basic_string operator==.
extern "C" int mem_00AECC0C;
extern "C" int mem_00AECC28;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void __cdecl fn_00519D10(void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [mem_00924FC4]
        push offset mem_00AECC0C
        push esi
        call edi
        add esp, 0x8
        test al, al
        je short not_equal_second
        pop edi
        xor eax, eax
        pop esi
        ret
not_equal_second:
        push offset mem_00AECC28
        push esi
        call edi
        add esp, 0x8
        neg al
        pop edi
        pop esi
        sbb eax, eax
        neg eax
        ret
    }
}

// [0x0051E1A0] sub_0051E1A0 (56 bytes)
extern "C" void* __cdecl fn_0051E1A0(void* ret, int unused1, void* first, int unused2, void* last, void (__fastcall *fn)(void*)) {
    if (first != last) {
        do {
            fn(first);
            first = (char*)first + 0x168;
        } while (first != last);
    }
    *(void (__fastcall **)(void*))ret = fn;
    return ret;
}

// [0x00519C00] sub_00519C00 (57 bytes)
extern "C" int mem_00924FC0;
extern "C" const char* mem_00A430F4[3];

extern "C" __declspec(naked) int __cdecl fn_00519C00(const std::string& s) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        xor esi, esi
        nop
    loop_top:
        mov eax, dword ptr mem_00A430F4[esi*4]
        push eax
        push edi
        call ebx
        add esp, 0x8
        test al, al
        jne found
        add esi, 0x1
        cmp esi, 0x3
        jl loop_top
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret
    found:
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret
    }
}

// [0x00519C40] sub_00519C40 (57 bytes)
extern "C" int mem_00924FC0;
extern "C" const char* const mem_00AECC44[2];
extern "C" __declspec(naked) int __cdecl fn_00519C40(void* s) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        xor esi, esi
        nop
    loop_00519C40:
        mov eax, dword ptr [mem_00AECC44 + esi*4]
        push eax
        push edi
        call ebx
        add esp, 0x8
        test al, al
        jne found_00519C40
        add esi, 0x1
        cmp esi, 0x2
        jl loop_00519C40
        pop edi
        pop esi
        mov eax, 0x3
        pop ebx
        ret
    found_00519C40:
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret
    }
}

// [0x00516EB0] sub_00516EB0 (59 bytes)
extern "C" int mem_00AEC0A4;
extern "C" int mem_00925134;
extern "C" __declspec(naked) int __stdcall fn_00516EB0(int self) {
    __asm {
        mov eax, dword ptr [mem_00AEC0A4]
        test eax, eax
        jne short L_has
        ret 0x4
    L_has:
        mov ecx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [ecx + 0x34]
        mov ecx, dword ptr [eax + 0x14]
        test ecx, ecx
        push edi
        lea edi, [eax + 0x14]
        je short L_invalid
        mov eax, dword ptr [eax + 0x18]
        sub eax, ecx
        sar eax, 0x2
        cmp esi, eax
        jb short L_ok
    L_invalid:
        call dword ptr [mem_00925134]
    L_ok:
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 4*esi]
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00519E10] sub_00519E10 (61 bytes)
extern "C" __declspec(naked) void __cdecl fn_00519E10(char* dst, char* end, const float* src) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp edx, esi
        je short done
        mov ecx, dword ptr [esp + 0x10]
        lea eax, [edx + 0xc]
    loop_top:
        fld dword ptr [ecx]
        add edx, 0x14
        fstp dword ptr [edx - 0x14]
        add eax, 0x14
        cmp edx, esi
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax - 0x1c]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax - 0x18]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax - 0x14]
        fld dword ptr [ecx + 0x10]
        fstp dword ptr [eax - 0x10]
        jne short loop_top
    done:
        pop esi
        ret
    }
}

// [0x0051AA60] sub_0051AA60 (66 bytes)
extern "C" void __cdecl fn_0051AA60(float* dst, unsigned int count, const float* src) {
    if (count <= 0) {
        return;
    }
    float* eax = dst + 3;
    do {
        if (dst != 0) {
            dst[0] = src[0];
            eax[-2] = src[1];
            eax[-1] = src[2];
            eax[0] = src[3];
            eax[1] = src[4];
        }
        --count;
        dst += 5;
        eax += 5;
    } while (count > 0);
}

// [0x0051AF30] sub_0051AF30 (54 bytes)
extern "C" void ext_0051AA60();
extern "C" __declspec(naked) void __fastcall fn_0051AF30(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_0051AA60
        lea ecx, [esi + 4*esi]
        add esp, 0x18
        lea eax, [edi + 4*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0051A000] sub_0051A000 (71 bytes)
extern "C" int mem_00AECC08;
extern "C" int mem_00AECC04;

extern "C" __declspec(naked) void __fastcall fn_0051A000(void* self, int edx_unused, float a1) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 24h]
        test eax, eax
        je short L_0051A000_global
        mov ecx, dword ptr [eax + 4]
        push eax
        jmp short L_0051A000_call
L_0051A000_global:
        mov ecx, dword ptr [mem_00AECC08]
        push offset mem_00AECC04
L_0051A000_call:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        call eax
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0ch]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 14h]
        sub esp, 8
        fstp dword ptr [esp + 4]
        mov ecx, esi
        fld dword ptr [esp + 0ch]
        fstp dword ptr [esp]
        call eax
        pop esi
        pop ecx
        ret 4
    }
}

// [0x00519170] sub_00519170 (71 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_0050F990();

extern "C" __declspec(naked) void __fastcall fn_00519170(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esi], 0x950a9c
        mov eax, dword ptr [esi + 0x64]
        xor edi, edi
        cmp eax, edi
        je L_0051918C
        push eax
        call ext_006A5C5C
        add esp, 4
L_0051918C:
        mov dword ptr [esi + 0x64], edi
        mov dword ptr [esi + 0x68], edi
        mov dword ptr [esi + 0x6c], edi
        mov eax, dword ptr [esi + 0x34]
        cmp eax, edi
        je L_005191A5
        push eax
        call ext_006A5C5C
        add esp, 4
L_005191A5:
        mov dword ptr [esi + 0x34], edi
        mov dword ptr [esi + 0x38], edi
        mov dword ptr [esi + 0x3c], edi
        pop edi
        mov ecx, esi
        pop esi
        jmp ext_0050F990
    }
}

// [0x0051C5A0] sub_0051C5A0 (71 bytes)
extern "C" void ext_00519C80();

extern "C" __declspec(naked) void __fastcall fn_0051C5A0(void* self) {
    __asm {
        push -1
        push 0x00892EB8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_00519C80
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi], 0x00952574
        xor eax, eax
        mov dword ptr [esi + 0x30], eax
        mov dword ptr [esi + 0x34], eax
        mov dword ptr [esi + 0x38], eax
        mov dword ptr [esi + 0x3C], eax
        mov dword ptr [esi + 0x40], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0051A5C0] sub_0051A5C0 (72 bytes)
struct SortedEntry51A5C0 {
    float key;
    int val;
};

extern "C" SortedEntry51A5C0* __cdecl fn_0051A5C0(SortedEntry51A5C0* first, SortedEntry51A5C0* last, const float* value) {
    int count = last - first;
    while (count > 0) {
        int step = count / 2;
        SortedEntry51A5C0* mid = first + step;
        if (mid->key < *value) {
            first = mid + 1;
            count = count - step - 1;
        } else {
            count = step;
        }
    }
    return first;
}

// [0x00510830] sub_00510830 (73 bytes)
extern "C" void ext_004C72D0();
extern "C" __declspec(naked) void __fastcall fn_00510830(void* self) {
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
        call ext_004C72D0
        sub esi, ebx
        add esp, 0x18
        sar esi, 5
        shl esi, 5
        mov eax, edi
        pop edi
        sub eax, esi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00518030] sub_00518030 (74 bytes)
extern "C" void ext_0050F970();
extern "C" int mem_0092C508;

extern "C" __declspec(naked) void __fastcall fn_00518030(void* self) {
    __asm {
        push -1
        push 0x00892D18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_0050F970
        fld qword ptr [mem_0092C508]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi], 0x009520C4
        xor eax, eax
        mov dword ptr [esi + 0x3C], eax
        mov dword ptr [esi + 0x40], eax
        mov dword ptr [esi + 0x44], eax
        fstp qword ptr [esi + 0x30]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00517310] sub_00517310 (76 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00517310(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x10]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_chk1
        call ebp
L_chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2
        call ebp
L_chk2:
        cmp esi, esi
        je L_chk3
        call ebp
L_chk3:
        cmp edi, ebx
        je L_done
        cmp edi, dword ptr [esi + 0x8]
        jb L_call
        call ebp
L_call:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x68]
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_inc
        call ebp
L_inc:
        add edi, 0x4
        jmp L_chk1
L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00517360] sub_00517360 (76 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00517360(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x10]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_chk1
        call ebp
L_chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2
        call ebp
L_chk2:
        cmp esi, esi
        je L_chk3
        call ebp
L_chk3:
        cmp edi, ebx
        je L_done
        cmp edi, dword ptr [esi + 0x8]
        jb L_call
        call ebp
L_call:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x6c]
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_inc
        call ebp
L_inc:
        add edi, 0x4
        jmp L_chk1
L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00518080] sub_00518080 (76 bytes)
extern "C" __declspec(naked) void __fastcall fn_00518080(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x00892D18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_0050F970
        fld qword ptr [mem_0092C508]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi], 0x009520C4
        xor eax, eax
        mov dword ptr [esi + 0x3C], eax
        mov dword ptr [esi + 0x40], eax
        mov dword ptr [esi + 0x44], eax
        fstp qword ptr [esi + 0x30]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0051E560] sub_0051E560 (76 bytes)
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_0051E560(void* self) {
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
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 0
        mov ecx, esi
        call edx
        add esi, 0x168
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

// [0x00519E50] sub_00519E50 (79 bytes)
extern "C" __declspec(naked) void __cdecl fn_00519E50(float* first, float* last, float* dest) {
    __asm {
        mov eax, dword ptr [esp + 0Ch]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push edi
        mov edi, dword ptr [esp + 0Ch]
        cmp edi, esi
        je short done
        lea edx, [eax + 0Ch]
        lea ecx, [esi + 0Ch]
        jmp short loop_top
        _emit 0x8D
        _emit 0x9B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loop_top:
        fld dword ptr [esi - 14h]
        sub esi, 14h
        fstp dword ptr [eax - 14h]
        sub ecx, 14h
        fld dword ptr [ecx - 8]
        sub eax, 14h
        sub edx, 14h
        cmp esi, edi
        fstp dword ptr [edx - 8]
        fld dword ptr [ecx - 4]
        fstp dword ptr [edx - 4]
        fld dword ptr [ecx]
        fstp dword ptr [edx]
        fld dword ptr [ecx + 4]
        fstp dword ptr [edx + 4]
        jne short loop_top
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x00515B20] sub_00515B20 (79 bytes)
extern "C" void* __fastcall ext_0050E360(void* self, int edx_unused, unsigned int index);

extern "C" __declspec(naked) bool __fastcall fn_00515B20(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0xa0]
        test eax, eax
        je short L_false
        cmp byte ptr [eax + 0x30], 0x0
        je short L_false
        mov edx, dword ptr [eax + 0x20]
        test edx, edx
        lea ecx, [eax + 0x1c]
        je short L_false
        mov eax, dword ptr [ecx + 0x8]
        sub eax, edx
        sar eax, 0x2
        je short L_false
        cmp dword ptr [esi + 0xc], eax
        jb short L_keep
        mov dword ptr [esi + 0xc], 0
    L_keep:
        mov edx, dword ptr [esi + 0xc]
        push edx
        call ext_0050E360
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 0x10], eax
        mov al, 1
        pop esi
        pop ecx
        ret
    L_false:
        xor al, al
        pop esi
        pop ecx
        ret
    }
}

// [0x0051A670] sub_0051A670 (81 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __cdecl fn_0051A670(void* first, void* last, const void* value) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        sub ebx, ebp
        sar ebx, 0x5
        test ebx, ebx
        jle done
        push esi
        push edi
    loop_top:
        mov eax, ebx
        cdq
        sub eax, edx
        mov edi, eax
        mov eax, dword ptr [esp + 0x1c]
        sar edi, 1
        mov esi, edi
        shl esi, 0x5
        push eax
        add esi, ebp
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je go_left
        or ecx, -1
        sub ecx, edi
        lea ebp, [esi + 0x20]
        add ebx, ecx
        jmp loop_check
    go_left:
        mov ebx, edi
    loop_check:
        test ebx, ebx
        jg loop_top
        pop edi
        pop esi
    done:
        mov eax, ebp
        pop ebp
        pop ebx
        ret
    }
}

// [0x0051DF60] sub_0051DF60 (81 bytes)
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void* __cdecl fn_0051DF60(void* first, void* last, const std::string* key) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebp
        je L_ret_first
        push ebx
        mov ebx, dword ptr [mem_00924FC4]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_loop:
        mov eax, dword ptr [esi + 0x154]
        lea ecx, [eax + 0x8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push edi
        call edx
        push eax
        call ebx
        add esp, 0x8
        test al, al
        jne L_found
        add esi, 0x168
        cmp esi, ebp
        jne L_loop
    L_found:
        pop edi
        pop ebx
        mov eax, esi
        pop esi
        pop ebp
        ret
    L_ret_first:
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}

// [0x00511A80] sub_00511A80 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBDA8;
extern "C" int mem_00AEBDA4;

extern "C" __declspec(naked) void* __fastcall fn_00511A80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8924fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBDA8], al
        jne L_done
        or dword ptr [mem_00AEBDA8], eax
        mov ecx, offset mem_00AEBDA4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBDA4], 0x950aec
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBDA4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00511AE0] sub_00511AE0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBDB0;
extern "C" int mem_00AEBDAC;

extern "C" __declspec(naked) void* __fastcall fn_00511AE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89251e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBDB0], al
        jne L_done
        or dword ptr [mem_00AEBDB0], eax
        mov ecx, offset mem_00AEBDAC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBDAC], 0x950bc4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBDAC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00511B40] sub_00511B40 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBDB8;
extern "C" int mem_00AEBDB4;

extern "C" __declspec(naked) void* __fastcall fn_00511B40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89253e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBDB8], al
        jne L_done
        or dword ptr [mem_00AEBDB8], eax
        mov ecx, offset mem_00AEBDB4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBDB4], 0x950c9c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBDB4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00511BA0] sub_00511BA0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBDC0;
extern "C" int mem_00AEBDBC;

extern "C" __declspec(naked) void* __fastcall fn_00511BA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89255e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBDC0], al
        jne L_done
        or dword ptr [mem_00AEBDC0], eax
        mov ecx, offset mem_00AEBDBC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBDBC], 0x950d74
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBDBC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00511C00] sub_00511C00 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBDC8;
extern "C" int mem_00AEBDC4;

extern "C" __declspec(naked) void* __fastcall fn_00511C00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89257e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBDC8], al
        jne L_done
        or dword ptr [mem_00AEBDC8], eax
        mov ecx, offset mem_00AEBDC4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBDC4], 0x950e4c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBDC4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00511C60] sub_00511C60 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBDD0;
extern "C" int mem_00AEBDCC;

extern "C" __declspec(naked) void* __fastcall fn_00511C60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89259e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBDD0], al
        jne L_done
        or dword ptr [mem_00AEBDD0], eax
        mov ecx, offset mem_00AEBDCC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBDCC], 0x950f24
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBDCC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00511CC0] sub_00511CC0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBDD8;
extern "C" int mem_00AEBDD4;

extern "C" __declspec(naked) void* __fastcall fn_00511CC0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8925be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBDD8], al
        jne L_done
        or dword ptr [mem_00AEBDD8], eax
        mov ecx, offset mem_00AEBDD4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBDD4], 0x950ffc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBDD4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00511D20] sub_00511D20 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBDE0;
extern "C" int mem_00AEBDDC;

extern "C" __declspec(naked) void* __fastcall fn_00511D20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8925de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBDE0], al
        jne L_done
        or dword ptr [mem_00AEBDE0], eax
        mov ecx, offset mem_00AEBDDC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBDDC], 0x9510d4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBDDC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00511D80] sub_00511D80 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBDE8;
extern "C" int mem_00AEBDE4;

extern "C" __declspec(naked) void* __fastcall fn_00511D80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8925fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBDE8], al
        jne L_done
        or dword ptr [mem_00AEBDE8], eax
        mov ecx, offset mem_00AEBDE4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBDE4], 0x9511ac
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBDE4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00511DE0] sub_00511DE0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBDF0;
extern "C" int mem_00AEBDEC;

extern "C" __declspec(naked) void* __fastcall fn_00511DE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89261e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEBDF0], al
        jne L_done
        or dword ptr [mem_00AEBDF0], eax
        mov ecx, offset mem_00AEBDEC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEBDEC], 0x951284
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEBDEC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0051A9A0] sub_0051A9A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEC780;
extern "C" int mem_00AEC77C;

extern "C" __declspec(naked) void* __fastcall fn_0051A9A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x892e5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEC780], al
        jne L_done
        or dword ptr [mem_00AEC780], eax
        mov ecx, offset mem_00AEC77C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEC77C], 0x9521f4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEC77C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0051AE20] sub_0051AE20 (30 bytes)
extern "C" void ext_0051A9A0();

extern "C" __declspec(naked) void __fastcall fn_0051AE20(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0051A9A0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0051AA00] sub_0051AA00 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEC788;
extern "C" int mem_00AEC784;

extern "C" __declspec(naked) void* __fastcall fn_0051AA00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x892e7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEC788], al
        jne L_done
        or dword ptr [mem_00AEC788], eax
        mov ecx, offset mem_00AEC784
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEC784], 0x9523a4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEC784
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0051AE40] sub_0051AE40 (30 bytes)
extern "C" void ext_0051AA00();

extern "C" __declspec(naked) void __fastcall fn_0051AE40(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0051AA00
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0051A610] sub_0051A610 (90 bytes)
extern "C" void* __cdecl fn_0051A610(void* begin, void* end, const float* value) {
    char* first = (char*)begin;
    int count = ((char*)end - (char*)begin) / 20;
    while (count > 0) {
        int half = count / 2;
        char* mid = first + half * 20;
        if (*(const float*)mid < *value) {
            first = mid + 20;
            count = count - half - 1;
        } else {
            count = half;
        }
    }
    return first;
}

// [0x005112B0] sub_005112B0 (49 bytes)
extern "C" double __cdecl ext_005FF080(double a, double b, double c, double d, double e);

extern "C" double __fastcall fn_005112B0(void* self, int edx_unused, double e) {
    char* p = (char*)self;
    return ext_005FF080(*(float*)(p + 0x30), *(float*)(p + 0x34),
                        *(float*)(p + 0x28), *(float*)(p + 0x2c), e);
}

// [0x005112F0] sub_005112F0 (49 bytes)
extern "C" double __fastcall fn_005112F0(void* self, int edx_unused, double e) {
    char* p = (char*)self;
    return ext_005FF080(*(float*)(p + 0x30), *(float*)(p + 0x34),
                        *(float*)(p + 0x38), *(float*)(p + 0x3c), e);
}

// [0x0051A6D0] sub_0051A6D0 (93 bytes)
extern "C" void ext_00519E50(int, int, int, int, int, int);

extern "C" __declspec(naked) int __cdecl fn_0051A6D0(int a1, int a2, int a3) {
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
        call ext_00519E50
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 4*eax]
        add eax, eax
        add eax, eax
        add esp, 0x18
        mov ecx, eax
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0051AE60] sub_0051AE60 (43 bytes)
extern "C" void ext_0051A6D0();

extern "C" __declspec(naked) void __fastcall fn_0051AE60(void* self) {
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
        call ext_0051A6D0
        add esp, 0x1c
        ret
    }
}

// [0x00517FC0] sub_00517FC0 (101 bytes)
// Two stack args: [esp+4] = double* out, [esp+8] = object pointer passed to sub_004275C0
// (which fills a local std::string and returns it). Calls c_str() on that string, passes
// the result to atof, stores the double into *out. Local string is destroyed via the
// imported dtor under an SEH frame (fs:[0]). Caller cleans (ret 0).
extern "C" void ext_004275C0();
extern "C" int mem_00924FF0;
extern "C" int mem_009251F0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __cdecl fn_00517FC0() {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        mov ecx, dword ptr [esp + 0x30]
        lea eax, [esp]
        push eax
        call ext_004275C0
        mov ecx, eax
        mov dword ptr [esp + 0x24], 0x0
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        mov ecx, dword ptr [esp + 0x30]
        fstp qword ptr [ecx]
        add esp, 0x4
        lea ecx, [esp]
        mov dword ptr [esp + 0x24], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0051CCC0] sub_0051CCC0 (103 bytes)
extern "C" void ext_00519C80();
extern "C" int mem_00952174;
extern "C" __declspec(naked) void __fastcall fn_0051CCC0(void* self) {
    __asm {
        push -1
        push 0x00892EB8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_00519C80
        fld dword ptr [mem_00952174]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi], 0x009525CC
        xor eax, eax
        mov dword ptr [esi + 0x30], eax
        mov dword ptr [esi + 0x34], eax
        mov dword ptr [esi + 0x38], eax
        fstp dword ptr [esi + 0x3c]
        fldz
        mov dword ptr [esi + 0x5c], eax
        fst dword ptr [esi + 0x4c]
        mov dword ptr [esi + 0x60], eax
        fst dword ptr [esi + 0x48]
        mov eax, esi
        fst dword ptr [esi + 0x44]
        fst dword ptr [esi + 0x40]
        fst dword ptr [esi + 0x58]
        fst dword ptr [esi + 0x54]
        fstp dword ptr [esi + 0x50]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005170D0] sub_005170D0 (104 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005170D0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x14]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_005170E5
        call dword ptr [mem_00925134]
    L_005170E5:
        mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_005170F0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_005170FE
        call dword ptr [mem_00925134]
    L_005170FE:
        cmp esi, esi
        je L_00517108
        call dword ptr [mem_00925134]
    L_00517108:
        cmp edi, ebx
        je L_00517131
        cmp edi, dword ptr [esi + 0x8]
        jb L_00517117
        call dword ptr [mem_00925134]
    L_00517117:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        push ebp
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_0051712C
        call dword ptr [mem_00925134]
    L_0051712C:
        add edi, 0x4
        jmp L_005170F0
    L_00517131:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00517230] sub_00517230 (104 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00517230(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x10]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_00517245
        call dword ptr [mem_00925134]
    L_00517245:
        mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_00517250:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_0051725E
        call dword ptr [mem_00925134]
    L_0051725E:
        cmp esi, esi
        je L_00517268
        call dword ptr [mem_00925134]
    L_00517268:
        cmp edi, ebx
        je L_00517291
        cmp edi, dword ptr [esi + 0x8]
        jb L_00517277
        call dword ptr [mem_00925134]
    L_00517277:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x5c]
        push ebp
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_0051728C
        call dword ptr [mem_00925134]
    L_0051728C:
        add edi, 0x4
        jmp L_00517250
    L_00517291:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x005172A0] sub_005172A0 (104 bytes)
extern "C" __declspec(naked) void __fastcall fn_005172A0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x10]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_005172B5
        call dword ptr [mem_00925134]
    L_005172B5:
        mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_005172C0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_005172CE
        call dword ptr [mem_00925134]
    L_005172CE:
        cmp esi, esi
        je L_005172D8
        call dword ptr [mem_00925134]
    L_005172D8:
        cmp edi, ebx
        je L_00517301
        cmp edi, dword ptr [esi + 0x8]
        jb L_005172E7
        call dword ptr [mem_00925134]
    L_005172E7:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x60]
        push ebp
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_005172FC
        call dword ptr [mem_00925134]
    L_005172FC:
        add edi, 0x4
        jmp L_005172C0
    L_00517301:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00519100] sub_00519100 (108 bytes)
extern "C" void ext_0050F970();
extern "C" int mem_009520D8;
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_00519100(void* self) {
    __asm {
        push -1
        push 0x892453
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_0050F970
        xor eax, eax
        mov dword ptr [esi], 0x950a9c
        mov dword ptr [esi + 0x34], eax
        mov dword ptr [esi + 0x38], eax
        mov dword ptr [esi + 0x3c], eax
        fld qword ptr [mem_009520D8]
        mov ecx, dword ptr [esp + 8]
        fstp qword ptr [esi + 0x50]
        fld qword ptr [mem_00993828]
        mov dword ptr [esi + 0x44], eax
        mov dword ptr [esi + 0x48], eax
        fstp qword ptr [esi + 0x58]
        mov dword ptr [esi + 0x4c], eax
        mov dword ptr [esi + 0x40], 1
        mov dword ptr [esi + 0x64], eax
        mov dword ptr [esi + 0x68], eax
        mov dword ptr [esi + 0x6c], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_0050FE00();

// [0x00510010] sub_00510010 (63 bytes)
extern "C" void __cdecl fn_00510010(unsigned int* first, unsigned int* last, int comp) {
    int len = last - first;
    for (int hole = len / 2; hole > 0; ) {
        --hole;
        ((void (__cdecl*)(unsigned int*, int, int, unsigned int, int))ext_0050FE00)(first, hole, len, first[hole], comp);
    }
}

// [0x00510880] sub_00510880 (74 bytes)
extern "C" void ext_0050FD30();

extern "C" __declspec(naked) void __cdecl fn_00510880(unsigned int* first, unsigned int* last, int comp) {
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
        call ext_0050FD30
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

// [0x005108D0] sub_005108D0 (74 bytes)
extern "C" void ext_0050FE00();

extern "C" __declspec(naked) void __cdecl fn_005108D0(unsigned int* first, unsigned int* last, int comp) {
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
        call ext_0050FE00
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

// [0x0051C730] sub_0051C730 (110 bytes)
extern "C" void ext_00519CB0();
extern "C" int mem_00952174;
extern "C" __declspec(naked) void __fastcall fn_0051C730(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x00892EB8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push eax
        mov esi, ecx
        call ext_00519CB0
        fld dword ptr [mem_00952174]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi], 0x009525CC
        xor eax, eax
        mov dword ptr [esi + 0x30], eax
        mov dword ptr [esi + 0x34], eax
        mov dword ptr [esi + 0x38], eax
        fstp dword ptr [esi + 0x3c]
        fldz
        mov dword ptr [esi + 0x5c], eax
        fst dword ptr [esi + 0x4c]
        mov dword ptr [esi + 0x60], eax
        fst dword ptr [esi + 0x48]
        mov eax, esi
        fst dword ptr [esi + 0x44]
        fst dword ptr [esi + 0x40]
        fst dword ptr [esi + 0x58]
        fst dword ptr [esi + 0x54]
        fstp dword ptr [esi + 0x50]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00517AD0] sub_00517AD0 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_00517AD0(void* self) {
    __asm {
        push -1
        push 0892a63h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp+0ch], esi
        mov byte ptr [esi+4], 1
        mov dword ptr [esi], 093c08ch
        xor ebx, ebx
        lea edi, [esi+0ch]
        mov ecx, edi
        mov dword ptr [esp+18h], ebx
        mov dword ptr [esi+8], 0951f3ch
        call ext_00661980
        mov ecx, dword ptr [esp+10h]
        mov dword ptr [edi], 0951fb4h
        mov dword ptr [esi], 0952018h
        mov dword ptr [esi+8], 095200ch
        mov dword ptr [esi+14h], ebx
        mov dword ptr [esi+18h], ebx
        mov dword ptr [esi+1ch], ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005149F0] sub_005149F0 (119 bytes)
extern "C" void ext_00504B80();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_005149F0(void* self) {
    __asm {
        push -1
        push 0x8926d3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x94f5dc
        lea ecx, [esi + 0x14]
        mov dword ptr [esp + 0x10], 0x1
        call ext_00504B80
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        je L_005149F0_skip
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_005149F0_skip:
        mov ecx, esi
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        mov dword ptr [esi + 0x10], 0x0
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005180D0] sub_005180D0 (82 bytes)
extern "C" void ext_0050F990();
extern "C" void ext_006246B0();

extern "C" __declspec(naked) void __fastcall fn_005180D0(void* self) {
    __asm {
        push -1
        push 0x00892D18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x009520C4
        lea ecx, [esi + 0x38]
        mov dword ptr [esp + 0x10], 0x0
        call ext_006246B0
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0050F990
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005179E0] sub_005179E0 (114 bytes)
extern "C" void ext_006246B0();
extern "C" void ext_0065F440();
extern "C" void ext_0065C660();

extern "C" __declspec(naked) void __fastcall fn_005179E0(void* self) {
    __asm {
        push -1
        push 0x892a3f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0xc]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x952018
        mov dword ptr [esi + 0x8], 0x95200c
        mov dword ptr [edi], 0x951fb4
        lea ecx, [esi + 0x10]
        mov dword ptr [esp + 0x18], 0x1
        call ext_006246B0
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0x0
        call ext_0065F440
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C660
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x0051E4B0] sub_0051E4B0 (122 bytes)
extern "C" void ext_0051E040();
extern "C" int mem_00925134;
extern "C" __declspec(naked) int __fastcall fn_0051E4B0(void* self) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [ecx + 0x148]
        cmp dword ptr [ecx + 0x144], ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x140]
        jbe L_chk1
        call ebp
L_chk1:
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_chk2
        call ebp
L_chk2:
        push 0x49aa30
        push ebx
        push edi
        mov dword ptr [esp + 0x20], edi
        call ext_0051E040
        mov edi, dword ptr [esi + 0x8]
        add esp, 0xc
        cmp dword ptr [esi + 0x4], edi
        mov ebx, eax
        jbe L_chk3
        call ebp
L_chk3:
        test esi, esi
        je L_chk4
        cmp esi, esi
        je L_chk5
L_chk4:
        call ebp
L_chk5:
        cmp ebx, edi
        pop edi
        je L_zero
        test esi, esi
        jne L_chk6
        call ebp
L_chk6:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_ret
        call ebp
L_ret:
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 8
        ret
L_zero:
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00518550] sub_00518550 (125 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) bool __fastcall fn_00518550(void* self, int edx_unused, unsigned a, unsigned b) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je L_call1_518550
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp ebx, eax
        jb L_ok1_518550
L_call1_518550:
        call ebp
L_ok1_518550:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 4*ebx]
        mov esi, dword ptr [edi]
        fld qword ptr [ecx + 0x20]
        mov ecx, dword ptr [esi + 0x4]
        fstp qword ptr [esp + 0x10]
        test ecx, ecx
        mov edi, dword ptr [esp + 0x20]
        je L_call2_518550
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_ok2_518550
L_call2_518550:
        call ebp
L_ok2_518550:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + 4*edi]
        fld qword ptr [eax + 0x20]
        pop edi
        fcomp qword ptr [esp + 0xc]
        pop esi
        pop ebp
        pop ebx
        fnstsw ax
        test ah, 0x41
        jne L_false_518550
        mov eax, 0x1
        add esp, 0x8
        ret 0x8
L_false_518550:
        xor eax, eax
        add esp, 0x8
        ret 0x8
    }
}

// [0x005187E0] sub_005187E0 (96 bytes)
extern "C" void ext_00518550();

extern "C" __declspec(naked) void __cdecl fn_005187E0(void* first, int hole, int top, unsigned val, void* pred) {
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
        jge L_early_5187E0
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
L_head_5187E0:
        mov eax, dword ptr [ebx + 4*esi]
        push ebp
        push eax
        lea ecx, [esp + 0x2c]
        call ext_00518550
        test al, al
        je L_exit_5187E0
        mov ecx, dword ptr [ebx + 4*esi]
        lea eax, [esi - 1]
        cdq
        sub eax, edx
        mov dword ptr [ebx + 4*edi], ecx
        mov edi, esi
        sar eax, 1
        cmp dword ptr [esp + 0x1c], edi
        mov esi, eax
        jl L_head_5187E0
L_exit_5187E0:
        mov dword ptr [ebx + 4*edi], ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        ret
L_early_5187E0:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax + 4*edi], edx
        pop edi
        pop esi
        ret
    }
}

// [0x00518700] sub_00518700 (100 bytes)
extern "C" __declspec(naked) void __cdecl fn_00518700(unsigned* x, unsigned* y, unsigned* z, void* pred) {
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
        call ext_00518550
        test al, al
        je L_skip1_700
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], edx
        mov dword ptr [edi], eax
L_skip1_700:
        mov eax, dword ptr [esi]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [ebx]
        push eax
        push ecx
        lea ecx, [esp + 0x24]
        call ext_00518550
        test al, al
        je L_skip2_700
        mov edx, dword ptr [esi]
        mov eax, dword ptr [ebx]
        mov dword ptr [ebx], edx
        mov dword ptr [esi], eax
L_skip2_700:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        lea ecx, [esp + 0x24]
        call ext_00518550
        test al, al
        pop ebx
        je L_skip3_700
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], edx
        mov dword ptr [edi], eax
L_skip3_700:
        pop edi
        pop esi
        ret
    }
}

// [0x00518A00] sub_00518A00 (115 bytes)
extern "C" void ext_005187E0();

extern "C" __declspec(naked) void __cdecl fn_00518A00(void* first, int hole, int len, unsigned val, void* pred) {
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
        jge L_after_loop_518A00
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
L_loop_518A00:
        mov eax, dword ptr [ebx + 4*esi - 0x4]
        mov ecx, dword ptr [ebx + 4*esi]
        push eax
        push ecx
        lea ecx, [esp + 0x2c]
        call ext_00518550
        test al, al
        je L_skip_518A00
        sub esi, 0x1
L_skip_518A00:
        mov edx, dword ptr [ebx + 4*esi]
        mov dword ptr [ebx + 4*edi], edx
        mov edi, esi
        lea esi, [esi + esi + 0x2]
        cmp esi, ebp
        jl L_loop_518A00
L_after_loop_518A00:
        jne L_call_518A00
        mov eax, dword ptr [ebx + 4*ebp - 0x4]
        mov dword ptr [ebx + 4*edi], eax
        lea edi, [ebp - 0x1]
L_call_518A00:
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x18]
        push ecx
        push edx
        push eax
        push edi
        push ebx
        call ext_005187E0
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00518FE0] sub_00518FE0 (63 bytes)
extern "C" void ext_00518A00();

extern "C" void __cdecl fn_00518FE0(unsigned int* first, unsigned int* last, int comp) {
    int len = last - first;
    for (int hole = len / 2; hole > 0; ) {
        --hole;
        ((void (__cdecl*)(unsigned int*, int, int, unsigned int, int))ext_00518A00)(first, hole, len, first[hole], comp);
    }
}

// [0x00519060] sub_00519060 (74 bytes)
extern "C" void ext_00518A00();

extern "C" __declspec(naked) void __cdecl fn_00519060(unsigned int* first, unsigned int* last, int comp) {
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
        call ext_00518A00
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

// [0x005185D0] sub_005185D0 (125 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) bool __fastcall fn_005185D0(void* self, int edx_unused, unsigned a, unsigned b) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je L_call1_5185D0
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp ebx, eax
        jb L_ok1_5185D0
L_call1_5185D0:
        call ebp
L_ok1_5185D0:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 4*ebx]
        mov esi, dword ptr [edi]
        fld qword ptr [ecx + 0x20]
        mov ecx, dword ptr [esi + 0x4]
        fstp qword ptr [esp + 0x10]
        test ecx, ecx
        mov edi, dword ptr [esp + 0x20]
        je L_call2_5185D0
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_ok2_5185D0
L_call2_5185D0:
        call ebp
L_ok2_5185D0:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + 4*edi]
        fld qword ptr [eax + 0x20]
        pop edi
        fcomp qword ptr [esp + 0xc]
        pop esi
        pop ebp
        pop ebx
        fnstsw ax
        test ah, 0x5
        jp L_false_5185D0
        mov eax, 0x1
        add esp, 0x8
        ret 0x8
L_false_5185D0:
        xor eax, eax
        add esp, 0x8
        ret 0x8
    }
}

// [0x00518840] sub_00518840 (96 bytes)
extern "C" void ext_005185D0();

extern "C" __declspec(naked) void __cdecl fn_00518840(void* first, int hole, int top, unsigned val, void* pred) {
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
        jge L_early_518840
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
L_head_518840:
        mov eax, dword ptr [ebx + 4*esi]
        push ebp
        push eax
        lea ecx, [esp + 0x2c]
        call ext_005185D0
        test al, al
        je L_exit_518840
        mov ecx, dword ptr [ebx + 4*esi]
        lea eax, [esi - 1]
        cdq
        sub eax, edx
        mov dword ptr [ebx + 4*edi], ecx
        mov edi, esi
        sar eax, 1
        cmp dword ptr [esp + 0x1c], edi
        mov esi, eax
        jl L_head_518840
L_exit_518840:
        mov dword ptr [ebx + 4*edi], ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        ret
L_early_518840:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax + 4*edi], edx
        pop edi
        pop esi
        ret
    }
}

// [0x00518770] sub_00518770 (100 bytes)
extern "C" __declspec(naked) void __cdecl fn_00518770(unsigned* x, unsigned* y) {
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
        call ext_005185D0
        test al, al
        je L_skip1_770
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], edx
        mov dword ptr [edi], eax
L_skip1_770:
        mov eax, dword ptr [esi]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [ebx]
        push eax
        push ecx
        lea ecx, [esp + 0x24]
        call ext_005185D0
        test al, al
        je L_skip2_770
        mov edx, dword ptr [esi]
        mov eax, dword ptr [ebx]
        mov dword ptr [ebx], edx
        mov dword ptr [esi], eax
L_skip2_770:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        lea ecx, [esp + 0x24]
        call ext_005185D0
        test al, al
        pop ebx
        je L_skip3_770
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], edx
        mov dword ptr [edi], eax
L_skip3_770:
        pop edi
        pop esi
        ret
    }
}

// [0x00518A80] sub_00518A80 (115 bytes)
extern "C" void ext_005185D0();
extern "C" void ext_00518840();

extern "C" __declspec(naked) void __cdecl fn_00518A80(void* first, int hole, int len, unsigned val, void* pred) {
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
        jge L_after_loop_518A80
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
L_loop_518A80:
        mov eax, dword ptr [ebx + 4*esi - 0x4]
        mov ecx, dword ptr [ebx + 4*esi]
        push eax
        push ecx
        lea ecx, [esp + 0x2c]
        call ext_005185D0
        test al, al
        je L_skip_518A80
        sub esi, 0x1
L_skip_518A80:
        mov edx, dword ptr [ebx + 4*esi]
        mov dword ptr [ebx + 4*edi], edx
        mov edi, esi
        lea esi, [esi + esi + 0x2]
        cmp esi, ebp
        jl L_loop_518A80
L_after_loop_518A80:
        jne L_call_518A80
        mov eax, dword ptr [ebx + 4*ebp - 0x4]
        mov dword ptr [ebx + 4*edi], eax
        lea edi, [ebp - 0x1]
L_call_518A80:
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x18]
        push ecx
        push edx
        push eax
        push edi
        push ebx
        call ext_00518840
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00519020] sub_00519020 (63 bytes)
extern "C" void ext_00518A80();

extern "C" void __cdecl fn_00519020(unsigned int* first, unsigned int* last, int comp) {
    int len = last - first;
    for (int hole = len / 2; hole > 0; ) {
        --hole;
        ((void (__cdecl*)(unsigned int*, int, int, unsigned int, int))ext_00518A80)(first, hole, len, first[hole], comp);
    }
}

// [0x005190B0] sub_005190B0 (74 bytes)
extern "C" void ext_00518A80();

extern "C" __declspec(naked) void __cdecl fn_005190B0(unsigned int* first, unsigned int* last, int comp) {
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
        call ext_00518A80
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

// [0x0051E7D0] sub_0051E7D0 (41 bytes)
extern "C" void ext_00500430();

extern "C" __declspec(naked) void __fastcall fn_0051E7D0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_00500430
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00516EF0] sub_00516EF0 (146 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_00516EF0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 0
        mov dword ptr [esp + 0xc], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x20]
        push 0
        push 0xa42f88
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esi], 0x951f80
        mov dword ptr [esi + 0x10], eax
        call ext_006A6E9E
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x3c]
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], 0
        add esp, 0x14
        cmp dword ptr [esi + 0x14], 0
        mov dword ptr [esi + 0x1c], ecx
        mov dword ptr [esi + 0x20], 0
        mov dword ptr [esi + 0x24], edx
        mov eax, esi
        jne L_skip
        mov dword ptr [esi + 0x8], edi
    L_skip:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x005103B0] sub_005103B0 (136 bytes)
extern "C" void __cdecl ext_00609850(unsigned int* a, unsigned int* b, unsigned int* c, int d, int e);

extern "C" __declspec(naked) void __cdecl fn_005103B0(unsigned int* first, unsigned int* last) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [esp + 8]
        cmp ecx, eax
        je L_ret
        push esi
        lea esi, [ecx + 4]
        cmp esi, eax
        je L_pop_esi
        push ebx
        push edi
        lea ebx, [esi + 4]
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_loop:
        mov eax, dword ptr [ecx]
        fld qword ptr [eax + 20h]
        mov edi, dword ptr [esi]
        fcomp qword ptr [edi + 20h]
        fnstsw ax
        test ah, 5
        jp L_back
        cmp ecx, esi
        je L_next
        cmp esi, ebx
        je L_next
        push 0
        push 0
        push ebx
        push esi
        push ecx
        jmp L_call
L_back:
        mov edx, esi
        mov ecx, esi
L_back_loop:
        mov eax, dword ptr [ecx - 4]
        fld qword ptr [eax + 20h]
        sub ecx, 4
        fcomp qword ptr [edi + 20h]
        fnstsw ax
        test ah, 5
        jp L_back_done
        mov edx, ecx
        jmp L_back_loop
L_back_done:
        cmp edx, esi
        je L_reload
        cmp esi, ebx
        je L_reload
        push 0
        push 0
        push ebx
        push esi
        push edx
L_call:
        call ext_00609850
        add esp, 14h
L_reload:
        mov ecx, dword ptr [esp + 10h]
L_next:
        add esi, 4
        add ebx, 4
        cmp esi, dword ptr [esp + 14h]
        jne L_loop
        pop edi
        pop ebx
L_pop_esi:
        pop esi
L_ret:
        ret
    }
}

// [0x005107A0] sub_005107A0 (136 bytes)
extern "C" __declspec(naked) void __cdecl fn_005107A0(unsigned int* first, unsigned int* last) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [esp + 8]
        cmp ecx, eax
        je L_ret
        push esi
        lea esi, [ecx + 4]
        cmp esi, eax
        je L_pop_esi
        push ebx
        push edi
        lea ebx, [esi + 4]
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_loop:
        mov eax, dword ptr [ecx]
        fld qword ptr [eax + 20h]
        mov edi, dword ptr [esi]
        fcomp qword ptr [edi + 20h]
        fnstsw ax
        test ah, 41h
        jne L_back
        cmp ecx, esi
        je L_next
        cmp esi, ebx
        je L_next
        push 0
        push 0
        push ebx
        push esi
        push ecx
        jmp L_call
L_back:
        mov edx, esi
        mov ecx, esi
L_back_loop:
        mov eax, dword ptr [ecx - 4]
        fld qword ptr [eax + 20h]
        sub ecx, 4
        fcomp qword ptr [edi + 20h]
        fnstsw ax
        test ah, 41h
        jne L_back_done
        mov edx, ecx
        jmp L_back_loop
L_back_done:
        cmp edx, esi
        je L_reload
        cmp esi, ebx
        je L_reload
        push 0
        push 0
        push ebx
        push esi
        push edx
L_call:
        call ext_00609850
        add esp, 14h
L_reload:
        mov ecx, dword ptr [esp + 10h]
L_next:
        add esi, 4
        add ebx, 4
        cmp esi, dword ptr [esp + 14h]
        jne L_loop
        pop edi
        pop ebx
L_pop_esi:
        pop esi
L_ret:
        ret
    }
}

// [0x00515A80] sub_00515A80 (156 bytes)
extern "C" void ext_00404F00();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_00515A80(void* self, int edx_unused, void* sret, int a2) {
    __asm {
        push -0x1
        push 0x8a86bc
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x3c
        xor eax, eax
        mov dword ptr [esp + 0x44], eax
        mov dword ptr [esp], eax
        mov eax, dword ptr [esp + 0x50]
        push esi
        push eax
        lea ecx, [esp + 0x28]
        push ecx
        call ext_00404F00
        add esp, 0x8
        mov esi, eax
        push 0x951b40
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x4c], 0x1
        call dword ptr [mem_00924FE4]
        push esi
        mov esi, dword ptr [esp + 0x54]
        push eax
        push esi
        mov byte ptr [esp + 0x54], 0x2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x1
        mov byte ptr [esp + 0x48], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x48], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x40]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x48
        ret 0x8
    }
}

// [0x00518650] sub_00518650 (161 bytes)
extern "C" void ext_005184D0();

extern "C" __declspec(naked) int __fastcall fn_00518650(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x40
        mov eax, 1
        xor edx, edx
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esp + 0x34], eax
        mov dword ptr [esp + 0x38], eax
        mov dword ptr [esp + 0x3c], eax
        mov eax, dword ptr [esp + 0x44]
        push esi
        mov esi, ecx
        or ecx, -1
        mov dword ptr [esp + 0x4], ecx
        mov dword ptr [esp + 0x8], ecx
        mov dword ptr [esp + 0xc], edx
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x1c], ecx
        mov dword ptr [esp + 0x20], edx
        mov dword ptr [esp + 0x28], edx
        mov dword ptr [esp + 0x2c], ecx
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x34], edx
        cdq
        idiv ecx
        mov ecx, dword ptr [esp + 0x4c]
        push edi
        mov edi, dword ptr [esp + ecx*8 + 0x8]
        mov ecx, dword ptr [esp + ecx*8 + 0xc]
        add edi, edx
        add ecx, eax
        lea edx, [esp + 0x50]
        mov dword ptr [esp + 0x4c], ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x54], edi
        call ext_005184D0
        lea eax, [esp + 0x4c]
        push eax
        mov ecx, esi
        call ext_005184D0
        mov eax, dword ptr [esi + 0x4]
        imul eax, dword ptr [esp + 0x4c]
        add eax, dword ptr [esi]
        pop edi
        add eax, dword ptr [esp + 0x4c]
        pop esi
        add esp, 0x40
        ret 8
    }
}

// [0x005188A0] sub_005188A0 (167 bytes)
extern "C" void __cdecl ext_00518700(int, int, int, int);

extern "C" void __cdecl fn_005188A0(int a1, int a2, int a3, int a4) {
    int n = (a3 - a1) >> 2;
    if (n > 40) {
        int c = (n + 1) / 8;
        int c8 = 8 * c;
        int c4 = 4 * c;
        ext_00518700(a1, a1 + c4, a1 + c8, a4);
        ext_00518700(a2 - c4, a2, a2 + c4, a4);
        ext_00518700(a3 - c8, a3 - c4, a3, a4);
        ext_00518700(a1 + c4, a2, a3 - c4, a4);
    } else {
        ext_00518700(a1, a2, a3, a4);
    }
}

// [0x00518950] sub_00518950 (167 bytes)
extern "C" void __cdecl ext_00518770(int, int, int, int);

extern "C" void __cdecl fn_00518950(int a1, int a2, int a3, int a4) {
    int n = (a3 - a1) >> 2;
    if (n > 40) {
        int c = (n + 1) / 8;
        int c8 = 8 * c;
        int c4 = 4 * c;
        ext_00518770(a1, a1 + c4, a1 + c8, a4);
        ext_00518770(a2 - c4, a2, a2 + c4, a4);
        ext_00518770(a3 - c8, a3 - c4, a3, a4);
        ext_00518770(a1 + c4, a2, a3 - c4, a4);
    } else {
        ext_00518770(a1, a2, a3, a4);
    }
}

// [0x005111E0] sub_005111E0 (139 bytes)
extern "C" void __fastcall ext_00695240(void* self);

struct MTRandContext_5111E0 {
    char pad[0x9c0];
    unsigned int* next;
    int left;
};

extern "C" unsigned int __fastcall fn_005111E0(MTRandContext_5111E0* self, int edx_unused, const unsigned int* limit) {
    unsigned int mask = *limit;
    mask |= mask >> 1;
    mask |= mask >> 2;
    mask |= mask >> 4;
    mask |= mask >> 8;
    mask |= mask >> 16;

    unsigned int y;
    do {
        if (self->left == 0) {
            ext_00695240(self);
        }
        self->left--;
        y = *self->next++;
        y ^= (y >> 11);
        y ^= (y & 0xff3a58ad) << 7;
        y ^= (y & 0xffffdf8c) << 15;
        y ^= (y >> 18);
        y &= mask;
    } while (y > *limit);

    return y;
}

// [0x005184F0] sub_005184F0 (95 bytes)
extern "C" void ext_006955D0();
extern "C" void ext_005111E0();
extern "C" __declspec(naked) void __fastcall fn_005184F0(void* self) {
    __asm {
        push ecx
        push ebp
        push esi
        call ext_006955D0
        xor esi, esi
        cmp dword ptr [esp + 0x14], esi
        mov ebp, eax
        jle L_end
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esp + 0x18]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
L_outer:
        test ebx, ebx
        jbe L_zero
        lea ecx, [esp + 0x10]
        lea eax, [ebx - 1]
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x14], eax
        call ext_005111E0
        jmp L_store
L_zero:
        xor eax, eax
L_store:
        xor ecx, ecx
        test esi, esi
        mov dword ptr [edi + 4 * esi], eax
        jle L_next
L_inner:
        cmp dword ptr [edi + 4 * ecx], eax
        je L_outer
        add ecx, 1
        cmp ecx, esi
        jl L_inner
L_next:
        add esi, 1
        cmp esi, dword ptr [esp + 0x1c]
        jl L_outer
        pop edi
        pop ebx
L_end:
        pop esi
        pop ebp
        pop ecx
        ret
    }
}
