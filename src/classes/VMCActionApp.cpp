// Decompiled translation unit: src/classes/VMCActionApp.cpp

// [0x00464740] VMCActionApp::vfunc_23 (22 bytes)
extern "C" void ext_00439FD0();
extern "C" void ext_006A69A6();
extern "C" int mem_00ACDB40;

extern "C" __declspec(naked) void __fastcall fn_00464740(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_00439FD0
        mov ecx, esi
        pop esi
        jmp ext_006A69A6
    }
}

// [0x00465010] VMCActionApp::vfunc_26 (148 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469530();
extern "C" void ext_006799F0();
extern "C" void ext_00679A30();
extern "C" void ext_00679A40();
extern "C" void ext_006A69B8();
extern "C" void ext_006A6C87();
extern "C" int mem_008812AE;
extern "C" int mem_00AD6594;
extern "C" int mem_00AD6590;
extern "C" int mem_009166C0;

extern "C" __declspec(naked) void __fastcall fn_00465010(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_008812AE
        push eax
        mov dword ptr fs:[0], esp
        mov eax, 1
        test byte ptr [mem_00AD6594], al
        push esi
        mov esi, ecx
        jne short skip_init_00465010
        or dword ptr [mem_00AD6594], eax
        mov ecx, offset mem_00AD6590
        mov dword ptr [esp + 0Ch], 0
        call ext_006799F0
        push offset mem_009166C0
        call ext_006A6C87
        add esp, 4
        mov dword ptr [esp + 0Ch], 0FFFFFFFFh
skip_init_00465010:
        mov ecx, offset mem_00AD6590
        call ext_00679A30
        push 0
        push 4
        call ext_00465B30
        mov ecx, eax
        call ext_00469530
        mov ecx, offset mem_00AD6590
        call ext_00679A40
        mov eax, dword ptr [esp + 14h]
        push eax
        mov ecx, esi
        call ext_006A69B8
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0Ch
        ret 4
    }
}

extern "C" void ext_004650B0();
extern "C" void ext_00464710();
extern "C" void ext_006A6A00();
extern "C" int mem_00ACDB40;

// [0x00465850] VMCActionApp::vfunc_24 (44 bytes)
extern "C" __declspec(naked) void __fastcall fn_00465850(void* self) {
    __asm {
        cmp     dword ptr [mem_00ACDB40], 0
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0Ch]
        mov     esi, ecx
        je      short L_done
        push    edi
        call    ext_004650B0
        push    edi
        mov     ecx, esi
        call    ext_00464710
    L_done:
        push    edi
        mov     ecx, esi
        call    ext_006A6A00
        pop     edi
        pop     esi
        ret     4
    }
}
