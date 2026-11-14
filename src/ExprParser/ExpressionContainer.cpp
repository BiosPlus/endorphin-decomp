// Decompiled translation unit: src/ExprParser/ExpressionContainer.cpp

extern "C" void ext_0057CCE0();
extern "C" void ext_00671F30();
extern "C" void ext_006721F0();
extern "C" int mem_00925134;

// [0x0069A1F0] ExprParser::ExpressionContainer::vfunc_2 (105 bytes)
extern "C" __declspec(naked) void __fastcall fn_0069A1F0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x8], 0x0
        call ext_0057CCE0
        test eax, eax
        je short L_0069A245
        mov ecx, dword ptr [esi + 0x1c]
        test ecx, ecx
        push edi
        mov edi, dword ptr [eax]
        je short L_0069A223
        mov eax, dword ptr [esi + 0x20]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb short L_0069A229
    L_0069A223:
        call dword ptr [mem_00925134]
    L_0069A229:
        mov ecx, dword ptr [esi + 0x1c]
        mov esi, dword ptr [esp + 0x10]
        lea edx, [ecx + 8 * edi]
        push edx
        push esi
        call ext_006721F0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0069A245:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0069B070] ExprParser::ExpressionContainer::vfunc_10 (78 bytes)
extern "C" void ext_006A6E9E();
extern "C" void ext_0069A590();
extern "C" void ext_00490C80();
extern "C" void ext_00491150();

extern "C" __declspec(naked) void __fastcall fn_0069B070(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push edi
        push 0
        push 0AA3D80h
        push 0A2E2F8h
        push 0
        push eax
        mov edi, ecx
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_done
        lea ecx, [esi + 0x8]
        push ecx
        lea ecx, [edi + 0x8]
        call ext_0069A590
        lea edx, [esi + 0x18]
        push edx
        lea ecx, [edi + 0x18]
        call ext_00490C80
        add esi, 0x28
        push esi
        lea ecx, [edi + 0x28]
        call ext_00491150
    L_done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00699E90] ExprParser::ExpressionContainer::vfunc_3_off_4 (265 bytes)
extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A50();
extern "C" void ext_00682460();
extern "C" int mem_00AA23B8;
extern "C" int mem_00924FF0;
extern "C" int mem_00925134;
extern "C" int mem_00AA2354;
extern "C" int mem_00AA23DC;
extern "C" int mem_00AA2404;
extern "C" int mem_00AA23D0;

extern "C" __declspec(naked) void __fastcall fn_00699E90(void* self) {
    __asm {
        push    ecx
        mov     eax, dword ptr [mem_00AA23B8]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        mov     ecx, ebx
        call    ext_00640110
        lea     ecx, [edi + 0x24]
        mov     dword ptr [esp + 0x10], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x14]
        call    ext_00427550
        mov     esi, dword ptr [edi + 0x8]
        add     edi, 0x4
        cmp     esi, dword ptr [edi + 0x8]
        jbe     L_699ed0
        call    dword ptr [mem_00925134]
    L_699ed0:
        mov     ebp, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebp
        jbe     L_699ede
        call    dword ptr [mem_00925134]
    L_699ede:
        cmp     edi, edi
        je      L_699ee8
        call    dword ptr [mem_00925134]
    L_699ee8:
        cmp     esi, ebp
        je      L_699f8f
        mov     ecx, dword ptr [mem_00AA2354]
        push    ecx
        mov     ecx, ebx
        call    ext_006404E0
        cmp     esi, dword ptr [edi + 0x8]
        mov     ebp, eax
        jb      L_699f0b
        call    dword ptr [mem_00925134]
    L_699f0b:
        mov     edx, dword ptr [mem_00AA23DC]
        push    edx
        push    esi
        push    ebp
        call    ext_00682460
        add     esp, 0xc
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_699f27
        call    dword ptr [mem_00925134]
    L_699f27:
        mov     eax, dword ptr [mem_00AA2404]
        mov     ebx, dword ptr [esi + 0x20]
        push    eax
        mov     ecx, ebp
        call    ext_00640110
        mov     edx, dword ptr [ebx]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [edx + 0x30]
        mov     ecx, ebx
        call    eax
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        call    ext_00640A50
        add     esp, 0x8
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_699f5d
        call    dword ptr [mem_00925134]
    L_699f5d:
        mov     edx, dword ptr [mem_00AA23D0]
        push    edx
        mov     ecx, ebp
        call    ext_00640110
        mov     ecx, dword ptr [esi + 0x1c]
        push    ecx
        push    eax
        call    ext_00640A50
        add     esp, 0x8
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_699f83
        call    dword ptr [mem_00925134]
    L_699f83:
        mov     ebx, dword ptr [esp + 0x18]
        add     esi, 0x2c
        jmp     L_699ed0
    L_699f8f:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
