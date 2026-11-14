// Decompiled translation unit: src/classes/ExportDialog.cpp

// [0x00417F10] ExportDialog::vfunc_63 (463 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00417F10(void* self, int edx_unused, void* a1) {
    typedef void (__stdcall *DdxFn)(void*, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x4c5, p + 0x370);
    ddx(a1, 0x427, p + 0xc8);
    ddx(a1, 0x428, p + 0x11c);
    ddx(a1, 0x487, p + 0x170);
    ddx(a1, 0x429, p + 0x218);
    ddx(a1, 0x488, p + 0x1c4);
    ddx(a1, 0x47e, p + 0x2c0);
    ddx(a1, 0x480, p + 0x26c);
    ddx(a1, 0x481, p + 0x314);
    ddx(a1, 0x482, p + 0x3c4);
    ddx(a1, 0x4bd, p + 0x418);
    ddx(a1, 0x3f3, p + 0x46c);
    ddx(a1, 0x424, p + 0x4c0);
    ddx(a1, 0x423, p + 0x514);
    ddx(a1, 0x422, p + 0x568);
    ddx(a1, 0x477, p + 0x5bc);
    ddx(a1, 0x247, p + 0x610);
    ddx(a1, 0x4bc, p + 0x664);
    ddx(a1, 0x3f2, p + 0x6b8);
    ddx(a1, 0x4cd, p + 0x70c);
    ddx(a1, 0x4e8, p + 0x760);
    ddx(a1, 0x4ea, p + 0x7b4);
    ddx(a1, 0x42f, p + 0x808);
    ddx(a1, 0x430, p + 0x85c);
    ddx(a1, 0x47f, p + 0x8b0);
}

// [0x00418350] ExportDialog::vfunc_86 (1235 bytes)
extern "C" void ext_006A5E60();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5FB0();
extern "C" void ext_006A6238();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009251E4;
extern "C" int mem_009251F0;
extern "C" int mem_00925694;
extern "C" int mem_00924494;
extern "C" int mem_0092449C;
extern "C" int mem_009242F4;
extern "C" int mem_009242F0;
extern "C" int mem_009245A8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_00418350(void* self) {
    __asm {
        push -1
        push 0x876501
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x44
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi + 0x4c0]
        mov dword ptr [esp + 0x5c], 0
        call ext_006A5F4A
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924300]
        mov edi, dword ptr [mem_009251E4]
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x78]
        mov dword ptr [ecx], eax
        add esp, 4
        lea ecx, [esp + 0xc]
        push ecx
        lea ecx, [esi + 0x514]
        call ext_006A5F4A
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924300]
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x78]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [esi + 0x8c]
        add esp, 4
        test ecx, ecx
        je L418406
        lea edx, [esp + 0xc]
        push edx
        call ext_006A5F4A
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0x18]
        mov eax, dword ptr [esi + 0x78]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [eax + 8]
        add esp, 4
L418406:
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi + 0x218]
        call ext_006A5F4A
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0x18]
        mov eax, dword ptr [esi + 0x78]
        fld dword ptr [esp + 0x18]
        mov edi, dword ptr [mem_00925694]
        fstp dword ptr [eax + 0x10]
        mov ecx, dword ptr [esi + 0x13c]
        add esp, 4
        push 0
        push 0
        push 0x147
        push ecx
        call edi
        mov ecx, dword ptr [esi + 0x78]
        push 0
        push 0
        mov dword ptr [ecx + 0x28], eax
        mov edx, dword ptr [esi + 0xe8]
        push 0x147
        push edx
        call edi
        mov ecx, dword ptr [esi + 0x78]
        push 0
        push 0
        mov dword ptr [ecx + 0x2c], eax
        mov eax, dword ptr [esi + 0x190]
        push 0x147
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x78]
        push 0
        push 0
        mov dword ptr [ecx + 0x70], eax
        mov ecx, dword ptr [esi + 0x28c]
        push 0xf0
        push ecx
        call edi
        mov ecx, dword ptr [esi + 0x78]
        test eax, eax
        setne dl
        mov byte ptr [ecx + 0x74], dl
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x60]
        call edx
        test al, al
        je L418518
        push 0xacaf8c
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924494]
        mov ecx, dword ptr [esi + 0x1e4]
        lea eax, [esp + 0x14]
        push eax
        push 0
        push 0
        push 0x147
        push ecx
        mov byte ptr [esp + 0x6c], 1
        call edi
        push eax
        lea ecx, [esi + 0x1c4]
        call ext_006A6238
        mov ecx, 0xacaf8c
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_0092449C]
        mov ecx, dword ptr [esi + 0x78]
        test eax, eax
        sete al
        mov byte ptr [ecx + 0x14], al
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x58], 0
        call dword ptr [mem_009242F4]
