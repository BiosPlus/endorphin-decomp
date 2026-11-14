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

// [0x005332A0] OglRenderer::vfunc_14 (147 bytes)
extern "C" __declspec(naked) void __fastcall fn_005332A0(void* self, int edx_unused, int a1) {
    __asm {
        mov al, byte ptr [esp + 4]
        test al, al
        mov byte ptr [ecx + 379h], al
        je short L1
        fld dword ptr [ecx + 38Ch]
        jmp short L2
    L1:
        fld dword ptr [ecx + 37Ch]
    L2:
        test al, al
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fstp dword ptr [ecx + 454h]
        je short L3
        fld dword ptr [ecx + 390h]
        jmp short L4
    L3:
        fld dword ptr [ecx + 380h]
    L4:
        test al, al
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fstp dword ptr [ecx + 458h]
        je short L5
        mov eax, dword ptr [ecx + 394h]
        jmp short L6
    L5:
        mov eax, dword ptr [ecx + 384h]
    L6:
        mov dword ptr [ecx + 44Ch], eax
        cmp byte ptr [ecx + 379h], 0
        je short L7
        mov eax, dword ptr [ecx + 398h]
        jmp short L8
    L7:
        mov eax, dword ptr [ecx + 388h]
    L8:
        mov edx, dword ptr [ecx]
        mov dword ptr [ecx + 450h], eax
        mov eax, dword ptr [edx + 154h]
        mov byte ptr [ecx + 430h], 1
        call eax
        ret 4
    }
}

// [0x0052EEB0] OglRenderer::vfunc_103 (95 bytes)
extern "C" void ext_0053A3E0();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_0052EEB0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x18
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je no_alloc
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, eax
        call ext_0053A3E0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
no_alloc:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00533100] OglRenderer::vfunc_87 (174 bytes)
extern "C" void ext_00532C90();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_0067ADD0();

extern "C" __declspec(naked) void __fastcall fn_00533100(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 08a56c8h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 1d8h]
        push edi
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 8], edi
        call ext_0065C640
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 1dch]
        mov ecx, esi
        mov dword ptr [esp + 14h], 0
        call edx
        cmp byte ptr [esi + 493h], 0
        je L_0533100_after_loop
        mov edi, edi
    L_0533100_loop:
        push 5
        call ext_0067ADD0
        add esp, 4
        cmp byte ptr [esi + 493h], 0
        jne L_0533100_loop
    L_0533100_after_loop:
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 1ch]
        push eax
        push ecx
        mov ecx, esi
        call ext_00532C90
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 1e0h]
        mov ecx, esi
        call eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 154h]
        mov ecx, esi
        call eax
        mov ecx, edi
        mov dword ptr [esp + 14h], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret 8
    }
}

// [0x00533CC0] OglRenderer::vfunc_84 (43 bytes)
extern "C" void ext_00541260();
extern "C" void __fastcall fn_00533CC0(void* self, int edx_unused, void* a1) {
    ((void (__thiscall*)(void*, void*))ext_00541260)((char*)self + 0x9c, a1);
    typedef unsigned char (__thiscall* VFunc49)(void*);
    *((unsigned char*)a1 + 0x8c) = (*(VFunc49**)self)[0xc4 / 4](self);
}

// [0x00533C90] OglRenderer::vfunc_83 (42 bytes)
extern "C" void ext_00541C20();
extern "C" void __fastcall fn_00533C90(void* self, int edx_unused, void* a1) {
    ((void (__thiscall*)(void*, void*))ext_00541C20)((char*)self + 0x9c, a1);
    typedef void (__thiscall* VFunc10)(void*, unsigned int);
    (*(VFunc10**)self)[0x28 / 4](self, (unsigned int)*((unsigned char*)a1 + 0x8c));
}

// [0x005360B0] OglRenderer::vfunc_0_off_18 (60 bytes)
extern "C" float __fastcall ext_00679A50(void* self);
extern "C" void __fastcall ext_00534F30(void* self);
extern "C" int mem_0092F678;
extern "C" __declspec(naked) bool __fastcall fn_005360B0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x358]
        lea ecx, [esi + 0x24]
        call ext_00679A50
        test edi, edi
        mov dword ptr [esp + 0x8], edi
        fild dword ptr [esp + 0x8]
        jge L_005360D5
        fadd dword ptr [mem_0092F678]
L_005360D5:
        fcompp
        fnstsw ax
        test ah, 0x41
        jp L_005360E6
        lea ecx, [esi - 0x18]
        call ext_00534F30
L_005360E6:
        pop edi
        mov al, 0x1
        pop esi
        pop ecx
        ret
    }
}

// [0x00533250] OglRenderer::vfunc_51 (68 bytes)
extern "C" void ext_0052AD00();
extern "C" __declspec(naked) void __fastcall fn_00533250(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        mov     edi, 0x8
        lea     ebp, [ecx + 0x300]
        sub     edi, esi
        mov     ebx, 0x4
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_loop:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        mov     ecx, ebp
        call    ext_0052AD00
        lea     ecx, [edi + esi]
        fld     dword ptr [ecx + eax]
        add     esi, 0x4
        sub     ebx, 0x1
        fstp    dword ptr [esi - 0x4]
        jne     L_loop
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}

