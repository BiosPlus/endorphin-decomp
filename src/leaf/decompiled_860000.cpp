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

// [0x0086EDC0] sub_0086EDC0 (106 bytes)
extern "C" void ext_0086B200();
extern "C" void ext_0086B220();
extern "C" void ext_0086EAF0();
extern "C" __declspec(naked) void __fastcall fn_0086EDC0(void* self) {
    __asm {
        sub esp, 28h
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 34h]
        push edi
        push eax
        push esi
        xor di, di
        call ext_0086B220
        lea ecx, [esp + 24h]
        add esp, 8
        push ecx
        call ext_0086B200
        add esp, 4
    loop_top:
        movsx eax, di
        inc di
        lea ecx, [4*eax]
        mov edx, dword ptr [esi + ecx + 14h]
        lea eax, [esi + ecx]
        xor edx, dword ptr [eax]
        movsx eax, di
        mov dword ptr [esp + ecx + 1ch], edx
        cmp eax, 5
        jb loop_top
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 3ch]
        lea edx, [esp + 8]
        push eax
        mov eax, dword ptr [esp + 38h]
        push ecx
        push edx
        push eax
        call ext_0086EAF0
        add esp, 10h
        pop edi
        pop esi
        add esp, 28h
        ret
    }
}

// [0x00860EF0] sub_00860EF0 (108 bytes)
extern "C" void ext_0085E9E0();
extern "C" __declspec(naked) void __cdecl fn_00860EF0(void* arg1, unsigned char val) {
    __asm {
        mov dl, byte ptr [esp + 0x8]
        sub esp, 0xc
        xor ecx, ecx
        mov al, dl
        push ebx
        sub ah, ah
        mov bl, 0x64
        div bl
        test al, al
        je L_tens
        add al, 0x30
        mov ecx, 0x1
        mov byte ptr [esp + 0x4], al
        mov al, dl
        sub ah, ah
        div bl
        mov dl, ah
    L_tens:
        mov bl, 0xa
        mov al, dl
        sub ah, ah
        div bl
        test al, al
        jne L_write_tens
        test ecx, ecx
        je L_ones
    L_write_tens:
        add al, 0x30
        mov byte ptr [esp + ecx + 0x4], al
        inc ecx
    L_ones:
        mov bl, 0xa
        mov al, dl
        sub ah, ah
        div bl
        mov al, ah
        mov edx, dword ptr [esp + 0x14]
        add al, 0x30
        mov byte ptr [esp + ecx + 0x4], al
        mov byte ptr [esp + ecx + 0x5], 0x0
        lea ecx, [esp + 0x4]
        push ecx
        push edx
        call ext_0085E9E0
        add esp, 0x8
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x00860670] sub_00860670 (140 bytes)
extern "C" void ext_0085DE10();
extern "C" void ext_0085DE20();
extern "C" void ext_0085DF30(void*);
extern "C" void ext_00860700();
extern "C" void ext_00860870();
extern "C" int mem_00AB9878;
extern "C" int mem_00AB9880;
extern "C" int mem_00AB98A4;
extern "C" int mem_00AB98EC;
extern "C" int mem_00AB98AC;
extern "C" int mem_00ABAA40;

extern "C" __declspec(naked) int __cdecl fn_00860670() {
    __asm {
        xor ecx, ecx
        cmp dword ptr [mem_00AB9878], ecx
        jne L_860686
        mov dword ptr [mem_00AB9880], ecx
        mov dword ptr [mem_00AB98A4], ecx
    L_860686:
        mov dword ptr [mem_00AB98EC], 1
        call ext_0085DE10
        cmp dword ptr [mem_00AB9878], 0
        jne L_8606A1
        xor eax, eax
        ret
    L_8606A1:
        cmp dword ptr [mem_00AB98AC], 0
        jne L_8606D2
        push offset mem_00ABAA40
        call ext_0085DF30
        add esp, 4
        cmp dword ptr [mem_00AB98EC], 0x13
        jne L_8606C3
        xor eax, eax
        ret
    L_8606C3:
        call ext_0085DE20
        mov dword ptr [mem_00AB98AC], 1
    L_8606D2:
        call ext_00860870
        call ext_00860700
        mov eax, dword ptr [mem_00AB9880]
        add eax, dword ptr [mem_00AB98A4]
        jne L_8606EC
        xor eax, eax
        ret
    L_8606EC:
        mov dword ptr [mem_00AB98EC], 0
        mov eax, 1
        ret
    }
}

extern "C" void ext_0085D530();
extern "C" int ext_00865470();
extern "C" short mem_00BC667B;
extern "C" short mem_00BC6679;
extern "C" int mem_00AB98EC;

// [0x008658B0] sub_008658B0 (176 bytes)
extern "C" __declspec(naked) void __cdecl fn_008658B0(void* a1, void* a2) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push 8
        mov esi, dword ptr [esp + 0x10]
        test edi, edi
        push esi
        push 0xbc667d
        je L_8658E9
        call ext_0085D530
        add esp, 0xc
        push 8
        push edi
        push 0xbc6685
        call ext_0085D530
        mov word ptr [mem_00BC667B], 0x10
        add esp, 0xc
        jmp L_8658FA
    L_8658E9:
        call ext_0085D530
        mov word ptr [mem_00BC667B], 8
        add esp, 0xc
    L_8658FA:
        mov word ptr [mem_00BC6679], 0
        call ext_00865470
        cmp eax, 0x18
        je L_865947
        cmp eax, 0x19
        je L_86594E
        mov eax, dword ptr [mem_00AB98EC]
    L_865917:
        mov dword ptr [mem_00AB98EC], eax
        test eax, eax
        jne L_86595D
        push 8
        test edi, edi
        push 0xbc6396
        push esi
        je L_865955
        call ext_0085D530
        add esp, 0xc
        push 8
        push 0xbc639e
        push edi
        call ext_0085D530
        add esp, 0xc
        pop edi
        pop esi
        ret
    L_865947:
        mov eax, 0x98
        jmp L_865917
    L_86594E:
        mov eax, 0x99
        jmp L_865917
    L_865955:
        call ext_0085D530
        add esp, 0xc
    L_86595D:
        pop edi
        pop esi
        ret
    }
}

// [0x0086CE10] sub_0086CE10 (207 bytes)
extern "C" void ext_0085B330();

extern "C" __declspec(naked) void __cdecl fn_0086CE10(void) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        sub esp, 0x8
        cmp eax, 0x80
        jae L_80
        __asm _emit 0x88 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 // mov byte ptr [esp], al
        mov eax, 0x1
        jmp L_call
L_80:
        cmp eax, -0x1
        jne L_ff
        __asm _emit 0xc6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x80 // mov byte ptr [esp], -0x80
        mov eax, 0x1
        jmp L_call
L_ff:
        cmp eax, 0xff
        ja L_ffff
        mov byte ptr [esp + 0x1], al
        __asm _emit 0xc6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x81 // mov byte ptr [esp], -0x7f
        mov eax, 0x2
        jmp L_call
L_ffff:
        cmp eax, 0xffff
        ja L_ffffff
        mov ecx, eax
        mov byte ptr [esp + 0x2], al
        shr ecx, 0x8
        __asm _emit 0xc6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x82 // mov byte ptr [esp], -0x7e
        mov byte ptr [esp + 0x1], cl
        mov eax, 0x3
        jmp L_call
L_ffffff:
        cmp eax, 0xffffff
        ja L_max
        mov edx, eax
        mov ecx, eax
        shr edx, 0x10
        shr ecx, 0x8
        mov byte ptr [esp + 0x3], al
        __asm _emit 0xc6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x83 // mov byte ptr [esp], -0x7d
        mov byte ptr [esp + 0x1], dl
        mov byte ptr [esp + 0x2], cl
        mov eax, 0x4
        jmp L_call
L_max:
        mov edx, eax
        mov ecx, eax
        shr edx, 0x18
        mov byte ptr [esp + 0x1], dl
        mov edx, eax
        shr ecx, 0x10
        shr edx, 0x8
        mov byte ptr [esp + 0x4], al
        __asm _emit 0xc6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x84 // mov byte ptr [esp], -0x7c
        mov byte ptr [esp + 0x2], cl
        mov byte ptr [esp + 0x3], dl
        mov eax, 0x5
L_call:
        mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x00 // lea edx, [esp]
        push ecx
        push eax
        push 0x1
        push edx
        call ext_0085B330
        add esp, 0x18
        ret
    }
}

// [0x00866E50] sub_00866E50 (208 bytes)
extern "C" void ext_0085E030();
extern "C" void ext_0085E1F0();
extern "C" void ext_0085E690();
extern "C" void ext_0085F1F0();
extern "C" int mem_00AB9860;
extern "C" int mem_00BC6730;

extern "C" __declspec(naked) void __fastcall fn_00866E50(void* self) {
    __asm {
        sub esp, 0xcc
        mov dword ptr [mem_00AB9860], 0
        mov byte ptr [esp + 4], 0
        push esi
        push edi
        xor esi, esi
        push 0xbc67b8
        call ext_0085E1F0
        add esp, 4
        test eax, eax
        jl L_done

    L_loop:
        movsx eax, byte ptr [esi + 0xbc67b8]
        test eax, eax
        je L_delim
        cmp eax, 0x20
        je L_next
        cmp eax, 0x2c
        je L_delim

        lea eax, [esp + 0xc]
        push eax
        call ext_0085E1F0
        add esp, 4
        mov edi, eax
        mov al, byte ptr [esi + 0xbc67b8]
        push eax
        call ext_0085E690
        mov byte ptr [esp + edi + 0x10], al
        add esp, 4
        mov byte ptr [esp + edi + 0xd], 0
        jmp L_next

    L_delim:
        lea eax, [esp + 0xc]
        lea ecx, [esp + 0x70]
        push eax
        push ecx
        call ext_0085E030
        lea ecx, [esp + 0x10]
        lea edx, [esp + 0x78]
        add esp, 8
        push 0x10
        push ecx
        push edx
        call ext_0085F1F0
        mov byte ptr [esp + 0x18], 0
        add esp, 0xc
        push eax
        call dword ptr [mem_00BC6730]
        mov ecx, dword ptr [mem_00AB9860]
        inc dword ptr [mem_00AB9860]
        mov dword ptr [ecx*4 + 0xab9658], eax

    L_next:
        inc esi
        push 0xbc67b8
        call ext_0085E1F0
        add esp, 4
        cmp eax, esi
        jge L_loop

    L_done:
        pop edi
        pop esi
        add esp, 0xcc
        ret
    }
}

// [0x0086B2A0] sub_0086B2A0 (303 bytes)
extern "C" int mem_00BC7110;
extern "C" int mem_00BC724E;
extern "C" int mem_00BC7390;
extern "C" int mem_00BC760A;
extern "C" int mem_00BC760C;
extern "C" int mem_00BC7746;
extern "C" int mem_00BC7884;

