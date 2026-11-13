// Decompiled translation unit: src/classes/MeWorld.cpp

extern "C" void ext_0045DFB0();
extern "C" void ext_0046C0A0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0067B930();
extern "C" int mem_00A9FA28;
extern "C" int mem_00A9F980;
extern "C" int mem_00A9FA80;
extern "C" int mem_00A9FA84;
extern "C" int mem_00A9F7D8;
extern "C" int mem_00A9F7E4;
extern "C" int mem_0093F7B8;
extern "C" int mem_00A9EF7C;
extern "C" int mem_00944240;
extern "C" int mem_00A9F3B8;

// [0x0065BFC0] MeWorld::vfunc_1 (615 bytes)
extern "C" __declspec(naked) void __fastcall fn_0065BFC0(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [esp+0x10]
        cmp esi, 0xb53a34
        mov ebx, ecx
        je L_done
        cmp esi, 0xb53b30
        je L_done
        cmp esi, 0xb53ab0
        je L_done
        cmp esi, 0xb53a70
        je L_done
        cmp esi, 0xb53af0
        je L_done
        mov eax, dword ptr [mem_00A9FA28]
        push edi
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp+0x14]
        push ecx
        lea edi, [ebx+8]
        push edi
        mov dword ptr [esp+0x1c], eax
        call ext_0046C0A0
        mov edx, dword ptr [mem_00A9F980]
        add esp, 8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_079
        cmp eax, 0xb53b30
        je L_079
        cmp eax, 0xb53ab0
        je L_079
        cmp eax, 0xb53a70
        je L_079
        cmp eax, 0xb53af0
        je L_079
        mov dword ptr [esp+0x14], eax
        lea eax, [esp+0x14]
        push eax
        lea ecx, [esp+0x10]
        push ecx
        call ext_0053F5F0
        fild dword ptr [esp+0x14]
        fld1
        add esp, 8
        _emit 0xde
        _emit 0xf1
        fstp dword ptr [edi]
L_079:
        mov edx, dword ptr [mem_00A9FA80]
        push edx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        pop edi
        je L_0c0
        cmp eax, 0xb53b30
        je L_0c0
        cmp eax, 0xb53ab0
        je L_0c0
        cmp eax, 0xb53a70
        je L_0c0
        cmp eax, 0xb53af0
        je L_0c0
        mov dword ptr [esp+0x10], eax
        lea eax, [esp+0x10]
        push eax
        lea ecx, [ebx+0x2c]
        push ecx
        call ext_0046C0A0
        add esp, 8
L_0c0:
        mov edx, dword ptr [mem_00A9FA84]
        push edx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_106
        cmp eax, 0xb53b30
        je L_106
        cmp eax, 0xb53ab0
        je L_106
        cmp eax, 0xb53a70
        je L_106
        cmp eax, 0xb53af0
        je L_106
        mov dword ptr [esp+0x10], eax
        lea eax, [esp+0x10]
        push eax
        lea ecx, [ebx+0x30]
        push ecx
        call ext_0046C0A0
        add esp, 8
L_106:
        mov edx, dword ptr [mem_00A9F7D8]
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp+0x10], eax
        lea eax, [esp+0x10]
        push eax
        lea ecx, [ebx+0xc]
        push ecx
        call ext_0053F5F0
        mov edx, dword ptr [mem_00A9F7E4]
        add esp, 8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp+0x10], eax
        lea eax, [esp+0x10]
        push eax
        lea ecx, [ebx+0x10]
        push ecx
        call ext_0053F5F0
        fld dword ptr [mem_0093F7B8]
        add esp, 8
        fst dword ptr [ebx+0x14]
        push 1
        fstp dword ptr [ebx+0x18]
        mov edx, dword ptr [mem_00A9EF7C]
        push 0
        push edx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_18d
        cmp eax, 0xb53b30
        je L_18d
        cmp eax, 0xb53ab0
        je L_18d
        cmp eax, 0xb53a70
        je L_18d
        cmp eax, 0xb53af0
        jne L_194
L_18d:
        mov esi, 0xb53b30
        jmp L_196
L_194:
        mov esi, eax
L_196:
        cmp esi, 0xb53a34
        je L_1be
        cmp esi, 0xb53b30
        je L_1be
        cmp esi, 0xb53ab0
        je L_1be
        cmp esi, 0xb53a70
        je L_1be
        cmp esi, 0xb53af0
        jne L_1cd
L_1be:
        fld dword ptr [mem_00944240]
        pop esi
        fstp dword ptr [ebx+0x24]
        pop ebx
        pop ecx
        ret 4
L_1cd:
        mov eax, dword ptr [mem_00A9F3B8]
        push eax
        mov ecx, esi
        call ext_0045DFB0
        cmp eax, 0xb53a34
        je L_1fd
        cmp eax, 0xb53b30
        je L_1fd
        cmp eax, 0xb53ab0
        je L_1fd
        cmp eax, 0xb53a70
        je L_1fd
        cmp eax, 0xb53af0
        jne L_218
L_1fd:
        lea ecx, [esp+0x10]
        push ecx
        add ebx, 0x24
        push ebx
        mov dword ptr [esp+0x18], esi
        call ext_0046C0A0
        add esp, 8
        pop esi
        pop ebx
        pop ecx
        ret 4
L_218:
        push eax
        lea ecx, [ebx+0x20]
        call ext_0067B930
L_done:
        pop esi
        pop ebx
        pop ecx
        ret 4
    }
}