// [0x005360F0] OglRenderer::vfunc_86 (71 bytes)
extern "C" __declspec(naked) void __fastcall fn_005360F0(void* self, int edx_unused, unsigned char flag) {
    __asm {
        cmp byte ptr [esp + 0x4], 0x0
        push esi
        mov esi, ecx
        mov byte ptr [esi + 0x49c], 0x1
        jne call_534f30
        push edi
        mov edi, dword ptr [esi + 0x370]
        lea ecx, [esi + 0x3c]
        call ext_00679A50
        test edi, edi
        mov dword ptr [esp + 0xc], edi
        fild dword ptr [esp + 0xc]
        jge fcmp_now
        fadd dword ptr [mem_0092F678]
fcmp_now:
        fcompp
        pop edi
        fnstsw ax
        test ah, 0x41
        jp done_5360f0
call_534f30:
        mov ecx, esi
        call ext_00534F30
done_5360f0:
        pop esi
        ret 0x4
    }
}

// [0x00534D20] OglRenderer::vfunc_96 (71 bytes)
extern "C" void ext_00532E90();
extern "C" void ext_005343A0();
extern "C" void ext_0053AFA0();
extern "C" __declspec(naked) void __fastcall fn_00534D20(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push esi
        push edi
        push ebx
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_005343A0
        mov esi, eax
        test esi, esi
        je done
        mov edx, dword ptr [esp + 0x14]
        push edx
        mov ecx, esi
        call ext_0053AFA0
        push ebx
        mov ecx, edi
        call ext_00532E90
        test eax, eax
        je skip
        mov ecx, dword ptr [esi + 0x38]
        mov dword ptr [eax + 0x1c], ecx
    skip:
        mov eax, esi
    done:
        pop edi
        pop esi
        pop ebx
        ret 0x10
    }
}

// [0x00534DC0] OglRenderer::vfunc_94 (71 bytes)
extern "C" void ext_0053B040();
extern "C" __declspec(naked) void __fastcall fn_00534DC0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push esi
        push edi
        push ebx
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_005343A0
        mov esi, eax
        test esi, esi
        je done
        mov edx, dword ptr [esp + 0x14]
        push edx
        mov ecx, esi
        call ext_0053B040
        push ebx
        mov ecx, edi
        call ext_00532E90
        test eax, eax
        je skip
        mov ecx, dword ptr [esi + 0x38]
        mov dword ptr [eax + 0x1c], ecx
    skip:
        mov eax, esi
    done:
        pop edi
        pop esi
        pop ebx
        ret 0x14
    }
}

// [0x00535C30] OglRenderer::vfunc_101 (71 bytes)
extern "C" void ext_00534E60();
extern "C" void ext_0053AFA0();
extern "C" void ext_00532E90();
extern "C" __declspec(naked) void __fastcall fn_00535C30(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push esi
        push edi
        push ebx
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00534E60
        mov esi, eax
        test esi, esi
        je done
        mov edx, dword ptr [esp + 0x14]
        push edx
        mov ecx, esi
        call ext_0053AFA0
        push ebx
        mov ecx, edi
        call ext_00532E90
        test eax, eax
        je skip
        mov ecx, dword ptr [esi + 0x38]
        mov dword ptr [eax + 0x1c], ecx
    skip:
        mov eax, esi
    done:
        pop edi
        pop esi
        pop ebx
        ret 0x10
    }
}

// [0x00535C80] OglRenderer::vfunc_99 (71 bytes)
extern "C" void ext_00534E60();
extern "C" void ext_0053B040();
extern "C" void ext_00532E90();
extern "C" __declspec(naked) void __fastcall fn_00535C80(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push esi
        push edi
        push ebx
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00534E60
        mov esi, eax
        test esi, esi
        je done
        mov edx, dword ptr [esp + 0x14]
        push edx
        mov ecx, esi
        call ext_0053B040
        push ebx
        mov ecx, edi
        call ext_00532E90
        test eax, eax
        je skip
        mov ecx, dword ptr [esi + 0x38]
        mov dword ptr [eax + 0x1c], ecx
    skip:
        mov eax, esi
    done:
        pop edi
        pop esi
        pop ebx
        ret 0x10
    }
}

// [0x00534D70] OglRenderer::vfunc_95 (76 bytes)
extern "C" void ext_00532E90();
extern "C" void ext_005343A0();
extern "C" void ext_0053AFF0();
extern "C" __declspec(naked) void __fastcall fn_00534D70(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push esi
        push edi
        push ebx
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_005343A0
        mov esi, eax
        test esi, esi
        je done
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        push edx
        push eax
        mov ecx, esi
        call ext_0053AFF0
        push ebx
        mov ecx, edi
        call ext_00532E90
        test eax, eax
        je skip
        mov ecx, dword ptr [esi + 0x38]
        mov dword ptr [eax + 0x1c], ecx
    skip:
        mov eax, esi
    done:
        pop edi
        pop esi
        pop ebx
        ret 0x14
    }
}

// [0x00534E10] OglRenderer::vfunc_93 (76 bytes)
extern "C" void ext_0053B0E0();
extern "C" __declspec(naked) void __fastcall fn_00534E10(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        mov eax, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        push edi
        push ebx
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_005343A0
        mov esi, eax
        test esi, esi
        je done
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x14]
        push edx
        push eax
        mov ecx, esi
        call ext_0053B0E0
        push ebx
        mov ecx, edi
        call ext_00532E90
        test eax, eax
        je skip
        mov ecx, dword ptr [esi + 0x38]
        mov dword ptr [eax + 0x1c], ecx
    skip:
        mov eax, esi
    done:
        pop edi
        pop esi
        pop ebx
        ret 0x18
    }
}

