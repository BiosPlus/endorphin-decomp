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
