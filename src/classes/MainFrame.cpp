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
