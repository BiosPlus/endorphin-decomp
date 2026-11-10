// Decompiled translation unit: src/classes/ResizeTool.cpp

// [0x00545B50] ResizeTool::vfunc_26 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545B50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x80]
        call edx
        fld1
        mov dword ptr [esi + 0xb0], 0x3
        fst dword ptr [esi + 0xb4]
        fst dword ptr [esi + 0xb8]
        fstp dword ptr [esi + 0xbc]
        pop esi
        ret
    }
}

// [0x00545BA0] ResizeTool::vfunc_17 (51 bytes)
extern "C" int __fastcall fn_00545BA0(void* self, int edx_unused, int a1, int a2) {
    char* s = (char*)self;
    void* sub = *(void**)(s + 0x88);
    void** subvt = *(void***)sub;
    ((void (__thiscall*)(void*))subvt[29])(sub);
    void** vt = *(void***)self;
    ((void (__thiscall*)(void*))vt[29])(self);
    *(float*)(s + 0xb4) = 1.0f;
    *(float*)(s + 0xb8) = 1.0f;
    *(float*)(s + 0xbc) = 1.0f;
    return 0;
}
