// Decompiled translation unit: src/leaf/decompiled_490000.cpp
#include <string>
#include <stdexcept>
#include <stdlib.h>
#include <vector>

// [0x00493E10] sub_00493E10 (20 bytes)
// Tail-call thunk: stores the byte argument at self+8, forwards self->inner's vfunc[5] with the arg.
extern "C" __declspec(naked) void __fastcall fn_00493E10(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov byte ptr [ecx + 8], al
        mov ecx, dword ptr [ecx]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0x14]
        jmp eax
    }
}

// [0x00494830] sub_00494830 (33 bytes)
// Returns 0 if this->f0C is 0; otherwise (this->f10 - this->f0C) / 28 (signed).
extern "C" int __fastcall fn_00494830(const int* self) {
    int a = self[3];
    if (a == 0) {
        return 0;
    }
    return (self[4] - a) / 28;
}

// [0x004940D0] sub_004940D0 (8 bytes)
// Calls sub_00494050 (ecx preserved across the call), then returns the original this in eax.
extern "C" void ext_00494050();

extern "C" __declspec(naked) void __fastcall fn_004940D0(void* self) {
    __asm {
        call ext_00494050
        mov eax, ecx
        ret
    }
}

// [0x004940E0] sub_004940E0 (24 bytes)
extern "C" void ext_00494060();

extern "C" __declspec(naked) void __fastcall fn_004940E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test dword ptr [ecx], eax
        setne dl
        cmp dl, byte ptr [esp + 0x8]
        je L_done
        push eax
        call ext_00494060
    L_done:
        ret 0x8
    }
}

// [0x00496CE0] sub_00496CE0 (25 bytes)
// __thiscall with ret 4: pushes arg, calls sub_004948C0 (result pushed), then calls sub_00496CC0 with ecx=this.
extern "C" void ext_004948C0();
extern "C" void ext_00496CC0();

extern "C" __declspec(naked) void __fastcall fn_00496CE0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_004948C0
        push eax
        mov ecx, esi
        call ext_00496CC0
        pop esi
        ret 0x4
    }
}

// [0x00496CC0] sub_00496CC0 (26 bytes)
// Stores the stack argument at self+4, calls sub_004966F0(self), then sub_00496220(self).
extern "C" void ext_004966F0();
extern "C" void ext_00496220();

extern "C" __declspec(naked) void __fastcall fn_00496CC0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov dword ptr [esi + 4], eax
        call ext_004966F0
        mov ecx, esi
        call ext_00496220
        pop esi
        ret 4
    }
}

// [0x00491870] sub_00491870 (27 bytes)
extern "C" void ext_00491730();

extern "C" __declspec(naked) void __fastcall fn_00491870(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00491730
        add esp, 0x10
        ret 8
    }
}

// [0x0049F2E0] sub_0049F2E0 (27 bytes)
extern "C" void ext_0049ECB0();
extern "C" __declspec(naked) void __fastcall fn_0049F2E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_0049ECB0
        add esp, 0x10
        ret 0x8
    }
}

// [0x0049CF20] sub_0049CF20 (29 bytes)
extern "C" void* __cdecl ext_006A5C62(unsigned int size);

extern "C" void __fastcall fn_0049CF20(void* self) {
    void* p = ext_006A5C62(0xd4);
    if (p) {
        *(void**)p = p;
    }
    void* q = (char*)p + 4;
    if (q) {
        *(void**)q = p;
    }
}

// [0x0049CF40] sub_0049CF40 (29 bytes)
extern "C" void* __cdecl ext_006A5C62(unsigned int size);

extern "C" void __fastcall fn_0049CF40(void* self) {
    void* p = ext_006A5C62(0x140);
    if (p) {
        *(void**)p = p;
    }
    void* q = (char*)p + 4;
    if (q) {
        *(void**)q = p;
    }
}

// [0x004936C0] sub_004936C0 (29 bytes)
// Zeroes self->[0], [+8], [+0xC], [+0x10], calls sub_00493370 (ecx = this), then tail-jumps to sub_00492610 with ecx = this.
extern "C" void ext_00493370();
extern "C" void ext_00492610();

extern "C" __declspec(naked) void __fastcall fn_004936C0(void* self) {
    __asm {
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        call ext_00493370
        mov ecx, esi
        pop esi
        jmp ext_00492610
    }
}

// [0x0049AD20] sub_0049AD20 (29 bytes)
extern "C" void ext_004A1390();
extern "C" void ext_006A5C5C(void* arg);

extern "C" void __fastcall fn_0049AD20(void* self) {
    ext_004A1390();
    ext_006A5C5C(*(void**)((unsigned char*)self + 4));
    *(void**)((unsigned char*)self + 4) = 0;
}

// [0x0049E910] sub_0049E910 (29 bytes)
extern "C" void ext_0049E8D0();
extern "C" void ext_006A5C5C(void* arg);

extern "C" void __fastcall fn_0049E910(void* self) {
    ext_0049E8D0();
    ext_006A5C5C(*(void**)((unsigned char*)self + 4));
    *(void**)((unsigned char*)self + 4) = 0;
}

// [0x004952F0] sub_004952F0 (35 bytes)
// One-time init: if bit0 of mem_00ADC4E8 is clear, set it and store 0x93EC28 into mem_00ADC4E4.
// Returns the address of mem_00ADC4E4.
extern "C" int mem_00ADC4E8;
extern "C" int mem_00ADC4E4;

extern "C" void* __cdecl fn_004952F0() {
    if (!(mem_00ADC4E8 & 1)) {
        mem_00ADC4E8 |= 1;
        mem_00ADC4E4 = 0x0093EC28;
    }
    return &mem_00ADC4E4;
}

// [0x0049D360] sub_0049D360 (35 bytes)
extern "C" int mem_00ADD820;
extern "C" int mem_00ADD81C;
extern "C" int* __cdecl fn_0049D360() {
    if (!(mem_00ADD820 & 1)) {
        mem_00ADD820 |= 1;
        mem_00ADD81C = 0x93fcc0;
    }
    return &mem_00ADD81C;
}

// [0x00492C30] sub_00492C30 (39 bytes)
extern "C" void* __cdecl fn_00492C30(void* out, int a, float b, float c, float d, float e) {
    struct Out492C30 { int a; float b; float c; float d; float e; };
    Out492C30* o = static_cast<Out492C30*>(out);
    o->b = b;
    o->a = a;
    o->c = c;
    o->d = d;
    o->e = e;
    return out;
}

// [0x00494020] sub_00494020 (39 bytes)
extern "C" int __fastcall fn_00494020(int* self, int edx_unused, int* other) {
    if (self[0] == other[0] && self[1] == other[1] && self[2] == other[2]) {
        return 1;
    } else {
        return 0;
    }
}

// [0x00492A50] sub_00492A50 (40 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) int __fastcall fn_00492A50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_492A61
        call edi
L_492A61:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jb L_492A73
        call edi
        mov eax, dword ptr [esi + 4]
        pop edi
        pop esi
        ret
L_492A73:
        pop edi
        mov eax, ecx
        pop esi
        ret
    }
}

// [0x004970A0] sub_004970A0 (40 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_004970A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0BCh], 0
        je short L_done
        mov eax, dword ptr [esi + 0BCh]
        lea ecx, [eax + 8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        call edx
        push eax
        lea ecx, [esi + 30h]
        call dword ptr [mem_00924FDC]
    L_done:
        pop esi
        ret
    }
}

// [0x0049B310] sub_0049B310 (40 bytes)
extern "C" int mem_00925134;

extern "C" void* __fastcall fn_0049B310(void* self) {
    int* s = static_cast<int*>(self);
    void (*invalid_parameter)() = reinterpret_cast<void (*)()>(mem_00925134);
    if (s[0] == 0) {
        invalid_parameter();
    }
    int* node = reinterpret_cast<int*>(s[1]);
    int eax = node[1];
    int* ecx = reinterpret_cast<int*>(s[0]);
    s[1] = eax;
    if (eax == ecx[1]) {
        invalid_parameter();
    }
    return self;
}

// [0x00497650] sub_00497650 (40 bytes)
extern "C" void ext_0046E780();
extern "C" __declspec(naked) int __stdcall fn_00497650(int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0ch]
        push esi
        mov esi, dword ptr [esp + 0ch]
        push eax
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [eax + 4]
        push eax
        push esi
        mov dword ptr [esp + 10h], 0
        call ext_0046E780
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x0049AD40] sub_0049AD40 (42 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) unsigned char __fastcall fn_0049AD40(void* self, int edx_unused, void* other) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        je call_invalid_0049AD40
        cmp eax, dword ptr [edi]
        je skip_invalid_0049AD40
call_invalid_0049AD40:
        call dword ptr [mem_00925134]
skip_invalid_0049AD40:
        mov eax, dword ptr [esi + 0x4]
        xor ecx, ecx
        cmp eax, dword ptr [edi + 0x4]
        pop edi
        setne cl
        mov al, cl
        pop esi
        ret 0x4
    }
}

// [0x0049B140] sub_0049B140 (42 bytes)
extern "C" int mem_00925134;
struct Node0049B140 { Node0049B140* next; int val; };
struct Ctl0049B140 { Node0049B140* head; int cur; };
extern "C" Ctl0049B140* __fastcall fn_0049B140(Ctl0049B140* self) {
    void (__cdecl *invalid)() = *(void (__cdecl **)())&mem_00925134;
    if (self->head == 0) invalid();
    if (self->cur == self->head->val) invalid();
    Node0049B140* q = (Node0049B140*)self->cur;
    self->cur = (int)q->next;
    return self;
}

// [0x00497860] sub_00497860 (33 bytes)
extern "C" void ext_0046C460();
extern "C" __declspec(naked) void* __fastcall fn_00497860(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0Ch]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push eax
        push esi
        mov dword ptr [esp + 0Ch], 0
        call ext_0046C460
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x004959E0] sub_004959E0 (49 bytes)
typedef int (__cdecl *memmove_s_fn_004959E0)(void*, unsigned int, const void*, unsigned int);
extern "C" memmove_s_fn_004959E0 mem_009251EC;
extern "C" int* __stdcall fn_004959E0(int* first, int* last, int* dest) {
    int n = last - first;
    int* r = dest + n;
    if (n != 0) {
        mem_009251EC(dest, n * 4, first, n * 4);
    }
    return r;
}

// [0x004925D0] sub_004925D0 (52 bytes)
// __thiscall with ret 4. Checks this->f0 == 1; then arg==0 -> (f8 == fC), arg==1 -> (f8 == f10), else 0.
extern "C" __declspec(naked) int __fastcall fn_004925D0(void* self, int edx_unused, int a1) {
    __asm {
        cmp dword ptr [ecx], 1
        je L_a
        xor al, al
        ret 4
    L_a:
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jne L_b
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [ecx + 0xc]
        je L_true
    L_false:
        xor eax, eax
        ret 4
    L_b:
        cmp eax, 1
        jne L_false
        mov edx, dword ptr [ecx + 8]
        cmp edx, dword ptr [ecx + 0x10]
        jne L_false
    L_true:
        mov eax, 1
        ret 4
    }
}

// [0x00490690] sub_00490690 (54 bytes)
extern "C" void* __cdecl fn_00490690(void* first, void* last, void* dest) {
    // copy [first, last) of 8-byte elements to dest, return dest end
    unsigned int* src = (unsigned int*)first;
    unsigned int* end = (unsigned int*)last;
    unsigned int* d = (unsigned int*)dest;
    int count = ((char*)end - (char*)src) >> 3;
    unsigned int* result = d + count * 2;
    if (src != end) {
        do {
            d[0] = src[0];
            d[1] = src[1];
            src += 2;
            d += 2;
        } while (src != end);
    }
    return result;
}

// [0x00492CC0] sub_00492CC0 (55 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00492CC0() {
    __asm {
        push 0x24
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je L_skip0
        mov dword ptr [eax], 0x0
    L_skip0:
        lea ecx, [eax + 0x4]
        test ecx, ecx
        je L_skip1
        mov dword ptr [ecx], 0x0
    L_skip1:
        lea ecx, [eax + 0x8]
        test ecx, ecx
        je L_skip2
        mov dword ptr [ecx], 0x0
    L_skip2:
        mov byte ptr [eax + 0x20], 0x1
        mov byte ptr [eax + 0x21], 0x0
        ret
    }
}

// [0x00493C60] sub_00493C60 (43 bytes)
extern "C" void* ext_00492CC0();
extern "C" void* __fastcall fn_00493C60(void* self) {
    char* esi = (char*)self;
    char* eax = (char*)ext_00492CC0();
    *(char**)(esi + 0x4) = eax;
    eax[0x21] = 1;
    eax = *(char**)(esi + 0x4);
    *(char**)(eax + 0x4) = eax;
    eax = *(char**)(esi + 0x4);
    *(char**)eax = eax;
    eax = *(char**)(esi + 0x4);
    *(char**)(eax + 0x8) = eax;
    *(int*)(esi + 0x8) = 0;
    return esi;
}

// [0x0049BEE0] sub_0049BEE0 (57 bytes)
// __cdecl (ret 0). Walks a singly linked list (next at +0) from node until end, calling vfunc[10] of the
// embedded object at node+8 with a6; stops at the first hit. Writes {a2, found_node} to out.
extern "C" __declspec(naked) void __cdecl fn_0049BEE0(int* out, void* a2, int* node, void* a4, int* end, void* a6) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x24]
        nop
    L_loop:
        cmp esi, ebx
        je L_done
        mov eax, dword ptr [esi + 0x8]
        mov edx, dword ptr [eax + 0x28]
        lea ecx, [esi + 0x8]
        push edi
        call edx
        test al, al
        jne L_done
        mov esi, dword ptr [esi]
        jmp L_loop
    L_done:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov dword ptr [eax + 0x4], esi
        pop esi
        mov dword ptr [eax], ecx
        pop ebx
        ret
    }
}

// [0x0049DBA0] sub_0049DBA0 (57 bytes)
extern "C" __declspec(naked) void __cdecl fn_0049DBA0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x24]
        nop
    loop_top:
        cmp esi, ebx
        je loop_done
        mov eax, dword ptr [esi + 0x10]
        mov edx, dword ptr [eax + 0x28]
        lea ecx, [esi + 0x10]
        push edi
        call edx
        test al, al
        jne loop_done
        mov esi, dword ptr [esi]
        jmp loop_top
    loop_done:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov dword ptr [eax + 0x4], esi
        pop esi
        mov dword ptr [eax], ecx
        pop ebx
        ret
    }
}

// [0x004908A0] sub_004908A0 (59 bytes)
// Returns {value, min} where min is the first-minimum float* in [begin, end) (begin if range < 2).
struct Pair004908A0 { int first; float* second; };
extern "C" Pair004908A0* __cdecl fn_004908A0(Pair004908A0* out, int value, float* begin, int unused_0x10, float* end) {
    float* best = begin;
    if (begin != end && begin + 1 != end) {
        for (float* p = begin + 1; p != end; ++p) {
            if (*p < *best) {
                best = p;
            }
        }
    }
    out->first = value;
    out->second = best;
    return out;
}

// [0x004908E0] sub_004908E0 (59 bytes)
// Returns {value, max} where max is the first-maximum float* in [begin, end) (begin if range < 2).
struct Pair004908E0 { int first; float* second; };
extern "C" Pair004908E0* __cdecl fn_004908E0(Pair004908E0* out, int value, float* begin, int unused_0x10, float* end) {
    float* best = begin;
    if (begin != end && begin + 1 != end) {
        for (float* p = begin + 1; p != end; ++p) {
            if (*best < *p) {
                best = p;
            }
        }
    }
    out->first = value;
    out->second = best;
    return out;
}

// [0x0049DB60] sub_0049DB60 (62 bytes)
// __cdecl find over a singly linked node list: walks from first (node->next at +0) until last,
// stopping at the first node whose string at +0x24 compares equal to key via the imported
// std::string operator== (mem_00924FC4). Writes {first, found} into ret and returns ret.
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void* __cdecl fn_0049DB60(int* ret, int* first, int* last, int a4, int a5, const void* key) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00924FC4]
        push ebp
        mov ebp, dword ptr [esp + 0x1c]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x28]
    loop_top:
        cmp esi, ebp
        je done
        lea eax, [esi + 0x24]
        push edi
        push eax
        call ebx
        add esp, 8
        test al, al
        jne done
        mov esi, dword ptr [esi]
        jmp loop_top
    done:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [eax + 4], esi
        pop esi
        pop ebp
        mov dword ptr [eax], ecx
        pop ebx
        ret
    }
}

// [0x00493720] sub_00493720 (69 bytes)
// __thiscall, ret 4. Compares arg against self->[+8]; on match tests self->[0] and tail-jumps to sub_004936E0 with arg set to 0/1,
// or for self->[0]==2 calls sub_004936C0 and returns.
extern "C" void ext_004936C0();
extern "C" void ext_004936E0();

extern "C" __declspec(naked) void __fastcall fn_00493720(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [ecx + 0x8]
        mov eax, dword ptr [esp + 0x4]
        cmp eax, edx
        jne L493762
        cmp dword ptr [ecx], 0x1
        jne L493754
        cmp eax, dword ptr [ecx + 0xc]
        jne L493742
        mov dword ptr [esp + 0x4], 0x0
        jmp ext_004936E0
    L493742:
        cmp eax, dword ptr [ecx + 0x10]
        jne L493762
        mov dword ptr [esp + 0x4], 0x1
        jmp ext_004936E0
    L493754:
        cmp eax, edx
        jne L493762
        cmp dword ptr [ecx], 0x2
        jne L493762
        call ext_004936C0
    L493762:
        ret 0x4
    }
}

// [0x004976D0] sub_004976D0 (71 bytes)
extern "C" __declspec(naked) bool __fastcall fn_004976D0(void* self, int edx_unused, const float* a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        fld dword ptr [edx]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah, 0x41
        jp SHORT L4976D0_fail
        fld dword ptr [edx]
        fld dword ptr [ecx + 0x8]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne SHORT L4976D0_fail
        fld dword ptr [edx + 0x4]
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah, 0x41
        jp SHORT L4976D0_fail
        fld dword ptr [edx + 0x4]
        fld dword ptr [ecx + 0xc]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne SHORT L4976D0_fail
        mov al, 0x1
        ret 0x4
    L4976D0_fail:
        xor al, al
        ret 0x4
    }
}

// [0x00495A60] sub_00495A60 (77 bytes)
extern "C" void ext_00661980();

extern "C" __declspec(naked) void* __fastcall fn_00495A60(void* self) {
    __asm {
        push -1
        push 0x00886543
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_00661980
        xor eax, eax
        mov dword ptr [esi], 0x0093F0FC
        mov dword ptr [esi + 0xC], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x14], eax
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x1C], eax
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00492A80] sub_00492A80 (78 bytes)
extern "C" void __fastcall fn_00492A80(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0x21) == 0) {
        *(char**)(q + 0x4) = n;
    }
    *(char**)(p + 0x4) = *(char**)(n + 0x4);
    char* c = *(char**)(s + 0x4);
    if (n == *(char**)(c + 0x4)) {
        *(char**)(c + 0x4) = p;
        *(char**)p = n;
        *(char**)(n + 0x4) = p;
        return;
    }
    char* c2 = *(char**)(n + 0x4);
    if (n == *(char**)c2) {
        *(char**)c2 = p;
    } else {
        *(char**)(c2 + 0x8) = p;
    }
    *(char**)p = n;
    *(char**)(n + 0x4) = p;
}

// [0x00492C60] sub_00492C60 (81 bytes)
// Allocates a 0x24-byte record (operator new), fills it from three dword args, a { int, float x4 }
// source block, and a flag byte; returns the record (or NULL if allocation failed). Stdcall, ret 0x14.
extern "C" void* __cdecl ext_006A5C62(unsigned int size);

extern "C" __declspec(naked) void* __stdcall fn_00492C60(int a1, int a2, int a3, const void* src, unsigned char flag) {
    __asm {
        push 0x24
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je done
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x4], edx
        fld dword ptr [ecx + 0x4]
        mov edx, dword ptr [ecx]
        fstp dword ptr [eax + 0x10]
        fld dword ptr [ecx + 0x8]
        mov dword ptr [eax + 0xc], edx
        fstp dword ptr [eax + 0x14]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax + 0x18]
        fld dword ptr [ecx + 0x10]
        mov cl, byte ptr [esp + 0x14]
        fstp dword ptr [eax + 0x1c]
        mov byte ptr [eax + 0x20], cl
        mov byte ptr [eax + 0x21], 0x0
    done:
        ret 0x14
    }
}

// [0x00492AD0] sub_00492AD0 (82 bytes)
extern "C" void __fastcall fn_00492AD0(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0x21] == 0) {
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

// [0x00494940] sub_00494940 (83 bytes)
extern "C" void ext_0065C660();
extern "C" __declspec(naked) void __fastcall fn_00494940(void* self) {
    __asm {
        push -1
        push 0x8b4838
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 0x0
        je skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    skip:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065C660
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00490490] sub_00490490 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADAB78;
extern "C" int mem_00ADAB74;

extern "C" __declspec(naked) void* __fastcall fn_00490490(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88574e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ADAB78], al
        jne L_done
        or dword ptr [mem_00ADAB78], eax
        mov ecx, offset mem_00ADAB74
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00ADAB74], 0x93e7fc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADAB74
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004989F0] sub_004989F0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADD170;
extern "C" int mem_00ADD16C;

extern "C" __declspec(naked) void* __fastcall fn_004989F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x886a8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ADD170], al
        jne L_done
        or dword ptr [mem_00ADD170], eax
        mov ecx, offset mem_00ADD16C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00ADD16C], 0x93f35c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADD16C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00498F90] sub_00498F90 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADD178;
extern "C" int mem_00ADD174;

extern "C" __declspec(naked) void* __fastcall fn_00498F90(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x886aae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ADD178], al
        jne L_done
        or dword ptr [mem_00ADD178], eax
        mov ecx, offset mem_00ADD174
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00ADD174], 0x93f284
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADD174
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0049B3A0] sub_0049B3A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADD7E8;
extern "C" int mem_00ADD7E4;

extern "C" __declspec(naked) void* __fastcall fn_0049B3A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x886f3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ADD7E8], al
        jne L_done
        or dword ptr [mem_00ADD7E8], eax
        mov ecx, offset mem_00ADD7E4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00ADD7E4], 0x93fbec
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADD7E4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0049BE80] sub_0049BE80 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADD7F0;
extern "C" int mem_00ADD7EC;

extern "C" __declspec(naked) void* __fastcall fn_0049BE80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x886f5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ADD7F0], al
        jne L_done
        or dword ptr [mem_00ADD7F0], eax
        mov ecx, offset mem_00ADD7EC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00ADD7EC], 0x93fa3c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADD7EC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00499130] sub_00499130 (87 bytes)
extern "C" void ext_00498F90();
extern "C" int mem_00B599BC;

// Two stack args (out ptr at [esp+4], value at [esp+8] on entry), cdecl, returns out ptr in eax.
// Installs an SEH frame (handler 0x887089), stores zero/global into *out, calls ext_00498F90, then stores result.
extern "C" __declspec(naked) void* __cdecl fn_00499130(void* out, int val) {
    __asm {
        push -1
        push 0x887089
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        xor eax, eax
        mov dword ptr [esp], eax
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0x4], ecx
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x4], 0x1
        call ext_00498F90
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi], edx
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0049D3F0] sub_0049D3F0 (30 bytes)
extern "C" void ext_0049BE80();

extern "C" __declspec(naked) void __fastcall fn_0049D3F0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0049BE80
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0049CC60] sub_0049CC60 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADD810;
extern "C" int mem_00ADD80C;

extern "C" __declspec(naked) void* __fastcall fn_0049CC60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x886fde
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ADD810], al
        jne L_done
        or dword ptr [mem_00ADD810], eax
        mov ecx, offset mem_00ADD80C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00ADD80C], 0x940024
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADD80C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0049CFF0] sub_0049CFF0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADD818;
extern "C" int mem_00ADD814;

extern "C" __declspec(naked) void* __fastcall fn_0049CFF0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x886ffe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ADD818], al
        jne L_done
        or dword ptr [mem_00ADD818], eax
        mov ecx, offset mem_00ADD814
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00ADD814], 0x93fb14
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADD814
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0049DA40] sub_0049DA40 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADD828;
extern "C" int mem_00ADD824;

extern "C" __declspec(naked) void* __fastcall fn_0049DA40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88701e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ADD828], al
        jne L_done
        or dword ptr [mem_00ADD828], eax
        mov ecx, offset mem_00ADD824
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00ADD824], 0x93ff4c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADD824
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0049D390] sub_0049D390 (87 bytes)
// Two stack args (out ptr at [esp+4], value at [esp+8] on entry), cdecl, returns out ptr in eax.
// Installs an SEH frame (handler 0x887089), stores zero/global into *out, calls ext_0049CFF0, then stores result.
extern "C" void ext_0049CFF0();
extern "C" __declspec(naked) void* __cdecl fn_0049D390(void* out, int val) {
    __asm {
        push -1
        push 0x887089
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        xor eax, eax
        mov dword ptr [esp], eax
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0x4], ecx
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x4], 0x1
        call ext_0049CFF0
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi], edx
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0049DAA0] sub_0049DAA0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADD830;
extern "C" int mem_00ADD82C;

extern "C" __declspec(naked) void* __fastcall fn_0049DAA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88703e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ADD830], al
        jne L_done
        or dword ptr [mem_00ADD830], eax
        mov ecx, offset mem_00ADD82C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00ADD82C], 0x9400fc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADD82C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0049DB00] sub_0049DB00 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADD838;
