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

// [0x005E05F0] NMData::HingeData::vfunc_55 (62 bytes)
extern "C" __declspec(naked) bool __fastcall fn_005E05F0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [eax + 0x1c]
        lea ecx, [esi + 0x4]
        call edx
        test al, al
        je L_ret_false_05E05F0
        cmp byte ptr [esi + 0x17a], 0x0
        jne L_ret_true_05E05F0
        mov eax, dword ptr [esp + 0x8]
        test eax, eax
        je L_ret_true_05E05F0
        cmp eax, 0x1
        je L_ret_true_05E05F0
        cmp eax, 0x2
        je L_ret_true_05E05F0
        cmp eax, 0x6
        jne L_ret_false_05E05F0
L_ret_true_05E05F0:
        mov al, 0x1
        pop esi
        ret 0x4
L_ret_false_05E05F0:
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x005EE3B0] NMData::HingeData::vfunc_15 (56 bytes)
extern "C" void ext_005EE360();
extern "C" void ext_005EC910();

extern "C" __declspec(naked) int __fastcall fn_005EE3B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x22f
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_22f_05EE3B0
        push eax
        push esi
        call ext_005EE360
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
L_22f_05EE3B0:
        push ecx
        push esi
        call ext_005EC910
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
