// Decompiled translation unit: src/leaf/decompiled_860000.cpp

// [0x00864F30] sub_00864F30 (32 bytes)
extern "C" int mem_00AB98EC;

extern "C" __declspec(naked) int __cdecl fn_00864F30(void) {
    __asm {
        mov eax, dword ptr [esp + 0x14]
        xor ecx, ecx
        mov word ptr [eax], 0xcf
        mov word ptr [eax + 0x2], cx
        mov word ptr [eax + 0x4], cx
        mov word ptr [eax + 0x6], cx
        xor eax, eax
        mov dword ptr [mem_00AB98EC], ecx
        ret
    }
}

// [0x0086AF30] sub_0086AF30 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086AF30(void) {
    __asm {
        mov edx, dword ptr [esp + 0xc]
        test edx, edx
        je done
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        push esi
    copy_loop:
        mov esi, dword ptr [ecx]
        add ecx, 0x4
        mov dword ptr [eax], esi
        add eax, 0x4
        dec edx
        jne copy_loop
        pop esi
    done:
        ret
    }
}

// [0x00867360] sub_00867360 (42 bytes)
extern "C" __declspec(naked) int __cdecl fn_00867360(const char* s) {
    __asm {
        push esi
        xor eax, eax
        xor edx, edx
        mov esi, dword ptr [esp + 0x8]
        mov cl, byte ptr [esi]
        cmp cl, 0x30
        jl done
    loop_top:
        cmp cl, 0x39
        jg done
        movsx ecx, cl
        lea eax, [eax + 4*eax]
        inc edx
        lea eax, [ecx + 2*eax - 0x30]
        mov cl, byte ptr [edx + esi]
        cmp cl, 0x30
        jge loop_top
    done:
        pop esi
        ret
    }
}

// [0x0086B1C0] sub_0086B1C0 (58 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086B1C0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ebx]
        _emit 0xc1
        _emit 0xe8
        _emit 0x01
        mov dword ptr [ebx], eax
        mov eax, dword ptr [ebx + 0x4]
        _emit 0xc1
        _emit 0xd8
        _emit 0x01
        mov dword ptr [ebx + 0x4], eax
        mov eax, dword ptr [ebx + 0x8]
        _emit 0xc1
        _emit 0xd8
        _emit 0x01
        mov dword ptr [ebx + 0x8], eax
        mov eax, dword ptr [ebx + 0xc]
        _emit 0xc1
        _emit 0xd8
        _emit 0x01
        mov dword ptr [ebx + 0xc], eax
        mov eax, dword ptr [ebx + 0x10]
        _emit 0xc1
        _emit 0xd8
        _emit 0x01
        mov dword ptr [ebx + 0x10], eax
        jae done
        or dword ptr [ebx], 0x20000000
    done:
        pop ebx
        ret
    }
}

// [0x0086F0E0] sub_0086F0E0 (61 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086F0E0(unsigned int* p) {
    __asm {
        mov edx, dword ptr [esp + 4]
        push esi
        mov si, 13h
    L_not:
        movsx eax, si
        lea eax, [edx + 4*eax]
        mov ecx, dword ptr [eax]
        not ecx
        and ecx, 0ffffh
        dec si
        mov dword ptr [eax], ecx
        jns short L_not
        mov si, 13h
    L_inc:
        movsx eax, si
        lea ecx, [edx + 4*eax]
        mov eax, dword ptr [ecx]
        inc eax
        mov dword ptr [ecx], eax
        and eax, 0ffffh
        jne short L_done
        dec si
        mov dword ptr [ecx], eax
        jns short L_inc
    L_done:
        pop esi
        ret
    }
}

// [0x0086B180] sub_0086B180 (63 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086B180(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push ebx
        push esi
        push edi
        mov si, 0x4
        mov edi, dword ptr [edx]
        and edi, 0x20000000
        shr edi, 0x1d
    loop_top:
        movsx eax, si
        lea ecx, [edx + 4*eax]
        mov eax, dword ptr [ecx]
        mov ebx, eax
        add eax, eax
        and ebx, 0x80000000
        or eax, edi
        shr ebx, 0x1f
        mov dword ptr [ecx], eax
        dec si
        mov edi, ebx
        jns loop_top
        pop edi
        and dword ptr [edx], 0x3fffffff
        pop esi
        pop ebx
        ret
    }
}

