// Decompiled translation unit: src/templates/RemoveElementCommand.cpp

// [0x00527FE0] PointainerWithUndo<UndoablePointainerVector<Interpreter>>::RemoveElementCommand::vfunc_1 (82 bytes)
extern "C" void ext_00517510();
extern "C" void ext_00527EC0();

extern "C" __declspec(naked) void __fastcall fn_00527FE0(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x1c]
        mov ecx, dword ptr [esi + 0x18]
        cmp ebx, ecx
        push edi
        lea edi, [esi + 0x1c]
        je L_skip1
        test ecx, ecx
        je L_skip1
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_skip1:
        mov dword ptr [esi + 0x18], ebx
        mov ecx, dword ptr [esi + 0x10]
        push edi
        call ext_00527EC0
        mov ecx, dword ptr [esi + 0x24]
        test ecx, ecx
        mov dword ptr [esi + 0x20], eax
        je L_skip2
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x4]
        push eax
        mov eax, dword ptr [edi]
        push eax
        call edx
L_skip2:
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je L_skip3
        mov eax, dword ptr [edi]
        push eax
        call ext_00517510
L_skip3:
        pop edi
        pop esi
        pop ebx
        ret
    }
}
