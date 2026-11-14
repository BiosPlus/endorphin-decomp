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

// [0x005E2A90] NMData::HingeData::vfunc_14 (32 bytes)
extern "C" void ext_005E29F0();

extern "C" __declspec(naked) void __fastcall fn_005E2A90(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        mov dword ptr [esp + 0xc], 0
        call ext_005E29F0
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x005E1970] NMData::HingeData::vfunc_61 (223 bytes)
extern "C" void ext_004875A0();
extern "C" void ext_0067DAD0();
extern "C" void ext_0067E990();
extern "C" void ext_00694B60();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) float __fastcall fn_005E1970(void* self, int edx_unused, int a1) {
    __asm {
        fldz
        sub esp, 0x8c
        cmp dword ptr [esp + 0x90], 1
        push ebp
        mov ebp, ecx
        jge done_zero
        mov ecx, dword ptr [mem_00B40640]
        fst dword ptr [esp + 0xc]
        mov eax, dword ptr [ebp + 0x4]
        fst dword ptr [esp + 0x8]
        mov edx, dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x4]
        push ebx
        push esi
        lea ebx, [ebp + 0x4]
        push edi
        push ecx
        mov ecx, ebx
        call edx
        mov esi, eax
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x30]
        mov ecx, 0x10
        lea edi, [esp + 0x5c]
        rep movsd
        mov esi, dword ptr [ebp + 0x17c]
        mov ecx, ebx
        add esi, 4
        call edx
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0xc]
        push eax
        lea eax, [esp + 0x20]
        push eax
        mov eax, dword ptr [mem_00B40640]
        push eax
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_004875A0
        push eax
        lea ecx, [esp + 0x60]
        call ext_0067E990
        fldz
        fst dword ptr [esp + 0x24]
        lea eax, [esp + 0x1c]
        fst dword ptr [esp + 0x20]
        push eax
        fst dword ptr [esp + 0x34]
        lea ecx, [esp + 0x60]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x38]
        fld1
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x40]
        call ext_0067DAD0
        lea ecx, [esp + 0x10]
        push ecx
        push 0
        lea ecx, [esp + 0x24]
        call ext_00694B60
        mov edx, dword ptr [esp + 0xa0]
        fld dword ptr [esp + edx * 4 + 0x10]
        pop edi
        pop esi
        pop ebx
    done_zero:
        pop ebp
        add esp, 0x8c
        ret 4
    }
}

extern "C" void ext_00528BB0();
extern "C" void ext_00528BD0();
extern "C" void ext_00528C70();
extern "C" void ext_00584C00();
extern "C" void ext_005ECF40();
extern "C" int mem_0093A444;

