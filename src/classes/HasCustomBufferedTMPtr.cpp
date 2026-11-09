// Decompiled translation unit: src/classes/HasCustomBufferedTMPtr.cpp

extern "C" void ext_00661B50();
extern "C" int mem_009253C8;

// [0x00532510] HasCustomBufferedTMPtr::vfunc_11 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_00532510(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [ecx + 0x8]
        push eax
        call ext_00661B50
        push eax
        call dword ptr [mem_009253C8]
        ret
    }
}
