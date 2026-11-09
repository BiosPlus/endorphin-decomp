// Decompiled translation unit: src/classes/SelectionTool.cpp

// [0x0053F660] SelectionTool::vfunc_22 (37 bytes)
extern "C" __declspec(naked) int __fastcall fn_0053F660(void* self, int edx_unused, int a1, int a2) {
    __asm {
        cmp dword ptr [ecx + 0x88], 0x0
        je done
        test byte ptr [esp + 0x8], 0x11
        jne done
        mov ecx, dword ptr [ecx + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x40]
        call edx
    done:
        mov eax, 0x1
        ret 0x8
    }
}
