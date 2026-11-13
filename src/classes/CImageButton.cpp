// Decompiled translation unit: src/classes/CImageButton.cpp

extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6004();
extern "C" void ext_006A6010();
extern "C" void ext_006A6190();
extern "C" void ext_006A6196();
extern "C" void ext_006A619C();
extern "C" void ext_006A61A2();
extern "C" void ext_006A61A8();
extern "C" void ext_006A61AE();
extern "C" void ext_006A635E();
extern "C" void ext_006A6364();
extern "C" int mem_00925670;
extern "C" int mem_0092563C;
extern "C" int mem_00925680;
extern "C" int mem_00925648;
extern "C" int mem_009255EC;
extern "C" int mem_00924094;
extern "C" int mem_009240AC;
extern "C" int mem_00924070;
extern "C" int mem_009240E4;
extern "C" int mem_009242FC;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00925608;
extern "C" int mem_00924090;
extern "C" int mem_009242F4;

// [0x004226E0] CImageButton::vfunc_80 (1079 bytes)
extern "C" __declspec(naked) void __fastcall fn_004226E0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x877ff9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x70
        push ebx
        mov ebx, dword ptr [esp + 0x84]
        mov eax, dword ptr [ebx + 0x18]
        push ebp
        push esi
        push edi
        push eax
        mov edi, ecx
        call ext_006A6004
        lea ecx, [ebx + 0x1c]
        push ecx
        lea edx, [esp + 0x3c]
        push edx
        mov esi, eax
        call dword ptr [mem_00925670]
        mov ebp, dword ptr [mem_0092563C]
        push 6
        call ebp
        push 5
        mov dword ptr [esp + 0x1c], eax
        call ebp
        mov dword ptr [esp + 0x30], eax
        xor eax, eax
        mov dword ptr [esp + 0x28], eax
        mov dword ptr [esp + 0x2c], eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        call edx
        mov dword ptr [esp + 0x1c], eax
        mov al, byte ptr [edi + 0x8d]
        test al, al
        mov byte ptr [esp + 0x13], 0
        je L_0042278A
        mov ebp, dword ptr [edi + 0x60]
        test ebp, ebp
        jne L_0042276C
L_00422762:
        mov ebp, dword ptr [edi + 0x58]
        test ebp, ebp
        jne L_0042276C
L_00422769:
        mov ebp, dword ptr [edi + 0x54]
L_0042276C:
        cmp byte ptr [edi + 0x8e], 0
        je L_004227B9
        test al, al
        jne L_004227B9
        test byte ptr [ebx + 0x10], 7
        jne L_004227B9
        mov eax, dword ptr [edi + 0x5c]
        test eax, eax
        je L_004227A5
        mov ebp, eax
        jmp L_004227B9
L_0042278A:
        mov ecx, dword ptr [ebx + 0x10]
        test cl, 1
        jne L_00422762
        test cl, 6
        je L_00422769
        mov ebp, dword ptr [edi + 0x64]
        test ebp, ebp
        jne L_0042276C
        mov byte ptr [esp + 0x13], 1
        jmp L_00422769
L_004227A5:
        mov eax, dword ptr [esp + 0x30]
        neg eax
        mov dword ptr [esp + 0x28], eax
        mov eax, dword ptr [esp + 0x18]
        neg eax
        mov dword ptr [esp + 0x2c], eax
L_004227B9:
        cmp byte ptr [edi + 0x6c], 0
        je L_00422811
        mov eax, dword ptr [esp + 0x44]
        mov ecx, dword ptr [esp + 0x40]
        sub eax, dword ptr [esp + 0x3c]
        sub ecx, dword ptr [esp + 0x38]
        cmp ecx, eax
        jge L_00422811
        mov eax, dword ptr [edi + 0x58]
        cmp ebp, eax
        jne L_004227DF
        mov ebp, dword ptr [edi + 0x74]
        jmp L_004227F8
L_004227DF:
        mov eax, dword ptr [edi + 0x64]
        cmp ebp, eax
        jne L_004227EE
        mov ebp, dword ptr [edi + 0x80]
        jmp L_004227F8
L_004227EE:
        mov eax, dword ptr [edi + 0x5c]
        cmp ebp, eax
        jne L_00422807
        mov ebp, dword ptr [edi + 0x78]
L_004227F8:
        test ebp, ebp
        jne L_00422811
        mov ebp, dword ptr [edi + 0x70]
        test ebp, ebp
        jne L_00422811
        mov ebp, eax
        jmp L_00422811
L_00422807:
        mov ebp, dword ptr [edi + 0x70]
        test ebp, ebp
        jne L_00422811
        mov ebp, dword ptr [edi + 0x54]
L_00422811:
        push 0xf
        call dword ptr [mem_00925680]
        push eax
        lea ecx, [esp + 0x24]
        call ext_006A61AE
        lea edx, [esp + 0x20]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x8c], 0
        call ext_006A61A8
        mov edx, dword ptr [esi + 0x4]
        mov ebx, eax
        mov eax, dword ptr [esp + 0x24]
        push eax
        lea ecx, [esp + 0x3c]
        push ecx
        push edx
        call dword ptr [mem_00925648]
        test ebx, ebx
        jne L_00422858
        xor eax, eax
        jmp L_0042285B
L_00422858:
        mov eax, dword ptr [ebx + 0x4]
