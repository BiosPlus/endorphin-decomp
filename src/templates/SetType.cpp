// Decompiled translation unit: src/templates/SetType.cpp

// [0x004BBD10] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>::vfunc_12 (78 bytes)
extern "C" void ext_004BB160();
extern "C" void ext_004BA920();
extern "C" void ext_00493D90();
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_004BBD10(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [eax]
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        jbe L_004BBD2D
        call ebp
    L_004BBD2D:
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov ecx, esi
        call ext_004BB160
        mov edi, eax
        mov eax, dword ptr [edi]
        test eax, eax
        je L_004BBD4A
        cmp eax, esi
        je L_004BBD4C
    L_004BBD4A:
        call ebp
    L_004BBD4C:
        xor eax, eax
        cmp dword ptr [edi + 0x4], ebx
        pop edi
        pop esi
        pop ebp
        sete al
        pop ebx
        add esp, 0x8
        ret 0x8
    }
}

// [0x004BAF90] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>::vfunc_3 (208 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BAF90(void* self, int edx_unused, void* a1, void* a2) {
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
        jbe L_004BAFC8
        call dword ptr [mem_00925134]
    L_004BAFC8:
        mov edi, dword ptr [ebp + 0xc]
        jmp L_004BAFD0
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_004BAFD0:
        mov ebx, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [esp + 0x14]
        cmp dword ptr [ecx + 0x4], ebx
        jbe L_004BAFE2
        call dword ptr [mem_00925134]
    L_004BAFE2:
        cmp esi, ebx
        je L_004BB04C
        mov edx, dword ptr [esp + 0x14]
        cmp esi, dword ptr [edx + 0x8]
        jb L_004BAFF5
        call dword ptr [mem_00925134]
    L_004BAFF5:
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esp + 0x1b]
        call ext_004BA920
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
        je L_004BB04C
        mov eax, dword ptr [esp + 0x14]
        cmp esi, dword ptr [eax + 0x8]
        jb L_004BB043
        call dword ptr [mem_00925134]
    L_004BB043:
        mov ebx, dword ptr [esp + 0x14]
        add esi, 0x4
        jmp L_004BAFD0
    L_004BB04C:
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

// [0x004BBD60] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialPair>>, Properties::GetPropertySource>::vfunc_12 (78 bytes)
extern "C" void ext_004BB230();
extern "C" __declspec(naked) int __fastcall fn_004BBD60(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [eax]
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        jbe L_004BBD7D
        call ebp
    L_004BBD7D:
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov ecx, esi
        call ext_004BB230
        mov edi, eax
        mov eax, dword ptr [edi]
        test eax, eax
        je L_004BBD9A
        cmp eax, esi
        je L_004BBD9C
    L_004BBD9A:
        call ebp
    L_004BBD9C:
        xor eax, eax
        cmp dword ptr [edi + 0x4], ebx
        pop edi
        pop esi
        pop ebp
        sete al
        pop ebx
        add esp, 0x8
        ret 0x8
    }
}