L418518:
        mov edx, dword ptr [esi + 0x8d0]
        push 0
        push 0
        push 0xf0
        push edx
        call edi
        test eax, eax
        je L4185FF
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242FC]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x10]
        mov bl, 3
        push eax
        lea ecx, [esi + 0x808]
        mov byte ptr [esp + 0x5c], bl
        call ext_006A5F4A
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esi + 0x85c]
        call ext_006A5F4A
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092449C]
        test eax, eax
        je L4185AC
        push 0
        push 0x30
        push 0x92cfc0
        call ext_006A5E60
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        jmp L418807
L4185AC:
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009245A8]
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi + 0x74]
        mov edx, dword ptr [eax + 4]
        mov edx, dword ptr [edx]
        lea ecx, [eax + 4]
        lea eax, [esp + 0x18]
        push eax
        mov byte ptr [esp + 0x5c], 4
        call edx
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x58], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x58], 0
        call dword ptr [mem_009242F4]
L4185FF:
        mov eax, dword ptr [esi + 0x2e0]
        push 0
        push 0
        push 0xf0
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x78]
        cmp eax, 1
        push 0
        sete dl
        push 0
        mov byte ptr [ecx + 0x4d], dl
        mov eax, dword ptr [esi + 0x334]
        push 0xf0
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x78]
        cmp eax, 1
        push 0
        sete dl
        push 0
        mov byte ptr [ecx + 0x6d], dl
        mov eax, dword ptr [esi + 0x630]
        push 0xf0
        push eax
        call edi
        cmp eax, 1
        sete al
        test al, al
        je L418800
        mov eax, dword ptr [esi + 0x78]
        lea ecx, [esi + 0xac]
        push ecx
        lea ecx, [eax + 0xbc]
        call dword ptr [mem_00924FDC]
        mov edx, dword ptr [esi + 0x72c]
        push 0
        push 0
        push 0x147
        push edx
        call edi
        mov ecx, dword ptr [esi + 0x78]
        push 0
        push 0
        mov dword ptr [ecx + 0xb4], eax
        mov eax, dword ptr [esi + 0x72c]
        push 0x147
        push eax
        call edi
        sub eax, 0
        mov ebx, 5
        je L4186E6
        sub eax, 1
        je L4186CE
        sub eax, 1
        jne L418700
        mov eax, dword ptr [esi + 0x78]
        mov dword ptr [eax + 0xb0], 0xa
        mov eax, dword ptr [esi + 0x78]
        mov dword ptr [eax + 0xac], 0x32
        jmp L418700
L4186CE:
        mov eax, dword ptr [esi + 0x78]
        mov dword ptr [eax + 0xb0], ebx
        mov eax, dword ptr [esi + 0x78]
        mov dword ptr [eax + 0xac], 0x1e
        jmp L418700
L4186E6:
        mov eax, dword ptr [esi + 0x78]
        mov dword ptr [eax + 0xb0], 2
        mov eax, dword ptr [esi + 0x78]
        mov dword ptr [eax + 0xac], 0xc
L418700:
        push 0x928b5d
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        push 0x928b5d
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x5c], bl
        call dword ptr [mem_009242F0]
        mov edx, dword ptr [esi + 0x780]
        lea ecx, [esp + 0x10]
        push ecx
        push 0
        push 0
        push 0x147
        push edx
        mov byte ptr [esp + 0x6c], 6
        call edi
        push eax
        lea ecx, [esi + 0x760]
        call ext_006A6238
        mov ecx, dword ptr [esi + 0x7d4]
        lea eax, [esp + 0x14]
        push eax
        push 0
        push 0
        push 0x147
        push ecx
        call edi
        push eax
        lea ecx, [esi + 0x7b4]
        call ext_006A6238
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924FE4]
        mov bl, 7
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x58], bl
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi + 0x78]
        lea edx, [esp + 0x34]
        push edx
        lea ecx, [eax + 0xd8]
        mov byte ptr [esp + 0x5c], 8
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esi + 0x78]
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [eax + 0xf4]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x58], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x58], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x58], 0
        call dword ptr [mem_009242F4]
