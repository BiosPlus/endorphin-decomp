// Decompiled translation unit: src/classes/GettingStartedDialog.cpp

// [0x0041B3C0] GettingStartedDialog::vfunc_71 (16 bytes)
extern "C" void ext_006A5DBE();
extern "C" void ext_004349D0();
extern "C" int mem_00ACDB40;

extern "C" void __fastcall fn_0041B3C0(void* self) {
    ext_006A5DBE();
    __asm mov ecx, mem_00ACDB40;
    ext_004349D0();
}

// [0x0041B510] GettingStartedDialog::vfunc_63 (46 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0041B510(void* self, int edx_unused, void* a1) {
    char* esi = (char*)self;
    ((void (__stdcall*)(void*, int, void*))ext_006A5F44)(a1, 0x4e6, esi + 0x120);
    ((void (__stdcall*)(void*, int, void*))ext_006A5F44)(a1, 1, esi + 0x194);
}

// [0x0041B2A0] GettingStartedDialog::vfunc_86 (72 bytes)
extern "C" void ext_006A6328();
extern "C" int mem_0093A078;
extern "C" int mem_0093A068;

extern "C" __declspec(naked) void __fastcall fn_0041B2A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 120h]
        mov edx, dword ptr [eax + 148h]
        lea ecx, [esi + 120h]
        call edx
        test eax, eax
        setne al
        mov byte ptr [esi + 11ch], al
        mov ecx, mem_0093A078
        mov edx, mem_0093A068
        movzx eax, al
        push eax
        push ecx
        push edx
        mov ecx, 0ad6bc8h
        call ext_006A6328
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 68h]
        mov ecx, esi
        pop esi
        jmp edx
    }
}
