// Decompiled translation unit: src/NMData/SkeletalJointData.cpp

// [0x005E4C70] NMData::SkeletalJointData::vfunc_61 (15 bytes)
extern "C" void* ext_005E1D50();

extern "C" float __fastcall fn_005E4C70(void* self, int edx_unused, int idx) {
    float* base = (float*)ext_005E1D50();
    return base[idx];
}

// [0x005F02B0] NMData::SkeletalJointData::vfunc_59 (35 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a C string pointer loaded from
// a global, via the imported basic_string(const char*, allocator) ctor, then returns
// the buffer in eax.
extern "C" int mem_00A9F280;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_005F02B0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F280]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
