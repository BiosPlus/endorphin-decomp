// Decompiled translation unit: src/leaf/decompiled_720000.cpp

// [0x0072DB90] sub_0072DB90 (32 bytes)
// Reads sub-object at self->[0xAC]. If its byte [0x1B] is nonzero, returns 2;
// otherwise returns 1 if byte [0x19] is nonzero, else 0.
extern "C" __declspec(naked) int __fastcall fn_0072DB90(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xac]
        mov cl, byte ptr [eax + 0x1b]
        test cl, cl
        je short L_check19
        mov eax, 0x2
        ret
L_check19:
        mov dl, byte ptr [eax + 0x19]
        xor ecx, ecx
        test dl, dl
        setne cl
        mov eax, ecx
        ret
    }
}
