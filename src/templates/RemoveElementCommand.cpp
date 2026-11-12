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

// [0x00501620] PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RemoveElementCommand::vfunc_1 (92 bytes)
extern "C" __declspec(naked) void __fastcall fn_00501620(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x18]
        push edi
        mov edi, dword ptr [esi + 0x1c]
        cmp edi, ecx
        je L_skip1
        test ecx, ecx
        je L_skip1
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_skip1:
        mov dword ptr [esi + 0x18], edi
        mov eax, dword ptr [esi + 0x1c]
        mov ecx, dword ptr [esi + 0x10]
        lea edx, [esp + 8]
        push edx
        mov dword ptr [esp + 0xc], eax
        call ext_00527EC0
        mov ecx, dword ptr [esi + 0x24]
        test ecx, ecx
        mov dword ptr [esi + 0x20], eax
        je L_skip2
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 4]
        push eax
        mov eax, dword ptr [esi + 0x1c]
        push eax
        call edx
L_skip2:
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je L_skip3
        mov eax, dword ptr [esi + 0x1c]
        push eax
        call ext_00517510
L_skip3:
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x004B55B0] PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::RemoveElementCommand::vfunc_1 (96 bytes)
extern "C" void ext_004B53E0();
extern "C" void ext_00517510();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004B55B0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x1c]
        mov ebp, dword ptr [esi + 0x18]
        cmp ebx, ebp
        push edi
        lea edi, [esi + 0x1c]
        je L_skip1
        test ebp, ebp
        je L_skip1
        lea ecx, [ebp + 4]
        call dword ptr [mem_00924FF4]
        push ebp
        call ext_006A5C5C
        add esp, 4
L_skip1:
        mov dword ptr [esi + 0x18], ebx
        mov ecx, dword ptr [esi + 0x10]
        push edi
        call ext_004B53E0
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
        mov esi, dword ptr [esi + 0x14]
        test esi, esi
        je L_skip3
        mov eax, dword ptr [edi]
        push eax
        mov ecx, esi
        call ext_00517510
L_skip3:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004BC240] PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RemoveElementCommand::vfunc_1 (103 bytes)
extern "C" void ext_004BBEB0();
extern "C" void ext_00517510();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004BC240(void* self) {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x18]
        push edi
        mov edi, dword ptr [esi + 0x1c]
        cmp edi, ebx
        je L_skip1
        test ebx, ebx
        je L_skip1
        mov ecx, ebx
        call dword ptr [mem_00924FF4]
        push ebx
        call ext_006A5C5C
        add esp, 4
L_skip1:
        mov dword ptr [esi + 0x18], edi
        mov eax, dword ptr [esi + 0x1c]
        mov ecx, dword ptr [esi + 0x10]
        lea edx, [esp + 0xc]
        push edx
        mov dword ptr [esp + 0x10], eax
        call ext_004BBEB0
        mov ecx, dword ptr [esi + 0x24]
        test ecx, ecx
        mov dword ptr [esi + 0x20], eax
        je L_skip2
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x4]
        push eax
        mov eax, dword ptr [esi + 0x1c]
        push eax
        call edx
L_skip2:
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je L_skip3
        mov eax, dword ptr [esi + 0x1c]
        push eax
        call ext_00517510
L_skip3:
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}
