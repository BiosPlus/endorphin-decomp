// Decompiled translation unit: src/Primitives/SwingLimit.cpp

extern "C" void ext_0053A610();
extern "C" double mem_00955C80;

// [0x0053DF00] Primitives::SwingLimit::vfunc_25 (81 bytes)
extern "C" void __fastcall fn_0053DF00(void* self, int edx_unused, int a1, void* a2, int a3) {
    ((void (__thiscall*)(void*, int, void*, int))ext_0053A610)(self, a1, a2, a3);
    unsigned char* s = (unsigned char*)self;
    unsigned char* o = (unsigned char*)a2;
    unsigned int f = *(unsigned int*)(s + 0x1c);
    if (f & 0x40) {
        f ^= 0x40;
        *(unsigned int*)(s + 0x1c) = f;
    }
    f = *(unsigned int*)(s + 0x1c);
    if (!(f & 0x4)) {
        f ^= 0x4;
        *(unsigned int*)(s + 0x1c) = f;
    }
    *(int*)(s + 0x3c) = *(int*)(o + 0x94);
    *(float*)(s + 0x40) = (float)(*(float*)(o + 0xb8) * mem_00955C80);
}

// [0x0053E650] Primitives::SwingLimit::vfunc_28 (3511 bytes)
extern "C" void ext_0053B470();
extern "C" void ext_0053E570();
extern "C" void ext_005B11F0();
extern "C" void ext_0067B7F0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6EA4();
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" void ext_006A7250();
extern "C" int mem_009324A4;
extern "C" int mem_00955D38;
extern "C" int mem_00955D34;
extern "C" int mem_00955A40;
extern "C" int mem_00955A48;
extern "C" int mem_00993828;
extern "C" int mem_00955090;
extern "C" int mem_00925134;
extern "C" int mem_0092546C;
extern "C" int mem_00925490;
extern "C" int mem_00925488;
extern "C" int mem_009254DC;
extern "C" int mem_0092549C;
extern "C" int mem_0092548C;
extern "C" int mem_00925498;
extern "C" int mem_0092552C;
extern "C" int mem_00993830;
extern "C" int mem_00955D30;
extern "C" int mem_009453D8;

