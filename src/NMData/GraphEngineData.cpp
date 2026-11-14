// Decompiled translation unit: src/NMData/GraphEngineData.cpp

extern "C" void ext_004B4710();
extern "C" void ext_0055DA20();
extern "C" int mem_00AE0D6C;
extern "C" int mem_00AE0D68;

// [0x004B48E0] NMData::GraphEngineData::vfunc_13 (69 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004B48E0(void* self, int edx_unused, void* a1, int a2_unused) {
    __asm {
        push ecx
        mov eax, 0x1
        test byte ptr [mem_00AE0D6C], al
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0x0
        jne done_init
        or dword ptr [mem_00AE0D6C], eax
        call ext_004B4710
        mov dword ptr [mem_00AE0D68], eax
    done_init:
        mov eax, dword ptr [mem_00AE0D68]
        add esi, 0x8
        push esi
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004B5940] NMData::GraphEngineData::vfunc_0_off_4 (649 bytes)
extern "C" void ext_0059A140();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" int mem_00A372AC;
extern "C" int mem_00A372B0;

// [0x004B5940] NMData::GraphEngineData::vfunc_0_off_4 (649 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B5940(void* self, int edx_unused, int* a1, int a2_unused) {
    __asm {
        push -1
        push 087ba98h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 30h
        push ebx
        push ebp
        xor eax, eax
        push esi
        push edi
        mov dword ptr [esp+34h], eax
        mov dword ptr [esp+38h], eax
        mov dword ptr [esp+3Ch], eax
        mov esi, dword ptr [ecx+8]
        cmp esi, dword ptr [ecx+0Ch]
        mov ebx, dword ptr [mem_00925134]
        lea edi, [ecx+4]
        mov dword ptr [esp+48h], eax
        mov dword ptr [esp+14h], edi
        jbe L4B5985
        call ebx
L4B5985:
        mov ebp, esi
        mov dword ptr [esp+1Ch], ebp
        jmp L4B5990
        _emit 08Dh
        _emit 049h
        _emit 000h
L4B5990:
        mov esi, dword ptr [edi+8]
        cmp dword ptr [edi+4], esi
        jbe L4B599A
        call ebx
L4B599A:
        test edi, edi
        je L4B59A2
        cmp edi, edi
        je L4B59A4
L4B59A2:
        call ebx
L4B59A4:
        cmp ebp, esi
        je L4B5A4F
        test edi, edi
        jne L4B59B2
        call ebx
L4B59B2:
        cmp ebp, dword ptr [edi+8]
        jb L4B59B9
        call ebx
L4B59B9:
        mov eax, dword ptr [ebp]
        mov edi, dword ptr [esp+38h]
        cmp dword ptr [esp+34h], edi
        mov ebp, dword ptr [eax+20h]
        mov dword ptr [esp+10h], ebp
        jbe L4B59CF
        call ebx
L4B59CF:
        mov esi, dword ptr [esp+34h]
        cmp esi, dword ptr [esp+38h]
        jbe L4B59DB
        call ebx
L4B59DB:
        sub edi, esi
        sar edi, 2
        mov ecx, edi
        test ecx, ecx
        lea eax, [esp+30h]
        mov ebx, eax
        mov dword ptr [esp+24h], esi
        jle L4B5A0F
L4B59F0:
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        cmp dword ptr [esi+eax*4], ebp
        jge L4B5A09
        or edx, -1
        sub edx, eax
        lea esi, [esi+eax*4+4]
        add ecx, edx
        jmp L4B5A0B
L4B5A09:
        mov ecx, eax
L4B5A0B:
        test ecx, ecx
        jg L4B59F0
L4B5A0F:
        lea eax, [esp+10h]
        push eax
        push esi
        push ebx
        lea ecx, [esp+34h]
        push ecx
        lea ecx, [esp+40h]
        call ext_0059A140
        mov eax, dword ptr [esp+14h]
        mov edx, dword ptr [esp+1Ch]
        cmp edx, dword ptr [eax+8]
        jb L4B5A37
        call dword ptr [mem_00925134]
L4B5A37:
        add dword ptr [esp+1Ch], 4
        mov edi, dword ptr [esp+14h]
        mov ebp, dword ptr [esp+1Ch]
        mov ebx, dword ptr [mem_00925134]
        jmp L4B5990
L4B5A4F:
        mov eax, dword ptr [edi+4]
        xor edx, edx
        test eax, eax
        je L4B5A7B
        mov ecx, dword ptr [edi+8]
        sub ecx, eax
        sar ecx, 2
        je L4B5A7B
        mov ecx, eax
        test ecx, ecx
        je L4B5A70
        mov eax, dword ptr [edi+8]
        sub eax, ecx
        sar eax, 2
L4B5A70:
        add eax, -1
        xor edx, edx
        div dword ptr [mem_00A372AC]
L4B5A7B:
        mov ebp, dword ptr [esp+38h]
        cmp dword ptr [esp+34h], ebp
        mov edx, dword ptr [edx*4+mem_00A372B0]
        mov dword ptr [esp+10h], edx
        jbe L4B5A92
        call ebx
L4B5A92:
        mov esi, dword ptr [esp+34h]
        cmp esi, dword ptr [esp+38h]
        jbe L4B5A9E
        call ebx
L4B5A9E:
        mov ecx, ebp
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        lea eax, [esp+30h]
        mov edi, eax
        mov dword ptr [esp+2Ch], esi
        jle L4B5AD6
L4B5AB3:
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [esi+eax*4]
        cmp edx, dword ptr [esp+10h]
        jge L4B5AD0
        or edx, -1
        sub edx, eax
        lea esi, [esi+eax*4+4]
        add ecx, edx
        jmp L4B5AD2
L4B5AD0:
        mov ecx, eax
L4B5AD2:
        test ecx, ecx
        jg L4B5AB3
L4B5AD6:
        test edi, edi
        je L4B5AE2
        lea eax, [esp+30h]
        cmp edi, eax
        je L4B5AE4
L4B5AE2:
        call ebx
L4B5AE4:
        cmp esi, ebp
        _emit 00Fh
        _emit 084h
        _emit 0ACh
        _emit 000h
        _emit 000h
        _emit 000h
        test edi, edi
        jne L4B5AF2
        call ebx
L4B5AF2:
        cmp esi, dword ptr [edi+8]
        jb L4B5AF9
        call ebx
L4B5AF9:
        mov ecx, dword ptr [esp+10h]
        cmp ecx, dword ptr [esi]
        _emit 00Fh
        _emit 08Ch
        _emit 093h
        _emit 000h
        _emit 000h
        _emit 000h
        cmp dword ptr [mem_00A372AC], 0
        mov dword ptr [esp+14h], 0
        _emit 00Fh
        _emit 08Eh
        _emit 07Eh
        _emit 000h
        _emit 000h
        _emit 000h
        _emit 08Dh
        _emit 09Bh
        _emit 000h
        _emit 000h
        _emit 000h
        _emit 000h
L4B5B20:
        mov ebp, dword ptr [esp+38h]
        cmp dword ptr [esp+34h], ebp
        mov edx, dword ptr [esp+14h]
        mov edi, dword ptr [edx*4+mem_00A372B0]
        jbe L4B5B37
        call ebx
L4B5B37:
        mov esi, dword ptr [esp+34h]
        cmp esi, dword ptr [esp+38h]
        jbe L4B5B43
        call ebx
L4B5B43:
        mov ecx, ebp
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        jle L4B5B6F
        mov edi, edi
L4B5B50:
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        cmp dword ptr [esi+eax*4], edi
        jge L4B5B69
        or edx, -1
        sub edx, eax
        lea esi, [esi+eax*4+4]
        add ecx, edx
        jmp L4B5B6B
L4B5B69:
        mov ecx, eax
L4B5B6B:
        test ecx, ecx
        jg L4B5B50
L4B5B6F:
        cmp esi, ebp
        je L4B5B94
        cmp esi, dword ptr [esp+38h]
        jb L4B5B7B
        call ebx
L4B5B7B:
        cmp edi, dword ptr [esi]
        jl L4B5B94
        mov eax, dword ptr [esp+14h]
        add eax, 1
        cmp eax, dword ptr [mem_00A372AC]
        mov dword ptr [esp+14h], eax
        jl L4B5B20
        jmp L4B5B98
L4B5B94:
        mov dword ptr [esp+10h], edi
L4B5B98:
        mov eax, dword ptr [esp+50h]
        mov ecx, dword ptr [esp+10h]
        pop edi
        pop esi
        mov dword ptr [eax+20h], ecx
        mov eax, dword ptr [esp+2Ch]
        test eax, eax
        pop ebp
        pop ebx
        je L4B5BB8
        push eax
        call ext_006A5C5C
        add esp, 4
L4B5BB8:
        mov ecx, dword ptr [esp+30h]
        mov dword ptr fs:[0], ecx
        add esp, 3Ch
        ret 8
    }
}
