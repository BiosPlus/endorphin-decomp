// Decompiled translation unit: src/classes/CSizingControlBarCF.cpp

// [0x004546D0] CSizingControlBarCF::vfunc_1 (44 bytes)
extern "C" void ext_00454BA0();
extern "C" void ext_006A5C5C();
extern "C" int mem_009242F4;

extern "C" void* __fastcall fn_004546D0(void* self, int edx_unused, int flags) {
    typedef void (__fastcall *ThisFn)(void*);
    typedef void (__cdecl *CFn)(void*);
    ((ThisFn)mem_009242F4)((char*)self + 0x12c);
    ((ThisFn)ext_00454BA0)(self);
    if (flags & 1) {
        ((CFn)ext_006A5C5C)(self);
    }
    return self;
}

// [0x00454770] CSizingControlBarCF::vfunc_101 (857 bytes)
extern "C" void ext_00454E80();
extern "C" void ext_00455F40();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6010();
extern "C" void ext_006A6172();
extern "C" void ext_006A617E();
extern "C" int mem_0087E781;
extern "C" int mem_00925678;
extern "C" int mem_009256B8;
extern "C" int mem_009240FC;
extern "C" int mem_00924218;
extern "C" int mem_00924300;
extern "C" int mem_009242FC;
extern "C" int mem_0092431C;
extern "C" int mem_00924078;
extern "C" int mem_009242F4;
extern "C" int mem_0092A5D4;
extern "C" int mem_0092A23C;

