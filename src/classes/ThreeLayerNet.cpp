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

// [0x00522AE0] ThreeLayerNet::vfunc_24 (1043 bytes)
extern "C" void ext_005049B0();
extern "C" void ext_0066A820();
extern "C" void ext_0066A980();
extern "C" int mem_00925134;
extern "C" int mem_00924FF0;
extern "C" __declspec(naked) void __fastcall fn_00522AE0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x34
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x24]
        test eax, eax
        push edi
        lea edi, [esi + 0x20]
        je loc_522EEA
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        je loc_522EEA
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je loc_522B37
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne loc_522B3D
    loc_522B37:
        call dword ptr [mem_00925134]
    loc_522B3D:
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        add eax, 0x4
        test ecx, ecx
        je loc_522EEA
        mov edx, dword ptr [eax + 0x8]
        sub edx, ecx
        sar edx, 0x3
        je loc_522EEA
        push 0x0
        mov ecx, edi
        call ext_005049B0
        mov edi, eax
        mov ebx, dword ptr [edi + 0x8]
        add edi, 0x4
        cmp ebx, dword ptr [edi + 0x8]
        jbe loc_522B7B
        call dword ptr [mem_00925134]
        cmp ebx, dword ptr [edi + 0x8]
    loc_522B7B:
        jb loc_522B83
        call dword ptr [mem_00925134]
    loc_522B83:
        mov edi, dword ptr [ebp + 0x8]
        push 0x952bd0
        mov ecx, edi
        call ext_0066A980
        cmp dword ptr [esi + 0xc0], 0x0
        mov dword ptr [esp + 0x20], 0x0
        jle loc_522BC2
    loc_522BA3:
        push 0x92f67c
        mov ecx, edi
        call ext_0066A980
        mov eax, dword ptr [esp + 0x20]
        add eax, 0x1
        cmp eax, dword ptr [esi + 0xc0]
        mov dword ptr [esp + 0x20], eax
        jl loc_522BA3
    loc_522BC2:
        push 0x952bc0
        mov ecx, edi
        call ext_0066A980
        push 0x952bac
        mov ecx, edi
        call ext_0066A980
        mov eax, dword ptr [esi + 0x40]
        cmp eax, dword ptr [esi + 0x44]
        mov dword ptr [esp + 0x2c], eax
        jbe loc_522BF0
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x2c]
    loc_522BF0:
        mov dword ptr [esp + 0x34], eax
    loc_522BF4:
        mov eax, dword ptr [esi + 0x44]
        cmp dword ptr [esi + 0x40], eax
        mov dword ptr [esp + 0x2c], eax
        jbe loc_522C0A
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x2c]
    loc_522C0A:
        mov ecx, dword ptr [esp + 0x34]
        cmp ecx, eax
        je loc_522C57
        cmp ecx, dword ptr [esi + 0x44]
        jb loc_522C1D
        call dword ptr [mem_00925134]
    loc_522C1D:
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        push eax
        push 0x952ba4
        push edi
        call ext_0066A820
        mov ecx, dword ptr [esp + 0x40]
        add esp, 0xc
        cmp ecx, dword ptr [esi + 0x44]
        jb loc_522C50
        call dword ptr [mem_00925134]
    loc_522C50:
        add dword ptr [esp + 0x34], 0x4
        jmp loc_522BF4
    loc_522C57:
        cmp dword ptr [esi + 0xc4], 0x0
        mov dword ptr [esp + 0x20], 0x0
        jle loc_522C8E
    loc_522C68:
        mov edx, dword ptr [esp + 0x20]
        push edx
        push 0x952b9c
        push edi
        call ext_0066A820
        mov eax, dword ptr [esp + 0x2c]
        add eax, 0x1
        add esp, 0xc
        cmp eax, dword ptr [esi + 0xc4]
        mov dword ptr [esp + 0x20], eax
        jl loc_522C68
    loc_522C8E:
        push 0x93f198
        mov ecx, edi
        call ext_0066A980
        cmp dword ptr [esi + 0xc4], 0x0
        mov dword ptr [esp + 0x28], 0x0
        jle loc_522D89
    loc_522CAF:
        fld qword ptr [ebx]
        mov eax, dword ptr [esp + 0x28]
        push eax
        fstp qword ptr [esp + 0x3c]
        fld qword ptr [ebx + 0x8]
        add ebx, 0x8
        push 0x952b94
        fstp qword ptr [esp + 0x28]
        push edi
        add ebx, 0x8
        call ext_0066A820
        fld qword ptr [esp + 0x2c]
        push ecx
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x48]
        fstp qword ptr [esp]
        push 0x952b84
        push edi
        call ext_0066A820
        add esp, 0x18
        cmp dword ptr [esi + 0xc0], 0x0
        mov dword ptr [esp + 0x20], 0x0
        jle loc_522D2D
    loc_522D01:
        fld qword ptr [ebx]
        sub esp, 0x8
        fstp qword ptr [esp]
        push 0x952b7c
        push edi
        call ext_0066A820
        mov eax, dword ptr [esp + 0x30]
        add eax, 0x1
        add esp, 0x10
        add ebx, 0x8
        cmp eax, dword ptr [esi + 0xc0]
        mov dword ptr [esp + 0x20], eax
        jl loc_522D01
    loc_522D2D:
        cmp dword ptr [esi + 0xc4], 0x0
        mov dword ptr [esp + 0x20], 0x0
        jle loc_522D5F
        mov edi, edi
    loc_522D40:
        push 0x92f67c
        mov ecx, edi
        call ext_0066A980
        mov eax, dword ptr [esp + 0x20]
        add eax, 0x1
        cmp eax, dword ptr [esi + 0xc4]
        mov dword ptr [esp + 0x20], eax
        jl loc_522D40
    loc_522D5F:
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        push 0x952b6c
        push edi
        call ext_0066A820
        mov eax, dword ptr [esp + 0x34]
        add eax, 0x1
        add esp, 0xc
        cmp eax, dword ptr [esi + 0xc4]
        mov dword ptr [esp + 0x28], eax
        jl loc_522CAF
    loc_522D89:
        mov eax, dword ptr [esi + 0x54]
        cmp eax, dword ptr [esi + 0x58]
        mov dword ptr [esp + 0x2c], eax
        jbe loc_522D9F
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x2c]
    loc_522D9F:
        cmp dword ptr [esi + 0xc8], 0x0
        mov dword ptr [esp + 0x34], eax
        mov dword ptr [esp + 0x2c], 0x0
        jle loc_522EEA
    loc_522DB8:
        fld qword ptr [ebx]
        mov edx, dword ptr [esp + 0x34]
        add ebx, 0x8
        fstp qword ptr [esp + 0x38]
        fld qword ptr [ebx]
        add ebx, 0x8
        cmp edx, dword ptr [esi + 0x58]
        fstp qword ptr [esp + 0x20]
        jb loc_522DD9
        call dword ptr [mem_00925134]
    loc_522DD9:
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        push eax
        push 0x952b64
        push edi
        call ext_0066A820
        fld qword ptr [esp + 0x2c]
        push ecx
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x48]
        fstp qword ptr [esp]
        push 0x952b84
        push edi
        call ext_0066A820
        add esp, 0x18
        cmp dword ptr [esi + 0xc0], 0x0
        mov dword ptr [esp + 0x20], 0x0
        jle loc_522E4F
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loc_522E30:
        push 0x92f67c
        mov ecx, edi
        call ext_0066A980
        mov eax, dword ptr [esp + 0x20]
        add eax, 0x1
        cmp eax, dword ptr [esi + 0xc0]
        mov dword ptr [esp + 0x20], eax
        jl loc_522E30
    loc_522E4F:
        cmp dword ptr [esi + 0xc4], 0x0
        mov dword ptr [esp + 0x28], 0x0
        jle loc_522E8C
    loc_522E60:
        fld qword ptr [ebx]
        sub esp, 0x8
        fstp qword ptr [esp]
        push 0x952b7c
        push edi
        call ext_0066A820
        mov eax, dword ptr [esp + 0x38]
        add eax, 0x1
        add esp, 0x10
        add ebx, 0x8
        cmp eax, dword ptr [esi + 0xc4]
        mov dword ptr [esp + 0x28], eax
        jl loc_522E60
    loc_522E8C:
        mov ecx, dword ptr [esp + 0x34]
        cmp ecx, dword ptr [esi + 0x58]
        jb loc_522E9B
        call dword ptr [mem_00925134]
    loc_522E9B:
        mov edx, dword ptr [esp + 0x34]
        mov ecx, dword ptr [edx]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        call edx
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        push eax
        push 0x952b54
        push edi
        call ext_0066A820
        mov eax, dword ptr [esp + 0x40]
        add esp, 0xc
        cmp eax, dword ptr [esi + 0x58]
        jb loc_522ECE
        call dword ptr [mem_00925134]
    loc_522ECE:
        mov eax, dword ptr [esp + 0x2c]
        add dword ptr [esp + 0x34], 0x4
        add eax, 0x1
        cmp eax, dword ptr [esi + 0xc8]
        mov dword ptr [esp + 0x2c], eax
        jl loc_522DB8
    loc_522EEA:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x005221D0] ThreeLayerNet::vfunc_22 (66 bytes)
