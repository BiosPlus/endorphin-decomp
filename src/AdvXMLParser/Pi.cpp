// Decompiled translation unit: src/AdvXMLParser/Pi.cpp

extern "C" void ext_004701E0();

// [0x0063E6A0] AdvXMLParser::Pi::vfunc_3 (23 bytes)
// If arg0 == 7, return true (ret 4); otherwise replace arg0 with the value and tail-jump to 0x004701E0.
extern "C" __declspec(naked) unsigned char __stdcall fn_0063E6A0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 7
        jne not_seven
        mov al, 1
        ret 4
    not_seven:
        mov dword ptr [esp + 4], eax
        jmp ext_004701E0
    }
}

// [0x00640D60] AdvXMLParser::Pi::vfunc_5 (123 bytes)
extern "C" void ext_00640930();
extern "C" void ext_00640940();
extern "C" void ext_00640CB0();
extern "C" int mem_00924ED0;
extern "C" int mem_00924FD8;
extern "C" int mem_00924EC0;

extern "C" __declspec(naked) void __fastcall fn_00640D60(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, ecx
        mov ecx, esi
        call ext_00640CB0
        mov ecx, dword ptr [esi + 0x8]
        xor ebx, ebx
        push 0x97cd38
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924ED0]
        mov ecx, dword ptr [esi + 0x8]
        lea eax, [edi + 0x4]
        push eax
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924FD8]
        cmp dword ptr [edi + 0x38], ebx
        je done
        mov ecx, dword ptr [esi + 0x8]
        push 0x20
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924EC0]
        mov ecx, dword ptr [esi + 0x8]
        add edi, 0x24
        push edi
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924FD8]
    done:
        mov ecx, dword ptr [esi + 0x8]
        push 0x97cd34
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924ED0]
        mov ecx, esi
        call ext_00640940
        mov ecx, esi
        call ext_00640930
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}
