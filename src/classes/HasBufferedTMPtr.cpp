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

// [0x005324B0] HasBufferedTMPtr::vfunc_12 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_005324B0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [mem_00AEE8A8]
        push eax
        call ext_00661B50
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        add eax, 0x30
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [edx + 0x1c]
        jmp eax
    }
}

// [0x00532680] HasBufferedTMPtr::vfunc_1 (34 bytes)
extern "C" void ext_004F9950();

extern "C" __declspec(naked) int __fastcall fn_00532680(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [mem_00AEE8A8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        push eax
        call ext_00661B50
        mov ecx, eax
        call ext_004F9950
        mov eax, esi
        pop esi
        ret 0x4
    }
}
