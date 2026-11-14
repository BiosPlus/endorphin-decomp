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

// [0x00518CC0] sub_00518CC0 (174 bytes)
extern "C" void __cdecl ext_00609850(unsigned int* a, unsigned int* b, unsigned int* c, int d, int e);

extern "C" __declspec(naked) void __cdecl fn_00518CC0(void* first, void* last, void* pred) {
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
        call ext_00518550
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
        call ext_00518550
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
        call ext_00518550
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

// [0x00518F30] sub_00518F30 (174 bytes)
extern "C" void ext_005185D0();
extern "C" void __cdecl ext_00609850(unsigned int* a, unsigned int* b, unsigned int* c, int d, int e);

extern "C" __declspec(naked) void __cdecl fn_00518F30(void* first, void* last, void* pred) {
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
        call ext_005185D0
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
        call ext_005185D0
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
        call ext_005185D0
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

// [0x00511410] sub_00511410 (191 bytes)
extern "C" void ext_005112B0();
extern "C" void ext_00664840();
extern "C" int mem_00924ED0;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_00511410(void* self, int edx_unused, void* ret_slot) {
    __asm {
        push -1
        push 0x8924b3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebx
        xor ebx, ebx
        push esi
        mov dword ptr [esp + 0xc], ebx
        fld dword ptr [ecx + 0x30]
        sub esp, 0x8
        fstp qword ptr [esp]
        mov dword ptr [esp + 0x40], ebx
        call ext_005112B0
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x34]
        sub esp, 0x8
        fstp qword ptr [esp]
        call ext_005112B0
        mov esi, dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8]
        push ecx
        fstp dword ptr [esp]
        push esi
        call ext_00664840
        add esp, 0x8
        push 0x9357b8
        mov ecx, esi
        mov dword ptr [esp + 0x3c], ebx
        mov dword ptr [esp + 0x10], 1
        call dword ptr [mem_00924ED0]
        fld dword ptr [esp + 0x10]
        push ecx
        lea eax, [esp + 0x18]
        fstp dword ptr [esp]
        push eax
        call ext_00664840
        add esp, 0x8
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x3c], 1
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x38], bl
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x30]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret 4
    }
}

extern "C" void __fastcall ext_0048B4C0(void* self);

// [0x0051EC40] sub_0051EC40 (90 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051EC40(void* self) {
    __asm {
        push -1
        _emit 0x68
        _emit 0x98
        _emit 0x31
        _emit 0x89
        _emit 0x00
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push eax
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov eax, dword ptr [esi + 0xbc]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr [esp + 0x10], ecx
        je skip_clear
        mov dword ptr [eax + 0xc4], ecx
    skip_clear:
        lea ecx, [esi + 0x5c]
        call ext_0048B4C0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0048B4C0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        add esp, 0x10
        ret
    }
}

// [0x0051F670] sub_0051F670 (38 bytes)
extern "C" void ext_0051EC40();

extern "C" __declspec(naked) void __fastcall fn_0051F670(void* self, int edx_unused, void* begin, void* end) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done_51F670
        __asm _emit 0x8B __asm _emit 0xFF // mov edi, edi
    loop_51F670:
        mov ecx, esi
        call ext_0051EC40
        add esi, 0xc0
        cmp esi, edi
        jne loop_51F670
    done_51F670:
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x0051F6A0] sub_0051F6A0 (73 bytes)
extern "C" void ext_0051EC40();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0051F6A0(void* self) {
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
        call ext_0051EC40
        add esi, 0xc0
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

extern "C" int mem_00925134;
extern "C" void ext_00665870();
extern "C" void ext_00666120();

// [0x00517530] sub_00517530 (194 bytes)
extern "C" __declspec(naked) void __fastcall fn_00517530(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x0c
        push ebx
        mov ebx, dword ptr [ecx + 0x18]
        cmp dword ptr [ecx + 0x14], ebx
        push ebp
        push esi
        push edi
        lea edi, [ecx + 0x10]
        mov dword ptr [esp + 0x10], ecx
        jbe L_517530_a
        call dword ptr [mem_00925134]
    L_517530_a:
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_517530_b
        call dword ptr [mem_00925134]
    L_517530_b:
        cmp esi, ebx
        mov ebp, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x18], esi
        je L_517530_c
    L_517530_d:
        cmp dword ptr [esi], ebp
        je L_517530_c
        add esi, 0x4
        cmp esi, ebx
        jne L_517530_d
    L_517530_c:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_517530_e
        call dword ptr [mem_00925134]
    L_517530_e:
        test edi, edi
        je L_517530_f
        cmp edi, edi
        je L_517530_g
    L_517530_f:
        call dword ptr [mem_00925134]
    L_517530_g:
        cmp esi, ebx
        je L_517530_h
        test edi, edi
        jne L_517530_i
        call dword ptr [mem_00925134]
    L_517530_i:
        cmp esi, dword ptr [edi + 0x8]
        jb L_517530_j
        call dword ptr [mem_00925134]
    L_517530_j:
        test ebp, ebp
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi], eax
        mov dword ptr [eax + 0x30], ecx
        je L_517530_k
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx]
        push 0x1
        mov ecx, ebp
        call eax
    L_517530_k:
        call ext_00665870
        mov ecx, eax
        call ext_00666120
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x0c
        ret 0x8
    L_517530_h:
        mov ecx, dword ptr [esp + 0x24]
        test ecx, ecx
        je L_517530_l
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
    L_517530_l:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x0c
        ret 0x8
    }
}

// [0x005127D0] sub_005127D0 (199 bytes)
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;
extern "C" int mem_0093F8EC;
extern "C" int mem_009324A4;
extern "C" int mem_009518E0;
extern "C" int mem_00940694;
extern "C" int mem_00932478;
extern "C" int mem_009518DC;
extern "C" int mem_009518D8;
extern "C" int mem_009518D4;
extern "C" int mem_0093C188;

extern "C" __declspec(naked) void* __fastcall fn_005127D0(void* self) {
    __asm {
        push -1
        push 0x891c13
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x928efc
        lea edi, [esi + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0
        call ext_00661980
        lea ecx, [esi + 0x8]
        mov byte ptr [esp + 0x14], 1
        mov dword ptr [esi], 0x94f534
        mov dword ptr [edi], 0x94f4dc
        call dword ptr [mem_00924FE8]
        fld dword ptr [mem_0093F8EC]
        fstp dword ptr [esi + 0x28]
        mov ecx, dword ptr [esp + 0xc]
        fld dword ptr [mem_009324A4]
        mov dword ptr [esi + 0x24], 0
        fstp dword ptr [esi + 0x2c]
        mov dword ptr [esi + 0x50], 3
        fldz
        pop edi
        fstp dword ptr [esi + 0x30]
        mov eax, esi
        fld dword ptr [mem_009518E0]
        fstp dword ptr [esi + 0x34]
        fld dword ptr [mem_00940694]
        fstp dword ptr [esi + 0x38]
        fld dword ptr [mem_00932478]
        fstp dword ptr [esi + 0x3c]
        fld dword ptr [mem_009518DC]
        fstp dword ptr [esi + 0x40]
        fld dword ptr [mem_009518D8]
        fstp dword ptr [esi + 0x44]
        fld dword ptr [mem_009518D4]
        fstp dword ptr [esi + 0x48]
        fld dword ptr [mem_0093C188]
        fstp dword ptr [esi + 0x4c]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00514B20] sub_00514B20 (86 bytes)
extern "C" void ext_005127D0();
extern "C" void ext_00661980();
extern "C" int mem_0094F5DC;
extern "C" __declspec(naked) void __fastcall fn_00514B20(void* self) {
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
        call ext_00661980
        xor eax, eax
        mov dword ptr [esi], offset mem_0094F5DC
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        lea ecx, [esi + 0x14]
        mov byte ptr [esp + 0x10], 0x1
        call ext_005127D0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00511330] sub_00511330 (219 bytes)
extern "C" void ext_005112F0();
extern "C" int mem_0093BD38;
extern "C" __declspec(naked) void* __fastcall fn_00511330(void* self, int edx_unused, void* out) {
    __asm {
        push -1
        push 0x892483
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push ebx
        xor ebx, ebx
        mov dword ptr [esp + 0x8], ebx
        fild dword ptr [ecx + 0x24]
        mov eax, dword ptr [ecx + 0x24]
        test eax, eax
        push esi
        mov dword ptr [esp + 0x3c], ebx
        jge short L_511364
        fadd qword ptr [mem_0093BD38]
    L_511364:
        fstp qword ptr [esp + 0x10]
        sub esp, 0x8
        fld dword ptr [ecx + 0x30]
        fstp qword ptr [esp]
        call ext_005112F0
        fmul qword ptr [esp + 0x10]
        sub esp, 0x8
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ecx + 0x34]
        fstp qword ptr [esp]
        call ext_005112F0
        fmul qword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0x44]
        push ecx
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp]
        push esi
        call ext_00664840
        add esp, 0x8
        push 0x9357b8
        mov ecx, esi
        mov dword ptr [esp + 0x40], ebx
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924ED0]
        fld dword ptr [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x1c]
        fstp dword ptr [esp]
        push ecx
        call ext_00664840
        add esp, 0x8
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x40], 0x1
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x3c], bl
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x34]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x38
        ret 0x4
    }
}

extern "C" int mem_00925134;
extern "C" __declspec(naked) void __cdecl fn_0051A780(void* a, void* b, float c, float d) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        push esi
        mov esi, dword ptr [esp+0x1c]
        cmp dword ptr [esi], 0
        push edi
        jne l1
        call ebx
    l1:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi+4]
        cmp ecx, dword ptr [eax+8]
        jb l2
        call ebx
    l2:
        fld dword ptr [esp+0x24]
        mov edx, dword ptr [esi+4]
        fadd dword ptr [esp+0x28]
        mov edi, dword ptr [esp+0x1c]
        fstp dword ptr [esp+0x24]
        fld dword ptr [edx]
        fld dword ptr [esp+0x24]
        fcompp
        fnstsw ax
        test ah, 5
        jp l4
        mov ebp, dword ptr [edi+4]
        cmp ebp, dword ptr [edi+8]
        jbe l3
        call ebx
    l3:
        mov dword ptr [esi], edi
        mov dword ptr [esi+4], ebp
    l4:
        mov ebp, dword ptr [esi]
        mov esi, dword ptr [esi+4]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0
        __asm _emit 0
        __asm _emit 0
        __asm _emit 0
    loop_:
        mov ebx, dword ptr [edi+8]
        cmp dword ptr [edi+4], ebx
        jbe l5
        call dword ptr [mem_00925134]
    l5:
        test ebp, ebp
        je l6
        cmp ebp, edi
        je l7
    l6:
        call dword ptr [mem_00925134]
    l7:
        cmp esi, ebx
        je done
        test ebp, ebp
        mov dword ptr [esp+0x14], esi
        jne l8
        call dword ptr [mem_00925134]
    l8:
        cmp esi, dword ptr [ebp+8]
        jb l9
        call dword ptr [mem_00925134]
    l9:
        mov edi, dword ptr [edi+8]
        mov eax, dword ptr [esp+0x1c]
        cmp dword ptr [eax+4], edi
        lea ebx, [esi+8]
        jbe l10
        call dword ptr [mem_00925134]
    l10:
        mov eax, ebp
        cmp eax, dword ptr [esp+0x1c]
        je l11
        call dword ptr [mem_00925134]
    l11:
        cmp ebx, edi
        je l13
        mov eax, ebp
        cmp ebx, dword ptr [eax+8]
        jb l12
        call dword ptr [mem_00925134]
    l12:
        fld dword ptr [ebx]
        fld dword ptr [esp+0x24]
        fcompp
        fnstsw ax
        test ah, 5
        jnp l13
        cmp esi, dword ptr [ebp+8]
        jb l14
        call dword ptr [mem_00925134]
    l14:
        mov edi, dword ptr [esp+0x1c]
        mov esi, ebx
        jmp loop_
    l13:
        mov eax, dword ptr [esp+0x20]
        mov dword ptr [eax], ebp
        mov dword ptr [eax+4], esi
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0051A890] sub_0051A890 (259 bytes)
extern "C" __declspec(naked) void __cdecl fn_0051A890(void* a, void* b, float c, float d) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x1c]
        cmp dword ptr [esi], 0
        push edi
        jne l1
        call ebx
    l1:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jb l2
        call ebx
    l2:
        fld dword ptr [esp + 0x24]
        mov edx, dword ptr [esi + 4]
        fadd dword ptr [esp + 0x28]
        mov edi, dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [edx]
        fld dword ptr [esp + 0x24]
        fcompp
        fnstsw ax
        test ah, 5
        jp l4
        mov ebp, dword ptr [edi + 4]
        cmp ebp, dword ptr [edi + 8]
        jbe l3
        call ebx
    l3:
        mov dword ptr [esi], edi
        mov dword ptr [esi + 4], ebp
    l4:
        mov ebp, dword ptr [esi]
        mov esi, dword ptr [esi + 4]
        _emit 0x8d
        _emit 0x9b
        _emit 0
        _emit 0
        _emit 0
        _emit 0
    top:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe l5
        call dword ptr [mem_00925134]
    l5:
        test ebp, ebp
        je l6
        cmp ebp, edi
        je l7
    l6:
        call dword ptr [mem_00925134]
    l7:
        cmp esi, ebx
        je done
        test ebp, ebp
        mov dword ptr [esp + 0x14], esi
        jne l8
        call dword ptr [mem_00925134]
    l8:
        cmp esi, dword ptr [ebp + 8]
        jb l9
        call dword ptr [mem_00925134]
    l9:
        mov edi, dword ptr [edi + 8]
        mov eax, dword ptr [esp + 0x1c]
        cmp dword ptr [eax + 4], edi
        lea ebx, [esi + 0x14]
        jbe l10
        call dword ptr [mem_00925134]
    l10:
        mov eax, ebp
        cmp eax, dword ptr [esp + 0x1c]
        je l11
        call dword ptr [mem_00925134]
    l11:
        cmp ebx, edi
        je fin
        mov eax, ebp
        cmp ebx, dword ptr [eax + 8]
        jb l12
        call dword ptr [mem_00925134]
    l12:
        fld dword ptr [ebx]
        fld dword ptr [esp + 0x24]
        fcompp
        fnstsw ax
        test ah, 5
        jnp fin
        cmp esi, dword ptr [ebp + 8]
        jb l13
        call dword ptr [mem_00925134]
    l13:
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ebx
        jmp top
    fin:
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [eax], ebp
        mov dword ptr [eax + 4], esi
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0051AC30] sub_0051AC30 (73 bytes)
extern "C" void ext_0051A780();
extern "C" int mem_0094CE80;
extern "C" __declspec(naked) void __fastcall fn_0051AC30(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [mem_0094CE80]
        push ebx
        push esi
        push edi
        sub esp, 8
        fstp dword ptr [esp+4]
        mov esi, ecx
        fld dword ptr [esp+0x18]
        lea edi, [esi+0x3c]
        fstp dword ptr [esp]
        lea ebx, [esi+0x2c]
        push edi
        push ebx
        call ext_0051A780
        fld dword ptr [esp+0x20]
        mov edx, [edi+4]
        fstp dword ptr [esp+0xc]
        mov ecx, [esi+0x28]
        mov eax, [ecx]
        mov eax, [eax+0xc]
        add esp, 0xc
        push edx
        mov edx, [edi]
        push edx
        push ebx
        call eax
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x0051AE90] sub_0051AE90 (57 bytes)
extern "C" void ext_0051AC30();
extern "C" int mem_00AECC08;
extern "C" __declspec(naked) void __fastcall fn_0051AE90(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, [esi+0x24]
        test eax, eax
        je L1
        mov ecx, [eax+4]
        push eax
        jmp L2
    L1:
        mov ecx, [mem_00AECC08]
        push offset mem_00AECC08-4
    L2:
        mov edx, [ecx]
        mov eax, [edx+4]
        call eax
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0051AC30
        pop esi
        pop ecx
        ret
    }
}

