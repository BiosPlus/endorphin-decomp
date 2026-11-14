// Decompiled translation unit: src/templates/MultiSymbolMap.cpp

// [0x005A2D70] MultiSymbolMap<PointainerMap<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, NMData::RelationshipData>>::vfunc_0 (69 bytes)
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();

extern "C" void* __fastcall fn_005A2D70(void* self, int edx_unused, int a1) {
    unsigned char* p = static_cast<unsigned char*>(self);
    void* held = *reinterpret_cast<void**>(p + 0x08);
    if (held != 0) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(held);
    }
    *reinterpret_cast<int*>(p + 0x08) = 0;
    *reinterpret_cast<int*>(p + 0x0c) = 0;
    *reinterpret_cast<int*>(p + 0x10) = 0;
    reinterpret_cast<void (__fastcall*)(void*)>(ext_0065F440)(self);
    if (a1 & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(self);
    }
    return self;
}

// [0x005A2CF0] MultiSymbolMap<PointainerMap<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, NMData::RelationshipData>>::vfunc_1 (122 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005A2CF0(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x4]
        push edi
        mov edi, dword ptr [esi + 0x4]
        xor ebp, ebp
        cmp edi, dword ptr [esi + 0x8]
        jbe chk_loop_head
        call dword ptr [mem_00925134]
chk_loop_head:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe chk_self
        call dword ptr [mem_00925134]
chk_self:
        cmp esi, esi
        je chk_end
        call dword ptr [mem_00925134]
chk_end:
        cmp edi, ebx
        je done
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x2c], esp
        push eax
        call dword ptr [mem_00924FE0]
        cmp edi, dword ptr [esi + 0x8]
        jb call_elem
        call dword ptr [mem_00925134]
call_elem:
        mov ecx, dword ptr [edi]
        call ext_005DF5C0
        mov ebp, eax
        test ebp, ebp
        jne done
        cmp edi, dword ptr [esi + 0x8]
        jb advance
        call dword ptr [mem_00925134]
advance:
        add edi, 0x4
        jmp chk_loop_head
done:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}

extern "C" void ext_0040ECB0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

// [0x005A55B0] MultiSymbolMap<PointainerMap<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, NMData::RelationshipData>>::vfunc_6 (216 bytes)
extern "C" __declspec(naked) void __fastcall fn_005A55B0(void* self, int edx_pad, void* arg1) {
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x4]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], esi
        jbe L_5a55ce
        call ebp
    L_5a55ce:
        mov dword ptr [esp + 0x20], edi
    L_5a55d2:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_5a55dc
        call ebp
    L_5a55dc:
        cmp esi, esi
        je L_5a55e2
        call ebp
    L_5a55e2:
        cmp edi, ebx
        je L_5a567e
        cmp edi, dword ptr [esi + 0x8]
        jb L_5a55f1
        call ebp
    L_5a55f1:
        mov edi, dword ptr [edi]
        mov eax, dword ptr [edi + 0x4]
        mov ebx, dword ptr [eax]
        mov esi, edi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], ebx
    L_5a5602:
        test esi, esi
        mov ebp, dword ptr [edi + 0x4]
        je L_5a560d
        cmp esi, edi
        je L_5a5613
    L_5a560d:
        call dword ptr [mem_00925134]
    L_5a5613:
        cmp ebx, ebp
        je L_5a5653
        test esi, esi
        jne L_5a5621
        call dword ptr [mem_00925134]
    L_5a5621:
        cmp ebx, dword ptr [esi + 0x4]
        jne L_5a562c
        call dword ptr [mem_00925134]
    L_5a562c:
        mov ecx, dword ptr [ebx + 0x28]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        mov ecx, dword ptr [esp + 0x28]
        push eax
        call ext_0040ECB0
        lea ecx, [esp + 0x14]
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x18]
        mov esi, dword ptr [esp + 0x14]
        jmp L_5a5602
    L_5a5653:
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x20]
        cmp edx, dword ptr [ecx + 0x8]
        jb L_5a5666
        call dword ptr [mem_00925134]
    L_5a5666:
        add dword ptr [esp + 0x20], 0x4
        mov esi, dword ptr [esp + 0x10]
        mov ebp, dword ptr [mem_00925134]
        mov edi, dword ptr [esp + 0x20]
        jmp L_5a55d2
    L_5a567e:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x4
    }
}
