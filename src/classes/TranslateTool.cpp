// Decompiled translation unit: src/classes/TranslateTool.cpp

// [0x005471A0] TranslateTool::vfunc_29 (42 bytes)
extern "C" void __fastcall ext_005528A0(void* self);

extern "C" void __fastcall fn_005471A0(void* self) {
    char* p = (char*)self;
    ext_005528A0(p + 0x98);
    float* f = (float*)p;
    f[0xc0 / 4] = 0.0f;
    f[0xbc / 4] = 0.0f;
    f[0xb8 / 4] = 0.0f;
    f[0xb4 / 4] = 0.0f;
}

extern "C" void ext_005434C0();
extern "C" int mem_00925414;
extern "C" int mem_009253C8;
extern "C" int mem_00925404;

// [0x00547110] TranslateTool::vfunc_31 (142 bytes)
extern "C" __declspec(naked) void __fastcall fn_00547110(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        call ext_005434C0
        test al, al
        jne L_done
        call dword ptr [mem_00925414]
        lea eax, [esi + 0x4]
        push eax
        call dword ptr [mem_009253C8]
        fld dword ptr [esi + 0x34]
        mov eax, dword ptr [esi + 0x84]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0xfc]
        mov edx, ecx
        shl edx, 0x4
        sub edx, ecx
        mov eax, dword ptr [eax + 4*edx + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x18]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, eax
        call edx
        fstp dword ptr [esi + 0xa0]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esi + 0x98]
        mov eax, dword ptr [eax + 0x10]
        lea ecx, [esi + 0x98]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push edx
        call eax
        call dword ptr [mem_00925404]
    L_done:
        pop esi
        add esp, 0x10
        ret 0x8
    }
}

extern "C" void ext_0047FFA0();
extern "C" void ext_00547080();

// [0x00547590] TranslateTool::vfunc_15 (655 bytes)
extern "C" __declspec(naked) void __fastcall fn_00547590(void* self) {
    __asm {
        sub esp, 0x48
        test byte ptr [esp + 0x54], 0x1
        push esi
        mov esi, ecx
        je L_547816
        mov ecx, dword ptr [esi + 0xa8]
        test ecx, ecx
        jl L_547816
        fldz
        mov eax, dword ptr [esi + 0x84]
        fst dword ptr [esp + 0x28]
        push ebx
        mov ebx, dword ptr [esp + 0x58]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x24]
        push edi
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x14]
        mov edx, dword ptr [eax + 0xf8]
        mov edi, edx
        shl edi, 0x4
        sub edi, edx
        mov edx, dword ptr [eax + edi*4 + 0x18]
        sub edx, dword ptr [eax + 0x138]
        lea edi, [eax + edi*4]
        add edx, dword ptr [ebx + 0x4]
        mov ebx, dword ptr [ebx]
        sub ebx, dword ptr [edi + 0xc]
        cmp ecx, 0x6
        pop edi
        mov dword ptr [esp + 0x8], ebx
        mov dword ptr [esp + 0xc], edx
        pop ebx
        jne L_54768d
        fld dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x38]
        mov ecx, dword ptr [eax + 0xf8]
        mov edx, ecx
        shl edx, 0x4
        sub edx, ecx
        mov eax, dword ptr [eax + edx*4 + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x2c]
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esp + 0x30]
        push ecx
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, eax
        call edx
        fld dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x2c]
        lea eax, [esp + 0x2c]
        fld dword ptr [esi + 0x38]
        push eax
        fstp dword ptr [esp + 0x34]
        lea ecx, [esp + 0x40]
        fld dword ptr [esi + 0x3c]
        push ecx
        fstp dword ptr [esp + 0x3c]
        lea ecx, [esi + 0xb4]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x40]
        call ext_00547080
        lea edx, [esp + 0x2c]
        jmp L_5477bd
    L_54768d:
        cmp ecx, 0x5
        je L_54770c
        cmp ecx, 0x3
        je L_54770c
        cmp ecx, 0x4
        je L_54770c
        shl ecx, 0x4
        fld dword ptr [ecx + esi + 0x4]
        lea ecx, [ecx + esi + 0x4]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x48]
        mov ecx, dword ptr [eax + 0xf8]
        fld dword ptr [esi + 0xc4]
        mov edx, ecx
        push ecx
        shl edx, 0x4
        fstp dword ptr [esp]
        sub edx, ecx
        mov eax, dword ptr [eax + edx*4 + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x38]
        lea ecx, [esp + 0x20]
        push ecx
        lea ecx, [esp + 0x34]
        push ecx
        lea ecx, [esp + 0x48]
        jmp L_54777a
    L_54770c:
        shl ecx, 0x4
        fld dword ptr [ecx + esi - 0x2c]
        lea ecx, [ecx + esi - 0x2c]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x38]
        mov ecx, dword ptr [eax + 0xf8]
        fld dword ptr [esi + 0xc4]
        mov edx, ecx
        push ecx
        shl edx, 0x4
        fstp dword ptr [esp]
        sub edx, ecx
        mov eax, dword ptr [eax + edx*4 + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x34]
        lea ecx, [esp + 0x20]
        push ecx
        lea ecx, [esp + 0x44]
        push ecx
        lea ecx, [esp + 0x38]
    L_54777a:
        push ecx
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, eax
        call edx
        test al, al
        je L_5477e3
        fld dword ptr [esi + 0x34]
        lea eax, [esp + 0x3c]
        fstp dword ptr [esp + 0x3c]
        push eax
        fld dword ptr [esi + 0x38]
        lea ecx, [esp + 0x30]
        fstp dword ptr [esp + 0x44]
        push ecx
        fld dword ptr [esi + 0x3c]
        lea ecx, [esi + 0xb4]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x50]
        call ext_00547080
        lea edx, [esp + 0x3c]
    L_5477bd:
        push eax
        push edx
        lea ecx, [esp + 0x24]
        call ext_0047FFA0
        fld dword ptr [eax]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x18]
    L_5477e3:
        cmp dword ptr [esi + 0x88], 0x0
        je L_5477fe
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x4c]
        lea edx, [esp + 0xc]
        push edx
        call eax
    L_5477fe:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x84]
        mov ecx, esi
        call eax
        mov eax, 0x1
        pop esi
        add esp, 0x48
        ret 0xc
    L_547816:
        xor eax, eax
        pop esi
        add esp, 0x48
        ret 0xc
    }
}

