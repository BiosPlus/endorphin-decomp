// Decompiled translation unit: src/classes/MacroCommand.cpp

extern "C" int mem_00924FE0;

// [0x00665840] MacroCommand::vfunc_3 (33 bytes)
// Returns a std::string by value: hidden return buffer is the stack arg (ret 0x4).
// Copy-constructs the std::string member at this+0x10 into the buffer via the
// imported basic_string copy ctor, then returns the buffer pointer in eax.
extern "C" __declspec(naked) void __fastcall fn_00665840(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x10
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00665A50] MacroCommand::vfunc_1 (64 bytes)
// Walks the std::list of sub-commands whose head sentinel pointer lives at this+0x30;
// for each node (Command* at node+0x8) it invokes virtual slot 1 (+0x4).
// The debug-iterator guard paths (cmp edi,edi / cmp esi,[edi+4]) call the
// _invalid_parameter_noinfo pointer held in ebp; they are kept for byte parity.
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00665A50(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x30]
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [eax]
        push edi
        lea edi, [ecx + 0x2c]
    mc_loop:
        cmp edi, edi
        mov ebx, dword ptr [edi + 0x4]
        je mc_skip1
        call ebp
    mc_skip1:
        cmp esi, ebx
        je mc_done
        cmp esi, dword ptr [edi + 0x4]
        jne mc_skip2
        call ebp
    mc_skip2:
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        call eax
        cmp esi, dword ptr [edi + 0x4]
        jne mc_skip3
        call ebp
    mc_skip3:
        mov esi, dword ptr [esi]
        jmp mc_loop
    mc_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
