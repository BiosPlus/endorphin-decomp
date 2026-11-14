// Decompiled translation unit: src/classes/ViewportManager.cpp

// [0x005431E0] ViewportManager::vfunc_3 (15 bytes)
extern "C" int __stdcall ext_00541410(int a1, int a2);

extern "C" int __stdcall fn_005431E0(int a1) {
    return ext_00541410(a1, 0);
}

// [0x005431B0] ViewportManager::vfunc_6 (35 bytes)
// Constructs the std::string at a1 from the C string pointer held in mem_00A9ED84 via the
// imported basic_string(const char*, allocator) ctor; returns a1 in eax (ret 0x4).
extern "C" int mem_00A9ED84;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_005431B0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9ED84]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00541F30] ViewportManager::vfunc_1 (1981 bytes)
extern "C" void ext_004275C0();
extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_004276D0();
extern "C" void ext_00427A60();
extern "C" void ext_004D0260();
extern "C" void ext_005319E0();
extern "C" void ext_0053F5F0();
extern "C" void ext_00540E10();
extern "C" void ext_00541220();
extern "C" void ext_00541580();
extern "C" void ext_00548790();
extern "C" void ext_005519A0();
extern "C" void ext_00552170();
extern "C" void ext_005DF5C0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_00665010();
extern "C" void ext_006A5C62();
extern "C" int mem_00A9ED84;
extern "C" int mem_00924FC8;
extern "C" int mem_00A9F3DC;
extern "C" int mem_00A9FAD0;
extern "C" int mem_00A9F444;
extern "C" int mem_00A9F73C;
extern "C" int mem_00A9F68C;
extern "C" int mem_00A9ED8C;
extern "C" int mem_00924FC0;
extern "C" int mem_00A9ED7C;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE8;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F3D8;
extern "C" int mem_00924FF0;
extern "C" int mem_009251E4;
extern "C" int mem_00A9F53C;
extern "C" int mem_00A9F540;
extern "C" int mem_00A9F544;
extern "C" int mem_00A9F548;
extern "C" int mem_00A44BB8;
extern "C" int mem_00924FE4;
extern "C" int mem_00A44BBC;
extern "C" int mem_00A44BC0;
extern "C" int mem_00A44BC4;
extern "C" int mem_00A9F410;
extern "C" int mem_00A9F838;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00541F30(void* self, int edx_unused, int a1) {
    __asm {
        push -0x1
        mov eax, dword ptr fs:[0x0]
        push 0x896ca5
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [mem_00A9ED84]
        sub esp, 0x5c
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x78]
        push edi
        mov ebp, ecx
        push eax
        lea ecx, [esi + 0x4]
        push ecx
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        jne v1_426D8
        mov edx, dword ptr [mem_00A9F3DC]
        push 0x1
        push 0x0
        push edx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je v1_41FA2
        cmp eax, 0xb53b30
        je v1_41FA2
        cmp eax, 0xb53ab0
        je v1_41FA2
        cmp eax, 0xb53a70
        je v1_41FA2
        cmp eax, 0xb53af0
        jne v1_41FAD
v1_41FA2:
        mov ebx, 0xb53b30
        mov dword ptr [esp + 0x7c], ebx
        jmp v1_41FB3
v1_41FAD:
        mov dword ptr [esp + 0x7c], eax
        mov ebx, eax
v1_41FB3:
        mov eax, dword ptr [mem_00A9FAD0]
        push eax
        mov ecx, ebx
        call ext_0063EFE0
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [esp + 0x1c]
        push edx
        mov dword ptr [esp + 0x18], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9F444]
        add esp, 0x8
        push eax
        mov ecx, ebx
        call ext_0063EFE0
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        mov dword ptr [esp + 0x18], eax
        call ext_0053F5F0
        mov ecx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0x8
        push ecx
        mov ecx, ebp
        mov dword ptr [ebp + 0xf8], eax
        call ext_00541220
        mov edx, dword ptr [mem_00A9F73C]
        push edx
        mov ecx, ebx
        call ext_0063EFE0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x18], eax
        lea eax, [ebp + 0x4]
        push ecx
        push eax
        call ext_00427640
        mov edx, dword ptr [mem_00A9F68C]
        add esp, 0x8
        push edx
        mov ecx, ebx
        call ext_0063EFE0
        mov dword ptr [esp + 0x18], eax
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [ebp + 0x130]
        push ecx
        call ext_0053F5F0
        mov edx, dword ptr [mem_00A9ED8C]
        add esp, 0x8
        push 0x1
        push 0x0
        push edx
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je v1_4208D
        cmp eax, 0xb53b30
        je v1_4208D
        cmp eax, 0xb53ab0
        je v1_4208D
        cmp eax, 0xb53a70
        je v1_4208D
        cmp eax, 0xb53af0
        jne v1_42092