extern "C" __declspec(naked) void __fastcall fn_0086B2A0(void* self) {
    __asm {
        mov cx, 0x10
        push ebx
        push esi
        mov ebx, 0xffff0000
        xor si, si
        push edi
        mov edi, dword ptr [esp + 0x10]

    loc_86B2B3:
        mov eax, ebx
        and eax, edi
        je loc_86B2BE
        add si, cx
        mov edi, eax

    loc_86B2BE:
        movsx eax, cx
        cdq
        sub eax, edx
        __asm _emit 0xc1 __asm _emit 0xf8 __asm _emit 0x01 // sar eax, 1
        mov cx, ax
        mov eax, ebx
        shr eax, cl
        xor ebx, eax
        test cx, cx
        jne loc_86B2B3

        mov ax, si
        pop edi
        pop esi
        pop ebx
        ret

        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00

        xor ax, ax
        push esi
        push edi
        mov ecx, 0xffffffff

    loc_86B2EA:
        movsx edx, ax
        inc ax
        mov word ptr [edx*2 + mem_00BC7110], cx
        cmp ax, 0x13d
        jl loc_86B2EA

        mov dx, 1
        xor si, si

    loc_86B304:
        movsx eax, dx
        add eax, eax
        mov ecx, 0x13d
        cdq
        mov word ptr [eax + mem_00BC7110], si
        inc si
        idiv ecx
        cmp si, cx
        jl loc_86B304

        mov word ptr [mem_00BC7390], 0x9e
        mov di, 1

    loc_86B32C:
        movsx eax, di
        inc di
        mov esi, 0x9e
        lea ecx, [eax*2]
        movsx eax, word ptr [ecx + mem_00BC7390 - 2]
        inc eax
        cdq
        idiv esi
        mov word ptr [ecx + mem_00BC7390], dx
        cmp di, 0x13d
        jl loc_86B32C

        mov word ptr [mem_00BC760A], 0xffff
        mov dx, 2
        mov word ptr [mem_00BC760C], si
        mov word ptr [mem_00BC7746], 1

    loc_86B373:
        movsx eax, dx
        inc dx
        add eax, eax
        mov si, word ptr [eax + mem_00BC7110]
        mov ecx, offset mem_00BC7390 - 4
        sub ecx, eax
        movsx edi, si
        mov ax, word ptr [ecx]
        mov word ptr [edi*2 + mem_00BC760A], ax
        movsx ecx, ax
        mov word ptr [ecx*2 + mem_00BC760A], si
        cmp dx, 0x9e
        jle loc_86B373

        mov ax, word ptr [mem_00BC724E]
        push 0x9d
        movsx ecx, ax
        mov word ptr [ecx*2 + mem_00BC760A], ax
        call fn_0086B2A0
        mov word ptr [mem_00BC7884], ax
        add esp, 4
        pop edi
        pop esi
        ret
    }
}

// [0x0086B3D0] sub_0086B3D0 (320 bytes)
extern "C" __declspec(naked) void __fastcall fn_0086B3D0(void* self) {
    __asm {
        mov dx, 0x1
        sub esp, 0x8
        push ebx
        push esi
        xor si, si
        push edi
        push ebp
    loc_86B3DE:
        movsx eax, dx
        add eax, eax
        mov ecx, 0x13d
        cdq
        mov word ptr [eax + mem_00BC7110], si
        inc si
        idiv ecx
        cmp si, 0x9e
        jl loc_86B3DE
        cmp dx, 0x1
        jne loc_86B427
        mov dx, 0x13c
        xor si, si
    loc_86B408:
        movsx eax, dx
        add eax, eax
        mov ecx, 0x13d
        cdq
        mov word ptr [eax + mem_00BC7110], si
        inc si
        idiv ecx
        cmp si, 0x9e
        jl loc_86B408
        jmp loc_86B448
    loc_86B427:
        mov si, 0x9e
    loc_86B42B:
        movsx eax, dx
        add eax, eax
        mov ecx, 0x13d
        cdq
        mov word ptr [eax + mem_00BC7110], si
        inc si
        idiv ecx
        cmp si, 0x13c
        jl loc_86B42B
    loc_86B448:
        mov word ptr [mem_00BC760A], 0xffff
        mov edx, 0x1
        mov cx, dx
        mov word ptr [mem_00BC7390], dx
    loc_86B460:
        movsx eax, dx
        add eax, eax
        mov esi, 0x13d
        cdq
        idiv esi
        movsx eax, dx
        lea esi, [2*eax]
        mov eax, offset mem_00BC7390 - 4
        sub eax, esi
        mov ax, word ptr [eax]
        mov bx, word ptr [esi + mem_00BC7110 - 2]
        mov bp, word ptr [esi + mem_00BC7110 + 2]
        mov word ptr [esp + 0x10], ax
        mov eax, offset mem_00BC7390 - 8
        mov word ptr [esp + 0x14], bx
        sub eax, esi
        mov ax, word ptr [eax]
        xor edi, edi
        xor bx, bx
        mov word ptr [esp + 0x12], ax
        mov word ptr [esp + 0x16], bp
    loc_86B4B2:
        movsx eax, di
        mov ax, word ptr [esp + 2*eax + 0x10]
        cmp ax, 0x9e
        jge loc_86B4E0
        movsx esi, bx
        inc bx
        mov ebp, esi
        lea esi, [esi + 4*esi]
        shl esi, 0x4
        sub esi, ebp
        lea esi, [ebp + 4*esi]
        movsx ebp, cx
        add esi, ebp
        mov word ptr [2*esi + mem_00BC7390], ax
    loc_86B4E0:
        inc di
        cmp bx, 0x2
        jl loc_86B4B2
        inc cx
        cmp cx, 0x9e
        jl loc_86B460
        push 0x9d
        call fn_0086B2A0
        mov word ptr [mem_00BC7884], ax
        add esp, 0x4
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00860380] sub_00860380 (348 bytes)
extern "C" void ext_0085D530();
extern "C" void ext_0085E210();
extern "C" int mem_00BC6720;
extern "C" int mem_00BC70BC;
extern "C" int mem_00BC70F4;
extern "C" int mem_00AB9890;
extern "C" int mem_00AB98B4;
extern "C" int mem_00AB988C;
extern "C" int mem_00BC70C8;

extern "C" __declspec(naked) void __fastcall fn_00860380(void* self) {
    __asm {
        sub esp, 0x124
        mov eax, dword ptr [esp + 0x134]
        push ebx
        push esi
        cmp eax, 0x1
        mov esi, dword ptr [esp + 0x138]
        push edi
        mov dword ptr [esp + 0xc], 0x10
        mov byte ptr [esi], 0x0
        jge loc_8603ac
        mov eax, 0x1
    loc_8603ac:
        cmp eax, 0x1e
        jle loc_8603b6
        mov eax, 0x1e
    loc_8603b6:
        xor edx, edx
        mov ecx, dword ptr [mem_00BC6720]
        mov dword ptr [esp + 0x2c], edx
        mov dword ptr [esp + 0x14], eax
        lea eax, [esp + 0x14]
        mov dword ptr [esp + 0x30], ecx
        lea ecx, [esp + 0x2c]
        push eax
        push edx
        mov eax, dword ptr [mem_00BC6720]
        push edx
        inc eax
        inc dword ptr [esp + 0x38]
        push ecx
        mov dword ptr [esp + 0x28], edx
        push eax
        call dword ptr [mem_00BC70BC]
        test eax, eax
        jne loc_8603fb
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x124
        ret
    loc_8603fb:
        lea eax, [esp + 0xc]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0xc], 0x10
        mov ebx, dword ptr [esp + 0x134]
        push eax
        mov eax, dword ptr [esp + 0x13c]
        push ecx
        push 0x0
        and eax, 0xffff
        push eax
        mov ecx, dword ptr [mem_00BC6720]
        push ebx
        push ecx
        call dword ptr [mem_00BC70F4]
        cmp eax, 0x3e
        mov edi, eax
        je loc_860494
        cmp edi, 0x46
        je loc_860449
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x124
        ret
    loc_860449:
        lea eax, [esp + 0x10]
        push 0x4
        push ebx
        push eax
        call ext_0085D530
        add esp, 0xc
        cmp word ptr [esp + 0x10], 0x3101
        je loc_860474
        xor eax, eax
        pop edi
        pop esi
        inc dword ptr [mem_00AB9890]
        pop ebx
        add esp, 0x124
        ret
    loc_860474:
        mov ax, word ptr [esp + 0x12]
        cmp word ptr [mem_00AB98B4], ax
        je loc_860494
        xor eax, eax
        pop edi
        pop esi
        inc dword ptr [mem_00AB988C]
        pop ebx
        add esp, 0x124
        ret
    loc_860494:
        lea eax, [esp + 0x1e]
        push 0xa
        push eax
        lea ecx, [esi + 0x1]
        push ecx
        mov byte ptr [esi], 0x1
        call ext_0085D530
        mov cx, word ptr [esp + 0x34]
        lea edx, [esp + 0x28]
        mov word ptr [esi + 0xb], cx
        add esp, 0xc
        push 0xe
        push edx
        push offset mem_00BC70C8
        call ext_0085D530
        add esp, 0xc
        push esi
        call ext_0085E210
        add esp, 0x4
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x124
        ret
    }
}

// [0x008676F0] sub_008676F0 (348 bytes)
extern "C" void ext_0085D530();
extern "C" void ext_00867850();
extern "C" int mem_00BC63C8;
extern "C" int mem_00AB962C;
extern "C" int mem_00BC70BC;
extern "C" int mem_00BC70F4;

extern "C" __declspec(naked) void __fastcall fn_008676F0(void* self) {
    __asm {
        sub esp, 0x120
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x12c]
        push edi
        mov di, word ptr [esp + 0x134]
        push ebp
        mov dword ptr [esp + 0x10], 0x10
        mov word ptr [esi + 0x26], 0x8
        xor ebp, ebp
        mov word ptr [esi + 0x2a], bp
    loc_86771D:
        xor ebx, ebx
        mov eax, dword ptr [mem_00BC63C8]
        mov dword ptr [esp + 0x2c], ebp
        push 0x3
        mov dword ptr [esp + 0x34], eax
        push 0x1
        lea eax, [esp + 0x144]
        inc dword ptr [esp + 0x34]
        push eax
        call ext_00867850
        mov eax, dword ptr [esp + 0x148]
        mov dword ptr [esp + 0x20], ebp
        imul eax, dword ptr [mem_00AB962C]
        add esp, 0xc
        lea ecx, [eax + 4*eax]
        lea edx, [ecx + 4*ecx]
        lea ecx, [esp + 0x14]
        push ecx
        push ebp
        lea eax, [edx + 4*edx]
        push ebp
        shl eax, 0x3
        lea edx, [esp + 0x38]
        mov dword ptr [esp + 0x24], eax
        push edx
        mov eax, dword ptr [mem_00BC63C8]
        inc eax
        push eax
        call dword ptr [mem_00BC70BC]
        cmp eax, 0x1
        jl loc_86783F
        lea eax, [esp + 0x10]
        lea ecx, [esp + 0x1c]
        push eax
        mov edx, dword ptr [mem_00BC63C8]
        mov dword ptr [esp + 0x14], 0x10
        push ecx
        push ebp
        push 0x5fa
        push esi
        push edx
        call dword ptr [mem_00BC70F4]
        mov ecx, eax
        and ecx, 0xffff0000
        cmp ecx, 0x1
        sbb edx, edx
        neg edx
        cmp eax, -0x1
        jne loc_8677C6
        xor edx, edx
        jmp loc_86782A
    loc_8677C6:
        test ecx, ecx
        jne loc_86782A
        cmp word ptr [esi], 0x802a
        jne loc_867825
        cmp word ptr [esi + 0xda], di
        jne loc_867825
        cmp word ptr [esi + 0x22], 0x16
        ja loc_867825
        mov ax, word ptr [esi + 0x24]
        test ax, ax
        je loc_867808
        cmp ax, 0x41
        je loc_867808
        cmp ax, 0x100
        je loc_867808
        cmp ax, 0x11f
        je loc_867808
        cmp ax, 0x28
        je loc_867808
        cmp ax, 0x46
        jne loc_86781E
    loc_867808:
        lea eax, [esp + 0x20]
        push 0x4
        push eax
        lea ecx, [esi + 0xfa]
        push ecx
        call ext_0085D530
        add esp, 0xc
    loc_86781E:
        mov edx, 0x1
        jmp loc_86782A
    loc_867825:
        mov ebx, 0x1
    loc_86782A:
        test ebx, ebx
        jne loc_86771D
        mov eax, edx
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x120
        ret
    loc_86783F:
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x120
        ret
    }
}