// [0x005ED550] NMData::HingeData::vfunc_14_off_C (123 bytes)
extern "C" __declspec(naked) void __fastcall fn_005ED550(void* self) {
    __asm {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        sub esp, 0x8
        mov eax, esp
        mov esi, ecx
        mov dword ptr [eax], offset mem_0093A444
        mov dword ptr [eax + 0x4], edi
        call ext_005ECF40
        mov bl, al
        test bl, bl
        je L_done
        push 0x20000
        mov ecx, esi
        call ext_00528BD0
        test edi, 0x200
        mov byte ptr [esp + 0x14], al
        je L_false
        mov ecx, dword ptr [esi + 0x174]
        call ext_00584C00
        test al, al
        je L_false
        mov al, 0x1
        jmp L_cmp
    L_false:
        xor al, al
    L_cmp:
        cmp al, byte ptr [esp + 0x14]
        mov byte ptr [esp + 0xc], al
        je L_done
        mov eax, dword ptr [esp + 0xc]
        push eax
        push 0x20000
        mov ecx, esi
        call ext_00528BB0
        mov ecx, esi
        call ext_00528C70
    L_done:
        pop edi
        pop esi
        mov al, bl
        pop ebx
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_00466910();
extern "C" void ext_00466F00();
extern "C" void ext_0053B470();
extern "C" void ext_00586D00();
extern "C" void ext_00661B10();
extern "C" void ext_00662120();
extern "C" void ext_0067E6C0();
extern "C" int mem_00B40640;
extern "C" int mem_0093F7B8;

// [0x005EFD20] NMData::HingeData::vfunc_40 (437 bytes)
extern "C" __declspec(naked) void __fastcall fn_005EFD20(void* self) {
    __asm {
        push -0x1
        push 0x896578
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x108
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x120]
        mov eax, dword ptr [ebp + 0x4]
        mov edx, dword ptr [eax + 0x14]
        push esi
        mov ebx, ecx
        mov ecx, dword ptr [mem_00B40640]
        add ebp, 0x4
        push edi
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x14], ebx
        call edx
        mov esi, eax
        mov eax, dword ptr [esp + 0x12c]
        mov ecx, 0x10
        lea edi, [esp + 0x54]
        rep movsd
        push eax
        lea ecx, [esp + 0x58]
        call ext_0067E6C0
        push ecx
        fld dword ptr [mem_0093F7B8]
        lea ecx, [esp + 0xa8]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [esp + 0x5c]
        call ext_0053B470
        fld dword ptr [eax]
        mov edx, dword ptr [ebx + 0x4]
        mov edx, dword ptr [edx]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x4]
        add ebx, 0x4
        fstp dword ptr [esp + 0x58]
        lea ecx, [esp + 0x54]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [eax + 0xc]
        mov eax, dword ptr [mem_00B40640]
        push eax
        fstp dword ptr [esp + 0x64]
        push ecx
        push 0x0
        mov ecx, ebx
        call edx
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x1c]
        mov ecx, ebx
        call edx
        test al, al
        je L_exit
        mov ecx, dword ptr [mem_00B40640]
        call ext_00661B10
        test al, al
        jne L_exit
        mov eax, dword ptr [mem_00B40640]
        push eax
        lea ecx, [esp + 0xbc]
        mov dword ptr [esp + 0xb8], eax
        call ext_00466F00
        mov ecx, dword ptr [mem_00B40640]
        mov dword ptr [esp + 0x120], 0x0
        call ext_00662120
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x14]
        push ecx
        mov ecx, ebp
        call edx
        mov esi, eax
        mov eax, dword ptr [esp + 0x12c]
        mov ecx, 0x10
        lea edi, [esp + 0x14]
        rep movsd
        push eax
        lea ecx, [esp + 0x18]
        call ext_0067E6C0
        push ecx
        fld dword ptr [mem_0093F7B8]
        lea ecx, [esp + 0x98]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [esp + 0x1c]
        call ext_0053B470
        fld dword ptr [eax]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x4]
        lea ecx, [esp + 0x14]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax + 0xc]
        mov eax, dword ptr [mem_00B40640]
        push eax
        fstp dword ptr [esp + 0x24]
        push ecx
        push 0x0
        mov ecx, ebx
        call edx
        lea ecx, [esp + 0xb4]
        mov dword ptr [esp + 0x120], 0xffffffff
        call ext_00466910
    L_exit:
        mov ecx, dword ptr [esp + 0x10]
        call ext_00586D00
        mov ecx, dword ptr [esp + 0x118]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x114
        ret 0x8
    }
}

// [0x005EBEC0] NMData::HingeData::vfunc_22 (170 bytes)
extern "C" void ext_005EB5A0();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A80();
extern "C" int mem_00A9EF9C;
extern "C" int mem_00A9F724;