// [0x00535CD0] OglRenderer::vfunc_98 (76 bytes)
extern "C" void ext_00534E60();
extern "C" void ext_0053B090();
extern "C" void ext_00532E90();

extern "C" __declspec(naked) void __fastcall fn_00535CD0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push esi
        push edi
        push ebx
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00534E60
        mov esi, eax
        test esi, esi
        je done
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        push edx
        push eax
        mov ecx, esi
        call ext_0053B090
        push ebx
        mov ecx, edi
        call ext_00532E90
        test eax, eax
        je skip
        mov ecx, dword ptr [esi + 0x38]
        mov dword ptr [eax + 0x1c], ecx
    skip:
        mov eax, esi
    done:
        pop edi
        pop esi
        pop ebx
        ret 0x14
    }
}

// [0x00535D20] OglRenderer::vfunc_100 (76 bytes)
extern "C" void ext_00534E60();
extern "C" void ext_0053AFF0();
extern "C" void ext_00532E90();

extern "C" __declspec(naked) void __fastcall fn_00535D20(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push esi
        push edi
        push ebx
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00534E60
        mov esi, eax
        test esi, esi
        je done
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        push edx
        push eax
        mov ecx, esi
        call ext_0053AFF0
        push ebx
        mov ecx, edi
        call ext_00532E90
        test eax, eax
        je skip
        mov ecx, dword ptr [esi + 0x38]
        mov dword ptr [eax + 0x1c], ecx
    skip:
        mov eax, esi
    done:
        pop edi
        pop esi
        pop ebx
        ret 0x14
    }
}

// [0x00537950] OglRenderer::vfunc_1_off_8 (78 bytes)
extern "C" void ext_005331B0();
extern "C" void ext_00537870();
extern "C" void ext_0067AEB0();
extern "C" int mem_00924248;

extern "C" __declspec(naked) void __fastcall fn_00537950(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi - 0x8]
        mov ecx, edi
        call ext_00537870
        mov ecx, edi
        call ext_00534F30
        mov eax, dword ptr [esi + 0x498]
        push eax
        mov ecx, esi
        call ext_0067AEB0
        cmp byte ptr [esi + 0x4], 0
        je done
        push ebx
        mov ebx, dword ptr [mem_00924248]
    loop_start:
        cmp byte ptr [esi + 0x48a], 0
        je sleep_call
        mov ecx, edi
        call ext_005331B0
    sleep_call:
        push 0
        call ebx
        cmp byte ptr [esi + 0x4], 0
        jne loop_start
        pop ebx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x005372F0] OglRenderer::vfunc_2 (103 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_00532CC0();
extern "C" void ext_005371F0();
extern "C" void ext_0054C7F0();
extern "C" void ext_0067B050();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_00954D68;

extern "C" __declspec(naked) void __fastcall fn_005372F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_005371F0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c4]
        mov ecx, esi
        call edx
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        push offset mem_00954D68
        push ecx
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        lea ecx, [esi + 8]
        call ext_0067B050
        cmp byte ptr [esi + 0x34], 0
        je L_done
        mov ecx, esi
        call ext_00532CC0
        lea ecx, [esi + 0x1dc]
        call ext_0054C7F0
        lea ecx, [esi + 0x200]
        call ext_0054C7F0
    L_done:
        mov byte ptr [esi + 0x34], 0
        pop esi
        ret
    }
}

// [0x005336B0] OglRenderer::vfunc_110 (196 bytes)
extern "C" void ext_006690D0();
extern "C" void ext_00669AD0();
extern "C" int mem_00924FE4;
extern "C" int mem_00A9F06C;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_005336B0(void* self) {
    __asm {
        push -1
        push 0x89584b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x54
        push esi
        push edi
        mov esi, ecx
        push 0x9547d4
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [mem_00A9F06C]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x68], 0
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x24]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        lea eax, [esp + 0x48]
        push eax
        mov byte ptr [esp + 0x70], 1
        call ext_006690D0
        mov ecx, eax
        call ext_00669AD0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x64], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x64], 4
        call dword ptr [mem_00924FF4]
        mov edi, dword ptr [esi + 0x300]
        add esi, 0x300
        push 0
        lea ecx, [esp + 0x44]
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [edi + 0x24]
        push eax
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0x64], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x60
        ret
    }
}

// [0x00533AF0] OglRenderer::vfunc_79 (208 bytes)
extern "C" void ext_006690D0();
extern "C" void ext_00669AD0();
extern "C" int mem_00924FE4;
extern "C" int mem_00A9F208;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_00533AF0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89587b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x5c
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov esi, ecx
        xor ebx, ebx
        push 0x9547e4
        lea ecx, [ebp - 0x4c]
        mov dword ptr [ebp - 0x4], ebx
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [mem_00A9F208]
        push eax
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 1
        call dword ptr [mem_00924FE4]
        mov byte ptr [ebp - 0x4], 2
        call ext_006690D0
        lea ecx, [ebp - 0x4c]
        push ecx
        lea edx, [ebp - 0x30]
        push edx
        lea ecx, [ebp - 0x68]
        push ecx
        mov ecx, eax
        call ext_00669AD0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x4c]
        mov byte ptr [ebp - 0x4], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x68]
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esi + 0x33c]
        lea ecx, [esi + 0x33c]
        push ebx
        push eax
        mov eax, dword ptr [edx + 0x24]
        call eax
        lea ecx, [ebp - 0x68]
        mov byte ptr [ebp - 0x4], bl
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        mov ecx, dword ptr [ebp + 0x8]
        call dword ptr [mem_00924FDC]
        mov eax, 0x533b97
        ret
    }
}

