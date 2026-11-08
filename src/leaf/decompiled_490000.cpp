// Decompiled translation unit: src/leaf/decompiled_490000.cpp

// [0x00493E10] sub_00493E10 (20 bytes)
// Tail-call thunk: stores the byte argument at self+8, forwards self->inner's vfunc[5] with the arg.
extern "C" __declspec(naked) void __fastcall fn_00493E10(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov byte ptr [ecx + 8], al
        mov ecx, dword ptr [ecx]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0x14]
        jmp eax
    }
}
