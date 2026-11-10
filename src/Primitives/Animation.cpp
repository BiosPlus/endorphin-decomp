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
