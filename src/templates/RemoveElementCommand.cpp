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

// [0x0049E370] PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>::RemoveElementCommand::vfunc_3 (205 bytes)
extern "C" void ext_0049D190();
extern "C" void ext_00435D00();
extern "C" int mem_00924E4C;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;
extern "C" int mem_00924E94;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0049E370(void* self, int edx_unused, void* arg1) {
    __asm {
        push -1
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
        push 0x9404b4
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

// [0x004B4AD0] PointainerWithUndo<UndoablePointainerVector<NMData::GraphEntryData>>::RemoveElementCommand::vfunc_3 (205 bytes)
extern "C" void ext_004B4AA0();

extern "C" __declspec(naked) void __fastcall fn_004B4AD0(void* self) {
    __asm {
        push -1
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
        call ext_004B4AA0
        add esp, 8
        push eax
        lea edx, [esp + 0x28]
        push 0x9404b4
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

// [0x004BB520] PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RemoveElementCommand::vfunc_3 (205 bytes)
extern "C" void ext_004BA5A0();

extern "C" __declspec(naked) void __fastcall fn_004BB520(void* self) {
    __asm {
        push -1
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
        call ext_004BA5A0
        add esp, 8
        push eax
        lea edx, [esp + 0x28]
        push 0x9404b4
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

// [0x004BB5F0] PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RemoveElementCommand::vfunc_3 (205 bytes)
extern "C" void ext_004BA670();

extern "C" __declspec(naked) void __fastcall fn_004BB5F0(void* self) {
    __asm {
        push -1
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
        call ext_004BA670
        add esp, 8
        push eax
        lea edx, [esp + 0x28]
        push 0x9404b4
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

// [0x00500610] PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::RemoveElementCommand::vfunc_3 (205 bytes)
extern "C" void ext_00500050();

extern "C" __declspec(naked) void __fastcall fn_00500610(void* self) {
    __asm {
        push -1
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
        call ext_00500050
        add esp, 8
        push eax
        lea edx, [esp + 0x28]
        push 0x9404b4
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

// [0x0050AE00] PointainerWithUndo<UndoablePointainerVector<NMData::TaskTemplateParam>>::RemoveElementCommand::vfunc_3 (205 bytes)
extern "C" void ext_00509F10();

extern "C" __declspec(naked) void __fastcall fn_0050AE00(void* self) {
    __asm {
        push -1
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
        call ext_00509F10
        add esp, 8
        push eax
        lea edx, [esp + 0x28]
        push 0x9404b4
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
