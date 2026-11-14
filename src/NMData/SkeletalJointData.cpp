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

extern "C" void ext_00587920();
extern "C" void ext_005EDFD0();

// [0x005EE2F0] NMData::SkeletalJointData::vfunc_33 (104 bytes)
extern "C" __declspec(naked) void __fastcall fn_005EE2F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_005EDFD0
        mov ecx, dword ptr [esi + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x84]
        call edx
        mov ecx, dword ptr [esi + 0x180]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x84]
        call edx
        mov ecx, dword ptr [esi + 0x184]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x84]
        call edx
        mov dword ptr [esi + 0x308], 0x700
        mov eax, dword ptr [esi + 0x180]
        push 0x0
        push eax
        mov ecx, esi
        call ext_00587920
        mov ecx, dword ptr [esi + 0x184]
        push 0x0
        push ecx
        mov ecx, dword ptr [esi + 0x17c]
        call ext_00587920
        pop esi
        ret
    }
}

// [0x005E22C0] NMData::SkeletalJointData::vfunc_54 (128 bytes)
extern "C" void ext_005B5780();
extern "C" void ext_005E0380();
extern "C" void ext_006A6C87();
extern "C" int mem_00B45D6C;
extern "C" int mem_00B45D64;
extern "C" __declspec(naked) void __fastcall fn_005E22C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a616e
        push eax
        mov dword ptr fs:[0], esp
        mov eax, 1
        test byte ptr [mem_00B45D6C], al
        push esi
        mov esi, ecx
        jne loc_5e2314
        or dword ptr [mem_00B45D6C], eax
        push 0x9
        mov ecx, 0xb45d20
        mov dword ptr [esp + 0x10], 0
        call ext_005B5780
        push 0x91e420
        call ext_006A6C87
        add esp, 4
        mov dword ptr [esp + 0xc], -1

    loc_5e2314:
        push 0xb45d20
        mov ecx, esi
        call ext_005E0380
        mov al, byte ptr [esi + 0x178]
        mov ecx, dword ptr [esp + 4]
        mov byte ptr [mem_00B45D64], al
        mov eax, 0xb45d20
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

extern "C" void ext_005A2F70();
extern "C" void ext_005A3500();
extern "C" void ext_005A7320();
extern "C" void ext_005DF5C0();
extern "C" void ext_006267B0();
extern "C" void ext_006A5C62();
extern "C" int mem_008A6722;
extern "C" int mem_00924FDC;
extern "C" int mem_00A9EE64;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;
extern "C" int mem_00A8F2B4;
extern "C" int mem_00924FE0;
extern "C" int mem_00A8F2B8;

