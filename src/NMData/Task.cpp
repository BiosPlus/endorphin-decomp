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
