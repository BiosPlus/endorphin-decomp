// Decompiled translation unit: src/classes/UndoHistoryDialog.cpp

// [0x00460D00] UndoHistoryDialog::vfunc_66 (59 bytes)
extern "C" void ext_006A5E00();
extern "C" void ext_006A5F7A();
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
