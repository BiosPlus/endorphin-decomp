// Decompiled translation unit: src/classes/SelectionMethodEgalitarianElitist.cpp

// [0x00518490] SelectionMethodEgalitarianElitist::vfunc_1 (20 bytes)
extern "C" void ext_00518420();

extern "C" void __fastcall fn_00518490(void* self) {
    int a = *(int*)((char*)self + 0x0c) + 0x1c;
    ((void (__cdecl*)(void*, int))ext_00518420)((char*)self + 0x38, a);
}

// [0x00518150] SelectionMethodEgalitarianElitist::vfunc_2 (563 bytes)
extern "C" void ext_005084E0();
extern "C" void ext_00508570();
extern "C" void ext_0050E350();
extern "C" void ext_00510BD0();
extern "C" int mem_0093BD38;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00518150(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x34
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi+0xc]
        push edi
        add ebx, 0x1c
        call ext_00510BD0
        mov ecx, dword ptr [ebx+4]
        test ecx, ecx
        jne L_nonempty
        xor edx, edx
        mov dword ptr [esp+0x28], edx
        jmp L_have_n
L_nonempty:
        mov eax, dword ptr [ebx+8]
        sub eax, ecx
        sar eax, 2
        mov dword ptr [esp+0x28], eax
        mov edx, eax
L_have_n:
        mov eax, edx
        test eax, eax
        mov dword ptr [esp+0x38], eax
        fild dword ptr [esp+0x38]
        jge L_pos
        fadd qword ptr [mem_0093BD38]
L_pos:
        fmul qword ptr [esi+0x30]
        mov edi, 1
        fnstcw word ptr [esp+0x24]
        movzx eax, word ptr [esp+0x24]
        or eax, 0xc00
        mov dword ptr [esp+0x34], eax
        fldcw word ptr [esp+0x34]
        fistp qword ptr [esp+0x38]
        mov ecx, dword ptr [esp+0x38]
        cmp ecx, edi
        fldcw word ptr [esp+0x24]
        mov dword ptr [esp+0x24], ecx
        jae L_k_ok
        mov dword ptr [esp+0x24], edi
        mov ecx, edi
L_k_ok:
        mov eax, edx
        xor edx, edx
        div ecx
        mov dword ptr [esp+0x34], eax
        mov eax, dword ptr [esi+0x3c]
        test eax, eax
        je L_inv1
        mov ecx, dword ptr [esi+0x40]
        sub ecx, eax
        sar ecx, 2
        jne L_ok1
L_inv1:
        call dword ptr [mem_00925134]
L_ok1:
        mov edx, dword ptr [esi+0x3c]
        mov eax, dword ptr [edx]
        mov dword ptr [esp+0x30], eax
        mov eax, dword ptr [ebx+4]
        test eax, eax
        je L_inv2
        mov ecx, dword ptr [ebx+8]
        sub ecx, eax
        sar ecx, 2
        jne L_ok2
L_inv2:
        call dword ptr [mem_00925134]
L_ok2:
        mov edx, dword ptr [ebx+4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [esp+0x30]
        push eax
        call ext_005084E0
        xor edx, edx
        cmp dword ptr [esp+0x24], edx
        mov dword ptr [esp+0x2c], edx
        jbe L_after_outer
L_outer:
        mov ecx, dword ptr [ebx+4]
        test ecx, ecx
        je L_inv3
        mov eax, dword ptr [ebx+8]
        sub eax, ecx
        sar eax, 2
        cmp edx, eax
        jb L_ok3
L_inv3:
        call dword ptr [mem_00925134]
L_ok3:
        cmp dword ptr [esp+0x34], 0
        mov ecx, dword ptr [ebx+4]
        mov edx, dword ptr [esp+0x2c]
        mov eax, dword ptr [ecx+4*edx]
        mov dword ptr [esp+0x38], eax
        mov dword ptr [esp+0x30], 0
        jbe L_inner_end
L_inner:
        cmp edi, dword ptr [esp+0x28]
        jae L_inner_end
        mov ecx, dword ptr [esi+0x3c]
        test ecx, ecx
        je L_inv4
        mov eax, dword ptr [esi+0x40]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jb L_ok4
L_inv4:
        call dword ptr [mem_00925134]
L_ok4:
        mov ecx, dword ptr [esi+0x3c]
        fld qword ptr [ebp+8]
        mov edx, dword ptr [esp+0x38]
        mov ecx, dword ptr [ecx+4*edi]
        sub esp, 8
        fstp qword ptr [esp]
        push edx
        add edi, 1
        call ext_00508570
        mov eax, dword ptr [esp+0x30]
        add eax, 1
        cmp eax, dword ptr [esp+0x34]
        mov dword ptr [esp+0x30], eax
        jb L_inner
L_inner_end:
        mov edx, dword ptr [esp+0x2c]
        add edx, 1
        cmp edx, dword ptr [esp+0x24]
        mov dword ptr [esp+0x2c], edx
        jb L_outer
L_after_outer:
        cmp edi, dword ptr [esp+0x28]
        jae L_swap
L_tail:
        mov ecx, dword ptr [esi+0x3c]
        test ecx, ecx
        je L_inv5
        mov eax, dword ptr [esi+0x40]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jb L_ok5
L_inv5:
        call dword ptr [mem_00925134]
L_ok5:
        mov eax, dword ptr [esi+0x3c]
        mov ecx, dword ptr [eax+4*edi]
        mov eax, dword ptr [ebx+4]
        add edi, 1
        test eax, eax
        mov dword ptr [esp+0x38], ecx
        je L_inv6
        mov edx, dword ptr [ebx+8]
        sub edx, eax
        sar edx, 2
        jne L_ok6
L_inv6:
        call dword ptr [mem_00925134]
L_ok6:
        mov eax, dword ptr [ebx+4]
        fld qword ptr [ebp+8]
        mov ecx, dword ptr [eax]
        sub esp, 8
        fstp qword ptr [esp]
        push ecx
        mov ecx, dword ptr [esp+0x44]
        call ext_00508570
        cmp edi, dword ptr [esp+0x28]
        jb L_tail
L_swap:
        mov edx, dword ptr [esi+0x3c]
        mov eax, dword ptr [ebx+4]
        mov dword ptr [ebx+4], edx
        mov dword ptr [esi+0x3c], eax
        mov ecx, dword ptr [esi+0x40]
        mov eax, dword ptr [ebx+8]
        mov dword ptr [ebx+8], ecx
        mov dword ptr [esi+0x40], eax
        mov edx, dword ptr [esi+0x44]
        mov eax, dword ptr [ebx+0xc]
        mov dword ptr [ebx+0xc], edx
        mov ecx, esi
        mov dword ptr [esi+0x44], eax
        call ext_00510BD0
        mov eax, dword ptr [ebx+4]
        test eax, eax
        je L_inv7
        mov ecx, dword ptr [ebx+8]
        sub ecx, eax
        sar ecx, 2
        jne L_ok7
L_inv7:
        call dword ptr [mem_00925134]
L_ok7:
        mov edx, dword ptr [ebx+4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [esi+0xc]
        push eax
        call ext_0050E350
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}
