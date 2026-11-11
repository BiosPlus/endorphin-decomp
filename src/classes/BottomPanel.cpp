// Decompiled translation unit: src/classes/BottomPanel.cpp

extern "C" void ext_006A5FE6();
extern "C" void ext_006A5FE0();
extern "C" void ext_006A5FDA();
extern "C" void ext_00465B40();

// [0x00407750] BottomPanel::vfunc_81 (131 bytes)
extern "C" __declspec(naked) void __fastcall fn_00407750(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        push ebx
        mov esi, ecx
        call ext_006A5FE6
        push edi
        push ebx
        mov ecx, esi
        call ext_006A5FE0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x12c]
        call eax
        movzx ecx, al
        push ecx
        lea ecx, [esi + 0x198]
        call ext_006A5FDA
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x12c]
        call eax
        movzx ecx, al
        push ecx
        lea ecx, [esi + 0x1ec]
        call ext_006A5FDA
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x12c]
        call eax
        movzx ecx, al
        push ecx
        lea ecx, [esi + 0x240]
        call ext_006A5FDA
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}
