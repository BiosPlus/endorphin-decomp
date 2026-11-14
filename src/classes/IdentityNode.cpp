// Decompiled translation unit: src/classes/IdentityNode.cpp

extern "C" void ext_00480920();

// [0x0059CC60] IdentityNode::vfunc_2_off_4 (8 bytes)
extern "C" __declspec(naked) void __fastcall fn_0059CC60(void* self, int edx_unused, int a1) {
    __asm {
        call ext_00480920
        ret 4
    }
}

// [0x00587880] IdentityNode::vfunc_33 (125 bytes)
extern "C" void ext_0050BE20();
extern "C" void ext_00596660();
extern "C" void ext_00586D00();
extern "C" int mem_00925134;
extern "C" int mem_00924EA8;

extern "C" __declspec(naked) void __fastcall fn_00587880(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        lea edi, [esi + 7Ch]
        mov dword ptr [esi + 98h], eax
        mov dword ptr [esi + 9Ch], eax
        mov dword ptr [esi + 94h], eax
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe chk1_ok
        call dword ptr [mem_00925134]
    chk1_ok:
        mov ebp, dword ptr [edi + 4]
        cmp ebp, dword ptr [edi + 8]
        jbe chk2_ok
        call dword ptr [mem_00925134]
    chk2_ok:
        push ebx
        push edi
        push ebp
        push edi
        lea eax, [esp + 20h]
        push eax
        mov ecx, edi
        call ext_00596660
        lea ecx, [esi + 6Ch]
        call ext_0050BE20
        lea ecx, [esi + 14h]
        call dword ptr [mem_00924EA8]
        lea ecx, [esi + 30h]
        call dword ptr [mem_00924EA8]
        lea ecx, [esi + 4Ch]
        call dword ptr [mem_00924EA8]
        pop edi
        mov ecx, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        jmp ext_00586D00
    }
}

// [0x00593D90] IdentityNode::vfunc_10_off_4 (138 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_00B40CB8;
extern "C" int mem_00B40C78;
extern "C" int mem_00B40C7C;
extern "C" int mem_00B40C80;
extern "C" int mem_00B40C84;
extern "C" int mem_00B40C88;
extern "C" int mem_00B40C8C;
extern "C" int mem_00B40C90;
extern "C" int mem_00B40C94;
extern "C" int mem_00B40C98;
extern "C" int mem_00B40C9C;
extern "C" int mem_00B40CA0;
extern "C" int mem_00B40CA4;
extern "C" int mem_00B40CA8;
extern "C" int mem_00B40CAC;
extern "C" int mem_00B40CB0;
extern "C" int mem_00B40CB4;

extern "C" __declspec(naked) void* __cdecl fn_00593D90(void) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00B40CB8], al
        jne early_out
        fld1
        or dword ptr [mem_00B40CB8], eax
        fst dword ptr [mem_00B40C78]
        push 0x91d540
        fldz
        fst dword ptr [mem_00B40C7C]
        fst dword ptr [mem_00B40C80]
        fst dword ptr [mem_00B40C84]
        fst dword ptr [mem_00B40C88]
        fst dword ptr [mem_00B40C90]
        fst dword ptr [mem_00B40C94]
        fst dword ptr [mem_00B40C98]
        fst dword ptr [mem_00B40C9C]
        fst dword ptr [mem_00B40CA4]
        fst dword ptr [mem_00B40CA8]
        fst dword ptr [mem_00B40CAC]
        fstp dword ptr [mem_00B40CB0]
        fst dword ptr [mem_00B40C8C]
        fst dword ptr [mem_00B40CA0]
        fstp dword ptr [mem_00B40CB4]
        call ext_006A6C87
        add esp, 4
    early_out:
        mov eax, offset mem_00B40C78
        ret
    }
}

