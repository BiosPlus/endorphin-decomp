// Decompiled translation unit: src/classes/HotkeyDialog.cpp

// [0x004201B0] HotkeyDialog::vfunc_63 (299 bytes)
extern "C" void ext_004271F0();
extern "C" void ext_006A5F44();
extern "C" void ext_006A5FDA();
extern "C" void ext_006A63FA();
extern "C" int mem_00924FB0;
extern "C" int mem_00925694;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_009242F4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004201B0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x877c82
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x40]
        mov esi, ecx
        lea eax, [esi + 0x74]
        push eax
        push 0x433
        push edi
        call ext_006A5F44
        lea ebp, [esi + 0xcc]
        push ebp
        push 0x473
        push edi
        call ext_006A5F44
        lea ebx, [esi + 0x128]
        push ebx
        push 0x474
        push edi
        call ext_006A5F44
        lea ecx, [esi + 0x17c]
        push 0xacdab0
        push ecx
        call dword ptr [mem_00924FB0]
        mov edx, dword ptr [esi + 0xec]
        add esp, 0x8
        push 0x2
        push -1
        push 0x100c
        push edx
        mov byte ptr [esp + 0x50], al
        call dword ptr [mem_00925694]
        add eax, 0x1
        push 0x2
        lea edi, [eax - 0x1]
        mov eax, dword ptr [esi + 0xec]
        push edi
        push 0x100c
        push eax
        call dword ptr [mem_00925694]
        push 0x0
        push edi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, ebp
        call ext_006A63FA
        mov ecx, eax
        mov dword ptr [esp + 0x38], 0x0
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x38], 0x2
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esi + 0xc8]
        lea edx, [esp + 0x14]
        push edx
        call ext_004271F0
        cmp byte ptr [esp + 0x40], 0x0
        je L_004202AA
        test al, al
        je L_004202AA
        mov eax, 0x1
        jmp L_004202AC
    L_004202AA:
        xor eax, eax
    L_004202AC:
        push eax
        mov ecx, ebx
        call ext_006A5FDA
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x38], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00421AC0] HotkeyDialog::vfunc_66 (275 bytes)
extern "C" void ext_0041FEA0();
extern "C" void ext_0041FEC0();
extern "C" void ext_0041FEF0();
extern "C" void ext_0041FF10();
extern "C" void ext_004216F0();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5F7A();
extern "C" void ext_006A6418();

