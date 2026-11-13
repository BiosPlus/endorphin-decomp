// Decompiled translation unit: src/Sensors/CompoundSensorHorizontalPlane.cpp

// [0x0062F360] Sensors::CompoundSensorHorizontalPlane::vfunc_27 (615 bytes)
extern "C" void ext_005B6930();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0062F360(void* self) {
    __asm {
        sub     esp, 0x34
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x2c]
        test    eax, eax
        push    edi
        mov     edi, dword ptr [mem_00925134]
        je      L_0062F37E
        mov     ecx, dword ptr [esi + 0x30]
        sub     ecx, eax
        sar     ecx, 0x2
        jne     L_0062F380
    L_0062F37E:
        call    edi
    L_0062F380:
        mov     edx, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [edx]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x38]
        call    edx
        fld     dword ptr [eax]
        mov     ecx, dword ptr [esi + 0x2c]
        fstp    dword ptr [esp + 0xc]
        test    ecx, ecx
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x14]
        je      L_0062F3B4
        mov     eax, dword ptr [esi + 0x30]
        sub     eax, ecx
        sar     eax, 0x2
        cmp     eax, 0x1
        ja      L_0062F3B6
    L_0062F3B4:
        call    edi
    L_0062F3B6:
        mov     eax, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x38]
        call    eax
        fld     dword ptr [eax]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0xc]
        fst     dword ptr [esi + 0x78]
        fld     dword ptr [esp + 0x10]
        fst     dword ptr [esi + 0x7c]
        fld     dword ptr [esp + 0x14]
        fst     dword ptr [esi + 0x80]
        fld     dword ptr [esp + 0x18]
        fst     dword ptr [esi + 0x84]
        fld     dword ptr [esp + 0x1c]
        fst     dword ptr [esi + 0x88]
        fld     dword ptr [esp + 0x20]
        fst     dword ptr [esi + 0x8c]
        // x87 register arithmetic: raw bytes (MASM fsub/fsubr encoding is ambiguous)
        _emit 0xd8
        _emit 0xcc
        _emit 0xd9
        _emit 0xc1
        _emit 0xd8
        _emit 0xcc
        _emit 0xde
        _emit 0xe9
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0xd9
        _emit 0xc2
        _emit 0xd8
        _emit 0xca
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xd8
        _emit 0xce
        _emit 0xde
        _emit 0xe9
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0xd8
        _emit 0xcc
        _emit 0xd9
        _emit 0xc3
        _emit 0xde
        _emit 0xca
        _emit 0xde
        _emit 0xe1
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xd9
        _emit 0xc0
        _emit 0xd8
        _emit 0xca
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xd9
        _emit 0xc0
        _emit 0xd8
        _emit 0xcd
        _emit 0xde
        _emit 0xea
        _emit 0xd9
        _emit 0xc9
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0xd8
        _emit 0xcc
        _emit 0xd9
        _emit 0xc2
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xca
        _emit 0xd9
        _emit 0xca
        _emit 0xde
        _emit 0xe1
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0xd8
        _emit 0xcb
        _emit 0xd9
        _emit 0xc4
        _emit 0xde
        _emit 0xca
        _emit 0xde
        _emit 0xe1
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x20
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xd9
        _emit 0xc0
        _emit 0xd8
        _emit 0xcb
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xd9
        _emit 0xc0
        _emit 0xd8
        _emit 0xcc
        _emit 0xde
        _emit 0xea
        _emit 0xd9
        _emit 0xc9
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x30
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xcc
        _emit 0xd9
        _emit 0xc5
        _emit 0xde
        _emit 0xcb
        _emit 0xd9
        _emit 0xcb
        _emit 0xde
        _emit 0xe2
        _emit 0xd9
        _emit 0xc9
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x34
        _emit 0xde
        _emit 0xcb
        _emit 0xde
        _emit 0xc9
        _emit 0x8b
        _emit 0x4e
        _emit 0x38
        _emit 0xde
        _emit 0xe9
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x38
        call    ext_005B6930
        _emit 0xd9
        _emit 0x00
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x24
        _emit 0xd9
        _emit 0x40
        _emit 0x04
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x28
        _emit 0xd9
        _emit 0x40
        _emit 0x08
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x2c
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xc2
        _emit 0xd9
        _emit 0xc9
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xc2
        _emit 0xd9
        _emit 0xc9
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xc2
        _emit 0xd9
        _emit 0xc9
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0xd8
        _emit 0xc3
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x34
        _emit 0xd8
        _emit 0xc2
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0xd8
        _emit 0xc1
        _emit 0xd9
        _emit 0x5c
        _emit 0x24
        _emit 0x20
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xd9
        _emit 0xc0
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xea
        _emit 0xd9
        _emit 0xc4
        _emit 0xde
        _emit 0xca
        _emit 0xd9
        _emit 0xc0
        _emit 0xd8
        _emit 0xe4
        _emit 0xd8
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xde
        _emit 0xc2
        _emit 0xd9
        _emit 0xc3
        _emit 0xd8
        _emit 0xe3
        _emit 0xd8
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0xde
        _emit 0xc2
        _emit 0xd9
        _emit 0xc9
        _emit 0xdd
        _emit 0x5e
        _emit 0x58
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xd9
        _emit 0xc0
        _emit 0xd8
        _emit 0xe6
        _emit 0xd8
        _emit 0xcb
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0xde
        _emit 0xe2
        _emit 0xd9
        _emit 0xc4
        _emit 0xde
        _emit 0xca
        _emit 0xde
        _emit 0xc1
        _emit 0xd9
        _emit 0xc5
        _emit 0xd8
        _emit 0x64
        _emit 0x24
        _emit 0x0c
        _emit 0xd8
        _emit 0xca
        _emit 0xde
        _emit 0xc1
        _emit 0xdd
        _emit 0x5e
        _emit 0x60
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xd9
        _emit 0xc0
        _emit 0xd8
        _emit 0xe5
        _emit 0xd8
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xde
        _emit 0xe2
        _emit 0xd9
        _emit 0xc6
        _emit 0xde
        _emit 0xca
        _emit 0xde
        _emit 0xc1
        _emit 0xd9
        _emit 0xc4
        _emit 0xd8
        _emit 0x64
        _emit 0x24
        _emit 0x10
        _emit 0xd8
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0xde
        _emit 0xc1
        _emit 0xdd
        _emit 0x5e
        _emit 0x68
        _emit 0x5f
        _emit 0xd9
        _emit 0xc0
        _emit 0xd8
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xd8
        _emit 0xcb
        _emit 0xde
        _emit 0xe9
        _emit 0xd9
        _emit 0xcd
        _emit 0xd9
        _emit 0xe0
        _emit 0xde
        _emit 0xcd
        _emit 0xd9
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xd8
        _emit 0xcb
        _emit 0xd9
        _emit 0xc4
        _emit 0xde
        _emit 0xca
        _emit 0xde
        _emit 0xe1
        _emit 0xd8
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xde
        _emit 0xec
        _emit 0xde
        _emit 0xca
        _emit 0xd8
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xde
        _emit 0xe9
        _emit 0xd8
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xde
        _emit 0xe9
        _emit 0xdd
        _emit 0x5e
        _emit 0x70
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x34
        _emit 0xc3
    }
}
