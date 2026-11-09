// Decompiled translation unit: src/leaf/decompiled_550000.cpp

// [0x00559180] sub_00559180 (31 bytes)
extern "C" void ext_00559070();

extern "C" __declspec(naked) void __fastcall fn_00559180(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x414], eax
        mov dword ptr [ecx + 0x418], eax
        mov dword ptr [esp + 0x4], eax
        add ecx, 0x43c
        jmp ext_00559070
    }
}

// [0x00554110] sub_00554110 (33 bytes)
extern "C" int __fastcall fn_00554110(int* self) {
    int a = self[1];
    if (a == 0) {
        return 0;
    }
    return (self[2] - a) / 60;
}

// [0x00552160] sub_00552160 (14 bytes)
extern "C" void ext_005B11E0();
extern "C" __declspec(naked) void __fastcall fn_00552160(void* self) {
    __asm {
        push 2
        add ecx, 0x210
        call ext_005B11E0
        ret
    }
}

// [0x005528E0] sub_005528E0 (14 bytes)
extern "C" void ext_005528D0();
extern "C" __declspec(naked) void* __fastcall fn_005528E0(void* self) {
    __asm {
        mov dword ptr [ecx], 0x957534
        call ext_005528D0
        mov eax, ecx
        ret
    }
}

// [0x00559770] sub_00559770 (18 bytes)
extern "C" void ext_005591A0(int, int, int);
extern "C" void __cdecl fn_00559770(int a) {
    ext_005591A0(a, 0, 1);
}

// [0x005576F0] sub_005576F0 (20 bytes)
extern "C" void ext_00556AE0();
extern "C" __declspec(naked) void __fastcall fn_005576F0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x420]
        mov edx, dword ptr [ecx + 0x418]
        push eax
        push edx
        call ext_00556AE0
        ret
    }
}

// [0x00550F60] sub_00550F60 (25 bytes)
extern "C" void ext_00403560();
extern "C" void* __fastcall fn_00550F60(void* self, int edx_unused, int a1) {
    ((void (__stdcall*)(int))ext_00403560)(a1);
    *(int*)self = 0x009570dc;
    return self;
}

// [0x00551200] sub_00551200 (25 bytes)
extern "C" void ext_00401C60();
extern "C" void* __fastcall fn_00551200(void* self, int edx_unused, int a1) {
    typedef void (__fastcall *Callee)(void*, int, int);
    ((Callee)ext_00401C60)(self, edx_unused, a1);
    *(int*)self = 0x009570dc;
    return self;
}

// [0x0055E290] sub_0055E290 (25 bytes)
extern "C" void ext_00401C60();
extern "C" void* __fastcall fn_0055E290(void* self, int edx_unused, int a1) {
    typedef void (__fastcall *Callee)(void*, int, int);
    ((Callee)ext_00401C60)(self, edx_unused, a1);
    *(int*)self = 0x0095879c;
    return self;
}

// [0x0055D020] sub_0055D020 (25 bytes)
extern "C" void ext_00402CF0();
extern "C" void ext_006A5C5C();
extern "C" void __fastcall fn_0055D020(void* self) {
    typedef void (__fastcall *Callee1)(void*);
    typedef void (__cdecl *Callee2)(void*);
    void* p = *(void**)self;
    if (p != 0) {
        ((Callee1)ext_00402CF0)(p);
        ((Callee2)ext_006A5C5C)(p);
    }
}

// [0x00553960] sub_00553960 (27 bytes)
extern "C" void ext_00584C10();

extern "C" __declspec(naked) unsigned char __stdcall fn_00553960(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        test ecx, ecx
        je return_zero
        call ext_00584C10
        test al, al
        jne return_zero
        mov al, 1
        ret 4
    return_zero:
        xor al, al
        ret 4
    }
}

// [0x00554CE0] sub_00554CE0 (27 bytes)
extern "C" void ext_005530B0();
extern "C" __declspec(naked) void __fastcall fn_00554CE0(void* self) {
    __asm {
        fld dword ptr [esp + 0x4]
        push ecx
        fstp dword ptr [esp]
        call ext_005530B0
        fmul dword ptr [ecx + 0x20]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x00554D20] sub_00554D20 (27 bytes)
extern "C" void ext_00553170();
extern "C" __declspec(naked) void __fastcall fn_00554D20(void* self) {
    __asm {
        fld dword ptr [esp + 0x4]
        push ecx
        fstp dword ptr [esp]
        call ext_00553170
        fdiv dword ptr [ecx + 0x20]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x005571E0] sub_005571E0 (27 bytes)
extern "C" void ext_005566D0(int a, int b, void* c, int d);

extern "C" __declspec(naked) void __fastcall fn_005571E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_005566D0
        add esp, 0x10
        ret 0x8
    }
}

// [0x005572D0] sub_005572D0 (27 bytes)
extern "C" void ext_00556740();
extern "C" __declspec(naked) void __fastcall fn_005572D0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00556740
        add esp, 0x10
        ret 0x8
    }
}

// [0x00557360] sub_00557360 (27 bytes)
extern "C" void ext_005567D0();
extern "C" __declspec(naked) void __fastcall fn_00557360(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_005567D0
        add esp, 0x10
        ret 0x8
    }
}

// [0x00559620] sub_00559620 (27 bytes)
extern "C" void ext_00558F20();
extern "C" __declspec(naked) void __fastcall fn_00559620(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00558F20
        add esp, 0x10
        ret 0x8
    }
}

extern "C" void ext_00558F80();

// [0x00559640] sub_00559640 (27 bytes)
extern "C" __declspec(naked) void __fastcall fn_00559640(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00558F80
        add esp, 0x10
        ret 0x8
    }
}
