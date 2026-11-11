// Decompiled translation unit: src/classes/OglRenderer.cpp

// [0x00536E80] OglRenderer::vfunc_120 (28 bytes)
extern "C" void ext_0065C650();
extern "C" int mem_009253E0;

extern "C" __declspec(naked) void __fastcall fn_00536E80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x30], 0
        jne L_skip
        push 0
        push 0
        call dword ptr [mem_009253E0]
    L_skip:
        lea ecx, [esi + 0x10]
        pop esi
        jmp ext_0065C650
    }
}

// [0x00533210] OglRenderer::vfunc_4 (33 bytes)
extern "C" void __fastcall fn_00533210(void* self, int edx_unused, int* a1) {
    char* p = (char*)self;
    *(int*)(p + 0x41c) = a1[0];
    *(int*)(p + 0x420) = a1[1];
    *(int*)(p + 0x424) = a1[2];
}

// [0x00536D90] OglRenderer::vfunc_8 (23 bytes)
extern "C" void ext_00541B50();

extern "C" __declspec(naked) void __fastcall fn_00536D90(void* self) {
    __asm {
        add ecx, 0x9c
        cmp byte ptr [ecx + 0x13d], 0
        sete al
        push eax
        call ext_00541B50
        ret
    }
}

// [0x00532F60] OglRenderer::vfunc_113 (25 bytes)
extern "C" void ext_0067B410();
extern "C" int mem_00925660;

extern "C" __declspec(naked) void __fastcall fn_00532F60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x48]
        call ext_0067B410
        mov eax, dword ptr [esi + 0x1c]
        push 1
        push eax
        call dword ptr [mem_00925660]
        pop esi
        ret
    }
}

extern "C" void ext_0065C640();

// [0x00536E50] OglRenderer::vfunc_119 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_00536E50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x10]
        call ext_0065C640
        cmp dword ptr [esi + 0x30], 0
        jne done
        mov eax, dword ptr [esi + 0x28]
        mov ecx, dword ptr [esi + 0x24]
        push eax
        push ecx
        call dword ptr [mem_009253E0]
    done:
        pop esi
        ret
    }
}

extern "C" void ext_00532DD0();
extern "C" void ext_00532DB0();

// [0x00534350] OglRenderer::vfunc_104 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_00534350(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        je  done
        cmp byte ptr [ecx + 0491h], 0
        mov dword ptr [esp + 4], eax
        je  alt
        jmp ext_00532DD0
    alt:
        jmp ext_00532DB0
    done:
        ret 4
    }
}

// [0x005330D0] OglRenderer::vfunc_117 (39 bytes)
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_005330D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1d8]
        push edi
        call edx
        mov edi, eax
        mov ecx, edi
        call ext_0065C640
        mov ecx, edi
        pop edi
        mov dword ptr [esi + 0x30], 0
        pop esi
        jmp ext_0065C650
    }
}

// [0x00536D00] OglRenderer::vfunc_12 (42 bytes)
extern "C" __declspec(naked) void __fastcall fn_00536D00(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x194]
        mov edx, eax
        shl edx, 4
        sub edx, eax
        cmp byte ptr [ecx + 4*edx + 0xb8], 0
        lea eax, [ecx + 4*edx + 0xa4]
        sete dl
        mov byte ptr [eax + 0x14], dl
        mov byte ptr [ecx + 0x464], 1
        ret
    }
}

// [0x00536D40] OglRenderer::vfunc_6 (42 bytes)
extern "C" void __fastcall fn_00536D40(void* self, int edx_unused, float* a1) {
    char* p = (char*)self;
    *(float*)(p + 0x1b4) = a1[0];
    *(float*)(p + 0x1b8) = a1[1];
    *(float*)(p + 0x1bc) = a1[2];
    *(float*)(p + 0x1c0) = a1[3];
}

// [0x00533D10] OglRenderer::vfunc_40 (44 bytes)
extern "C" void ext_00540F60();

extern "C" __declspec(naked) void __fastcall fn_00533D10(void* self, int edx_unused, int a1_unused, int a2) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        sub esp, 0x8
        mov esi, ecx
        mov eax, esp
        lea ecx, [esi + 0x9c]
        mov dword ptr [eax], 0x93a444
        mov dword ptr [eax + 0x4], edi
        call ext_00540F60
        mov dword ptr [esi + 0x498], edi
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x00533340] OglRenderer::vfunc_15 (53 bytes)
extern "C" __declspec(naked) void __fastcall fn_00533340(void* self, int edx_unused, float a1) {
    __asm {
        cmp byte ptr [ecx + 0x379], 0
        fld dword ptr [esp + 0x4]
        je L_else
        fst dword ptr [ecx + 0x38c]
        jmp L_join
    L_else:
        fst dword ptr [ecx + 0x37c]
    L_join:
        mov eax, dword ptr [ecx]
        fstp dword ptr [ecx + 0x454]
        mov edx, dword ptr [eax + 0x154]
        mov byte ptr [ecx + 0x430], 1
        call edx
        ret 0x4
    }
}