// [0x00535D70] OglRenderer::vfunc_108 (819 bytes)
extern "C" void ext_00532C90();
extern "C" void ext_00534060();
extern "C" void ext_005348E0();
extern "C" void ext_005409C0();
extern "C" void ext_00541220();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" int mem_00925474;
extern "C" int mem_00925208;
extern "C" int mem_0092544C;
extern "C" int mem_00925440;
extern "C" int mem_00925400;
extern "C" int mem_009253FC;
extern "C" int mem_009253D8;
extern "C" int mem_009253D4;
extern "C" int mem_00925470;

extern "C" __declspec(naked) void* __fastcall fn_00535D70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 08a33c8h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ecx, eax
        mov dword ptr [esp + 0x1c], eax
        call ext_0065C640
        mov ecx, edi
        mov dword ptr [esp + 0x38], 0
        call ext_00534F30
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x1dc]
        mov ecx, edi
        call edx
        lea eax, [esp + 0x20]
        push eax
        push 0xba2
        call dword ptr [mem_00925474]
        mov ebx, dword ptr [esp + 0x40]
        cmp ebx, -1
        mov eax, dword ptr [esp + 0x28]
        je L_0535ddf
        cmp ebx, eax
        jle L_0535de5
    L_0535ddf:
        mov dword ptr [esp + 0x40], eax
        mov ebx, eax
    L_0535de5:
        mov esi, dword ptr [esp + 0x44]
        cmp esi, -1
        mov eax, dword ptr [esp + 0x2c]
        je L_0535df6
        cmp esi, eax
        jle L_0535dfc
    L_0535df6:
        mov dword ptr [esp + 0x44], eax
        mov esi, eax
    L_0535dfc:
        mov ecx, ebx
        imul ecx, esi
        lea edx, [4*ecx + 0x28]
        push edx
        call dword ptr [mem_00925208]
        mov ebp, eax
        xor eax, eax
        add esp, 4
        mov dword ptr [ebp], 0x28
        mov dword ptr [ebp + 0x4], ebx
        mov dword ptr [ebp + 0x8], esi
        mov word ptr [ebp + 0xc], 1
        mov word ptr [ebp + 0xe], 0x18
        mov dword ptr [ebp + 0x10], eax
        mov dword ptr [ebp + 0x14], eax
        mov dword ptr [ebp + 0x18], eax
        mov dword ptr [ebp + 0x1c], eax
        mov dword ptr [ebp + 0x20], eax
        mov dword ptr [ebp + 0x24], eax
        mov eax, dword ptr [edi + 0x1a4]
        push 0x405
        mov dword ptr [esp + 0x1c], eax
        call dword ptr [mem_0092544C]
        push 0x4100
        call dword ptr [mem_00925440]
        push esi
        push ebx
        mov ecx, edi
        call ext_00532C90
        mov ecx, dword ptr [edi + 0x194]
        lea esi, [edi + 0x9c]
        xor ebx, ebx
        mov dword ptr [esi + 0xfc], ecx
        cmp dword ptr [edi + 0x1a4], ebx
        jne L_0535f3f
        mov eax, ecx
        mov edx, ecx
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [esi + 4*edx + 0x18]
        sub eax, dword ptr [esi + 4*edx + 0x10]
        mov ecx, dword ptr [esi + 4*edx + 0x14]
        sub ecx, dword ptr [esi + 4*edx + 0xc]
        lea ebx, [esi + 4*edx + 0x8]
        mov edx, dword ptr [ebx + 8]
        push eax
        mov eax, dword ptr [ebx + 4]
        push ecx
        push edx
        push eax
        call dword ptr [mem_00925400]
        mov ecx, dword ptr [ebx + 0x10]
        sub ecx, dword ptr [ebx + 8]
        mov edx, dword ptr [ebx + 0xc]
        sub edx, dword ptr [ebx + 4]
        mov eax, dword ptr [ebx + 8]
        push ecx
        mov ecx, dword ptr [ebx + 4]
        push edx
        push eax
        push ecx
        call dword ptr [mem_009253FC]
        mov eax, dword ptr [esi + 0xf8]
        mov edx, eax
        shl edx, 4
        sub edx, eax
        push 0x1701
        lea ebx, [esi + 4*edx + 8]
        call dword ptr [mem_009253D8]
        call dword ptr [mem_009253D4]
        mov ecx, dword ptr [ebx]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10]
        call edx
        mov eax, dword ptr [esi + 0xf8]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea edx, [esi + 4*ecx + 8]
        push 0x1c00
        push edx
        mov ecx, edi
        call ext_005348E0
        mov eax, dword ptr [esi + 0xf8]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea edx, [esi + 4*ecx + 8]
        push 0x1c00
        push edx
        mov ecx, edi
        call ext_00534060
        jmp L_0536010
    L_0535f3f:
        mov dword ptr [esp + 0x10], ebx
    L_0535f43:
        mov eax, dword ptr [ebx + esi + 0x18]
        sub eax, dword ptr [ebx + esi + 0x10]
        mov ecx, dword ptr [ebx + esi + 0x14]
        sub ecx, dword ptr [ebx + esi + 0xc]
        mov edx, dword ptr [ebx + esi + 0x10]
        push eax
        mov eax, dword ptr [ebx + esi + 0xc]
        push ecx
        push edx
        push eax
        call dword ptr [mem_00925400]
        mov ecx, dword ptr [ebx + esi + 0x18]
        sub ecx, dword ptr [ebx + esi + 0x10]
        mov edx, dword ptr [ebx + esi + 0x14]
        sub edx, dword ptr [ebx + esi + 0xc]
        mov eax, dword ptr [ebx + esi + 0x10]
        push ecx
        mov ecx, dword ptr [ebx + esi + 0xc]
        push edx
        push eax
        push ecx
        call dword ptr [mem_009253FC]
        mov edx, dword ptr [esp + 0x10]
        mov eax, edx
        mov ecx, edx
        shl ecx, 4
        sub ecx, eax
        mov dword ptr [esi + 0xfc], edx
        lea edx, [esi + 4*ecx + 8]
        push 0x1701
        mov dword ptr [esp + 0x18], edx
        call dword ptr [mem_009253D8]
        call dword ptr [mem_009253D4]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x10]
        call eax
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea edx, [esi + 4*ecx + 8]
        push 0x1c00
        push edx
        mov ecx, edi
        call ext_005348E0
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea edx, [esi + 4*ecx + 8]
        push 0x1c00
        push edx
        mov ecx, edi
        call ext_00534060
        add dword ptr [esp + 0x10], 1
        add ebx, 0x3c
        cmp ebx, 0xf0
        jl L_0535f43
    L_0536010:
        mov ecx, esi
        lea ebx, [ebp + 0x28]
        call ext_005409C0
        push 0x405
        call dword ptr [mem_0092544C]
        mov eax, dword ptr [esp + 0x44]
        mov ecx, dword ptr [esp + 0x40]
        push ebx
        push 0x1401
        push 0x80e0
        push eax
        push ecx
        push 0
        push 0
        call dword ptr [mem_00925470]
        mov edx, dword ptr [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_00541220
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x28]
        push eax
        push ecx
        mov ecx, edi
        call ext_00532C90
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x1e0]
        mov ecx, edi
        call eax
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x158]
        push 1
        mov ecx, edi
        call eax
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x38], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 8
    }
}

