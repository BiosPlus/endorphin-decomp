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
