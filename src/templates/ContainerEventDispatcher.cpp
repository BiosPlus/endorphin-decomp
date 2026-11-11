// Decompiled translation unit: src/templates/ContainerEventDispatcher.cpp

extern "C" void ext_00678D70();
extern "C" int mem_00925134;

// [0x0047AF80] ContainerEventDispatcher<pointainer<std::vector<NMData::TriggeredEventData *, std::allocator<NMData::TriggeredEventData *>>>, NMData::TriggeredEventData>::vfunc_1 (114 bytes)
extern "C" __declspec(naked) void __fastcall fn_0047AF80(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x14]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], ecx
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        mov ebp, dword ptr [esp + 0x18]
        mov edi, edi
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
        cmp edi, dword ptr [esi + 0x8]
        jb L_chk4
        call dword ptr [mem_00925134]
L_chk4:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push ebp
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_chk5
        call dword ptr [mem_00925134]
L_chk5:
        add edi, 0x4
        jmp L_head
L_after:
        mov ecx, dword ptr [esp + 0x10]
        push ebp
        call ext_00678D70
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}