// [0x0051AD40] sub_0051AD40 (127 bytes)
struct V4_51AD40 { float x, y, z, w; };
struct Obj_51AD40 { void* p; };
extern "C" void ext_0051A890();
struct Iface_51AD40 { virtual void v0(); virtual void v1(); virtual V4_51AD40* v2(float* a, int b, int c, float d); };
extern "C" void __cdecl ext_0051A890x(float* a, float* b, float c, float d);
extern "C" V4_51AD40* __fastcall fn_0051AD40(char* self, int edx_unused, float v) {
    if (*(float*)(self + 0x3c) != v) {
        *(float*)(self + 0x3c) = v;
        float* b = (float*)(self + 0x5c);
        float* a = (float*)(self + 0x2c);
        ((void (__cdecl*)(float*, float*, float, float))ext_0051A890)(a, b, v, *(float*)&mem_0094CE80);
        Iface_51AD40* o = *(Iface_51AD40**)(self + 0x28);
        V4_51AD40* r = o->v2(a, ((int*)b)[0], ((int*)b)[1], v);
        float* d = (float*)(self + 0x40); d[0] = r->x; d[1] = r->y; d[2] = r->z; d[3] = r->w;
    }
    return (V4_51AD40*)(self + 0x40);
}

// [0x0051AEF0] sub_0051AEF0 (57 bytes)
extern "C" void ext_0051AD40();
extern "C" int mem_00AECC08;
extern "C" __declspec(naked) void __fastcall fn_0051AEF0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, [esi+0x24]
        test eax, eax
        je L1
        mov ecx, [eax+4]
        push eax
        jmp L2
    L1:
        mov ecx, [mem_00AECC08]
        push offset mem_00AECC08-4
    L2:
        mov edx, [ecx]
        mov eax, [edx+4]
        call eax
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0051AD40
        pop esi
        pop ecx
        ret
    }
}

// [0x0051A2D0] sub_0051A2D0 (265 bytes)
extern "C" void ext_004765B0();
extern "C" void ext_00476630();
extern "C" void ext_004766A0();
extern "C" void ext_00486880();
extern "C" void ext_004868F0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FD0;
extern "C" __declspec(naked) void __fastcall fn_0051A2D0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        mov eax, fs:[0]
        push -1
        _emit 0x68
        _emit 0xdc
        _emit 0x2d
        _emit 0x89
        _emit 0x00
        push eax
        mov fs:[0], esp
        fld qword ptr [ecx]
        sub esp, 0x16c
        push esi
        push edi
        sub esp, 0x18
        fstp qword ptr [esp+0x10]
        fld dword ptr [ebp+0xc]
        fstp qword ptr [esp+8]
        fld dword ptr [ebp+8]
        fstp qword ptr [esp]
        call ext_004868F0
        test al, al
        jne L_end
        mov eax, [ebp+0x14]
        push eax
        lea ecx, [esp+0xb4]
        push ecx
        call ext_004766A0
        mov esi, eax
        mov edx, [ebp+0x10]
        push edx
        lea eax, [esp+0x84]
        push eax
        mov dword ptr [esp+0x18c], 0
        call ext_00476630
        push esi
        push eax
        lea ecx, [esp+0x58]
        push ecx
        mov byte ptr [esp+0x198], 1
        call dword ptr [mem_00924FD0]
        mov esi, eax
        fld dword ptr [ebp+0xc]
        add esp, 0x14
        lea edx, [esp+0x64]
        fstp qword ptr [esp]
        push edx
        mov byte ptr [esp+0x188], 2
        call ext_00486880
        mov edi, eax
        fld dword ptr [ebp+8]
        add esp, 4
        lea eax, [esp+0x9c]
        fstp qword ptr [esp]
        push eax
        mov byte ptr [esp+0x188], 3
        call ext_00486880
        add esp, 0xc
        push esi
        push edi
        push eax
        lea ecx, [esp+0xd8]
        mov byte ptr [esp+0x188], 4
        call ext_004765B0
        _emit 0x68
        _emit 0x38
        _emit 0xfd
        _emit 0x9d
        _emit 0x00
        lea ecx, [esp+0xd0]
        push ecx
        call ext_006A6DD2
    L_end:
        mov ecx, [esp+0x174]
        pop edi
        mov fs:[0], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x10
    }
}

// [0x00516F90] sub_00516F90 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEC0C4;
extern "C" int mem_00AEC0A8;
extern "C" __declspec(naked) void __fastcall fn_00516F90(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x008929de
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEC0C4], al
        jne short L_done_00516F90
        or dword ptr [mem_00AEC0C4], eax
        push 0x00a4090c
        push offset mem_00AEC0A8
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x00919e10
        call ext_006A6C87
        add esp, 0x0c
    L_done_00516F90:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEC0A8
        mov dword ptr fs:[0x0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x0051A210] sub_0051A210 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEC728;
extern "C" int mem_00AEC70C;
extern "C" __declspec(naked) void __fastcall fn_0051A210(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x00892d6e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEC728], al
        jne short L_done
        or dword ptr [mem_00AEC728], eax
        push 0x00a4320c
        push offset mem_00AEC70C
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x00919ff0
        call ext_006A6C87
        add esp, 0x0c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEC70C
        mov dword ptr fs:[0x0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x00517070] sub_00517070 (33 bytes)
extern "C" void ext_00516F90();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_00517070(void* self) {
    __asm {
        push ecx
        push esi
        mov dword ptr [esp+4], 0
        call ext_00516F90
        mov esi, [esp+0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0051A270] sub_0051A270 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEC748;
extern "C" int mem_00AEC72C;
extern "C" __declspec(naked) void __fastcall fn_0051A270(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x00892d8e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEC748], al
        jne short L_done
        or dword ptr [mem_00AEC748], eax
        push 0x00a43218
        push offset mem_00AEC72C
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x00919fe0
        call ext_006A6C87
        add esp, 0x0c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEC72C
        mov dword ptr fs:[0x0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x0051A560] sub_0051A560 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEC778;
extern "C" int mem_00AEC75C;
extern "C" __declspec(naked) void __fastcall fn_0051A560(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x00892e3e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEC778], al
        jne short L_done
        or dword ptr [mem_00AEC778], eax
        push 0x00a43418
        push offset mem_00AEC75C
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x0091a000
        call ext_006A6C87
        add esp, 0x0c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEC75C
        mov dword ptr fs:[0x0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x00519DB0] sub_00519DB0 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A43100;
extern "C" int mem_00B5CE94;
extern "C" __declspec(naked) void __fastcall fn_00519DB0(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A43100
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

// [0x00517600] sub_00517600 (326 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00517600(void* self) {
    __asm {
        push -1
        push 0x8929f8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        push 0
        mov [esp+0xc], esi
        call ext_006657F0
        mov eax, [esp+0x20]
        mov edi, [esp+0x24]
        push 0
        push 0xa42f88
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp+0x2c], 0
        mov dword ptr [esi], 0x951f98
        mov [esi+0x10], eax
        call ext_006A6E9E
        mov ecx, [esp+0x44]
        mov [esi+0x14], eax
        mov eax, [esp+0x3c]
        mov [esi+0x18], eax
        add esp, 0x14
        cmp dword ptr [esi+0x14], 0
        mov [esi+0x1c], eax
        mov [esi+0x24], ecx
        jne l1
        mov [esi+8], edi
    l1:
        cmp dword ptr [esp+0x2c], 0
        mov eax, [esi+0x10]
        mov ecx, [eax+4]
        je l5
        cmp ecx, [eax+8]
        mov [esp+0x20], eax
        mov [esp+0x24], ecx
        jbe l2
        call dword ptr [mem_00925134]
    l2:
        mov eax, [esi+0x10]
        push ebx
        push ebp
        mov ebp, [eax+8]
        cmp [eax+4], ebp
        jbe l3
        call dword ptr [mem_00925134]
    l3:
        mov ebx, [esi+0x10]
        mov edi, [ebx+4]
        cmp edi, [ebx+8]
        jbe l4
        call dword ptr [mem_00925134]
    l4:
        cmp edi, ebp
        mov [esp+0x14], edi
        je l8
    lp:
        mov edx, [esp+0x34]
        cmp [edi], edx
        je l8
        add edi, 4
        cmp edi, ebp
        jne lp
    l8:
        test ebx, ebx
        je l9
        cmp ebx, [esp+0x28]
        je la
    l9:
        call dword ptr [mem_00925134]
    la:
        sub edi, [esp+0x2c]
        pop ebp
        sar edi, 2
        add edi, 1
        mov [esi+0x20], edi
        pop ebx
        jmp l6
    l5:
        test ecx, ecx
        jne l5b
        xor eax, eax
        jmp l5c
    l5b:
        mov eax, [eax+8]
        sub eax, ecx
        sar eax, 2
    l5c:
        mov [esi+0x20], eax
    l6:
        mov ecx, [esi+0x10]
        mov edx, [ecx+4]
        test edx, edx
        jne m1
        xor eax, eax
        jmp m2
    m1:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    m2:
        cmp [esi+0x20], eax
        jbe m5
        test edx, edx
        jne m3
        xor eax, eax
        jmp m4
    m3:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    m4:
        mov [esi+0x20], eax
    m5:
        mov ecx, [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x14
        ret 0x14
    }
}

// [0x00511870] sub_00511870 (177 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00AEBE94;
extern "C" void ext_00695460();
extern "C" __declspec(naked) void __fastcall fn_00511870(void* self) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 8]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 18h]
        je L_bad1
        mov eax, dword ptr [esi + 0Ch]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jb L_ok1
    L_bad1:
        call ebx
    L_ok1:
        mov eax, dword ptr [esi + 8]
        fld qword ptr [eax + 8*edi]
        fst qword ptr [esp + 0Ch]
        fldz
        fcomp qword ptr [esp + 1Ch]
        fnstsw ax
        test ah, 5
        jp L_negst
        mov ecx, dword ptr [mem_00AEBE94]
        fstp st(0)
        call ext_00695460
        fmul qword ptr [esp + 1Ch]
        fadd qword ptr [esp + 0Ch]
        fst qword ptr [esp + 1Ch]
        fld dword ptr [esi + 54h]
        fld dword ptr [esi + 58h]
        fxch st(2)
        fcom st(1)
        fnstsw ax
        test ah, 5
        jp L_ge
        fstp st(0)
        fstp st(1)
        fst qword ptr [esp + 1Ch]
        jmp L_store
    L_ge:
        fstp st(1)
        fcom st(1)
        fnstsw ax
        test ah, 41h
        jne L_le
        fstp st(0)
    L_negst:
        fst qword ptr [esp + 1Ch]
        jmp L_store
    L_le:
        fstp st(1)
    L_store:
        mov ecx, dword ptr [esi + 8]
        test ecx, ecx
        je L_bad2
        mov eax, dword ptr [esi + 0Ch]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jb L_ok2
    L_bad2:
        fstp st(0)
        call ebx
        fld qword ptr [esp + 1Ch]
    L_ok2:
        mov ecx, dword ptr [esi + 8]
        fstp qword ptr [ecx + 8*edi]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 0Ch
    }
}

