// Decompiled translation unit: src/UtilityGraphics/Grid.cpp

extern "C" int mem_00993828;
extern "C" int mem_0092F678;
extern "C" int mem_00925414;
extern "C" int mem_0093F8F0;
extern "C" int mem_009253D0;
extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_00925490;
extern "C" int mem_009254A8;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;
extern "C" int mem_0092552C;
extern "C" int mem_00925404;

// [0x00538FC0] UtilityGraphics::Grid::vfunc_22 (837 bytes)
extern "C" __declspec(naked) void __fastcall fn_00538FC0(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0x28]
        mov eax, dword ptr [esi + 0x20]
        fld qword ptr [mem_00993828]
        mov ecx, eax
        test ecx, ecx
        fmul st(1), st
        fxch st(1)
        mov dword ptr [esp + 0x38], ecx
        push edi
        fstp dword ptr [esp + 0x28]
        fmul dword ptr [esi + 0x2c]
        fstp dword ptr [esp + 0x24]
        fild dword ptr [esp + 0x3c]
        jge SHORT loc_00538FFE
        fadd dword ptr [mem_0092F678]
loc_00538FFE:
        fld1
        mov edx, dword ptr [esi + 0x24]
        fld st(0)
        imul edx, eax
        fdivrp st(2), st
        test edx, edx
        mov dword ptr [esp + 0x3c], edx
        fxch st(1)
        fstp dword ptr [esp + 0x38]
        fild dword ptr [esp + 0x3c]
        jge SHORT loc_00539022
        fadd dword ptr [mem_0092F678]
loc_00539022:
        fdivp st(1), st
        fstp dword ptr [esp + 0x3c]
        call dword ptr [mem_00925414]
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [mem_0093F8F0]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009253D0]
        mov eax, dword ptr [esi + 0x20]
        fild dword ptr [esi + 0x20]
        test eax, eax
        jge SHORT loc_0053905A
        fadd dword ptr [mem_0092F678]
loc_0053905A:
        fmul qword ptr [mem_00993828]
        push 4
        fstp dword ptr [esp + 0x34]
        call dword ptr [mem_0092546C]
        fld dword ptr [esi + 0x1c]
        mov ebx, dword ptr [mem_00925520]
        push ecx
        fstp dword ptr [esp]
        call ebx
        mov ebp, dword ptr [mem_00925490]
        push 1
        call ebp
        mov ecx, dword ptr [esi + 0x14]
        push ecx
        call dword ptr [mem_009254A8]
        fld dword ptr [esp + 0x30]
        fmul dword ptr [esp + 0x38]
        mov edi, dword ptr [mem_0092548C]
        sub esp, 0xc
        fsubr qword ptr [mem_00993828]
        fst qword ptr [esp + 0x3c]
        fmul dword ptr [esi + 0x28]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esp + 0x24]
        fchs
        sub esp, 0xc
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esi + 0x2c]
        fmul qword ptr [esp + 0x30]
        sub esp, 0xc
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esp + 0x28]
        fchs
        sub esp, 0xc
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp]
        call edi
        call dword ptr [mem_00925488]
        fld1
        push ecx
        fstp dword ptr [esp]
        call ebx
        push 1
        call ebp
        xor ebp, ebp
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loc_00539150:
        mov edx, dword ptr [esi + 0x14]
        mov ebx, dword ptr [mem_009254A8]
        push edx
        call ebx
        mov eax, ebp
        test eax, eax
        mov dword ptr [esp + 0x18], eax
        fild dword ptr [esp + 0x18]
        jge SHORT loc_00539170
        fadd dword ptr [mem_0092F678]
loc_00539170:
        fmul dword ptr [esp + 0x38]
        sub esp, 0xc
        fsubr qword ptr [mem_00993828]
        fst qword ptr [esp + 0x24]
        fmul dword ptr [esi + 0x28]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esp + 0x2c]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esi + 0x2c]
        fmul qword ptr [esp + 0x18]
        sub esp, 0xc
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esp + 0x18]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp]
        call edi
        cmp ebp, dword ptr [esi + 0x20]
        je loc_005392DD
        mov ecx, dword ptr [esi + 0x18]
        push ecx
        call ebx
        mov ebx, 1
        cmp dword ptr [esi + 0x24], ebx
        jbe loc_005392DD
        fld dword ptr [esp + 0x10]
        fsub dword ptr [esp + 0x28]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x18]
        fsub dword ptr [esp + 0x24]
        fstp qword ptr [esp + 0x48]
loc_0053922D:
        mov edx, ebx
        test edx, edx
        mov dword ptr [esp + 0x18], edx
        fild dword ptr [esp + 0x18]
        jge SHORT loc_00539241
        fadd dword ptr [mem_0092F678]
loc_00539241:
        fmul dword ptr [esp + 0x3c]
        sub esp, 0xc
        fsubr qword ptr [mem_00993828]
        fst qword ptr [esp + 0x4c]
        fmul dword ptr [esi + 0x28]
        fadd qword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esp + 0x2c]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esi + 0x2c]
        fmul qword ptr [esp + 0x40]
        sub esp, 0xc
        fadd qword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esp + 0x18]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp]
        call edi
        add ebx, 1
        cmp ebx, dword ptr [esi + 0x24]
        jb loc_0053922D
loc_005392DD:
        add ebp, 1
        cmp ebp, dword ptr [esi + 0x20]
        jbe loc_00539150
        call dword ptr [mem_00925488]
        call dword ptr [mem_0092552C]
        call dword ptr [mem_00925404]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}
