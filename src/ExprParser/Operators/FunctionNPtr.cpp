// Decompiled translation unit: src/ExprParser/Operators/FunctionNPtr.cpp
extern "C" void ext_00401CC0();
extern "C" void ext_0041CF00();
extern "C" void ext_0041CF50();
extern "C" void ext_0048A120();
extern "C" void ext_004ECA40();
extern "C" void ext_004ECB40();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134; /* "P{b" */

// [0x006A2670] ExprParser::Operators::FunctionNPtr::vfunc_2 (718 bytes)
// Stack args only (ret 8): [esp+8] = self, [esp+0xC] = out vector. ecx is not read.
extern "C" __declspec(naked) void __stdcall fn_006A2670(void* self, void* out) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b6cc0
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x40]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je short L_throw1
        mov ebp, dword ptr [esi + 0x8]
        sub ebp, eax
        sar ebp, 0x3
        cmp ebp, 0x2
        jge short L_ok1
    L_throw1:
        push 0xa183e8
        lea eax, [esp + 0x44]
        push eax
        mov dword ptr [esp + 0x48], 0x2
        call ext_006A6DD2
    L_ok1:
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push edi
        lea edi, [ebp - 0x1]
        test edi, edi
        jl short L_scan_done
    L_scan1:
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je short L_scan_chk1
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb short L_scan_ld1
    L_scan_chk1:
        call ebx
    L_scan_ld1:
        mov ecx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [ecx + 8*edi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x30]
        call eax
        cmp eax, 0x17
        je short L_scan_done
        sub edi, 0x1
        jns short L_scan1
    L_scan_done:
        cmp edi, 0x1
        jl near ptr L_throw2
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je short L_chk2
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb short L_ld2
    L_chk2:
        call ebx
    L_ld2:
        mov ecx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [ecx + 8*edi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x30]
        call eax
        cmp eax, 0x17
        jne near ptr L_throw2
        sub edi, 0x1
        push edi
        mov ecx, esi
        call ext_004ECA40
        push eax
        lea ecx, [esp + 0x20]
        call ext_0041CF00
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x90]
        mov dword ptr [esp + 0x3c], 0x0
        call eax
        test al, al
        je short L_after_b
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esp + 0x20]
        call ext_004ECB40
        push eax
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x40], 0x1
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        mov byte ptr [esp + 0x3c], 0x0
        je short L_after_b
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x14]
        push eax
        call edx
    L_after_b:
        mov ecx, dword ptr [esp + 0x20]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x54]
        lea edx, [esp + 0x1c]
        push edx
        call eax
        sub ebp, edi
        sub ebp, 0x2
        cmp eax, ebp
        mov dword ptr [esp + 0x48], eax
        mov dword ptr [esp + 0x14], ebp
        je short L_eq
        push 0xa183e8
        lea ecx, [esp + 0x4c]
        push ecx
        mov dword ptr [esp + 0x50], 0x12
        call ext_006A6DD2
    L_eq:
        push edi
        mov ecx, esi
        call ext_004ECA40
        mov ebx, eax
        mov eax, dword ptr [esp + 0x48]
        _emit 0x83
        _emit 0xe8
        _emit 0x00
        je near ptr L_zero
        sub eax, 0x1
        je near ptr L_one
        sub eax, 0x1
        je short L_two
        push 0xa183e8
        lea edx, [esp + 0x14]
        push edx
        mov dword ptr [esp + 0x18], 0x12
        call ext_006A6DD2
    L_two:
        mov eax, dword ptr [esp + 0x20]
        mov ebp, dword ptr [eax]
        mov dword ptr [esp + 0x48], eax
        lea eax, [edi + 0x3]
        push eax
        mov ecx, esi
        add ebp, 0xc4
        call ext_004ECA40
        push eax
        add edi, 0x2
        push edi
        mov ecx, esi
        call ext_004ECA40
        push eax
        mov eax, dword ptr [ebp]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x54]
        lea edx, [esp + 0x30]
        push edx
        call eax
        push eax
        mov ecx, ebx
        mov byte ptr [esp + 0x40], 0x3
        call ext_0041CF50
        lea ecx, [esp + 0x24]
        jmp short L_call_dtor
    L_one:
        mov eax, dword ptr [esp + 0x20]
        mov ebp, dword ptr [eax]
        add edi, 0x2
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x4c], eax
        add ebp, 0xc0
        call ext_004ECA40
        push eax
        mov eax, dword ptr [ebp]
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esp + 0x50]
        lea edx, [esp + 0x34]
        push edx
        call eax
        push eax
        mov ecx, ebx
        mov byte ptr [esp + 0x40], 0x2
        call ext_0041CF50
        lea ecx, [esp + 0x2c]
    L_call_dtor:
        mov byte ptr [esp + 0x3c], 0x0
        call ext_00401CC0
    L_zero:
        mov eax, dword ptr [esp + 0x14]
        add eax, 0x1
        test eax, eax
        jle near ptr L_epilog_pre
        mov ebx, eax
        mov edi, 0xfffffff8
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_loop2:
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je short L_loop2_next
        mov eax, dword ptr [esi + 0x8]
        mov edx, eax
        sub edx, ecx
        sar edx, 0x3
        je short L_loop2_next
        push esi
        lea ecx, [eax - 0x8]
        push eax
        push ecx
        call ext_0048A120
        add esp, 0xc
        add dword ptr [esi + 0x8], edi
    L_loop2_next:
        sub ebx, 0x1
        jne short L_loop2
    L_epilog_pre:
        mov edx, dword ptr [esp + 0x44]
        mov eax, dword ptr [edx + 0x4]
        test eax, eax
        je short L_post_pop
        mov ecx, dword ptr [edx + 0x8]
        mov esi, ecx
        sub esi, eax
        sar esi, 0x2
        je short L_post_pop
        add ecx, -4
        mov dword ptr [edx + 0x8], ecx
    L_post_pop:
        mov ecx, dword ptr [esp + 0x20]
        test ecx, ecx
        mov dword ptr [esp + 0x3c], 0xffffffff
        je short L_epi
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x1c]
        push edx
        call eax
    L_epi:
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop ebx
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x30
        ret 0x8
    L_throw2:
        push 0xa183e8
        lea ecx, [esp + 0x4c]
        push ecx
        mov dword ptr [esp + 0x50], 0x12
        call ext_006A6DD2
    }
}
