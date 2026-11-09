// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/WaitState.cpp

extern "C" void ext_0043CD80();
extern "C" int mem_00925688;

// [0x004432A0] MultiTrackView::MultiTrackViewStates::WaitState::vfunc_19 (36 bytes)
extern "C" unsigned char __fastcall fn_004432A0(void* self) {
    unsigned char* s = (unsigned char*)self;
    void* a = *(void**)(s + 0x8);
    ((void (__fastcall*)(void*))ext_0043CD80)(a);
    void* b = *(void**)(s + 0x8);
    s[0xC] = 0;
    void* wnd = *(void**)((unsigned char*)b + 0x20);
    ((void (__stdcall*)(void*, int, int))mem_00925688)(wnd, 0, 1);
    return 0;
}