extern "C" __declspec(naked) void* __fastcall fn_005EBEC0(void* self, int edx_unused, void* arg0) {
    __asm {
        mov eax, dword ptr [mem_00A9EF9C]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov ecx, ebx
        call ext_006404E0
        mov edi, eax
        push edi
        mov ecx, esi
        call ext_005EB5A0
        mov ecx, dword ptr [esi + 0x17c]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x58]
        push edi
        call eax
        cmp dword ptr [esi + 0x190], 0x0
        je L_end
        mov ecx, dword ptr [esi + 0x190]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x70]
        call eax
        test al, al
        je L_check_byte
        mov ecx, dword ptr [mem_00A9F724]
        push ecx
        mov ecx, edi
        call ext_00640110
        movzx edx, byte ptr [esi + 0x178]
        push edx
        push eax
        call ext_00640A80
        add esp, 0x8
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 0x4
    L_check_byte:
        mov eax, dword ptr [esi + 0x190]
        mov cl, byte ptr [eax + 0x178]
        cmp cl, byte ptr [esi + 0x178]
        je L_end
        mov edx, dword ptr [mem_00A9F724]
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x178]
        push ecx
        push eax
        call ext_00640A80
        add esp, 0x8
    L_end:
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 0x4
    }
}

// [0x005E1C50] NMData::HingeData::vfunc_54 (128 bytes)
extern "C" void ext_005B5780();
extern "C" void ext_005E0380();
extern "C" void ext_006A6C87();
extern "C" int mem_00B45CCC;
extern "C" int mem_00B45CC4;
extern "C" __declspec(naked) void __fastcall fn_005E1C50(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a612e
        push eax
        mov dword ptr fs:[0], esp
        mov eax, 1
        test byte ptr [mem_00B45CCC], al
        push esi
        mov esi, ecx
        jne loc_5e1ca4
        or dword ptr [mem_00B45CCC], eax
        push 0xa
        mov ecx, 0xb45c80
        mov dword ptr [esp + 0x10], 0
        call ext_005B5780
        push 0x91e400
        call ext_006A6C87
        add esp, 4
        mov dword ptr [esp + 0xc], -1

    loc_5e1ca4:
        push 0xb45c80
        mov ecx, esi
        call ext_005E0380
        mov al, byte ptr [esi + 0x178]
        mov ecx, dword ptr [esp + 4]
        mov byte ptr [mem_00B45CC4], al
        mov eax, 0xb45c80
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x005EECA0] NMData::HingeData::vfunc_67 (141 bytes)
extern "C" void ext_00412690();
extern "C" void ext_0048EF80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005EECA0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x168]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe loc_5eecbd
        call ebp
    loc_5eecbd:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe loc_5eecc7
        call ebp
    loc_5eecc7:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0048EF80
        fldz
        lea ecx, [esp + 0x10]
        fstp dword ptr [esp + 0x14]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        call ext_00412690
        fldz
        lea edx, [esp + 0x10]
        fstp dword ptr [esp + 0x14]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x1
        call ext_00412690
        fldz
        lea eax, [esp + 0x10]
        fstp dword ptr [esp + 0x14]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x2
        call ext_00412690
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

extern "C" void ext_005A2F70();
extern "C" void ext_005A3500();
extern "C" void ext_005A7320();
extern "C" void ext_005DF5C0();
extern "C" void ext_0060C570();
extern "C" void ext_006A5C62();
extern "C" int mem_008A6722;
extern "C" int mem_00924FDC;
extern "C" int mem_00A9EE64;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;
extern "C" int mem_00A8F2B4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FE0;
extern "C" int mem_00A8F2B8;

// [0x005EDAC0] NMData::HingeData::vfunc_64 (620 bytes)
extern "C" __declspec(naked) void __fastcall fn_005EDAC0(void* self) {
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
        push 0x5c
        mov dword ptr [esp + 0x44], ebx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x18], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x40], 1
        je L_null
        mov ecx, eax
        call ext_0060C570
        mov esi, eax
        jmp L_after_new
    L_null:
        xor esi, esi
    L_after_new:
        fldz
        lea ebp, [edi + 0x14]
        fst dword ptr [esi + 0x50]
        push ebp
        fst dword ptr [esi + 0x4c]
        lea ecx, [esi + 0x20]
        fstp dword ptr [esi + 0x48]
        mov byte ptr [esp + 0x44], bl
        mov byte ptr [esi + 0x58], 1
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esi + 0x44], ebx
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