// [0x005EDD30] NMData::SkeletalJointData::vfunc_64 (605 bytes)
extern "C" __declspec(naked) void __fastcall fn_005EDD30(void* self) {
    __asm {
        push -1
        push offset mem_008A6722
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x14], ebx
        push 0xa8
        mov dword ptr [esp + 0x44], ebx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x18], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x40], 1
        je L_null
        mov ecx, eax
        call ext_006267B0
        mov esi, eax
        jmp L_after_new
    L_null:
        xor esi, esi
    L_after_new:
        lea ebp, [edi + 0x14]
        push ebp
        lea ecx, [esi + 0x20]
        mov byte ptr [esp + 0x44], bl
        mov dword ptr [esp + 0x18], esi
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [mem_00A9EE64]
        push eax
        lea ecx, [esp + 0x20]
        push ebp
        push ecx
        call dword ptr [mem_00924ECC]
        add esp, 0xc
        push eax
        lea ecx, [esi + 4]
        mov byte ptr [esp + 0x44], 2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x40], bl
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [mem_00A8F2B4]
        push edx
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE4]
        mov ebp, dword ptr [edi + 0x18c]
        sub esp, 0x1c
        lea eax, [esp + 0x38]
        mov ecx, esp
        mov dword ptr [esp + 0x34], esp
        push eax
        mov byte ptr [esp + 0x60], 3
        call dword ptr [mem_00924FE0]
        lea ecx, [ebp + 0x568]
        call ext_005DF5C0
        cmp eax, ebx
        lea ecx, [esp + 0x1c]
        sete byte ptr [esp + 0x13]
        mov byte ptr [esp + 0x40], bl
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esp + 0x13], bl
        je L_skip1
        mov ecx, dword ptr [mem_00A8F2B4]
        push ecx
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [edi + 0x18c]
        push ebx
        lea edx, [esp + 0x20]
        push edx
        mov byte ptr [esp + 0x48], 4
        call ext_005A7320
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x40], bl
        call dword ptr [mem_00924FF4]
    L_skip1:
        mov eax, dword ptr [mem_00A8F2B4]
        push eax
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x44]
        mov ecx, esi
        mov byte ptr [esp + 0x40], 5
        call eax
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x24]
        mov ecx, esi
        call eax
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, dword ptr [edi + 0x18c]
        call ext_005A2F70
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x40], bl
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [mem_00A8F2B8]
        push edx
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE4]
        mov ebp, dword ptr [edi + 0x18c]
        sub esp, 0x1c
        lea eax, [esp + 0x38]
        mov ecx, esp
        mov dword ptr [esp + 0x34], esp
        push eax
        mov byte ptr [esp + 0x60], 6
        call dword ptr [mem_00924FE0]
        lea ecx, [ebp + 0x568]
        call ext_005DF5C0
        cmp eax, ebx
        lea ecx, [esp + 0x1c]
        sete byte ptr [esp + 0x13]
        mov byte ptr [esp + 0x40], bl
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esp + 0x13], bl
        je L_skip2
        mov ecx, dword ptr [mem_00A8F2B8]
        push ecx
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [edi + 0x18c]
        push ebx
        lea edx, [esp + 0x20]
        push edx
        mov byte ptr [esp + 0x48], 7
        call ext_005A7320
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x40], bl
        call dword ptr [mem_00924FF4]
    L_skip2:
        mov eax, dword ptr [mem_00A8F2B8]
        push eax
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x48]
        mov ecx, esi
        mov byte ptr [esp + 0x40], 8
        call eax
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x24]
        mov ecx, esi
        call eax
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, dword ptr [edi + 0x18c]
        call ext_005A2F70
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x40], bl
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [edi + 0x18c]
        push esi
        mov dword ptr [esp + 0x18], ebx
        call ext_005A3500
        mov ecx, dword ptr [esp + 0x38]
        pop edi
        pop esi
        pop ebp
        mov fs:[0], ecx
        pop ebx
        add esp, 0x34
        ret
    }
}