// [0x0086EAF0] sub_0086EAF0 (367 bytes)
extern "C" void ext_0086B180();
extern "C" void ext_0086B510();
extern "C" void ext_0086B850();

extern "C" __declspec(naked) void __fastcall fn_0086EAF0(void* self) {
    __asm {
        sub esp, 0x64
        lea eax, [esp + 0x28]
        push ebx
        push esi
        push edi
        push ebp
        push eax
        call ext_0086B200
        lea eax, [esp + 0x50]
        add esp, 0x4
        push eax
        call ext_0086B200
        xor cx, cx
        mov ebx, dword ptr [esp + 0x80]
        mov esi, dword ptr [esp + 0x7c]
        add esp, 0x4
    loc_86EB1F:
        movsx eax, cx
        inc cx
        lea edi, [4*eax]
        lea eax, [edi + ebx]
        lea edx, [edi + esi]
        mov ebp, dword ptr [eax]
        mov eax, dword ptr [eax + 0x14]
        xor ebp, dword ptr [edx]
        xor eax, dword ptr [edx + 0x14]
        movsx edx, cx
        mov dword ptr [esp + edi + 0x38], ebp
        mov dword ptr [esp + edi + 0x4c], eax
        cmp edx, 0x5
        jb loc_86EB1F
        lea eax, [esp + 0x60]
        lea ecx, [esp + 0x38]
        push eax
        push ecx
        call ext_0086B850
        lea ecx, [esp + 0x2c]
        lea edx, [esp + 0x54]
        lea eax, [esp + 0x68]
        add esp, 0x8
        push ecx
        push edx
        push eax
        call ext_0086B510
        lea ecx, [esp + 0x1c]
        lea edx, [esp + 0x30]
        add esp, 0xc
        push ecx
        push edx
        call ext_0086B220
        lea ecx, [esp + 0x18]
        add esp, 0x8
        push ecx
        call ext_0086B180
        mov ecx, dword ptr [esp + 0x88]
        add esp, 0x4
        cmp word ptr [ecx], 0
        je loc_86EBD1
        xor dx, dx
        mov edi, dword ptr [esp + 0x80]
    loc_86EBAA:
        movsx eax, dx
        shl eax, 0x2
        inc dx
        mov ebp, dword ptr [eax + ecx + 0x2]
        xor ebp, dword ptr [eax + ebx]
        xor ebp, dword ptr [eax + esi]
        xor ebp, dword ptr [esp + eax + 0x10]
        xor ebp, dword ptr [esp + eax + 0x24]
        mov dword ptr [eax + edi], ebp
        movsx eax, dx
        cmp eax, 0x5
        jb loc_86EBAA
        jmp loc_86EBFC
    loc_86EBD1:
        xor cx, cx
        mov edi, dword ptr [esp + 0x80]
    loc_86EBDB:
        movsx eax, cx
        shl eax, 0x2
        inc cx
        mov edx, dword ptr [eax + ebx]
        xor edx, dword ptr [eax + esi]
        xor edx, dword ptr [esp + eax + 0x10]
        xor edx, dword ptr [esp + eax + 0x24]
        mov dword ptr [eax + edi], edx
        movsx eax, cx
        cmp eax, 0x5
        jb loc_86EBDB
    loc_86EBFC:
        xor dx, dx
    loc_86EBFF:
        movsx eax, dx
        shl eax, 0x2
        inc dx
        mov ecx, dword ptr [eax + edi]
        xor ecx, dword ptr [eax + esi]
        mov dword ptr [esp + eax + 0x38], ecx
        movsx eax, dx
        cmp eax, 0x5
        jb loc_86EBFF
        lea eax, [esp + 0x10]
        lea ecx, [esp + 0x24]
        lea edx, [esp + 0x38]
        push eax
        push ecx
        push edx
        call ext_0086B510
        xor dx, dx
        add esp, 0xc
    loc_86EC33:
        movsx eax, dx
        inc dx
        mov ebx, dword ptr [esi + 4*eax + 0x14]
        xor ebx, dword ptr [esp + 4*eax + 0x10]
        lea ecx, [4*eax]
        lea eax, [ecx + edi]
        xor ebx, dword ptr [eax]
        mov dword ptr [eax + 0x14], ebx
        movsx eax, dx
        cmp eax, 0x5
        jb loc_86EC33
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x64
        ret
    }
}

// [0x00867CA0] sub_00867CA0 (397 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_0085D560();
extern "C" void ext_00867E30();
extern "C" void ext_008681F0();
extern "C" void ext_00868510();
extern "C" int mem_00924210;
extern "C" __declspec(naked) int __cdecl fn_00867CA0(void* a1) {
    __asm {
        sub esp, 0x8
        push ebx
        push esi
        push edi
        push ebp
        call ext_00867E30
        test eax, eax
        je L_alloc
        mov eax, 0x8
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
L_alloc:
        push 0x100
        call ext_0085D560
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x18], eax
        add esp, 0x4
        xor esi, esi
        mov ebx, 0x4
        push 0x100
        push edi
        push eax
        call ext_0085D530
        mov word ptr [esp + 0x1e], si
        add esp, 0xc
L_loop1:
        push 0x4
        lea eax, [edi + 0xee]
        push 0x0
        dec ebx
        push eax
        call ext_0085D510
        add esp, 0xc
        lea eax, [edi + 0xf2]
        push 0x6
        push 0xff
        push eax
        call ext_0085D510
        add esp, 0xc
        mov word ptr [edi + 0x18], 0x3e
        push edi
        call ext_008681F0
        add esp, 0x4
        test eax, eax
        jne L_restore
        test ebx, ebx
        jne L_loop1
        test eax, eax
        jne L_restore
        mov ebx, 0x40
L_loop2:
        push 0x4
        lea eax, [edi + 0xee]
        push 0x0
        push eax
        call ext_0085D510
        add esp, 0xc
        lea eax, [edi + 0xf2]
        push 0x6
        push 0xff
        push eax
        call ext_0085D510
        add esp, 0xc
        mov word ptr [edi + 0x18], 0x9
        push edi
        call ext_008681F0
        add esp, 0x4
        mov ebp, eax
        test ebp, ebp
        jne L_after2
        mov ax, word ptr [edi + 0x22]
        push edi
        mov word ptr [edi + 0x18], 0x3d
        add si, word ptr [edi + 0x38]
        add word ptr [esp + 0x16], ax
        call ext_008681F0
        add esp, 0x4
L_after2:
        dec ebx
        test ebp, ebp
        jne L_phase3
        test ebx, ebx
        jne L_loop2
L_phase3:
        mov ebx, 0x4
L_loop3:
        push 0x4
        lea eax, [edi + 0xee]
        push 0x0
        dec ebx
        push eax
        call ext_0085D510
        add esp, 0xc
        lea eax, [edi + 0xf2]
        push 0x6
        push 0xff
        push eax
        call ext_0085D510
        add esp, 0xc
        mov word ptr [edi + 0x18], 0x3e
        push edi
        call ext_008681F0
        add esp, 0x4
        test eax, eax
        jne L_restore
        test ebx, ebx
        jne L_loop3
L_restore:
        mov eax, dword ptr [esp + 0x14]
        push 0x100
        push eax
        push edi
        call ext_0085D530
        mov eax, dword ptr [esp + 0x20]
        add esp, 0xc
        push eax
        call dword ptr [mem_00924210]
        mov cx, word ptr [esp + 0x12]
        mov word ptr [edi + 0x22], cx
        mov word ptr [edi + 0x38], si
        test si, si
        je L_skip
        mov word ptr [edi + 0x1a], 0x0
L_skip:
        call ext_00868510
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00867E30] sub_00867E30 (399 bytes)
extern "C" void ext_0082132A();
extern "C" void ext_0085D5F0();
extern "C" void ext_0085E030();
extern "C" void ext_00860800();
extern "C" void ext_008671C0();
extern "C" void ext_00867360();
extern "C" void ext_00867850();
extern "C" void ext_00867FC0();
extern "C" void ext_008680B0();
extern "C" int mem_00AB9620;
extern "C" int mem_00AB9644;
extern "C" int mem_00AB9648;
extern "C" int mem_00AB9614;
extern "C" int mem_00BC70E0;
extern "C" int mem_00AB9628;
extern "C" int mem_00AB9630;
extern "C" int mem_00AB9624;
extern "C" int mem_00AB962C;
extern "C" int mem_00BC67B8;
extern "C" int mem_00AB9634;
extern "C" int mem_00AB9618;
extern "C" int mem_00AC0630;
extern "C" int mem_00AC063C;
extern "C" int mem_00AC0648;
extern "C" int mem_00AC065C;

extern "C" __declspec(naked) int __cdecl fn_00867E30(void) {
    __asm {
        cmp dword ptr [mem_00AB9620], 0
        je L_init
        xor eax, eax
        ret
    L_init:
        mov dword ptr [mem_00AB9620], 1
        cmp dword ptr [mem_00AB9644], 0
        jne L_after_82132A
        mov dword ptr [mem_00AB9644], 1
        call ext_0082132A
        test eax, 0x80000000
        je L_after_82132A
        test eax, 0x40000000
        jne L_after_82132A
        mov dword ptr [mem_00AB9648], 1
        xor eax, eax
        ret
    L_after_82132A:
        call ext_0085D5F0
        test eax, eax
        je L_set_9614
        mov eax, 1
        ret
    L_set_9614:
        mov dword ptr [mem_00AB9614], 1
        push offset mem_00BC70E0
        call ext_00867FC0
        add esp, 4
        test eax, eax
        jne L_clear_9614
        mov eax, dword ptr [mem_00BC70E0]
        push eax
        call ext_00860800
        add esp, 4
        test eax, eax
        je L_after_9614
    L_clear_9614:
        mov dword ptr [mem_00AB9614], 0
    L_after_9614:
        mov eax, 4
        push offset mem_00AC0630
        mov dword ptr [mem_00AB9628], eax
        mov dword ptr [mem_00AB9630], eax
        mov dword ptr [mem_00AB9648], 0
        mov dword ptr [mem_00AB9624], 0xc8
        mov dword ptr [mem_00AB962C], 0x3e8
        call ext_008671C0
        add esp, 4
        test eax, eax
        je L_skip_9624
        push eax
        call ext_00867360
        add esp, 4
        mov dword ptr [mem_00AB9624], eax
        push 0x7530
        push 2
        push offset mem_00AB9624
        call ext_00867850
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9624]
        mov dword ptr [mem_00AB962C], eax
    L_skip_9624:
        push offset mem_00AC063C
        call ext_008671C0
        add esp, 4
        test eax, eax
        je L_skip_9628
        push eax
        call ext_00867360
        add esp, 4
        mov dword ptr [mem_00AB9628], eax
        push 0x1e
        push 2
        push offset mem_00AB9628
        call ext_00867850
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9628]
        mov dword ptr [mem_00AB9630], eax
    L_skip_9628:
        mov byte ptr [mem_00BC67B8], 0
        push offset mem_00AC0648
        call ext_008671C0
        add esp, 4
        test eax, eax
        je L_skip_67B8
        push eax
        push offset mem_00BC67B8
        call ext_0085E030
        add esp, 8
    L_skip_67B8:
        mov dword ptr [mem_00AB9634], 1
        push offset mem_00AC065C
        call ext_008671C0
        add esp, 4
        test eax, eax
        je L_skip_9634
        push eax
        call ext_008680B0
        add esp, 4
        mov dword ptr [mem_00AB9634], eax
    L_skip_9634:
        mov dword ptr [mem_00AB9618], 1
        xor eax, eax
        ret
    }
}