extern "C" int mem_00ADD834;

extern "C" __declspec(naked) void* __fastcall fn_0049DB00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88705e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ADD838], al
        jne L_done
        or dword ptr [mem_00ADD838], eax
        mov ecx, offset mem_00ADD834
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00ADD834], 0x9402ac
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADD834
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0049E4A0] sub_0049E4A0 (30 bytes)
extern "C" void ext_0049DAA0();

extern "C" __declspec(naked) void __fastcall fn_0049E4A0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0049DAA0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0049E4C0] sub_0049E4C0 (30 bytes)
extern "C" void ext_0049DB00();

extern "C" __declspec(naked) void __fastcall fn_0049E4C0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0049DB00
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0049E440] sub_0049E440 (87 bytes)
// Two stack args (out ptr at [esp+4], value at [esp+8] on entry), cdecl, returns out ptr in eax.
// Installs an SEH frame (handler 0x887089), stores zero/global into *out, calls ext_0049DA40, then stores result.
extern "C" void ext_0049DA40();
extern "C" int mem_00B599BC;

extern "C" __declspec(naked) void* __cdecl fn_0049E440(void* out, int val) {
    __asm {
        push -1
        push 0x887089
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        xor eax, eax
        mov dword ptr [esp], eax
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0x4], ecx
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x4], 0x1
        call ext_0049DA40
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi], edx
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00494860] sub_00494860 (88 bytes)
extern "C" void ext_0041CCC0();
extern "C" void ext_00494830();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_00494860(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0x8], 0
        jl L_else_00494860
        call ext_00494830
        sub eax, 1
        cmp edi, eax
        jg L_else_00494860
        push edi
        lea ecx, [esi + 8]
        call ext_0041CCC0
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_else_00494860:
        mov esi, dword ptr [esp + 0x10]
        push 0x928b5d
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x00494070] sub_00494070 (89 bytes)
// Walks a chain starting at 'start': returns the first node whose vfunc[0x14]() & mask == mask,
// else 0. Each step is cur = dynamic_cast<Tgt*>(cur->vfunc[4](0)).
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void* __cdecl fn_00494070(unsigned int mask, void* start) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        xor ebx, ebx
        test esi, esi
        je null_exit
        push edi
        mov edi, dword ptr [esp + 0x10]
loop_top:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x50]
        mov ecx, esi
        call edx
        and eax, edi
        cmp eax, edi
        je found
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x10]
        push 0
        push 0xa2e2d8
        push 0xa2e2f8
        push 0
        push 0
        mov ecx, esi
        call edx
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jne loop_top
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret
found:
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret
null_exit:
        pop esi
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x00497720] sub_00497720 (91 bytes)
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_00497720(void* self, int edx_unused, float* out, const float* in) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x18]
        fld dword ptr [eax]
        fsub dword ptr [ecx]
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        mov eax, dword ptr [esp + 0x14]
        fsub dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp]
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp]
        fmul dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [ecx]
        fadd dword ptr [esp]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x4]
        fadd dword ptr [ecx + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [eax], ecx
        fstp dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x4], edx
        add esp, 0x10
        ret 8
    }
}

// [0x00495A20] sub_00495A20 (60 bytes)
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00495A20(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x18]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe skip_a
        call ebp
    skip_a:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe skip_b
        call ebp
    skip_b:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00497830] sub_00497830 (33 bytes)
extern "C" void ext_0046C500();

extern "C" __declspec(naked) void* __fastcall fn_00497830(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0Ch]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push eax
        push esi
        mov dword ptr [esp + 0Ch], 0
        call ext_0046C500
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x00497890] sub_00497890 (98 bytes)
// SEH-framed (handler 0x008A28D3): saves esi=first stack arg, calls sub_004276B0(esi, &arg2),
// then runs the std::string dtor on arg2 (state 1), restores the SEH chain and returns esi.
extern "C" void ext_004276B0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00497890(void* self) {
    __asm {
        push -1
        push 0x8a28d3
        mov eax, dword ptr fs:[0]
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
        mov dword ptr [esp + 0x4], 0
        mov esi, dword ptr [esp + 0x18]
        lea eax, [esp + 0x1c]
        push eax
        push esi
        mov dword ptr [esp + 0x18], 1
        call ext_004276B0
        add esp, 0x8
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x4], 1
        mov byte ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        _emit 0x64
        _emit 0x89
        _emit 0x0D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        add esp, 0x10
        ret
    }
}

// [0x00493F80] sub_00493F80 (106 bytes)
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00493F80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x0
        je done
        push 0x928b5d
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xa4]
        lea edx, [esp + 0x4]
        push edx
        mov dword ptr [esp + 0x2c], 0x0
        call eax
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
    done:
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00490920] sub_00490920 (59 bytes)
extern "C" void ext_0048EF80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00490920(void* self) {
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
        jbe m490920_ok1
        call ebp
    m490920_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m490920_ok2
        call ebp
    m490920_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0048EF80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00490810] sub_00490810 (69 bytes)
extern "C" void ext_0048FC00();
extern "C" __declspec(naked) void __fastcall fn_00490810(void* self) {
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
        call ext_0048FC00
        add esp, 0x18
        sub esi, ebx
        sar esi, 3
        lea eax, [edi + 8*esi]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00495AB0] sub_00495AB0 (107 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_0065F440();

extern "C" __declspec(naked) void __fastcall fn_00495AB0(void* self) {
    __asm {
        push -1
        push 0x891e68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x93f0fc
        mov eax, dword ptr [esi + 0x1c]
        xor edi, edi
        cmp eax, edi
        mov dword ptr [esp + 0x14], edi
        je L_00495AEA
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_00495AEA:
        lea ecx, [esi + 0x8]
        mov dword ptr [esi + 0x1c], edi
        mov dword ptr [esi + 0x20], edi
        mov dword ptr [esi + 0x24], edi
        call ext_004026E0
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065F440
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00492BC0] sub_00492BC0 (108 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00492BC0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_skip_call_00492BC0
        call edi
    L_skip_call_00492BC0:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 21h], 0
        je L_not_nil_00492BC0
        call edi
        pop edi
        pop esi
        ret
    L_not_nil_00492BC0:
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 21h], 0
        jne L_right_nil_00492BC0
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 21h], 0
        jne L_store_left_00492BC0
    L_leftmost_loop_00492BC0:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 21h], 0
        je L_leftmost_loop_00492BC0
    L_store_left_00492BC0:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
    L_right_nil_00492BC0:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 21h], 0
        jne L_store_parent_00492BC0
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_parent_loop_00492BC0:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jne L_store_parent_00492BC0
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 21h], 0
        je L_parent_loop_00492BC0
    L_store_parent_00492BC0:
        pop edi
        mov dword ptr [esi + 4], eax
        pop esi
        ret
    }
}

// [0x004939B0] sub_004939B0 (111 bytes)
// SEH-guarded constructor-style routine: installs an EH frame, initialises two
// subobjects (+0x50, +0x30) via sub_006A6D5C, then destroys the std::string at +0x14.
extern "C" void ext_006A6D5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004939B0(void* self) {
    __asm {
        push -1
        push 0x885be2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        push 0x493970
        push 2
        push 0xc
        lea eax, [esi + 0x50]
        push eax
        mov dword ptr [esp + 0x20], 1
        call ext_006A6D5C
        push 0x436f30
        push 2
        push 0x10
        lea ecx, [esi + 0x30]
        push ecx
        mov byte ptr [esp + 0x20], 0
        call ext_006A6D5C
        lea ecx, [esi + 0x14]
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0049ACB0] sub_0049ACB0 (112 bytes)
extern "C" __declspec(naked) int __fastcall fn_0049ACB0(float* self) {
    __asm {
        fldz
        fcom dword ptr [ecx]
        fnstsw ax
        test ah, 0x41
        jp L_0049ACB0_f1b
        fld1
        fcom dword ptr [ecx]
        fnstsw ax
        test ah, 0x1
        jne L_0049ACB0_f19
        fxch st(1)
        fcom dword ptr [ecx + 0x4]
        fnstsw ax
        test ah, 0x41
        jp L_0049ACB0_f12
        fxch st(1)
        fcom dword ptr [ecx + 0x4]
        fnstsw ax
        test ah, 0x1
        jne L_0049ACB0_f19
        fxch st(1)
        fcom dword ptr [ecx + 0x8]
        fnstsw ax
        test ah, 0x41
        jp L_0049ACB0_f12
        fxch st(1)
        fcom dword ptr [ecx + 0x8]
        fnstsw ax
        test ah, 0x1
        jne L_0049ACB0_f19
        fxch st(1)
        fcomp dword ptr [ecx + 0xc]
        fnstsw ax
        test ah, 0x41
        jp L_0049ACB0_f1b
        fcomp dword ptr [ecx + 0xc]
        fnstsw ax
        test ah, 0x1
        jne L_0049ACB0_f1d
        mov eax, 1
        ret
L_0049ACB0_f12:
        fstp st(1)
        xor eax, eax
        fstp st(0)
        ret
L_0049ACB0_f19:
        fstp st(0)
L_0049ACB0_f1b:
        fstp st(0)
L_0049ACB0_f1d:
        xor eax, eax
        ret
    }
}

// [0x0049B170] sub_0049B170 (112 bytes)
// Builds a local empty std::string (SEH-guarded) and returns s == "true" || s == "TRUE".
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0049B170(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x881709
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        push esi
        mov esi, dword ptr [mem_00924FC0]
        lea eax, [esp + 0x18]
        push 0x92f10c
        xor ebx, ebx
        push eax
        mov dword ptr [esp + 0x18], ebx
        call esi
        add esp, 8
        test al, al
        jne set_true
        lea ecx, [esp + 0x18]
        push 0x93a810
        push ecx
        call esi
        add esp, 8
        test al, al
        je cleanup
    set_true:
        mov bl, 1
    cleanup:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov al, bl
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x0049E2F0] sub_0049E2F0 (116 bytes)
// __thiscall (ret 4): scans the vector<T*> at this+0x4 (begin) / this+0x8 (end) and returns the
// first element whose vfunc_9() result compares equal (basic_string operator==) to the argument.
// Returns NULL if none matches. Out-of-range iterator checks call _invalid_parameter_noinfo.
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) void* __fastcall fn_0049E2F0(void* self, int edx_unused, const void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_0049E304
        call dword ptr [mem_00925134]
    L_0049E304:
        mov ebp, dword ptr [esp + 0x14]
    L_0049E308:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_0049E316
        call dword ptr [mem_00925134]
    L_0049E316:
        cmp esi, ebx
        je L_0049E35B
    L_0049E31A:
        cmp esi, dword ptr [edi + 0x8]
        mov ebx, dword ptr [mem_00925134]
        jb L_0049E327
        call ebx
    L_0049E327:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push ebp
        call edx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        jne L_0049E34B
        cmp esi, dword ptr [edi + 0x8]
        jb L_0049E346
        call ebx
    L_0049E346:
        add esi, 0x4
        jmp L_0049E308
    L_0049E34B:
        cmp esi, dword ptr [edi + 0x8]
        jb L_0049E352
        call ebx
    L_0049E352:
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    L_0049E35B:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
    }
}

// [0x00495460] sub_00495460 (36 bytes)
extern "C" void ext_00427A60();
extern "C" __declspec(naked) void* __fastcall fn_00495460(int* self, int edx_unused, const int* src) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 4], edx
        mov eax, dword ptr [eax + 8]
        mov ecx, esi
        mov dword ptr [esi + 8], eax
        call ext_00427A60
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x0049ED70] sub_0049ED70 (117 bytes)
extern "C" int mem_00925134;
extern "C" void ext_0049DB60();
extern "C" __declspec(naked) void __fastcall fn_0049ED70(void* self) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp+0xc]
        push ebp
        push esi
        push edi
        lea esi, [ecx+0xdc]
        mov ecx, dword ptr [esi+4]
        push edx
        push ecx
        mov eax, ecx
        mov eax, dword ptr [eax]
        push esi
        push eax
        mov dword ptr [esp+0x20], eax
        lea eax, [esp+0x1c]
        push esi
        push eax
        call ext_0049DB60
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [eax+4]
        mov ebp, dword ptr [mem_00925134]
        add esp, 0x18
        cmp esi, ecx
        je L_ED70_a
        call ebp
L_ED70_a:
        test esi, esi
        push ebx
        mov ebx, dword ptr [esi+4]
        je L_ED70_b
        cmp esi, esi
        je L_ED70_c
L_ED70_b:
        call ebp
L_ED70_c:
        cmp edi, ebx
        pop ebx
        je L_ED70_d
        test esi, esi
        jne L_ED70_e
        call ebp
L_ED70_e:
        cmp edi, dword ptr [esi+4]
        jne L_ED70_f
        call ebp
L_ED70_f:
        lea eax, [edi+8]
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 4
L_ED70_d:
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 8
        ret 4
    }
}

// [0x0049F040] sub_0049F040 (117 bytes)
extern "C" int mem_00925134;
extern "C" void ext_0049DBA0();
extern "C" __declspec(naked) void __fastcall fn_0049F040(void* self) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp+0xc]
        push ebp
        push esi
        push edi
        lea esi, [ecx+0xdc]
        mov ecx, dword ptr [esi+4]
        push edx
        push ecx
        mov eax, ecx
        mov eax, dword ptr [eax]
        push esi
        push eax
        mov dword ptr [esp+0x20], eax
        lea eax, [esp+0x1c]
        push esi
        push eax
        call ext_0049DBA0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [eax+4]
        mov ebp, dword ptr [mem_00925134]
        add esp, 0x18
        cmp esi, ecx
        je L_F040_a
        call ebp
L_F040_a:
        test esi, esi
        push ebx
        mov ebx, dword ptr [esi+4]
        je L_F040_b
        cmp esi, esi
        je L_F040_c
L_F040_b:
        call ebp
L_F040_c:
        cmp edi, ebx
        pop ebx
        je L_F040_d
        test esi, esi
        jne L_F040_e
        call ebp
L_F040_e:
        cmp edi, dword ptr [esi+4]
        jne L_F040_f
        call ebp
L_F040_f:
        lea eax, [edi+8]
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 4
L_F040_d:
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 8
        ret 4
    }
}

extern "C" int mem_00924FDC;
extern "C" int mem_00ADCB28;
extern "C" void ext_0049ED70();
extern "C" void ext_004A2510();

// [0x00497030] sub_00497030 (82 bytes)
extern "C" __declspec(naked) void __fastcall fn_00497030(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        lea ecx, [esi + 0x30]
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esi + 0xb8]
        test eax, eax
        mov dword ptr [esi + 0xbc], 0x0
        je L_497030_tail
        mov ecx, dword ptr [eax + 0xfc]
        test ecx, ecx
        push edi
        jne L_497030_call
        mov ecx, eax
L_497030_call:
        call ext_0049ED70
        mov dword ptr [esi + 0xbc], eax
L_497030_tail:
        mov ecx, dword ptr [mem_00ADCB28]
        test ecx, ecx
        pop edi
        pop esi
        je L_497030_ret
        call ext_004A2510
L_497030_ret:
        ret 0x4
    }
}

// [0x0049F0C0] sub_0049F0C0 (117 bytes)
extern "C" int mem_00925134;
extern "C" void ext_0049BEE0();
extern "C" __declspec(naked) void __fastcall fn_0049F0C0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp+0xc]
        push ebp
        push esi
        push edi
        lea esi, [ecx+0xc4]
        mov ecx, dword ptr [esi+4]
        push edx
        push ecx
        mov eax, ecx
        mov eax, dword ptr [eax]
        push esi
        push eax
        mov dword ptr [esp+0x20], eax
        lea eax, [esp+0x1c]
        push esi
        push eax
        call ext_0049BEE0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [eax+4]
        mov ebp, dword ptr [mem_00925134]
        add esp, 0x18
        cmp esi, ecx
        je L_F0C0_a
        call ebp
L_F0C0_a:
        test esi, esi
        push ebx
        mov ebx, dword ptr [esi+4]
        je L_F0C0_b
        cmp esi, esi
        je L_F0C0_c
L_F0C0_b:
        call ebp
L_F0C0_c:
        cmp edi, ebx
        pop ebx
        je L_F0C0_ret0
        test esi, esi
        jne L_F0C0_d
        call ebp
L_F0C0_d:
        cmp edi, dword ptr [esi+4]
        jne L_F0C0_e
        call ebp
L_F0C0_e:
        lea eax, [edi+8]
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 4
L_F0C0_ret0:
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 8
        ret 4
    }
}

// [0x0049ECB0] sub_0049ECB0 (120 bytes)
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_0049ECB0(void* first, void* last) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b2fe9
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        cmp esi, edi
        je L_0049ED17
        jmp L_0049ECE0
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_0049ECE0:
        cmp dword ptr [esi + 0x20], 0x0
        lea eax, [esi + 0x1c]
        mov dword ptr [esp + 0x10], 0x0
        je L_0049ECFC
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
    L_0049ECFC:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        add esi, 0x24
        cmp esi, edi
        mov dword ptr [esp + 0x18], esi
        jne L_0049ECE0
    L_0049ED17:
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x0049EFC0] sub_0049EFC0 (120 bytes)
extern "C" void ext_004970A0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0049EFC0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr [edi + 0xd4]
        mov eax, ebx
        mov esi, dword ptr [eax]
    L_loop1:
        cmp esi, ebx
        je short L_loop1_done
        lea ecx, [esi + 8]
        call ext_004970A0
        mov esi, dword ptr [esi]
        jmp short L_loop1
    L_loop1_done:
        mov ecx, dword ptr [edi + 0xe0]
        mov ebx, dword ptr [ecx]
        lea ebp, [edi + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0xff
    L_outer:
        cmp ebp, ebp
        mov esi, dword ptr [ebp + 4]
        je short L_outer_ok
        call dword ptr [mem_00925134]
    L_outer_ok:
        cmp ebx, esi
        je short L_done
        cmp ebx, dword ptr [ebp + 4]
        jne short L_inner_setup
        call dword ptr [mem_00925134]
    L_inner_setup:
        mov edi, dword ptr [ebx + 0xd0]
        mov esi, dword ptr [edi]
    L_loop2:
        cmp esi, edi
        je short L_loop2_done
        lea ecx, [esi + 8]
        call ext_004970A0
        mov esi, dword ptr [esi]
        jmp short L_loop2
    L_loop2_done:
        cmp ebx, dword ptr [ebp + 4]
        jne short L_next
        call dword ptr [mem_00925134]
    L_next:
        mov ebx, dword ptr [ebx]
        jmp short L_outer
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0049F490] sub_0049F490 (77 bytes)
extern "C" void ext_0049ED70();
extern "C" void ext_0049EFC0();
extern "C" int mem_00924FC4;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_0049F490(void* self, int edx_unused, void* arg) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi + 0x1c]
        push edi
        push ebx
        call dword ptr [mem_00924FC4]
        add esp, 8
        test al, al
        jne done
        mov ecx, dword ptr [esi + 0xfc]
        test ecx, ecx
        je assign
        push ebx
        call ext_0049ED70
        test eax, eax
        jne done
    assign:
        push ebx
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [esi + 0xfc]
        test ecx, ecx
        je done
        call ext_0049EFC0
    done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00497530] sub_00497530 (122 bytes)
// Line through (a1,a2),(a3,a4): stores slope m, intercept b, and a type code
// (0 = general, 1 = horizontal, 2 = vertical). Returns self.
struct Line00497530 { float m; float b; int type; };
extern "C" __declspec(naked) Line00497530* __fastcall fn_00497530(Line00497530* self, int edx_unused, float a1, float a2, float a3, float a4) {
    __asm {
        push ecx
        fld dword ptr [esp+10h]
        mov dword ptr [ecx+8], 0
        fld st(0)
        fsub dword ptr [esp+8]
        fstp dword ptr [esp]
        fldz
        fld st(0)
        fld dword ptr [esp]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 44h
        jp L_756b
        fstp st(0)
        mov dword ptr [ecx+8], 2
        fstp dword ptr [ecx]
        mov eax, ecx
        fstp dword ptr [ecx+4]
        pop ecx
        ret 10h
    L_756b:
        fld dword ptr [esp+14h]
        fld st(0)
        fsub dword ptr [esp+0ch]
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fucom st(3)
        fnstsw ax
        fstp st(3)
        test ah, 44h
        jp L_758f
        mov dword ptr [ecx+8], 1
    L_758f:
        fxch st(2)
        mov eax, ecx
        _emit 0xde
        _emit 0xf1
        fstp dword ptr [esp+10h]
        fld dword ptr [esp+10h]
        fst dword ptr [ecx]
        _emit 0xde
        _emit 0xca
        _emit 0xde
        _emit 0xe1
        fstp dword ptr [ecx+4]
        pop ecx
        ret 10h
    }
}

// [0x00490960] sub_00490960 (122 bytes)
extern "C" void ext_0048A120();
extern "C" void ext_0048FC00();
extern "C" __declspec(naked) void __fastcall fn_00490960(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        test esi, esi
        push edi
        mov edi, ecx
        je invalid_00490960
        cmp esi, dword ptr [esp + 0x24]
        je ok_00490960
    invalid_00490960:
        call dword ptr [mem_00925134]
    ok_00490960:
        mov ebp, dword ptr [esp + 0x20]
        mov ebx, dword ptr [esp + 0x28]
        cmp ebp, ebx
        je done_00490960
        mov edx, dword ptr [esp + 0x18]
        mov esi, dword ptr [edi + 0x8]
        mov byte ptr [esp + 0x24], 0x0
        mov eax, dword ptr [esp + 0x24]
        push eax
        mov byte ptr [esp + 0x14], 0x0
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push edx
        push ebp
        push esi
        push ebx
        call ext_0048FC00
        mov eax, dword ptr [edi + 0x8]
        sub esi, ebx
        push edi
        sar esi, 0x3
        push eax
        lea esi, [ebp + 8*esi]
        push esi
        call ext_0048A120
        mov dword ptr [edi + 0x8], esi
        mov esi, dword ptr [esp + 0x40]
        add esp, 0x24
    done_00490960:
        mov eax, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        pop ebx
        pop ecx
        ret 0x14
    }
}

// [0x00490B80] sub_00490B80 (59 bytes)
extern "C" void ext_00490960();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00490B80(void* self) {
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
        jbe m490b80_ok1
        call ebp
    m490b80_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m490b80_ok2
        call ebp
    m490b80_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00490960
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00497800] sub_00497800 (36 bytes)
extern "C" void ext_0046C390();
extern "C" __declspec(naked) void* __cdecl fn_00497800(void* a1, float a2) {
    __asm {
        push ecx
        fld dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        fstp dword ptr [esp]
        push esi
        mov dword ptr [esp + 0xc], 0x0
        call ext_0046C390
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x00494FF0] sub_00494FF0 (35 bytes)
extern "C" void ext_00661680();

extern "C" __declspec(naked) void* __fastcall fn_00494FF0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push 1
        mov ecx, esi
        mov dword ptr [esp + 0xc], 0
        call ext_00661680
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0049FB70] sub_0049FB70 (126 bytes)
extern "C" void ext_0049D3F0();
extern "C" void ext_0049E4A0();
extern "C" void ext_0049E4C0();
extern "C" void ext_00671F30();
extern "C" void* __cdecl fn_0049FB70(void* a, void* obj, int code) {
    volatile int tmp = 0;
    switch (code) {
    case 0x257:
        if (((char*)obj)[0x64] != 0) {
            ((void (__cdecl*)(void*, void*))ext_0049E4C0)(a, obj);
            return a;
        }
        break;
    case 0x2d4:
        ((void (__cdecl*)(void*, void*))ext_0049E4A0)(a, obj);
        return a;
    case 0x386:
        ((void (__cdecl*)(void*, void*))ext_0049D3F0)(a, obj);
        return a;
    }
    ((void (__cdecl*)(void*))ext_00671F30)(a);
    return a;
}

// [0x004948C0] sub_004948C0 (127 bytes)
extern "C" void ext_00494830();
extern "C" int mem_00924FC4;
extern "C" int mem_00925134;
extern "C" __declspec(naked) int __fastcall fn_004948C0(void* self, int edx_unused, const void* key) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        or ebx, -1
        call ext_00494830
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        jle empty
        xor ebx, ebx
    loop_top:
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        je inv
        mov ecx, dword ptr [esi + 0x10]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb ok
    inv:
        call dword ptr [mem_00925134]
    ok:
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esp + 0x14]
        add eax, ebx
        push ecx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 8
        test al, al
        jne found
        add edi, 1
        add ebx, 0x1c
        cmp edi, ebp
        jl loop_top
        pop edi
        pop esi
        pop ebp
        or eax, -1
        pop ebx
        ret 4
    found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    empty:
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
    }
}