// [0x005128A0] sub_005128A0 (162 bytes)
extern "C" void ext_005111E0();
extern "C" void ext_00511870();
extern "C" void ext_00695460();
extern "C" int mem_00AEBE94;
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_005128A0(void* self, int edx_unused, double a1, double a2) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x40
        sub     esp, 0x34
        push    ebx
        mov     ebx, dword ptr [mem_00AEBE94]
        push    esi
        mov     esi, ecx
        push    edi
        mov     ecx, ebx
        call    ext_00695460
        fmul    qword ptr [ebp + 0x8]
        fnstcw  word ptr [esp + 0x36]
        movzx   eax, word ptr [esp + 0x36]
        fabs
        fadd    qword ptr [mem_00993828]
        or      eax, 0xc00
        mov     dword ptr [esp + 0x38], eax
        fldcw   word ptr [esp + 0x38]
        fistp   qword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x38]
        test    ecx, ecx
        fldcw   word ptr [esp + 0x36]
        jne     loc_5128F1
        mov     ecx, 1
    loc_5128F1:
        mov     edx, dword ptr [esi + 8]
        test    edx, edx
        jne     loc_5128FC
        xor     eax, eax
        jmp     loc_512904
    loc_5128FC:
        mov     eax, dword ptr [esi + 0xc]
        sub     eax, edx
        sar     eax, 3
    loc_512904:
        cmp     ecx, eax
        jbe     loc_51290A
        mov     ecx, eax
    loc_51290A:
        add     eax, -1
        test    ecx, ecx
        jbe     loc_512939
        mov     dword ptr [esp + 0x38], eax
        mov     edi, ecx
    loc_512917:
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, ebx
        call    ext_005111E0
        fld     qword ptr [ebp + 0x10]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    eax
        mov     ecx, esi
        call    ext_00511870
        sub     edi, 1
        jne     loc_512917
    loc_512939:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}

// [0x00514290] sub_00514290 (96 bytes)
extern "C" void ext_005112B0();
extern "C" void ext_005112F0();
extern "C" void ext_005128A0();
extern "C" int mem_0093BD38;
extern "C" __declspec(naked) void __fastcall fn_00514290(void* self, int edx_unused, double a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        test eax, eax
        jne l1
        xor edx, edx
        jmp l2
    l1:
        mov edx, dword ptr [esi + 0xc]
        sub edx, eax
        sar edx, 3
    l2:
        fld qword ptr [esp + 8]
        sub esp, 8
        lea ecx, [esi + 0x14]
        fstp qword ptr [esp]
        call ext_005112B0
        sub esp, 0x10
        fstp qword ptr [esp + 8]
        fld qword ptr [esp + 0x18]
        fstp qword ptr [esp]
        call ext_005112F0
        test edx, edx
        mov dword ptr [esp + 0x10], edx
        fild dword ptr [esp + 0x10]
        jge l3
        fadd qword ptr [mem_0093BD38]
    l3:
        fmulp st(1), st
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_005128A0
        pop esi
        ret 8
    }
}

// [0x00518B00] sub_00518B00 (438 bytes)
extern "C" void ext_00518550();
extern "C" void ext_005188A0();

extern "C" __declspec(naked) void __fastcall fn_00518B00(void* self) {
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     eax, ebx
        sub     eax, edi
        sar     eax, 2
        cdq
        sub     eax, edx
        sar     eax, 1
        lea     esi, [edi + 4*eax]
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        lea     ecx, [ebx - 4]
        push    ecx
        push    esi
        push    edi
        call    ext_005188A0
        add     esp, 0x10
        cmp     edi, esi
        lea     ebp, [esi + 4]
        jae     loc_518b65

loc_518b36:
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi - 4]
        push    edx
        push    eax
        lea     ecx, [esp + 0x2c]
        call    ext_00518550
        test    al, al
        jne     loc_518b65
        mov     ecx, dword ptr [esi - 4]
        mov     edx, dword ptr [esi]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x2c]
        call    ext_00518550
        test    al, al
        jne     loc_518b65
        add     esi, -4
        cmp     edi, esi
        jb      loc_518b36

loc_518b65:
        cmp     ebp, ebx
        jae     loc_518b9f
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00

loc_518b70:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [ebp]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    ext_00518550
        test    al, al
        jne     loc_518b9f
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [esi]
        push    edx
        push    eax
        lea     ecx, [esp + 0x2c]
        call    ext_00518550
        test    al, al
        jne     loc_518b9f
        add     ebp, 4
        cmp     ebp, ebx
        jb      loc_518b70

loc_518b9f:
        mov     edi, ebp
        mov     ebx, esi

loc_518ba3:
        cmp     edi, dword ptr [esp + 0x20]
        jae     loc_518bec
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00

loc_518bb0:
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [esi]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x2c]
        call    ext_00518550
        test    al, al
        jne     loc_518be3
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [edi]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    ext_00518550
        test    al, al
        jne     loc_518bec
        mov     edx, dword ptr [edi]
        mov     eax, ebp
        mov     ecx, dword ptr [eax]
        mov     dword ptr [eax], edx
        add     ebp, 4
        mov     dword ptr [edi], ecx

loc_518be3:
        add     edi, 4
        cmp     edi, dword ptr [esp + 0x20]
        jb      loc_518bb0

loc_518bec:
        cmp     ebx, dword ptr [esp + 0x1c]
        jbe     loc_518c35

loc_518bf2:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [ebx - 4]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    ext_00518550
        test    al, al
        jne     loc_518c28
        mov     edx, dword ptr [ebx - 4]
        mov     eax, dword ptr [esi]
        push    edx
        push    eax
        lea     ecx, [esp + 0x2c]
        call    ext_00518550
        test    al, al
        jne     loc_518c31
        mov     ecx, dword ptr [ebx - 4]
        mov     eax, dword ptr [esi - 4]
        sub     esi, 4
        mov     dword ptr [esi], ecx
        mov     dword ptr [ebx - 4], eax

loc_518c28:
        add     ebx, -4
        cmp     dword ptr [esp + 0x1c], ebx
        jb      loc_518bf2

loc_518c31:
        cmp     ebx, dword ptr [esp + 0x1c]

loc_518c35:
        jne     loc_518c6d
        cmp     edi, dword ptr [esp + 0x20]
        je      loc_518ca7
        cmp     ebp, edi
        je      loc_518c4b
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [esi]
        mov     dword ptr [esi], edx
        mov     dword ptr [ebp], eax

loc_518c4b:
        mov     ecx, esi
        mov     edx, dword ptr [ecx]
        mov     eax, edi
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [esp + 0x10]
        add     ebp, 4
        add     esi, 4
        add     edi, 4
        mov     dword ptr [eax], ecx
        jmp     loc_518ba3

loc_518c6d:
        sub     ebx, 4
        cmp     edi, dword ptr [esp + 0x20]
        jne     loc_518c97
        sub     esi, 4
        cmp     ebx, esi
        je      loc_518c85
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [ebx]
        mov     dword ptr [ebx], edx
        mov     dword ptr [esi], eax

loc_518c85:
        mov     ecx, dword ptr [ebp - 4]
        mov     eax, dword ptr [esi]
        sub     ebp, 4
        mov     dword ptr [esi], ecx
        mov     dword ptr [ebp], eax
        jmp     loc_518ba3

loc_518c97:
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [ebx]
        mov     dword ptr [edi], edx
        mov     dword ptr [ebx], eax
        add     edi, 4
        jmp     loc_518ba3

loc_518ca7:
        mov     eax, dword ptr [esp + 0x18]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        mov     dword ptr [eax + 4], ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}

// [0x00518D70] sub_00518D70 (438 bytes)
extern "C" void ext_005185D0();
extern "C" void ext_00518950();

extern "C" __declspec(naked) void __fastcall fn_00518D70(void* self) {
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     eax, ebx
        sub     eax, edi
        sar     eax, 2
        cdq
        sub     eax, edx
        sar     eax, 1
        lea     esi, [edi + 4*eax]
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        lea     ecx, [ebx - 4]
        push    ecx
        push    esi
        push    edi
        call    ext_00518950
        add     esp, 0x10
        cmp     edi, esi
        lea     ebp, [esi + 4]
        jae     loc_518dd5

loc_518da6:
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi - 4]
        push    edx
        push    eax
        lea     ecx, [esp + 0x2c]
        call    ext_005185D0
        test    al, al
        jne     loc_518dd5
        mov     ecx, dword ptr [esi - 4]
        mov     edx, dword ptr [esi]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x2c]
        call    ext_005185D0
        test    al, al
        jne     loc_518dd5
        add     esi, -4
        cmp     edi, esi
        jb      loc_518da6

loc_518dd5:
        cmp     ebp, ebx
        jae     loc_518e0f
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00

loc_518de0:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [ebp]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    ext_005185D0
        test    al, al
        jne     loc_518e0f
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [esi]
        push    edx
        push    eax
        lea     ecx, [esp + 0x2c]
        call    ext_005185D0
        test    al, al
        jne     loc_518e0f
        add     ebp, 4
        cmp     ebp, ebx
        jb      loc_518de0

loc_518e0f:
        mov     edi, ebp
        mov     ebx, esi

loc_518e13:
        cmp     edi, dword ptr [esp + 0x20]
        jae     loc_518e5c
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00

loc_518e20:
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [esi]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x2c]
        call    ext_005185D0
        test    al, al
        jne     loc_518e53
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [edi]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    ext_005185D0
        test    al, al
        jne     loc_518e5c
        mov     edx, dword ptr [edi]
        mov     eax, ebp
        mov     ecx, dword ptr [eax]
        mov     dword ptr [eax], edx
        add     ebp, 4
        mov     dword ptr [edi], ecx

loc_518e53:
        add     edi, 4
        cmp     edi, dword ptr [esp + 0x20]
        jb      loc_518e20

loc_518e5c:
        cmp     ebx, dword ptr [esp + 0x1c]
        jbe     loc_518ea5

loc_518e62:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [ebx - 4]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    ext_005185D0
        test    al, al
        jne     loc_518e98
        mov     edx, dword ptr [ebx - 4]
        mov     eax, dword ptr [esi]
        push    edx
        push    eax
        lea     ecx, [esp + 0x2c]
        call    ext_005185D0
        test    al, al
        jne     loc_518ea1
        mov     ecx, dword ptr [ebx - 4]
        mov     eax, dword ptr [esi - 4]
        sub     esi, 4
        mov     dword ptr [esi], ecx
        mov     dword ptr [ebx - 4], eax

loc_518e98:
        add     ebx, -4
        cmp     dword ptr [esp + 0x1c], ebx
        jb      loc_518e62

loc_518ea1:
        cmp     ebx, dword ptr [esp + 0x1c]

loc_518ea5:
        jne     loc_518edd
        cmp     edi, dword ptr [esp + 0x20]
        je      loc_518f17
        cmp     ebp, edi
        je      loc_518ebb
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [esi]
        mov     dword ptr [esi], edx
        mov     dword ptr [ebp], eax

loc_518ebb:
        mov     ecx, esi
        mov     edx, dword ptr [ecx]
        mov     eax, edi
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [esp + 0x10]
        add     ebp, 4
        add     esi, 4
        add     edi, 4
        mov     dword ptr [eax], ecx
        jmp     loc_518e13

loc_518edd:
        sub     ebx, 4
        cmp     edi, dword ptr [esp + 0x20]
        jne     loc_518f07
        sub     esi, 4
        cmp     ebx, esi
        je      loc_518ef5
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [ebx]
        mov     dword ptr [ebx], edx
        mov     dword ptr [esi], eax

loc_518ef5:
        mov     ecx, dword ptr [ebp - 4]
        mov     eax, dword ptr [esi]
        sub     ebp, 4
        mov     dword ptr [esi], ecx
        mov     dword ptr [ebp], eax
        jmp     loc_518e13

loc_518f07:
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [ebx]
        mov     dword ptr [edi], edx
        mov     dword ptr [ebx], eax
        add     edi, 4
        jmp     loc_518e13

loc_518f17:
        mov     eax, dword ptr [esp + 0x18]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        mov     dword ptr [eax + 4], ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}

extern "C" void ext_0049ECB0();
extern "C" void ext_0051E560();
extern "C" void ext_0051EC40();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

