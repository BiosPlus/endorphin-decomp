// Decompiled translation unit: src/classes/CEditLog.cpp

extern "C" int mem_009242E0;
extern "C" int mem_00924EE4;
extern "C" int mem_00924EE8;
extern "C" int mem_00924EEC;
extern "C" int mem_00925618;
extern "C" int mem_009241BC;

// [0x00415650] CEditLog::vfunc_3 (205 bytes)
extern "C" __declspec(naked) void __fastcall fn_00415650(void* self, int edx_unused, const wchar_t* text, bool flag) {
    __asm {
        push ecx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, ecx
        je done
        push ebx
        lea eax, [ebp + 0x2c]
        push edi
        push eax
        mov dword ptr [esp + 0x14], eax
        call dword ptr [mem_009242E0]
        cmp byte ptr [esp + 0x1c], 0
        je append_only
        mov eax, esi
        lea edx, [eax + 0x2]
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    wcslen_loop:
        mov cx, word ptr [eax]
        add eax, 0x2
        test cx, cx
        jne wcslen_loop
        sub eax, edx
        sar eax, 1
        mov edi, eax
        mov eax, dword ptr [ebp + 0x5c]
        lea ecx, [eax + 2 * edi]
        lea ebx, [ebp + 0x48]
        push ecx
        mov ecx, ebx
        call dword ptr [mem_00924EE4]
        xor esi, esi
        test edi, edi
        jle loop_end
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    char_loop:
        mov edx, dword ptr [esp + 0x18]
        cmp word ptr [edx + 2 * esi], 0xa
        jne no_cr
        push 0xd
        mov ecx, ebx
        call dword ptr [mem_00924EE8]
    no_cr:
        mov eax, dword ptr [esp + 0x18]
        movzx ecx, word ptr [eax + 2 * esi]
        push ecx
        mov ecx, ebx
        call dword ptr [mem_00924EE8]
        add esi, 0x1
        cmp esi, edi
        jl char_loop
        jmp loop_end
    append_only:
        push esi
        lea ecx, [ebp + 0x48]
        call dword ptr [mem_00924EEC]
    loop_end:
        cmp byte ptr [ebp + 0x44], 0
        pop edi
        pop ebx
        jne leave_cs
        mov eax, dword ptr [ebp + 0x1c]
        test eax, eax
        je leave_cs
        push 0x0
        push 0x0
        push 0x5f4
        push eax
        call dword ptr [mem_00925618]
        mov byte ptr [ebp + 0x44], 0x1
    leave_cs:
        mov edx, dword ptr [esp + 0x8]
        push edx
        call dword ptr [mem_009241BC]
    done:
        pop esi
        pop ebp
        pop ecx
        ret 0x8
    }
}
