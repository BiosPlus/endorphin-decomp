// Decompiled translation unit: src/Sensors/SensorRelativeOrientation.cpp

extern "C" void __fastcall ext_00554490(void* self, int edx_unused, void* arg);
extern "C" void* __fastcall ext_0067E110(void* self);
extern "C" int mem_00B40640;

// [0x006292E0] Sensors::SensorRelativeOrientation::vfunc_15 (143 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006292E0(void* self) {
    __asm {
        sub     esp, 0x24
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x28]
        mov     edx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [edx + 0x14]
        push    esi
        lea     ecx, [eax + 0x4]
        push    edi
        lea     eax, [esp + 0x10]
        push    eax
        mov     eax, dword ptr [mem_00B40640]
        push    eax
        call    edx
        mov     ecx, eax
        call    ext_0067E110
        lea     ebp, [ebx + 0x30]
        mov     esi, eax
        mov     ecx, 9
        mov     edi, ebp
        rep movsd
        mov     eax, dword ptr [ebx + 0x28]
        mov     ecx, dword ptr [eax + 0x20c]
        cmp     dword ptr [ecx + 0x190], 0
        je      skip
        mov     edx, ecx
        mov     eax, dword ptr [edx + 0x228]
        mov     edx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [edx + 0x14]
        lea     ecx, [eax + 0x4]
        lea     eax, [esp + 0x10]
        push    eax
        mov     eax, dword ptr [mem_00B40640]
        push    eax
        call    edx
        mov     ecx, eax
        call    ext_0067E110
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, ebp
        call    ext_00554490
skip:
        add     ebx, 0x54
        push    ebx
        mov     ecx, ebp
        call    ext_00554490
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret
    }
}
