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
