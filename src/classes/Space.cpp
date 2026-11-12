// Decompiled translation unit: src/classes/Space.cpp

extern "C" int mem_00A9F7DC;
extern "C" int mem_00A9F7E0;
extern "C" int mem_00A9FA80;
extern "C" void ext_0063EFE0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0046C0A0();

// [0x0065BC70] Space::vfunc_1 (210 bytes)
extern "C" __declspec(naked) void __fastcall fn_0065BC70(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        cmp esi, 0xb53a34
        push edi
        mov edi, ecx
        je L_end
        cmp esi, 0xb53b30
        je L_end
        cmp esi, 0xb53ab0
        je L_end
        cmp esi, 0xb53a70
        je L_end
        cmp esi, 0xb53af0
        je L_end
        mov eax, dword ptr [mem_00A9F7DC]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [edi + 0x4]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9F7E0]
        add esp, 0x8
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [edi + 0x8]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9FA80]
        add esp, 0x8
        push eax
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_end
        cmp eax, 0xb53b30
        je L_end
        cmp eax, 0xb53ab0
        je L_end
        cmp eax, 0xb53a70
        je L_end
        cmp eax, 0xb53af0
        je L_end
        lea ecx, [esp + 0xc]
        push ecx
        add edi, 0xc
        push edi
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        add esp, 0x8
    L_end:
        pop edi
        pop esi
        ret 0x4
    }
}