v1_4208D:
        mov eax, 0xb53b30
v1_42092:
        push eax
        lea ecx, [ebp + 0x100]
        call ext_004D0260
        mov edi, dword ptr [esi + 0x28]
        add esi, 0x24
        cmp edi, dword ptr [esi + 0x8]
        jbe v1_420AF
        call dword ptr [mem_00925134]
v1_420AF:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe v1_420D2
        call dword ptr [mem_00925134]
v1_420D2:
        mov dword ptr [esp + 0x28], esi
        mov dword ptr [esp + 0x2c], esi
        mov dword ptr [esp + 0x30], edi
        lea ecx, [esp + 0x28]
v1_420E2:
        call ext_00427A60
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        je v1_420F5
        cmp edi, dword ptr [esp + 0x2c]
        je v1_420FB
v1_420F5:
        call dword ptr [mem_00925134]
v1_420FB:
        mov esi, dword ptr [esp + 0x24]
        cmp esi, dword ptr [esp + 0x30]
        jae v1_42314
        test edi, edi
        jne v1_42113
        call dword ptr [mem_00925134]
v1_42113:
        cmp esi, dword ptr [edi + 0x8]
        jb v1_4211E
        call dword ptr [mem_00925134]
v1_4211E:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [mem_00A9ED7C]
        push ecx
        add eax, 0x4
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je v1_422EF
        cmp esi, dword ptr [edi + 0x8]
        jb v1_42147
        call dword ptr [mem_00925134]
v1_42147:
        mov edx, dword ptr [mem_00A9F838]
        mov ecx, dword ptr [esi]
        push edx
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x50]
        push ecx
        mov ecx, eax
        call edx
        sub esp, 0x1c
        lea eax, [esp + 0x6c]
        mov ecx, esp
        mov dword ptr [esp + 0x34], esp
        push eax
        mov dword ptr [esp + 0x94], 0x0
        call dword ptr [mem_00924FE0]
        lea ebx, [ebp + 0x10c]
        mov ecx, ebx
        call ext_005DF5C0
        mov edi, eax
        test edi, edi
        je v1_421B3
        mov ecx, dword ptr [esp + 0x20]
        cmp esi, dword ptr [ecx + 0x8]
        jb v1_421A4
        call dword ptr [mem_00925134]
v1_421A4:
        mov eax, dword ptr [esi]
        push eax
        mov ecx, edi
        call ext_00548790
        jmp v1_422D5
v1_421B3:
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE8]
        mov edx, dword ptr [esp + 0x20]
        cmp esi, dword ptr [edx + 0x8]
        mov byte ptr [esp + 0x74], 0x1
        jb v1_421D1
        call dword ptr [mem_00925134]
v1_421D1:
        mov eax, dword ptr [mem_00A9FA6C]
        mov ecx, dword ptr [esi]
        push eax
        call ext_0063EFE0
        push eax
        lea ecx, [esp + 0x38]
        push ecx
        call ext_004275E0
        lea edx, [esp + 0x3c]
        push edx
        call ext_00665010
        mov edi, dword ptr [mem_00924FC4]
        lea eax, [esp + 0x40]
        push 0xaf1634
        push eax
        call edi
        add esp, 0x14
        test al, al
        je v1_4224E
        push 0x100
        call ext_006A5C62
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esp + 0x18], edi
        test edi, edi
        mov byte ptr [esp + 0x74], 0x2
        je v1_4229F
        mov ecx, dword ptr [esp + 0x20]
        cmp esi, dword ptr [ecx + 0x8]
        jb v1_42237
        call dword ptr [mem_00925134]
