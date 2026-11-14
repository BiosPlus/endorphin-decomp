// Decompiled translation unit: src/classes/CColorButton.cpp

extern "C" void ext_0040F0F0();
extern "C" void ext_0040F5D0();
extern "C" void ext_0040F7D0();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A6004();
extern "C" int mem_00925670;
extern "C" int mem_0092564C;
extern "C" int mem_009242FC;
extern "C" int mem_00924494;
extern "C" int mem_009242F4;

// [0x0040FAE0] CColorButton::vfunc_80 (500 bytes)
extern "C" __declspec(naked) void __fastcall fn_0040FAE0(void* self, void* edx_unused, void* lpDrawItemStruct) {
    __asm {
        push    -1
        push    0x0087cee9
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x44
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x64]
        mov     eax, dword ptr [edi + 0x18]
        push    eax
        mov     esi, ecx
        call    ext_006A6004
        mov     ecx, dword ptr [edi + 0x10]
        mov     ebx, dword ptr [mem_00925670]
        add     edi, 0x1c
        push    edi
        lea     edx, [esp + 0x38]
        push    edx
        mov     ebp, eax
        mov     dword ptr [esp + 0x18], ecx
        call    ebx
        push    edi
        lea     eax, [esp + 0x18]
        push    eax
        call    ebx
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [mem_0092564C]
        push    -1
        mov     dword ptr [esp + 0x2c], edx
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x24]
        push    -1
        lea     edx, [esp + 0x2c]
        push    edx
        mov     dword ptr [esp + 0x38], eax
        mov     dword ptr [esp + 0x3c], ecx
        call    edi
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x2c]
        push    1
        mov     dword ptr [esp + 0x4c], ecx
        mov     dword ptr [esp + 0x48], eax
        mov     eax, dword ptr [esp + 0x34]
        push    1
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     dword ptr [esp + 0x58], edx
        mov     dword ptr [esp + 0x5c], eax
        call    edi
        mov     eax, 4
        add     dword ptr [esp + 0x34], eax
        sub     dword ptr [esp + 0x3c], eax
        add     dword ptr [esp + 0x38], eax
        sub     dword ptr [esp + 0x40], eax
        lea     ecx, [esp + 0x64]
        call    dword ptr [mem_009242FC]
        lea     edx, [esp + 0x64]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x60], 0
        call    ext_006A5F4A
        mov     ebx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        mov     edi, ebx
        and     edi, 4
        je      L_not_disabled_1
        mov     eax, dword ptr [esi + 0x60]
        jmp     L_draw_bg
    L_not_disabled_1:
        mov     eax, dword ptr [esi + 0x58]
    L_draw_bg:
        push    eax
        sub     esp, 0x10
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 0x34]
        mov     dword ptr [eax + 8], ecx
        push    ebp
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edx
        call    ext_0040F0F0
        test    edi, edi
        je      L_not_disabled_2
        push    8
        jmp     L_draw_frame
    L_not_disabled_2:
        test    bl, 1
        je      L_not_selected_1
        push    1
        jmp     L_draw_frame
    L_not_selected_1:
        test    bl, 0x30
        jne     L_focus_or_default
        push    2
        jmp     L_draw_frame
    L_focus_or_default:
        push    6
    L_draw_frame:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        sub     esp, 0x10
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 0x34]
        mov     dword ptr [eax + 8], ecx
        push    ebp
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edx
        call    ext_0040F5D0
        test    edi, edi
        je      L_not_disabled_3
        mov     eax, dword ptr [esi + 0x5c]
    L_draw_text_1:
        push    eax
        push    ecx
        lea     edx, [esp + 0x6c]
        mov     ecx, esp
        mov     dword ptr [esp + 0x18], esp
        push    edx
        call    dword ptr [mem_00924494]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x30]
        sub     esp, 0x10
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x44]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 0x48]
    L_draw_text_call:
        mov     dword ptr [eax + 8], ecx
        push    ebp
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edx
        call    ext_0040F7D0
        lea     ecx, [esp + 0x64]
        call    dword ptr [mem_009242F4]
        mov     ecx, dword ptr [esp + 0x54]
        pop     edi
        pop     esi
        pop     ebp
        mov     fs:[0], ecx
        pop     ebx
        add     esp, 0x50
        ret     4
    L_not_disabled_3:
        test    bl, 1
        mov     eax, dword ptr [esi + 0x54]
        je      L_draw_text_1
        push    eax
        push    ecx
        lea     edx, [esp + 0x6c]
        mov     ecx, esp
        mov     dword ptr [esp + 0x18], esp
        push    edx
        call    dword ptr [mem_00924494]
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [esp + 0x50]
        sub     esp, 0x10
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x64]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 0x68]
        jmp     L_draw_text_call
    }
}
