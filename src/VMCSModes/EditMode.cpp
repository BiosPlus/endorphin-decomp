// Decompiled translation unit: src/VMCSModes/EditMode.cpp

// [0x004F2E20] VMCSModes::EditMode::vfunc_142 (26 bytes)
extern "C" void ext_00472350();
extern "C" void ext_00666120();

extern "C" __declspec(naked) void __fastcall fn_004F2E20(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        call ext_00472350
        mov ecx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ecx + 0x38]
        pop esi
        jmp ext_00666120
    }
}

// [0x004F2F90] VMCSModes::EditMode::vfunc_109 (137 bytes)
extern "C" void ext_00530290();
extern "C" void ext_006AD190();
extern "C" int mem_009542B8;

extern "C" __declspec(naked) void __fastcall fn_004F2F90(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1a4]
        call edx
        test al, al
        je L_done
        mov eax, dword ptr [esi + 0x8]
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        push ebx
        mov ebx, dword ptr [mem_009542B8]
        push edi
        call eax
        mov edi, eax
        test edi, edi
        je L_skip1
        mov ebx, dword ptr [edi + 0x38]
L_skip1:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ecx + 0x38]
        call ext_00666120
        mov edx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [edx + 0x14]
        call ext_006AD190
        mov esi, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push 1
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xd4]
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x3c]
        mov ecx, esi
        call edx
        test edi, edi
        je L_skip2
        push ebx
        mov ecx, edi
        call ext_00530290
L_skip2:
        pop edi
        pop ebx
L_done:
        pop esi
        ret
    }
}

// [0x004F4C70] VMCSModes::EditMode::vfunc_6 (170 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" int mem_00AD89B4;

extern "C" __declspec(naked) void __fastcall fn_004F4C70(void* self) {
    __asm {
        push -1
        push 0x88fe68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 8]
        mov esi, dword ptr [eax + 0x14]
        test esi, esi
        mov ebx, 1
        mov dword ptr [esp + 0xc], esi
        mov byte ptr [esp + 0x10], bl
        je L_004F4CC0
        cmp dword ptr [mem_00AD89B4], 0
        jne L_004F4CBA
        mov ecx, esi
        mov byte ptr [esi + 0x153], bl
        call ext_00472350
L_004F4CBA:
        add dword ptr [mem_00AD89B4], ebx
L_004F4CC0:
        mov ecx, dword ptr [edi + 4]
        push 2
        mov dword ptr [esp + 0x20], 0
        call ext_004667A0
        mov ecx, dword ptr [edi + 4]
        mov ecx, dword ptr [ecx + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [edx + 0x18]
        push eax
        call edx
        test esi, esi
        mov dword ptr [esp + 0x1c], 0xffffffff
        je L_004F4D06
        sub dword ptr [mem_00AD89B4], ebx
        jne L_004F4D06
        mov ecx, esi
        mov byte ptr [esi + 0x153], 0
        call ext_0046F930
L_004F4D06:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}

// [0x004F4400] VMCSModes::EditMode::vfunc_129 (206 bytes)
extern "C" void ext_00594000();

extern "C" __declspec(naked) void __fastcall fn_004F4400(void* self) {
    __asm {
        push -1
        push 0x88fe68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        push edi
        mov edi, dword ptr [eax + 0x14]
        test edi, edi
        mov ebx, 1
        mov dword ptr [esp + 0xc], edi
        mov byte ptr [esp + 0x10], bl
        je L_004F4450
        cmp dword ptr [mem_00AD89B4], 0
        jne L_004F444A
        mov ecx, edi
        mov byte ptr [edi + 0x153], bl
        call ext_00472350
L_004F444A:
        add dword ptr [mem_00AD89B4], ebx
L_004F4450:
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx + 0x38]
        mov dword ptr [esp + 0x1c], 0
        call ext_00666120
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov byte ptr [eax + 4], bl
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [edx + 0x14]
        mov esi, dword ptr [eax + 0x34]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ebx
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf0]
        push ebx
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x3c]
        mov ecx, esi
        call edx
        test edi, edi
        mov dword ptr [esp + 0x1c], 0xffffffff
        je L_004F44BC
        sub dword ptr [mem_00AD89B4], ebx
        jne L_004F44BC
        mov ecx, edi
        mov byte ptr [edi + 0x153], 0
        call ext_0046F930
