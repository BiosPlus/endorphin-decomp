// Decompiled translation unit: src/Properties/TargetSelectionProxy.cpp

extern "C" int mem_00925134;

// [0x004EF460] Properties::TargetSelectionProxy::vfunc_0 (61 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EF460(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        je done_pop_ret
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        sar ecx, 2
        je done_pop_ret
        test eax, eax
        je invalid
        mov edx, dword ptr [esi + 0x14]
        sub edx, eax
        sar edx, 2
        jne ok
invalid:
        call dword ptr [mem_00925134]
ok:
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        pop esi
        add esp, 4
        mov edx, dword ptr [edx]
        jmp edx
done_pop_ret:
        pop esi
        pop ecx
        ret 0x10
    }
}