// [0x00533BC0] OglRenderer::vfunc_80 (134 bytes)
extern "C" void ext_00538FA0();
extern "C" void ext_0054D0D0();

extern "C" __declspec(naked) void __fastcall fn_00533BC0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea esi, [edi + 0x33c]
        mov ecx, esi
        call ext_0054D0D0
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x24]
        push 0
        mov ecx, edi
        call edx
        cmp byte ptr [esi + 0x3d], 0
        je L_ecx_a
        mov ecx, dword ptr [esi + 0x5c]
        jmp L_ecx_b
    L_ecx_a:
        mov ecx, dword ptr [esi + 0x4c]
    L_ecx_b:
        cmp byte ptr [esi + 0x3d], 0
        je L_eax_a
        mov eax, dword ptr [esi + 0x58]
        jmp L_eax_b
    L_eax_a:
        mov eax, dword ptr [esi + 0x48]
    L_eax_b:
        cmp byte ptr [esi + 0x3d], 0
        je L_f1_a
        fld dword ptr [esi + 0x54]
        jmp L_f1_b
    L_f1_a:
        fld dword ptr [esi + 0x44]
    L_f1_b:
        cmp byte ptr [esi + 0x3d], 0
        fstp dword ptr [esp + 8]
        je L_f2_a
        fld dword ptr [esi + 0x50]
        jmp L_f2_b
    L_f2_a:
        fld dword ptr [esi + 0x40]
    L_f2_b:
        push ecx
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        push eax
        sub esp, 8
        fstp dword ptr [esp + 4]
        lea ecx, [edi + 0x42c]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        call ext_00538FA0
        pop edi
        pop esi
        add esp, 8
        ret 4
    }
}

// [0x00533790] OglRenderer::vfunc_112 (247 bytes)
extern "C" void ext_0052AF80();
extern "C" void ext_006690D0();
extern "C" void ext_00669AD0();
extern "C" int mem_00924FE4;
extern "C" int mem_00A9F06C;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" __declspec(naked) void __fastcall fn_00533790(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x89584b
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x54
        push esi
        push edi
        mov esi, ecx
        push 0x9547d4
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [mem_00A9F06C]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x68], 0x0
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x24]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        lea eax, [esp + 0x48]
        push eax
        mov byte ptr [esp + 0x70], 0x1
        call ext_006690D0
        mov ecx, eax
        call ext_00669AD0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x64], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x64], 0x4
        call dword ptr [mem_00924FF4]
        mov edi, dword ptr [esi + 0x300]
        add esi, 0x300
        push 0x0
        lea ecx, [esp + 0x44]
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [edi + 0x20]
        push eax
        mov ecx, esi
        call edx
        mov eax, dword ptr [esp + 0x6c]
        cmp eax, 0xb53a34
        je L_end
        cmp eax, 0xb53b30
        je L_end
        cmp eax, 0xb53ab0
        je L_end
        cmp eax, 0xb53a70
        je L_end
        cmp eax, 0xb53af0
        je L_end
        push 0x1
        push eax
        mov ecx, esi
        call ext_0052AF80