extern "C" void ext_0086B180();
extern "C" void ext_0086B1C0();
extern "C" void ext_0086B200();
extern "C" void ext_0086B220();
extern "C" void ext_0086B510();
extern "C" void ext_0086B850();

// [0x0086E880] sub_0086E880 (473 bytes)
extern "C" __declspec(naked) void __fastcall fn_0086E880(void* self) {
    __asm {
        xor cx, cx
        sub esp, 0x3c
        xor edx, edx
        push ebx
        push esi
        push edi
        mov esi, dword ptr [esp + 0x4c]
        push ebp
    m86e890:
        movsx eax, cx
        inc cx
        or edx, dword ptr [esi + 4*eax]
        movsx eax, cx
        cmp eax, 5
        jb m86e890
        test edx, edx
        jne m86e8d6
        mov edi, dword ptr [esp + 0x58]
        mov eax, dword ptr [esp + 0x54]
        push edi
        push eax
        call ext_0086B220
        add esp, 8
        push edi
        call ext_0086B1C0
        add esp, 4
        lea eax, [edi + 0x14]
        push eax
        push edi
        call ext_0086B220
        add esp, 8
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x3c
        ret
    m86e8d6:
        lea eax, [esp + 0x38]
        push eax
        push esi
        call ext_0086B850
        lea eax, [esp + 0x40]
        add esp, 8
        push eax
        call ext_0086B180
        lea eax, [esp + 0x28]
        lea ecx, [esp + 0x3c]
        mov edx, dword ptr [esp + 0x58]
        add esp, 4
        push eax
        push ecx
        push edx
        call ext_0086B510
        lea ecx, [esp + 0x30]
        add esp, 0xc
        push ecx
        call ext_0086B1C0
        add esp, 4
        xor ecx, ecx
        xor edx, edx
    m86e919:
        movsx eax, cx
        inc cx
        xor edx, dword ptr [esp + 4*eax + 0x24]
        movsx eax, cx
        cmp eax, 5
        jb m86e919
        mov ax, 0x10
        mov edi, 0xffffffff
    m86e933:
        mov cl, al
        shr edi, cl
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x01
        mov ebx, edi
        and ebx, edx
        shr edx, cl
        xor ebx, edx
        test ax, ax
        mov edx, ebx
        jg m86e933
        test edx, edx
        je m86e974
        mov edi, dword ptr [esp + 0x58]
        push edi
        call ext_0086B200
        add esp, 4
        add edi, 0x14
        push edi
        call ext_0086B200
        add esp, 4
        mov eax, 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x3c
        ret
    m86e974:
        lea eax, [esp + 0x10]
        push eax
        call ext_0086B200
        xor cx, cx
        add esp, 4
        mov edx, 1
    m86e989:
        movsx edi, cx
        mov bx, 4
        mov eax, edi
        shr eax, 5
        inc edi
        shr edi, 5
        sub bx, ax
        mov ax, 4
        sub ax, di
        movsx edi, bx
        lea ebp, [4*edi]
        mov edi, dword ptr [esp + 4*edi + 0x24]
        xor edi, dword ptr [esp + ebp + 0x10]
        and edi, edx
        cmp ax, bx
        jne m86e9c9
        movsx eax, ax
        add edi, edi
        add edx, edx
        or dword ptr [esp + 4*eax + 0x10], edi
        jmp m86e9d9
    m86e9c9:
        mov edx, 1
        test edi, edi
        je m86e9d9
        movsx eax, ax
        mov dword ptr [esp + 4*eax + 0x10], edx
    m86e9d9:
        inc cx
        cmp cx, 0x9e
        jl m86e989
        mov eax, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x58]
        xor eax, dword ptr [esp + 0x10]
        push edi
        test eax, 0x20000000
        je m86ea17
        add edi, 0x14
        call ext_0086B200
        add esp, 4
        push edi
        call ext_0086B200
        add esp, 4
        mov eax, 2
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x3c
        ret
    m86ea17:
        lea eax, [esp + 0x14]
        push eax
        push esi
        call ext_0086B510
        add esp, 0xc
        lea eax, [edi + 0x14]
        push eax
        call ext_0086B200
        xor cx, cx
        add esp, 4
    m86ea34:
        movsx eax, cx
        shl eax, 2
        inc cx
        lea edx, [edi + eax]
        mov eax, dword ptr [esi + eax]
        xor eax, dword ptr [edx]
        mov dword ptr [edx + 0x14], eax
        movsx edx, cx
        cmp edx, 5
        jb m86ea34
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x3c
        ret
    }
}

extern "C" void ext_008658B0();
extern "C" void ext_00865C00();

// [0x008659D0] sub_008659D0 (557 bytes)
extern "C" __declspec(naked) void __cdecl fn_008659D0(void* a1, unsigned int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        sub esp, 0x90
        push ebx
        lea ecx, [eax + 0x7]
        shr ecx, 0x3
        push esi
        push edi
        and eax, 0x7
        mov ebx, dword ptr [esp + 0xa0]
        push ebp
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x10], eax
        jne m865a00
        mov dword ptr [esp + 0x10], 0x8
m865a00:
        mov dword ptr [esp + 0x1c], 0x0
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0x20], 0x0
        mov dword ptr [esp + 0x24], 0x0
        cmp dword ptr [esp + 0x14], 0x1
        jbe m865af5
        mov dword ptr [esp + 0x28], 0x0
        mov eax, dword ptr [esp + 0x14]
        sub eax, 0x2
        mov dword ptr [esp + 0x2c], eax
        je m865af5
m865a44:
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [ebx + 0x4]
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], ecx
        cmp dword ptr [esp + 0x28], 0x0
        jne m865ab5
        lea eax, [esp + 0x30]
        push 0x0
        push eax
        push ebx
        call ext_008658B0
        add esp, 0xc
        cmp dword ptr [mem_00AB98EC], 0x0
        jne m865bf2
        mov eax, dword ptr [esp + 0x30]
        lea edi, [esp + 0x38]
        mov esi, 0x19
        mov dword ptr [esp + 0x38], eax
m865a86:
        mov eax, dword ptr [edi]
        mov cl, 0x20
        add eax, dword ptr [esp + 0x34]
        mov ebp, dword ptr [esp + 0x30]
        mov dword ptr [edi + 0x4], eax
        add edi, 0x4
        mov eax, dword ptr [esp + 0x30]
        mov edx, dword ptr [edi - 0x4]
        and dl, 0x1f
        sub cl, dl
        shl eax, cl
        mov cl, dl
        shr ebp, cl
        or eax, ebp
        xor dword ptr [esp + 0x3c], eax
        dec esi
        jne m865a86
        jmp m865ac3
m865ab5:
        lea eax, [esp + 0x38]
        push eax
        push ebx
        call ext_00865C00
        add esp, 0x8
m865ac3:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        xor dword ptr [ebx], eax
        mov edx, dword ptr [esp + 0x20]
        xor dword ptr [ebx + 0x4], ecx
        mov eax, dword ptr [esp + 0x24]
        add ebx, 0x8
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        inc dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x28]
        cmp ecx, dword ptr [esp + 0x2c]
        jb m865a44
m865af5:
        xor eax, eax
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x1c], eax
        cmp dword ptr [esp + 0x10], eax
        je m865b1e
        mov eax, dword ptr [esp + 0x10]
        lea esi, [ebx + 0x8]
        lea edi, [esp + 0x18]
        mov ecx, eax
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
m865b1e:
        cmp dword ptr [esp + 0x14], 0x1
        jne m865b46
        push 0x0
        push 0x0
        push ebx
        call ext_008658B0
        add esp, 0xc
        cmp dword ptr [mem_00AB98EC], 0x0
        je m865b7c
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x90
        ret
m865b46:
        cmp dword ptr [esp + 0x14], 0x2
        jne m865b6e
        push 0x0
        push 0x0
        push ebx
        call ext_008658B0
        add esp, 0xc
        cmp dword ptr [mem_00AB98EC], 0x0
        je m865b7c
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x90
        ret
m865b6e:
        lea eax, [esp + 0x38]
        push eax
        push ebx
        call ext_00865C00
        add esp, 0x8
m865b7c:
        cmp dword ptr [esp + 0x14], 0x1
        jbe m865be5
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [ebx + 0x4]
        xor dword ptr [esp + 0x18], eax
        xor dword ptr [esp + 0x1c], ecx
        xor ecx, ecx
        cmp dword ptr [esp + 0x10], ecx
        je m865baf
m865b98:
        mov dl, byte ptr [ebx + ecx + 0x8]
        lea eax, [ebx + ecx]
        inc ecx
        mov byte ptr [eax], dl
        cmp ecx, dword ptr [esp + 0x10]
        mov dl, byte ptr [esp + ecx + 0x17]
        mov byte ptr [eax + 0x8], dl
        jb m865b98
m865baf:
        cmp dword ptr [esp + 0x14], 0x2
        jne m865bd7
        push 0x0
        push 0x0
        push ebx
        call ext_008658B0
        add esp, 0xc
        cmp dword ptr [mem_00AB98EC], 0x0
        je m865be5
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x90
        ret
m865bd7:
        lea eax, [esp + 0x38]
        push eax
        push ebx
        call ext_00865C00
        add esp, 0x8
m865be5:
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x24]
        xor dword ptr [ebx], eax
        xor dword ptr [ebx + 0x4], ecx
m865bf2:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x90
        ret
    }
}

extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" void ext_0085F750();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" void ext_00860670();
extern "C" void ext_00860950();
extern "C" int mem_00AB98EC;
extern "C" int mem_00AB9864;
extern "C" int mem_00BC6389;

