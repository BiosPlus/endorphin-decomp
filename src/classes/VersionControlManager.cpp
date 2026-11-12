// Decompiled translation unit: src/classes/VersionControlManager.cpp

extern "C" void ext_0063EFE0();
extern "C" void ext_004275E0();
extern "C" void ext_004A96E0();
extern "C" void ext_0063F530();
extern "C" void ext_004A9760();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

// [0x004A96B0] VersionControlManager::vfunc_6 (34 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004A96B0(void* self, int edx_unused, void* out) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x009414AC
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x004A9900] VersionControlManager::vfunc_1 (319 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A9900(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x88886b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x6c], 0x0
        call dword ptr [mem_00924FE8]
        mov esi, dword ptr [esp + 0x74]
        push 0x9414d0
        mov ecx, esi
        mov byte ptr [esp + 0x70], 0x1
        call ext_0063EFE0
        push eax
        lea eax, [esp + 0x30]
        push eax
        call ext_004275E0
        lea ecx, [esp + 0x34]
        push ecx
        call ext_004A96E0
        add esp, 0xc
        push 0x1
        push 0x0
        push 0x9414c8
        mov ecx, esi
        mov dword ptr [ebp + 0x4], eax
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_9900_set
        cmp eax, 0xb53b30
        je L_9900_set
        cmp eax, 0xb53ab0
        je L_9900_set
        cmp eax, 0xb53a70
        je L_9900_set
        cmp eax, 0xb53af0
        jne L_9900_keep
    L_9900_set:
        mov ebx, 0xb53b30
        jmp L_9900_loop_init
    L_9900_keep:
        mov ebx, eax
    L_9900_loop_init:
        mov esi, 0xadf290
        lea edi, [ebp + 0x8]
        mov edi, edi
    L_9900_loop:
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebx
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x48]
        push ecx
        mov ecx, eax
        call edx
        push eax
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x70], 0x2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x6c], 0x1
        call dword ptr [mem_00924FF4]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, ebp
        call ext_004A9760
        mov dword ptr [edi], eax
        add esi, 0x1c
        add edi, 0x4
        cmp esi, 0xadf300
        jl L_9900_loop
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x6c], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x6c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x64]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x60
        ret 0x4
    }
}
