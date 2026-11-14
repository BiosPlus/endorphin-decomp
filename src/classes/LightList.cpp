// Decompiled translation unit: src/classes/LightList.cpp

extern "C" void ext_0054F300();
extern "C" void ext_004275C0();
extern "C" void ext_00427640();
extern "C" void ext_00427A60();
extern "C" void ext_0054E360();
extern "C" void ext_0054E7F0();
extern "C" void ext_0054F7A0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0066A550();
extern "C" int mem_00925134;
extern "C" int mem_00A9F604;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9FA60;
extern "C" int mem_00A9F784;
extern "C" int mem_00924FE0;
extern "C" int mem_00A9EE48;
extern "C" int mem_00A9F2AC;
extern "C" int mem_00A9ED08;
extern "C" int mem_00A9FAF8;
extern "C" int mem_00A9EDD0;

// [0x0054F850] LightList::vfunc_1 (858 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054F850(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x89982c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0e0h
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp+14h], ecx
        call ext_0054F300
        mov ebp, dword ptr [esp+100h]
        mov esi, dword ptr [ebp+40h]
        add ebp, 3ch
        cmp esi, dword ptr [ebp+8]
        jbe L_54F890
        call dword ptr [mem_00925134]
L_54F890:
        mov ebx, esi
        mov esi, dword ptr [ebp+8]
        cmp dword ptr [ebp+4], esi
        mov edi, ebp
        mov dword ptr [esp+30h], esi
        jbe L_54F8A6
        call dword ptr [mem_00925134]
L_54F8A6:
        test edi, edi
        je L_54F8AE
        cmp edi, ebp
        je L_54F8B4
L_54F8AE:
        call dword ptr [mem_00925134]
L_54F8B4:
        cmp ebx, esi
        jae L_54F997
        test edi, edi
        jne L_54F8C6
        call dword ptr [mem_00925134]
L_54F8C6:
        cmp ebx, dword ptr [edi+8]
        jb L_54F8D1
        call dword ptr [mem_00925134]
