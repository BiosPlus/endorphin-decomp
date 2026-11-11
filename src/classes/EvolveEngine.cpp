// Decompiled translation unit: src/classes/EvolveEngine.cpp

extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_0067AE20();
extern "C" int mem_009241E0;

// [0x0067AF30] EvolveEngine::vfunc_2 (118 bytes)
extern "C" __declspec(naked) void __fastcall fn_0067AF30(void* self) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x8]
        mov ecx, edi
        mov dword ptr [esp + 0x8], edi
        call ext_0065C640
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        mov byte ptr [esi + 0x4], 0x0
        call ext_0067AE20
        test al, al
        je done
        mov eax, dword ptr [esi + 0xc]
        mov eax, dword ptr [eax + 0x10]
        push eax
        call dword ptr [mem_009241E0]
        mov esi, dword ptr [esi + 0xc]
        mov dword ptr [esi + 0x10], 0x0
    done:
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
