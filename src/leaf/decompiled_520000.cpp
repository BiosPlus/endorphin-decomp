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
