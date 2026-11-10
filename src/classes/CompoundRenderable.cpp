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

// [0x00537C70] CompoundRenderable::vfunc_1 (40 bytes)
extern "C" __declspec(naked) void __fastcall fn_00537C70(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        je L_skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push edi
        call edx
    L_skip:
        mov eax, dword ptr [esi + 0x18]
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [esi + 0x18]
        push edi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x00537D00] CompoundRenderable::vfunc_11 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_00537D00(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x10]
        je L_skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x2c]
        push ebx
        push edi
        call edx
    L_skip:
        mov eax, dword ptr [esi + 0x18]
        mov edx, dword ptr [eax + 0x2c]
        lea ecx, [esi + 0x18]
        push ebx
        push edi
        call edx
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}

// [0x00537D30] CompoundRenderable::vfunc_14 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_00537D30(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x14]
        je L_skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x38]
        push edi
        push ebx
        call edx
    L_skip:
        mov eax, dword ptr [esi + 0x18]
        mov edx, dword ptr [eax + 0x38]
        lea ecx, [esi + 0x18]
        push edi
        push ebx
        call edx
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x00537CC0] CompoundRenderable::vfunc_12 (56 bytes)
extern "C" __declspec(naked) void __fastcall fn_00537CC0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x1c]
        je L_skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x30]
        push edi
        push ebp
        push ebx
        call edx
    L_skip:
        mov eax, dword ptr [esi + 0x18]
        mov edx, dword ptr [eax + 0x30]
        push edi
        lea ecx, [esi + 0x18]
        push ebp
        push ebx
        call edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xc
    }
}

// [0x00537D80] CompoundRenderable::vfunc_23 (84 bytes)
extern "C" __declspec(naked) void __fastcall fn_00537D80(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x10]
        je L_second
        sub esp, 0x8
        mov eax, esp
        mov dword ptr [eax], 0x93a444
        mov dword ptr [eax + 0x4], edi
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x5c]
        call edx
        test al, al
        je L_second
        mov byte ptr [esi + 0x4], 1
    L_second:
        sub esp, 0x8
        mov eax, esp
        lea ecx, [esi + 0x18]
        mov dword ptr [eax], 0x93a444
        mov dword ptr [eax + 0x4], edi
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x5c]
        call edx
        test al, al
        je L_done
        mov byte ptr [esi + 0x4], 1
    L_done:
        mov al, byte ptr [esi + 0x4]
        pop edi
        pop esi
        ret 0x8
    }
}
