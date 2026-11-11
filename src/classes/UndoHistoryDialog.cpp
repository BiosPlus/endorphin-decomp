// Decompiled translation unit: src/classes/UndoHistoryDialog.cpp

// [0x00460D00] UndoHistoryDialog::vfunc_66 (59 bytes)
extern "C" void ext_006A5E00();
extern "C" void ext_006A5F7A();
extern "C" void ext_006A5F44();
extern "C" int mem_00925654;

typedef void* (__stdcall *GetFocusFn)();
typedef void* (__stdcall *FromHandleFn)(void*);
typedef int (__thiscall *BaseFn)(void*, void*);

extern "C" int __fastcall fn_00460D00(void* self, int edx_unused, void* msg) {
    if (((int*)msg)[1] == 0x100) {
        void* focus = ((GetFocusFn)mem_00925654)();
        void* wnd = ((FromHandleFn)ext_006A5E00)(focus);
        if (wnd != (char*)self + 0x128) {
            return 0;
        }
    }
    return ((BaseFn)ext_006A5F7A)(self, msg);
}

// [0x00460C50] UndoHistoryDialog::vfunc_63 (136 bytes)
extern "C" void __fastcall fn_00460C50(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x432, p + 0x7c);
    ddx(a1, 0x433, p + 0xd0);
    ddx(a1, 0x42e, p + 0x128);
    ddx(a1, 0x438, p + 0x17c);
    ddx(a1, 0x43e, (void*)*(int*)(p + 0x124));
    ddx(a1, 0x43f, p + 0x1d0);
    ddx(a1, 0x440, p + 0x224);
}
