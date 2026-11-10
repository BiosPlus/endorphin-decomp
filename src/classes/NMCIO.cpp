// Decompiled translation unit: src/classes/NMCIO.cpp

// [0x0056D920] NMCIO::vfunc_13 (61 bytes)
extern "C" void ext_006619D0();
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_0056D920(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x420]
        mov eax, dword ptr [ecx + 0x4]
        push edi
        add eax, 0xcc
        push eax
        call ext_006619D0
        mov ecx, dword ptr [esi + 0x418]
        mov edi, dword ptr [ecx]
        mov ecx, dword ptr [esp + 0xc]
        push 1
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x418]
        mov edx, dword ptr [edi + 0x24]
        push eax
        call edx
        pop edi
        pop esi
        ret 4
    }
}
