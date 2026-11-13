// Decompiled translation unit: src/classes/NewCharacterDialog.cpp

extern "C" void ext_0040DAB0();
extern "C" void ext_0040E780();
extern "C" void ext_0040E7C0();

extern "C" void ext_0040AE10();
extern "C" void ext_0040B7B0();
extern "C" void ext_0040DA50();
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;
extern "C" int mem_00AC88F4;

// [0x0040E040] NewCharacterDialog::vfunc_84 (61 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0040E040(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_0040DA50
        mov ecx, offset mem_00AC88F4
        mov edi, eax
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, esi
        call ext_006A5F50
        mov ecx, esi
        call ext_0040B7B0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x168]
        mov ecx, esi
        call edx
        mov ecx, esi
        call ext_0040AE10
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x0040E800] NewCharacterDialog::vfunc_89 (23 bytes)
extern "C" __declspec(naked) void __fastcall fn_0040E800(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0040DAB0
        mov ecx, esi
        call ext_0040E780
        mov ecx, esi
        pop esi
        jmp ext_0040E7C0
    }
}

extern "C" void ext_0040CD90();
extern "C" void ext_006A5F44();

// [0x0040D470] NewCharacterDialog::vfunc_63 (88 bytes)
extern "C" void __fastcall fn_0040D470(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *BaseFn)(void*, int);
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    ((BaseFn)ext_0040CD90)(self, a1);
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x4c3, p + 0x3b4);
    ddx(a1, 0x480, p + 0x428);
    ddx(a1, 0x4c5, p + 0x360);
    ddx(a1, 3, p + 0x49c);
}


extern "C" void ext_0040B010();
extern "C" void ext_0040B860();
extern "C" void ext_0040B880();
extern "C" void ext_0040C380();
extern "C" void ext_0040C6F0();
extern "C" void ext_0040CAA0();
extern "C" void ext_006629B0();
extern "C" void ext_006A5FDA();
extern "C" int mem_00925694;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF4;
extern "C" int mem_008B56F9;
extern "C" int mem_00AC85AC;

// [0x0040D290] NewCharacterDialog::vfunc_90 (470 bytes)
extern "C" __declspec(naked) void __fastcall fn_0040D290(void* self) {
    __asm {
        push -1
        push offset mem_008B56F9
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x20
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_0040CAA0
        mov ecx, esi
        call ext_0040B860
        mov bl, al
        movzx edi, bl
        push edi
        lea ecx, [esi + 0x84]
        mov byte ptr [esp + 0x13], bl
        call ext_006A5FDA
        push edi
        lea ecx, [esi + 0xe8]
        call ext_006A5FDA
        push edi
        lea ecx, [esi + 0x13c]
        call ext_006A5FDA
        test bl, bl
        push 0
        jne L_40D302
        mov eax, dword ptr [esi + 0xa4]
        push -1
        push 0x186
        push eax
        call dword ptr [mem_00925694]
        jmp L_40D346
    L_40D302:
        mov ecx, dword ptr [esi + 0xa4]
        mov edi, dword ptr [mem_00925694]
        push 0
        push 0x188
        push ecx
        call edi
        cmp eax, -1
        jne L_40D346
        mov edx, dword ptr [esi + 0xa4]
        push 0
        push 0
        push 0x18b
        push edx
        call edi
        cmp eax, 2
        jl L_40D346
        mov eax, dword ptr [esi + 0xa4]
        push 0
        push 1
        push 0x186
        push eax
        call edi
    L_40D346:
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        call ext_0040C6F0
        lea edx, [esp + 0x10]
        push offset mem_00AC85AC
        push edx
        mov dword ptr [esp + 0x3c], 0
        call dword ptr [mem_00924FC4]
        add esp, 8
        mov bl, al
        push 1
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_0040B010
        test al, al
        je L_40D397
        push 0
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_0040B010
        test al, al
        jne L_40D397
        mov al, 1
        jmp L_40D399
    L_40D397:
        xor al, al
    L_40D399:
        test bl, bl
        jne L_40D3A5
        test al, al
        jne L_40D3A5
        mov bl, 1
        jmp L_40D3A7
    L_40D3A5:
        xor bl, bl
    L_40D3A7:
        movzx edx, bl
        push edx
        lea ecx, [esi + 0x428]
        call ext_006A5FDA
        test bl, bl
        je L_40D3C9
        mov ecx, esi
        call ext_0040B880
        test al, al
        je L_40D3C9
        mov bl, 1
        jmp L_40D3CB
    L_40D3C9:
        xor bl, bl
    L_40D3CB:
        movzx edi, bl
        push edi
        lea ecx, [esi + 0x360]
        call ext_006A5FDA
        push edi
        lea ecx, [esi + 0x49c]
        call ext_006A5FDA
        mov ecx, esi
        call ext_0040C380
        mov byte ptr [esp + 0xe], al
        lea eax, [esi + 0x340]
        push eax
        call ext_006629B0
        add esp, 4
        cmp byte ptr [esp + 0xf], 0
        je L_40D42B
        test bl, bl
        je L_40D423
        cmp byte ptr [esp + 0xe], 0
        je L_40D41E
        test al, al
        je L_40D41E
        mov eax, 1
        push eax
        jmp L_40D437
    L_40D41E:
        xor eax, eax
        push eax
        jmp L_40D437
    L_40D423:
        movzx ecx, byte ptr [esp + 0xe]
        push ecx
        jmp L_40D437
    L_40D42B:
        test bl, bl
        je L_40D435
        movzx edx, al
        push edx
        jmp L_40D437
    L_40D435:
        push 0
    L_40D437:
        lea ecx, [esi + 0x1b0]
        call ext_006A5FDA
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x2c
        ret
    }
}