// [0x0049BF70] sub_0049BF70 (128 bytes)
extern "C" int ext_006A6DE0();
extern "C" int mem_00924FF0;
extern "C" int mem_009251F0;
extern "C" int mem_00993828;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) int __cdecl fn_0049BF70(void) {
    __asm {
        push -1
        push 0x881709
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 4]
        fldz
        add esp, 4
        fld dword ptr [esp]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 1
        jne neg_path
        fadd qword ptr [mem_00993828]
        jmp call_path
neg_path:
        fsub qword ptr [mem_00993828]
call_path:
        push esi
        call ext_006A6DE0
        lea ecx, [esp + 0x18]
        mov esi, eax
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004906D0] sub_004906D0 (129 bytes)
extern "C" __declspec(naked) void* __cdecl fn_004906D0(void* out, const void* src_first, const void* src_last, void* buf, void* dest) {
    __asm {
        sub esp, 0x8
        push ebp
        mov ebp, dword ptr [esp + 0x20]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        sub esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x24]
        sar esi, 0x2
        test edi, edi
        mov dword ptr [esp + 0x10], ebp
        jne L_004906F7
        call dword ptr [mem_00925134]
    L_004906F7:
        push ebx
        lea ebx, [4*esi]
        mov dword ptr [esp + 0x24], ebx
        add ebx, ebp
        cmp ebx, dword ptr [edi + 0x8]
        ja L_0049070F
        cmp ebx, dword ptr [edi + 0x4]
        jae L_00490715
    L_0049070F:
        call dword ptr [mem_00925134]
    L_00490715:
        test esi, esi
        mov ebp, dword ptr [esp + 0x1c]
        mov dword ptr [ebp + 0x4], ebx
        mov dword ptr [ebp], edi
        pop ebx
        jle L_00490748
        mov esi, dword ptr [esp + 0x28]
        cmp esi, dword ptr [edi + 0x8]
        jb L_00490733
        call dword ptr [mem_00925134]
    L_00490733:
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        push eax
        push esi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L_00490748:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        add esp, 0x8
        ret
    }
}

// [0x00490860] sub_00490860 (53 bytes)
extern "C" void ext_004906D0();
extern "C" __declspec(naked) void* __cdecl fn_00490860(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        push edx
        mov edx, dword ptr [esp + 0x24]
        push eax
        mov eax, dword ptr [esp + 0x20]
        push ecx
        push edx
        push eax
        push esi
        call ext_004906D0
        add esp, 0x20
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00492B30] sub_00492B30 (132 bytes)
extern "C" __declspec(naked) void __fastcall fn_00492B30(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_00492B41
        call edi
    L_00492B41:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x21], 0
        je L_00492B5B
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], eax
        cmp byte ptr [eax + 0x21], 0
        je L_00492BB1
    L_00492B56:
        call edi
        pop edi
        pop esi
        ret
    L_00492B5B:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x21], 0
        jne L_00492B81
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x21], 0
        jne L_00492B7B
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_00492B70:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x21], 0
        je L_00492B70
    L_00492B7B:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_00492B81:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x21], 0
        jne L_00492BA5
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_00492B90:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax]
        jne L_00492BA5
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x21], 0
        je L_00492B90
    L_00492BA5:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x21], 0
        jne L_00492B56
        mov dword ptr [esi + 0x4], eax
    L_00492BB1:
        pop edi
        pop esi
        ret
    }
}

// [0x004974E0] sub_004974E0 (79 bytes)
extern "C" void ext_0046C0A0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9FAE8;
extern "C" int mem_00A9FAEC;

extern "C" __declspec(naked) void __fastcall fn_004974E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9FAE8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        push esi
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        mov edx, dword ptr [mem_00A9FAEC]
        add esp, 8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        add esi, 4
        push esi
        call ext_0046C0A0
        add esp, 8
        pop edi
        pop esi
        ret 4
    }
}

// [0x004950B0] sub_004950B0 (135 bytes)
// Returns a std::string by value (hidden return buffer is the first stack arg, ret 0x8).
// Initializes the buffer from "" via the imported basic_string(const char*) ctor, then if
// 0 <= idx < sub_00494830(self), assigns the element at self+8[idx] into the buffer.
extern "C" void ext_0041CCC0();
extern "C" void ext_00494830();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __fastcall fn_004950B0(void* self, int edx_unused, void* out, int idx) {
    __asm {
        push -1
        push 0x8864ea
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [esp + 0xc], 0x0
        mov esi, dword ptr [esp + 0x20]
        mov edi, ecx
        push 0x928b5d
        mov ecx, esi
        mov dword ptr [esp + 0x1c], 0x0
        call dword ptr [mem_00924FE4]
        mov ebx, dword ptr [esp + 0x24]
        test ebx, ebx
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0xc], 0x1
        jl short L_004950B0_done
        mov ecx, edi
        call ext_00494830
        cmp ebx, eax
        jge short L_004950B0_done
        push ebx
        lea ecx, [edi + 0x8]
        call ext_0041CCC0
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FDC]
L_004950B0_done:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x0049CE90] sub_0049CE90 (137 bytes)
extern "C" __declspec(naked) void __fastcall fn_0049CE90(void* self, int edx_unused, float* out, const float* b) {
    __asm {
        sub esp, 8
        mov eax, dword ptr [esp + 0x10]
        fld dword ptr [ecx + 0x4]
        fadd dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ecx + 0x8]
        fadd dword ptr [eax]
        fstp dword ptr [esp]
        fld dword ptr [ecx + 0xc]
        fadd dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fadd dword ptr [ecx]
        mov ecx, dword ptr [esp + 0xc]
        fstp dword ptr [ecx]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [esp]
        fst dword ptr [ecx + 0x8]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [ecx + 0xc]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne short L_CE90_a
        fld dword ptr [ecx]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [ecx]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx + 0x8]
L_CE90_a:
        fld dword ptr [ecx + 0x4]
        fld dword ptr [ecx + 0xc]
        fcompp
        fnstsw ax
        test ah, 0x5
        mov eax, ecx
        jp short L_CE90_b
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx + 0xc]
L_CE90_b:
        add esp, 8
        ret 8
    }
}

// [0x0049B400] sub_0049B400 (146 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_0049B400(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
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
        push 0xa354c8
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esi], 0x93fcf8
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

// [0x004973B0] sub_004973B0 (149 bytes)
extern "C" void ext_0046C0A0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F75C;
extern "C" int mem_00A9FA2C;
extern "C" int mem_00A9F920;
extern "C" int mem_00A9F4BC;
extern "C" __declspec(naked) void __fastcall fn_004973B0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F75C]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        push esi
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        mov edx, dword ptr [mem_00A9FA2C]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi + 0x4]
        push ecx
        call ext_0046C0A0
        mov edx, dword ptr [mem_00A9F920]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi + 0x8]
        push ecx
        call ext_0046C0A0
        mov edx, dword ptr [mem_00A9F4BC]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        add esi, 0xc
        push esi
        call ext_0046C0A0
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00494310] sub_00494310 (153 bytes)
// Copies arg1, runs sub_00664ED0 on the copy, then returns copy.find("." + arg2, 0).
extern "C" void ext_00664ED0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FCC;
extern "C" int mem_00924FB4;
extern "C" int mem_00924FF4;
extern "C" int mem_0092AB70;

extern "C" __declspec(naked) std::string::size_type __cdecl fn_00494310(const std::string& a, const std::string& b) {
    __asm {
        push -1
        push 0x8848f2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        mov eax, dword ptr [esp + 0x48]
        push esi
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x4]
        push ecx
        mov dword ptr [esp + 0x48], 0x0
        call ext_00664ED0
        mov edx, dword ptr [esp + 0x54]
        push edx
        lea eax, [esp + 0x28]
        push offset mem_0092AB70
        push eax
        call dword ptr [mem_00924FCC]
        add esp, 0x10
        push 0x0
        push eax
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x4c], 0x1
        call dword ptr [mem_00924FB4]
        lea ecx, [esp + 0x20]
        mov esi, eax
        mov byte ptr [esp + 0x44], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x44], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x3c]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret
    }
}

// [0x0049D050] sub_0049D050 (154 bytes)
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" __declspec(naked) void __fastcall fn_0049D050(void* self, int edx_unused, int n) {
    __asm {
        mov eax, dword ptr fs:[0]
        mov edx, dword ptr [esp + 4]
        push -1
        push 0x88f4c2
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [ecx + 8]
        sub esp, 0x44
        push esi
        mov esi, 0x1414141
        sub esi, eax
        cmp esi, edx
        pop esi
        jae L_ok_0049D050
        push 0x92fa58
        lea ecx, [esp + 4]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x4c], 0
        call dword ptr [mem_009251C4]
        lea eax, [esp]
        push eax
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x50], 1
        mov dword ptr [esp + 0x20], 0x928ecc
        call dword ptr [mem_00924FE0]
        push 0x9cdf20
        lea ecx, [esp + 0x20]
        push ecx
        mov byte ptr [esp + 0x54], 0
        mov dword ptr [esp + 0x24], 0x928ed8
        call ext_006A6DD2
    L_ok_0049D050:
        add eax, edx
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [esp + 0x44]
        mov dword ptr fs:[0], ecx
        add esp, 0x50
        ret 4
    }
}

// [0x0049D0F0] sub_0049D0F0 (154 bytes)
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" __declspec(naked) void __fastcall fn_0049D0F0(void* self, int edx_unused, int n) {
    __asm {
        mov eax, dword ptr fs:[0]
        mov edx, dword ptr [esp + 4]
        push -1
        push 0x88f4c2
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [ecx + 8]
        sub esp, 0x44
        push esi
        mov esi, 0xd20d20
        sub esi, eax
        cmp esi, edx
        pop esi
        jae L_ok_0049D0F0
        push 0x92fa58
        lea ecx, [esp + 4]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x4c], 0
        call dword ptr [mem_009251C4]
        lea eax, [esp]
        push eax
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x50], 1
        mov dword ptr [esp + 0x20], 0x928ecc
        call dword ptr [mem_00924FE0]
        push 0x9cdf20
        lea ecx, [esp + 0x20]
        push ecx
        mov byte ptr [esp + 0x54], 0
        mov dword ptr [esp + 0x24], 0x928ed8
        call ext_006A6DD2
    L_ok_0049D0F0:
        add eax, edx
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [esp + 0x44]
        mov dword ptr fs:[0], ecx
        add esp, 0x50
        ret 4
    }
}

// [0x00492480] sub_00492480 (157 bytes)
extern "C" void ext_0056B670();

extern "C" __declspec(naked) void __fastcall fn_00492480(void* self) {
    __asm {
        fld qword ptr [esp + 0x14]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x1c]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [ecx]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        je fn_00492480_fail
        fld qword ptr [esp + 0x14]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x20]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x4]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        je fn_00492480_fail
        fld qword ptr [esp + 0x14]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x24]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x8]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        je fn_00492480_fail
        fld qword ptr [esp + 0x14]
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x28]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [ecx + 0xc]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        je fn_00492480_fail
        mov al, 1
        ret 0x18
    fn_00492480_fail:
        xor al, al
        ret 0x18
    }
}

// [0x00497370] sub_00497370 (34 bytes)
extern "C" void ext_00661BF0();

extern "C" void __fastcall fn_00497370(void* self, int edx_unused, void* arg) {
    typedef char (__thiscall *Pfn)(void*, void*);
    Pfn pfn = (Pfn)(void*)ext_00661BF0;
    *((char*)self + 0xc0) = (pfn(arg, *(void**)((char*)self + 0xc8)) != 0);
}

// [0x00495320] sub_00495320 (162 bytes)
extern "C" void ext_004950B0();
extern "C" void ext_00586140();
extern "C" __declspec(naked) void __fastcall fn_00495320(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x38]
        xor ebx, ebx
        cmp edi, ebx
        mov esi, ecx
        jl fail_path
        call ext_00494830
        cmp edi, eax
        jge fail_path
        push edi
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_004950B0
        mov ecx, dword ptr [esi + 0x28]
        push ebx
        push 0xa30158
        push 0xa2e2bc
        push ebx
        push eax
        add ecx, 0x4
        mov dword ptr [esp + 0x44], ebx
        call ext_00586140
        push eax
        call ext_006A6E9E
        add esp, 0x14
        lea ecx, [esp + 0xc]
        mov esi, eax
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
fail_path:
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x00495420] sub_00495420 (54 bytes)
extern "C" void ext_00495320();
extern "C" __declspec(naked) void* __fastcall fn_00495420(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push eax
        call ext_00495320
        test eax, eax
        jne not_null
        ret 0x4
not_null:
        mov ecx, dword ptr [esp + 0x4]
        push 0x0
        push 0xa30138
        push 0xa2e2bc
        push 0x0
        push ecx
        mov ecx, eax
        call ext_00586140
        push eax
        call ext_006A6E9E
        add esp, 0x14
        ret 0x4
    }
}

// [0x004931C0] sub_004931C0 (165 bytes)
extern "C" __declspec(naked) void __fastcall fn_004931C0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        lea esi, [ebx + 0x30]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_top1
        call dword ptr [mem_00925134]
L_top1:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        cmp esi, esi
        je L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        cmp edi, ebp
        je L_second
        cmp edi, dword ptr [esi + 0x8]
        jb L_el1
        call dword ptr [mem_00925134]
L_el1:
        mov eax, dword ptr [edi]
        mov byte ptr [eax + 0x8d], 0x0
        cmp edi, dword ptr [esi + 0x8]
        jb L_adv1
        call dword ptr [mem_00925134]
L_adv1:
        add edi, 0x4
        jmp L_top1
L_second:
        mov edi, dword ptr [ebx + 0x44]
        cmp edi, dword ptr [ebx + 0x48]
        lea esi, [ebx + 0x40]
        mov ebx, dword ptr [mem_00925134]
        jbe L_top2
        call ebx
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_top2:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        jbe L_chk3
        call ebx
L_chk3:
        cmp esi, esi
        je L_chk4
        call ebx
L_chk4:
        cmp edi, ebp
        je L_ret
        cmp edi, dword ptr [esi + 0x8]
        jb L_el2
        call ebx
L_el2:
        mov ecx, dword ptr [edi]
        mov byte ptr [ecx + 0x8d], 0x0
        cmp edi, dword ptr [esi + 0x8]
        jb L_adv2
        call ebx
L_adv2:
        add edi, 0x4
        jmp L_top2
L_ret:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00495140] sub_00495140 (172 bytes)
// __thiscall (ret 4): idx = sub_004948C0(self, a1). If 0 <= idx < sub_00494830(self), builds a
// std::string via sub_004950B0(self, &buf, idx) (SEH-guarded), passes it through
// sub_00586140(self->[0x28] + 4, buf) and __RTDynamicCast's the result. Returns the cast
// pointer, or 0 when idx is out of range.
extern "C" void ext_004948C0();
extern "C" void ext_00494830();
extern "C" void ext_004950B0();
extern "C" void ext_00586140();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_00495140(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push esi
        push edi
        push eax
        mov esi, ecx
        xor ebx, ebx
        call ext_004948C0
        mov edi, eax
        cmp edi, ebx
        jl fail_495140
        mov ecx, esi
        call ext_00494830
        cmp edi, eax
        jge fail_495140
        push edi
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        call ext_004950B0
        mov ecx, dword ptr [esi + 0x28]
        push ebx
        push 0xa30158
        push 0xa2e2bc
        push ebx
        push eax
        add ecx, 0x4
        mov dword ptr [esp + 0x44], ebx
        call ext_00586140
        push eax
        call ext_006A6E9E
        add esp, 0x14
        lea ecx, [esp + 0xc]
        mov esi, eax
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
fail_495140:
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x004951F0] sub_004951F0 (86 bytes)
// __thiscall (ret 8): self in ecx, two stack args (a1 at [esp+4], a2 at [esp+8]).
extern "C" void ext_00495140();
extern "C" void ext_00586140();
extern "C" void ext_006A6E9E();
extern "C" int mem_00A34650;
extern "C" int mem_00924FC8;
extern "C" int mem_00A30158;
extern "C" int mem_00A2E2BC;

extern "C" __declspec(naked) void __fastcall fn_004951F0(void* self, int edx_unused) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push edi
        push eax
        call ext_00495140
        mov esi, eax
        test esi, esi
        je L_fail
        mov ecx, dword ptr [mem_00A34650]
        mov edi, dword ptr [esp + 0x10]
        push ecx
        push edi
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je L_fail
        push 0x0
        push offset mem_00A30158
        push offset mem_00A2E2BC
        push 0x0
        push edi
        mov ecx, esi
        call ext_00586140
        push eax
        call ext_006A6E9E
        add esp, 0x14
        pop edi
        pop esi
        ret 0x8
    L_fail:
        pop edi
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x00490760] sub_00490760 (175 bytes)
extern "C" void ext_00489880();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void* __cdecl fn_00490760(void* first, void* last, void* dest, void* alloc) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x885771
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [ebp + 0x10]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], edi
        mov dword ptr [ebp - 0x4], ebx
        nop
    L_loop_00490760:
        cmp esi, dword ptr [ebp + 0xc]
        je L_end_00490760
        mov dword ptr [ebp - 0x18], edi
        mov dword ptr [ebp - 0x1c], edi
        cmp edi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je L_next_00490760
        cmp dword ptr [esi + 0x4], ebx
        je L_null_00490760
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push esi
        lea edx, [ebp - 0x20]
        push edx
        call eax
        jmp L_store_00490760
        // exception landing pad: destroy already-constructed elements, rethrow
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je L_rethrow_00490760
        mov ebx, dword ptr [ebp + 0x14]
    L_destroy_00490760:
        push esi
        mov ecx, ebx
        call ext_00489880
        add esi, 0x8
        cmp esi, edi
        jne L_destroy_00490760
    L_rethrow_00490760:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    L_null_00490760:
        mov dword ptr [ebp + 0x8], ebx
        lea eax, [ebp + 0x8]
    L_store_00490760:
        mov ecx, dword ptr [eax]
        mov dword ptr [edi], ecx
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [edi + 0x4], edx
    L_next_00490760:
        add edi, 0x8
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], edi
        add esi, 0x8
        jmp L_loop_00490760
    L_end_00490760:
        mov ecx, dword ptr [ebp - 0xc]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0049AD90] sub_0049AD90 (183 bytes)
extern "C" void ext_0046C460();
extern "C" void ext_004765B0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
// Naked: compares the two byte arguments; on mismatch builds two bool strings plus the
// third string argument and throws, using an esp-relative EH frame (0x883734).
extern "C" __declspec(naked) void __fastcall fn_0049AD90(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x883734
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc8
        push esi
        mov esi, dword ptr [esp + 0xe0]
        push edi
        mov edi, dword ptr [esp + 0xe0]
        mov al, byte ptr [edi]
        cmp al, byte ptr [esi]
        je no_throw
        mov ecx, dword ptr [esp + 0xe8]
        push ecx
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        movzx edx, byte ptr [esi]
        push edx
        lea eax, [esp + 0x28]
        push eax
        mov dword ptr [esp + 0xe0], 0x0
        call ext_0046C460
        mov esi, eax
        movzx ecx, byte ptr [edi]
        push ecx
        lea edx, [esp + 0x4c]
        push edx
        mov byte ptr [esp + 0xe8], 0x1
        call ext_0046C460
        add esp, 0x10
        lea ecx, [esp + 0x8]
        push ecx
        push esi
        push eax
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xe4], 0x2
        call ext_004765B0
        push 0x9dfd38
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    no_throw:
        mov ecx, dword ptr [esp + 0xd0]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xd4
        ret 0xc
    }
}

// [0x00490FD0] sub_00490FD0 (86 bytes)
extern "C" void ext_0048B4C0();

extern "C" __declspec(naked) void __fastcall fn_00490FD0(void* self) {
    __asm {
        push -1
        push 0x88f3bb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        xor edi, edi
        lea ecx, [esi + 0x18]
        mov dword ptr [esp + 0x14], edi
        call ext_0048B4C0
        mov eax, dword ptr [esi + 0xc]
        cmp eax, edi
        je skip_free
        push eax
        call ext_006A5C5C
        add esp, 0x4
skip_free:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xc], edi
        mov dword ptr [esi + 0x10], edi
        mov dword ptr [esi + 0x14], edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00491730] sub_00491730 (122 bytes)
extern "C" __declspec(naked) void __cdecl fn_00491730(void* begin, void* end) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8857EBh
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        mov ebx, dword ptr [esp + 18h]
        push esi
        mov esi, dword ptr [esp + 18h]
        cmp esi, ebx
        push edi
        je done
        xor edi, edi
        jmp loop_top
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
loop_top:
        lea ecx, [esi + 18h]
        mov dword ptr [esp + 14h], edi
        call ext_0048B4C0
        mov eax, dword ptr [esi + 0ch]
        cmp eax, edi
        mov dword ptr [esp + 14h], -1
        je skip_free
        push eax
        call ext_006A5C5C
        add esp, 4
skip_free:
        mov dword ptr [esi + 0ch], edi
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esi + 14h], edi
        add esi, 7Ch
        cmp esi, ebx
        mov dword ptr [esp + 1ch], esi
        jne loop_top
done:
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0ch
        ret
    }
}

// [0x004918D0] sub_004918D0 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_004918D0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_004918D0
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_00491730
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_004918D0:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x00499370] sub_00499370 (201 bytes)
extern "C" void ext_00497720();
extern "C" int mem_009324A4;
extern "C" int mem_00925134;
extern "C" int mem_0094B858;
extern "C" __declspec(naked) float* __fastcall fn_00499370(void* self, int edx_unused, float* out) {
    __asm {
        sub esp, 0x18
        fld dword ptr [mem_009324A4]
        mov eax, dword ptr [ecx + 0x88]
        test eax, eax
        fst dword ptr [esp + 0x8]
        push esi
        fstp dword ptr [esp + 0x10]
        lea esi, [ecx + 0x84]
        je L_tail
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 0x3
        je L_tail
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp eax, edi
        jbe L_a
        call ebp
    L_a:
        lea eax, [edi - 0x8]
        cmp eax, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x14], edi
        ja L_b
        cmp eax, dword ptr [esi + 0x4]
        jae L_c
    L_b:
        call ebp
    L_c:
        lea ebx, [edi - 0x8]
        cmp ebx, dword ptr [esi + 0x8]
        jb L_d
        call ebp
    L_d:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_e
        call ebp
        cmp edi, dword ptr [esi + 0x8]
    L_e:
        jb L_f
        call ebp
    L_f:
        push ebx
        lea edx, [esp + 0x24]
        push edx
        mov ecx, edi
        call ext_00497720
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        pop edi
        pop ebp
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x14], edx
        pop ebx
    L_tail:
        fld dword ptr [mem_0094B858]
        mov eax, dword ptr [esp + 0x20]
        fadd st(0), st(0)
        pop esi
        fstp dword ptr [esp]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fld dword ptr [esp]
        fld st(0)
        fsubp st(2), st(0)
        fxch st(1)
        fstp dword ptr [eax]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fsub st(0), st(2)
        fstp dword ptr [eax + 0x4]
        fld st(1)
        faddp st(3), st(0)
        fxch st(2)
        fstp dword ptr [eax + 0x8]
        faddp st(1), st(0)
        fstp dword ptr [eax + 0xc]
        add esp, 0x18
        ret 0x4
    }
}

// [0x00491A90] sub_00491A90 (201 bytes)
extern "C" void ext_00451670();

extern "C" __declspec(naked) void __fastcall fn_00491A90(void* self) {
    __asm {
        push -1
        push 0x885877
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, ecx
        lea eax, [esi + 0x4]
        lea ebx, [esi + 0x10]
        push edi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esi], 0x93e950
        mov dword ptr [eax], 0x93e948
        mov dword ptr [esi + 0x8], 0x93e940
        mov dword ptr [esi + 0xc], 0x93e938
        mov dword ptr [ebx], 0x93e904
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        xor edi, edi
        push eax
        mov ecx, 0xa34418
        mov dword ptr [esp + 0x24], edi
        call ext_00451670
        mov eax, dword ptr [esi + 0x2c]
        cmp eax, edi
        je skip_a
        push eax
        call ext_006A5C5C
        add esp, 0x4
skip_a:
        mov dword ptr [esi + 0x2c], edi
        mov dword ptr [esi + 0x30], edi
        mov dword ptr [esi + 0x34], edi
        mov eax, dword ptr [esi + 0x1c]
        add esi, 0x18
        cmp eax, edi
        je skip_b
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_00491730
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
skip_b:
        mov ecx, ebx
        mov dword ptr [esi + 0x4], edi
        mov dword ptr [esi + 0x8], edi
        mov dword ptr [esi + 0xc], edi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x00495250] sub_00495250 (80 bytes)
extern "C" void ext_00401D20();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00495250(void* self) {
    __asm {
        push -1
        push 0x008A2518
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x170]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00401D20
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00498A50] sub_00498A50 (229 bytes)
extern "C" int mem_00925134;
extern "C" int mem_0094B858;
extern "C" __declspec(naked) int __fastcall fn_00498A50(void* self, int edx_unused, const float* p) {
    __asm {
        sub esp, 0x18
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [eax + 0x4]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x8], ecx
        fld dword ptr [esp + 0x8]
        fld st(0)
        mov ebx, dword ptr [mem_00925134]
        fld dword ptr [mem_0094B858]
        mov dword ptr [esp + 0xc], edx
        fld st(0)
        push edi
        fsubp st(2), st
        xor edi, edi
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fsub st, st(2)
        fstp dword ptr [esp + 0x18]
        fld st(1)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x1c]
        faddp st(1), st
        fstp dword ptr [esp + 0x20]
    L_loop:
        mov ecx, dword ptr [esi + 0x88]
        test ecx, ecx
        je L_notfound
        mov eax, dword ptr [esi + 0x8c]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jae L_notfound
        test ecx, ecx
        je L_bad
        mov eax, dword ptr [esi + 0x8c]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb L_ok
    L_bad:
        call ebx
    L_ok:
        mov eax, dword ptr [esi + 0x88]
        fld dword ptr [eax + 8 * edi]
        lea ecx, [eax + 8 * edi]
        fld dword ptr [esp + 0x14]
        fcompp
        fnstsw ax
        test ah, 0x41
        jp L_next
        fld dword ptr [ecx]
        fld dword ptr [esp + 0x1c]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne L_next
        fld dword ptr [ecx + 0x4]
        fld dword ptr [esp + 0x18]
        fcompp
        fnstsw ax
        test ah, 0x41
        jp L_next
        fld dword ptr [ecx + 0x4]
        fld dword ptr [esp + 0x20]
        fcompp
        fnstsw ax
        test ah, 0x1
        je L_found
    L_next:
        add edi, 0x1
        jmp L_loop
    L_found:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 0x4
    L_notfound:
        pop edi
        pop esi
        or eax, -0x1
        pop ebx
        add esp, 0x18
        ret 0x4
    }
}

