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

// [0x005C3840] NMData::CollisionModelData::vfunc_6_off_C (71 bytes)
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_005C3840(void* self, int edx_unused, float* out) {
    __asm {
        mov ecx, dword ptr [ecx + 0x150]
        sub esp, 0x10
        test ecx, ecx
        je short L_end
        call ext_005B11F0
        fld dword ptr [eax]
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        fldz
        fstp dword ptr [eax + 0xc]
    L_end:
        add esp, 0x10
        ret 0x4
    }
}

// [0x005C37E0] NMData::CollisionModelData::vfunc_5_off_C (82 bytes)
extern "C" void ext_005B1B60();

extern "C" __declspec(naked) void __fastcall fn_005C37E0(void* self, int edx_unused, const float* a1) {
    __asm {
        sub esp, 0x10
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x150]
        test ecx, ecx
        je done
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push esi
        call ext_005B1B60
        fldz
        cmp dword ptr [edi + 0x4], 0x0
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x10]
        pop esi
        je done
        mov ecx, dword ptr [edi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x34]
        lea edx, [esp + 0x4]
        push edx
        call eax
done:
        pop edi
        add esp, 0x10
        ret 0x4
    }
}

extern "C" void __fastcall ext_00648470(void* p);
extern "C" void __fastcall ext_00648790(void* p);
extern "C" void __cdecl ext_006A5C5C(void* p);

// [0x005C8860] NMData::CollisionModelData::vfunc_64 (65 bytes)
extern "C" void __fastcall fn_005C8860(void* self) {
    char* s = (char*)self;
    if (*(void**)(s + 0x16C)) {
        ext_00648470(*(void**)(s + 0x16C));
        void* p = *(void**)(s + 0x16C);
        if (p) {
            ext_00648790(p);
            ext_006A5C5C(p);
        }
        *(void**)(s + 0x16C) = 0;
        *(unsigned char*)(s + 0x168) = 0;
    }
}
