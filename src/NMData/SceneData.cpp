// Decompiled translation unit: src/NMData/SceneData.cpp

extern "C" int mem_00A9F23C;
extern "C" int mem_00924FE4;
extern "C" void ext_00477EC0();
extern "C" void ext_00478A10();
extern "C" void ext_00493F20();
extern "C" void ext_004B4890();
extern "C" void ext_004BAC60();
extern "C" void ext_004C43E0();
extern "C" void ext_004C45F0();
extern "C" void ext_004D0530();
extern "C" void ext_00585FF0();
extern "C" void ext_005861D0();
extern "C" void ext_00594000();
extern "C" void ext_0059B5A0();
extern "C" void ext_0063F8D0();
extern "C" void ext_00640110();
extern "C" void ext_00640270();
extern "C" void ext_00640390();
extern "C" void ext_006404E0();
extern "C" void ext_00640A50();
extern "C" void ext_00640A80();
extern "C" void ext_00673C20();
extern "C" void ext_00675020();
extern "C" void ext_00679D80();
extern "C" int mem_00A9F558;
extern "C" int mem_00925134;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9FAB0;
extern "C" int mem_00A9F58C;
extern "C" int mem_00A9EE88;
extern "C" int mem_00A9EE9C;
extern "C" int mem_00A9EE90;
extern "C" int mem_00A9EDA0;
extern "C" int mem_00A9ED98;
extern "C" int mem_00A9F414;
extern "C" int mem_00A9F1AC;
extern "C" int mem_00A9F1A4;
extern "C" int mem_00A9EFB0;
extern "C" int mem_00A9EF6C;
extern "C" int mem_00A9F084;
extern "C" int mem_00A9EEC8;

// [0x0047DB90] NMData::SceneData::vfunc_6 (35 bytes)
// Constructs the std::string in the hidden return buffer (a1) from the global C string mem_00A9F23C
// via the imported basic_string(const char*, allocator) ctor; returns the buffer in eax.
extern "C" __declspec(naked) void* __fastcall fn_0047DB90(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F23C]
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