extern "C" __declspec(naked) void __fastcall fn_00421AC0(void* self, int edx_unused, void* msg) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ebx + 0x4]
        cmp eax, 0x203
        push esi
        mov esi, ecx
        jne L_00421AF2
        lea ecx, [esi + 0x128]
        call ext_006A6418
        test eax, eax
        je L_00421AE8
        mov ecx, esi
        call ext_004216F0
    L_00421AE8:
        pop esi
        mov eax, 0x1
        pop ebx
        ret 0x4
    L_00421AF2:
        cmp eax, 0x100
        push edi
        jne L_00421BC5
        mov eax, dword ptr [ebx + 0x8]
        cmp eax, 0xd
        mov edi, dword ptr [mem_00925694]
        je L_00421B7E
        cmp eax, 0x1b
        je L_00421B47
        cmp eax, 0x71
        jne L_00421BC5
        add esi, 0x74
        mov ecx, esi
        call ext_0041FEA0
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0041FEC0
        push eax
        mov ecx, esi
        call ext_0041FEF0
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret 0x4
    L_00421B47:
        mov ecx, dword ptr [esi + 0x94]
        push 0x0
        push 0x0
        push 0x1018
        push ecx
        call edi
        push eax
        call ext_006A5E00
        test eax, eax
        je L_00421B7E
        lea ecx, [esi + 0x74]
        call ext_0041FF10
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x108]
        push ebx
        call eax
        pop edi
        pop esi
        pop ebx
        ret 0x4
    L_00421B7E:
        mov ecx, dword ptr [esi + 0x94]
        push 0x0
        push 0x0
        push 0x1018
        push ecx
        call edi
        push eax
        call ext_006A5E00
        test eax, eax
        je L_00421BC5
        mov edx, dword ptr [esi + 0x94]
        push 0x0
        push 0x0
        push 0x1018
        push edx
        call edi
        push eax
        call ext_006A5E00
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x108]
        push ebx
        call eax
        pop edi
        pop esi
        pop ebx
        ret 0x4
    L_00421BC5:
        push ebx
        mov ecx, esi
        call ext_006A5F7A
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x004202E0] HotkeyDialog::vfunc_86 (587 bytes)
extern "C" void ext_00428130();
extern "C" void ext_0042E770();
extern "C" void ext_006690D0();
extern "C" void ext_00669AD0();
extern "C" void ext_006A5E60();
extern "C" void ext_006A5FB0();
extern "C" int mem_00925694;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924ED0;
extern "C" int mem_00924FD8;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_004202E0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x877ce7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x80
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        push 2
        mov esi, ecx
        mov eax, dword ptr [esi + 0x94]
        push -1
        push 0x100c
        push eax
        mov dword ptr [ebp - 0x18], esi
        call ebx
        mov ecx, dword ptr [esi + 0x94]
        add eax, 1
        push 2
        lea edi, [eax - 1]
        push edi
        push 0x100c
        push ecx
        call ebx
        push 0
        push edi
        lea edx, [ebp - 0x14]
        push edx
        lea ecx, [esi + 0x74]
        call ext_006A63FA
        lea ecx, [ebp - 0x14]
        mov dword ptr [ebp - 0x4], 0
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [ebp - 0x70]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0xc8]
        lea eax, [ebp - 0x70]
        push eax
        mov byte ptr [ebp - 0x4], 1
        call ext_00428130
        push 0x92e3a0
        lea ecx, [ebp - 0x54]
        mov byte ptr [ebp - 0x4], 2
        call dword ptr [mem_00924FE4]
        push 0x92e390
        lea ecx, [ebp - 0x38]
        mov byte ptr [ebp - 0x4], 3
        call dword ptr [mem_00924FE4]
        mov bl, 4
        mov byte ptr [ebp - 0x4], bl
        call ext_006690D0
        lea ecx, [ebp - 0x54]
        push ecx
        lea edx, [ebp - 0x38]
        push edx
        lea ecx, [ebp - 0x8c]
        push ecx
        mov ecx, eax
        call ext_00669AD0
        mov ecx, eax
        mov byte ptr [ebp - 0x4], 5
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0xc8]
        mov edx, dword ptr [ecx]
        push 1
        push eax
        mov eax, dword ptr [edx + 0x24]
        call eax
        lea ecx, [ebp - 0x8c]
        mov byte ptr [ebp - 0x4], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x38]
        mov byte ptr [ebp - 0x4], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x54]
        mov byte ptr [ebp - 0x4], 2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0xc8]
        call ext_0042E770
        push 0x92e3a0
        lea ecx, [ebp - 0x38]
        call dword ptr [mem_00924FE4]
        push 0x92e390
        lea ecx, [ebp - 0x54]
        mov byte ptr [ebp - 0x4], 6
        call dword ptr [mem_00924FE4]
        mov bl, 7
        mov byte ptr [ebp - 0x4], bl
        call ext_006690D0
        lea ecx, [ebp - 0x38]
        push ecx
        lea edx, [ebp - 0x54]
        push edx
        lea ecx, [ebp - 0x8c]
        push ecx
        mov ecx, eax
        call ext_00669AD0
        mov ecx, eax
        mov byte ptr [ebp - 0x4], 8
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0xc8]
        mov edx, dword ptr [ecx]
        push 0
        push eax
        mov eax, dword ptr [edx + 0x20]
        call eax
        lea ecx, [ebp - 0x8c]
        mov byte ptr [ebp - 0x4], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x54]
        mov byte ptr [ebp - 0x4], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x38]
        mov byte ptr [ebp - 0x4], 2
        call dword ptr [mem_00924FF4]
        mov dword ptr [ebp - 0x4], 1
        jmp short fn_004202E0_common
fn_004202E0_eh:
        push 0x92e338
        lea ecx, [ebp - 0x38]
        call dword ptr [mem_00924FE4]
        push 0x92e308
        lea ecx, [ebp - 0x38]
        mov byte ptr [ebp - 0x4], 0xa
        call dword ptr [mem_00924ED0]
        push 0x92e300
        lea ecx, [ebp - 0x38]
        call dword ptr [mem_00924ED0]
        mov ecx, dword ptr [ebp - 0x1c]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x38]
        call dword ptr [mem_00924FD8]
        push 0
        push 0
        lea ecx, [ebp - 0x38]
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x38]
        mov byte ptr [ebp - 0x4], 9
        call dword ptr [mem_00924FF4]
        mov eax, 0x4204fa
        _emit 0xc3
fn_004202E0_ret:
        mov esi, dword ptr [ebp - 0x18]
fn_004202E0_common:
        mov ecx, esi
        call ext_006A5FB0
        lea ecx, [ebp - 0x70]
        mov byte ptr [ebp - 0x4], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x14]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

extern "C" void ext_0041FDA0();
extern "C" void ext_00420A90();
extern "C" void ext_00420D10();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5FC8();
extern "C" void ext_006A63D6();
extern "C" void ext_006A6400();
extern "C" void ext_006A640C();
extern "C" void ext_006A6412();
extern "C" void ext_006A6DE0();
extern "C" int mem_0092565C;
extern "C" int mem_00924068;
extern "C" int mem_0092566C;
extern "C" int mem_00996628;
extern "C" int mem_00A9F010;
extern "C" int mem_0092E3DC;
extern "C" int mem_0092E3D4;
extern "C" int mem_0092E3D0;
extern "C" int mem_0092E3C8;