L418800:
        mov ecx, esi
        call ext_006A5FB0
L418807:
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x50]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x50
        ret
    }
}

// [0x00418DE0] ExportDialog::vfunc_84 (2333 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_00417420();
extern "C" void ext_004174F0();
extern "C" void ext_004180E0();
extern "C" void ext_00418130();
extern "C" void ext_00418BE0();
extern "C" void ext_006629B0();
extern "C" void ext_00664840();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5E72();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F50();
extern "C" void ext_006A5FC8();
extern "C" void ext_006A5FDA();
extern "C" void ext_006A6DE0();
extern "C" void ext_0087656E();
extern "C" int mem_0092565C;
extern "C" int mem_00925694;
extern "C" int mem_00924300;
extern "C" int mem_00A9F414;
extern "C" int mem_00A9ED98;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00ACAB8C;
extern "C" int mem_00ACACC4;
extern "C" int mem_00ACAD8C;
extern "C" int mem_00ACAF6C;
extern "C" int mem_00ACAF70;
extern "C" int mem_00ACAF74;
extern "C" int mem_00ACAF78;
extern "C" int mem_00ACAF7C;
extern "C" int mem_00ACAF8C;
extern "C" int mem_00ACAF90;
extern "C" int mem_0092D00C;
extern "C" int mem_0092D000;
extern "C" int mem_00928B5D;

