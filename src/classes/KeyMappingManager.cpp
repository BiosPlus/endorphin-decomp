// Decompiled translation unit: src/classes/KeyMappingManager.cpp

// [0x0042E920] KeyMappingManager::vfunc_6 (35 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from the C string pointer held in a
// global, via the imported basic_string(const char*) ctor, then returns the buffer in eax.
extern "C" int mem_00A9F024;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_0042E920(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F024]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00428470] KeyMappingManager::vfunc_3 (229 bytes)
extern "C" void ext_00420680();
extern "C" void ext_00427550();
extern "C" void ext_00427BF0();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" int mem_00924FEC;
extern "C" int mem_00A9F5A8;
extern "C" int mem_00924FF0;
extern "C" int mem_00925134;
extern "C" int mem_00924FB0;
extern "C" int mem_00A9F018;
extern "C" __declspec(naked) void __fastcall fn_00428470(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x34]
        mov ecx, edi
        call dword ptr [mem_00924FEC]
        test al, al
        je L_428470_nonempty
        mov eax, dword ptr [mem_00A9F5A8]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        call ext_00640110
        mov ecx, 0xacdab0
        jmp L_428470_join
L_428470_nonempty:
        mov ecx, dword ptr [mem_00A9F5A8]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        call ext_00640110
        mov ecx, edi
L_428470_join:
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
        mov edx, dword ptr [esi + 0x2c]
        mov edi, dword ptr [edx]
        lea ebp, [esi + 0x28]
        mov esi, ebp
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], edi
L_428470_loop:
        test esi, esi
        mov ebx, dword ptr [ebp + 0x4]
        je L_428470_bad
        cmp esi, ebp
        je L_428470_ok
L_428470_bad:
        call dword ptr [mem_00925134]
L_428470_ok:
        cmp edi, ebx
        je L_428470_done
        test esi, esi
        mov ebx, dword ptr [mem_00925134]
        jne L_428470_ok2
        call ebx
L_428470_ok2:
        cmp edi, dword ptr [esi + 0x4]
        jne L_428470_ok3
        call ebx
L_428470_ok3:
        lea eax, [edi + 0x3c]
        push 0xacdab0
        push eax
        call dword ptr [mem_00924FB0]
        add esp, 0x8
        test al, al
        je L_428470_next
        cmp edi, dword ptr [esi + 0x4]
        jne L_428470_ok4
        call ebx
L_428470_ok4:
        mov ecx, dword ptr [mem_00A9F018]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        call ext_006404E0
        push eax
        lea ecx, [edi + 0x28]
        call ext_00427BF0
L_428470_next:
        lea ecx, [esp + 0x10]
        call ext_00420680
        mov edi, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp L_428470_loop
L_428470_done:
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x004272F0] KeyMappingManager::vfunc_9 (126 bytes)
extern "C" void ext_00663DB0();
extern "C" void ext_00663110();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004272F0(void* self, int edx_unused, int a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, dword ptr [esp + 0x34]
        push edi
        mov esi, ecx
        call ext_00663DB0
        add esp, 0x4
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x10]
        push 0x1
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0x0
        call edx
        lea eax, [esp + 0x8]
        push eax
        push edi
        call ext_00663110
        add esp, 0x8
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x8
    }
}

// [0x0042E4B0] KeyMappingManager::vfunc_1 (696 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_00420600();
extern "C" void ext_004275E0();
extern "C" void ext_00427A60();
extern "C" void ext_00428130();
extern "C" void ext_00428560();
extern "C" void ext_0042BD00();
extern "C" void ext_0042C600();
extern "C" void ext_0063EFE0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5E60();
extern "C" void ext_006A6DD2();
extern "C" int mem_00A9F5A8;
extern "C" int mem_00925134;
extern "C" int mem_00924FE8;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD8;
extern "C" int mem_00924ED0;
extern "C" int mem_00924FF0;
extern "C" __declspec(naked) void __fastcall fn_0042E4B0(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        lea ebp, [esp - 0x58]
        sub esp, 0x58
        push -1
        push 0x879bfb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x94
        mov eax, dword ptr [mem_00A9F5A8]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x60]
        push edi
        mov edi, ecx
        mov dword ptr [ebp - 0x10], esp
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0x48], edi
        call ext_0063EFE0
        push eax
        lea ecx, [edi + 0x34]
        push ecx
        call ext_004275E0
        mov ebx, dword ptr [esi + 0x28]
        add esi, 0x24
        add esp, 0x8
        cmp ebx, dword ptr [esi + 0x8]
        jbe L42E50C
        call dword ptr [mem_00925134]
L42E50C:
        lea ecx, [ebp + 0x4c]
        mov dword ptr [ebp + 0x4c], esi
        mov dword ptr [ebp + 0x50], esi
        mov dword ptr [ebp + 0x54], ebx
        call ext_00427A60
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L42E52B
        call dword ptr [mem_00925134]
L42E52B:
        mov dword ptr [ebp + 0x3c], esi
        mov dword ptr [ebp + 0x40], esi
        mov dword ptr [ebp + 0x44], ebx
        lea ecx, [ebp + 0x3c]
