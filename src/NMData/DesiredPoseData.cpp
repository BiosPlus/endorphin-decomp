// Decompiled translation unit: src/NMData/DesiredPoseData.cpp

extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_006404E0();
extern "C" void ext_00667030();
extern "C" void ext_0067F0F0();
extern "C" int mem_00A9EE28;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF0;
extern "C" int mem_00925134;
extern "C" int mem_00A9EE6C;
extern "C" int mem_00A9EE34;
extern "C" int mem_00A9EEE8;
extern "C" int mem_00A9F644;

// [0x00623150] NMData::DesiredPoseData::vfunc_3 (337 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00623150(void* self, int edx_unused, void* arg1) {
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [mem_00A9EE28]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    eax
        call    ext_006404E0
        mov     ecx, dword ptr [mem_00A9F838]
        mov     ebx, eax
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x0c], ebx
        call    ext_00640110
        lea     ecx, [esi + 0x8]
        mov     dword ptr [esp + 0x20], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x24]
        call    ext_00427550
        cmp     byte ptr [esi + 0x50], 0
        jne     loc_00623258
        mov     edx, dword ptr [esi + 0x2c]
        push    ebp
        lea     ebp, [esi + 0x28]
        push    edi
        mov     edi, dword ptr [edx]
        mov     esi, ebp
        mov     eax, edx
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x20], eax
loc_006231b5:
        test    esi, esi
        je      loc_006231bd
        cmp     esi, ebp
        je      loc_006231c3
loc_006231bd:
        call    dword ptr [mem_00925134]
loc_006231c3:
        cmp     edi, dword ptr [esp + 0x20]
        je      loc_00623295
        mov     ecx, dword ptr [mem_00A9EE6C]
        push    ecx
        mov     ecx, ebx
        call    ext_006404E0
        test    esi, esi
        mov     ebx, eax
        jne     loc_006231e7
        call    dword ptr [mem_00925134]
loc_006231e7:
        cmp     edi, dword ptr [esi + 0x4]
        jne     loc_006231f2
        call    dword ptr [mem_00925134]
loc_006231f2:
        mov     edx, dword ptr [mem_00A9F838]
        push    edx
        mov     ecx, ebx
        call    ext_00640110
        lea     ecx, [edi + 0x0c]
        mov     dword ptr [esp + 0x28], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    ext_00427550
        cmp     edi, dword ptr [esi + 0x4]
        jne     loc_00623222
        call    dword ptr [mem_00925134]
loc_00623222:
        mov     eax, dword ptr [mem_00A9EE34]
        add     edi, 0x28
        push    edi
        push    0
        push    eax
        mov     ecx, ebx
        call    ext_00640390
        push    eax
        call    ext_0067F0F0
        add     esp, 8
        lea     ecx, [esp + 0x14]
        call    ext_00667030
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x10]
        jmp     loc_006231b5
loc_00623258:
        mov     ecx, dword ptr [mem_00A9EEE8]
        push    ecx
        mov     ecx, ebx
        call    ext_006404E0
        mov     edx, dword ptr [mem_00A9F644]
        push    edx
        mov     ecx, eax
        call    ext_00640110
        lea     ecx, [esi + 0x34]
        mov     dword ptr [esp + 0x20], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x24]
        call    ext_00427550
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x14
        ret     4
loc_00623295:
        pop     edi
        pop     ebp
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x14
        ret     4
    }
}
