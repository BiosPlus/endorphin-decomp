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

// [0x005ED030] NMData::SkeletalJointData::vfunc_2 (464 bytes)
// Chain of string compares against constants at 0x0096B094..0x0096AFF4 (step -0x10).
// Each hit calls a sibling sub_005EC9xx/sub_005ECAxx with (this, a1) and returns a1;
// the final fallthrough forwards to FixedPathJointData::vfunc_2.
extern "C" void ext_005EC9B0();
extern "C" void ext_005EC9D0();
extern "C" void ext_005EC9F0();
extern "C" void ext_005ECA10();
extern "C" void ext_005ECA30();
extern "C" void ext_005ECA50();
extern "C" void ext_005ECA70();
extern "C" void ext_005ECA90();
extern "C" void ext_005ECAB0();
extern "C" void ext_005ECAD0();
extern "C" void ext_005ECAF0();
extern "C" void ext_005E24F0();
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void* __fastcall fn_005ED030(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [mem_00924FC0]
        push 0x96b094
        push esi
        mov ebx, ecx
        mov dword ptr [esp + 0x14], 0
        call edi
        add esp, 0x8
        test al, al
        je c1
        mov esi, dword ptr [esp + 0x14]
        push ebx
        push esi
        call ext_005EC9B0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    c1:
        push 0x96b084
        push esi
        call edi
        add esp, 0x8
        test al, al
        je c2
        mov esi, dword ptr [esp + 0x14]
        push ebx
        push esi
        call ext_005EC9D0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    c2:
        push 0x96b074
        push esi
        call edi
        add esp, 0x8
        test al, al
        je c3
        mov esi, dword ptr [esp + 0x14]
        push ebx
        push esi
        call ext_005EC9F0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    c3:
        push 0x96b064
        push esi
        call edi
        add esp, 0x8
        test al, al
        je c4
        mov esi, dword ptr [esp + 0x14]
        push ebx
        push esi
        call ext_005ECA10
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    c4:
        push 0x96b054
        push esi
        call edi
        add esp, 0x8
        test al, al
        je c5
        mov esi, dword ptr [esp + 0x14]
        push ebx
        push esi
        call ext_005ECA30
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    c5:
        push 0x96b044
        push esi
        call edi
        add esp, 0x8
        test al, al
        je c6
        mov esi, dword ptr [esp + 0x14]
        push ebx
        push esi
        call ext_005ECA50
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    c6:
        push 0x96b034
        push esi
        call edi
        add esp, 0x8
        test al, al
        je c7
        mov esi, dword ptr [esp + 0x14]
        push ebx
        push esi
        call ext_005ECA70
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    c7:
        push 0x96b024
        push esi
        call edi
        add esp, 0x8
        test al, al
        je c8
        mov esi, dword ptr [esp + 0x14]
        push ebx
        push esi
        call ext_005ECA90
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    c8:
        push 0x96b014
        push esi
        call edi
        add esp, 0x8
        test al, al
        je c9
        mov esi, dword ptr [esp + 0x14]
        push ebx
        push esi
        call ext_005ECAB0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    c9:
        push 0x96b004
        push esi
        call edi
        add esp, 0x8
        test al, al
        je c10
        mov esi, dword ptr [esp + 0x14]
        push ebx
        push esi
        call ext_005ECAD0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    c10:
        push 0x96aff4
        push esi
        call edi
        add esp, 0x8
        test al, al
        je fallthrough
        mov esi, dword ptr [esp + 0x14]
        push ebx
        push esi
        call ext_005ECAF0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    fallthrough:
        push esi
        mov esi, dword ptr [esp + 0x18]
        push esi
        mov ecx, ebx
        call ext_005E24F0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    }
}

extern "C" void __fastcall ext_00588330(void* self, int edx_unused, void* a1, void* a2);
extern "C" void* __cdecl ext_006A6E9E(void* ptr, int vfDelta, void* srcType, void* dstType, int isReference);
extern "C" int mem_00A8F318;
extern "C" int mem_00A2E2BC;

// [0x005E0630] NMData::SkeletalJointData::vfunc_40 (52 bytes)
extern "C" void __fastcall fn_005E0630(void* self, int edx_unused, void* a1, void* a2) {
    if (*((unsigned char*)self + 0x179) != 0) {
        return;
    }
    ext_00588330(self, edx_unused, a1, a2);
    ext_006A6E9E(a1, 0, &mem_00A2E2BC, &mem_00A8F318, 0);
}
