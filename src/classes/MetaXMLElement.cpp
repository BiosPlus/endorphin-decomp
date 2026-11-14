// Decompiled translation unit: src/classes/MetaXMLElement.cpp

extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0068B7E0();
extern "C" void ext_0068B7F0();
extern "C" void ext_00692180();
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FC0;

// [0x0068BA70] MetaXMLElement::vfunc_1 (192 bytes)
extern "C" __declspec(naked) void __fastcall fn_0068BA70(void* self, int edx_unused, void* a1) {
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x8b5b29
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x58
        mov     eax, dword ptr [mem_00A9F838]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0x10], esp
        mov     esi, ecx
        push    eax
        mov     ecx, edi
        mov     dword ptr [ebp - 0x4], 0x0
        call    ext_0063EFE0
        push    eax
        lea     ebx, [esi + 0x10]
        push    ebx
        call    ext_004275E0
        add     esp, 0x8
        push    0x98d898
        mov     ecx, edi
        call    ext_0063EFE0
        push    eax
        lea     ecx, [esi + 0x94]
        push    ecx
        call    ext_004275E0
        add     esp, 0x8
        mov     ecx, ebx
        call    dword ptr [mem_00924FF0]
        push    eax
        call    ext_00692180
        add     esp, 0x4
        lea     edx, [edi + 0x4]
        push    0x98da04
        push    edx
        mov     dword ptr [esi + 0x4c], eax
        call    dword ptr [mem_00924FC0]
        add     esp, 0x8
        test    al, al
        push    edi
        mov     ecx, esi
        je      L_else
        call    ext_0068B7E0
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr fs:[0x0], ecx
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_else:
        call    ext_0068B7F0
        mov     ecx, dword ptr [ebp - 0xc]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
