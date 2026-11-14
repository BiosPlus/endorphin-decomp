// Decompiled translation unit: src/classes/PhysicalEvaluator.cpp

extern "C" void ext_00435D00();
extern "C" void ext_00468180();
extern "C" void ext_00468660();
extern "C" void ext_0046F7F0();
extern "C" void ext_0046FBE0();
extern "C" void ext_00472350();
extern "C" void ext_00472E30();
extern "C" void ext_00473280();
extern "C" void ext_00503A20();
extern "C" void ext_00594750();
extern "C" int mem_0093E990;
extern "C" int mem_00AEB918;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E5C;
extern "C" int mem_00924E90;
extern "C" int mem_00924E98;
extern "C" int mem_00924E94;

// [0x00517DF0] PhysicalEvaluator::vfunc_1 (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_00517DF0(void* self) {
    __asm {
        fld dword ptr [esp + 4]
        fstp qword ptr [ecx + 0x28]
        mov byte ptr [ecx + 0x20], 1
        call ext_0046F7F0
        mov ecx, eax
        call ext_00472350
        ret 4
    }
}

// [0x00517E10] PhysicalEvaluator::vfunc_2 (418 bytes)
extern "C" __declspec(naked) double __fastcall fn_00517E10(void* self, int edx_unused, int a1, double a2) {
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x892a70
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x10
        fld     qword ptr [ebp + 0xc]
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        fstp    qword ptr [esi + 0x28]
        mov     dword ptr [ebp - 0x10], esp
        mov     dword ptr [ebp - 0x18], esi
        call    ext_0046F7F0
        mov     edi, eax
        mov     eax, dword ptr [esi + 0x8]
        mov     byte ptr [esi + 0x20], 0
        mov     bl, byte ptr [eax + 0x1e]
        mov     eax, dword ptr [eax + 0x18]
        mov     ecx, edi
        mov     dword ptr [ebp - 0x14], edi
        mov     dword ptr [ebp - 0x4], 0
        mov     dword ptr [esi + 0x30], eax
        call    ext_00472350
        test    bl, bl
        jne     loc_517E79
        fld     dword ptr [mem_0093E990]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp]
        call    ext_0046FBE0
loc_517E79:
        mov     edx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [edi + 0xcc]
        push    edx
        call    ext_00594750
        push    0
        mov     ecx, edi
        call    ext_00473280
        test    bl, bl
        je      loc_517ECC
        call    ext_00468180
        test    eax, eax
        je      loc_517ECC
        cmp     byte ptr [mem_00AEB918], 0
        jne     loc_517ECC
        call    ext_00468180
        mov     ecx, eax
        call    ext_00468660
        mov     ecx, dword ptr [esi + 0x30]
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x38]
        push    ecx
        mov     ecx, eax
        call    edx
        mov     dword ptr [ebp - 0x4], 0xffffffff
        jmp     loc_517F8F
loc_517ECC:
        xor     edi, edi
        mov     edi, edi
loc_517ED0:
        mov     ecx, dword ptr [ebp - 0x14]
        call    ext_00472E30
        mov     eax, dword ptr [esi + 0x30]
        test    eax, eax
        je      loc_517F2B
        add     edi, 1
        cmp     edi, eax
        jl      loc_517F2B
        mov     eax, dword ptr [mem_00924FA0]
        push    0x952098
        push    eax
        call    ext_00435D00
        add     esp, 8
        push    edi
        mov     ecx, eax
        call    dword ptr [mem_00924E5C]
        push    0x952088
        push    eax
        call    ext_00435D00
        mov     ecx, dword ptr [mem_00924E90]
        add     esp, 8
        push    ecx
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
        mov     edi, dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 0x4], 0xffffffff
        jmp     short loc_517F8F
loc_517F2B:
        mov     ecx, esi
        call    ext_00503A20
        test    al, al
        je      short loc_517ED0
        mov     edi, dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 0x4], 0xffffffff
        jmp     short loc_517F8F
loc_517F42:
        mov     edx, dword ptr [mem_00924E90]
        mov     eax, dword ptr [ebp - 0x1c]
        mov     esi, dword ptr [ebp - 0x18]
        push    edx
        add     eax, 0xc
        push    eax
        mov     byte ptr [esi + 0x20], 1
        mov     ecx, dword ptr [mem_00924FA0]
        push    0x952070
        push    ecx
        call    ext_00435D00
        add     esp, 8
        push    eax
        call    dword ptr [mem_00924E94]
        add     esp, 8
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
        fld     qword ptr [ebp + 0xc]
        fstp    qword ptr [esi + 0x28]
        mov     eax, 0x517f89
        ret
loc_517F89:
        mov     esi, dword ptr [ebp - 0x18]
        mov     edi, dword ptr [ebp - 0x14]
loc_517F8F:
        mov     ecx, dword ptr [edi + 0xcc]
        push    0
        call    ext_00594750
        fld     qword ptr [esi + 0x28]
        mov     ecx, dword ptr [ebp - 0xc]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