// [0x00864180] sub_00864180 (576 bytes)
extern "C" __declspec(naked) int __cdecl fn_00864180(int a1, int a2, int a3) {
    __asm {
        sub esp, 0x10
        mov dword ptr [mem_00AB98EC], 0
        push esi
        call ext_00860670
        test eax, eax
        jne L_8641A1
        mov eax, 0xfffffef2
        pop esi
        add esp, 0x10
        ret
L_8641A1:
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        push eax
        push 1
        push ecx
        push edx
        push 0x2b
        call ext_00860950
        add esp, 0x14
        push 1
        push 0xab98b8
        call ext_0085F7E0
        add esp, 8
        test eax, eax
        jne L_8643BB
        xor esi, esi
L_8641D5:
        lea eax, [esp + 4]
        push 1
        push eax
        push 0xab98b8
        call ext_0085FF80
        add esp, 0xc
        test eax, eax
        je L_86422E
        cmp eax, 0x3e
        je L_8641F7
        cmp eax, 0x46
        jne L_864212
L_8641F7:
        lea eax, [esp + 4]
        push 0xab98b8
        push eax
        call ext_0085F750
        add esp, 8
        test eax, eax
        je L_864212
        mov esi, 1
L_864212:
        test esi, esi
        je L_8641D5
        test esi, esi
        jne L_864238
        mov eax, 0xffffffff
        pop esi
        mov dword ptr [mem_00AB98EC], 0xf
        add esp, 0x10
        ret
L_86422E:
        mov eax, 0xffffffff
        pop esi
        add esp, 0x10
        ret
L_864238:
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je L_86426A
        push 0xac05b0
        push 0x3e
        push 0xbc6388
        call ext_0085E720
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je L_86426A
        push 0xbc6388
        call ext_0085F700
        jmp L_864274
L_86426A:
        push 0xbc6388
        call ext_0085F740
L_864274:
        add esp, 4
        xor eax, eax
        mov al, byte ptr [mem_00BC6389]
        mov dword ptr [mem_00AB98EC], 0
        lea ecx, [eax - 1]
        cmp ecx, 0x1b
        ja L_8643BB
        xor edx, edx
        mov dl, byte ptr [ecx + 0x864410]
        jmp dword ptr [edx*4 + 0x8643c0]
L_8642A3:
        mov dword ptr [mem_00AB98EC], 0x81
        pop esi
        add esp, 0x10
        ret
L_8642B2:
        mov dword ptr [mem_00AB98EC], 0x82
        pop esi
        add esp, 0x10
        ret
L_8642C1:
        mov dword ptr [mem_00AB98EC], 0x83
        pop esi
        add esp, 0x10
        ret
L_8642D0:
        mov dword ptr [mem_00AB98EC], 0x84
        pop esi
        add esp, 0x10
        ret
L_8642DF:
        mov dword ptr [mem_00AB98EC], 0x85
        pop esi
        add esp, 0x10
        ret
L_8642EE:
        mov dword ptr [mem_00AB98EC], 0x86
        pop esi
        add esp, 0x10
        ret
L_8642FD:
        mov dword ptr [mem_00AB98EC], 0x87
        pop esi
        add esp, 0x10
        ret
L_86430C:
        mov dword ptr [mem_00AB98EC], 0x88
        pop esi
        add esp, 0x10
        ret
L_86431B:
        mov dword ptr [mem_00AB98EC], 0x89
        pop esi
        add esp, 0x10
        ret
L_86432A:
        mov dword ptr [mem_00AB98EC], 0x8a
        pop esi
        add esp, 0x10
        ret
L_864339:
        mov dword ptr [mem_00AB98EC], 0x0a
        pop esi
        add esp, 0x10
        ret
L_864348:
        mov dword ptr [mem_00AB98EC], 0x8c
        pop esi
        add esp, 0x10
        ret
L_864357:
        mov dword ptr [mem_00AB98EC], 0x8d
        pop esi
        add esp, 0x10
        ret
L_864366:
        mov dword ptr [mem_00AB98EC], 0x8e
        pop esi
        add esp, 0x10
        ret
L_864375:
        mov dword ptr [mem_00AB98EC], 0x94
        pop esi
        add esp, 0x10
        ret
L_864384:
        mov dword ptr [mem_00AB98EC], 0x98
        pop esi
        add esp, 0x10
        ret
L_864393:
        mov dword ptr [mem_00AB98EC], 0x99
        pop esi
        add esp, 0x10
        ret
L_8643A2:
        mov dword ptr [mem_00AB98EC], 0x9b
        pop esi
        add esp, 0x10
        ret
L_8643B1:
        mov dword ptr [mem_00AB98EC], 0x9c
L_8643BB:
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x00863640] sub_00863640 (601 bytes)
extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" void ext_00860210();
extern "C" void ext_008602A0();
extern "C" void ext_00860950();
extern "C" int mem_00ABAA3C;
extern "C" int mem_00ABA9D4;
extern "C" int mem_00BC6388;
extern "C" int mem_00BC63C4;
extern "C" int mem_00AB98E4;
extern "C" int mem_00AB98A8;
extern "C" int mem_00AB9908;

extern "C" __declspec(naked) int __cdecl fn_00863640(void) {
    __asm {
        sub esp, 0x28
        xor ecx, ecx
        lea eax, [esp + 0x6]
        push ebx
        mov byte ptr [esp + 0x8], cl
        push esi
        mov byte ptr [esp + 0xd], cl
        push edi
        push ebp
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], ecx
        cmp dword ptr [mem_00ABAA3C], ecx
        mov byte ptr [eax + 0x8], cl
        mov word ptr [esp + 0x1f], cx
        je L_else_9e
        mov eax, dword ptr [esp + 0x4c]
        mov ecx, dword ptr [esp + 0x48]
        mov edx, dword ptr [esp + 0x44]
        push eax
        mov eax, dword ptr [esp + 0x44]
        push ecx
        push edx
        push eax
        push 0x62
        call ext_00860950
        add esp, 0x14
        push 0x30
        push 0xaba9d8
        push 0xbc667d
        call ext_0085D530
        add esp, 0xc
        jmp L_join_e5
    L_else_9e:
        mov eax, dword ptr [esp + 0x4c]
        mov ecx, dword ptr [esp + 0x48]
        mov edx, dword ptr [esp + 0x44]
        push eax
        mov eax, dword ptr [esp + 0x44]
        push ecx
        cmp dword ptr [mem_00ABA9D4], 0
        push edx
        push eax
        je L_db_db
        push 0x62
        call ext_00860950
        add esp, 0x14
        push 0x30
        push 0xaba970
        push 0xbc667d
        call ext_0085D530
        add esp, 0xc
        jmp L_join_e5
    L_db_db:
        push 0x31
        call ext_00860950
        add esp, 0x14
    L_join_e5:
        mov ecx, dword ptr [esp + 0x3c]
        lea edx, [esp + 0x24]
        mov eax, dword ptr [ecx]
        mov ebx, dword ptr [ecx + 0x4]
        mov ebp, dword ptr [ecx + 0x8]
        mov dword ptr [edx], eax
        mov al, byte ptr [ecx + 0xc]
        mov dword ptr [edx + 0x4], ebx
        lea ecx, [esp + 0x34]
        mov dword ptr [edx + 0x8], ebp
        push ecx
        mov byte ptr [edx + 0xc], al
        lea edx, [esp + 0x14]
        lea eax, [esp + 0x28]
        push edx
        push eax
        call ext_008602A0
        add esp, 0xc
        cmp dword ptr [esp + 0x10], 0x1
        jge L_clamp_lo_ok
        mov dword ptr [esp + 0x10], 0x1
    L_clamp_lo_ok:
        cmp dword ptr [esp + 0x10], 0x1e
        jle L_clamp_hi_ok
        mov dword ptr [esp + 0x10], 0x1e
    L_clamp_hi_ok:
        mov edi, 0x0
        inc dword ptr [esp + 0x10]
        je L_end_86380d
    L_outer_747:
        test edi, edi
        jne L_flagged_831
        lea eax, [esp + 0x24]
        push 0x1
        push eax
        call ext_0085F7E0
        add esp, 0x8
        test eax, eax
        jne L_epi_891
        mov esi, 0x1
        mov ebp, 0x206c
        xor ebx, ebx
    L_inner_772:
        test edi, edi
        jne L_dec_825
        test esi, esi
        je L_dec_825
        lea eax, [esp + 0x14]
        push ebx
        lea ecx, [esp + 0x28]
        push eax
        push ecx
        call ext_0085FF80
        add esp, 0xc
        mov esi, eax
        cmp esi, 0x3e
        jne L_inner_772
        push 0x3e
        push 0xbc5c28
        push 0xbc6388
        call ext_0085D530
        add esp, 0xc
        mov al, byte ptr [mem_00BC6388]
        push 0x3d
        push 0xbc6389
        push eax
        call ext_00860210
        mov ax, word ptr [mem_00BC63C4]
        add esp, 0xc
        mov word ptr [mem_00AB98E4], ax
        cmp ax, bp
        jae L_skip_7dd
        mov byte ptr [mem_00BC6389], 0x1b
    L_skip_7dd:
        cmp word ptr [mem_00AB98A8], bx
        jne L_skip_7f4
        movzx ax, byte ptr [mem_00BC6389]
        mov word ptr [mem_00AB98A8], ax
    L_skip_7f4:
        cmp byte ptr [mem_00BC6389], bl
        jne L_skip_801
        mov edi, 0x1
    L_skip_801:
        cmp dword ptr [mem_00AB9908], ebx
        je L_inner_772
    L_end_86380d:
        test edi, edi
        jne L_flagged_831
        mov eax, 0x3
        pop ebp
        mov byte ptr [mem_00BC6389], 0x3
        pop edi
        pop esi
        pop ebx
        add esp, 0x28
        ret
    L_dec_825:
        dec dword ptr [esp + 0x10]
        jne L_outer_747
        jmp L_end_86380d
    L_flagged_831:
        cmp dword ptr [mem_00AB9864], 0
        je L_nodbg_863
        push 0xac05a0
        push 0x3e
        push 0xbc6388
        call ext_0085E720
        add esp, 0xc
        cmp dword ptr [mem_00AB9864], 0
        je L_nodbg_863
        push 0xbc6388
        call ext_0085F700
        jmp L_copy_86386d
    L_nodbg_863:
        push 0xbc6388
        call ext_0085F740
    L_copy_86386d:
        lea ecx, [esp + 0x18]
        add esp, 0x4
        mov edx, 0xab98b8
        mov eax, dword ptr [ecx]
        mov ebx, dword ptr [ecx + 0x4]
        mov ebp, dword ptr [ecx + 0x8]
        mov dword ptr [edx], eax
        mov al, byte ptr [ecx + 0xc]
        mov dword ptr [edx + 0x4], ebx
        mov dword ptr [edx + 0x8], ebp
        mov byte ptr [edx + 0xc], al
        xor eax, eax
    L_epi_891:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x28
        ret
    }
}

// [0x008638A0] sub_008638A0 (665 bytes)
extern "C" void ext_0085D530();
extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FCE0();
extern "C" void ext_0085FF80();
extern "C" void ext_00860210();
extern "C" void ext_008602A0();
extern "C" void ext_00860950();
extern "C" int mem_00ABA454;
extern "C" int mem_00ABAA3C;
extern "C" int mem_00ABA9D4;
extern "C" int mem_00BC6388;
extern "C" int mem_00BC63C4;
extern "C" int mem_00AB98E4;
extern "C" int mem_00AB9908;
extern "C" int mem_00AB98A8;
extern "C" int mem_00BC6389;
extern "C" int mem_00AB9864;

