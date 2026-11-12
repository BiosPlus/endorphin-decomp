// Decompiled translation unit: src/ExprParser/Operators/Conditional.cpp

// [0x006A1500] ExprParser::Operators::Conditional::vfunc_3 (52 bytes)
// Stack-argument thiscall (ret 0xc): self is the first stack operand (ecx ignored).
// Calls self->child(+4)->vtable[3](self); if true, dispatch sub_006A1490(self, a2),
// otherwise sub_006A1490(self, a3).
extern "C" void ext_006A1490();

extern "C" __declspec(naked) void __fastcall fn_006A1500(void* ecx_unused, int edx_unused, void* self, void* a2, void* a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        push esi
        call edx
        test al, al
        je else_branch
        mov eax, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_006A1490
        pop esi
        ret 0xc
    else_branch:
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        call ext_006A1490
        pop esi
        ret 0xc
    }
}

// [0x006A2310] ExprParser::Operators::Conditional::vfunc_2 (264 bytes)
extern "C" void ext_0048A120();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_006A2310(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        push edi
        mov dword ptr [esp + 0x8], ecx
        je L_throw1
        mov edi, dword ptr [esi + 0x8]
        sub edi, eax
        sar edi, 3
        cmp edi, 3
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
        push ebp
        jb L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        lea ebp, [eax + 8 * ebx]
        lea ebx, [edi - 2]
        je L_ok3
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 3
        cmp ebx, ecx
        jb L_ok4
    L_ok3:
        call dword ptr [mem_00925134]
    L_ok4:
        mov eax, dword ptr [esi + 0x4]
        add edi, -3
        test eax, eax
        lea ebx, [eax + 8 * ebx]
        je L_ok5
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 3
        cmp edi, ecx
        jb L_ok6
    L_ok5:
        call dword ptr [mem_00925134]
    L_ok6:
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xc]
        push ebp
        push ebx
        lea eax, [eax + 8 * edi]
        push eax
        call edx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        pop ebp
        mov edi, 0xfffffff8
        pop ebx
        je L_skip1
        mov ecx, dword ptr [esi + 0x8]
        mov edx, ecx
        sub edx, eax
        sar edx, 3
        je L_skip1
        push esi
        push ecx
        add ecx, edi
        push ecx
        call ext_0048A120
        add esp, 0xc
        add dword ptr [esi + 0x8], edi
    L_skip1:
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je L_skip2
        mov eax, dword ptr [esi + 0x8]
        mov edx, eax
        sub edx, ecx
        sar edx, 3
        je L_skip2
        push esi
        push eax
        add eax, -8
        push eax
        call ext_0048A120
        add esp, 0xc
        add dword ptr [esi + 0x8], edi
    L_skip2:
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
        pop ecx
        ret 8
    }
}
