// Decompiled translation unit: src/classes/BatchModeDialog.cpp

// [0x00404F60] BatchModeDialog::vfunc_63 (277 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00404F60(void* self, int edx_unused, void* a1) {
    typedef void (__stdcall *DdxFn)(void*, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x45f, p + 0x74);
    ddx(a1, 0x441, p + 0xc8);
    ddx(a1, 0x45c, p + 0x11c);
    ddx(a1, 0x45a, p + 0x170);
    ddx(a1, 0x460, p + 0x1c4);
    ddx(a1, 0x461, p + 0x218);
    ddx(a1, 0x430, p + 0x26c);
    ddx(a1, 0x1, p + 0x2c0);
    ddx(a1, 0x462, p + 0x314);
    ddx(a1, 0x463, p + 0x368);
    ddx(a1, 0x464, p + 0x3bc);
    ddx(a1, 0x45d, p + 0x410);
    ddx(a1, 0x45e, p + 0x464);
    ddx(a1, 0x465, p + 0x4b8);
    ddx(a1, 0x42e, p + 0x50c);
}

// [0x00407470] BatchModeDialog::vfunc_84 (337 bytes)
extern "C" void ext_00404C60();
extern "C" void ext_00404CD0();
extern "C" void ext_00405450();
extern "C" void ext_004073C0();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F3E();
extern "C" void ext_006A5FC8();
extern "C" int mem_00925694;
extern "C" int mem_00A9ED4C;
extern "C" int mem_00A9EED4;
extern "C" int mem_0092565C;

extern "C" __declspec(naked) void __fastcall fn_00407470(void* self) {
    __asm {
        push -1
        push 0x8737f8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x58
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_006A5FC8
        mov eax, dword ptr [esi + 0x94]
        mov edi, dword ptr [mem_00925694]
        push 0x92a0d8
        xor ebx, ebx
        push ebx
        push 0x143
        push eax
        mov dword ptr [esi + 0x684], ebx
        mov byte ptr [esi + 0x688], bl
        call edi
        mov ecx, dword ptr [mem_00A9ED4C]
        mov edx, dword ptr [esi + 0x94]
        push ecx
        push ebx
        push 0x143
        push edx
        call edi
        mov eax, dword ptr [esi + 0x94]
        push 0x92a0d4
        push ebx
        push 0x143
        push eax
        call edi
        mov ecx, dword ptr [mem_00A9EED4]
        mov edx, dword ptr [esi + 0x94]
        push ecx
        push ebx
        push 0x143
        push edx
        call edi
        mov eax, dword ptr [esi + 0x94]
        push ebx
        push 1
        push 0x14e
        push eax
        call edi
        push 0xc8
        lea ecx, [esp + 0x14]
        call ext_00404C60
        push eax
        lea ecx, [esi + 0x560]
        mov dword ptr [esp + 0x74], ebx
        call ext_004073C0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x70], 0xffffffff
        call ext_00404CD0
        call ext_006A5EDE
        mov eax, dword ptr [eax + 8]
        mov ebp, dword ptr [mem_0092565C]
        push 0xfc
        push eax
        call ebp
        mov ebx, eax
        call ext_006A5EDE
        mov eax, dword ptr [eax + 8]
        push 0xfd
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x20]
        push ebx
        push 1
        push 0x80
        push ecx
        mov ebp, eax
        call edi
        mov edx, dword ptr [esi + 0x20]
        push ebp
        push 0
        push 0x80
        push edx
        call edi
        push 0
        push 0
        push 0x92a0d0
        push 0
        push 1
        lea ecx, [esi + 0x170]
        call ext_006A5F3E
        push 0
        mov ecx, esi
        call ext_00405450
        mov ecx, dword ptr [esp + 0x68]
        pop edi
        mov byte ptr [esi + 0x688], 0
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x64
        ret
    }
}
