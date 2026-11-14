// Decompiled translation unit: src/classes/MainFrame.cpp

// [0x0042F930] MainFrame::vfunc_27 (58 bytes)
extern "C" void ext_006A64AE();
extern "C" void ext_006A64B4();

extern "C" int __stdcall fn_0042F930(void* self) {
    typedef int (__stdcall *Fn1)(void*);
    typedef unsigned int (__stdcall *Fn2)(int, int, int, int);
    unsigned char* p = (unsigned char*)self;
    if (!((Fn1)ext_006A64B4)(self)) {
        return 0;
    }
    *(unsigned int*)(p + 0x2c) &= 0xfffffdffu;
    *(unsigned int*)(p + 0x28) = ((Fn2)ext_006A64AE)(0, 0, 0, 0);
    *(unsigned int*)(p + 0x08) = 0;
    return 1;
}

// [0x00435FA0] MainFrame::vfunc_26 (66 bytes)
extern "C" void ext_00434E30();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A6328();
extern "C" void ext_006A5CF8();
extern "C" int mem_0093A08C;
extern "C" int mem_0093A080;

extern "C" __declspec(naked) void __fastcall fn_00435FA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0xf5], 0
        je skip
        call ext_00434E30
    skip:
        call ext_006A5EDE
        mov edx, dword ptr [mem_0093A08C]
        mov eax, dword ptr [eax + 4]
        xor ecx, ecx
        cmp byte ptr [esi + 0xf5], cl
        setne cl
        push ecx
        mov ecx, dword ptr [mem_0093A080]
        push edx
        push ecx
        mov ecx, eax
        call ext_006A6328
        mov ecx, esi
        pop esi
        jmp ext_006A5CF8
    }
}

// [0x004330B0] MainFrame::vfunc_66 (284 bytes)
extern "C" void ext_00433080();
extern "C" void ext_006A5DA0();
extern "C" void ext_006A5E00();
extern "C" void ext_006A6520();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925654;
extern "C" int mem_009255F4;

extern "C" __declspec(naked) int __fastcall fn_004330B0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp+8]
        mov eax, dword ptr [ebx+4]
        cmp eax, 0x100
        push esi
        push edi
        mov edi, ecx
        jb L_fail
        cmp eax, 0x109
        ja L_fail
        push ebx
        call ext_00433080
        test eax, eax
        jne L_true
        mov esi, dword ptr [mem_00925654]
        call esi
        push eax
        call ext_006A5E00
        push 0
        push 0xa2e4a4
        push 0xa2e034
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_key
        call esi
        cmp eax, dword ptr [edi+0xfc]
        jne L_else
L_key:
        push 0x11
        call dword ptr [mem_009255F4]
        test ax, ax
        jns L_do
        mov eax, dword ptr [ebx+8]
        cmp eax, 0x9
        je L_do
        cmp eax, 0xd
        je L_do
        cmp eax, 0x78
        je L_do
        cmp eax, 0x58
        je L_do
        cmp eax, 0x63
        je L_do
        cmp eax, 0x43
        je L_do
        cmp eax, 0x76
        je L_do
        cmp eax, 0x56
        je L_do
        cmp eax, 0x7a
        je L_do
        cmp eax, 0x5a
        je L_do
        cmp eax, 0x79
        je L_do
        cmp eax, 0x59
        je L_do
        cmp eax, 0x61
        je L_do
        cmp eax, 0x41
        je L_do
        cmp eax, 0x26
        je L_do
        cmp eax, 0x28
        je L_do
        cmp eax, 0x25
        je L_do
        cmp eax, 0x27
        je L_do
        cmp eax, 0x23
        je L_do
        cmp eax, 0x24
        je L_do
        cmp eax, 0x6b
        je L_do
        cmp eax, 0x4b
        je L_do
        cmp eax, 0x75
        je L_do
        cmp eax, 0x55
        jne L_else
L_do:
        push ebx
        mov ecx, edi
        call ext_006A5DA0
        test eax, eax
        je L_fail
L_true:
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 4
L_else:
        push ebx
        mov ecx, edi
        call ext_006A6520
        pop edi
        pop esi
        pop ebx
        ret 4
L_fail:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
    }
}