L_004F44BC:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x004F4690] VMCSModes::EditMode::vfunc_20 (180 bytes)
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" void ext_00472650();
extern "C" int mem_00AD89B4;

extern "C" __declspec(naked) void __fastcall fn_004F4690(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88fe68
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x178]
        call edx
        test al, al
        je L_end
        mov eax, dword ptr [edi + 0x8]
        push ebx
        push esi
        mov esi, dword ptr [eax + 0x14]
        test esi, esi
        mov ebx, 1
        mov dword ptr [esp + 0xc], esi
        mov byte ptr [esp + 0x10], bl
        je L_skip_a
        cmp dword ptr [mem_00AD89B4], 0
        jne L_skip_b
        mov ecx, esi
        mov byte ptr [esi + 0x153], bl
        call ext_00472350
L_skip_b:
        add dword ptr [mem_00AD89B4], ebx
L_skip_a:
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0
        call eax
        mov ecx, dword ptr [edi + 0x8]
        mov ecx, dword ptr [ecx + 0x14]
        push 0
        push ebx
        call ext_00472650
        test esi, esi
        mov dword ptr [esp + 0x1c], -1
        je L_pop
        sub dword ptr [mem_00AD89B4], ebx
        jne L_pop
        mov ecx, esi
        mov byte ptr [esi + 0x153], 0
        call ext_0046F930
L_pop:
        pop esi
        pop ebx
L_end:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x004F4750] VMCSModes::EditMode::vfunc_21 (181 bytes)
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" void ext_00472650();
extern "C" int mem_00AD89B4;

extern "C" __declspec(naked) void __fastcall fn_004F4750(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88fe68
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x178]
        call edx
        test al, al
        je L_end
        mov eax, dword ptr [edi + 0x8]
        push ebx
        push esi
        mov esi, dword ptr [eax + 0x14]
        test esi, esi
        mov ebx, 1
        mov dword ptr [esp + 0xc], esi
        mov byte ptr [esp + 0x10], bl
        je L_skip_a
        cmp dword ptr [mem_00AD89B4], 0
        jne L_skip_b
        mov ecx, esi
        mov byte ptr [esi + 0x153], bl
        call ext_00472350
L_skip_b:
        add dword ptr [mem_00AD89B4], ebx
L_skip_a:
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0
        call eax
        mov ecx, dword ptr [edi + 0x8]
        mov ecx, dword ptr [ecx + 0x14]
        push 0
        push 0
        call ext_00472650
        test esi, esi
        mov dword ptr [esp + 0x1c], -1
        je L_pop
        sub dword ptr [mem_00AD89B4], ebx
        jne L_pop
        mov ecx, esi
        mov byte ptr [esi + 0x153], 0
        call ext_0046F930
L_pop:
        pop esi
        pop ebx
L_end:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x004F44D0] VMCSModes::EditMode::vfunc_130 (224 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F44D0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x88fe68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        push edi
        mov edi, dword ptr [eax + 0x14]
        test edi, edi
        mov ebx, 1
        mov dword ptr [esp + 0xc], edi
        mov byte ptr [esp + 0x10], bl
        je L_004F4520
        cmp dword ptr [mem_00AD89B4], 0
        jne L_004F451A
        mov ecx, edi
        mov byte ptr [edi + 0x153], bl
        call ext_00472350
L_004F451A:
        add dword ptr [mem_00AD89B4], ebx
L_004F4520:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, esi
        mov dword ptr [esp + 0x1c], 0
        call eax
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx + 0x38]
        call ext_00666120
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov byte ptr [eax + 4], bl
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [edx + 0x14]
        mov esi, dword ptr [eax + 0x34]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ebx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf4]
        push ecx
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x3c]
        mov ecx, esi
        call edx
        test edi, edi
        mov dword ptr [esp + 0x1c], 0xffffffff
        je L_004F459C
        sub dword ptr [mem_00AD89B4], ebx
        jne L_004F459C
        mov ecx, edi
        mov byte ptr [edi + 0x153], 0
        call ext_0046F930
