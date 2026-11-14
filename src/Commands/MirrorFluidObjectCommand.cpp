// Decompiled translation unit: src/Commands/MirrorFluidObjectCommand.cpp

// [0x005AC7C0] Commands::MirrorFluidObjectCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_005AC7C0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x95f538
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005AC780] Commands::MirrorFluidObjectCommand::vfunc_2 (50 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00468F70();
extern "C" void ext_005BF570();
extern "C" __declspec(naked) void __fastcall fn_005AC780(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x14], 0
        je done
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        je done
        push eax
        call ext_00468180
        mov ecx, eax
        call ext_00468F70
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x14]
        push eax
        call ext_005BF570
        mov dword ptr [esi + 0x10], 0
    done:
        pop esi
        ret
    }
}

// [0x005ACDE0] Commands::MirrorFluidObjectCommand::vfunc_1 (253 bytes)
extern "C" void ext_00587180();
extern "C" void ext_005AC560();
extern "C" void ext_005AC9C0();
extern "C" void ext_005BF510();
extern "C" void ext_005CC5C0();
extern "C" void ext_00665810();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005ACDE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push 0xffffffff
        push 0x8a2919
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xac
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x14], 0
        je loc_5acec7
        cmp dword ptr [esi + 0x18], 0
        je loc_5acec7
        push edi
        push 0x19c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov dword ptr [esp + 0xbc], 0
        je loc_5ace42
        mov ecx, dword ptr [esi + 0x18]
        push ecx
        mov ecx, eax
        call ext_005CC5C0
        mov edi, eax
        jmp loc_5ace44
    loc_5ace42:
        xor edi, edi
    loc_5ace44:
        mov ecx, dword ptr [esi + 0x1c]
        cmp edi, ecx
        mov dword ptr [esp + 0xbc], 0xffffffff
        je loc_5ace62
        test ecx, ecx
        je loc_5ace62
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        call eax
    loc_5ace62:
        mov dword ptr [esi + 0x1c], edi
        mov eax, edi
        mov dword ptr [esi + 0x10], eax
        mov eax, dword ptr [esi + 0x1c]
        mov dword ptr [esi + 0x1c], 0
        mov ecx, dword ptr [esi + 0x14]
        push eax
        call ext_005BF510
        mov ecx, dword ptr [esi + 0x10]
        push ecx
        mov ecx, dword ptr [esi + 0x14]
        call ext_00587180
        mov eax, dword ptr [esi + 0x18]
        mov ecx, dword ptr [esi + 0x10]
        lea edx, [esi + 0x20]
        push edx
        push eax
        push ecx
        lea ecx, [esp + 0x18]
        call ext_005AC9C0
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0xbc], 1
        call ext_005AC560
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call ext_00665810
        pop edi
    loc_5acec7:
        mov ecx, dword ptr [esp + 0xb0]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xb8
        ret
    }
}
