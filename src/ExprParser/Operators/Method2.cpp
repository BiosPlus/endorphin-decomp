// Decompiled translation unit: src/ExprParser/Operators/Method2.cpp

// [0x006A2100] ExprParser::Operators::Method2::vfunc_2 (327 bytes)
extern "C" void ext_0048A120();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_006A2100(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 8
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        push edi
        je throw_path
        mov edi, dword ptr [esi + 0x8]
        sub edi, eax
        sar edi, 0x3
        cmp edi, 0x3
        jge ok1
throw_path:
        push 0xa183e8
        lea eax, [esp + 0x1c]
        push eax
        mov dword ptr [esp + 0x20], 0x2
        call ext_006A6DD2
ok1:
        push ebx
        lea ebx, [edi - 0x3]
        cmp ebx, edi
        push ebp
        jb ok2
        call dword ptr [mem_00925134]
ok2:
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        lea ebp, [eax + 8*ebx]
        lea ebx, [edi - 0x2]
        je bad2
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 0x3
        cmp ebx, ecx
        jb ok3
bad2:
        call dword ptr [mem_00925134]
ok3:
        mov eax, dword ptr [esi + 0x4]
        add edi, -1
        test eax, eax
        lea ebx, [eax + 8*ebx]
        je bad3
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 0x3
        cmp edi, ecx
        jb ok4
bad3:
        call dword ptr [mem_00925134]
ok4:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [ebp + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xc4]
        lea eax, [eax + 8*edi]
        push eax
        push ebx
        push ebp
        lea eax, [esp + 0x1c]
        push eax
        call edx
        mov ecx, dword ptr [esp + 0x14]
        test ecx, ecx
        pop ebp
        pop ebx
        je skip1
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x8]
        push edx
        call eax
skip1:
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        mov edi, 0xfffffff8
        je blkB
        mov eax, dword ptr [esi + 0x8]
        mov edx, eax
        sub edx, ecx
        sar edx, 0x3
        je blkB
        push esi
        push eax
        add eax, edi
        push eax
        call ext_0048A120
        add esp, 0xc
        add dword ptr [esi + 0x8], edi
blkB:
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je blkC
        mov eax, dword ptr [esi + 0x8]
        mov edx, eax
        sub edx, ecx
        sar edx, 0x3
        je blkC
        push esi
        push eax
        add eax, -0x8
        push eax
        call ext_0048A120
        add esp, 0xc
        add dword ptr [esi + 0x8], edi
blkC:
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je final
        mov eax, dword ptr [esi + 0x8]
        mov edx, eax
        sub edx, ecx
        sar edx, 0x3
        je final
        push esi
        push eax
        add eax, -0x8
        push eax
        call ext_0048A120
        add esp, 0xc
        add dword ptr [esi + 0x8], edi
final:
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [edx + 0x4]
        test eax, eax
        je done
        mov ecx, dword ptr [edx + 0x8]
        mov esi, ecx
        sub esi, eax
        sar esi, 0x2
        je done
        add ecx, -0x4
        mov dword ptr [edx + 0x8], ecx
done:
        pop edi
        pop esi
        add esp, 8
        ret 8
    }
}