// [0x0051FBB0] sub_0051FBB0 (463 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051FBB0(void* self) {
    __asm {
        push    -0x1
        push    0x893306
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esi], 0x95269c
        mov     edi, dword ptr [esi + 0x154]
        xor     ebx, ebx
        cmp     edi, ebx
        mov     dword ptr [esp + 0x1c], 0x6
        je      L_51fc58
        mov     ebp, dword ptr [edi + 0x120]
        cmp     ebp, dword ptr [edi + 0x124]
        jbe     L_51fc00
        call    dword ptr [mem_00925134]
        mov     edi, edi
    L_51fc00:
        mov     ebx, dword ptr [edi + 0x124]
        cmp     dword ptr [edi + 0x120], ebx
        jbe     L_51fc14
        call    dword ptr [mem_00925134]
    L_51fc14:
        cmp     ebp, ebx
        je      L_51fc46
        cmp     ebp, dword ptr [edi + 0x124]
        jb      L_51fc26
        call    dword ptr [mem_00925134]
    L_51fc26:
        mov     eax, dword ptr [ebp]
        mov     dword ptr [eax + 0x8c], 0x0
        cmp     ebp, dword ptr [edi + 0x124]
        jb      L_51fc41
        call    dword ptr [mem_00925134]
    L_51fc41:
        add     ebp, 0x4
        jmp     L_51fc00
    L_51fc46:
        mov     eax, dword ptr [esi + 0x154]
        mov     dword ptr [eax + 0x12c], 0x0
        xor     ebx, ebx
    L_51fc58:
        mov     eax, dword ptr [esi + 0x15c]
        cmp     eax, ebx
        lea     edi, [esi + 0x158]
        je      L_51fc84
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [edi + 0x8]
        push    edx
        push    edi
        push    ecx
        push    eax
        call    ext_0049ECB0
        mov     eax, dword ptr [edi + 0x4]
        push    eax
        call    ext_006A5C5C
        add     esp, 0x14
    L_51fc84:
        lea     ecx, [esi + 0x140]
        mov     dword ptr [edi + 0x4], ebx
        mov     dword ptr [edi + 0x8], ebx
        mov     dword ptr [edi + 0xc], ebx
        mov     byte ptr [esp + 0x1c], 0x5
        call    ext_0051E560
        mov     edi, dword ptr [esi + 0x134]
        cmp     edi, ebx
        mov     byte ptr [esp + 0x1c], 0x4
        je      L_51fcd6
        mov     ebp, dword ptr [esi + 0x138]
        cmp     edi, ebp
        je      L_51fcc7
    L_51fcb6:
        mov     ecx, edi
        call    ext_0051EC40
        add     edi, 0xc0
        cmp     edi, ebp
        jne     L_51fcb6
    L_51fcc7:
        mov     eax, dword ptr [esi + 0x134]
        push    eax
        call    ext_006A5C5C
        add     esp, 0x4
    L_51fcd6:
        mov     dword ptr [esi + 0x134], ebx
        mov     dword ptr [esi + 0x138], ebx
        mov     dword ptr [esi + 0x13c], ebx
        mov     edi, dword ptr [esi + 0x124]
        cmp     edi, ebx
        mov     byte ptr [esp + 0x1c], 0x3
        je      L_51fd21
        mov     ebp, dword ptr [esi + 0x128]
        cmp     edi, ebp
        je      L_51fd12
    L_51fd01:
        mov     ecx, edi
        call    ext_0051EC40
        add     edi, 0xc0
        cmp     edi, ebp
        jne     L_51fd01
    L_51fd12:
        mov     eax, dword ptr [esi + 0x124]
        push    eax
        call    ext_006A5C5C
        add     esp, 0x4
    L_51fd21:
        lea     ecx, [esi + 0xc4]
        mov     dword ptr [esi + 0x124], ebx
        mov     dword ptr [esi + 0x128], ebx
        mov     dword ptr [esi + 0x12c], ebx
        mov     byte ptr [esp + 0x1c], 0x2
        call    ext_0048B4C0
        lea     ecx, [esi + 0x68]
        mov     byte ptr [esp + 0x1c], 0x1
        call    ext_0048B4C0
        lea     ecx, [esi + 0xc]
        mov     byte ptr [esp + 0x1c], 0x0
        call    ext_0048B4C0
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], 0xffffffff
        call    ext_0065F440
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x00515890] sub_00515890 (484 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_006647A0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924ED0;
extern "C" int mem_00924FD8;

extern "C" __declspec(naked) void __fastcall fn_00515890(void* self) {
    __asm {
        push    -0x1
        push    0x8927ec
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x90
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xb4]
        lea     eax, [esp + 0x30]
        xor     ebx, ebx
        push    edi
        push    eax
        mov     ebp, ecx
        mov     dword ptr [esp + 0xb0], ebx
        mov     dword ptr [esp + 0x18], ebx
        call    ext_00404F00
        add     esp, 0x8
        mov     esi, eax
        push    0x951b34
        lea     ecx, [esp + 0x6c]
        mov     dword ptr [esp + 0xac], 0x1
        call    dword ptr [mem_00924FE4]
        push    esi
        mov     esi, dword ptr [esp + 0xb4]
        push    eax
        push    esi
        mov     byte ptr [esp + 0xb4], 0x2
        call    dword ptr [mem_00924FD0]
        add     esp, 0xc
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x10], 0x1
        mov     byte ptr [esp + 0xa8], 0x1
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x30]
        mov     byte ptr [esp + 0xa8], bl
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [ecx + 0xa0]
        cmp     eax, ebx
        je      loc_515a57
        cmp     byte ptr [eax + 0x30], bl
        je      loc_515a57
        mov     edx, dword ptr [eax + 0x20]
        cmp     edx, ebx
        lea     ecx, [eax + 0x1c]
        je      loc_515a57
        mov     eax, dword ptr [ecx + 0x8]
        sub     eax, edx
        sar     eax, 0x2
        cmp     edi, eax
        jae     loc_515a57
        push    edi
        call    ext_0050E360
        mov     edi, dword ptr [eax]
        push    0x936128
        mov     ecx, esi
        call    dword ptr [mem_00924ED0]
        mov     eax, dword ptr [edi + 0x2c]
        push    eax
        lea     edx, [esp + 0x18]
        push    edx
        call    ext_00404F00
        add     esp, 0x8
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0xac], 0x3
        call    dword ptr [mem_00924FD8]
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0xa8], bl
        call    dword ptr [mem_00924FF4]
        cmp     byte ptr [edi + 0x28], bl
        je      loc_515a57
        fld     qword ptr [edi + 0x20]
        sub     esp, 0x8
        lea     eax, [esp + 0x8c]
        fstp    qword ptr [esp]
        push    eax
        call    ext_006647A0
        add     esp, 0xc
        mov     edi, eax
        push    0x936128
        lea     ecx, [esp + 0x50]
        mov     dword ptr [esp + 0xac], 0x4
        call    dword ptr [mem_00924FE4]
        push    edi
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     byte ptr [esp + 0xb4], 0x5
        call    dword ptr [mem_00924FD0]
        add     esp, 0xc
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0xac], 0x6
        call    dword ptr [mem_00924FD8]
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0xa8], 0x5
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x4c]
        mov     byte ptr [esp + 0xa8], 0x4
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x84]
        mov     byte ptr [esp + 0xa8], bl
        call    dword ptr [mem_00924FF4]
    loc_515a57:
        mov     ecx, dword ptr [esp + 0xa0]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x9c
        ret     0x8
    }
}

// [0x0051E1E0] sub_0051E1E0 (212 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_0051DF60();
extern "C" int mem_00925134;
extern "C" int mem_00B58DFC;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;

extern "C" __declspec(naked) int __fastcall fn_0051E1E0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [ecx + 0x148]
        cmp dword ptr [ecx + 0x144], ebx
        push ebp
        push esi
        lea esi, [ecx + 0x140]
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        mov ebp, dword ptr [esp + 0x1c]
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 0x20], edi
        call ext_0051DF60
        mov edi, dword ptr [esi + 0x8]
        add esp, 0xc
        cmp dword ptr [esi + 0x4], edi
        mov ebx, eax
        jbe L_chk3
        call dword ptr [mem_00925134]
L_chk3:
        test esi, esi
        je L_chk4
        cmp esi, esi
        je L_chk5
L_chk4:
        call dword ptr [mem_00925134]
L_chk5:
        cmp ebx, edi
        pop edi
        je L_found
        test esi, esi
        jne L_chk6
        call dword ptr [mem_00925134]
L_chk6:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_ret
        call dword ptr [mem_00925134]
L_ret:
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
L_found:
        cmp byte ptr [mem_00B58DFC], 0
        jne L_zero
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        push 0x0095266c
        push ebp
        push 0x00952640
        push ecx
        call ext_00435D00
        add esp, 8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
L_zero:
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

extern "C" void ext_00435D00();
extern "C" void ext_005172A0();
extern "C" void ext_0066A720();
extern "C" void ext_0066A760();
extern "C" int mem_00987B44;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E5C;
extern "C" int mem_00924E50;
extern "C" int mem_00924E98;

// [0x00516890] sub_00516890 (232 bytes)
extern "C" __declspec(naked) void __fastcall fn_00516890(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b3308
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push esi
        mov esi, ecx
        call ext_00515B20
        test al, al
        je L_end_00516890
        mov eax, dword ptr [mem_00987B44]
        push eax
        lea ecx, [esp + 0x8]
        call ext_0066A720
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [esp + 0x20], 0
        call ext_005172A0
        mov eax, dword ptr [mem_00924E90]
        mov edx, dword ptr [esi + 0x10]
        fld qword ptr [edx + 0x20]
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [mem_00924FA0]
        push eax
        push 0x951ec8
        sub esp, 0x8
        fstp qword ptr [esp]
        push 0x951ebc
        push ecx
        push 0x951ea4
        push edx
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        push eax
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E50]
        push eax
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov ecx, dword ptr [esp + 0x4]
        push ecx
        push eax
        call ext_00435D00
        mov edx, dword ptr [mem_00924E90]
        add esp, 0x8
        push edx
        mov ecx, eax
        call dword ptr [mem_00924E98]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x1c], -1
        call ext_0066A760
    L_end_00516890:
        mov ecx, dword ptr [esp + 0x14]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret
    }
}

extern "C" void ext_0051E1E0();

// [0x0051E6B0] sub_0051E6B0 (86 bytes)
extern "C" __declspec(naked) void __cdecl fn_0051E6B0() {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        cmp eax, ebx
        je L_empty_0051E6B0
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        lea esi, [eax + 0xb8]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_loop_0051E6B0:
        mov eax, dword ptr [esi + 0x4]
        add eax, 0x30
        push eax
        mov ecx, edi
        call ext_0051E1E0
        mov dword ptr [esi], eax
        add esi, 0xc0
        lea eax, [esi - 0xb8]
        cmp eax, ebx
        jne L_loop_0051E6B0
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebx
        ret
    L_empty_0051E6B0:
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [eax], ecx
        pop ebx
        ret
    }
}

extern "C" void ext_0050FE70();

