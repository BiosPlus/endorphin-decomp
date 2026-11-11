// Decompiled translation unit: src/AdvXMLParser/NodeContainer.cpp

extern "C" int mem_00925134;

// [0x00640EE0] AdvXMLParser::NodeContainer::vfunc_5 (104 bytes)
extern "C" __declspec(naked) void __fastcall fn_00640EE0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x24]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_00640EF5
        call dword ptr [mem_00925134]
    L_00640EF5:
        mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_00640F00:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_00640F0E
        call dword ptr [mem_00925134]
    L_00640F0E:
        cmp esi, esi
        je L_00640F18
        call dword ptr [mem_00925134]
    L_00640F18:
        cmp edi, ebx
        jae L_00640F41
        cmp edi, dword ptr [esi + 0x8]
        jb L_00640F27
        call dword ptr [mem_00925134]
    L_00640F27:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x14]
        push ebp
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_00640F3C
        call dword ptr [mem_00925134]
    L_00640F3C:
        add edi, 0x4
        jmp L_00640F00
    L_00640F41:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}
