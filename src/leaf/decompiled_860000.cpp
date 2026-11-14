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

extern "C" void ext_0085D5F0();
extern "C" int mem_00AB9878;
extern "C" int mem_00AB964C;

// [0x00868180] sub_00868180 (108 bytes)
extern "C" __declspec(naked) int __cdecl fn_00868180() {
    __asm {
        sub esp, 0x190
        cmp dword ptr [mem_00AB9878], 0
        je L_86819B
        mov eax, 1
        add esp, 0x190
        ret
L_86819B:
        cmp dword ptr [mem_00AB964C], 0
        jne L_8681B9
        call ext_0085D5F0
        test eax, eax
        je L_8681B9
        mov eax, 1
        add esp, 0x190
        ret
L_8681B9:
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push eax
        push 0x101
        call dword ptr [mem_00AB964C]
        test eax, eax
        je L_8681D6
        xor eax, eax
        add esp, 0x190
        ret
L_8681D6:
        mov eax, 1
        add esp, 0x190
        mov dword ptr [mem_00AB9878], 1
        ret
    }
}

// [0x0086A2B0] sub_0086A2B0 (1360 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086A2B0(void) {
    __asm {
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x348
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        je L7F5
        mov ebp, dword ptr [esp + 0x36c]
        dec eax
        mov edx, dword ptr [ebp + 4*eax]
        lea ecx, [ebp + 4*eax]
        test edx, edx
        jne L2E9
    L2DA:
        mov edx, eax
        dec eax
        sub ecx, 0x4
        test edx, edx
        je L2E9
        cmp dword ptr [ecx], 0x0
        je L2DA
    L2E9:
        lea edx, [eax + 0x1]
        test edx, edx
        mov dword ptr [esp + 0x1c], edx
        je L7F5
        mov eax, dword ptr [ebp + 4*edx - 0x4]
        xor ecx, ecx
    L2FE:
        test eax, eax
        je L30A
        inc ecx
        shr eax, 1
        cmp ecx, 0x20
        jb L2FE
    L30A:
        mov eax, 0x20
        mov esi, edx
        sub eax, ecx
        lea ecx, [esp + 0x14c]
        mov dword ptr [esp + 0x34], eax
    L31E:
        mov dword ptr [ecx], 0x0
        add ecx, 0x4
        dec esi
        jne L31E
        mov ecx, dword ptr [esp + 0x368]
        mov ebx, dword ptr [esp + 0x364]
        xor esi, esi
        cmp eax, 0x20
        mov dword ptr [esp + 0x14], ecx
        lea edi, [esp + 0x14c]
        jae L399
        test ecx, ecx
        je L399
        mov ecx, 0x20
        sub ecx, eax
        mov dword ptr [esp + 0x28], ecx
    L359:
        mov edx, dword ptr [ebx]
        mov ecx, eax
        mov ebp, edx
        add ebx, 0x4
        shl ebp, cl
        add edi, 0x4
        or ebp, esi
        mov dword ptr [edi - 0x4], ebp
        test eax, eax
        je L37A
        mov ecx, dword ptr [esp + 0x28]
        shr edx, cl
        mov esi, edx
        jmp L37C
    L37A:
        xor esi, esi
    L37C:
        mov ecx, dword ptr [esp + 0x14]
        dec ecx
        mov dword ptr [esp + 0x14], ecx
        jne L359
        mov ecx, dword ptr [esp + 0x368]
        mov edx, dword ptr [esp + 0x1c]
        mov ebp, dword ptr [esp + 0x36c]
    L399:
        mov dword ptr [esp + 4*ecx + 0x14c], esi
        xor esi, esi
        cmp eax, 0x20
        mov dword ptr [esp + 0x14], edx
        mov edi, ebp
        lea ebx, [esp + 0x48]
        jae L3F5
        mov ecx, 0x20
        sub ecx, eax
        mov dword ptr [esp + 0x28], ecx
    L3BC:
        mov edx, dword ptr [edi]
        mov ecx, eax
        mov ebp, edx
        add edi, 0x4
        shl ebp, cl
        add ebx, 0x4
        or ebp, esi
        mov dword ptr [ebx - 0x4], ebp
        test eax, eax
        je L3DD
        mov ecx, dword ptr [esp + 0x28]
        shr edx, cl
        mov esi, edx
        jmp L3DF
    L3DD:
        xor esi, esi
    L3DF:
        mov ecx, dword ptr [esp + 0x14]
        dec ecx
        mov dword ptr [esp + 0x14], ecx
        jne L3BC
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x368]
    L3F5:
        mov edi, dword ptr [esp + 4*edx + 0x44]
        mov ebp, dword ptr [esp + 0x35c]
        test ecx, ecx
        mov dword ptr [esp + 0x2c], edi
        mov ebx, ecx
        mov esi, ebp
        je L418
    L40C:
        mov dword ptr [esi], 0x0
        add esi, 0x4
        dec ebx
        jne L40C
    L418:
        sub ecx, edx
        js L78A
        lea esi, [4*ecx]
        add edx, ecx
        lea eax, [esp + esi + 0x14c]
        lea edx, [esp + 4*edx + 0x14c]
        mov dword ptr [esp + 0x14], eax
        lea eax, [esp + 0x48]
        sub eax, esi
        lea esi, [esp + 0x14c]
        sub eax, esi
        lea esi, [esp + 0x14c]
        mov dword ptr [esp + 0x30], eax
        mov eax, ebp
        sub eax, esi
        inc ecx
        mov dword ptr [esp + 0x24], edx
        mov dword ptr [esp + 0x3c], eax
        mov dword ptr [esp + 0x28], ecx
        jmp L470
    L468:
        mov edi, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x24]
    L470:
        cmp edi, -0x1
        jne L480
        mov eax, dword ptr [edx]
        mov dword ptr [esp + 0x10], eax
        jmp L5AD
    L480:
        mov ecx, dword ptr [edx - 0x4]
        mov ebx, dword ptr [edx]
        inc edi
        mov eax, edi
        mov dword ptr [esp + 0x2c], edi
        shr eax, 0x10
        cmp ax, 0xffff
        mov dword ptr [esp + 0x20], eax
        jne L4A0
        mov eax, ebx
        shr eax, 0x10
        jmp L4AF
    L4A0:
        mov esi, eax
        mov eax, ebx
        and esi, 0xffff
        xor edx, edx
        inc esi
        div esi
    L4AF:
        mov ebp, dword ptr [esp + 0x2c]
        mov esi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x10], eax
        and eax, 0xffff
        and ebp, 0xffff
        mov edx, eax
        and esi, 0xffff
        imul edx, ebp
        imul eax, esi
        mov edi, edx
        mov dword ptr [esp + 0x18], eax
        shl edi, 0x10
        or eax, -0x1
        sub ecx, edi
        sub eax, edi
        cmp ecx, eax
        jbe L4E9
        dec ebx
    L4E9:
        mov edi, dword ptr [esp + 0x18]
        shr edx, 0x10
        add edx, edi
        sub ebx, edx
        mov edx, dword ptr [esp + 0x10]
    L4F8:
        cmp ebx, esi
        ja L507
        jne L51D
        mov eax, ebp
        shl eax, 0x10
        cmp ecx, eax
        jb L51D
    L507:
        mov eax, ebp
        or edi, -0x1
        shl eax, 0x10
        sub ecx, eax
        sub edi, eax
        cmp ecx, edi
        jbe L518
        dec ebx
    L518:
        sub ebx, esi
        inc edx
        jmp L4F8
    L51D:
        __asm _emit 0x66 __asm _emit 0x81 __asm _emit 0x7C __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0xFF __asm _emit 0xFF // cmp word ptr [esp + 0x20], 0xffff
        mov dword ptr [esp + 0x10], edx
        jne L52E
        mov eax, ebx
        jmp L541
    L52E:
        mov eax, ecx
        mov edx, ebx
        shr eax, 0x10
        shl edx, 0x10
        add eax, edx
        lea edi, [esi + 0x1]
        xor edx, edx
        div edi
    L541:
        mov edx, eax
        and edx, 0xffff
        mov edi, edx
        imul edx, esi
        imul edi, ebp
        or esi, -0x1
        sub ecx, edi
        sub esi, edi
        cmp ecx, esi
        jbe L55D
        dec ebx
    L55D:
        mov esi, edx
        or edi, -0x1
        shl esi, 0x10
        sub ecx, esi
        sub edi, esi
        cmp ecx, edi
        jbe L56E
        dec ebx
    L56E:
        shr edx, 0x10
        sub ebx, edx
        mov edx, dword ptr [esp + 0x2c]
    L577:
        test ebx, ebx
        ja L581
        jne L590
        cmp ecx, edx
        jb L590
    L581:
        or esi, -0x1
        sub ecx, edx
        sub esi, edx
        cmp ecx, esi
        jbe L58D
        dec ebx
    L58D:
        inc eax
        jmp L577
    L590:
        mov ecx, dword ptr [esp + 0x10]
        and eax, 0xffff
        and ecx, 0xffff
        shl ecx, 0x10
        add ecx, eax
        dec edx
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x2c], edx
    L5AD:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x20], 0x0
        test eax, eax
        je L69C
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        jbe L69C
        mov ebp, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        mov eax, ebp
        and ebp, 0xffff
        shr eax, 0x10
        and eax, 0xffff
        mov dword ptr [esp + 0x38], edx
        mov dword ptr [esp + 0x40], eax
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x18], eax
    L5F5:
        mov ecx, dword ptr [esp + 0x30]
        mov edi, dword ptr [esp + 0x40]
        mov dword ptr [esp + 0x44], 0x0
    L605:
        mov esi, dword ptr [ecx + edx]
        mov ecx, ebp
        mov eax, esi
        and esi, 0xffff
        shr eax, 0x10
        imul ecx, esi
        and eax, 0xffff
        imul edi, eax
        imul eax, ebp
        mov ebx, eax
        mov eax, dword ptr [esp + 0x40]
        imul eax, esi
        add eax, ebx
        cmp eax, ebx
        mov ebx, 0x10000
        jb L63B
        mov ebx, dword ptr [esp + 0x44]
    L63B:
        mov esi, eax
        shl esi, 0x10
        add ecx, esi
        shr eax, 0x10
        cmp ecx, esi
        jae L64A
        inc ebx
    L64A:
        mov esi, dword ptr [esp + 0x20]
        add eax, ebx
        add edi, eax
        mov eax, dword ptr [esp + 0x38]
        or ebx, -0x1
        mov eax, dword ptr [eax]
        sub ebx, esi
        sub eax, esi
        cmp ebx, eax
        mov ebx, eax
        sbb esi, esi
        sub ebx, ecx
        mov dword ptr [edx], eax
        mov dword ptr [edx], ebx
        mov eax, ebx
        or ebx, -0x1
        sub ebx, ecx
        neg esi
        cmp eax, ebx
        jbe L679
        inc esi
    L679:
        mov eax, dword ptr [esp + 0x18]
        add esi, edi
        mov dword ptr [esp + 0x20], esi
        mov esi, dword ptr [esp + 0x38]
        add esi, 0x4
        add edx, 0x4
        dec eax
        mov dword ptr [esp + 0x38], esi
        mov dword ptr [esp + 0x18], eax
        jne L5F5
    L69C:
        mov ebp, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x20]
        mov ebx, dword ptr [esp + 0x14]
        sub dword ptr [ebp], ecx
    L6AB:
        cmp dword ptr [ebp], 0x0
        jne L6EB
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [ebx + 4*edx - 0x4]
        lea esi, [edx - 0x1]
        mov ecx, dword ptr [esp + 4*esi + 0x48]
        lea edx, [esp + 4*esi + 0x48]
        cmp eax, ecx
        ja L6EB
        mov edi, ebx
        lea ebp, [esp + 0x48]
        sub edi, ebp
        cmp eax, ecx
    L6D2:
        jb L749
        test esi, esi
        je L6E7
        mov eax, dword ptr [edi + edx - 0x4]
        mov ecx, dword ptr [edx - 0x4]
        sub edx, 0x4
        dec esi
        cmp eax, ecx
        jbe L6D2
    L6E7:
        mov ebp, dword ptr [esp + 0x24]
    L6EB:
        mov eax, dword ptr [esp + 0x10]
        mov edi, ebx
        inc eax
        mov esi, ebx
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x1c]
        lea edx, [esp + 0x48]
        mov dword ptr [esp + 0x18], eax
        xor ecx, ecx
    L706:
        mov eax, dword ptr [esi]
        add esi, 0x4
        sub eax, ecx
        cmp eax, -0x1
        jne L71B
        or eax, eax
        sub eax, dword ptr [edx]
        add edx, 0x4
        jmp L731
    L71B:
        mov ecx, dword ptr [edx]
        or ebp, -0x1
        sub eax, ecx
        sub ebp, ecx
        cmp ebp, eax
        mov ebp, dword ptr [esp + 0x24]
        sbb ecx, ecx
        neg ecx
        add edx, 0x4
    L731:
        mov dword ptr [edi], eax
        mov eax, dword ptr [esp + 0x18]
        add edi, 0x4
        dec eax
        mov dword ptr [esp + 0x18], eax
        jne L706
        sub dword ptr [ebp], ecx
        jmp L6AB
    L749:
        mov ecx, dword ptr [esp + 0x3c]
        mov edx, dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0x24]
        mov eax, 0x4
        mov dword ptr [ecx + ebx], edx
        mov edx, dword ptr [esp + 0x30]
        sub esi, eax
        add edx, eax
        sub ebx, eax
        mov eax, dword ptr [esp + 0x28]
        dec eax
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x30], edx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x28], eax
        jne L468
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x1c]
    L78A:
        mov ebp, dword ptr [esp + 0x360]
        mov esi, dword ptr [esp + 0x370]
        mov ecx, ebp
    L79A:
        mov dword ptr [ecx], 0x0
        add ecx, 0x4
        dec esi
        jne L79A
        xor edi, edi
        cmp eax, 0x20
        mov ecx, edx
        jae L7F5
        mov esi, 0x20
        lea ebx, [esp + 0x14c]
        sub esi, eax
        sub ebx, ebp
        mov dword ptr [esp + 0x34], esi
        lea esi, [ebp + 4*edx]
    L7C7:
        mov edx, dword ptr [ebx + esi - 0x4]
        sub esi, 0x4
        dec ecx
        mov ebp, edx
        mov dword ptr [esp + 0x3c], ecx
        mov ecx, eax
        shr ebp, cl
        or ebp, edi
        test eax, eax
        mov dword ptr [esi], ebp
        je L7EB
        mov ecx, dword ptr [esp + 0x34]
        shl edx, cl
        mov edi, edx
        jmp L7ED
    L7EB:
        xor edi, edi
    L7ED:
        mov ecx, dword ptr [esp + 0x3c]
        test ecx, ecx
        jne L7C7
    L7F5:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x348
        ret
    }
}