// [0x00593E20] IdentityNode::vfunc_9_off_4 (138 bytes)
extern "C" int mem_00B40D00;
extern "C" int mem_00B40CC0;
extern "C" int mem_00B40CC4;
extern "C" int mem_00B40CC8;
extern "C" int mem_00B40CCC;
extern "C" int mem_00B40CD0;
extern "C" int mem_00B40CD4;
extern "C" int mem_00B40CD8;
extern "C" int mem_00B40CDC;
extern "C" int mem_00B40CE0;
extern "C" int mem_00B40CE4;
extern "C" int mem_00B40CE8;
extern "C" int mem_00B40CEC;
extern "C" int mem_00B40CF0;
extern "C" int mem_00B40CF4;
extern "C" int mem_00B40CF8;
extern "C" int mem_00B40CFC;

extern "C" __declspec(naked) void* __cdecl fn_00593E20(void) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00B40D00], al
        jne early_out
        fld1
        or dword ptr [mem_00B40D00], eax
        fst dword ptr [mem_00B40CC0]
        push 0x91d550
        fldz
        fst dword ptr [mem_00B40CC4]
        fst dword ptr [mem_00B40CC8]
        fst dword ptr [mem_00B40CCC]
        fst dword ptr [mem_00B40CD0]
        fst dword ptr [mem_00B40CD8]
        fst dword ptr [mem_00B40CDC]
        fst dword ptr [mem_00B40CE0]
        fst dword ptr [mem_00B40CE4]
        fst dword ptr [mem_00B40CEC]
        fst dword ptr [mem_00B40CF0]
        fst dword ptr [mem_00B40CF4]
        fstp dword ptr [mem_00B40CF8]
        fst dword ptr [mem_00B40CD4]
        fst dword ptr [mem_00B40CE8]
        fstp dword ptr [mem_00B40CFC]
        call ext_006A6C87
        add esp, 4
    early_out:
        mov eax, offset mem_00B40CC0
        ret
    }
}

// [0x0059CBD0] IdentityNode::vfunc_3_off_4 (140 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_00B41458;
extern "C" int mem_00B41418;
extern "C" int mem_00B4141C;
extern "C" int mem_00B41420;
extern "C" int mem_00B41424;
extern "C" int mem_00B41428;
extern "C" int mem_00B41430;
extern "C" int mem_00B41434;
extern "C" int mem_00B41438;
extern "C" int mem_00B4143C;
extern "C" int mem_00B41444;
extern "C" int mem_00B41448;
extern "C" int mem_00B4144C;
extern "C" int mem_00B41450;
extern "C" int mem_00B4142C;
extern "C" int mem_00B41440;
extern "C" int mem_00B41454;

extern "C" __declspec(naked) void* __fastcall fn_0059CBD0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00B41458], al
        jne early_out
        fld1
        or dword ptr [mem_00B41458], eax
        fst dword ptr [mem_00B41418]
        push 0x91d650
        fldz
        fst dword ptr [mem_00B4141C]
        fst dword ptr [mem_00B41420]
        fst dword ptr [mem_00B41424]
        fst dword ptr [mem_00B41428]
        fst dword ptr [mem_00B41430]
        fst dword ptr [mem_00B41434]
        fst dword ptr [mem_00B41438]
        fst dword ptr [mem_00B4143C]
        fst dword ptr [mem_00B41444]
        fst dword ptr [mem_00B41448]
        fst dword ptr [mem_00B4144C]
        fstp dword ptr [mem_00B41450]
        fst dword ptr [mem_00B4142C]
        fst dword ptr [mem_00B41440]
        fstp dword ptr [mem_00B41454]
        call ext_006A6C87
        add esp, 4
    early_out:
        mov eax, offset mem_00B41418
        ret 4
    }
}

extern "C" void ext_00620EB0();
extern "C" void ext_006A5C62();

