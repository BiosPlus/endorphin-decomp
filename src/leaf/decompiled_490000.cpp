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
