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
