// Decompiled translation unit: src/classes/HasBufferedTMPtr.cpp

extern "C" void ext_00661B50();
extern "C" int mem_00AEE8A8;
extern "C" int mem_009253C8;

// [0x00532430] HasBufferedTMPtr::vfunc_11 (23 bytes)
extern "C" __declspec(naked) void __fastcall fn_00532430(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [mem_00AEE8A8]
        push eax
        call ext_00661B50
        push eax
        call dword ptr [mem_009253C8]
        ret
    }
}