// [0x00510050] sub_00510050 (849 bytes)
extern "C" __declspec(naked) void __cdecl fn_00510050() {
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        mov     eax, ebx
        sub     eax, ebp
        sar     eax, 2
        cdq
        push    esi
        sub     eax, edx
        push    edi
        sar     eax, 1
        lea     edi, [ebp + eax*4]
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        lea     ecx, [ebx - 4]
        push    ecx
        push    edi
        push    ebp
        call    ext_0050FE70
        add     esp, 0x10
        cmp     ebp, edi
        lea     esi, [edi + 4]
        jae     L_5100AD

    L_510087:
        mov     edx, dword ptr [edi]
        mov     ecx, dword ptr [edi - 4]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_5100AD
        fld     qword ptr [ecx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_5100AD
        add     edi, -4
        cmp     ebp, edi
        jb      L_510087

    L_5100AD:
        mov     eax, ebx
        sub     eax, esi
        add     eax, 3
        cdq
        and     edx, 3
        add     eax, edx
        sar     eax, 2
        cmp     eax, 4
        jl      L_510155
        mov     ecx, dword ptr [edi]

    L_5100C8:
        mov     edx, dword ptr [esi]
        fld     qword ptr [ecx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_510192
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_510192
        mov     edx, dword ptr [esi + 4]
        fld     qword ptr [ecx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_510185
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_510185
        mov     edx, dword ptr [esi + 8]
        fld     qword ptr [ecx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_51018A
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_51018A
        mov     edx, dword ptr [esi + 0xC]
        fld     qword ptr [ecx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_51018F
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_51018F
        add     esi, 0x10
        lea     edx, [ebx - 0xC]
        cmp     esi, edx
        jl      L_5100C8

    L_510155:
        cmp     esi, ebx
        jae     L_510192
        mov     edx, dword ptr [edi]
        jmp     short L_510160
        _emit   0x8D
        _emit   0x49
        _emit   0x00

    L_510160:
        mov     ecx, dword ptr [esi]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_510192
        fld     qword ptr [ecx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_510192
        add     esi, 4
        cmp     esi, ebx
        jb      L_510160
        jmp     short L_510192

    L_510185:
        add     esi, 4
        jmp     short L_510192

    L_51018A:
        add     esi, 8
        jmp     short L_510192

    L_51018F:
        add     esi, 0xC

    L_510192:
        mov     ebp, edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], ebp
        _emit   0x8D
        _emit   0x9B
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00

    L_5101A0:
        mov     eax, ebx
        sub     eax, ecx
        add     eax, 3
        cdq
        and     edx, 3
        add     eax, edx
        sar     eax, 2
        cmp     eax, 4
        jl      L_51028C
        _emit   0x8D
        _emit   0xA4
        _emit   0x24
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00

    L_5101C0:
        mov     edx, dword ptr [ecx]
        mov     ebx, dword ptr [edi]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ebx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_5101ED
        fld     qword ptr [ebx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_5102D1
        mov     eax, esi
        mov     ebx, dword ptr [eax]
        mov     dword ptr [eax], edx
        add     esi, 4
        mov     dword ptr [ecx], ebx

    L_5101ED:
        mov     edx, dword ptr [ecx + 4]
        mov     ebx, dword ptr [edi]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ebx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_51021C
        fld     qword ptr [ebx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_5102C4
        mov     eax, esi
        mov     ebx, dword ptr [eax]
        mov     dword ptr [eax], edx
        add     esi, 4
        mov     dword ptr [ecx + 4], ebx

    L_51021C:
        mov     edx, dword ptr [ecx + 8]
        mov     ebx, dword ptr [edi]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ebx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_51024B
        fld     qword ptr [ebx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_5102C9
        mov     eax, esi
        mov     ebx, dword ptr [eax]
        mov     dword ptr [eax], edx
        add     esi, 4
        mov     dword ptr [ecx + 8], ebx

    L_51024B:
        mov     edx, dword ptr [ecx + 0xC]
        mov     ebx, dword ptr [edi]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ebx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_510276
        fld     qword ptr [ebx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_5102CE
        mov     eax, esi
        mov     ebx, dword ptr [eax]
        mov     dword ptr [eax], edx
        add     esi, 4
        mov     dword ptr [ecx + 0xC], ebx

    L_510276:
        mov     eax, dword ptr [esp + 0x20]
        add     ecx, 0x10
        add     eax, -0xC
        cmp     ecx, eax
        jl      L_5101C0
        mov     ebx, dword ptr [esp + 0x20]

    L_51028C:
        cmp     ecx, ebx
        jae     L_5102D5

    L_510290:
        mov     edx, dword ptr [ecx]
        mov     ebx, dword ptr [edi]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ebx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_5102B9
        fld     qword ptr [ebx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_5102D1
        mov     eax, esi
        mov     ebx, dword ptr [eax]
        mov     dword ptr [eax], edx
        add     esi, 4
        mov     dword ptr [ecx], ebx

    L_5102B9:
        add     ecx, 4
        cmp     ecx, dword ptr [esp + 0x20]
        jb      L_510290
        jmp     short L_5102D1

    L_5102C4:
        add     ecx, 4
        jmp     short L_5102D1

    L_5102C9:
        add     ecx, 8
        jmp     short L_5102D1

    L_5102CE:
        add     ecx, 0xC

    L_5102D1:
        mov     ebx, dword ptr [esp + 0x20]

    L_5102D5:
        cmp     ebp, dword ptr [esp + 0x1C]
        jbe     L_51031F
        jmp     short L_5102E0
        _emit   0x8D
        _emit   0x49
        _emit   0x00

    L_5102E0:
        mov     ebx, dword ptr [edi]
        mov     edx, dword ptr [ebp - 4]
        fld     qword ptr [ebx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_51030A
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ebx + 0x20]
        fnstsw  ax
        test    ah, 5
        jnp     L_510313
        mov     eax, dword ptr [edi - 4]
        sub     edi, 4
        mov     dword ptr [edi], edx
        mov     dword ptr [ebp - 4], eax

    L_51030A:
        add     ebp, -4
        cmp     dword ptr [esp + 0x1C], ebp
        jb      L_5102E0

    L_510313:
        mov     ebx, dword ptr [esp + 0x20]
        cmp     ebp, dword ptr [esp + 0x1C]
        mov     dword ptr [esp + 0x10], ebp

    L_51031F:
        jne     L_510353
        cmp     ecx, ebx
        je      L_510392
        cmp     esi, ecx
        je      L_510331
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edi]
        mov     dword ptr [edi], edx
        mov     dword ptr [esi], eax

    L_510331:
        mov     eax, ecx
        mov     ebp, dword ptr [eax]
        mov     edx, edi
        mov     ebx, dword ptr [edx]
        mov     dword ptr [edx], ebp
        mov     ebp, dword ptr [esp + 0x10]
        add     esi, 4
        add     edi, 4
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [esp + 0x20]
        add     ecx, 4
        jmp     L_5101A0

    L_510353:
        sub     ebp, 4
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x10], ebp
        jne     L_510380
        sub     edi, 4
        cmp     ebp, edi
        je      L_51036F
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [ebp]
        mov     dword ptr [ebp], edx
        mov     dword ptr [edi], eax

    L_51036F:
        mov     edx, dword ptr [esi - 4]
        mov     eax, dword ptr [edi]
        sub     esi, 4
        mov     dword ptr [edi], edx
        mov     dword ptr [esi], eax
        jmp     L_5101A0

    L_510380:
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ebp]
        mov     dword ptr [ecx], edx
        mov     dword ptr [ebp], eax
        add     ecx, 4
        jmp     L_5101A0

    L_510392:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [eax], edi
        pop     edi
        mov     dword ptr [eax + 4], esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}

extern "C" void ext_0050FF60();

// [0x00510440] sub_00510440 (849 bytes)
extern "C" __declspec(naked) void __cdecl fn_00510440() {
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        mov     eax, ebx
        sub     eax, ebp
        sar     eax, 2
        cdq
        push    esi
        sub     eax, edx
        push    edi
        sar     eax, 1
        lea     edi, [ebp + eax*4]
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        lea     ecx, [ebx - 4]
        push    ecx
        push    edi
        push    ebp
        call    ext_0050FF60
        add     esp, 0x10
        cmp     ebp, edi
        lea     esi, [edi + 4]
        jae     L_51049D

    L_510477:
        mov     edx, dword ptr [edi]
        mov     ecx, dword ptr [edi - 4]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_51049D
        fld     qword ptr [ecx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_51049D
        add     edi, -4
        cmp     ebp, edi
        jb      L_510477

    L_51049D:
        mov     eax, ebx
        sub     eax, esi
        add     eax, 3
        cdq
        and     edx, 3
        add     eax, edx
        sar     eax, 2
        cmp     eax, 4
        jl      L_510545
        mov     ecx, dword ptr [edi]

    L_5104B8:
        mov     edx, dword ptr [esi]
        fld     qword ptr [ecx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_510582
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_510582
        mov     edx, dword ptr [esi + 4]
        fld     qword ptr [ecx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_510575
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_510575
        mov     edx, dword ptr [esi + 8]
        fld     qword ptr [ecx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_51057A
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_51057A
        mov     edx, dword ptr [esi + 0xC]
        fld     qword ptr [ecx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_51057F
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_51057F
        add     esi, 0x10
        lea     edx, [ebx - 0xC]
        cmp     esi, edx
        jl      L_5104B8

    L_510545:
        cmp     esi, ebx
        jae     L_510582
        mov     edx, dword ptr [edi]
        jmp     short L_510550
        _emit   0x8D
        _emit   0x49
        _emit   0x00

    L_510550:
        mov     ecx, dword ptr [esi]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_510582
        fld     qword ptr [ecx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_510582
        add     esi, 4
        cmp     esi, ebx
        jb      L_510550
        jmp     short L_510582

    L_510575:
        add     esi, 4
        jmp     short L_510582

    L_51057A:
        add     esi, 8
        jmp     short L_510582

    L_51057F:
        add     esi, 0xC

    L_510582:
        mov     ebp, edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], ebp
        _emit   0x8D
        _emit   0x9B
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00

    L_510590:
        mov     eax, ebx
        sub     eax, ecx
        add     eax, 3
        cdq
        and     edx, 3
        add     eax, edx
        sar     eax, 2
        cmp     eax, 4
        jl      L_51067C
        _emit   0x8D
        _emit   0xA4
        _emit   0x24
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00

    L_5105B0:
        mov     edx, dword ptr [ecx]
        mov     ebx, dword ptr [edi]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ebx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_5105DD
        fld     qword ptr [ebx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_5106C1
        mov     eax, esi
        mov     ebx, dword ptr [eax]
        mov     dword ptr [eax], edx
        add     esi, 4
        mov     dword ptr [ecx], ebx

    L_5105DD:
        mov     edx, dword ptr [ecx + 4]
        mov     ebx, dword ptr [edi]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ebx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_51060C
        fld     qword ptr [ebx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_5106B4
        mov     eax, esi
        mov     ebx, dword ptr [eax]
        mov     dword ptr [eax], edx
        add     esi, 4
        mov     dword ptr [ecx + 4], ebx

    L_51060C:
        mov     edx, dword ptr [ecx + 8]
        mov     ebx, dword ptr [edi]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ebx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_51063B
        fld     qword ptr [ebx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_5106B9
        mov     eax, esi
        mov     ebx, dword ptr [eax]
        mov     dword ptr [eax], edx
        add     esi, 4
        mov     dword ptr [ecx + 8], ebx

    L_51063B:
        mov     edx, dword ptr [ecx + 0xC]
        mov     ebx, dword ptr [edi]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ebx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_510666
        fld     qword ptr [ebx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_5106BE
        mov     eax, esi
        mov     ebx, dword ptr [eax]
        mov     dword ptr [eax], edx
        add     esi, 4
        mov     dword ptr [ecx + 0xC], ebx

    L_510666:
        mov     eax, dword ptr [esp + 0x20]
        add     ecx, 0x10
        add     eax, -0xC
        cmp     ecx, eax
        jl      L_5105B0
        mov     ebx, dword ptr [esp + 0x20]

    L_51067C:
        cmp     ecx, ebx
        jae     L_5106C5

    L_510680:
        mov     edx, dword ptr [ecx]
        mov     ebx, dword ptr [edi]
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ebx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_5106A9
        fld     qword ptr [ebx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_5106C1
        mov     eax, esi
        mov     ebx, dword ptr [eax]
        mov     dword ptr [eax], edx
        add     esi, 4
        mov     dword ptr [ecx], ebx

    L_5106A9:
        add     ecx, 4
        cmp     ecx, dword ptr [esp + 0x20]
        jb      L_510680
        jmp     short L_5106C1

    L_5106B4:
        add     ecx, 4
        jmp     short L_5106C1

    L_5106B9:
        add     ecx, 8
        jmp     short L_5106C1

    L_5106BE:
        add     ecx, 0xC

    L_5106C1:
        mov     ebx, dword ptr [esp + 0x20]

    L_5106C5:
        cmp     ebp, dword ptr [esp + 0x1C]
        jbe     L_51070F
        jmp     short L_5106D0
        _emit   0x8D
        _emit   0x49
        _emit   0x00

    L_5106D0:
        mov     ebx, dword ptr [edi]
        mov     edx, dword ptr [ebp - 4]
        fld     qword ptr [ebx + 0x20]
        fcomp   qword ptr [edx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_5106FA
        fld     qword ptr [edx + 0x20]
        fcomp   qword ptr [ebx + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je      L_510703
        mov     eax, dword ptr [edi - 4]
        sub     edi, 4
        mov     dword ptr [edi], edx
        mov     dword ptr [ebp - 4], eax

    L_5106FA:
        add     ebp, -4
        cmp     dword ptr [esp + 0x1C], ebp
        jb      L_5106D0

    L_510703:
        mov     ebx, dword ptr [esp + 0x20]
        cmp     ebp, dword ptr [esp + 0x1C]
        mov     dword ptr [esp + 0x10], ebp

    L_51070F:
        jne     L_510743
        cmp     ecx, ebx
        je      L_510782
        cmp     esi, ecx
        je      L_510721
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edi]
        mov     dword ptr [edi], edx
        mov     dword ptr [esi], eax

    L_510721:
        mov     eax, ecx
        mov     ebp, dword ptr [eax]
        mov     edx, edi
        mov     ebx, dword ptr [edx]
        mov     dword ptr [edx], ebp
        mov     ebp, dword ptr [esp + 0x10]
        add     esi, 4
        add     edi, 4
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [esp + 0x20]
        add     ecx, 4
        jmp     L_510590

    L_510743:
        sub     ebp, 4
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x10], ebp
        jne     L_510770
        sub     edi, 4
        cmp     ebp, edi
        je      L_51075F
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [ebp]
        mov     dword ptr [ebp], edx
        mov     dword ptr [edi], eax

    L_51075F:
        mov     edx, dword ptr [esi - 4]
        mov     eax, dword ptr [edi]
        sub     esi, 4
        mov     dword ptr [edi], edx
        mov     dword ptr [esi], eax
        jmp     L_510590

    L_510770:
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ebp]
        mov     dword ptr [ecx], edx
        mov     dword ptr [ebp], eax
        add     ecx, 4
        jmp     L_510590

    L_510782:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [eax], edi
        pop     edi
        mov     dword ptr [eax + 4], esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}

// [0x0051E710] sub_0051E710 (32 bytes)
extern "C" void __fastcall ext_0051E440(void* self);
extern "C" void __fastcall ext_0051DDD0(void* self);
extern "C" void __fastcall ext_0051E3D0(void* self);

extern "C" void __fastcall fn_0051E710(void* self, int edx_unused, char* a1) {
    ext_0051E440(self);
    ext_0051DDD0(a1);
    ext_0051E3D0(*(void**)(a1 + 0xb8));
}

// [0x0051F640] sub_0051F640 (41 bytes)
extern "C" void ext_0051F4A0();

extern "C" __declspec(naked) void __fastcall fn_0051F640(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_0051F4A0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0051E170] sub_0051E170 (43 bytes)
extern "C" void ext_0051E070();

extern "C" __declspec(naked) void __fastcall fn_0051E170(void* self) {
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
        call ext_0051E070
        add esp, 0x1c
        ret
    }
}

// [0x0051F540] sub_0051F540 (43 bytes)
extern "C" void ext_0051F270();

extern "C" __declspec(naked) void __fastcall fn_0051F540(void* self) {
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
        call ext_0051F270
        add esp, 0x1c
        ret
    }
}

// [0x0051F610] sub_0051F610 (43 bytes)
extern "C" void ext_0051F440();

extern "C" __declspec(naked) void __fastcall fn_0051F610(void* self) {
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
        call ext_0051F440
        add esp, 0x1c
        ret
    }
}

// [0x0051E000] sub_0051E000 (49 bytes)
extern "C" void ext_00680800();

extern "C" __declspec(naked) void __fastcall fn_0051E000(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0xb8], 0
        jne L_body
        xor al, al
        pop esi
        ret
    L_body:
        call ext_00680800
        mov ecx, dword ptr [esi + 0x58]
        mov edx, dword ptr [ecx]
        lea eax, [esi + 0x54]
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        mov ecx, dword ptr [esi + 0xbc]
        mov byte ptr [ecx + 0xc0], al
        pop esi
        ret
    }
}

// [0x0051E360] sub_0051E360 (112 bytes)
extern "C" void ext_0051E000();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0051E360(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x130]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_a
        call ebp
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_a:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_b
        call ebp
    L_b:
        cmp esi, esi
        je L_c
        call ebp
    L_c:
        cmp edi, ebx
        je L_done
    L_loop:
        cmp edi, dword ptr [esi + 0x8]
        jb L_d
        call ebp
    L_d:
        mov ecx, edi
        call ext_0051E000
        test al, al
        jne L_found
        cmp edi, dword ptr [esi + 0x8]
        jb L_e
        call ebp
    L_e:
        add edi, 0xc0
        jmp L_a
    L_found:
        mov ecx, edi
        call ext_0051DDD0
        mov ecx, dword ptr [edi + 0xb8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        jmp ext_0051E3D0
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0051E3D0] sub_0051E3D0 (108 bytes)
extern "C" void ext_0051E1A0();
extern "C" void ext_0051E360();
extern "C" void ext_00680800();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0051E3D0(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, ecx
        mov eax, 1
        cmp dword ptr [ebx + 4], eax
        mov byte ptr [ebx + 9], al
        jne L_else
        call ext_0051E360
        lea ecx, [ebx + 0Ch]
        pop ebx
        add esp, 4
        jmp ext_00680800
L_else:
        push ebp
        push esi
        lea esi, [ebx + 140h]
        push edi
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        jbe L_ok1
        call dword ptr [mem_00925134]
L_ok1:
        mov ebp, dword ptr [esi + 4]
        cmp ebp, dword ptr [esi + 8]
        jbe L_ok2
        call dword ptr [mem_00925134]
L_ok2:
        push offset fn_0051E3D0
        push edi
        push esi
        push ebp
        lea eax, [esp + 20h]
        push esi
        push eax
        call ext_0051E1A0
        add esp, 18h
        pop edi
        pop esi
        pop ebp
        lea ecx, [ebx + 0Ch]
        pop ebx
        add esp, 4
        jmp ext_00680800
    }
}

extern "C" void ext_006404E0();
extern "C" void ext_00695D40();
extern "C" int mem_00A9EDB4;
extern "C" int mem_00A9EE78;

// [0x005114D0] sub_005114D0 (54 bytes)
extern "C" __declspec(naked) void __fastcall fn_005114D0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9EDB4]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0Ch]
        push eax
        call ext_006404E0
        mov ecx, dword ptr [mem_00A9EE78]
        push ecx
        mov edi, eax
        push edi
        lea ecx, [esi + 4]
        call ext_00695D40
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [edx + 0Ch]
        lea ecx, [esi + 14h]
        push edi
        call eax
        pop edi
        pop esi
        ret 4
    }
}

// [0x0051DFC0] sub_0051DFC0 (56 bytes)
extern "C" void ext_00520AE0();

extern "C" void* __cdecl fn_0051DFC0(const char* first, const char* last, char* dest) {
    if (first != last) {
        typedef void (__thiscall *Fn)(void* self, const void* src);
        do {
            ((Fn)ext_00520AE0)(dest, first);
            first += 0x168;
            dest += 0x168;
        } while (first != last);
    }
    return dest;
}

// [0x0051F6F0] sub_0051F6F0 (56 bytes)
extern "C" void ext_0051F570();

extern "C" __declspec(naked) int __fastcall fn_0051F6F0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_0051F570
        lea eax, [esi + 2*esi]
        add esp, 0x18
        shl eax, 0x6
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0051E070] sub_0051E070 (90 bytes)
extern "C" void ext_0051DFC0();

extern "C" __declspec(naked) void* __cdecl fn_0051E070(void* first, void* last, void* dest) {
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
        call ext_0051DFC0
        sub esi, ebx
        mov eax, 0xb60b60b7
        imul esi
        add edx, esi
        sar edx, 8
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        imul eax, eax, 0x168
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0051E740] sub_0051E740 (130 bytes)
extern "C" void ext_0051E070();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0051E740(void* self) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, ecx
        je loc_invalid
        cmp esi, dword ptr [esp + 0x18]
        je loc_valid
    loc_invalid:
        call dword ptr [mem_00925134]
    loc_valid:
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, edx
        je loc_done
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
        call ext_0051E070
        mov edi, dword ptr [ebp + 0x8]
        mov ebx, eax
        add esp, 0x18
        cmp ebx, edi
        mov esi, ebx
        je loc_after_loop
    loc_loop:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 0x0
        mov ecx, esi
        call edx
        add esi, 0x168
        cmp esi, edi
        jne loc_loop
    loc_after_loop:
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [ebp + 0x8], ebx
        pop ebx
    loc_done:
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 0x4], ecx
        pop ebp
        ret 0x14
    }
}

// [0x0051EC00] sub_0051EC00 (59 bytes)
extern "C" void ext_0051E740();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0051EC00(void* self) {
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
        jbe m51ec00_ok1
        call ebp
    m51ec00_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m51ec00_ok2
        call ebp
    m51ec00_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0051E740
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0051D2D0] sub_0051D2D0 (59 bytes)
extern "C" void ext_0051D130();
extern "C" int mem_00AECC08;
extern "C" int mem_00AECC04;

extern "C" __declspec(naked) void __fastcall fn_0051D2D0(void* self, int edx_unused, float a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x24]
        test eax, eax
        je short L_0051D2D0_global
        mov edx, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0x4]
        push edx
        push eax
        jmp short L_0051D2D0_call
    L_0051D2D0_global:
        mov ecx, dword ptr [esp + 0x8]
        push ecx
        mov ecx, dword ptr [mem_00AECC08]
        push offset mem_00AECC04
    L_0051D2D0_call:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0051D130
        pop esi
        ret 0x4
    }
}