// [0x00498B60] sub_00498B60 (240 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00498B60(void* self, int edx_unused, void* result, void* other) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x28]
        fld dword ptr [edi + 0xc]
        lea edx, [edi + 0xc]
        fld dword ptr [ecx + 0xc]
        lea esi, [ecx + 0xc]
        fcompp
        mov ebp, edx
        fnstsw ax
        test ah, 0x41
        je L_w
        mov ebp, esi
    L_w:
        fld dword ptr [edi + 0x8]
        lea edx, [edi + 0x8]
        fld dword ptr [ecx + 0x8]
        lea esi, [ecx + 0x8]
        fcompp
        mov ebx, edx
        fnstsw ax
        test ah, 0x41
        je L_z
        mov ebx, esi
    L_z:
        fld dword ptr [ecx + 0x4]
        lea esi, [ecx + 0x4]
        fld dword ptr [edi + 0x4]
        lea edx, [edi + 0x4]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_y
        mov edx, esi
    L_y:
        fld dword ptr [ecx]
        fld dword ptr [edi]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_x
        mov ecx, edi
    L_x:
        fld dword ptr [ecx]
        pop edi
        fstp dword ptr [esp + 0xc]
        pop esi
        fld dword ptr [edx]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ebx]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ebp]
        pop ebp
        fstp dword ptr [esp + 0x10]
        pop ebx
        fld dword ptr [esp + 0x8]
        fsub dword ptr [esp]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fldz
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x1
        je L_zero
        fld dword ptr [esp + 0xc]
        fsub dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jnp L_zero
        mov eax, dword ptr [esp + 0x14]
        fstp st(0)
        mov ecx, dword ptr [esp]
        mov edx, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], edx
        add esp, 0x10
        ret 0x8
    L_zero:
        mov eax, dword ptr [esp + 0x14]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0x4]
        fstp dword ptr [eax]
        add esp, 0x10
        ret 0x8
    }
}

// [0x004990C0] sub_004990C0 (106 bytes)
// __thiscall with ret 4: calls sub_00498B60(this, buf, arg) and returns true iff
// both r[2]-r[0] > 0 and r[3]-r[1] > 0 for the returned float quad r.
extern "C" void ext_00498B60();

extern "C" __declspec(naked) bool __fastcall fn_004990C0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea edx, [esp + 0x4]
        push edx
        call ext_00498B60
        mov ecx, eax
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [ecx]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fldz
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x1
        je L_zero_pop
        fld dword ptr [ecx + 0xc]
        fsub dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x14]
        fcomp dword ptr [esp + 0x14]
        fnstsw ax
        test ah, 0x1
        je L_one
        xor eax, eax
        xor ecx, ecx
        test al, al
        sete cl
        mov al, cl
        add esp, 0x10
        ret 0x4
    L_zero_pop:
        fstp st(0)
    L_one:
        mov eax, 0x1
        xor ecx, ecx
        test al, al
        sete cl
        mov al, cl
        add esp, 0x10
        ret 0x4
    }
}

// [0x0049BD50] sub_0049BD50 (256 bytes)
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_0049BD50(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b53c2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi + 0x4], 0x93fa30
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi + 0x8], 0x928efc
        mov edi, dword ptr [esp + 0x20]
        lea eax, [edi + 0xc]
        push eax
        lea ecx, [esi + 0xc]
        mov byte ptr [esp + 0x1c], 1
        mov dword ptr [esi], 0x93fd44
        mov dword ptr [esi + 0x4], 0x93fd3c
        mov dword ptr [esi + 0x8], 0x93fd10
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [edi + 0x28]
        lea edx, [edi + 0x2c]
        mov dword ptr [esi + 0x28], ecx
        push edx
        lea ecx, [esi + 0x2c]
        mov byte ptr [esp + 0x1c], 2
        call dword ptr [mem_00924FE0]
        cmp dword ptr [edi + 0x4c], 0
        lea ebx, [edi + 0x48]
        mov byte ptr [esp + 0x18], 3
        je skip_vcall
        mov ecx, dword ptr [ebx + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push ebx
        lea edx, [esp + 0x24]
        push edx
        call eax
        jmp after_vcall
    skip_vcall:
        mov dword ptr [esp + 0x20], 0
        lea eax, [esp + 0x20]
    after_vcall:
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 0x48], ecx
        mov edx, dword ptr [ebx + 0x4]
        mov dword ptr [esi + 0x4c], edx
        lea eax, [edi + 0x50]
        push eax
        lea ecx, [esi + 0x50]
        mov byte ptr [esp + 0x1c], 4
        call dword ptr [mem_00924FE0]
        lea ecx, [edi + 0x6c]
        push ecx
        lea ecx, [esi + 0x6c]
        mov byte ptr [esp + 0x1c], 5
        call dword ptr [mem_00924FE0]
        mov edx, dword ptr [edi + 0x88]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x88], edx
        mov eax, dword ptr [edi + 0x8c]
        mov dword ptr [esi + 0x8c], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x00492830] sub_00492830 (108 bytes)
extern "C" char* ext_00594000();
extern "C" void __fastcall ext_0059C7A0(void* self);
extern "C" void __fastcall ext_0065C640(void* self);
extern "C" void __fastcall ext_0065C650(void* self);
extern "C" __declspec(naked) void __fastcall fn_00492830(void* self) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov esi, eax
        mov ecx, esi
        mov dword ptr [esp + 4], esi
        call ext_0065C640
        mov dword ptr [esp + 0x10], 0
        call ext_00594000
        mov ecx, eax
        call ext_0059C7A0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00499960] sub_00499960 (276 bytes)
extern "C" void ext_004EB9B0();
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_00499960(void* self) {
    __asm {
        push -0x1
        push 0x8870fe
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_004EB9B0
        lea edi, [esi + 0x8]
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr [esp + 0x18], ebx
        call ext_00661980
        mov dword ptr [esi + 0xc], 0x93f18c
        mov dword ptr [esi + 0x10], 0x928efc
        lea ecx, [esi + 0x14]
        mov byte ptr [esp + 0x18], 0x2
        mov dword ptr [esi], 0x93f854
        mov dword ptr [edi], 0x93f7fc
        mov dword ptr [esi + 0xc], 0x93f7f4
        mov dword ptr [esi + 0x10], 0x93f7c8
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x30]
        mov byte ptr [esp + 0x18], 0x3
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x4c]
        mov byte ptr [esp + 0x18], 0x4
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x68]
        mov byte ptr [esp + 0x18], 0x5
        call dword ptr [mem_00924FE8]
        fldz
        mov ecx, dword ptr [esp + 0x10]
        fst dword ptr [esi + 0x94]
        fst dword ptr [esi + 0x98]
        mov dword ptr [esi + 0x88], ebx
        fst dword ptr [esi + 0x9c]
        mov dword ptr [esi + 0x8c], ebx
        fst dword ptr [esi + 0xa0]
        mov dword ptr [esi + 0x90], ebx
        fst dword ptr [esi + 0xb0]
        pop edi
        fst dword ptr [esi + 0xac]
        mov eax, esi
        fst dword ptr [esi + 0xa8]
        fstp dword ptr [esi + 0xa4]
        mov dword ptr [esi + 0xb8], ebx
        mov dword ptr [esi + 0xbc], ebx
        mov byte ptr [esi + 0xc0], bl
        mov dword ptr [esi + 0xc4], ebx
        mov byte ptr [esi + 0xb4], bl
        mov dword ptr [esi + 0xc8], 0xffffffff
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00499BA0] sub_00499BA0 (283 bytes)
extern "C" void ext_004EB9D0();
extern "C" void ext_0065D3A0();

extern "C" __declspec(naked) void __fastcall fn_00499BA0(void* self) {
    __asm {
        push -0x1
        push 0x886b54
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x8]
        lea ebp, [esi + 0x10]
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esi], 0x93f854
        mov dword ptr [edi], 0x93f7fc
        mov dword ptr [esi + 0xc], 0x93f7f4
        mov dword ptr [ebp], 0x93f7c8
        mov eax, dword ptr [esi + 0xc4]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x24], 0x7
        je loc_499bfc
        mov dword ptr [eax + 0xbc], ebx
loc_499bfc:
        cmp dword ptr [esi + 0xc8], -0x1
        je loc_499c25
        call ext_00594000
        test eax, eax
        je loc_499c25
        call ext_00594000
        mov ecx, dword ptr [esi + 0xc8]
        push ecx
        lea ecx, [eax + 0xfc]
        call ext_0065D3A0
loc_499c25:
        mov eax, dword ptr [esi + 0x88]
        cmp eax, ebx
        je loc_499c38
        push eax
        call ext_006A5C5C
        add esp, 0x4
loc_499c38:
        lea ecx, [esi + 0x68]
        mov dword ptr [esi + 0x88], ebx
        mov dword ptr [esi + 0x8c], ebx
        mov dword ptr [esi + 0x90], ebx
        mov byte ptr [esp + 0x24], 0x5
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x4c]
        mov byte ptr [esp + 0x24], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x30]
        mov byte ptr [esp + 0x24], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x14]
        mov byte ptr [esp + 0x24], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, ebp
        mov byte ptr [esp + 0x24], 0x1
        call ext_0065C660
        mov ecx, edi
        mov byte ptr [esp + 0x24], bl
        call ext_0065F440
        mov ecx, esi
        mov dword ptr [esp + 0x24], 0xffffffff
        call ext_004EB9D0
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x18
        ret
    }
}

// [0x0049E8D0] sub_0049E8D0 (62 bytes)
extern "C" void ext_00499BA0();

extern "C" __declspec(naked) void __fastcall fn_0049E8D0(void* self) {
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
        je done_49E8D0
        push ebx
        mov edi, edi
    loop_49E8D0:
        mov ebx, dword ptr [esi]
        lea ecx, [esi + 0x8]
        call ext_00499BA0
        push esi
        call ext_006A5C5C
        add esp, 4
        cmp ebx, dword ptr [edi + 0x4]
        mov esi, ebx
        jne loop_49E8D0
        pop ebx
    done_49E8D0:
        pop edi
        pop esi
        ret
    }
}

// [0x0049B340] sub_0049B340 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00ADD7E0;
extern "C" int mem_00ADD7C4;
extern "C" int mem_00A353F8;
extern "C" int mem_009179E0;
extern "C" __declspec(naked) void* __fastcall fn_0049B340(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x00886F1E
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADD7E0], al
        jne done
        or dword ptr [mem_00ADD7E0], eax
        push offset mem_00A353F8
        push offset mem_00ADD7C4
        mov dword ptr [esp + 0x10], 0
        call ext_0066AD10
        push offset mem_009179E0
        call ext_006A6C87
        add esp, 0xc
    done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ADD7C4
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0049D190] sub_0049D190 (33 bytes)
extern "C" void ext_0049B340();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0049D190(void* self) {
    __asm {
        push ecx
        push esi
        mov dword ptr [esp + 4], 0
        call ext_0049B340
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0049E4E0] sub_0049E4E0 (104 bytes)
extern "C" void ext_00499BA0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0049E4E0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        test ebx, ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x10], ebx
        jne L1
        call dword ptr [mem_00925134]
    L1:
        cmp esi, dword ptr [ebx + 0x4]
        jne L2
        call dword ptr [mem_00925134]
    L2:
        cmp esi, dword ptr [edi + 0x4]
        mov ebp, dword ptr [esi]
        je L3
        mov eax, dword ptr [esi + 0x4]
        mov ecx, ebp
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi + 0x4]
        lea ecx, [esi + 0x8]
        mov dword ptr [edx + 0x4], eax
        call ext_00499BA0
        push esi
        call ext_006A5C5C
        add esp, 0x4
        add dword ptr [edi + 0x8], -0x1
    L3:
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        mov dword ptr [eax], ebx
        pop ebx
        add esp, 0x8
        ret 0xc
    }
}

// [0x0049EB50] sub_0049EB50 (152 bytes)
extern "C" void ext_00499BA0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0049EB50(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, [ebp+4]
        push esi
        mov esi, [eax]
        push edi
        mov [esp+0x10], eax
        mov edi, ebp
    top:
        test edi, edi
        je l1
        cmp edi, ebp
        je l2
    l1:
        mov ebx, [mem_00925134]
        call ebx
        jmp l3
    l2:
        mov ebx, [mem_00925134]
    l3:
        cmp esi, [esp+0x10]
        je done
        test edi, edi
        jne l4
        call ebx
    l4:
        cmp esi, [edi+4]
        jne l5
        call ebx
    l5:
        mov eax, [esp+0x20]
        cmp [esi+0xc4], eax
        jne l6
        cmp esi, [edi+4]
        mov [esp+0x18], esi
        jne l7
        call ebx
    l7:
        cmp esi, [ebp+4]
        mov ebx, [esi]
        je l8
        mov ecx, [esi+4]
        mov [ecx], ebx
        mov edx, [esi]
        mov eax, [esi+4]
        lea ecx, [esi+8]
        mov [edx+4], eax
        call ext_00499BA0
        push esi
        call ext_006A5C5C
        add esp, 4
        add dword ptr [ebp+8], -1
    l8:
        mov esi, ebx
        jmp top
    l6:
        cmp esi, [edi+4]
        jne l9
        call ebx
    l9:
        mov esi, [esi]
        jmp top
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 4
    }
}

// [0x0049EBF0] sub_0049EBF0 (179 bytes)
extern "C" void ext_00499BA0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0049EBF0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x4]
        push esi
        mov esi, dword ptr [eax]
        push edi
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x14], eax
        mov edi, ebx
    L_49EC08:
        test edi, edi
        je L_49EC10
        cmp edi, ebx
        je L_49EC1A
    L_49EC10:
        mov ebp, dword ptr [mem_00925134]
        call ebp
        jmp L_49EC20
    L_49EC1A:
        mov ebp, dword ptr [mem_00925134]
    L_49EC20:
        cmp esi, dword ptr [esp + 0x14]
        je L_49EC99
        test edi, edi
        jne L_49EC2C
        call ebp
    L_49EC2C:
        cmp esi, dword ptr [edi + 0x4]
        jne L_49EC33
        call ebp
    L_49EC33:
        lea ebp, [esi + 0x8]
        cmp dword ptr [esp + 0x24], ebp
        jne L_49EC87
        cmp esi, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], esi
        jne L_49EC4F
        call dword ptr [mem_00925134]
    L_49EC4F:
        mov edi, dword ptr [esp + 0x10]
        cmp esi, dword ptr [edi + 0x4]
        mov ebx, dword ptr [esi]
        je L_49EC7B
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax], ebx
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov ecx, ebp
        call ext_00499BA0
        push esi
        call ext_006A5C5C
        add esp, 4
        add dword ptr [edi + 0x8], -1
    L_49EC7B:
        mov edi, dword ptr [esp + 0x18]
        mov esi, ebx
        mov ebx, dword ptr [esp + 0x10]
        jmp L_49EC08
    L_49EC87:
        cmp esi, dword ptr [edi + 0x4]
        jne L_49EC92
        call dword ptr [mem_00925134]
    L_49EC92:
        mov esi, dword ptr [esi]
        jmp L_49EC08
    L_49EC99:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x4
    }
}

extern "C" void ext_0049EBF0();

// [0x0049ED40] sub_0049ED40 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_0049ED40(void* self, int edx_unused, void* arg0) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        lea ecx, [esi + 0xd0]
        call ext_0049EBF0
        push edi
        lea ecx, [esi + 0xc4]
        call ext_0049EBF0
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00492900] sub_00492900 (323 bytes)
extern "C" void ext_00410390();
extern "C" void ext_00410420();
extern "C" void ext_0059DDA0();

extern "C" __declspec(naked) void __fastcall fn_00492900(void* self) {
    __asm {
        push ebx
        push esi
        mov ebx, ecx
        call ext_00594000
        mov esi, eax
        mov eax, dword ptr [esi + 0x23c]
        add esi, 0x238
        test eax, eax
        jne loc_49291f
        xor ecx, ecx
        jmp loc_492927
    loc_49291f:
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 2
    loc_492927:
        sub ecx, 2
        je loc_4929ec
        sub ecx, 1
        jne loc_4929e7
        test eax, eax
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push edi
        je loc_492952
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        ja loc_492954
    loc_492952:
        call ebp
    loc_492954:
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        mov edi, dword ptr [ecx + 0x4]
        je loc_49296b
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        ja loc_49296d
    loc_49296b:
        call ebp
    loc_49296d:
        test edi, edi
        mov eax, dword ptr [esi + 0x4]
        mov esi, dword ptr [eax + 0x8]
        je loc_4929d9
        test esi, esi
        je loc_4929d9
        mov ecx, edi
        call ext_00410420
        test al, al
        je loc_4929a0
        mov ecx, esi
        call ext_00410420
        test al, al
        jne loc_4929a0
        mov ecx, esi
        call ext_0059DDA0
        mov dword ptr [ebx + 0xc], edi
        mov dword ptr [ebx + 0x10], esi
        jmp loc_4929d9
    loc_4929a0:
        mov ecx, edi
        call ext_00410420
        test al, al
        jne loc_4929b6
        mov ecx, esi
        call ext_00410420
        test al, al
        jne loc_4929cc
    loc_4929b6:
        mov ecx, edi
        call ext_00410420
        test al, al
        je loc_4929d9
        mov ecx, esi
        call ext_00410420
        test al, al
        je loc_4929d9
    loc_4929cc:
        mov ecx, edi
        call ext_0059DDA0
        mov dword ptr [ebx + 0x10], edi
        mov dword ptr [ebx + 0xc], esi
    loc_4929d9:
        cmp dword ptr [ebx + 0xc], 0
        pop edi
        pop ebp
        je loc_4929e7
    loc_4929e1:
        cmp dword ptr [ebx + 0x10], 0
        jne loc_492a3e
    loc_4929e7:
        pop esi
        xor al, al
        pop ebx
        ret
    loc_4929ec:
        test eax, eax
        je loc_4929fd
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        ja loc_492a03
    loc_4929fd:
        call dword ptr [mem_00925134]
    loc_492a03:
        mov ecx, dword ptr [esi + 0x4]
        mov esi, dword ptr [ecx + 0x4]
        test esi, esi
        je loc_492a38
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x28]
        mov ecx, esi
        call eax
        test al, al
        jne loc_492a2a
        mov ecx, esi
        call ext_00410390
        test al, al
        jne loc_492a2a
        mov dword ptr [ebx + 0xc], esi
        jmp loc_492a38
    loc_492a2a:
        mov ecx, esi
        call ext_00410390
        test al, al
        je loc_492a38
        mov dword ptr [ebx + 0x10], esi
    loc_492a38:
        cmp dword ptr [ebx + 0xc], 0
        je loc_4929e1
    loc_492a3e:
        pop esi
        mov al, 1
        pop ebx
        ret
    }
}

// [0x0049E930] sub_0049E930 (326 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0049E930(void* self) {
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
        push 0xa354c8
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp+0x2c], 0
        mov dword ptr [esi], 0x9404c0
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

// [0x00493370] sub_00493370 (367 bytes)
extern "C" void ext_00492590();
extern "C" void ext_004925D0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00493370(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr [edi], 0x0
        mov esi, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x10], esi
        jne PATHB
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax]
        mov ebx, eax
        mov dword ptr [esp + 0x14], ebx
    LOOPA:
        test esi, esi
        mov eax, dword ptr [edi + 0x4]
        mov ebp, dword ptr [eax + 0x4]
        je INVA1
        cmp esi, eax
        je OKA1
    INVA1:
        call dword ptr [mem_00925134]
    OKA1:
        cmp ebx, ebp
        je EPI
        test esi, esi
        jne OKA2
        call dword ptr [mem_00925134]
    OKA2:
        cmp ebx, dword ptr [esi + 0x4]
        jne OKA3
        call dword ptr [mem_00925134]
    OKA3:
        mov esi, dword ptr [ebx + 0x28]
        test esi, esi
        je ADVA
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x28]
        mov ecx, esi
        call eax
        test al, al
        jne ADVA
        mov byte ptr [esi + 0x4e2], al
        mov byte ptr [esi + 0x4e4], al
        mov dword ptr [esi + 0x5f0], 0x6
    ADVA:
        lea ecx, dword ptr [esp + 0x10]
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp LOOPA

    PATHB:
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov ebx, eax
        mov dword ptr [esp + 0x14], ebx
        nop
    LOOPB:
        test esi, esi
        mov eax, dword ptr [edi + 0x4]
        mov ebp, dword ptr [eax + 0x4]
        je INVB1
        cmp esi, eax
        je OKB1
    INVB1:
        call dword ptr [mem_00925134]
    OKB1:
        cmp ebx, ebp
        je PHASE2
        test esi, esi
        jne OKB2
        call dword ptr [mem_00925134]
    OKB2:
        cmp ebx, dword ptr [esi + 0x4]
        jne OKB3
        call dword ptr [mem_00925134]
    OKB3:
        mov esi, dword ptr [ebx + 0x28]
        test esi, esi
        je ADVB
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x28]
        mov ecx, esi
        call eax
        test al, al
        jne ADVB
        mov byte ptr [esi + 0x4e2], al
        mov byte ptr [esi + 0x4e4], al
        mov dword ptr [esi + 0x5f0], 0x0
    ADVB:
        lea ecx, dword ptr [esp + 0x10]
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp LOOPB

    PHASE2:
        cmp dword ptr [edi + 0x8], 0x0
        mov ebx, 0x1
        je P3
        mov ecx, edi
        call ext_00492590
        test al, al
        je P3
        mov ecx, dword ptr [edi + 0x8]
        mov byte ptr [ecx + 0x4e2], bl
        mov edx, dword ptr [edi + 0x8]
        mov dword ptr [edx + 0x5f0], ebx
    P3:
        mov esi, dword ptr [edi + 0xc]
        test esi, esi
        je P4
        push 0x0
        mov ecx, edi
        call ext_004925D0
        test al, al
        sete al
        mov byte ptr [esi + 0x4e4], al
    P4:
        mov esi, dword ptr [edi + 0x10]
        test esi, esi
        je EPI
        push ebx
        mov ecx, edi
        call ext_004925D0
        test al, al
        sete cl
        mov byte ptr [esi + 0x4e4], cl
    EPI:
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x004991E0] sub_004991E0 (391 bytes)
extern "C" void ext_00497720();
extern "C" int mem_009324A4;
extern "C" int mem_00925134;
extern "C" int mem_0093F7A8;
extern "C" int mem_0093F7A0;
extern "C" int mem_0093F798;
extern "C" int mem_0093F790;

extern "C" __declspec(naked) void __fastcall fn_004991E0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x88]
        sub esp, 0x10
        test eax, eax
        push esi
        lea esi, [ecx + 0x84]
        je loc_4991fe
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 0x3
        jne loc_499214

loc_4991fe:
        fld dword ptr [mem_009324A4]
        mov eax, dword ptr [esp + 0x18]
        fst dword ptr [eax]
        pop esi
        fstp dword ptr [eax + 0x4]
        add esp, 0x10
        ret 0x4

loc_499214:
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp eax, edi
        jbe loc_499226
        call ebp

loc_499226:
        lea eax, [edi - 0x8]
        cmp eax, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x1c], edi
        ja loc_499237
        cmp eax, dword ptr [esi + 0x4]
        jae loc_499239

loc_499237:
        call ebp

loc_499239:
        lea ebx, [edi - 0x8]
        cmp ebx, dword ptr [esi + 0x8]
        jb loc_499243
        call ebp

loc_499243:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        // jbe loc_499250 (3-byte form: 76 05 to jump over call ebp which is 2 bytes: ff d5)
        // MASM emitted 76 02 which jumped to the cmp instead of past the cmp!
        _emit 0x76
        _emit 0x05
        call ebp

loc_499250:
        cmp edi, dword ptr [esi + 0x8]
        jb loc_499254
        call ebp

loc_499254:
        push ebx
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, edi
        call ext_00497720
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        // jbe loc_49926e (3-byte form: 76 05 to jump over call ebp)
        _emit 0x76
        _emit 0x05
        call ebp

loc_49926e:
        cmp ebx, dword ptr [esi + 0x8]
        jb loc_499272
        call ebp

loc_499272:
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe loc_49927c
        call ebp

loc_49927c:
        lea eax, [edi - 0x8]
        cmp eax, dword ptr [esi + 0x8]
        mov ebp, esi
        mov dword ptr [esp + 0x14], edi
        ja loc_49928f
        cmp eax, dword ptr [esi + 0x4]
        jae loc_499295

loc_49928f:
        call dword ptr [mem_00925134]

loc_499295:
        lea esi, [edi - 0x8]
        cmp esi, dword ptr [ebp + 0x8]
        jb loc_4992a3
        call dword ptr [mem_00925134]

loc_4992a3:
        fld dword ptr [ebx + 0x4]
        lea ecx, [ebx + 0x4]
        fsub dword ptr [esi + 0x4]
        lea edx, [esi + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fabs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld qword ptr [mem_0093F7A8]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne loc_499308
        fstp st(0)
        fld dword ptr [ecx]
        fld dword ptr [edx]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne loc_4992e3
        mov ecx, edx

loc_4992e3:
        fld dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x24]
        fsub qword ptr [mem_0093F7A0]
        pop edi
        pop ebp
        pop ebx
        fstp dword ptr [eax]
        pop esi
        fld dword ptr [ecx]
        fadd qword ptr [mem_0093F798]
        fstp dword ptr [eax + 0x4]
        add esp, 0x10
        ret 0x4

