// Decompiled translation unit: src/classes/MetaBodyJointSelection.cpp

extern "C" void ext_004EC660();
extern "C" void ext_004ED6B0();
extern "C" void ext_004EE200();
extern "C" void ext_006A5C5C();
extern "C" void ext_00494000();
extern "C" void ext_004940E0();

// [0x004EE600] MetaBodyJointSelection::vfunc_1_off_4 (25 bytes)
// Forwards its stack argument to CharacterSelection::vfunc_1_off_4 with `this`, then calls sub_004EE200 on (this - 4).
extern "C" __declspec(naked) void __fastcall fn_004EE600(void* self, int edx_unused, int a0) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_004EC660
        lea ecx, [esi - 4]
        call ext_004EE200
        pop esi
        ret 4
    }
}

// [0x004EDC10] MetaBodyJointSelection::vfunc_0 (69 bytes)
extern "C" void* __fastcall fn_004EDC10(void* self, int edx_unused, int a1) {
    unsigned char* p = static_cast<unsigned char*>(self);
    void* held = *reinterpret_cast<void**>(p + 0x58);
    if (held != 0) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(held);
    }
    *reinterpret_cast<int*>(p + 0x58) = 0;
    *reinterpret_cast<int*>(p + 0x5c) = 0;
    *reinterpret_cast<int*>(p + 0x60) = 0;
    reinterpret_cast<void (__fastcall*)(void*)>(ext_004ED6B0)(self);
    if (a1 & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(self);
    }
    return self;
}

// [0x004EC700] MetaBodyJointSelection::vfunc_0_off_18 (159 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EC700(void* self, int edx_unused, int* a1, int* a2, int* a3, int* a4) {
    __asm {
        sub esp, 0xc
        push esi
        push edi
        push 0x0
        push 0x0
        mov edi, ecx
        push 0x8
        lea ecx, [esp + 0x14]
        call ext_00494000
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        push 0x1
        push 0x1000
        mov ecx, esi
        mov dword ptr [esi + 0x8], eax
        call ext_004940E0
        push 0x1
        push 0x2000
        mov ecx, esi
        call ext_004940E0
        mov ecx, dword ptr [edi + 0x20]
        push 0x0
        push 0x0
        mov dword ptr [esi + 0x4], ecx
        push 0x8
        lea ecx, [esp + 0x14]
        call ext_00494000
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x1c]
        mov dword ptr [esi], edx
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [eax + 0x8]
        push 0x1
        push 0x1000
        mov ecx, esi
        mov dword ptr [esi + 0x8], edx
        call ext_004940E0
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [eax], 0x6
        mov ecx, dword ptr [edi + 0x20]
        mov dword ptr [esi + 0x4], ecx
        pop edi
        mov dword ptr [edx], 0x6
        pop esi
        add esp, 0xc
        ret 0x10
    }
}
