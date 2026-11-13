// Decompiled translation unit: src/classes/CollisionSelection.cpp

extern "C" void ext_00494000();
extern "C" void ext_004940E0();

// [0x004EC860] CollisionSelection::vfunc_0_off_18 (159 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EC860(void* self, int edx_unused, int* a1, int* a2, int* a3, int* a4) {
    __asm {
        sub esp, 0xc
        push esi
        push edi
        push 0x0
        push 0x0
        mov edi, ecx
        push 0x4
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
        push 0x4
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
        mov eax, dword ptr [edi + 0x20]
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [esi + 0x4], eax
        pop edi
        mov dword ptr [ecx], 0x6
        mov dword ptr [edx], 0x6
        pop esi
        add esp, 0xc
        ret 0x10
    }
}

// [0x004EE030] CollisionSelection::vfunc_1_off_18 (30 bytes)
extern "C" void ext_004EDC90();

extern "C" __declspec(naked) void __fastcall fn_004EE030(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x30]
        lea edx, [esi + 0x24]
        push edx
        call eax
        lea ecx, [esi - 0x18]
        call ext_004EDC90
        pop esi
        ret 0x4
    }
}
