// Decompiled translation unit: src/leaf/decompiled_7D0000.cpp

// [0x007D5C60] sub_007D5C60 (31 bytes)
extern "C" int mem_00AB28C4;
extern "C" void ext_007D59C0();

extern "C" __declspec(naked) void __cdecl fn_007D5C60(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        add eax, 0x6c
        push eax
        call dword ptr [mem_00AB28C4]
        add esp, 4
        test eax, eax
        jne found
        ret
    found:
        mov dword ptr [esp + 4], eax
        jmp ext_007D59C0
    }
}

// [0x007D8570] sub_007D8570 (32 bytes)
extern "C" void __cdecl fn_007D8570(char* base, int index, float* out) {
    float* src = reinterpret_cast<float*>(base + index * 32);
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
}

// [0x007D8850] sub_007D8850 (12 bytes)
extern "C" void ext_007D8420();

extern "C" __declspec(naked) void __cdecl fn_007D8850(int a0, int a1) {
    __asm {
        mov eax, dword ptr [esp + 8]
        push eax
        call ext_007D8420
        pop ecx
        ret
    }
}

// [0x007D8400] sub_007D8400 (18 bytes)
extern "C" void ext_007D87D0(void* a, void* b);

extern "C" void __cdecl fn_007D8400(void* self) {
    ext_007D87D0(*(void**)((char*)self + 0x68), self);
}

// [0x007D7A30] sub_007D7A30 (20 bytes)
extern "C" void ext_007F1530();
extern "C" int mem_00B61F78;

extern "C" int __cdecl fn_007D7A30(void) {
    ext_007F1530();
    return (*(char*)&mem_00B61F78 != 0) + 1;
}

// [0x007DC840] sub_007DC840 (21 bytes)
extern "C" void ext_007C8A50();

extern "C" void __cdecl fn_007DC840(int a0) {
    typedef void (__cdecl *Fn)(int, int, int);
    ((Fn)ext_007C8A50)(a0, 8, 0x007DC600);
}

// [0x007D4AF0] sub_007D4AF0 (22 bytes)
extern "C" void ext_007D4920();

extern "C" void __cdecl fn_007D4AF0(void* a1, void* a2) {
    typedef void (__cdecl *Fn)(void*, void*, void*);
    ((Fn)ext_007D4920)(a1, *(void**)a1, a2);
}

// [0x007DC860] sub_007DC860 (22 bytes)
extern "C" void ext_007DC770();
extern "C" void ext_007DC840();

extern "C" void __cdecl fn_007DC860(int a0) {
    typedef void (__cdecl *Fn)(int);
    ((Fn)ext_007DC770)(a0);
    ((Fn)ext_007DC840)(a0);
}

// [0x007DAD50] sub_007DAD50 (25 bytes)
extern "C" void ext_007CC8E0();
extern "C" int __cdecl fn_007DAD50(int a, int b) {
    ((void (__cdecl*)(int, int, int))ext_007CC8E0)(a, b, 0);
    return a;
}

extern "C" void ext_007CC930(void*);
extern "C" void ext_007DB130(void*);

// [0x007DB500] sub_007DB500 (25 bytes)
extern "C" void __cdecl fn_007DB500(void* self) {
    ext_007DB130(static_cast<char*>(self) + 0x10);
    ext_007CC930(self);
}


// [0x007DB090] sub_007DB090 (26 bytes)
extern "C" float __cdecl ext_007F5850(int, int, int);
extern "C" void __cdecl fn_007DB090(int a1, int a2, int a3) {
    ext_007F5850(a1, a2, a3);
}

// [0x007DFDE0] sub_007DFDE0 (29 bytes)
extern "C" void ext_007DFDC0();

extern "C" void __cdecl fn_007DFDE0(void* a1, void* a2) {
    typedef void (__cdecl *Fn1)(void*, void*);
    typedef void (__cdecl *Fn2)(void*);
    ((Fn1)ext_007DFDC0)(a1, a2);
    ((Fn2)(*(void**)((char*)a2 + 0x0c)))(a1);
}

// [0x007D47B0] sub_007D47B0 (29 bytes)
extern "C" void ext_007D58E0();

extern "C" void __cdecl fn_007D47B0(char* self) {
    typedef void (__cdecl *Fn)(int, void*, int, int);
    ((Fn)ext_007D58E0)(1, *(void**)(self + 0x1c), 0x0099DE5C, 0x0099DE60);
}

// [0x007D4650] sub_007D4650 (35 bytes)
extern "C" void __cdecl fn_007D4650(char* p) {
    int base = *(int*)(p + 0x4);
    int i = 0;
    if (*(int*)(p + 0x14) > 0) {
        do {
            *(int*)(*(char**)(p + 0x8) + i * 4) = base;
            base += *(int*)(p + 0x10);
            i++;
        } while (i < *(int*)(p + 0x14));
    }
}

// [0x007D4A70] sub_007D4A70 (35 bytes)
extern "C" void* __cdecl fn_007D4A70(void* self) {
    void** edx = (void**)self;
    void** ecx = (void**)*edx;
    if (ecx != edx) {
        void** eax = (void**)*ecx;
        if (eax != edx) {
            do {
                ecx = eax;
                eax = (void**)*eax;
            } while (eax != edx);
        }
    }
    return (ecx != edx) ? (void*)ecx : 0;
}

// [0x007DC8C0] sub_007DC8C0 (37 bytes)
extern "C" __declspec(naked) void fn_007DC8C0() {
    __asm {
        movzx ecx, word ptr [eax]
        cmp cx, 0x24
        je done
        movzx ecx, cx
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00 // lea esp, [esp]
loop_top:
        movsx ecx, cx
        cmp ecx, edx
        je done
        movzx ecx, word ptr [eax + 0xc]
        add eax, 0xc
        cmp cx, 0x24
        jne loop_top
done:
        ret
    }
}

// [0x007D48C0] sub_007D48C0 (38 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D48C0(void) {
    __asm {
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x4], edx
        mov dword ptr [edx + 0x8], eax
        mov edx, dword ptr [eax + 0x8]
        mov dword ptr [ecx + 0x8], edx
        cmp eax, dword ptr [edx]
        jne short notequal
        mov dword ptr [edx], ecx
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x8], ecx
        ret
    notequal:
        mov dword ptr [edx + 0x4], ecx
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x8], ecx
        ret
    }
}

// [0x007D6260] sub_007D6260 (38 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D6260(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        test eax, eax
        je done
        mov ecx, dword ptr [esi + 1Ch]
        mov edx, dword ptr [ecx + 10h]
        push eax
        call edx
        add esp, 4
        mov dword ptr [esi], 0
        mov dword ptr [esi + 4], 0
    done:
        pop esi
        ret
    }
}

// [0x007D5DA0] sub_007D5DA0 (39 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D5DA0(void) {
    __asm {
        push ecx
        mov dword ptr [esp], 0x0
        fnstcw word ptr [esp]
        mov eax, dword ptr [esp + 8]
        and eax, 0x3
        shl eax, 8
        mov edx, dword ptr [esp]
        and edx, 0x7f
        or eax, edx
        mov dword ptr [esp], eax
        fnclex
        fldcw word ptr [esp]
        pop ecx
        ret
    }
}
