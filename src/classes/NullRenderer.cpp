// Decompiled translation unit: src/classes/NullRenderer.cpp

extern "C" void ext_0065C5F0();
extern "C" void ext_006A6C87();
extern "C" int mem_00AF0BA0;
extern "C" int mem_00AF0B9C;

// [0x0053F570] NullRenderer::vfunc_118 (90 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053F570(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x0089682e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AF0BA0], al
        jne L_done
        or dword ptr [mem_00AF0BA0], eax
        mov ecx, offset mem_00AF0B9C
        mov dword ptr [esp + 8], 0
        call ext_0065C5F0
        push 0x0091aa90
        call ext_006A6C87
        add esp, 4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AF0B9C
        mov dword ptr fs:[0], ecx
        add esp, 0x0c
        ret
    }
}
