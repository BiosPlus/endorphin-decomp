// Decompiled translation unit: src/Primitives/Sphyl.cpp

extern "C" void ext_0053A610();
extern "C" int mem_00924FFC;
extern "C" void ext_005B11D0();
extern "C" void ext_0063E01E();
extern "C" void ext_0063E02A();
extern "C" void ext_0063E036();
extern "C" int mem_00925414;
extern "C" int mem_009253D0;
extern "C" int mem_00993828;
extern "C" int mem_00925404;

// [0x0053DA40] Primitives::Sphyl::vfunc_25 (90 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053DA40(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push edi
        push ecx
        mov ecx, esi
        call ext_0053A610
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x40
        jne short L_skip
        xor eax, 0x40
        mov dword ptr [esi + 0x1c], eax
L_skip:
        mov edx, dword ptr [edi + 0x88]
        mov dword ptr [esi + 0x3c], edx
        mov eax, dword ptr [edi + 0x8c]
        mov dword ptr [esi + 0x40], eax
        mov ecx, dword ptr [edi + 0x84]
        mov dword ptr [esi + 0x44], ecx
        push 0
        lea ecx, [edi + 0x9c]
        call dword ptr [mem_00924FFC]
        mov dl, byte ptr [eax]
        pop edi
        mov byte ptr [esi + 0x48], dl
        pop esi
        ret 0xc
    }
}

// [0x0053B880] Primitives::Sphyl::vfunc_29 (32 bytes)
extern "C" void __fastcall ext_0053AD10(void* self);

extern "C" void __fastcall fn_0053B880(void* self) {
    ext_0053AD10(self);
    int* p = (int*)self;
    *(int*)((char*)self + 0x3c) = 0x14;
    *(int*)((char*)self + 0x40) = 1;
    *(int*)((char*)self + 0x44) = 0x14;
    *((unsigned char*)self + 0x48) = 0x7a;
}

// [0x0053B8A0] Primitives::Sphyl::vfunc_28 (278 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053B8A0(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x34
        push ebx
        push esi
        push edi
        mov esi, ecx
        call dword ptr [mem_00925414]
        mov ecx, dword ptr [esi + 0x20]
        push 1
        call ext_005B11D0
        fld dword ptr [eax]
        mov edi, dword ptr [mem_009253D0]
        fchs
        fmul qword ptr [mem_00993828]
        sub esp, 0xc
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        mov ecx, dword ptr [esi + 0x20]
        push 0
        call ext_005B11D0
        fld dword ptr [eax]
        mov ecx, dword ptr [esi + 0x44]
        mov edx, dword ptr [esi + 0x3c]
        mov eax, dword ptr [esi + 0x4c]
        push ecx
        push edx
        sub esp, 0x8
        fstp qword ptr [esp]
        push eax
        call ext_0063E036
        mov ecx, dword ptr [esi + 0x4c]
        push 0x186b4
        push ecx
        call ext_0063E01E
        mov ecx, dword ptr [esi + 0x20]
        push 1
        call ext_005B11D0
        mov ecx, dword ptr [esi + 0x20]
        push 0
        mov ebx, eax
        call ext_005B11D0
        mov ecx, dword ptr [esi + 0x20]
        push 0
        mov dword ptr [esp + 0x40], eax
        call ext_005B11D0
        fld dword ptr [ebx]
        mov edx, dword ptr [esi + 0x40]
        mov ecx, dword ptr [esi + 0x3c]
        push edx
        mov edx, dword ptr [esp + 0x40]
        push ecx
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [edx]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [eax]
        mov eax, dword ptr [esi + 0x4c]
        fstp qword ptr [esp]
        push eax
        call ext_0063E02A
        mov ecx, dword ptr [esi + 0x20]
        push 1
        call ext_005B11D0
        fld dword ptr [eax]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        mov ecx, dword ptr [esi + 0x20]
        push 0
        call ext_005B11D0
        fld dword ptr [eax]
        mov ecx, dword ptr [esi + 0x44]
        mov edx, dword ptr [esi + 0x3c]
        push ecx
        push edx
        mov eax, dword ptr [esi + 0x4c]
        sub esp, 0x8
        fstp qword ptr [esp]
        push eax
        call ext_0063E036
        call dword ptr [mem_00925404]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}
