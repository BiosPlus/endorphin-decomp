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
extern "C" void ext_007CAB40();
extern "C" void ext_007D48A0();
extern "C" void ext_007D5AE0();
extern "C" __declspec(naked) void __cdecl fn_007CAB80(int a, int b, int c) {
    __asm {
        sub esp, 0x18
        push esi
        push edi
        mov edi, [esp+0x24]
        push edi
        call ext_007D5AE0
        push edi
        mov esi, eax
        call ext_007D48A0
        mov ecx, eax
        mov eax, [esp+0x30]
        fld dword ptr [ecx]
        fmul dword ptr [eax]
        add esp, 4
        fld dword ptr [ecx+4]
        fmul dword ptr [eax+4]
        faddp st(1), st
        fld dword ptr [ecx+8]
        fmul dword ptr [eax+8]
        faddp st(1), st
        fstp dword ptr [esp+0xc]
        fld dword ptr [ecx+0x14]
        fmul dword ptr [eax+4]
        fld dword ptr [ecx+0x10]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [ecx+0x18]
        fmul dword ptr [eax+8]
        faddp st(1), st
        fstp dword ptr [esp+0x10]
        fld dword ptr [ecx+0x24]
        fmul dword ptr [eax+4]
        fld dword ptr [ecx+0x20]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [ecx+0x28]
        fmul dword ptr [eax+8]
        faddp st(1), st
        fstp dword ptr [esp+0x14]
        fld dword ptr [esp+0xc]
        fstp dword ptr [esp]
        call ext_007CAB40
        fmul dword ptr [esi+0x10]
        fstp dword ptr [esp+0x18]
        fld dword ptr [esp+0x10]
        fstp dword ptr [esp]
        call ext_007CAB40
        fmul dword ptr [esi+0x14]
        fstp dword ptr [esp+0x1c]
        fld dword ptr [esp+0x14]
        fstp dword ptr [esp]
        call ext_007CAB40
        fmul dword ptr [esi+0x18]
        mov eax, [esp+0x30]
        add esp, 4
        fstp dword ptr [esp+0x1c]
        fld dword ptr [ecx]
        fld dword ptr [esp+0x14]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp+0x18]
        fld st(0)
        fmul dword ptr [ecx+0x10]
        faddp st(3), st
        fld dword ptr [ecx+0x20]
        fld dword ptr [esp+0x1c]
        fld st(0)
        fmulp st(2), st
        fxch st(4)
        faddp st(1), st
        fadd dword ptr [ecx+0x30]
        fstp dword ptr [eax]
        fld dword ptr [ecx+0x14]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr [ecx+4]
        faddp st(1), st
        fld dword ptr [ecx+0x24]
        fmul st, st(4)
        faddp st(1), st
        fadd dword ptr [ecx+0x34]
        fstp dword ptr [eax+4]
        fmul dword ptr [ecx+0x18]
        pop edi
        fld dword ptr [ecx+8]
        pop esi
        fmulp st(2), st
        faddp st(1), st
        fld dword ptr [ecx+0x28]
        fmulp st(2), st
        faddp st(1), st
        fadd dword ptr [ecx+0x38]
        fstp dword ptr [eax+8]
        add esp, 0x18
        ret
    }
}

// [0x0065D5B0] sub_0065D5B0 (266 bytes)
extern "C" void ext_0065D130();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0065D5B0(void* self, int edx_unused, int a1, char a2) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x74], 0
        push edi
        jne L1
        call ebp
    L1:
        mov eax, [esi + 0x74]
        mov ecx, [esi + 0x78]
        cmp ecx, [eax + 4]
        jne L2
        call ebp
    L2:
        mov edx, [esi + 0x78]
        mov eax, [esp + 0x14]
        cmp eax, [edx + 8]
        jle L10
        mov eax, [esi + 0x64]
        mov ebx, [eax + 4]
        cmp ebx, eax
        lea edi, [esi + 0x60]
        jne L3
        call ebp
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L3:
        mov eax, [esi + 0x74]
        test eax, eax
        je L4
        cmp eax, edi
        je L5
    L4:
        call ebp
    L5:
        cmp [esi + 0x78], ebx
        _emit 0x0f
        _emit 0x84
        _emit 0x9f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        cmp dword ptr [esi + 0x74], 0
        jne L6
        call ebp
    L6:
        mov ecx, [esi + 0x74]
        mov edx, [esi + 0x78]
        cmp edx, [ecx + 4]
        jne L7
        call ebp
    L7:
        mov eax, [esi + 0x78]
        mov ecx, [esp + 0x14]
        cmp ecx, [eax + 8]
        jle LEND
        cmp dword ptr [esi + 0x74], 0
        jne L8
        call ebp
    L8:
        mov edx, [esi + 0x74]
        mov eax, [esi + 0x78]
        cmp eax, [edx + 4]
        jne L9
        call ebp
    L9:
        mov ecx, [esi + 0x78]
        mov edx, [ecx]
        mov [esi + 0x78], edx
        jmp L3
    L10:
        lea ebx, [esi + 0x60]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L11:
        mov eax, [ebx + 4]
        mov edi, [eax]
        mov eax, [esi + 0x74]
        test eax, eax
        je L12
        cmp eax, ebx
        je L13
    L12:
        call ebp
    L13:
        cmp [esi + 0x78], edi
        je LEND
        cmp dword ptr [esi + 0x74], 0
        jne L14
        call ebp
    L14:
        mov ecx, [esi + 0x74]
        mov edx, [esi + 0x78]
        cmp edx, [ecx + 4]
        jne L15
        call ebp
    L15:
        mov eax, [esi + 0x78]
        mov ecx, [esp + 0x14]
        cmp ecx, [eax + 8]
        jge LEND
        cmp dword ptr [esi + 0x74], 0
        jne L16
        call ebp
    L16:
        mov edx, [esi + 0x78]
        mov eax, [edx + 4]
        mov ecx, [esi + 0x74]
        mov [esi + 0x78], eax
        cmp eax, [ecx + 4]
        jne L11
        call ebp
        jmp L11
    LEND:
        cmp byte ptr [esp + 0x18], 0
        je L17
        mov ecx, esi
        call ext_0065D130
    L17:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
    }
}

// [0x0065FD10] sub_0065FD10 (313 bytes)
extern "C" void ext_004C72D0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924EF4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_0065FD10(void* first, void* last) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 08b4158h
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [esp + 14h]
        sub esp, 28h
        push ebx
        mov ebx, dword ptr [esp + 3ch]
        cmp ebx, eax
        je L_end
        push ebp
        lea ebp, [ebx + 20h]
        cmp ebp, eax
        je L_popebp
        lea eax, [ebp - 20h]
        push esi
        mov dword ptr [esp + 44h], eax
        push edi
        mov edi, edi
    L_outer:
        push ebp
        lea ecx, [esp + 1ch]
        mov edi, ebp
        call dword ptr [mem_00924FE0]
        mov esi, dword ptr [esp + 48h]
        mov ecx, dword ptr [esi + 3ch]
        add esi, 40h
        mov dword ptr [esp + 34h], ecx
        lea edx, [esp + 18h]
        push ebx
        push edx
        mov dword ptr [esp + 48h], 0
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L_else
        mov edx, dword ptr [esp + 4ch]
        mov byte ptr [esp + 10h], 0
        mov eax, dword ptr [esp + 10h]
        push eax
        mov byte ptr [esp + 18h], 0
        mov ecx, dword ptr [esp + 18h]
        push ecx
        push edx
        push esi
        push ebp
        push ebx
        call ext_004C72D0
        add esp, 18h
        lea eax, [esp + 18h]
        push eax
        mov ecx, ebx
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [esp + 34h]
        mov dword ptr [ebx + 1ch], ecx
        jmp L_next
    L_else:
        mov esi, dword ptr [esp + 48h]
        lea edx, [esp + 18h]
        push esi
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je L_insert
    L_loop:
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esi + 1ch]
        mov dword ptr [edi + 1ch], eax
        mov edi, esi
        sub esi, 20h
        lea ecx, [esp + 18h]
        push esi
        push ecx
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        jne L_loop
    L_insert:
        lea edx, [esp + 18h]
        push edx
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [edi + 1ch], eax
    L_next:
        lea ecx, [esp + 18h]
        mov dword ptr [esp + 40h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        add dword ptr [esp + 48h], 20h
        add ebp, 20h
        cmp ebp, dword ptr [esp + 4ch]
        jne L_outer
        pop edi
        pop esi
    L_popebp:
        pop ebp
    L_end:
        mov ecx, dword ptr [esp + 2ch]
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 34h
        ret
    }
}

