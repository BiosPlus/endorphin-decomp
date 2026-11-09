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