// [0x00868690] sub_00868690 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_00868690(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 // mov edx, dword ptr [esp + 0x8]
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        __asm _emit 0x56 // push esi
        __asm _emit 0x8B __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 // mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x85 __asm _emit 0xF6 // test esi, esi
        __asm _emit 0x89 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x0C // mov dword ptr [esp + 0xc], edx
        __asm _emit 0x74 __asm _emit 0x39 // je 0x4E
        __asm _emit 0x83 __asm _emit 0xFE __asm _emit 0x40 // cmp esi, 0x40
        __asm _emit 0x72 __asm _emit 0x06 // jb 0x20
        __asm _emit 0x33 __asm _emit 0xC0 // xor eax, eax
        __asm _emit 0x33 __asm _emit 0xD2 // xor edx, edx
        __asm _emit 0x5E // pop esi
        __asm _emit 0xC3 // ret
        __asm _emit 0x83 __asm _emit 0xFE __asm _emit 0x1F // cmp esi, 0x1f
        __asm _emit 0x57 // push edi
        __asm _emit 0x76 __asm _emit 0x0E // jbe 0x34
        __asm _emit 0x8D __asm _emit 0x4E __asm _emit 0xE0 // lea ecx, [esi - 0x20]
        __asm _emit 0x33 __asm _emit 0xFF // xor edi, edi
        __asm _emit 0xD3 __asm _emit 0xEA // shr edx, cl
        __asm _emit 0x8B __asm _emit 0xC2 // mov eax, edx
        __asm _emit 0x8B __asm _emit 0xD7 // mov edx, edi
        __asm _emit 0x5F // pop edi
        __asm _emit 0x5E // pop esi
        __asm _emit 0xC3 // ret
        __asm _emit 0x8B __asm _emit 0xFA // mov edi, edx
        __asm _emit 0x8B __asm _emit 0xCE // mov ecx, esi
        __asm _emit 0xD3 __asm _emit 0xEF // shr edi, cl
        __asm _emit 0xB9 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, 0x20
        __asm _emit 0x2B __asm _emit 0xCE // sub ecx, esi
        __asm _emit 0xD3 __asm _emit 0xE2 // shl edx, cl
        __asm _emit 0x8B __asm _emit 0xCE // mov ecx, esi
        __asm _emit 0xD3 __asm _emit 0xE8 // shr eax, cl
        __asm _emit 0x0B __asm _emit 0xD0 // or edx, eax
        __asm _emit 0x8B __asm _emit 0xC2 // mov eax, edx
        __asm _emit 0x8B __asm _emit 0xD7 // mov edx, edi
        __asm _emit 0x5F // pop edi
        __asm _emit 0x5E // pop esi
        __asm _emit 0xC3 // ret
    }
}

// [0x0086AEB0] sub_0086AEB0 (80 bytes)
extern "C" __declspec(naked) int __cdecl fn_0086AEB0(void) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        test esi, esi
        je zero_ret
        mov ebx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x10]
        dec esi
        mov eax, dword ptr [edi + 4*esi]
        mov ecx, dword ptr [ebx + 4*esi]
        lea edx, [ebx + 4*esi]
        cmp eax, ecx
        ja gt_ret
        sub edi, ebx
        cmp eax, ecx
    check_jb:
        jb lt_ret
        test esi, esi
        je zero_ret
        mov eax, dword ptr [edi + edx - 0x4]
        mov ecx, dword ptr [edx - 0x4]
        sub edx, 0x4
        dec esi
        cmp eax, ecx
        jbe check_jb
    gt_ret:
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret
    lt_ret:
        pop edi
        pop esi
        or eax, -0x1
        pop ebx
        ret
    zero_ret:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x00860E90] sub_00860E90 (96 bytes)
extern "C" int mem_00AB9650;