extern "C" __declspec(naked) void __fastcall fn_008638A0(void* self) {
    __asm {
        sub esp, 0x28
        xor ecx, ecx
        lea eax, [esp + 0x6]
        push ebx
        mov byte ptr [esp + 0x8], cl
        push esi
        mov byte ptr [esp + 0xd], cl
        push edi
        push ebp
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], ecx
        cmp dword ptr [mem_00ABA454], ecx
        mov byte ptr [eax + 0x8], cl
        mov word ptr [esp + 0x1f], cx
        jne L_8638d7
        mov eax, 0x1
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x28
        ret
    L_8638d7:
        cmp dword ptr [mem_00ABAA3C], 0x0
        je L_863914
        mov eax, dword ptr [esp + 0x48]
        mov ecx, dword ptr [esp + 0x44]
        mov edx, dword ptr [esp + 0x40]
        push eax
        mov eax, dword ptr [esp + 0x40]
        push ecx
        push edx
        push eax
        push 0x62
        call ext_00860950
        add esp, 0x14
        push 0x30
        push 0xaba9d8
        push 0xbc667d
        call ext_0085D530
        add esp, 0xc
        jmp L_86395b
    L_863914:
        mov eax, dword ptr [esp + 0x48]
        mov ecx, dword ptr [esp + 0x44]
        mov edx, dword ptr [esp + 0x40]
        push eax
        mov eax, dword ptr [esp + 0x40]
        push ecx
        cmp dword ptr [mem_00ABA9D4], 0x0
        push edx
        push eax
        je L_863951
        push 0x62
        call ext_00860950
        add esp, 0x14
        push 0x30
        push 0xaba970
        push 0xbc667d
        call ext_0085D530
        add esp, 0xc
        jmp L_86395b
    L_863951:
        push 0x31
        call ext_00860950
        add esp, 0x14
    L_86395b:
        lea eax, [esp + 0x34]
        lea ecx, [esp + 0x10]
        push eax
        push ecx
        push 0xaba458
        call ext_008602A0
        add esp, 0xc
        cmp dword ptr [esp + 0x10], 0x1
        jge L_863981
        mov dword ptr [esp + 0x10], 0x1
    L_863981:
        cmp dword ptr [esp + 0x10], 0x1e
        jle L_863990
        mov dword ptr [esp + 0x10], 0x1e
    L_863990:
        xor edi, edi
        inc dword ptr [esp + 0x10]
        call ext_0085FCE0
        cmp dword ptr [esp + 0x10], edi
        je L_863aad
    L_8639a5:
        test edi, edi
        jne L_863ad1
        xor ebx, ebx
        cmp dword ptr [mem_00ABA454], ebx
        jle L_8639f9
        mov esi, 0xaba458
    L_8639bc:
        lea ecx, [esp + 0x24]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [esi + 0x4]
        mov ebp, dword ptr [esi + 0x8]
        push 0x0
        mov dword ptr [ecx], eax
        mov al, byte ptr [esi + 0xc]
        mov dword ptr [ecx + 0x4], edx
        mov dword ptr [ecx + 0x8], ebp
        mov byte ptr [ecx + 0xc], al
        lea ecx, [esp + 0x28]
        push ecx
        call ext_0085F7E0
        add esp, 0x8
        test eax, eax
        jne L_863b31
        add esi, 0xd
        inc ebx
        cmp ebx, dword ptr [mem_00ABA454]
        jl L_8639bc
    L_8639f9:
        mov esi, 0x1
        mov ebx, 0x8
        mov ebp, 0x206c
    L_863a08:
        test edi, edi
        jne L_863ac5
        test esi, esi
        je L_863ac5
        lea eax, [esp + 0x14]
        push 0x0
        lea ecx, [esp + 0x28]
        push eax
        mov byte ptr [esp + 0x2c], bl
        push ecx
        call ext_0085FF80
        add esp, 0xc
        mov esi, eax
        cmp esi, 0x3e
        jne L_863a08
        push 0x3e
        push 0xbc5c28
        push 0xbc6388
        call ext_0085D530
        add esp, 0xc
        mov al, byte ptr [mem_00BC6388]
        push 0x3d
        push 0xbc6389
        push eax
        call ext_00860210
        mov ax, word ptr [mem_00BC63C4]
        add esp, 0xc
        mov word ptr [mem_00AB98E4], ax
        mov ecx, dword ptr [mem_00AB9908]
        cmp ax, bp
        mov ax, word ptr [mem_00AB98A8]
        jae L_863a84
        mov byte ptr [mem_00BC6389], 0x1b
    L_863a84:
        test ax, ax
        jne L_863a97
        movzx ax, byte ptr [mem_00BC6389]
        mov word ptr [mem_00AB98A8], ax
    L_863a97:
        cmp byte ptr [mem_00BC6389], 0x0
        jne L_863aa5
        mov edi, 0x1
    L_863aa5:
        test ecx, ecx
        je L_863a08
    L_863aad:
        test edi, edi
        jne L_863ad1
        mov eax, 0x3
        pop ebp
        mov byte ptr [mem_00BC6389], 0x3
        pop edi
        pop esi
        pop ebx
        add esp, 0x28
        ret
    L_863ac5:
        dec dword ptr [esp + 0x10]
        jne L_8639a5
        jmp L_863aad
    L_863ad1:
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je L_863b03
        push 0xac05a4
        push 0x3e
        push 0xbc6388
        call ext_0085E720
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je L_863b03
        push 0xbc6388
        call ext_0085F700
        jmp L_863b0d
    L_863b03:
        push 0xbc6388
        call ext_0085F740
    L_863b0d:
        lea ecx, [esp + 0x18]
        add esp, 0x4
        mov edx, 0xab98b8
        mov eax, dword ptr [ecx]
        mov ebx, dword ptr [ecx + 0x4]
        mov ebp, dword ptr [ecx + 0x8]
        mov dword ptr [edx], eax
        mov al, byte ptr [ecx + 0xc]
        mov dword ptr [edx + 0x4], ebx
        mov dword ptr [edx + 0x8], ebp
        mov byte ptr [edx + 0xc], al
        xor eax, eax
    L_863b31:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x28
        ret
    }
}

// [0x00867390] sub_00867390 (682 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_0085D560();
extern "C" void ext_0085DC90();
extern "C" void ext_00867640();
extern "C" void ext_008676F0();
extern "C" int mem_00AB961C;
extern "C" int mem_00AB9640;
extern "C" int mem_00AB9630;
extern "C" int mem_00924248;
extern "C" int mem_00BC63C8;
extern "C" int mem_00BC70D8;
extern "C" int mem_00AB9638;
extern "C" int mem_00BC6658;
extern "C" int mem_00BC6404;
extern "C" int mem_00BC70F8;
extern "C" int mem_00BC6402;
extern "C" int mem_00924210;

