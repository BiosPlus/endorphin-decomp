// Decompiled translation unit: src/templates/SequenceType.cpp

extern "C" void ext_00493D90();
extern "C" void ext_00494FF0();
extern "C" void ext_005142F0();
extern "C" int mem_00925134;

// [0x00505B30] Properties::SequenceType<std::vector<Chromosome, std::allocator<Chromosome>>, Properties::GetPropertySource, DeRefValue>::vfunc_3 (206 bytes)
extern "C" __declspec(naked) void __fastcall fn_00505B30(void* self, int edx_unused, void* a1, void* a2) {
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
        jbe L_505B68
        call dword ptr [mem_00925134]
L_505B68:
        mov edi, dword ptr [ebp + 0xc]
        jmp L_505B70
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_505B70:
        mov ebx, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [esp + 0x14]
        cmp dword ptr [ecx + 0x4], ebx
        jbe L_505B82
        call dword ptr [mem_00925134]
L_505B82:
        cmp esi, ebx
        je L_505BEA
        mov edx, dword ptr [esp + 0x14]
        cmp esi, dword ptr [edx + 0x8]
        jb L_505B95
        call dword ptr [mem_00925134]
L_505B95:
        push esi
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x1b]
        call ext_00494FF0
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
        je L_505BEA
        mov eax, dword ptr [esp + 0x14]
        cmp esi, dword ptr [eax + 0x8]
        jb L_505BE1
        call dword ptr [mem_00925134]
L_505BE1:
        mov ebx, dword ptr [esp + 0x14]
        add esi, 0x68
        jmp L_505B70
L_505BEA:
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

// [0x0050AD30] Properties::SequenceType<std::vector<NMData::TaskParam, std::allocator<NMData::TaskParam>>, Properties::GetPropertySource, DeRefValue>::vfunc_3 (206 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050AD30(void* self, int edx_unused, void* a1, void* a2) {
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
        jbe L_AD68
        call dword ptr [mem_00925134]
    L_AD68:
        mov edi, dword ptr [ebp + 0xc]
        jmp L_AD70
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_AD70:
        mov ebx, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [esp + 0x14]
        cmp dword ptr [ecx + 0x4], ebx
        jbe L_AD82
        call dword ptr [mem_00925134]
    L_AD82:
        cmp esi, ebx
        je L_ADEA
        mov edx, dword ptr [esp + 0x14]
        cmp esi, dword ptr [edx + 0x8]
        jb L_AD95
        call dword ptr [mem_00925134]
    L_AD95:
        push esi
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x1b]
        call ext_00494FF0
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
        je L_ADEA
        mov eax, dword ptr [esp + 0x14]
        cmp esi, dword ptr [eax + 0x8]
        jb L_ADE1
        call dword ptr [mem_00925134]
    L_ADE1:
        mov ebx, dword ptr [esp + 0x14]
        add esi, 0x24
        jmp L_AD70
    L_ADEA:
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

// [0x00514820] Properties::SequenceType<DoubleArray, Properties::GetTerminalParent, DeRefValue>::vfunc_3 (206 bytes)
extern "C" __declspec(naked) void __fastcall fn_00514820(void* self, int edx_unused, void* a1, void* a2) {
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
        jbe L_514858
        call dword ptr [mem_00925134]
    L_514858:
        mov edi, dword ptr [ebp + 0xc]
        jmp L_514860
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_514860:
        mov ebx, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [esp + 0x14]
        cmp dword ptr [ecx + 0x4], ebx
        jbe L_514872
        call dword ptr [mem_00925134]
    L_514872:
        cmp esi, ebx
        je L_5148DA
        mov edx, dword ptr [esp + 0x14]
        cmp esi, dword ptr [edx + 0x8]
        jb L_514885
        call dword ptr [mem_00925134]
    L_514885:
        push esi
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x1b]
        call ext_005142F0
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
        je L_5148DA
        mov eax, dword ptr [esp + 0x14]
        cmp esi, dword ptr [eax + 0x8]
        jb L_5148D1
        call dword ptr [mem_00925134]
    L_5148D1:
        mov ebx, dword ptr [esp + 0x14]
        add esi, 0x8
        jmp L_514860
    L_5148DA:
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

// [0x00522F00] Properties::SequenceType<std::vector<NMData::VariableValue, std::allocator<NMData::VariableValue>>, Properties::GetPropertySource, DeRefValue>::vfunc_3 (206 bytes)
extern "C" __declspec(naked) void __fastcall fn_00522F00(void* self, int edx_unused, void* a1, void* a2) {
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
        jbe L_522F38
        call dword ptr [mem_00925134]
    L_522F38:
        mov edi, dword ptr [ebp + 0xc]
        jmp L_522F40
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_522F40:
        mov ebx, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [esp + 0x14]
        cmp dword ptr [ecx + 0x4], ebx
        jbe L_522F52
        call dword ptr [mem_00925134]
    L_522F52:
        cmp esi, ebx
        je L_522FBA
        mov edx, dword ptr [esp + 0x14]
        cmp esi, dword ptr [edx + 0x8]
        jb L_522F65
        call dword ptr [mem_00925134]
    L_522F65:
        push esi
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x1b]
        call ext_00494FF0
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
        je L_522FBA
        mov eax, dword ptr [esp + 0x14]
        cmp esi, dword ptr [eax + 0x8]
        jb L_522FB1
        call dword ptr [mem_00925134]
    L_522FB1:
        mov ebx, dword ptr [esp + 0x14]
        add esi, 0x28
        jmp L_522F40
    L_522FBA:
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
