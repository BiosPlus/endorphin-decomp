// Decompiled translation unit: src/classes/AVIIO.cpp

// [0x00401C30] AVIIO::vfunc_6 (35 bytes)
extern "C" int mem_00A9EE78;
extern "C" int mem_00924FE4;

// [0x00401C30] AVIIO::vfunc_6 (35 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00401C30(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EE78]
        push esi
        mov esi, dword ptr [esp+0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp+0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x00402300] AVIIO::vfunc_20 (117 bytes)
extern "C" void ext_00403420();
extern "C" void ext_00553080();
extern "C" void ext_00661A30();
extern "C" void ext_006A6DE0();

extern "C" __declspec(naked) void __fastcall fn_00402300(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        fld dword ptr [esi+64h]
        mov ecx, dword ptr [esi+420h]
        mov ebx, dword ptr [esi+68h]
        fstp dword ptr [esp+8]
        fld dword ptr [esp+8]
        push edi
        fstp qword ptr [esp+0ch]
        call ext_00661A30
        fdivr qword ptr [esp+0ch]
        fimul dword ptr [esp+18h]
        call ext_006A6DE0
        mov edi, eax
        mov eax, dword ptr [esi+470h]
        mov ecx, dword ptr [eax+0c4h]
        sub edi, ebx
        lea ebx, [esi+5ch]
        push ecx
        mov ecx, ebx
        call ext_00553080
        mov ebx, dword ptr [ebx]
        cmp edi, ebx
        mov eax, dword ptr [esi+60h]
        jge short L_hi
        mov edi, ebx
        jmp short L_call
    L_hi:
        cmp edi, eax
        jle short L_call
        mov edi, eax
    L_call:
        mov ecx, dword ptr [esi+470h]
        push edi
        call ext_00403420
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
    }
}
