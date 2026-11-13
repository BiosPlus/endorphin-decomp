// Decompiled translation unit: src/Primitives/Mesh.cpp

extern "C" void ext_005B11F0();
extern "C" int mem_00925418;
extern "C" int mem_00925414;
extern "C" int mem_009254B0;
extern "C" int mem_00925134;
extern "C" int mem_00925490;
extern "C" int mem_0092549C;
extern "C" int mem_009254D4;
extern "C" int mem_00925498;
extern "C" int mem_00925488;
extern "C" int mem_00925404;
extern "C" int mem_00925438;

// [0x0053E2E0] Primitives::Mesh::vfunc_28 (651 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053E2E0(void* self) {
    __asm {
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x20]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x3c]
        push edi
        call eax
        mov ecx, dword ptr [esi + 0x20]
        mov ecx, dword ptr [ecx + 0xc]
        mov edx, dword ptr [ecx]
        mov edi, eax
        mov eax, dword ptr [edx + 0x30]
        mov dword ptr [esp + 0x10], edi
        call eax
        mov ecx, dword ptr [esi + 0x20]
        mov ecx, dword ptr [ecx + 0xc]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [edx + 0x34]
        call eax
        mov ecx, dword ptr [esi + 0x20]
        mov ecx, dword ptr [ecx + 0xc]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [edx + 0x38]
        call eax
        push 0xba1
        mov dword ptr [esp + 0x1c], eax
        call dword ptr [mem_00925418]
        call dword ptr [mem_00925414]
        mov ecx, dword ptr [esi + 0x20]
        call ext_005B11F0
        fld dword ptr [eax + 0x8]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [esp]
        call dword ptr [mem_009254B0]
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jbe short L_53e374
        call ebp
L_53e374:
        mov ebx, esi
L_53e376:
        mov esi, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], esi
        jbe short L_53e380
        call ebp
L_53e380:
        cmp ebx, esi
        je L_53e550
        cmp ebx, dword ptr [edi + 0x8]
        jb short L_53e38f
        call ebp
L_53e38f:
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        jbe short L_53e399
        call ebp
L_53e399:
        cmp ebx, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0x24], esi
        jb short L_53e3a4
        call ebp
L_53e3a4:
        mov esi, dword ptr [ebx + 0x14]
        cmp esi, dword ptr [ebx + 0x18]
        jbe short L_53e3ae
        call ebp
L_53e3ae:
        cmp ebx, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0x34], esi
        jb short L_53e3b9
        call ebp
L_53e3b9:
        mov esi, dword ptr [ebx + 0x24]
        cmp esi, dword ptr [ebx + 0x28]
        jbe short L_53e3c3
        call ebp
L_53e3c3:
        push 9
        mov dword ptr [esp + 0x30], esi
        call dword ptr [mem_00925490]
        nop
L_53e3d0:
        cmp ebx, dword ptr [edi + 0x8]
        jb short L_53e3d7
        call ebp
L_53e3d7:
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        jbe short L_53e3e1
        call ebp
L_53e3e1:
        cmp dword ptr [esp + 0x24], esi
        je L_53e53b
        cmp ebx, dword ptr [edi + 0x8]
        jb short L_53e3f2
        call ebp
L_53e3f2:
        mov esi, dword ptr [ebx + 0x28]
        cmp dword ptr [ebx + 0x24], esi
        lea edi, [ebx + 0x20]
        jbe short L_53e3ff
        call ebp
L_53e3ff:
        cmp edi, edi
        je short L_53e405
        call ebp
L_53e405:
        mov eax, dword ptr [esp + 0x2c]
        cmp eax, esi
        je short L_53e464
        mov ecx, eax
        cmp ecx, dword ptr [ebx + 0x28]
        mov esi, edi
        mov edi, eax
        jb short L_53e41a
        call ebp
L_53e41a:
        add dword ptr [esp + 0x2c], 4
        test esi, esi
        jne short L_53e425
        call ebp
L_53e425:
        cmp edi, dword ptr [esi + 0x8]
        jb short L_53e42c
        call ebp
L_53e42c:
        mov esi, dword ptr [edi]
        mov edi, dword ptr [esp + 0x14]
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je short L_53e452
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp esi, eax
        jb short L_53e454
L_53e452:
        call ebp
L_53e454:
        mov eax, dword ptr [edi + 0x4]
        lea edx, [esi + 2*esi]
        lea ecx, [eax + 4*edx]
        push ecx
        call dword ptr [mem_0092549C]
L_53e464:
        mov edx, dword ptr [esp + 0x10]
        cmp ebx, dword ptr [edx + 0x8]
        jb short L_53e46f
        call ebp
L_53e46f:
        mov esi, dword ptr [ebx + 0x18]
        cmp dword ptr [ebx + 0x14], esi
        lea edi, [ebx + 0x10]
        jbe short L_53e47c
        call ebp
L_53e47c:
        cmp edi, edi
        je short L_53e482
        call ebp
L_53e482:
        mov eax, dword ptr [esp + 0x34]
        cmp eax, esi
        je short L_53e4df
        cmp eax, dword ptr [ebx + 0x18]
        mov esi, edi
        mov edi, eax
        jb short L_53e495
        call ebp
L_53e495:
        add dword ptr [esp + 0x34], 4
        test esi, esi
        jne short L_53e4a0
        call ebp
L_53e4a0:
        cmp edi, dword ptr [esi + 0x8]
        jb short L_53e4a7
        call ebp
L_53e4a7:
        mov esi, dword ptr [edi]
        mov edi, dword ptr [esp + 0x18]
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je short L_53e4cd
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp esi, eax
        jb short L_53e4cf
L_53e4cd:
        call ebp
L_53e4cf:
        mov edx, dword ptr [edi + 0x4]
        lea ecx, [esi + 2*esi]
        lea eax, [edx + 4*ecx]
        push eax
        call dword ptr [mem_009254D4]
L_53e4df:
        mov esi, dword ptr [esp + 0x24]
        cmp esi, dword ptr [ebx + 0x8]
        jb short L_53e4ea
        call ebp
L_53e4ea:
        mov edi, dword ptr [esp + 0x1c]
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        mov esi, dword ptr [esi]
        je short L_53e510
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp esi, eax
        jb short L_53e512
L_53e510:
        call ebp
L_53e512:
        mov edx, dword ptr [edi + 0x4]
        lea ecx, [esi + 2*esi]
        lea eax, [edx + 4*ecx]
        push eax
        call dword ptr [mem_00925498]
        mov ecx, dword ptr [esp + 0x24]
        cmp ecx, dword ptr [ebx + 0x8]
        jb short L_53e52d
        call ebp
L_53e52d:
        add dword ptr [esp + 0x24], 4
        mov edi, dword ptr [esp + 0x10]
        jmp L_53e3d0
L_53e53b:
        call dword ptr [mem_00925488]
        cmp ebx, dword ptr [edi + 0x8]
        jb short L_53e548
        call ebp
L_53e548:
        add ebx, 0x30
        jmp L_53e376
L_53e550:
        call dword ptr [mem_00925404]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        mov dword ptr [esp + 4], 0xba1
        jmp dword ptr [mem_00925438]
    }
}