L_004F459C:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}

// [0x004F3220] VMCSModes::EditMode::vfunc_110 (270 bytes)
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" void ext_00530290();
extern "C" void ext_00594000();
extern "C" void ext_00666120();
extern "C" void ext_006AD190();
extern "C" int mem_00AD89B4;
extern "C" int mem_009542B8;

extern "C" __declspec(naked) void __fastcall fn_004F3220(void* self) {
    __asm {
        push -1
        push 0x88fe68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov ebp, dword ptr [eax + 0x14]
        test ebp, ebp
        mov dword ptr [esp + 8], ebp
        mov byte ptr [esp + 0xc], 1
        je L_004F326D
        cmp dword ptr [mem_00AD89B4], 0
        jne L_004F3266
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 1
        call ext_00472350
L_004F3266:
        add dword ptr [mem_00AD89B4], 1
L_004F326D:
        push ebx
        push edi
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        mov ebx, dword ptr [mem_009542B8]
        mov dword ptr [esp + 0x20], 0
        call eax
        mov edi, eax
        test edi, edi
        je L_004F3299
        mov ebx, dword ptr [edi + 0x38]
L_004F3299:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx + 0x38]
        call ext_00666120
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov byte ptr [eax + 4], 1
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [edx + 0x14]
        call ext_006AD190
        mov esi, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push 1
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xdc]
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x3c]
        mov ecx, esi
        call edx
        test edi, edi
        je L_004F32F8
        push ebx
        mov ecx, edi
        call ext_00530290
L_004F32F8:
        test ebp, ebp
        pop edi
        mov dword ptr [esp + 0x1c], 0xffffffff
        pop ebx
        je L_004F331D
        sub dword ptr [mem_00AD89B4], 1
        jne L_004F331D
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 0
        call ext_0046F930
L_004F331D:
        mov ecx, dword ptr [esp + 0x10]
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x004F3330] VMCSModes::EditMode::vfunc_111 (270 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F3330(void* self) {
    __asm {
        push -1
        push 0x88fe68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov ebp, dword ptr [eax + 0x14]
        test ebp, ebp
        mov dword ptr [esp + 8], ebp
        mov byte ptr [esp + 0xc], 1
        je L_004F337D
        cmp dword ptr [mem_00AD89B4], 0
        jne L_004F3376
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 1
        call ext_00472350
L_004F3376:
        add dword ptr [mem_00AD89B4], 1
L_004F337D:
        push ebx
        push edi
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        mov ebx, dword ptr [mem_009542B8]
        mov dword ptr [esp + 0x20], 0
        call eax
        mov edi, eax
        test edi, edi
        je L_004F33A9
        mov ebx, dword ptr [edi + 0x38]
L_004F33A9:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx + 0x38]
        call ext_00666120
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov byte ptr [eax + 4], 1
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [edx + 0x14]
        call ext_006AD190
        mov esi, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push 1
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xe0]
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x3c]
        mov ecx, esi
        call edx
        test edi, edi
        je L_004F3408
        push ebx
        mov ecx, edi
        call ext_00530290
L_004F3408:
        test ebp, ebp
        pop edi
        mov dword ptr [esp + 0x1c], 0xffffffff
        pop ebx
        je L_004F342D
        sub dword ptr [mem_00AD89B4], 1
        jne L_004F342D
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 0
        call ext_0046F930
L_004F342D:
        mov ecx, dword ptr [esp + 0x10]
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" void ext_00530290();
extern "C" void ext_00594000();
extern "C" void ext_00666120();
extern "C" void ext_006AD190();
extern "C" int mem_00AD89B4;
extern "C" int mem_009542B8;

