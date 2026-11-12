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