L_end:
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0x64], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x60
        ret 0x4
    }
}

// [0x00534450] OglRenderer::vfunc_97 (281 bytes)
extern "C" void ext_0052AD00();
extern "C" void ext_00532E40();
extern "C" void ext_00532E90();
extern "C" void ext_0053B040();
extern "C" void ext_0053C910();
extern "C" void ext_005B1870();
extern "C" void ext_005B3500();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00534450(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8958ac
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x6c
        push esi
        push edi
        push 0x64
        mov edi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x7c], esi
        je L_skip_alloc
        mov ecx, eax
        call ext_0053C910
        mov esi, eax
L_skip_alloc:
        push ebx
        push 0x953878
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x84], 0xffffffff
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [edi + 0x300]
        mov dword ptr [esp + 0x84], 1
        call ext_0052AD00
        lea ecx, [esp + 0x10]
        mov ebx, eax
        mov dword ptr [esp + 0x80], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x88]
        push ecx
        mov ecx, esi
        mov dword ptr [esi + 0x24], ebx
        call ext_0053B040
        mov edx, dword ptr [esp + 0x90]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esi + 0x3c], edx
        call ext_005B3500
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x64]
        push 0
        lea ecx, [edi + 0x33c]
        push ecx
        lea edx, [esp + 0x34]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x8c], 2
        call eax
        push esi
        mov ecx, edi
        call ext_00532E40
        mov ecx, dword ptr [esp + 0x94]
        push ecx
        mov ecx, edi
        call ext_00532E90
        test eax, eax
        pop ebx
        je L_skip_store
        mov ecx, dword ptr [esi + 0x38]
        mov dword ptr [eax + 0x1c], ecx
L_skip_store:
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x7c], 0xffffffff
        call ext_005B1870
        mov ecx, dword ptr [esp + 0x74]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x78
        ret 0x10
    }
}

// [0x00535400] OglRenderer::vfunc_13 (430 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_005305E0();
extern "C" void ext_0066A330();
extern "C" int mem_00924FC0;
extern "C" int mem_00A44154;
extern "C" int mem_009324A4;
extern "C" int mem_009253E4;

extern "C" void __declspec(naked) __fastcall fn_00535400(void* self) {
    __asm {
        push -0x1
        push 0x87ba58
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x2c]
        push esi
        push edi
        mov edi, ecx
        push ebp
        lea ecx, [edi + 0x300]
        call ext_0052AD00
        mov esi, dword ptr [esp + 0x38]
        fld dword ptr [esi]
        mov ebx, dword ptr [mem_00924FC0]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [eax + 0x10]
        fld dword ptr [esi + 0xc]
        mov byte ptr [eax + 0x4], 0x1
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [eax + 0x14]
        mov eax, dword ptr [mem_00A44154]
        push eax
        push ebp
        call ebx
        add esp, 0x8
        test al, al
        je L_535568
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x1dc]
        mov ecx, edi
        call eax
        fld dword ptr [mem_009324A4]
        fcom dword ptr [esi + 0x8]
        fnstsw ax
        fldz
        test ah, 0x41
        fld1
        jne L_5354ad
        fst dword ptr [esp + 0x34]
        jmp L_5354b5
    L_5354ad:
        fxch st(1)
        fst dword ptr [esp + 0x34]
        fxch st(1)
    L_5354b5:
        fxch st(2)
        fcom dword ptr [esi + 0x4]
        fnstsw ax
        test ah, 0x41
        jne L_5354c9
        fxch st(2)
        fst dword ptr [esp + 0x38]
        jmp L_5354d3
    L_5354c9:
        fxch st(1)
        fst dword ptr [esp + 0x38]
        fxch st(1)
        fxch st(2)
    L_5354d3:
        fxch st(2)
        fcomp dword ptr [esi]
        fnstsw ax
        test ah, 0x41
        jne L_5354e6
        fstp st(0)
        fst dword ptr [esp + 0x10]
        jmp L_5354ea
    L_5354e6:
        fstp dword ptr [esp + 0x10]
    L_5354ea:
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        lea ecx, [esp + 0x24]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        call ext_0066A330
        mov ecx, dword ptr [edi + 0x38]
        lea edx, [esp + 0x14]
        push edx
        mov dword ptr [esp + 0x30], 0x0
        call ext_005305E0
        fld dword ptr [esi + 0xc]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi]
        fstp dword ptr [esp]
        call dword ptr [mem_009253E4]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x1e0]
        mov ecx, edi
        call edx
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call ext_00493D90
        jmp L_53558d
    L_535568:
        push 0x9343fc
        push ebp
        call ebx
        add esp, 0x8
        test al, al
        jne L_535586
        push 0x9343d4
        push ebp
        call ebx
        add esp, 0x8
        test al, al
        je L_53558d
    L_535586:
        mov byte ptr [edi + 0x430], 0x1
    L_53558d:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x154]
        mov ecx, edi
        call edx
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x8
    }
}

// [0x00533480] OglRenderer::vfunc_109 (560 bytes)
extern "C" void ext_0052AD00();
extern "C" void ext_0052ADA0();
extern "C" void ext_0052B1A0();
extern "C" int mem_00A44154;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_009253E4;
extern "C" int mem_00A44158;
extern "C" int mem_00A9F444;

