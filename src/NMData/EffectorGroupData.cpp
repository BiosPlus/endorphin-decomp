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
