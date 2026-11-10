// Decompiled translation unit: src/leaf/decompiled_5C0000.cpp

// [0x005C3AA0] sub_005C3AA0 (9 bytes)
extern "C" void ext_005C3A30();

extern "C" __declspec(naked) void __cdecl fn_005C3AA0() {
    __asm {
        call ext_005C3A30
        fld dword ptr [eax + 4]
        ret
    }
}

// [0x005CF930] sub_005CF930 (14 bytes)
extern "C" void ext_005B11E0();
extern "C" void __fastcall fn_005CF930(void* self) {
    // push 1; add ecx, 0x210; call sub_005B11E0; ret
    __asm {
        push 1
        add ecx, 0x210
        call ext_005B11E0
    }
}

// [0x005CE8D0] sub_005CE8D0 (20 bytes)
extern "C" void ext_00648370();
extern "C" __declspec(naked) void __fastcall fn_005CE8D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        push ecx
        mov ecx, dword ptr [ecx + 0xac]
        call ext_00648370
        ret 4
    }
}

// [0x005C4780] sub_005C4780 (25 bytes)
extern "C" void ext_00648790();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_005C4780(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_00648790
        push esi
        call ext_006A5C5C
        add esp, 4
    done:
        pop esi
        ret
    }
}

// [0x005CEA30] sub_005CEA30 (25 bytes)
extern "C" void ext_00648300();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_005CEA30(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_00648300
        push esi
        call ext_006A5C5C
        add esp, 4
    done:
        pop esi
        ret
    }
}

// [0x005C3760] sub_005C3760 (27 bytes)
extern "C" void ext_00648450();

extern "C" void __fastcall fn_005C3760(void* self) {
    unsigned char* p = (unsigned char*)self;
    void* child = *(void**)(p + 0x16c);
    if (child) {
        typedef void (__fastcall *FnCall)(void*);
        ((FnCall)ext_00648450)(child);
        p[0x168] = 0;
    }
}

// [0x005C3780] sub_005C3780 (27 bytes)
extern "C" void ext_00648460();
extern "C" void __fastcall fn_005C3780(void* self) {
    unsigned char* p = (unsigned char*)self;
    void* child = *(void**)(p + 0x16c);
    if (child) {
        typedef void (__fastcall *FnCall)(void*);
        ((FnCall)ext_00648460)(child);
        p[0x168] = 1;
    }
}

// [0x005C3740] sub_005C3740 (27 bytes)
extern "C" void ext_00648800();
extern "C" void __fastcall fn_005C3740(void* self) {
    unsigned char* p = (unsigned char*)self;
    void* child = *(void**)(p + 0x16c);
    if (child) {
        typedef void (__fastcall *FnCall)(void*);
        ((FnCall)ext_00648800)(child);
        p[0x168] = 0;
    }
}

// [0x005CFC80] sub_005CFC80 (37 bytes)
extern "C" void ext_00530730();
extern "C" __declspec(naked) void __fastcall fn_005CFC80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        je done
        mov eax, dword ptr [esi + 0x154]
        push eax
        call ext_00530730
        mov dword ptr [esi + 0x154], 0
    done:
        pop esi
        ret
    }
}

// [0x005C3F10] sub_005C3F10 (38 bytes)
extern "C" int mem_00B44C08;
extern "C" int mem_00B44C0C;

extern "C" int __fastcall fn_005C3F10(void* self) {
    int begin = mem_00B44C08;
    if (begin == 0) {
        return 0;
    }
    int n = mem_00B44C0C - begin;
    return n / 28;
}

// [0x005CE4F0] sub_005CE4F0 (44 bytes)
extern "C" void __fastcall fn_005CE4F0(void* self) {
    float* f = (float*)self;
    float z = 0.0f;
    f[6] = z;
    f[7] = z;
    f[2] = z;
    f[1] = z;
    f[0] = z;
    f[5] = z;
    f[4] = z;
    f[3] = z;
    f[10] = z;
    f[9] = z;
    f[8] = z;
    f[13] = z;
    f[12] = z;
    f[11] = z;
}

// [0x005CFE10] sub_005CFE10 (51 bytes)
extern "C" __declspec(naked) void __fastcall fn_005CFE10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x2c4]
        test ecx, ecx
        je null_obj
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebx
        call edx
        mov byte ptr [esi + 0x1f2], bl
        pop ebx
        pop esi
        ret 0x4
null_obj:
        mov al, byte ptr [esp + 0x8]
        mov byte ptr [esi + 0x1f2], al
        pop esi
        ret 0x4
    }
}

// [0x005C3030] sub_005C3030 (54 bytes)
extern "C" void ext_005B7260();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_005C3030(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x164], 0x0
        je done
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esi + 0x4]
        push edx
        call eax
        mov ecx, dword ptr [esp + 0x8]
        add eax, 0x30
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0x164]
        call ext_005B7260
done:
        pop esi
        ret 0x4
    }
}

// [0x005C3090] sub_005C3090 (54 bytes)
extern "C" void ext_005B72A0();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_005C3090(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x164], 0
        je done
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esi + 0x4]
        push edx
        call eax
        mov ecx, dword ptr [esp + 0x8]
        add eax, 0x30
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0x164]
        call ext_005B72A0
    done:
        pop esi
        ret 0x4
    }
}
