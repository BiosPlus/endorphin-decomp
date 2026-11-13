// Decompiled translation unit: src/Primitives/HingeLimit.cpp

extern "C" void ext_0053A610();
extern "C" double mem_00955D28;

// [0x0053DEA0] Primitives::HingeLimit::vfunc_25 (81 bytes)
extern "C" void __fastcall fn_0053DEA0(void* self, int edx_unused, int a1, void* a2, int a3) {
    ((void (__thiscall*)(void*, int, void*, int))ext_0053A610)(self, a1, a2, a3);
    unsigned char* s = (unsigned char*)self;
    unsigned char* o = (unsigned char*)a2;
    unsigned int f = *(unsigned int*)(s + 0x1c);
    if (f & 0x40) {
        f ^= 0x40;
        *(unsigned int*)(s + 0x1c) = f;
    }
    f = *(unsigned int*)(s + 0x1c);
    if (!(f & 0x4)) {
        f ^= 0x4;
        *(unsigned int*)(s + 0x1c) = f;
    }
    *(int*)(s + 0x3c) = *(int*)(o + 0x94);
    *(float*)(s + 0x40) = (float)(*(float*)(o + 0xb8) * mem_00955D28);
}

// [0x0052FD30] Primitives::HingeLimit::vfunc_0 (96 bytes)
extern "C" void ext_00537EC0();
extern "C" void ext_0053A810();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0052FD30(void* self) {
    __asm {
        push -1
        push 0x894d68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x44]
        mov dword ptr [esp + 0x10], 0
        call ext_00537EC0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0053A810
        test byte ptr [esp + 0x18], 0x1
        je L_0052FD7C
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_0052FD7C:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0053BEF0] Primitives::HingeLimit::vfunc_28 (152 bytes)
extern "C" void ext_005B11F0();
extern "C" void ext_00537ED0();
extern "C" int mem_00925414;
extern "C" int mem_009254CC;
extern "C" int mem_00925404;
extern "C" float mem_00955A30;
extern "C" double mem_00932470;

extern "C" __declspec(naked) void __fastcall fn_0053BEF0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x14
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        call ext_005B11F0
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0xc]
        call dword ptr [mem_00925414]
        fldz
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        fld1
        fstp dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_00955A30]
        fstp dword ptr [esp]
        call dword ptr [mem_009254CC]
        fld dword ptr [esp + 0xc]
        mov eax, dword ptr [esi + 0x3c]
        fld dword ptr [esp + 0x8]
        push eax
        fld st(0)
        sub esp, 0x10
        _emit 0xde
        _emit 0xea
        lea ecx, [esi + 0x44]
        fxch st(1)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x40]
        fmul qword ptr [mem_00932470]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp]
        call ext_00537ED0
        call dword ptr [mem_00925404]
        pop esi
        add esp, 0x14
        ret 0x4
    }
}
