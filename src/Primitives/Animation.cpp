// Decompiled translation unit: src/Primitives/Animation.cpp

// [0x0053AE20] Primitives::Animation::vfunc_11 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053AE20(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0x1c]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov edx, eax
        and edx, esi
        cmp edx, esi
        sete dl
        cmp dl, byte ptr [esp + 0xc]
        je L_done
        xor eax, esi
        mov dword ptr [ecx + 0x1c], eax
    L_done:
        pop esi
        ret 0x8
    }
}

extern "C" void ext_005B11F0();

// [0x0053A650] Primitives::Animation::vfunc_27 (41 bytes)
extern "C" void __fastcall fn_0053A650(void* self, int edx_unused, float* out) {
    void* renderer = *(void**)((char*)self + 0x20);
    if (renderer) {
        typedef float* (__fastcall *GetFn)(void*);
        float* v = ((GetFn)ext_005B11F0)(renderer);
        out[0] = v[0];
        out[1] = v[1];
        out[2] = v[2];
        out[3] = v[3];
    }
}

// [0x0053E240] Primitives::Animation::vfunc_25 (65 bytes)
extern "C" void ext_0053D2B0();

extern "C" __declspec(naked) void __fastcall fn_0053E240(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call ext_0053D2B0
        mov ecx, dword ptr [edi + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x2c]
        call eax
        mov dword ptr [esi + 0x9c], eax
        mov eax, dword ptr [esi + 0x1c]
        test eax, 0x2000000
        jne L_done
        xor eax, 0x2000000
        mov dword ptr [esi + 0x1c], eax
    L_done:
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x0053A8E0] Primitives::Animation::vfunc_18 (75 bytes)
extern "C" __declspec(naked) int __fastcall fn_0053A8E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jne L_case_nonzero
        mov eax, dword ptr [ecx + 0x1c]
        and al, 0x8
        xor ecx, ecx
        cmp al, 0x8
        setne cl
        mov eax, ecx
        ret 0x4
    L_case_nonzero:
        cmp eax, 0x1
        jne L_case_not1
        mov edx, dword ptr [ecx + 0x1c]
        and dl, 0x8
        xor eax, eax
        cmp dl, 0x8
        sete al
        ret 0x4
    L_case_not1:
        cmp eax, 0x2
        jne L_case_default
        mov eax, dword ptr [ecx + 0x1c]
        and eax, 0x18
        xor ecx, ecx
        cmp al, 0x18
        sete cl
        mov eax, ecx
        ret 0x4
    L_case_default:
        xor eax, eax
        ret 0x4
    }
}

extern "C" void ext_0053A5E0();
extern "C" void ext_0053AD70();

// [0x0053ADD0] Primitives::Animation::vfunc_23 (77 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053ADD0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je L_skip_vcall
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1c]
        call edx
    L_skip_vcall:
        mov ecx, esi
        call ext_0053AD70
        mov ecx, dword ptr [esp + 0xc]
        sub esp, 0x8
        mov eax, esp
        mov dword ptr [eax + 0x4], ecx
        mov ecx, esi
        mov dword ptr [eax], 0x93a444
        call ext_0053A5E0
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        je L_done
        cmp byte ptr [eax + 0x4], 0x0
        je L_done
        mov byte ptr [esi + 0x4], 0x1
        mov byte ptr [eax + 0x4], 0x0
    L_done:
        mov al, byte ptr [esi + 0x4]
        pop esi
        ret 0x8
    }
}

// [0x0053AD10] Primitives::Animation::vfunc_29 (91 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053AD10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov dword ptr [esi + 0x20], edi
        mov dword ptr [esi + 0x1c], 0x1
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x2
        jne L_skip2
        xor eax, 0x2
        mov dword ptr [esi + 0x1c], eax
    L_skip2:
        mov eax, dword ptr [esi + 0x1c]
        test eax, 0x1000
        jne L_skip1000
        xor eax, 0x1000
        mov dword ptr [esi + 0x1c], eax
    L_skip1000:
        mov dword ptr [esi + 0x24], edi
        mov dword ptr [esi + 0x28], edi
        mov dword ptr [esi + 0x2c], edi
        mov dword ptr [esi + 0x8], edi
        mov dword ptr [esi + 0x30], 0x7fffffff
        mov ecx, dword ptr [esi + 0x38]
        cmp ecx, edi
        je L_nocall
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    L_nocall:
        mov dword ptr [esi + 0x38], edi
        pop edi
        mov byte ptr [esi + 0x4], 0x1
        pop esi
        ret
    }
}

// [0x0053B2B0] Primitives::Animation::vfunc_12 (112 bytes)
extern "C" void ext_0053B1F0();
extern "C" void ext_00661B10();

extern "C" __declspec(naked) void __fastcall fn_0053B2B0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push edi
        mov edi, ecx
        mov ecx, ebx
        call ext_00661B10
        test al, al
        jne L_else
        mov eax, dword ptr [edi + 0x30]
        cmp eax, 0x7fffffff
        je L_else
        push esi
        push eax
        mov ecx, ebx
        call ext_0053B1F0
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov ecx, esi
        and ecx, eax
        cmp ecx, eax
        sete dl
        cmp dl, byte ptr [esp + 0x14]
        je L_skip
        xor esi, eax
    L_skip:
        mov eax, dword ptr [edi + 0x30]
        push eax
        mov ecx, ebx
        call ext_0053B1F0
        mov dword ptr [eax], esi
        pop esi
        pop edi
        pop ebx
        ret 0xc
    L_else:
        mov eax, dword ptr [edi + 0x1c]
        mov ecx, dword ptr [esp + 0xc]
        mov edx, eax
        and edx, ecx
        cmp edx, ecx
        sete dl
        cmp dl, byte ptr [esp + 0x10]
        je L_done
        xor eax, ecx
        mov dword ptr [edi + 0x1c], eax
    L_done:
        pop edi
        pop ebx
        ret 0xc
    }
}
