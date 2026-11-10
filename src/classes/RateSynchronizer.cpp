// Decompiled translation unit: src/classes/RateSynchronizer.cpp

// [0x0067B330] RateSynchronizer::vfunc_0 (81 bytes)
extern "C" double mem_00AA2050;

extern "C" __declspec(naked) bool __fastcall fn_0067B330(void* self) {
    __asm {
        push esi
        mov esi, ecx
        fld qword ptr [esi + 0x8]
        fadd qword ptr [esi + 0x18]
        fst qword ptr [esi + 0x18]
        fadd qword ptr [mem_00AA2050]
        fcomp qword ptr [esi + 0x10]
        fnstsw ax
        test ah, 0x1
        jne ret_true
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    loop_top:
        fld qword ptr [esi + 0x18]
        mov ecx, dword ptr [esi + 0x20]
        fsub qword ptr [esi + 0x10]
        fstp qword ptr [esi + 0x18]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        test al, al
        je ret_false
        fld qword ptr [mem_00AA2050]
        fadd qword ptr [esi + 0x18]
        fcomp qword ptr [esi + 0x10]
        fnstsw ax
        test ah, 0x1
        je loop_top
    ret_true:
        mov al, 0x1
        pop esi
        ret
    ret_false:
        xor al, al
        pop esi
        ret
    }
}
