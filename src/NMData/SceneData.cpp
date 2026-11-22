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

// [0x0047DD50] NMData::SceneData::vfunc_1 (7955 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_0041A920();
extern "C" void ext_004275C0();
extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_00427A60();
extern "C" void ext_004796D0();
extern "C" void ext_004797D0();
extern "C" void ext_00479890();
extern "C" void ext_00479990();
extern "C" void ext_0047A040();
extern "C" void ext_0047B1E0();
extern "C" void ext_0047B370();
extern "C" void ext_0047B500();
extern "C" void ext_0047B6A0();
extern "C" void ext_0047B830();
extern "C" void ext_0047B9C0();
extern "C" void ext_0047BB50();
extern "C" void ext_0047BCE0();
extern "C" void ext_0047BE70();
extern "C" void ext_0047C0B0();
extern "C" void ext_0047C190();
extern "C" void ext_0047C480();
extern "C" void ext_0047CAD0();
extern "C" void ext_0047D300();
extern "C" void ext_0047D720();
extern "C" void ext_00493F40();
extern "C" void ext_004AC5A0();
extern "C" void ext_004B58C0();
extern "C" void ext_004BD0A0();
extern "C" void ext_004C4440();
extern "C" void ext_004C4A40();
extern "C" void ext_004D0760();
extern "C" void ext_0053F5F0();
extern "C" void ext_00559790();
extern "C" void ext_00587450();
extern "C" void ext_00589D40();
extern "C" void ext_0059A8D0();
extern "C" void ext_005A0910();
extern "C" void ext_005A9110();
extern "C" void ext_005AE480();
extern "C" void ext_005B0CA0();
extern "C" void ext_0063EA50();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_00668150();
extern "C" void ext_006690D0();
extern "C" void ext_00669370();
extern "C" void ext_00669A90();
extern "C" void ext_006755F0();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6E9E();
extern "C" int mem_00883DD8;
extern "C" int mem_00924FD4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FEC;
extern "C" int mem_00924FF0;
extern "C" int mem_009251E4;
extern "C" int mem_00928B5D;
extern "C" int mem_0092A0D0;
extern "C" int mem_00934424;
extern "C" int mem_0093C170;
extern "C" int mem_0093C1E4;
extern "C" int mem_0093C1F8;
extern "C" int mem_0093C20C;
extern "C" int mem_0093C220;
extern "C" int mem_0093C240;
extern "C" int mem_0093C25C;
extern "C" int mem_0093C270;
extern "C" int mem_0093C288;
extern "C" int mem_00A2E914;
extern "C" int mem_00A32928;
extern "C" int mem_00A9ED2C;
extern "C" int mem_00A9ED30;
extern "C" int mem_00A9ED58;
extern "C" int mem_00A9ED64;
extern "C" int mem_00A9EDAC;
extern "C" int mem_00A9EE2C;
extern "C" int mem_00A9EF28;
extern "C" int mem_00A9EF2C;
extern "C" int mem_00A9EFB8;
extern "C" int mem_00A9F1C0;
extern "C" int mem_00A9F218;
extern "C" int mem_00A9F240;
extern "C" int mem_00A9F244;
extern "C" int mem_00A9F270;
extern "C" int mem_00A9F274;
extern "C" int mem_00A9F314;
extern "C" int mem_00A9F318;
extern "C" int mem_00A9F358;
extern "C" int mem_00A9F3DC;
extern "C" int mem_00A9F480;
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F8E8;
extern "C" int mem_00ADF3CC;
extern "C" int mem_00B53A34;
extern "C" int mem_00B53A70;
extern "C" int mem_00B53AB0;
extern "C" int mem_00B53AF0;
extern "C" int mem_00B53B30;

