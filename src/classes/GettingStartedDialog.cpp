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

// [0x0041B590] GettingStartedDialog::vfunc_7_off_74 (120 bytes)
extern "C" int mem_00A2EE1C;
extern "C" int mem_00A2EE28;
extern "C" int mem_00A2EE2C;
extern "C" int mem_00A2EE30;
extern "C" int mem_00A2EE34;
extern "C" int mem_00A2EE38;
extern "C" int mem_00A2EE3C;
extern "C" int mem_00A2EE40;
extern "C" int mem_00A2EE44;
extern "C" int mem_00A2EE48;
extern "C" int mem_00A2EE4C;
extern "C" int mem_00A2EE50;
extern "C" int mem_00A2EE54;
extern "C" int mem_00ACB05C;
extern "C" void ext_0041B300();
extern "C" void fn_0041B3B0();

extern "C" __declspec(naked) void __fastcall fn_0041B590(void* self) {
    __asm {
        mov eax, 1
        test byte ptr mem_00ACB05C, al
        jne done
        or dword ptr mem_00ACB05C, eax
        mov eax, offset ext_0041B300
        xor ecx, ecx
        mov dword ptr mem_00A2EE28, eax
        mov eax, offset fn_0041B3B0
        mov dword ptr mem_00A2EE3C, eax
        xor eax, eax
        mov dword ptr mem_00A2EE2C, ecx
        mov dword ptr mem_00A2EE30, ecx
        mov dword ptr mem_00A2EE34, 0fffffda8h
        mov dword ptr mem_00A2EE38, 0092d7b0h
        mov dword ptr mem_00A2EE40, ecx
        mov dword ptr mem_00A2EE44, 5
        mov dword ptr mem_00A2EE48, ecx
        mov dword ptr mem_00A2EE4C, ecx
        mov dword ptr mem_00A2EE50, eax
        mov dword ptr mem_00A2EE54, ecx
    done:
        mov eax, offset mem_00A2EE1C
        ret
    }
}
