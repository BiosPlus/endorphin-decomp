// Decompiled translation unit: src/classes/VideoExporter.cpp

extern "C" void ext_0041CD60();
extern "C" void ext_00558080();
extern "C" int mem_00925134;
extern "C" int mem_00993838;

// [0x00404150] VideoExporter::vfunc_33 (158 bytes)
extern "C" __declspec(naked) void __fastcall fn_00404150(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push esi
        push eax
        mov edi, ecx
        call ext_00558080
        fld dword ptr [edi + 0x174]
        mov ecx, esi
        fstp dword ptr [esp + 0x14]
        xor edi, edi
        call ext_0041CD60
        test eax, eax
        jle L_done_neg
        mov ebx, dword ptr [mem_00925134]
L_loop:
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        je L_bad
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jb L_ok
L_bad:
        call ebx
L_ok:
        mov ecx, dword ptr [esi + 4]
        fld dword ptr [ecx + 4 * edi]
        fsub dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        test ah, 5
        jnp L_found
        mov ecx, esi
        add edi, 1
        call ext_0041CD60
        cmp edi, eax
        jl L_loop
L_done_neg:
        mov eax, dword ptr [esi + 4]
        test eax, eax
        jne L_nonnull
        xor esi, esi
        pop edi
        lea eax, [esi - 1]
        pop esi
        pop ebx
        ret 8
L_found:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 8
L_nonnull:
        mov esi, dword ptr [esi + 8]
        sub esi, eax
        sar esi, 2
        pop edi
        lea eax, [esi - 1]
        pop esi
        pop ebx
        ret 8
    }
}
