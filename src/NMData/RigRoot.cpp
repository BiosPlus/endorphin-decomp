// Decompiled translation unit: src/NMData/RigRoot.cpp

// [0x005AAA40] NMData::RigRoot::vfunc_22 (36 bytes)
extern "C" void ext_005AA6C0();
extern "C" void ext_006404E0();
extern "C" int mem_00A9F288;

extern "C" __declspec(naked) void* __fastcall fn_005AAA40(void* self, int edx_unused, void* a1) {
    __asm {
        mov     eax, dword ptr [mem_00A9F288]
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        call    ext_006404E0
        mov     esi, eax
        push    esi
        mov     ecx, edi
        call    ext_005AA6C0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}

// [0x005ABE20] NMData::RigRoot::vfunc_17_off_C (122 bytes)
extern "C" void ext_005ABA70();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void* __fastcall fn_005ABE20(void* self) {
    __asm {
        push    -0x1
        push    0x8a7a5b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        push    0x194
        mov     edi, ecx
        call    ext_006A5C62
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x8], esi
        xor     eax, eax
        cmp     esi, eax
        mov     dword ptr [esp + 0x14], eax
        je      L_done
        add     edi, -0xc
        push    edi
        mov     ecx, esi
        call    ext_005ABA70
        mov     dword ptr [esi], 0x93f004
        mov     dword ptr [esi + 0x4], 0x93efbc
        mov     dword ptr [esi + 0x8], 0x93ef7c
        mov     dword ptr [esi + 0xc], 0x93ef2c
        mov     dword ptr [esi + 0x150], 0x93ef18
        mov     eax, esi
    L_done:
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