// [0x00533380] OglRenderer::vfunc_16 (53 bytes)
extern "C" __declspec(naked) void __fastcall fn_00533380(void* self, int edx_unused, float a1) {
    __asm {
        cmp byte ptr [ecx + 0x379], 0
        fld dword ptr [esp + 0x4]
        je L_else
        fst dword ptr [ecx + 0x390]
        jmp L_join
    L_else:
        fst dword ptr [ecx + 0x380]
    L_join:
        mov eax, dword ptr [ecx]
        fstp dword ptr [ecx + 0x458]
        mov edx, dword ptr [eax + 0x154]
        mov byte ptr [ecx + 0x430], 1
        call edx
        ret 0x4
    }
}

// [0x005333C0] OglRenderer::vfunc_17 (53 bytes)
extern "C" __declspec(naked) void __fastcall fn_005333C0(void* self, int edx_unused, int a1) {
    __asm {
        cmp byte ptr [ecx + 0x379], 0
        mov eax, dword ptr [esp + 0x4]
        je L_else
        mov dword ptr [ecx + 0x398], eax
        jmp L_join
    L_else:
        mov dword ptr [ecx + 0x388], eax
    L_join:
        mov dword ptr [ecx + 0x450], eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        mov byte ptr [ecx + 0x430], 1
        call edx
        ret 4
    }
}

// [0x00533400] OglRenderer::vfunc_18 (53 bytes)
extern "C" __declspec(naked) void __fastcall fn_00533400(void* self, int edx_unused, int a1) {
    __asm {
        cmp byte ptr [ecx + 0x379], 0
        mov eax, dword ptr [esp + 0x4]
        je L_else
        mov dword ptr [ecx + 0x394], eax
        jmp L_join
    L_else:
        mov dword ptr [ecx + 0x384], eax
    L_join:
        mov dword ptr [ecx + 0x44c], eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        mov byte ptr [ecx + 0x430], 1
        call edx
        ret 4
    }
}

// [0x00533090] OglRenderer::vfunc_116 (55 bytes)
extern "C" void ext_0065C640();
extern "C" int mem_00924244;

extern "C" __declspec(naked) void __fastcall fn_00533090(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1d8]
        push edi
        call edx
        mov edi, eax
        mov ecx, edi
        call ext_0065C640
        call dword ptr [mem_00924244]
        mov ecx, dword ptr [esi + 0x24]
        mov dword ptr [esi + 0x30], eax
        mov eax, dword ptr [esi + 0x28]
        push eax
        push ecx
        call dword ptr [mem_009253E0]
        mov ecx, edi
        pop edi
        pop esi
        jmp ext_0065C650
    }
}

// [0x005365A0] OglRenderer::vfunc_1 (96 bytes)
extern "C" void ext_005364D0();
extern "C" void ext_0065C650();
extern "C" __declspec(naked) void __fastcall fn_005365A0(void* self) {
    __asm {
        push -1
        push 0x008a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1d8]
        push edi
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 8], edi
        call ext_0065C640
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0
        call ext_005364D0
        mov ecx, edi
        mov dword ptr [esp + 0x14], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005373F0] OglRenderer::vfunc_44 (63 bytes)
extern "C" void ext_00537380();

extern "C" __declspec(naked) void __fastcall fn_005373F0(void* self, int edx_unused, unsigned char a1) {
    __asm {
        push ebx
        mov bl, byte ptr [esp + 8]
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x376], bl
        je L_done
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c4]
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1d4]
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi + 0x370]
        push eax
        mov ecx, esi
        mov byte ptr [esi + 0x376], bl
        call ext_00537380
    L_done:
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00533910] OglRenderer::vfunc_20 (57 bytes)
extern "C" void ext_0054C7F0();
extern "C" void ext_0054C770();

extern "C" __declspec(naked) void __fastcall fn_00533910(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x10]
        lea ebx, [esi + 0x1dc]
        mov ecx, ebx
        mov dword ptr [esi + 0x3b8], edi
        call ext_0054C7F0
        mov eax, dword ptr [esi + 0x24]
        push eax
        mov ecx, ebx
        mov dword ptr [esi + 0x1e0], edi
        mov dword ptr [esi + 0x204], edi
        call ext_0054C770
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x005338B0] OglRenderer::vfunc_19 (94 bytes)
extern "C" void ext_0054C7F0();
extern "C" void ext_0054C770();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FD4;

extern "C" __declspec(naked) void __fastcall fn_005338B0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov esi, ecx
        push edi
        lea ecx, [esi + 39Ch]
        call dword ptr [mem_00924FDC]
        lea ebx, [esi + 1DCh]
        mov ecx, ebx
        call ext_0054C7F0
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 1E4h]
        call dword ptr [mem_00924FD4]
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 208h]
        call dword ptr [mem_00924FD4]
        mov eax, dword ptr [esi + 24h]
        push eax
        mov ecx, ebx
        call ext_0054C770
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}
