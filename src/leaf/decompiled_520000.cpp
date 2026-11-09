// Decompiled translation unit: src/leaf/decompiled_520000.cpp

extern "C" void ext_00521FD0();
extern "C" void ext_00522080();

// [0x00522190] sub_00522190 (25 bytes)
extern "C" void __fastcall fn_00522190(char* self, int edx_unused, int a1) {
    *(int*)(self + 0xc4) = a1;
    void** vtbl = *(void***)self;
    typedef void (__fastcall *VFn)(char*, int, int);
    ((VFn)vtbl[0x17])(self, (int)vtbl, 0);
}

// [0x005220B0] sub_005220B0 (10 bytes)
extern "C" __declspec(naked) void __cdecl fn_005220B0() {
    __asm {
        call ext_00521FD0
        jmp ext_00522080
    }
}

// [0x00525E70] sub_00525E70 (10 bytes)
extern "C" void ext_00525C40();

extern "C" __declspec(naked) void __fastcall fn_00525E70(void* self) {
    __asm {
        push ecx
        add ecx, 0x60
        call ext_00525C40
        ret
    }
}

// [0x0052ADA0] sub_0052ADA0 (16 bytes)
extern "C" void ext_0052AD00();

extern "C" __declspec(naked) int __stdcall fn_0052ADA0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_0052AD00
        add eax, 8
        ret 4
    }
}

// [0x0052F140] sub_0052F140 (18 bytes)
extern "C" void ext_00538530();
extern "C" int mem_00953A14;
extern "C" __declspec(naked) void __fastcall fn_0052F140(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00538530
        mov dword ptr [esi], offset mem_00953A14
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0052F1C0] sub_0052F1C0 (18 bytes)
extern "C" void ext_00538530();
extern "C" char mem_00953B8C;

extern "C" void* __fastcall fn_0052F1C0(void* self) {
    ext_00538530();
    *(void**)self = (void*)&mem_00953B8C;
    return self;
}

// [0x0052F1F0] sub_0052F1F0 (18 bytes)
extern "C" void ext_00538530();
extern "C" char mem_00953BF4;

extern "C" void* __fastcall fn_0052F1F0(void* self) {
    ext_00538530();
    *(void**)self = (void*)&mem_00953BF4;
    return self;
}

// [0x00522580] sub_00522580 (35 bytes)
extern "C" int mem_00AED298;
extern "C" int mem_00AED294;
extern "C" int* __cdecl fn_00522580() {
    if (!(mem_00AED298 & 1)) {
        mem_00AED298 |= 1;
        mem_00AED294 = 0x952968;
    }
    return &mem_00AED294;
}

// [0x00527660] sub_00527660 (35 bytes)
extern "C" int mem_00AED310;
extern "C" int mem_00AED30C;
extern "C" int* __cdecl fn_00527660() {
    if (!(mem_00AED310 & 1)) {
        mem_00AED310 |= 1;
        mem_00AED30C = 0x95330c;
    }
    return &mem_00AED30C;
}

// [0x00528B60] sub_00528B60 (36 bytes)
extern "C" void __fastcall fn_00528B60(void* self) {
    char* s = (char*)self;
    if (*(void**)(s + 4) != 0) {
        *(int*)(*(char**)(s + 4) + 8) = 0;
        void* o = *(void**)(s + 4);
        typedef void (__thiscall *VFn)(void*);
        ((VFn)(*(void***)o)[7])(o);
        *(int*)(s + 4) = 0;
    }
}
