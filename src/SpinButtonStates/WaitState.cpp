// Decompiled translation unit: src/SpinButtonStates/WaitState.cpp

extern "C" void ext_00458860();
extern "C" int mem_0092566C;

struct Dec4588B0Rect { long left; long top; long right; long bottom; };

// [0x004588B0] SpinButtonStates::WaitState::vfunc_4 (77 bytes)
extern "C" void __fastcall fn_004588B0(void* self, int edx_unused, void* a1, int a2) {
    Dec4588B0Rect rc;
    void* hwnd = *(void**)(*(char**)((char*)self + 0x8) + 0x20);
    typedef int (__stdcall *PFN_GetClientRect)(void*, Dec4588B0Rect*);
    (*(PFN_GetClientRect*)&mem_0092566C)(hwnd, &rc);
    typedef void (__thiscall *Fn)(void*, int);
    if (*(int*)((char*)a1 + 0x4) < (rc.bottom - rc.top) / 2) {
        ((Fn)&ext_00458860)(*(void**)((char*)self + 0xc), 1);
    } else {
        ((Fn)&ext_00458860)(*(void**)((char*)self + 0xc), 2);
    }
}