// [0x0051FEB0] sub_0051FEB0 (59 bytes)
extern "C" void ext_0051F840();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0051FEB0(void* self) {
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
        jbe m51feb0_ok1
        call ebp
    m51feb0_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m51feb0_ok2
        call ebp
    m51feb0_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0051F840
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00511190] sub_00511190 (67 bytes)
extern "C" void ext_0050F550();
extern "C" void ext_00510F90();
extern "C" void ext_00511090();
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_00511190(void* self) {
    __asm {
        push ecx
        call ext_0050F550
        push 0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push 0x950aa8
        call dword ptr [mem_00924FE4]
        call ext_00510F90
        add esp, 0x20
        push 0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push 0x9508ac
        call dword ptr [mem_00924FE4]
        call ext_00511090
        add esp, 0x24
        ret
    }
}

// [0x0051DC40] sub_0051DC40 (70 bytes)
extern "C" void ext_0051D8E0();
extern "C" void ext_0051DA40();
extern "C" void ext_0051DB40();
extern "C" int mem_00AECC48;
extern "C" __declspec(naked) void __fastcall fn_0051DC40(void* self) {
    __asm {
        push ecx
        call ext_0051D8E0
        mov eax, dword ptr [mem_00AECC44]
        push 0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        call ext_0051DA40
        mov edx, dword ptr [mem_00AECC48]
        add esp, 0x20
        push 0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push edx
        call dword ptr [mem_00924FE4]
        call ext_0051DB40
        add esp, 0x24
        ret
    }
}

// [0x0051F2D0] sub_0051F2D0 (353 bytes)
extern "C" void ext_00490C80();
extern "C" void ext_004AFF30();
extern "C" void ext_00505F00();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __cdecl fn_0051F2D0() {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        sub esp, 0x10
        cmp ecx, dword ptr [esp + 0x18]
        je loc_0051F42D
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x2c]
        lea ebx, [edi + 0x5c]
        lea esi, [ecx + 0x58]
        jmp loc_0051F2F5

loc_0051F2F1:
        mov ecx, dword ptr [esp + 0x24]

loc_0051F2F5:
        push edi
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [edi + 0x1c]
        mov dword ptr [esi - 0x3c], eax
        mov cl, byte ptr [edi + 0x20]
        lea eax, [edi + 0x24]
        mov byte ptr [esi - 0x38], cl
        push eax
        lea ecx, [esi - 0x34]
        call ext_00505F00
        lea eax, [edi + 0x34]
        push eax
        lea ecx, [esi - 0x24]
        call ext_00490C80
        lea eax, [edi + 0x44]
        push eax
        lea ecx, [esi - 0x14]
        call ext_004AFF30
        lea edx, [esi - 0x4]
        lea ebp, [edi + 0x54]
        cmp edx, ebp
        je loc_0051F375
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je loc_0051F347
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esi - 0x4]
        push edx
        call eax

loc_0051F347:
        mov ecx, dword ptr [ebp + 0x4]
        mov dword ptr [esi], ecx
        cmp dword ptr [ebp + 0x4], 0
        je loc_0051F364
        mov ecx, dword ptr [ebp + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push ebp
        lea eax, [esp + 0x1c]
        push eax
        call edx
        jmp loc_0051F370

loc_0051F364:
        mov dword ptr [esp + 0x10], 0
        lea eax, [esp + 0x10]

loc_0051F370:
        mov eax, dword ptr [eax]
        mov dword ptr [esi - 0x4], eax

loc_0051F375:
        push ebx
        lea ecx, [esi + 0x4]
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [ebx + 0x1c]
        mov dword ptr [esi + 0x20], ecx
        mov dl, byte ptr [ebx + 0x20]
        lea eax, [ebx + 0x24]
        push eax
        lea ecx, [esi + 0x28]
        mov byte ptr [esi + 0x24], dl
        call ext_00505F00
        lea eax, [ebx + 0x34]
        push eax
        lea ecx, [esi + 0x38]
        call ext_00490C80
        lea eax, [ebx + 0x44]
        push eax
        lea ecx, [esi + 0x48]
        call ext_004AFF30
        lea ebp, [esi + 0x58]
        lea eax, [ebx + 0x54]
        cmp ebp, eax
        je loc_0051F3FA
        mov ecx, dword ptr [esi + 0x5c]
        test ecx, ecx
        je loc_0051F3C8
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x78]
        push ebp
        call edx

loc_0051F3C8:
        mov ecx, dword ptr [ebx + 0x58]
        lea eax, [ebx + 0x54]
        mov dword ptr [esi + 0x5c], ecx
        cmp dword ptr [eax + 0x4], 0
        je loc_0051F3E9
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push eax
        lea eax, [esp + 0x20]
        push eax
        call edx
        jmp loc_0051F3F5

loc_0051F3E9:
        mov dword ptr [esp + 0x14], 0
        lea eax, [esp + 0x14]

loc_0051F3F5:
        mov eax, dword ptr [eax]
        mov dword ptr [ebp], eax

loc_0051F3FA:
        mov ecx, dword ptr [edi + 0xb8]
        mov eax, dword ptr [esp + 0x24]
        mov dword ptr [esi + 0x60], ecx
        mov edx, dword ptr [edi + 0xbc]
        add eax, 0xc0
        mov dword ptr [esi + 0x64], edx
        add esi, 0xc0
        cmp eax, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x24], eax
        jne loc_0051F2F1
        pop edi
        pop esi
        pop ebp
        pop ebx

loc_0051F42D:
        add esp, 0x10
        ret
    }
}

// [0x0051EF70] sub_0051EF70 (369 bytes)
extern "C" __declspec(naked) void __cdecl fn_0051EF70() {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x10
        cmp eax, dword ptr [esp + 0x18]
        je loc_0051F0D9
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x2c]
        lea esi, [eax + 0x58]
        add edi, 0x58
        jmp loc_0051EF95

loc_0051EF91:
        mov eax, dword ptr [esp + 0x24]