extern "C" void ext_0043B3E0();
extern "C" void ext_00552860();

// [0x005472E0] TranslateTool::vfunc_28 (688 bytes)
extern "C" __declspec(naked) void __fastcall fn_005472E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        sub esp, 0x38
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x98]
        call ext_00552860
        mov ecx, dword ptr [esi + 0xa8]
        test ecx, ecx
        jl L_547589
        mov eax, dword ptr [esi + 0x84]
        fldz
        mov edx, dword ptr [eax + 0xf8]
        push ebx
        mov ebx, dword ptr [esp + 0x44]
        push edi
        mov edi, edx
        shl edi, 0x4
        sub edi, edx
        mov edx, dword ptr [eax + 4*edi + 0x18]
        sub edx, dword ptr [eax + 0x138]
        lea edi, [eax + 4*edi]
        add edx, dword ptr [ebx + 0x4]
        mov ebx, dword ptr [ebx]
        sub ebx, dword ptr [edi + 0xc]
        fst dword ptr [esp + 0x20]
        cmp ecx, 0x6
        fst dword ptr [esp + 0x1c]
        pop edi
        fst dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x8], ebx
        fstp dword ptr [esp + 0x10]
        mov dword ptr [esp + 0xc], edx
        pop ebx
        jne L_5473c1
        fld dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax + 0xf8]
        mov edx, ecx
        shl edx, 0x4
        sub edx, ecx
        mov eax, dword ptr [eax + 4*edx + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x2c]
        lea ecx, [esp + 0xc]
        push ecx
        lea ecx, [esp + 0x20]
        push ecx
        lea ecx, [esp + 0x0c]
        push ecx
        mov ecx, eax
        call edx
        fld dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x1c]
        lea eax, [esp + 0x1c]
        fld dword ptr [esi + 0x38]
        lea ecx, [esp + 0x2c]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x28]
        jmp L_54755b
    L_5473c1:
        cmp ecx, 0x5
        je L_5474bb
        cmp ecx, 0x3
        je L_5474bb
        cmp ecx, 0x4
        je L_5474bb
        shl ecx, 0x4
        fld dword ptr [ecx + esi + 0x4]
        lea ecx, [ecx + esi + 0x4]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x38]
        mov ecx, dword ptr [eax + 0xf8]
        fld dword ptr [esi + 0xc4]
        mov edx, ecx
        push ecx
        shl edx, 0x4
        fstp dword ptr [esp]
        sub edx, ecx
        mov eax, dword ptr [eax + 4*edx + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x38]
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x24]
        push ecx
        lea ecx, [esp + 0x38]
        push ecx
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, eax
        call edx
        test al, al
        je L_54749a
        fld dword ptr [esi + 0x34]
        lea eax, [esp + 0x2c]
        fstp dword ptr [esp + 0x2c]
        push eax
        fld dword ptr [esi + 0x38]
        lea ecx, [esp + 0x20]
        fstp dword ptr [esp + 0x34]
        push ecx
        fld dword ptr [esi + 0x3c]
        lea ecx, [esp + 0x14]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x40]
        call ext_0047FFA0
        push eax
        lea ecx, [esi + 0xb4]
        call ext_0043B3E0
        pop esi
        add esp, 0x38
        ret 0x8
    L_54749a:
        fldz
        fst dword ptr [esi + 0xc0]
        fst dword ptr [esi + 0xbc]
        fst dword ptr [esi + 0xb8]
        fstp dword ptr [esi + 0xb4]
        pop esi
        add esp, 0x38
        ret 0x8
    L_5474bb:
        shl ecx, 0x4
        fld dword ptr [ecx + esi - 0x2c]
        lea ecx, [ecx + esi - 0x2c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax + 0xf8]
        fld dword ptr [esi + 0xc4]
        mov edx, ecx
        push ecx
        shl edx, 0x4
        fstp dword ptr [esp]
        sub edx, ecx
        mov eax, dword ptr [eax + 4*edx + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x34]
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x34]
        push ecx
        lea ecx, [esp + 0x28]
        push ecx
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, eax
        call edx
        test al, al
        je L_547589
        fld dword ptr [esi + 0x34]
        lea eax, [esp + 0x2c]
        fstp dword ptr [esp + 0x2c]
        lea ecx, [esp + 0x1c]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x38]
    L_54755b:
        push eax
        push ecx
        lea ecx, [esp + 0x14]
        call ext_0047FFA0
        fld dword ptr [eax]
        fstp dword ptr [esi + 0xb4]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0xb8]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0xbc]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esi + 0xc0]
    L_547589:
        pop esi
        add esp, 0x38
        ret 0x8
    }
}
