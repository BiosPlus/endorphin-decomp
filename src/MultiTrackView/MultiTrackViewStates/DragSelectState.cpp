// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/DragSelectState.cpp

// [0x00443630] MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_1 (20 bytes)
extern "C" void ext_006A5E00();
extern "C" int mem_009256D8;

typedef void* (__stdcall *SetCaptureFn)(void*);
typedef void (__stdcall *ThunkFn)(void*);

extern "C" void __fastcall fn_00443630(void* self) {
    char* p = *(char**)((char*)self + 0x8);
    void* prev = ((SetCaptureFn)mem_009256D8)(*(void**)(p + 0x20));
    ((ThunkFn)ext_006A5E00)(prev);
}