loc_499308:
        fld dword ptr [ebx]
        fsub dword ptr [esi]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fabs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp loc_499340
        fld dword ptr [ebx]
        fld dword ptr [esi]
        fcompp
        fnstsw ax
        test ah, 0x41
        je loc_499336
        mov esi, ebx

loc_499336:
        fld dword ptr [esi]
        fadd qword ptr [mem_0093F798]
        jmp loc_49934a

loc_499340:
        fld dword ptr [esp + 0x18]
        fsub qword ptr [mem_0093F7A0]

loc_49934a:
        mov eax, dword ptr [esp + 0x24]
        fstp dword ptr [eax]
        pop edi
        fld dword ptr [esp + 0x18]
        pop ebp
        fsub qword ptr [mem_0093F790]
        pop ebx
        pop esi
        fstp dword ptr [eax + 0x4]
        add esp, 0x10
        ret 0x4
    }
}

// [0x0049FF90] sub_0049FF90 (410 bytes)
extern "C" void ext_0049CF20();
extern "C" void ext_0049CF40();
extern "C" void ext_004EB9B0();
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_0049FF90(void* self) {
    __asm {
        push -1
        push 0x8872f4
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        mov byte ptr [esi + 0x4], 1
        mov dword ptr [esi], 0x940484
        lea edi, [esi + 0x8]
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], ebx
        call ext_004EB9B0
        lea ebp, [esi + 0x10]
        mov ecx, ebp
        mov byte ptr [esp + 0x1c], 1
        call ext_00661980
        mov dword ptr [esi + 0x14], 0x93f18c
        mov dword ptr [esi + 0x18], 0x93f964
        lea ecx, [esi + 0x1c]
        mov byte ptr [esp + 0x1c], 2
        mov dword ptr [esi], 0x9405e8
        mov dword ptr [edi], 0x94054c
        mov dword ptr [ebp], 0x9404f4
        mov dword ptr [esi + 0x14], 0x9404ec
        mov dword ptr [esi + 0x18], 0x9404e0
        call dword ptr [mem_00924FE8]
        mov dword ptr [esi + 0x3c], ebx
        mov dword ptr [esi + 0x40], ebx
        mov dword ptr [esi + 0x44], ebx
        lea ecx, [esi + 0x48]
        mov byte ptr [esp + 0x1c], 4
        call dword ptr [mem_00924FE8]
        mov ebp, 1
        lea ecx, [esi + 0x70]
        mov byte ptr [esp + 0x1c], 5
        mov byte ptr [esi + 0x64], bl
        mov byte ptr [esi + 0x65], bl
        mov dword ptr [esi + 0x68], ebp
        mov byte ptr [esi + 0x6c], bl
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x8c]
        mov byte ptr [esp + 0x1c], 6
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0xa8]
        mov byte ptr [esp + 0x1c], 7
        call dword ptr [mem_00924FE8]
        lea edi, [esi + 0xc4]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 8
        call ext_0049CF20
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], ebx
        lea edi, [esi + 0xd0]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 9
        call ext_0049CF20
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], ebx
        lea edi, [esi + 0xdc]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0xa
        call ext_0049CF40
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], ebx
        fldz
        fst dword ptr [esi + 0xf4]
        mov byte ptr [esp + 0x1c], 0xb
        fst dword ptr [esi + 0xf0]
        fst dword ptr [esi + 0xec]
        lea ecx, [esi + 0x100]
        fstp dword ptr [esi + 0xe8]
        mov dword ptr [esi + 0xf8], ebx
        mov dword ptr [esi + 0xfc], ebx
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0x120], ebx
        mov dword ptr [esi + 0x124], ebx
        mov dword ptr [esi + 0x128], ebx
        pop edi
        mov dword ptr [esi + 0x12c], ebx
        mov dword ptr [esi + 0x130], ebp
        mov dword ptr [esi + 0x134], 0xffffffff
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0049F8D0] sub_0049F8D0 (412 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_0049AD20();
extern "C" void ext_0049E8D0();
extern "C" void ext_004EB9D0();
extern "C" char* ext_00594000();
extern "C" void ext_006246B0();
extern "C" void ext_0065C660();
extern "C" void ext_0065D3A0();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C(void* arg);
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0049F8D0(void* self) {
    __asm {
        push -1
        push 0x88722a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebp, [esi + 0x8]
        lea ebx, [esi + 0x10]
        push edi
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esi], 0x9405e8
        mov dword ptr [ebp], 0x94054c
        mov dword ptr [ebx], 0x9404f4
        mov dword ptr [esi + 0x14], 0x9404ec
        mov dword ptr [esi + 0x18], 0x9404e0
        mov eax, dword ptr [esi + 0x12c]
        test eax, eax
        mov dword ptr [esp + 0x24], 0xd
        je short L_no_a
        mov dword ptr [eax + 0x154], 0
L_no_a:
        cmp dword ptr [esi + 0x134], -1
        je short L_no_b
        call ext_00594000
        test eax, eax
        je short L_no_b
        call ext_00594000
        mov ecx, dword ptr [esi + 0x134]
        push ecx
        lea ecx, [eax + 0xfc]
        call ext_0065D3A0
L_no_b:
        lea ecx, [esi + 0x11c]
        mov byte ptr [esp + 0x24], 0xc
        call ext_006246B0
        lea ecx, [esi + 0x100]
        mov byte ptr [esp + 0x24], 0xb
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0xdc]
        mov byte ptr [esp + 0x24], 0xa
        call ext_0049AD20
        lea edi, [esi + 0xd0]
        mov ecx, edi
        mov byte ptr [esp + 0x24], 0x9
        call ext_0049E8D0
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        mov dword ptr [edi + 0x4], 0
        lea edi, [esi + 0xc4]
        add esp, 0x4
        mov ecx, edi
        mov byte ptr [esp + 0x24], 0x8
        call ext_0049E8D0
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        lea ecx, [esi + 0xa8]
        mov dword ptr [edi + 0x4], 0
        mov byte ptr [esp + 0x24], 0x7
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x8c]
        mov byte ptr [esp + 0x24], 0x6
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x70]
        mov byte ptr [esp + 0x24], 0x5
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x48]
        mov byte ptr [esp + 0x24], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x24], 0x3
        call ext_004026E0
        lea ecx, [esi + 0x1c]
        mov byte ptr [esp + 0x24], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, ebx
        mov byte ptr [esp + 0x24], 0x1
        call ext_0065F440
        mov ecx, ebp
        mov byte ptr [esp + 0x24], 0x0
        call ext_004EB9D0
        mov ecx, esi
        mov dword ptr [esp + 0x24], -1
        call ext_0065C660
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x004953D0] sub_004953D0 (59 bytes)
extern "C" void ext_0058F200();
extern "C" __declspec(naked) void* __fastcall fn_004953D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0058F200
        mov dword ptr [esi + 0x150], 0x928eac
        mov dword ptr [esi], 0x935afc
        mov dword ptr [esi + 0x4], 0x935ab4
        mov dword ptr [esi + 0x8], 0x935a74
        mov dword ptr [esi + 0xc], 0x935a24
        mov dword ptr [esi + 0x150], 0x935a10
        mov eax, esi
        pop esi
        ret
    }
}

// [0x004952A0] sub_004952A0 (49 bytes)
extern "C" void ext_005ABD70();

extern "C" void* __fastcall fn_004952A0(void* self) {
    ext_005ABD70();
    unsigned int* p = (unsigned int*)self;
    p[0] = 0x93ee24;
    p[1] = 0x93eddc;
    p[2] = 0x93ed9c;
    p[3] = 0x93ed4c;
    p[0x150 / 4] = 0x93ed38;
    return self;
}

extern "C" void ext_00435D00();
extern "C" int mem_00924FEC;
extern "C" int mem_00924E94;

// [0x0049CCE0] sub_0049CCE0 (77 bytes)
extern "C" __declspec(naked) void __fastcall fn_0049CCE0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ecx, esi
        call dword ptr [mem_00924FEC]
        test al, al
        jne done
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 0x10]
        push 0x93f198
        push esi
        mov esi, dword ptr [mem_00924E94]
        push 0x93f198
        push eax
        push ecx
        call esi
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call esi
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
    done:
        pop esi
        ret 0xc
    }
}

// [0x00492D00] sub_00492D00 (508 bytes)
extern "C" void ext_00492A80();
extern "C" void ext_00492AD0();
extern "C" void ext_00492C60();
extern "C" void ext_006A6DD2();
extern "C" int mem_0088F4C2;
extern "C" int mem_0092C530;
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00928ECC;
extern "C" int mem_00928ED8;
extern "C" int mem_009CDF20;
extern "C" __declspec(naked) void __fastcall fn_00492D00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0088F4C2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x8], 0xccccccb
        jb L_492d7d
        push offset mem_0092C530
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x50], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x54], 0x1
        mov dword ptr [esp + 0x24], offset mem_00928ECC
        call dword ptr [mem_00924FE0]
        push offset mem_009CDF20
        lea ecx, [esp + 0x24]
        push ecx
        mov byte ptr [esp + 0x58], 0x0
        mov dword ptr [esp + 0x28], offset mem_00928ED8
        call ext_006A6DD2
    L_492d7d:
        mov edx, dword ptr [esp + 0x64]
        mov eax, dword ptr [edi + 0x4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x6c]
        push 0x0
        push edx
        push eax
        push esi
        push eax
        call ext_00492C60
        mov ebp, eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, 0x1
        add dword ptr [edi + 0x8], ebx
        cmp esi, eax
        jne L_492db7
        mov dword ptr [eax + 0x4], ebp
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], ebp
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x8], ebp
        jmp L_492dd9
    L_492db7:
        cmp byte ptr [esp + 0x68], 0x0
        je L_492dcb
        mov dword ptr [esi], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        jne L_492dd9
        mov dword ptr [eax], ebp
        jmp L_492dd9
    L_492dcb:
        mov dword ptr [esi + 0x8], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax + 0x8]
        jne L_492dd9
        mov dword ptr [eax + 0x8], ebp
    L_492dd9:
        mov edx, dword ptr [ebp + 0x4]
        cmp byte ptr [edx + 0x20], 0x0
        lea eax, [ebp + 0x4]
        mov esi, ebp
        jne L_492ed5
        jmp L_492df0
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_492df0:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        cmp ecx, dword ptr [edx]
        jne L_492e4a
        mov edx, dword ptr [edx + 0x8]
        cmp byte ptr [edx + 0x20], 0x0
        jne L_492e1b
        mov byte ptr [ecx + 0x20], bl
        mov byte ptr [edx + 0x20], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x20], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_492ec5
    L_492e1b:
        cmp esi, dword ptr [ecx + 0x8]
        jne L_492e2a
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_00492A80
    L_492e2a:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x20], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x20], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, edi
        call ext_00492AD0
        jmp L_492ec5
    L_492e4a:
        mov edx, dword ptr [edx]
        cmp byte ptr [edx + 0x20], 0x0
        jne L_492e68
        mov byte ptr [ecx + 0x20], bl
        mov byte ptr [edx + 0x20], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x20], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_492ec5
    L_492e68:
        cmp esi, dword ptr [ecx]
        jne L_492e76
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_00492AD0
    L_492e76:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x20], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x20], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + 0x21], 0x0
        jne L_492e9f
        mov dword ptr [edx + 0x4], eax
    L_492e9f:
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edx + 0x4]
        jne L_492eb2
        mov dword ptr [edx + 0x4], ecx
        jmp L_492ec0
    L_492eb2:
        mov edx, dword ptr [eax + 0x4]
        cmp eax, dword ptr [edx]
        jne L_492ebd
        mov dword ptr [edx], ecx
        jmp L_492ec0
    L_492ebd:
        mov dword ptr [edx + 0x8], ecx
    L_492ec0:
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x4], ecx
    L_492ec5:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x20], 0x0
        lea eax, [esi + 0x4]
        je L_492df0
    L_492ed5:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [esp + 0x54]
        mov byte ptr [eax + 0x20], bl
        mov eax, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        mov dword ptr [eax], edi
        pop ebx
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret 0x10
    }
}

// [0x00493270] sub_00493270 (185 bytes)
extern "C" void ext_00492B30();
extern "C" void ext_00492D00();
extern "C" __declspec(naked) void __fastcall fn_00493270(void* self, int edx_unused, void* out, unsigned* key) {
    __asm {
        sub esp, 0ch
        push ebp
        mov ebp, dword ptr [esp + 18h]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 4]
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 21h], 0
        mov cl, 1
        mov byte ptr [esp + 0ch], cl
        jne L_AFTER_SEARCH
        mov edx, dword ptr [ebp]
    L_SEARCH:
        cmp edx, dword ptr [eax + 0ch]
        mov esi, eax
        setb cl
        test cl, cl
        mov byte ptr [esp + 0ch], cl
        je L_GO_RIGHT
        mov eax, dword ptr [eax]
        jmp L_CHECK_NIL
    L_GO_RIGHT:
        mov eax, dword ptr [eax + 8]
    L_CHECK_NIL:
        cmp byte ptr [eax + 21h], 0
        je L_SEARCH
    L_AFTER_SEARCH:
        test cl, cl
        mov edx, esi
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 10h], edi
        je L_TAIL_CHECK
        mov eax, dword ptr [edi + 4]
        cmp esi, dword ptr [eax]
        lea ecx, [esp + 10h]
        jne L_DECREMENT
        push ebp
        push esi
        push 1
        push ecx
    L_INSERT:
        mov ecx, edi
        call ext_00492D00
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [ecx + 4]
        pop edi
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], ecx
        mov byte ptr [eax + 8], 1
        pop ebp
        add esp, 0ch
        ret 8
    L_DECREMENT:
        call ext_00492B30
        mov edx, dword ptr [esp + 14h]
    L_TAIL_CHECK:
        mov eax, dword ptr [edx + 0ch]
        cmp eax, dword ptr [ebp]
        jae L_RETURN_EXISTING
        mov ecx, dword ptr [esp + 0ch]
        push ebp
        push esi
        push ecx
        lea edx, [esp + 1ch]
        push edx
        jmp L_INSERT
    L_RETURN_EXISTING:
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov byte ptr [eax + 8], 0
        pop ebp
        add esp, 0ch
        ret 8
    }
}

// [0x004970D0] sub_004970D0 (522 bytes)
extern "C" void ext_00404F00();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FEC;
extern "C" int mem_00924ECC;
extern "C" int mem_00ADCB28;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FD4;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FCC;

extern "C" __declspec(naked) void __fastcall fn_004970D0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x886a2f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x78
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        mov dword ptr [esp + 0xc], ebx
        mov esi, dword ptr [esp + 0x94]
        push edi
        mov edi, ecx
        mov ecx, esi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x90], ebx
        call dword ptr [mem_00924FE8]
        lea ecx, [edi + 0x4c]
        mov dword ptr [esp + 0x90], ebx
        mov dword ptr [esp + 0x10], 1
        call dword ptr [mem_00924FEC]
        test al, al
        mov ebp, dword ptr [mem_00924ECC]
        jne lbl_49724b
        mov eax, dword ptr [mem_00ADCB28]
        cmp eax, ebx
        je lbl_497206
        cmp byte ptr [eax + 0x2f], bl
        je lbl_497206
        mov eax, dword ptr [esp + 0x9c]
        push eax
        lea ecx, [esp + 0x70]
        push ecx
        call ext_00404F00
        add esp, 8
        mov edi, eax
        push 0x93bf10
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0x94], 1
        call dword ptr [mem_00924FE4]
        push edi
        push eax
        lea edx, [esp + 0x3c]
        push edx
        mov byte ptr [esp + 0x9c], 2
        call dword ptr [mem_00924FD0]
        push 0x93f1a0
        push eax
        lea eax, [esp + 0x2c]
        push eax
        mov byte ptr [esp + 0xa8], 3
        call ebp
        add esp, 0x18
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x94], 4
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x90], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x90], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x90], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x6c]
        mov byte ptr [esp + 0x90], bl
        call dword ptr [mem_00924FF4]
        mov edi, dword ptr [esp + 0x14]
        jmp lbl_497213
    lbl_497206:
        push 0x93f19c
        mov ecx, esi
        call dword ptr [mem_00924FD4]
    lbl_497213:
        push 0x93f198
        lea eax, [edi + 0x4c]
        push eax
        lea ecx, [esp + 0x74]
        push ecx
        call ebp
        add esp, 0xc
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x94], 5
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x6c]
        mov byte ptr [esp + 0x90], bl
        call dword ptr [mem_00924FF4]
    lbl_49724b:
        add edi, 0x68
        mov ecx, edi
        call dword ptr [mem_00924FEC]
        test al, al
        jne lbl_4972bd
        push edi
        lea edx, [esp + 0x54]
        push 0x93f190
        push edx
        call dword ptr [mem_00924FCC]
        push 0x93f198
        push eax
        lea eax, [esp + 0x80]
        push eax
        mov dword ptr [esp + 0xa8], 6
        call ebp
        add esp, 0x18
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x94], 7
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x6c]
        mov byte ptr [esp + 0x90], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x90], bl
        call dword ptr [mem_00924FF4]
    lbl_4972bd:
        mov ecx, dword ptr [esp + 0x88]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x84
        ret 8
    }
}

// [0x00498C50] sub_00498C50 (537 bytes)
extern "C" void ext_00497530();
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_00498C50(void* self) {
    __asm {
        sub esp, 0x34
        push esi
        mov esi, ecx
        fld dword ptr [esi]
        push edi
        fadd dword ptr [esi + 0x8]
        mov edi, dword ptr [esp + 0x44]
        fld qword ptr [mem_00993828]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fmul st(1), st(0)
        fxch st(1)
        push eax
        push ecx
        fstp dword ptr [esp + 0x10]
        lea ecx, [esp + 0x2c]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x20]
        fld dword ptr [esi + 0xc]
        fadd dword ptr [esi + 0x4]
        fmulp st(1), st(0)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x24]
        push edx
        push eax
        call ext_00497530
        cmp dword ptr [esp + 0x2c], 0x2
        jne L_498cd5
        fld dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x1c]
        fcompp
        fnstsw ax
        fld dword ptr [edi]
        test ah, 0x1
        mov eax, dword ptr [esp + 0x40]
        fstp dword ptr [eax]
        jne L_498e0d
        fld dword ptr [esi + 0x4]
        pop edi
        fstp dword ptr [eax + 0x4]
        pop esi
        add esp, 0x34
        ret 0x8
    L_498cd5:
        fld dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x18]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x1c]
        fld dword ptr [esi]
        push ecx
        fstp dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x14]
        fld dword ptr [esi + 0xc]
        push edx
        fstp dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x1c]
        push eax
        push ecx
        lea ecx, [esp + 0x40]
        call ext_00497530
        fld dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x18]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x1c]
        fld dword ptr [esi]
        push edx
        fstp dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x4]
        push eax
        fstp dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        push edx
        lea ecx, [esp + 0x28]
        call ext_00497530
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [edi]
        fmul dword ptr [esp + 0x30]
        fadd dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi]
        fmul dword ptr [esp + 0x18]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        fld dword ptr [esp + 0x18]
        test ah, 0x1
        jne L_498dab
        fcom st(2)
        fnstsw ax
        test ah, 0x1
        jne L_498dab
        fstp st(2)
        mov eax, dword ptr [esp + 0x40]
        fstp st(0)
        pop edi
        fstp st(0)
        fld dword ptr [esi + 0x4]
        fsub dword ptr [esp + 0x24]
        fdiv dword ptr [esp + 0x20]
        fstp dword ptr [eax]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [eax + 0x4]
        pop esi
        add esp, 0x34
        ret 0x8
    L_498dab:
        fxch st(2)
        fcom st(1)
        fnstsw ax
        test ah, 0x1
        jne L_498de4
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        jp L_498de4
        mov eax, dword ptr [esp + 0x40]
        fstp st(0)
        fstp st(0)
        pop edi
        fstp st(0)
        fld dword ptr [esi + 0x8]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x20]
        fmul dword ptr [esi + 0x8]
        pop esi
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [eax + 0x4]
        add esp, 0x34
        ret 0x8
    L_498de4:
        fcom st(1)
        fnstsw ax
        test ah, 0x1
        jne L_498e1b
        fcom st(2)
        fnstsw ax
        test ah, 0x1
        jne L_498e1b
        fstp st(0)
        mov eax, dword ptr [esp + 0x40]
        fstp st(0)
        fstp st(0)
        fld dword ptr [esi + 0xc]
        fsub dword ptr [esp + 0x28]
        fdiv dword ptr [esp + 0x24]
        fstp dword ptr [eax]
    L_498e0d:
        fld dword ptr [esi + 0xc]
        pop edi
        fstp dword ptr [eax + 0x4]
        pop esi
        add esp, 0x34
        ret 0x8
    L_498e1b:
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jp L_498e4c
        fcompp
        fnstsw ax
        test ah, 0x1
        jne L_498e50
        fld dword ptr [esi]
        mov eax, dword ptr [esp + 0x40]
        fstp dword ptr [eax]
        pop edi
        fld dword ptr [esi]
        pop esi
        fmul dword ptr [esp + 0x1c]
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [eax + 0x4]
        add esp, 0x34
        ret 0x8
    L_498e4c:
        fstp st(0)
        fstp st(0)
    L_498e50:
        mov eax, dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax]
        pop edi
        fld dword ptr [esp + 0x8]
        pop esi
        fstp dword ptr [eax + 0x4]
        add esp, 0x34
        ret 0x8
    }
}

// [0x00492610] sub_00492610 (538 bytes)
// SEH-framed state machine on self->state (self[0]): 0 = teardown calls on self->inner (+0x258),
// 1 = builds/compares std::string at self+0x14 and sets a mode flag, 2 = forwards a string from self->[8].
extern "C" void ext_004925D0();
extern "C" void ext_00493EE0();
extern "C" void ext_00493F60();
extern "C" void ext_00493F80();
extern "C" void ext_00493FF0();
extern "C" void ext_00584A10();
extern "C" char* ext_00594000();
extern "C" __declspec(naked) void __fastcall fn_00492610(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x885bb4
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x70
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        sub eax, 0x0
        je L_state0
        sub eax, 0x1
        je L_state1
        sub eax, 0x1
        jne L_exit
        mov esi, dword ptr [esi + 0x8]
        lea ecx, [esi + 0x4]
        call ext_00584A10
        push eax
        lea eax, [esp + 0x24]
        push 0xadb4dc
        push eax
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        mov dword ptr [esp + 0x7c], 0x0
        call ext_00594000
        lea ecx, [esp + 0x20]
        push ecx
        lea ecx, [eax + 0x258]
        call ext_00493F60
        call ext_00594000
        push 0x0
        lea ecx, [eax + 0x258]
        call ext_00493FF0
        call ext_00594000
        lea ecx, [eax + 0x258]
        call ext_00493EE0
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x7c], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop esi
        mov ecx, dword ptr [esp + 0x70]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x7c
        ret
    L_state1:
        push 0x928b5d
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        push 0x0
        mov ecx, esi
        mov dword ptr [esp + 0x80], 0x1
        call ext_004925D0
        test al, al
        je L_f6
        push 0xadb824
        jmp L_assign
    L_f6:
        push 0x1
        mov ecx, esi
        call ext_004925D0
        test al, al
        je L_712
        push 0xadb840
    L_assign:
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FDC]
    L_712:
        add esi, 0x14
        push 0x928b5d
        push esi
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je L_755
        push esi
        lea edx, [esp + 0x8]
        push edx
        lea eax, [esp + 0x44]
        push eax
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x80], 0x2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x3c]
        jmp L_784
    L_755:
        push 0xadb85c
        lea ecx, [esp + 0x8]
        push ecx
        lea edx, [esp + 0x60]
        push edx
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x80], 0x3
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x58]
    L_784:
        mov byte ptr [esp + 0x7c], 0x1
        call dword ptr [mem_00924FF4]
        call ext_00594000
        lea ecx, [esp + 0x4]
        push ecx
        lea ecx, [eax + 0x258]
        call ext_00493F60
        call ext_00594000
        push 0x1
        lea ecx, [eax + 0x258]
        call ext_00493FF0
        call ext_00594000
        lea ecx, [eax + 0x258]
        call ext_00493EE0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x7c], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop esi
        mov ecx, dword ptr [esp + 0x70]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x7c
        ret
    L_state0:
        call ext_00594000
        lea ecx, [eax + 0x258]
        call ext_00493F80
        call ext_00594000
        push 0x0
        lea ecx, [eax + 0x258]
        call ext_00493FF0
        call ext_00594000
        lea ecx, [eax + 0x258]
        call ext_00493EE0
    L_exit:
        mov ecx, dword ptr [esp + 0x74]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x7c
        ret
    }
}

// [0x004996E0] sub_004996E0 (253 bytes)
extern "C" void ext_00498C50();
extern "C" int mem_00925134;
extern "C" int mem_0093F7B8;

typedef int* (__thiscall *Sub00498C50Fn)(void* self, int* out, int idx);

