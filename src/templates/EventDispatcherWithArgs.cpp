// Decompiled translation unit: src/templates/EventDispatcherWithArgs.cpp

// [0x00466C20] EventDispatcherWithArgs<FrameBufferIterator, FrameBufferPlaybackEventListener, &[thunk]: __thiscall FrameBufferTickEventListener::`vcall'{0, {flat}}>::vfunc_2 (10 bytes)
extern "C" void ext_00466BA0();

extern "C" __declspec(naked) void __cdecl fn_00466C20() {
    __asm {
        push 0
        push 0
        call ext_00466BA0
        ret
    }
}

// [0x004B01E0] EventDispatcherWithArgs<FrameBufferIterator, FrameBufferPlaybackEventListener, &[thunk]: __thiscall FrameBufferTickEventListener::`vcall'{0, {flat}}>::vfunc_1 (15 bytes)
extern "C" __declspec(naked) void __stdcall fn_004B01E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        push 0
        call ext_00466BA0
        ret 4
    }
}
