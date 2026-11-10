// Decompiled translation unit: src/classes/EvolvedIndividual.cpp

// [0x00507E80] EvolvedIndividual::vfunc_6 (35 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a global C string pointer via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00A9EFC0;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_00507E80(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EFC0]
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

// [0x00516E60] EvolvedIndividual::vfunc_1_off_8 (73 bytes)
// Loops over a vector of pointers at +0xC (begin) / +0x10 (end) and stores each
// element's index into its +0x34 field. Two stack args (ret 0x8) are unused.
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00516E60(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    loop_top:
        mov ecx, dword ptr [esi + 0xc]
        test ecx, ecx
        je loop_end
        mov eax, dword ptr [esi + 0x10]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jae loop_end
        test ecx, ecx
        je call_inval
        mov eax, dword ptr [esi + 0x10]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb body
    call_inval:
        call ebx
    body:
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [eax + 4 * edi]
        mov dword ptr [ecx + 0x34], edi
        add edi, 1
        jmp loop_top
    loop_end:
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}