extern "C" __declspec(naked) void __fastcall fn_0047DD50(void* self, int edx_unused, void* arg) {
    __asm {
        push -0x1
        push offset mem_00883DD8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xa4
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr [esp + 0x14], ebx
        call ext_0047CAD0
        mov ecx, dword ptr [ebx + 0x558]
        mov ebp, dword ptr [esp + 0xc4]
        xor edi, edi
        cmp ecx, edi
        je L_0047DDDC
        mov eax, dword ptr [ebp + 0x5c]
        mov edx, dword ptr [ebp + 0x50]
        mov esi, dword ptr [ecx]
        sub eax, edx
        push eax
        mov eax, dword ptr [esi + 0x8]
        push edi
        call eax
        push offset mem_0093C288
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [ebx + 0x558]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        lea eax, [esp + 0x38]
        push eax
        push edi
        mov dword ptr [esp + 0xc4], edi
        call edx
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_0047DDDC:
        mov eax, dword ptr [mem_00A9F8E8]
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x2c], edi
        call ext_0063EFE0
        lea ecx, [esp + 0x18]
        push ecx
        lea edx, [esp + 0x2c]
        push edx
        mov dword ptr [esp + 0x20], eax
        call ext_0053F5F0
        mov eax, dword ptr [esp + 0x30]
        mov dword ptr [ebx + 0x538], eax
        mov ecx, dword ptr [mem_00A9FAB0]
        add esp, 0x8
        push ecx
        mov ecx, ebp
        call ext_0063EFE0
        cmp eax, offset mem_00B53A34
        je L_0047DE56
        cmp eax, offset mem_00B53B30
        je L_0047DE56
        cmp eax, offset mem_00B53AB0
        je L_0047DE56
        cmp eax, offset mem_00B53A70
        je L_0047DE56
        cmp eax, offset mem_00B53AF0
        je L_0047DE56
        lea edx, [esp + 0x18]
        mov dword ptr [esp + 0x18], eax
        push edx
        lea eax, [ebx + 0x531]
        push eax
        call ext_00427640
        add esp, 0x8
    L_0047DE56:
        mov ecx, dword ptr [mem_00A9F58C]
        push ecx
        mov ecx, ebp
        call ext_0063EFE0
        cmp eax, offset mem_00B53A34
        je L_0047DE99
        cmp eax, offset mem_00B53B30
        je L_0047DE99
        cmp eax, offset mem_00B53AB0
        je L_0047DE99
        cmp eax, offset mem_00B53A70
        je L_0047DE99
        cmp eax, offset mem_00B53AF0
        je L_0047DE99
        push eax
        lea edx, [ebx + 0x53c]
        push edx
        call ext_004275E0
        add esp, 0x8
        jmp L_0047DEAB
    L_0047DE99:
        call ext_00679D80
        push eax
        lea ecx, [ebx + 0x53c]
        call dword ptr [mem_00924FD4]
    L_0047DEAB:
        push 0x1
        mov byte ptr [ebx + 0x530], 0x0
        mov eax, dword ptr [mem_00A9EE88]
        push edi
        push eax
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047DEE5
        cmp eax, offset mem_00B53B30
        je L_0047DEE5
        cmp eax, offset mem_00B53AB0
        je L_0047DEE5
        cmp eax, offset mem_00B53A70
        je L_0047DEE5
        cmp eax, offset mem_00B53AF0
        jne L_0047DEEC
    L_0047DEE5:
        mov esi, offset mem_00B53B30
        jmp L_0047DEEE
    L_0047DEEC:
        mov esi, eax
    L_0047DEEE:
        mov ecx, esi
        call ext_0063EA50
        test al, al
        jne L_0047DF0C
        push esi
        lea ecx, [ebx + 0x1b0]
        call ext_004BD0A0
        mov byte ptr [ebx + 0x530], 0x1
    L_0047DF0C:
        cmp dword ptr [ebx + 0x558], edi
        je L_0047DF61
        mov eax, dword ptr [esi + 0x5c]
        sub eax, dword ptr [esi + 0x50]
        push offset mem_0093C270
        add eax, 0x28
        lea ecx, [esp + 0x3c]
        mov esi, eax
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [ebx + 0x558]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        lea eax, [esp + 0x38]
        push eax
        push esi
        mov dword ptr [esp + 0xc4], 0x1
        call edx
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_0047DF61:
        call ext_006690D0
        push 0x1
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [mem_00A9EE90]
        push edi
        push eax
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047DF9D
        cmp eax, offset mem_00B53B30
        je L_0047DF9D
        cmp eax, offset mem_00B53AB0
        je L_0047DF9D
        cmp eax, offset mem_00B53A70
        je L_0047DF9D
        cmp eax, offset mem_00B53AF0
        jne L_0047DFA4
    L_0047DF9D:
        mov edi, offset mem_00B53B30
        jmp L_0047DFA6
    L_0047DFA4:
        mov edi, eax
    L_0047DFA6:
        cmp edi, offset mem_00B53A34
        je L_0047DFDE
        cmp edi, offset mem_00B53B30
        je L_0047DFDE
        cmp edi, offset mem_00B53AB0
        je L_0047DFDE
        cmp edi, offset mem_00B53A70
        je L_0047DFDE
        cmp edi, offset mem_00B53AF0
        je L_0047DFDE
        mov ecx, dword ptr [ebx + 0x24]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        push edi
        call eax
        jmp L_0047E07A
    L_0047DFDE:
        push offset mem_00934424
        lea ecx, [esp + 0x80]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [mem_00A9ED58]
        push ecx
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0xc0], 0x2
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [ebx + 0x24]
        lea edx, [esp + 0x7c]
        push edx
        lea eax, [esp + 0x3c]
        push eax
        lea ecx, [esp + 0x5c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        mov byte ptr [esp + 0xc8], 0x3
        call ext_00669A90
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x1c]
        mov ecx, esi
        mov byte ptr [esp + 0xc0], 0x4
        call eax
        lea ecx, [esp + 0x54]
        mov byte ptr [esp + 0xbc], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0xbc], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x7c]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_0047E07A:
        push offset mem_00934424
        lea ecx, [esp + 0x80]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [ebx + 0x24]
        mov edx, dword ptr [ecx + 0x4]
        mov edx, dword ptr [edx + 0x5c]
        add ecx, 0x4
        lea eax, [esp + 0x7c]
        push eax
        mov dword ptr [esp + 0xc0], 0x5
        call edx
        lea ecx, [esp + 0x7c]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [ebx + 0x24]
        mov byte ptr [eax + 0x4e1], 0x0
        cmp dword ptr [ebx + 0x558], 0x0
        je L_0047E11D
        push offset mem_0093C170
        lea ecx, [esp + 0x80]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [edi + 0x5c]
        mov edi, dword ptr [edi + 0x50]
        mov ecx, dword ptr [ebx + 0x558]
        mov edx, dword ptr [ecx]
        lea esi, [esp + 0x7c]
        sub eax, edi
        push esi
        push eax
        mov eax, dword ptr [edx + 0x10]
        mov dword ptr [esp + 0xc4], 0x6
        call eax
        mov ecx, esi
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_0047E11D:
        mov eax, dword ptr [ebx + 0x1c]
        mov ecx, dword ptr [eax]
        lea esi, [ebx + 0x18]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005A0910
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        push 0x1
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [mem_00A9ED98]
        push 0x0
        push eax
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047E18A
        cmp eax, offset mem_00B53B30
        je L_0047E18A
        cmp eax, offset mem_00B53AB0
        je L_0047E18A
        cmp eax, offset mem_00B53A70
        je L_0047E18A
        cmp eax, offset mem_00B53AF0
        jne L_0047E191
    L_0047E18A:
        mov esi, offset mem_00B53B30
        jmp L_0047E193
    L_0047E191:
        mov esi, eax
    L_0047E193:
        mov ecx, dword ptr [mem_00A9EDA0]
        push 0x1
        push 0x0
        push ecx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047E1C8
        cmp eax, offset mem_00B53B30
        je L_0047E1C8
        cmp eax, offset mem_00B53AB0
        je L_0047E1C8
        cmp eax, offset mem_00B53A70
        je L_0047E1C8
        cmp eax, offset mem_00B53AF0
        jne L_0047E1CD
    L_0047E1C8:
        mov eax, offset mem_00B53B30
    L_0047E1CD:
        cmp esi, offset mem_00B53A34
        mov ebp, dword ptr [mem_00925134]
        je L_0047E230
        cmp esi, offset mem_00B53B30
        je L_0047E230
        cmp esi, offset mem_00B53AB0
        je L_0047E230
        cmp esi, offset mem_00B53A70
        je L_0047E230
        cmp esi, offset mem_00B53AF0
        je L_0047E230
        cmp eax, offset mem_00B53A34
        je L_0047E21E
        cmp eax, offset mem_00B53B30
        je L_0047E21E
        cmp eax, offset mem_00B53AB0
        je L_0047E21E
        cmp eax, offset mem_00B53A70
        je L_0047E21E
        cmp eax, offset mem_00B53AF0
        jne L_0047E230
    L_0047E21E:
        mov edx, dword ptr [esp + 0x28]
        push edx
        push esi
        mov ecx, ebx
        call ext_0047A040
        jmp L_0047E585
    L_0047E230:
        cmp eax, offset mem_00B53A34
        je L_0047E363
        cmp eax, offset mem_00B53B30
        je L_0047E363
        cmp eax, offset mem_00B53AB0
        je L_0047E363
        cmp eax, offset mem_00B53A70
        je L_0047E363
        cmp eax, offset mem_00B53AF0
        je L_0047E363
        mov edi, dword ptr [eax + 0x28]
        cmp edi, dword ptr [eax + 0x2c]
        lea esi, [eax + 0x24]
        jbe L_0047E274
        call ebp
    L_0047E274:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_0047E293
        call ebp
    L_0047E293:
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x2c], esi
        mov dword ptr [esp + 0x30], esi
        mov dword ptr [esp + 0x34], edi
        call ext_00427A60
        mov ebp, dword ptr [esp + 0x28]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_0047E2B0:
        mov edi, dword ptr [esp + 0x1c]
        test edi, edi
        je L_0047E2BE
        cmp edi, dword ptr [esp + 0x30]
        je L_0047E2C4
    L_0047E2BE:
        call dword ptr [mem_00925134]
    L_0047E2C4:
        mov esi, dword ptr [esp + 0x20]
        cmp esi, dword ptr [esp + 0x34]
        je L_0047E30B
        test edi, edi
        jne L_0047E2D8
        call dword ptr [mem_00925134]
    L_0047E2D8:
        cmp esi, dword ptr [edi + 0x8]
        jb L_0047E2E3
        call dword ptr [mem_00925134]
    L_0047E2E3:
        mov eax, dword ptr [esi]
        push ebp
        push eax
        mov ecx, ebx
        call ext_0047A040
        cmp esi, dword ptr [edi + 0x8]
        jb L_0047E2F9
        call dword ptr [mem_00925134]
    L_0047E2F9:
        add esi, 0x4
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x20], esi
        call ext_00427A60
        jmp L_0047E2B0
    L_0047E30B:
        cmp dword ptr [ebx + 0x558], 0x0
        je L_0047E585
        push offset mem_0093C25C
        lea ecx, [esp + 0x80]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [ebx + 0x558]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        lea eax, [esp + 0x7c]
        push eax
        push 0x0
        mov dword ptr [esp + 0xc4], 0x7
        call edx
        lea ecx, [esp + 0x7c]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
        jmp L_0047E585
    L_0047E363:
        mov eax, dword ptr [mem_00A9ED98]
        push eax
        lea ecx, [esp + 0x80]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x7c]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push 0x0
        mov dword ptr [esp + 0xc4], 0x8
        call ext_00668150
        lea ecx, [esp + 0x7c]
        mov ebp, eax
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp dword ptr [ebp + 0xc], 0x0
        je L_0047E585
        mov eax, dword ptr [ebp + 0x8]
        mov edi, dword ptr [eax]
        mov dword ptr [esp + 0x10], 0x0
        push 0x65c
        mov dword ptr [esp + 0xc0], 0x9
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov byte ptr [esp + 0xbc], 0xa
        je L_0047E3F2
        mov ecx, eax
        call ext_005A9110
        mov esi, eax
        jmp L_0047E3F4
    L_0047E3F2:
        xor esi, esi
    L_0047E3F4:
        push offset mem_00928B5D
        lea ecx, [esp + 0x3c]
        mov byte ptr [esp + 0xc0], 0x9
        mov dword ptr [esp + 0x14], esi
        call dword ptr [mem_00924FE4]
        cmp edi, dword ptr [ebp + 0x8]
        mov byte ptr [esp + 0xbc], 0xb
        jne L_0047E422
        call dword ptr [mem_00925134]
    L_0047E422:
        lea edx, [esp + 0x38]
        push edx
        lea eax, [esp + 0x9c]
        lea ebx, [edi + 0x28]
        push eax
        mov ecx, ebx
        call ext_00669370
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x1c]
        mov ecx, esi
        mov byte ptr [esp + 0xc0], 0xc
        call eax
        lea ecx, [esp + 0x98]
        mov byte ptr [esp + 0xbc], 0xb
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0xbc], 0x9
        call dword ptr [mem_00924FF4]
        cmp edi, dword ptr [ebp + 0x8]
        jne L_0047E47D
        call dword ptr [mem_00925134]
    L_0047E47D:
        lea eax, [edi + 0x44]
        push eax
        lea ecx, [esi + 0x474]
        mov dword ptr [esp + 0x1c], eax
        call dword ptr [mem_00924FDC]
        push offset mem_00928B5D
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924FE4]
        cmp edi, dword ptr [ebp + 0x8]
        mov byte ptr [esp + 0xbc], 0xd
        jne L_0047E4B3
        call dword ptr [mem_00925134]
    L_0047E4B3:
        lea ecx, [esp + 0x38]
        push ecx
        lea edx, [esp + 0x9c]
        push edx
        mov ecx, ebx
        call ext_00669370
        push eax
        lea ecx, [esi + 0x490]
        mov byte ptr [esp + 0xc0], 0xe
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x98]
        mov byte ptr [esp + 0xbc], 0xd
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0xbc], 0x9
        call dword ptr [mem_00924FF4]
        cmp edi, dword ptr [ebp + 0x8]
        lea ebx, [esi + 0x4]
        jne L_0047E511
        call dword ptr [mem_00925134]
    L_0047E511:
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x5c]
        push ecx
        mov ecx, ebx
        call edx
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, ebx
        call edx
        push eax
        lea ecx, [esp + 0x58]
        call dword ptr [mem_00924FE0]
        push esi
        sub esp, 0x1c
        lea eax, [esp + 0x74]
        mov ecx, esp
        mov dword ptr [esp + 0x38], esp
        push eax
        mov byte ptr [esp + 0xe0], 0xf
        mov dword ptr [esp + 0x34], 0x0
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x34]
        add ecx, 0x18
        call ext_004796D0
        lea ecx, [esp + 0x54]
        mov byte ptr [esp + 0xbc], 0x9
        call dword ptr [mem_00924FF4]
        mov ebx, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0xbc], 0xffffffff
    L_0047E585:
        mov eax, dword ptr [ebx + 0x528]
        mov ecx, dword ptr [eax]
        lea edi, [ebx + 0x524]
        push eax
        push edi
        push ecx
        push edi
        mov ecx, edi
        call ext_005A0910
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, edi
        call ext_005AE480
        mov eax, dword ptr [edi + 0x4]
        mov esi, dword ptr [esp + 0xc4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [edi + 0x4]
        xor ebp, ebp
        mov dword ptr [edi + 0x8], ebp
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        push 0x1
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [mem_00A9F1AC]
        push ebp
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047E5FC
        cmp eax, offset mem_00B53B30
        je L_0047E5FC
        cmp eax, offset mem_00B53AB0
        je L_0047E5FC
        cmp eax, offset mem_00B53A70
        je L_0047E5FC
        cmp eax, offset mem_00B53AF0
        jne L_0047E601
    L_0047E5FC:
        mov eax, offset mem_00B53B30
    L_0047E601:
        cmp eax, offset mem_00B53A34
        mov dword ptr [esp + 0x24], eax
        je L_0047E7F4
        cmp eax, offset mem_00B53B30
        je L_0047E7F4
        cmp eax, offset mem_00B53AB0
        je L_0047E7D4
        cmp eax, offset mem_00B53A70
        je L_0047E7D4
        cmp eax, offset mem_00B53AF0
        je L_0047E7D4
        mov ebx, dword ptr [eax + 0x28]
        cmp ebx, dword ptr [eax + 0x2c]
        lea esi, [eax + 0x24]
        jbe L_0047E64D
        call dword ptr [mem_00925134]
    L_0047E64D:
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x2c], esi
        mov dword ptr [esp + 0x30], esi
        mov dword ptr [esp + 0x34], ebx
        call ext_00427A60
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_0047E670
        call dword ptr [mem_00925134]
    L_0047E670:
        mov dword ptr [esp + 0x70], esi
        mov dword ptr [esp + 0x74], esi
        mov dword ptr [esp + 0x78], ebx
        lea ecx, [esp + 0x70]
    L_0047E680:
        call ext_00427A60
        mov ebx, dword ptr [esp + 0x30]
        test ebx, ebx
        je L_0047E693
        cmp ebx, dword ptr [esp + 0x74]
        je L_0047E699
    L_0047E693:
        call dword ptr [mem_00925134]
    L_0047E699:
        mov ebp, dword ptr [esp + 0x34]
        cmp ebp, dword ptr [esp + 0x78]
        je L_0047E784
        mov dword ptr [esp + 0x10], 0x0
        push 0x84
        mov dword ptr [esp + 0xc0], 0x10
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov byte ptr [esp + 0xbc], 0x11
        je L_0047E6E2
        mov ecx, eax
        call ext_005B0CA0
        mov esi, eax
        jmp L_0047E6E4
    L_0047E6E2:
        xor esi, esi
    L_0047E6E4:
        test ebx, ebx
        mov byte ptr [esp + 0xbc], 0x10
        mov dword ptr [esp + 0x10], esi
        jne L_0047E6FA
        call dword ptr [mem_00925134]
    L_0047E6FA:
        cmp ebp, dword ptr [ebx + 0x8]
        jb L_0047E705
        call dword ptr [mem_00925134]
    L_0047E705:
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov ecx, esi
        call eax
        lea ecx, [esi + 0x64]
        push ecx
        lea ecx, [esp + 0x58]
        call dword ptr [mem_00924FE0]
        push esi
        sub esp, 0x1c
        lea edx, [esp + 0x74]
        mov ecx, esp
        mov dword ptr [esp + 0x38], esp
        push edx
        mov byte ptr [esp + 0xe0], 0x12
        mov dword ptr [esp + 0x34], 0x0
        call dword ptr [mem_00924FE0]
        mov ecx, edi
        call ext_00479990
        lea ecx, [esp + 0x54]
        mov byte ptr [esp + 0xbc], 0x10
        call dword ptr [mem_00924FF4]
        cmp ebp, dword ptr [ebx + 0x8]
        mov dword ptr [esp + 0xbc], 0xffffffff
        jb L_0047E774
        call dword ptr [mem_00925134]
    L_0047E774:
        add ebp, 0x4
        mov dword ptr [esp + 0x34], ebp
        lea ecx, [esp + 0x2c]
        jmp L_0047E680
    L_0047E784:
        mov eax, dword ptr [esp + 0x14]
        cmp dword ptr [eax + 0x558], 0x0
        je L_0047E9A3
        push offset mem_0093C240
        lea ecx, [esp + 0x58]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [ecx + 0x50]
        mov eax, dword ptr [ecx + 0x5c]
        mov ecx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ecx + 0x558]
        mov esi, dword ptr [ecx]
        lea edi, [esp + 0x54]
        sub eax, edx
        mov edx, dword ptr [esi + 0x10]
        mov dword ptr [esp + 0xbc], 0x13
        push edi
        jmp L_0047E98B
    L_0047E7D4:
        cmp eax, offset mem_00B53B30
        je L_0047E7F4
        cmp eax, offset mem_00B53AB0
        je L_0047E7F4
        cmp eax, offset mem_00B53A70
        je L_0047E7F4
        cmp eax, offset mem_00B53AF0
        jne L_0047E9A3
    L_0047E7F4:
        mov eax, dword ptr [mem_00A9F1A4]
        push 0x1
        push ebp
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047E827
        cmp eax, offset mem_00B53B30
        je L_0047E827
        cmp eax, offset mem_00B53AB0
        je L_0047E827
        cmp eax, offset mem_00B53A70
        je L_0047E827
        cmp eax, offset mem_00B53AF0
        jne L_0047E82E
    L_0047E827:
        mov esi, offset mem_00B53B30
        jmp L_0047E830
    L_0047E82E:
        mov esi, eax
    L_0047E830:
        cmp esi, offset mem_00B53A34
        je L_0047E94E
        cmp esi, offset mem_00B53B30
        je L_0047E94E
        cmp esi, offset mem_00B53AB0
        je L_0047E94E
        cmp esi, offset mem_00B53A70
        je L_0047E94E
        cmp esi, offset mem_00B53AF0
        je L_0047E94E
        mov dword ptr [esp + 0x10], ebp
        push 0x84
        mov dword ptr [esp + 0xc0], 0x14
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x18], eax
        cmp eax, ebp
        mov byte ptr [esp + 0xbc], 0x15
        je L_0047E8A1
        mov ecx, eax
        call ext_005B0CA0
        mov ebp, eax
    L_0047E8A1:
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov ecx, ebp
        mov byte ptr [esp + 0xc0], 0x14
        mov dword ptr [esp + 0x14], ebp
        call eax
        lea ecx, [ebp + 0x64]
        push ecx
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0xbc], 0x16
        call dword ptr [mem_00924FEC]
        test al, al
        je L_0047E90D
        mov eax, dword ptr [ebx + 0x1c]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebx + 0x1c]
        mov dword ptr [esp + 0x1c], eax
        jne L_0047E8F4
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x1c]
    L_0047E8F4:
        mov eax, dword ptr [eax + 0x28]
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [edx + 0x24]
        call eax
        push eax
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924FDC]
    L_0047E90D:
        push ebp
        sub esp, 0x1c
        lea edx, [esp + 0x58]
        mov ecx, esp
        mov dword ptr [esp + 0x38], esp
        push edx
        mov dword ptr [esp + 0x34], 0x0
        call dword ptr [mem_00924FE0]
        mov ecx, edi
        call ext_00479990
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0xbc], 0x14
        call dword ptr [mem_00924FF4]
        mov dword ptr [esp + 0xbc], 0xffffffff
    L_0047E94E:
        cmp dword ptr [ebx + 0x558], 0x0
        je L_0047E9A3
        push offset mem_0093C240
        lea ecx, [esp + 0x58]
        call dword ptr [mem_00924FE4]
        mov ebx, dword ptr [ebx + 0x558]
        mov eax, dword ptr [esi + 0x5c]
        mov esi, dword ptr [esi + 0x50]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 0x10]
        lea ecx, [esp + 0x54]
        push ecx
        mov dword ptr [esp + 0xc0], 0x17
        sub eax, esi
        mov ecx, ebx
    L_0047E98B:
        push eax
        call edx
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_0047E9A3:
        mov eax, dword ptr [mem_00A9F1C0]
        mov ebp, dword ptr [esp + 0xc4]
        push 0x1
        xor edi, edi
        push edi
        push eax
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047E9DF
        cmp eax, offset mem_00B53B30
        je L_0047E9DF
        cmp eax, offset mem_00B53AB0
        je L_0047E9DF
        cmp eax, offset mem_00B53A70
        je L_0047E9DF
        cmp eax, offset mem_00B53AF0
        jne L_0047E9E6
    L_0047E9DF:
        mov esi, offset mem_00B53B30
        jmp L_0047E9E8
    L_0047E9E6:
        mov esi, eax
    L_0047E9E8:
        cmp esi, offset mem_00B53A34
        je L_0047EB87
        cmp esi, offset mem_00B53B30
        je L_0047EB87
        cmp esi, offset mem_00B53AB0
        je L_0047EB87
        cmp esi, offset mem_00B53A70
        je L_0047EB87
        cmp esi, offset mem_00B53AF0
        je L_0047EB87
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924FE8]
        cmp dword ptr [esp + 0x28], 0x5
        mov ebx, 0x18
        mov dword ptr [esp + 0xbc], ebx
        jge L_0047EA6A
        mov ecx, dword ptr [mem_00A9F838]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x98]
        push ecx
        mov ecx, eax
        call edx
        mov byte ptr [esp + 0xbc], 0x19
        jmp L_0047EA90
    L_0047EA6A:
        mov eax, dword ptr [mem_00A9F480]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x98]
        push ecx
        mov ecx, eax
        call edx
        mov byte ptr [esp + 0xbc], 0x1a
    L_0047EA90:
        push eax
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x98]
        mov byte ptr [esp + 0xbc], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_0047EB6C
        push 0x3e8
        call ext_006A5C62
        mov esi, eax
        add esp, 0x4
        mov dword ptr [esp + 0x18], esi
        cmp esi, edi
        mov byte ptr [esp + 0xbc], 0x1b
        je L_0047EB00
        mov ecx, offset mem_00ADF3CC
        call dword ptr [mem_00924FF0]
        push eax
        push edi
        push 0x14
        push edi
        lea eax, [esp + 0x48]
        push eax
        mov ecx, esi
        call ext_004AC5A0
        mov esi, eax
        jmp L_0047EB02
    L_0047EB00:
        xor esi, esi
    L_0047EB02:
        mov dword ptr [esp + 0x18], esi
        mov ecx, dword ptr [mem_00A9F1C0]
        push 0x1
        push edi
        push ecx
        mov ecx, ebp
        mov byte ptr [esp + 0xc8], 0x1c
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047EB42
        cmp eax, offset mem_00B53B30
        je L_0047EB42
        cmp eax, offset mem_00B53AB0
        je L_0047EB42
        cmp eax, offset mem_00B53A70
        je L_0047EB42
        cmp eax, offset mem_00B53AF0
        jne L_0047EB47
    L_0047EB42:
        mov eax, offset mem_00B53B30
    L_0047EB47:
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x54]
        mov ecx, esi
        call eax
        mov ebx, dword ptr [esp + 0x14]
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [ebx + 0x30]
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x14], esi
        call ext_0041A920
        jmp L_0047EB70
    L_0047EB6C:
        mov ebx, dword ptr [esp + 0x14]
    L_0047EB70:
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
        jmp L_0047EB8B
    L_0047EB87:
        mov ebx, dword ptr [esp + 0x14]
    L_0047EB8B:
        mov edx, dword ptr [mem_00A9F244]
        push 0x1
        push edi
        push edx
        mov ecx, ebp
        mov dword ptr [esp + 0x1c], 0x7fffffff
        mov dword ptr [esp + 0x30], edi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047EBCB
        cmp eax, offset mem_00B53B30
        je L_0047EBCB
        cmp eax, offset mem_00B53AB0
        je L_0047EBCB
        cmp eax, offset mem_00B53A70
        je L_0047EBCB
        cmp eax, offset mem_00B53AF0
        jne L_0047EBD0
    L_0047EBCB:
        mov eax, offset mem_00B53B30
    L_0047EBD0:
        mov eax, dword ptr [eax + 0x5c]
        mov dword ptr [esp + 0x18], eax
        cmp eax, edi
        lea eax, [esp + 0x24]
        jl L_0047EBE3
        lea eax, [esp + 0x18]
    L_0047EBE3:
        mov edi, dword ptr [eax]
        mov eax, dword ptr [mem_00A9F244]
        push 0x1
        push 0x0
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x30], edi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047EC1D
        cmp eax, offset mem_00B53B30
        je L_0047EC1D
        cmp eax, offset mem_00B53AB0
        je L_0047EC1D
        cmp eax, offset mem_00B53A70
        je L_0047EC1D
        cmp eax, offset mem_00B53AF0
        jne L_0047EC22
    L_0047EC1D:
        mov eax, offset mem_00B53B30
    L_0047EC22:
        mov eax, dword ptr [eax + 0x50]
        mov dword ptr [esp + 0x18], eax
        cmp eax, 0x7fffffff
        lea eax, [esp + 0x10]
        jg L_0047EC38
        lea eax, [esp + 0x18]
    L_0047EC38:
        mov ecx, dword ptr [mem_00A9EF2C]
        mov esi, dword ptr [eax]
        push 0x1
        push 0x0
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x1c], esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047EC73
        cmp eax, offset mem_00B53B30
        je L_0047EC73
        cmp eax, offset mem_00B53AB0
        je L_0047EC73
        cmp eax, offset mem_00B53A70
        je L_0047EC73
        cmp eax, offset mem_00B53AF0
        jne L_0047EC78
    L_0047EC73:
        mov eax, offset mem_00B53B30
    L_0047EC78:
        mov eax, dword ptr [eax + 0x5c]
        mov dword ptr [esp + 0x18], eax
        cmp eax, edi
        lea eax, [esp + 0x24]
        jl L_0047EC8B
        lea eax, [esp + 0x18]
    L_0047EC8B:
        mov edx, dword ptr [mem_00A9EF2C]
        mov edi, dword ptr [eax]
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        mov dword ptr [esp + 0x30], edi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047ECC6
        cmp eax, offset mem_00B53B30
        je L_0047ECC6
        cmp eax, offset mem_00B53AB0
        je L_0047ECC6
        cmp eax, offset mem_00B53A70
        je L_0047ECC6
        cmp eax, offset mem_00B53AF0
        jne L_0047ECCB
    L_0047ECC6:
        mov eax, offset mem_00B53B30
    L_0047ECCB:
        mov eax, dword ptr [eax + 0x50]
        mov dword ptr [esp + 0x18], eax
        cmp esi, eax
        lea eax, [esp + 0x10]
        jl L_0047ECDE
        lea eax, [esp + 0x18]
    L_0047ECDE:
        mov esi, dword ptr [eax]
        mov eax, dword ptr [mem_00A9F318]
        push 0x1
        push 0x0
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x1c], esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047ED18
        cmp eax, offset mem_00B53B30
        je L_0047ED18
        cmp eax, offset mem_00B53AB0
        je L_0047ED18
        cmp eax, offset mem_00B53A70
        je L_0047ED18
        cmp eax, offset mem_00B53AF0
        jne L_0047ED1D
    L_0047ED18:
        mov eax, offset mem_00B53B30
    L_0047ED1D:
        mov eax, dword ptr [eax + 0x5c]
        mov dword ptr [esp + 0x18], eax
        cmp eax, edi
        lea eax, [esp + 0x24]
        jl L_0047ED30
        lea eax, [esp + 0x18]
    L_0047ED30:
        mov ecx, dword ptr [mem_00A9F318]
        mov edi, dword ptr [eax]
        push 0x1
        push 0x0
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x30], edi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047ED6B
        cmp eax, offset mem_00B53B30
        je L_0047ED6B
        cmp eax, offset mem_00B53AB0
        je L_0047ED6B
        cmp eax, offset mem_00B53A70
        je L_0047ED6B
        cmp eax, offset mem_00B53AF0
        jne L_0047ED70
    L_0047ED6B:
        mov eax, offset mem_00B53B30
    L_0047ED70:
        mov eax, dword ptr [eax + 0x50]
        mov dword ptr [esp + 0x18], eax
        cmp esi, eax
        lea eax, [esp + 0x10]
        jl L_0047ED83
        lea eax, [esp + 0x18]
    L_0047ED83:
        mov edx, dword ptr [mem_00A9F270]
        mov esi, dword ptr [eax]
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        mov dword ptr [esp + 0x1c], esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047EDBE
        cmp eax, offset mem_00B53B30
        je L_0047EDBE
        cmp eax, offset mem_00B53AB0
        je L_0047EDBE
        cmp eax, offset mem_00B53A70
        je L_0047EDBE
        cmp eax, offset mem_00B53AF0
        jne L_0047EDC3
    L_0047EDBE:
        mov eax, offset mem_00B53B30
    L_0047EDC3:
        mov eax, dword ptr [eax + 0x5c]
        mov dword ptr [esp + 0x18], eax
        cmp eax, edi
        lea eax, [esp + 0x24]
        jl L_0047EDD6
        lea eax, [esp + 0x18]
    L_0047EDD6:
        mov edi, dword ptr [eax]
        mov eax, dword ptr [mem_00A9F270]
        push 0x1
        push 0x0
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x30], edi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047EE10
        cmp eax, offset mem_00B53B30
        je L_0047EE10
        cmp eax, offset mem_00B53AB0
        je L_0047EE10
        cmp eax, offset mem_00B53A70
        je L_0047EE10
        cmp eax, offset mem_00B53AF0
        jne L_0047EE15
    L_0047EE10:
        mov eax, offset mem_00B53B30
    L_0047EE15:
        mov eax, dword ptr [eax + 0x50]
        mov dword ptr [esp + 0x18], eax
        cmp esi, eax
        lea eax, [esp + 0x10]
        jl L_0047EE28
        lea eax, [esp + 0x18]
    L_0047EE28:
        mov ecx, dword ptr [mem_00A9EE9C]
        mov esi, dword ptr [eax]
        push 0x1
        push 0x0
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x1c], esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047EE63
        cmp eax, offset mem_00B53B30
        je L_0047EE63
        cmp eax, offset mem_00B53AB0
        je L_0047EE63
        cmp eax, offset mem_00B53A70
        je L_0047EE63
        cmp eax, offset mem_00B53AF0
        jne L_0047EE68
    L_0047EE63:
        mov eax, offset mem_00B53B30
    L_0047EE68:
        mov eax, dword ptr [eax + 0x5c]
        mov dword ptr [esp + 0x18], eax
        cmp eax, edi
        lea eax, [esp + 0x24]
        jl L_0047EE7B
        lea eax, [esp + 0x18]
    L_0047EE7B:
        mov edx, dword ptr [eax]
        mov eax, dword ptr [mem_00A9EE9C]
        push 0x1
        push 0x0
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x30], edx
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047EEB5
        cmp eax, offset mem_00B53B30
        je L_0047EEB5
        cmp eax, offset mem_00B53AB0
        je L_0047EEB5
        cmp eax, offset mem_00B53A70
        je L_0047EEB5
        cmp eax, offset mem_00B53AF0
        jne L_0047EEBA
    L_0047EEB5:
        mov eax, offset mem_00B53B30
    L_0047EEBA:
        mov eax, dword ptr [eax + 0x50]
        mov dword ptr [esp + 0x18], eax
        cmp esi, eax
        lea eax, [esp + 0x10]
        jl L_0047EECD
        lea eax, [esp + 0x18]
    L_0047EECD:
        cmp dword ptr [ebx + 0x538], 0x12
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [mem_00A9EE9C]
        push 0x1
        push 0x0
        mov dword ptr [esp + 0x18], ecx
        mov ecx, ebp
        push edx
        jge L_0047F0CD
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047EF15
        cmp eax, offset mem_00B53B30
        je L_0047EF15
        cmp eax, offset mem_00B53AB0
        je L_0047EF15
        cmp eax, offset mem_00B53A70
        je L_0047EF15
        cmp eax, offset mem_00B53AF0
        jne L_0047EF1A
    L_0047EF15:
        mov eax, offset mem_00B53B30
    L_0047EF1A:
        mov ecx, dword ptr [mem_00A9F358]
        push 0x0
        push ecx
        lea edi, [ebx + 0x30]
        push edi
        push eax
        call ext_0047B1E0
        mov edx, dword ptr [mem_00A9EE9C]
        add esp, 0x10
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047EF65
        cmp eax, offset mem_00B53B30
        je L_0047EF65
        cmp eax, offset mem_00B53AB0
        je L_0047EF65
        cmp eax, offset mem_00B53A70
        je L_0047EF65
        cmp eax, offset mem_00B53AF0
        jne L_0047EF6A
    L_0047EF65:
        mov eax, offset mem_00B53B30
    L_0047EF6A:
        mov ecx, dword ptr [mem_00A9EFB8]
        push 0x0
        push ecx
        push edi
        push eax
        call ext_0047B370
        mov edx, dword ptr [mem_00A9F244]
        add esp, 0x10
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047EFB2
        cmp eax, offset mem_00B53B30
        je L_0047EFB2
        cmp eax, offset mem_00B53AB0
        je L_0047EFB2
        cmp eax, offset mem_00B53A70
        je L_0047EFB2
        cmp eax, offset mem_00B53AF0
        jne L_0047EFB7
    L_0047EFB2:
        mov eax, offset mem_00B53B30
    L_0047EFB7:
        mov ecx, dword ptr [mem_00A9F240]
        push 0x0
        push ecx
        push edi
        push eax
        call ext_0047B500
        mov edx, dword ptr [mem_00A9EF2C]
        add esp, 0x10
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047EFFF
        cmp eax, offset mem_00B53B30
        je L_0047EFFF
        cmp eax, offset mem_00B53AB0
        je L_0047EFFF
        cmp eax, offset mem_00B53A70
        je L_0047EFFF
        cmp eax, offset mem_00B53AF0
        jne L_0047F004
    L_0047EFFF:
        mov eax, offset mem_00B53B30
    L_0047F004:
        mov ecx, dword ptr [mem_00A9EF28]
        push 0x0
        push ecx
        push edi
        push eax
        call ext_0047B6A0
        mov edx, dword ptr [mem_00A9F318]
        add esp, 0x10
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F04C
        cmp eax, offset mem_00B53B30
        je L_0047F04C
        cmp eax, offset mem_00B53AB0
        je L_0047F04C
        cmp eax, offset mem_00B53A70
        je L_0047F04C
        cmp eax, offset mem_00B53AF0
        jne L_0047F051
    L_0047F04C:
        mov eax, offset mem_00B53B30
    L_0047F051:
        mov ecx, dword ptr [mem_00A9F314]
        push 0x0
        push ecx
        push edi
        push eax
        call ext_0047B830
        mov esi, dword ptr [mem_00A9ED64]
        add esp, 0x10
        cmp dword ptr [esp + 0x28], 0x5
        jl L_0047F077
        mov esi, dword ptr [mem_00A9F274]
    L_0047F077:
        mov edx, dword ptr [mem_00A9F270]
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F0AC
        cmp eax, offset mem_00B53B30
        je L_0047F0AC
        cmp eax, offset mem_00B53AB0
        je L_0047F0AC
        cmp eax, offset mem_00B53A70
        je L_0047F0AC
        cmp eax, offset mem_00B53AF0
        jne L_0047F0B1
    L_0047F0AC:
        mov eax, offset mem_00B53B30
    L_0047F0B1:
        push 0x0
        push esi
        push edi
        push eax
        call ext_0047B9C0
        mov eax, dword ptr [mem_00A9EE9C]
        add esp, 0x10
        push 0x1
        push 0x0
        push eax
        jmp L_0047F29C
    L_0047F0CD:
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F0F5
        cmp eax, offset mem_00B53B30
        je L_0047F0F5
        cmp eax, offset mem_00B53AB0
        je L_0047F0F5
        cmp eax, offset mem_00B53A70
        je L_0047F0F5
        cmp eax, offset mem_00B53AF0
        jne L_0047F0FA
    L_0047F0F5:
        mov eax, offset mem_00B53B30
    L_0047F0FA:
        mov ecx, dword ptr [mem_00A9F358]
        push 0x0
        push ecx
        lea edi, [ebx + 0x30]
        push edi
        push eax
        call ext_0047B1E0
        mov edx, dword ptr [mem_00A9EE9C]
        add esp, 0x10
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F145
        cmp eax, offset mem_00B53B30
        je L_0047F145
        cmp eax, offset mem_00B53AB0
        je L_0047F145
        cmp eax, offset mem_00B53A70
        je L_0047F145
        cmp eax, offset mem_00B53AF0
        jne L_0047F14A
    L_0047F145:
        mov eax, offset mem_00B53B30
    L_0047F14A:
        mov ecx, dword ptr [mem_00A9EFB8]
        push 0x0
        push ecx
        push edi
        push eax
        call ext_0047B370
        mov edx, dword ptr [mem_00A9EE9C]
        add esp, 0x10
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F192
        cmp eax, offset mem_00B53B30
        je L_0047F192
        cmp eax, offset mem_00B53AB0
        je L_0047F192
        cmp eax, offset mem_00B53A70
        je L_0047F192
        cmp eax, offset mem_00B53AF0
        jne L_0047F197
    L_0047F192:
        mov eax, offset mem_00B53B30
    L_0047F197:
        mov ecx, dword ptr [mem_00A9F240]
        push 0x0
        push ecx
        push edi
        push eax
        call ext_0047B500
        mov edx, dword ptr [mem_00A9EE9C]
        add esp, 0x10
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F1DF
        cmp eax, offset mem_00B53B30
        je L_0047F1DF
        cmp eax, offset mem_00B53AB0
        je L_0047F1DF
        cmp eax, offset mem_00B53A70
        je L_0047F1DF
        cmp eax, offset mem_00B53AF0
        jne L_0047F1E4
    L_0047F1DF:
        mov eax, offset mem_00B53B30
    L_0047F1E4:
        mov ecx, dword ptr [mem_00A9EF28]
        push 0x0
        push ecx
        push edi
        push eax
        call ext_0047B6A0
        mov edx, dword ptr [mem_00A9EE9C]
        add esp, 0x10
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F22C
        cmp eax, offset mem_00B53B30
        je L_0047F22C
        cmp eax, offset mem_00B53AB0
        je L_0047F22C
        cmp eax, offset mem_00B53A70
        je L_0047F22C
        cmp eax, offset mem_00B53AF0
        jne L_0047F231
    L_0047F22C:
        mov eax, offset mem_00B53B30
    L_0047F231:
        mov ecx, dword ptr [mem_00A9F314]
        push 0x0
        push ecx
        push edi
        push eax
        call ext_0047B830
        mov edx, dword ptr [mem_00A9EE9C]
        add esp, 0x10
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F279
        cmp eax, offset mem_00B53B30
        je L_0047F279
        cmp eax, offset mem_00B53AB0
        je L_0047F279
        cmp eax, offset mem_00B53A70
        je L_0047F279
        cmp eax, offset mem_00B53AF0
        jne L_0047F27E
    L_0047F279:
        mov eax, offset mem_00B53B30
    L_0047F27E:
        mov ecx, dword ptr [mem_00A9F274]
        push 0x0
        push ecx
        push edi
        push eax
        call ext_0047B9C0
        mov edx, dword ptr [mem_00A9EE9C]
        add esp, 0x10
        push 0x1
        push 0x0
        push edx
    L_0047F29C:
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F2C6
        cmp eax, offset mem_00B53B30
        je L_0047F2C6
        cmp eax, offset mem_00B53AB0
        je L_0047F2C6
        cmp eax, offset mem_00B53A70
        je L_0047F2C6
        cmp eax, offset mem_00B53AF0
        jne L_0047F2CB
    L_0047F2C6:
        mov eax, offset mem_00B53B30
    L_0047F2CB:
        mov ecx, dword ptr [mem_00A9F218]
        push 0x0
        push ecx
        push edi
        push eax
        call ext_0047BB50
        mov edx, dword ptr [mem_00A9EE9C]
        add esp, 0x10
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F313
        cmp eax, offset mem_00B53B30
        je L_0047F313
        cmp eax, offset mem_00B53AB0
        je L_0047F313
        cmp eax, offset mem_00B53A70
        je L_0047F313
        cmp eax, offset mem_00B53AF0
        jne L_0047F318
    L_0047F313:
        mov eax, offset mem_00B53B30
    L_0047F318:
        mov ecx, dword ptr [mem_00A9EE2C]
        push 0x0
        push ecx
        push edi
        push eax
        call ext_0047BCE0
        mov edx, dword ptr [mem_00A9EE9C]
        add esp, 0x10
        push 0x1
        push 0x0
        push edx
        mov ecx, ebp
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F360
        cmp eax, offset mem_00B53B30
        je L_0047F360
        cmp eax, offset mem_00B53AB0
        je L_0047F360
        cmp eax, offset mem_00B53A70
        je L_0047F360
        cmp eax, offset mem_00B53AF0
        jne L_0047F365
    L_0047F360:
        mov eax, offset mem_00B53B30
    L_0047F365:
        mov ecx, dword ptr [mem_00A9ED30]
        push 0x0
        push ecx
        push edi
        push eax
        call ext_0047BE70
        add esp, 0x10
        mov ecx, ebx
        call ext_0047C0B0
        mov edx, dword ptr [ebx + 0x5c]
        mov eax, dword ptr [edx + 0x84]
        lea esi, [ebx + 0x5c]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [mem_00A9EE9C]
        push ecx
        lea ecx, [esp + 0x58]
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x5c]
        lea eax, [esp + 0x54]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0xc0], 0x1d
        call edx
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [ebx + 0x48]
        mov ecx, dword ptr [eax + 0x4]
        lea esi, [ebx + 0x44]
        push ecx
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 0x4]
        mov ebp, dword ptr [mem_00925134]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [eax], eax
        mov esi, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], esi
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_0047F407
        call ebp
    L_0047F407:
        mov ebx, esi
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_0047F410:
        mov esi, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], esi
        jbe L_0047F420
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_0047F420:
        test edi, edi
        je L_0047F428
        cmp edi, edi
        je L_0047F430
    L_0047F428:
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_0047F430:
        cmp ebx, esi
        je L_0047F4E4
        test edi, edi
        jne L_0047F43E
        call ebp
    L_0047F43E:
        cmp ebx, dword ptr [edi + 0x8]
        jb L_0047F445
        call ebp
    L_0047F445:
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        mov esi, eax
        mov ecx, esi
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_0047F4CF
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251E4]
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        call ext_00404F00
        add esp, 0xc
        mov esi, dword ptr [esp + 0x14]
        mov edx, dword ptr [esi + 0x40]
        mov edx, dword ptr [edx]
        add esi, 0x40
        lea eax, [esp + 0x38]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0xc0], 0x1e
        call edx
        test eax, eax
        sete al
        test al, al
        je L_0047F4BA
        cmp ebx, dword ptr [edi + 0x8]
        jb L_0047F4AD
        call dword ptr [mem_00925134]
    L_0047F4AD:
        push ebx
        lea eax, [esp + 0x3c]
        push eax
        mov ecx, esi
        call ext_004797D0
    L_0047F4BA:
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_0047F4CF:
        cmp ebx, dword ptr [edi + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jb L_0047F4DC
        call ebp
    L_0047F4DC:
        add ebx, 0x4
        jmp L_0047F410
    L_0047F4E4:
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_0047F4F0
        call ebp
        _emit 0x8b
        _emit 0xff
    L_0047F4F0:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_0047F4FA
        call ebp
    L_0047F4FA:
        cmp edi, edi
        je L_0047F500
        call ebp
    L_0047F500:
        cmp esi, ebx
        je L_0047F5AE
        cmp esi, dword ptr [edi + 0x8]
        jb L_0047F50F
        call ebp
    L_0047F50F:
        mov ebx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi]
        lea eax, [ebx + 0x5c]
        push eax
        call ext_00587450
        cmp esi, dword ptr [edi + 0x8]
        jb L_0047F525
        call ebp
    L_0047F525:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        mov ecx, eax
        call dword ptr [mem_00924FEC]
        test al, al
        je L_0047F59F
        push offset mem_0092A0D0
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x38]
        push ecx
        mov ecx, ebx
        mov dword ptr [esp + 0xc0], 0x1f
        call ext_0047C190
        cmp esi, dword ptr [edi + 0x8]
        jb L_0047F567
        call ebp
    L_0047F567:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x5c]
        lea eax, [esp + 0x38]
        push eax
        call edx
        cmp esi, dword ptr [edi + 0x8]
        jb L_0047F57C
        call ebp
    L_0047F57C:
        push esi
        lea eax, [esp + 0x3c]
        push eax
        lea ecx, [ebx + 0x40]
        call ext_004797D0
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_0047F59F:
        cmp esi, dword ptr [edi + 0x8]
        jb L_0047F5A6
        call ebp
    L_0047F5A6:
        add esi, 0x4
        jmp L_0047F4F0
    L_0047F5AE:
        call ext_00594000
        mov ebx, eax
        test ebx, ebx
        mov dword ptr [esp + 0x18], ebx
        je L_0047F604
        mov ecx, dword ptr [mem_00A9EE9C]
        push ecx
        lea ecx, [esp + 0x58]
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp + 0x14]
        lea edx, [esi + 0x50]
        push edx
        lea eax, [esp + 0x58]
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0xc4], 0x20
        call ext_0059A8D0
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
        jmp L_0047F608
    L_0047F604:
        mov esi, dword ptr [esp + 0x14]
    L_0047F608:
        cmp dword ptr [esi + 0x558], 0x0
        je L_0047F65B
        push offset mem_0093C220
        lea ecx, [esp + 0x58]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x558]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        lea eax, [esp + 0x54]
        push eax
        mov eax, dword ptr [esp + 0x28]
        sub eax, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0xc0], 0x21
        push eax
        call edx
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_0047F65B:
        mov eax, dword ptr [esp + 0x28]
        cmp eax, 0x1
        jne L_0047F6E1
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_0047F670
        call ebp
        _emit 0x8b
        _emit 0xff
    L_0047F670:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_0047F680
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_0047F680:
        test edi, edi
        je L_0047F688
        cmp edi, edi
        je L_0047F690
    L_0047F688:
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_0047F690:
        cmp esi, ebx
        je L_0047F6E6
        test edi, edi
        jne L_0047F69A
        call ebp
    L_0047F69A:
        cmp esi, dword ptr [edi + 0x8]
        jb L_0047F6A1
        call ebp
    L_0047F6A1:
        mov eax, dword ptr [esi]
        push 0x0
        push offset mem_00A32928
        push offset mem_00A2E914
        push 0x0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_0047F6D5
        cmp dword ptr [eax + 0x180], 0x5
        jne L_0047F6D5
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x138]
        push 0x6
        call eax
    L_0047F6D5:
        cmp esi, dword ptr [edi + 0x8]
        jb L_0047F6DC
        call ebp
    L_0047F6DC:
        add esi, 0x4
        jmp L_0047F670
    L_0047F6E1:
        cmp eax, 0x4
        jge L_0047F6FF
    L_0047F6E6:
        mov ecx, dword ptr [esp + 0x14]
        mov ebx, dword ptr [esp + 0xc4]
        mov dword ptr [ecx + 0x534], 0x3
        mov edi, ecx
        jmp L_0047F768
    L_0047F6FF:
        mov edx, dword ptr [mem_00A9F558]
        mov ebx, dword ptr [esp + 0xc4]
        push edx
        mov ecx, ebx
        call ext_0063EFE0
        mov dword ptr [esp + 0x28], eax
        lea eax, [esp + 0x98]
        push eax
        lea ecx, [esp + 0x2c]
        call ext_004275C0
        mov ecx, eax
        mov dword ptr [esp + 0xbc], 0x22
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251E4]
        mov edi, dword ptr [esp + 0x18]
        add esp, 0x4
        lea ecx, [esp + 0x98]
        mov dword ptr [edi + 0x534], eax
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_0047F768:
        mov ecx, dword ptr [mem_00A9F414]
        push 0x1
        push 0x0
        push ecx
        mov ecx, ebx
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F79D
        cmp eax, offset mem_00B53B30
        je L_0047F79D
        cmp eax, offset mem_00B53AB0
        je L_0047F79D
        cmp eax, offset mem_00B53A70
        je L_0047F79D
        cmp eax, offset mem_00B53AF0
        jne L_0047F7A4
    L_0047F79D:
        mov esi, offset mem_00B53B30
        jmp L_0047F7A6
    L_0047F7A4:
        mov esi, eax
    L_0047F7A6:
        cmp dword ptr [edi + 0x558], 0x0
        je L_0047F7F2
        push offset mem_0093C20C
        lea ecx, [esp + 0x58]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [edi + 0x558]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        lea eax, [esp + 0x54]
        push eax
        push 0x0
        mov dword ptr [esp + 0xc4], 0x23
        call edx
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_0047F7F2:
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        je L_0047F863
        cmp esi, offset mem_00B53A34
        je L_0047F863
        cmp esi, offset mem_00B53B30
        je L_0047F863
        cmp esi, offset mem_00B53AB0
        je L_0047F863
        cmp esi, offset mem_00B53A70
        je L_0047F863
        cmp esi, offset mem_00B53AF0
        je L_0047F863
        mov eax, dword ptr [mem_00A9EDAC]
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F856
        cmp eax, offset mem_00B53B30
        je L_0047F856
        cmp eax, offset mem_00B53AB0
        je L_0047F856
        cmp eax, offset mem_00B53A70
        je L_0047F856
        cmp eax, offset mem_00B53AF0
        jne L_0047F85B
    L_0047F856:
        mov eax, offset mem_00B53B30
    L_0047F85B:
        push eax
        mov ecx, edi
        call ext_00589D40
    L_0047F863:
        mov ecx, dword ptr [mem_00A9EFB0]
        push 0x1
        push 0x0
        push ecx
        mov ecx, ebx
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047F898
        cmp eax, offset mem_00B53B30
        je L_0047F898
        cmp eax, offset mem_00B53AB0
        je L_0047F898
        cmp eax, offset mem_00B53A70
        je L_0047F898
        cmp eax, offset mem_00B53AF0
        jne L_0047F8A2
    L_0047F898:
        mov dword ptr [esp + 0x28], offset mem_00B53B30
        jmp L_0047F8A6
    L_0047F8A2:
        mov dword ptr [esp + 0x28], eax
    L_0047F8A6:
        mov ebx, dword ptr [esp + 0x28]
        mov esi, dword ptr [ebx + 0x28]
        add ebx, 0x24
        cmp esi, dword ptr [ebx + 0x8]
        jbe L_0047F8B7
        call ebp
    L_0047F8B7:
        mov dword ptr [esp + 0x2c], ebx
        mov dword ptr [esp + 0x30], ebx
    L_0047F8BF:
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x34], esi
        call ext_00427A60
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        jbe L_0047F8D6
        call ebp
    L_0047F8D6:
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x70], ebx
        mov dword ptr [esp + 0x74], ebx
        mov dword ptr [esp + 0x78], esi
        call ext_00427A60
        mov edi, dword ptr [esp + 0x30]
        test edi, edi
        je L_0047F8F9
        cmp edi, dword ptr [esp + 0x74]
        je L_0047F8FB
    L_0047F8F9:
        call ebp
    L_0047F8FB:
        mov esi, dword ptr [esp + 0x34]
        cmp esi, dword ptr [esp + 0x78]
        jae L_0047F972
        test edi, edi
        jne L_0047F90B
        call ebp
    L_0047F90B:
        cmp esi, dword ptr [edi + 0x8]
        jb L_0047F912
        call ebp
    L_0047F912:
        mov eax, dword ptr [esi]
        push eax
        call ext_00559790
        add esp, 0x4
        mov dword ptr [esp + 0x10], eax
        cmp esi, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0xbc], 0x24
        push eax
        jb L_0047F934
        call ebp
    L_0047F934:
        mov eax, dword ptr [esi]
        sub esp, 0x1c
        add eax, 0x4
        mov ecx, esp
        mov dword ptr [esp + 0x44], esp
        push eax
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x34]
        add ecx, 0x518
        call ext_00479890
        cmp esi, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0xbc], 0xffffffff
        jb L_0047F96A
        call ebp
    L_0047F96A:
        add esi, 0x4
        jmp L_0047F8BF
    L_0047F972:
        mov edx, dword ptr [esp + 0x14]
        cmp dword ptr [edx + 0x558], 0x0
        je L_0047F9D1
        push offset mem_0093C1F8
        lea ecx, [esp + 0x58]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esp + 0x28]
        mov eax, dword ptr [ecx + 0x5c]
        mov edx, dword ptr [ecx + 0x50]
        mov ebx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ebx + 0x558]
        mov esi, dword ptr [ecx]
        lea edi, [esp + 0x54]
        sub eax, edx
        push edi
        push eax
        mov eax, dword ptr [esi + 0x10]
        mov dword ptr [esp + 0xc4], 0x25
        call eax
        mov ecx, edi
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
        jmp L_0047F9D3
    L_0047F9D1:
        mov ebx, edx
    L_0047F9D3:
        mov ecx, dword ptr [mem_00A9ED2C]
        mov esi, dword ptr [esp + 0xc4]
        push 0x1
        push 0x0
        push ecx
        mov ecx, esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047FA0F
        cmp eax, offset mem_00B53B30
        je L_0047FA0F
        cmp eax, offset mem_00B53AB0
        je L_0047FA0F
        cmp eax, offset mem_00B53A70
        je L_0047FA0F
        cmp eax, offset mem_00B53AF0
        jne L_0047FA14
    L_0047FA0F:
        mov eax, offset mem_00B53B30
    L_0047FA14:
        mov edx, dword ptr [ebx + 0x558]
        push edx
        push eax
        lea ecx, [ebx + 0x8]
        call ext_004C4A40
        cmp dword ptr [ebx + 0x558], 0x0
        je L_0047FA84
        push offset mem_0093C1E4
        lea ecx, [esp + 0x58]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [ebx + 0x558]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x10]
        lea edx, [esp + 0x54]
        push edx
        push 0x0
        mov dword ptr [esp + 0xc4], 0x26
        call eax
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi + 0x5c]
        mov ecx, dword ptr [ebx + 0x558]
        sub eax, dword ptr [esi + 0x50]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x4]
        push eax
        call edx
    L_0047FA84:
        cmp dword ptr [ebx + 0x514], 0x0
        je L_0047FAD2
        mov eax, dword ptr [mem_00A9EF6C]
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047FAC1
        cmp eax, offset mem_00B53B30
        je L_0047FAC1
        cmp eax, offset mem_00B53AB0
        je L_0047FAC1
        cmp eax, offset mem_00B53A70
        je L_0047FAC1
        cmp eax, offset mem_00B53AF0
        jne L_0047FAC6
    L_0047FAC1:
        mov eax, offset mem_00B53B30
    L_0047FAC6:
        mov ecx, dword ptr [ebx + 0x514]
        push eax
        call ext_004B58C0
    L_0047FAD2:
        mov ecx, dword ptr [mem_00A9F3DC]
        push 0x1
        push 0x0
        push ecx
        mov ecx, esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047FB07
        cmp eax, offset mem_00B53B30
        je L_0047FB07
        cmp eax, offset mem_00B53AB0
        je L_0047FB07
        cmp eax, offset mem_00B53A70
        je L_0047FB07
        cmp eax, offset mem_00B53AF0
        jne L_0047FB0C
    L_0047FB07:
        mov eax, offset mem_00B53B30
    L_0047FB0C:
        push eax
        lea ecx, [ebx + 0x238]
        call ext_004D0760
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        je L_0047FBAF
        mov edx, dword ptr [mem_00A9F084]
        push 0x1
        push 0x0
        push edx
        mov ecx, esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047FB59
        cmp eax, offset mem_00B53B30
        je L_0047FB59
        cmp eax, offset mem_00B53AB0
        je L_0047FB59
        cmp eax, offset mem_00B53A70
        je L_0047FB59
        cmp eax, offset mem_00B53AF0
        jne L_0047FB5E
    L_0047FB59:
        mov eax, offset mem_00B53B30
    L_0047FB5E:
        push eax
        lea ecx, [edi + 0x258]
        call ext_00493F40
        mov eax, dword ptr [mem_00A9EEC8]
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L_0047FB9E
        cmp eax, offset mem_00B53B30
        je L_0047FB9E
        cmp eax, offset mem_00B53AB0
        je L_0047FB9E
        cmp eax, offset mem_00B53A70
        je L_0047FB9E
        cmp eax, offset mem_00B53AF0
        jne L_0047FBA3
    L_0047FB9E:
        mov eax, offset mem_00B53B30
    L_0047FBA3:
        mov ecx, dword ptr [edi + 0x274]
        push eax
        call ext_006755F0
    L_0047FBAF:
        mov ecx, dword ptr [ebx + 0x1c]
        mov edi, dword ptr [ecx]
        add ebx, 0x18
        mov esi, ebx
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], edi
    L_0047FBC1:
        test esi, esi
        mov ebp, dword ptr [ebx + 0x4]
        je L_0047FBCC
        cmp esi, ebx
        je L_0047FBD2
    L_0047FBCC:
        call dword ptr [mem_00925134]
    L_0047FBD2:
        cmp edi, ebp
        je L_0047FC23
        test esi, esi
        jne L_0047FBE0
        call dword ptr [mem_00925134]
    L_0047FBE0:
        cmp edi, dword ptr [esi + 0x4]
        jne L_0047FBEB
        call dword ptr [mem_00925134]
    L_0047FBEB:
        mov edx, dword ptr [edi + 0x28]
        mov ebp, dword ptr [esp + 0x14]
        push edx
        mov ecx, ebp
        call ext_0047D300
        cmp edi, dword ptr [esi + 0x4]
        jne L_0047FC05
        call dword ptr [mem_00925134]
    L_0047FC05:
        mov eax, dword ptr [edi + 0x28]
        push eax
        mov ecx, ebp
        call ext_0047C480
        lea ecx, [esp + 0x18]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        jmp L_0047FBC1
    L_0047FC23:
        mov ecx, dword ptr [esp + 0xc4]
        mov esi, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esi + 0x28]
        call ext_004C4440
        mov ecx, esi
        call ext_0047D720
        mov ecx, dword ptr [esp + 0xb4]
        pop edi
        mov dword ptr [esi + 0x558], 0x0
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xb0
        ret 0x4
    }
}
