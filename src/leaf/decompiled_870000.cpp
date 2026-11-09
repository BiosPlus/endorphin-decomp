// Decompiled translation unit: src/leaf/decompiled_870000.cpp

// [0x00871D00] sub_00871D00 (25 bytes)
extern "C" void ext_00871C50();

extern "C" __declspec(naked) void __fastcall fn_00871D00(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
    loop_00871D08:
        push edi
        mov ecx, esi
        call ext_00871C50
        test al, al
        jne loop_00871D08
        pop edi
        pop esi
        ret 4
    }
}

// [0x00871090] sub_00871090 (26 bytes)
extern "C" void ext_00870E90();
extern "C" void ext_00870EF0();

extern "C" __declspec(naked) void __stdcall fn_00871090(unsigned char arg) {
    __asm {
        call ext_00870E90
        cmp al, byte ptr [esp + 0x4]
        je match_008710A5
        call ext_00870EF0
        xor al, al
        ret 4
    match_008710A5:
        mov al, 1
        ret 4
    }
}

// [0x008703D0] sub_008703D0 (27 bytes)
extern "C" void __cdecl ext_0049FE40(int, int, int, int);

extern "C" void __fastcall fn_008703D0(void* self, int edx_unused, int a1, int a2) {
    ext_0049FE40(a1, (int)self + 4, a2, 1);
}

// [0x00871E00] sub_00871E00 (27 bytes)
extern "C" void ext_00871BD0();
extern "C" void ext_00871D00();

extern "C" __declspec(naked) void __fastcall fn_00871E00(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_00871BD0
        push edi
        mov ecx, esi
        call ext_00871D00
        pop edi
        pop esi
        ret 4
    }
}

extern "C" void ext_006A5EDE();
extern "C" int mem_009251B4;

// [0x008727FB] sub_008727FB (38 bytes)
extern "C" __declspec(naked) void __fastcall fn_008727FB(void* self, int edx_unused, int a1, int a2) {
    __asm {
        call ext_006A5EDE
        mov ecx, dword ptr [esp + 0x4]
        test ecx, ecx
        mov edx, dword ptr [esp + 0x8]
        mov byte ptr [eax + 0x14], cl
        mov dword ptr [eax + 0x44], edx
        jne skip_0087281B
        push -0x3
        call dword ptr [mem_009251B4]
        pop ecx
    skip_0087281B:
        xor eax, eax
        inc eax
        ret 0x8
    }
}

// [0x00870320] sub_00870320 (38 bytes)
extern "C" void ext_0049D360();
extern "C" void ext_0055DA20();

extern "C" __declspec(naked) void __fastcall fn_00870320(void* self) {
    __asm {
        push ecx
        add ecx, 0x4
        push esi
        push ecx
        mov dword ptr [esp + 0x8], 0x0
        call ext_0049D360
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00871890] sub_00871890 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_00871890(void* self, int edx_unused, void* src) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], 0x99f138
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x8]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0xc], edx
        mov ecx, dword ptr [ecx + 0x10]
        mov dword ptr [eax + 0x10], ecx
        ret 4
    }
}
