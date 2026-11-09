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
