// Decompiled translation unit: src/classes/ImageExporter.cpp

// [0x0046F6C0] ImageExporter::vfunc_15_off_4 (247 bytes)
extern "C" void ext_0046F6A0();
extern "C" void ext_0046F660();
extern "C" void ext_0046F620();
extern "C" void ext_0046F680();
extern "C" void ext_0046F600();
extern "C" void ext_0046F5E0();
extern "C" void ext_0046F640();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void __fastcall fn_0046F6C0(void* self, int edx_unused, int a1, int key) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x1af
        push esi
        mov dword ptr [esp + 0x4], 0
        jg l_hi
        je l_1af
        sub eax, 0xa9
        je l_a9
        sub eax, 0x64
        je l_10d
        sub eax, 0x3a
        jne l_default

        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F620
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_10d:
        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F660
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_a9:
        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F6A0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_1af:
        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F680
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_hi:
        sub eax, 0x247
        je l_247
        sub eax, 0x21
        je l_268
        sub eax, 0x81
        je l_2e9

l_default:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_2e9:
        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F640
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_268:
        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F5E0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_247:
        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F600
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0046C190] ImageExporter::vfunc_0 (266 bytes)
extern "C" void ext_00662650();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_0046C190(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8828b2
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x8], 0
        je l_fail
        cmp dword ptr [esi + 0x20], 0
        je l_fail
        mov eax, dword ptr [esi + 0x48]
        cmp eax, dword ptr [esi + 0xc]
        jl l_done
        cmp eax, dword ptr [esi + 0x10]
        jg l_done
        push edi
        push 0x929650
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi + 0x48]
        push 0x4
        push eax
        lea ecx, [esp + 0x2c]
        push ecx
        lea edx, [esi + 0x28]
        push edx
        lea eax, [esp + 0x18]
        push eax
        mov dword ptr [esp + 0x5c], 0
        call ext_00662650
        add esp, 0x14
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x48], 2
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esi + 0x24], 0
        je l_branch2
        mov ecx, dword ptr [esi + 0x20]
        mov edi, dword ptr [ecx]
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esi + 0x14]
        mov ecx, dword ptr [esi + 0x20]
        push eax
        mov eax, dword ptr [esi + 0x18]
        push edx
        mov edx, dword ptr [edi + 0x1ac]
        push eax
        call edx
        jmp l_cleanup

l_branch2:
        mov eax, dword ptr [esi + 0x44]
        test eax, eax
        je l_cleanup
        mov edi, dword ptr [eax]
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x44]
        push eax
        mov eax, dword ptr [edi]
        call eax

l_cleanup:
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], -1
        call dword ptr [mem_00924FF4]
        pop edi

l_done:
        mov eax, 1
        add dword ptr [esi + 0x48], eax
        pop esi
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret

l_fail:
        mov ecx, dword ptr [esp + 0x3c]
        xor al, al
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret
    }
}