// [0x004F3440] VMCSModes::EditMode::vfunc_112 (288 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F3440(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88fe68
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1a0]
        call edx
        test al, al
        je L_end
        mov eax, dword ptr [esi + 8]
        push ebp
        mov ebp, dword ptr [eax + 0x14]
        test ebp, ebp
        mov dword ptr [esp + 8], ebp
        mov byte ptr [esp + 0xc], 1
        je L_a
        cmp dword ptr [mem_00AD89B4], 0
        jne L_b
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 1
        call ext_00472350
    L_b:
        add dword ptr [mem_00AD89B4], 1
    L_a:
        push ebx
        push edi
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        mov ebx, dword ptr [mem_009542B8]
        mov dword ptr [esp + 0x20], 0
        call eax
        mov edi, eax
        test edi, edi
        je L_c
        mov ebx, dword ptr [edi + 0x38]
    L_c:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx + 0x38]
        call ext_00666120
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov byte ptr [eax + 4], 1
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [edx + 0x14]
        call ext_006AD190
        mov esi, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push 1
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xd8]
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x3c]
        mov ecx, esi
        call edx
        test edi, edi
        je L_d
        push ebx
        mov ecx, edi
        call ext_00530290
    L_d:
        test ebp, ebp
        pop edi
        mov dword ptr [esp + 0x1c], 0xffffffff
        pop ebx
        je L_e
        sub dword ptr [mem_00AD89B4], 1
        jne L_e
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 0
        call ext_0046F930
    L_e:
        pop ebp
    L_end:
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

extern "C" void ext_00469040();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

// [0x004F3560] VMCSModes::EditMode::vfunc_113 (292 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F3560(void* self) {
    __asm {
        push -1
        push 0x88fe10
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov ebx, dword ptr [eax + 0x14]
        test ebx, ebx
        mov dword ptr [esp + 0xc], ebx
        mov byte ptr [esp + 0x10], 1
        je L_skip_ref
        cmp dword ptr [mem_00AD89B4], 0
        jne L_add_ref
        mov ecx, ebx
        mov byte ptr [ebx + 0x153], 1
        call ext_00472350
    L_add_ref:
        add dword ptr [mem_00AD89B4], 1
    L_skip_ref:
        push ebp
        push edi
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, esi
        mov dword ptr [esp + 0x24], 0
        call eax
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx + 0x38]
        call ext_00666120
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [edx + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebp, eax
        mov ecx, ebp
        mov dword ptr [esp + 0x10], ebp
        call ext_0065C640
        mov byte ptr [esp + 0x24], 1
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov byte ptr [eax + 4], 1
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [eax + 0x14]
        call ext_006AD190
        mov edi, eax
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x38]
        push 1
        mov ecx, edi
        call eax
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx + 0x14]
        call ext_006AD190
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xf8]
        call eax
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x3c]
        mov ecx, edi
        call eax
        mov ecx, dword ptr [esi + 8]
        call ext_00469040
        mov ecx, ebp
        mov byte ptr [esp + 0x24], 0
        call ext_0065C650
        test ebx, ebx
        pop edi
        mov dword ptr [esp + 0x20], 0xffffffff
        pop ebp
        je L_end
        sub dword ptr [mem_00AD89B4], 1
        jne L_end
        mov ecx, ebx
        mov byte ptr [ebx + 0x153], 0
        call ext_0046F930
    L_end:
        mov ecx, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

extern "C" void ext_00468660();
extern "C" void ext_00594000();
extern "C" void ext_0059B5A0();
extern "C" void ext_00666120();

// [0x004F2E40] VMCSModes::EditMode::vfunc_143 (47 bytes)
extern "C" void __fastcall fn_004F2E40(void* self) {
    void* m8 = *(void**)((char*)self + 8);
    void* m38 = *(void**)((char*)m8 + 0x38);
    ((void (__fastcall*)(void*))ext_00666120)(m38);
    void* tmp = ((void* (__cdecl*)())ext_00594000)();
    ((void (__fastcall*)(void*))ext_0059B5A0)(tmp);
    void* obj = ((void* (__fastcall*)(void*))ext_00468660)(*(void**)((char*)self + 8));
    (*(void (__fastcall**)(void*))(*(int*)obj + 0xd4))(obj);
}

// [0x004F42F0] VMCSModes::EditMode::vfunc_123 (121 bytes)
extern "C" void ext_004F40C0();
extern "C" void ext_005B1870();
extern "C" void ext_005B5810();
extern "C" int mem_00940694;