extern "C" void ext_00640390();
extern "C" void ext_00640110();
extern "C" void ext_00640A50();
extern "C" void ext_005246E0();
extern "C" int mem_00A9F32C;
extern "C" int mem_00A9F844;

extern "C" __declspec(naked) void __fastcall fn_005221D0(void* self, int edx_unused, int arg0) {
    __asm {
        mov eax, dword ptr [mem_00A9F32C]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640390
        mov ecx, dword ptr [mem_00A9F844]
        push ecx
        mov ecx, eax
        call ext_00640110
        mov edx, dword ptr [esi + 0xc4]
        push edx
        push eax
        call ext_00640A50
        add esp, 8
        push edi
        mov ecx, esi
        call ext_005246E0
        pop edi
        pop esi
        ret 4
    }
}

// [0x00523580] ThreeLayerNet::vfunc_21 (161 bytes)
extern "C" void ext_00514A70();
extern "C" void ext_00524C10();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F32C;
extern "C" int mem_00A9F844;

extern "C" __declspec(naked) void __fastcall fn_00523580(void* self) {
    __asm {
        sub esp, 0x8
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        mov esi, ecx
        call ext_00524C10
        mov eax, dword ptr [mem_00A9F32C]
        push 0x1
        push 0x0
        push eax
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_005235C5
        cmp eax, 0xb53b30
        je loc_005235C5
        cmp eax, 0xb53ab0
        je loc_005235C5
        cmp eax, 0xb53a70
        je loc_005235C5
        cmp eax, 0xb53af0
        jne loc_005235CA
    loc_005235C5:
        mov eax, 0xb53b30
    loc_005235CA:
        mov ecx, dword ptr [mem_00A9F844]
        push ecx
        mov ecx, eax
        call ext_0063EFE0
        lea edx, [esp + 0x14]
        push edx
        lea edi, [esi + 0xc4]
        push edi
        mov dword ptr [esp + 0x1c], eax
        call ext_0053F5F0
        fldz
        mov edx, dword ptr [edi]
        fstp qword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x10]
        add esp, 0x8
        push eax
        push ecx
        push edx
        lea ecx, [esi + 0xcc]
        call ext_00514A70
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x5c]
        push 0x0
        mov ecx, esi
        call edx
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x005242F0] ThreeLayerNet::vfunc_23 (385 bytes)
extern "C" void ext_004A2500();
extern "C" void ext_00514B20();
extern "C" void ext_00514E00();
extern "C" void ext_00523760();
extern "C" void ext_005241E0();
extern "C" int mem_00925134;
extern "C" int mem_00A9F32C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005242F0(void* self) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push ebx
        push esi
        push edi
        sub esp, 0x68
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x74], esp
        call ext_00514B20
        lea ebx, [esi + 0x20]
        push 0x1
        mov ecx, ebx
        call ext_005241E0
        mov eax, dword ptr [esi + 0x40]
        test eax, eax
        jne L_524332
        xor ecx, ecx
        jmp L_52433a
    L_524332:
        mov ecx, dword ptr [esi + 0x44]
        sub ecx, eax
        sar ecx, 0x2
    L_52433a:
        mov dword ptr [esi + 0xc0], ecx
        mov edx, dword ptr [esi + 0x54]
        test edx, edx
        jne L_52434b
        xor eax, eax
        jmp L_524353
    L_52434b:
        mov eax, dword ptr [esi + 0x58]
        sub eax, edx
        sar eax, 0x2
    L_524353:
        mov edx, dword ptr [esi + 0xc4]
        lea edi, [ecx + 0x2]
        imul edi, edx
        add edx, 0x2
        imul edx, eax
        mov dword ptr [esi + 0xc8], eax
        mov eax, dword ptr [esi + 0xe0]
        add edi, edx
        test eax, eax
        je L_524390
        mov ecx, dword ptr [esi + 0xe4]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_524390:
        cmp eax, edi
        je L_52439c
        push edi
        mov ecx, esi
        call ext_00523760
    L_52439c:
        mov eax, dword ptr [ebx + 0x4]
        test eax, eax
        mov esi, dword ptr [mem_00925134]
        je L_5243c1
        mov ecx, dword ptr [ebx + 0x8]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_5243c3
    L_5243c1:
        call esi
    L_5243c3:
        mov ecx, dword ptr [ebx + 0x4]
        push edi
        add ecx, 0x14
        call ext_004A2500
        mov ecx, dword ptr [mem_00A9F32C]
        push ecx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [ebx + 0x4]
        test eax, eax
        mov dword ptr [esp + 0x34], 0x0
        je L_524407
        mov ecx, dword ptr [ebx + 0x8]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_524409
    L_524407:
        call esi
    L_524409:
        mov eax, dword ptr [ebx + 0x4]
        lea ecx, [esp + 0x10]
        add eax, 0x14
        push ecx
        lea ecx, [eax + 0x8]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [ebx + 0x4]
        test eax, eax
        je L_52444e
        mov ecx, dword ptr [ebx + 0x8]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_524450
    L_52444e:
        call esi
    L_524450:
        mov ecx, dword ptr [esp + 0x3c]
        push ecx
        mov ecx, dword ptr [ebx + 0x4]
        call ext_00514E00
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0x2c
        ret 0x4
    }
}
