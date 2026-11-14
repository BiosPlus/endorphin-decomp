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