loc_0051EF95:
        mov ecx, dword ptr [esp + 0x2c]
        push eax
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esi - 0x3c]
        mov dword ptr [edi - 0x3c], eax
        mov cl, byte ptr [esi - 0x38]
        lea edx, [esi - 0x34]
        mov byte ptr [edi - 0x38], cl
        push edx
        lea ecx, [edi - 0x34]
        call ext_00505F00
        lea eax, [esi - 0x24]
        push eax
        lea ecx, [edi - 0x24]
        call ext_00490C80
        lea ecx, [esi - 0x14]
        push ecx
        lea ecx, [edi - 0x14]
        call ext_004AFF30
        lea edx, [edi - 0x4]
        lea eax, [esi - 0x4]
        cmp edx, eax
        je loc_0051F019
        mov ecx, dword ptr [edi]
        test ecx, ecx
        je loc_0051EFEB
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [edi - 0x4]
        push eax
        call edx

loc_0051EFEB:
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        cmp dword ptr [esi], 0
        je loc_0051F008
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        lea eax, [esi - 0x4]
        push eax
        lea eax, [esp + 0x1c]
        push eax
        call edx
        jmp loc_0051F014

loc_0051F008:
        mov dword ptr [esp + 0x10], 0
        lea eax, [esp + 0x10]

loc_0051F014:
        mov eax, dword ptr [eax]
        mov dword ptr [edi - 0x4], eax

loc_0051F019:
        lea ecx, [esi + 0x4]
        push ecx
        lea ecx, [edi + 0x4]
        call dword ptr [mem_00924FDC]
        mov edx, dword ptr [esi + 0x20]
        lea ecx, [esi + 0x28]
        mov dword ptr [edi + 0x20], edx
        mov al, byte ptr [esi + 0x24]
        push ecx
        lea ecx, [edi + 0x28]
        mov byte ptr [edi + 0x24], al
        call ext_00505F00
        lea edx, [esi + 0x38]
        push edx
        lea ecx, [edi + 0x38]
        call ext_00490C80
        lea eax, [esi + 0x48]
        push eax
        lea ecx, [edi + 0x48]
        call ext_004AFF30
        lea ebp, [edi + 0x58]
        lea ebx, [esi + 0x58]
        cmp ebp, ebx
        je loc_0051F09E
        mov ecx, dword ptr [edi + 0x5c]
        test ecx, ecx
        je loc_0051F06F
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x78]
        push ebp
        call eax

loc_0051F06F:
        mov ecx, dword ptr [esi + 0x5c]
        mov dword ptr [edi + 0x5c], ecx
        cmp dword ptr [esi + 0x5c], 0
        je loc_0051F08D
        mov ecx, dword ptr [esi + 0x5c]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push ebx
        lea eax, [esp + 0x20]
        push eax
        call edx
        jmp loc_0051F099

loc_0051F08D:
        mov dword ptr [esp + 0x14], 0
        lea eax, [esp + 0x14]

loc_0051F099:
        mov eax, dword ptr [eax]
        mov dword ptr [ebp], eax

loc_0051F09E:
        mov ecx, dword ptr [esi + 0x60]
        mov eax, dword ptr [esp + 0x24]
        add dword ptr [esp + 0x2c], 0xc0
        mov dword ptr [edi + 0x60], ecx
        mov edx, dword ptr [esi + 0x64]
        add eax, 0xc0
        mov dword ptr [edi + 0x64], edx
        add edi, 0xc0
        add esi, 0xc0
        cmp eax, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x24], eax
        jne loc_0051EF91
        pop edi
        pop esi
        pop ebp
        pop ebx

loc_0051F0D9:
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0x10
        ret
    }
}

// [0x0051F0F0] sub_0051F0F0 (371 bytes)
extern "C" __declspec(naked) void __cdecl fn_0051F0F0() {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        sub esp, 0x10
        cmp dword ptr [esp + 0x14], eax
        je loc_0051F25B
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x2c]
        lea esi, [eax + 0x58]
        add edi, 0x58
        jmp loc_0051F115

loc_0051F111:
        mov eax, dword ptr [esp + 0x28]

loc_0051F115:
        mov ecx, dword ptr [esp + 0x2c]
        sub eax, 0xc0
        sub ecx, 0xc0
        push eax
        mov dword ptr [esp + 0x2c], eax
        sub esi, 0xc0
        mov dword ptr [esp + 0x30], ecx
        sub edi, 0xc0
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esi - 0x3c]
        mov dword ptr [edi - 0x3c], eax
        mov cl, byte ptr [esi - 0x38]
        lea edx, [esi - 0x34]
        mov byte ptr [edi - 0x38], cl
        push edx
        lea ecx, [edi - 0x34]
        call ext_00505F00
        lea eax, [esi - 0x24]
        push eax
        lea ecx, [edi - 0x24]
        call ext_00490C80
        lea ecx, [esi - 0x14]
        push ecx
        lea ecx, [edi - 0x14]
        call ext_004AFF30
        lea edx, [edi - 0x4]
        lea eax, [esi - 0x4]
        cmp edx, eax
        je loc_0051F1B8
        mov ecx, dword ptr [edi]
        test ecx, ecx
        je loc_0051F18A
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [edi - 0x4]
        push eax
        call edx

loc_0051F18A:
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        cmp dword ptr [esi], 0
        je loc_0051F1A7
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        lea eax, [esi - 0x4]
        push eax
        lea eax, [esp + 0x1c]
        push eax
        call edx
        jmp loc_0051F1B3

loc_0051F1A7:
        mov dword ptr [esp + 0x10], 0
        lea eax, [esp + 0x10]

loc_0051F1B3:
        mov eax, dword ptr [eax]
        mov dword ptr [edi - 0x4], eax

loc_0051F1B8:
        lea ecx, [esi + 0x4]
        push ecx
        lea ecx, [edi + 0x4]
        call dword ptr [mem_00924FDC]
        mov edx, dword ptr [esi + 0x20]
        lea ecx, [esi + 0x28]
        mov dword ptr [edi + 0x20], edx
        mov al, byte ptr [esi + 0x24]
        push ecx
        lea ecx, [edi + 0x28]
        mov byte ptr [edi + 0x24], al
        call ext_00505F00
        lea edx, [esi + 0x38]
        push edx
        lea ecx, [edi + 0x38]
        call ext_00490C80
        lea eax, [esi + 0x48]
        push eax
        lea ecx, [edi + 0x48]
        call ext_004AFF30
        lea ebp, [edi + 0x58]
        lea ebx, [esi + 0x58]
        cmp ebp, ebx
        je loc_0051F23D
        mov ecx, dword ptr [edi + 0x5c]
        test ecx, ecx
        je loc_0051F20E
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x78]
        push ebp
        call eax

loc_0051F20E:
        mov ecx, dword ptr [esi + 0x5c]
        mov dword ptr [edi + 0x5c], ecx
        cmp dword ptr [esi + 0x5c], 0
        je loc_0051F22C
        mov ecx, dword ptr [esi + 0x5c]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push ebx
        lea eax, [esp + 0x20]
        push eax
        call edx
        jmp loc_0051F238

loc_0051F22C:
        mov dword ptr [esp + 0x14], 0
        lea eax, [esp + 0x14]

loc_0051F238:
        mov eax, dword ptr [eax]
        mov dword ptr [ebp], eax

loc_0051F23D:
        mov ecx, dword ptr [esi + 0x60]
        mov eax, dword ptr [esp + 0x24]
        cmp dword ptr [esp + 0x28], eax
        mov dword ptr [edi + 0x60], ecx
        mov edx, dword ptr [esi + 0x64]
        mov dword ptr [edi + 0x64], edx
        jne loc_0051F111
        pop edi
        pop esi
        pop ebp
        pop ebx

loc_0051F25B:
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0x10
        ret
    }
}

// [0x0051F270] sub_0051F270 (88 bytes)
extern "C" void ext_0051EF70();

extern "C" __declspec(naked) void* __cdecl fn_0051F270(void* a1, void* a2, void* a3) {
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
        call ext_0051EF70
        sub esi, ebx
        mov eax, 0x2aaaaaab
        imul esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 2*eax]
        add esp, 0x18
        shl eax, 6
        add eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0051F440] sub_0051F440 (92 bytes)
extern "C" void ext_0051F0F0();

extern "C" __declspec(naked) int __cdecl fn_0051F440(int a1, int a2, int a3, int a4) {
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
        call ext_0051F0F0
        sub esi, ebx
        mov eax, 0x2aaaaaab
        imul esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 2*eax]
        shl eax, 6
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

// [0x0051F840] sub_0051F840 (127 bytes)
extern "C" void ext_0051EC40();
extern "C" void ext_0051F270();
extern "C" __declspec(naked) void __fastcall fn_0051F840(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, ecx
        je L_0051F852
        cmp esi, dword ptr [esp + 0x18]
        je L_0051F858
    L_0051F852:
        call dword ptr [mem_00925134]
    L_0051F858:
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, edx
        je L_0051F8B1
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
        call ext_0051F270
        mov ebx, dword ptr [ebp + 0x8]
        mov edi, eax
        add esp, 0x18
        cmp edi, ebx
        mov esi, edi
        je L_0051F8A4
    L_0051F893:
        mov ecx, esi
        call ext_0051EC40
        add esi, 0xc0
        cmp esi, ebx
        jne L_0051F893
    L_0051F8A4:
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [ebp + 0x8], edi
        pop edi
        pop ebx
    L_0051F8B1:
        mov eax, dword ptr [esp + 0x0c]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 0x4], ecx
        pop ebp
        ret 0x14
    }
}

// [0x0051E0D0] sub_0051E0D0 (77 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_0051DEA0();

extern "C" __declspec(naked) bool __fastcall fn_0051E0D0(void* self, int edx_unused, unsigned int n) {
    __asm {
        push esi
        xor eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, eax
        mov esi, ecx
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        jne L_51E0EE
        pop edi
        xor al, al
        pop esi
        ret 0x4
    L_51E0EE:
        cmp edi, 0x1555555
        jbe L_51E0FB
        call ext_00405FB0
    L_51E0FB:
        push eax
        push edi
        call ext_0051DEA0
        lea ecx, [edi + 2*edi]
        add esp, 0x8
        shl ecx, 0x6
        add ecx, eax
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        pop edi
        mov dword ptr [esi + 0xc], ecx
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x0051E120] sub_0051E120 (77 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_0051DF00();
extern "C" __declspec(naked) bool __fastcall fn_0051E120(void* self, int /*edx*/, unsigned int count) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        xor eax, eax
        cmp esi, eax
        push edi
        mov edi, ecx
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], eax
        mov dword ptr [edi + 0xc], eax
        jne L_nonzero
        pop edi
        xor al, al
        pop esi
        ret 0x4
    L_nonzero:
        cmp esi, 0xb60b60
        jbe L_alloc
        call ext_00405FB0
    L_alloc:
        push eax
        push esi
        call ext_0051DF00
        imul esi, esi, 0x168
        add esi, eax
        add esp, 0x8
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], eax
        mov dword ptr [edi + 0xc], esi
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x0051ED10] sub_0051ED10 (375 bytes)
extern "C" void ext_0049AD70();
extern "C" void ext_0049ECB0();
extern "C" void ext_0049F2E0();
extern "C" void ext_005007F0();
extern "C" void ext_005015E0();
extern "C" void ext_00509DE0();
extern "C" void ext_0051E7D0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0051ED10(void* self, int edx_unused, void* other) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        cmp esi, ebx
        je L_self
        push ebp
        mov ebp, dword ptr [ebx + 0x4]
        test ebp, ebp
        je L_tidy
        mov ecx, dword ptr [ebx + 0x8]
        sub ecx, ebp
        mov eax, 0x38e38e39
        imul ecx
        sar edx, 0x3
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_copy
    L_tidy:
        mov ecx, esi
        call ext_005015E0
        pop ebp
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    L_copy:
        push edi
        mov edi, dword ptr [esi + 0x4]
        test edi, edi
        jne L_c1
        xor eax, eax
        jmp L_c2
    L_c1:
        mov edx, dword ptr [esi + 0x8]
        sub edx, edi
        mov eax, 0x38e38e39
        imul edx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_c2:
        cmp ecx, eax
        ja L_grow
        mov eax, dword ptr [ebx + 0x8]
        push edi
        push eax
        push ebp
        call ext_005007F0
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_0049ECB0
        mov eax, dword ptr [ebx + 0x4]
        add esp, 0x1c
        test eax, eax
        jne L_nz
        mov ecx, dword ptr [esi + 0x4]
        lea eax, [eax + 8*eax]
        pop edi
        lea edx, [ecx + 4*eax]
        pop ebp
        mov dword ptr [esi + 0x8], edx
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    L_nz:
        mov ebx, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        sub ebx, eax
        mov eax, 0x38e38e39
        imul ebx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 8*eax]
        pop edi
        lea edx, [ecx + 4*eax]
        pop ebp
        mov dword ptr [esi + 0x8], edx
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    L_grow:
        test edi, edi
        jne L_g1
        xor eax, eax
        jmp L_g2
    L_g1:
        mov edx, dword ptr [esi + 0xc]
        sub edx, edi
        mov eax, 0x38e38e39
        imul edx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_g2:
        cmp ecx, eax
        ja L_big
        mov ecx, esi
        call ext_0049AD70
        lea eax, [eax + 8*eax]
        lea eax, [ebp + 4*eax]
        push edi
        push eax
        push ebp
        mov dword ptr [esp + 0x20], eax
        call ext_005007F0
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [ebx + 0x8]
        mov eax, dword ptr [esp + 0x20]
        add esp, 0xc
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_0051E7D0
        pop edi
        mov dword ptr [esi + 0x8], eax
        pop ebp
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    L_big:
        test edi, edi
        je L_skip
        mov ecx, dword ptr [esi + 0x8]
        push ecx
        push edi
        mov ecx, esi
        call ext_0049F2E0
        mov edx, dword ptr [esi + 0x4]
        push edx
        call ext_006A5C5C
        add esp, 0x4
    L_skip:
        mov ecx, ebx
        call ext_0049AD70
        push eax
        mov ecx, esi
        call ext_00509DE0
        test al, al
        je L_end
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [ebx + 0x8]
        mov edx, dword ptr [ebx + 0x4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_0051E7D0
        mov dword ptr [esi + 0x8], eax
    L_end:
        pop edi
        pop ebp
    L_self:
        mov eax, esi
        pop esi
        pop ebx
        ret 0x4
    }
}

