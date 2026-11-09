// Decompiled translation unit: src/leaf/decompiled_500000.cpp

// [0x00504930] sub_00504930 (10 bytes)
extern "C" void ext_00527280();
extern "C" void ext_005220C0();

extern "C" __declspec(naked) void __cdecl fn_00504930() {
    __asm {
        call ext_00527280
        jmp ext_005220C0
    }
}

// [0x00506E10] sub_00506E10 (16 bytes)
extern "C" void __cdecl ext_00506BD0(void* a, void* b, int c);

extern "C" void __fastcall fn_00506E10(void* self) {
    ext_00506BD0((char*)self + 4, self, 1);
}

// [0x00504970] sub_00504970 (26 bytes)
extern "C" void ext_00516EB0();

extern "C" __declspec(naked) void* __fastcall fn_00504970(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x30]
        test ecx, ecx
        je short zero_ret
        push eax
        call ext_00516EB0
        test eax, eax
        je short zero_ret
        add eax, 0x20
        ret
zero_ret:
        xor eax, eax
        ret
    }
}

// [0x0050D7A0] sub_0050D7A0 (26 bytes)
extern "C" int mem_00A9F178;
extern "C" void __cdecl ext_0050D360(int a, void* b, int c);

extern "C" void __fastcall fn_0050D7A0(void* self, int edx_unused, int a1) {
    ext_0050D360(a1, (char*)self + 4, mem_00A9F178);
}

// [0x0050D0B0] sub_0050D0B0 (28 bytes)
extern "C" void __cdecl ext_0050CE30(int a, void* b, int c, int d);

extern "C" void __fastcall fn_0050D0B0(void* self, int edx_unused, int a1) {
    ext_0050CE30(a1, (char*)self + 4, mem_00A9F178, 1);
}

// [0x00500120] sub_00500120 (35 bytes)
extern "C" int mem_00AEB2D8;
extern "C" int mem_00AEB2D4;
extern "C" int* __cdecl fn_00500120() {
    if (!(mem_00AEB2D8 & 1)) {
        mem_00AEB2D8 |= 1;
        mem_00AEB2D4 = 0x94EC3C;
    }
    return &mem_00AEB2D4;
}

// [0x005054E0] sub_005054E0 (35 bytes)
extern "C" int mem_00AEBB78;
extern "C" int mem_00AEBB74;

extern "C" void* __cdecl fn_005054E0() {
    if (!(*(unsigned char*)&mem_00AEBB78 & 1)) {
        mem_00AEBB78 |= 1;
        mem_00AEBB74 = 0x94f0e8;
    }
    return &mem_00AEBB74;
}

// [0x0050A030] sub_0050A030 (35 bytes)
extern "C" int mem_00AEBC98;
extern "C" int mem_00AEBC94;

extern "C" void* __cdecl fn_0050A030() {
    if (!(mem_00AEBC98 & 1)) {
        mem_00AEBC98 |= 1;
        mem_00AEBC94 = 0x0094ff84;
    }
    return &mem_00AEBC94;
}

// [0x0050A140] sub_0050A140 (35 bytes)
extern "C" int mem_00AEBCA0;
extern "C" int mem_00AEBC9C;

extern "C" void* __cdecl fn_0050A140() {
    if (!(*(unsigned char*)&mem_00AEBCA0 & 1)) {
        mem_00AEBCA0 |= 1;
        mem_00AEBC9C = 0x0094ffd4;
    }
    return &mem_00AEBC9C;
}

// [0x0050A170] sub_0050A170 (35 bytes)
extern "C" int mem_00AEBCA8;
extern "C" int mem_00AEBCA4;
extern "C" int* __cdecl fn_0050A170() {
    if (!(mem_00AEBCA8 & 1)) {
        mem_00AEBCA8 |= 1;
        mem_00AEBCA4 = 0x9500e0;
    }
    return &mem_00AEBCA4;
}

// [0x0050EE70] sub_0050EE70 (36 bytes)
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0050EE70(void* self, int edx_unused, void* first, void* last) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done
        mov edi, edi
    loop_top:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x20
        cmp esi, edi
        jne loop_top
    done:
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x0050F9D0] sub_0050F9D0 (36 bytes)
extern "C" __declspec(naked) bool __fastcall fn_0050F9D0(void* self, int edx_unused, double a, double b) {
    __asm {
        cmp dword ptr [ecx + 0x8], 0x0
        fld qword ptr [esp + 0xc]
        fcomp qword ptr [esp + 0x4]
        fnstsw ax
        jne short nonzero_flag
        test ah, 0x41
        je short ret_true
ret_false:
        xor al, al
        ret 0x10
nonzero_flag:
        test ah, 0x5
        jp short ret_false
ret_true:
        mov al, 0x1
        ret 0x10
    }
}

// [0x00503CA0] sub_00503CA0 (37 bytes)
extern "C" int mem_0094F074;

extern "C" __declspec(naked) void __fastcall fn_00503CA0(void* self) {
    __asm {
        fldz
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax], offset mem_0094F074
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x1c], ecx
        fstp qword ptr [eax + 0x28]
        mov byte ptr [eax + 0x20], cl
        mov byte ptr [eax + 0x21], cl
        ret
    }
}