extern "C" __declspec(naked) void __cdecl fn_00860E90(char* out, const unsigned char* in, int len) {
    __asm {
        push ebx
        xor edx, edx
        push esi
        xor ecx, ecx
        mov eax, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0x18]
        push ebp
        cmp edi, ecx
        jle L_0860E90_end
        mov esi, dword ptr [esp + 0x18]
L_0860E90_loop:
        mov bl, byte ptr [esi + ecx]
        mov ebp, dword ptr [mem_00AB9650]
        shr bl, 0x4
        inc edx
        and bl, 0xf
        inc edx
        movsx ebx, bl
        inc ecx
        mov bl, byte ptr [ebx + ebp]
        mov byte ptr [edx + eax - 0x2], bl
        xor ebx, ebx
        mov bl, byte ptr [esi + ecx - 0x1]
        mov ebp, dword ptr [mem_00AB9650]
        and ebx, 0xf
        cmp ecx, edi
        mov bl, byte ptr [ebx + ebp]
        mov byte ptr [edx + eax - 0x1], bl
        jl L_0860E90_loop
        pop ebp
        mov byte ptr [edx + eax], 0
        pop edi
        pop esi
        pop ebx
        ret
L_0860E90_end:
        pop ebp
        mov byte ptr [edx + eax], 0
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00865C00] sub_00865C00 (122 bytes)
extern "C" __declspec(naked) void __cdecl fn_00865C00() {
    __asm {
        sub esp, 4
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 8]
        push ebx
        push esi
        push edi
        mov esi, dword ptr [esp + 18h]
        push ebp
        add esi, 64h
    loop_00865C1A:
        mov ebp, dword ptr [edx]
        mov eax, dword ptr [edx + 4]
        sub ebp, dword ptr [esi]
        mov ebx, eax
        shr ebx, 7
        mov edi, ebp
        and bl, 1fh
        mov cl, 20h
        sub cl, bl
        sub esi, 8
        shl edi, cl
        mov cl, bl
        shr ebp, cl
        or edi, ebp
        mov cl, 20h
        xor edi, eax
        mov eax, edi
        mov dword ptr [edx], edi
        shr eax, 4
        mov ebx, dword ptr [esi + 4]
        add ebx, dword ptr [edx + 4]
        and al, 1fh
        mov ebp, ebx
        sub cl, al
        shl ebp, cl
        mov cl, al
        shr ebx, cl
        or ebp, ebx
        xor ebp, edi
        dec dword ptr [esp + 10h]
        mov dword ptr [edx + 4], ebp
        jne loop_00865C1A
        mov eax, dword ptr [esp + 1ch]
        pop ebp
        pop edi
        pop esi
        mov ecx, dword ptr [eax + 4]
        sub dword ptr [edx], ecx
        mov ebx, dword ptr [eax]
        sub dword ptr [edx + 4], ebx
        pop ebx
        add esp, 4
        ret
    }
}

// [0x00860210] sub_00860210 (141 bytes)
extern "C" __declspec(naked) unsigned short __cdecl fn_00860210(unsigned char a, unsigned char* buf, unsigned int len) {
    __asm {
        sub esp, 0x4
        mov cl, byte ptr [esp + 0x8]
        push ebx
        mov edx, dword ptr [esp + 0x10]
        push esi
        xor si, si
        push edi
        cmp dword ptr [esp + 0x1c], 0x0
        push ebp
        je L_skip_xor
L_xor_loop:
        movzx eax, si
        inc si
        xor byte ptr [eax + edx], cl
        movzx ebx, si
        cmp ebx, dword ptr [esp + 0x20]
        jb L_xor_loop
L_skip_xor:
        xor ax, ax
        mov al, cl
        and ax, 0xf
        mov word ptr [esp + 0x12], ax
L_outer:
        mov di, word ptr [esp + 0x20]
        xor cl, cl
        dec di
        mov esi, edx
        cmp word ptr [esp + 0x20], 0x0
        je L_skip_rot
L_rot_loop:
        mov bl, byte ptr [esi]
        mov ebp, esi
        inc esi
        mov al, cl
        shl al, 0x7
        mov cl, bl
        __asm _emit 0xc0
        __asm _emit 0xeb
        __asm _emit 0x01
        and cl, 0x1
        or bl, al
        mov byte ptr [ebp], bl
        mov bp, di
        dec di
        test bp, bp
        jne L_rot_loop
L_skip_rot:
        test cl, cl
        je L_no_wrap
        or byte ptr [edx], -0x80
L_no_wrap:
        mov ax, word ptr [esp + 0x12]
        dec word ptr [esp + 0x12]
        test ax, ax
        jne L_outer
        xor ax, ax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x4
        ret
    }
}