// [0x005F0620] NMData::SkeletalJointData::vfunc_17_off_C (830 bytes)
extern "C" int mem_008A6B2B;
extern "C" void ext_00505F00();
extern "C" void ext_00587920();
extern "C" void ext_005881D0();
extern "C" void ext_005B6610();
extern "C" void ext_005EFFF0();
extern "C" void ext_0065F280();
extern "C" void ext_0065F440();
extern "C" __declspec(naked) void __fastcall fn_005F0620(void* self) {
    __asm {
        push -1
        push offset mem_008A6B2B
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        push edi
        push 0x324
        mov ebx, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x10], eax
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr [esp + 0x58], ebp
        je L_a
        mov ecx, eax
        call ext_005EFFF0
        mov ebp, eax
    L_a:
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x5c]
        lea ecx, [ebx + 8]
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x5c], -1
        call edx
        mov al, byte ptr [ebx + 0x16c]
        mov byte ptr [ebp + 0x178], al
        lea eax, [ebx + 0x15c]
        push eax
        lea ecx, [ebp + 0x168]
        call ext_00505F00
        mov eax, dword ptr [ebx + 0x2fc]
        mov dword ptr [ebp + 0x308], eax
        mov edx, dword ptr [ebx - 8]
        mov eax, dword ptr [edx + 0x20]
        lea ecx, [ebx - 8]
        call eax
        mov byte ptr [ebp + 0x148], al
        mov esi, dword ptr [ebp + 0x17c]
        mov eax, dword ptr [esi]
        mov edi, dword ptr [ebx + 0x170]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0x110]
        add eax, 0xf4
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x14]
        push eax
        mov ecx, edi
        call edx
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [eax]
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x138]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        call edx
        test eax, eax
        jle L_b
    L_loop:
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 0x118]
        push 0
        push ecx
        lea edx, [esp + 0x40]
        push edx
        mov ecx, edi
        call eax
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0x118]
        push 1
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x64], 1
        call edx
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0xec]
        push 0
        push ecx
        lea edx, [esp + 0x40]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x64], 2
        call eax
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0xec]
        push 1
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x58], 1
        call ext_0065F440
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x58], -1
        call ext_0065F440
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x138]
        add dword ptr [esp + 0x10], 1
        mov ecx, esi
        call edx
        cmp dword ptr [esp + 0x10], eax
        jl L_loop
    L_b:
        mov eax, dword ptr [esi]
        add eax, 0x108
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x130]
        push 0
        mov ecx, edi
        call edx
        mov ecx, esi
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [eax]
        push 0
        call edx
        mov eax, dword ptr [esi]
        add eax, 0x108
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x130]
        push 1
        mov ecx, edi
        call edx
        mov ecx, esi
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [eax]
        push 1
        call edx
        mov eax, dword ptr [esi]
        add eax, 0x108
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x130]
        push 2
        mov ecx, edi
        call edx
        mov ecx, esi
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [eax]
        push 2
        call edx
        push edi
        mov ecx, esi
        call ext_005881D0
        lea eax, [edi + 0xe4]
        push eax
        lea ecx, [esi + 0xe4]
        call ext_0065F280
        mov ecx, dword ptr [edi + 0xe8]
        mov dword ptr [esi + 0xe8], ecx
        mov edx, dword ptr [edi + 0xec]
        mov dword ptr [esi + 0xec], edx
        mov edi, dword ptr [ebp + 0x180]
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [ebx + 0x174]
        add eax, 0xf4
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x110]
        lea edx, [esp + 0x2c]
        push edx
        call eax
        mov edx, dword ptr [esp + 0x10]
        push eax
        mov eax, dword ptr [edx]
        mov ecx, edi
        call eax
        mov eax, dword ptr [ebx + 0x174]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call ext_005881D0
        mov ecx, dword ptr [esp + 0x10]
        add ecx, 0xe4
        push ecx
        lea ecx, [edi + 0xe4]
        call ext_0065F280
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [eax + 0xe8]
        mov dword ptr [edi + 0xe8], edx
        mov eax, dword ptr [eax + 0xec]
        mov dword ptr [edi + 0xec], eax
        lea edi, [ebx - 0xc]
        push edi
        mov ecx, ebp
        call ext_005881D0
        lea ecx, [edi + 0xe4]
        push ecx
        lea ecx, [ebp + 0xe4]
        call ext_0065F280
        mov edx, dword ptr [edi + 0xe8]
        mov dword ptr [ebp + 0xe8], edx
        mov eax, dword ptr [edi + 0xec]
        mov dword ptr [ebp + 0xec], eax
        mov ecx, dword ptr [ebp + 0x180]
        push 0
        push ecx
        mov ecx, ebp
        call ext_00587920
        mov edi, dword ptr [ebp + 0x184]
        mov ebx, dword ptr [ebx + 0x178]
        push ebx
        mov ecx, edi
        call ext_005B6610
        fld dword ptr [ebx + 0x154]
        fstp dword ptr [edi + 0x154]
        push 0
        fld dword ptr [ebx + 0x158]
        push edi
        fstp dword ptr [edi + 0x158]
        mov ecx, esi
        fld dword ptr [ebx + 0x15c]
        fstp dword ptr [edi + 0x15c]
        call ext_00587920
        mov ecx, dword ptr [esp + 0x50]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x4c
        ret
    }
}

// [0x005E4BB0] NMData::SkeletalJointData::vfunc_66 (182 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_0067E9E0();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005E4BB0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00924E90]
        push esi
        push eax
        mov esi, ecx
        mov ecx, dword ptr [mem_00924FA0]
        push 0x96ad54
        push ecx
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, dword ptr [esi + 0x17c]
        mov edx, dword ptr [mem_00924E90]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x14]
        push edx
        mov edx, dword ptr [mem_00B40640]
        push edx
        call eax
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        push ecx
        call ext_0067E9E0
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov edx, dword ptr [mem_00924E90]
        mov eax, dword ptr [mem_00924FA0]
        push edx
        push 0x96ad3c
        push eax
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov esi, dword ptr [esi + 0x180]
        mov edx, dword ptr [mem_00924E90]
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esi + 0x4]
        push edx
        mov edx, dword ptr [mem_00B40640]
        push edx
        call eax
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        push ecx
        call ext_0067E9E0
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        pop esi
        ret
    }
}