extern "C" __declspec(naked) int __cdecl fn_00867390(void* a1) {
    __asm {
        sub esp, 0x14
        push ebx
        push esi
        push edi
        push ebp
        xor edi, edi
        push 0x604
        call ext_0085D560
        add esp, 0x4
        mov esi, eax
        test esi, esi
        jne alloc_ok
        mov ecx, dword ptr [esp + 0x28]
        mov eax, 0xc
        mov word ptr [ecx + 0x1a], 0xc
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret
    alloc_ok:
        push 0x604
        push 0
        push esi
        call ext_0085D510
        inc word ptr [mem_00AB961C]
        mov ecx, dword ptr [esp + 0x34]
        add esp, 0xc
        add ecx, 0xee
        inc dword ptr [mem_00AB9640]
        cmp byte ptr [ecx], 0x1
        sbb eax, eax
        inc eax
        mov dword ptr [esp + 0x18], eax
        je skip_copy1
        push 0x4
        push ecx
        push offset mem_00BC6404
        call ext_0085D530
        add esp, 0xc
    skip_copy1:
        mov word ptr [esi], 0x20e
        mov ecx, dword ptr [esp + 0x28]
        mov ax, word ptr [mem_00AB961C]
        cmp word ptr [ecx + 0x16], 0x16
        mov word ptr [ecx + 0xce], ax
        jbe skip_clamp
        mov word ptr [ecx + 0x16], 0x16
    skip_clamp:
        mov ecx, dword ptr [esp + 0x28]
        push 0x100
        push ecx
        lea eax, [esi + 0xc]
        push eax
        call ext_0085D530
        mov ecx, dword ptr [esp + 0x34]
        add esp, 0xc
        mov ax, word ptr [ecx + 0x16]
        mov edx, dword ptr [ecx + 0x12]
        mov word ptr [esp + 0x12], ax
        mov dword ptr [esp + 0x20], edx
        test ax, ax
        je skip_buf1
        movzx eax, ax
        shl eax, 0x3
        lea ebx, [esi + 0x10c]
        push eax
        push edx
        push ebx
        call ext_0085D530
        mov cx, word ptr [esi + 0xda]
        add esp, 0xc
        push ecx
        push ebx
        call ext_0085DC90
        add esp, 0x8
    skip_buf1:
        xor eax, eax
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x1c], 0x1
        mov ax, word ptr [ecx + 0x18]
        cmp eax, 0x110
        jne skip_mode
        mov dword ptr [esp + 0x1c], 0x3
    skip_mode:
        mov eax, dword ptr [mem_00AB9630]
        mov dword ptr [esp + 0x14], eax
        test eax, eax
        je no_retry
    retry_loop:
        call ext_00867640
        push 0x0
        call dword ptr [mem_00924248]
        cmp dword ptr [esp + 0x18], 0x0
        je scan_path
        push 0x10
        mov eax, dword ptr [mem_00BC63C8]
        dec dword ptr [esp + 0x18]
        push 0xbc6400
        push 0x0
        push 0x1c4
        push esi
        push eax
        call dword ptr [mem_00BC70D8]
        cmp eax, -1
        jne after_scan
        mov ecx, dword ptr [esp + 0x28]
        mov eax, 0x8
        mov word ptr [ecx + 0x1a], 0x8
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret
    scan_path:
        mov edi, 0x1
        dec dword ptr [esp + 0x14]
        cmp dword ptr [mem_00AB9638], edi
        jl after_scan
        mov ebp, 0xbc673a
        mov ebx, 0xbc68d8
    scan_loop:
        push ebx
        call dword ptr [mem_00BC6658]
        mov dword ptr [mem_00BC6404], eax
        mov ax, word ptr [ebp]
        push eax
        call dword ptr [mem_00BC70F8]
        mov word ptr [mem_00BC6402], ax
        push 0x10
        push 0xbc6400
        mov eax, dword ptr [mem_00BC63C8]
        push 0x0
        push 0x1c4
        push esi
        push eax
        call dword ptr [mem_00BC70D8]
        cmp eax, -1
        je scan_fail
        add ebp, 0x2
        add ebx, 0x20
        inc edi
        cmp edi, dword ptr [mem_00AB9638]
        jle scan_loop
    after_scan:
        mov cx, word ptr [mem_00AB961C]
        mov eax, dword ptr [esp + 0x1c]
        push eax
        push ecx
        push esi
        call ext_008676F0
        add esp, 0xc
        mov edi, eax
        test edi, edi
        je check_loop
        mov dword ptr [esp + 0x14], 0x0
    check_loop:
        cmp dword ptr [esp + 0x14], 0x0
        jne retry_loop
    no_retry:
        mov ecx, dword ptr [esp + 0x28]
        test edi, edi
        mov word ptr [ecx + 0x1a], 0x7
        je done
        push 0x100
        lea eax, [esi + 0xc]
        push eax
        push ecx
        call ext_0085D530
        mov ax, word ptr [esp + 0x1e]
        mov edx, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x34]
        add esp, 0xc
        mov word ptr [ecx + 0x16], ax
        mov dword ptr [ecx + 0x12], edx
        test ax, ax
        je done
        mov ax, word ptr [esi + 0xda]
        lea edi, [esi + 0x10c]
        push eax
        push edi
        call ext_0085DC90
        mov ecx, dword ptr [esp + 0x30]
        add esp, 0x8
        xor eax, eax
        mov edx, dword ptr [ecx + 0x12]
        mov ax, word ptr [ecx + 0x16]
        shl eax, 0x3
        push eax
        push edi
        push edx
        call ext_0085D530
        add esp, 0xc
    done:
        push esi
        call dword ptr [mem_00924210]
        xor eax, eax
        mov ecx, dword ptr [esp + 0x28]
        mov ax, word ptr [ecx + 0x1a]
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret
    scan_fail:
        mov ecx, dword ptr [esp + 0x28]
        mov eax, 0x8
        mov word ptr [ecx + 0x1a], 0x8
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x00861760] sub_00861760 (800 bytes)
extern "C" char mem_00AB98B8;
extern "C" char mem_00AC0594;
extern "C" char mem_00BC667D;
extern "C" char mem_00BC6396;
extern "C" char mem_00BC66B9;
extern "C" __declspec(naked) int __cdecl fn_00861760(void) {
    __asm {
        sub esp, 0x10
        mov dword ptr [mem_00AB98EC], 0
        push ebx
        push esi
        push edi
        call ext_00860670
        test eax, eax
        jne L_861785
        mov eax, 0xfffffef2
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_861785:
        mov eax, dword ptr [esp + 0x20]
        and eax, 0xffff
        cmp eax, 0x13f
        je L_8617B2
        cmp eax, 0x140
        je L_8617CA
        mov eax, 0xd
        pop edi
        mov dword ptr [mem_00AB98EC], 0x8d
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_8617B2:
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        push eax
        push 0
        push ecx
        push edx
        push 0xed
        jmp L_8617E0
L_8617CA:
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        push eax
        push 0
        push ecx
        push edx
        push 0xee
L_8617E0:
        call ext_00860950
        mov ax, word ptr [esp + 0x48]
        add esp, 0x14
        test ax, ax
        je L_861A6A
        cmp ax, 0x6
        ja L_861A6A
        mov word ptr [mem_00BC667B], ax
        mov esi, dword ptr [esp + 0x30]
        movzx eax, ax
        lea edi, [eax*8]
        push edi
        push esi
        push offset mem_00BC667D
        call ext_0085D530
        mov al, byte ptr [esp + 0x44]
        add esp, 0xc
        mov byte ptr [mem_00BC66B9], al
        push 1
        push offset mem_00AB98B8
        call ext_0085F7E0
        add esp, 0x8
        test eax, eax
        jne L_861A79
        xor ebx, ebx
L_861845:
        lea eax, [esp + 0xc]
        push 1
        push eax
        push offset mem_00AB98B8
        call ext_0085FF80
        add esp, 0xc
        test eax, eax
        je L_8618A0
        cmp eax, 0x3e
        je L_861867
        cmp eax, 0x46
        jne L_861882
L_861867:
        lea eax, [esp + 0xc]
        push offset mem_00AB98B8
        push eax
        call ext_0085F750
        add esp, 0x8
        test eax, eax
        je L_861882
        mov ebx, 0x1
L_861882:
        test ebx, ebx
        je L_861845
        test ebx, ebx
        jne L_8618AC
        mov eax, 0xffffffff
        pop edi
        mov dword ptr [mem_00AB98EC], 0xf
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_8618A0:
        mov eax, 0xffffffff
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_8618AC:
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je L_8618DF
        push offset mem_00AC0594
        push 0x3e
        push offset mem_00BC6388
        call ext_0085E720
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je L_8618DF
        push offset mem_00BC6388
        call ext_0085F700
        add esp, 0x4
L_8618DF:
        push edi
        push offset mem_00BC6396
        push esi
        call ext_0085D530
        add esp, 0xc
        push offset mem_00BC6388
        call ext_0085F740
        add esp, 0x4
        xor eax, eax
        mov al, byte ptr [mem_00BC6389]
        mov dword ptr [mem_00AB98EC], 0
        lea ecx, [eax - 0x1]
        cmp ecx, 0x1b
        ja L_861A79
        xor edx, edx
        mov dl, byte ptr [ecx + 0x861ad0]
        jmp dword ptr [4*edx + 0x861a80]
L_861927:
        mov dword ptr [mem_00AB98EC], 0x81
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_861938:
        mov dword ptr [mem_00AB98EC], 0x82
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_861949:
        mov dword ptr [mem_00AB98EC], 0x83
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_86195A:
        mov dword ptr [mem_00AB98EC], 0x84
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_86196B:
        mov dword ptr [mem_00AB98EC], 0x85
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_86197C:
        mov dword ptr [mem_00AB98EC], 0x86
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_86198D:
        mov dword ptr [mem_00AB98EC], 0x87
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_86199E:
        mov dword ptr [mem_00AB98EC], 0x88
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_8619AF:
        mov dword ptr [mem_00AB98EC], 0x89
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_8619C0:
        mov dword ptr [mem_00AB98EC], 0x8a
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_8619D1:
        mov dword ptr [mem_00AB98EC], 0xa
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_8619E2:
        mov dword ptr [mem_00AB98EC], 0x8c
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_8619F3:
        mov dword ptr [mem_00AB98EC], 0x8d
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_861A04:
        mov dword ptr [mem_00AB98EC], 0x8e
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_861A15:
        mov dword ptr [mem_00AB98EC], 0x94
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_861A26:
        mov dword ptr [mem_00AB98EC], 0x98
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_861A37:
        mov dword ptr [mem_00AB98EC], 0x99
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_861A48:
        mov dword ptr [mem_00AB98EC], 0x9b
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_861A59:
        mov dword ptr [mem_00AB98EC], 0x9c
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
L_861A6A:
        mov dword ptr [mem_00AB98EC], 0x18
        mov eax, 0xa
L_861A79:
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_008147F9();
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_0085D560();
extern "C" void ext_0085F7B0();
extern "C" void ext_008665E0();
extern "C" void ext_008669D0();
extern "C" void ext_00866E50();
extern "C" void ext_00866F20();
extern "C" void ext_00867390();
extern "C" void ext_00867870();
extern "C" void ext_00867CA0();
extern "C" void ext_00867E30();
extern "C" void ext_00868180();
extern "C" void ext_008681F0();
extern "C" void ext_00868510();
extern "C" int mem_00AB9648;
extern "C" int mem_00AB9634;
extern "C" int mem_00AB9618;
extern "C" int mem_00BC6400;
extern "C" int mem_00BC6658;
extern "C" int mem_00BC6404;
extern "C" int mem_00BC673A;
extern "C" int mem_00BC70F8;
extern "C" int mem_00BC6402;
extern "C" int mem_00AB9614;
extern "C" int mem_00924210;
extern "C" int mem_00BC6660;
extern "C" int mem_00BC666C;
extern "C" int mem_00AB9610;
extern "C" int mem_00924248;
extern "C" int mem_00BC70E0;
extern "C" int mem_00BC70D8;
extern "C" int mem_00BC70BC;
extern "C" int mem_00BC70F4;
extern "C" int mem_00BC6578;
extern "C" int mem_00BC657C;
extern "C" int mem_00BC6580;
extern "C" int mem_00AB9860;

// [0x008665E0] sub_008665E0 (2156 bytes)
extern "C" __declspec(naked) void __fastcall fn_008665E0(void* self) {
    __asm {
loc_8665E0:
    push ebx
    xor eax, eax
    push esi
    push edi
    mov esi, dword ptr [esp + 0x10]
    push ebp
    mov ax, word ptr [esi + 0x18]
    cmp eax, 0x29
    je short loc_86660F
    cmp eax, 0x44
    jl short loc_8665FD
    cmp eax, 0x45
    jle short loc_86660F
loc_8665FD:
    lea ebp, [esi + 0x42]
    cmp word ptr [ebp], 0x0
    jne short loc_86661A
    mov word ptr [ebp], 0xffff
    jmp short loc_86661A
loc_86660F:
    mov ax, word ptr [esi + 0x53]
    lea ebp, [esi + 0x42]
    mov word ptr [ebp], ax
loc_86661A:
    cmp word ptr [ebp], 0x2
    jne short loc_866631
    mov eax, 0x7
    pop ebp
    mov word ptr [esi + 0x1a], 0x7
    pop edi
    pop esi
    pop ebx
    ret
loc_866631:
    call ext_00868180
    test eax, eax
    jne short loc_86664A
    mov eax, 0x8
    pop ebp
    mov word ptr [esi + 0x1a], 0x8
    pop edi
    pop esi
    pop ebx
    ret
loc_86664A:
    call ext_00867E30
    test eax, eax
    je short loc_866663
    mov eax, 0x8
    pop ebp
    mov word ptr [esi + 0x1a], 0x8
    pop edi
    pop esi
    pop ebx
    ret
loc_866663:
    cmp dword ptr [mem_00AB9648], 0x0
    je short loc_86667A
    push esi
    call ext_008147F9
    add esp, 0x4
    pop ebp
    pop edi
    pop esi
    pop ebx
    ret
loc_86667A:
    test byte ptr [esi + 0x4f], -0x80
    mov word ptr [esi + 0x1a], 0x7
    mov edi, 0x7
    je short loc_866695
    mov dword ptr [mem_00AB9634], 0x1
loc_866695:
    cmp dword ptr [mem_00AB9634], 0x0
    jne short loc_8666BE
    test byte ptr [ebp], 0x1
    je short loc_8666BE
    cmp word ptr [esi + 0x18], 0x9
    jne short loc_8666BE
    push esi
    call ext_00867870
    add esp, 0x4
    mov edi, eax
    test edi, edi
    je near ptr loc_86689A
loc_8666BE:
    xor ebx, ebx
    cmp dword ptr [mem_00AB9618], ebx
    je near ptr loc_86676A
    test byte ptr [ebp], 0x8
    je near ptr loc_86676A
    call ext_00866F20
    cmp dword ptr [mem_00AB9618], ebx
    je near ptr loc_86676A
    push esi
    xor edi, edi
    call ext_00867390
    mov di, word ptr [esi + 0x1a]
    add esp, 0x4
    test edi, edi
    jne short loc_8666FF
    mov ebx, 0x1
loc_8666FF:
    xor ecx, ecx
    mov cx, word ptr [esi + 0x18]
    dec ecx
    cmp ecx, 0x32
    ja short loc_86676A
    xor eax, eax
    mov al, byte ptr [ecx + 0x8668b0]
    jmp dword ptr [eax*4 + 0x8668a0]
    lea eax, [esi + 0xee]
    push 0x10
    push 0x0
    push eax
    call ext_0085D510
    add esp, 0xc
    push 0x10
    push 0x0
    push offset mem_00BC6400
    call ext_0085D510
    add esp, 0xc
    mov word ptr [mem_00BC6400], 0x2
    push 0xbc68d8
    call dword ptr [mem_00BC6658]
    mov dword ptr [mem_00BC6404], eax
    mov ax, word ptr [mem_00BC673A]
    push eax
    call dword ptr [mem_00BC70F8]
    mov word ptr [mem_00BC6402], ax
loc_86676A:
    cmp dword ptr [mem_00AB9614], 0x0
    je near ptr loc_866898
    test ebx, ebx
    jne near ptr loc_866898
    test byte ptr [ebp], 0x1
    je near ptr loc_866898
    xor eax, eax
    mov ax, word ptr [esi + 0x18]
    cmp eax, 0x9
    jg short loc_8667B4
    je near ptr loc_86687B
    test eax, eax
    je short loc_8667CD
loc_86679E:
    push esi
    xor edi, edi
    call ext_008681F0
    mov di, word ptr [esi + 0x1a]
    add esp, 0x4
    mov eax, edi
    pop ebp
    pop edi
    pop esi
    pop ebx
    ret
loc_8667B4:
    sub eax, 0x28
    cmp eax, 0xd8
    ja short loc_86679E
    xor ecx, ecx
    mov cl, byte ptr [eax + 0x8668f4]
    jmp dword ptr [ecx*4 + 0x8668e4]
loc_8667CD:
    push 0x100
    call ext_0085D560
    add esp, 0x4
    mov ebp, eax
    push 0x100
    push esi
    push ebp
    call ext_0085D530
    add esp, 0xc
    lea eax, [esi + 0xee]
    lea ebx, [esi + 0xf2]
    push 0x4
    push 0x0
    push eax
    call ext_0085D510
    add esp, 0xc
    push 0x6
    push 0xff
    push ebx
    call ext_0085D510
    add esp, 0xc
    push esi
    call ext_008669D0
    add esp, 0x4
    mov edi, eax
    test edi, edi
    je short loc_866860
    push 0x100
    push ebp
    push esi
    call ext_0085D530
    add esp, 0xc
    lea eax, [esi + 0xee]
    push 0x4
    push 0x0
    push eax
    call ext_0085D510
    add esp, 0xc
    push 0x6
    push 0xff
    push ebx
    call ext_0085D510
    add esp, 0xc
    push esi
    call ext_008681F0
    add esp, 0x4
    mov edi, eax
loc_866860:
    push ebp
    call dword ptr [mem_00924210]
    test edi, edi
    je short loc_866870
    mov edi, 0x7
loc_866870:
    mov word ptr [esi + 0x1a], di
    mov eax, edi
    pop ebp
    pop edi
    pop esi
    pop ebx
    ret
loc_86687B:
    push esi
    call ext_00867870
    add esp, 0x4
    mov edi, eax
    cmp word ptr [esi + 0x38], 0x0
    jne short loc_866898
    push esi
    call ext_00867CA0
    add esp, 0x4
    mov edi, eax
loc_866898:
    mov eax, edi
loc_86689A:
    pop ebp
    pop edi
    pop esi
    pop ebx
    ret
    nop
loc_8668A0:
    _emit 0x1a
    _emit 0x67
    _emit 0x86
    _emit 0x00
    _emit 0x1a
    _emit 0x67
    _emit 0x86
    _emit 0x00
    _emit 0x1a
    _emit 0x67
    _emit 0x86
    _emit 0x00
    _emit 0x6a
    _emit 0x67
    _emit 0x86
    _emit 0x00
    _emit 0x00
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x01
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x02
    _emit 0x02
    _emit 0x90
    _emit 0xcd
    _emit 0x67
    _emit 0x86
    _emit 0x00
    _emit 0xcd
    _emit 0x67
    _emit 0x86
    _emit 0x00
    _emit 0xcd
    _emit 0x67
    _emit 0x86
    _emit 0x00
    _emit 0x9e
    _emit 0x67
    _emit 0x86
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x01
    _emit 0x01
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x03
    _emit 0x02
    _emit 0x8d
    _emit 0x49
    _emit 0x00
loc_8669D0:
    mov ecx, dword ptr [esp + 0x4]
    sub esp, 0x850
    mov ax, word ptr [ecx + 0x18]
    push ebx
    mov word ptr [esp + 0x6], ax
    push esi
    mov dword ptr [esp + 0x28], 0x10
    mov word ptr [ecx + 0x1a], 0x8
    push edi
    push ebp
    call ext_00867E30
    test eax, eax
    je short loc_866A0E
    mov eax, 0x8
    pop ebp
    pop edi
    pop esi
    pop ebx
    add esp, 0x850
    ret
loc_866A0E:
    mov dword ptr [esp + 0x2c], 0x7
    push 0x4
    push 0x0
    push 0xbc6662
    call ext_0085D510
    add esp, 0xc
    push 0x6
    push 0xff
    push 0xbc6666
    call ext_0085D510
    mov word ptr [mem_00BC6660], 0x6
    add esp, 0xc
    mov word ptr [mem_00BC666C], 0x5204
    push 0x604
    call ext_0085D560
    mov dword ptr [esp + 0x1c], eax
    add esp, 0x4
    test eax, eax
    jne short loc_866A72
    mov eax, 0x1
    pop ebp
    pop edi
    pop esi
    pop ebx
    add esp, 0x850
    ret
loc_866A72:
    mov esi, 0x4
    push esi
    mov dword ptr [mem_00AB9610], esi
    call ext_0085D560
    mov word ptr [eax], 0x100
    mov dword ptr [esp + 0x24], eax
    lea ecx, [esp + 0x148]
    add esp, 0x4
    mov word ptr [eax + 0x2], 0x4201
    mov dword ptr [esp + 0x14], 0x0
    push 0x71c
    push 0x0
    push ecx
    call ext_0085D510
    add esp, 0xc
    call ext_00868510
    mov dword ptr [esp + 0x34], esi
loc_866ABD:
    push 0x0
    call dword ptr [mem_00924248]
    mov eax, dword ptr [esp + 0x20]
    push 0x10
    push offset mem_00BC6660
    mov ecx, dword ptr [mem_00BC70E0]
    push 0x0
    push 0x4
    push eax
    push ecx
    call dword ptr [mem_00BC70D8]
    mov dword ptr [esp + 0x40], 0x0
    mov dword ptr [esp + 0x38], 0x0
    mov dword ptr [esp + 0x3c], 0x61a80
    mov eax, dword ptr [mem_00BC70E0]
    lea ecx, [esp + 0x40]
    mov dword ptr [esp + 0x44], eax
    lea eax, [esp + 0x38]
    inc dword ptr [esp + 0x40]
    push eax
    push 0x0
    mov eax, dword ptr [mem_00BC70E0]
    push 0x0
    inc eax
    push ecx
    push eax
    call dword ptr [mem_00BC70BC]
loc_866B22:
    lea eax, [esp + 0x30]
    mov ecx, dword ptr [esp + 0x18]
    push eax
    mov edx, dword ptr [mem_00BC70E0]
    push offset mem_00BC6578
    push 0x0
    push 0x5fa
    push ecx
    push edx
    call dword ptr [mem_00BC70F4]
    mov esi, eax
    and eax, 0xffff0000
    cmp eax, 0x1
    sbb eax, eax
    neg eax
    mov dword ptr [esp + 0x1c], eax
    test eax, eax
    je short loc_866B7D
    mov eax, dword ptr [esp + 0x18]
    push 0x8
    push 0xab95a0
    add eax, 0x4
    push eax
    call ext_0085F7B0
    add esp, 0xc
    cmp eax, 0x1
    sbb eax, eax
    neg eax
    mov dword ptr [esp + 0x1c], eax
loc_866B7D:
    cmp dword ptr [esp + 0x1c], 0x0
    je near ptr loc_866C9E
    sub esi, 0x2
    sar esi, 0x6
    test esi, esi
    je near ptr loc_866C93
    mov eax, dword ptr [esp + 0x14]
    mov ecx, dword ptr [esp + 0x18]
    shl eax, 0x3
    sub eax, dword ptr [esp + 0x14]
    lea edi, [esp + eax*2 + 0x144]
    mov eax, esi
    shl eax, 0x6
    lea ebx, [eax + ecx + 0x34]
loc_866BB5:
    sub ebx, 0x40
    dec esi
    push 0xc
    push ebx
    push 0xbc657a
    call ext_0085D530
    lea eax, [esp + 0x150]
    add esp, 0xc
    mov byte ptr [ebx - 0x1], 0x0
    mov dword ptr [esp + 0x28], 0x0
    mov dword ptr [esp + 0x24], 0x0
    cmp edi, eax
    jbe short loc_866C4C
    lea ebp, [esp + 0x146]
loc_866BEF:
    push 0x4
    push 0xbc657a
    push ebp
    call ext_0085F7B0
    add esp, 0xc
    test eax, eax
    jne short loc_866C31
    push 0x6
    lea eax, [ebp + 0x4]
    push 0xbc657e
    push eax
    call ext_0085F7B0
    add esp, 0xc
    test eax, eax
    jne short loc_866C31
    push 0x2
    lea eax, [ebp + 0xa]
    push 0xbc6584
    push eax
    call ext_0085F7B0
    add esp, 0xc
    test eax, eax
    je short loc_866C44
loc_866C31:
    add ebp, 0xe
    mov eax, dword ptr [esp + 0x14]
    inc dword ptr [esp + 0x24]
    cmp eax, dword ptr [esp + 0x24]
    jg short loc_866BEF
    jmp short loc_866C4C
loc_866C44:
    mov dword ptr [esp + 0x28], 0x1
loc_866C4C:
    cmp dword ptr [esp + 0x28], 0x0
    jne short loc_866C8B
    mov eax, dword ptr [mem_00BC6578]
    mov edx, dword ptr [mem_00BC657C]
    mov ebp, dword ptr [mem_00BC6580]
    mov ecx, offset mem_00BC6578
    mov dword ptr [edi], eax
    mov ax, word ptr [ecx + 0xc]
    mov dword ptr [edi + 0x4], edx
    lea ecx, [esp + 0x2f6]
    mov dword ptr [edi + 0x8], ebp
    mov word ptr [edi + 0xc], ax
    cmp edi, ecx
    jae short loc_866C8B
    add edi, 0xe
    inc dword ptr [esp + 0x14]
loc_866C8B:
    test esi, esi
    jne near ptr loc_866BB5
loc_866C93:
    cmp dword ptr [esp + 0x1c], 0x0
    jne near ptr loc_866B22
loc_866C9E:
    dec dword ptr [esp + 0x34]
    jne near ptr loc_866ABD
    call ext_00866E50
    lea ebx, [esp + 0x150]
loc_866CB4:
    cmp word ptr [ebx], 0x0
    je short loc_866CED
    xor esi, esi
    cmp dword ptr [mem_00AB9860], esi
    jle short loc_866CED
    mov ebp, 0xab9658
    lea edi, [ebx - 0xa]
loc_866CCC:
    push 0x4
    push ebp
    push edi
    call ext_0085F7B0
    add esp, 0xc
    test eax, eax
    jne short loc_866CE1
    mov word ptr [ebx], 0x0
loc_866CE1:
    add ebp, 0x4
    inc esi
    cmp dword ptr [mem_00AB9860], esi
    jg short loc_866CCC
loc_866CED:
    add ebx, 0xe
    lea eax, [esp + 0x310]
    cmp ebx, eax
    jb short loc_866CB4
    mov eax, dword ptr [esp + 0x20]
    mov esi, dword ptr [mem_00924210]
    push eax
    xor edi, edi
    call esi
    mov ecx, dword ptr [esp + 0x18]
    push ecx
    call esi
    cmp dword ptr [esp + 0x14], edi
    je near ptr loc_866E03
    jle near ptr loc_866E38
    lea esi, [esp + 0x150]
    xor ebx, ebx
loc_866D2A:
    cmp word ptr [esi], bx
    je near ptr loc_866DE9
    push 0xa
    lea eax, [esi - 0xa]
    push eax
    mov eax, dword ptr [esp + 0x86c]
    add eax, 0xee
    push eax
    call ext_0085D530
    mov ecx, dword ptr [esp + 0x870]
    add esp, 0xc
    xor eax, eax
    mov ax, word ptr [ecx + 0x18]
    cmp eax, 0x28
    jg short loc_866D68
    je short loc_866D97
    test eax, eax
    je short loc_866D88
    jmp short loc_866D79
loc_866D68:
    cmp eax, 0x44
    jl short loc_866D79
    cmp eax, 0x45
    jle short loc_866DA6
    cmp eax, 0x100
    je short loc_866DB5
loc_866D79:
    mov ecx, dword ptr [esp + 0x864]
    mov word ptr [ecx + 0x1a], 0x4
    jmp short loc_866DCB
loc_866D88:
    mov ecx, dword ptr [esp + 0x864]
    mov word ptr [ecx + 0x18], 0x41
    jmp short loc_866DC2
loc_866D97:
    mov ecx, dword ptr [esp + 0x864]
    mov word ptr [ecx + 0x18], 0x46
    jmp short loc_866DC2
loc_866DA6:
    mov ecx, dword ptr [esp + 0x864]
    push ecx
    call ext_008681F0
    jmp short loc_866DC8
loc_866DB5:
    mov ecx, dword ptr [esp + 0x864]
    mov word ptr [ecx + 0x18], 0x11f
loc_866DC2:
    push ecx
    call ext_008665E0
loc_866DC8:
    add esp, 0x4
loc_866DCB:
    mov ax, word ptr [esp + 0x12]
    mov ecx, dword ptr [esp + 0x864]
    mov word ptr [ecx + 0x18], ax
    cmp word ptr [ecx + 0x1a], bx
    jne short loc_866DE9
    cmp byte ptr [ecx + 0xfe], bl
    jne short loc_866DF9
loc_866DE9:
    add esi, 0xe
    inc edi
    cmp dword ptr [esp + 0x14], edi
    jg near ptr loc_866D2A
    jmp short loc_866E38
loc_866DF9:
    mov dword ptr [esp + 0x2c], 0x0
    jmp short loc_866E38
loc_866E03:
    mov eax, dword ptr [esp + 0x864]
    push 0x4
    push 0x0
    add eax, 0xee
    push eax
    call ext_0085D510
    mov eax, dword ptr [esp + 0x870]
    add esp, 0xc
    add eax, 0xf2
    push 0x6
    push 0xff
    push eax
    call ext_0085D510
    add esp, 0xc
loc_866E38:
    call ext_00868510
    mov eax, dword ptr [esp + 0x2c]
    pop ebp
    pop edi
    pop esi
    pop ebx
    add esp, 0x850
    ret

    }
}