// [0x00421070] HotkeyDialog::vfunc_84 (675 bytes)
extern "C" __declspec(naked) void __fastcall fn_00421070(void* self) {
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_006A5FC8
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x8]
        mov edi, dword ptr [mem_0092565C]
        push 0xfc
        push eax
        call edi
        mov ebp, eax
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x8]
        push 0xfd
        push eax
        call edi
        push ebp
        mov ebp, dword ptr [mem_00925694]
        push 0x1
        mov ebx, eax
        mov eax, dword ptr [esi + 0x20]
        push 0x80
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x20]
        push ebx
        push 0x0
        push 0x80
        push ecx
        call ebp
        push 0x1
        push 0x8
        push 0x9
        push 0x20
        push 0x20
        call dword ptr [mem_00924068]
        lea ebx, [esi + 0x120]
        push eax
        mov ecx, ebx
        call ext_006A6412
        call ext_006A5EDE
        push 0xfc
        push 0xe
        push 0xfc
        call ext_006A63D6
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x124]
        push eax
        push -0x1
        push ecx
        call ext_006A5EDE
        mov edx, dword ptr [eax + 0x94]
        mov ecx, dword ptr [edx]
        call ext_0041FDA0
        call ext_006A5EDE
        push 0x207
        push 0xe
        push 0x207
        call ext_006A63D6
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x124]
        push eax
        push -0x1
        push ecx
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x94]
        mov ecx, dword ptr [eax]
        call ext_0041FDA0
        call ext_006A5EDE
        push 0x20a
        push 0xe
        push 0x20a
        call ext_006A63D6
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x124]
        push eax
        push -0x1
        push ecx
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 0x94]
        mov ecx, dword ptr [ecx]
        call ext_0041FDA0
        call ext_006A5EDE
        push 0x208
        push 0xe
        push 0x208
        call ext_006A63D6
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x124]
        push eax
        push -0x1
        push ecx
        call ext_006A5EDE
        mov edx, dword ptr [eax + 0x94]
        mov ecx, dword ptr [edx]
        call ext_0041FDA0
        call ext_006A5EDE
        push 0x209
        push 0xe
        push 0x209
        call ext_006A63D6
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x124]
        push eax
        push -0x1
        push ecx
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x94]
        mov ecx, dword ptr [eax]
        call ext_0041FDA0
        call ext_006A5EDE
        push 0x20c
        push 0xe
        push 0x20c
        call ext_006A63D6
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x124]
        push eax
        push -0x1
        push ecx
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 0x94]
        mov ecx, dword ptr [ecx]
        call ext_0041FDA0
        test ebx, ebx
        je L_skip_ebx
        mov ebx, dword ptr [ebx + 0x4]
    L_skip_ebx:
        mov edx, dword ptr [esi + 0x94]
        push ebx
        push 0x0
        push 0x1003
        push edx
        call ebp
        push eax
        call ext_006A6400
        mov ecx, dword ptr [esi + 0xec]
        lea eax, [esp + 0x14]
        push eax
        push ecx
        call dword ptr [mem_0092566C]
        mov edx, dword ptr [esp + 0x1c]
        sub edx, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x10], edx
        fild dword ptr [esp + 0x10]
        fdiv qword ptr [mem_00996628]
        call ext_006A6DE0
        mov ebp, eax
        push 0x0
        lea ebx, [8*ebp]
        sub ebx, ebp
        push ebx
        push 0x0
        push offset mem_0092E3DC
        lea edi, [esi + 0xcc]
        push 0x0
        mov ecx, edi
        call ext_006A640C
        push 0x2
        add ebp, ebp
        push ebp
        push 0x0
        push offset mem_0092E3D4
        push 0x1
        mov ecx, edi
        call ext_006A640C
        push 0x3
        push ebp
        push 0x0
        push offset mem_0092E3D0
        push 0x2
        mov ecx, edi
        call ext_006A640C
        push 0x4
        push ebp
        push 0x0
        push offset mem_0092E3C8
        push 0x3
        mov ecx, edi
        call ext_006A640C
        mov eax, dword ptr [mem_00A9F010]
        push 0x1
        push ebx
        push 0x0
        push eax
        push 0x4
        mov ecx, edi
        call ext_006A640C
        mov ecx, dword ptr [esi + 0xc8]
        add ecx, 0x34
        push ecx
        mov ecx, esi
        call ext_00420A90
        mov edx, dword ptr [esi + 0xc8]
        add edx, 0x34
        push edx
        mov ecx, esi
        call ext_00420D10
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        add esp, 0x14
        ret
    }
}
