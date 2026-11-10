// Decompiled translation unit: src/leaf/decompiled_490000.cpp

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