extern "C" __declspec(naked) void __fastcall fn_004996E0(void* self) {
    __asm {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x88]
        test ecx, ecx
        lea esi, [edi + 0x84]
        je L_end
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 3
        cmp eax, 2
        jb L_end
        cmp byte ptr [edi + 0xb4], 0
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        jne L_float
        cmp dword ptr [edi + 0xb8], 0
        je L_float
        mov ebx, ecx
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_c1
        call ebp
        cmp ebx, dword ptr [esi + 0x8]
    L_c1:
        jb L_c2
        call ebp
    L_c2:
        mov ecx, dword ptr [edi + 0xb8]
        push ebx
        lea eax, [esp + 0x14]
        push eax
        add ecx, 0xe8
        call ext_00498C50
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 0x94], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [edi + 0x98], edx
        jmp L_tail
    L_float:
        fld dword ptr [mem_0093F7B8]
        fst dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [edi + 0x94], eax
        mov dword ptr [edi + 0x98], ecx
    L_tail:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe T1
        call ebp
    T1:
        lea eax, [ebx - 0x8]
        cmp eax, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x14], ebx
        ja T2
        cmp eax, dword ptr [esi + 0x4]
        jae T3
    T2:
        call ebp
    T3:
        add ebx, -0x8
        cmp ebx, dword ptr [esi + 0x8]
        jb T4
        call ebp
    T4:
        mov eax, dword ptr [edi + 0xbc]
        test eax, eax
        je L_epi
        push ebx
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [eax + 0xe8]
        call ext_00498C50
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 0x9c], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [edi + 0xa0], edx
    L_epi:
        pop ebp
        pop ebx
    L_end:
        pop edi
        pop esi
        add esp, 8
        ret
    }
}

// [0x004936E0] sub_004936E0 (59 bytes)
extern "C" void ext_00492610();
extern "C" void ext_00492830();
extern "C" void ext_00493370();
extern "C" __declspec(naked) void __fastcall fn_004936E0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x1
        jne L493717
        mov eax, dword ptr [esp + 0x8]
        test eax, eax
        jne L4936F5
        mov eax, dword ptr [esi + 0xc]
        jmp L4936FD
    L4936F5:
        cmp eax, 0x1
        jne L493704
        mov eax, dword ptr [esi + 0x10]
    L4936FD:
        test eax, eax
        je L493704
        mov dword ptr [esi + 0x8], eax
    L493704:
        call ext_00493370
        mov ecx, esi
        call ext_00492610
        mov ecx, esi
        call ext_00492830
    L493717:
        pop esi
        ret 0x4
    }
}

// [0x004938E0] sub_004938E0 (83 bytes)
extern "C" void ext_00492610();
extern "C" void ext_00493370();
extern "C" void ext_004936C0();
extern "C" __declspec(naked) bool __fastcall fn_004938E0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov esi, ecx
        je sub_else
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x28]
        mov ecx, edi
        call edx
        test al, al
        jne sub_else
        mov ecx, esi
        mov dword ptr [esi], 0x2
        mov dword ptr [esi + 0x8], edi
        mov dword ptr [esi + 0xc], 0x0
        mov dword ptr [esi + 0x10], 0x0
        call ext_00493370
        mov ecx, esi
        call ext_00492610
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    sub_else:
        mov ecx, esi
        call ext_004936C0
        pop edi
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x00499900] sub_00499900 (89 bytes)
extern "C" void ext_004996E0();
extern "C" int mem_00924FDC;
extern "C" int mem_00924EA8;
extern "C" __declspec(naked) void __fastcall fn_00499900(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov cl, byte ptr [esp + 0x10]
        mov dword ptr [esi + 0xb8], eax
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        mov dword ptr [esi + 0xbc], eax
        mov byte ptr [esi + 0xb4], cl
        je null_path
        mov edx, dword ptr [eax + 0x8]
        lea ecx, [eax + 0x8]
        mov eax, dword ptr [edx + 0x4]
        call eax
        push eax
        lea ecx, [esi + 0x30]
        call dword ptr [mem_00924FDC]
        mov ecx, esi
        call ext_004996E0
        pop esi
        ret 0xc
null_path:
        lea ecx, [esi + 0x30]
        call dword ptr [mem_00924EA8]
        mov ecx, esi
        call ext_004996E0
        pop esi
        ret 0xc
    }
}

// [0x00493840] sub_00493840 (156 bytes)
extern "C" bool __fastcall ext_00492900(void* self);
extern "C" void __fastcall ext_0059DCC0(void* obj);
extern "C" int mem_00ADB5BC;
extern "C" int mem_00ADB62C;

extern "C" bool __fastcall fn_00493840(void* self) {
    int* s = (int*)self;
    s[0] = 1;
    s[2] = 0;
    s[3] = 0;
    s[4] = 0;
    if (!ext_00492900(self)) {
        ((void (__fastcall*)(void*))ext_004936C0)(self);
        return false;
    }
    if (s[3]) ext_0059DCC0((void*)s[3]);
    if (s[4]) ext_0059DCC0((void*)s[4]);
    typedef void (__thiscall *VFn)(void*, void*);
    if (s[3]) {
        void* sub = (char*)s[3] + 4;
        VFn* vt = *(VFn**)sub;
        vt[0x60 / 4](sub, &mem_00ADB5BC);
    }
    if (s[4]) {
        void* sub = (char*)s[4] + 4;
        VFn* vt = *(VFn**)sub;
        vt[0x60 / 4](sub, &mem_00ADB62C);
    }
    s[2] = s[3] ? s[3] : s[4];
    ((void (__fastcall*)(void*))ext_00493370)(self);
    ((void (__fastcall*)(void*))ext_00492830)(self);
    ((void (__fastcall*)(void*))ext_00492610)(self);
    return true;
}

// [0x0049F710] sub_0049F710 (69 bytes)
extern "C" void ext_0049ED70();
extern "C" void ext_00499900();

extern "C" __declspec(naked) void __cdecl fn_0049F710() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x24]
        push ebp
        mov ebp, dword ptr [esp + 0x24]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
    L_0049F720:
        cmp esi, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x28]
        je L_0049F744
        lea edi, [esi + 0x8]
        lea eax, [edi + 0x30]
        push eax
        call ext_0049ED70
        push ebx
        push eax
        push ebp
        mov ecx, edi
        call ext_00499900
        mov esi, dword ptr [esi]
        jmp L_0049F720
    L_0049F744:
        mov eax, dword ptr [esp + 0x14]
        pop edi
        mov dword ptr [eax], ecx
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        mov dword ptr [eax + 0x8], ebx
        pop ebx
        ret
    }
}

// [0x0049FBF0] sub_0049FBF0 (135 bytes)
extern "C" void ext_0049F710();

extern "C" __declspec(naked) void __fastcall fn_0049FBF0(void* self) {
    __asm {
        sub esp, 0xc
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0xfc]
        test ebx, ebx
        push edi
        je L_0049FC39
        mov edx, dword ptr [esi + 0xc8]
        lea eax, [esi + 0xc4]
        sub esp, 0xc
        mov ecx, edx
        mov edi, dword ptr [ecx]
        mov ecx, esp
        push edx
        push eax
        mov dword ptr [ecx], ebx
        push edi
        mov byte ptr [esp + 0x2c], 0
        mov ebx, dword ptr [esp + 0x2c]
        push eax
        lea edx, [esp + 0x28]
        mov dword ptr [ecx + 0x4], esi
        push edx
        mov dword ptr [ecx + 0x8], ebx
        call ext_0049F710
        add esp, 0x20
    L_0049FC39:
        mov edx, dword ptr [esi + 0xd4]
        lea eax, [esi + 0xd0]
        sub esp, 0xc
        mov ecx, edx
        mov edi, dword ptr [ecx]
        mov ecx, esp
        push edx
        push eax
        mov dword ptr [ecx], esi
        push edi
        mov dword ptr [ecx + 0x4], esi
        mov byte ptr [esp + 0x2c], 1
        mov esi, dword ptr [esp + 0x2c]
        push eax
        lea edx, [esp + 0x28]
        push edx
        mov dword ptr [ecx + 0x8], esi
        call ext_0049F710
        add esp, 0x20
        pop edi
        pop esi
        pop ebx
        add esp, 0xc
        ret
    }
}

extern "C" void ext_004928C0();
extern "C" void ext_004928E0();
extern "C" void ext_00492A80();
extern "C" void ext_00492AD0();
extern "C" void ext_00492BC0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;

// [0x00492F00] sub_00492F00 (696 bytes)
extern "C" __declspec(naked) void __fastcall fn_00492F00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x88f4c2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x48
        cmp byte ptr [eax + 0x21], 0x0
        push ebp
        mov ebp, ecx
        je L_492f7e
        push 0x929218
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x54], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x58], 0x1
        mov dword ptr [esp + 0x28], 0x928ecc
        call dword ptr [mem_00924FE0]
        push 0x9ce164
        lea ecx, [esp + 0x28]
        push ecx
        mov byte ptr [esp + 0x5c], 0x0
        mov dword ptr [esp + 0x2c], 0x928ee4
        call ext_006A6DD2
    L_492f7e:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x10], ebx
        call ext_00492BC0
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x21], 0x0
        je L_492f9d
        mov edi, dword ptr [ebx + 0x8]
        jmp L_492fb5
    L_492f9d:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0x21], 0x0
        je L_492faa
        mov edi, eax
        jmp L_492fb5
    L_492faa:
        mov ecx, dword ptr [esp + 0x70]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 0x8]
        jne L_493020
    L_492fb5:
        cmp byte ptr [edi + 0x21], 0x0
        mov esi, dword ptr [ebx + 0x4]
        jne L_492fc1
        mov dword ptr [edi + 0x4], esi
    L_492fc1:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_492fce
        mov dword ptr [eax + 0x4], edi
        jmp L_492fd9
    L_492fce:
        cmp dword ptr [esi], ebx
        jne L_492fd6
        mov dword ptr [esi], edi
        jmp L_492fd9
    L_492fd6:
        mov dword ptr [esi + 0x8], edi
    L_492fd9:
        mov ebx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 0x10]
        jne L_492ff9
        cmp byte ptr [edi + 0x21], 0x0
        je L_492fee
        mov eax, esi
        jmp L_492ff7
    L_492fee:
        push edi
        call ext_004928E0
        add esp, 0x4
    L_492ff7:
        mov dword ptr [ebx], eax
    L_492ff9:
        mov ebx, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        cmp dword ptr [ebx + 0x8], ecx
        jne L_493077
        cmp byte ptr [edi + 0x21], 0x0
        je L_493012
        mov eax, esi
        mov dword ptr [ebx + 0x8], eax
        jmp L_493077
    L_493012:
        push edi
        call ext_004928C0
        add esp, 0x4
        mov dword ptr [ebx + 0x8], eax
        jmp L_493077
    L_493020:
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 0x8]
        jne L_493030
        mov esi, ecx
        jmp L_49304a
    L_493030:
        cmp byte ptr [edi + 0x21], 0x0
        mov esi, dword ptr [ecx + 0x4]
        jne L_49303c
        mov dword ptr [edi + 0x4], esi
    L_49303c:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x4], ecx
    L_49304a:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_493057
        mov dword ptr [eax + 0x4], ecx
        jmp L_493065
    L_493057:
        mov eax, dword ptr [ebx + 0x4]
        cmp dword ptr [eax], ebx
        jne L_493062
        mov dword ptr [eax], ecx
        jmp L_493065
    L_493062:
        mov dword ptr [eax + 0x8], ecx
    L_493065:
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov dl, byte ptr [ebx + 0x20]
        mov al, byte ptr [ecx + 0x20]
        mov byte ptr [ecx + 0x20], dl
        mov byte ptr [ebx + 0x20], al
    L_493077:
        mov eax, dword ptr [esp + 0x10]
        mov bl, 0x1
        cmp byte ptr [eax + 0x20], bl
        jne L_493178
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx + 0x4]
        je L_493175
    L_493092:
        cmp byte ptr [edi + 0x20], bl
        jne L_493175
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L_493104
        mov eax, dword ptr [esi + 0x8]
        cmp byte ptr [eax + 0x20], 0x0
        jne L_4930bc
        mov byte ptr [eax + 0x20], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x20], 0x0
        call ext_00492A80
        mov eax, dword ptr [esi + 0x8]
    L_4930bc:
        cmp byte ptr [eax + 0x21], 0x0
        jne L_493134
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0x20], bl
        jne L_4930d1
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x20], bl
        je L_493130
    L_4930d1:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x20], bl
        jne L_4930eb
        mov byte ptr [edx + 0x20], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x20], 0x0
        call ext_00492AD0
        mov eax, dword ptr [esi + 0x8]
    L_4930eb:
        mov cl, byte ptr [esi + 0x20]
        mov byte ptr [eax + 0x20], cl
        mov byte ptr [esi + 0x20], bl
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x20], bl
        call ext_00492A80
        jmp L_493175
    L_493104:
        cmp byte ptr [eax + 0x20], 0x0
        jne L_49311b
        mov byte ptr [eax + 0x20], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x20], 0x0
        call ext_00492AD0
        mov eax, dword ptr [esi]
    L_49311b:
        cmp byte ptr [eax + 0x21], 0x0
        jne L_493134
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x20], bl
        jne L_493147
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x20], bl
        jne L_493147
    L_493130:
        mov byte ptr [eax + 0x20], 0x0
    L_493134:
        mov edx, dword ptr [ebp + 0x4]
        mov edi, esi
        cmp edi, dword ptr [edx + 0x4]
        mov esi, dword ptr [esi + 0x4]
        jne L_493092
        jmp L_493175
    L_493147:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x20], bl
        jne L_49315f
        mov byte ptr [edx + 0x20], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x20], 0x0
        call ext_00492A80
        mov eax, dword ptr [esi]
    L_49315f:
        mov cl, byte ptr [esi + 0x20]
        mov byte ptr [eax + 0x20], cl
        mov byte ptr [esi + 0x20], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x20], bl
        call ext_00492AD0
    L_493175:
        mov byte ptr [edi + 0x20], bl
    L_493178:
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_006A5C5C
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0x4
        test eax, eax
        pop edi
        pop esi
        pop ebx
        jbe L_493195
        add eax, -0x1
        mov dword ptr [ebp + 0x8], eax
    L_493195:
        mov ecx, dword ptr [esp + 0x60]
        mov eax, dword ptr [esp + 0x5c]
        mov edx, dword ptr [esp + 0x64]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax + 0x4], edx
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x54
        ret 0xc
    }
}

// [0x00493940] sub_00493940 (35 bytes)
extern "C" void ext_00492610();
extern "C" void ext_00493770();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_00493940(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x14]
        call dword ptr [mem_00924FDC]
        mov ecx, esi
        call ext_00492610
        mov ecx, esi
        call ext_00493770
        pop esi
        ret 0x4
    }
}

// [0x004921E0] sub_004921E0 (37 bytes)
extern "C" void ext_004916B0();
extern "C" void ext_00492150();
extern "C" void ext_006798D0();
extern "C" int mem_00A9FAE8;

extern "C" __declspec(naked) void __fastcall fn_004921E0(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0x0
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_00492150
        mov ecx, dword ptr [mem_00A9FAE8]
        push ecx
        lea ecx, [esp + 0x4]
        call ext_004916B0
        pop ecx
        ret
    }
}

// [0x00491980] sub_00491980 (41 bytes)
extern "C" void ext_00491620();

extern "C" __declspec(naked) void __fastcall fn_00491980(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_00491620
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00491840] sub_00491840 (43 bytes)
extern "C" void ext_004915C0();
extern "C" __declspec(naked) void __fastcall fn_00491840(void* self) {
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
        call ext_004915C0
        add esp, 0x1c
        ret
    }
}

// [0x0049A9C0] sub_0049A9C0 (47 bytes)
extern "C" void ext_0049A7D0();
extern "C" void ext_0049A880();
extern "C" void ext_0049A930();
extern "C" int mem_0093F900;
extern "C" int mem_0093F908;
extern "C" __declspec(naked) void __cdecl fn_0049A9C0(void* a1) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0x0
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_0049A930
        push    offset mem_0093F908
        lea     ecx, [esp + 0x4]
        call    ext_0049A7D0
        push    offset mem_0093F900
        lea     ecx, [esp + 0x4]
        call    ext_0049A880
        pop     ecx
        ret
    }
}

// [0x0049D1C0] sub_0049D1C0 (170 bytes)
extern "C" void ext_006404E0();
extern "C" int mem_00925134;
extern "C" int mem_00B53B30;
extern "C" __declspec(naked) void __cdecl fn_0049D1C0() {
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0Ch]
        cmp     dword ptr [esi + 8], 0
        jne     loc_49D1D4
        mov     eax, offset mem_00B53B30
        pop     esi
        pop     ecx
        ret

    loc_49D1D4:
        mov     eax, dword ptr [esp + 14h]
        test    eax, eax
        push    ebx
        push    ebp
        push    edi
        je      loc_49D1ED
        mov     ecx, dword ptr [esp + 1Ch]
        push    eax
        call    ext_006404E0
        mov     ebp, eax
        jmp     loc_49D1F1

    loc_49D1ED:
        mov     ebp, dword ptr [esp + 1Ch]

    loc_49D1F1:
        mov     edi, dword ptr [esi + 4]
        mov     ebx, dword ptr [edi]
        mov     dword ptr [esp + 10h], edi
        _emit   0x8D
        _emit   0x9B
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00

    loc_49D200:
        cmp     ebx, edi
        je      loc_49D262
        cmp     dword ptr [esp + 24h], 0
        je      loc_49D23C
        cmp     ebx, dword ptr [esi + 4]
        jne     loc_49D216
        call    dword ptr [mem_00925134]

    loc_49D216:
        mov     eax, dword ptr [esp + 24h]
        mov     esi, dword ptr [ebx + 18h]
        lea     edi, [ebx + 18h]
        push    eax
        mov     ecx, ebp
        add     esi, 0Ch
        call    ext_006404E0
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, edi
        call    edx
        mov     esi, dword ptr [esp + 18h]
        mov     edi, dword ptr [esp + 10h]
        jmp     loc_49D253

    loc_49D23C:
        cmp     ebx, dword ptr [esi + 4]
        jne     loc_49D247
        call    dword ptr [mem_00925134]

    loc_49D247:
        mov     eax, dword ptr [ebx + 18h]
        mov     edx, dword ptr [eax + 0Ch]
        lea     ecx, [ebx + 18h]
        push    ebp
        call    edx

    loc_49D253:
        cmp     ebx, dword ptr [esi + 4]
        jne     loc_49D25E
        call    dword ptr [mem_00925134]

    loc_49D25E:
        mov     ebx, dword ptr [ebx]
        jmp     loc_49D200

    loc_49D262:
        pop     edi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     esi
        pop     ecx
        ret
    }
}

// [0x00493970] sub_00493970 (52 bytes)
extern "C" void ext_004935F0();
extern "C" __declspec(naked) void __fastcall fn_00493970(void* self) {
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
        call ext_004935F0
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

// [0x00493330] sub_00493330 (53 bytes)
extern "C" void __cdecl ext_006A5C5C(void*);

extern "C" __declspec(naked) void __fastcall fn_00493330(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp byte ptr [edi + 0x21], 0
        mov ebx, ecx
        mov esi, edi
        jne done
    loop_start:
        mov eax, dword ptr [esi + 8]
        push eax
        mov ecx, ebx
        call fn_00493330
        mov esi, dword ptr [esi]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0x21], 0
        mov edi, esi
        je loop_start
    done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00493770] sub_00493770 (193 bytes)
extern "C" void ext_00493330();
extern "C" void ext_00596660();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00493770(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x54]
        mov ecx, dword ptr [eax + 0x4]
        lea esi, [edi + 0x50]
        push ecx
        mov ecx, esi
        call ext_00493330
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [eax], eax
        mov esi, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], esi
        mov ebx, dword ptr [edi + 0x38]
        cmp dword ptr [edi + 0x34], ebx
        lea esi, [edi + 0x30]
        jbe L_493770_a
        call dword ptr [mem_00925134]
L_493770_a:
        push ebp
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L_493770_b
        call dword ptr [mem_00925134]
L_493770_b:
        push ebx
        push esi
        push ebp
        push esi
        lea edx, [esp + 0x20]
        push edx
        mov ecx, esi
        call ext_00596660
        mov eax, dword ptr [edi + 0x60]
        mov ecx, dword ptr [eax + 0x4]
        lea esi, [edi + 0x5c]
        push ecx
        mov ecx, esi
        call ext_00493330
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [eax], eax
        mov esi, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], esi
        lea esi, [edi + 0x40]
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        pop ebp
        jbe L_493770_c
        call dword ptr [mem_00925134]
L_493770_c:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_493770_d
        call dword ptr [mem_00925134]
L_493770_d:
        push edi
        push esi
        push ebx
        push esi
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00493C90] sub_00493C90 (152 bytes)
extern "C" void ext_00493770();
extern "C" void ext_006A6C99();
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_00493C90(void* self) {
    __asm {
        push -1
        push 0x885c28
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        mov eax, [esp + 0x14]
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        push 0x928b5d
        lea ecx, [esi + 0x14]
        mov [esp + 0xc], esi
        mov [esi], edi
        mov [esi + 0x4], eax
        mov [esi + 0x8], edi
        mov [esi + 0xc], edi
        mov [esi + 0x10], edi
        call dword ptr [mem_00924FE4]
        push 0x436f30
        push 0x6a0670
        push 2
        push 0x10
        lea ecx, [esi + 0x30]
        push ecx
        mov [esp + 0x28], edi
        call ext_006A6C99
        push 0x493970
        push 0x493c60
        push 2
        push 0xc
        lea edx, [esi + 0x50]
        push edx
        mov byte ptr [esp + 0x28], 1
        call ext_006A6C99
        mov ecx, esi
        mov byte ptr [esp + 0x14], 2
        call ext_00493770
        mov ecx, [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x004935F0] sub_004935F0 (203 bytes)
extern "C" void ext_00492BC0();
extern "C" void ext_00492F00();
extern "C" void ext_00493330();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004935F0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ebp, dword ptr [eax]
        je L_49362A
        cmp edi, esi
        je L_493630
L_49362A:
        call dword ptr [mem_00925134]
L_493630:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_493691
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_493647
        cmp eax, esi
        je L_49364D
L_493647:
        call dword ptr [mem_00925134]
L_49364D:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_493691
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_00493330
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 8
        ret 0x14
L_493691:
        test edi, edi
        je L_49369B
        cmp edi, dword ptr [esp + 0x28]
        je L_4936A1
L_49369B:
        call dword ptr [mem_00925134]
L_4936A1:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_4936C8
        lea ecx, [esp + 0x20]
        call ext_00492BC0
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_00492F00
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_493691
L_4936C8:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 8
        ret 0x14
    }
}

// [0x00491890] sub_00491890 (55 bytes)
extern "C" void ext_004917B0();

