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
