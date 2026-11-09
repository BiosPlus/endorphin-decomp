// Decompiled translation unit: src/leaf/decompiled_630000.cpp

extern "C" void ext_0063CFD0();

// [0x0063D480] sub_0063D480 (18 bytes)
extern "C" void __fastcall fn_0063D480(void* self, int edx_unused, float a1) {
    *(float*)((char*)self + 0xb0) = a1;
    ext_0063CFD0();
}

extern "C" void* __stdcall ext_00630540(void* a1);
extern "C" void __fastcall ext_00693FE0(void* self);

// [0x00630E40] sub_00630E40 (24 bytes)
extern "C" void* __fastcall fn_00630E40(void* self) {
    void* esi = (char*)self + 0x150;
    void* eax = ext_00630540(esi);
    ext_00693FE0(eax);
    return esi;
}

extern "C" void ext_00630580();
extern "C" void ext_00693F40();

// [0x00630E60] sub_00630E60 (24 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00630E60(void* self) {
    __asm {
        push esi
        lea esi, [ecx + 0f8h]
        call ext_00630580
        push eax
        mov ecx, esi
        call ext_00693F40
        mov eax, esi
        pop esi
        ret
    }
}

extern "C" void ext_00630E60();

// [0x00630E80] sub_00630E80 (24 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00630E80(void* self) {
    __asm {
        push esi
        lea esi, [ecx + 108h]
        push esi
        call ext_00630E60
        mov ecx, eax
        call ext_00693FE0
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00630540] sub_00630540 (25 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00630540(void* self) {
    __asm {
        push esi
        __asm _emit 0x8D __asm _emit 0xB1 __asm _emit 0x5C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea esi, [ecx + 0x15c]
        __asm _emit 0x81 __asm _emit 0xC1 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // add ecx, 0x90
        push ecx
        mov ecx, esi
        call ext_00693F40
        mov eax, esi
        pop esi
        ret
    }
}

extern "C" void ext_0062CD30();

// [0x0063D950] sub_0063D950 (29 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0063D950(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0062CD30
        fldz
        mov dword ptr [esi], 9793d4h
        fst dword ptr [esi + 48h]
        fst dword ptr [esi + 44h]
        mov eax, esi
        fstp dword ptr [esi + 40h]
        pop esi
        ret
    }
}

// [0x0063D970] sub_0063D970 (29 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0063D970(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0062CD30
        fldz
        mov dword ptr [esi], 979284h
        fst dword ptr [esi + 44h]
        fst dword ptr [esi + 40h]
        mov eax, esi
        fstp dword ptr [esi + 3ch]
        pop esi
        ret
    }
}

// [0x0063DAB0] sub_0063DAB0 (29 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0063DAB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0062CD30
        fldz
        mov dword ptr [esi], 9792f4h
        fst dword ptr [esi + 44h]
        fst dword ptr [esi + 40h]
        mov eax, esi
        fstp dword ptr [esi + 3ch]
        pop esi
        ret
    }
}
