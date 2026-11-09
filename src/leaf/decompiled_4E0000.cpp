// Decompiled translation unit: src/leaf/decompiled_4E0000.cpp

// [0x004EE620] sub_004EE620 (15 bytes)
extern "C" void ext_004EE200();

extern "C" void __fastcall fn_004EE620(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x50) = a1;
    ext_004EE200();
}

// [0x004E9D70] sub_004E9D70 (17 bytes)
extern "C" void* __stdcall ext_00468180(int a, int b);
extern "C" void __fastcall ext_00469530(void* self);

extern "C" __declspec(naked) void __fastcall fn_004E9D70(void* self) {
    __asm {
        push 0
        push 5
        call ext_00468180
        mov ecx, eax
        call ext_00469530
        ret
    }
}
