// Decompiled translation unit: src/classes/ValuePtrArrayObject.cpp

extern "C" void ext_006404E0();
extern "C" void ext_00682A00();
extern "C" void ext_00682EE0();
extern "C" void ext_00682FD0();
extern "C" void ext_00427A60();
extern "C" void ext_00490960();
extern "C" void ext_004E3D30();
extern "C" void ext_00683620();
extern "C" void ext_006863A0();
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

// [0x00692DD0] ValuePtrArrayObject::vfunc_1_off_4 (316 bytes)
extern "C" __declspec(naked) void __fastcall fn_00692DD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a0e5b
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xa8
        push ebx
        push ebp
        lea ebp, [ecx + 4]
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], esi
        push edi
        mov edi, dword ptr [mem_00925134]
        jbe L_a1
        call edi
    L_a1:
        mov ebx, dword ptr [ebp + 4]
        cmp ebx, dword ptr [ebp + 8]
        jbe L_a2
        call edi
    L_a2:
        push esi
        push ebp
        push ebx
        push ebp
        lea eax, [esp + 0x20]
        push eax
        mov ecx, ebp
        call ext_00490960
        mov esi, dword ptr [esp + 0xc8]
        mov ebx, dword ptr [esi + 0x28]
        add esi, 0x24
        cmp ebx, dword ptr [esi + 8]
        jbe L_a3
        call edi
    L_a3:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], ebx
        call ext_00427A60
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe L_a4
        call edi
    L_a4:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], ebx
        call ext_00427A60
    L_loop:
        mov ebx, dword ptr [esp + 0x14]
        test ebx, ebx
        je L_a5
        cmp ebx, dword ptr [esp + 0x20]
        je L_a6
    L_a5:
        call edi
    L_a6:
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [esp + 0x24]
        jae L_done
        test ebx, ebx
        jne L_a7
        call edi
    L_a7:
        cmp esi, dword ptr [ebx + 8]
        jb L_a8
        call edi
    L_a8:
        mov edi, dword ptr [esi]
        lea ecx, [esp + 0x28]
        call ext_00683620
        push edi
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0xc4], 0
        call ext_006863A0
        lea ecx, [esp + 0x70]
        push ecx
        mov ecx, ebp
        call ext_004E3D30
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0xc0], 0xffffffff
        call ext_00682FD0
        cmp esi, dword ptr [ebx + 8]
        jb L_a9
        call dword ptr [mem_00925134]
    L_a9:
        add esi, 4
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x18], esi
        call ext_00427A60
        mov edi, dword ptr [mem_00925134]
        jmp L_loop
    L_done:
        mov ecx, dword ptr [esp + 0xb8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xb4
        ret 4
    }
}
