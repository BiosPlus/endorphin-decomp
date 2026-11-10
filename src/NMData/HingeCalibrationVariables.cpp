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

// [0x006228E0] NMData::HingeCalibrationVariables::vfunc_27 (84 bytes)
// Allocates 0x10 bytes via ext_006A5C62 (cdecl operator new), constructs the object via
// ext_00622750 (returns the block in eax); if allocation failed, uses NULL. Then calls
// three virtual methods on the result with this->+0xc, +0x4, +0x8 (vtbl slots 5, 3, 4).
// Returns the object pointer in eax.
extern "C" void* __cdecl ext_006A5C62(int size);
extern "C" void ext_00622750();

extern "C" __declspec(naked) void* __fastcall fn_006228E0(void* self) {
    __asm {
        push esi
        push edi
        push 0x10
        mov edi, ecx
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je null_obj
        mov ecx, eax
        call ext_00622750
        mov esi, eax
        jmp have_obj
    null_obj:
        xor esi, esi
    have_obj:
        mov eax, dword ptr [esi]
        fld dword ptr [edi + 0xc]
        mov edx, dword ptr [eax + 0x14]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [edi + 0x4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [edi + 0x8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}
