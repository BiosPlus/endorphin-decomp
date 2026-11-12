// Decompiled translation unit: src/Primitives/Cuboid.cpp

extern "C" void ext_0053A610();

// [0x0053D2B0] Primitives::Cuboid::vfunc_25 (42 bytes)
extern "C" void __fastcall fn_0053D2B0(unsigned char* self, int edx_unused, int a1, int a2, int a3) {
    typedef void (__fastcall *PlaneFn)(void*, int, int, int, int);
    ((PlaneFn)ext_0053A610)(self, a1, a1, a2, a3);
    unsigned int flags = *(unsigned int*)(self + 0x1c);
    if (!(flags & 0x40)) {
        flags ^= 0x40;
        *(unsigned int*)(self + 0x1c) = flags;
    }
}

// [0x0053B4F0] Primitives::Cuboid::vfunc_28 (150 bytes)
extern "C" void ext_0053B4B0();
extern "C" int mem_00925490;
extern "C" int mem_009254D4;
extern "C" int mem_00925498;
extern "C" int mem_0092549C;
extern "C" int mem_00925488;

extern "C" __declspec(naked) void __fastcall fn_0053B4F0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        cmp dword ptr [ecx + 0x20], 0
        mov dword ptr [esp + 0x4], ecx
        _emit 0x0F
        _emit 0x84
        _emit 0x7F
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push ebx
        push ebp
        push esi
        push edi
        call ext_0053B4B0
        push 7
        call dword ptr [mem_00925490]
        mov ebx, dword ptr [mem_009254D4]
        mov ebp, dword ptr [mem_00925498]
        mov edi, 0x955630
        mov dword ptr [esp + 0x10], 0x9555C8
        jmp L_loop_outer
        _emit 0x8D
        _emit 0x49
        _emit 0x00
L_loop_outer:
        mov eax, dword ptr [esp + 0x10]
        push eax
        call dword ptr [mem_0092549C]
        mov esi, 0x955610
L_loop_inner:
        push esi
        call ebx
        movsx eax, byte ptr [edi]
        mov edx, dword ptr [esp + 0x14]
        add eax, 5
        lea ecx, [eax + 2*eax]
        lea eax, [edx + 4*ecx]
        push eax
        call ebp
        add esi, 8
        add edi, 1
        cmp esi, 0x955630
        jl L_loop_inner
        mov eax, dword ptr [esp + 0x10]
        add eax, 0xC
        cmp eax, 0x955610
        mov dword ptr [esp + 0x10], eax
        jl L_loop_outer
        call dword ptr [mem_00925488]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    }
}