extern "C" __declspec(naked) int __fastcall fn_00491890(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_004917B0
        mov eax, esi
        imul eax, eax, 0x7c
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

extern "C" void ext_0065E350();

// [0x00497320] sub_00497320 (68 bytes)
extern "C" __declspec(naked) void __fastcall fn_00497320(void* self, int edx_unused, void* arg1, bool arg2) {
    __asm {
        cmp byte ptr [esp + 8], 0
        push esi
        mov esi, ecx
        je L1
        cmp dword ptr [esi + 0C8h], -1
        jne L3
    L1:
        test esi, esi
        je L2
        mov ecx, dword ptr [esp + 8]
        lea eax, [esi + 0Ch]
        push eax
        call ext_0065E350
        mov dword ptr [esi + 0C8h], eax
        pop esi
        ret 8
    L2:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        push eax
        call ext_0065E350
        mov dword ptr [esi + 0C8h], eax
    L3:
        pop esi
        ret 8
    }
}

// [0x00490640] sub_00490640 (72 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_00519D50();

extern "C" __declspec(naked) bool __fastcall fn_00490640(void* self, int edx_unused, unsigned int n) {
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
        jne L_49065E
        pop edi
        xor al, al
        pop esi
        ret 0x4
L_49065E:
        cmp edi, 0x1fffffff
        jbe L_49066B
        call ext_00405FB0
L_49066B:
        push eax
        push edi
        call ext_00519D50
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        add esp, 0x8
        lea eax, [eax + 8*edi]
        mov dword ptr [esi + 0xc], eax
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x00490C80] sub_00490C80 (317 bytes)
extern "C" void ext_0048A9A0();
extern "C" void ext_00490640();
extern "C" void ext_00490810();
extern "C" void ext_00490B80();
extern "C" void ext_004E31A0();
extern "C" __declspec(naked) void __fastcall fn_00490C80(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        cmp esi, edi
        je L490C80_self
        mov edx, dword ptr [edi + 4]
        test edx, edx
        push ebx
        push ebp
        je L490C80_clear
        mov ebp, dword ptr [edi + 8]
        mov ebx, ebp
        sub ebx, edx
        sar ebx, 3
        jne L490C80_nonempty
L490C80_clear:
        call ext_00490B80
        pop ebp
        pop ebx
        pop edi
        mov eax, esi
        pop esi
        ret 4
L490C80_nonempty:
        mov eax, dword ptr [esi + 4]
        test eax, eax
        jne L490C80_c1
        xor ecx, ecx
        jmp L490C80_c2
L490C80_c1:
        mov ecx, dword ptr [esi + 8]
        sub ecx, eax
        sar ecx, 3
L490C80_c2:
        cmp ebx, ecx
        ja L490C80_grow
        push eax
        push ebp
        push edx
        call ext_00490810
        mov ecx, dword ptr [esi + 8]
        push esi
        push ecx
        push eax
        call ext_0048A120
        mov eax, dword ptr [edi + 4]
        add esp, 18h
        test eax, eax
        jne L490C80_c3
        mov edx, dword ptr [esi + 4]
        pop ebp
        xor edi, edi
        lea eax, [edx + 8 * edi]
        pop ebx
        mov dword ptr [esi + 8], eax
        pop edi
        mov eax, esi
        pop esi
        ret 4
L490C80_c3:
        mov edi, dword ptr [edi + 8]
        mov edx, dword ptr [esi + 4]
        sub edi, eax
        pop ebp
        sar edi, 3
        lea eax, [edx + 8 * edi]
        pop ebx
        mov dword ptr [esi + 8], eax
        pop edi
        mov eax, esi
        pop esi
        ret 4
L490C80_grow:
        test eax, eax
        jne L490C80_g1
        xor ecx, ecx
        jmp L490C80_g2
L490C80_g1:
        mov ecx, dword ptr [esi + 0ch]
        sub ecx, eax
        sar ecx, 3
L490C80_g2:
        cmp ebx, ecx
        ja L490C80_realloc
        test eax, eax
        jne L490C80_g3
        xor ecx, ecx
        jmp L490C80_g4
L490C80_g3:
        mov ecx, dword ptr [esi + 8]
        sub ecx, eax
        sar ecx, 3
L490C80_g4:
        push eax
        lea ebx, [edx + 8 * ecx]
        push ebx
        push edx
        call ext_00490810
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [edi + 8]
        add esp, 0ch
        push ecx
        push edx
        push ebx
        mov ecx, esi
        call ext_004E31A0
        pop ebp
        pop ebx
        mov dword ptr [esi + 8], eax
        pop edi
        mov eax, esi
        pop esi
        ret 4
L490C80_realloc:
        test eax, eax
        je L490C80_nodel
        mov ecx, dword ptr [esi + 8]
        push ecx
        push eax
        mov ecx, esi
        call ext_0048A9A0
        mov edx, dword ptr [esi + 4]
        push edx
        call ext_006A5C5C
        add esp, 4
L490C80_nodel:
        mov ecx, dword ptr [edi + 4]
        test ecx, ecx
        jne L490C80_r1
        xor eax, eax
        jmp L490C80_r2
L490C80_r1:
        mov eax, dword ptr [edi + 8]
        sub eax, ecx
        sar eax, 3
L490C80_r2:
        push eax
        mov ecx, esi
        call ext_00490640
        test al, al
        je L490C80_end
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [edi + 8]
        mov edx, dword ptr [edi + 4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_004E31A0
        mov dword ptr [esi + 8], eax
L490C80_end:
        pop ebp
        pop ebx
L490C80_self:
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x00491150] sub_00491150 (82 bytes)
extern "C" void ext_0041CF50();
extern "C" void ext_00490C80();
extern "C" void ext_004AFF30();
extern "C" void ext_00505F00();
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __fastcall fn_00491150(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        push edi
        mov esi, ecx
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [edi + 1ch]
        mov dword ptr [esi + 1ch], eax
        mov cl, byte ptr [edi + 20h]
        lea edx, [edi + 24h]
        mov byte ptr [esi + 20h], cl
        push edx
        lea ecx, [esi + 24h]
        call ext_00505F00
        lea eax, [edi + 34h]
        push eax
        lea ecx, [esi + 34h]
        call ext_00490C80
        lea ecx, [edi + 44h]
        push ecx
        lea ecx, [esi + 44h]
        call ext_004AFF30
        add edi, 54h
        push edi
        lea ecx, [esi + 54h]
        call ext_0041CF50
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x00491290] sub_00491290 (236 bytes)
extern "C" void ext_004AFF30();
extern "C" void ext_00505F00();
extern "C" void ext_00490C80();
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void* __cdecl fn_00491290(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        cmp ebx, dword ptr [esp + 0ch]
        je L491290_empty
        push ebp
        mov ebp, dword ptr [esp + 14h]
        push esi
        push edi
        lea edi, [ebx + 70h]
        lea esi, [ebp + 70h]
        __asm _emit 0x8D __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00 // lea esp, [esp]
L491290_loop:
        mov al, byte ptr [ebx]
        mov byte ptr [ebp], al
        mov ecx, dword ptr [edi - 6ch]
        lea edx, [edi - 68h]
        mov dword ptr [esi - 6ch], ecx
        push edx
        lea ecx, [esi - 68h]
        call ext_004AFF30
        lea eax, [edi - 58h]
        push eax
        lea ecx, [esi - 58h]
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [edi - 3ch]
        mov dword ptr [esi - 3ch], ecx
        mov dl, byte ptr [edi - 38h]
        lea eax, [edi - 34h]
        push eax
        lea ecx, [esi - 34h]
        mov byte ptr [esi - 38h], dl
        call ext_00505F00
        lea ecx, [edi - 24h]
        push ecx
        lea ecx, [esi - 24h]
        call ext_00490C80
        lea edx, [edi - 14h]
        push edx
        lea ecx, [esi - 14h]
        call ext_004AFF30
        lea eax, [esi - 4]
        lea ecx, [edi - 4]
        cmp eax, ecx
        je L491290_skip
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je L491290_nofree
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 78h]
        lea eax, [esi - 4]
        push eax
        call edx
L491290_nofree:
        mov eax, dword ptr [edi]
        mov dword ptr [esi], eax
        cmp dword ptr [edi], 0
        je L491290_null
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 70h]
        lea eax, [edi - 4]
        push eax
        lea eax, [esp + 18h]
        push eax
        call edx
        jmp L491290_join
L491290_null:
        mov dword ptr [esp + 1ch], 0
        lea eax, [esp + 1ch]
L491290_join:
        mov eax, dword ptr [eax]
        mov dword ptr [esi - 4], eax
L491290_skip:
        fld dword ptr [edi + 4]
        add ebx, 7ch
        fstp dword ptr [esi + 4]
        add ebp, 7ch
        fld dword ptr [edi + 8]
        add esi, 7ch
        fstp dword ptr [esi - 74h]
        add edi, 7ch
        cmp ebx, dword ptr [esp + 18h]
        jne L491290_loop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
L491290_empty:
        mov eax, dword ptr [esp + 10h]
        pop ebx
        ret
    }
}

// [0x00491470] sub_00491470 (87 bytes)
extern "C" void ext_00491290();

extern "C" __declspec(naked) void* __cdecl fn_00491470(void* first, void* last, void* dest) {
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
        call ext_00491290
        sub esi, ebx
        mov eax, 0x84210843
        imul esi
        add edx, esi
        sar edx, 6
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        imul eax, eax, 0x7c
        add esp, 0x18
        add eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x004914D0] sub_004914D0 (236 bytes)
extern "C" void ext_004AFF30();
extern "C" void ext_00505F00();
extern "C" void ext_00490C80();
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __cdecl fn_004914D0(void* first, void* last, void* in) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x8
        cmp eax, dword ptr [esp + 0x10]
        je done
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        push esi
        push edi
        lea edi, [ebx + 0x18]
        lea ebp, [edi + 0x54]
        lea esi, [eax + 0x70]
        jmp loop_body
    next:
        mov eax, dword ptr [esp + 0x1c]
    loop_body:
        movzx ecx, byte ptr [ebx]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebx + 0x4]
        lea eax, [ebx + 0x8]
        push eax
        lea ecx, [esi - 0x68]
        mov dword ptr [esi - 0x6c], edx
        call ext_004AFF30
        push edi
        lea ecx, [esi - 0x58]
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [edi + 0x1c]
        mov dword ptr [esi - 0x3c], eax
        movzx ecx, byte ptr [edi + 0x20]
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
        cmp edx, ebp
        je skip_ptr
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je null_src
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esi - 0x4]
        push edx
        call eax
    null_src:
        mov ecx, dword ptr [ebp + 0x4]
        mov dword ptr [esi], ecx
        cmp dword ptr [ebp + 0x4], 0x0
        je zero_src
        mov ecx, dword ptr [ebp + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push ebp
        lea eax, [esp + 0x18]
        push eax
        call edx
        jmp store_ptr
    zero_src:
        mov dword ptr [esp + 0x10], 0x0
        lea eax, [esp + 0x10]
    store_ptr:
        mov eax, dword ptr [eax]
        mov dword ptr [esi - 0x4], eax
    skip_ptr:
        fld dword ptr [ebx + 0x74]
        mov eax, dword ptr [esp + 0x1c]
        fstp dword ptr [esi + 0x4]
        add eax, 0x7c
        fld dword ptr [ebx + 0x78]
        add esi, 0x7c
        cmp eax, dword ptr [esp + 0x20]
        fstp dword ptr [esi - 0x74]
        mov dword ptr [esp + 0x1c], eax
        jne next
        pop edi
        pop esi
        pop ebp
        pop ebx
    done:
        add esp, 0x8
        ret
    }
}

// [0x00491910] sub_00491910 (109 bytes)
extern "C" void ext_00491470();
extern "C" void ext_00491730();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00491910(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        test ebp, ebp
        push esi
        mov esi, ecx
        je fail
        cmp ebp, dword ptr [esp + 1Ch]
        je ok
    fail:
        call dword ptr [mem_00925134]
    ok:
        mov ebx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 20h]
        cmp ebx, ecx
        je done
        mov eax, dword ptr [esi + 8]
        push edi
        mov byte ptr [esp + 18h], 0
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 1Ch]
        push edx
        push ebx
        push eax
        push ecx
        call ext_00491470
        mov ecx, dword ptr [esi + 8]
        mov edi, eax
        mov eax, dword ptr [esp + 2Ch]
        push eax
        push esi
        push ecx
        push edi
        call ext_00491730
        add esp, 28h
        mov dword ptr [esi + 8], edi
        pop edi
    done:
        mov eax, dword ptr [esp + 10h]
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        ret 14h
    }
}

// [0x00491380] sub_00491380 (237 bytes)
extern "C" __declspec(naked) void __fastcall fn_00491380(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        cmp dword ptr [esp + 0x8], ebx
        je  L_early
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        lea esi, [ebx + 0x70]
        lea edi, [ebp + 0x70]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
L_loop:
        mov al, byte ptr [ebx - 0x7c]
        sub ebx, 0x7c
        sub esi, 0x7c
        sub ebp, 0x7c
        mov byte ptr [ebp], al
        mov ecx, dword ptr [esi - 0x6c]
        sub edi, 0x7c
        lea edx, [esi - 0x68]
        mov dword ptr [edi - 0x6c], ecx
        push edx
        lea ecx, [edi - 0x68]
        call ext_004AFF30
        lea eax, [esi - 0x58]
        push eax
        lea ecx, [edi - 0x58]
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [esi - 0x3c]
        mov dword ptr [edi - 0x3c], ecx
        mov dl, byte ptr [esi - 0x38]
        lea eax, [esi - 0x34]
        push eax
        lea ecx, [edi - 0x34]
        mov byte ptr [edi - 0x38], dl
        call ext_00505F00
        lea ecx, [esi - 0x24]
        push ecx
        lea ecx, [edi - 0x24]
        call ext_00490C80
        lea edx, [esi - 0x14]
        push edx
        lea ecx, [edi - 0x14]
        call ext_004AFF30
        lea eax, [edi - 0x4]
        lea ecx, [esi - 0x4]
        cmp eax, ecx
        je  L_skip
        mov ecx, dword ptr [edi]
        test ecx, ecx
        je  L_null1
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [edi - 0x4]
        push eax
        call edx
L_null1:
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        cmp dword ptr [esi], 0x0
        je  L_null2
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        lea eax, [esi - 0x4]
        push eax
        lea eax, [esp + 0x1c]
        push eax
        call edx
        jmp L_store
L_null2:
        mov dword ptr [esp + 0x1c], 0x0
        lea eax, [esp + 0x1c]
L_store:
        mov eax, dword ptr [eax]
        mov dword ptr [edi - 0x4], eax
L_skip:
        cmp ebx, dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [edi + 0x4]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [edi + 0x8]
        jne L_loop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
L_early:
        mov eax, dword ptr [esp + 0x10]
        pop ebx
        ret
    }
}

// [0x004915C0] sub_004915C0 (91 bytes)
extern "C" void ext_00491380();

extern "C" __declspec(naked) int __cdecl fn_004915C0(int a1, int a2, int a3, int a4, int a5, int a6) {
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
        call ext_00491380
        sub esi, ebx
        mov eax, 0x84210843
        imul esi
        add edx, esi
        sar edx, 0x6
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov ecx, eax
        imul ecx, ecx, 0x7c
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

// [0x00493D30] sub_00493D30 (80 bytes)
extern "C" void ext_004931C0();
extern "C" void ext_004934E0();
extern "C" void ext_00493A20();

extern "C" __declspec(naked) void __fastcall fn_00493D30(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004931C0
        mov ecx, esi
        call ext_00493770
        cmp dword ptr [esi], 1
        jne loc_493d7e
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        je loc_493d7e
        cmp dword ptr [esi + 0x10], 0
        je loc_493d7e
        lea ecx, [esi + 0x50]
        push ecx
        add eax, 0x160
        push eax
        mov ecx, esi
        call ext_004934E0
        mov eax, dword ptr [esi + 0x10]
        lea edx, [esi + 0x5c]
        push edx
        add eax, 0x160
        push eax
        mov ecx, esi
        call ext_004934E0
        mov ecx, esi
        pop esi
        jmp ext_00493A20
    loc_493d7e:
        pop esi
        ret
    }
}

// [0x0049E070] sub_0049E070 (87 bytes)
extern "C" void ext_0049A0D0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0049E070(void* self) {
    __asm {
        mov     eax, dword ptr [ecx + 0xc8]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [eax]
        push    edi
        lea     edi, [ecx + 0xc4]
        xor     ebx, ebx
    L_loop:
        cmp     edi, edi
        mov     ebp, dword ptr [edi + 4]
        je      L_1
        call    dword ptr [mem_00925134]
    L_1:
        cmp     esi, ebp
        je      L_done
        add     ebx, 1
        cmp     esi, dword ptr [edi + 4]
        jne     L_2
        call    dword ptr [mem_00925134]
    L_2:
        mov     ecx, dword ptr [esp + 0x14]
        push    ebx
        push    ecx
        lea     ecx, [esi + 8]
        call    ext_0049A0D0
        cmp     esi, dword ptr [edi + 4]
        jne     L_3
        call    dword ptr [mem_00925134]
    L_3:
        mov     esi, dword ptr [esi]
        jmp     L_loop
    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}

extern "C" void ext_0049AA80();
extern "C" int mem_00924FF4;

// [0x0049AC20] sub_0049AC20 (95 bytes)
extern "C" __declspec(naked) void __fastcall fn_0049AC20(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8b56f9
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        mov     esi, ecx
        cmp     byte ptr [esi + 0x64], 0x0
        je      L_done
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_0049AA80
        mov     edx, dword ptr [esi]
        push    eax
        mov     eax, dword ptr [edx + 0x20]
        mov     ecx, esi
        mov     dword ptr [esp + 0x2c], 0x0
        call    eax
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
    L_done:
        mov     ecx, dword ptr [esp + 0x20]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret
    }
}

extern "C" void ext_0049AC20();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;

// [0x0049B090] sub_0049B090 (175 bytes)
extern "C" __declspec(naked) void __fastcall fn_0049B090(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x886ef9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x28
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     dword ptr [ebp - 0x10], esp
        lea     esi, [edi + 0x48]
        push    esi
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 0x14], edi
        call    dword ptr [mem_00924FE0]
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp - 0x4], 0x0
        call    dword ptr [mem_00924FDC]
        mov     ecx, edi
        mov     byte ptr [ebp - 0x4], 0x1
        call    ext_0049AC20
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 0x4], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [ebp - 0xc]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
        mov     ecx, dword ptr [mem_00924E90]
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [mem_00924FA0]
        push    ecx
        add     edx, 0xc
        push    edx
        push    eax
        call    dword ptr [mem_00924E94]
        add     esp, 0x8
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
        lea     ecx, [ebp - 0x34]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x14]
        add     ecx, 0x48
        call    dword ptr [mem_00924FDC]
        mov     eax, 0x49b0e1
        ret
    }
}

// [0x0049DFA0] sub_0049DFA0 (96 bytes)
extern "C" void ext_0049DFA0();

extern "C" __declspec(naked) void __fastcall fn_0049DFA0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        _emit 0x8D
        _emit 0xB9
        _emit 0xDC
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [ecx + 0x130], eax
        mov ecx, dword ptr [edi + 4]
        mov esi, dword ptr [ecx]
        nop

    loc_0049DFC0:
        cmp edi, edi
        mov ebx, dword ptr [edi + 4]
        je short loc_0049DFC9
        call ebp

    loc_0049DFC9:
        cmp esi, ebx
        je short loc_0049DFF9
        cmp esi, dword ptr [edi + 4]
        jne short loc_0049DFD4
        call ebp

    loc_0049DFD4:
        cmp byte ptr [esi + 0x6c], 0
        jne short loc_0049DFEE
        cmp esi, dword ptr [edi + 4]
        jne short loc_0049DFE1
        call ebp

    loc_0049DFE1:
        mov edx, dword ptr [esp + 0x14]
        push edx
        lea ecx, [esi + 8]
        call ext_0049DFA0

    loc_0049DFEE:
        cmp esi, dword ptr [edi + 4]
        jne short loc_0049DFF5
        call ebp

    loc_0049DFF5:
        mov esi, dword ptr [esi]
        jmp short loc_0049DFC0

    loc_0049DFF9:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x00497450] sub_00497450 (132 bytes)
extern "C" void ext_00640110();
extern "C" void ext_00640BC0();
extern "C" int mem_00A9F75C;
extern "C" int mem_00A9FA2C;
extern "C" int mem_00A9F920;
extern "C" int mem_00A9F4BC;

extern "C" __declspec(naked) void __fastcall fn_00497450(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F75C]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov ecx, dword ptr [mem_00A9FA2C]
        add esp, 0x8
        push ecx
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 0x4]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov edx, dword ptr [mem_00A9F920]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 0x8]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9F4BC]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 0xc]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        add esp, 0x8
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0049D270] sub_0049D270 (232 bytes)
extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" int mem_00925134;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_0049D270(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebx + 0x4]
        test eax, eax
        je L_49d299
        mov ecx, dword ptr [ebx + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_49d2a3
    L_49d299:
        mov eax, 0xb53b30
        pop ebx
        add esp, 0x8
        ret
    L_49d2a3:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        mov ecx, dword ptr [esp + 0x14]
        je L_49d2bb
        push eax
        call ext_006404E0
        mov dword ptr [esp + 0x10], eax
        jmp L_49d2bf
    L_49d2bb:
        mov dword ptr [esp + 0x10], ecx
    L_49d2bf:
        push ebp
        push esi
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        push edi
        jbe L_49d2d0
        call dword ptr [mem_00925134]
    L_49d2d0:
        mov edi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], edi
        mov dword ptr [esp + 0x14], edi
        jbe L_49d2e2
        call dword ptr [mem_00925134]
    L_49d2e2:
        mov ebp, dword ptr [esp + 0x2c]
    L_49d2e6:
        cmp esi, edi
        je L_49d34c
        mov edx, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        call ext_006404E0
        test ebp, ebp
        mov edi, eax
        je L_49d317
        cmp esi, dword ptr [ebx + 0x8]
        jb L_49d309
        call dword ptr [mem_00925134]
    L_49d309:
        push ebp
        mov ecx, edi
        call ext_00640110
        mov dword ptr [esp + 0x10], eax
        jmp L_49d326
    L_49d317:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_49d322
        call dword ptr [mem_00925134]
    L_49d322:
        mov dword ptr [esp + 0x10], edi
    L_49d326:
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
        cmp esi, dword ptr [ebx + 0x8]
        jb L_49d343
        call dword ptr [mem_00925134]
    L_49d343:
        mov edi, dword ptr [esp + 0x14]
        add esi, 0x1c
        jmp L_49d2e6
    L_49d34c:
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00498E70] sub_00498E70 (272 bytes)
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640BC0();
extern "C" int mem_00925134;
extern "C" int mem_00A9FAE8;
extern "C" int mem_00A9FAEC;

extern "C" __declspec(naked) void __fastcall fn_00498E70(void* self) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        mov eax, dword ptr [ebp + 0x4]
        test eax, eax
        je L_498E86
        mov ecx, dword ptr [ebp + 0x8]
        sub ecx, eax
        sar ecx, 0x3
        jne L_498E8D
    L_498E86:
        mov eax, 0x00B53B30
        pop ebp
        ret
    L_498E8D:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        push ebx
        push esi
        push edi
        je L_498EA6
        mov ecx, dword ptr [esp + 0x18]
        push eax
        call ext_006404E0
        mov ebx, eax
        jmp L_498EAA
    L_498EA6:
        mov ebx, dword ptr [esp + 0x18]
    L_498EAA:
        mov esi, dword ptr [ebp + 0x4]
        cmp esi, dword ptr [ebp + 0x8]
        jbe L_498EB8
        call dword ptr [mem_00925134]
    L_498EB8:
        mov edi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], edi
        mov dword ptr [esp + 0x14], edi
        jbe L_498ED0
        call dword ptr [mem_00925134]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_498ED0:
        cmp esi, edi
        je L_498F79
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        je L_498F1C
        cmp esi, dword ptr [ebp + 0x8]
        jb L_498EEB
        call dword ptr [mem_00925134]
    L_498EEB:
        push edi
        mov ecx, ebx
        call ext_006404E0
        mov edx, dword ptr [mem_00A9FAE8]
        mov edi, eax
        push edx
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9FAEC]
        add esp, 0x8
        push eax
        mov ecx, edi
        jmp L_498F4D
    L_498F1C:
        cmp esi, dword ptr [ebp + 0x8]
        jb L_498F27
        call dword ptr [mem_00925134]
    L_498F27:
        mov ecx, dword ptr [mem_00A9FAE8]
        push ecx
        mov ecx, ebx
        call ext_00640110
        fld dword ptr [esi]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov edx, dword ptr [mem_00A9FAEC]
        add esp, 0x8
        push edx
        mov ecx, ebx
    L_498F4D:
        call ext_00640110
        fld dword ptr [esi + 0x4]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        add esp, 0x8
        cmp esi, dword ptr [ebp + 0x8]
        jb L_498F6D
        call dword ptr [mem_00925134]
    L_498F6D:
        mov edi, dword ptr [esp + 0x14]
        add esi, 0x8
        jmp L_498ED0
    L_498F79:
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ebp
        ret
    }
}

// [0x0049AA80] sub_0049AA80 (277 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_006690D0();
extern "C" void ext_00669B50();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0049AA80(void* self, int edx_unused, void* a1) {
    __asm {
        push    -1
        push    0x886ede
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x80
        push    ebx
        push    esi
        xor     ebx, ebx
        push    edi
        mov     dword ptr [esp + 0xc], ebx
        mov     edi, dword ptr [esp + 0x9c]
        mov     esi, ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x94], ebx
        call    dword ptr [mem_00924FE8]
        mov     dword ptr [esp + 0x94], ebx
        mov     ebx, 1
        push    0x93f978
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x10], ebx
        call    dword ptr [mem_00924FE4]
        push    0x93f96c
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x98], ebx
        call    dword ptr [mem_00924FE4]
        push    edi
        lea     eax, [esi + 0x48]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        mov     byte ptr [esp + 0xa4], 2
        call    ext_006690D0
        mov     ecx, eax
        call    ext_00669B50
        lea     ecx, [esp + 0x10]
        mov     bl, al
        mov     byte ptr [esp + 0x94], 1
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x94], 0
        call    dword ptr [mem_00924FF4]
        test    bl, bl
        jne     label_done
        push    0x93f978
        lea     ecx, [esp + 0x30]
        call    dword ptr [mem_00924FE4]
        add     esi, 0x1c
        push    esi
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x50]
        mov     dword ptr [esp + 0x9c], 3
        call    ext_0041FF30
        push    0x9d3748
        lea     ecx, [esp + 0x4c]
        push    ecx
        call    ext_006A6DD2
    label_done:
        mov     ecx, dword ptr [esp + 0x8c]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x8c
        ret     4
    }
}

// [0x0049FE40] sub_0049FE40 (333 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00427A60();
extern "C" void ext_0050BE20();
extern "C" void ext_00683620();
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void __fastcall fn_0049FE40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 08921ABh
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 18h
        cmp byte ptr [esp+34h], 0
        je short L_49FE68
        mov ecx, dword ptr [esp+2Ch]
        call ext_0050BE20
    L_49FE68:
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp+34h]
        add esi, 24h
        push edi
        mov edi, dword ptr [esi+4]
        cmp edi, dword ptr [esi+8]
        jbe short L_49FE81
        call dword ptr [mem_00925134]
    L_49FE81:
        lea ecx, [esp+10h]
        mov dword ptr [esp+10h], esi
        mov dword ptr [esp+14h], esi
        mov dword ptr [esp+18h], edi
        call ext_00427A60
        mov edi, dword ptr [esi+8]
        cmp dword ptr [esi+4], edi
        jbe short L_49FEA4
        call dword ptr [mem_00925134]
    L_49FEA4:
        lea ecx, [esp+1Ch]
        mov dword ptr [esp+1Ch], esi
        mov dword ptr [esp+20h], esi
        mov dword ptr [esp+24h], edi
        call ext_00427A60
        mov ebx, dword ptr [esp+40h]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    L_49FEC0:
        mov ebp, dword ptr [esp+14h]
        test ebp, ebp
        je short L_49FECE
        cmp ebp, dword ptr [esp+20h]
        je short L_49FED8
    L_49FECE:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp short L_49FEDE
    L_49FED8:
        mov esi, dword ptr [mem_00925134]
    L_49FEDE:
        mov edi, dword ptr [esp+18h]
        cmp edi, dword ptr [esp+24h]
        jae L_49FF7A
        test ebp, ebp
        jne short L_49FEF2
        call esi
    L_49FEF2:
        cmp edi, dword ptr [ebp+8]
        jb short L_49FEF9
        call esi
    L_49FEF9:
        mov esi, dword ptr [edi]
        lea eax, [esi+4]
        push ebx
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je L_49FF5A
        push 90h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+44h], eax
        test eax, eax
        mov dword ptr [esp+30h], 0
        je short L_49FF33
        mov ecx, eax
        call ext_00683620
        jmp short L_49FF35
    L_49FF33:
        xor eax, eax
    L_49FF35:
        lea ecx, [eax+8]
        mov dword ptr [esp+44h], eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax+4]
        push esi
        mov dword ptr [esp+34h], -1
        call edx
        mov ecx, dword ptr [esp+3Ch]
        lea eax, [esp+44h]
        push eax
        call ext_0041A920
    L_49FF5A:
        cmp edi, dword ptr [ebp+8]
        jb short L_49FF65
        call dword ptr [mem_00925134]
    L_49FF65:
        add edi, 4
        lea ecx, [esp+10h]
        mov dword ptr [esp+18h], edi
        call ext_00427A60
        jmp L_49FEC0
    L_49FF7A:
        mov ecx, dword ptr [esp+28h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 24h
        ret
    }
}

