// Decompiled translation unit: src/classes/Input.cpp

// [0x00530400] Input::vfunc_0_off_4 (149 bytes)
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_00530400(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        push edi
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov dword ptr [esp + 0xc], ebx
        call ext_0065C640
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [esi + 0x6c], 0x1
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xa4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0x0
        call edx
        mov dword ptr [esi + 0x70], eax
        mov eax, dword ptr [edi]
        mov esi, dword ptr [esi + 0xc]
        mov edx, dword ptr [eax + 0x210]
        mov ecx, edi
        add esi, 0x9c
        call edx
        mov ecx, ebx
        mov byte ptr [esi + 0x13c], al
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005304B0] Input::vfunc_1_off_8 (37 bytes)
extern "C" void __fastcall ext_005442D0(void* self);

extern "C" __declspec(naked) void __fastcall fn_005304B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x64]
        test ecx, ecx
        je done
        cmp dword ptr [esi + 0x30], 0x7
        jne done
        call ext_005442D0
        mov ecx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        pop esi
        jmp edx
    done:
        pop esi
        ret
    }
}