v1_42237:
        mov eax, dword ptr [esi]
        lea edx, [ebp + 0x13e]
        push edx
        lea ecx, [ebp + 0x4]
        push ecx
        push eax
        mov ecx, edi
        call ext_00552170
        jmp v1_422A1
v1_4224E:
        lea eax, [esp + 0x34]
        push 0xaf1650
        push eax
        call edi
        add esp, 0x8
        test al, al
        je v1_422C6
        push 0x118
        call ext_006A5C62
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esp + 0x18], edi
        test edi, edi
        mov byte ptr [esp + 0x74], 0x3
        je v1_4229F
        lea ecx, [ebp + 0x13e]
        push ecx
        lea eax, [ebp + 0x4]
        push eax
        lea ecx, [esp + 0x24]
        call ext_004276D0
        push eax
        mov ecx, edi
        call ext_005519A0
        mov esi, dword ptr [esp + 0x24]
        jmp v1_422A1
v1_4229F:
        xor eax, eax
v1_422A1:
        test eax, eax
        mov byte ptr [esp + 0x74], 0x1
        je v1_422C6
        push eax
        sub esp, 0x1c
        lea edx, [esp + 0x70]
        mov ecx, esp
        mov dword ptr [esp + 0x38], esp
        push edx
        call dword ptr [mem_00924FE0]
        mov ecx, ebx
        call ext_005319E0
v1_422C6:
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x74], 0x0
        call dword ptr [mem_00924FF4]
v1_422D5:
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0x74], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov edi, dword ptr [esp + 0x20]
        mov ebx, dword ptr [esp + 0x7c]
v1_422EF:
        test edi, edi
        jne v1_422F9
        call dword ptr [mem_00925134]
v1_422F9:
        cmp esi, dword ptr [edi + 0x8]
        jb v1_42304
        call dword ptr [mem_00925134]
v1_42304:
        add esi, 0x4
        mov dword ptr [esp + 0x24], esi
        lea ecx, [esp + 0x1c]
        jmp v1_420E2
v1_42314:
        mov eax, dword ptr [mem_00A9F3D8]
        push 0x1
        push 0x0
        push eax
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je v1_42348
        cmp eax, 0xb53b30
        je v1_42348
        cmp eax, 0xb53ab0
        je v1_42348
        cmp eax, 0xb53a70
        je v1_42348
        cmp eax, 0xb53af0
        jne v1_4234F
v1_42348:
        mov esi, 0xb53b30
        jmp v1_42351
v1_4234F:
        mov esi, eax
v1_42351:
        mov ecx, dword ptr [mem_00A9F444]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x50]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], eax
        call ext_004275C0
        mov ecx, eax
        mov dword ptr [esp + 0x74], 0x4
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251E4]
        add esp, 0x4
        lea ecx, [esp + 0x50]
        mov edi, eax
        mov dword ptr [esp + 0x74], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov dword ptr [ebp + 0xf8], edi
        mov eax, dword ptr [mem_00A9F53C]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x34], esp
        push ecx
        mov ecx, eax
        call edx
        lea edi, [ebp + 0x10c]
        mov ecx, edi
        call ext_005DF5C0
        mov ebx, eax
        mov eax, dword ptr [mem_00A9F540]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x34], esp
        push ecx
        mov ecx, eax
        call edx
        mov ecx, edi
        call ext_005DF5C0
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [mem_00A9F544]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x30], esp
        push ecx
        mov ecx, eax
        call edx
        mov ecx, edi
        call ext_005DF5C0
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [mem_00A9F548]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x2c], esp
        push ecx
        mov ecx, eax
        call edx
        mov ecx, edi
        call ext_005DF5C0
        test ebx, ebx
        mov esi, eax
        je v1_4245B
        mov eax, ebx
        jmp v1_42477
v1_4245B:
        mov eax, dword ptr [mem_00A44BB8]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x2c], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov ecx, edi
        call ext_00541580
v1_42477:
        lea ecx, [ebp + 0x8]
        push eax
        call ext_00540E10
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        jne v1_424A5
        mov edx, dword ptr [mem_00A44BBC]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x34], esp
        push edx
        call dword ptr [mem_00924FE4]
        mov ecx, edi
        call ext_00541580
