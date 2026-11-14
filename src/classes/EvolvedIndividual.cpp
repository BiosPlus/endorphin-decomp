// Decompiled translation unit: src/classes/EvolvedIndividual.cpp

// [0x00507E80] EvolvedIndividual::vfunc_6 (35 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a global C string pointer via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00A9EFC0;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_00507E80(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EFC0]
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

// [0x00516E60] EvolvedIndividual::vfunc_1_off_8 (73 bytes)
// Loops over a vector of pointers at +0xC (begin) / +0x10 (end) and stores each
// element's index into its +0x34 field. Two stack args (ret 0x8) are unused.
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00516E60(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    loop_top:
        mov ecx, dword ptr [esi + 0xc]
        test ecx, ecx
        je loop_end
        mov eax, dword ptr [esi + 0x10]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jae loop_end
        test ecx, ecx
        je call_inval
        mov eax, dword ptr [esi + 0x10]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb body
    call_inval:
        call ebx
    body:
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [eax + 4 * edi]
        mov dword ptr [ecx + 0x34], edi
        add edi, 1
        jmp loop_top
    loop_end:
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x00516E10] EvolvedIndividual::vfunc_0_off_8 (80 bytes)
// Stores (self - 8) into a1->+0x30, then for each element of the vector at
// self+0xC (begin) / self+0x10 (end) stores its index into element->+0x34.
// Two stack args (ret 0x8): a1 is used, a2 is unused.
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00516E10(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        lea eax, [esi - 0x8]
        push edi
        mov dword ptr [ecx + 0x30], eax
        xor edi, edi
    loop_top:
        mov ecx, dword ptr [esi + 0xc]
        test ecx, ecx
        je loop_end
        mov eax, dword ptr [esi + 0x10]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jae loop_end
        test ecx, ecx
        je call_inval
        mov eax, dword ptr [esi + 0x10]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb body
    call_inval:
        call ebx
    body:
        mov edx, dword ptr [esi + 0xc]
        mov eax, dword ptr [edx + 4 * edi]
        mov dword ptr [eax + 0x34], edi
        add edi, 1
        jmp loop_top
    loop_end:
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x005171B0] EvolvedIndividual::vfunc_13_off_C (114 bytes)
// Returns its hidden-buffer argument (ret 0x8). If the string argument equals the
// global literal, fills the buffer with (cached static pointer, self + 4); otherwise
// default-constructs it via sub_0046F7D0.
extern "C" int mem_00A9EFC0;
extern "C" int mem_00AEC0D0;
extern "C" int mem_00AEC0D4;
extern "C" int mem_00924FC0;
extern "C" void ext_005170A0();
extern "C" void ext_0046F7D0();
extern "C" void ext_0055DA20();

extern "C" __declspec(naked) void* __fastcall fn_005171B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, 1
        test byte ptr [mem_00AEC0D4], al
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0
        jne skip_init
        or dword ptr [mem_00AEC0D4], eax
        call ext_005170A0
        mov dword ptr [mem_00AEC0D0], eax
    skip_init:
        mov eax, dword ptr [mem_00A9EFC0]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je not_equal
        mov edx, dword ptr [mem_00AEC0D0]
        add esi, 0x4
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edx
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    not_equal:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005173B0] EvolvedIndividual::vfunc_1_off_C (134 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void* __fastcall fn_005173B0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x8]
        cmp esi, dword ptr [ecx + 0xc]
        push edi
        lea edi, [ecx + 0x4]
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_head:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        cmp edi, edi
        je L_chk3
        call dword ptr [mem_00925134]
L_chk3:
        cmp esi, ebx
        je L_notfound
        cmp esi, dword ptr [edi + 0x8]
        mov ebx, dword ptr [mem_00925134]
        jb L_chk4
        call ebx
L_chk4:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push ebp
        call edx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        jne L_found
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk5
        call ebx
L_chk5:
        add esi, 0x4
        jmp L_head
L_found:
        cmp esi, dword ptr [edi + 0x8]
        jb L_chk6
        call ebx
