// Decompiled translation unit: src/classes/RenderView.cpp

extern "C" int mem_00ACDB40;
extern "C" int mem_00925690;

// [0x0044BF40] RenderView::vfunc_28 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044BF40(void* self) {
    __asm {
        cmp byte ptr [ecx + 0x6c], 0x0
        __asm _emit 0x74 __asm _emit 0x1B // je 0x44bf61 (next function: jmp thunk)
        mov ecx, dword ptr [mem_00ACDB40]
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x20]
        mov dword ptr [esp + 0x8], eax
        mov dword ptr [esp + 0x4], edx
        jmp dword ptr [mem_00925690]
    }
}
