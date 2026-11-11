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
