// Decompiled translation unit: src/classes/LoadableFromXMLStrict.cpp

// [0x0067CFF0] LoadableFromXMLStrict::vfunc_10 (815 bytes)
extern "C" int ext_00403560();
extern "C" void ext_00550F60();
extern "C" void ext_006632B0();
extern "C" void ext_00679C40();
extern "C" void ext_006978C0();
extern "C" void ext_00697A90();
extern "C" void ext_00697EE0();
extern "C" void ext_00698060();
extern "C" void ext_006A3BB0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE8;
extern "C" int mem_00924EAC;
extern "C" int mem_00924FE4;
extern "C" int mem_0092500C;
extern "C" int mem_00925058;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FCC;
extern "C" int mem_00924ECC;
extern "C" int mem_00924ED0;

extern "C" __declspec(naked) bool __fastcall fn_0067CFF0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebp
        lea ebp, [esp-60h]
        sub esp, 60h
        push -1
        push 8b4bdeh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 118h
        push ebx
        push esi
        push edi
        mov ebx, ecx
        lea ecx, [ebp+28h]
        mov dword ptr [ebp-10h], esp
        call dword ptr [mem_00924FE8]
        xor esi, esi
        lea ecx, [ebp-48h]
        mov dword ptr [ebp-4], esi
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [ebp+68h]
        lea eax, [ebp+28h]
        push eax
        push ecx
        mov byte ptr [ebp-4], 2
        call ext_006632B0
        add esp, 8
        lea ecx, [ebp+28h]
        call dword ptr [mem_00924EAC]
        mov edi, eax
        cmp edi, 14h
        jae L_head
        push 984a9ch
        lea ecx, [ebp+44h]
        call dword ptr [mem_00924FE4]
        lea edx, [ebp+44h]
        push edx
        lea ecx, [ebp-0e8h]
        mov byte ptr [ebp-4], 3
        call ext_00403560
        push 9d47a4h
        lea eax, [ebp-0e8h]
        push eax
        call ext_006A6DD2
    L_head:
        cmp esi, 10h
        jae L_big
        lea ecx, [esi+edi-10h]
        push ecx
        lea ecx, [ebp+28h]
        call dword ptr [mem_0092500C]
        mov dl, byte ptr [eax]
        cmp dl, byte ptr [esi+0a9fb8ch]
        je L_inc
        push 98c734h
        lea ecx, [ebp+44h]
        call dword ptr [mem_00924FE4]
        lea eax, [ebp+44h]
        push eax
        lea ecx, [ebp-70h]
        mov byte ptr [ebp-4], 4
        call ext_00403560
        push 9d47a4h
        lea ecx, [ebp-70h]
        push ecx
        call ext_006A6DD2
    L_inc:
        add esi, 1
        jmp L_head
    L_big:
        add edi, -10h
        push edi
        lea ecx, [ebp+28h]
        call dword ptr [mem_00925058]
        push 0b590e8h
        lea edx, [ebp-48h]
        push edx
        lea eax, [ebp+28h]
        push eax
        call ext_006A3BB0
        add esp, 0ch
        call ext_00697EE0
        lea ecx, [ebp+28h]
        push ecx
        lea edx, [ebp-48h]
        push edx
        mov ecx, eax
        call ext_00698060
        lea ecx, [ebp+28h]
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [ebx]
        push 0
        push 0
        push eax
        mov eax, dword ptr [edx+8]
        mov ecx, ebx
        call eax
        lea ecx, [ebp-48h]
        mov bl, al
        mov byte ptr [ebp-4], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp+28h]
        mov dword ptr [ebp-4], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [ebp-0ch]
        pop edi
        pop esi
        mov al, bl
        mov dword ptr fs:[0], ecx
        pop ebx
        add ebp, 60h
        mov esp, ebp
        pop ebp
        ret 8

    F_1:
        mov esi, dword ptr [ebp+68h]
        push esi
        lea ecx, [ebp-2ch]
        call dword ptr [mem_00924FE4]
        push eax
        lea ecx, [ebp+0ch]
        push 984a20h
        push ecx
        mov byte ptr [ebp-4], 6
        call dword ptr [mem_00924FCC]
        push 98c6e0h
        push eax
        lea edx, [ebp+44h]
        mov bl, 7
        push edx
        mov byte ptr [ebp-4], bl
        call dword ptr [mem_00924ECC]
        push eax
        mov byte ptr [ebp-4], 8
        call ext_00679C40
        add esp, 1ch
        lea ecx, [ebp+44h]
        mov byte ptr [ebp-4], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp+0ch]
        mov byte ptr [ebp-4], 6
        call dword ptr [mem_00924FF4]
        mov bl, 5
        lea ecx, [ebp-2ch]
        mov byte ptr [ebp-4], bl
        call dword ptr [mem_00924FF4]
        push esi
        lea ecx, [ebp+0ch]
        call dword ptr [mem_00924FE4]
        lea eax, [ebp+28h]
        push eax
        lea ecx, [ebp+0ch]
        push ecx
        mov ecx, dword ptr [ebp+4]
        mov byte ptr [ebp-4], 9
        call ext_006978C0
        lea ecx, [ebp+0ch]
        mov byte ptr [ebp-4], bl
        call dword ptr [mem_00924FF4]
        push 0
        push 0
        call ext_006A6DD2

    F_2:
        mov esi, dword ptr [ebp+68h]
        push esi
        lea ecx, [ebp+0ch]
        call dword ptr [mem_00924FE4]
        push eax
        lea edx, [ebp+44h]
        push 984a20h
        push edx
        mov byte ptr [ebp-4], 0ah
        call dword ptr [mem_00924FCC]
        push 98c6e0h
        push eax
        lea eax, [ebp-2ch]
        mov bl, 0bh
        push eax
        mov byte ptr [ebp-4], bl
        call dword ptr [mem_00924ECC]
        push eax
        mov byte ptr [ebp-4], 0ch
        call ext_00679C40
        add esp, 1ch
        lea ecx, [ebp-2ch]
        mov byte ptr [ebp-4], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp+44h]
        mov byte ptr [ebp-4], 0ah
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp+0ch]
        mov byte ptr [ebp-4], 5
        call dword ptr [mem_00924FF4]
        push esi
        lea ecx, [ebp-2ch]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [ebp+8]
        lea ecx, [ebp+28h]
        push ecx
        lea edx, [ebp-2ch]
        push edx
        push eax
        lea ecx, [ebp-11ch]
        mov byte ptr [ebp-4], 0dh
        call ext_00697A90
        push 0a14d3ch
        lea ecx, [ebp-11ch]
        push ecx
        call ext_006A6DD2

    F_3:
        push 98c668h
        lea ecx, [ebp+44h]
        call dword ptr [mem_00924FE4]
        lea edx, [ebp+44h]
        push edx
        mov byte ptr [ebp-4], 0eh
        call ext_00679C40
        add esp, 4
        lea eax, [ebp+44h]
        push eax
        lea ecx, [ebp-98h]
        call ext_00550F60
        push 9f8908h
        lea ecx, [ebp-98h]
        push ecx
        call ext_006A6DD2

    F_4:
        push 93a50ch
        lea ecx, [ebp+0ch]
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [ebp+68h]
        push edx
        lea ecx, [ebp+0ch]
        mov byte ptr [ebp-4], 0fh
        call dword ptr [mem_00924ED0]
        lea eax, [ebp+0ch]
        push eax
        call ext_00679C40
        add esp, 4
        lea ecx, [ebp+0ch]
        push ecx
        lea ecx, [ebp-0c0h]
        call ext_00550F60
        push 9f8908h
        lea edx, [ebp-0c0h]
        push edx
        call ext_006A6DD2
    }
}
