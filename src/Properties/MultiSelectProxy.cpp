// Decompiled translation unit: src/Properties/MultiSelectProxy.cpp

// [0x004EF2F0] Properties::MultiSelectProxy::vfunc_6 (18 bytes)
struct VDispatch004EF2F0 {
    virtual unsigned char vfunc_0();
};

extern "C" unsigned char __fastcall fn_004EF2F0(char* self) {
    if (*(VDispatch004EF2F0**)(self + 0x34) == 0) {
        return 0;
    }
    return (*(VDispatch004EF2F0**)(self + 0x34))->vfunc_0();
}

// [0x004F27A0] Properties::MultiSelectProxy::vfunc_0_off_4 (28 bytes)
extern "C" void ext_004F2750();

extern "C" __declspec(naked) void __fastcall fn_004F27A0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub eax, 0x1
        jne L_004F27B9
        mov eax, dword ptr [ecx + 0x44]
        lea edx, [ecx + 0x34]
        push eax
        push edx
        add ecx, -0x4
        call ext_004F2750
L_004F27B9:
        ret 0x4
    }
}

// [0x004EFC40] Properties::MultiSelectProxy::vfunc_1 (356 bytes)
extern "C" void ext_0041A190();
extern "C" void ext_0041CF50();
extern "C" void ext_00666320();
extern "C" void ext_006667D0();
extern "C" int mem_00925134;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004EFC40(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0x0]
        push 0x88f3a1
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        lea eax, [esp + 0x44]
        push eax
        lea ecx, [esp + 0x14]
        lea esi, [ebp + 0x234]
        push ecx
        mov ecx, esi
        call ext_0041A190
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 0x4]
        je L_004EFC84
        cmp edi, esi
        je L_004EFC8A
    L_004EFC84:
        call dword ptr [mem_00925134]
    L_004EFC8A:
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ebx
        je L_004EFD8F
        test edi, edi
        jne L_004EFCA0
        call dword ptr [mem_00925134]
    L_004EFCA0:
        cmp esi, dword ptr [edi + 0x4]
        jne L_004EFCAB
        call dword ptr [mem_00925134]
    L_004EFCAB:
        mov edx, dword ptr [esp + 0x48]
        mov ecx, dword ptr [esp + 0x44]
        mov edi, dword ptr [esi + 0x10]
        push edx
        add ecx, 0x40
        call ext_0041CF50
        push 0x94c0a8
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [ebp + 0xc]
        lea eax, [esp + 0x18]
        push eax
        push ecx
        xor esi, esi
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0x44], esi
        call ext_00666320
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x3c], 0x2
        call dword ptr [mem_00924FF4]
        cmp dword ptr [ebp + 0x30], esi
        jle L_004EFD7E
        mov edi, edi
    L_004EFD00:
        mov ecx, dword ptr [ebp + 0x14]
        test ecx, ecx
        je L_004EFD13
        mov eax, dword ptr [ebp + 0x18]
        sub eax, ecx
        sar eax, 0x2
        cmp esi, eax
        jb L_004EFD19
    L_004EFD13:
        call dword ptr [mem_00925134]
    L_004EFD19:
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        mov edx, dword ptr [ebp + 0x14]
        mov ebx, dword ptr [edx + esi*4]
        je L_004EFD32
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp esi, eax
        jb L_004EFD38
    L_004EFD32:
        call dword ptr [mem_00925134]
    L_004EFD38:
        mov ecx, dword ptr [esp + 0x48]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 0x4]
        push ecx
        mov ecx, dword ptr [edx + esi*4]
        mov edx, dword ptr [ecx + 0x40]
        push edx
        mov ecx, ebx
        call eax
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        je L_004EFD63
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp esi, eax
        jb L_004EFD69
    L_004EFD63:
        call dword ptr [mem_00925134]
    L_004EFD69:
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [ecx + esi*4]
        mov eax, dword ptr [edx + 0x40]
        add esi, 0x1
        mov byte ptr [eax + 0x67], 0x0
        cmp esi, dword ptr [ebp + 0x30]
        jl L_004EFD00
    L_004EFD7E:
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0x3c], 0xffffffff
        call ext_006667D0
    L_004EFD8F:
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x30
        ret 0x8
    }
}

// [0x004EF2D0] Properties::MultiSelectProxy::vfunc_0 (31 bytes)
extern "C" void ext_00675DD0();

extern "C" __declspec(naked) void __fastcall fn_004EF2D0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        movzx eax, byte ptr [ecx + 0x5c]
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x8]
        push ecx
        push edx
        push eax
        call ext_00675DD0
        add esp, 0x10
        ret 0xc
    }
}
