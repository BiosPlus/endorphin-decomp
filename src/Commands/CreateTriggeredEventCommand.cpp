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

extern "C" void ext_0041A920();
extern "C" void ext_00469570();
extern "C" void ext_0047D7C0();
extern "C" void ext_0047D870();
extern "C" void ext_0048EF20();
extern "C" void ext_00494000();
extern "C" void ext_004AFC60();
extern "C" void ext_004B07E0();
extern "C" void ext_006A5C5C();

// [0x0048F620] Commands::CreateTriggeredEventCommand::vfunc_1 (280 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048F620(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x87ba98
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x30
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr [edi + 0x24]
        cmp dword ptr [edi + 0x20], ebx
        lea esi, [edi + 0x1c]
        jbe L1
        call dword ptr [mem_00925134]
    L1:
        push ebp
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L2
        call dword ptr [mem_00925134]
    L2:
        push ebx
        push esi
        push ebp
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0048EF20
        mov ecx, dword ptr [edi + 0x18]
        push esi
        call ext_0047D870
        mov esi, dword ptr [edi + 0x14]
        xor ebx, ebx
        mov dword ptr [edi + 0x14], ebx
        mov ecx, dword ptr [edi + 0x18]
        push esi
        call ext_0047D7C0
        call ext_00468180
        mov eax, dword ptr [eax + 0x14]
        mov edi, dword ptr [eax + 0x34]
        mov dword ptr [esp + 0x34], ebx
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x3c], ebx
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x4c], ebx
        mov dword ptr [esp + 0x14], esi
        call ext_0041A920
        push ebx
        push ebx
        push -0x1
        lea ecx, [esp + 0x24]
        call ext_00494000
        push ebx
        push ebx
        push -0x1
        lea ecx, [esp + 0x30]
        call ext_00494000
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x28]
        push eax
        push ebx
        push ebx
        add edi, 0x8
        call ext_00468180
        mov ecx, eax
        call ext_00469570
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        mov ecx, edi
        call ext_004B07E0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x100]
        mov ecx, esi
        call eax
        test al, al
        pop ebp
        je L3
        add esi, 0x154
        push esi
        mov ecx, edi
        call ext_004AFC60
    L3:
        mov eax, dword ptr [esp + 0x30]
        pop edi
        pop esi
        cmp eax, ebx
        pop ebx
        je L4
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L4:
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x3c
        ret
    }
}