// [0x0086B700] sub_0086B700 (333 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086B700(void) {
    __asm {
        sub esp, 0x5c
        push ebx
        push esi
        mov ebx, dword ptr [esp + 0x6c]
        push edi
        push ebp
        cmp ebx, 0x13d
        jne general
        xor di, di
        mov edx, dword ptr [esp + 0x70]
        mov ecx, dword ptr [esp + 0x78]
    copy_loop:
        movsx eax, di
        shl eax, 0x2
        inc di
        mov esi, dword ptr [eax + edx]
        mov dword ptr [ecx + eax], esi
        movsx eax, di
        cmp eax, 0x9
        jbe copy_loop
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x5c
        ret
    general:
        xor ecx, ecx
        xor edx, edx
    zero_loop:
        movsx eax, cx
        inc cx
        mov dword ptr [esp + 4*eax + 0x18], edx
        movsx ebp, cx
        cmp ebp, 0x14
        jbe zero_loop
        mov si, 0x14
        mov eax, ebx
        shr eax, 0x5
        sub si, ax
        and bx, 0x1f
        mov word ptr [esp + 0x16], ax
        je bx_zero
        mov ax, 0x20
        mov edx, dword ptr [esp + 0x70]
        mov word ptr [esp + 0x14], 0x9
        sub ax, bx
        mov word ptr [esp + 0x12], ax
    shl_loop:
        movsx edi, si
        movsx eax, word ptr [esp + 0x14]
        dec si
        mov cl, bl
        mov eax, dword ptr [edx + 4*eax]
        mov ebp, eax
        shl ebp, cl
        mov cl, byte ptr [esp + 0x12]
        or dword ptr [esp + 4*edi + 0x18], ebp
        movsx edi, si
        shr eax, cl
        or dword ptr [esp + 4*edi + 0x18], eax
        dec word ptr [esp + 0x14]
        jns shl_loop
        jmp stage_c
    bx_zero:
        mov cx, 0x9
        mov edx, dword ptr [esp + 0x70]
    zero_shift_loop:
        movsx edi, si
        movsx eax, cx
        dec si
        mov ebx, dword ptr [edx + 4*eax]
        or dword ptr [esp + 4*edi + 0x18], ebx
        dec cx
        jns zero_shift_loop
    stage_c:
        mov dx, 0xb
        mov ecx, 0x14
        movsx eax, word ptr [esp + 0x16]
        mov si, 0x14
        sub ecx, eax
        cmp ecx, 0x14
        ja finish
    c_loop:
        movsx eax, si
        movsx ebp, dx
        dec dx
        lea edi, [esp + 4*eax + 0x18]
        dec si
        mov ebx, dword ptr [esp + 4*ebp + 0x18]
        movsx eax, dx
        shr ebx, 0x1d
        or ebx, dword ptr [edi]
        mov dword ptr [edi], ebx
        mov eax, dword ptr [esp + 4*eax + 0x18]
        shl eax, 0x3
        or eax, ebx
        movsx ebx, si
        mov dword ptr [edi], eax
        cmp ebx, ecx
        jae c_loop
    finish:
        mov eax, dword ptr [esp + 0x44]
        mov esi, 0x0
        and eax, 0x10000000
        mov ecx, dword ptr [esp + 0x78]
        cmp eax, 0x1
        adc esi, -0x1
        xor di, di
    out_loop:
        movsx eax, di
        inc di
        mov edx, dword ptr [esp + 4*eax + 0x44]
        xor edx, esi
        mov dword ptr [ecx + 4*eax], edx
        movsx eax, di
        cmp eax, 0x9
        jbe out_loop
        pop ebp
        and dword ptr [ecx], 0x0fffffff
        pop edi
        pop esi
        pop ebx
        add esp, 0x5c
        ret
    }
}

extern "C" int mem_00BC7390;
extern "C" int mem_00BC760A;

