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

// [0x005E0970] NMData::SkeletalJointData::vfunc_60 (50 bytes)
extern "C" __declspec(naked) int __fastcall fn_005E0970(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov edi, ecx
        xor esi, esi
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_top:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xdc]
        push esi
        mov ecx, edi
        call edx
        test al, al
        je skip_inc
        add ebx, 1
    skip_inc:
        add esi, 1
        cmp esi, 6
        jl loop_top
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x005E2A50] NMData::SkeletalJointData::vfunc_14 (52 bytes)
extern "C" void ext_005E29F0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void* __fastcall fn_005E2A50(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x47
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je special
        push eax
        push esi
        call ext_005E29F0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    special:
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005E2340] NMData::SkeletalJointData::vfunc_41 (161 bytes)
extern "C" void ext_00587450();
extern "C" int mem_009849A8;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005E2340(void* self) {
    __asm {
        sub esp, 0x40
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x179], 0x0
        je done
        mov eax, dword ptr [esi + 0x22c]
        test eax, eax
        je done
        mov ecx, dword ptr [esi + 0x18c]
        mov edx, dword ptr [ecx + 0x600]
        cmp edx, dword ptr [mem_009849A8]
        jae else_path
        mov eax, dword ptr [esi + 0x180]
        mov edx, dword ptr [mem_00B40640]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x10]
        push edx
        push 0x0
        lea edx, [esp + 0xc]
        push edx
        call eax
        mov ecx, dword ptr [esi + 0x22c]
        mov edx, dword ptr [ecx + 0x20c]
        mov ecx, dword ptr [esi + 0x180]
        push edx
        call ext_00587450
        mov edx, dword ptr [mem_00B40640]
        mov esi, dword ptr [esi + 0x180]
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax]
        push edx
        lea ecx, [esi + 0x4]
        lea edx, [esp + 0x8]
        push edx
        push 0x0
        call eax
        pop esi
        add esp, 0x40
        ret
    else_path:
        mov ecx, dword ptr [eax + 0x20c]
        push ecx
        mov ecx, dword ptr [esi + 0x180]
        call ext_00587450
    done:
        pop esi
        add esp, 0x40
        ret
    }
}