// [0x005EFB30] NMData::HingeData::vfunc_17_off_C (483 bytes)
extern "C" void ext_00505F00();
extern "C" void ext_005881D0();
extern "C" void ext_005EF6D0();
extern "C" void ext_0065F280();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005EFB30(void* self) {
    __asm {
        push -1
        push 08A6A4Bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 40h
        push ebx
        push ebp
        push esi
        push edi
        push 2F8h
        mov edi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+10h], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp+58h], esi
        je L_skip_ctor
        mov ecx, eax
        call ext_005EF6D0
        mov esi, eax
    L_skip_ctor:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+5Ch]
        lea ecx, [edi+8]
        push ecx
        mov ecx, esi
        mov dword ptr [esp+5Ch], 0FFFFFFFFh
        call edx
        mov al, byte ptr [edi+16Ch]
        mov byte ptr [esi+178h], al
        lea eax, [edi+15Ch]
        push eax
        lea ecx, [esi+168h]
        call ext_00505F00
        mov edx, dword ptr [edi-8]
        mov eax, dword ptr [edx+20h]
        lea ecx, [edi-8]
        call eax
        mov byte ptr [esi+148h], al
        mov ecx, dword ptr [edi+170h]
        mov edx, dword ptr [ecx]
        mov ebp, dword ptr [esi+17Ch]
        mov edx, dword ptr [edx+110h]
        mov ebx, dword ptr [ebp]
        lea eax, [esp+14h]
        push eax
        call edx
        push eax
        mov eax, dword ptr [ebx+0F4h]
        mov ecx, ebp
        call eax
        mov ecx, dword ptr [edi+170h]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx+118h]
        push 1
        push 0
        lea eax, [esp+40h]
        push eax
        call edx
        mov ecx, dword ptr [edi+170h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax+118h]
        push 0
        push 0
        lea edx, [esp+28h]
        push edx
        mov dword ptr [esp+64h], 1
        call eax
        mov edx, dword ptr [ebp]
        mov edx, dword ptr [edx+0ECh]
        push 1
        push 0
        lea eax, [esp+40h]
        push eax
        mov ecx, ebp
        mov byte ptr [esp+64h], 2
        call edx
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax+0ECh]
        push 0
        push 0
        lea ecx, [esp+28h]
        push ecx
        mov ecx, ebp
        call edx
        mov ecx, dword ptr [edi+170h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax+130h]
        mov ebx, dword ptr [ebp]
        push 0
        call edx
        mov ecx, ebp
        push eax
        mov eax, dword ptr [ebx+108h]
        push 0
        call eax
        mov ebp, dword ptr [edi+170h]
        mov ebx, dword ptr [esi+17Ch]
        push ebp
        mov ecx, ebx
        call ext_005881D0
        lea ecx, [ebp+0E4h]
        push ecx
        lea ecx, [ebx+0E4h]
        call ext_0065F280
        mov edx, dword ptr [ebp+0E8h]
        mov dword ptr [ebx+0E8h], edx
        mov eax, dword ptr [ebp+0ECh]
        add edi, -0Ch
        push edi
        mov ecx, esi
        mov dword ptr [ebx+0ECh], eax
        call ext_005881D0
        lea ecx, [edi+0E4h]
        push ecx
        lea ecx, [esi+0E4h]
        call ext_0065F280
        mov edx, dword ptr [edi+0E8h]
        mov dword ptr [esi+0E8h], edx
        mov eax, dword ptr [edi+0ECh]
        lea ecx, [esp+20h]
        mov dword ptr [esi+0ECh], eax
        mov byte ptr [esp+58h], 1
        call ext_0065F440
        lea ecx, [esp+38h]
        mov dword ptr [esp+58h], 0FFFFFFFFh
        call ext_0065F440
        mov ecx, dword ptr [esp+50h]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 4Ch
        ret
    }
}