// [0x004337A0] MainFrame::vfunc_0_off_D4 (492 bytes)
extern "C" void ext_0042FFE0();
extern "C" void ext_00529190();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6118();
extern "C" void ext_006A611E();
extern "C" void ext_006A6190();
extern "C" void ext_006A6196();
extern "C" void ext_006A619C();
extern "C" void ext_006A61A2();
extern "C" void ext_006A6526();
extern "C" void ext_006A652C();
extern "C" int mem_009240AC;
extern "C" int mem_00925690;
extern "C" int mem_0092408C;
extern "C" int mem_009240F8;
extern "C" int mem_009240FC;
extern "C" int mem_009240E0;
extern "C" int mem_009240B4;
extern "C" int mem_009241E8;

extern "C" __declspec(naked) void __fastcall fn_004337A0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87a540
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        push ebx
        push esi
        xor ebx, ebx
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x10], 0x92c4ac
        lea edi, [esi - 0xd4]
        push edi
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0x60], ebx
        call ext_006A652C
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x5c], 0x1
        call ext_006A61A2
        mov eax, dword ptr [esp + 0x44]
        push eax
        mov byte ptr [esp + 0x60], 0x2
        call dword ptr [mem_009240AC]
        push eax
        lea ecx, [esp + 0x34]
        call ext_006A6190
        mov edx, dword ptr [esi - 0xb4]
        lea ecx, [esp + 0x20]
        push ecx
        push edx
        call dword ptr [mem_00925690]
        mov eax, dword ptr [esp + 0x2c]
        sub eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x28]
        sub ecx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x48]
        push ecx
        push eax
        call dword ptr [mem_0092408C]
        push eax
        lea ecx, [esp + 0x14]
        call ext_006A5FFE
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x34]
        push ecx
        push edx
        call ext_006A6196
        mov edx, dword ptr [esp + 0x44]
        mov ecx, dword ptr [esp + 0x28]
        sub ecx, dword ptr [esp + 0x20]
        push 0xcc0020
        push ebx
        push ebx
        mov esi, eax
        mov eax, dword ptr [esp + 0x38]
        sub eax, dword ptr [esp + 0x30]
        push edx
        push eax
        mov eax, dword ptr [esp + 0x48]
        push ecx
        push ebx
        push ebx
        push eax
        call dword ptr [mem_009240F8]
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x18], 0x92f894
        mov ecx, dword ptr [esp + 0x48]
        push 0x26
        push ecx
        mov byte ptr [esp + 0x64], 0x3
        call dword ptr [mem_009240FC]
        test eax, 0x100
        je short L_4338EB
        push ebp
        push 0x408
        call ext_006A611E
        mov ebp, eax
        add esp, 0x4
        lea edx, [ebp + 0x4]
        push edx
        push 0xff
        mov word ptr [ebp], 0x300
        mov eax, dword ptr [esp + 0x50]
        push ebx
        push eax
        call dword ptr [mem_009240E0]
        push ebp
        mov word ptr [ebp + 0x2], ax
        call dword ptr [mem_009240B4]
        push eax
        lea ecx, [esp + 0x20]
        call ext_006A5FFE
        push ebp
        call ext_006A6118
        add esp, 0x4
        pop ebp
L_4338EB:
        cmp esi, ebx
        jne short L_4338F3
        xor esi, esi
        jmp short L_4338F6
L_4338F3:
        mov esi, dword ptr [esi + 0x4]
L_4338F6:
        mov ecx, dword ptr [esp + 0x34]
        push esi
        push ecx
        call ext_006A6196
        lea edx, [esp + 0x18]
        push edx
        push ebx
        lea eax, [esp + 0x18]
        push eax
        mov ecx, edi
        call ext_0042FFE0
        mov esi, eax
        cmp esi, ebx
        je short L_43392A
        mov ecx, dword ptr [esp + 0x64]
        push 0x1
        push ecx
        push esi
        lea ecx, [esp + 0x1b]
        call ext_00529190
L_43392A:
        push esi
        call dword ptr [mem_009241E8]
        mov esi, 0x92a23c
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x5c], 0x2
        mov dword ptr [esp + 0x18], esi
        call ext_006A5FF2
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x5c], 0x1
        call ext_006A619C
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x5c], bl
        call ext_006A6526
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x5c], 0xffffffff
        mov dword ptr [esp + 0x10], esi
        call ext_006A5FF2
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret 4
    }
}