// [0x006501E0] sub_006501E0 (315 bytes)
extern "C" void ext_00554490();
extern "C" void ext_0067B7F0();
extern "C" void ext_007C93E0();
extern "C" void ext_007D8700();
extern "C" __declspec(naked) void __fastcall fn_006501E0(void* self, int edx_unused, void* a1) {
    __asm {
        sub     esp, 0x30
        fldz
        push    ebx
        fst     dword ptr [esp + 0x18]
        push    esi
        fst     dword ptr [esp + 0x18]
        push    edi
        fst     dword ptr [esp + 0x2c]
        mov     ebx, ecx
        mov     edx, dword ptr [ebx + 0x64]
        fst     dword ptr [esp + 0x24]
        fst     dword ptr [esp + 0x34]
        lea     eax, [esp + 0x24]
        push    eax
        fstp    dword ptr [esp + 0x34]
        fld1
        lea     ecx, [esp + 0x1c]
        push    ecx
        fst     dword ptr [esp + 0x20]
        push    1
        fst     dword ptr [esp + 0x34]
        push    edx
        fstp    dword ptr [esp + 0x48]
        call    ext_007D8700
        add     esp, 0x4
        push    eax
        call    ext_007C93E0
        mov     esi, dword ptr [esp + 0x50]
        mov     eax, dword ptr [ebx + 0x64]
        add     esp, 0x10
        lea     edi, [esi + 0xc]
        push    edi
        push    esi
        push    0
        push    eax
        call    ext_007D8700
        add     esp, 0x4
        push    eax
        call    ext_007C93E0
        fld     dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x2c]
        add     esp, 0x10
        fld     dword ptr [esp + 0x28]
        lea     ecx, [esp + 0xc]
        fld     dword ptr [esp + 0x20]
        fld     st(2)
        fmul    st, st(4)
        fld     st(1)
        fmul    st, st(3)
        fsubp   st(1), st
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x18]
        fld     st(1)
        fmulp   st(3), st
        fld     st(0)
        fmulp   st(6), st
        fxch    st(2)
        fsubrp  st(5), st
        fxch    st(4)
        fstp    dword ptr [esp + 0x10]
        fmulp   st(1), st
        fxch    st(2)
        fmulp   st(1), st
        fsubp   st(1), st
        fstp    dword ptr [esp + 0x14]
        call    ext_0067B7F0
        fld     dword ptr [eax]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [edi + 0x8]
        fld     dword ptr [esi + 0x4]
        fld     dword ptr [edi + 0x4]
        fld     dword ptr [esi + 0x8]
        fld     st(2)
        fmul    st, st(4)
        fld     st(1)
        fmul    st, st(3)
        fsubp   st(1), st
        fstp    dword ptr [esp + 0xc]
        lea     ecx, [esp + 0xc]
        fld     dword ptr [edi]
        fld     dword ptr [esi]
        fxch    st(2)
        fmul    st, st(1)
        fld     st(2)
        fmulp   st(6), st
        fsubrp  st(5), st
        fxch    st(4)
        fstp    dword ptr [esp + 0x10]
        fmulp   st(1), st
        fxch    st(1)
        fmulp   st(2), st
        fsubrp  st(1), st
        fstp    dword ptr [esp + 0x14]
        call    ext_0067B7F0
        fld     dword ptr [eax]
        lea     ecx, [esp + 0x18]
        fstp    dword ptr [esi + 0x18]
        push    ecx
        fld     dword ptr [eax + 0x4]
        mov     ecx, esi
        fstp    dword ptr [esi + 0x1c]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esi + 0x20]
        call    ext_00554490
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x30
        ret     0x4
    }
}

// [0x0065A910] sub_0065A910 (111 bytes)
extern "C" void ext_007C5F90();
extern "C" void ext_007C6330();
extern "C" void ext_007C6490();
extern "C" void ext_007CA1A0();
extern "C" int mem_00984824;

extern "C" __declspec(naked) void __fastcall fn_0065A910(void* self) {
    __asm {
        sub     esp, 0x2c
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    eax
        call    ext_007C5F90
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [mem_00984824]
        mov     ecx, dword ptr [esi]
        fstp    dword ptr [esp]
        push    ecx
        call    ext_007C6330
        fld     dword ptr [mem_00984824]
        add     esp, 0x8
        lea     edx, [esp + 0xc]
        push    edx
        sub     esp, 0x8
        fst     dword ptr [esp + 0x4]
        fstp    dword ptr [esp]
        call    ext_007CA1A0
        mov     ecx, dword ptr [esi]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    ext_007C6490
        fld     dword ptr [esp + 0x18]
        mov     edx, dword ptr [esi]
        fstp    qword ptr [esp + 0x18]
        push    edx
        call    ext_007C5F90
        fdivr   qword ptr [esp + 0x1c]
        add     esp, 0x18
        pop     esi
        fstp    dword ptr [esp]
        fld     dword ptr [esp]
        add     esp, 0x2c
        ret
    }
}

// [0x0065AA30] sub_0065AA30 (120 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_007C6330();
extern "C" void ext_007C6490();
extern "C" void ext_007CA1A0();
extern "C" double mem_00928E78;

struct Sub65AA30Struct {
    int w[9];
};

extern "C" void __fastcall fn_0065AA30(void* self, int edx_unused, void* a1, float a2) {
    float f1 = ((float (__thiscall *)(void*, int))ext_005B11E0)(a1, 0);
    void* obj = *(void**)((char*)a1 + 0xc);
    float f2 = (float)(((float (__thiscall *)(void*, void*))(*(void***)obj)[3])(obj, a1) * a2 * mem_00928E78);
    ((void (*)(void*, float))ext_007C6330)(*(void**)self, f2);
    Sub65AA30Struct buf;
    ((void (*)(float, float, void*))ext_007CA1A0)(f2, f1, &buf);
    ((void (*)(void*, void*))ext_007C6490)(*(void**)self, &buf);
}

// [0x0065AAB0] sub_0065AAB0 (138 bytes)
extern "C" void ext_007CA1E0();

extern "C" void __fastcall fn_0065AAB0(void* self, int edx_unused, void* a1, float a2) {
    void* obj = *(void**)((char*)a1 + 0xc);
    float f2 = (float)(((float (__thiscall *)(void*, void*))(*(void***)obj)[3])(obj, a1) * a2 * mem_00928E78);
    ((void (*)(void*, float))ext_007C6330)(*(void**)self, f2);
    Sub65AA30Struct buf;
    ((void (*)(float, float, float, float, void*))ext_007CA1E0)(
        f2,
        ((float (__thiscall *)(void*, int))ext_005B11E0)(a1, 0),
        ((float (__thiscall *)(void*, int))ext_005B11E0)(a1, 1),
        ((float (__thiscall *)(void*, int))ext_005B11E0)(a1, 2),
        &buf
    );
    ((void (*)(void*, void*))ext_007C6490)(*(void**)self, &buf);
}

// [0x0065AB40] sub_0065AB40 (155 bytes)
extern "C" __declspec(naked) void __fastcall fn_0065AB40(void* self, int edx_unused, void* a1, float a2) {
    __asm {
        sub esp, 0x2c
        push esi
        mov esi, dword ptr [esp + 0x34]
        push edi
        mov edi, ecx
        push 0
        mov ecx, esi
        call ext_005B11E0
        fstp dword ptr [esp + 0x8]
        push 1
        mov ecx, esi
        call ext_005B11E0
        fstp dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        push esi
        call edx
        fmul dword ptr [esp + 0x3c]
        mov eax, dword ptr [edi]
        push ecx
        fmul qword ptr [mem_00928E78]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp]
        push eax
        call ext_007C6330
        fld dword ptr [esp + 0x10]
        fadd st(0), st
        add esp, 8
        lea ecx, [esp + 0x10]
        push ecx
        fstp dword ptr [esp + 0x40]
        sub esp, 0x10
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4c]
        fstp dword ptr [esp]
        call ext_007CA1E0
        mov eax, dword ptr [edi]
        lea edx, [esp + 0x24]
        push edx
        push eax
        call ext_007C6490
        add esp, 0x1c
        pop edi
        pop esi
        add esp, 0x2c
        ret 8
    }
}

// [0x0065ABE0] sub_0065ABE0 (163 bytes)
extern "C" __declspec(naked) void __fastcall fn_0065ABE0(void* self, int edx_unused, void* a1, float a2) {
    __asm {
        sub esp, 0x2c
        push esi
        mov esi, dword ptr [esp + 0x34]
        push edi
        mov edi, ecx
        push 0
        mov ecx, esi
        call ext_005B11E0
        fstp dword ptr [esp + 0x8]
        push 1
        mov ecx, esi
        call ext_005B11E0
        fstp dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        push esi
        call edx
        fmul dword ptr [esp + 0x3c]
        mov eax, dword ptr [edi]
        push ecx
        fmul qword ptr [mem_00928E78]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp]
        push eax
        call ext_007C6330
        fld dword ptr [esp + 0x10]
        fadd st(0), st
        add esp, 8
        lea ecx, [esp + 0x10]
        push ecx
        fst dword ptr [esp + 0xc]
        sub esp, 0x10
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4c]
        fstp dword ptr [esp]
        call ext_007CA1E0
        mov eax, dword ptr [edi]
        lea edx, [esp + 0x24]
        push edx
        push eax
        call ext_007C6490
        add esp, 0x1c
        pop edi
        pop esi
        add esp, 0x2c
        ret 8
    }
}

