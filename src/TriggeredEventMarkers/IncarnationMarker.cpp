// Decompiled translation unit: src/TriggeredEventMarkers/IncarnationMarker.cpp

extern "C" void ext_00493D90();
extern "C" void ext_00669E40();
extern "C" void ext_0066A180();
extern "C" void ext_0066A310();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A610C();
extern "C" void ext_006A6148();
extern "C" void ext_006A61A8();
extern "C" void ext_006A61AE();
extern "C" int mem_009324A4;
extern "C" int mem_00932478;
extern "C" int mem_009240D8;
extern "C" int mem_0092A23C;

// [0x00459A90] TriggeredEventMarkers::IncarnationMarker::vfunc_1 (641 bytes)
extern "C" __declspec(naked) void __fastcall fn_00459A90(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0x0]
        push 0x87f270
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x54
        push ebx
        mov ebx, dword ptr [esp + 0x70]
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [ebx + 0xc]
        mov eax, ecx
        and eax, 0x80000001
        push edi
        jns L_pos
        dec eax
        or eax, -2
        inc eax
    L_pos:
        mov edi, dword ptr [ebx + 0x4]
        add eax, ecx
        cdq
        sub eax, edx
        mov edx, dword ptr [ebx]
        sar eax, 1
        mov ebp, edx
        lea ebx, [edx + eax]
        sub ebp, eax
        add ecx, edi
        mov dword ptr [esp + 0x5c], edx
        mov edx, dword ptr [esi + 0x48]
        mov dword ptr [esp + 0x4c], ebp
        mov dword ptr [esp + 0x50], edi
        mov dword ptr [esp + 0x54], ebx
        mov dword ptr [esp + 0x58], edi
        mov dword ptr [esp + 0x60], ecx
        mov edx, dword ptr [edx + 0xfc]
        add eax, ebp
        cmp eax, edx
        mov dword ptr [esp + 0x18], ecx
        jge L_big
        mov eax, dword ptr [esp + 0x74]
        mov dword ptr [eax], ebp
        mov dword ptr [eax + 0x4], edi
        pop edi
        pop esi
        mov dword ptr [eax + 0x8], ebx
        pop ebp
        mov dword ptr [eax + 0xc], ecx
        pop ebx
        mov ecx, dword ptr [esp + 0x54]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x60
        ret 0xc
    L_big:
        lea ecx, [esp + 0x3c]
        call ext_0066A310
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x6c], 0x0
        call ext_0066A310
        sub esp, 0x10
        cmp byte ptr [esi + 0x88], 0x0
        mov byte ptr [esp + 0x7c], 0x1
        je L_else
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x8c]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x24]
        fld1
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x8c]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        jmp L_c00
    L_else:
        cmp byte ptr [esi + 0x8b], 0x0
        jne L_alt
        fld1
        lea ecx, [esp + 0x4c]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [mem_009324A4]
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ext_00669E40
        fld1
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fld dword ptr [mem_00932478]
        jmp L_c17
    L_alt:
        mov edx, dword ptr [esi + 0x70]
        mov eax, dword ptr [edx]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x8c]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x20]
        fld1
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x8c]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x20]
    L_c00:
        lea ecx, [esp + 0x4c]
        fstp dword ptr [esp]
        call ext_00669E40
        fld1
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fldz
    L_c17:
        fst dword ptr [esp + 0x8]
        lea ecx, [esp + 0x3c]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ext_00669E40
        lea ecx, [esp + 0x3c]
        call ext_0066A180
        push eax
        lea ecx, [esp + 0x28]
        call ext_006A61AE
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x6c], 0x2
        call ext_0066A180
        push eax
        push 0x1
        push 0x0
        lea ecx, [esp + 0x28]
        call ext_006A6148
        mov esi, dword ptr [esp + 0x78]
        lea eax, [esp + 0x24]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x70], 0x3
        call ext_006A61A8
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x80], eax
        call ext_006A610C
        mov eax, dword ptr [esi + 0x4]
        push 0x3
        lea edx, [esp + 0x50]
        push edx
        push eax
        call dword ptr [mem_009240D8]
        mov ecx, dword ptr [esp + 0x7c]
        push ecx
        mov ecx, esi
        call ext_006A61A8
        mov esi, dword ptr [esp + 0x74]
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [esi], ebp
        mov dword ptr [esi + 0x4], edi
        mov dword ptr [esi + 0x8], ebx
        mov edi, offset mem_0092A23C
        lea ecx, [esp + 0x1c]
        mov dword ptr [esi + 0xc], edx
        mov byte ptr [esp + 0x6c], 0x2
        mov dword ptr [esp + 0x1c], edi
        call ext_006A5FF2
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x6c], 0x1
        mov dword ptr [esp + 0x24], edi
        call ext_006A5FF2
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x6c], 0x0
        call ext_00493D90
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0x6c], 0xffffffff
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x64]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x60
        ret 0xc
    }
}
