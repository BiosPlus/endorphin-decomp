// Decompiled translation unit: src/classes/RenderableList.cpp

extern "C" int mem_00925134;
extern "C" int mem_00AEED24;

// [0x0054C160] RenderableList::vfunc_22 (130 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054C160(void* self) {
    __asm {
        cmp byte ptr [ecx + 0xc], 0
        je L_ret
        push esi
        lea esi, [ecx + 0x14]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push ebx
        nop
L_head:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        cmp esi, esi
        je L_chk3
        call dword ptr [mem_00925134]
L_chk3:
        cmp edi, ebx
        je L_after
        mov ecx, dword ptr [mem_00AEED24]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8]
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_chk4
        call dword ptr [mem_00925134]
L_chk4:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x58]
        push ebp
        call edx
        mov ecx, dword ptr [mem_00AEED24]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_chk5
        call dword ptr [mem_00925134]
L_chk5:
        add edi, 0x4
        jmp L_head
L_after:
        pop ebx
        pop ebp
        pop edi
        pop esi
L_ret:
        ret 0x4
    }
}
