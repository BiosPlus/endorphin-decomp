// Decompiled translation unit: src/Properties/ValidatingValue.cpp

extern "C" void ext_0041CE40();
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

// [0x004623B0] Properties::ValidatingValue::vfunc_3 (132 bytes)
extern "C" __declspec(naked) void __fastcall fn_004623B0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x880b11
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x18], 0
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0xc]
        call ext_0041CE40
        mov edi, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0x40]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx]
        push edi
        push eax
        mov eax, dword ptr [esi + 0x44]
        push eax
        mov byte ptr [esp + 0x24], 1
        call edx
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        pop edi
        mov byte ptr [esp + 0x14], 0
        pop esi
        je short L_done
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp]
        push edx
        call eax
    L_done:
        lea ecx, [esp + 0x18]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}
