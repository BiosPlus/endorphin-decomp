// Decompiled translation unit: src/classes/ResizeTool.cpp

extern "C" void ext_005434C0();
extern "C" int mem_00925414;
extern "C" int mem_009253C8;
extern "C" int mem_00925404;

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

// [0x00545AC0] ResizeTool::vfunc_31 (142 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545AC0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        call ext_005434C0
        test al, al
        jne L_done
        call dword ptr [mem_00925414]
        lea eax, [esi + 0x4]
        push eax
        call dword ptr [mem_009253C8]
        fld dword ptr [esi + 0x34]
        mov eax, dword ptr [esi + 0x84]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0xfc]
        mov edx, ecx
        shl edx, 0x4
        sub edx, ecx
        mov eax, dword ptr [eax + 4*edx + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x18]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, eax
        call edx
        fstp dword ptr [esi + 0xa4]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esi + 0x9c]
        mov eax, dword ptr [eax + 0x10]
        lea ecx, [esi + 0x9c]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push edx
        call eax
        call dword ptr [mem_00925404]
    L_done:
        pop esi
        add esp, 0x10
        ret 0x8
    }
}
