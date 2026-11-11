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

// [0x00665B10] MacroCommand::vfunc_4 (104 bytes)
// Iterates the debug-checked vector of sub-command pointers stored at this+0x3c..this+0x40
// (container proxy at this+0x38) and calls virtual slot 1 (+0x4) on each element, passing
// the argument at [esp+0x4] (this+0xc). The _invalid_parameter guards are kept for byte parity.
extern "C" __declspec(naked) void __fastcall fn_00665B10(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov esi, dword ptr [ebp + 0x3c]
        cmp esi, dword ptr [ebp + 0x40]
        push edi
        lea edi, [ebp + 0x38]
        jbe mv_chk1
        call dword ptr [mem_00925134]
    mv_chk1:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe mv_chk2
        call dword ptr [mem_00925134]
    mv_chk2:
        test edi, edi
        je mv_bad
        cmp edi, edi
        je mv_chk3
    mv_bad:
        call dword ptr [mem_00925134]
    mv_chk3:
        cmp esi, ebx
        je mv_done
        test edi, edi
        mov ebx, dword ptr [mem_00925134]
        jne mv_chk4
        call ebx
    mv_chk4:
        cmp esi, dword ptr [edi + 0x8]
        jb mv_call
        call ebx
    mv_call:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [ebp + 0xc]
        mov eax, dword ptr [eax + 0x4]
        push edx
        call eax
        cmp esi, dword ptr [edi + 0x8]
        jb mv_next
        call ebx
    mv_next:
        add esi, 0x4
        jmp mv_chk1
    mv_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00665A90] MacroCommand::vfunc_2 (124 bytes)
// Reverse walk of the sub-command std::list (debug-checked reverse iterator): starts at
// this+0x30, dereferences as node->_Prev->_Myval (+0x8), calls virtual slot 2 (+0x8) on
// each Command, and advances via _Prev (+0x4) until it reaches the list head sentinel.
// The _invalid_parameter guards are kept for byte parity.
extern "C" __declspec(naked) void __fastcall fn_00665A90(void* self) {
    __asm {
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [ecx + 0x30]
        push ebp
        push esi
        lea ebp, [ecx + 0x2c]
        push edi
        mov esi, ebp
        nop
    mc2_loop:
        test esi, esi
        mov eax, dword ptr [ebp + 0x4]
        mov edi, dword ptr [eax]
        je mc2_chk1
        cmp esi, ebp
        je mc2_chk2
    mc2_chk1:
        call dword ptr [mem_00925134]
    mc2_chk2:
        cmp ebx, edi
        je mc2_done
        test esi, esi
        mov dword ptr [esp + 0x18], ebx
        jne mc2_chk3
        call dword ptr [mem_00925134]
    mc2_chk3:
        mov edi, dword ptr [ebx + 0x4]
        cmp edi, dword ptr [esi + 0x4]
        jne mc2_call
        call dword ptr [mem_00925134]
        cmp edi, dword ptr [esi + 0x4]
        mov ebp, esi
        jne mc2_call
        call dword ptr [mem_00925134]
    mc2_call:
        mov ecx, dword ptr [edi + 0x8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x8]
        call eax
        test esi, esi
        jne mc2_next
        call dword ptr [mem_00925134]
    mc2_next:
        mov ebx, dword ptr [ebx + 0x4]
        cmp ebx, dword ptr [esi + 0x4]
        jne mc2_loop
        call dword ptr [mem_00925134]
        jmp mc2_loop
    mc2_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret
    }
}