v1_424A5:
        lea ecx, [ebp + 0x44]
        push eax
        call ext_00540E10
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        jne v1_424D2
        mov eax, dword ptr [mem_00A44BC0]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x34], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov ecx, edi
        call ext_00541580
v1_424D2:
        lea ecx, [ebp + 0x80]
        push eax
        call ext_00540E10
        test esi, esi
        je v1_424E6
        mov eax, esi
        jmp v1_42503
v1_424E6:
        mov edx, dword ptr [mem_00A44BC4]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x34], esp
        push edx
        call dword ptr [mem_00924FE4]
        mov ecx, edi
        call ext_00541580
v1_42503:
        lea ecx, [ebp + 0xbc]
        push eax
        mov dword ptr [esp + 0x1c], ecx
        call ext_00540E10
        mov eax, dword ptr [mem_00A9F410]
        mov ecx, dword ptr [esp + 0x7c]
        push 0x1
        push 0x0
        push eax
        call ext_0063F530
        cmp eax, 0xb53a34
        je v1_42549
        cmp eax, 0xb53b30
        je v1_42549
        cmp eax, 0xb53ab0
        je v1_42549
        cmp eax, 0xb53a70
        je v1_42549
        cmp eax, 0xb53af0
        jne v1_42550
v1_42549:
        mov esi, 0xb53b30
        jmp v1_42552
v1_42550:
        mov esi, eax
v1_42552:
        mov ecx, dword ptr [mem_00A9F53C]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x50]
        push edx
        lea ecx, [esp + 0x80]
        mov dword ptr [esp + 0x80], eax
        call ext_004275C0
        mov edi, dword ptr [mem_00924FC0]
        push 0x92f10c
        push eax
        mov dword ptr [esp + 0x7c], 0x5
        call edi
        add esp, 0x8
        lea ecx, [esp + 0x50]
        mov bl, al
        mov dword ptr [esp + 0x74], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp byte ptr [ebp + 0x1c], bl
        je v1_425B4
        cmp byte ptr [ebp + 0x1c], 0x0
        sete al
        mov byte ptr [ebp + 0x1c], al
v1_425B4:
        mov ecx, dword ptr [mem_00A9F540]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x50]
        push edx
        lea ecx, [esp + 0x80]
        mov dword ptr [esp + 0x80], eax
        call ext_004275C0
        push 0x92f10c
        push eax
        mov dword ptr [esp + 0x7c], 0x6
        call edi
        add esp, 0x8
        lea ecx, [esp + 0x50]
        mov bl, al
        mov dword ptr [esp + 0x74], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp byte ptr [ebp + 0x58], bl
        je v1_42610
        cmp byte ptr [ebp + 0x58], 0x0
        sete al
        mov byte ptr [ebp + 0x58], al
v1_42610:
        mov ecx, dword ptr [mem_00A9F544]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x50]
        push edx
        lea ecx, [esp + 0x80]
        mov dword ptr [esp + 0x80], eax
        call ext_004275C0
        push 0x92f10c
        push eax
        mov dword ptr [esp + 0x7c], 0x7
        call edi
        add esp, 0x8
        lea ecx, [esp + 0x50]
        mov bl, al
        mov dword ptr [esp + 0x74], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp byte ptr [ebp + 0x94], bl
        je v1_42675
        cmp byte ptr [ebp + 0x94], 0x0
        sete al
        mov byte ptr [ebp + 0x94], al
v1_42675:
        mov ecx, dword ptr [mem_00A9F548]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x34]
        push edx
        lea ecx, [esp + 0x80]
        mov dword ptr [esp + 0x80], eax
        call ext_004275C0
        push 0x92f10c
        push eax
        mov dword ptr [esp + 0x7c], 0x8
        call edi
        add esp, 0x8
        lea ecx, [esp + 0x34]
        mov bl, al
        mov dword ptr [esp + 0x74], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp byte ptr [ebp + 0xd0], bl
        je v1_426D8
        mov eax, dword ptr [esp + 0x18]
        cmp byte ptr [eax + 0x14], 0x0
        sete cl
        mov byte ptr [eax + 0x14], cl
v1_426D8:
        mov ecx, dword ptr [esp + 0x6c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0x68
        ret 0x4
    }
}
