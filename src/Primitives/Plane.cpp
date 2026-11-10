// Decompiled translation unit: src/Primitives/Plane.cpp

extern "C" void ext_00661A80();
extern "C" int mem_00AEE8A8;

// [0x0053A610] Primitives::Plane::vfunc_25 (55 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053A610(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [mem_00AEE8A8]
        test ecx, ecx
        je done_call
        test esi, esi
        je null_self
        lea eax, [esi + 0x14]
        jmp push_arg
null_self:
        xor eax, eax
push_arg:
        push eax
        call ext_00661A80
        mov dword ptr [esi + 0x30], eax
done_call:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0x20], 0
        mov byte ptr [esi + 0x4], 1
        pop esi
        ret 0xc
    }
}
