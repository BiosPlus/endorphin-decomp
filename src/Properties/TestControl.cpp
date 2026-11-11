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
