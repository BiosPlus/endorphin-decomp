// Decompiled translation unit: src/classes/World.cpp

// [0x0059C7E0] World::vfunc_33 (8 bytes)
extern "C" void ext_0059C770();

extern "C" __declspec(naked) void __cdecl fn_0059C7E0() {
    __asm {
        push 0
        call ext_0059C770
        ret
    }
}

// [0x00594650] World::vfunc_1 (111 bytes)
extern "C" void ext_00586140();
extern "C" int mem_00A9EFF8;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void* __fastcall fn_00594650(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x248]
        mov edx, dword ptr [eax]
        push edi
        mov edi, dword ptr [esp + 0xc]
        lea ecx, [esi + 0x248]
        push edi
        call edx
        test eax, eax
        je short L_fallback_cmp
        mov eax, dword ptr [eax]
        pop edi
        pop esi
        ret 0x4
    L_fallback_cmp:
        mov eax, dword ptr [mem_00A9EFF8]
        push eax
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je short L_fallback_call
        mov eax, dword ptr [esi + 0x264]
        test eax, eax
        je short L_try_270
    L_ret_plus_c:
        pop edi
        add eax, 0xc
        pop esi
        ret 0x4
    L_try_270:
        mov eax, dword ptr [esi + 0x270]
        test eax, eax
        je short L_fallback_call
        add eax, 0xe0
        jne short L_ret_plus_c
        pop edi
        xor eax, eax
        pop esi
        ret 0x4
    L_fallback_call:
        push edi
        mov ecx, esi
        call ext_00586140
        pop edi
        pop esi
        ret 0x4
    }
}

extern "C" void ext_0065F450();
extern "C" void ext_006721F0();

// [0x00593F30] World::vfunc_2 (81 bytes)
extern "C" void* __fastcall fn_00593F30(void* self, int edx_unused, void* a1, void* a2) {
    volatile int dummy = 0;
    typedef void* (__thiscall *VFunc0)(void*, void*);
    void* obj = (char*)self + 0x288;
    void* res = ((VFunc0)(*(void***)obj)[0])(obj, a2);
    if (res != 0) {
        ((void (__cdecl *)(void*, void*))ext_006721F0)(a1, res);
        return a1;
    }
    ((void (__thiscall *)(void*, void*, void*))ext_0065F450)(self, a1, a2);
    return a1;
}