// [0x005EC0A0] NMData::SkeletalJointData::vfunc_22 (420 bytes)
extern "C" void ext_00427550();
extern "C" void ext_00582A70();
extern "C" void ext_005E0670();
extern "C" void ext_005EB5A0();
extern "C" void ext_00611270();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A80();
extern "C" void ext_0067F040();
extern "C" int mem_00A9F280;
extern "C" int mem_00A9F65C;
extern "C" int mem_00924FF0;
extern "C" int mem_00B40640;
extern "C" int mem_0094CE80;
extern "C" int mem_00A9F24C;
extern "C" int mem_00A9F34C;
extern "C" int mem_00A9F3C8;
extern "C" int mem_00A9F3F0;
extern "C" int mem_00A9F3EC;
extern "C" int mem_00A9F3F4;
extern "C" int mem_00A9F724;

extern "C" __declspec(naked) void* __fastcall fn_005EC0A0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x14
        mov eax, dword ptr [mem_00A9F280]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x28]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_006404E0
        mov ebx, eax
        push ebx
        mov ecx, esi
        call ext_005EB5A0
        mov ecx, dword ptr [mem_00A9F65C]
        push ecx
        mov ecx, ebx
        call ext_00640110
        mov edx, eax
        mov eax, dword ptr [esi + 0x308]
        push eax
        mov ecx, esi
        call ext_005E0670
        mov ecx, eax
        mov dword ptr [esp + 0x10], edx
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
        mov ecx, dword ptr [esi + 0x17c]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x58]
        push ebx
        call eax
        cmp byte ptr [esi + 0x179], 0x0
        mov ecx, dword ptr [esi + 0x180]
        push ebx
        je L_005EC1BE
        call ext_00611270
        mov eax, dword ptr [esi + 0x180]
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [mem_00B40640]
        push eax
        call edx
        fld dword ptr [mem_0094CE80]
        mov ebp, eax
        push ecx
        mov ecx, ebp
        fstp dword ptr [esp]
        call ext_00582A70
        test al, al
        jne L_005EC1C5
        mov eax, dword ptr [mem_00A9F24C]
        push eax
        mov ecx, ebx
        call ext_006404E0
        mov ecx, dword ptr [mem_00A9F34C]
        push ecx
        mov ecx, eax
        call ext_006404E0
        mov edx, dword ptr [mem_00A9F3C8]
        mov ecx, dword ptr [mem_00A9F3F0]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [mem_00A9F3EC]
        mov dword ptr [esp + 0x14], edx
        mov edx, dword ptr [mem_00A9F3F4]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x1c], ecx
        mov dword ptr [esp + 0x20], edx
        xor edi, edi
    L_005EC195:
        mov eax, dword ptr [esp + edi * 4 + 0x14]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        call ext_006404E0
        push ebp
        push eax
        call ext_0067F040
        add edi, 0x1
        add esp, 0x8
        add ebp, 0x10
        cmp edi, 0x4
        jl L_005EC195
        mov edi, dword ptr [esp + 0x28]
        jmp L_005EC1C5
    L_005EC1BE:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x58]
        call eax
    L_005EC1C5:
        mov ecx, dword ptr [esi + 0x184]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x58]
        push ebx
        call eax
        cmp dword ptr [esi + 0x190], 0x0
        je L_005EC238
        mov ecx, dword ptr [esi + 0x190]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x70]
        call eax
        test al, al
        je L_005EC205
        mov ecx, dword ptr [mem_00A9F724]
        push ecx
        mov ecx, ebx
        call ext_00640110
        movzx edx, byte ptr [esi + 0x178]
        push edx
        jmp L_005EC22F
    L_005EC205:
        mov eax, dword ptr [esi + 0x190]
        mov cl, byte ptr [eax + 0x178]
        cmp cl, byte ptr [esi + 0x178]
        je L_005EC238
        mov edx, dword ptr [mem_00A9F724]
        push edx
        mov ecx, ebx
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x178]
        push ecx
    L_005EC22F:
        push eax
        call ext_00640A80
        add esp, 0x8
    L_005EC238:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x4
    }
}

