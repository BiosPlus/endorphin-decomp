// Decompiled translation unit: src/classes/EvolveEngine.cpp

extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_0067AE20();
extern "C" int mem_009241E0;

extern "C" void ext_00501140();
extern "C" void ext_0065F450();
extern "C" void ext_006721F0();

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

// [0x005013A0] EvolveEngine::vfunc_2_off_10 (73 bytes)
extern "C" __declspec(naked) void __fastcall fn_005013A0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov esi, ecx
        push edi
        lea ecx, [esi + 0x68]
        mov dword ptr [esp + 0xc], 0x0
        call ext_00501140
        test eax, eax
        je loc_5013d4
        mov esi, dword ptr [esp + 0x10]
        push eax
        push esi
        call ext_006721F0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    loc_5013d4:
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        mov ecx, esi
        call ext_0065F450
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0x8
    }
}
