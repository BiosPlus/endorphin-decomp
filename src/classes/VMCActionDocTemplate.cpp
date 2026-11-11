// Decompiled translation unit: src/classes/VMCActionDocTemplate.cpp

extern "C" void ext_006A6AFC();
extern "C" int ext_006A6B02();
extern "C" int mem_00924300;

// [0x004675E0] VMCActionDocTemplate::vfunc_28 (100 bytes)
extern "C" __declspec(naked) int __fastcall fn_004675E0(void* self, int edx_unused, int a1, int* a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, ecx
        mov dword ptr [ebx], 0x0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x5c]
        push edi
        call edx
        test eax, eax
        mov edi, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x14], eax
        je L_final
L_loop:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x60]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call edx
        push edi
        lea ecx, [eax + 0x24]
        call dword ptr [mem_00924300]
        push eax
        call ext_006A6B02
        test eax, eax
        jne L_fail
        cmp dword ptr [esp + 0x14], eax
        jne L_loop
L_final:
        push ebx
        push edi
        mov ecx, esi
        call ext_006A6AFC
        pop edi
        pop esi
        pop ebx
        ret 0x8
L_fail:
        pop edi
        pop esi
        mov eax, 0x4
        pop ebx
        ret 0x8
    }
}
