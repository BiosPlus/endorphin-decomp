// Decompiled translation unit: src/classes/ValuePtrArrayObject.cpp

extern "C" void ext_006404E0();
extern "C" void ext_00682A00();
extern "C" void ext_00682EE0();
extern "C" void ext_00682FD0();
extern "C" int mem_00925134;
extern "C" int mem_00A9F3AC;

// [0x00692A80] ValuePtrArrayObject::vfunc_3_off_4 (203 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00692A80(void* self, int edx_unused, void* out) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a0e5b
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x90
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 4]
        push edi
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe l_2ab0
        call dword ptr [mem_00925134]
    l_2ab0:
        mov ebp, dword ptr [esp + 0xb0]
    l_2ab7:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe l_2ac5
        call dword ptr [mem_00925134]
    l_2ac5:
        cmp esi, esi
        je l_2acf
        call dword ptr [mem_00925134]
    l_2acf:
        cmp edi, ebx
        je l_2b2e
        cmp edi, dword ptr [esi + 8]
        jb l_2ade
        call dword ptr [mem_00925134]
    l_2ade:
        push edi
        lea ecx, [esp + 0x14]
        call ext_00682EE0
        mov eax, dword ptr [mem_00A9F3AC]
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0xac], 0
        call ext_006404E0
        push eax
        lea ecx, [esp + 0x1c]
        call ext_00682A00
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xa8], -1
        call ext_00682FD0
        cmp edi, dword ptr [esi + 8]
        jb l_2b29
        call dword ptr [mem_00925134]
    l_2b29:
        add edi, 8
        jmp l_2ab7
    l_2b2e:
        mov ecx, dword ptr [esp + 0xa0]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x9c
        ret 4
    }
}
