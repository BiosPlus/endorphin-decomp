// Decompiled translation unit: src/templates/TerminalParentType.cpp

// [0x004FDF50] Properties::TerminalParentType<NMData::ValuePtrData>::vfunc_0 (40 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FDF50(void* self, int edx_unused, void* a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 3Ch]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push eax
        push esi
        mov dword ptr [esp + 0Ch], 0
        call edx
        mov eax, esi
        pop esi
        pop ecx
        ret 0Ch
    }
}

extern "C" void ext_00695E20();

// [0x00511930] Properties::TerminalParentType<DoubleWithProperties>::vfunc_0 (38 bytes)
extern "C" __declspec(naked) void __fastcall fn_00511930(void* self, int edx_unused, void* a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push eax
        push esi
        mov dword ptr [esp + 0Ch], 0
        call ext_00695E20
        mov eax, esi
        pop esi
        pop ecx
        ret 0Ch
    }
}

// [0x004B6530] Properties::TerminalParentType<NMData::GraphEntryData>::vfunc_0 (38 bytes)
extern "C" void ext_004B64C0();
extern "C" __declspec(naked) void __fastcall fn_004B6530(void* self, int edx_unused, void* a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push eax
        push esi
        mov dword ptr [esp + 0Ch], 0
        call ext_004B64C0
        mov eax, esi
        pop esi
        pop ecx
        ret 0Ch
    }
}

// [0x004BBBF0] Properties::TerminalParentType<NMData::MaterialInteraction>::vfunc_0 (38 bytes)
extern "C" void ext_004BA950();
extern "C" __declspec(naked) void __fastcall fn_004BBBF0(void* self, int edx_unused, void* a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push eax
        push esi
        mov dword ptr [esp + 0Ch], 0
        call ext_004BA950
        mov eax, esi
        pop esi
        pop ecx
        ret 0Ch
    }
}

// [0x004C5560] Properties::TerminalParentType<MatrixWithProperties>::vfunc_0 (38 bytes)
extern "C" void ext_004F9610();
extern "C" __declspec(naked) void __fastcall fn_004C5560(void* self, int edx_unused, void* a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push eax
        push esi
        mov dword ptr [esp + 0Ch], 0
        call ext_004F9610
        mov eax, esi
        pop esi
        pop ecx
        ret 0Ch
    }
}
