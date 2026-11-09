// Decompiled translation unit: src/NMData/HingeData.cpp

extern "C" void ext_005EDFD0();

// [0x005EE2D0] NMData::HingeData::vfunc_33 (25 bytes)
extern "C" void __fastcall fn_005EE2D0(void* self) {
    ext_005EDFD0();
    void* p = *(void**)((char*)self + 0x17c);
    typedef void (__fastcall *VFn)(void*);
    VFn fn = (VFn)(*(void***)p)[0x84 / 4];
    fn(p);
}

// [0x005EF8A0] NMData::HingeData::vfunc_59 (35 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a C string pointer loaded from
// a global, via the imported basic_string(const char*, allocator) ctor, then returns the
// buffer in eax.
extern "C" int mem_00A9EF9C;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_005EF8A0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EF9C]
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
