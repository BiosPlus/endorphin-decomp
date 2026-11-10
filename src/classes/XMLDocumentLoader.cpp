// Decompiled translation unit: src/classes/XMLDocumentLoader.cpp

extern "C" int mem_00928B5D;
extern "C" int mem_00936128;
extern "C" void ext_006408C0();

// [0x00682100] XMLDocumentLoader::vfunc_4 (66 bytes)
extern "C" __declspec(naked) void __fastcall fn_00682100(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 14h
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 14h]
        call edx
        test al, al
        mov eax, offset mem_00928B5D
        jne short L_nonzero
        mov eax, offset mem_00936128
    L_nonzero:
        push 0
        push eax
        mov eax, dword ptr [esp + 24h]
        push eax
        lea ecx, [esp + 10h]
        call ext_006408C0
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 14h]
        lea eax, [esp + 4]
        push eax
        call edx
        pop esi
        add esp, 14h
        ret 8
    }
}
