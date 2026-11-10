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
