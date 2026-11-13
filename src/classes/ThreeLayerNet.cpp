// Decompiled translation unit: src/classes/ThreeLayerNet.cpp

// [0x00522160] ThreeLayerNet::vfunc_25 (34 bytes)
// Returns a std::string by value (hidden return buffer is the first stack arg, ret 0xc).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_00522160(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x952958
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005227C0] ThreeLayerNet::vfunc_13 (118 bytes)
extern "C" void ext_00522580();
extern "C" void ext_00524CE0();
extern "C" void ext_0055DA20();
extern "C" int mem_00924FC0;
extern "C" int mem_00AED2A0;
extern "C" int mem_00AED29C;
extern "C" __declspec(naked) void __fastcall fn_005227C0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push 0x952b4c
        push esi
        mov edi, ecx
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_slow
        mov eax, 0x1
        test byte ptr [mem_00AED2A0], al
        jne L_cached
        or dword ptr [mem_00AED2A0], eax
        call ext_00522580
        mov dword ptr [mem_00AED29C], eax
    L_cached:
        mov eax, dword ptr [mem_00AED29C]
        mov esi, dword ptr [esp + 0x10]
        add edi, 0xdc
        push edi
        push eax
        mov ecx, esi
        call ext_0055DA20
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_slow:
        push esi
        mov esi, dword ptr [esp + 0x14]
        push esi
        mov ecx, edi
        call ext_00524CE0
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_005049B0();
extern "C" void ext_006A725C();
extern "C" int mem_00925134;

// [0x005228A0] ThreeLayerNet::vfunc_29 (569 bytes)
extern "C" __declspec(naked) void __fastcall fn_005228A0(void* self, int edx_unused, void* input, void* output) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0xc
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x24]
        test eax, eax
        push edi
        lea edi, [esi + 0x20]
        je L_end
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        je L_end
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je L_inv1
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne L_ok1
    L_inv1:
        call dword ptr [mem_00925134]
    L_ok1:
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        add eax, 0x4
        test ecx, ecx
        je L_end
        mov edx, dword ptr [eax + 0x8]
        sub edx, ecx
        sar edx, 0x3
        je L_end
        push 0x0
        mov ecx, edi
        call ext_005049B0
        mov edi, eax
        mov ebx, dword ptr [edi + 0x8]
        add edi, 0x4
        cmp ebx, dword ptr [edi + 0x8]
        jbe L_ok2_jb
        call dword ptr [mem_00925134]
        cmp ebx, dword ptr [edi + 0x8]
    L_ok2_jb:
        jb L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        cmp dword ptr [esi + 0xc4], 0x0
        mov edi, ebx
        mov dword ptr [esp + 0xc], 0x0
        jle L_out_check
    L_hid_outer:
        fld qword ptr [edi + 0x8]
        add edi, 0x8
        xor ebx, ebx
        fst qword ptr [esp + 0x10]
        add edi, 0x8
        cmp dword ptr [esi + 0xc0], ebx
        jle L_hid_act
    L_hid_inner:
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ecx + 0x4]
        test edx, edx
        je L_inv4
        mov eax, dword ptr [ecx + 0x8]
        sub eax, edx
        sar eax, 0x2
        cmp ebx, eax
        jb L_ok4
    L_inv4:
        fstp st(0)
        call dword ptr [mem_00925134]
        fld qword ptr [esp + 0x10]
        mov ecx, dword ptr [ebp + 0x8]
    L_ok4:
        mov eax, dword ptr [ecx + 0x4]
        fld dword ptr [eax + 4*ebx]
        add ebx, 0x1
        fmul qword ptr [edi]
        add edi, 0x8
        cmp ebx, dword ptr [esi + 0xc0]
        faddp st(1), st
        fst qword ptr [esp + 0x10]
        jl L_hid_inner
    L_hid_act:
        fchs
        call ext_006A725C
        fld1
        fadd st(1), st
        mov ecx, dword ptr [esi + 0xd0]
        test ecx, ecx
        mov ebx, dword ptr [esp + 0xc]
        fdivrp st(1), st
        fstp qword ptr [esp + 0x10]
        je L_inv5
        mov eax, dword ptr [esi + 0xd4]
        sub eax, ecx
        sar eax, 0x3
        cmp ebx, eax
        jb L_ok5
    L_inv5:
        call dword ptr [mem_00925134]
    L_ok5:
        mov ecx, dword ptr [esi + 0xd0]
        fld qword ptr [esp + 0x10]
        fstp qword ptr [ecx + 8*ebx]
        add ebx, 0x1
        cmp ebx, dword ptr [esi + 0xc4]
        mov dword ptr [esp + 0xc], ebx
        jl L_hid_outer
    L_out_check:
        cmp dword ptr [esi + 0xc8], 0x0
        mov dword ptr [esp + 0xc], 0x0
        jle L_end
    L_out_outer:
        fld qword ptr [edi + 0x8]
        add edi, 0x8
        xor ebx, ebx
        fst qword ptr [esp + 0x10]
        add edi, 0x8
        cmp dword ptr [esi + 0xc4], ebx
        jle L_out_act
    L_out_inner:
        mov ecx, dword ptr [esi + 0xd0]
        test ecx, ecx
        je L_inv6
        mov eax, dword ptr [esi + 0xd4]
        sub eax, ecx
        sar eax, 0x3
        cmp ebx, eax
        jb L_ok6
    L_inv6:
        fstp st(0)
        call dword ptr [mem_00925134]
        fld qword ptr [esp + 0x10]
    L_ok6:
        mov edx, dword ptr [esi + 0xd0]
        fld qword ptr [edx + 8*ebx]
        add ebx, 0x1
        fmul qword ptr [edi]
        add edi, 0x8
        cmp ebx, dword ptr [esi + 0xc4]
        faddp st(1), st
        fst qword ptr [esp + 0x10]
        jl L_out_inner
    L_out_act:
        fchs
        call ext_006A725C
        fld1
        fadd st(1), st
        mov edx, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [edx + 0x4]
        test ecx, ecx
        mov ebx, dword ptr [esp + 0xc]
        fdivrp st(1), st
        fstp qword ptr [esp + 0x10]
        je L_inv7
        mov eax, dword ptr [edx + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp ebx, eax
        jb L_ok7
    L_inv7:
        call dword ptr [mem_00925134]
        mov edx, dword ptr [ebp + 0xc]
    L_ok7:
        fld qword ptr [esp + 0x10]
        mov eax, dword ptr [edx + 0x4]
        fstp dword ptr [esp + 0xc]
        add ebx, 0x1
        fld dword ptr [esp + 0xc]
        mov dword ptr [esp + 0xc], ebx
        fstp dword ptr [eax + 4*ebx - 0x4]
        cmp ebx, dword ptr [esi + 0xc8]
        jl L_out_outer
    L_end:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}
