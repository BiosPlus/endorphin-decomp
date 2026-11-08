// Decompiled translation unit: src/classes/HasConstantTMPtr.cpp

// [0x005321E0] HasConstantTMPtr::vfunc_10 (20 bytes)
// Tail-call thunk: replaces the first stack arg with this->+0x4 and jumps to arg0's vfunc[4].
extern "C" __declspec(naked) void __fastcall fn_005321E0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [eax + 4]
        mov edx, dword ptr [edx + 0x10]
        mov dword ptr [esp + 4], eax
        jmp edx
    }
}