// [0x0065FFE0] sub_0065FFE0 (415 bytes)
extern "C" void ext_0065F850();
extern "C" void ext_0065FC80();
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __cdecl fn_0065FFE0() {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        mov eax, edi
        sub eax, ebx
        sar eax, 0x5
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        lea eax, [edi - 0x20]
        shl esi, 0x5
        push eax
        add esi, ebx
        push esi
        push ebx
        call ext_0065FC80
        add esp, 0xc
        cmp ebx, esi
        lea ebp, [esi + 0x20]
        jae L_00660040
    L_00660015:
        lea edi, [esi - 0x20]
        push esi
        push edi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_0066003c
        push edi
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_0066003c
        mov esi, edi
        cmp ebx, esi
        jb L_00660015
    L_0066003c:
        mov edi, dword ptr [esp + 0x20]
    L_00660040:
        cmp ebp, edi
        jae L_00660067
    L_00660044:
        mov ebx, dword ptr [mem_00924EF4]
        push esi
        push ebp
        call ebx
        add esp, 0x8
        test al, al
        jne L_00660067
        push ebp
        push esi
        call ebx
        add esp, 0x8
        test al, al
        jne L_00660067
        add ebp, 0x20
        cmp ebp, edi
        jb L_00660044
    L_00660067:
        mov ebx, esi
        mov edi, ebp
        mov dword ptr [esp + 0x10], ebx
        nop
    L_00660070:
        cmp edi, dword ptr [esp + 0x20]
        jae L_006600ac
    L_00660076:
        push edi
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_006600a3
        push esi
        push edi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_006600ac
        mov eax, ebp
        push edi
        push eax
        add ebp, 0x20
        call ext_0065F850
        add esp, 0x8
    L_006600a3:
        add edi, 0x20
        cmp edi, dword ptr [esp + 0x20]
        jb L_00660076
    L_006600ac:
        cmp ebx, dword ptr [esp + 0x1c]
        jbe L_006600fc
        add ebx, -0x20
    L_006600b5:
        push esi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_006600e0
        push ebx
        push esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_006600f4
        sub esi, 0x20
        push ebx
        push esi
        call ext_0065F850
        add esp, 0x8
    L_006600e0:
        mov eax, dword ptr [esp + 0x10]
        sub eax, 0x20
        sub ebx, 0x20
        cmp dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x10], eax
        jb L_006600b5
    L_006600f4:
        mov ebx, dword ptr [esp + 0x10]
        cmp ebx, dword ptr [esp + 0x1c]
    L_006600fc:
        jne L_0066012e
        cmp edi, dword ptr [esp + 0x20]
        je L_00660170
        cmp ebp, edi
        je L_00660112
        push ebp
        push esi
        call ext_0065F850
        add esp, 0x8
    L_00660112:
        mov eax, edi
        mov ecx, esi
        push eax
        push ecx
        add ebp, 0x20
        add esi, 0x20
        add edi, 0x20
        call ext_0065F850
        add esp, 0x8
        jmp L_00660070
    L_0066012e:
        sub ebx, 0x20
        cmp edi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x10], ebx
        jne L_0066015e
        sub esi, 0x20
        cmp ebx, esi
        je L_0066014c
        push esi
        push ebx
        call ext_0065F850
        add esp, 0x8
    L_0066014c:
        sub ebp, 0x20
        push ebp
        push esi
        call ext_0065F850
        add esp, 0x8
        jmp L_00660070
    L_0066015e:
        push ebx
        push edi
        call ext_0065F850
        add esp, 0x8
        add edi, 0x20
        jmp L_00660070
    L_00660170:
        mov eax, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x0065F940] sub_0065F940 (417 bytes)
extern "C" void ext_0041CF00();
extern "C" void ext_0041CF50();
extern "C" void ext_004ECB40();
extern "C" void ext_006A6E9E();
extern "C" int mem_008B2698;
extern "C" int mem_00A9FB04;
extern "C" int mem_00924FC0;
extern "C" int mem_00B599BC;
extern "C" int mem_00A9FB34;
extern "C" int mem_00A31114;

extern "C" __declspec(naked) void __fastcall fn_0065F940(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_008B2698
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [mem_00A9FB04]
        sub esp, 0x18
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x34]
        push eax
        push edi
        mov ebp, ecx
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_65F994
        mov ecx, dword ptr [esp + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x10]
        push 0x0
        call eax
        pop edi
        pop ebp
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x24
        ret 0x8
    L_65F994:
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x38]
        mov dword ptr [ebp + 0x54], esi
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x4]
        push edi
        mov ecx, esi
        call eax
        mov ebx, eax
        test ebx, ebx
        je L_65F9B5
        mov dword ptr [ebp + 0x54], ebx
        jmp L_65FACA
    L_65F9B5:
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x8]
        push edi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x14]
        test ecx, ecx
        mov dword ptr [esp + 0x30], 0x0
        je L_65FAB2
        cmp ecx, dword ptr [mem_00B599BC]
        je L_65FAB2
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x1C]
        call ext_0041CF00
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x90]
        mov byte ptr [esp + 0x30], 0x1
        call eax
        test al, al
        je L_65FA3F
        lea ecx, [esp + 0x20]
        push ecx
        lea ecx, [esp + 0x14]
        call ext_004ECB40
        push eax
        lea ecx, [esp + 0x1C]
        mov byte ptr [esp + 0x34], 0x2
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x24]
        test ecx, ecx
        mov byte ptr [esp + 0x30], 0x1
        je L_65FA3F
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x20]
        push eax
        call edx
    L_65FA3F:
        mov ecx, dword ptr [esp + 0x1C]
        test ecx, ecx
        je L_65FA99
        cmp ecx, dword ptr [mem_00B599BC]
        je L_65FA99
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x34]
        lea edx, [esp + 0x10]
        push edx
        call eax
        push 0x0
        push offset mem_00A9FB34
        push offset mem_00A31114
        push 0x0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_65FA95
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [ebp + 0x48]
        call ext_0041CF50
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x60]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        call edx
        mov ebx, eax
    L_65FA95:
        mov ecx, dword ptr [esp + 0x1C]
    L_65FA99:
        test ecx, ecx
        mov byte ptr [esp + 0x30], 0x0
        je L_65FAAE
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x18]
        push edx
        call eax
    L_65FAAE:
        mov ecx, dword ptr [esp + 0x14]
    L_65FAB2:
        test ecx, ecx
        mov dword ptr [esp + 0x30], 0xFFFFFFFF
        je L_65FACA
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x10]
        push eax
        call edx
    L_65FACA:
        mov ecx, dword ptr [esp + 0x28]
        pop esi
        mov eax, ebx
        pop ebx
        pop edi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x24
        ret 0x8
    }
}

// [0x00650800] sub_00650800 (191 bytes)
extern "C" void ext_00694880();
extern "C" void ext_007C93E0();
extern "C" void ext_007D8700();
extern "C" __declspec(naked) void __fastcall fn_00650800(void* self) {
    __asm {
        sub esp, 0x30
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x64]
        push eax
        call ext_007D8700
        fldz
        fst dword ptr [esp + 0x1c]
        lea ecx, [esp + 0x20]
        fst dword ptr [esp + 0x18]
        push ecx
        fst dword ptr [esp + 0x2c]
        lea edx, [esp + 0x18]
        fst dword ptr [esp + 0x24]
        push edx
        fst dword ptr [esp + 0x38]
        push 1
        fstp dword ptr [esp + 0x38]
        push eax
        _emit 0xd9
        _emit 0xe8
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x44]
        call ext_007C93E0
        fld dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x28]
        add esp, 0x14
        fld dword ptr [esp + 0x20]
        add esi, 0x8c
        fld dword ptr [esp + 0x18]
        push esi
        _emit 0xd9
        _emit 0xc2
        lea ecx, [esp + 0x14]
        _emit 0xd8
        _emit 0xcc
        _emit 0xd9
        _emit 0xc1
        _emit 0xd8
        _emit 0xcb
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x14]
        _emit 0xd9
        _emit 0xc1
        _emit 0xde
        _emit 0xcb
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xce
        _emit 0xd9
        _emit 0xca
        _emit 0xde
        _emit 0xe5
        _emit 0xd9
        _emit 0xcc
        fstp dword ptr [esp + 0xc]
        _emit 0xde
        _emit 0xc9
        _emit 0xd9
        _emit 0xca
        _emit 0xde
        _emit 0xc9
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x34]
        call ext_00694880
        mov eax, esi
        pop esi
        add esp, 0x30
        ret
    }
}

