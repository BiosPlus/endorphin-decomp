// Decompiled translation unit: src/ExprParser/Operators/RightParenthesis.cpp

// [0x006A1EA0] ExprParser::Operators::RightParenthesis::vfunc_2 (271 bytes)
// Stack args: a1 (vector, 4-byte items: pop back if non-empty, else throw), a2 (passed to vfunc_2 of popped items). ret 8.
extern "C" void ext_006A6DD2();
extern "C" void ext_00480280();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_006A1EA0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 8
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je r2_throw1
        mov edx, dword ptr [esi + 0x8]
        mov eax, edx
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        jge r2_ok1
    r2_throw1:
        push 0xa183e8
        lea eax, [esp + 0x14]
        push eax
        mov dword ptr [esp + 0x18], 3
        call ext_006A6DD2
    r2_ok1:
        test eax, eax
        je r2_skip1
        add edx, -4
        mov dword ptr [esi + 0x8], edx
    r2_skip1:
        mov ecx, esi
        call ext_00480280
        test al, al
        jne r2_tail
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [esp + 0x1c]
        push edi
        jmp r2_top
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    r2_top:
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe r2_a1
        call ebx
    r2_a1:
        lea eax, [edi - 4]
        cmp eax, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x14], edi
        ja r2_b1
        cmp eax, dword ptr [esi + 0x4]
        jae r2_c1
    r2_b1:
        call ebx
    r2_c1:
        add edi, -4
        cmp edi, dword ptr [esi + 0x8]
        jb r2_d1
        call ebx
    r2_d1:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
        cmp eax, 0xc
        je r2_pop
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe r2_a2
        call ebx
    r2_a2:
        lea eax, [edi - 4]
        cmp eax, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x14], edi
        ja r2_b2
        cmp eax, dword ptr [esi + 0x4]
        jae r2_c2
    r2_b2:
        call ebx
    r2_c2:
        add edi, -4
        cmp edi, dword ptr [esi + 0x8]
        jb r2_d2
        call ebx
    r2_d2:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x8]
        push ebp
        push esi
        call eax
        mov ecx, esi
        call ext_00480280
        test al, al
        je r2_top
    r2_pop:
        pop edi
        pop ebp
        pop ebx
    r2_tail:
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je r2_throw2
        mov edx, dword ptr [esi + 0x8]
        mov eax, edx
        sub eax, ecx
        sar eax, 2
        je r2_throw2
        test eax, eax
        je r2_skip2
        add edx, -4
        mov dword ptr [esi + 0x8], edx
    r2_skip2:
        pop esi
        add esp, 8
        ret 8
    r2_throw2:
        push 0xa183e8
        lea ecx, [esp + 0x14]
        push ecx
        mov dword ptr [esp + 0x18], 3
        call ext_006A6DD2
    }
}
