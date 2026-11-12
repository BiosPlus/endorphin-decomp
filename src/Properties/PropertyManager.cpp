// Decompiled translation unit: src/Properties/PropertyManager.cpp

// [0x00676210] Properties::PropertyManager::vfunc_0 (28 bytes)
// Forwards its three stack arguments to sub_00675DD0 as (a1, a2, a3, 0) using cdecl, then pops 0xC bytes.
extern "C" void ext_00675DD0();

extern "C" int __stdcall fn_00676210(int a1, int a2, int a3) {
    typedef int (__cdecl *Fn)(int, int, int, int);
    return ((Fn)ext_00675DD0)(a1, a2, a3, 0);
}

// [0x00675D30] Properties::PropertyManager::vfunc_7 (37 bytes)
// Walks a singly linked list of nodes via the +0xC next pointer starting at a1; when the
// last node is reached, forwards (node + 0x10) as `this` to sub_006616C0 and returns its result.
extern "C" void ext_006616C0();

extern "C" __declspec(naked) int __fastcall fn_00675D30(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        je L_null
    L_loop:
        mov ecx, dword ptr [eax + 0xc]
        test ecx, ecx
        je L_call
        mov eax, ecx
        test eax, eax
        jne L_loop
    L_null:
        xor eax, eax
        ret 0x4
    L_call:
        lea ecx, [eax + 0x10]
        call ext_006616C0
        ret 0x4
    }
}

// [0x00675D80] Properties::PropertyManager::vfunc_6 (46 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00675D80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x70], 0
        je fail
        mov ecx, dword ptr [esi + 0x70]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        test al, al
        je fail
        mov esi, dword ptr [esi + 0x6c]
        test esi, esi
        je fail
        xor eax, eax
        cmp byte ptr [esi + 0xb8], al
        pop esi
        sete al
        ret
    fail:
        xor al, al
        pop esi
        ret
    }
}

// [0x00676380] Properties::PropertyManager::vfunc_3 (322 bytes)
extern "C" void ext_004EF2B0();
extern "C" void ext_006616C0();
extern "C" void ext_00493D90();
extern "C" void ext_00661620();
extern "C" void ext_006618C0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00676380(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8b4510
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x44]
        mov ebx, dword ptr [esi]
        push edi
        mov edi, dword ptr [ebx + 0x134]
        cmp edi, dword ptr [ebx + 0x138]
        mov ebp, ecx
        jbe L_chk2
        call dword ptr [mem_00925134]
        cmp edi, dword ptr [ebx + 0x138]
    L_chk2:
        jb L_ok
        call dword ptr [mem_00925134]
    L_ok:
        mov edi, dword ptr [edi]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x14]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x1c], ecx
        lea edx, [esp + 0x20]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x44], 0
        call ext_004EF2B0
        mov ecx, eax
        mov byte ptr [esp + 0x40], 1
        call ext_006616C0
        lea ecx, [esp + 0x20]
        mov esi, eax
        mov byte ptr [esp + 0x40], 0
        call ext_00493D90
        lea ecx, [esp + 0x10]
        call ext_00661620
        mov eax, dword ptr [esp + 0x4c]
        test eax, eax
        mov bl, 2
        mov byte ptr [esp + 0x40], bl
        je L_else
        push esi
        push edi
        add eax, 0x10
        push eax
        mov eax, dword ptr [ebp + 0x40]
        push eax
        lea ecx, [esp + 0x38]
        push ecx
        lea ecx, [esp + 0x2c]
        call ext_006618C0
        mov edx, dword ptr [eax]
        mov dword ptr [esp + 0x10], edx
        mov eax, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x14], eax
        lea ecx, [esp + 0x28]
        jmp L_merge
    L_else:
        lea ecx, [esp + 0x30]
        call ext_00661620
        mov ecx, dword ptr [ebp + 0x40]
        push esi
        push edi
        push eax
        push ecx
        lea edx, [esp + 0x38]
        push edx
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x54], 3
        call ext_006618C0
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x10], ecx
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x14], edx
        call ext_00493D90
        mov byte ptr [esp + 0x40], bl
        lea ecx, [esp + 0x30]
    L_merge:
        call ext_00493D90
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x40], 0
        call ext_00493D90
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x40], -1
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret 8
    }
}
