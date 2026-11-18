// Decompiled translation unit: src/classes/XSIIO.cpp

extern "C" void ext_00553720();
extern "C" void ext_00640390();

// [0x00563600] XSIIO::vfunc_3 (37 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00563600(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x0
        mov esi, ecx
        push 0x92ce4c
        mov ecx, edi
        call ext_00640390
        push eax
        mov ecx, esi
        call ext_00553720
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00566720] XSIIO::vfunc_13 (109 bytes)
extern "C" void ext_00564F10();
extern "C" void ext_00564FE0();
extern "C" void ext_00565010();
extern "C" void ext_00565060();
extern "C" void ext_005650F0();
extern "C" void ext_005661E0();
extern "C" void ext_00566430();
extern "C" void ext_00566580();
extern "C" void ext_006629B0();

extern "C" __declspec(naked) void __fastcall fn_00566720(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_00564F10
        test al, al
        je epilogue
        mov ecx, esi
        call ext_00564FE0
        mov ecx, esi
        call ext_00565010
        mov ecx, esi
        call ext_00565060
        cmp byte ptr [esi + 0x214], 0x0
        je fallback
        lea ecx, [esi + 0x1f8]
        push ecx
        call ext_006629B0
        add esp, 0x4
        test al, al
        je fallback
        mov ecx, esi
        call ext_00566580
        mov ecx, esi
        call ext_005650F0
        pop esi
        ret 0x4
    fallback:
        mov ecx, esi
        call ext_00566430
        mov ecx, esi
        call ext_005661E0
        mov ecx, esi
        call ext_005650F0
    epilogue:
        pop esi
        ret 0x4
    }
}

// [0x00566D80] XSIIO::vfunc_10 (129 bytes)
extern "C" void ext_005646D0();
extern "C" void ext_00566CE0();
extern "C" void ext_006A6DD2();
extern "C" void ext_007C56DC();
extern "C" void ext_007C570C();

extern "C" __declspec(naked) void __fastcall fn_00566D80(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89b8e0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov esi, ecx
        push eax
        mov dword ptr [ebp - 0x14], esi
        call ext_005646D0
        test al, al
        je L_end_00566D80
        mov ecx, dword ptr [esi + 0x494]
        mov dword ptr [ebp - 4], 0
        call ext_007C56DC
        mov ecx, esi
        call ext_00566CE0
        mov ecx, dword ptr [esi + 0x494]
        call ext_007C570C
L_end_00566D80:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        mov ecx, dword ptr [ebp - 0x14]
        mov ecx, dword ptr [ecx + 0x494]
        call ext_007C570C
        push 0
        push 0
        call ext_006A6DD2
    }
}