// [0x00620EF0] IdentityNode::vfunc_17_off_C (99 bytes)
extern "C" __declspec(naked) void __fastcall fn_00620EF0(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 0e8h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_00620EF0_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_00620EB0
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
fn_00620EF0_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

extern "C" void __cdecl ext_00662810(void*, int, void*);
extern "C" void* __fastcall ext_00640110(void*, int, int);
extern "C" void __cdecl ext_00640A80(void*, int);
extern "C" void __fastcall ext_00585FF0(void*, int, void*);
extern "C" int mem_00A9F838;
extern "C" int mem_0095A9A4;
extern "C" int mem_00A9F700;
extern "C" int mem_00A9F908;
extern "C" int mem_00A9FAD4;

// [0x00586C70] IdentityNode::vfunc_22 (134 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00586C70(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [mem_00A9F838]
        push edi
        mov edi, dword ptr [esp + 0xC]
        lea eax, [esi + 0x14]
        push eax
        push ecx
        push edi
        call ext_00662810
        lea edx, [esi + 0x30]
        push edx
        push offset mem_0095A9A4
        push edi
        call ext_00662810
        mov ecx, dword ptr [mem_00A9F700]
        lea eax, [esi + 0x4C]
        push eax
        push ecx
        push edi
        call ext_00662810
        mov edx, dword ptr [mem_00A9F908]
        add esp, 0x24
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x8C]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9FAD4]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x68]
        push ecx
        push eax
        call ext_00640A80
        add esp, 0x8
        push edi
        mov ecx, esi
        call ext_00585FF0
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00589E30] IdentityNode::vfunc_21 (434 bytes)
extern "C" void ext_004275E0(void* dst, int val);
extern "C" void ext_00427640(void* dst, int* pVal);
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_00589D40();
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F5C4;
extern "C" int mem_00A9F700;
extern "C" int mem_00A9F908;
extern "C" int mem_00A9FAD4;
extern "C" int mem_00A9EDAC;

// [0x00589E30] IdentityNode::vfunc_21 (434 bytes)
extern "C" __declspec(naked) void __fastcall fn_00589E30(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 84h]
        call edx
        mov eax, dword ptr [mem_00A9F838]
        mov esi, dword ptr [esp + 0ch]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea ecx, [edi + 14h]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F5C4]
        add esp, 8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0B53A34h
        je blk3
        cmp eax, 0B53B30h
        je blk3
        cmp eax, 0B53AB0h
        je blk3
        cmp eax, 0B53A70h
        je blk3
        cmp eax, 0B53AF0h
        je blk3
        mov eax, dword ptr [mem_00A9F5C4]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea ecx, [edi + 30h]
        push ecx
        call ext_004275E0
        add esp, 8
    blk3:
        mov edx, dword ptr [mem_00A9F700]
        push edx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0B53A34h
        je blk4
        cmp eax, 0B53B30h
        je blk4
        cmp eax, 0B53AB0h
        je blk4
        cmp eax, 0B53A70h
        je blk4
        cmp eax, 0B53AF0h
        je blk4
        mov eax, dword ptr [mem_00A9F700]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea ecx, [edi + 4Ch]
        push ecx
        call ext_004275E0
        add esp, 8
    blk4:
        mov edx, dword ptr [mem_00A9F908]
        push edx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0B53A34h
        je blk5
        cmp eax, 0B53B30h
        je blk5
        cmp eax, 0B53AB0h
        je blk5
        cmp eax, 0B53A70h
        je blk5
        cmp eax, 0B53AF0h
        je blk5
        mov eax, dword ptr [mem_00A9F908]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0ch]
        push ecx
        lea edx, [edi + 8Ch]
        push edx
        mov dword ptr [esp + 14h], eax
        call ext_00427640
        add esp, 8
    blk5:
        mov eax, dword ptr [mem_00A9FAD4]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0B53A34h
        je blk6
        cmp eax, 0B53B30h
        je blk6
        cmp eax, 0B53AB0h
        je blk6
        cmp eax, 0B53A70h
        je blk6
        cmp eax, 0B53AF0h
        je blk6
        mov ecx, dword ptr [mem_00A9FAD4]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0ch]
        mov dword ptr [esp + 0ch], eax
        push edx
        lea eax, [edi + 68h]
        push eax
        call ext_00427640
        add esp, 8
    blk6:
        mov ecx, dword ptr [mem_00A9EDAC]
        push 1
        push 0
        push ecx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0B53A34h
        je fd0
        cmp eax, 0B53B30h
        je fd0
        cmp eax, 0B53AB0h
        je fd0
        cmp eax, 0B53A70h
        je fd0
        cmp eax, 0B53AF0h
        jne fd5
    fd0:
        mov eax, 0B53B30h
    fd5:
        push eax
        mov ecx, edi
        call ext_00589D40
        pop edi
        pop esi
        ret 4
    }
}
