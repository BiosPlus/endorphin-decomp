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
