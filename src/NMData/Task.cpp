// Decompiled translation unit: src/NMData/Task.cpp

extern "C" void ext_0050A140();
extern "C" void ext_0055DA20();
extern "C" int mem_00AEBCB8;
extern "C" int mem_00AEBCB4;

// [0x0050AAB0] NMData::Task::vfunc_13 (69 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050AAB0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, 1
        test byte ptr [mem_00AEBCB8], al
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0x0
        jne skip_init
        or dword ptr [mem_00AEBCB8], eax
        call ext_0050A140
        mov dword ptr [mem_00AEBCB4], eax
    skip_init:
        mov eax, dword ptr [mem_00AEBCB4]
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

// [0x0050AA70] NMData::Task::vfunc_15 (57 bytes)
extern "C" void ext_0050A120();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) int __fastcall fn_0050AA70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        cmp dword ptr [esp + 0xc], 0x386
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        jne short not_magic
        push ecx
        push esi
        call ext_0050A120
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    not_magic:
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0050C770] NMData::Task::vfunc_0 (96 bytes)
extern "C" void ext_0050B960();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0050C770(void* self) {
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
        call ext_0050B960
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065F440
        test byte ptr [esp + 0x18], 0x1
        je L_0050C7BC
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_0050C7BC:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}