// [0x006508C0] sub_006508C0 (191 bytes)
extern "C" void ext_00694880();
extern "C" void ext_007C93E0();
extern "C" void ext_007D8700();
extern "C" __declspec(naked) void __fastcall fn_006508C0(void* self) {
    __asm {
        sub esp, 0x30
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x64]
        push eax
        call ext_007D8700
        fldz
        fst dword ptr [esp + 0x1c]
        lea ecx, [esp + 0x20]
        fst dword ptr [esp + 0x18]
        push ecx
        fst dword ptr [esp + 0x2c]
        lea edx, [esp + 0x18]
        fst dword ptr [esp + 0x24]
        push edx
        fst dword ptr [esp + 0x38]
        push 0
        fstp dword ptr [esp + 0x38]
        push eax
        _emit 0xd9
        _emit 0xe8
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x44]
        call ext_007C93E0
        fld dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x28]
        add esp, 0x14
        fld dword ptr [esp + 0x20]
        add esi, 0x8c
        fld dword ptr [esp + 0x18]
        push esi
        _emit 0xd9
        _emit 0xc2
        lea ecx, [esp + 0x14]
        _emit 0xd8
        _emit 0xcc
        _emit 0xd9
        _emit 0xc1
        _emit 0xd8
        _emit 0xcb
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x14]
        _emit 0xd9
        _emit 0xc1
        _emit 0xde
        _emit 0xcb
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xce
        _emit 0xd9
        _emit 0xca
        _emit 0xde
        _emit 0xe5
        _emit 0xd9
        _emit 0xcc
        fstp dword ptr [esp + 0xc]
        _emit 0xde
        _emit 0xc9
        _emit 0xd9
        _emit 0xca
        _emit 0xde
        _emit 0xc9
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x34]
        call ext_00694880
        mov eax, esi
        pop esi
        add esp, 0x30
        ret
    }
}

// [0x0065C280] sub_0065C280 (55 bytes)
extern "C" int __cdecl ext_007C9260(void*);
extern "C" void __cdecl ext_007C9860(void*);
extern "C" void ext_007D8700();

extern "C" void __fastcall fn_0065C280(void* self) {
    void* p = *(void**)((char*)self + 0x8c);
    if (p != 0) {
        if (ext_007C9260(((void* (__cdecl*)(void*))ext_007D8700)(p))) {
            ext_007C9860(((void* (__cdecl*)(void*))ext_007D8700)(*(void**)((char*)self + 0x8c)));
        }
    }
}

// [0x0065C2C0] sub_0065C2C0 (86 bytes)
extern "C" void ext_007C9930();

extern "C" __declspec(naked) void __fastcall fn_0065C2C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8c]
        test eax, eax
        je loc_65c314
        push eax
        call ext_007D8700
        push eax
        call ext_007C9260
        add esp, 0x8
        test eax, eax
        je loc_65c2f5
        mov eax, dword ptr [esi + 0x8c]
        push eax
        call ext_007D8700
        push eax
        call ext_007C9860
        add esp, 0x8
    loc_65c2f5:
        mov ecx, dword ptr [esi + 0x8c]
        push ecx
        call ext_007D8700
        push eax
        call ext_007C9930
        add esp, 0x8
        mov dword ptr [esi + 0x8c], 0
    loc_65c314:
        pop esi
        ret
    }
}

// [0x00658CF0] sub_00658CF0 (93 bytes)
extern "C" void ext_00658BC0();
extern "C" void ext_00645EB0();
extern "C" __declspec(naked) void __fastcall fn_00658CF0(void* self) {
    __asm {
        push -1
        push 0x8b1828
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x97dacc
        mov dword ptr [esi + 0x4], 0x97dab4
        mov dword ptr [esi + 0x8], 0x97da80
        mov dword ptr [esp + 0x10], 0x0
        call ext_00658BC0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00645EB0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0065A200] sub_0065A200 (93 bytes)
extern "C" void ext_00645EB0();
extern "C" void ext_0065A160();
extern "C" __declspec(naked) void __fastcall fn_0065A200(void* self) {
    __asm {
        push -1
        push 0x8b1828
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x97e1ec
        mov dword ptr [esi + 0x4], 0x97e1d4
        mov dword ptr [esi + 0x8], 0x97e1a0
        mov dword ptr [esp + 0x10], 0x0
        call ext_0065A160
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00645EB0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0065A8E0] sub_0065A8E0 (34 bytes)
extern "C" void ext_007C66A0();
extern "C" void ext_007C6DB0();
extern "C" void __fastcall fn_0065A8E0(void* self) {
    int* p = (int*)self;
    if (*p) {
        int v = *p;
        ((void (__cdecl*)(int))ext_007C66A0)(v);
        ((void (__cdecl*)(int))ext_007C6DB0)(*p);
        *p = 0;
    }
}

// [0x00658D50] sub_00658D50 (302 bytes)
extern "C" void ext_007C6780();
extern "C" void ext_007C9300();
extern "C" void ext_007C9480();
extern "C" void ext_007C9500();
extern "C" void ext_007C9720();
extern "C" void ext_007D8700();
extern "C" __declspec(naked) void __fastcall fn_00658D50(void* self) {
    __asm {
        sub esp, 40h
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi+68h]
        push eax
        call ext_007C6780
        add esp, 4
        cmp eax, dword ptr [esi+6Ch]
        je L_done_00658D50
        mov ecx, dword ptr [esi+64h]
        push ebx
        push edi
        push ecx
        call ext_007D8700
        mov ebx, eax
        push 0
        push ebx
        call ext_007C9300
        fld1
        mov edx, dword ptr [esi]
        fst dword ptr [esp+18h]
        fldz
        mov edx, dword ptr [edx+0BCh]
        fst dword ptr [esp+1Ch]
        mov edi, eax
        fst dword ptr [esp+20h]
        add esp, 0Ch
        fst dword ptr [esp+18h]
        lea eax, [esp+0Ch]
        fst dword ptr [esp+1Ch]
        push eax
        fst dword ptr [esp+28h]
        mov ecx, esi
        fst dword ptr [esp+2Ch]
        fst dword ptr [esp+30h]
        fst dword ptr [esp+34h]
        fst dword ptr [esp+3Ch]
        fst dword ptr [esp+40h]
        fst dword ptr [esp+44h]
        fstp dword ptr [esp+48h]
        fst dword ptr [esp+24h]
        fst dword ptr [esp+38h]
        fstp dword ptr [esp+4Ch]
        call edx
        mov eax, dword ptr [esi+68h]
        push eax
        call ext_007C6780
        add esp, 4
        test eax, eax
        mov dword ptr [esi+6Ch], eax
        je L_else_00658D50
        mov ecx, dword ptr [esi+68h]
        mov edx, dword ptr [esi+64h]
        push ecx
        push edi
        push edx
        jmp L_call2_00658D50
L_else_00658D50:
        mov eax, dword ptr [esi+64h]
        push 0
        push edi
        push eax
L_call2_00658D50:
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C9480
        fld dword ptr [esp+50h]
        mov ecx, dword ptr [esi+64h]
        add esp, 0Ch
        sub esp, 0Ch
        fstp dword ptr [esp+8]
        fld dword ptr [esp+4Ch]
        fstp dword ptr [esp+4]
        fld dword ptr [esp+48h]
        fstp dword ptr [esp]
        push ecx
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C9500
        fld dword ptr [esp+34h]
        fstp dword ptr [esp+0Ch]
        sub esp, 8
        fld dword ptr [esp+38h]
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+34h]
        fstp dword ptr [esp+0Ch]
        fld dword ptr [esp+2Ch]
        fstp dword ptr [esp+8]
        fld dword ptr [esp+28h]
        fstp dword ptr [esp+4]
        fld dword ptr [esp+24h]
        fstp dword ptr [esp]
        push ebx
        call ext_007C9720
        add esp, 1Ch
        pop edi
        pop ebx
L_done_00658D50:
        pop esi
        add esp, 40h
        ret
    }
}

// [0x00659EC0] sub_00659EC0 (432 bytes)
extern "C" void ext_00401000();
extern "C" void ext_0044CCC0();
extern "C" void ext_007C6780();
extern "C" void ext_007C9300();
extern "C" void ext_007C93A0();
extern "C" void ext_007C93E0();
extern "C" void ext_007C9480();
extern "C" void ext_007C9490();
extern "C" void ext_007C9550();
extern "C" void ext_007D8700();

