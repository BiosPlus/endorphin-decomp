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