// [0x0086CD00] sub_0086CD00 (32 bytes)
extern "C" void __cdecl ext_00859A90(void* p);
extern "C" void __cdecl ext_00859730(void* p);

extern "C" void __cdecl fn_0086CD00(void* self) {
    void** s = static_cast<void**>(self);
    if (s[1] != 0) {
        ext_00859A90(s[1]);
    }
    ext_00859730(self);
}

// [0x0086F160] sub_0086F160 (58 bytes)
extern "C" void ext_0086F020();
extern "C" void ext_0086F0E0();
extern "C" void ext_0086F120();
extern "C" __declspec(naked) void __cdecl fn_0086F160(...) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        sub esp, 0x50
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x00
        push eax
        push ecx
        call ext_0086F020
        lea ecx, [esp + 0x8]
        add esp, 0x8
        push ecx
        call ext_0086F0E0
        mov ecx, dword ptr [esp + 0x60]
        lea edx, [esp + 0x4]
        mov eax, dword ptr [esp + 0x58]
        add esp, 0x4
        push ecx
        push edx
        push eax
        call ext_0086F120
        add esp, 0x5c
        ret
    }
}

// [0x00860F60] sub_00860F60 (105 bytes)
extern "C" void ext_00860FD0();
extern "C" int mem_00AB98C8;
extern "C" int mem_00AB98EC;

extern "C" __declspec(naked) void __fastcall fn_00860F60(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebp
        xor edi, edi
        mov ebp, 0xabb380
    L60_top:
        cmp dword ptr [ebp], 0
        je L60_next
    L60_body:
        mov ax, word ptr [ebp - 0x8]
        mov esi, dword ptr [ebp]
        mov cx, word ptr [ebp - 0xa]
        push eax
        mov dx, word ptr [ebp - 0xc]
        push ecx
        push edx
        call ext_00860FD0
        add esp, 0xc
        cmp dword ptr [ebp], esi
        jne L60_ne
        inc ebx
        mov dword ptr [ebp], 0
        jmp L60_chk
    L60_ne:
        inc edi
    L60_chk:
        cmp dword ptr [ebp], 0
        jne L60_body
    L60_next:
        add ebp, 0x14
        cmp ebp, 0xac018c
        jbe L60_top
        mov eax, edi
        pop ebp
        mov dword ptr [mem_00AB98C8], 1
        mov dword ptr [mem_00AB98EC], 0
        pop edi
        pop esi
        pop ebx
        ret
    }
}