extern "C" __declspec(naked) void __fastcall fn_0053E650(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x89655b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xcc
        fld dword ptr [mem_009324A4]
        push ebx
        push ebp
        push esi
        push edi
        push ecx
        mov edi, ecx
        fstp dword ptr [esp]
        mov ecx, dword ptr [edi + 0x20]
        lea eax, [esp + 0xac]
        push eax
        mov dword ptr [esp + 0x24], edi
        call ext_005B11F0
        mov ecx, eax
        call ext_0053B470
        fld dword ptr [esp + 0xac]
        fld qword ptr [mem_00955D38]
        fcom st(1)
        fnstsw ax
        fld dword ptr [mem_00955D34]
        test ah, 0x41
        fld dword ptr [mem_00955A40]
        fld qword ptr [mem_00955A48]
        jne L53E6D1
        fstp st(4)
        fxch st(1)
        fst dword ptr [esp + 0xac]
        jmp L53E6E5
    L53E6D1:
        fcom st(4)
        fnstsw ax
        fstp st(4)
        test ah, 0x5
        jp L53E6E3
        fst dword ptr [esp + 0xac]
    L53E6E3:
        fxch st(1)
    L53E6E5:
        fld dword ptr [esp + 0xb0]
        fcom st(3)
        fnstsw ax
        fstp st(3)
        test ah, 0x5
        jp L53E706
        fstp st(2)
        fstp st(2)
        fstp st(1)
        fstp dword ptr [esp + 0xb0]
        jmp L53E720
    L53E706:
        fstp st(0)
        fxch st(1)
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L53E71E
        fstp dword ptr [esp + 0xb0]
        jmp L53E720
    L53E71E:
        fstp st(0)
    L53E720:
        fld dword ptr [esp + 0xac]
        fmul qword ptr [mem_00993828]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0xb0]
        fmul qword ptr [mem_00993828]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        xor esi, esi
        fstp dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x24], esi
        fld dword ptr [esp + 0x30]
        mov dword ptr [esp + 0x28], esi
        fst qword ptr [esp + 0xb8]
        mov dword ptr [esp + 0x2c], esi
        fmul st(0), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x18]
        fst qword ptr [esp + 0xc8]
        fmul st(0), st
        fstp dword ptr [esp + 0x30]
        mov ecx, dword ptr [edi + 0x3c]
        fldz
        sub esp, 0xc
        mov eax, esp
        fst dword ptr [eax + 0x8]
        push ecx
        fst dword ptr [eax + 0x4]
        lea ecx, [esp + 0x30]
        fstp dword ptr [eax]
        mov dword ptr [esp + 0xf4], esi
        call ext_0053E570
        mov eax, dword ptr [edi + 0x3c]
        cmp eax, esi
        mov dword ptr [esp + 0x60], esi
        mov dword ptr [esp + 0x18], eax
        jle L53E9F8
        fld dword ptr [esp + 0x30]
        mov ebp, dword ptr [esp + 0x1c]
        fst qword ptr [esp + 0x78]
        xor ebx, ebx
        fld dword ptr [esp + 0x14]
        fst qword ptr [esp + 0x98]
        fmulp st(1), st
        fstp qword ptr [esp + 0x88]
    L53E7F4:
        fild dword ptr [esp + 0x60]
        fmul qword ptr [mem_00955090]
        fidiv dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fst qword ptr [esp + 0x30]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fmul qword ptr [esp + 0xc8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x18]
        fld qword ptr [esp + 0x30]
        call ext_006A6EAA
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fmul qword ptr [esp + 0xb8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x14]
        call ext_006A6EA4
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fst qword ptr [esp + 0x30]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x18]
        fld qword ptr [esp + 0x30]
        call ext_006A6EAA
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fst qword ptr [esp + 0x30]
        fld dword ptr [esp + 0x18]
        fst qword ptr [esp + 0x68]
        fmul st(0), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fmul qword ptr [esp + 0x98]
        fld st(1)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fmul qword ptr [esp + 0x78]
        faddp st(1), st
        fdivr qword ptr [esp + 0x88]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fst qword ptr [esp + 0x60]
        call ext_006A7250
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x18]
        fld1
        fsub qword ptr [esp + 0x60]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        call ext_006A7250
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x24]
        test edi, edi
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x18]
        fld qword ptr [esp + 0x30]
        fmul st, st(1)
        fstp dword ptr [esp + 0x18]
        fmul qword ptr [esp + 0x68]
        fstp dword ptr [esp + 0x30]
        je L53E941
        mov ecx, dword ptr [esp + 0x28]
        sub ecx, edi
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp esi, eax
        jb L53E94B
    L53E941:
        call dword ptr [mem_00925134]
        mov edi, dword ptr [esp + 0x24]
    L53E94B:
        fld qword ptr [esp + 0x60]
        fadd st(0), st
        fld1
        fsubrp st(1), st
        fmul dword ptr [ebp + 0x40]
        fstp dword ptr [ebx + edi]
        mov edi, dword ptr [esp + 0x24]
        test edi, edi
        je L53E97D
        mov ecx, dword ptr [esp + 0x28]
        sub ecx, edi
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp esi, eax
        jb L53E987
    L53E97D:
        call dword ptr [mem_00925134]
        mov edi, dword ptr [esp + 0x24]
    L53E987:
        fld dword ptr [esp + 0x14]
        fst qword ptr [esp + 0x68]
        fld dword ptr [ebp + 0x40]
        fadd st(0), st
        fmul st, st(1)
        fmul dword ptr [esp + 0x18]
        fstp dword ptr [ebx + edi + 0x4]
        mov edi, dword ptr [esp + 0x24]
        test edi, edi
        je L53E9C0
        mov ecx, dword ptr [esp + 0x28]
        sub ecx, edi
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp esi, eax
        jb L53E9D0
    L53E9C0:
        fstp st(0)
        call dword ptr [mem_00925134]
        mov edi, dword ptr [esp + 0x24]
        fld qword ptr [esp + 0x68]
    L53E9D0:
        fld dword ptr [ebp + 0x40]
        add esi, 0x1
        fadd st(0), st
        add ebx, 0xc
        mov dword ptr [esp + 0x60], esi
        fmulp st(1), st
        fmul dword ptr [esp + 0x30]
        fstp dword ptr [ebx + edi - 0x4]
        mov eax, dword ptr [ebp + 0x3c]
        cmp esi, eax
        mov dword ptr [esp + 0x18], eax
        jl L53E7F4
    L53E9F8:
        fldz
        push 0x8
        fst dword ptr [esp + 0x48]
        fst dword ptr [esp + 0x44]
        fst dword ptr [esp + 0x40]
        fst dword ptr [esp + 0x54]
        fst dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x4c]
        fst dword ptr [esp + 0x60]
        fst dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x58]
        call dword ptr [mem_0092546C]
        push 0x4
        call dword ptr [mem_00925490]
        mov ecx, dword ptr [esp + 0x1c]
        xor ebp, ebp
        cmp dword ptr [ecx + 0x3c], ebp
        jle L53EEDA
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
    L53EA40:
        mov ecx, dword ptr [esp + 0x24]
        test ecx, ecx
        je L53EA64
        mov esi, dword ptr [esp + 0x28]
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ebp, eax
        jb L53EA72
    L53EA64:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53EA72:
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [ebp + 2*ebp]
        add eax, eax
        add eax, eax
        mov dword ptr [esp + 0x18], eax
        lea ebx, [eax + ecx]
        lea eax, [ebp + 0x1]
        mov dword ptr [esp + 0x30], eax
        cdq
        idiv dword ptr [edi + 0x3c]
        test ecx, ecx
        mov edi, edx
        je L53EAAE
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L53EABC
    L53EAAE:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53EABC:
        test ebp, ebp
        fld dword ptr [ebx + 0x8]
        lea edx, [edi + 2*edi]
        fld dword ptr [ecx + 4*edx + 0x4]
        lea eax, [ecx + 4*edx]
        fld dword ptr [ebx + 0x4]
        fld dword ptr [eax + 0x8]
        fld st(2)
        fmul st, st(4)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp + 0x68]
        fld dword ptr [ebx]
        fld dword ptr [eax]
        fld st(1)
        fmulp st(3), st
        fld st(0)
        fmulp st(6), st
        fxch st(2)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x6c]
        fmulp st(1), st
        fxch st(2)
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [esp + 0x70]
        fld dword ptr [esp + 0x68]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x6c]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x70]
        fstp dword ptr [esp + 0x44]
        jne L53EBEA
        mov eax, dword ptr [esp + 0x1c]
        mov edi, dword ptr [eax + 0x3c]
        sub edi, 0x1
        test ecx, ecx
        je L53EB45
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L53EB53
    L53EB45:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53EB53:
        test ecx, ecx
        lea edx, [edi + 2*edi]
        lea edi, [ecx + 4*edx]
        je L53EB76
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        ja L53EB84
    L53EB76:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53EB84:
        fld dword ptr [edi + 0x8]
        fld dword ptr [ecx + 0x10]
        fld dword ptr [edi + 0x4]
        fld dword ptr [ecx + 0x14]
        fld st(3)
        fmul st, st(3)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp + 0x88]
        fld dword ptr [edi]
        fld dword ptr [ecx + 0xc]
        fld st(1)
        fmulp st(3), st
        fmul st(5), st
        fxch st(2)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x8c]
        fmulp st(1), st
        fxch st(2)
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [esp + 0x90]
        fld dword ptr [esp + 0x88]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x8c]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x90]
        jmp L53ECBC
    L53EBEA:
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [ebp - 0x1]
        cdq
        idiv dword ptr [edi + 0x3c]
        test ecx, ecx
        mov edi, edx
        je L53EC13
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L53EC21
    L53EC13:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53EC21:
        lea eax, [edi + 2*edi]
        mov edi, dword ptr [esp + 0x1c]
        lea ebx, [ecx + 4*eax]
        mov eax, dword ptr [esp + 0x30]
        cdq
        idiv dword ptr [edi + 0x3c]
        test ecx, ecx
        mov edi, edx
        je L53EC51
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L53EC5F
    L53EC51:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53EC5F:
        fld dword ptr [ebx + 0x8]
        lea edx, [edi + 2*edi]
        fld dword ptr [ecx + 4*edx + 0x4]
        lea eax, [ecx + 4*edx]
        fld dword ptr [ebx + 0x4]
        fld dword ptr [eax + 0x8]
        fld st(2)
        fmul st, st(4)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp + 0x78]
        fld dword ptr [ebx]
        fld dword ptr [eax]
        fld st(1)
        fmulp st(3), st
        fld st(0)
        fmulp st(6), st
        fxch st(2)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x7c]
        fmulp st(1), st
        fxch st(2)
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [esp + 0x80]
        fld dword ptr [esp + 0x78]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x7c]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x80]
    L53ECBC:
        test ecx, ecx
        fstp dword ptr [esp + 0x50]
        je L53ECDC
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ebp, eax
        jb L53ECEA
    L53ECDC:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53ECEA:
        mov eax, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x1c]
        lea ebx, [eax + ecx]
        lea eax, [ebp + 0x2]
        cdq
        idiv dword ptr [edi + 0x3c]
        test ecx, ecx
        mov edi, edx
        je L53ED18
        sub esi, ecx
        mov eax, 0x2aaaaaab
        imul esi
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L53ED22
    L53ED18:
        call dword ptr [mem_00925134]
        mov ecx, dword ptr [esp + 0x24]
    L53ED22:
        fld dword ptr [ebx + 0x8]
        lea edx, [edi + 2*edi]
        fld dword ptr [ecx + 4*edx + 0x4]
        lea eax, [ecx + 4*edx]
        fld dword ptr [ebx + 0x4]
        lea ecx, [esp + 0x3c]
        fld dword ptr [eax + 0x8]
        fld st(2)
        fmul st, st(4)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp + 0x98]
        fld dword ptr [ebx]
        fld dword ptr [eax]
        fld st(1)
        fmulp st(3), st
        fld st(0)
        fmulp st(6), st
        fxch st(2)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x9c]
        fmulp st(1), st
        fxch st(2)
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [esp + 0xa0]
        fld dword ptr [esp + 0x98]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x9c]
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0xa0]
        fstp dword ptr [esp + 0x5c]
        call ext_0067B7F0
        lea ecx, [esp + 0x48]
        call ext_0067B7F0
        lea ecx, [esp + 0x54]
        call ext_0067B7F0
        fld dword ptr [esp + 0x3c]
        fld qword ptr [mem_00993830]
        mov edi, dword ptr [mem_009254DC]
        fmul st(1), st
        push 0x0
        fxch st(1)
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x44]
        fmul st, st(1)
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x48]
        fmul st, st(1)
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x4c]
        fmul st, st(1)
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x50]
        fmul st, st(1)
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x54]
        fmul st, st(1)
        fstp dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x58]
        fmul st, st(1)
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x5c]
        fmul st, st(1)
        fstp dword ptr [esp + 0x5c]
        fmul dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0x60]
        call edi
        mov ebx, dword ptr [mem_0092549C]
        lea eax, [esp + 0x3c]
        push eax
        call ebx
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_0092548C]
        push 0x1
        call edi
        lea ecx, [esp + 0x48]
        push ecx
        call ebx
        mov ecx, dword ptr [esp + 0x24]
        test ecx, ecx
        je L53EE64
        mov edx, dword ptr [esp + 0x28]
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ebp, eax
        jb L53EE6E
    L53EE64:
        call dword ptr [mem_00925134]
        mov ecx, dword ptr [esp + 0x24]
    L53EE6E:
        mov edx, dword ptr [esp + 0x18]
        mov esi, dword ptr [mem_00925498]
        add edx, ecx
        push edx
        call esi
        push 0x0
        call edi
        lea eax, [esp + 0x54]
        push eax
        call ebx
        mov ebp, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, ebp
        cdq
        idiv dword ptr [ecx + 0x3c]
        mov ebx, dword ptr [esp + 0x24]
        test ebx, ebx
        mov edi, edx
        je L53EEBA
        mov ecx, dword ptr [esp + 0x28]
        sub ecx, ebx
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L53EEC4
    L53EEBA:
        call dword ptr [mem_00925134]
        mov ebx, dword ptr [esp + 0x24]
    L53EEC4:
        lea edx, [edi + 2*edi]
        lea eax, [ebx + 4*edx]
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x1c]
        cmp ebp, dword ptr [ecx + 0x3c]
        jl L53EA40
    L53EEDA:
        call dword ptr [mem_00925488]
        push 0x4
        call dword ptr [mem_00925490]
        mov edx, dword ptr [esp + 0x1c]
        cmp dword ptr [edx + 0x3c], 0x0
        mov dword ptr [esp + 0x60], 0x0
        jle L53F3CA
        mov edi, edi
    L53EF00:
        mov ecx, dword ptr [esp + 0x24]
        test ecx, ecx
        mov ebp, dword ptr [esp + 0x60]
        je L53EF28
        mov esi, dword ptr [esp + 0x28]
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ebp, eax
        jb L53EF36
    L53EF28:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53EF36:
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [ebp + 0x1]
        mov dword ptr [esp + 0x30], eax
        cdq
        idiv dword ptr [edi + 0x3c]
        lea ebx, [ebp + 2*ebp]
        add ebx, ebx
        add ebx, ebx
        mov dword ptr [esp + 0x18], ebx
        add ebx, ecx
        test ecx, ecx
        mov edi, edx
        je L53EF71
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L53EF7F
    L53EF71:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53EF7F:
        test ebp, ebp
        fld dword ptr [ebx + 0x8]
        lea eax, [edi + 2*edi]
        fld dword ptr [ecx + 4*eax + 0x4]
        lea eax, [ecx + 4*eax]
        fld dword ptr [ebx + 0x4]
        fld dword ptr [eax + 0x8]
        fld st(2)
        fmul st, st(4)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp + 0x68]
        fld dword ptr [ebx]
        fld dword ptr [eax]
        fld st(1)
        fmulp st(3), st
        fld st(0)
        fmulp st(6), st
        fxch st(2)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x6c]
        fmulp st(1), st
        fxch st(2)
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [esp + 0x70]
        fld dword ptr [esp + 0x68]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x6c]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x70]
        fstp dword ptr [esp + 0x44]
        jne L53F0AF
        mov edx, dword ptr [esp + 0x1c]
        mov edi, dword ptr [edx + 0x3c]
        sub edi, 0x1
        test ecx, ecx
        je L53F008
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L53F016
    L53F008:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53F016:
        test ecx, ecx
        lea eax, [edi + 2*edi]
        lea edi, [ecx + 4*eax]
        je L53F039
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        ja L53F047
    L53F039:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53F047:
        fld dword ptr [edi + 0x8]
        fld dword ptr [ecx + 0x10]
        fld dword ptr [edi + 0x4]
        fld dword ptr [ecx + 0x14]
        fld st(2)
        fmul st, st(4)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp + 0x88]
        fld dword ptr [edi]
        fld dword ptr [ecx + 0xc]
        fld st(1)
        fmulp st(3), st
        fld st(0)
        fmulp st(6), st
        fxch st(2)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x8c]
        fmulp st(1), st
        fxch st(2)
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [esp + 0x90]
        fld dword ptr [esp + 0x88]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x8c]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x90]
        jmp L53F181
    L53F0AF:
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [ebp - 0x1]
        cdq
        idiv dword ptr [edi + 0x3c]
        test ecx, ecx
        mov edi, edx
        je L53F0D8
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L53F0E6
    L53F0D8:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53F0E6:
        mov eax, dword ptr [esp + 0x30]
        lea edx, [edi + 2*edi]
        mov edi, dword ptr [esp + 0x1c]
        lea ebx, [ecx + 4*edx]
        cdq
        idiv dword ptr [edi + 0x3c]
        test ecx, ecx
        mov edi, edx
        je L53F116
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L53F124
    L53F116:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53F124:
        fld dword ptr [ebx + 0x8]
        lea eax, [edi + 2*edi]
        fld dword ptr [ecx + 4*eax + 0x4]
        lea eax, [ecx + 4*eax]
        fld dword ptr [ebx + 0x4]
        fld dword ptr [eax + 0x8]
        fld st(2)
        fmul st, st(4)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp + 0x78]
        fld dword ptr [ebx]
        fld dword ptr [eax]
        fld st(1)
        fmulp st(3), st
        fld st(0)
        fmulp st(6), st
        fxch st(2)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x7c]
        fmulp st(1), st
        fxch st(2)
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [esp + 0x80]
        fld dword ptr [esp + 0x78]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x7c]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x80]
    L53F181:
        test ecx, ecx
        fstp dword ptr [esp + 0x50]
        je L53F1A1
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ebp, eax
        jb L53F1AF
    L53F1A1:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
    L53F1AF:
        mov edx, dword ptr [esp + 0x18]
        mov ebx, dword ptr [esp + 0x1c]
        lea edi, [edx + ecx]
        lea eax, [ebp + 0x2]
        cdq
        idiv dword ptr [ebx + 0x3c]
        test ecx, ecx
        mov ebx, edx
        je L53F1DD
        sub esi, ecx
        mov eax, 0x2aaaaaab
        imul esi
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ebx, eax
        jb L53F1E7
    L53F1DD:
        call dword ptr [mem_00925134]
        mov ecx, dword ptr [esp + 0x24]
    L53F1E7:
        fld dword ptr [edi + 0x8]
        lea eax, [ebx + 2*ebx]
        fld dword ptr [ecx + 4*eax + 0x4]
        lea eax, [ecx + 4*eax]
        fld dword ptr [edi + 0x4]
        lea ecx, [esp + 0x3c]
        fld dword ptr [eax + 0x8]
        fld st(2)
        fmul st, st(4)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp + 0x98]
        fld dword ptr [edi]
        fld dword ptr [eax]
        fld st(1)
        fmulp st(3), st
        fld st(0)
        fmulp st(6), st
        fxch st(2)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x9c]
        fmulp st(1), st
        fxch st(2)
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [esp + 0xa0]
        fld dword ptr [esp + 0x98]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x9c]
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0xa0]
        fstp dword ptr [esp + 0x5c]
        call ext_0067B7F0
        lea ecx, [esp + 0x48]
        call ext_0067B7F0
        lea ecx, [esp + 0x54]
        call ext_0067B7F0
        mov edi, dword ptr [mem_009254DC]
        push 0x0
        call edi
        mov ebx, dword ptr [mem_0092549C]
        lea ecx, [esp + 0x3c]
        push ecx
        call ebx
        fld dword ptr [mem_00955D30]
        mov ebp, dword ptr [mem_00925498]
        fstp dword ptr [esp + 0xa8]
        fldz
        lea edx, [esp + 0xa8]
        fst dword ptr [esp + 0xac]
        push edx
        fstp dword ptr [esp + 0xb4]
        call ebp
        push 0x1
        call edi
        lea eax, [esp + 0x54]
        push eax
        call ebx
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x1c]
        cdq
        idiv dword ptr [ecx + 0x3c]
        mov ecx, dword ptr [esp + 0x24]
        test ecx, ecx
        mov esi, edx
        je L53F2EE
        mov edx, dword ptr [esp + 0x28]
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp esi, eax
        jb L53F2F8
    L53F2EE:
        call dword ptr [mem_00925134]
        mov ecx, dword ptr [esp + 0x24]
    L53F2F8:
        lea edx, [esi + 2*esi]
        fld dword ptr [ecx + 4*edx]
        lea eax, [ecx + 4*edx]
        fstp dword ptr [esp + 0xb8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0xbc]
        fld dword ptr [eax + 0x8]
        lea eax, [esp + 0xb8]
        fstp dword ptr [esp + 0xc0]
        push eax
        fld dword ptr [esp + 0xbc]
        fsub qword ptr [mem_009453D8]
        fstp dword ptr [esp + 0xbc]
        call ebp
        push 0x0
        call edi
        lea ecx, [esp + 0x48]
        push ecx
        call ebx
        mov ecx, dword ptr [esp + 0x24]
        test ecx, ecx
        je L53F369
        mov edx, dword ptr [esp + 0x28]
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp dword ptr [esp + 0x60], eax
        jb L53F373
    L53F369:
        call dword ptr [mem_00925134]
        mov ecx, dword ptr [esp + 0x24]
    L53F373:
        mov eax, dword ptr [esp + 0x18]
        fld dword ptr [eax + ecx]
        lea edx, [esp + 0xc8]
        fstp dword ptr [esp + 0xc8]
        push edx
        fld dword ptr [eax + ecx + 0x4]
        fstp dword ptr [esp + 0xd0]
        fld dword ptr [eax + ecx + 0x8]
        fstp dword ptr [esp + 0xd4]
        fld dword ptr [esp + 0xcc]
        fsub qword ptr [mem_009453D8]
        fstp dword ptr [esp + 0xcc]
        call ebp
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x1c]
        cmp eax, dword ptr [ecx + 0x3c]
        mov dword ptr [esp + 0x60], eax
        jl L53EF00
    L53F3CA:
        call dword ptr [mem_00925488]
        push 0x1
        call dword ptr [mem_009254DC]
        call dword ptr [mem_0092552C]
        mov eax, dword ptr [esp + 0x24]
        test eax, eax
        je L53F3EF
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L53F3EF:
        mov ecx, dword ptr [esp + 0xdc]
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}
