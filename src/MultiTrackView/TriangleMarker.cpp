// Decompiled translation unit: src/MultiTrackView/TriangleMarker.cpp

extern "C" void ext_0041A790();
extern "C" void ext_0041A830();
extern "C" void ext_00493D90();
extern "C" void ext_00669E40();
extern "C" void ext_0066A180();
extern "C" void ext_0066A310();
extern "C" void ext_006A610C();
extern "C" void ext_006A61A8();
extern "C" int mem_009324A4;
extern "C" int mem_00932478;
extern "C" int mem_009240D8;

// [0x004413E0] MultiTrackView::TriangleMarker::vfunc_1 (586 bytes)
extern "C" __declspec(naked) void __fastcall fn_004413E0(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x87b960
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x70]
        mov esi, ecx
        mov ecx, dword ptr [edi + 0xc]
        mov eax, ecx
        and eax, 0x80000001
        jns short L_441413
        dec eax
        or eax, -2
        inc eax
    L_441413:
        mov ebp, dword ptr [edi]
        mov ebx, dword ptr [edi + 0x4]
        mov edi, dword ptr [esi + 0x48]
        add eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        lea edx, [eax + ebp]
        add ecx, ebx
        mov dword ptr [esp + 0x40], ebp
        sub ebp, eax
        mov dword ptr [esp + 0x44], ebx
        mov dword ptr [esp + 0x48], edx
        mov dword ptr [esp + 0x4c], ecx
        mov dword ptr [esp + 0x50], ebp
        mov dword ptr [esp + 0x54], ecx
        mov edi, dword ptr [edi + 0xfc]
        add eax, ebp
        cmp eax, edi
        mov dword ptr [esp + 0x1c], ecx
        mov dword ptr [esp + 0x18], edx
        jge short L_441479
        mov eax, dword ptr [esp + 0x68]
        pop edi
        mov dword ptr [eax], ebp
        pop esi
        mov dword ptr [eax + 0x4], ebx
        pop ebp
        mov dword ptr [eax + 0x8], edx
        mov dword ptr [eax + 0xc], ecx
        pop ebx
        mov ecx, dword ptr [esp + 0x48]
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret 0xc

    L_441479:
        lea ecx, [esp + 0x30]
        call ext_0066A310
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x60], 0
        call ext_0066A310
        sub esp, 0x10
        cmp byte ptr [esi + 0x88], 0
        mov byte ptr [esp + 0x70], 1
        je short L_4414DF
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x80]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x24]
        fld1
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x80]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        jmp short L_441552

    L_4414DF:
        cmp byte ptr [esi + 0x8b], 0
        jne short L_441519
        fld1
        lea ecx, [esp + 0x40]
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
        jmp short L_441569

    L_441519:
        mov edx, dword ptr [esi + 0x70]
        mov eax, dword ptr [edx]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x80]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x20]
        fld1
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x80]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x20]

    L_441552:
        lea ecx, [esp + 0x40]
        fstp dword ptr [esp]
        call ext_00669E40
        fld1
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fldz

    L_441569:
        fst dword ptr [esp + 0x8]
        lea ecx, [esp + 0x30]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ext_00669E40
        mov esi, dword ptr [esi + 0x48]
        push 0
        push 1
        lea ecx, [esp + 0x28]
        add esi, 0x1b4
        call ext_0066A180
        mov edi, dword ptr [esp + 0x74]
        push eax
        push edi
        mov ecx, esi
        call ext_0041A790
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x70], eax
        call ext_0066A180
        push eax
        push edi
        mov ecx, esi
        call ext_0041A830
        mov ecx, dword ptr [edi + 0x4]
        mov esi, eax
        push 3
        lea eax, [esp + 0x44]
        push eax
        push ecx
        call dword ptr [mem_009240D8]
        push esi
        mov ecx, edi
        call ext_006A61A8
        mov edx, dword ptr [esp + 0x70]
        push edx
        mov ecx, edi
        call ext_006A610C
        mov esi, dword ptr [esp + 0x68]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esi], ebp
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], ecx
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x60], 0
        call ext_00493D90
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x60], 0xffffffff
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x58]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret 0xc
    }
}