extern "C" __declspec(naked) void __fastcall fn_00659EC0(void* self) {
    __asm {
        sub esp, 0x48
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x70]
        test eax, eax
        je L_exit
        push eax
        call ext_007C6780
        add esp, 4
        cmp eax, dword ptr [edi + 0x74]
        je L_exit
        mov eax, dword ptr [edi + 0x6c]
        push ebx
        push esi
        push eax
        call ext_007D8700
        mov esi, eax
        push 0
        push esi
        call ext_007C9300
        add esp, 0xc
        push offset ext_0044CCC0
        push 2
        push 0xc
        lea ecx, [esp + 0x30]
        push ecx
        mov ebx, eax
        call ext_00401000
        push offset ext_0044CCC0
        push 2
        push 0xc
        lea edx, [esp + 0x48]
        push edx
        call ext_00401000
        fldz
        lea eax, [esp + 0x30]
        fst dword ptr [esp + 0x14]
        push eax
        fst dword ptr [esp + 0x14]
        lea ecx, [esp + 0x28]
        fst dword ptr [esp + 0x10]
        push ecx
        fst dword ptr [esp + 0x28]
        push 0
        fst dword ptr [esp + 0x28]
        push esi
        fstp dword ptr [esp + 0x28]
        call ext_007C93E0
        lea edx, [esp + 0x1c]
        push edx
        push 0
        push esi
        call ext_007C93A0
        lea eax, [esp + 0x64]
        push eax
        lea ecx, [esp + 0x5c]
        push ecx
        push 1
        push esi
        call ext_007C93E0
        lea edx, [esp + 0x44]
        push edx
        push 1
        push esi
        call ext_007C93A0
        mov eax, dword ptr [edi + 0x70]
        push eax
        call ext_007C6780
        add esp, 0x3c
        test eax, eax
        mov dword ptr [edi + 0x74], eax
        je L_zero
        mov ecx, dword ptr [edi + 0x70]
        mov edx, dword ptr [edi + 0x6c]
        push ecx
        push ebx
        push edx
        jmp L_call
    L_zero:
        mov eax, dword ptr [edi + 0x6c]
        push 0
        push ebx
        push eax
    L_call:
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C9480
        fld dword ptr [esp + 0x44]
        add esp, 0xc
        sub esp, 0x18
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp]
        push 0
        push esi
        call ext_007C9550
        fld dword ptr [esp + 0x34]
        add esp, 0x14
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp]
        push 0
        push esi
        call ext_007C9490
        fld dword ptr [esp + 0x64]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x58]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0x54]
        fstp dword ptr [esp]
        push ecx
        fld dword ptr [esp + 0x54]
        fstp dword ptr [esp]
        push 1
        push esi
        call ext_007C9550
        fld dword ptr [esp + 0x40]
        add esp, 0x14
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        push 1
        push esi
        call ext_007C9490
        add esp, 0x14
        pop esi
        pop ebx
    L_exit:
        pop edi
        add esp, 0x48
        ret
    }
}

// [0x0065B360] sub_0065B360 (89 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_00505D50();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;

extern "C" __declspec(naked) int __fastcall fn_0065B360(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        add ecx, 0x8
        call ext_00505D50
        test eax, eax
        je L_not_found
        mov eax, dword ptr [eax]
        pop esi
        ret 0x4
    L_not_found:
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        push 0x937F24
        push esi
        push 0x984898
        push ecx
        call ext_00435D00
        add esp, 0x8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 0x8
        push eax
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        xor eax, eax
        pop esi
        ret 0x4
    }
}

// [0x0065AEC0] sub_0065AEC0 (37 bytes)
extern "C" void ext_0065B360();
extern "C" void ext_007C70C0();
extern "C" int mem_00B55748;

extern "C" __declspec(naked) void __fastcall fn_0065AEC0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00B55748]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 0x30]
        push edx
        call ext_0065B360
        push eax
        mov eax, dword ptr [esi]
        push eax
        call ext_007C70C0
        add esp, 0x8
        pop esi
        ret 0x4
    }
}

// [0x0065A9B0] sub_0065A9B0 (75 bytes)
extern "C" void ext_007C5F50();
extern "C" void ext_007C6610();
extern "C" void ext_007C6C30();
extern "C" void ext_007C71D0();
extern "C" int mem_00B55748;

extern "C" __declspec(naked) void __fastcall fn_0065A9B0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00B55748]
        push esi
        mov esi, dword ptr [eax + 0x28]
        mov eax, dword ptr [esi + 0x40]
        push edi
        push eax
        mov edi, ecx
        call ext_007C6C30
        push eax
        mov dword ptr [edi], eax
        call ext_007C5F50
        add esp, 8
        test eax, eax
        jne SKIP_BLOCK
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [esi + 0x40]
        push ecx
        push edx
        call ext_007C71D0
        add esp, 8
    SKIP_BLOCK:
        mov eax, dword ptr [esi + 0x34]
        lea ecx, [eax + 1]
        mov dword ptr [esi + 0x34], ecx
        mov edx, dword ptr [edi]
        push eax
        push edx
        call ext_007C6610
        add esp, 8
        pop edi
        pop esi
        ret
    }
}

// [0x0065BD50] sub_0065BD50 (39 bytes)
extern "C" void ext_007C8D00(void* p);

extern "C" void __fastcall fn_0065BD50(void* self, int edx_unused, void* arg1) {
    char* s = (char*)self;
    typedef void (__cdecl *Fn)(void*);
    Fn fn = *(Fn*)((char*)arg1 + 0x0C);
    fn(*(void**)(s + 0x1C));
    ext_007C8D00(*(void**)(s + 0x18));
    *(int*)(s + 0x18) = 0;
}

// [0x0065BE20] sub_0065BE20 (176 bytes)
extern "C" void ext_007C76A0();
extern "C" void ext_007C76B0();
extern "C" void ext_007C76D0();
extern "C" void ext_007C76E0();
extern "C" void ext_007C8490();
extern "C" int mem_0093F7B8;

extern "C" __declspec(naked) void __fastcall fn_0065BE20(void* self, int edx_unused, int arg0) {
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        fldz
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x10]
        fstp    dword ptr [esi + 0x4]
        fld     dword ptr [esi + 0x30]
        mov     edx, dword ptr [esi + 0xc]
        push    eax
        sub     esp, 0x8
        fstp    dword ptr [esp + 0x4]
        mov     dword ptr [esi + 0x34], 0x0
        fld     dword ptr [esi + 0x2c]
        mov     dword ptr [esi + 0x38], 0x0
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        call    ext_007C8490
        push    0x0
        push    eax
        mov     dword ptr [esi + 0x40], eax
        call    ext_007C76D0
        fld     dword ptr [esi + 0x28]
        mov     eax, dword ptr [esi + 0x40]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esi + 0x24]
        add     esp, 0x10
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esi + 0x20]
        fstp    dword ptr [esp]
        push    eax
        call    ext_007C76E0
        fld     dword ptr [mem_0093F7B8]
        fcomp   dword ptr [esi + 0x18]
        add     esp, 0x10
        fnstsw  ax
        test    ah, 0x44
        jnp     L_0065bea9
        fld     dword ptr [esi + 0x18]
        push    ecx
        mov     ecx, dword ptr [esi + 0x40]
        fstp    dword ptr [esp]
        push    ecx
        call    ext_007C76B0
        add     esp, 0x8
    L_0065bea9:
        fld     dword ptr [mem_0093F7B8]
        fcomp   dword ptr [esi + 0x14]
        fnstsw  ax
        test    ah, 0x44
        jnp     L_0065becc
        fld     dword ptr [esi + 0x14]
        mov     edx, dword ptr [esi + 0x40]
        push    ecx
        fstp    dword ptr [esp]
        push    edx
        call    ext_007C76A0
        add     esp, 0x8
    L_0065becc:
        pop     esi
        ret     0x4
    }
}

// [0x0065C3F0] sub_0065C3F0 (401 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_0067E990();
extern "C" void ext_00694330();
extern "C" void ext_006944D0();
extern "C" void ext_007C9AA0();
extern "C" void ext_007C9AE0();

extern "C" __declspec(naked) void __fastcall fn_0065C3F0(void* self, int edx_unused, void* arg) {
    __asm {
        sub     esp, 0x98
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xa8]
        mov     ebx, ecx
        push    edi
        mov     ecx, 0x10
        lea     edi, [esp + 0x68]
        rep     movsd
        lea     ebp, [ebx + 0xc]
        mov     ecx, 0x10
        lea     esi, [esp + 0x68]
        mov     edi, ebp
        rep     movsd
        mov     eax, dword ptr [ebx]
        test    eax, eax
        je      L_0065C42C
        push    eax
        mov     ecx, ebp
        call    ext_0067E990
    L_0065C42C:
        mov     eax, dword ptr [ebx + 0x4]
        push    eax
        lea     ecx, [esp + 0x6c]
        call    ext_0067E990
        fldz
        mov     ecx, dword ptr [ebx + 0x8c]
        fst     dword ptr [esp + 0x1c]
        fst     dword ptr [esp + 0x18]
        push    0x1
        fst     dword ptr [esp + 0x18]
        sub     esp, 0xc
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [ebx + 0x44]
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [ebx + 0x40]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [ebx + 0x3c]
        fstp    dword ptr [esp]
        push    ecx
        call    ext_007C9AA0
        add     esp, 0x14
        cmp     byte ptr [ebx + 0x8], 0x0
        jne     L_0065C500
        fldz
        lea     edx, [esp + 0x20]
        fst     dword ptr [esp + 0x28]
        push    edx
        fst     dword ptr [esp + 0x28]
        mov     ecx, ebp
        fst     dword ptr [esp + 0x38]
        fst     dword ptr [esp + 0x30]
        fst     dword ptr [esp + 0x40]
        fstp    dword ptr [esp + 0x3c]
        fld1
        fst     dword ptr [esp + 0x24]
        fst     dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x44]
        call    ext_0067DAD0
        fld     dword ptr [esp + 0x2c]
        mov     ecx, 0x9
        lea     esi, [esp + 0x20]
        lea     edi, [esp + 0x44]
        rep     movsd
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x5c]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x48]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x60]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x4c]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x58]
        fstp    dword ptr [esp + 0x3c]
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x14]
        call    ext_00694330
        jmp     L_0065C53E
    L_0065C500:
        push    ebp
        lea     ecx, [esp + 0x14]
        call    ext_006944D0
        fld     dword ptr [esp + 0xa0]
        mov     ecx, dword ptr [ebx + 0x8c]
        push    0x0
        sub     esp, 0xc
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [esp + 0xac]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0xa8]
        fstp    dword ptr [esp]
        push    ecx
        call    ext_007C9AA0
        add     esp, 0x14
    L_0065C53E:
        movzx   edx, byte ptr [ebx + 0x8]
        fld     dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebx + 0x8c]
        push    edx
        sub     esp, 0x10
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x24]
        fstp    dword ptr [esp]
        push    eax
        call    ext_007C9AE0
        add     esp, 0x18
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x98
        ret     0x4
    }
}

