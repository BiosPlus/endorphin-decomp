// Decompiled translation unit: src/ExprParser/Operators/Add.cpp

extern "C" void ext_0048A120();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;

// [0x006A2250] ExprParser::Operators::Add::vfunc_2 (188 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A2250(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        push edi
        mov ebp, ecx
        je L_throw1
        mov edi, dword ptr [esi + 0x8]
        sub edi, eax
        sar edi, 3
        cmp edi, 2
        jge L_ok1
    L_throw1:
        push 0xa183e8
        lea eax, [esp + 0x18]
        push eax
        mov dword ptr [esp + 0x1c], 2
        call ext_006A6DD2
    L_ok1:
        push ebx
        lea ebx, [edi - 1]
        cmp ebx, edi
        jb L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        mov eax, dword ptr [esi + 0x4]
        add edi, -2
        test eax, eax
        lea ebx, [eax + 8 * ebx]
        je L_ok3
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 3
        cmp edi, ecx
        jb L_ok4
    L_ok3:
        call dword ptr [mem_00925134]
    L_ok4:
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [ebp]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [eax + 8 * edi]
        push ebx
        push ecx
        mov ecx, ebp
        call edx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        pop ebx
        je L_skip1
        mov ecx, dword ptr [esi + 0x8]
        mov edx, ecx
        sub edx, eax
        sar edx, 3
        je L_skip1
        push esi
        push ecx
        add ecx, -8
        push ecx
        call ext_0048A120
        add esp, 0xc
        add dword ptr [esi + 0x8], -8
    L_skip1:
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [edx + 0x4]
        test eax, eax
        je L_done
        mov ecx, dword ptr [edx + 0x8]
        mov esi, ecx
        sub esi, eax
        sar esi, 2
        je L_done
        add ecx, -4
        mov dword ptr [edx + 0x8], ecx
    L_done:
        pop edi
        pop esi
        pop ebp
        ret 8
    }
}
