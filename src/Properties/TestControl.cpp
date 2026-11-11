// Decompiled translation unit: src/Properties/TestControl.cpp

extern "C" int mem_00925134;

// [0x004F0590] Properties::TestControl::vfunc_6 (36 bytes)
extern "C" void* __fastcall fn_004F0590(void* self) {
    unsigned char* p = (unsigned char*)self;
    if (*(int*)(p + 0x24) > 0 && *(int*)(p + 0x20) != 0) {
        int* eax = *(int**)(p + 0x1c);
        int esi = *(int*)eax;
        if (esi == (int)eax) {
            ((void (__cdecl*)())mem_00925134)();
        }
        return (void*)(esi + 8);
    }
    return 0;
}

// [0x004F05C0] Properties::TestControl::vfunc_1 (82 bytes)
extern "C" void ext_00596660();
extern "C" void ext_004EFDF0();

extern "C" __declspec(naked) void __fastcall fn_004F05C0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        add dword ptr [edi + 0x28], 0x1
        lea esi, [edi + 0x8]
        mov dword ptr [edi + 0x24], 0x0
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_skip1
        call dword ptr [mem_00925134]
    L_skip1:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L_skip2
        call dword ptr [mem_00925134]
    L_skip2:
        push ebx
        push esi
        push ebp
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        lea ecx, [edi + 0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        jmp ext_004EFDF0
    }
}

// [0x004F0530] Properties::TestControl::vfunc_7 (93 bytes)
extern "C" void ext_0041CEB0();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_004F0530(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x008B56F9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1C
        mov ecx, dword ptr [esp + 0x30]
        lea eax, [esp]
        push eax
        call ext_0041CEB0
        mov ecx, dword ptr [esp + 0x2C]
        push eax
        add ecx, 0x1C
        mov dword ptr [esp + 0x28], 0x0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp]
        mov dword ptr [esp + 0x24], 0xFFFFFFFF
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x1C]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x8
    }
}