// [0x00478D50] NMData::SceneData::vfunc_3 (2041 bytes)
extern "C" __declspec(naked) void __fastcall fn_00478D50(void* self) {
    __asm {
        push -0x1
        push 0x883905
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x58
        mov eax, dword ptr [mem_00A9F558]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x78]
        push eax
        call ext_00640110
        mov ecx, dword ptr [esi + 0x534]
        push ecx
        push eax
        call ext_00640A50
        mov eax, dword ptr [esi + 0x24]
        add esp, 0x8
        lea ecx, [eax + 0x4]
        call ext_005861D0
        mov edx, dword ptr [esi + 0x10]
        mov dword ptr [esp + 0x18], eax
        xor eax, eax
        lea edi, [esi + 0x18]
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [edi + 0x4]
        mov eax, dword ptr [eax]
        mov ebx, edi
        mov ebp, eax
        mov dword ptr [esp + 0x1c], edx
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x24], ebp
    L_00478DC1:
        test ebx, ebx
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x2c], eax
        je L_00478DD0
        cmp ebx, edi
        je L_00478DD6
    L_00478DD0:
        call dword ptr [mem_00925134]
    L_00478DD6:
        cmp ebp, dword ptr [esp + 0x2c]
        je L_00478E45
        test ebx, ebx
        jne L_00478DE6
        call dword ptr [mem_00925134]
    L_00478DE6:
        cmp ebp, dword ptr [ebx + 0x4]
        jne L_00478DF1
        call dword ptr [mem_00925134]
    L_00478DF1:
        mov ecx, dword ptr [ebp + 0x28]
        cmp byte ptr [ecx + 0x4e2], 0x0
        je L_00478E2A
        cmp ebp, dword ptr [ebx + 0x4]
        jne L_00478E08
        call dword ptr [mem_00925134]
    L_00478E08:
        mov ecx, dword ptr [ebp + 0x28]
        add ecx, 0x4
        call ext_005861D0
        add dword ptr [esp + 0x10], eax
        lea ecx, [esp + 0x20]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x24]
        mov ebx, dword ptr [esp + 0x20]
        jmp L_00478DC1
    L_00478E2A:
        add dword ptr [esp + 0x10], 0x3
        lea ecx, [esp + 0x20]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x24]
        mov ebx, dword ptr [esp + 0x20]
        jmp L_00478DC1
    L_00478E45:
        mov eax, dword ptr [esi + 0x528]
        mov eax, dword ptr [eax]
        lea ebx, [esi + 0x524]
        mov edi, ebx
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], eax
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_00478E60:
        test edi, edi
        mov edx, dword ptr [ebx + 0x4]
        mov dword ptr [esp + 0x2c], edx
        je L_00478E6F
        cmp edi, ebx
        je L_00478E79
    L_00478E6F:
        mov ebp, dword ptr [mem_00925134]
        call ebp
        jmp L_00478E7F
    L_00478E79:
        mov ebp, dword ptr [mem_00925134]
    L_00478E7F:
        mov eax, dword ptr [esp + 0x2c]
        cmp dword ptr [esp + 0x24], eax
        je L_00478EB7
        test edi, edi
        jne L_00478E8F
        call ebp
    L_00478E8F:
        mov ecx, dword ptr [esp + 0x24]
        cmp ecx, dword ptr [edi + 0x4]
        jne L_00478E9A
        call ebp
    L_00478E9A:
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [edx + 0x28]
        mov ecx, dword ptr [eax + 0x20]
        add dword ptr [esp + 0x14], ecx
        lea ecx, [esp + 0x20]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x20]
        jmp L_00478E60
    L_00478EB7:
        cmp dword ptr [esi + 0x558], 0x0
        je L_00478F36
        mov edx, dword ptr [esi + 0x34]
        test edx, edx
        mov ecx, dword ptr [esi + 0x520]
        jne L_00478ED1
        xor eax, eax
        jmp L_00478ED9
    L_00478ED1:
        mov eax, dword ptr [esi + 0x38]
        sub eax, edx
        sar eax, 0x2
    L_00478ED9:
        add eax, ecx
        add eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x558]
        add eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [ecx]
        add eax, dword ptr [esp + 0x10]
        add eax, dword ptr [esp + 0x18]
        push eax
        mov eax, dword ptr [edx + 0x8]
        push 0x0
        call eax
        push 0x93c160
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x558]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xc]
        lea eax, [esp + 0x30]
        push eax
        mov dword ptr [esp + 0x74], 0x0
        call edx
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x70], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_00478F36:
        mov eax, dword ptr [mem_00A9FAB0]
        mov ebp, dword ptr [esp + 0x78]
        push eax
        mov ecx, ebp
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x531]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9F58C]
        add esp, 0x8
        push edx
        mov ecx, ebp
        call ext_00640110
        mov edi, eax
        call ext_00679D80
        mov ecx, edi
        mov ebx, eax
        call ext_0063F8D0
        push ebx
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x30]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x74], 0x1
        call ext_00640270
        or ebx, -0x1
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x70], ebx
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [mem_00A9EE88]
        push 0x0
        push ecx
        mov ecx, ebp
        call ext_00640390
        push eax
        lea ecx, [esi + 0x1b0]
        call ext_004BAC60
        cmp dword ptr [esi + 0x558], 0x0
        je L_00479002
        push 0x93c144
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x558]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xc]
        lea eax, [esp + 0x30]
        push eax
        mov dword ptr [esp + 0x74], 0x2
        call edx
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x70], ebx
        call dword ptr [mem_00924FF4]
    L_00479002:
        mov eax, dword ptr [mem_00A9EE9C]
        push 0x0
        push eax
        mov ecx, ebp
        call ext_00640390
        push eax
        mov ecx, esi
        call ext_00477EC0
        cmp dword ptr [esi + 0x558], 0x0
        je L_0047905B
        push 0x93c12c
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x558]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        lea eax, [esp + 0x30]
        push eax
        push 0x0
        mov dword ptr [esp + 0x78], 0x3
        call edx
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x70], ebx
        call dword ptr [mem_00924FF4]
    L_0047905B:
        mov eax, dword ptr [mem_00A9EE90]
        mov edi, dword ptr [esi + 0x24]
        push 0x0
        push eax
        mov ecx, ebp
        call ext_00640390
        mov edx, dword ptr [edi]
        push eax
        mov eax, dword ptr [edx + 0xc]
        mov ecx, edi
        call eax
        cmp dword ptr [esi + 0x558], 0x0
        je L_004790BC
        push 0x93c114
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x558]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        lea eax, [esp + 0x30]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push eax
        mov dword ptr [esp + 0x78], 0x4
        call edx
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x70], ebx
        call dword ptr [mem_00924FF4]
    L_004790BC:
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        je L_0047920A
        mov eax, dword ptr [mem_00A9EDA0]
        push 0x0
        push eax
        mov ecx, ebp
        call ext_00640390
        lea edi, [esi + 0x18]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [edi + 0x4]
        mov eax, dword ptr [eax]
        mov ebx, eax
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], ebx
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_004790F0:
        test edi, edi
        mov ecx, dword ptr [esi + 0x1c]
        lea eax, [esi + 0x18]
        mov dword ptr [esp + 0x2c], ecx
        je L_00479102
        cmp edi, eax
        je L_00479108
    L_00479102:
        call dword ptr [mem_00925134]
    L_00479108:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_00479207
        test edi, edi
        jne L_0047911C
        call dword ptr [mem_00925134]
    L_0047911C:
        cmp ebx, dword ptr [edi + 0x4]
        jne L_00479127
        call dword ptr [mem_00925134]
    L_00479127:
        mov ebp, dword ptr [ebx + 0x28]
        mov edx, dword ptr [mem_00A9ED98]
        mov edi, dword ptr [ebp]
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        add edi, 0xc
        call ext_006404E0
        push eax
        mov eax, dword ptr [edi]
        mov ecx, ebp
        call eax
        cmp dword ptr [esi + 0x558], 0x0
        je L_004791ED
        mov edi, dword ptr [esp + 0x20]
        cmp ebx, dword ptr [edi + 0x4]
        jne L_00479163
        call dword ptr [mem_00925134]
    L_00479163:
        mov ecx, dword ptr [ebx + 0x28]
        cmp byte ptr [ecx + 0x4e2], 0x0
        push 0x93c114
        lea ecx, [esp + 0x34]
        je L_004791B9
        call dword ptr [mem_00924FE4]
        cmp ebx, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x70], 0x5
        jne L_00479191
        call dword ptr [mem_00925134]
    L_00479191:
        mov edx, dword ptr [esi + 0x558]
        mov ecx, dword ptr [ebx + 0x28]
        mov edi, dword ptr [edx]
        lea eax, [esp + 0x30]
        push eax
        add ecx, 0x4
        add edi, 0x10
        call ext_005861D0
        mov ecx, dword ptr [esi + 0x558]
        mov edx, dword ptr [edi]
        push eax
        call edx
        jmp L_004791DB
    L_004791B9:
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x558]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x10]
        lea edx, [esp + 0x30]
        push edx
        push 0x3
        mov dword ptr [esp + 0x78], 0x6
        call eax
    L_004791DB:
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x70], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_004791ED:
        lea ecx, [esp + 0x20]
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        mov ebp, dword ptr [esp + 0x78]
        jmp L_004790F0
    L_00479207:
        or ebx, -0x1
    L_0047920A:
        call ext_00594000
        cmp dword ptr [esi + 0x558], 0x0
        mov edi, eax
        mov dword ptr [esp + 0x18], edi
        je L_00479257
        push 0x93c160
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x558]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        lea eax, [esp + 0x30]
        push eax
        push 0x0
        mov dword ptr [esp + 0x78], 0x7
        call edx
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x70], ebx
        call dword ptr [mem_00924FF4]
    L_00479257:
        test edi, edi
        je L_00479272
        mov eax, dword ptr [mem_00A9F414]
        push 0x0
        push eax
        mov ecx, ebp
        call ext_00640390
        push eax
        mov ecx, edi
        call ext_00585FF0
    L_00479272:
        cmp dword ptr [esi + 0x558], 0x0
        je L_004792B4
        push 0x93c104
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x558]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        lea eax, [esp + 0x30]
        push eax
        push 0x0
        mov dword ptr [esp + 0x78], 0x8
        call edx
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x70], ebx
        call dword ptr [mem_00924FF4]
    L_004792B4:
        test edi, edi
        je L_004792BF
        mov ecx, edi
        call ext_0059B5A0
    L_004792BF:
        mov eax, dword ptr [mem_00A9F1AC]
        push eax
        mov ecx, ebp
        call ext_006404E0
        lea edi, [esi + 0x524]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [edi + 0x4]
        mov eax, dword ptr [eax]
        mov ebx, eax
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], ebx
        jmp L_004792F0
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov edi, edi
    L_004792F0:
        test edi, edi
        mov ecx, dword ptr [esi + 0x528]
        lea eax, [esi + 0x524]
        mov dword ptr [esp + 0x2c], ecx
        je L_00479308
        cmp edi, eax
        je L_0047930E
    L_00479308:
        call dword ptr [mem_00925134]
    L_0047930E:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_004793BA
        mov edx, dword ptr [mem_00A9F1A4]
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        call ext_006404E0
        test edi, edi
        mov ebp, eax
        jne L_00479334
        call dword ptr [mem_00925134]
    L_00479334:
        cmp ebx, dword ptr [edi + 0x4]
        jne L_0047933F
        call dword ptr [mem_00925134]
    L_0047933F:
        mov ecx, dword ptr [ebx + 0x28]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        push ebp
        call edx
        cmp ebx, dword ptr [edi + 0x4]
        jne L_00479355
        call dword ptr [mem_00925134]
    L_00479355:
        cmp dword ptr [esi + 0x558], 0x0
        mov eax, dword ptr [ebx + 0x28]
        mov edi, dword ptr [eax + 0x20]
        je L_004793A0
        push 0x93c104
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x558]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        lea eax, [esp + 0x30]
        push eax
        push edi
        mov dword ptr [esp + 0x78], 0x9
        call edx
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x70], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_004793A0:
        lea ecx, [esp + 0x20]
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        mov ebp, dword ptr [esp + 0x78]
        jmp L_004792F0
    L_004793BA:
        cmp dword ptr [esi + 0x558], 0x0
        je L_00479401
        push 0x93c0e4
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x558]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x10]
        lea edx, [esp + 0x30]
        push edx
        push 0x0
        mov dword ptr [esp + 0x78], 0xa
        call eax
        or edi, -0x1
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x70], edi
        call dword ptr [mem_00924FF4]
        jmp L_00479404
    L_00479401:
        or edi, -0x1
    L_00479404:
        mov ecx, dword ptr [esi + 0x558]
        mov edx, dword ptr [mem_00A9EFB0]
        push ecx
        push 0x0
        push edx
        lea eax, [esi + 0x518]
        push ebp
        push eax
        call ext_00478A10
        add esp, 0x14
        cmp dword ptr [esi + 0x558], 0x0
        je L_00479469
        push 0x93c0c4
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi + 0x520]
        mov ecx, dword ptr [esi + 0x558]
        mov edx, dword ptr [ecx]
        lea ebx, [esp + 0x30]
        push ebx
        push eax
        mov eax, dword ptr [edx + 0x10]
        mov dword ptr [esp + 0x78], 0xb
        call eax
        mov ecx, ebx
        mov dword ptr [esp + 0x70], edi
        call dword ptr [mem_00924FF4]
    L_00479469:
        mov ecx, dword ptr [esi + 0x558]
        push ecx
        push ebp
        lea ecx, [esi + 0x8]
        call ext_004C45F0
        cmp dword ptr [esi + 0x558], 0x0
        je L_004794B9
        push 0x93c0b8
        lea ecx, [esp + 0x50]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x558]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xc]
        lea eax, [esp + 0x4c]
        push eax
        mov dword ptr [esp + 0x74], 0xc
        call edx
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0x70], edi
        call dword ptr [mem_00924FF4]
    L_004794B9:
        cmp dword ptr [esi + 0x514], 0x0
        je L_004794DD
        mov eax, dword ptr [mem_00A9EF6C]
        push 0x0
        push eax
        mov ecx, ebp
        call ext_00640390
        mov ecx, dword ptr [esi + 0x514]
        push eax
        call ext_004B4890
    L_004794DD:
        push ebp
        lea ecx, [esi + 0x238]
        call ext_004D0530
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        je L_00479529
        mov ecx, dword ptr [mem_00A9F084]
        push 0x0
        push ecx
        mov ecx, ebp
        call ext_00640390
        push eax
        lea ecx, [edi + 0x258]
        call ext_00493F20
        mov edx, dword ptr [mem_00A9EEC8]
        push 0x0
        push edx
        mov ecx, ebp
        call ext_00640390
        mov ecx, dword ptr [edi + 0x274]
        push eax
        call ext_00675020
    L_00479529:
        mov ecx, dword ptr [esi + 0x28]
        push ebp
        call ext_004C43E0
        mov ecx, dword ptr [esp + 0x68]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x64
        ret 0x4
    }
}