extern "C" void ext_005148F0();
extern "C" void ext_00695E40();
extern "C" void ext_00514A70();

// [0x00514B80] sub_00514B80 (82 bytes)
extern "C" __declspec(naked) void __fastcall fn_00514B80(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x14]
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [esi + 0x14]
        push edi
        push ebx
        call edx
        mov eax, dword ptr [esi + 0x38]
        lea edi, [esi + 0x4]
        push eax
        mov ecx, edi
        call ext_005148F0
        push ebx
        mov ecx, edi
        call ext_00695E40
        fldz
        mov eax, dword ptr [esi + 0x38]
        fstp qword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        push eax
        mov ecx, edi
        call ext_00514A70
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x0051D8E0] sub_0051D8E0 (90 bytes)
extern "C" void ext_0051C980();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEC7B0;
extern "C" __declspec(naked) void __fastcall fn_0051D8E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x892f2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEC7B0], al
        jne done_0051D8E0
        or dword ptr [mem_00AEC7B0], eax
        mov ecx, 0xaec78c
        mov dword ptr [esp + 8], 0
        call ext_0051C980
        push 0x91a030
        call ext_006A6C87
        add esp, 4
    done_0051D8E0:
        mov ecx, dword ptr [esp]
        mov eax, 0xaec78c
        mov dword ptr fs:[0], ecx
        add esp, 0Ch
        ret
    }
}

// [0x0051D940] sub_0051D940 (246 bytes)
extern "C" void ext_004C6F60();
extern "C" void ext_004C7200();
extern "C" void ext_00505D50();
extern "C" void ext_00519DB0();
extern "C" void ext_0051D8E0();
extern "C" void ext_0066AC90();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0051D940(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b6444
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc8
        push esi
        call ext_0051D8E0
        mov esi, dword ptr [esp + 0xdc]
        push esi
        lea ecx, [eax + 0x4]
        call ext_00505D50
        test eax, eax
        je L_51D99A
        mov ecx, dword ptr [esp + 0xe0]
        mov edx, dword ptr [eax]
        push ecx
        call edx
        add esp, 0x4
        mov ecx, dword ptr [esp + 0xcc]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    L_51D99A:
        cmp byte ptr [esp + 0xe4], 0x0
        je L_51DA1E
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push esi
        call dword ptr [mem_00924FE0]
        sub esp, 0x1c
        mov dword ptr [esp + 0x3c], esp
        mov esi, esp
        sub esp, 0x1c
        mov eax, esp
        mov dword ptr [esp + 0x58], esp
        push eax
        mov dword ptr [esp + 0x12c], 0x0
        call ext_00519DB0
        add esp, 0x4
        push esi
        call ext_0066AC90
        add esp, 0x20
        lea ecx, [esp + 0xa4]
        mov dword ptr [esp + 0x10c], 0xffffffff
        call ext_004C6F60
        push eax
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xd8], 0x1
        call ext_004C7200
        push 0x9e9404
        lea ecx, [esp + 0x10]
        push ecx
        call ext_006A6DD2
    L_51DA1E:
        mov ecx, dword ptr [esp + 0xcc]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xd4
        ret
    }
}

// [0x0051DC90] sub_0051DC90 (133 bytes)
extern "C" void ext_0051D940();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) int __cdecl fn_0051DC90(int idx) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x892f51
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [esp + 0x10]
        sub esp, 0x1c
        cmp eax, 3
        jne not_three
        xor eax, eax
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    not_three:
        mov eax, dword ptr [eax * 4 + mem_00AECC44]
        push esi
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        push 1
        lea ecx, [esp + 0x8]
        push 0
        push ecx
        mov dword ptr [esp + 0x34], 0
        call ext_0051D940
        mov esi, eax
        add esp, 0xc
        mov dword ptr [esp + 0x30], esi
        lea ecx, [esp + 0x4]
        mov byte ptr [esp + 0x28], 2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0051DD20] sub_0051DD20 (135 bytes)
extern "C" __declspec(naked) void* __cdecl fn_0051DD20(void* arg1, float arg2) {
    __asm {
        push -1
        push 0x892f71
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, dword ptr [esp + 0x34]
        lea eax, [edi + 4]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE0]
        push 1
        lea ecx, [esp + 0xc]
        push 0
        push ecx
        mov dword ptr [esp + 0x38], 0
        call ext_0051D940
        mov esi, eax
        mov dword ptr [esp + 0x40], esi
        fld dword ptr [esp + 0x44]
        mov edx, dword ptr [esi]
        fstp dword ptr [esp + 8]
        mov eax, dword ptr [edx + 4]
        add esp, 8
        push edi
        mov ecx, esi
        mov byte ptr [esp + 0x34], 1
        call eax
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00518420] sub_00518420 (97 bytes)
extern "C" void ext_0050BE20();
extern "C" void ext_0050ED40();
extern "C" void ext_00518390();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __cdecl fn_00518420(void* a1, void* a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        push esi
        push edi
        mov ecx, ebx
        call ext_0050BE20
        mov esi, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        jne short L_51843E
        xor eax, eax
        jmp short L_518446
    L_51843E:
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
    L_518446:
        push eax
        mov ecx, ebx
        call ext_0050ED40
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe short L_51845C
        call dword ptr [mem_00925134]
    L_51845C:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe short L_51846A
        call dword ptr [mem_00925134]
    L_51846A:
        push ebx
        push edi
        push esi
        push ebp
        lea eax, [esp + 0x24]
        push esi
        push eax
        call ext_00518390
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0051ECA0] sub_0051ECA0 (105 bytes)
extern "C" void ext_00490BC0();
extern "C" int mem_00893198;

extern "C" __declspec(naked) void* __fastcall fn_0051ECA0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push offset mem_00893198
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
        call ext_00490BC0
        lea eax, [edi + 0x5c]
        push eax
        lea ecx, [esi + 0x5c]
        mov dword ptr [esp + 0x18], 0x0
        call ext_00490BC0
        mov ecx, dword ptr [edi + 0xb8]
        mov dword ptr [esi + 0xb8], ecx
        mov edx, dword ptr [edi + 0xbc]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xbc], edx
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0051F570] sub_0051F570 (147 bytes)
extern "C" void ext_0051EC40();
extern "C" void ext_0051ECA0();
extern "C" void ext_006A6DD2();

// try { for (n = count; n; --n) { if (p) ctor(p, a); p += 0xc0; } }
// catch (...) { destroy [begin, p); throw; }
// Naked: MSVC /EHsc treats extern "C" callees as nothrow, which drops the try block,
// so the SEH frame is written out by hand.
extern "C" __declspec(naked) void __cdecl fn_0051F570(void* begin, unsigned int count, const void* a) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x00893211
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
        jbe exit_path
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call ext_0051ECA0
skip_ctor:
        sub edi, 0x1
        add esi, 0xc0
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je throw_path
dtor_loop:
        mov ecx, esi
        call ext_0051EC40
        add esi, 0xc0
        cmp esi, edi
        jne dtor_loop
throw_path:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
exit_path:
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

// [0x0051F4A0] sub_0051F4A0 (157 bytes)
extern "C" void ext_0051EC40();
extern "C" void ext_0051ECA0();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) char* __cdecl fn_0051F4A0(char* first, char* last, char* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8931f1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
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
        je done
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_copy
        push edi
        mov ecx, esi
        call ext_0051ECA0
    skip_copy:
        add esi, 0xc0
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0xc0
        jmp loop_top
    unwind_funclet:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea esp, [esp]
    dtor_loop:
        mov ecx, esi
        call ext_0051EC40
        add esi, 0xc0
        cmp esi, edi
        jne dtor_loop
    rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    done:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0051E440] sub_0051E440 (111 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051E440(void* self) {
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        push    ebp
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 9]
        mov     byte ptr [esi + 9], 0
        mov     ebp, dword ptr [esi + 0x148]
        cmp     dword ptr [esi + 0x144], ebp
        push    edi
        mov     byte ptr [esp + 0x13], al
        jbe     short L1
        call    ebx
    L1:
        mov     edi, dword ptr [esi + 0x144]
        cmp     edi, dword ptr [esi + 0x148]
        jbe     short L2
        call    ebx
    L2:
        cmp     edi, ebp
        je      short L4
        _emit   0x8d
        _emit   0x64
        _emit   0x24
        _emit   0x00
    L3:
        mov     ecx, edi
        call    fn_0051E440
        add     edi, 0x168
        cmp     edi, ebp
        jne     short L3
    L4:
        cmp     byte ptr [esp + 0x13], 0
        pop     edi
        je      short L5
        lea     ecx, [esi + 0xc4]
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 4
        jmp     ext_00680800
    L5:
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}

// [0x00517970] sub_00517970 (111 bytes)
extern "C" void ext_00506030();
extern "C" void ext_00517890();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_00517970(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -0x1
        push 0x008a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x38
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je no_alloc
        mov ecx, eax
        call ext_00506030
        jmp after_alloc
    no_alloc:
        xor eax, eax
    after_alloc:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        mov eax, dword ptr [esp + 0x24]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_00517890
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00515180] sub_00515180 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00511A80();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00515180(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00511A80
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

// [0x00515200] sub_00515200 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00511AE0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00515200(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00511AE0
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

// [0x00515280] sub_00515280 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00511B40();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00515280(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00511B40
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

// [0x00515300] sub_00515300 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00511BA0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00515300(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00511BA0
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

// [0x00515380] sub_00515380 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00511C00();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00515380(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00511C00
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

// [0x00515400] sub_00515400 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00511C60();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00515400(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00511C60
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

// [0x00515480] sub_00515480 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00511CC0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00515480(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00511CC0
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

// [0x00515500] sub_00515500 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00511D20();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00515500(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00511D20
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

// [0x00515580] sub_00515580 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00511D80();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00515580(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00511D80
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

// [0x00515600] sub_00515600 (114 bytes)
extern "C" void ext_00511DE0();
extern "C" __declspec(naked) void __fastcall fn_00515600(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00511DE0
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

// [0x00516FF0] sub_00516FF0 (117 bytes)
extern "C" void ext_00516EF0();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_00516FF0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_NULL_00516FF0
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call ext_00516EF0
        jmp L_DONE_00516FF0
L_NULL_00516FF0:
        xor eax, eax
L_DONE_00516FF0:
        push eax
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00517890] sub_00517890 (126 bytes)
extern "C" void ext_00517600();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_00517890(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x14], 0
        je short L_517_2
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push edx
        push edi
        push ecx
        push esi
        mov ecx, eax
        call ext_00517600
        jmp short L_517_4
L_517_2:
        xor eax, eax
L_517_4:
        push eax
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0xc]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x0051C980] sub_0051C980 (128 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_00519DB0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_0051C980(void* self) {
    __asm {
        push -1
        push 0x87acb7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        mov dword ptr [esi], 0x952618
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        lea eax, [esp + 0x8]
        push eax
        mov byte ptr [esp + 0x30], 0x2
        call ext_00519DB0
        add esp, 0x4
        push eax
        mov ecx, 0xb5962c
        mov byte ptr [esp + 0x30], 0x3
        call ext_0040ECB0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x0051C640] sub_0051C640 (132 bytes)
extern "C" void ext_0049EEE0();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0051C640(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x892eb8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        lea eax, [edi + 0x4]
        push eax
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x95219c
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [edi + 0x20]
        mov dword ptr [esi + 0x20], ecx
        mov edx, dword ptr [edi + 0x24]
        mov dword ptr [esi + 0x24], edx
        mov eax, dword ptr [edi + 0x28]
        mov dword ptr [esi + 0x28], eax
        add edi, 0x2c
        push edi
        lea ecx, [esi + 0x2c]
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esi], 0x952574
        call ext_0049EEE0
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x3c], 0x0
        mov dword ptr [esi + 0x40], 0x0
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0051CA00] sub_0051CA00 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0051C5A0();
extern "C" void ext_0051C640();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_0051CA00(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa4317c
        push 0xa43100
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x44
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0051C640
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_00519DB0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x44
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_0051C5A0
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}
