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

// [0x00674210] Properties::TestControl::vfunc_0 (272 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_006738D0();
extern "C" void ext_00673B60();
extern "C" void ext_00673E00();
extern "C" void ext_00673EA0();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __fastcall fn_00674210(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push -1
        push 0x8b418a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x44
        mov eax, dword ptr [esp + 0x58]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x60]
        push edi
        push eax
        push esi
        sub esp, 0x1c
        mov ebp, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x8c], esp
        push ecx
        lea ecx, [esi + 0x34]
        call ext_0041CEB0
        mov ecx, esi
        mov dword ptr [esp + 0x80], 0
        call ext_00673B60
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0xa4], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0x9c], 0xffffffff
        call ext_006738D0
        mov edi, dword ptr [ebp + 0x1c]
        mov edx, dword ptr [edi + 0x4]
        lea esi, [ebp + 0x18]
        push eax
        push edx
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x68], 1
        call ext_00673EA0
        push 1
        mov ecx, esi
        mov ebx, eax
        call ext_00673E00
        mov dword ptr [edi + 0x4], ebx
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [eax], ebx
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x5c], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi + 0x4]
        mov edi, dword ptr [eax + 0x4]
        cmp edi, eax
        mov ebx, dword ptr [mem_00925134]
        jne L_check2
        call ebx
    L_check2:
        cmp edi, dword ptr [esi + 0x4]
        jne L_continue
        call ebx
    L_continue:
        lea eax, [esp + 0x68]
        lea esi, [edi + 0x8]
        push eax
        lea ecx, [ebp + 0x8]
        mov dword ptr [esp + 0x6c], esi
        call ext_0041A920
        add dword ptr [ebp + 0x24], 1
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x50
        ret 0xc
    }
}