// [0x004943B0] sub_004943B0 (1052 bytes)
extern "C" void ext_006629B0();
extern "C" void ext_00663690();
extern "C" void ext_00663C00();
extern "C" void ext_00664ED0();
extern "C" void ext_006690D0();
extern "C" void ext_00669180();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FCC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FEC;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FB0;

extern "C" __declspec(naked) void __fastcall fn_004943B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x886498
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [ecx + 0x28]
        sub esp, 0x1a8
        test eax, eax
        jne L_4943e9
        xor al, al
        mov ecx, dword ptr [esp + 0x1a8]
        mov dword ptr fs:[0], ecx
        add esp, 0x1b4
        ret
    L_4943e9:
        push ebx
        push esi
        add eax, 0x490
        push eax
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x1b8], 0
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0xb4]
        mov byte ptr [esp + 0x1b8], 1
        call dword ptr [mem_00924FE8]
        lea eax, [esp + 0xb4]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x1c0], 2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_00663690
        lea edx, [esp + 0x18]
        push edx
        call ext_00664ED0
        add esp, 0x10
        push eax
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924FF0]
        push eax
        lea eax, [esp + 0x144]
        push eax
        call ext_00663C00
        push eax
        mov byte ptr [esp + 0x1c4], 3
        call ext_00664ED0
        mov esi, dword ptr [mem_00924FCC]
        push eax
        lea ecx, [esp + 0x8c]
        push 0x92ab70
        push ecx
        call esi
        add esp, 0x18
        lea ecx, [esp + 0x140]
        mov byte ptr [esp + 0x1b8], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_4944da
        lea edx, [esp + 0x28]
        push edx
        call ext_006629B0
        add esp, 4
        test al, al
        mov byte ptr [esp + 0xb], 1
        jne L_4944df
    L_4944da:
        mov byte ptr [esp + 0xb], 0
    L_4944df:
        push 0xb59208
        lea eax, [esp + 0x48]
        push 0x92ab70
        push eax
        call esi
        lea ecx, [esp + 0x50]
        push ecx
        mov byte ptr [esp + 0x1c8], 6
        call ext_00664ED0
        add esp, 0x10
        push eax
        lea ecx, [esp + 0x48]
        call dword ptr [mem_00924FDC]
        lea edx, [esp + 0x44]
        push edx
        lea eax, [esp + 0x80]
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 8
        push 0x92b738
        lea ecx, [esp + 0x10c]
        mov bl, al
        call dword ptr [mem_00924FE4]
        push 0x93eb10
        lea ecx, [esp + 0x128]
        mov byte ptr [esp + 0x1bc], 7
        call dword ptr [mem_00924FE4]
        push 0x93ead4
        lea ecx, [esp + 0x64]
        mov byte ptr [esp + 0x1bc], 8
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x108]
        push ecx
        lea edx, [esp + 0x17c]
        push edx
        mov byte ptr [esp + 0x1c0], 9
        call ext_006690D0
        mov ecx, eax
        call ext_00669180
        push 0x92b4b0
        push eax
        mov byte ptr [esp + 0x1c0], 0xa
        call ext_00664ED0
        mov esi, dword ptr [mem_00924ECC]
        add esp, 4
        push eax
        lea eax, [esp + 0xf4]
        push eax
        call esi
        add esp, 0xc
        lea ecx, [esp + 0x178]
        mov byte ptr [esp + 0x1b8], 0xc
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x124]
        push ecx
        lea edx, [esp + 0x160]
        push edx
        call ext_006690D0
        mov ecx, eax
        call ext_00669180
        push 0x92b4b0
        push eax
        mov byte ptr [esp + 0x1c0], 0xd
        call ext_00664ED0
        add esp, 4
        push eax
        lea eax, [esp + 0xa0]
        push eax
        call esi
        add esp, 0xc
        mov byte ptr [esp + 0x1b8], 0xf
        lea ecx, [esp + 0x15c]
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x60]
        push ecx
        lea edx, [esp + 0x198]
        push edx
        call ext_006690D0
        mov ecx, eax
        call ext_00669180
        push 0x92b4b0
        push eax
        mov byte ptr [esp + 0x1c0], 0x10
        call ext_00664ED0
        add esp, 4
        push eax
        lea eax, [esp + 0xd8]
        push eax
        call esi
        add esp, 0xc
        lea ecx, [esp + 0x194]
        mov byte ptr [esp + 0x1b8], 0x12
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [mem_00924FB0]
        lea ecx, [esp + 0xec]
        push ecx
        lea edx, [esp + 0x10]
        push edx
        call esi
        add esp, 8
        test al, al
        je L_4946c1
        lea eax, [esp + 0x98]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        call esi
        add esp, 8
        test al, al
        je L_4946c1
        lea edx, [esp + 0xd0]
        push edx
        lea eax, [esp + 0x10]
        push eax
        call esi
        add esp, 8
        test al, al
        je L_4946c1
        mov al, 1
        jmp L_4946c3
    L_4946c1:
        xor al, al
    L_4946c3:
        cmp byte ptr [esp + 0xb], 0
        je L_4946d6
        test bl, bl
        je L_4946d6
        test al, al
        je L_4946d6
        mov bl, 1
        jmp L_4946d8
    L_4946d6:
        xor bl, bl
    L_4946d8:
        lea ecx, [esp + 0xd0]
        mov byte ptr [esp + 0x1b8], 0xf
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x98]
        mov byte ptr [esp + 0x1b8], 0xc
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xec]
        mov byte ptr [esp + 0x1b8], 9
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x1b8], 8
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x124]
        mov byte ptr [esp + 0x1b8], 7
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x108]
        mov byte ptr [esp + 0x1b8], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0x1b8], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x7c]
        mov byte ptr [esp + 0x1b8], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xb4]
        mov byte ptr [esp + 0x1b8], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x1b8], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x1b8], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x1b0]
        pop esi
        mov al, bl
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1b4
        ret
    }
}

extern "C" void ext_00490BC0();
extern "C" void ext_004A6970();

// [0x004910E0] sub_004910E0 (109 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004910E0(void* self, int edx_unused, const void* o) {
    __asm {
        push -0x1
        push 0x88f3bb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov al, byte ptr [edi]
        mov esi, ecx
        mov byte ptr [esi], al
        mov ecx, dword ptr [edi + 0x4]
        lea edx, [edi + 0x8]
        mov dword ptr [esi + 0x4], ecx
        push edx
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0xc], esi
        call ext_004A6970
        lea eax, [edi + 0x18]
        push eax
        lea ecx, [esi + 0x18]
        mov dword ptr [esp + 0x18], 0x0
        call ext_00490BC0
        fld dword ptr [edi + 0x74]
        mov ecx, dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0x74]
        fld dword ptr [edi + 0x78]
        pop edi
        fstp dword ptr [esi + 0x78]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00491620] sub_00491620 (141 bytes)
extern "C" void ext_004910E0();
extern "C" void ext_00490FD0();
extern "C" void ext_006A6DD2();

// Naked: C++ try/catch under /EHsc drops the EH frame around extern "C" callees, so the
// SEH frame and the rollback landing pad are written out by hand.
extern "C" __declspec(naked) void* __cdecl fn_00491620(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x008857d1
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
        call ext_004910E0
    skip_ctor:
        add esi, 0x7c
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x7c
        jmp loop_top
    handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je handler_throw
    handler_loop:
        mov ecx, esi
        call ext_00490FD0
        add esi, 0x7c
        cmp esi, edi
        jne handler_loop
    handler_throw:
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

// [0x004917B0] sub_004917B0 (141 bytes)
extern "C" void ext_00490FD0();
extern "C" void ext_004910E0();
extern "C" void ext_006A6DD2();

// try { for (n = count; n; --n) { if (p) ctor(p, a); p += 0x7c; } }
// catch (...) { destroy [begin, p); throw; }
// Naked: MSVC /EHsc treats extern "C" callees as nothrow, which drops the try block,
// so the SEH frame is written out by hand.
extern "C" __declspec(naked) void __cdecl fn_004917B0(void* begin, unsigned int count, const void* a) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x00885811
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
        call ext_004910E0
skip_ctor:
        sub edi, 0x1
        add esi, 0x7c
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow
dtor_loop:
        mov ecx, esi
        call ext_00490FD0
        add esi, 0x7c
        cmp esi, edi
        jne dtor_loop
rethrow:
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

// [0x004916B0] sub_004916B0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00490490();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004916B0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00490490
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

// [0x0049F260] sub_0049F260 (114 bytes)
extern "C" void ext_0049EE60();
extern "C" void ext_00683620();

extern "C" __declspec(naked) void __fastcall fn_0049F260(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -0x1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x90
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je label_null
        mov ecx, eax
        call ext_00683620
        jmp label_continue
    label_null:
        xor eax, eax
    label_continue:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        mov eax, dword ptr [esp + 0x24]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_0049EE60
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x0049CF60] sub_0049CF60 (117 bytes)
extern "C" void ext_0049B400();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" __declspec(naked) void __fastcall fn_0049CF60(void* self) {
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
        je L_NULL_0049CF60
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call ext_0049B400
        jmp L_DONE_0049CF60
L_NULL_0049CF60:
        xor eax, eax
L_DONE_0049CF60:
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

// [0x004919B0] sub_004919B0 (197 bytes)
extern "C" void ext_005A6300();

extern "C" __declspec(naked) void* __fastcall fn_004919B0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x885841
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        lea eax, [esi + 4]
        mov dword ptr [eax], 0x93e7e4
        mov dword ptr [esi + 8], 0x93e7ec
        mov dword ptr [esi + 0xc], 0x93e7f4
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi + 0x10], 0x93bf24
        mov ecx, dword ptr [esp + 0x1c]
        xor ebx, ebx
        mov dword ptr [esi], 0x93e950
        mov dword ptr [eax], 0x93e948
        mov dword ptr [esi + 8], 0x93e940
        mov dword ptr [esi + 0xc], 0x93e938
        mov dword ptr [esi + 0x10], 0x93e904
        mov dword ptr [esi + 0x14], ecx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esi + 0x1c], ebx
        mov dword ptr [esi + 0x20], ebx
        mov dword ptr [esi + 0x24], ebx
        mov dword ptr [esi + 0x2c], ebx
        mov dword ptr [esi + 0x30], ebx
        mov dword ptr [esi + 0x34], ebx
        fld1
        lea edx, [esp + 0x1c]
        fstp qword ptr [esi + 0x50]
        push edx
        mov ecx, 0xa34418
        mov byte ptr [esp + 0x18], 2
        mov dword ptr [esp + 0x20], eax
        call ext_005A6300
        fldz
        mov ecx, dword ptr [esp + 0xc]
        fstp qword ptr [esi + 0x58]
        mov dword ptr [esi + 0x44], ebx
        mov dword ptr [esi + 0x40], ebx
        mov byte ptr [esi + 0x48], bl
        mov dword ptr [esi + 0x60], ebx
        mov dword ptr [esi + 0x3c], ebx
        mov dword ptr [esi + 0x38], ebx
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

extern "C" void ext_0049E930();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" int mem_008A7A5B;

// [0x0049EE60] sub_0049EE60 (126 bytes)
extern "C" __declspec(naked) int __fastcall fn_0049EE60(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push offset mem_008A7A5B
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
        je L_null
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push edx
        push edi
        push ecx
        push esi
        mov ecx, eax
        call ext_0049E930
        jmp L_done
    L_null:
        xor eax, eax
    L_done:
        push eax
        mov dword ptr [esp + 0x18], -1
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

// [0x00496E80] sub_00496E80 (127 bytes)
extern "C" void ext_00496DF0();
extern "C" void ext_004BE400();
extern "C" void ext_0067A670();
extern "C" int mem_00ADC4F0;
extern "C" int mem_00ADC4EC;
extern "C" int mem_0088672E;
extern "C" int mem_0093EC64;
extern "C" int mem_0093F154;

extern "C" __declspec(naked) void __cdecl fn_00496E80() {
    __asm {
        push    -1
        push    offset mem_0088672E
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    0
        lea     eax, [esp + 4]
        push    eax
        call    ext_00496DF0
        mov     eax, 1
        test    byte ptr [mem_00ADC4F0], al
        jne     L_skip
        or      dword ptr [mem_00ADC4F0], eax
        mov     ecx, offset mem_00ADC4EC
        mov     dword ptr [esp + 0xc], 0
        call    ext_0067A670
        mov     dword ptr [mem_00ADC4EC], offset mem_0093EC64
        mov     dword ptr [esp + 0xc], -1
    L_skip:
        push    offset mem_00ADC4EC
        push    offset mem_0093F154
        lea     ecx, [esp + 8]
        call    ext_004BE400
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x00499D20] sub_00499D20 (464 bytes)
extern "C" void ext_00412690();
extern "C" void ext_004275C0();
extern "C" void ext_00427A60();
extern "C" void ext_0048EF80();
extern "C" void ext_0063EFE0();
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;
extern "C" int mem_00A9FAE8;
extern "C" int mem_00924FF0;
extern "C" int mem_009251F0;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9FAEC;

extern "C" __declspec(naked) void __fastcall fn_00499D20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x877622
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x58
        push ebx
        mov ebx, dword ptr [esp + 0x70]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        push edi
        jbe loc_499D50
        call ebp
loc_499D50:
        mov edi, dword ptr [ebx + 0x4]
        cmp edi, dword ptr [ebx + 0x8]
        jbe loc_499D5A
        call ebp
loc_499D5A:
        push esi
        push ebx
        push edi
        push ebx
        lea eax, [esp + 0x20]
        push eax
        mov ecx, ebx
        call ext_0048EF80
        mov esi, dword ptr [esp + 0x78]
        mov edi, dword ptr [esi + 0x28]
        add esi, 0x24
        cmp edi, dword ptr [esi + 0x8]
        jbe loc_499D7B
        call ebp
loc_499D7B:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe loc_499D9A
        call ebp
loc_499D9A:
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x28], esi
        mov dword ptr [esp + 0x2c], edi
        lea ecx, [esp + 0x24]
loc_499DAA:
        call ext_00427A60
        mov ebp, dword ptr [esp + 0x1c]
        test ebp, ebp
        je loc_499DBD
        cmp ebp, dword ptr [esp + 0x28]
        je loc_499DC7
loc_499DBD:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp loc_499DCD
loc_499DC7:
        mov esi, dword ptr [mem_00925134]
loc_499DCD:
        mov edi, dword ptr [esp + 0x20]
        cmp edi, dword ptr [esp + 0x2c]
        jae loc_499EDD
loc_loop:
        test ebp, ebp
        jne loc_499DE1
        call esi
loc_499DE1:
        cmp edi, dword ptr [ebp + 0x8]
        jb loc_499DE8
        call esi
loc_499DE8:
        mov ecx, dword ptr [esp + 0x80]
        test ecx, ecx
        mov esi, dword ptr [edi]
        lea eax, [esi + 0x4]
        je loc_499E0B
        push ecx
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je loc_499EC2
loc_499E0B:
        mov ecx, dword ptr [mem_00A9FAE8]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x30]
        push edx
        lea ecx, [esp + 0x80]
        mov dword ptr [esp + 0x80], eax
        call ext_004275C0
        mov ecx, eax
        mov dword ptr [esp + 0x70], 0x0
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0x14]
        add esp, 0x4
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x70], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [mem_00A9FAEC]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0x4c]
        push ecx
        lea ecx, [esp + 0x80]
        mov dword ptr [esp + 0x80], eax
        call ext_004275C0
        mov ecx, eax
        mov dword ptr [esp + 0x70], 0x1
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0x18]
        add esp, 0x4
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0x70], 0xffffffff
        call dword ptr [mem_00924FF4]
        lea edx, [esp + 0x10]
        push edx
        mov ecx, ebx
        call ext_00412690
loc_499EC2:
        cmp edi, dword ptr [ebp + 0x8]
        jb loc_499ECD
        call dword ptr [mem_00925134]
loc_499ECD:
        add edi, 0x4
        mov dword ptr [esp + 0x20], edi
        lea ecx, [esp + 0x18]
        jmp loc_499DAA
loc_499EDD:
        mov ecx, dword ptr [esp + 0x68]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x64
        ret
    }
}

// [0x00492150] sub_00492150 (140 bytes)
extern "C" void ext_00662610();
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00492150(void* self, int edx_unused, void* a1, const char* a2) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        lea eax, [esp + 0x4]
        push 0xa34588
        push eax
        mov esi, ecx
        call ext_00662610
        add esp, 0x8
        mov eax, dword ptr [esp + 0x34]
        test eax, eax
        mov dword ptr [esp + 0x28], 0x0
        je skip_assign
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esi + 0x18]
        call ext_00474F00
        mov ecx, eax
        call dword ptr [mem_00924FD4]
    skip_assign:
        lea edx, [esp + 0x4]
        push edx
        lea ecx, [esi + 0x8]
        call ext_00476360
        mov esi, dword ptr [esp + 0x30]
        lea ecx, [esp + 0x4]
        mov dword ptr [esi], eax
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x8
    }
}

// [0x00496DF0] sub_00496DF0 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_00496DF0(void* self, int edx_unused, void* a1, const char* a2) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        lea eax, [esp + 0x4]
        push 0xa349bc
        push eax
        mov esi, ecx
        call ext_00662610
        add esp, 0x8
        mov eax, dword ptr [esp + 0x34]
        test eax, eax
        mov dword ptr [esp + 0x28], 0x0
        je skip_assign
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esi + 0x18]
        call ext_00474F00
        mov ecx, eax
        call dword ptr [mem_00924FD4]
    skip_assign:
        lea edx, [esp + 0x4]
        push edx
        lea ecx, [esi + 0x8]
        call ext_00476360
        mov esi, dword ptr [esp + 0x30]
        lea ecx, [esp + 0x4]
        mov dword ptr [esi], eax
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x8
    }
}

// [0x0049A930] sub_0049A930 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0049A930(void* self, int edx_unused, void* a1, const char* a2) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        lea eax, [esp + 0x4]
        push 0xa34fec
        push eax
        mov esi, ecx
        call ext_00662610
        add esp, 0x8
        mov eax, dword ptr [esp + 0x34]
        test eax, eax
        mov dword ptr [esp + 0x28], 0x0
        je skip_assign
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esi + 0x18]
        call ext_00474F00
        mov ecx, eax
        call dword ptr [mem_00924FD4]
    skip_assign:
        lea edx, [esp + 0x4]
        push edx
        lea ecx, [esi + 0x8]
        call ext_00476360
        mov esi, dword ptr [esp + 0x30]
        lea ecx, [esp + 0x4]
        mov dword ptr [esi], eax
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x8
    }
}

// [0x00493A20] sub_00493A20 (572 bytes)
extern "C" void ext_00492480();
extern "C" void ext_00492BC0();
extern "C" void ext_0059A140();
extern "C" int mem_00925134;
extern "C" int mem_00ADB878;
extern "C" int mem_009334D8;

extern "C" __declspec(naked) void __fastcall fn_00493A20(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x70
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov eax, dword ptr [ebp + 0x54]
        mov esi, dword ptr [eax]
        lea edi, [ebp + 0x50]
        mov dword ptr [esp + 0x34], ebp
        mov dword ptr [esp + 0x4c], esi
        mov dword ptr [esp + 0x48], edi
    L_00493A43:
        test edi, edi
        mov ebx, dword ptr [ebp + 0x54]
        lea eax, [ebp + 0x50]
        je L_00493A51
        cmp edi, eax
        je L_00493A57
    L_00493A51:
        call dword ptr [mem_00925134]
    L_00493A57:
        cmp esi, ebx
        je L_00493C54
        test edi, edi
        mov ebx, dword ptr [mem_00925134]
        jne L_00493A6B
        call ebx
    L_00493A6B:
        cmp esi, dword ptr [edi + 0x4]
        jne L_00493A72
        call ebx
    L_00493A72:
        cmp esi, dword ptr [edi + 0x4]
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x30], eax
        jne L_00493A80
        call ebx
    L_00493A80:
        fld dword ptr [esi + 0x10]
        mov eax, dword ptr [ebp + 0x60]
        fstp dword ptr [esp + 0x70]
        add ebp, 0x5c
        fld dword ptr [esi + 0x14]
        mov edi, ebp
        fstp dword ptr [esp + 0x74]
        mov dword ptr [esp + 0x40], edi
        fld dword ptr [esi + 0x18]
        fstp dword ptr [esp + 0x78]
        fld dword ptr [esi + 0x1c]
        mov esi, dword ptr [eax]
        fstp dword ptr [esp + 0x7c]
        mov dword ptr [esp + 0x44], esi
        mov edi, edi
    L_00493AB0:
        test edi, edi
        mov ebx, dword ptr [ebp + 0x4]
        je L_00493ABB
        cmp edi, ebp
        je L_00493AC1
    L_00493ABB:
        call dword ptr [mem_00925134]
    L_00493AC1:
        cmp esi, ebx
        je L_00493C3A
        test edi, edi
        jne L_00493AD3
        call dword ptr [mem_00925134]
    L_00493AD3:
        cmp esi, dword ptr [edi + 0x4]
        jne L_00493ADE
        call dword ptr [mem_00925134]
    L_00493ADE:
        cmp esi, dword ptr [edi + 0x4]
        mov ebx, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x38], ebx
        jne L_00493AF0
        call dword ptr [mem_00925134]
    L_00493AF0:
        fld dword ptr [esi + 0x10]
        sub esp, 0x18
        fstp dword ptr [esp + 0x78]
        mov eax, esp
        fld dword ptr [esi + 0x14]
        lea ecx, [esp + 0x88]
        fstp dword ptr [esp + 0x7c]
        mov dword ptr [esp + 0x54], esp
        fld dword ptr [esi + 0x18]
        fstp dword ptr [esp + 0x80]
        fld dword ptr [esi + 0x1c]
        fstp dword ptr [esp + 0x84]
        fld qword ptr [mem_00ADB878]
        fmul qword ptr [mem_009334D8]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x78]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x7c]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x80]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [esp + 0x84]
        fstp dword ptr [eax + 0xc]
        call ext_00492480
        test al, al
        jne L_00493B72
        lea ecx, [esp + 0x40]
        call ext_00492BC0
        mov esi, dword ptr [esp + 0x44]
        mov edi, dword ptr [esp + 0x40]
        jmp L_00493AB0
    L_00493B72:
        mov edi, dword ptr [esp + 0x30]
        mov ebp, dword ptr [esp + 0x34]
        mov byte ptr [edi + 0x8d], 0x1
        mov byte ptr [ebx + 0x8d], 0x1
        mov dword ptr [edi + 0x90], ebx
        lea esi, [ebp + 0x30]
        mov dword ptr [ebx + 0x90], edi
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        jne L_00493BA2
        xor edx, edx
        jmp L_00493BAA
    L_00493BA2:
        mov edx, dword ptr [esi + 0x8]
        sub edx, eax
        sar edx, 0x2
    L_00493BAA:
        test eax, eax
        je L_00493BC7
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, eax
        sar ecx, 0x2
        cmp edx, ecx
        jae L_00493BC7
        mov eax, dword ptr [esi + 0x8]
        mov dword ptr [eax], edi
        add eax, 0x4
        mov dword ptr [esi + 0x8], eax
        jmp L_00493BE7
    L_00493BC7:
        mov edi, dword ptr [esi + 0x8]
        cmp eax, edi
        jbe L_00493BD4
        call dword ptr [mem_00925134]
    L_00493BD4:
        lea ecx, [esp + 0x30]
        push ecx
        push edi
        push esi
        lea edx, [esp + 0x5c]
        push edx
        mov ecx, esi
        call ext_0059A140
    L_00493BE7:
        mov ecx, dword ptr [ebp + 0x44]
        test ecx, ecx
        lea esi, [ebp + 0x40]
        jne L_00493BF5
        xor edx, edx
        jmp L_00493BFD
    L_00493BF5:
        mov edx, dword ptr [esi + 0x8]
        sub edx, ecx
        sar edx, 0x2
    L_00493BFD:
        test ecx, ecx
        je L_00493C1A
        mov eax, dword ptr [esi + 0xc]
        sub eax, ecx
        sar eax, 0x2
        cmp edx, eax
        jae L_00493C1A
        mov eax, dword ptr [esi + 0x8]
        mov dword ptr [eax], ebx
        add eax, 0x4
        mov dword ptr [esi + 0x8], eax
        jmp L_00493C3A
    L_00493C1A:
        mov edi, dword ptr [esi + 0x8]
        cmp ecx, edi
        jbe L_00493C27
        call dword ptr [mem_00925134]
    L_00493C27:
        lea eax, [esp + 0x38]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x64]
        push ecx
        mov ecx, esi
        call ext_0059A140
    L_00493C3A:
        lea ecx, [esp + 0x48]
        call ext_00492BC0
        mov esi, dword ptr [esp + 0x4c]
        mov edi, dword ptr [esp + 0x48]
        mov ebp, dword ptr [esp + 0x34]
        jmp L_00493A43
    L_00493C54:
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
