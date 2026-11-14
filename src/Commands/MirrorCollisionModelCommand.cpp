// Decompiled translation unit: src/Commands/MirrorCollisionModelCommand.cpp

// [0x005AC720] Commands::MirrorCollisionModelCommand::vfunc_3 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_005AC720(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x95f508
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005AC6E0] Commands::MirrorCollisionModelCommand::vfunc_2 (50 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00468F70();
extern "C" void ext_005BF460();

extern "C" __declspec(naked) void __fastcall fn_005AC6E0(void* self) {
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
        call ext_005BF460
        mov dword ptr [esi + 0x10], 0
    done:
        pop esi
        ret
    }
}

// [0x005ACB50] Commands::MirrorCollisionModelCommand::vfunc_1 (253 bytes)
extern "C" void ext_00587180();
extern "C" void ext_005AC560();
extern "C" void ext_005AC9C0();
extern "C" void ext_005BF400();
extern "C" void ext_005CC390();
extern "C" void ext_00665810();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005ACB50(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a2919
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xac
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x14], 0x0
        je done
        cmp dword ptr [esi + 0x18], 0x0
        je done
        push edi
        push 0x1a0
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0xbc], 0x0
        je alloc_null
        mov ecx, dword ptr [esi + 0x18]
        push ecx
        mov ecx, eax
        call ext_005CC390
        mov edi, eax
        jmp after_alloc
    alloc_null:
        xor edi, edi
    after_alloc:
        mov ecx, dword ptr [esi + 0x1c]
        cmp edi, ecx
        mov dword ptr [esp + 0xbc], -0x1
        je skip_dtor
        test ecx, ecx
        je skip_dtor
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
    skip_dtor:
        mov dword ptr [esi + 0x1c], edi
        mov eax, edi
        mov dword ptr [esi + 0x10], eax
        mov eax, dword ptr [esi + 0x1c]
        mov dword ptr [esi + 0x1c], 0x0
        mov ecx, dword ptr [esi + 0x14]
        push eax
        call ext_005BF400
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
        mov dword ptr [esp + 0xbc], 0x1
        call ext_005AC560
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0xbc], -0x1
        call ext_00665810
        pop edi
    done:
        mov ecx, dword ptr [esp + 0xb0]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0xb8
        ret
    }
}
