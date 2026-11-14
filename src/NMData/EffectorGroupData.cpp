// Decompiled translation unit: src/NMData/EffectorGroupData.cpp

extern "C" int mem_00A9EE68;
extern "C" int mem_00924FE4;

// [0x0060D4D0] NMData::EffectorGroupData::vfunc_8 (35 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from the const char* held in mem_00A9EE68.
extern "C" __declspec(naked) void __fastcall fn_0060D4D0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EE68]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0060DB20] NMData::EffectorGroupData::vfunc_0 (96 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_0060BA10();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0060DB20(void* self) {
    __asm {
        push -1
        push 0x8a87a8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x44]
        mov dword ptr [esp + 0x10], 0
        call ext_004026E0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0060BA10
        test byte ptr [esp + 0x18], 0x1
        je L_0060DB6C
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_0060DB6C:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0060D5A0] NMData::EffectorGroupData::vfunc_19 (67 bytes)
extern "C" void ext_00406510();
extern "C" void ext_0060BB50();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0060D5A0(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_0060BB50
        mov edi, dword ptr [esi + 0x4c]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x44
        cmp dword ptr [esi + 0x4], edi
        jbe L_chk1
        call ebp
    L_chk1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_chk2
        call ebp
    L_chk2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00406510
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0060D500] NMData::EffectorGroupData::vfunc_20 (157 bytes)
extern "C" int mem_00924FD0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0060D500(void* self) {
    __asm {
        push -1
        push 0x8a86bc
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x3c
        push esi
        mov esi, ecx
        push 0x972450
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        add esi, 0x4
        push esi
        push eax
        lea eax, [esp + 0x10]
        push eax
        mov dword ptr [esp + 0x54], 1
        call dword ptr [mem_00924FD0]
        mov esi, dword ptr [esp + 0x5c]
        push 0x93bf0c
        push eax
        push esi
        mov byte ptr [esp + 0x60], 2
        call dword ptr [mem_00924ECC]
        add esp, 0x18
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 1
        mov byte ptr [esp + 0x48], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x48], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x40]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x48
        ret 0x8
    }
}

// [0x0060D3A0] NMData::EffectorGroupData::vfunc_22 (53 bytes)
extern "C" void ext_004C1B50();
extern "C" void ext_0060C530();
extern "C" int mem_009723D4;

extern "C" __declspec(naked) void __fastcall fn_0060D3A0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call ext_0060C530
        push offset mem_009723D4
        add edi, 0x44
        push edi
        add esi, 0x44
        push esi
        lea ecx, [esp + 0x1c]
        call ext_004C1B50
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x0060D280] NMData::EffectorGroupData::vfunc_14 (281 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0063F8D0();
extern "C" void ext_00640110();
extern "C" void ext_00640270();
extern "C" void ext_006404E0();
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9EE64;

extern "C" __declspec(naked) void __fastcall fn_0060D280(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        mov eax, dword ptr [mem_00A9EE68]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x44]
        push eax
        call ext_006404E0
        mov ecx, dword ptr [mem_00A9F838]
        mov ebp, eax
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x18], ebp
        call ext_00640110
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
        mov edi, dword ptr [esi + 0x48]
        add esi, 0x44
        cmp edi, dword ptr [esi + 0x8]
        jbe short L_0060D2F0
        call dword ptr [mem_00925134]
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_0060D2F0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe short L_0060D2FE
        call dword ptr [mem_00925134]
    L_0060D2FE:
        cmp esi, esi
        je short L_0060D308
        call dword ptr [mem_00925134]
    L_0060D308:
        cmp edi, ebx
        je short L_0060D380
        mov edx, dword ptr [mem_00A9EE64]
        push edx
        mov ecx, ebp
        call ext_006404E0
        cmp edi, dword ptr [esi + 0x8]
        mov ebx, eax
        jb short L_0060D327
        call dword ptr [mem_00925134]
    L_0060D327:
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, ebx
        mov ebp, eax
        call ext_0063F8D0
        push ebp
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x40], 0
        call ext_00640270
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x3c], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp edi, dword ptr [esi + 0x8]
        jb short L_0060D374
        call dword ptr [mem_00925134]
    L_0060D374:
        mov ebp, dword ptr [esp + 0x14]
        add edi, 0x1c
        jmp L_0060D2F0
    L_0060D380:
        mov ecx, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x44]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 0x4
    }
}