extern "C" void __declspec(naked) __fastcall fn_00533480(void* self) {
    __asm {
        push -0x1
        mov eax, dword ptr fs:[0x0]
        push 0x895826
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x300]
        mov ecx, edi
        call ext_0052B1A0
        mov ebp, 0xaefed0
        mov ebx, 0xaef490
    L_5334b5:
        push ebx
        mov ecx, edi
        call ext_0052AD00
        mov dword ptr [ebp], eax
        add ebx, 0x1c
        add ebp, 0x4
        cmp ebx, 0xaef634
        jl L_5334b5
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1dc]
        mov ecx, esi
        call edx
        mov eax, dword ptr [mem_00A44154]
        push eax
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x64], 0x0
        call ext_0052ADA0
        or ebp, -0x1
        lea ecx, [esp + 0x20]
        mov ebx, eax
        mov dword ptr [esp + 0x60], ebp
        call dword ptr [mem_00924FF4]
        mov dword ptr [esi + 0x4ac], ebx
        fld dword ptr [ebx + 0xc]
        fstp dword ptr [esp + 0x10]
        sub esp, 0x10
        fld dword ptr [ebx + 0x8]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [ebx + 0x4]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [ebx]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esp]
        call dword ptr [mem_009253E4]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x1e0]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [mem_00A44158]
        push ecx
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x20]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x64], 0x1
        call ext_0052ADA0
        lea ecx, [esp + 0x20]
        mov ebx, eax
        mov dword ptr [esp + 0x60], ebp
        call dword ptr [mem_00924FF4]
        mov dword ptr [esi + 0x4b0], ebx
        mov eax, dword ptr [mem_00A9F444]
        push eax
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x64], 0x2
        call ext_0052AD00
        add eax, 0x8
        lea ecx, [esp + 0x20]
        mov dword ptr [esi + 0x1c8], eax
        mov dword ptr [esp + 0x60], ebp
        call dword ptr [mem_00924FF4]
        push 0x93439c
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x20]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x64], 0x3
        call ext_0052AD00
        add eax, 0x8
        lea ecx, [esp + 0x20]
        mov dword ptr [esi + 0x1c4], eax
        mov dword ptr [esp + 0x60], ebp
        call dword ptr [mem_00924FF4]
        push 0x9343fc
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x20]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x64], 0x4
        call ext_0052AD00
        add eax, 0x8
        lea ecx, [esp + 0x20]
        mov dword ptr [esi + 0x440], eax
        mov dword ptr [esp + 0x60], ebp
        call dword ptr [mem_00924FF4]
        push 0x9343d4
        lea ecx, [esp + 0x40]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x3c]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x64], 0x5
        call ext_0052AD00
        add eax, 0x8
        lea ecx, [esp + 0x3c]
        mov dword ptr [esi + 0x444], eax
        mov dword ptr [esp + 0x60], ebp
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x154]
        mov ecx, esi
        mov byte ptr [esi + 0x430], 0x1
        call eax
        mov ecx, dword ptr [esp + 0x58]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x54
        ret
    }
}

// [0x005366B0] OglRenderer::vfunc_107 (886 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_005297C0();
extern "C" void ext_00532C90();
extern "C" void ext_00534060();
extern "C" void ext_005348E0();
extern "C" void ext_00536600();
extern "C" void ext_005409C0();
extern "C" void ext_00541220();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925474;
extern "C" int mem_0092544C;
extern "C" int mem_00925440;
extern "C" int mem_00924248;
extern "C" int mem_00925400;
extern "C" int mem_009253FC;
extern "C" int mem_009253D8;
extern "C" int mem_009253D4;
extern "C" int mem_00925134;
extern "C" int mem_00925470;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;