extern "C" void ext_004275E0();
extern "C" void ext_005B11E0();
extern "C" void ext_005E0770();
extern "C" void ext_005F2970();
extern "C" void ext_0063EFE0();
extern "C" int mem_00924FE8;

// [0x005F30E0] NMData::SkeletalJointData::vfunc_21 (590 bytes)
extern "C" __declspec(naked) void __fastcall fn_005F30E0(void* self, void* edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8a6bc4
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x58]
        push edi
        mov esi, ecx
        call ext_005F2970
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [mem_00A9F65C]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x54], 0
        call ext_0063EFE0
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        call ext_004275E0
        add esp, 8
        lea edx, [esp + 0x10]
        push edx
        mov ecx, esi
        call ext_005E0770
        mov dword ptr [esi + 0x308], eax
        mov ecx, dword ptr [esi + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x54]
        push edi
        call edx
        mov ebx, dword ptr [esi + 0x17c]
        push 0x96b500
        lea ebp, [esi + 0x14]
        lea eax, [esp + 0x30]
        push ebp
        push eax
        call dword ptr [mem_00924ECC]
        add esp, 0xc
        mov edx, dword ptr [ebx]
        push eax
        mov eax, dword ptr [edx + 0x5c]
        mov ecx, ebx
        mov byte ptr [esp + 0x54], 1
        call eax
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x50], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x180]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x54]
        push edi
        call eax
        mov ebx, dword ptr [esi + 0x180]
        push 0x96b4f4
        lea ecx, [esp + 0x30]
        push ebp
        push ecx
        call dword ptr [mem_00924ECC]
        add esp, 0xc
        mov edx, dword ptr [ebx]
        push eax
        mov eax, dword ptr [edx + 0x5c]
        mov ecx, ebx
        mov byte ptr [esp + 0x54], 2
        call eax
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x50], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x184]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x54]
        push edi
        call eax
        mov edi, dword ptr [esi + 0x184]
        push 0x96b938
        push ebp
        lea ecx, [esp + 0x34]
        push ecx
        call dword ptr [mem_00924ECC]
        add esp, 0xc
        mov edx, dword ptr [edi]
        push eax
        mov eax, dword ptr [edx + 0x5c]
        mov ecx, edi
        mov byte ptr [esp + 0x54], 3
        call eax
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x50], 0
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi + 0x180]
        push 0
        push eax
        mov ecx, esi
        call ext_00587920
        mov eax, dword ptr [esi + 0x184]
        mov ecx, dword ptr [esi + 0x17c]
        push 0
        push eax
        call ext_00587920
        mov eax, dword ptr [esi + 0x17c]
        push 0
        push 0xa91240
        push 0xa2fb9c
        push 0
        push eax
        call ext_006A6E9E
        mov edi, eax
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x11c]
        add esp, 0x14
        mov ecx, edi
        call eax
        push 0
        lea ecx, [eax + 8]
        call ext_005B11E0
        fstp dword ptr [esi + 0x30c]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x11c]
        mov ecx, edi
        call eax
        push 1
        lea ecx, [eax + 8]
        call ext_005B11E0
        fstp dword ptr [esi + 0x310]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x11c]
        mov ecx, edi
        call eax
        push 2
        lea ecx, [eax + 8]
        call ext_005B11E0
        fstp dword ptr [esi + 0x314]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x124]
        mov ecx, edi
        call eax
        push 0
        lea ecx, [eax + 8]
        call ext_005B11E0
        fstp dword ptr [esi + 0x318]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x124]
        mov ecx, edi
        call eax
        push 1
        lea ecx, [eax + 8]
        call ext_005B11E0
        fstp dword ptr [esi + 0x31c]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x124]
        mov ecx, edi
        call eax
        push 2
        lea ecx, [eax + 8]
        call ext_005B11E0
        fstp dword ptr [esi + 0x320]
        mov dword ptr [esp + 0x50], -1
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 4
    }
}