extern "C" __declspec(naked) void __fastcall fn_004F42F0(void* self, int edx_unused, int a1) {
    __asm {
        push -0x1
        push 0x88fe48
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x58
        fld dword ptr [mem_00940694]
        push esi
        lea eax, [esp + 0x4]
        fst dword ptr [esp + 0x4]
        push eax
        fst dword ptr [esp + 0xc]
        mov esi, ecx
        fstp dword ptr [esp + 0x10]
        push 0x1
        lea ecx, [esp + 0x18]
        call ext_005B5810
        mov ecx, dword ptr [esp + 0x6c]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x6c], 0x0
        call ext_004F40C0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], 0xffffffff
        call ext_005B1870
        mov ecx, dword ptr [esp + 0x5c]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x64
        ret 0x4
    }
}

extern "C" void ext_004732F0();
extern "C" void ext_00666120();
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" int mem_00AD89B4;

// [0x004F48D0] VMCSModes::EditMode::vfunc_23 (159 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F48D0(void* self) {
    __asm {
        push    -1
        push    0x88fe68
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi+8]
        mov     esi, dword ptr [eax+14h]
        test    esi, esi
        mov     dword ptr [esp+8], esi
        mov     byte ptr [esp+0Ch], 1
        je      L_skip_enter
        cmp     dword ptr mem_00AD89B4, 0
        jne     L_inc
        mov     ecx, esi
        mov     byte ptr [esi+153h], 1
        call    ext_00472350
L_inc:
        add     dword ptr mem_00AD89B4, 1
L_skip_enter:
        mov     ecx, dword ptr [edi+8]
        mov     ecx, dword ptr [ecx+38h]
        mov     dword ptr [esp+18h], 0
        call    ext_00666120
        mov     edx, dword ptr [edi+8]
        mov     ecx, dword ptr [edx+14h]
        call    ext_004732F0
        test    esi, esi
        mov     dword ptr [esp+18h], -1
        je      L_exit
        sub     dword ptr mem_00AD89B4, 1
        jne     L_exit
        mov     ecx, esi
        mov     byte ptr [esi+153h], 0
        call    ext_0046F930
L_exit:
        mov     ecx, dword ptr [esp+10h]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 14h
        ret
    }
}

// [0x004F4970] VMCSModes::EditMode::vfunc_24 (159 bytes)
extern "C" void ext_00473430();
extern "C" void ext_00666120();
extern "C" void ext_00472350();
extern "C" void ext_0046F930();
extern "C" int mem_00AD89B4;
extern "C" __declspec(naked) void __fastcall fn_004F4970(void* self) {
    __asm {
        push    -1
        push    0x88fe68
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi+8]
        mov     esi, dword ptr [eax+14h]
        test    esi, esi
        mov     dword ptr [esp+8], esi
        mov     byte ptr [esp+0Ch], 1
        je      L_skip_enter
        cmp     dword ptr mem_00AD89B4, 0
        jne     L_inc
        mov     ecx, esi
        mov     byte ptr [esi+153h], 1
        call    ext_00472350
L_inc:
        add     dword ptr mem_00AD89B4, 1
L_skip_enter:
        mov     ecx, dword ptr [edi+8]
        mov     ecx, dword ptr [ecx+38h]
        mov     dword ptr [esp+18h], 0
        call    ext_00666120
        mov     edx, dword ptr [edi+8]
        mov     ecx, dword ptr [edx+14h]
        call    ext_00473430
        test    esi, esi
        mov     dword ptr [esp+18h], -1
        je      L_exit
        sub     dword ptr mem_00AD89B4, 1
        jne     L_exit
        mov     ecx, esi
        mov     byte ptr [esi+153h], 0
        call    ext_0046F930
L_exit:
        mov     ecx, dword ptr [esp+10h]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 14h
        ret
    }
}