L_0042285B:
        push eax
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A6196
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x88], -1
        mov dword ptr [esp + 0x20], 0x92a23c
        call ext_006A5FF2
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x8]
        push 0x8000
        xor ebx, ebx
        push ebx
        push ebx
        movzx ecx, bp
        push ebx
        push ecx
        push eax
        call dword ptr [mem_009255EC]
        lea edx, [esp + 0x68]
        push edx
        mov ebp, eax
        push 0x18
        push ebp
        mov dword ptr [esp + 0x2c], ebp
        call dword ptr [mem_00924094]
        mov eax, dword ptr [esp + 0x90]
        test byte ptr [eax + 0x10], 1
        je L_004228C7
        cmp byte ptr [edi + 0x8d], bl
        je L_004228DC
L_004228C7:
        cmp byte ptr [edi + 0x8e], bl
        je L_004228D4
        cmp dword ptr [edi + 0x5c], ebx
        je L_004228DC
L_004228D4:
        mov dword ptr [esp + 0x2c], ebx
        mov dword ptr [esp + 0x28], ebx
L_004228DC:
        lea ecx, [esp + 0x48]
        call ext_006A61A2
        mov eax, dword ptr [esi + 0x4]
        push eax
        mov dword ptr [esp + 0x8c], 1
        call dword ptr [mem_009240AC]
        push eax
        lea ecx, [esp + 0x4c]
        call ext_006A6190
        lea ecx, [esp + 0x48]
        call ext_006A635E
        cmp ebp, ebx
        mov dword ptr [esp + 0x18], eax
        je L_00422921
        mov ecx, dword ptr [esp + 0x4c]
        push ebp
        push ecx
        call dword ptr [mem_00924070]
L_00422921:
        mov ebx, dword ptr [esp + 0x40]
        mov eax, dword ptr [esp + 0x44]
        sub ebx, dword ptr [esp + 0x38]
        sub eax, dword ptr [esp + 0x3c]
        xor ebp, ebp
        xor ecx, ecx
        test ebx, ebx
        mov dword ptr [esp + 0x34], eax
        jle L_0042294F
        mov eax, dword ptr [esp + 0x6c]
        imul eax, dword ptr [esp + 0x28]
        cdq
        idiv ebx
        mov ebp, eax
        mov eax, dword ptr [esp + 0x34]
L_0042294F:
        test eax, eax
        jle L_00422967
        mov eax, dword ptr [esp + 0x70]
        imul eax, dword ptr [esp + 0x2c]
        cdq
        idiv dword ptr [esp + 0x34]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x34]
L_00422967:
        mov edx, dword ptr [esp + 0x70]
        push 0xcc0020
        push edx
        mov edx, dword ptr [esp + 0x74]
        push edx
        mov edx, dword ptr [esi + 0x4]
        neg ecx
        push ecx
        mov ecx, dword ptr [esp + 0x5c]
        neg ebp
        push ebp
        push ecx
        push eax
        push ebx
        push 0
        push 0
        push edx
        call dword ptr [mem_009240E4]
        mov eax, dword ptr [esp + 0x18]
        push eax
        lea ecx, [esp + 0x4c]
        call ext_006A6364
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242FC]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 0x8c], 2
        call ext_006A5F4A
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092431C]
        test eax, eax
        jle L_00422AC8
        push 1
        mov ecx, esi
        call ext_006A6010
        push 0x520
        lea edx, [esp + 0x5c]
        push edx
        push -1
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [esi + 0x4]
        push eax
        call dword ptr [mem_00925608]
        mov eax, dword ptr [esp + 0x60]
        sub eax, dword ptr [esp + 0x58]
        cdq
        sub eax, edx
        mov ecx, eax
        mov eax, dword ptr [esp + 0x40]
        sub eax, dword ptr [esp + 0x38]
        sar ecx, 1
        cdq
        sub eax, edx
        mov edi, eax
        mov eax, dword ptr [esp + 0x64]
        sub eax, dword ptr [esp + 0x5c]
        sar edi, 1
        cdq
        sub eax, edx
        sub edi, ecx
        mov ecx, eax
        mov eax, dword ptr [esp + 0x44]
        sub eax, dword ptr [esp + 0x3c]
        sar ecx, 1
        cdq
        sub eax, edx
        mov edx, dword ptr [esp + 0x90]
        mov ebp, eax
        sar ebp, 1
        sub ebp, ecx
        test byte ptr [edx + 0x10], 1
        je L_00422A4C
        add edi, 1
        add ebp, 1
L_00422A4C:
        cmp byte ptr [esp + 0x13], 0
        je L_00422A8C
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push 0xffffff
        mov ecx, esi
        call edx
        mov ebx, dword ptr [esi]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [ebx + 0x64]
        push eax
        lea eax, [ebp + 1]
        push eax
        lea ecx, [edi + 1]
        push ecx
        mov ecx, esi
        call edx
        push 0x11
        jmp L_00422A8E
L_00422A8C:
        push 0x12
L_00422A8E:
        mov ebx, dword ptr [esi]
        call dword ptr [mem_00925680]
        push eax
        mov eax, dword ptr [ebx + 0x38]
        mov ecx, esi
        call eax
        mov ebx, dword ptr [esi]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [ebx + 0x64]
        push eax
        push ebp
        push edi
        mov ecx, esi
        call edx
        push 2
        mov ecx, esi
        call ext_006A6010
L_00422AC8:
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x28]
        push ecx
        mov ecx, esi
        call edx
        mov eax, dword ptr [esp + 0x20]
        push eax
        call dword ptr [mem_00924090]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0x88], 0xffffffff
        call ext_006A619C
        mov ecx, dword ptr [esp + 0x80]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x7c
        ret 4
    }
}
