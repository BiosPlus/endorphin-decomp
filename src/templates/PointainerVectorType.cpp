// Decompiled translation unit: src/templates/PointainerVectorType.cpp

// [0x00681B00] Properties::PointainerVectorType<PointainerWithUndo<UndoablePointainerVector<Interpreter>>, Properties::GetPropertySource>::vfunc_1 (28 bytes)
extern "C" void ext_00661620();

extern "C" __declspec(naked) void* __fastcall fn_00681B00(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ecx, esi
        mov dword ptr [esp + 0x4], 0x0
        call ext_00661620
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x004B4D90] Properties::PointainerVectorType<PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>, Properties::GetTerminalParent>::vfunc_3 (208 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_004B4C00();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004B4D90(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x008b40d8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x18
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        mov ebx, dword ptr [eax]
        push esi
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        push edi
        mov dword ptr [esp + 0x14], ebx
        jbe L_4B4DC8
        call dword ptr [mem_00925134]
    L_4B4DC8:
        mov edi, dword ptr [ebp + 0xc]
        jmp L_4B4DD0
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_4B4DD0:
        mov ebx, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [esp + 0x14]
        cmp dword ptr [ecx + 0x4], ebx
        jbe L_4B4DE2
        call dword ptr [mem_00925134]
    L_4B4DE2:
        cmp esi, ebx
        je L_4B4E4C
        mov edx, dword ptr [esp + 0x14]
        cmp esi, dword ptr [edx + 0x8]
        jb L_4B4DF5
        call dword ptr [mem_00925134]
    L_4B4DF5:
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esp + 0x1b]
        call ext_004B4C00
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [eax]
        mov edx, dword ptr [edx]
        push ecx
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x34], 0x0
        call edx
        lea ecx, [esp + 0x18]
        mov bl, al
        mov dword ptr [esp + 0x2c], -0x1
        call ext_00493D90
        test bl, bl
        je L_4B4E4C
        mov eax, dword ptr [esp + 0x14]
        cmp esi, dword ptr [eax + 0x8]
        jb L_4B4E43
        call dword ptr [mem_00925134]
    L_4B4E43:
        mov ebx, dword ptr [esp + 0x14]
        add esi, 0x4
        jmp L_4B4DD0
    L_4B4E4C:
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}
