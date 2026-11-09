// Decompiled translation unit: src/classes/ResizeTool.cpp

// [0x00545B50] ResizeTool::vfunc_26 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545B50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x80]
        call edx
        fld1
        mov dword ptr [esi + 0xb0], 0x3
        fst dword ptr [esi + 0xb4]
        fst dword ptr [esi + 0xb8]
        fstp dword ptr [esi + 0xbc]
        pop esi
        ret
    }
}