extern "C" void ext_0065C3F0();

// [0x0065C590] sub_0065C590 (69 bytes)
extern "C" __declspec(naked) void __fastcall fn_0065C590(void* self, int edx_unused, int a1, int a2, void* a3) {
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ebx + 0x8c]
        push    eax
        push    ecx
        push    edx
        call    ext_007D8700
        add     esp, 0x4
        push    eax
        call    ext_007C9480
        mov     eax, dword ptr [esp + 0x24]
        mov     esi, eax
        add     esp, 0xc
        lea     edi, [ebx + 0x4c]
        mov     ecx, 0x10
        rep movsd
        push    eax
        mov     ecx, ebx
        call    ext_0065C3F0
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
    }
}

// [0x0065BBA0] sub_0065BBA0 (193 bytes)
extern "C" void ext_007C84E0();
extern "C" void ext_007CD660();
extern "C" void ext_007CD5D0();
extern "C" void ext_007C8A80();
extern "C" int mem_00AB28B4;

extern "C" __declspec(naked) void __fastcall fn_0065BBA0(void* self, int edx_unused, void* arg0) {
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     esi, ecx
        fld     dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x4]
        push    ebp
        push    ecx
        fstp    dword ptr [esp]
        push    0x0
        push    eax
        push    0x0
        mov     word ptr [esi + 0x14], 0x0
        call    ext_007C84E0
        mov     ebx, dword ptr [esi + 0x4]
        lea     edi, [ebx + 0x1]
        imul    edi, ebx
        sar     edi, 1
        add     edi, 0x1f
        sar     edi, 0x5
        lea     ecx, [4*edi + 0x8]
        mov     dword ptr [esi + 0x10], eax
        mov     edx, dword ptr [ebp + 0x4]
        push    ecx
        call    edx
        add     esp, 0x18
        test    eax, eax
        je      short L_skip_init
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], edi
    L_skip_init:
        mov     dword ptr [esi + 0x1c], eax
        mov     eax, dword ptr [esi + 0x10]
        push    eax
        call    ext_007CD660
        mov     ecx, dword ptr [esi + 0x10]
        push    ecx
        call    ext_007CD5D0
        mov     edx, dword ptr [esi + 0x8]
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [mem_00AB28B4]
        push    edx
        mov     edx, dword ptr [esi + 0x10]
        push    eax
        push    ecx
        push    edx
        call    ext_007C8A80
        mov     dword ptr [esi + 0x18], eax
        xor     eax, eax
        add     esp, 0x18
        cmp     dword ptr [esi + 0x4], eax
        jbe     short L_done
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_loop:
        mov     edx, dword ptr [esi + 0x1c]
        lea     ecx, [eax + 0x1]
        imul    ecx, eax
        shr     ecx, 1
        add     ecx, eax
        mov     edi, ecx
        shr     edi, 0x5
        lea     edx, [edx + 4*edi + 0x8]
        and     ecx, 0x1f
        mov     edi, 0x1
        shl     edi, cl
        add     eax, 0x1
        or      dword ptr [edx], edi
        cmp     eax, dword ptr [esi + 0x4]
        jb      short L_loop
    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}

// [0x0065F420] sub_0065F420 (31 bytes)
extern "C" void ext_0065F310();
extern "C" int mem_00B58FF4;
extern "C" __declspec(naked) void __fastcall fn_0065F420(void* self) {
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax]
        push    esi
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [mem_00B58FF4]
        push    0x1
        call    ext_0065F310
        mov     dword ptr [esi], eax
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}

// [0x0065AEF0] sub_0065AEF0 (48 bytes)
extern "C" void __cdecl ext_007C7150(void*);
extern "C" void __cdecl ext_007C8AC0(int, void*, int, int, void*, int);
extern "C" int mem_00B55748;

extern "C" void __fastcall fn_0065AEF0(void** self) {
    char* a = *(char**)((char*)mem_00B55748 + 0x2c);
    ext_007C8AC0(*(int*)(a + 0x18), self[0], 0, *(int*)(a + 0x1c), self[2], 0);
    ext_007C7150(self[0]);
}

// [0x0065BF70] sub_0065BF70 (33 bytes)
extern "C" void ext_007C8140();
extern "C" void __fastcall fn_0065BF70(void* self) {
    ((void (__cdecl *)(int, float))ext_007C8140)(*(int*)((char*)self + 0x40), *(float*)((char*)self + 0x8));
    *(float*)((char*)self + 0x4) += *(float*)((char*)self + 0x8);
}

// [0x0065AE90] sub_0065AE90 (35 bytes)
extern "C" void ext_007C7100();
extern "C" void ext_007CC5D0();

extern "C" __declspec(naked) void __fastcall fn_0065AE90(void* self, int edx_unused, int arg1) {
    __asm {
        mov eax, dword ptr [mem_00B55748]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 0x2c]
        mov eax, dword ptr [ecx + 0x10]
        push eax
        call ext_007CC5D0
        push eax
        call ext_007C7100
        add esp, 0x8
        mov dword ptr [esi], eax
        pop esi
        ret 0x4
    }
}

// [0x0065B5E0] sub_0065B5E0 (36 bytes)
extern "C" void ext_007CCE40();
extern "C" void ext_0065B3C0();
extern "C" __declspec(naked) void __fastcall fn_0065B5E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0x40]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + 0x18]
        push ecx
        mov ecx, dword ptr [esi + 0x34]
        push eax
        push ecx
        call ext_007CCE40
        add esp, 0xc
        mov ecx, esi
        pop esi
        jmp ext_0065B3C0
    }
}

// [0x0065AD50] sub_0065AD50 (52 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_007C7100();
extern "C" void ext_007CA750();
extern "C" int mem_00B55748;

extern "C" __declspec(naked) void __fastcall fn_0065AD50(void* self, int edx_unused, void* arg0) {
    __asm {
        mov eax, dword ptr [mem_00B55748]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 0x2c]
        push edi
        mov edi, dword ptr [ecx + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push 0
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_007CA750
        push eax
        call ext_007C7100
        add esp, 0xc
        pop edi
        mov dword ptr [esi], eax
        pop esi
        ret 4
    }
}

// [0x0065ADF0] sub_0065ADF0 (69 bytes)
extern "C" void ext_007C7100();
extern "C" void ext_007CB890();
extern "C" __declspec(naked) void __fastcall fn_0065ADF0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00B55748]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 0x2c]
        push edi
        mov edi, dword ptr [ecx + 0x10]
        push 1
        mov ecx, ebx
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push 0
        mov ecx, ebx
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_007CB890
        push eax
        call ext_007C7100
        add esp, 0x10
        pop edi
        mov dword ptr [esi], eax
        pop esi
        pop ebx
        ret 4
    }
}

// [0x0065AE40] sub_0065AE40 (69 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_007C7100();
extern "C" void ext_007CC1C0();
extern "C" int mem_00B55748;
extern "C" __declspec(naked) void __fastcall fn_0065AE40(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00B55748]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 0x2c]
        push edi
        mov edi, dword ptr [ecx + 0x10]
        push 1
        mov ecx, ebx
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push 0
        mov ecx, ebx
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_007CC1C0
        push eax
        call ext_007C7100
        add esp, 0x10
        pop edi
        mov dword ptr [esi], eax
        pop esi
        pop ebx
        ret 4
    }
}

// [0x0065AD90] sub_0065AD90 (82 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_007C7100();
extern "C" void ext_007CAF70();
extern "C" int mem_00B55748;
extern "C" __declspec(naked) void __fastcall fn_0065AD90(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00B55748]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [eax + 0x2c]
        mov ebx, dword ptr [ecx + 0x10]
        push 2
        mov ecx, esi
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push 1
        mov ecx, esi
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push 0
        mov ecx, esi
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push ebx
        call ext_007CAF70
        push eax
        call ext_007C7100
        add esp, 0x14
        mov dword ptr [edi], eax
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x0065AF50] sub_0065AF50 (173 bytes)
extern "C" void ext_00647F00();
extern "C" void ext_0065AEF0();
extern "C" void ext_007C6FE0();
extern "C" void ext_007C6FF0();
extern "C" void ext_007C7000();
extern "C" void ext_007C7010();
extern "C" void ext_007C70D0();
extern "C" void ext_007C70E0();
extern "C" void ext_007C70F0();
extern "C" void ext_007C7100();
extern "C" void ext_007C7130();
extern "C" void ext_007C8BC0();
extern "C" void ext_007CC770();