extern "C" __declspec(naked) void __fastcall fn_00454770(void* self) {
    __asm {
        push -1
        push offset mem_0087E781
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x50
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x28], edi
        call ext_00455F40
        test eax, eax
        jne loc_454AB7
        mov eax, dword ptr [esp + 0x68]
        mov ecx, dword ptr [esp + 0x70]
        mov edx, dword ptr [esp + 0x74]
        mov dword ptr [esp + 0x34], eax
        mov eax, dword ptr [esp + 0x6C]
        mov dword ptr [esp + 0x38], eax
        sub eax, dword ptr [edi + 0x108]
        push ebx
        push ebp
        sub eax, 1
        push esi
        mov dword ptr [esp + 0x44], eax
        mov dword ptr [esp + 0x48], ecx
        mov ecx, dword ptr [edi + 0x114]
        add eax, 0xE
        mov dword ptr [esp + 0x4C], edx
        mov edx, dword ptr [edi + 0x118]
        push 1
        mov dword ptr [esp + 0x50], eax
        xor ebp, ebp
        push ebp
        lea eax, [esp + 0x48]
        add ecx, -3
        push eax
        mov dword ptr [esp + 0x84], edx
        mov dword ptr [esp + 0x54], ecx
        call dword ptr [mem_00925678]
        cmp dword ptr [edi + 0x124], ebp
        mov ebx, dword ptr [edi + 0x138]
        mov dword ptr [esp + 0x14], ebx
        je loc_45481B
        mov ecx, dword ptr [edi + 0x13C]
        mov dword ptr [esp + 0x14], ecx
        mov ebx, ecx
    loc_45481B:
        push ebp
        lea edx, [esp + 0x20]
        push edx
        push ebp
        push 0x1008
        mov dword ptr [esp + 0x2C], ebp
        call dword ptr [mem_009256B8]
        cmp dword ptr [esp + 0x1C], ebp
        jne loc_45484D
        mov esi, dword ptr [esp + 0x70]
        push ebx
        lea eax, [esp + 0x44]
        push eax
        mov ecx, esi
        call ext_006A6172
        jmp loc_454975
    loc_45484D:
        mov edi, dword ptr [edi + 0x140]
        mov dword ptr [esp + 0x18], edi
        movzx edx, byte ptr [esp + 0x18]
        movzx eax, bl
        mov cx, bx
        mov bx, di
        mov edi, dword ptr [esp + 0x14]
        shr edi, 0x10
        mov dword ptr [esp + 0x20], edi
        mov edi, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x28], edx
        mov edx, eax
        shr edi, 0x10
        xor esi, esi
        shr cx, 8
        shr bx, 8
        neg edx
        shl eax, 6
        mov dword ptr [esp + 0x24], edi
        mov edi, dword ptr [esp + 0x40]
        mov word ptr [esp + 0x12], cx
        mov word ptr [esp + 0x74], bx
        mov dword ptr [esp + 0x14], esi
        mov ebp, 0x40
        mov dword ptr [esp + 0x2C], edx
        mov dword ptr [esp + 0x18], eax
        jmp loc_4548BB
    loc_4548B1:
        mov bx, word ptr [esp + 0x74]
        mov cx, word ptr [esp + 0x12]
    loc_4548BB:
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x18]
        add edx, eax
        movzx eax, cl
        imul eax, ebp
        movzx ecx, bl
        movzx ebx, byte ptr [esp + 0x24]
        imul ecx, esi
        add eax, ecx
        imul ebx, esi
        movzx ecx, byte ptr [esp + 0x20]
        imul ecx, ebp
        add ecx, ebx
        sar ecx, 6
        xor ebx, ebx
        mov bh, cl
        mov ecx, dword ptr [esp + 0x4C]
        sar eax, 6
        mov dword ptr [esp + 0x5C], ecx
        sar edx, 6
        movzx edx, dl
        mov bl, al
        mov eax, dword ptr [esp + 0x44]
        mov dword ptr [esp + 0x54], eax
        mov eax, dword ptr [esp + 0x48]
        mov dword ptr [esp + 0x58], eax
        sub eax, edi
        mov ecx, eax
        imul ecx, esi
        add esi, 1
        imul eax, esi
        sar eax, 6
        sar ecx, 6
        add eax, edi
        add ecx, edi
        shl ebx, 8
        mov dword ptr [esp + 0x58], eax
        sub eax, ecx
        or edx, ebx
        test eax, eax
        mov dword ptr [esp + 0x50], edi
        mov dword ptr [esp + 0x50], ecx
        jle loc_454950
        mov ecx, dword ptr [esp + 0x70]
        push edx
        lea edx, [esp + 0x54]
        push edx
        call ext_006A6172
        mov edi, dword ptr [esp + 0x40]
    loc_454950:
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x2C]
        add dword ptr [esp + 0x14], eax
        add dword ptr [esp + 0x18], ecx
        sub ebp, 1
        test ebp, ebp
        jg loc_4548B1
        mov esi, dword ptr [esp + 0x70]
        mov edi, dword ptr [esp + 0x34]
        xor ebp, ebp
    loc_454975:
        mov dword ptr [esp + 0x3C], ebp
        mov dword ptr [esp + 0x38], offset mem_0092A5D4
        mov edx, dword ptr [esi + 8]
        push 0x58
        push edx
        mov dword ptr [esp + 0x70], ebp
        call dword ptr [mem_009240FC]
        push eax
        push 0x60
        push 0x55
        call dword ptr [mem_00924218]
        push ebp
        lea ecx, [edi + 0x12C]
        mov ebx, eax
        call dword ptr [mem_00924300]
        push eax
        push ebx
        lea ecx, [esp + 0x44]
        call ext_006A617E
        cmp eax, ebp
        je loc_454A8F
        cmp dword ptr [edi + 0x124], 0
        mov ebp, dword ptr [edi + 0x130]
        je loc_4549D3
        mov ebp, dword ptr [edi + 0x134]
    loc_4549D3:
        push 1
        mov ecx, esi
        call ext_006A6010
        mov ebx, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ebp
        mov ecx, esi
        call edx
        mov ebp, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x30]
        lea ecx, [esp + 0x38]
        push ecx
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x34], eax
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x70]
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x6C], 1
        call ext_006A5F4A
        mov ecx, dword ptr [esp + 0x44]
        mov edx, dword ptr [esp + 0x40]
        add ecx, 1
        mov dword ptr [esp + 0x74], ecx
        add edx, 3
        push 0
        lea ecx, [esp + 0x74]
        mov dword ptr [esp + 0x30], edx
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x78]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esp + 0x7C]
        mov edx, dword ptr [esp + 0x34]
        push eax
        lea eax, [esp + 0x4C]
        push eax
        mov eax, dword ptr [esi + 4]
        push 4
        push ecx
        push edx
        push eax
        call dword ptr [mem_00924078]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [edx + 0x30]
        push eax
        mov ecx, esi
        call edx
        push ebx
        mov ecx, esi
        call ext_006A6010
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ebp
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x70]
        mov byte ptr [esp + 0x68], 0
        call dword ptr [mem_009242F4]
    loc_454A8F:
        push esi
        lea ecx, [edi + 0x10C]
        call ext_00454E80
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x68], -1
        mov dword ptr [esp + 0x38], offset mem_0092A23C
        call ext_006A5FF2
        pop esi
        pop ebp
        pop ebx
    loc_454AB7:
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        mov dword ptr fs:[0], ecx
        add esp, 0x5C
        ret 0x14
    }
}
