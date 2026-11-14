// Decompiled translation unit: src/Commands/CreateTriggeredEventCommand.cpp

extern "C" int mem_00924FE4;
extern "C" void ext_00468180();
extern "C" void ext_00479550();
extern "C" int mem_00925134;

// [0x0048E0F0] Commands::CreateTriggeredEventCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" __declspec(naked) void __fastcall fn_0048E0F0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x93e574
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0048EAA0] Commands::CreateTriggeredEventCommand::vfunc_2 (166 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048EAA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x18], 0x0
        je L_ret
        push edi
        mov edi, dword ptr [esi + 0x10]
        test edi, edi
        je L_pop_edi
        mov ecx, dword ptr [esi + 0x14]
        cmp edi, ecx
        je L_after_dtor
        test ecx, ecx
        je L_after_dtor
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    L_after_dtor:
        push ebp
        mov dword ptr [esi + 0x14], edi
        call ext_00468180
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
        mov ecx, dword ptr [esi + 0x10]
        push ecx
        mov ecx, dword ptr [esi + 0x18]
        call ext_00479550
        mov edi, dword ptr [esi + 0x20]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x1c
        cmp edi, dword ptr [esi + 0x8]
        jbe L_push_ebx
        call ebp
    L_push_ebx:
        push ebx
    L_loop:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk1
        call ebp
    L_chk1:
        cmp esi, esi
        je L_chk2
        call ebp
    L_chk2:
        cmp edi, ebx
        je L_pop_ebx
        cmp edi, dword ptr [esi + 0x8]
        jb L_chk3
        call ebp
    L_chk3:
        cmp edi, dword ptr [esi + 0x8]
        mov ebx, dword ptr [edi]
        jb L_chk4
        call ebp
    L_chk4:
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 0x124]
        lea eax, [edi + 0x4]
        push eax
        mov ecx, ebx
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_next
        call ebp
    L_next:
        add edi, 0xc
        jmp L_loop
    L_pop_ebx:
        pop ebx
        pop ebp
    L_pop_edi:
        pop edi
    L_ret:
        pop esi
        ret
    }
}
