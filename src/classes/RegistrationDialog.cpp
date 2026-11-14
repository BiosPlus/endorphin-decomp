// Decompiled translation unit: src/classes/RegistrationDialog.cpp

// [0x004499B0] RegistrationDialog::vfunc_87 (25 bytes)
extern "C" void ext_006A5E60();
extern "C" void ext_006A5FB6();

extern "C" __declspec(naked) void __fastcall fn_004499B0(void* self) {
    __asm {
        push esi
        push 0x0
        push 0x0
        push 0x93380c
        mov esi, ecx
        call ext_006A5E60
        mov ecx, esi
        pop esi
        jmp ext_006A5FB6
    }
}

// [0x00449A00] RegistrationDialog::vfunc_7_off_74 (40 bytes)
extern "C" int mem_00AD08E4;
extern "C" int mem_00A2FE90;
extern "C" int mem_00A2FE94;
extern "C" int mem_00A2FE84;

extern "C" __declspec(naked) void* __fastcall fn_00449A00(void* self) {
    __asm {
        mov eax, 0x1
        test byte ptr [mem_00AD08E4], al
        jne short skip_00449A00
        or dword ptr [mem_00AD08E4], eax
        xor eax, eax
        xor ecx, ecx
        mov dword ptr [mem_00A2FE90], eax
        mov dword ptr [mem_00A2FE94], ecx
    skip_00449A00:
        mov eax, offset mem_00A2FE84
        ret
    }
}

// [0x00449C10] RegistrationDialog::vfunc_63 (79 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00449C10(void* self, int edx_unused, int a1) {
    char* p = (char*)self;
    typedef void (__stdcall *DdxFn)(int, int, void*);
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x4e1, p + 0x11c);
    ddx(a1, 0x4e2, p + 0x170);
    ddx(a1, 1, p + 0x1fc);
    ddx(a1, 2, p + 0x270);
}

// [0x004498A0] RegistrationDialog::vfunc_86 (257 bytes)
extern "C" void ext_00665010();
extern "C" void ext_006A5E60();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5FB0();
extern "C" int mem_009242F0;
extern "C" int mem_00924300;
extern "C" int mem_00924FD4;
extern "C" int mem_00924FC0;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_004498A0(void* self) {
    __asm {
        push -1
        push 0x87cd22
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 0x928b5d
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        push 0x928b5d
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x20], 0
        call dword ptr [mem_009242F0]
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esi + 0x11c]
        mov byte ptr [esp + 0x20], 1
        call ext_006A5F4A
        lea ecx, [esp + 0xc]
        push ecx
        lea ecx, [esi + 0x170]
        call ext_006A5F4A
        lea ecx, [esp + 0x10]
        lea edi, [esi + 0x1c4]
        call dword ptr [mem_00924300]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924FD4]
        lea ecx, [esp + 0xc]
        lea ebx, [esi + 0x1e0]
        call dword ptr [mem_00924300]
        push eax
        mov ecx, ebx
        call dword ptr [mem_00924FD4]
        push edi
        call ext_00665010
        push 0x928b5d
        push edi
        mov edi, dword ptr [mem_00924FC0]
        call edi
        add esp, 0xc
        test al, al
        jne short fail_004498A0
        push 0x928b5d
        push ebx
        call edi
        add esp, 8
        test al, al
        jne short fail_004498A0
        mov ecx, esi
        call ext_006A5FB0
        jmp short epilogue_004498A0
    fail_004498A0:
        push 0
        push 0
        push 0x9337d8
        call ext_006A5E60
    epilogue_004498A0:
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

extern "C" void __fastcall ext_006A6244(void* self);
extern "C" void ext_0040F230();
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0D0;
extern "C" int mem_0093A0E8;
extern "C" int mem_0093A0CC;

typedef void (__thiscall *fn_0040F230_t)(void*, int, int, int, int);

// [0x00449840] RegistrationDialog::vfunc_84 (90 bytes)
extern "C" int __fastcall fn_00449840(void* self) {
    ext_006A6244(self);
    ((fn_0040F230_t)ext_0040F230)((char*)self + 0x1FC, mem_0093A0CC, mem_0093A0E8, mem_0093A0D0, mem_0093A0C8);
    ((fn_0040F230_t)ext_0040F230)((char*)self + 0x270, mem_0093A0CC, mem_0093A0E8, mem_0093A0D0, mem_0093A0C8);
    return 1;
}
