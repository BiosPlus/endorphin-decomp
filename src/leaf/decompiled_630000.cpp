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
