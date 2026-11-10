// Decompiled translation unit: src/NMData/CollisionModelData.cpp

// [0x005C3180] NMData::CollisionModelData::vfunc_62 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_005C3180(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0xb447f4
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005C38B0] NMData::CollisionModelData::vfunc_0_off_154 (54 bytes)
extern "C" void* __fastcall ext_00648480(void* self);

extern "C" __declspec(naked) void __fastcall fn_005C38B0(void* self, int edx_unused, int a1) {
    __asm {
        push edi
        mov edi, dword ptr [ecx + 0x18]
        test edi, edi
        je done
        mov eax, dword ptr [ecx - 0x150]
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [eax + 0x14]
        add ecx, 0xfffffeb0
        push esi
        push edx
        call eax
        mov ecx, edi
        mov esi, eax
        call ext_00648480
        mov ecx, 0x10
        mov edi, eax
        rep movsd
        pop esi
done:
        pop edi
        ret 0x4
    }
}

// [0x005C2FB0] NMData::CollisionModelData::vfunc_1_off_158 (55 bytes)
extern "C" __declspec(naked) void __fastcall fn_005C2FB0(void* self, int edx_unused, const float* a1) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [eax]
        add ecx, 0xfffffeb4
        fstp dword ptr [esp]
        lea edx, [esp]
        fld dword ptr [eax + 0x4]
        push edx
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x14]
        fstp dword ptr [esp + 0xc]
        fld1
        fstp dword ptr [esp + 0x10]
        call eax
        add esp, 0x10
        ret 0x4
    }
}