// [0x0086B510] sub_0086B510 (495 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086B510(void) {
    __asm {
        xor dx, dx
        mov ecx, dword ptr [esp + 0xc]
        sub esp, 0xc90
        push ebx
        push esi
        push edi
        push ebp
    loc_86B521:
        movsx eax, dx
        inc dx
        mov dword ptr [ecx + 4*eax], 0
        movsx ebx, dx
        cmp ebx, 5
        jb loc_86B521
        lea eax, [esp + 0x34]
        mov edx, dword ptr [esp + 0xca8]
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esp + 0x30], edx
        mov ebx, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x2c]
        mov eax, dword ptr [ebx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [edx + 0x4], eax
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x8], eax
        mov eax, dword ptr [ebx + 0xc]
        mov dword ptr [edx + 0xc], eax
        mov eax, dword ptr [ebx + 0x10]
        mov dword ptr [edx + 0x10], eax
        lea eax, [esp + 0x48]
        mov edx, dword ptr [esp + 0xca4]
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x28], edx
        mov ebx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [ebx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [edx + 0x4], eax
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x8], eax
        mov eax, dword ptr [ebx + 0xc]
        mov dword ptr [edx + 0xc], eax
        mov eax, dword ptr [ebx + 0x10]
        mov dword ptr [edx + 0x10], eax
        mov si, 1
    loc_86B5A7:
        movsx eax, si
        shl eax, 2
        lea eax, [eax + 4*eax]
        lea edi, [esp + eax + 0x48]
        lea edx, [esp + eax + 0x34]
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x20], edx
        mov ebx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [ebx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [edx + 0x4], eax
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x8], eax
        mov eax, dword ptr [ebx + 0xc]
        mov dword ptr [edx + 0xc], eax
        mov eax, dword ptr [ebx + 0x10]
        mov dword ptr [edx + 0x10], eax
        mov dword ptr [esp + 0x18], edi
        mov ebx, dword ptr [esp + 0x18]
        mov eax, dword ptr [ebx]
        _emit 0xc1
        _emit 0xe8
        _emit 0x01
        mov dword ptr [ebx], eax
        mov eax, dword ptr [ebx + 0x4]
        _emit 0xc1
        _emit 0xd8
        _emit 0x01
        mov dword ptr [ebx + 0x4], eax
        mov eax, dword ptr [ebx + 0x8]
        _emit 0xc1
        _emit 0xd8
        _emit 0x01
        mov dword ptr [ebx + 0x8], eax
        mov eax, dword ptr [ebx + 0xc]
        _emit 0xc1
        _emit 0xd8
        _emit 0x01
        mov dword ptr [ebx + 0xc], eax
        mov eax, dword ptr [ebx + 0x10]
        _emit 0xc1
        _emit 0xd8
        _emit 0x01
        mov dword ptr [ebx + 0x10], eax
        jae loc_86B61F
        or dword ptr [ebx], 0x20000000
    loc_86B61F:
        inc si
        cmp si, 0x9e
        jl loc_86B5A7
        mov ax, word ptr [mem_00BC7390]
        movsx eax, ax
        xor dx, dx
        lea edi, [eax + 4*eax]
    loc_86B63B:
        movsx esi, dx
        inc dx
        lea eax, [edi + esi]
        movsx ebx, dx
        mov eax, dword ptr [esp + 4*eax + 0x48]
        and eax, dword ptr [esp + 4*esi + 0x34]
        cmp ebx, 5
        mov dword ptr [ecx + 4*esi], eax
        jb loc_86B63B
        mov word ptr [esp + 0x12], 1
    loc_86B65D:
        lea eax, [esp + 0x34]
        mov dword ptr [esp + 0x14], eax
        mov ebx, dword ptr [esp + 0x14]
        mov eax, dword ptr [ebx]
        _emit 0xc1
        _emit 0xe8
        _emit 0x01
        mov dword ptr [ebx], eax
        mov eax, dword ptr [ebx + 0x4]
        _emit 0xc1
        _emit 0xd8
        _emit 0x01
        mov dword ptr [ebx + 0x4], eax
        mov eax, dword ptr [ebx + 0x8]
        _emit 0xc1
        _emit 0xd8
        _emit 0x01
        mov dword ptr [ebx + 0x8], eax
        mov eax, dword ptr [ebx + 0xc]
        _emit 0xc1
        _emit 0xd8
        _emit 0x01
        mov dword ptr [ebx + 0xc], eax
        mov eax, dword ptr [ebx + 0x10]
        _emit 0xc1
        _emit 0xd8
        _emit 0x01
        mov dword ptr [ebx + 0x10], eax
        jae loc_86B69C
        or dword ptr [ebx], 0x20000000
    loc_86B69C:
        movsx eax, word ptr [esp + 0x12]
        xor dx, dx
        add eax, eax
        mov di, word ptr mem_00BC7390[eax]
        movsx ebx, di
        mov ax, word ptr mem_00BC760A[eax]
        lea edi, [ebx + 4*ebx]
        movsx eax, ax
        lea esi, [eax + 4*eax]
    loc_86B6C0:
        movsx ebx, dx
        inc dx
        lea eax, [esi + ebx]
        lea ebp, [edi + ebx]
        mov eax, dword ptr [esp + 4*eax + 0x48]
        xor eax, dword ptr [esp + 4*ebp + 0x48]
        and eax, dword ptr [esp + 4*ebx + 0x34]
        xor dword ptr [ecx + 4*ebx], eax
        movsx ebx, dx
        cmp ebx, 5
        jb loc_86B6C0
        inc word ptr [esp + 0x12]
        cmp word ptr [esp + 0x12], 0x9e
        jl loc_86B65D
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0xc90
        ret
    }
}
