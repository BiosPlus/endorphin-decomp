// Decompiled translation unit: src/NMData/HingeCalibrationVariables.cpp

// imported basic_string(const char*) ctor (MSVCP80)
extern "C" int mem_00924FE4;

// [0x006227B0] NMData::HingeCalibrationVariables::vfunc_28 (34 bytes)
// Constructs a std::string in the first stack-arg buffer from a literal C string
// via the imported ctor, returns the buffer in eax (ret 0x8: two stack args).
extern "C" __declspec(naked) void __fastcall fn_006227B0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x9770f4
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
