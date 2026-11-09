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