L_54F8D1:
        mov esi, dword ptr [ebx]
        mov eax, dword ptr [mem_00A9F604]
        push eax
        lea edi, [esi+4]
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je L_54F934
        lea ecx, [esp+50h]
        push ecx
        lea ecx, [esp+14h]
        mov dword ptr [esp+14h], esi
        call ext_004275C0
        push 0x92f10c
        push eax
        mov dword ptr [esp+100h], 0
        call dword ptr [mem_00924FC0]
        mov edx, dword ptr [esp+1ch]
        add esp, 8
        lea ecx, [esp+50h]
        mov byte ptr [edx+14h], al
        mov dword ptr [esp+0f8h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        jmp L_54F97E
L_54F934:
        mov eax, dword ptr [mem_00A9FA60]
        push eax
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je L_54F951
        mov edx, dword ptr [esp+14h]
        add edx, 15h
        jmp L_54F96C
L_54F951:
        mov eax, dword ptr [mem_00A9F784]
        push eax
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je L_54F97E
        mov edx, dword ptr [esp+14h]
        add edx, 16h
L_54F96C:
        lea ecx, [esp+10h]
        push ecx
        push edx
        mov dword ptr [esp+18h], esi
        call ext_00427640
        add esp, 8
L_54F97E:
        mov edi, ebp
        cmp ebx, dword ptr [edi+8]
        jb L_54F98B
        call dword ptr [mem_00925134]
L_54F98B:
        mov esi, dword ptr [esp+30h]
        add ebx, 4
        jmp L_54F8A6
L_54F997:
        mov esi, dword ptr [esp+100h]
        mov edi, dword ptr [esi+28h]
        mov ebx, dword ptr [mem_00925134]
        add esi, 24h
        cmp edi, dword ptr [esi+8]
        jbe L_54F9B1
        call ebx
L_54F9B1:
        lea ecx, [esp+18h]
        mov dword ptr [esp+18h], esi
        mov dword ptr [esp+1ch], esi
        mov dword ptr [esp+20h], edi
        call ext_00427A60
        mov edi, dword ptr [esi+8]
        cmp dword ptr [esi+4], edi
        jbe L_54F9D0
        call ebx
L_54F9D0:
        mov dword ptr [esp+24h], esi
        mov dword ptr [esp+28h], esi
        mov dword ptr [esp+2ch], edi
        lea ecx, [esp+24h]
        call ext_00427A60
L_54F9E0:
        mov ebp, dword ptr [esp+1ch]
        test ebp, ebp
        je L_54F9F3
        cmp ebp, dword ptr [esp+28h]
        je L_54F9F5
L_54F9F3:
        call ebx
L_54F9F5:
        mov esi, dword ptr [esp+20h]
        cmp esi, dword ptr [esp+2ch]
        jae L_54FB8F
        test ebp, ebp
        jne L_54FA09
        call ebx
L_54FA09:
        cmp esi, dword ptr [ebp+8]
        jb L_54FA10
        call ebx
L_54FA10:
        mov eax, dword ptr [esi]
        add eax, 4
        push eax
        lea ecx, [esp+38h]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [mem_00A9EE48]
        mov edi, dword ptr [mem_00924FC0]
        push eax
        lea ecx, [esp+38h]
        push ecx
        mov dword ptr [esp+100h], 1
        call edi
        add esp, 8
        test al, al
        jne L_54FB4E
        mov edx, dword ptr [mem_00A9F2AC]
        push edx
        lea eax, [esp+38h]
        push eax
        call edi
        add esp, 8
        test al, al
        jne L_54FB4E
        mov ecx, dword ptr [mem_00A9ED08]
        push ecx
        lea edx, [esp+38h]
        push edx
        call edi
        add esp, 8
        test al, al
        je L_54FB22
        cmp esi, dword ptr [ebp+8]
        jb L_54FA82
        call ebx
L_54FA82:
        mov eax, dword ptr [mem_00A9F604]
        mov ecx, dword ptr [esi]
        push eax
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx+8]
        lea ecx, [esp+6ch]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, dword ptr [mem_00A9FAF8]
        push ecx
        push eax
        mov byte ptr [esp+100h], 3
        call edi
        add esp, 8
        lea ecx, [esp+6ch]
        mov bl, al
        mov byte ptr [esp+0f8h], 1
        call dword ptr [mem_00924FF4]
        test bl, bl
        je L_54FB1C
        cmp esi, dword ptr [ebp+8]
        jb L_54FAD5
        call dword ptr [mem_00925134]
L_54FAD5:
        mov edx, dword ptr [mem_00A9EDD0]
        mov ecx, dword ptr [esi]
        push 1
        push 0
        push edx
        call ext_0063F530
        cmp eax, 0b53a34h
        je L_54FB0A
        cmp eax, 0b53b30h
        je L_54FB0A
        cmp eax, 0b53ab0h
        je L_54FB0A
        cmp eax, 0b53a70h
        je L_54FB0A
        cmp eax, 0b53af0h
        jne L_54FB0F
L_54FB0A:
        mov eax, 0b53b30h
L_54FB0F:
        mov ecx, dword ptr [esp+14h]
        push eax
        add ecx, 4
        call ext_0066A550
L_54FB1C:
        mov ebx, dword ptr [mem_00925134]
L_54FB22:
        lea ecx, [esp+34h]
        mov dword ptr [esp+0f8h], 0ffffffffh
        call dword ptr [mem_00924FF4]
        cmp esi, dword ptr [ebp+8]
        jb L_54FB3E
        call ebx
L_54FB3E:
        add esi, 4
        mov dword ptr [esp+20h], esi
        lea ecx, [esp+18h]
        jmp L_54F9E0
L_54FB4E:
        cmp esi, dword ptr [ebp+8]
        jb L_54FB55
        call ebx
L_54FB55:
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp+8ch]
        call ext_0054E7F0
        mov ecx, dword ptr [esp+14h]
        push eax
        add ecx, 18h
        mov byte ptr [esp+0fch], 2
        call ext_0054F7A0
        lea ecx, [esp+88h]
        mov byte ptr [esp+0f8h], 1
        call ext_0054E360
        jmp L_54FB22
L_54FB8F:
        mov ecx, dword ptr [esp+0f0h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0ech
        ret 4
    }
}
