// Decompiled translation unit: src/NMData/TaskTemplate.cpp

// [0x0050AA00] NMData::TaskTemplate::vfunc_13 (69 bytes)
extern "C" int mem_00AEBCB0;
extern "C" int mem_00AEBCAC;
extern "C" void ext_0050A030();
extern "C" void ext_0055DA20();

extern "C" __declspec(naked) void __fastcall fn_0050AA00(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, 1
        test byte ptr [mem_00AEBCB0], al
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0x0
        jne skip_init
        or dword ptr [mem_00AEBCB0], eax
        call ext_0050A030
        mov dword ptr [mem_00AEBCAC], eax
    skip_init:
        mov eax, dword ptr [mem_00AEBCAC]
        add esi, 0x4
        push esi
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0050D0D0] NMData::TaskTemplate::vfunc_0 (96 bytes)
extern "C" void ext_006246B0();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0050D0D0(void* self) {
    __asm {
        push -1
        push 0x891e68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0
        call ext_006246B0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065F440
        test byte ptr [esp + 0x18], 0x1
        je L_0050D11C
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_0050D11C:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}
