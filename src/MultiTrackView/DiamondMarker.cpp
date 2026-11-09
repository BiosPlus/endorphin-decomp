// Decompiled translation unit: src/MultiTrackView/DiamondMarker.cpp

// [0x00440940] MultiTrackView::DiamondMarker::vfunc_3 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_00440940(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 10h]
        push edx
        call eax
        test eax, eax
        jl short L_zero
        cmp eax, 1
        jle short L_three
        cmp eax, 2
        jne short L_zero
        mov eax, 1
        ret 4
    L_three:
        mov eax, 3
        ret 4
    L_zero:
        xor eax, eax
        ret 4
    }
}
