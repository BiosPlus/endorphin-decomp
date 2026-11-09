// Decompiled translation unit: src/classes/CompoundRenderable.cpp

// [0x00537CA0] CompoundRenderable::vfunc_2 (29 bytes)
extern "C" __declspec(naked) void __fastcall fn_00537CA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je L_skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8]
        call edx
    L_skip:
        mov eax, dword ptr [esi + 0x18]
        mov edx, dword ptr [eax + 0x8]
        lea ecx, [esi + 0x18]
        pop esi
        jmp edx
    }
}

// [0x00537D60] CompoundRenderable::vfunc_24 (29 bytes)
extern "C" __declspec(naked) void __fastcall fn_00537D60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je L_skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x60]
        call edx
    L_skip:
        mov eax, dword ptr [esi + 0x18]
        mov edx, dword ptr [eax + 0x60]
        lea ecx, [esi + 0x18]
        pop esi
        jmp edx
    }
}

// [0x00537B80] CompoundRenderable::vfunc_22 (40 bytes)
extern "C" __declspec(naked) void __fastcall fn_00537B80(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        je L_skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x58]
        push edi
        call edx
    L_skip:
        mov eax, dword ptr [esi + 0x18]
        mov edx, dword ptr [eax + 0x58]
        lea ecx, [esi + 0x18]
        push edi
        call edx
        pop edi
        pop esi
        ret 4
    }
}