// [0x004F4A10] VMCSModes::EditMode::vfunc_25 (159 bytes)
extern "C" void ext_00473390();
// [0x004F4A10]
extern "C" __declspec(naked) void __fastcall fn_004F4A10(void* self) {
    __asm {
        push    -1
        push    0x88fe68
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi+8]
        mov     esi, dword ptr [eax+14h]
        test    esi, esi
        mov     dword ptr [esp+8], esi
        mov     byte ptr [esp+0Ch], 1
        je      L_skip_enter
        cmp     dword ptr mem_00AD89B4, 0
        jne     L_inc
        mov     ecx, esi
        mov     byte ptr [esi+153h], 1
        call    ext_00472350
L_inc:
        add     dword ptr mem_00AD89B4, 1
L_skip_enter:
        mov     ecx, dword ptr [edi+8]
        mov     ecx, dword ptr [ecx+38h]
        mov     dword ptr [esp+18h], 0
        call    ext_00666120
        mov     edx, dword ptr [edi+8]
        mov     ecx, dword ptr [edx+14h]
        call    ext_00473390
        test    esi, esi
        mov     dword ptr [esp+18h], -1
        je      L_exit
        sub     dword ptr mem_00AD89B4, 1
        jne     L_exit
        mov     ecx, esi
        mov     byte ptr [esi+153h], 0
        call    ext_0046F930
L_exit:
        mov     ecx, dword ptr [esp+10h]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 14h
        ret
    }
}

// [0x004F4AB0] VMCSModes::EditMode::vfunc_26 (159 bytes)
extern "C" void ext_004734D0();
extern "C" void ext_00666120();
extern "C" void ext_00472350();
extern "C" void ext_0046F930();
extern "C" int mem_00AD89B4;
extern "C" __declspec(naked) void __fastcall fn_004F4AB0(void* self) {
    __asm {
        push    -1
        push    0x88fe68
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi+8]
        mov     esi, dword ptr [eax+14h]
        test    esi, esi
        mov     dword ptr [esp+8], esi
        mov     byte ptr [esp+0Ch], 1
        je      L_skip_enter
        cmp     dword ptr mem_00AD89B4, 0
        jne     L_inc
        mov     ecx, esi
        mov     byte ptr [esi+153h], 1
        call    ext_00472350
L_inc:
        add     dword ptr mem_00AD89B4, 1
L_skip_enter:
        mov     ecx, dword ptr [edi+8]
        mov     ecx, dword ptr [ecx+38h]
        mov     dword ptr [esp+18h], 0
        call    ext_00666120
        mov     edx, dword ptr [edi+8]
        mov     ecx, dword ptr [edx+14h]
        call    ext_004734D0
        test    esi, esi
        mov     dword ptr [esp+18h], -1
        je      L_exit
        sub     dword ptr mem_00AD89B4, 1
        jne     L_exit
        mov     ecx, esi
        mov     byte ptr [esi+153h], 0
        call    ext_0046F930
L_exit:
        mov     ecx, dword ptr [esp+10h]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 14h
        ret
    }
}

// [0x004F4810] VMCSModes::EditMode::vfunc_22 (182 bytes)
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" void ext_00473570();
extern "C" void ext_00666120();
extern "C" int mem_00AD89B4;

// The target carries an SEH frame (fs:[0] push/pop around the body), which
// plain C++ in this toolchain does not reproduce, so this is __declspec(naked).
extern "C" __declspec(naked) void __fastcall fn_004F4810(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88fe68
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebp
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x9c]
        call edx
        mov ebp, dword ptr [esp + 0x20]
        cmp eax, ebp
        je L_004F48B3
        mov eax, dword ptr [edi + 8]
        push esi
        mov esi, dword ptr [eax + 0x14]
        test esi, esi
        mov dword ptr [esp + 0xc], esi
        mov byte ptr [esp + 0x10], 1
        je L_004F4870
        cmp dword ptr [mem_00AD89B4], 0
        jne L_004F4869
        mov ecx, esi
        mov byte ptr [esi + 0x153], 1
        call ext_00472350
L_004F4869:
        add dword ptr [mem_00AD89B4], 1
L_004F4870:
        mov ecx, dword ptr [edi + 8]
        mov ecx, dword ptr [ecx + 0x38]
        mov dword ptr [esp + 0x1c], 0
        call ext_00666120
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [edx + 0x14]
        push ebp
        call ext_00473570
        test esi, esi
        mov dword ptr [esp + 0x1c], 0xffffffff
        je L_004F48B2
        sub dword ptr [mem_00AD89B4], 1
        jne L_004F48B2
        mov ecx, esi
        mov byte ptr [esi + 0x153], 0
        call ext_0046F930
