// Decompiled translation unit: src/SeverEventTypes/Disable.cpp

extern "C" void ext_00528BF0();
extern "C" void ext_00594000();
extern "C" int mem_00925134;

// [0x004C7A90] SeverEventTypes::Disable::vfunc_0 (279 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C7A90(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [ecx + 0x8]
        cmp ebp, dword ptr [ecx + 0xc]
        push esi
        lea esi, [ecx + 0x4]
        push edi
        mov dword ptr [esp + 0x10], esi
        jbe L_a
        call ebx
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
L_a:
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_b
        call ebx
L_b:
        test esi, esi
        je L_c
        cmp esi, esi
        je L_d
L_c:
        call ebx
L_d:
        cmp ebp, edi
        je L_ret
        call ext_00594000
        test esi, esi
        mov edi, eax
        jne L_e
        call ebx
L_e:
        cmp ebp, dword ptr [esi + 0x8]
        jb L_f
        call ebx
L_f:
        mov eax, dword ptr [ebp]
        mov ecx, dword ptr [eax + 0x22c]
        add edi, 0x168
        push edi
        push 0x1
        push 0x2000
        add ecx, 0xc
        call ext_00528BF0
        cmp ebp, dword ptr [esi + 0x8]
        jb L_g
        call ebx
L_g:
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [ecx + 0x18c]
        mov edi, dword ptr [edx + 0x5ec]
        mov esi, dword ptr [edi + 0x1c]
        add edi, 0x18
L_loop:
        cmp esi, dword ptr [edi + 0x8]
        jbe L_h
        call ebx
L_h:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_i
        call dword ptr [mem_00925134]
L_i:
        cmp esi, ebx
        mov eax, dword ptr [esp + 0x10]
        je L_done
        cmp ebp, dword ptr [eax + 0x8]
        jb L_j
        call dword ptr [mem_00925134]
L_j:
        cmp esi, dword ptr [edi + 0x8]
        mov eax, dword ptr [ebp]
        mov ebx, dword ptr [eax + 0x234]
        jb L_k
        call dword ptr [mem_00925134]
L_k:
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 0x4], ebx
        jne L_l
        cmp esi, dword ptr [edi + 0x8]
        jb L_m
        call dword ptr [mem_00925134]
L_m:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x44]
        push 0x0
        call eax
L_l:
        cmp esi, dword ptr [edi + 0x8]
        jb L_n
        call dword ptr [mem_00925134]
L_n:
        add esi, 0x4
        jmp L_h
L_done:
        cmp ebp, dword ptr [eax + 0x8]
        jb L_o
        call dword ptr [mem_00925134]
L_o:
        mov ebx, dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x10]
        add ebp, 0x4
        jmp L_a
L_ret:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
