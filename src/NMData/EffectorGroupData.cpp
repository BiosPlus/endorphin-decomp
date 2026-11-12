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