L_chk6:
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
L_notfound:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
    }
}

// [0x00507ED0] EvolvedIndividual::vfunc_1 (50 bytes)
extern "C" void ext_0067EE80();
extern "C" void ext_00517C80();
extern "C" int mem_00A9F64C;
extern "C" int mem_00A9F48C;

extern "C" __declspec(naked) void __fastcall fn_00507ED0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F64C]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov ecx, dword ptr [mem_00A9F48C]
        push eax
        push ecx
        push edi
        call ext_0067EE80
        fstp qword ptr [esi + 0x20]
        add esp, 0xc
        push edi
        mov ecx, esi
        mov byte ptr [esi + 0x28], 0
        call ext_00517C80
        pop edi
        pop esi
        ret 4
    }
}

// [0x00507F10] EvolvedIndividual::vfunc_3 (60 bytes)
extern "C" void ext_0067EF60();
extern "C" void ext_00517140();
extern "C" int mem_00A9F64C;
extern "C" int mem_00A9F48C;

extern "C" __declspec(naked) void __fastcall fn_00507F10(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F64C]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        mov ecx, dword ptr [mem_00A9F48C]
        fld qword ptr [esi + 0x20]
        push eax
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        push ecx
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        add esp, 0x10
        push edi
        mov ecx, esi
        call ext_00517140
        pop edi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x0067CF70] EvolvedIndividual::vfunc_9 (115 bytes)
extern "C" void ext_00663470();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0067CF70(void* self) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x10]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x30], 0
        call edx
        mov ecx, dword ptr [esp + 0x30]
        lea eax, [esp + 0x4]
        push eax
        push ecx
        call ext_00663470
        add esp, 8
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 8
    }
}

// [0x00517D00] EvolvedIndividual::vfunc_6_off_C (175 bytes)
// Function-local static guard (bit 0 of mem_00AEC0DC) with a one-time init call.
// Then walks the vector at self+8 (first) / self+0xC (last): for each element,
// calls its vfunc 9 and compares against CalibrationManager::vfunc_9 via a
// cdecl imported comparator; on a match, calls sub_0040ECB0 with the element
// result, using a1 as this. One stack arg (ret 0x4) = a1.
extern "C" int mem_00AEC0DC;
extern "C" int mem_00AEC0D8;
extern "C" int mem_00925134;
extern "C" int mem_00924FB0;
extern "C" void ext_0040ECB0();
extern "C" void ext_0065F8E0();
extern "C" void ext_006A6C87();

extern "C" __declspec(naked) void __fastcall fn_00517D00(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov eax, 1
        test byte ptr [mem_00AEC0DC], al
        push edi
        mov esi, ecx
        jne init_done
        or dword ptr [mem_00AEC0DC], eax
        push 0x919e00
        mov dword ptr [mem_00AEC0D8], 0x93bf24
        call ext_006A6C87
        add esp, 0x4
    init_done:
        mov edi, dword ptr [esi + 0x8]
        cmp edi, dword ptr [esi + 0xc]
        lea ebx, [esi + 0x4]
        jbe check1
        call dword ptr [mem_00925134]
    check1:
        mov ebp, dword ptr [mem_00924FB0]
    loop_top:
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        jbe check2
        call dword ptr [mem_00925134]
    check2:
        cmp ebx, ebx
        je check3
        call dword ptr [mem_00925134]
    check3:
        cmp edi, esi
        je loop_end
        cmp edi, dword ptr [ebx + 0x8]
        jb body
        call dword ptr [mem_00925134]
    body:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        call edx
        mov ecx, 0xaec0d8
        mov esi, eax
        call ext_0065F8E0
        push eax
        push esi
        call ebp
        add esp, 0x8
        test al, al
        je next
        mov ecx, dword ptr [esp + 0x14]
        push esi
        call ext_0040ECB0
    next:
        cmp edi, dword ptr [ebx + 0x8]
        jb advance
        call dword ptr [mem_00925134]
    advance:
        add edi, 0x4
        jmp loop_top
    loop_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}
