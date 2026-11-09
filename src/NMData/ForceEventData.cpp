// Decompiled translation unit: src/NMData/ForceEventData.cpp

// [0x004C66F0] NMData::ForceEventData::vfunc_87 (19 bytes)
extern "C" void __stdcall ext_004C64D0(int arg);

extern "C" __declspec(naked) void __fastcall fn_004C66F0(void* self) {
    __asm {
        add ecx, 0x184
        cmp dword ptr [ecx], 0x0
        je L_ret
        push 0x0
        call ext_004C64D0
    L_ret:
        ret
    }
}

// [0x004C4E40] NMData::ForceEventData::vfunc_60 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C4E40(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x3c]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x266
        push esi
        mov dword ptr [esp + 0xc], 0x0
        call edx
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x004C1AF0] NMData::ForceEventData::vfunc_69 (35 bytes)
extern "C" void ext_004C0340();

extern "C" void __fastcall fn_004C1AF0(void* self, int edx_unused, int a1) {
    char* p = (char*)self;
    *(int*)(p + 0x15c) = a1;
    if (a1 >= *(int*)(p + 0x160)) {
        *(int*)(p + 0x160) = a1 + 1;
    }
    ext_004C0340();
}

// [0x004C1B20] NMData::ForceEventData::vfunc_73 (42 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C1B20(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 0x15c], edx
        mov eax, dword ptr [eax + 0x4]
        cmp edx, eax
        mov dword ptr [ecx + 0x160], eax
        jl L_call
        add edx, 0x1
        mov dword ptr [ecx + 0x160], edx
    L_call:
        call ext_004C0340
        ret 0x4
    }
}