L42E537:
        call ext_00427A60
        mov esi, dword ptr [ebp + 0x50]
        test esi, esi
        je L42E548
        cmp esi, dword ptr [ebp + 0x40]
        je L42E54E
L42E548:
        call dword ptr [mem_00925134]
L42E54E:
        mov ebx, dword ptr [ebp + 0x54]
        cmp ebx, dword ptr [ebp + 0x44]
        je L42E747
        lea ecx, [ebp]
        call dword ptr [mem_00924FE8]
        test esi, esi
        mov dword ptr [ebp - 0x4], 0x0
        jne L42E574
        call dword ptr [mem_00925134]
L42E574:
        cmp ebx, dword ptr [esi + 0x8]
        jb L42E57F
        call dword ptr [mem_00925134]
L42E57F:
        mov edx, dword ptr [mem_00A9F838]
        mov ecx, dword ptr [ebx]
        push edx
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [ebp - 0x5c]
        push ecx
        mov ecx, eax
        call edx
        push eax
        lea ecx, [ebp]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FDC]
        lea ecx, [ebp - 0x5c]
        mov byte ptr [ebp - 0x4], 0x0
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [edi + 0x24]
        mov edx, dword ptr [eax]
        lea esi, [edi + 0x24]
        push 0xacdab0
        mov ecx, esi
        call edx
        test eax, eax
        je L42E720
        lea ecx, [ebp]
        push ecx
        push eax
        push edi
        lea ecx, [ebp - 0x40]
        call ext_0042BD00
        mov edx, dword ptr [ebp + 0x50]
        cmp ebx, dword ptr [edx + 0x8]
        mov byte ptr [ebp - 0x4], 0x3
        jb L42E5EE
        call dword ptr [mem_00925134]
L42E5EE:
        mov eax, dword ptr [ebx]
        push edi
        push eax
        lea ecx, [ebp - 0x40]
        call ext_00428560
        lea eax, [ebp - 0x40]
        push eax
        lea ecx, [ebp]
        push ecx
        mov ecx, esi
        call ext_0042C600
        mov dword ptr [ebp - 0x4], 0x2
        jmp L42E69A
L42E615:
        push 0x92f314
        lea ecx, [ebp + 0x20]
        call dword ptr [mem_00924FE4]
        lea edx, [ebp]
        push edx
        lea ecx, [ebp + 0x20]
        mov byte ptr [ebp - 0x4], 0x5
        call dword ptr [mem_00924FD8]
        push 0x92f310
        lea ecx, [ebp + 0x20]
        call dword ptr [mem_00924ED0]
        mov eax, dword ptr [ebp + 0x1c]
        add eax, 0xc
        push eax
        lea ecx, [ebp + 0x20]
        call dword ptr [mem_00924FD8]
        push 0x92f30c
        lea ecx, [ebp + 0x20]
        call dword ptr [mem_00924ED0]
        push 0x92f2f0
        lea ecx, [ebp + 0x20]
        call dword ptr [mem_00924ED0]
        push 0
        push 0
        lea ecx, [ebp + 0x20]
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp + 0x20]
        mov byte ptr [ebp - 0x4], 0x4
        call dword ptr [mem_00924FF4]
        mov eax, 0x42e694
        ret
L42E694:
        mov ebx, dword ptr [ebp + 0x54]
        mov edi, dword ptr [ebp + 0x48]
L42E69A:
        lea ecx, [ebp - 0x2c]
        mov byte ptr [ebp - 0x4], 0x6
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [ebp - 0x38]
        xor eax, eax
        cmp esi, eax
        mov byte ptr [ebp - 0x4], 0x0
        je L42E6E1
        mov edi, dword ptr [ebp - 0x34]
        cmp esi, edi
        je L42E6D3
        jmp L42E6C0
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L42E6C0:
        lea ecx, [esi + 0x8]
        call dword ptr [mem_00924FF4]
        add esi, 0x24
        cmp esi, edi
        jne L42E6C0
        mov esi, dword ptr [ebp - 0x38]
L42E6D3:
        push esi
        call ext_006A5C5C
        mov edi, dword ptr [ebp + 0x48]
        add esp, 0x4
        xor eax, eax
L42E6E1:
        lea ecx, [ebp]
        mov dword ptr [ebp - 0x38], eax
        mov dword ptr [ebp - 0x34], eax
        mov dword ptr [ebp - 0x30], eax
        mov dword ptr [ebp - 0x4], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [ebp + 0x50]
        test esi, esi
        jne L42E707
        call dword ptr [mem_00925134]
L42E707:
        cmp ebx, dword ptr [esi + 0x8]
        jb L42E712
        call dword ptr [mem_00925134]
L42E712:
        add ebx, 0x4
        mov dword ptr [ebp + 0x54], ebx
        lea ecx, [ebp + 0x4c]
        jmp L42E537
L42E720:
        push 0xacdab0
        call ext_00420600
        push eax
        lea ecx, [ebp - 0xa0]
        call ext_0041FF30
        push 0x9d3748
        lea ecx, [ebp - 0xa0]
        push ecx
        call ext_006A6DD2
L42E747:
        lea edx, [edi + 0x34]
        push edx
        mov ecx, edi
        call ext_00428130
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        add ebp, 0x58
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}
