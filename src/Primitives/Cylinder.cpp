// Decompiled translation unit: src/Primitives/Cylinder.cpp

extern "C" void ext_0053A610();
extern "C" void ext_0053AD10();
extern "C" int mem_00924FFC;

// [0x0053DAA0] Primitives::Cylinder::vfunc_25 (85 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053DAA0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0Ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esp + 10h]
        push edi
        push ecx
        mov ecx, esi
        call ext_0053A610
        mov eax, dword ptr [esi + 1Ch]
        test al, 40h
        jne skip_flag
        xor eax, 40h
        mov dword ptr [esi + 1Ch], eax
skip_flag:
        mov edx, dword ptr [edi + 88h]
        mov dword ptr [esi + 3Ch], edx
        mov eax, dword ptr [edi + 8Ch]
        push 0
        lea ecx, [edi + 9Ch]
        mov dword ptr [esi + 40h], eax
        mov byte ptr [esi + 44h], 1
        call dword ptr [mem_00924FFC]
        mov cl, byte ptr [eax]
        pop edi
        mov byte ptr [esi + 45h], cl
        pop esi
        ret 0Ch
    }
}

// [0x0053BA40] Primitives::Cylinder::vfunc_29 (32 bytes)
extern "C" void __fastcall fn_0053BA40(void* self) {
    typedef void (__fastcall *AnimVfunc29)(void*);
    unsigned char* p = static_cast<unsigned char*>(self);
    ((AnimVfunc29)ext_0053AD10)(self);
    *reinterpret_cast<int*>(p + 0x3c) = 0x14;
    *reinterpret_cast<int*>(p + 0x40) = 1;
    *(p + 0x44) = 1;
    *(p + 0x45) = 0x7a;
}

extern "C" void ext_005B11D0();
extern "C" void ext_0063E01E();
extern "C" void ext_0063E024();
extern "C" void ext_0063E02A();
extern "C" int mem_00925414;
extern "C" int mem_009253D0;
extern "C" int mem_00993828;
extern "C" int mem_00925404;

// [0x0053BA60] Primitives::Cylinder::vfunc_28 (308 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053BA60(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call dword ptr [mem_00925414]
        mov ecx, dword ptr [esi + 0x20]
        push 1
        call ext_005B11D0
        fld dword ptr [eax]
        mov ebp, dword ptr [mem_009253D0]
        fchs
        fmul qword ptr [mem_00993828]
        sub esp, 0xc
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call ebp
        cmp byte ptr [esi + 0x44], 0
        je label_53baf2
        mov eax, dword ptr [esi + 0x48]
        push 0x186b5
        push eax
        call ext_0063E01E
        mov ecx, dword ptr [esi + 0x20]
        push 0
        call ext_005B11D0
        fld dword ptr [eax]
        mov ecx, dword ptr [esi + 0x3c]
        mov edx, dword ptr [esi + 0x48]
        push 1
        push ecx
        sub esp, 0x10
        fstp qword ptr [esp + 8]
        fldz
        fstp qword ptr [esp]
        push edx
        call ext_0063E024
        mov eax, dword ptr [esi + 0x48]
        push 0x186b4
        push eax
        call ext_0063E01E
label_53baf2:
        mov ecx, dword ptr [esi + 0x20]
        push 1
        call ext_005B11D0
        mov ecx, dword ptr [esi + 0x20]
        push 0
        mov edi, eax
        call ext_005B11D0
        mov ecx, dword ptr [esi + 0x20]
        push 0
        mov ebx, eax
        call ext_005B11D0
        fld dword ptr [edi]
        mov ecx, dword ptr [esi + 0x40]
        mov edx, dword ptr [esi + 0x3c]
        push ecx
        push edx
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [ebx]
        fstp qword ptr [esp + 8]
        fld dword ptr [eax]
        mov eax, dword ptr [esi + 0x48]
        fstp qword ptr [esp]
        push eax
        call ext_0063E02A
        cmp byte ptr [esi + 0x44], 0
        je label_53bb84
        mov ecx, dword ptr [esi + 0x20]
        push 1
        call ext_005B11D0
        fld dword ptr [eax]
        sub esp, 0xc
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call ebp
        mov ecx, dword ptr [esi + 0x20]
        push 0
        call ext_005B11D0
        fld dword ptr [eax]
        mov ecx, dword ptr [esi + 0x3c]
        mov edx, dword ptr [esi + 0x48]
        push 1
        push ecx
        sub esp, 0x10
        fstp qword ptr [esp + 8]
        fldz
        fstp qword ptr [esp]
        push edx
        call ext_0063E024
label_53bb84:
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
