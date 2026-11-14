// Decompiled translation unit: src/classes/CharacterUpgrader.cpp

extern "C" void ext_00401D00();
extern "C" void ext_00427550();
extern "C" void ext_0045DB50();
extern "C" void ext_0045DFB0();
extern "C" void ext_005A2FB0();
extern "C" void ext_005A9110();
extern "C" void ext_005A9970();
extern "C" void ext_005AA2C0();
extern "C" void ext_0063EFE0();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_0065C660();
extern "C" void ext_00662810();
extern "C" void ext_00678500();
extern "C" void ext_008A21F9();

extern "C" int mem_00924FC0;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_0095EEC8;
extern "C" int mem_0095EEF4;
extern "C" int mem_00A9ED98;
extern "C" int mem_00A9EDA0;
extern "C" int mem_00A9F23C;
extern "C" int mem_00A9F288;
extern "C" int mem_00A9F6C8;
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F88C;

// [0x005AA450] CharacterUpgrader::vfunc_15 (620 bytes)
extern "C" __declspec(naked) void __fastcall fn_005AA450(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    offset ext_008A21F9
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x6b8
        push    ebx
        mov     ebx, dword ptr [mem_00924FC0]
        push    esi
        mov     esi, dword ptr [esp + 0x6d0]
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [mem_00A9ED98]
        lea     eax, [esi + 0x4]
        push    ecx
        push    eax
        call    ebx
        add     esp, 0x8
        test    al, al
        je      L_5aa692
        mov     eax, dword ptr [esi + 0x20]
        mov     edx, dword ptr [mem_00A9EDA0]
        push    edx
        add     eax, 0x4
        push    eax
        call    ebx
        add     esp, 0x8
        test    al, al
        je      L_5aa692
        mov     eax, dword ptr [esi + 0x20]
        mov     eax, dword ptr [eax + 0x20]
        mov     ecx, dword ptr [mem_00A9F23C]
        push    ecx
        add     eax, 0x4
        push    eax
        call    ebx
        add     esp, 0x8
        test    al, al
        je      L_5aa692
        mov     edx, dword ptr [mem_00A9F838]
        push    edx
        mov     ecx, esi
        call    ext_0063EFE0
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x8]
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, eax
        call    edx
        lea     eax, [edi + 0x48]
        push    eax
        lea     ecx, [esp + 0x34]
        xor     ebx, ebx
        push    ecx
        mov     dword ptr [esp + 0x6d4], ebx
        call    dword ptr [mem_00924FC4]
        add     esp, 0x8
        test    al, al
        je      L_5aa67d
        mov     edx, dword ptr [mem_00A9F288]
        push    edx
        mov     ecx, esi
        call    ext_0045DFB0
        mov     ecx, eax
        call    ext_0045DB50
        test    al, al
        je      L_5aa542
        mov     eax, dword ptr [mem_00A9F6C8]
        push    eax
        mov     ecx, esi
        call    ext_0063EFE0
        mov     ecx, eax
        call    ext_0045DB50
        test    al, al
        je      L_5aa67d
    L_5aa542:
        lea     ecx, [esp + 0x68]
        call    ext_005A9110
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x10], offset mem_0095EEC8
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     edx, ecx
        mov     dword ptr [esp + 0x20], offset mem_0095EEF4
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x2c], ebx
        push    esi
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x6d0], 0x3
        call    ext_005AA2C0
        add     edi, 0x2c
        push    edi
        lea     ecx, [esp + 0x24]
        call    ext_00401D00
        mov     eax, dword ptr [mem_00A9ED98]
        mov     ecx, dword ptr [esp + 0x6d8]
        push    eax
        call    ext_006404E0
        mov     edi, eax
        push    edi
        lea     ecx, [esp + 0x6c]
        call    ext_005A2FB0
        mov     ecx, dword ptr [mem_00A9F838]
        push    ecx
        mov     ecx, edi
        call    ext_00640110
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0xc], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x10]
        call    ext_00427550
        mov     edx, dword ptr [mem_00A9F88C]
        push    edx
        mov     ecx, esi
        call    ext_0063EFE0
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x8]
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, eax
        call    edx
        push    eax
        mov     eax, dword ptr [mem_00A9F88C]
        push    eax
        push    edi
        mov     byte ptr [esp + 0x6d8], 0x4
        call    ext_00662810
        add     esp, 0xc
        lea     ecx, [esp + 0x4c]
        mov     byte ptr [esp + 0x6cc], 0x3
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x20]
        mov     byte ptr [esp + 0x6cc], 0x2
        mov     dword ptr [esp + 0x20], offset mem_0095EEF4
        call    ext_0065C660
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x6cc], 0x1
        mov     dword ptr [esp + 0x10], offset mem_0095EEC8
        call    ext_0065C660
        lea     ecx, [esp + 0x68]
        mov     byte ptr [esp + 0x6cc], bl
        call    ext_005A9970
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x6cc], -0x1
        call    dword ptr [mem_00924FF4]
        xor     eax, eax
        jmp     L_5aa6a2
    L_5aa67d:
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x6cc], -0x1
        call    dword ptr [mem_00924FF4]
    L_5aa692:
        mov     ecx, dword ptr [esp + 0x6d8]
        push    ecx
        push    esi
        mov     ecx, edi
        call    ext_00678500
    L_5aa6a2:
        mov     ecx, dword ptr [esp + 0x6c4]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x6c4
        ret     0x8
    }
}