L_004F48B2:
        pop esi
L_004F48B3:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}

extern "C" void ext_004F40C0();
extern "C" void ext_005B1870();
extern "C" void ext_005B5810();
extern "C" int mem_0094CBDC;
extern "C" int mem_0093F8EC;

// [0x004F41E0] VMCSModes::EditMode::vfunc_121 (127 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F41E0(void* self) {
    __asm {
        push    -1
        push    0x88fe48
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x58
        fld     dword ptr [mem_0094CBDC]
        push    esi
        fstp    dword ptr [esp + 4]
        lea     eax, [esp + 4]
        fld     dword ptr [mem_0093F8EC]
        push    eax
        mov     esi, ecx
        fst     dword ptr [esp + 0xc]
        push    5
        fstp    dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x18]
        call    ext_005B5810
        mov     ecx, dword ptr [esp + 0x6c]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x6c], 0
        call    ext_004F40C0
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x64], -1
        call    ext_005B1870
        mov     ecx, dword ptr [esp + 0x5c]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x64
        ret     4
    }
}

// [0x004F4260] VMCSModes::EditMode::vfunc_122 (133 bytes)
extern "C" void ext_004F40C0();
extern "C" void ext_005B1870();
extern "C" void ext_005B5810();
extern "C" int mem_00940694;
extern "C" int mem_00940690;
extern "C" int mem_0094CBE0;

extern "C" __declspec(naked) void __fastcall fn_004F4260(void* self, int edx_unused, int a1) {
    __asm {
        push    -1
        push    0x88fe48
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x58
        fld     dword ptr [mem_00940694]
        push    esi
        fstp    dword ptr [esp + 0x4]
        lea     eax, [esp + 0x4]
        fld     dword ptr [mem_00940690]
        push    eax
        fstp    dword ptr [esp + 0xc]
        mov     esi, ecx
        fld     dword ptr [mem_0094CBE0]
        push    4
        lea     ecx, [esp + 0x18]
        fstp    dword ptr [esp + 0x14]
        call    ext_005B5810
        mov     ecx, dword ptr [esp + 0x6c]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x6c], 0
        call    ext_004F40C0
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x64], -1
        call    ext_005B1870
        mov     ecx, dword ptr [esp + 0x5c]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x64
        ret     4
    }
}

// [0x004F4370] VMCSModes::EditMode::vfunc_124 (133 bytes)
extern "C" int mem_009324A4;

extern "C" __declspec(naked) void __fastcall fn_004F4370(void* self, int edx_unused, int a1) {
    __asm {
        push    -1
        push    0x88fe48
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x58
        fld     dword ptr [mem_009324A4]
        push    esi
        fstp    dword ptr [esp + 0x4]
        lea     eax, [esp + 0x4]
        fld     dword ptr [mem_00940690]
        push    eax
        fstp    dword ptr [esp + 0xc]
        mov     esi, ecx
        fld     dword ptr [mem_00940694]
        push    2
        lea     ecx, [esp + 0x18]
        fstp    dword ptr [esp + 0x14]
        call    ext_005B5810
        mov     ecx, dword ptr [esp + 0x6c]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x6c], 0
        call    ext_004F40C0
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x64], -1
        call    ext_005B1870
        mov     ecx, dword ptr [esp + 0x5c]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x64
        ret     4
    }
}