extern "C" __declspec(naked) void __fastcall fn_0065AF50(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov esi, ecx
        je else_path
        mov eax, dword ptr [edi + 0xa4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esi]
        push ecx
        push edx
        call ext_007CC770
        add esp, 8
        mov ecx, edi
        call ext_00647F00
        jmp done_path
else_path:
        mov eax, dword ptr [esi]
        push ebx
        push ebp
        push eax
        call ext_007C8BC0
        mov ecx, dword ptr [esi]
        push ecx
        call ext_007C70E0
        mov edx, dword ptr [esi]
        push edx
        movzx ebx, ax
        call ext_007C6FF0
        mov ebp, eax
        mov eax, dword ptr [esi]
        push eax
        call ext_007C7000
        push eax
        call ext_007C7100
        mov ecx, dword ptr [esi]
        push ecx
        mov edi, eax
        call ext_007C70D0
        push eax
        push edi
        call ext_007C70C0
        mov edx, dword ptr [esi]
        push edx
        call ext_007C7130
        push ebx
        push edi
        mov dword ptr [esi], edi
        call ext_007C70F0
        mov eax, dword ptr [esi]
        push ebp
        push eax
        call ext_007C6FE0
        mov eax, dword ptr [esp + 0x50]
        add esp, 0x34
        pop ebp
        pop ebx
done_path:
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esp + 0x18]
        push 0
        push ecx
        push eax
        mov eax, dword ptr [esi]
        push edx
        push eax
        call ext_007C7010
        add esp, 0x14
        mov ecx, esi
        call ext_0065AEF0
        pop edi
        pop esi
        ret 0x10
    }
}

extern "C" void ext_0046A810();
extern "C" void ext_00672D10();
extern "C" void ext_006A5C5C();
extern "C" int mem_008B1D96;

// [0x0065B550] sub_0065B550 (144 bytes)
extern "C" __declspec(naked) void __fastcall fn_0065B550(void* self) {
    __asm {
        push -0x1
        push offset mem_008B1D96
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], edi
        mov eax, dword ptr [edi + 0x2c]
        mov ecx, dword ptr [eax]
        lea esi, [edi + 0x28]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0x1
        call ext_0046A810
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        xor ebx, ebx
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov eax, dword ptr [edi + 0x1c]
        add esp, 0x4
        cmp eax, ebx
        je L_65B5B5
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_65B5B5:
        lea ecx, [edi + 0x8]
        mov dword ptr [edi + 0x1c], ebx
        mov dword ptr [edi + 0x20], ebx
        mov dword ptr [edi + 0x24], ebx
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_00672D10
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x18
        ret
    }
}

// [0x0065EC70] sub_0065EC70 (59 bytes)
extern "C" void __fastcall ext_0065E010(void* self, int edx_unused, int a1);
extern "C" void __fastcall ext_0065E150(void* self, int edx_unused, int a1);
extern "C" void __fastcall ext_0065E6C0(void* self, int edx_unused, int a1);
extern "C" void __fastcall ext_0065E7B0(void* self, int edx_unused, int a1);
extern "C" void __fastcall ext_0065E8A0(void* self, int edx_unused, int a1);
extern "C" void __fastcall ext_0065E990(void* self, int edx_unused, int a1);

extern "C" __declspec(naked) void __fastcall fn_0065EC70(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_0065E010
        push edi
        mov ecx, esi
        call ext_0065E150
        push edi
        mov ecx, esi
        call ext_0065E6C0
        push edi
        mov ecx, esi
        call ext_0065E7B0
        push edi
        mov ecx, esi
        call ext_0065E8A0
        push edi
        mov ecx, esi
        call ext_0065E990
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0065DD10] sub_0065DD10 (75 bytes)
extern "C" void ext_0065DB60();
extern "C" __declspec(naked) void __fastcall fn_0065DD10(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        fld1
        sub esp, 0x40
        mov eax, esp
        fst dword ptr [eax]
        fldz
        mov dword ptr [esp + 0x40], esp
        fst dword ptr [eax + 0x4]
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x24]
        fst dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x30]
        fst dword ptr [eax + 0x34]
        fstp dword ptr [eax + 0x38]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x28]
        fstp dword ptr [eax + 0x3c]
        mov eax, dword ptr [esp + 0x48]
        push eax
        call ext_0065DB60
        pop ecx
        ret 0x4
    }
}

// [0x0065E010] sub_0065E010 (311 bytes)
extern "C" void ext_0065DD10();
extern "C" void ext_00661B10();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0065E010(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, ecx
        mov ecx, esi
        call ext_00661B10
        test al, al
        je L_else
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jbe L_a1
        call ebp
L_a1:
L_loop1:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_a2
        call ebp
L_a2:
        cmp esi, ebx
        je L_exit
        cmp esi, dword ptr [edi + 0x8]
        jb L_a3
        call ebp
L_a3:
        cmp esi, dword ptr [edi + 0x8]
        mov ebx, dword ptr [esi]
        jb L_a4
        call ebp
L_a4:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        call edx
        mov edx, dword ptr [ebx]
        push eax
        mov eax, dword ptr [edx]
        mov ecx, ebx
        call eax
        cmp esi, dword ptr [edi + 0x8]
        jb L_a5
        call ebp
L_a5:
        add esi, 0x4
        jmp L_loop1
L_else:
        cmp dword ptr [esi + 0x8], 0x0
        jne L_b1
        call dword ptr [mem_00925134]
L_b1:
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [esi + 0xc]
        cmp edx, dword ptr [ecx + 0x4]
        jne L_b2
        call dword ptr [mem_00925134]
L_b2:
        mov ebp, dword ptr [esi + 0xc]
        mov ecx, dword ptr [edi + 0x4]
        add ebp, 0xc
        test ecx, ecx
        jne L_b3
        xor ebx, ebx
        mov dword ptr [esp + 0x18], ebx
        jmp L_b4
L_b3:
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        mov dword ptr [esp + 0x18], eax
        mov ebx, eax
L_b4:
        push ebx
        mov ecx, ebp
        call ext_0065DD10
        xor esi, esi
        cmp ebx, esi
        jle L_exit
        mov dword ptr [esp + 0x10], esi
L_loop2:
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        je L_c1
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp esi, eax
        jb L_c2
L_c1:
        call dword ptr [mem_00925134]
L_c2:
        mov ecx, dword ptr [edi + 0x4]
        cmp dword ptr [ecx + 4*esi], 0x0
        je L_skip
        test ecx, ecx
        je L_c3
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp esi, eax
        jb L_c4
L_c3:
        call dword ptr [mem_00925134]
L_c4:
        mov ecx, dword ptr [ebp + 0x4]
        test ecx, ecx
        mov eax, dword ptr [edi + 0x4]
        mov ebx, dword ptr [eax + 4*esi]
        je L_c5
        mov eax, dword ptr [ebp + 0x8]
        sub eax, ecx
        sar eax, 0x6
        cmp esi, eax
        jb L_c6
L_c5:
        call dword ptr [mem_00925134]
L_c6:
        mov eax, dword ptr [ebp + 0x4]
        add eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx]
        push eax
        mov ecx, ebx
        call edx
        mov ebx, dword ptr [esp + 0x18]
L_skip:
        add dword ptr [esp + 0x10], 0x40
        add esi, 0x1
        cmp esi, ebx
        jl L_loop2
L_exit:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}

extern "C" void ext_0041A920();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" int mem_009252E4;

// [0x0065F310] sub_0065F310 (239 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0065F310(char* self, int edx_unused, unsigned char init, float* src) {
    __asm {
        push    -1
        push    0x8a56c8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        lea     ebx, [esi + 0x14]
        push    edi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x14], ebx
        call    ext_0065C640
        xor     ebp, ebp
        cmp     dword ptr [esi], ebp
        mov     dword ptr [esp + 0x20], ebp
        jne     L_have_node
        push    0x10
        push    0x4000
        call    dword ptr [mem_009252E4]
        mov     edi, eax
        add     esp, 8
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esi + 4]
        mov     dword ptr [esp + 0x14], edi
        call    ext_0041A920
        mov     dword ptr [esi], edi
        mov     eax, edi
        mov     edx, 0xff
    L_loop:
        sub     edx, 1
        lea     ecx, [eax + 0x40]
        mov     dword ptr [eax], ecx
        mov     eax, ecx
        jne     L_loop
        mov     dword ptr [edi + 0x3fc0], ebp
    L_have_node:
        cmp     byte ptr [esp + 0x28], 0
        mov     ebp, dword ptr [esi]
        mov     ecx, dword ptr [ebp]
        mov     dword ptr [esi], ecx
        je      L_done
        mov     esi, dword ptr [esp + 0x2c]
        test    esi, esi
        je      L_identity
        mov     ecx, 0x10
        mov     edi, ebp
        rep movsd
        jmp     L_done
    L_identity:
        fld1
        fst     dword ptr [ebp]
        fldz
        fst     dword ptr [ebp + 4]
        fst     dword ptr [ebp + 8]
        fst     dword ptr [ebp + 0xc]
        fst     dword ptr [ebp + 0x10]
        fst     dword ptr [ebp + 0x18]
        fst     dword ptr [ebp + 0x1c]
        fst     dword ptr [ebp + 0x20]
        fst     dword ptr [ebp + 0x24]
        fst     dword ptr [ebp + 0x2c]
        fst     dword ptr [ebp + 0x30]
        fst     dword ptr [ebp + 0x34]
        fstp    dword ptr [ebp + 0x38]
        fst     dword ptr [ebp + 0x14]
        fst     dword ptr [ebp + 0x28]
        fstp    dword ptr [ebp + 0x3c]
    L_done:
        mov     ecx, ebx
        mov     dword ptr [esp + 0x20], -1
        call    ext_0065C650
        mov     ecx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x14
        ret     8
    }
}

