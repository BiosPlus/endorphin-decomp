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
