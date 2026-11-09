// Decompiled translation unit: src/classes/OglRenderer.cpp

// [0x00536E80] OglRenderer::vfunc_120 (28 bytes)
extern "C" void ext_0065C650();
extern "C" int mem_009253E0;

extern "C" __declspec(naked) void __fastcall fn_00536E80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x30], 0
        jne L_skip
        push 0
        push 0
        call dword ptr [mem_009253E0]
    L_skip:
        lea ecx, [esi + 0x10]
        pop esi
        jmp ext_0065C650
    }
}

// [0x00533210] OglRenderer::vfunc_4 (33 bytes)
extern "C" void __fastcall fn_00533210(void* self, int edx_unused, int* a1) {
    char* p = (char*)self;
    *(int*)(p + 0x41c) = a1[0];
    *(int*)(p + 0x420) = a1[1];
    *(int*)(p + 0x424) = a1[2];
}

// [0x00536D90] OglRenderer::vfunc_8 (23 bytes)
extern "C" void ext_00541B50();

extern "C" __declspec(naked) void __fastcall fn_00536D90(void* self) {
    __asm {
        add ecx, 0x9c
        cmp byte ptr [ecx + 0x13d], 0
        sete al
        push eax
        call ext_00541B50
        ret
    }
}

// [0x00532F60] OglRenderer::vfunc_113 (25 bytes)
extern "C" void ext_0067B410();
extern "C" int mem_00925660;

extern "C" __declspec(naked) void __fastcall fn_00532F60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x48]
        call ext_0067B410
        mov eax, dword ptr [esi + 0x1c]
        push 1
        push eax
        call dword ptr [mem_00925660]
        pop esi
        ret
    }
}