// [0x004F45B0] VMCSModes::EditMode::vfunc_131 (212 bytes)
extern "C" void ext_00485700();
extern "C" void ext_00594000();
extern "C" __declspec(naked) void __fastcall fn_004F45B0(void* self) {
    __asm {
        push -1
        push 0x88fe68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        push edi
        mov edi, dword ptr [eax + 0x14]
        test edi, edi
        mov ebx, 0x1
        mov dword ptr [esp + 0xc], edi
        mov byte ptr [esp + 0x10], bl
        je L_4F4600
        cmp dword ptr [mem_00AD89B4], 0x0
        jne L_4F45FA
        mov ecx, edi
        mov byte ptr [edi + 0x153], bl
        call ext_00472350
L_4F45FA:
        add dword ptr [mem_00AD89B4], ebx
L_4F4600:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, esi
        mov dword ptr [esp + 0x1c], 0x0
        call eax
        mov ecx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [ecx + 0x38]
        call ext_00666120
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov byte ptr [eax + 0x4], bl
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [edx + 0x14]
        mov esi, dword ptr [eax + 0x34]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ebx
        mov ecx, esi
        call edx
        mov ecx, esi
        call ext_00485700
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x3c]
        mov ecx, esi
        call edx
        test edi, edi
        mov dword ptr [esp + 0x1c], 0xffffffff
        je L_4F4672
        sub dword ptr [mem_00AD89B4], ebx
        jne L_4F4672
        mov ecx, edi
        mov byte ptr [edi + 0x153], 0x0
        call ext_0046F930
L_4F4672:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x004F3020] VMCSModes::EditMode::vfunc_118 (246 bytes)
extern "C" void ext_00485A10();

extern "C" __declspec(naked) void __fastcall fn_004F3020(void* self) {
    __asm {
        push -1
        push 0x88fe68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov ebp, dword ptr [eax + 0x14]
        test ebp, ebp
        mov dword ptr [esp + 8], ebp
        mov byte ptr [esp + 0xc], 1
        je L_004F306D
        cmp dword ptr [mem_00AD89B4], 0
        jne L_004F3066
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 1
        call ext_00472350
L_004F3066:
        add dword ptr [mem_00AD89B4], 1
L_004F306D:
        push ebx
        push edi
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        mov ebx, dword ptr [mem_009542B8]
        mov dword ptr [esp + 0x20], 0
        call eax
        mov edi, eax
        test edi, edi
        je L_004F3099
        mov ebx, dword ptr [edi + 0x38]
L_004F3099:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx + 0x38]
        call ext_00666120
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [edx + 0x14]
        mov esi, dword ptr [eax + 0x34]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push 1
        mov ecx, esi
        call edx
        mov ecx, esi
        call ext_00485A10
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x3c]
        mov ecx, esi
        call edx
        test edi, edi
        je L_004F30E0
        push ebx
        mov ecx, edi
        call ext_00530290
L_004F30E0:
        test ebp, ebp
        pop edi
        mov dword ptr [esp + 0x1c], -1
        pop ebx
        je L_004F3105
        sub dword ptr [mem_00AD89B4], 1
        jne L_004F3105
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 0
        call ext_0046F930
L_004F3105:
        mov ecx, dword ptr [esp + 0x10]
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x004F3120] VMCSModes::EditMode::vfunc_119 (246 bytes)
extern "C" void ext_004857A0();

extern "C" __declspec(naked) void __fastcall fn_004F3120(void* self) {
    __asm {
        push -1
        push 0x88fe68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov ebp, dword ptr [eax + 0x14]
        test ebp, ebp
        mov dword ptr [esp + 8], ebp
        mov byte ptr [esp + 0xc], 1
        je L_004F316D
        cmp dword ptr [mem_00AD89B4], 0
        jne L_004F3166
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 1
        call ext_00472350
L_004F3166:
        add dword ptr [mem_00AD89B4], 1
L_004F316D:
        push ebx
        push edi
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        mov ebx, dword ptr [mem_009542B8]
        mov dword ptr [esp + 0x20], 0
        call eax
        mov edi, eax
        test edi, edi
        je L_004F3199
        mov ebx, dword ptr [edi + 0x38]
L_004F3199:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx + 0x38]
        call ext_00666120
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [edx + 0x14]
        mov esi, dword ptr [eax + 0x34]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push 1
        mov ecx, esi
        call edx
        mov ecx, esi
        call ext_004857A0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x3c]
        mov ecx, esi
        call edx
        test edi, edi
        je L_004F31E0
        push ebx
        mov ecx, edi
        call ext_00530290
L_004F31E0:
        test ebp, ebp
        pop edi
        mov dword ptr [esp + 0x1c], -1
        pop ebx
        je L_004F3205
        sub dword ptr [mem_00AD89B4], 1
        jne L_004F3205
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 0
        call ext_0046F930
L_004F3205:
        mov ecx, dword ptr [esp + 0x10]
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}
