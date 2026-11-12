// Decompiled translation unit: src/SeverEventTypes/Sever.cpp

extern "C" void ext_00528BF0();
extern "C" void ext_00594000();
extern "C" void ext_005E12F0();
extern "C" int mem_00925134;

// [0x004C78A0] SeverEventTypes::Sever::vfunc_0 (165 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C78A0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x8]
        cmp esi, dword ptr [ecx + 0xc]
        push edi
        lea edi, [ecx + 0x4]
        jbe L_a
        call ebx
    L_a:
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe L_b
        call ebx
        mov ebx, dword ptr [mem_00925134]
    L_b:
        test edi, edi
        je L_c
        cmp edi, edi
        je L_d
    L_c:
        call ebx
        mov ebx, dword ptr [mem_00925134]
    L_d:
        cmp esi, ebp
        je L_end
        test edi, edi
        jne L_e
        call ebx
    L_e:
        cmp esi, dword ptr [edi + 0x8]
        jb L_f
        call ebx
    L_f:
        mov ecx, dword ptr [esi]
        call ext_005E12F0
        call ext_00594000
        cmp esi, dword ptr [edi + 0x8]
        mov ebp, eax
        jb L_g
        call ebx
        mov ebx, dword ptr [mem_00925134]
    L_g:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0x22c]
        add ebp, 0x168
        push ebp
        push 0x1
        push 0x2000
        add ecx, 0xc
        call ext_00528BF0
        cmp esi, dword ptr [edi + 0x8]
        jb L_h
        call ebx
    L_h:
        mov ecx, dword ptr [esi]
        mov byte ptr [ecx + 0x17a], 0x1
        cmp esi, dword ptr [edi + 0x8]
        jb L_i
        call ebx
    L_i:
        add esi, 0x4
        jmp L_a
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