extern "C" __declspec(naked) void __fastcall fn_00418DE0(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push offset ext_0087656E
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_006A5FC8
        mov ecx, esi
        call ext_004180E0
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x8]
        mov edi, dword ptr [mem_0092565C]
        push 0xfc
        push eax
        call edi
        mov ebx, eax
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x8]
        push 0xfd
        push eax
        call edi
        mov edi, dword ptr [mem_00925694]
        push ebx
        push 0x1
        mov ebp, eax
        mov eax, dword ptr [esi + 0x20]
        push 0x80
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x20]
        push ebp
        push 0x0
        push 0x80
        push ecx
        call edi
        mov ecx, offset mem_00ACAB8C
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 0xe8]
        push eax
        push 0x0
        push 0x143
        push edx
        call edi
        mov ecx, offset mem_00ACACC4
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [esi + 0xe8]
        push 0x0
        push 0x143
        push eax
        call edi
        mov ecx, offset mem_00ACAD8C
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0xe8]
        push eax
        push 0x0
        push 0x143
        push ecx
        call edi
        mov ecx, offset mem_00ACAF6C
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 0xe8]
        push eax
        push 0x0
        push 0x143
        push edx
        call edi
        mov ecx, offset mem_00ACAF70
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [esi + 0xe8]
        push 0x0
        push 0x143
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x78]
        mov eax, dword ptr [ecx + 0x2c]
        mov edx, dword ptr [esi + 0xe8]
        push 0x0
        push eax
        push 0x14e
        push edx
        call edi
        mov ecx, offset mem_00ACAF74
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [esi + 0x13c]
        push 0x0
        push 0x143
        push eax
        call edi
        mov ecx, offset mem_00ACAF78
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x13c]
        push eax
        push 0x0
        push 0x143
        push ecx
        call edi
        mov ecx, offset mem_00ACAF7C
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 0x13c]
        push eax
        push 0x0
        push 0x143
        push edx
        call edi
        mov eax, dword ptr [esi + 0x78]
        mov eax, dword ptr [eax + 0x28]
        mov ecx, dword ptr [esi + 0x13c]
        push 0x0
        push eax
        push 0x14e
        push ecx
        call edi
        mov edx, dword ptr [mem_00A9F414]
        mov eax, dword ptr [esi + 0x190]
        push edx
        push 0x0
        push 0x143
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x8c]
        call eax
        test al, al
        mov ecx, dword ptr [esi + 0x190]
        je L_418FB6
        push offset mem_0092D00C
        push 0x0
        push 0x143
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x190]
        push offset mem_0092D000
        push 0x0
        push 0x143
        push edx
        jmp L_418FC4
    L_418FB6:
        mov eax, dword ptr [mem_00A9ED98]
        push eax
        push 0x0
        push 0x143
        push ecx
    L_418FC4:
        call edi
        mov edx, dword ptr [esi + 0x78]
        mov eax, dword ptr [edx + 0x70]
        push 0x0
        push eax
        mov eax, dword ptr [esi + 0x190]
        push 0x14e
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x98]
        call eax
        movzx ecx, al
        push ecx
        lea ecx, [esi + 0x26c]
        call ext_006A5FDA
        mov edx, dword ptr [esi + 0x78]
        mov al, byte ptr [edx + 0x74]
        mov ecx, dword ptr [esi + 0x28c]
        push 0x0
        movzx eax, al
        push eax
        push 0xf1
        push ecx
        call edi
        mov eax, dword ptr [esi + 0x78]
        mov eax, dword ptr [eax]
        push eax
        lea edx, [esp + 0x1c]
        push edx
        call ext_00404F00
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x58], 0x0
        lea ebp, [esi + 0x4c0]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebp
        call ext_006A5F50
        or ebx, -1
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x58], ebx
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi + 0x78]
        mov eax, dword ptr [eax + 0x4]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        call ext_00404F00
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x58], 0x1
        lea ebp, [esi + 0x514]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebp
        call ext_006A5F50
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x58], ebx
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esi + 0x78]
        fld dword ptr [edx + 0x10]
        push ecx
        fstp dword ptr [esp + 0x14]
        lea eax, [esp + 0x1c]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        push eax
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x58], 0x2
        lea ebp, [esi + 0x218]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebp
        call ext_006A5F50
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x58], ebx
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x64]
        call eax
        test al, al
        jne L_419108
        push 0x0
        lea ecx, [esi + 0xc8]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0x11c]
        call ext_006A5FDA
    L_419108:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x68]
        call eax
        test al, al
        jne L_41911F
        push 0x0
        mov ecx, ebp
        call ext_006A5FDA
    L_41911F:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x88]
        call eax
        test al, al
        jne L_41913D
        push 0x0
        lea ecx, [esi + 0x170]
        call ext_006A5FDA
    L_41913D:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x78]
        call eax
        xor ebp, ebp
        test al, al
        jne L_419159
        push ebp
        lea ecx, [esi + 0x2c0]
        call ext_006A5FDA
    L_419159:
        cmp byte ptr [esi + 0x7c], 0x0
        je L_419184
        mov ecx, dword ptr [esi + 0x78]
        mov al, byte ptr [ecx + 0x4d]
        movzx edx, al
        mov eax, dword ptr [esi + 0x2e0]
        push ebp
        push edx
        push 0xf1
        push eax
        call edi
        push ebp
        lea ecx, [esi + 0x2c0]
        call ext_006A5FDA
    L_419184:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x6c]
        call eax
        test al, al
        jne L_4191C3
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x70]
        call eax
        test al, al
        jne L_4191C3
        push ebp
        lea ecx, [esi + 0x5bc]
        call ext_006A5E72
        push ebp
        lea ecx, [esi + 0x568]
        call ext_006A5FDA
        mov dword ptr [esi + 0x8c], ebp
        jmp L_41938B
    L_4191C3:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x70]
        call eax
        test al, al
        jne L_4191FC
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x6c]
        call eax
        test al, al
        je L_4191FC
        push ebp
        lea ecx, [esi + 0x5bc]
        call ext_006A5E72
        lea ecx, [esi + 0x568]
        mov dword ptr [esi + 0x8c], ecx
        jmp L_41938B
    L_4191FC:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x70]
        call eax
        test al, al
        je L_419357
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x6c]
        call eax
        test al, al
        jne L_419357
        push ebp
        lea ecx, [esi + 0x568]
        call ext_006A5E72
        lea ecx, [esi + 0x5bc]
        mov dword ptr [esi + 0x8c], ecx
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x20], ebp
        mov dword ptr [esp + 0x24], ebp
        mov edx, dword ptr [esi + 0x78]
        fld dword ptr [edx + 0x8]
        mov ebp, dword ptr [esi + 0x74]
        mov ebx, dword ptr [ebp]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        lea eax, [esp + 0x18]
        push eax
        mov dword ptr [esp + 0x5c], 0x3
        call ext_006A6DE0
        mov edx, dword ptr [ebx + 0x84]
        push eax
        mov ecx, ebp
        call edx
        mov ebp, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esp + 0x20]
        cmp ebp, eax
        jbe L_41928F
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x20]
    L_41928F:
        lea ebx, [esp + 0x18]
    L_419293:
        cmp dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x10], eax
        jbe L_4192A3
        call dword ptr [mem_00925134]
    L_4192A3:
        test ebx, ebx
        je L_4192AF
        lea eax, [esp + 0x18]
        cmp ebx, eax
        je L_4192B5
    L_4192AF:
        call dword ptr [mem_00925134]
    L_4192B5:
        cmp ebp, dword ptr [esp + 0x10]
        je L_419328
        test ebx, ebx
        jne L_4192C5
        call dword ptr [mem_00925134]
    L_4192C5:
        cmp ebp, dword ptr [ebx + 0x8]
        jb L_4192D0
        call dword ptr [mem_00925134]
    L_4192D0:
        fld dword ptr [ebp]
        push ecx
        lea ecx, [esp + 0x38]
        fstp dword ptr [esp]
        push ecx
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov byte ptr [esp + 0x58], 0x4
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esi + 0x5dc]
        push eax
        push 0x0
        push 0x143
        push edx
        call edi
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x58], 0x3
        call dword ptr [mem_00924FF4]
        cmp ebp, dword ptr [ebx + 0x8]
        jb L_41931C
        call dword ptr [mem_00925134]
    L_41931C:
        mov eax, dword ptr [esp + 0x20]
        add ebp, 0x4
        jmp L_419293
    L_419328:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x5dc]
        push 0x0
        push eax
        push 0x14e
        push ecx
        call edi
        mov eax, dword ptr [esp + 0x1c]
        or ebx, -1
        test eax, eax
        mov dword ptr [esp + 0x58], ebx
        je L_41938B
        push eax
        call ext_006A5C5C
        add esp, 0x4
        jmp L_41938B
    L_419357:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x70]
        call eax
        test al, al
        je L_41938B
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x6c]
        call eax
        test al, al
        je L_41938B
        lea ecx, [esi + 0x568]
        mov dword ptr [esi + 0x8c], ecx
        push ebp
        lea ecx, [esi + 0x5bc]
        call ext_006A5E72
    L_41938B:
        cmp dword ptr [esi + 0x8c], 0x0
        je L_4193EA
        mov edx, dword ptr [esi + 0x78]
        fld dword ptr [edx + 0x8]
        push ecx
        fstp dword ptr [esp + 0x18]
        lea eax, [esp + 0x1c]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp]
        push eax
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x58], 0x5
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x8c]
        push eax
        call ext_006A5F50
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x58], ebx
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x8c]
        push 0x5
        call ext_006A5E72
    L_4193EA:
        mov ebp, dword ptr [esi + 0x74]
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0xe4]
        mov ecx, ebp
        call eax
        test al, 0x2
        je L_419407
        cmp byte ptr [ebp + 0x428], 0x0
        jne L_41943B
    L_419407:
        push 0x0
        lea ecx, [esi + 0x4c0]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0x514]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0x5bc]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0x568]
        call ext_006A5FDA
    L_41943B:
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x60]
        call eax
        test al, al
        lea ecx, [esi + 0x1c4]
        jne L_419458
        push 0x0
        call ext_006A5FDA
        jmp L_4194B5
    L_419458:
        push 0x1
        call ext_006A5FDA
        mov ecx, offset mem_00ACAF8C
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x1e4]
        push eax
        push 0x0
        push 0x143
        push ecx
        call edi
        mov ecx, offset mem_00ACAF90
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 0x1e4]
        push eax
        push 0x0
        push 0x143
        push edx
        call edi
        mov eax, dword ptr [esi + 0x78]
        mov al, byte ptr [eax + 0x14]
        mov edx, dword ptr [esi + 0x1e4]
        xor ecx, ecx
        test al, al
        sete cl
        push 0x0
        push ecx
        push 0x14e
        push edx
        call edi
    L_4194B5:
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x74]
        call edx
        test al, al
        jne L_4194EA
        push 0x0
        lea ecx, [esi + 0x8b0]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0x808]
        call ext_006A5FDA
        push 0x0
        lea ecx, [esi + 0x85c]
        call ext_006A5FDA
    L_4194EA:
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x7c]
        call edx
        test al, al
        push 0x0
        je L_419516
        mov eax, dword ptr [esi + 0x78]
        mov al, byte ptr [eax + 0x6d]
        mov edx, dword ptr [esi + 0x334]
        movzx ecx, al
        push ecx
        push 0xf1
        push edx
        call edi
        push 0x1
        jmp L_419528
    L_419516:
        mov eax, dword ptr [esi + 0x334]
        push 0x1
        push 0xf1
        push eax
        call edi
        push 0x0
    L_419528:
        lea ecx, [esi + 0x314]
        call ext_006A5FDA
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x90]
        call eax
        test al, al
        je L_41965C
        mov eax, dword ptr [esi + 0x78]
        add eax, 0x8c
        push eax
        call ext_006629B0
        add esp, 0x4
        test al, al
        jne L_419596
        push offset mem_00928B5D
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi + 0x78]
        lea ecx, [esp + 0x34]
        push ecx
        lea ecx, [eax + 0x8c]
        mov dword ptr [esp + 0x5c], 0x6
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x58], ebx
        call dword ptr [mem_00924FF4]
    L_419596:
        mov eax, dword ptr [esi + 0x78]
        cmp byte ptr [eax + 0xa8], 0x0
        je L_4195B8
        add eax, 0x8c
        push eax
        call ext_006629B0
        add esp, 0x4
        test al, al
        je L_4195B8
        mov al, 0x1
        jmp L_4195BA
    L_4195B8:
        xor al, al
    L_4195BA:
        movzx edx, al
        mov eax, dword ptr [esi + 0x3e4]
        push 0x0
        push edx
        push 0xf1
        push eax
        call edi
        push 0x1
        lea ecx, [esi + 0x3c4]
        call ext_006A5FDA
        mov eax, dword ptr [esi + 0x78]
        cmp byte ptr [eax + 0xa8], 0x0
        je L_4195FD
        add eax, 0x8c
        push eax
        call ext_006629B0
        add esp, 0x4
        test al, al
        je L_4195FD
        mov al, 0x1
        jmp L_4195FF
    L_4195FD:
        xor al, al
    L_4195FF:
        movzx ecx, al
        push ecx
        lea ecx, [esi + 0x418]
        call ext_006A5FDA
        mov edx, dword ptr [esi + 0x438]
        push 0x0
        push 0x1
        push 0xcf
        push edx
        call edi
        mov eax, dword ptr [esi + 0x78]
        cmp byte ptr [eax + 0xa8], 0x0
        je L_419642
        add eax, 0x8c
        push eax
        call ext_006629B0
        add esp, 0x4
        test al, al
        je L_419642
        mov al, 0x1
        jmp L_419644
    L_419642:
        xor al, al
    L_419644:
        movzx eax, al
        push eax
        lea ecx, [esi + 0x46c]
        call ext_006A5FDA
        mov ecx, esi
        call ext_00417420
        jmp L_4196B5
    L_41965C:
        mov ecx, dword ptr [esi + 0x3e4]
        push 0x0
        push 0x0
        push 0xf1
        push ecx
        call edi
        push 0x0
        lea ecx, [esi + 0x3c4]
        call ext_006A5FDA
        lea ebp, [esi + 0x418]
        push 0x0
        mov ecx, ebp
        call ext_006A5FDA
        mov edx, dword ptr [esi + 0x438]
        push 0x0
        push 0x1
        push 0xcf
        push edx
        call edi
        push offset mem_00928B5D
        mov ecx, ebp
        call ext_006A5F50
        push 0x0
        lea ecx, [esi + 0x46c]
        call ext_006A5FDA
    L_4196B5:
        mov ecx, esi
        call ext_00418130
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x94]
        call edx
        test al, al
        mov ecx, esi
        je L_4196D5
        push 0x1
        push 0x1
        jmp L_4196D9
    L_4196D5:
        push 0x0
        push 0x0
    L_4196D9:
        call ext_00418BE0
        mov ecx, esi
        call ext_004174F0
        mov ecx, dword ptr [esp + 0x50]
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x4c
        ret
    }
}
