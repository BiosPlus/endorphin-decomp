// Decompiled translation unit: src/Properties/PropertyManager/IteratorCallBack.cpp

extern "C" void ext_00493D90();
extern "C" void ext_006764D0();
extern "C" void ext_00676EC0();
extern "C" int mem_008B4738;

// [0x00677870] Properties::PropertyManager::IteratorCallBack::vfunc_0 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_00677870(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    offset mem_008B4738
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    esi
        push    edi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x8]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esi + 0x14]
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        mov     eax, dword ptr [esi + 0x10]
        lea     edi, [esi + 0x10]
        push    ecx
        mov     ecx, dword ptr [esi + 0x4]
        push    edx
        push    eax
        mov     dword ptr [esp + 0x24], 0x0
        call    ext_006764D0
        test    eax, eax
        je      short L_done
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esp + 0x1c]
        push    edi
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        push    ecx
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    ext_00676EC0
    L_done:
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    ext_00493D90
        mov     ecx, dword ptr [esp + 0x8]
        pop     edi
        mov     al, 0x1
        mov     dword ptr fs:[0x0], ecx
        pop     esi
        add     esp, 0xc
        ret     0x8
    }
}
