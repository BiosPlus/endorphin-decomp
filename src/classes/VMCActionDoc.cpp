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

// [0x004666E0] VMCActionDoc::vfunc_32 (177 bytes)
extern "C" void ext_00465F70();
extern "C" void ext_00466050();
extern "C" void ext_00466360();
extern "C" void ext_004665D0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) int __fastcall fn_004666E0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8817b9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        call ext_004665D0
        mov eax, dword ptr [ebp + 0x8]
        push eax
        lea ecx, [ebp - 0x34]
        call dword ptr [mem_00924FE4]
        lea ecx, [ebp - 0x34]
        push ecx
        mov ecx, esi
        mov byte ptr [ebp - 0x4], 1
        call ext_00465F70
        lea ecx, [ebp - 0x34]
        mov byte ptr [ebp - 0x4], bl
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        call ext_00466360
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x64]
        push ebx
        mov ecx, esi
        call eax
        mov eax, 1
        mov ecx, dword ptr [ebp - 0xc]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    funclet_unwind:
        mov esi, dword ptr [ebp - 0x14]
        mov ecx, esi
        call ext_00466360
        mov ecx, dword ptr [ebp - 0x18]
        push ecx
        mov ecx, esi
        call ext_00466050
        mov eax, 0x46677c
        ret
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        xor eax, eax
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}
