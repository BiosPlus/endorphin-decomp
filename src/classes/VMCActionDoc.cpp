// Decompiled translation unit: src/classes/VMCActionDoc.cpp

extern "C" void ext_004663A0();
extern "C" int __fastcall ext_00466A30(void* self, int edx_unused, void* a1);
extern "C" void ext_00467380();
extern "C" int __fastcall ext_006A6A9C(void* self, int edx_unused, void* a1);
extern "C" void ext_006A6AA2();

// [0x004673A0] VMCActionDoc::vfunc_41 (61 bytes)
extern "C" __declspec(naked) int __fastcall fn_004673A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004663A0
        test al, al
        je ret_zero_004673A0
        mov eax, dword ptr [esi + 0x60]
        test eax, eax
        jne state_nonzero_004673A0
        mov ecx, esi
        pop esi
        jmp ext_006A6AA2
state_nonzero_004673A0:
        cmp eax, 1
        jne ret_zero_004673A0
        mov ecx, esi
        call ext_00467380
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x64]
        push 0
        mov ecx, esi
        call edx
        mov eax, 1
        pop esi
        ret
ret_zero_004673A0:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x00466D00] VMCActionDoc::vfunc_31 (36 bytes)
extern "C" __declspec(naked) int __fastcall fn_00466D00(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_006A6A9C
        test eax, eax
        jne nonzero_00466D00
        pop edi
        pop esi
        ret 0x4
nonzero_00466D00:
        push edi
        mov ecx, esi
        call ext_00466A30
        pop edi
        pop esi
        ret 0x4
    }
}
