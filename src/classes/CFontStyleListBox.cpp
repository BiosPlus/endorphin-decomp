// Decompiled translation unit: src/classes/CFontStyleListBox.cpp

extern "C" void ext_006A5C68();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6004();
extern "C" void ext_006A6010();
extern "C" void ext_006A60E8();
extern "C" void ext_006A6172();
extern "C" int mem_00925694;
extern "C" int mem_00924080;
extern "C" int mem_00925670;
extern "C" int mem_00925680;
extern "C" int mem_009242FC;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924094;
extern "C" int mem_0092409C;
extern "C" int mem_009240D4;
extern "C" int mem_009242F4;
extern "C" int mem_008B7EF7;
extern "C" int mem_0092F1B4;
extern "C" int mem_0092A5D4;
extern "C" int mem_0092A23C;

// [0x006B9670] CFontStyleListBox::vfunc_80 (603 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B9670(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset mem_008B7EF7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0a4h
        push ebp
        push edi
        mov edi, dword ptr [esp + 0bch]
        mov eax, dword ptr [edi + 8]
        test eax, eax
        mov ebp, ecx
        mov dword ptr [esp + 18h], eax
        jl L_end
        push ebx
        push esi
        push 0
        push eax
        mov eax, dword ptr [ebp + 20h]
        push 199h
        push eax
        call dword ptr [mem_00925694]
        mov ecx, dword ptr [edi + 18h]
        push ecx
        mov ebx, eax
        call ext_006A6004
        lea edx, [ebp + 54h]
        push edx
        push 1
        mov esi, eax
        mov eax, dword ptr [edi + 18h]
        push offset mem_0092F1B4
        push eax
        call dword ptr [mem_00924080]
        lea ecx, [edi + 1ch]
        push ecx
        lea edx, [esp + 30h]
        push edx
        call dword ptr [mem_00925670]
        push 1
        mov ecx, esi
        call ext_006A6010
        test byte ptr [edi + 10h], 1
        mov edi, dword ptr [mem_00925680]
        je short L_sys5
        push 0dh
        call edi
        push eax
        lea eax, [esp + 30h]
        push eax
        mov ecx, esi
        call ext_006A6172
        mov ecx, dword ptr [esi]
        push 0eh
        mov dword ptr [esp + 20h], ecx
        call edi
        mov edx, dword ptr [esp + 1ch]
        push eax
        mov eax, dword ptr [edx + 38h]
        mov ecx, esi
        call eax
        jmp short L_after1
L_sys5:
        push 5
        call edi
        push eax
        lea ecx, [esp + 30h]
        push ecx
        mov ecx, esi
        call ext_006A6172
        test ebx, ebx
        jne short L_b
        mov edx, dword ptr [esi]
        push 8
        mov dword ptr [esp + 20h], edx
        call edi
        push eax
        mov eax, dword ptr [esp + 20h]
        jmp short L_c
L_b:
        mov eax, dword ptr [esi]
        push 0ff0000h
L_c:
        mov edx, dword ptr [eax + 38h]
        mov ecx, esi
        call edx
L_after1:
        lea ecx, [esp + 10h]
        call dword ptr [mem_009242FC]
        xor edi, edi
        mov dword ptr [esp + 0bch], edi
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 14h], offset mem_0092A5D4
        mov ecx, dword ptr [esp + 20h]
        lea eax, [esp + 10h]
        push eax
        push ecx
        mov ecx, ebp
        mov byte ptr [esp + 0c4h], 1
        call ext_006A60E8
        cmp ebx, edi
        jne L_big
        mov edi, dword ptr [esi]
        push 24h
        lea edx, [esp + 30h]
        push edx
        lea ecx, [esp + 18h]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 1ch]
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [edi + 70h]
        mov ecx, esi
        call eax
        jmp L_0x88d
L_big:
        mov ecx, dword ptr [ebp + 20h]
        push edi
        push edi
        push 31h
        push ecx
        call dword ptr [mem_00925694]
        push eax
        call ext_006A5C68
        mov eax, dword ptr [eax + 4]
        mov ebp, dword ptr [mem_00924094]
        lea edx, [esp + 3ch]
        push edx
        push 3ch
        push eax
        call ebp
        mov eax, ebx
        sub eax, 1
        je short L_fd
        sub eax, 1
        jne short L_805
        mov byte ptr [esp + 50h], 1
        jmp short L_805
L_fd:
        mov dword ptr [esp + 4ch], 2bch
L_805:
        mov eax, dword ptr [esi + 4]
        lea ecx, [esp + 24h]
        push ecx
        push edi
        push edi
        mov edi, dword ptr [mem_0092409C]
        push eax
        call edi
        lea edx, [esp + 3ch]
        push edx
        call dword ptr [mem_009240D4]
        push eax
        lea ecx, [esp + 18h]
        call ext_006A5FFE
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [esi + 4]
        push 0
        push ecx
        push edx
        push eax
        call edi
        mov ecx, dword ptr [esp + 18h]
        lea eax, [esp + 78h]
        push eax
        push 3ch
        push ecx
        call ebp
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 30h]
        lea eax, [esp + 14h]
        push eax
        mov ecx, esi
        call edx
        mov ebx, dword ptr [esi]
        mov edi, eax
        push 24h
        lea eax, [esp + 30h]
        push eax
        lea ecx, [esp + 18h]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 1ch]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [ebx + 70h]
        push eax
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 30h]
        push edi
        mov ecx, esi
        call edx
L_0x88d:
        lea ecx, [esp + 14h]
        mov byte ptr [esp + 0bch], 0
        mov dword ptr [esp + 14h], offset mem_0092A23C
        call ext_006A5FF2
        lea ecx, [esp + 10h]
        call dword ptr [mem_009242F4]
        pop esi
        pop ebx
L_end:
        mov ecx, dword ptr [esp + 0ach]
        pop edi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0b0h
        ret 4
    }
}
