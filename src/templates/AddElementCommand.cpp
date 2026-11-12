// Decompiled translation unit: src/templates/AddElementCommand.cpp

extern "C" void ext_00517510();
extern "C" void ext_00527EC0();

// [0x00517910] PointainerWithUndo<UndoablePointainerVector<Interpreter>>::AddElementCommand::vfunc_2 (84 bytes)
extern "C" __declspec(naked) void __fastcall fn_00517910(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x1c]
        mov ecx, dword ptr [esi + 0x18]
        cmp ebx, ecx
        push edi
        lea edi, [esi + 0x1c]
        je L_store
        test ecx, ecx
        je L_store
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_store:
        mov dword ptr [esi + 0x18], ebx
        mov ecx, dword ptr [esi + 0x10]
        push edi
        call ext_00527EC0
        cmp dword ptr [esi + 0x24], 0
        je L_p14
        mov edx, dword ptr [esi + 0x20]
        mov ecx, dword ptr [esi + 0x24]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 4]
        push edx
        mov edx, dword ptr [edi]
        push edx
        call eax
L_p14:
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je L_done
        mov edx, dword ptr [edi]
        push edx
        call ext_00517510
L_done:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00501450] PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::AddElementCommand::vfunc_2 (94 bytes)
extern "C" __declspec(naked) void __fastcall fn_00501450(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x18]
        push edi
        mov edi, dword ptr [esi + 0x1c]
        cmp edi, ecx
        je L_store
        test ecx, ecx
        je L_store
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_store:
        mov dword ptr [esi + 0x18], edi
        mov eax, dword ptr [esi + 0x1c]
        lea ecx, [esp + 8]
        push ecx
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [esp + 0xc], eax
        call ext_00527EC0
        cmp dword ptr [esi + 0x24], 0
        je L_p14
        mov eax, dword ptr [esi + 0x20]
        mov ecx, dword ptr [esi + 0x24]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 4]
        push eax
        mov eax, dword ptr [esi + 0x1c]
        push eax
        call edx
L_p14:
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je L_done
        mov eax, dword ptr [esi + 0x1c]
        push eax
        call ext_00517510
L_done:
        pop edi
        pop esi
        pop ecx
        ret
    }
}
