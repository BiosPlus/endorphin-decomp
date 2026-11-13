// Decompiled translation unit: src/templates/AddElementCommand.cpp

extern "C" void ext_00435D00();
extern "C" void ext_0049D190();
extern "C" void ext_004B53E0();
extern "C" void ext_004BBEB0();
extern "C" void ext_00517510();
extern "C" void ext_00527EC0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924E4C;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;
extern "C" int mem_00924E94;
extern "C" int mem_00924FF4;

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

// [0x004B5480] PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::AddElementCommand::vfunc_2 (98 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B5480(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebp, dword ptr [esi + 0x1c]
        mov ebx, dword ptr [esi + 0x18]
        cmp ebp, ebx
        push edi
        lea edi, [esi + 0x1c]
        je L_store
        test ebx, ebx
        je L_store
        lea ecx, [ebx + 4]
        call dword ptr [mem_00924FF4]
        push ebx
        call ext_006A5C5C
        add esp, 4
L_store:
        mov dword ptr [esi + 0x18], ebp
        mov ecx, dword ptr [esi + 0x10]
        push edi
        call ext_004B53E0
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
        mov esi, dword ptr [esi + 0x14]
        test esi, esi
        je L_done
        mov ecx, dword ptr [edi]
        push ecx
        mov ecx, esi
        call ext_00517510
L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004BBFD0] PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::AddElementCommand::vfunc_2 (105 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BBFD0(void* self) {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x1c]
        push edi
        mov edi, dword ptr [esi + 0x18]
        cmp ebx, edi
        je L_store
        test edi, edi
        je L_store
        mov ecx, edi
        call dword ptr [mem_00924FF4]
        push edi
        call ext_006A5C5C
        add esp, 4
L_store:
        mov dword ptr [esi + 0x18], ebx
        mov eax, dword ptr [esi + 0x1c]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [esp + 0x10], eax
        call ext_004BBEB0
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
        pop ebx
        pop ecx
        ret
    }
}

// [0x0049EA80] PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::AddElementCommand::vfunc_3 (205 bytes)
extern "C" __declspec(naked) void __fastcall fn_0049EA80(void* self) {
    __asm {
        push -0x1
        push 0x889b98
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xa0
        push esi
        push 1
        mov esi, ecx
        push 2
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924E4C]
        mov eax, dword ptr [esi + 0x1c]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        mov dword ptr [esp + 0xb4], 1
        call ext_0049D190
        add esp, 8
        push eax
        lea edx, [esp + 0x28]
        push 0x9404d4
        push edx
        mov byte ptr [esp + 0xb8], 2
        call ext_00435D00
        add esp, 8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 8
        lea ecx, [esp + 8]
        mov byte ptr [esp + 0xac], 1
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [esp + 0xb4]
        push esi
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924E54]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0xac], 0
        call dword ptr [mem_00924E58]
        mov ecx, dword ptr [esp + 0xa4]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xac
        ret 4
    }
}
