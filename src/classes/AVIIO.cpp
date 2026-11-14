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

// [0x0065CB50] AVIIO::vfunc_4 (328 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0063F750();
extern "C" void ext_00640110();
extern "C" void ext_006405C0();
extern "C" void ext_006408C0();
extern "C" void ext_00640AA0();
extern "C" void ext_006410D0();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F8E8;
extern "C" int mem_00B58E14;
extern "C" int mem_00A9F524;
extern "C" int mem_00B53B30;
extern "C" int mem_00B58E00;
extern "C" int mem_00928B5D;
extern "C" int mem_0092F67C;
extern "C" int mem_008B2427;

extern "C" __declspec(naked) void __fastcall fn_0065CB50(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push offset mem_008B2427
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xb0
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x18]
        lea ecx, [esp+0x1c]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, eax
        mov dword ptr [esp+0xbc], 0
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp+0x3c]
        call ext_006405C0
        lea ecx, [esp+0x1c]
        mov byte ptr [esp+0xbc], 2
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esp+0xb0]
        test eax, eax
        jne L_b1
        mov eax, offset mem_00B53B30
L_b1:
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx+0xc]
        mov ecx, esi
        call eax
        cmp byte ptr [esp+0xc8], 0
        je L_end
        mov ecx, dword ptr [esp+0xb0]
        test ecx, ecx
        jne L_b2
        mov ecx, offset mem_00B53B30
L_b2:
        mov edx, dword ptr [mem_00A9F8E8]
        push edx
        call ext_00640110
        push 0x12
        push eax
        call ext_00640AA0
        add esp, 8
        cmp dword ptr [mem_00B58E14], 0
        je L_end
        mov ecx, dword ptr [esp+0xb0]
        test ecx, ecx
        jne L_b3
        mov ecx, offset mem_00B53B30
L_b3:
        mov eax, dword ptr [mem_00A9F524]
        push eax
        call ext_00640110
        mov ecx, offset mem_00B58E00
        mov dword ptr [esp+4], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp+8]
        call ext_00427550
L_end:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx+0x14]
        mov ecx, esi
        call eax
        test al, al
        pop esi
        mov eax, offset mem_00928B5D
        jne L_c
        mov eax, offset mem_0092F67C
L_c:
        mov ecx, dword ptr [esp+0xc0]
        push 2
        push eax
        push ecx
        lea ecx, [esp+0x10]
        call ext_006408C0
        lea edx, [esp+4]
        push edx
        lea ecx, [esp+0x38]
        call ext_006410D0
        lea ecx, [esp+0x34]
        mov dword ptr [esp+0xb8], -1
        call ext_0063F750
        mov ecx, dword ptr [esp+0xb0]
        mov dword ptr fs:[0], ecx
        add esp, 0xbc
        ret 8
    }
}