extern "C" void ext_0041A920();
extern "C" void ext_00596660();
extern "C" void ext_007C6FF0();
extern "C" int mem_00925134;
extern "C" int mem_009251EC;

// [0x0065B3C0] sub_0065B3C0 (389 bytes)
extern "C" __declspec(naked) void __fastcall fn_0065B3C0(void* self) {
    __asm {
        sub     esp, 0x14
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        push    ebp
        push    esi
        mov     esi, dword ptr [ecx + 0x1c]
        cmp     esi, dword ptr [ecx + 0x20]
        push    edi
        lea     edi, [ecx + 0x18]
        mov     dword ptr [esp + 0x18], ecx
        jbe     L_65b3de
        call    ebx
    L_65b3de:
        mov     ebp, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebp
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x14], ebp
        jbe     L_65b3f0
        call    ebx
    L_65b3f0:
        cmp     edi, edi
        je      L_65b3f6
        call    ebx
    L_65b3f6:
        cmp     esi, ebp
        je      L_65b488
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_65b405
        call    ebx
    L_65b405:
        mov     eax, dword ptr [esi]
        mov     byte ptr [eax + 0x46], 0x0
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_65b412
        call    ebx
    L_65b412:
        mov     esi, dword ptr [esi]
        mov     ebp, dword ptr [esi + 0x50]
        add     esi, 0x48
        cmp     dword ptr [esi + 0x4], ebp
        jbe     L_65b421
        call    ebx
    L_65b421:
        mov     ebx, dword ptr [esi + 0x4]
        cmp     ebx, dword ptr [esi + 0x8]
        jbe     L_65b42f
        call    dword ptr [mem_00925134]
    L_65b42f:
        cmp     ebx, ebp
        je      L_65b461
        mov     eax, dword ptr [esi + 0x8]
        sub     eax, ebp
        sar     eax, 0x2
        test    eax, eax
        lea     ecx, [eax * 4 + 0]
        lea     edx, [ecx + ebx]
        mov     dword ptr [esp + 0x10], edx
        jle     L_65b45a
        push    ecx
        push    ebp
        push    ecx
        push    ebx
        call    dword ptr [mem_009251EC]
        add     esp, 0x10
    L_65b45a:
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x8], eax
    L_65b461:
        mov     ecx, dword ptr [esp + 0x20]
        cmp     ecx, dword ptr [edi + 0x8]
        jb      L_65b470
        call    dword ptr [mem_00925134]
    L_65b470:
        add     dword ptr [esp + 0x20], 0x4
        mov     ebx, dword ptr [mem_00925134]
        mov     ebp, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x20]
        jmp     L_65b3f0
    L_65b488:
        mov     ebp, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebp
        jbe     L_65b492
        call    ebx
    L_65b492:
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        jbe     L_65b49c
        call    ebx
    L_65b49c:
        push    ebp
        push    edi
        push    esi
        push    edi
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, edi
        call    ext_00596660
        mov     eax, dword ptr [esp + 0x18]
        mov     eax, dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x14]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov     ebx, eax
        mov     dword ptr [esp + 0x10], ecx
    L_65b4c7:
        cmp     dword ptr [ebx + 0x1c], 0x0
        je      L_65b533
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [ecx]
        push    edx
        call    ext_007C6FF0
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        mov     dword ptr [esp + 0x1c], esi
        call    ext_007C6FF0
        add     esp, 0x8
        mov     ebp, eax
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esi + 0x48]
        mov     dword ptr [esp + 0x20], ebp
        mov     byte ptr [esi + 0x46], 0x1
        mov     dword ptr [esp + 0x1c], ebp
        call    ext_0041A920
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, edi
        call    ext_0041A920
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [ebp + 0x48]
        mov     byte ptr [ebp + 0x46], 0x1
        mov     dword ptr [esp + 0x1c], esi
        call    ext_0041A920
        lea     edx, [esp + 0x1c]
        push    edx
        mov     ecx, edi
        call    ext_0041A920
    L_65b533:
        add     ebx, 0x20
        sub     dword ptr [esp + 0x10], 0x1
        jne     L_65b4c7
    L_65b53d:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret
    }
}

// [0x00656FF0] sub_00656FF0 (114 bytes)
extern "C" void ext_006542C0();
extern "C" int mem_00924FE4;
extern "C" void ext_00475960();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00656FF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006542C0
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

// [0x00657070] sub_00657070 (114 bytes)
extern "C" void ext_00654320();
extern "C" int mem_00924FE4;
extern "C" void ext_00475960();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657070(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654320
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

// [0x006570F0] sub_006570F0 (114 bytes)
extern "C" void ext_00654380();

extern "C" __declspec(naked) void __fastcall fn_006570F0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654380
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

// [0x00657170] sub_00657170 (114 bytes)
extern "C" void ext_006543E0();

extern "C" __declspec(naked) void __fastcall fn_00657170(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006543E0
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

// [0x006571F0] sub_006571F0 (114 bytes)
extern "C" void ext_00654440();

extern "C" __declspec(naked) void __fastcall fn_006571F0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654440
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

// [0x00657270] sub_00657270 (114 bytes)
extern "C" void ext_006544A0();

extern "C" __declspec(naked) void __fastcall fn_00657270(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006544A0
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

// [0x006572F0] sub_006572F0 (114 bytes)
extern "C" void ext_00654500();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" void ext_00475960();

extern "C" __declspec(naked) void __fastcall fn_006572F0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654500
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

// [0x00657370] sub_00657370 (114 bytes)
extern "C" void ext_00654560();

extern "C" __declspec(naked) void __fastcall fn_00657370(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654560
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

// [0x006573F0] sub_006573F0 (114 bytes)
extern "C" void ext_006545C0();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006573F0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006545C0
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

// [0x00657470] sub_00657470 (114 bytes)
extern "C" void ext_00654620();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657470(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654620
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

// [0x006574F0] sub_006574F0 (114 bytes)
extern "C" void ext_00654680();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006574F0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654680
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

// [0x00657570] sub_00657570 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_006546E0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657570(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006546E0
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

// [0x006575F0] sub_006575F0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00654740();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006575F0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654740
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

// [0x00657670] sub_00657670 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_006547A0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657670(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006547A0
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

// [0x006576F0] sub_006576F0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00654800();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006576F0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654800
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

// [0x00657770] sub_00657770 (114 bytes)
extern "C" void ext_00654860();

extern "C" __declspec(naked) void __fastcall fn_00657770(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654860
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

// [0x006577F0] sub_006577F0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_006548C0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006577F0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006548C0
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

// [0x00657870] sub_00657870 (114 bytes)
extern "C" void ext_00654920();

extern "C" __declspec(naked) void __fastcall fn_00657870(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654920
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

// [0x006578F0] sub_006578F0 (114 bytes)
extern "C" void ext_00654980();

extern "C" __declspec(naked) void __fastcall fn_006578F0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654980
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

// [0x00657970] sub_00657970 (114 bytes)
extern "C" void ext_006549E0();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657970(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006549E0
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

// [0x006579F0] sub_006579F0 (114 bytes)
extern "C" void ext_00654A40();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006579F0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654A40
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

// [0x00657A70] sub_00657A70 (114 bytes)
extern "C" void ext_00654AA0();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657A70(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654AA0
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

// [0x00657AF0] sub_00657AF0 (114 bytes)
extern "C" void ext_00654B00();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657AF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654B00
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

// [0x00657B70] sub_00657B70 (114 bytes)
extern "C" void ext_00654B60();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657B70(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654B60
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

// [0x00657BF0] sub_00657BF0 (114 bytes)
extern "C" void ext_00654BC0();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657BF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654BC0
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

// [0x00657C70] sub_00657C70 (114 bytes)
extern "C" void ext_00654C20();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657C70(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654C20
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

// [0x00657CF0] sub_00657CF0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00654C80();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657CF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654C80
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

// [0x00657D70] sub_00657D70 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00654CE0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657D70(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654CE0
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

// [0x00657DF0] sub_00657DF0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00654D40();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657DF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654D40
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

// [0x00657E70] sub_00657E70 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00654DA0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657E70(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654DA0
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

// [0x00657EF0] sub_00657EF0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00654E00();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657EF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654E00
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

// [0x00657F70] sub_00657F70 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00654E60();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657F70(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654E60
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

// [0x00657FF0] sub_00657FF0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00654EC0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00657FF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654EC0
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

// [0x00658070] sub_00658070 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00654F20();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00658070(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00654F20
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