extern "C" __declspec(naked) void __fastcall fn_005366B0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x8959d8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov ebx, ecx
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], edi
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x1dc]
        mov dword ptr [esp + 0x40], edi
        call edx
        lea eax, [esp + 0x28]
        push eax
        push 0xba2
        call dword ptr [mem_00925474]
        mov ebp, dword ptr [esp + 0x48]
        cmp ebp, -1
        jne L_h1
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr [esp + 0x48], ecx
        mov ebp, ecx
    L_h1:
        mov esi, dword ptr [esp + 0x4c]
        cmp esi, -1
        jne L_h2
        mov edx, dword ptr [esp + 0x34]
        mov dword ptr [esp + 0x4c], edx
        mov esi, edx
    L_h2:
        mov eax, dword ptr [esp + 0x1c]
        cmp eax, edi
        jne L_h3
        xor ecx, ecx
        jmp L_h4
    L_h3:
        mov ecx, dword ptr [esp + 0x20]
        sub ecx, eax
    L_h4:
        mov eax, ebp
        imul eax, esi
        lea eax, [eax + 2*eax]
        cmp eax, ecx
        je L_h5
        push edi
        push eax
        lea ecx, [esp + 0x20]
        call ext_00536600
    L_h5:
        mov eax, dword ptr [ebx + 0x1a4]
        push 0x405
        mov dword ptr [esp + 0x18], eax
        call dword ptr [mem_0092544C]
        push 0x4100
        call dword ptr [mem_00925440]
        push esi
        push ebp
        mov ecx, ebx
        call ext_00532C90
        push 0x32
        call dword ptr [mem_00924248]
        mov ecx, dword ptr [ebx + 0x194]
        lea esi, [ebx + 0x9c]
        mov dword ptr [esi + 0xfc], ecx
        cmp dword ptr [ebx + 0x1a4], edi
        jne L_h6
        mov eax, ecx
        mov edx, ecx
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [esi + 4*edx + 0x18]
        sub eax, dword ptr [esi + 4*edx + 0x10]
        mov ecx, dword ptr [esi + 4*edx + 0x14]
        sub ecx, dword ptr [esi + 4*edx + 0xc]
        lea edi, [esi + 4*edx + 0x8]
        mov edx, dword ptr [edi + 0x8]
        push eax
        mov eax, dword ptr [edi + 0x4]
        push ecx
        push edx
        push eax
        call dword ptr [mem_00925400]
        mov ecx, dword ptr [edi + 0x10]
        sub ecx, dword ptr [edi + 0x8]
        mov edx, dword ptr [edi + 0xc]
        sub edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi + 0x8]
        push ecx
        mov ecx, dword ptr [edi + 0x4]
        push edx
        push eax
        push ecx
        call dword ptr [mem_009253FC]
        mov eax, dword ptr [esi + 0xf8]
        mov edx, eax
        shl edx, 4
        sub edx, eax
        push 0x1701
        lea edi, [esi + 4*edx + 0x8]
        call dword ptr [mem_009253D8]
        call dword ptr [mem_009253D4]
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10]
        call edx
        mov eax, dword ptr [esi + 0xf8]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea edx, [esi + 4*ecx + 0x8]
        push 0x1c00
        push edx
        mov ecx, ebx
        call ext_005348E0
        mov eax, dword ptr [esi + 0xf8]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea edx, [esi + 4*ecx + 0x8]
        push 0x1c00
        push edx
        mov ecx, ebx
        call ext_00534060
        jmp L_h7
    L_h6:
        mov dword ptr [esp + 0x10], edi
    L_h8:
        mov eax, dword ptr [edi + esi + 0x18]
        sub eax, dword ptr [edi + esi + 0x10]
        mov ecx, dword ptr [edi + esi + 0x14]
        sub ecx, dword ptr [edi + esi + 0xc]
        mov edx, dword ptr [edi + esi + 0x10]
        push eax
        mov eax, dword ptr [edi + esi + 0xc]
        push ecx
        push edx
        push eax
        call dword ptr [mem_00925400]
        mov ecx, dword ptr [edi + esi + 0x18]
        sub ecx, dword ptr [edi + esi + 0x10]
        mov edx, dword ptr [edi + esi + 0x14]
        sub edx, dword ptr [edi + esi + 0xc]
        mov eax, dword ptr [edi + esi + 0x10]
        push ecx
        mov ecx, dword ptr [edi + esi + 0xc]
        push edx
        push eax
        push ecx
        call dword ptr [mem_009253FC]
        mov edx, dword ptr [esp + 0x10]
        mov eax, edx
        mov ecx, edx
        shl ecx, 4
        sub ecx, eax
        push 0x1701
        mov dword ptr [esi + 0xfc], edx
        lea ebp, [esi + 4*ecx + 0x8]
        call dword ptr [mem_009253D8]
        call dword ptr [mem_009253D4]
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x10]
        call eax
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea edx, [esi + 4*ecx + 0x8]
        push 0x1c00
        push edx
        mov ecx, ebx
        call ext_005348E0
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea edx, [esi + 4*ecx + 0x8]
        push 0x1c00
        push edx
        mov ecx, ebx
        call ext_00534060
        add dword ptr [esp + 0x10], 1
        add edi, 0x3c
        cmp edi, 0xf0
        jl L_h8
        mov ebp, dword ptr [esp + 0x48]
    L_h7:
        mov ecx, esi
        call ext_005409C0
        push 0x405
        call dword ptr [mem_0092544C]
        mov edi, dword ptr [esp + 0x1c]
        cmp edi, dword ptr [esp + 0x20]
        jbe L_h9
        call dword ptr [mem_00925134]
        cmp edi, dword ptr [esp + 0x20]
    L_h9:
        jb L_h10
        call dword ptr [mem_00925134]
    L_h10:
        mov eax, dword ptr [esp + 0x4c]
        push edi
        push 0x1401
        push 0x1907
        push eax
        push ebp
        push 0
        push 0
        call dword ptr [mem_00925470]
        mov edi, dword ptr [esp + 0x1c]
        cmp edi, dword ptr [esp + 0x20]
        jbe L_h11
        call dword ptr [mem_00925134]
        cmp edi, dword ptr [esp + 0x20]
    L_h11:
        jb L_h12
        call dword ptr [mem_00925134]
    L_h12:
        mov ecx, dword ptr [esp + 0x4c]
        push edi
        mov edi, dword ptr [esp + 0x54]
        push 0
        push 0
        push 0x18
        push ecx
        push ebp
        push edi
        lea ecx, [ebx + 0x418]
        call ext_005297C0
        mov edx, dword ptr [mem_00924E90]
        mov eax, dword ptr [mem_00924FA0]
        push edx
        push 0x954b18
        push edi
        push 0x954b10
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_00541220
        mov edx, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x30]
        push edx
        push eax
        mov ecx, ebx
        call ext_00532C90
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0x1e0]
        mov ecx, ebx
        call eax
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        je L_h13
        push eax
        call ext_006A5C5C
        add esp, 4
    L_h13:
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret 0xc
    }
}
