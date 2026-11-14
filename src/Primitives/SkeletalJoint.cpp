// Decompiled translation unit: src/Primitives/SkeletalJoint.cpp

extern "C" void ext_0053AD10();
extern "C" void ext_0053CB60();
extern "C" void ext_0063E02A();
extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_0092A280;
extern "C" int mem_00955C80;
extern "C" int mem_00925414;
extern "C" int mem_00955A30;
extern "C" int mem_009254CC;
extern "C" int mem_009253D0;
extern "C" int mem_0092C508;
extern "C" int mem_00925404;
extern "C" int mem_0092552C;

// [0x0053BEB0] Primitives::SkeletalJoint::vfunc_29 (30 bytes)
extern "C" void __fastcall fn_0053BEB0(void* self) {
    ext_0053AD10();
    *(int*)((char*)self + 0xcc) = 0x14;
    *(int*)((char*)self + 0xd0) = 1;
}

// [0x0053D0D0] Primitives::SkeletalJoint::vfunc_28 (271 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053D0D0(void* self, int edx_dummy, int arg0) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x40
        mov     eax, dword ptr [ebp + 0x8]
        sub     esp, 0x3c
        push    esi
        push    eax
        mov     esi, ecx
        call    ext_0053CB60
        test    dword ptr [esi + 0x1c], 0x20000
        je      loc_53d1d8
        push    0x4
        call    dword ptr [mem_0092546C]
        fld1
        push    ecx
        fstp    dword ptr [esp]
        call    dword ptr [mem_00925520]
        fld     dword ptr [esi + 0x3c]
        fmul    qword ptr [mem_0092A280]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esi + 0x3c]
        fmul    qword ptr [mem_00955C80]
        fstp    dword ptr [esp + 0x38]
        call    dword ptr [mem_00925414]
        fldz
        sub     esp, 0x10
        fst     dword ptr [esp + 0xc]
        fld1
        fstp    dword ptr [esp + 0x8]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [mem_00955A30]
        fstp    dword ptr [esp]
        call    dword ptr [mem_009254CC]
        mov     ecx, dword ptr [esi + 0xd0]
        fld     dword ptr [esp + 0x38]
        mov     edx, dword ptr [esi + 0xcc]
        mov     eax, dword ptr [esi + 0xd4]
        push    ecx
        push    edx
        sub     esp, 0x18
        fstp    qword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x5c]
        fstp    qword ptr [esp + 0x8]
        fldz
        fstp    qword ptr [esp]
        push    eax
        call    ext_0063E02A
        fld     dword ptr [esp + 0x38]
        sub     esp, 0xc
        fstp    dword ptr [esp + 0x8]
        fldz
        fst     dword ptr [esp + 0x4]
        fstp    dword ptr [esp]
        call    dword ptr [mem_009253D0]
        fld     dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esi + 0xd0]
        fmul    qword ptr [mem_0092C508]
        mov     edx, dword ptr [esi + 0xcc]
        mov     eax, dword ptr [esi + 0xd4]
        push    ecx
        push    edx
        sub     esp, 0x18
        fstp    qword ptr [esp + 0x10]
        fldz
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [esp + 0x5c]
        fstp    qword ptr [esp]
        push    eax
        call    ext_0063E02A
        call    dword ptr [mem_00925404]
        call    dword ptr [mem_0092552C]
loc_53d1d8:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}

extern "C" void ext_0053DC50();

// [0x0053DE20] Primitives::SkeletalJoint::vfunc_25 (117 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053DE20(void* self, int edx_dummy, void* a1, void* a2, void* a3) {
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        push    ecx
        mov     ecx, esi
        call    ext_0053DC50
        mov     edx, dword ptr [edi + 0x88]
        mov     dword ptr [esi + 0xcc], edx
        mov     eax, dword ptr [edi + 0x8c]
        mov     dword ptr [esi + 0xd0], eax
        mov     eax, dword ptr [esi + 0x1c]
        test    al, 0x4
        jne     loc_53de5f
        xor     eax, 0x4
        mov     dword ptr [esi + 0x1c], eax
loc_53de5f:
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, 0x20000
        jne     loc_53de71
        xor     eax, 0x20000
        mov     dword ptr [esi + 0x1c], eax
loc_53de71:
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, 0x40000
        je      loc_53de83
        xor     eax, 0x40000
        mov     dword ptr [esi + 0x1c], eax
loc_53de83:
        mov     eax, dword ptr [esi + 0x1c]
        test    al, 0x1
        jne     loc_53de90
        xor     eax, 0x1
        mov     dword ptr [esi + 0x1c], eax
loc_53de90:
        pop     edi
        pop     esi
        ret     0xc
    }
}
