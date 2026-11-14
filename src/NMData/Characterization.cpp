// Decompiled translation unit: src/NMData/Characterization.cpp

// [0x005AAA70] NMData::Characterization::vfunc_22 (36 bytes)
extern "C" void ext_006404E0();
extern "C" void ext_0058F650();
extern "C" int mem_00A9ED9C;

extern "C" __declspec(naked) int __fastcall fn_005AAA70(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9ED9C]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        call ext_006404E0
        mov esi, eax
        push esi
        mov ecx, edi
        call ext_0058F650
        pop edi
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x005ABEA0] NMData::Characterization::vfunc_17_off_C (132 bytes)
extern "C" void ext_0058F2F0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005ABEA0(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x154
        mov edi, ecx
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov [esp + 8], esi
        xor eax, eax
        cmp esi, eax
        mov [esp + 0x14], eax
        je done_005ABEA0
        lea eax, [edi - 0xc]
        push eax
        mov ecx, esi
        call ext_0058F2F0
        mov dword ptr [esi + 0x150], 0x928eac
        mov dword ptr [esi], 0x935afc
        mov dword ptr [esi + 0x4], 0x935ab4
        mov dword ptr [esi + 0x8], 0x935a74
        mov dword ptr [esi + 0xc], 0x935a24
        mov dword ptr [esi + 0x150], 0x935a10
        mov eax, esi
done_005ABEA0:
        mov ecx, [esp + 0xc]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}
