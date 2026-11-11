// Decompiled translation unit: src/ExprParser/Operators/Abs.cpp

// [0x006A1CD0] ExprParser::Operators::Abs::vfunc_3 (21 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A1CD0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0xbc]
        jmp eax
    }
}

// [0x006A1E20] ExprParser::Operators::Abs::vfunc_2 (116 bytes)
// Stack args: a1 (4-byte-item vector, pop back if non-empty), a2 (8-byte-item vector, back passed to vfunc_3). ret 8.
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_006A1E20(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        je L_throw
        mov eax, dword ptr [edi + 0x8]
        sub eax, ecx
        sar eax, 3
        cmp eax, 1
        jge L_ok
    L_throw:
        push 0xa183e8
        lea eax, [esp + 0x14]
        push eax
        mov dword ptr [esp + 0x18], 2
        call ext_006A6DD2
    L_ok:
        push ebx
        lea ebx, [eax - 1]
        cmp ebx, eax
        jb L_inrange
        call dword ptr [mem_00925134]
    L_inrange:
        mov eax, dword ptr [edi + 0x4]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [eax + ebx*8]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        pop ebx
        je L_done
        mov edx, dword ptr [ecx + 0x8]
        mov esi, edx
        sub esi, eax
        sar esi, 2
        je L_done
        add edx, -4
        mov dword ptr [ecx + 0x8], edx
    L_done:
        pop edi
        pop esi
        ret 8
    }
}
