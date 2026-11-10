// Decompiled translation unit: src/classes/SaveCharacterDialog.cpp

extern "C" void __fastcall ext_0040E2F0(void* self);
extern "C" void __fastcall ext_0040BC70(void* self);

// [0x0040E6B0] SaveCharacterDialog::vfunc_86 (16 bytes)
extern "C" void __fastcall fn_0040E6B0(void* self) {
    ext_0040E2F0(self);
    ext_0040BC70(self);
}

extern "C" void __fastcall ext_0040E780(void* self);
extern "C" void __fastcall ext_0040E7C0(void* self);

// [0x0040E840] SaveCharacterDialog::vfunc_89 (16 bytes)
extern "C" void __fastcall fn_0040E840(void* self) {
    ext_0040E780(self);
    ext_0040E7C0(self);
}

// [0x0040D640] SaveCharacterDialog::vfunc_90 (86 bytes)
extern "C" void __fastcall ext_0040CAA0(void* self);
extern "C" bool __stdcall ext_0040B6B0(const void* a1);
extern "C" void __fastcall ext_006A5FDA(void* self, int edx_unused, int a1);
extern "C" int mem_00924FC8;
extern "C" int mem_00928B5D;

extern "C" __declspec(naked) void __fastcall fn_0040D640(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_0040CAA0
        lea edi, [esi + 0x340]
        push offset mem_00928B5D
        push edi
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je fail
        push edi
        mov ecx, esi
        call ext_0040B6B0
        test al, al
        jne fail
        mov al, 0x1
        movzx eax, al
        push eax
        lea ecx, [esi + 0x1b0]
        call ext_006A5FDA
        pop edi
        pop esi
        ret
    fail:
        xor al, al
        movzx eax, al
        push eax
        lea ecx, [esi + 0x1b0]
        call ext_006A5FDA
        pop edi
        pop esi
        ret
    }
}
