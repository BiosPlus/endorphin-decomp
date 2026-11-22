// Decompiled translation unit: src/leaf/decompiled_860000.cpp
extern "C" void ext_0085C130();
extern "C" void ext_0085C170();

extern "C" void ext_0085C170();
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
extern "C" void ext_008596E0();
extern "C" void ext_00859780();

extern "C" void ext_00859780();
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
extern "C" void ext_008599F0();
extern "C" void ext_0086CCC0();

extern "C" void ext_0086CCC0();
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
extern "C" int mem_00AC4A94;
extern "C" void __cdecl fn_0086F000(int* ptr);
extern "C" void ext_00864790();
extern "C" void ext_00869310();
extern "C" void ext_00869530();

extern "C" void ext_00869530();
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
extern "C" { extern void ext_0085D560(); extern int mem_00924248; extern int mem_00BC70E0; extern int mem_00BC70BC; extern int mem_00BC70F4; extern int mem_00BC6410; extern int mem_00BC6578; extern int mem_00924210; }

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

// [0x008692F0] sub_008692F0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_008692F0(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        je done_008692F0
        mov dl, byte ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
    fill_008692F0:
        mov byte ptr [eax], dl
        inc eax
        dec ecx
        jne fill_008692F0
    done_008692F0:
        ret
    }
}

// [0x00869310] sub_00869310 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_00869310(unsigned char* dst, const unsigned char* src, unsigned int count) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        je done_00869310
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x8]
    copy_00869310:
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        inc eax
        inc ecx
        dec esi
        jne copy_00869310
    done_00869310:
        pop esi
        ret
    }
}

// [0x00869F30] sub_00869F30 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_00869F30(int* dst, int count) {
    __asm {
        mov ecx, dword ptr [esp + 8]
        test ecx, ecx
        je done_00869F30
        mov eax, dword ptr [esp + 4]
    zero_loop_00869F30:
        mov dword ptr [eax], 0
        add eax, 4
        dec ecx
        jne zero_loop_00869F30
    done_00869F30:
        ret
    }
}

// [0x0086CCE0] sub_0086CCE0 (32 bytes)
extern "C" unsigned char __cdecl fn_0086CCE0(void* self) {
    unsigned char* p = (unsigned char*)self;
    unsigned char result = 0;
    if (p[0] == 0xFE) {
        unsigned char v = p[1];
        if (v < 4) {
            result = v;
        }
    }
    return result;
}

// [0x0086CF90] sub_0086CF90 (32 bytes)
extern "C" int mem_00924214;
extern "C" __declspec(naked) void* __cdecl fn_0086CF90(unsigned int a, unsigned int b) {
    __asm {
        mov eax, dword ptr [esp + 4]
        imul eax, dword ptr [esp + 8]
        push eax
        push 0x40
        call dword ptr [mem_00924214]
        ret
    }
}

// [0x0086CCC0] sub_0086CCC0 (32 bytes)
extern "C" unsigned char __cdecl ext_0086CCE0(void* p);

extern "C" __declspec(naked) void* __cdecl fn_0086CCC0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_0086CCE0
        add esp, 0x4
        cmp al, 0x1
        mov eax, esi
        jne SHORT fn_0086CCC0_done
        mov eax, dword ptr [esi + 0x4]
fn_0086CCC0_done:
        pop esi
        ret
    }
}

// [0x00869380] sub_00869380 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_00869380(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        xor ecx, ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax], 0x67452301
        mov dword ptr [eax + 0x4], 0xefcdab89
        mov dword ptr [eax + 0x8], 0x98badcfe
        mov dword ptr [eax + 0xc], 0x10325476
        ret
    }
}

// [0x0086AF00] sub_0086AF00 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0086AF00(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        je ret1
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [eax]
        add eax, 0x4
        test edx, edx
        jne ret0
    scan:
        dec ecx
        je ret1
        mov edx, dword ptr [eax]
        add eax, 0x4
        test edx, edx
        je scan
    ret0:
        xor eax, eax
        ret
    ret1:
        mov eax, 0x1
        ret
    }
}

// [0x0086AF50] sub_0086AF50 (48 bytes)
extern "C" __declspec(naked) int __cdecl fn_0086AF50(int* arr, int count) {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je zero_out
        mov ecx, dword ptr [esp + 4]
        dec eax
        mov edx, dword ptr [ecx + 4*eax]
        lea ecx, [ecx + 4*eax]
        test edx, edx
        jne done_out
loop_top:
        mov edx, eax
        dec eax
        sub ecx, 4
        test edx, edx
        je done_out
        cmp dword ptr [ecx], 0
        je loop_top
done_out:
        inc eax
        ret
zero_out:
        xor eax, eax
        ret
    }
}

// [0x00869F50] sub_00869F50 (64 bytes)
extern "C" __declspec(naked) void __cdecl fn_00869F50(unsigned int* bits, unsigned int index, unsigned int n) {
    __asm {
        mov edx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ecx, edx
        test edx, edx
        mov eax, esi
        je  zero_done
    zero_loop:
        mov dword ptr [eax], 0x0
        add eax, 0x4
        dec ecx
        jne zero_loop
    zero_done:
        mov eax, dword ptr [esp + 0xc]
        shl edx, 0x5
        cmp eax, edx
        jae done
        mov ecx, eax
        mov edx, 0x1
        and ecx, 0x1f
        shl edx, cl
        shr eax, 0x5
        mov dword ptr [esi + 4*eax], edx
    done:
        pop esi
        ret
    }
}

// [0x0086A800] sub_0086A800 (64 bytes)
extern "C" void ext_0086A2B0();

extern "C" __declspec(naked) void __cdecl fn_0086A800(int a, int b, int c, int d, int e) {
    __asm {
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        sub esp, 0x208
        push eax
        mov eax, dword ptr [esp + 0x214]
        push ecx
        mov ecx, dword ptr [esp + 0x214]
        push edx
        push eax
        lea edx, [esp + 0x10]
        push ecx
        push edx
        call ext_0086A2B0
        add esp, 0x220
        ret
    }
}

// [0x0086CFB0] sub_0086CFB0 (64 bytes)
extern "C" void ext_008596E0();

extern "C" __declspec(naked) void __cdecl fn_0086CFB0(int flag) {
    __asm {
        push 0x10
        call ext_008596E0
        xor ecx, ecx
        add esp, 0x4
        cmp eax, ecx
        je done_0086CFB0
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov edx, 0x1
        cmp esi, ecx
        mov byte ptr [eax], -0x2
        mov byte ptr [eax + 0x1], dl
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        pop esi
        je set_one_0086CFB0
        mov dword ptr [eax + 0xc], ecx
        ret
    set_one_0086CFB0:
        mov dword ptr [eax + 0xc], edx
    done_0086CFB0:
        ret
    }
}

// [0x0086D210] sub_0086D210 (64 bytes)
extern "C" __declspec(naked) int __cdecl fn_0086D210(int* p) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi]
        and eax, 0xfffffff
        push eax
        call ext_0085C170
        mov esi, eax
        mov eax, dword ptr [edi + 0xc]
        add esp, 4
        cmp eax, -1
        jne short L_has_off
        add esi, 3
        pop edi
        mov eax, esi
        pop esi
        ret
L_has_off:
        push eax
        call ext_0085C130
        add esi, eax
        mov eax, dword ptr [edi + 0xc]
        add esp, 4
        add esi, eax
        mov eax, esi
        pop edi
        pop esi
        ret
    }
}

// [0x00869330] sub_00869330 (80 bytes)
extern "C" __declspec(naked) int __cdecl fn_00869330(void) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        je L_zero
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push ebx
        mov dl, byte ptr [eax]
        mov bl, byte ptr [ecx]
        inc eax
        cmp bl, dl
        lea esi, [ecx + 1]
        pop ebx
        jne L_diff
    L_loop:
        dec edi
        je L_zero
        mov dl, byte ptr [eax]
        mov cl, byte ptr [esi]
        inc eax
        inc esi
        cmp cl, dl
        je L_loop
    L_diff:
        xor ecx, ecx
        pop edi
        mov cl, byte ptr [eax - 0x1]
        xor eax, eax
        mov al, byte ptr [esi - 0x1]
        pop esi
        sub eax, ecx
        ret
    L_zero:
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}

// [0x00869F90] sub_00869F90 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_00869F90(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        xor eax, eax
        test ebx, ebx
        je done_outer
        mov edx, dword ptr [esp + 0x10]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x14]
loop_top:
        mov ecx, dword ptr [esi]
        add esi, 4
        sub ecx, eax
        cmp ecx, -1
        jne branch_b
        mov ebp, dword ptr [edx]
        or ecx, ecx
        sub ecx, ebp
        jmp store
branch_b:
        mov eax, dword ptr [edx]
        or ebp, -1
        sub ecx, eax
        sub ebp, eax
        cmp ebp, ecx
        sbb eax, eax
        neg eax
store:
        mov dword ptr [edi], ecx
        add edx, 4
        add edi, 4
        dec ebx
        jne loop_top
        pop edi
        pop esi
        pop ebp
done_outer:
        pop ebx
        ret
    }
}

// [0x0086AF80] sub_0086AF80 (80 bytes)
extern "C" __declspec(naked) int __cdecl fn_0086AF80(unsigned int* dst, const unsigned int* a, const unsigned int* b, int n) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        xor eax, eax
        test ebx, ebx
        je done
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0x14]
    loop_top:
        mov ecx, dword ptr [edi]
        add edi, 0x4
        add ecx, eax
        cmp ecx, eax
        jae no_wrap
        mov ecx, dword ptr [edx]
        jmp store
    no_wrap:
        mov eax, dword ptr [edx]
        add ecx, eax
        cmp ecx, eax
        sbb eax, eax
        neg eax
    store:
        mov dword ptr [esi], ecx
        add edx, 0x4
        add esi, 0x4
        dec ebx
        jne loop_top
        pop edi
        pop esi
    done:
        pop ebx
        ret
    }
}

// [0x0086D110] sub_0086D110 (80 bytes)
extern "C" void ext_008596E0();
extern "C" void ext_00859780();

extern "C" __declspec(naked) int __cdecl fn_0086D110(int* self) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov ebp, 0xfffffffe
        test byte ptr [esi + 0xc], 0x1
        je done
        mov eax, dword ptr [esi + 0x8]
        push eax
        call ext_008596E0
        mov edi, eax
        add esp, 0x4
        test edi, edi
        je fail
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [esi + 0x4]
        push ecx
        push edx
        push edi
        call ext_00859780
        mov eax, dword ptr [esi + 0xc]
        add esp, 0xc
        xor eax, 0x1
        mov dword ptr [esi + 0x4], edi
        mov dword ptr [esi + 0xc], eax
    done:
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret
    fail:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        ret
    }
}

// [0x0086D480] sub_0086D480 (80 bytes)
extern "C" void ext_0086D620();
extern "C" void ext_0086FF80();

extern "C" __declspec(naked) void __fastcall fn_0086D480(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x18]
        lea ecx, [esi + 0x1048]
        push edi
        push ecx
        mov dword ptr [esi + 0x1058], eax
        call ext_0086FF80
        lea edx, [esi + 0x1050]
        push edi
        push edx
        call ext_0086FF80
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x20]
        push eax
        push ecx
        push esi
        call ext_0086D620
        add esp, 0x1c
        pop edi
        pop esi
        ret
    }
}

// [0x0086CDB0] sub_0086CDB0 (96 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086CDB0(void* p) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        test byte ptr [esi + 0x14], 0x4
        je L_chk2
        mov esi, dword ptr [esi]
    L_chk2:
        test byte ptr [esi + 0x14], 0x2
        je L_end
        mov eax, dword ptr [esi + 0x4]
        mov edi, dword ptr [esi + 0x10]
        add eax, edi
        push eax
        call ext_008596E0
        mov edi, eax
        add esp, 0x4
        test edi, edi
        je L_fail
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [esi]
        push eax
        add ecx, eax
        push edx
        push edi
        mov dword ptr [esi + 0xc], ecx
        call ext_00859780
        mov eax, dword ptr [esi + 0x14]
        add esp, 0xc
        and al, -0x3
        mov dword ptr [esi], edi
        mov dword ptr [esi + 0x14], eax
    L_end:
        pop edi
        xor eax, eax
        pop esi
        ret
    L_fail:
        pop edi
        mov eax, 0xc
        pop esi
        ret
    }
}

// [0x0086A840] sub_0086A840 (96 bytes)
extern "C" void ext_00869FE0();
extern "C" void ext_0086A2B0();

extern "C" __declspec(naked) void __cdecl fn_0086A840(void) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        sub esp, 0x410
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 0x428]
        push esi
        push eax
        push ecx
        push edx
        call ext_00869FE0
        mov eax, dword ptr [esp + 0x434]
        push esi
        lea ecx, [esi + esi]
        push eax
        mov eax, dword ptr [esp + 0x430]
        lea edx, [esp + 0x1c]
        push ecx
        push edx
        lea ecx, [esp + 0x22c]
        push eax
        push ecx
        call ext_0086A2B0
        add esp, 0x28
        pop esi
        add esp, 0x410
        ret
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x00869E50] sub_00869E50 (112 bytes)
extern "C" __declspec(naked) void __cdecl fn_00869E50(void) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x8]
        push ebx
        push ebp
        xor ebp, ebp
        dec eax
        push esi
        push edi
        test ecx, ecx
        jbe epilogue2
        mov edx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x1c]
    outer_test:
        test eax, eax
        jl zero_fill
        xor esi, esi
        xor ecx, ecx
    bit_loop_check:
        cmp ecx, 0x20
        jae store_word
        xor ebx, ebx
        mov bl, byte ptr [eax + edi]
        shl ebx, cl
        add ecx, 0x8
        or esi, ebx
        dec eax
        test eax, eax
        jge bit_loop_check
    store_word:
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [edx], esi
        inc ebp
        add edx, 0x4
        cmp ebp, ecx
        jb outer_test
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    zero_fill:
        cmp ebp, ecx
        jae epilogue2
        mov edx, dword ptr [esp + 0x14]
        sub ecx, ebp
        xor eax, eax
        lea edi, [edx + 4*ebp]
        rep stosd
    epilogue2:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00869EC0] sub_00869EC0 (112 bytes)
extern "C" __declspec(naked) void __cdecl fn_00869EC0(void) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x10]
        push ebx
        xor edx, edx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        dec eax
        push esi
        test ecx, ecx
        push edi
        jbe zero_fill
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x18], ecx
    outer_loop:
        test eax, eax
        jl finish
        mov ecx, dword ptr [esp + 0x18]
        xor esi, esi
        mov edi, dword ptr [ecx]
    inner_cond:
        cmp esi, 0x20
        jae inner_end
        mov ebx, edi
        mov ecx, esi
        shr ebx, cl
        dec eax
        add esi, 0x8
        test eax, eax
        mov byte ptr [eax + ebp + 0x1], bl
        jge inner_cond
    inner_end:
        mov esi, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x20]
        inc edx
        add esi, 0x4
        cmp edx, ecx
        mov dword ptr [esp + 0x18], esi
        jb outer_loop
    zero_fill:
        test eax, eax
        jl finish
    zero_loop:
        mov byte ptr [eax + ebp], 0x0
        dec eax
        jns zero_loop
    finish:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x0086D0A0] sub_0086D0A0 (112 bytes)
extern "C" __declspec(naked) unsigned int __cdecl fn_0086D0A0(void* a1, unsigned int a2, unsigned int a3, unsigned char* s) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x20], edi
        test byte ptr [edi + 0x14], 0x4
        je no_deref
        mov eax, dword ptr [edi]
        mov dword ptr [esp + 0x20], eax
    no_deref:
        mov edx, dword ptr [esp + 0x20]
        mov ebp, dword ptr [esp + 0x18]
        mov ebx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [edi + 0x8]
        mov eax, dword ptr [edx + 0x4]
        mov edx, ebp
        imul edx, ebx
        sub eax, ecx
        cmp edx, eax
        jbe no_clamp
        xor edx, edx
        div ebp
        mov ebx, eax
    no_clamp:
        mov eax, dword ptr [esp + 0x20]
        mov esi, ebx
        imul esi, ebp
        mov edx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        add edx, ecx
        push esi
        push edx
        push eax
        call ext_00859780
        mov eax, dword ptr [edi + 0x8]
        add esp, 0xc
        add eax, esi
        mov dword ptr [edi + 0x8], eax
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret
    }
}

// [0x0086CD20] sub_0086CD20 (144 bytes)
extern "C" void ext_00859E00();
extern "C" void ext_0085BC20();
extern "C" void ext_0085BF70();
extern "C" void ext_0086FE40();
extern "C" void ext_0086FEE0();

extern "C" __declspec(naked) void __cdecl fn_0086CD20(void) {
    __asm {
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push edi
        call ext_0085BC20
        push edi
        mov ebp, eax
        call ext_0085BF70
        mov esi, dword ptr [esp + 0x1c]
        add esp, 0x8
        test eax, eax
        mov dword ptr [esi + 0x4], eax
        je L_end
        push ebx
        push edi
        call ext_0085BC20
        push esi
        push edi
        mov dword ptr [esi + 0x10], eax
        call ext_0086FEE0
        lea ebx, [esi + 0xc]
        push ebx
        push edi
        call ext_0086FE40
        push edi
        call ext_0085BC20
        mov dword ptr [esi + 0x8], eax
        mov eax, dword ptr [esi + 0x18]
        or al, 0x1
        add esp, 0x18
        mov dword ptr [esi + 0x18], eax
        mov eax, dword ptr [esi]
        shr eax, 0x18
        test al, 0x20
        jne L_skip
        mov ecx, dword ptr [ebx]
        push 0x0
        push ecx
        push edi
        call ext_00859E00
        add esp, 0xc
    L_skip:
        push edi
        call ext_0085BC20
        mov edx, dword ptr [ebx]
        mov ebx, dword ptr [esi + 0x10]
        sub edx, ebx
        add esp, 0x4
        add eax, edx
        mov dword ptr [esi + 0x14], eax
        pop ebx
    L_end:
        push edi
        call ext_0085BC20
        add esp, 0x4
        sub eax, ebp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// [0x0086FE40] sub_0086FE40 (160 bytes)
extern "C" void ext_0085BC20();
extern "C" void ext_00859DD0();

extern "C" __declspec(naked) int __cdecl fn_0086FE40(int a1, int* out) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        push esi
        push edi
        push ebx
        call ext_0085BC20
        push ebx
        mov ebp, eax
        call ext_00859DD0
        mov esi, eax
        add esp, 0x8
        cmp esi, 0xff00
        je L_ret
        cmp esi, 0x80
        jge L_ge80
        mov eax, dword ptr [esp + 0x18]
        push ebx
        mov dword ptr [eax], esi
        call ext_0085BC20
        add esp, 0x4
        sub eax, ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_ge80:
        jne L_gt80
        mov ecx, dword ptr [esp + 0x18]
        push ebx
        mov dword ptr [ecx], 0xffffffff
        call ext_0085BC20
        add esp, 0x4
        sub eax, ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_gt80:
        mov edi, dword ptr [esp + 0x18]
        and esi, 0x7f
        mov dword ptr [edi], 0x0
        jle L_ret
    L_loop:
        push ebx
        call ext_00859DD0
        add esp, 0x4
        cmp eax, 0xff00
        je L_ret
        mov edx, dword ptr [edi]
        shl edx, 0x8
        or edx, eax
        dec esi
        test esi, esi
        mov dword ptr [edi], edx
        jg L_loop
    L_ret:
        push ebx
        call ext_0085BC20
        add esp, 0x4
        sub eax, ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0086FEE0] sub_0086FEE0 (160 bytes)
extern "C" void ext_0085BC20();
extern "C" void ext_00859DD0();

extern "C" __declspec(naked) int __cdecl fn_0086FEE0(void) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push edi
        call ext_0085BC20
        push edi
        mov ebx, eax
        call ext_00859DD0
        add esp, 0x8
        cmp eax, 0xff00
        je tail
        mov cl, al
        and eax, 0x1f
        mov esi, eax
        and cl, 0xe0
        cmp esi, 0x1f
        mov byte ptr [esp + 0x10], cl
        jne store
        push edi
        xor esi, esi
        call ext_00859DD0
        add esp, 0x4
        cmp eax, 0xff00
        je tail
    body:
        mov dl, al
        and edx, 0x7f
        shl esi, 0x7
        or esi, edx
        test al, 0x80
        je store
        push edi
        call ext_00859DD0
        add esp, 0x4
        cmp eax, 0xff00
        jne body
        push edi
        call ext_0085BC20
        add esp, 0x4
        sub eax, ebx
        pop edi
        pop esi
        pop ebx
        ret
    store:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x14]
        and eax, 0xff
        and esi, 0xfffffff
        shl eax, 0x18
        or eax, esi
        mov dword ptr [ecx], eax
    tail:
        push edi
        call ext_0085BC20
        add esp, 0x4
        sub eax, ebx
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0086D160] sub_0086D160 (176 bytes)
extern "C" __declspec(naked) __int64 __cdecl fn_0086D160(__int64 val, unsigned int shift) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        push edi
        mov dword ptr [esp + 0x10], edx
        je done
        test edx, 0x80000000
        je non_negative
        cmp esi, 0x40
        jb neg_lt_64
        or eax, -1
        pop edi
        or edx, -1
        pop esi
        ret
    neg_lt_64:
        cmp esi, 0x1f
        jbe neg_le_31
        lea ecx, [esi - 0x20]
        or edi, -1
        shr edx, cl
        cmp esi, 0x20
        mov eax, edx
        je set_edx_edi
        mov ecx, 0x40
        or edx, -1
        sub ecx, esi
        shl edx, cl
        or eax, edx
        mov edx, edi
        pop edi
        pop esi
        ret
    neg_le_31:
        mov edi, edx
        mov ecx, esi
        sar edi, cl
        mov ecx, 0x20
        sub ecx, esi
        shl edx, cl
        mov ecx, esi
        shr eax, cl
        or edx, eax
        mov eax, edx
        mov edx, edi
        pop edi
        pop esi
        ret
    non_negative:
        cmp esi, 0x40
        jb pos_lt_64
        xor eax, eax
        pop edi
        xor edx, edx
        pop esi
        ret
    pos_lt_64:
        cmp esi, 0x1f
        jbe pos_le_31
        lea ecx, [esi - 0x20]
        xor edi, edi
        shr edx, cl
        mov eax, edx
        mov edx, edi
        pop edi
        pop esi
        ret
    pos_le_31:
        mov edi, edx
        mov ecx, esi
        sar edi, cl
        shr eax, cl
        mov ecx, 0x20
        sub ecx, esi
        shl edx, cl
        or eax, edx
    set_edx_edi:
        mov edx, edi
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x0086CFF0] sub_0086CFF0 (176 bytes)
extern "C" __declspec(naked) int __cdecl fn_0086CFF0(void) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        xor ebx, ebx
        cmp esi, edi
        mov dword ptr [esp + 0x10], ebx
        jne L_0086D013
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret
    L_0086D013:
        push esi
        call ext_0086CCC0
        push edi
        mov dword ptr [esp + 0x20], eax
        call ext_0086CCC0
        push esi
        mov dword ptr [esp + 0x28], eax
        call ext_008599F0
        push edi
        mov esi, eax
        call ext_008599F0
        mov ecx, dword ptr [esp + 0x30]
        add esp, 0x10
        cmp ecx, esi
        jbe L_0086D042
        mov ebp, esi
    L_0086D042:
        cmp ebp, eax
        jbe L_0086D048
        mov ebp, eax
    L_0086D048:
        test ebp, ebp
        jbe L_0086D06F
        mov ecx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x1c]
        sub edi, ecx
    L_0086D056:
        movsx edx, byte ptr [edi + ecx]
        movsx ebx, byte ptr [ecx]
        sub ebx, edx
        jne L_0086D091
        mov edx, dword ptr [esp + 0x10]
        inc edx
        inc ecx
        cmp edx, ebp
        mov dword ptr [esp + 0x10], edx
        jb L_0086D056
    L_0086D06F:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x10]
        cmp edx, ecx
        jae L_0086D091
        cmp esi, eax
        jae L_0086D08A
        or ebx, -0x1
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        pop ecx
        ret
    L_0086D08A:
        jbe L_0086D091
        mov ebx, 0x1
    L_0086D091:
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x0086F000] sub_0086F000 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086F000(int* ptr) {
    __asm {
        mov cx, 0x13
        mov eax, dword ptr [esp + 0x4]
    loop_start:
        movsx edx, cx
        dec cx
        mov dword ptr [eax + 4*edx], 0x0
        jns loop_start
        ret
        mov edi, edi
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    }
}

// [0x0086F020] sub_0086F020 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086F020(const int* src, int* dst) {
    __asm {
        mov dx, 0x13
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
    loop_top:
        movsx eax, dx
        shl eax, 0x2
        dec dx
        mov ecx, dword ptr [eax + esi]
        mov dword ptr [eax + edi], ecx
        jns loop_top
        pop edi
        pop esi
        ret
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// [0x0086EE30] sub_0086EE30 (48 bytes)
extern "C" void ext_0086B220();

extern "C" __declspec(naked) void __cdecl fn_0086EE30(void) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0xc]
        push edi
        push esi
        add edi, 0x14
        call ext_0086B220
        add esp, 0x8
        add esi, 0x14
        push edi
        push esi
        call ext_0086B220
        add esp, 0x8
        pop edi
        pop esi
        ret
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// [0x0086EFD0] sub_0086EFD0 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086EFD0(void* p) {
    __asm {
        xor dx, dx
        mov ecx, dword ptr [esp + 0x4]
    loop_start:
        movsx eax, dx
        inc dx
        mov dword ptr [ecx + 4*eax], 0xffffffff
        movsx eax, dx
        cmp eax, 0x5
        jb loop_start
        and dword ptr [ecx], 0x3fffffff
        ret
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0086BF40] sub_0086BF40 (53 bytes)
extern "C" __declspec(naked) short __cdecl fn_0086BF40(int* p) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [ecx + 0x4c]
        cmp esi, 0x1
        jbe loop_init
        xor ax, ax
        pop esi
        ret
    loop_init:
        xor dx, dx
    loop_top:
        movsx eax, dx
        cmp dword ptr [ecx + 4*eax], 0x0
        jne fail_ret
        inc dx
        movsx eax, dx
        cmp eax, 0x13
        jb loop_top
        cmp esi, 0x1
        pop esi
        sbb eax, eax
        inc eax
        ret
    fail_ret:
        xor ax, ax
        pop esi
        ret
    }
}

// [0x0086C1D0] sub_0086C1D0 (56 bytes)
extern "C" void ext_0086C020();
extern "C" void ext_0086EE60();

extern "C" __declspec(naked) void __cdecl fn_0086C1D0(void) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        sub esp, 0x14
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push eax
        push ecx
        push esi
        call ext_0086C020
        mov ecx, dword ptr [esp + 0x30]
        mov eax, dword ptr [esp + 0x2c]
        lea edx, [esp + 0x10]
        add esp, 0xc
        push esi
        push ecx
        push eax
        push edx
        call ext_0086EE60
        add esp, 0x10
        pop esi
        add esp, 0x14
        ret
    }
}

// [0x0086F120] sub_0086F120 (59 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086F120(void) {
    __asm {
        mov dx, 0x13
        push ebx
        mov ecx, dword ptr [esp + 0x10]
        push esi
        push edi
        xor esi, esi
        mov edi, dword ptr [esp + 0x10]
        push ebp
        mov ebx, dword ptr [esp + 0x18]
    loop_top:
        movsx eax, dx
        shl eax, 0x2
        shr esi, 0x10
        mov ebp, dword ptr [eax + ebx]
        add ebp, dword ptr [eax + edi]
        add esi, ebp
        mov ebp, esi
        and ebp, 0xffff
        dec dx
        mov dword ptr [eax + ecx], ebp
        jns loop_top
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00868140] sub_00868140 (64 bytes)
extern "C" __declspec(naked) char* __cdecl fn_00868140(char* hay, char* needle) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        mov ecx, dword ptr [esp + 0xc]
        push esi
        cmp byte ptr [ecx], 0x0
        je epi_148
        cmp byte ptr [eax], 0x0
        je zero_148
    outer_154:
        mov edx, eax
        mov esi, ecx
        cmp byte ptr [eax], 0x0
        je nomatch_16e
    inner_15d:
        mov bl, byte ptr [esi]
        test bl, bl
        je nomatch_16e
        cmp byte ptr [edx], bl
        jne nomatch_16e
        inc edx
        inc esi
        cmp byte ptr [edx], 0x0
        jne inner_15d
    nomatch_16e:
        cmp byte ptr [esi], 0x0
        je epi_148
        inc eax
        cmp byte ptr [eax], 0x0
        jne outer_154
    zero_148:
        xor eax, eax
    epi_148:
        pop esi
        pop ebx
        ret
        mov edi, edi
    }
}

// [0x0086F0A0] sub_0086F0A0 (64 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086F0A0(void) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push esi
        xor si, si
        push edi
        mov edx, dword ptr [esp + 0x10]
    loop_start:
        lea eax, [2*esi + 0xa]
        movsx edi, ax
        lea eax, [ecx + 4*edi]
        mov edi, dword ptr [ecx + 4*edi + 0x4]
        mov eax, dword ptr [eax]
        shl eax, 0x10
        or edi, eax
        movsx eax, si
        inc si
        mov dword ptr [edx + 4*eax], edi
        movsx edi, si
        cmp edi, 0x5
        jb loop_start
        pop edi
        pop esi
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    }
}

// [0x0086F8F0] sub_0086F8F0 (64 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086F8F0(unsigned int* p) {
    __asm {
        push esi
        push edi
        mov di, 0x13
        mov esi, dword ptr [esp + 0xc]
    loop_top:
        test di, di
        mov edx, 0x0
        je skip_carry
        movsx eax, di
        mov edx, dword ptr [esi + 4*eax - 0x4]
        and edx, 0x1
        shl edx, 0x10
    skip_carry:
        movsx eax, di
        lea eax, [esi + 4*eax]
        mov ecx, dword ptr [eax]
        or ecx, edx
        _emit 0xc1
        _emit 0xe9
        _emit 0x01
        dec di
        mov dword ptr [eax], ecx
        jns loop_top
        pop edi
        pop esi
        ret
        _emit 0x8b
        _emit 0xff
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0086FFF0] sub_0086FFF0 (72 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086FFF0(void) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        add ecx, 0x4
        shr edx, 0x18
        mov byte ptr [eax], dl
        mov edx, dword ptr [ecx - 0x4]
        inc eax
        shr edx, 0x10
        mov byte ptr [eax], dl
        mov edx, dword ptr [ecx - 0x4]
        inc eax
        shr edx, 0x8
        mov byte ptr [eax], dl
        mov dl, byte ptr [ecx - 0x4]
        inc eax
        mov byte ptr [eax], dl
        mov edx, dword ptr [ecx]
        inc eax
        shr edx, 0x18
        mov byte ptr [eax], dl
        mov edx, dword ptr [ecx]
        inc eax
        shr edx, 0x10
        mov byte ptr [eax], dl
        mov edx, dword ptr [ecx]
        inc eax
        shr edx, 0x8
        mov byte ptr [eax], dl
        mov cl, byte ptr [ecx]
        mov byte ptr [eax + 0x1], cl
        ret
    }
}

// [0x0086AE50] sub_0086AE50 (81 bytes)
extern "C" __declspec(naked) int __cdecl fn_0086AE50(void) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        test eax, eax
        je ae50_zero
        mov esi, dword ptr [esp + 0x8]
        dec eax
        mov edx, dword ptr [esi + 4*eax]
        lea ecx, [esi + 4*eax]
        test edx, edx
        jne ae50_a
    ae50_scan:
        mov edx, eax
        dec eax
        sub ecx, 0x4
        test edx, edx
        je ae50_a
        cmp dword ptr [ecx], 0x0
        je ae50_scan
    ae50_a:
        lea edx, [eax + 0x1]
        test edx, edx
        jne ae50_b
    ae50_zero:
        xor eax, eax
        pop esi
        ret
    ae50_b:
        mov eax, dword ptr [esi + 4*edx - 0x4]
        xor ecx, ecx
    ae50_bits:
        test eax, eax
        je ae50_c
        inc ecx
        shr eax, 1
        cmp ecx, 0x20
        jb ae50_bits
    ae50_c:
        lea eax, [edx + 0x7ffffff]
        pop esi
        shl eax, 5
        add eax, ecx
        ret
    }
}

// [0x00860330] sub_00860330 (80 bytes)
extern "C" __declspec(naked) void __cdecl fn_00860330(int a1, int a2, int* a3, int* a4) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, 0x1
        jge L_hi1
        mov esi, 0x1
    L_hi1:
        cmp esi, 0x1e
        jle L_a
        mov esi, 0x1e
    L_a:
        mov eax, dword ptr [esp + 0x8]
        cmp eax, 0x1
        jge L_b
        mov eax, 0x1
    L_b:
        cmp eax, 0x3c
        jle L_c
        mov eax, 0x3c
    L_c:
        cmp esi, eax
        jle L_d
        mov eax, esi
    L_d:
        cdq
        idiv esi
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [ecx], esi
        pop esi
        mov dword ptr [edx], eax
        ret
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    }
}

// [0x0086F8A0] sub_0086F8A0 (80 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086F8A0(void* p) {
    __asm {
        sub esp, 4
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        xor edi, edi
        xor ebx, ebx
    loop_top:
        cmp dword ptr [mem_00AC4A94], ebx
        je skip_call
        lea eax, [esp + 0xc]
        push 4
        push eax
        call dword ptr [mem_00AC4A94]
        add esp, 8
    skip_call:
        movsx ecx, di
        inc di
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [esi + 4*ecx], eax
        movsx eax, di
        cmp eax, 5
        jb loop_top
        pop edi
        and dword ptr [esi], 0x3fffffff
        pop esi
        pop ebx
        add esp, 4
        ret
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// [0x0086F050] sub_0086F050 (80 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086F050(int* dst, const unsigned int* src) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov di, 0x4
        push ebp
        push esi
        call fn_0086F000
        mov edx, dword ptr [esp + 0x18]
        add esp, 0x4
    loop_start:
        movsx eax, di
        lea ebx, [2*edi]
        lea eax, [edx + 4*eax]
        add bx, 0xb
        mov ecx, dword ptr [eax]
        movsx ebp, bx
        dec bx
        and ecx, 0xffff
        mov dword ptr [esi + 4*ebp], ecx
        mov ecx, dword ptr [eax]
        shr ecx, 0x10
        movsx eax, bx
        dec di
        mov dword ptr [esi + 4*eax], ecx
        jns loop_start
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
        mov edi, edi
    }
}

// [0x0086C180] sub_0086C180 (79 bytes)
extern "C" void ext_0086AFD0();
extern "C" void ext_0086C020();
extern "C" void ext_0086EE60();

extern "C" __declspec(naked) void __cdecl fn_0086C180(void) {
    __asm {
        sub esp, 0x3c
        lea eax, [esp + 0x14]
        push esi
        mov esi, dword ptr [esp + 0x44]
        push eax
        mov ecx, dword ptr [esp + 0x4c]
        push 0x0
        push 0x0
        push esi
        push ecx
        call ext_0086AFD0
        mov eax, dword ptr [esp + 0x64]
        lea ecx, [esp + 0x18]
        add esp, 0x14
        push eax
        push ecx
        push esi
        call ext_0086C020
        mov ecx, dword ptr [esp + 0x58]
        lea edx, [esp + 0x24]
        lea eax, [esp + 0x10]
        add esp, 0xc
        push esi
        push ecx
        push edx
        push eax
        call ext_0086EE60
        add esp, 0x10
        pop esi
        add esp, 0x3c
        ret
    }
}

// [0x0086A1E0] sub_0086A1E0 (93 bytes)
extern "C" __declspec(naked) unsigned int __cdecl fn_0086A1E0(unsigned int* out, const unsigned int* in, unsigned int shift, unsigned int count) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x10]
        xor eax, eax
        cmp esi, 0x20
        jae done
        mov ecx, dword ptr [esp + 0x14]
        test ecx, ecx
        je done
        mov ecx, 0x20
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        sub ecx, esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x1c], ecx
    loop_top:
        mov edx, dword ptr [edi]
        mov ecx, esi
        mov ebp, edx
        add edi, 0x4
        shl ebp, cl
        add ebx, 0x4
        or ebp, eax
        mov dword ptr [ebx - 0x4], ebp
        test esi, esi
        je zero_carry
        mov ecx, dword ptr [esp + 0x1c]
        shr edx, cl
        mov eax, edx
        jmp next
    zero_carry:
        xor eax, eax
    next:
        mov ecx, dword ptr [esp + 0x20]
        dec ecx
        mov dword ptr [esp + 0x20], ecx
        jne loop_top
        pop edi
        pop ebp
        pop ebx
    done:
        pop esi
        ret
    }
}

// [0x0086FF80] sub_0086FF80 (102 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086FF80(void) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        push esi
        mov al, byte ptr [ecx]
        mov edx, eax
        mov eax, dword ptr [esp + 0x8]
        shl edx, 0x18
        mov dword ptr [eax], edx
        mov esi, dword ptr [eax]
        inc ecx
        xor edx, edx
        add eax, 0x4
        mov dl, byte ptr [ecx]
        shl edx, 0x10
        or esi, edx
        inc ecx
        xor edx, edx
        mov dword ptr [eax - 0x4], esi
        mov dh, byte ptr [ecx]
        or esi, edx
        inc ecx
        xor edx, edx
        mov dword ptr [eax - 0x4], esi
        mov dl, byte ptr [ecx]
        or esi, edx
        inc ecx
        xor edx, edx
        mov dword ptr [eax - 0x4], esi
        mov dl, byte ptr [ecx]
        shl edx, 0x18
        mov dword ptr [eax], edx
        mov esi, dword ptr [eax]
        inc ecx
        xor edx, edx
        mov dl, byte ptr [ecx]
        shl edx, 0x10
        or esi, edx
        inc ecx
        xor edx, edx
        mov dword ptr [eax], esi
        mov dh, byte ptr [ecx]
        or esi, edx
        xor edx, edx
        mov dword ptr [eax], esi
        mov dl, byte ptr [ecx + 0x1]
        or edx, esi
        pop esi
        mov dword ptr [eax], edx
        ret
    }
}

// [0x0086A240] sub_0086A240 (100 bytes)
extern "C" __declspec(naked) unsigned int __cdecl fn_0086A240(unsigned int* dst, const unsigned int* src, unsigned int shift, unsigned int count) {
    __asm {
        push ebx
        push edi
        mov edi, dword ptr [esp + 0x14]
        xor eax, eax
        cmp edi, 0x20
        jae done_early
        mov ebx, dword ptr [esp + 0x18]
        test ebx, ebx
        je done_early
        mov edx, dword ptr [esp + 0xc]
        mov ecx, 0x20
        sub ecx, edi
        push ebp
        mov dword ptr [esp + 0x1c], ecx
        mov ecx, dword ptr [esp + 0x14]
        sub ecx, edx
        push esi
        lea esi, [edx + 4*ebx]
        mov dword ptr [esp + 0x1c], ecx
        jmp loop_entry
    loop_top:
        mov ecx, dword ptr [esp + 0x1c]
    loop_entry:
        mov edx, dword ptr [ecx + esi - 0x4]
        sub esi, 0x4
        mov ebp, edx
        mov ecx, edi
        shr ebp, cl
        dec ebx
        or ebp, eax
        test edi, edi
        mov dword ptr [esi], ebp
        je zero_carry
        mov ecx, dword ptr [esp + 0x20]
        shl edx, cl
        mov eax, edx
        jmp next_iter
    zero_carry:
        xor eax, eax
    next_iter:
        test ebx, ebx
        jne loop_top
        pop esi
        pop ebp
    done_early:
        pop edi
        pop ebx
        ret
    }
}

// [0x008685C0] sub_008685C0 (106 bytes)
extern "C" __declspec(naked) int __cdecl fn_008685C0(void) {
    __asm {
        pushfd
        pushfd
        pop     eax
        and     eax, 0xffdfffff
        push    eax
        popfd
        pushfd
        pop     eax
        test    eax, 0x200000
        jne     loc_868626
        pushfd
        pop     eax
        or      eax, 0x200000
        push    eax
        popfd
        pushfd
        pop     eax
        test    eax, 0x200000
        je      loc_868626
        mov     eax, 0
        push    ebx
        push    ecx
        push    edx
        cpuid
        sub     ebx, 0x756e6547
        sub     edx, 0x49656e69
        sub     ecx, 0x6c65746e
        // 09 cb = or ebx, ecx (r/m32, r32 opcode 09 instead of 0B)
        // 09 d3 = or ebx, edx
        _emit 0x09
        _emit 0xcb
        _emit 0x09
        _emit 0xd3
        pop     edx
        pop     ecx
        pop     ebx
        jne     loc_868626
        mov     eax, 1
        push    edx
        push    ebx
        push    ecx
        cpuid
        pop     ecx
        pop     ebx
        and     edx, 0x40000000
        pop     edx
        je      loc_868626
        popfd
        mov     eax, 1
        ret
    loc_868626:
        popfd
        // 29 c0 = sub eax, eax (r/m32, r32 opcode 29 instead of 2B)
        _emit 0x29
        _emit 0xc0
        ret
    }
}

// [0x00865960] sub_00865960 (112 bytes)
extern "C" __declspec(naked) void __cdecl fn_00865960(unsigned int* s, const unsigned int* p) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        push ebx
        push esi
        push edi
        mov eax, dword ptr [edx]
        push ebp
        mov esi, dword ptr [esp + 0x14]
        add edx, 0x8
        mov ebp, 0xc
        add dword ptr [esi + 0x4], eax
        mov ecx, dword ptr [edx - 0x4]
        add dword ptr [esi], ecx
    loop_top:
        mov ebx, dword ptr [esi]
        mov edi, dword ptr [esi + 0x4]
        xor edi, ebx
        mov cl, 0x20
        shr ebx, 0x4
        mov eax, edi
        and bl, 0x1f
        add edx, 0x8
        sub cl, bl
        shr eax, cl
        mov cl, bl
        shl edi, cl
        or eax, edi
        mov cl, 0x20
        sub eax, dword ptr [edx - 0x8]
        mov dword ptr [esi + 0x4], eax
        mov edi, dword ptr [esi]
        xor edi, eax
        shr eax, 0x7
        mov ebx, edi
        and al, 0x1f
        sub cl, al
        shr ebx, cl
        mov cl, al
        shl edi, cl
        or ebx, edi
        add ebx, dword ptr [edx - 0x4]
        dec ebp
        mov dword ptr [esi], ebx
        jne loop_top
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// [0x008671C0] sub_008671C0 (112 bytes)
extern "C" void ext_0085D560();
extern "C" int mem_00924224;
extern "C" __declspec(naked) void* __cdecl fn_008671C0(const char* name) {
    __asm {
        sub esp, 0x4
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        push 0x0
        push eax
        mov edi, dword ptr [mem_00924224]
        push ebx
        call edi
        mov esi, eax
        test esi, esi
        jne f8671_have_len
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x4
        ret
    f8671_have_len:
        inc esi
        push esi
        call ext_0085D560
        mov dword ptr [esp + 0x10], eax
        add esp, 0x4
        test eax, eax
        jne f8671_have_buf
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x4
        ret
    f8671_have_buf:
        mov eax, dword ptr [esp + 0xc]
        push esi
        push eax
        push ebx
        call edi
        test eax, eax
        jne f8671_ok
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x4
        ret
    f8671_ok:
        mov eax, dword ptr [esp + 0xc]
        pop edi
        pop esi
        pop ebx
        add esp, 0x4
        ret
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// [0x0086B220] sub_0086B220 (128 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086B220(void) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
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
        pop ebx
        ret
        mov edi, edi
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        xor dx, dx
        mov ecx, dword ptr [esp + 0x4]
    loop1:
        movsx eax, dx
        inc dx
        mov dword ptr [ecx + 4*eax], 0x0
        movsx eax, dx
        cmp eax, 0x9
        jbe loop1
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        xor di, di
    loop2:
        movsx eax, di
        shl eax, 0x2
        inc di
        mov ecx, dword ptr [eax + edx]
        mov dword ptr [eax + esi], ecx
        movsx eax, di
        cmp eax, 0x9
        jbe loop2
        pop edi
        pop esi
        ret
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x00860800] sub_00860800 (107 bytes)
extern "C" int mem_00BC70C0;
extern "C" int mem_00BC7100;
extern "C" int mem_00BC672C;
extern "C" int mem_00AB9608;
extern "C" int mem_00AB960C;
extern "C" __declspec(naked) int __cdecl fn_00860800(int s) {
    __asm {
        sub esp, 0x4
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x4
        mov dword ptr [esp + 0x8], 0x1
        push eax
        push 0x20
        push 0xffff
        push esi
        call dword ptr [mem_00BC70C0]
        cmp eax, -0x1
        jne nonblock
        push esi
        call dword ptr [mem_00BC7100]
        mov eax, 0x1
        pop esi
        add esp, 0x4
        ret
    nonblock:
        push offset mem_00AB9608
        push 0x8004667e
        push esi
        call dword ptr [mem_00BC672C]
        push 0x4
        push offset mem_00AB960C
        push 0x4000
        push 0x3e8
        push esi
        call dword ptr [mem_00BC70C0]
        xor eax, eax
        pop esi
        add esp, 0x4
        ret
    }
}

// [0x00864B80] sub_00864B80 (144 bytes)
extern "C" __declspec(naked) void __cdecl fn_00864B80(void) {
    __asm {
        sub esp, 0x4
        xor eax, eax
        mov dword ptr [mem_00AB98EC], eax
        push ebx
        push esi
        push edi
        mov di, word ptr [esp + 0x28]
        push ebp
        cmp di, ax
        je done
        mov si, word ptr [esp + 0x28]
        mov ebx, dword ptr [esp + 0x30]
    loop_top:
        mov word ptr [esp + 0x12], di
        cmp di, 0x30
        jbe skip_clamp
        mov word ptr [esp + 0x12], 0x30
    skip_clamp:
        mov bp, word ptr [esp + 0x12]
        mov eax, dword ptr [esp + 0x34]
        __emit 0x66
        __emit 0xc1
        __emit 0xed
        __emit 0x01
        push eax
        mov ecx, dword ptr [esp + 0x28]
        push ebx
        mov edx, dword ptr [esp + 0x28]
        push ebp
        mov eax, dword ptr [esp + 0x28]
        push esi
        push ecx
        push edx
        mov ecx, dword ptr [esp + 0x30]
        push eax
        push ecx
        call ext_00864790
        add esp, 0x20
        test eax, eax
        jne done
        add si, bp
        mov ecx, dword ptr [esp + 0x12]
        and ecx, 0xffff
        add ebx, ecx
        sub di, word ptr [esp + 0x12]
        jne loop_top
    done:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x4
        ret
        __emit 0x8d
        __emit 0xa4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8d
        __emit 0xa4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    }
}

// [0x008680B0] sub_008680B0 (144 bytes)
extern "C" char mem_00AC0668[];
extern "C" char mem_00AC0670[];
extern "C" void ext_0085E1F0();
extern "C" void ext_0085E690();
extern "C" void ext_00868140();
extern "C" __declspec(naked) int __cdecl fn_008680B0(char* s) {
    __asm {
        push ebx
        push esi
        xor si, si
        push edi
        mov edi, dword ptr [esp + 0x10]
        push edi
        call ext_0085E1F0
        add esp, 4
        test eax, eax
        je after
    lp:
        movzx eax, si
        inc si
        lea ebx, [eax + edi]
        mov cl, byte ptr [ebx]
        push ecx
        call ext_0085E690
        add esp, 4
        mov byte ptr [ebx], al
        push edi
        call ext_0085E1F0
        movzx ecx, si
        add esp, 4
        cmp eax, ecx
        ja lp
    after:
        push offset mem_00AC0668
        push edi
        call ext_00868140
        add esp, 8
        mov esi, eax
        push offset mem_00AC0670
        push edi
        call ext_00868140
        add esp, 8
        test eax, eax
        jne l2
        pop edi
        cmp esi, 1
        sbb eax, eax
        pop esi
        neg eax
        pop ebx
        ret
    l2:
        cmp byte ptr [eax + 2], 0x58
        je l3
        cmp eax, esi
        jb l4
        test esi, esi
        jne l3
    l4:
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        ret
    l3:
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0
        _emit 0
        _emit 0
        _emit 0
    }
}

// [0x0086EA60] sub_0086EA60 (144 bytes)
extern "C" void ext_0086B180();
extern "C" void ext_0086B200();
extern "C" void ext_0086B220();
extern "C" void ext_0086B510();

extern "C" __declspec(naked) void __cdecl fn_0086EA60(void* p, void* q, void* d) {
    __asm {
        sub esp, 0x28
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x00
        push esi
        mov esi, dword ptr [esp + 0x30]
        push edi
        push eax
        push esi
        call ext_0086B220
        lea ecx, [esp + 0x10]
        add esp, 0x8
        push ecx
        call ext_0086B180
        lea eax, [esp + 0x20]
        lea ecx, [esp + 0xc]
        add esp, 0x4
        push eax
        push ecx
        push esi
        call ext_0086B510
        mov esi, dword ptr [esp + 0x44]
        mov edi, dword ptr [esp + 0x48]
        add esp, 0xc
        cmp word ptr [esi], 0
        push edi
        je zero_path
        lea eax, [esi + 2]
        lea ecx, [esp + 0xc]
        push eax
        push ecx
        call ext_0086B510
        add esp, 0xc
        jmp loop_setup
    zero_path:
        call ext_0086B200
        add esp, 0x4
    loop_setup:
        xor dx, dx
    loop_top:
        movsx eax, dx
        shl eax, 2
        inc dx
        mov ecx, dword ptr [esi + eax + 0x16]
        xor ecx, dword ptr [esp + eax + 0x1c]
        xor dword ptr [edi + eax], ecx
        movsx eax, dx
        cmp eax, 5
        jb loop_top
        pop edi
        pop esi
        add esp, 0x28
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0086BF80] sub_0086BF80 (148 bytes)
extern "C" void ext_0086EE60();
extern "C" void ext_0086F050();
extern "C" void ext_0086F0A0();
extern "C" void ext_0086F240();
extern "C" void ext_0086F8A0();

extern "C" __declspec(naked) void __cdecl fn_0086BF80(void) {
    __asm {
        sub esp, 0x154
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push esi
        push edi
        push eax
        call ext_0086F8A0
        lea eax, [esp + 0x70]
        lea ecx, [esp + 0xc]
        add esp, 0x4
        push eax
        push ecx
        call ext_0086F050
        lea ecx, [esp + 0x24]
        mov esi, dword ptr [esp + 0x168]
        add esp, 0x8
        lea eax, [esi + 0x52]
        push ecx
        push eax
        call ext_0086F050
        lea eax, [esp + 0xc4]
        lea ecx, [esp + 0x114]
        lea edx, [esp + 0x24]
        add esp, 0x8
        push eax
        push ecx
        lea eax, [esp + 0x74]
        push edx
        push eax
        call ext_0086F240
        mov edi, dword ptr [esp + 0x174]
        lea ecx, [esp + 0xcc]
        add esp, 0x10
        push edi
        push ecx
        call ext_0086F0A0
        add esp, 0x8
        lea eax, [edi + 0x14]
        push esi
        push eax
        add esi, 0x2a
        push esi
        push edi
        call ext_0086EE60
        add esp, 0x10
        pop edi
        pop esi
        add esp, 0x154
        ret
    }
}

// [0x008635C0] sub_008635C0 (128 bytes)
extern "C" int mem_00AB9F38;
extern "C" void ext_0085F7B0();
extern "C" void ext_0085D530();

extern "C" __declspec(naked) int __cdecl fn_008635C0(const void* arg) {
    __asm {
        push ebx
        mov eax, dword ptr [mem_00AB9F38]
        push esi
        test eax, eax
        push edi
        je loc_863601
        mov ebx, 0
        jle loc_863601
        mov esi, 0xab9f40
        mov edi, dword ptr [esp + 0x10]
    loc_8635DC:
        push 0xd
        push esi
        push edi
        call ext_0085F7B0
        add esp, 0xc
        test eax, eax
        mov eax, dword ptr [mem_00AB9F38]
        je loc_8635FB
        add esi, 0xd
        inc ebx
        cmp eax, ebx
        jg loc_8635DC
        jmp loc_863605
    loc_8635FB:
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    loc_863601:
        mov edi, dword ptr [esp + 0x10]
    loc_863605:
        push 0xd
        lea ecx, [eax + 2*eax]
        push edi
        lea ecx, [eax + 4*ecx]
        add ecx, 0xab9f40
        push ecx
        call ext_0085D530
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9F38]
        cmp eax, 0x63
        jge loc_86362D
        inc eax
        mov dword ptr [mem_00AB9F38], eax
    loc_86362D:
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        ret
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0086F1A0] sub_0086F1A0 (160 bytes)
extern "C" void ext_0086F000();
extern "C" void ext_0086F120();

extern "C" __declspec(naked) void __fastcall fn_0086F1A0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        sub esp, 0x50
        push ebx
        push esi
        push edi
        push ebp
        mov di, 0x13
        push eax
        call ext_0086F000
        mov esi, dword ptr [esp + 0x6c]
        add esp, 0x4
    loop_top:
        mov eax, dword ptr [esp + 0x64]
        movsx ecx, di
        mov ebx, dword ptr [eax + 4*ecx]
        lea ecx, [esp + 0x10]
        push ecx
        call ext_0086F000
        mov cx, 0x13
        add esp, 0x4
    inner:
        lea eax, [edi + ecx]
        sub ax, 0x13
        movsx ebp, ax
        movsx eax, cx
        dec cx
        lea edx, [4*ebp]
        mov eax, dword ptr [esi + 4*eax]
        imul eax, ebx
        add eax, dword ptr [esp + edx + 0x10]
        mov ebp, eax
        shr eax, 0x10
        and ebp, 0xffff
        mov dword ptr [esp + edx + 0x10], ebp
        mov dword ptr [esp + edx + 0xc], eax
        movsx edx, cx
        cmp edx, 0x9
        ja inner
        mov eax, dword ptr [esp + 0x6c]
        lea ecx, [esp + 0x10]
        dec di
        push eax
        push eax
        push ecx
        call ext_0086F120
        movsx ecx, di
        add esp, 0xc
        cmp ecx, 0x9
        ja loop_top
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x50
        ret
        _emit 0x8b
        _emit 0xff
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x00860950] sub_00860950 (164 bytes)
extern "C" void ext_0085D510();
extern "C" int mem_00AB98E0;
extern "C" int mem_00AB98B0;
extern "C" int mem_00BC66B5;
extern "C" int mem_00BC6389;
extern "C" int mem_00BC66B3;
extern "C" int mem_00BC66AD;
extern "C" int mem_00BC6672;
extern "C" int mem_00BC6670;
extern "C" int mem_00BC6674;
extern "C" int mem_00BC6671;
extern "C" int mem_00BC6678;
extern "C" int mem_00BC66F8;
extern "C" int mem_00BC6676;
extern "C" __declspec(naked) void __cdecl fn_00860950(void) {
    __asm {
        push 0xa5
        push 0
        push offset mem_00BC6670
        call ext_0085D510
        add esp, 0xc
        push 0x3e
        push 0
        push offset mem_00BC6389 - 1
        call ext_0085D510
        add esp, 0xc
        mov ecx, dword ptr [mem_00AB98E0]
        mov eax, dword ptr [mem_00AB98B0]
        mov dword ptr [mem_00BC66B5], ecx
        mov byte ptr [mem_00BC6389], 0x8
        add eax, 0x11
        mov word ptr [mem_00BC66B3], 0x206c
        mov word ptr [mem_00BC66AD], 0x2332
        mov dx, word ptr [esp + 0x8]
        and eax, 0xff
        mov word ptr [mem_00BC6672], dx
        xor cl, al
        mov dword ptr [mem_00AB98B0], eax
        mov byte ptr [mem_00BC6670], cl
        mov cx, word ptr [esp + 0xc]
        mov al, byte ptr [esp + 0x4]
        mov word ptr [mem_00BC6674], cx
        mov dl, byte ptr [esp + 0x14]
        mov byte ptr [mem_00BC6671], al
        mov byte ptr [mem_00BC6678], dl
        mov word ptr [mem_00BC66F8], 0x1bbc
        mov ax, word ptr [esp + 0x10]
        mov word ptr [mem_00BC6676], ax
        ret
    }
}

// [0x008602A0] sub_008602A0 (144 bytes)
extern "C" void ext_00860330();
extern "C" int mem_00AB9910;
extern "C" int mem_00AB990C;
extern "C" int mem_00AB9B24;
extern "C" int mem_00AB9B20;
extern "C" int mem_00AB9F34;
extern "C" int mem_00AB9F30;

extern "C" __declspec(naked) void __cdecl fn_008602A0(void) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x8
        xor ecx, ecx
        mov cl, byte ptr [eax]
        cmp ecx, 0x1
        je case_one
        cmp ecx, 0x4
        je case_four
        cmp ecx, 0x8
        je case_four
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        lea ecx, [esp + 0x4]
        push eax
        mov edx, dword ptr [mem_00AB9910]
        push ecx
        mov eax, dword ptr [mem_00AB990C]
        push edx
        jmp do_call
    case_one:
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        lea ecx, [esp + 0x4]
        push eax
        mov edx, dword ptr [mem_00AB9B24]
        push ecx
        mov eax, dword ptr [mem_00AB9B20]
        push edx
        jmp do_call
    case_four:
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        lea ecx, [esp + 0x4]
        push eax
        mov edx, dword ptr [mem_00AB9F34]
        push ecx
        mov eax, dword ptr [mem_00AB9F30]
        push edx
    do_call:
        push eax
        call ext_00860330
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x14]
        add esp, 0x10
        mov dword ptr [ecx], edx
        add esp, 0x8
        ret
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// [0x00867640] sub_00867640 (176 bytes)
extern "C" void ext_0085D560();
extern "C" int mem_00924248;
extern "C" int mem_00BC63C8;
extern "C" int mem_00BC70BC;
extern "C" int mem_00BC70F4;
extern "C" int mem_00924210;
extern "C" __declspec(naked) void __fastcall fn_00867640(void* self) {
    __asm {
        sub esp, 0x10c
        push ebx
        push esi
        push edi
        push ebp
        push 0x7d0
        call ext_0085D560
        add esp, 4
        mov esi, eax
        test esi, esi
        jne L1
        push 5
        call dword ptr [mem_00924248]
        push 0x7d0
        call ext_0085D560
        add esp, 4
        mov esi, eax
        test esi, esi
        je Lend
    L1:
        mov edi, 0x64
        xor ebx, ebx
        mov ebp, 1
    Ltop:
        dec edi
        mov eax, dword ptr [mem_00BC63C8]
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x10], ebx
        lea eax, [esp + 0x10]
        inc dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x14], ebp
        push eax
        push ebx
        mov eax, dword ptr [mem_00BC63C8]
        push ebx
        inc eax
        push ecx
        push eax
        call dword ptr [mem_00BC70BC]
        test eax, eax
        je Lfree
        push 0xbc64e0
        mov eax, dword ptr [mem_00BC63C8]
        push 0xbc6568
        push ebx
        push 0x5fa
        push esi
        push eax
        call dword ptr [mem_00BC70F4]
        test edi, edi
        jne Ltop
    Lfree:
        push esi
        call dword ptr [mem_00924210]
    Lend:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x10c
        ret
        mov edi, edi
    }
}

// [0x0086CEE0] sub_0086CEE0 (176 bytes)
extern "C" void ext_0085B330();
extern "C" __declspec(naked) void __cdecl fn_0086CEE0(void) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        sub esp, 0x8
        mov ecx, eax
        shr eax, 0x18
        and ecx, 0xfffffff
        and al, 0xe0
        push esi
        cmp ecx, 0x1f
        push edi
        jae l1
        or al, cl
        mov edi, 1
        mov byte ptr [esp + 8], al
        jmp l9
    l1:
        or al, 0x1f
        cmp ecx, 0xfffffff
        mov byte ptr [esp + 8], al
        jbe l2
        mov edx, 5
        jmp l8
    l2:
        cmp ecx, 0x1fffff
        jbe l3
        mov edx, 4
        jmp l8
    l3:
        cmp ecx, 0x3fff
        jbe l4
        mov edx, 3
        jmp l8
    l4:
        mov eax, 0x7f
        cmp eax, ecx
        sbb edx, edx
        neg edx
        inc edx
    l8:
        test edx, edx
        lea edi, [edx + 1]
        mov esi, edx
        jbe l9
    l5:
        test ecx, ecx
        je l9
        mov al, cl
        and al, 0x7f
        cmp esi, edx
        mov byte ptr [esp + esi + 8], al
        jae l6
        or al, 0x80
        mov byte ptr [esp + esi + 8], al
    l6:
        shr ecx, 7
        dec esi
        jne l5
    l9:
        mov ecx, dword ptr [esp + 0x14]
        lea edx, [esp + 8]
        push ecx
        push edi
        push 1
        push edx
        call ext_0085B330
        add esp, 0x10
        pop edi
        pop esi
        add esp, 8
        ret
    }
}

// [0x008693B0] sub_008693B0 (176 bytes)
extern "C" __declspec(naked) void __cdecl fn_008693B0(void* self, const unsigned char* src, unsigned int count) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esi + 0x10]
        mov eax, ecx
        lea edx, [8*edi]
        shr eax, 0x3
        lea ecx, [ecx + 8*edi]
        and eax, 0x3f
        cmp ecx, edx
        mov dword ptr [esi + 0x10], ecx
        jae skip_carry
        inc dword ptr [esi + 0x14]
    skip_carry:
        mov ebx, dword ptr [esi + 0x14]
        mov ecx, edi
        shr ecx, 0x1d
        add ebx, ecx
        mov dword ptr [esi + 0x14], ebx
        mov ebx, 0x40
        sub ebx, eax
        cmp edi, ebx
        jb partial
        mov edx, dword ptr [esp + 0x18]
        push ebx
        lea eax, [eax + esi + 0x18]
        push edx
        push eax
        call ext_00869310
        lea ecx, [esi + 0x18]
        push ecx
        push esi
        call ext_00869530
        mov ebp, ebx
        add ebx, 0x3f
        add esp, 0x14
        cmp ebx, edi
        jae blocks_done
    block_loop:
        mov edx, dword ptr [esp + 0x18]
        lea eax, [edx + ebx - 0x3f]
        push eax
        push esi
        call ext_00869530
        add ebx, 0x40
        add esp, 0x8
        add ebp, 0x40
        cmp ebx, edi
        jb block_loop
    blocks_done:
        xor eax, eax
        jmp tail
    partial:
        xor ebp, ebp
    tail:
        mov ecx, dword ptr [esp + 0x18]
        sub edi, ebp
        add ebp, ecx
        push edi
        lea edx, [eax + esi + 0x18]
        push ebp
        push edx
        call ext_00869310
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00868510] sub_00868510 (174 bytes)
extern "C" __declspec(naked) void __cdecl fn_00868510(void) {
    __asm {
        sub esp, 0x10c
        push ebx
        push esi
        push edi
        push ebp
        push 0x7d0
        call ext_0085D560
        add esp, 0x4
        mov edi, eax
        test edi, edi
        jne L_48
        push 0x5
        call dword ptr [mem_00924248]
        push 0x7d0
        call ext_0085D560
        add esp, 0x4
        mov edi, eax
        test edi, edi
        je L_b3
    L_48:
        mov esi, 0x64
        xor ebx, ebx
        mov ebp, 0x1
    L_54:
        dec esi
        mov eax, dword ptr [mem_00BC70E0]
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x10], ebx
        lea eax, [esp + 0x10]
        inc dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x14], ebp
        push eax
        push ebx
        mov eax, dword ptr [mem_00BC70E0]
        push ebx
        inc eax
        push ecx
        push eax
        call dword ptr [mem_00BC70BC]
        test eax, eax
        je L_ac
        push offset mem_00BC6410
        mov eax, dword ptr [mem_00BC70E0]
        push offset mem_00BC6578
        push ebx
        push 0x5fa
        push edi
        push eax
        call dword ptr [mem_00BC70F4]
        test esi, esi
        jne L_54
    L_ac:
        push edi
        call dword ptr [mem_00924210]
    L_b3:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x10c
        ret
    }
}

// [0x0086C210] sub_0086C210 (189 bytes)
extern "C" void ext_0086B200();
extern "C" void ext_0086F050();

extern "C" __declspec(naked) void __cdecl fn_0086C210(void) {
    __asm {
        sub esp, 0x28
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x38]
        push edi
        cmp esi, 0x14
        jle clamp_done
        mov esi, 0x14
    clamp_done:
        xor eax, eax
        xor ecx, ecx
    zero_loop:
        movsx edx, ax
        inc ax
        mov dword ptr [esp + 4*edx + 0x20], ecx
        cmp ax, 0x5
        jl zero_loop
        xor dx, dx
        test esi, esi
        jle pack_done
        mov ecx, dword ptr [esp + 0x38]
    pack_loop:
        movsx edi, dx
        inc dx
        mov eax, edi
        shr eax, 0x2
        movsx eax, ax
        lea ebx, [esp + 4*eax + 0x20]
        xor eax, eax
        mov al, byte ptr [edi + ecx]
        mov edi, dword ptr [ebx]
        shl eax, 0x18
        shr edi, 0x8
        or eax, edi
        mov dword ptr [ebx], eax
        movsx ebx, dx
        cmp ebx, esi
        jl pack_loop
    pack_done:
        lea eax, [esp + 0xc]
        xor esi, esi
        push eax
        call ext_0086B200
        xor dx, dx
        add esp, 0x4
    copy_loop:
        movsx edi, si
        inc dx
        lea eax, [esp + 0x30]
        _emit 0x8d
        _emit 0x0c
        _emit 0xbd
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        shl edi, 0x2
        sub eax, ecx
        lea ecx, [esp + 0x1c]
        mov ebx, dword ptr [eax]
        sub ecx, edi
        cmp dx, 0x4
        mov dword ptr [ecx], ebx
        jg copy_done
        inc si
        movsx eax, si
        cmp eax, 0x5
        jb copy_loop
    copy_done:
        mov eax, dword ptr [esp + 0x40]
        lea ecx, [esp + 0xc]
        and dword ptr [esp + 0xc], 0x3fffffff
        push eax
        push ecx
        call ext_0086F050
        add esp, 0x8
        pop edi
        pop esi
        pop ebx
        add esp, 0x28
        ret
    }
}

// [0x00869460] sub_00869460 (208 bytes)
extern "C" void __cdecl ext_008692F0();
extern "C" void __cdecl ext_008693B0();
extern "C" unsigned char mem_00AC3900[];

extern "C" __declspec(naked) void __cdecl fn_00869460(unsigned char* digest, void* context) {
    __asm {
        sub esp, 0x8
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        xor esi, esi
        lea ebp, [edi + 0x10]
        mov ecx, ebp
    loop1:
        mov al, byte ptr [ecx]
        add ecx, 0x4
        mov byte ptr [esp + esi + 0xc], al
        mov eax, dword ptr [ecx - 0x4]
        mov edx, eax
        add esi, 0x4
        shr edx, 0x8
        mov byte ptr [esp + esi + 0x9], dl
        mov edx, eax
        shr edx, 0x10
        shr eax, 0x18
        mov byte ptr [esp + esi + 0xa], dl
        mov byte ptr [esp + esi + 0xb], al
        cmp esi, 0x8
        jb loop1
        mov ecx, dword ptr [ebp]
        mov eax, 0x38
        shr ecx, 0x3
        and ecx, 0x3f
        cmp ecx, 0x38
        jb skip_pad
        mov eax, 0x78
    skip_pad:
        sub eax, ecx
        push eax
        push offset mem_00AC3900
        push edi
        call ext_008693B0
        lea eax, [esp + 0x18]
        push 0x8
        push eax
        push edi
        call ext_008693B0
        mov edx, dword ptr [esp + 0x30]
        or esi, -0x1
        add esp, 0x18
        mov ecx, edi
        lea eax, [edx + 0x1]
        sub esi, edx
    loop2:
        mov dl, byte ptr [ecx]
        add ecx, 0x4
        mov byte ptr [eax - 0x1], dl
        mov edx, dword ptr [ecx - 0x4]
        shr edx, 0x8
        mov byte ptr [eax], dl
        mov edx, dword ptr [ecx - 0x4]
        shr edx, 0x10
        mov byte ptr [eax + 0x1], dl
        mov edx, dword ptr [ecx - 0x4]
        shr edx, 0x18
        mov byte ptr [eax + 0x2], dl
        add eax, 0x4
        lea edx, [esi + eax]
        cmp edx, 0x10
        jb loop2
        push 0x58
        push 0x0
        push edi
        call ext_008692F0
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        add esp, 0x8
        ret
    }
}

// [0x00860870] sub_00860870 (224 bytes)
extern "C" int mem_00AB987C;
extern "C" int mem_00AB9880;
extern "C" int mem_00BC70E4;
extern "C" int mem_00BC5C20;
extern "C" int mem_00BC63E2;
extern "C" int mem_00BC63E0;
extern "C" int mem_00BC63E4;
extern "C" int mem_00BC6724;
extern "C" int mem_00BC70EC;
extern "C" int mem_00BC6728;
extern "C" int mem_00AB9884;
extern "C" int mem_00BC70C0;
extern "C" __declspec(naked) void __cdecl fn_00860870(void) {
    __asm {
        sub esp, 0x18
        cmp dword ptr [mem_00AB987C], 0
        mov dword ptr [esp + 0x4], 1
        je short init_path
        mov eax, 1
        add esp, 0x18
        ret
    init_path:
        mov dword ptr [mem_00AB9880], 0
        push 0
        push 2
        push 2
        call dword ptr [mem_00BC70E4]
        mov dword ptr [mem_00BC5C20], eax
        cmp eax, -1
        jne short sock_ok
        xor eax, eax
        add esp, 0x18
        ret
    sock_ok:
        xor ecx, ecx
        push 0x10
        mov word ptr [mem_00BC63E2], cx
        push offset mem_00BC63E0
        push eax
        mov dword ptr [mem_00BC5C20], eax
        mov word ptr [mem_00BC63E0], 2
        mov dword ptr [mem_00BC63E4], ecx
        call dword ptr [mem_00BC6724]
        cmp eax, -1
        jne short bind_ok
        xor eax, eax
        add esp, 0x18
        ret
    bind_ok:
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x00
        lea ecx, [esp + 0x8]
        push eax
        mov edx, dword ptr [mem_00BC5C20]
        mov dword ptr [esp + 0x4], 0x10
        push ecx
        push edx
        call dword ptr [mem_00BC70EC]
        mov ecx, dword ptr [esp + 0xa]
        push ecx
        call dword ptr [mem_00BC6728]
        mov word ptr [mem_00AB9884], ax
        push 4
        lea ecx, [esp + 0x8]
        mov edx, dword ptr [mem_00BC5C20]
        push ecx
        push 0x20
        push 0xffff
        push edx
        call dword ptr [mem_00BC70C0]
        mov eax, 1
        add esp, 0x18
        mov dword ptr [mem_00AB9880], eax
        mov dword ptr [mem_00AB987C], eax
        ret
        _emit 0x8b
        _emit 0xff
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x00861DF0] sub_00861DF0 (209 bytes)
// Dispatch table: index = arg + 13 -> case index (0x26 = default).
extern "C" const unsigned char fn_00861DF0_bmap[173] = {
    0x00, 0x01, 0x26, 0x26, 0x02, 0x03, 0x04, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x05, 0x06, 0x06,
    0x06, 0x07, 0x08, 0x08, 0x09, 0x0a, 0x26, 0x0b, 0x0c, 0x26, 0x26, 0x26, 0x0d, 0x26, 0x26, 0x0e,
    0x0f, 0x0f, 0x26, 0x26, 0x10, 0x11, 0x12, 0x12, 0x26, 0x13, 0x26, 0x14, 0x26, 0x26, 0x15, 0x26,
    0x26, 0x26, 0x26, 0x26, 0x26, 0x16, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26,
    0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26,
    0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26,
    0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26,
    0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26,
    0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x17, 0x18,
    0x19, 0x1a, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1c, 0x1d, 0x26, 0x26, 0x26, 0x26,
    0x26, 0x1e, 0x26, 0x1f, 0x26, 0x20, 0x20, 0x26, 0x21, 0x22, 0x23, 0x24, 0x25
};

// Case entry addresses (absolute, function is at fixed VA).
extern "C" const unsigned int fn_00861DF0_jt[39] = {
    0x00861E13, 0x00861E18, 0x00861E1D, 0x00861E22, 0x00861E27, 0x00861E2C, 0x00861E30, 0x00861E35,
    0x00861E3A, 0x00861E3F, 0x00861E44, 0x00861E49, 0x00861E4E, 0x00861E53, 0x00861E58, 0x00861E5D,
    0x00861E62, 0x00861E67, 0x00861E6C, 0x00861E6C, 0x00861E6C, 0x00861E6C, 0x00861E71, 0x00861E76,
    0x00861E7B, 0x00861E80, 0x00861E85, 0x00861E8A, 0x00861E8F, 0x00861E94, 0x00861E99, 0x00861E9E,
    0x00861EA3, 0x00861EA8, 0x00861EAD, 0x00861EB2, 0x00861EB7, 0x00861EBC, 0x00861E12
};

extern "C" __declspec(naked) void __cdecl fn_00861DF0(void) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea ecx, [eax + 0xd]
        cmp ecx, 0xac
        _emit 0x0f
        _emit 0x87
        _emit 0xbd
        _emit 0x00
        _emit 0x00
        _emit 0x00
        xor edx, edx
        mov dl, byte ptr [ecx + fn_00861DF0_bmap]
        jmp dword ptr [edx*4 + fn_00861DF0_jt]
        ret
    L23: mov ax, 0xb
        ret
    L28: mov ax, 0xa
        ret
    L2D: mov ax, 0x2e
        ret
    L32: mov ax, 0x7
        ret
    L37: mov ax, 0x18
        ret
    L3C: xor ax, ax
        ret
    L40: mov ax, 0x8
        ret
    L45: mov ax, 0x7
        ret
    L4A: mov ax, 0x40
        ret
    L4F: mov ax, 0x8
        ret
    L54: mov ax, 0x7
        ret
    L59: mov ax, 0x1
        ret
    L5E: mov ax, 0x8
        ret
    L63: mov ax, 0x7
        ret
    L68: mov ax, 0x41
        ret
    L6D: mov ax, 0x3f
        ret
    L72: mov ax, 0x2b
        ret
    L77: mov ax, 0x42
        ret
    L7C: mov ax, 0x8
        ret
    L81: mov ax, 0x3c
        ret
    L86: mov ax, 0x7
        ret
    L8B: mov ax, 0x1b
        ret
    L90: mov ax, 0x43
        ret
    L95: mov ax, 0x2d
        ret
    L9A: mov ax, 0x7
        ret
    L9F: mov ax, 0x4
        ret
    LA4: mov ax, 0x41
        ret
    LA9: mov ax, 0x7
        ret
    LAE: mov ax, 0x41
        ret
    LB3: mov ax, 0x42
        ret
    LB8: mov ax, 0xb
        ret
    LBD: mov ax, 0x7
        ret
    LC2: mov ax, 0x18
        ret
    LC7: mov ax, 0x44
        ret
    LCC: mov ax, 0x45
        ret
    }
}

// [0x00867FC0] sub_00867FC0 (240 bytes)
extern "C" void ext_00868180();
extern "C" void ext_0085D510();
extern "C" int mem_00BC70E4;
extern "C" int mem_00BC63D0;
extern "C" int mem_00BC63DC;
extern "C" int mem_00BC6724;
extern "C" int mem_00BC7100;
extern "C" int mem_00BC70EC;
extern "C" int mem_00BC70C0;
extern "C" int mem_00BC672C;
extern "C" int mem_00BC63F0;

extern "C" __declspec(naked) void __cdecl fn_00867FC0(void) {
    __asm {
        sub esp, 0x4
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x00
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push esi
        _emit 0xe8
        _emit 0xaf
        _emit 0x01
        _emit 0x00
        _emit 0x00
        test eax, eax
        jne L_open
        mov eax, 0x1
        pop esi
        add esp, 0x4
        ret
    L_open:
        push 0x3e8
        push 0x2
        push 0x6
        _emit 0xff
        _emit 0x15
        _emit 0xe4
        _emit 0x70
        _emit 0xbc
        _emit 0x00
        cmp eax, -1
        mov esi, eax
        jne L_sock
        mov eax, 0x1
        pop esi
        add esp, 0x4
        ret
    L_sock:
        push 0xe
        push 0x0
        push 0xbc63d0
        _emit 0xe8
        _emit 0x03
        _emit 0x55
        _emit 0xff
        _emit 0xff
        _emit 0x66
        _emit 0xc7
        _emit 0x05
        _emit 0xd0
        _emit 0x63
        _emit 0xbc
        _emit 0x00
        _emit 0x06
        _emit 0x00
        add esp, 0xc
        _emit 0x66
        _emit 0xc7
        _emit 0x05
        _emit 0xdc
        _emit 0x63
        _emit 0xbc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push 0x10
        push 0xbc63d0
        push esi
        _emit 0xff
        _emit 0x15
        _emit 0x24
        _emit 0x67
        _emit 0xbc
        _emit 0x00
        cmp eax, -1
        jne L_bind_ok
        push esi
        _emit 0xff
        _emit 0x15
        _emit 0x00
        _emit 0x71
        _emit 0xbc
        _emit 0x00
        mov eax, 0x1
        pop esi
        add esp, 0x4
        ret
    L_bind_ok:
        lea eax, [esp + 0x4]
        push eax
        push 0xbc63f0
        push esi
        _emit 0xff
        _emit 0x15
        _emit 0xec
        _emit 0x70
        _emit 0xbc
        _emit 0x00
        cmp eax, -1
        jne L_listen_ok
        push esi
        _emit 0xff
        _emit 0x15
        _emit 0x00
        _emit 0x71
        _emit 0xbc
        _emit 0x00
        mov eax, 0x1
        pop esi
        add esp, 0x4
        ret
    L_listen_ok:
        push 0x4
        push 0xab960c
        push 0x4000
        push 0x3e8
        push esi
        _emit 0xff
        _emit 0x15
        _emit 0xc0
        _emit 0x70
        _emit 0xbc
        _emit 0x00
        mov eax, dword ptr [esp + 0xc]
        push 0xab9608
        push 0x8004667e
        push esi
        mov dword ptr [eax], esi
        _emit 0xff
        _emit 0x15
        _emit 0x2c
        _emit 0x67
        _emit 0xbc
        _emit 0x00
        xor eax, eax
        pop esi
        add esp, 0x4
        ret
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0086E670] sub_0086E670 (240 bytes)
extern "C" void ext_00857440();
extern "C" void ext_008692F0();
extern "C" void ext_00869E50();
extern "C" void ext_00869EC0();
extern "C" void ext_0086A8A0();
extern "C" void ext_0086AF50();

extern "C" __declspec(naked) int __cdecl fn_0086E670(void) {
    __asm {
        sub esp, 0x410
        lea edx, [esp + 0x104]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x430]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        push eax
        push ecx
        push 0x41
        push edx
        call ext_00869E50
        lea eax, [esp + 0x124]
        push 0x41
        push eax
        call ext_0086AF50
        mov ecx, dword ptr [edi + 0xc]
        mov edx, dword ptr [edi + 0x8]
        mov esi, eax
        push ecx
        push edx
        lea eax, [esp + 0x238]
        push esi
        push eax
        call ext_00869E50
        mov ecx, dword ptr [esp + 0x45c]
        mov ebx, dword ptr [esp + 0x454]
        mov ebp, dword ptr [esp + 0x450]
        push ecx
        push ebx
        push ebp
        call ext_00857440
        add esp, 0x34
        test eax, eax
        jne fail
        push ebx
        push ebp
        lea edx, [esp + 0x18]
        push esi
        push edx
        call ext_00869E50
        lea eax, [esp + 0x20]
        push esi
        push eax
        call ext_0086AF50
        lea ecx, [esp + 0x12c]
        push esi
        push ecx
        push eax
        lea edx, [esp + 0x34]
        lea eax, [esp + 0x23c]
        push edx
        lea ecx, [esp + 0x344]
        push eax
        push ecx
        call ext_0086A8A0
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [esp + 0x454]
        lea edx, [esp + 0x34c]
        push esi
        push edx
        push eax
        push ecx
        call ext_00869EC0
        add esp, 0x40
        lea edx, [esp + 0x10]
        push 0x104
        push 0
        push edx
        call ext_008692F0
        add esp, 0xc
        xor eax, eax
    fail:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x410
        ret
    }
}

// [0x00860700] sub_00860700 (244 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_00860800();
extern "C" int mem_00AB9894;
extern "C" int mem_00BC70E4;
extern "C" int mem_00BC6720;
extern "C" int mem_00BC6648;
extern "C" int mem_00BC6724;
extern "C" int mem_00BC7100;
extern "C" int mem_00BC70EC;
extern "C" int mem_00BC6594;
extern "C" int mem_00BC6728;
extern "C" int mem_00BC70DC;
extern "C" int mem_00AB98A4;
extern "C" int mem_00BC6588;

extern "C" __declspec(naked) void __fastcall fn_00860700(void* self) {
    __asm {
        sub esp, 0x4
        cmp dword ptr [mem_00AB9894], 0x0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x00
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        je t_init
        mov eax, 0x1
        add esp, 0x4
        ret
    t_init:
        push 0x3e8
        push 0x2
        push 0x6
        call dword ptr [mem_00BC70E4]
        mov dword ptr [mem_00BC6720], eax
        cmp eax, -0x1
        jne t_sock_ok
        xor eax, eax
        add esp, 0x4
        ret
    t_sock_ok:
        push 0xe
        push 0x0
        push offset mem_00BC6648
        call ext_0085D510
        add esp, 0xc
        mov eax, dword ptr [mem_00BC6720]
        mov word ptr [mem_00BC6648], 0x6
        push 0x10
        push offset mem_00BC6648
        push eax
        call dword ptr [mem_00BC6724]
        cmp eax, -0x1
        jne t_bind_ok
        mov eax, dword ptr [mem_00BC6720]
        push eax
        call dword ptr [mem_00BC7100]
        xor eax, eax
        add esp, 0x4
        ret
    t_bind_ok:
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x00
        mov ecx, dword ptr [mem_00BC6720]
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x00
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push eax
        push offset mem_00BC6588
        push ecx
        call dword ptr [mem_00BC70EC]
        cmp eax, -0x1
        jne t_name_ok
        mov eax, dword ptr [mem_00BC6720]
        push eax
        call dword ptr [mem_00BC7100]
        xor eax, eax
        add esp, 0x4
        ret
    t_name_ok:
        mov ax, word ptr [mem_00BC6594]
        push eax
        call dword ptr [mem_00BC6728]
        mov word ptr [mem_00BC70DC], ax
        mov eax, dword ptr [mem_00BC6720]
        push eax
        call ext_00860800
        add esp, 0x4
        test eax, eax
        je t_success
        xor eax, eax
        add esp, 0x4
        ret
    t_success:
        mov eax, 0x1
        add esp, 0x4
        mov dword ptr [mem_00AB98A4], eax
        mov dword ptr [mem_00AB9894], eax
        ret
    }
}

// [0x008688E0] sub_008688E0 (272 bytes)
extern "C" __declspec(naked) void __cdecl fn_008688E0(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        cmp ecx, 0x1
        jle zero_ret
        mov eax, dword ptr [esp + 0x4]
        push ebx
        add eax, 0x16
        push esi
        dec ecx
    loop_top:
        xor ebx, ebx
        xor edx, edx
        mov bl, byte ptr [eax - 0x4]
        mov dl, byte ptr [eax - 0x3]
        add eax, 0x10
        mov esi, dword ptr [4*ebx + 0xac3080]
        mov edx, dword ptr [4*edx + 0xac3480]
        xor ebx, ebx
        xor edx, esi
        mov bl, byte ptr [eax - 0x15]
        mov esi, dword ptr [4*ebx + 0xac2c80]
        xor ebx, ebx
        mov bl, byte ptr [eax - 0x16]
        xor edx, esi
        mov esi, dword ptr [4*ebx + 0xac2880]
        xor ebx, ebx
        xor edx, esi
        mov dword ptr [eax - 0x16], edx
        mov bl, byte ptr [eax - 0x11]
        xor edx, edx
        mov dl, byte ptr [eax - 0xf]
        mov esi, dword ptr [4*ebx + 0xac2c80]
        xor ebx, ebx
        mov edx, dword ptr [4*edx + 0xac3480]
        mov bl, byte ptr [eax - 0x10]
        xor edx, esi
        mov esi, dword ptr [4*ebx + 0xac3080]
        xor ebx, ebx
        mov bl, byte ptr [eax - 0x12]
        xor edx, esi
        mov esi, dword ptr [4*ebx + 0xac2880]
        xor ebx, ebx
        xor edx, esi
        mov dword ptr [eax - 0x12], edx
        mov bl, byte ptr [eax - 0xc]
        xor edx, edx
        mov dl, byte ptr [eax - 0xb]
        mov esi, dword ptr [4*ebx + 0xac3080]
        xor ebx, ebx
        mov edx, dword ptr [4*edx + 0xac3480]
        mov bl, byte ptr [eax - 0xd]
        xor edx, esi
        mov esi, dword ptr [4*ebx + 0xac2c80]
        xor ebx, ebx
        mov bl, byte ptr [eax - 0xe]
        xor edx, esi
        mov esi, dword ptr [4*ebx + 0xac2880]
        xor ebx, ebx
        xor edx, esi
        mov dword ptr [eax - 0xe], edx
        mov bl, byte ptr [eax - 0x8]
        xor edx, edx
        mov dl, byte ptr [eax - 0x7]
        mov esi, dword ptr [4*ebx + 0xac3080]
        xor ebx, ebx
        mov edx, dword ptr [4*edx + 0xac3480]
        mov bl, byte ptr [eax - 0x9]
        xor edx, esi
        mov esi, dword ptr [4*ebx + 0xac2c80]
        xor ebx, ebx
        mov bl, byte ptr [eax - 0xa]
        xor edx, esi
        mov esi, dword ptr [4*ebx + 0xac2880]
        xor edx, esi
        dec ecx
        mov dword ptr [eax - 0xa], edx
        jne loop_top
        pop esi
        xor eax, eax
        pop ebx
        ret
    zero_ret:
        xor eax, eax
        ret
    }
}

// [0x00865370] sub_00865370 (256 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_0085F740();
extern "C" void ext_00860670();
extern "C" void ext_00860950();
extern "C" void ext_008656E0();
extern "C" void ext_008659D0();
extern "C" int mem_00BC6388;
extern "C" int mem_00BC6389;

extern "C" __declspec(naked) void __cdecl fn_00865370(void) {
    __asm {
        mov dword ptr [mem_00AB98EC], 0
        push ebx
        push esi
        call ext_00860670
        test eax, eax
        jne L_8d
        mov eax, 0xfffffef2
        pop esi
        pop ebx
        ret
    L_8d:
        mov bl, byte ptr [esp + 0xc]
        cmp bl, 0x58
        je L_d2
        cmp bl, 0x59
        je L_d2
        push 0x3e
        push 0
        push offset mem_00BC6388
        call ext_0085D510
        add esp, 0xc
        mov byte ptr [mem_00BC6389], 0xa
        push offset mem_00BC6388
        call ext_0085F740
        add esp, 4
        mov eax, 0xa
        mov dword ptr [mem_00AB98EC], 0x8d
        pop esi
        pop ebx
        ret
    L_d2:
        cmp dword ptr [esp + 0x28], 0
        je L_eb
        mov eax, 0xa
        pop esi
        mov dword ptr [mem_00AB98EC], 0x18
        pop ebx
        ret
    L_eb:
        mov esi, dword ptr [esp + 0x24]
        cmp esi, 8
        jae L_406
        mov eax, 0x18
        pop esi
        mov dword ptr [mem_00AB98EC], 0x9d
        pop ebx
        ret
    L_406:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push ecx
        push edx
        push eax
        push ebx
        call ext_00860950
        add esp, 0x14
        xor eax, eax
        mov al, bl
        cmp eax, 0x58
        je L_433
        cmp eax, 0x59
        je L_440
        jmp L_44e
    L_433:
        mov eax, dword ptr [esp + 0x20]
        push esi
        push eax
        call ext_008656E0
        jmp L_44b
    L_440:
        mov eax, dword ptr [esp + 0x20]
        push esi
        push eax
        call ext_008659D0
    L_44b:
        add esp, 8
    L_44e:
        mov eax, 0
        pop esi
        cmp dword ptr [mem_00AB98EC], 1
        adc eax, -1
        pop ebx
        and eax, 0x19
        ret
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0086AD30] sub_0086AD30 (273 bytes)
extern "C" void ext_0086A2B0();
extern "C" __declspec(naked) void __cdecl fn_0086AD30(void) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        sub esp, 0x514
        push esi
        mov esi, dword ptr [esp + 0x528]
        test esi, esi
        push edi
        mov ecx, esi
        je f86ad30_l1
        lea edx, [esp + 0x8]
        sub edx, eax
    f86ad30_c1:
        mov edi, dword ptr [eax]
        mov dword ptr [edx + eax], edi
        add eax, 0x4
        dec ecx
        jne f86ad30_c1
    f86ad30_l1:
        mov eax, dword ptr [esp + 0x524]
        mov ecx, esi
        test esi, esi
        je f86ad30_l2
        lea edx, [esp + 0x10c]
        sub edx, eax
    f86ad30_c2:
        mov edi, dword ptr [eax]
        mov dword ptr [edx + eax], edi
        add eax, 0x4
        dec ecx
        jne f86ad30_c2
    f86ad30_l2:
        push ebx
        push ebp
        mov ebx, 0x1
    f86ad30_top:
        movsx edi, bx
        mov eax, edi
        mov ecx, esi
        shl eax, 0x6
        add eax, edi
        test esi, esi
        lea edx, [esp + eax*4 + 0x10]
        mov eax, edx
        je f86ad30_end
    f86ad30_scan:
        mov ebp, dword ptr [eax]
        add eax, 0x4
        test ebp, ebp
        jne f86ad30_found
    f86ad30_scan2:
        dec ecx
        je f86ad30_end
        mov ebp, dword ptr [eax]
        add eax, 0x4
        test ebp, ebp
        je f86ad30_scan2
    f86ad30_found:
        test bx, bx
        jne f86ad30_nz
        mov ecx, 0x2
    f86ad30_lea:
        lea eax, [edi + 0x1]
    f86ad30_setup_entry:
        push esi
        push edx
        mov edx, ecx
        push esi
        shl edx, 0x6
        add edx, ecx
        lea ecx, [esp + edx*4 + 0x1c]
        mov edx, eax
        shl edx, 0x6
        add edx, eax
        push ecx
        lea ecx, [esp + 0x32c]
        lea eax, [esp + edx*4 + 0x20]
        push eax
        push ecx
        call ext_0086A2B0
        add esp, 0x18
        cmp bx, 0x2
        jne f86ad30_inc
        xor ebx, ebx
        jmp f86ad30_top
    f86ad30_nz:
        cmp bx, 0x2
        lea ecx, [edi - 0x1]
        jne f86ad30_lea
        xor eax, eax
        jmp f86ad30_setup_entry
    f86ad30_inc:
        lea ebx, [edi + 0x1]
        jmp f86ad30_top
    f86ad30_end:
        test bx, bx
        jne f86ad30_bx
        mov eax, 0x2
        jmp f86ad30_idx
    f86ad30_bx:
        movsx eax, bx
        dec eax
    f86ad30_idx:
        mov edx, eax
        pop ebp
        shl edx, 0x6
        add edx, eax
        mov ecx, esi
        test esi, esi
        lea eax, [esp + edx*4 + 0xc]
        pop ebx
        je f86ad30_done
        mov edx, dword ptr [esp + 0x520]
        sub edx, eax
    f86ad30_c3:
        mov esi, dword ptr [eax]
        mov dword ptr [edx + eax], esi
        add eax, 0x4
        dec ecx
        jne f86ad30_c3
    f86ad30_done:
        pop edi
        pop esi
        add esp, 0x514
        ret
    }
}

// [0x008683F0] sub_008683F0 (288 bytes)
extern "C" void ext_00867850();
extern "C" int mem_00AB9624;
extern "C" __declspec(naked) int __cdecl fn_008683F0(void* a1, int a2) {
    __asm {
        sub esp, 0x110
        push ebx
        push esi
        mov dword ptr [esp + 0x8], 0x10
        mov bx, word ptr [esp + 0x120]
        push edi
        mov edi, dword ptr [esp + 0x120]
        push ebp
        mov word ptr [edi + 0x26], 0x8
        xor ebp, ebp
        mov word ptr [edi + 0x2a], bp
    restart:
        xor esi, esi
        mov eax, dword ptr [mem_00BC70E0]
        mov dword ptr [esp + 0x1c], ebp
        push 0x5
        mov dword ptr [esp + 0x24], eax
        push 0x1
        lea eax, [esp + 0x134]
        inc dword ptr [esp + 0x24]
        push eax
        call ext_00867850
        mov eax, dword ptr [mem_00AB9624]
        imul eax, dword ptr [esp + 0x138]
        mov dword ptr [esp + 0x20], ebp
        add esp, 0xc
        lea ecx, [eax + 4*eax]
        lea edx, [ecx + 4*ecx]
        lea ecx, [esp + 0x14]
        push ecx
        push ebp
        lea eax, [edx + 4*edx]
        push ebp
        shl eax, 0x3
        lea edx, [esp + 0x28]
        mov dword ptr [esp + 0x24], eax
        push edx
        mov eax, dword ptr [mem_00BC70E0]
        inc eax
        push eax
        call dword ptr [mem_00BC70BC]
        test eax, eax
        je no_match
        lea eax, [esp + 0x10]
        mov ecx, dword ptr [mem_00BC70E0]
        push eax
        push offset mem_00BC6578
        push ebp
        push 0x5fa
        push edi
        push ecx
        call dword ptr [mem_00BC70F4]
        mov ecx, eax
        and ecx, 0xffff0000
        cmp ecx, 0x1
        sbb edx, edx
        neg edx
        cmp eax, -0x1
        jne not_m1
        xor edx, edx
        jmp after_test
    not_m1:
        test ecx, ecx
        jne after_test
        cmp word ptr [edi], 0x802a
        jne set_esi
        cmp word ptr [edi + 0xda], bx
        jne set_esi
        cmp word ptr [edi + 0x22], 0x16
        ja set_esi
        mov edx, 0x1
        jmp after_test
    set_esi:
        mov esi, 0x1
    after_test:
        test esi, esi
        jne restart
        mov eax, edx
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x110
        ret
    no_match:
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x110
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0086E760] sub_0086E760 (288 bytes)
extern "C" void ext_008692F0();
extern "C" void ext_00869E50();
extern "C" void ext_00869EC0();
extern "C" void ext_0086A8A0();
extern "C" void ext_0086AEB0();
extern "C" void ext_0086AF50();

extern "C" __declspec(naked) void __fastcall fn_0086E760(void* self) {
    __asm {
        sub esp, 0x410
        lea edx, [esp + 0x104]
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x430]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        push eax
        push ecx
        push 0x41
        push edx
        call ext_00869E50
        lea eax, [esp + 0x120]
        push 0x41
        push eax
        call ext_0086AF50
        mov ecx, dword ptr [esp + 0x444]
        mov edx, dword ptr [esp + 0x440]
        mov esi, eax
        push ecx
        push edx
        lea eax, [esp + 0x2c]
        push esi
        push eax
        call ext_00869E50
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [esp + 0x44c]
        push ecx
        push edx
        lea eax, [esp + 0x244]
        push esi
        push eax
        call ext_00869E50
        lea ecx, [esp + 0x44]
        push esi
        push ecx
        call ext_0086AF50
        add esp, 0x40
        mov ebx, eax
        lea edx, [esp + 0x110]
        lea eax, [esp + 0x214]
        push esi
        push edx
        push eax
        call ext_0086AEB0
        add esp, 0xc
        test eax, eax
        jl fail
        pop edi
        pop esi
        mov eax, 0x401
        pop ebx
        add esp, 0x410
        ret
    fail:
        lea ecx, [esp + 0x110]
        push esi
        push ecx
        lea edx, [esp + 0x14]
        push ebx
        lea eax, [esp + 0x220]
        push edx
        lea ecx, [esp + 0x328]
        push eax
        push ecx
        call ext_0086A8A0
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [esp + 0x438]
        lea edx, [esp + 0x330]
        push esi
        push edx
        push eax
        push ecx
        call ext_00869EC0
        push 0x104
        lea edx, [esp + 0x38]
        push 0x0
        push edx
        call ext_008692F0
        push 0x104
        lea eax, [esp + 0x350]
        push 0x0
        push eax
        call ext_008692F0
        add esp, 0x40
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x410
        ret
    }
}

// [0x00865240] sub_00865240 (293 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_00860670();
extern "C" void ext_00860950();
extern "C" int ext_00865470();
extern "C" int mem_00AB98EC;
extern "C" int mem_00BC6389;
extern "C" short mem_00BC667B;
extern "C" short mem_00BC6679;

extern "C" __declspec(naked) void __fastcall fn_00865240(void* self) {
    __asm {
        mov dword ptr [mem_00AB98EC], 0
        push ebx
        push esi
        push edi
        call ext_00860670
        test eax, eax
        jne has_ret
        mov eax, 0xfffffef2
        pop edi
        pop esi
        pop ebx
        ret
    has_ret:
        mov cl, byte ptr [esp + 0x10]
        cmp cl, 0x58
        je chk_len
        cmp cl, 0x59
        je chk_len
        push 0x3e
        push 0x0
        push 0xbc6388
        call ext_0085D510
        add esp, 0xc
        mov eax, 0xa
        mov dword ptr [mem_00AB98EC], 0x8d
        mov byte ptr [mem_00BC6389], 0xa
        pop edi
        pop esi
        pop ebx
        ret
    chk_len:
        mov esi, dword ptr [esp + 0x28]
        test esi, esi
        jne len_nz
        mov eax, 0x18
        pop edi
        mov dword ptr [mem_00AB98EC], 0x9d
        mov byte ptr [mem_00BC6389], 0x18
        pop esi
        pop ebx
        ret
    len_nz:
        cmp esi, 0x30
        jbe len_small
        mov eax, 0xa
        pop edi
        mov dword ptr [mem_00AB98EC], 0x18
        mov byte ptr [mem_00BC6389], 0xa
        pop esi
        pop ebx
        ret
    len_small:
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        mov ebx, dword ptr [esp + 0x18]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push edx
        push ebx
        push eax
        push ecx
        call ext_00860950
        mov edi, dword ptr [esp + 0x38]
        add esp, 0x14
        push esi
        push edi
        push 0xbc667d
        call ext_0085D530
        mov word ptr [mem_00BC667B], si
        add esp, 0xc
        mov word ptr [mem_00BC6679], 0
        call ext_00865470
        cmp eax, 0x18
        mov ebx, eax
        je code_98
        cmp ebx, 0x19
        je code_99
        mov eax, dword ptr [mem_00AB98EC]
    store_ret:
        mov dword ptr [mem_00AB98EC], eax
        test eax, eax
        je fail_log
        mov eax, ebx
        pop edi
        pop esi
        pop ebx
        ret
    code_98:
        mov eax, 0x98
        mov ebx, eax
        jmp store_ret
    code_99:
        mov ebx, 0x99
        mov eax, ebx
        jmp store_ret
    fail_log:
        push esi
        push 0xbc6396
        push edi
        call ext_0085D530
        add esp, 0xc
        mov eax, ebx
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0086D4D0] sub_0086D4D0 (295 bytes)
extern "C" void ext_008692F0();
extern "C" void ext_00869310();
extern "C" void ext_0086DA90();
extern "C" void ext_0086DF60();

extern "C" __declspec(naked) int __cdecl fn_0086D4D0(void* ctx, void* out, const void* in, unsigned int len) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        sub esp, 0x10
        test al, 0x7
        je aligned
        mov eax, 0x406
        add esp, 0x10
        ret
    aligned:
        shr eax, 0x3
        je zero_path
        push ebx
        mov ebx, dword ptr [esp + 0x20]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov edi, dword ptr [esp + 0x28]
        mov ebp, eax
        sub ebx, edi
    loop_top:
        lea eax, [ebx + edi]
        push 0x8
        lea ecx, [esp + 0x1c]
        push eax
        push ecx
        call ext_00869310
        mov eax, dword ptr [esi + 0x1058]
        add esp, 0xc
        test eax, eax
        jne path_b
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x1c]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], edx
        push ecx
        push esi
        mov dword ptr [esp + 0x1c], eax
        call ext_0086DF60
        mov edx, dword ptr [esi + 0x1048]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        xor eax, edx
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esi + 0x104c]
        add esp, 0x8
        xor ecx, eax
        mov dword ptr [esi + 0x104c], edx
        mov dword ptr [esp + 0x14], ecx
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x1048], ecx
        jmp store_out
    path_b:
        mov eax, dword ptr [esi + 0x1048]
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x1c]
        xor eax, ecx
        mov ecx, dword ptr [esi + 0x104c]
        mov dword ptr [esp + 0x10], eax
        xor ecx, edx
        lea edx, [esp + 0x10]
        push edx
        push esi
        mov dword ptr [esp + 0x1c], ecx
        call ext_0086DA90
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        add esp, 0x8
        mov dword ptr [esi + 0x1048], eax
        mov dword ptr [esi + 0x104c], ecx
    store_out:
        lea edx, [esp + 0x10]
        push 0x8
        push edx
        push edi
        call ext_00869310
        add esp, 0xc
        add edi, 0x8
        dec ebp
        jne loop_top
        pop edi
        pop esi
        pop ebp
        pop ebx
    zero_path:
        push 0x8
        lea eax, [esp + 0xc]
        push 0x0
        push eax
        call ext_008692F0
        push 0x8
        lea ecx, [esp + 0x10]
        push 0x0
        push ecx
        call ext_008692F0
        add esp, 0x18
        xor eax, eax
        add esp, 0x10
        ret
    }
}

// [0x00867230] sub_00867230 (304 bytes)
extern "C" void ext_0085D530();
extern "C" void ext_0085E030();
extern "C" void ext_0085E1F0();
extern "C" void ext_00867360();
extern "C" int mem_00BC6658;
extern "C" int mem_00BC671C;
extern "C" int mem_00BC6734;
extern "C" int mem_00AB9638;
extern "C" __declspec(naked) void __cdecl fn_00867230(void* a) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0xcc
        lea ecx, [esp + 0x4]
        push ebx
        push esi
        push edi
        mov si, 0xbe7
        push eax
        xor di, di
        push ecx
        call ext_0085E030
        lea ecx, [esp + 0x18]
        add esp, 0x8
        push ecx
        call ext_0085E1F0
        add esp, 0x4
        test eax, eax
        je L_b3
        mov ebx, 0x3a
    L_68:
        movzx eax, di
        cmp byte ptr [esp + eax + 0x10], bl
        je L_89
        inc di
        lea eax, [esp + 0x10]
        push eax
        call ext_0085E1F0
        movzx ecx, di
        add esp, 0x4
        cmp eax, ecx
        ja L_68
        jmp L_b3
    L_89:
        movzx edi, di
        lea ecx, [esp + 0x74]
        lea eax, [esp + edi + 0x11]
        push eax
        push ecx
        call ext_0085E030
        lea ecx, [esp + 0x7c]
        add esp, 0x8
        push ecx
        call ext_00867360
        mov byte ptr [esp + edi + 0x14], 0x0
        mov si, ax
        add esp, 0x4
    L_b3:
        lea eax, [esp + 0x10]
        push eax
        call dword ptr [mem_00BC6658]
        cmp eax, -1
        jne L_304
        lea eax, [esp + 0x10]
        push eax
        call dword ptr [mem_00BC671C]
        test eax, eax
        je L_304
        mov eax, dword ptr [eax + 0xc]
        mov eax, dword ptr [eax]
        test eax, eax
        je L_304
        push 0x4
        push eax
        lea eax, [esp + 0x14]
        push eax
        call ext_0085D530
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        push eax
        call dword ptr [mem_00BC6734]
        push eax
        lea eax, [esp + 0x14]
        push eax
        call ext_0085E030
        add esp, 0x8
    L_304:
        lea eax, [esp + 0x10]
        push eax
        call dword ptr [mem_00BC6658]
        cmp eax, -1
        je L_34b
        lea eax, [esp + 0x10]
        inc dword ptr [mem_00AB9638]
        push eax
        mov eax, dword ptr [mem_00AB9638]
        shl eax, 5
        add eax, 0xbc68b8
        push eax
        call ext_0085E030
        add esp, 0x8
        test si, si
        jne L_33e
        mov si, 0xbe7
    L_33e:
        mov eax, dword ptr [mem_00AB9638]
        mov word ptr [eax*2 + 0xbc6738], si
    L_34b:
        pop edi
        pop esi
        pop ebx
        add esp, 0xcc
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0086BE10] sub_0086BE10 (304 bytes)
extern "C" void ext_0086B3D0();
extern "C" int mem_00BC7D80;
extern "C" int mem_00BC7888;
extern "C" int mem_00BC7FF8;
extern "C" int mem_00BC7D78;
extern "C" int mem_00BC8000;
extern "C" int mem_00BC7EBC;
extern "C" int mem_00BC7B00;
extern "C" int mem_00BC8800;
extern "C" __declspec(naked) void __fastcall fn_0086BE10(void* self) {
    __asm {
        push ebx
        push esi
        xor si, si
        push edi
        push ebp
        call ext_0086B3D0
        mov dx, 1
    loop_top:
        movsx eax, si
        mov cx, 9
        _emit 0x8d
        _emit 0x1c
        _emit 0x45
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        movsx edi, dx
        inc si
        mov ebp, edi
        shr ebp, 5
        sub cx, bp
        _emit 0x8d
        _emit 0x2c
        _emit 0x85
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov word ptr [ebx + 0xbc7D80], cx
        mov eax, 1
        mov cl, dl
        and cl, 0x1f
        shl eax, cl
        mov ecx, 0x13d
        mov dword ptr [ebp + 0xbc7888], eax
        mov ax, 9
        sub ecx, edi
        shr ecx, 5
        sub ax, cx
        mov cl, -3
        mov word ptr [ebx + 0xbc7EBC], ax
        sub cl, dl
        mov eax, 1
        and cl, 0x1f
        shl eax, cl
        mov ebx, 0x13d
        mov dword ptr [ebp + 0xbc7B00], eax
        _emit 0x8d
        _emit 0x04
        _emit 0x7d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        cdq
        idiv ebx
        cmp si, 0x9e
        jl loop_top
        _emit 0x66
        _emit 0xa1
        _emit 0x80
        _emit 0x7d
        _emit 0xbc
        _emit 0x00
        _emit 0x8b
        _emit 0x0d
        _emit 0x88
        _emit 0x78
        _emit 0xbc
        _emit 0x00
        _emit 0x66
        _emit 0xa3
        _emit 0xf8
        _emit 0x7f
        _emit 0xbc
        _emit 0x00
        mov edi, 0xbc8001
        xor eax, eax
        _emit 0x89
        _emit 0x0d
        _emit 0x78
        _emit 0x7d
        _emit 0xbc
        _emit 0x00
        mov ecx, 0x3f
        rep stosd
        stosw
        mov cx, 2
        stosb
        _emit 0xc6
        _emit 0x05
        _emit 0x00
        _emit 0x80
        _emit 0xbc
        _emit 0x00
        _emit 0x01
    outer_a:
        xor ax, ax
    loop_a:
        movsx edx, ax
        add ax, cx
        inc byte ptr [edx + 0xbc8000]
        cmp ax, 0x100
        jl loop_a
        add cx, cx
        cmp cx, 0x100
        jl outer_a
        mov edi, 0xbc8800
        xor eax, eax
        mov ecx, 0x40
        rep stosd
        mov cx, 1
    outer_b:
        mov ax, cx
        cmp cx, 0x100
        jge skip_b
        mov ebx, 1
    inner_b:
        _emit 0x66
        _emit 0x85
        _emit 0xc8
        je no_xor
        movsx esi, ax
        xor byte ptr [esi + 0xbc8800], bl
    no_xor:
        inc ax
        cmp ax, 0x100
        jl inner_b
    skip_b:
        add cx, cx
        cmp cx, 0x100
        jl outer_b
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0086C020] sub_0086C020 (345 bytes)
extern "C" void ext_0086BF40();
extern "C" void ext_0086F000();
extern "C" void ext_0086F050();
extern "C" void ext_0086F0A0();
extern "C" void ext_0086F120();
extern "C" void ext_0086F1A0();
extern "C" void ext_0086F8A0();
extern "C" void ext_0086F930();
extern "C" void ext_0086FC60();

extern "C" __declspec(naked) void __fastcall fn_0086C020(void* self) {
    __asm {
        sub esp, 0x244
        lea eax, [esp + 0x104]
        push esi
        push eax
        call ext_0086F000
        lea eax, [esp + 0x15c]
        mov esi, dword ptr [esp + 0x250]
        mov dword ptr [esp + 0x158], 0x2
        add esp, 0x4
        lea ecx, [esi + 0x52]
        add esi, 0x66
        push eax
        push ecx
        call ext_0086F050
        lea eax, [esp + 0x1b0]
        add esp, 0x8
        push eax
        push esi
        call ext_0086F050
        lea ecx, [esp + 0xc0]
        lea eax, [esp + 0x160]
        lea edx, [esp + 0x1b0]
        add esp, 0x8
        push ecx
        push eax
        push edx
        call ext_0086F1A0
        lea ecx, [esp + 0x10]
        add esp, 0xc
        push ecx
        call ext_0086F8A0
        lea ecx, [esp + 0x1c]
        lea edx, [esp + 0x8]
        or dword ptr [esp + 0x18], 0x1
        add esp, 0x4
        push ecx
        push edx
        call ext_0086F050
        lea ecx, [esp + 0x70]
        lea edx, [esp + 0xc0]
        lea eax, [esp + 0x20]
        add esp, 0x8
        push ecx
        push edx
        push eax
        call ext_0086F930
        lea ecx, [esp + 0x74]
        add esp, 0xc
        push ecx
        call ext_0086BF40
        add esp, 0x4
        test ax, ax
        jne L_match
    L_loop:
        lea eax, [esp + 0x18]
        lea ecx, [esp + 0x108]
        push eax
        lea eax, [esp + 0x1c]
        push eax
        push ecx
        call ext_0086F120
        lea ecx, [esp + 0x74]
        lea edx, [esp + 0xc4]
        lea eax, [esp + 0x24]
        add esp, 0xc
        push ecx
        push edx
        push eax
        call ext_0086F930
        lea ecx, [esp + 0x74]
        add esp, 0xc
        push ecx
        call ext_0086BF40
        add esp, 0x4
        test ax, ax
        je L_loop
    L_match:
        lea eax, [esp + 0x1f8]
        lea ecx, [esp + 0xb8]
        lea edx, [esp + 0x18]
        push eax
        push ecx
        push edx
        call ext_0086FC60
        mov ecx, dword ptr [esp + 0x25c]
        lea edx, [esp + 0x24]
        add esp, 0xc
        push ecx
        push edx
        call ext_0086F0A0
        mov ecx, dword ptr [esp + 0x25c]
        lea edx, [esp + 0x200]
        add esp, 0x8
        push ecx
        push edx
        call ext_0086F0A0
        add esp, 0x8
        pop esi
        add esp, 0x244
        ret
    }
}

// [0x0086EC60] sub_0086EC60 (352 bytes)
extern "C" void ext_0086B180();
extern "C" void ext_0086B220();
extern "C" void ext_0086B510();
extern "C" void ext_0086B850();

extern "C" __declspec(naked) void __cdecl fn_0086EC60(void* self) {
    __asm {
        sub esp, 0x64
        lea eax, [esp + 0x28]
        push ebx
        push esi
        push edi
        mov esi, dword ptr [esp + 0x74]
        push eax
        push esi
        call ext_0086B850
        lea ecx, [esp + 0x14]
        lea edx, [esp + 0x3c]
        add esp, 0x8
        lea eax, [esi + 0x14]
        push ecx
        push eax
        push edx
        call ext_0086B510
        xor dx, dx
        add esp, 0xc
    L_loop1:
        movsx eax, dx
        shl eax, 0x2
        inc dx
        mov ecx, dword ptr [eax + esi]
        xor ecx, dword ptr [esp + eax + 0xc]
        mov dword ptr [esp + eax + 0x20], ecx
        movsx eax, dx
        cmp eax, 0x5
        jb L_loop1
        lea eax, [esp + 0x48]
        lea ecx, [esp + 0x20]
        push eax
        push ecx
        call ext_0086B220
        lea ecx, [esp + 0x50]
        add esp, 0x8
        push ecx
        call ext_0086B180
        mov edx, dword ptr [esp + 0x80]
        add esp, 0x4
        cmp word ptr [edx], 0x0
        je L_zero
        xor cx, cx
        mov edi, dword ptr [esp + 0x78]
    L_loop2:
        movsx eax, cx
        shl eax, 0x2
        inc cx
        mov ebx, dword ptr [eax + edx + 0x2]
        xor ebx, dword ptr [esp + eax + 0x20]
        xor ebx, dword ptr [esp + eax + 0x48]
        mov dword ptr [eax + edi], ebx
        movsx eax, cx
        cmp eax, 0x5
        jb L_loop2
        jmp L_after
    L_zero:
        xor dx, dx
        mov edi, dword ptr [esp + 0x78]
    L_loop3:
        movsx eax, dx
        shl eax, 0x2
        inc dx
        mov ecx, dword ptr [esp + eax + 0x20]
        xor ecx, dword ptr [esp + eax + 0x48]
        mov dword ptr [eax + edi], ecx
        movsx eax, dx
        cmp eax, 0x5
        jb L_loop3
    L_after:
        xor cx, cx
        mov edx, 0xffffffff
    L_loop4:
        movsx eax, cx
        inc cx
        mov dword ptr [esp + 4*eax + 0xc], edx
        movsx ebx, cx
        cmp ebx, 0x5
        jb L_loop4
        and dword ptr [esp + 0xc], 0x3fffffff
        xor dx, dx
    L_loop5:
        movsx eax, dx
        shl eax, 0x2
        inc dx
        mov ecx, dword ptr [esp + eax + 0x20]
        xor dword ptr [esp + eax + 0xc], ecx
        movsx eax, dx
        cmp eax, 0x5
        jb L_loop5
        lea eax, [esp + 0x5c]
        lea ecx, [esp + 0xc]
        push eax
        push edi
        push ecx
        call ext_0086B510
        lea ecx, [esp + 0x40]
        add esp, 0xc
        push ecx
        push esi
        call ext_0086B220
        lea ecx, [esp + 0x3c]
        add esp, 0x8
        push ecx
        call ext_0086B180
        xor dx, dx
        add esp, 0x4
    L_loop6:
        movsx eax, dx
        shl eax, 0x2
        inc dx
        mov ecx, dword ptr [esp + eax + 0x5c]
        xor ecx, dword ptr [esp + eax + 0x34]
        mov dword ptr [eax + edi + 0x14], ecx
        movsx eax, dx
        cmp eax, 0x5
        jb L_loop6
        pop edi
        pop esi
        pop ebx
        add esp, 0x64
        ret
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x008604E0] sub_008604E0 (400 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_0085E210();
extern "C" int mem_00BC5C20;
extern "C" int mem_00AB9890;
extern "C" int mem_00AB98B4;
extern "C" int mem_00AB988C;

extern "C" __declspec(naked) void __cdecl fn_008604E0(void) {
    __asm {
        sub esp, 0x124
        push ebx
        push esi
        mov ebx, dword ptr [esp + 0x130]
        push edi
        push ebp
        xor edi, edi
        mov ebp, dword ptr [esp + 0x144]
    loop_start:
        mov dword ptr [esp + 0x10], 0x10
        mov dword ptr [esp + 0x30], 0x0
        mov eax, dword ptr [mem_00BC5C20]
        mov dword ptr [esp + 0x34], eax
        inc dword ptr [esp + 0x30]
        cmp ebp, 0x1
        jge check_max
        mov ebp, 0x1
    check_max:
        cmp ebp, 0x1e
        jle do_select
        mov ebp, 0x1e
    do_select:
        lea eax, [esp + 0x18]
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x18], ebp
        push eax
        push 0x0
        mov eax, dword ptr [mem_00BC5C20]
        push 0x0
        inc eax
        mov dword ptr [esp + 0x28], 0x0
        push ecx
        push eax
        call dword ptr [mem_00BC70BC]
        test eax, eax
        je ret_zero_1
        lea eax, [esp + 0x10]
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x10], 0x10
        push eax
        push ecx
        mov eax, dword ptr [esp + 0x144]
        push 0x0
        and eax, 0xffff
        mov ecx, dword ptr [mem_00BC5C20]
        push eax
        push ebx
        push ecx
        call dword ptr [mem_00BC70F4]
        cmp eax, -0x1
        mov esi, eax
        je retry_check
        cmp esi, 0x3e
        je success_path
        cmp esi, 0x8
        jl ret_zero_3
        cmp esi, 0x1ac
        jg ret_zero_3
        lea eax, [esp + 0x14]
        push 0x4
        push ebx
        push eax
        call ext_0085D530
        add esp, 0xc
        cmp word ptr [esp + 0x14], 0x3101
        je check_hdr2
        xor eax, eax
        pop ebp
        pop edi
        inc dword ptr [mem_00AB9890]
        pop esi
        pop ebx
        add esp, 0x124
        ret
    retry_check:
        mov eax, edi
        inc edi
        cmp eax, 0xa
        jl loop_start
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x124
        ret
    ret_zero_1:
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x124
        ret
    check_hdr2:
        mov ax, word ptr [mem_00AB98B4]
        cmp word ptr [esp + 0x16], ax
        je success_path
        xor eax, eax
        pop ebp
        pop edi
        inc dword ptr [mem_00AB988C]
        pop esi
        pop ebx
        add esp, 0x124
        ret
    ret_zero_3:
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x124
        ret
    success_path:
        mov edi, dword ptr [esp + 0x140]
        push 0xa
        push 0x0
        lea ebx, [edi + 0x1]
        push ebx
        call ext_0085D510
        lea eax, [esp + 0x30]
        add esp, 0xc
        push 0x4
        push eax
        push ebx
        call ext_0085D530
        mov ax, word ptr [esp + 0x2e]
        add esp, 0xc
        mov word ptr [edi + 0xb], ax
        mov byte ptr [edi], 0x8
        push edi
        call ext_0085E210
        add esp, 0x4
        mov eax, esi
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x124
        ret
        mov edi, edi
    }
}

// [0x0086EE60] sub_0086EE60 (368 bytes)
extern "C" void ext_0086B1C0(); extern "C" void ext_0086B200(); extern "C" void ext_0086B220(); extern "C" void ext_0086EAF0(); extern "C" void ext_0086EC60(); extern "C" void ext_0086EDC0(); extern "C" void ext_0086EE30();
extern "C" __declspec(naked) void __fastcall fn_0086EE60(void* self) {
    __asm {
        sub esp, 0xdc
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x00
        push ebx
        mov ecx, dword ptr [esp + 0xe4]
        push esi
        push edi
        push ebp
        push eax
        push ecx
        call ext_0086B220
        xor cx, cx
        add esp, 8
        xor edx, edx
    l1:
        movsx eax, cx
        inc cx
        or edx, dword ptr [esp + 4*eax + 0x10]
        movsx eax, cx
        cmp eax, 5
        jb l1
        test edx, edx
        jne l2
        mov ebx, dword ptr [esp + 0xf8]
        push ebx
        call ext_0086B200
        add esp, 4
        add ebx, 0x14
        push ebx
        call ext_0086B200
        add esp, 4
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0xdc
        ret
    l2:
        xor si, si
        xor ebx, ebx
        test edx, edx
        je l9
        mov edi, 1
        mov ebp, 0xfffffffe
    l3:
        test dword ptr [esp + 0x20], edi
        je l5
        mov al, 2
        mov ecx, dword ptr [esp + 0x20]
        and cl, 3
        sub al, cl
        movsx ecx, si
        mov byte ptr [esp + ecx + 0x4c], al
        jns l6
        mov cx, 4
    l4:
        movsx eax, cx
        lea edx, [esp + 4*eax + 0x10]
        mov eax, dword ptr [edx]
        inc eax
        mov dword ptr [edx], eax
        jne l6
        dec cx
        jns l4
        jmp l6
    l5:
        movsx eax, si
        mov byte ptr [esp + eax + 0x4c], bl
    l6:
        inc si
        lea eax, [esp + 0x10]
        and dword ptr [esp + 0x20], ebp
        push eax
        call ext_0086B1C0
        xor ax, ax
        add esp, 4
        xor ecx, ecx
    l7:
        movsx edx, ax
        inc ax
        or ecx, dword ptr [esp + 4*edx + 0x10]
        movsx edx, ax
        cmp edx, 5
        jb l7
        test ecx, ecx
        jne l3
    l9:
        dec si
        mov ebx, dword ptr [esp + 0xf8]
        mov edi, dword ptr [esp + 0xf4]
        push ebx
        push edi
        call ext_0086EE30
        add esp, 8
        test si, si
        jle l15
        mov ebp, dword ptr [esp + 0xfc]
    l10:
        dec si
        push ebp
        lea eax, [esp + 0x28]
        push eax
        push ebx
        call ext_0086EC60
        movsx eax, si
        movsx eax, byte ptr [esp + eax + 0x58]
        add esp, 0xc
        cmp eax, -1
        je l11
        test eax, eax
        je l12
        cmp eax, 1
        je l13
        jmp l14
    l11:
        lea eax, [esp + 0x24]
        push ebp
        push ebx
        push edi
        push eax
        call ext_0086EDC0
        jmp l16
    l12:
        lea eax, [esp + 0x24]
        push ebx
        push eax
        call ext_0086EE30
        add esp, 8
        jmp l14
    l13:
        lea eax, [esp + 0x24]
        push ebp
        push ebx
        push eax
        push edi
        call ext_0086EAF0
    l16:
        add esp, 0x10
    l14:
        test si, si
        jne l10
    l15:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0xdc
        ret
        _emit 0x8b
        _emit 0xff
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0
        _emit 0
        _emit 0
        _emit 0
    }
}

// [0x0086AFD0] sub_0086AFD0 (432 bytes)
extern "C" void ext_0086B220();
extern "C" void ext_0086E880();
extern "C" void ext_0086EA60();
extern "C" void ext_0086EAF0();
extern "C" void ext_0086EE60();
extern "C" int mem_00BC8900;

extern "C" __declspec(naked) void __fastcall fn_0086AFD0(void* self) {
    __asm {
        sub esp, 0x3c
        push ebx
        push esi
        push edi
        mov di, word ptr [esp + 0x54]
        test di, di
        jl clamp
        movsx eax, di
        cmp eax, 0x4
        jbe ok_idx
    clamp:
        xor di, di
    ok_idx:
        mov esi, dword ptr [esp + 0x5c]
        mov eax, dword ptr [esp + 0x4c]
        push esi
        push eax
        call ext_0086B220
        lea eax, [esp + 0x14]
        mov ebx, dword ptr [esp + 0x58]
        add esp, 0x8
        push eax
        push ebx
        push esi
        call ext_0086EA60
        lea ecx, [esp + 0x2c]
        lea eax, [esp + 0x18]
        add esp, 0xc
        push ecx
        push eax
        push esi
        call ext_0086E880
        add esp, 0xc
        test eax, eax
        je after_loop
        movsx eax, di
        lea edi, [esi + 4*eax]
    loop_top:
        lea eax, [esp + 0xc]
        inc dword ptr [edi]
        push eax
        push ebx
        push esi
        call ext_0086EA60
        lea eax, [esp + 0x2c]
        lea ecx, [esp + 0x18]
        add esp, 0xc
        push eax
        push ecx
        push esi
        call ext_0086E880
        add esp, 0xc
        test eax, eax
        jne loop_top
    after_loop:
        add esi, 0x14
        xor eax, eax
        mov ax, word ptr [esp + 0x58]
        push esi
        and eax, 0x1
        shl eax, 0x2
        lea ecx, [eax + 4*eax]
        lea edx, [esp + ecx + 0x24]
        push edx
        call ext_0086B220
        add esp, 0x8
        pop edi
        pop esi
        pop ebx
        add esp, 0x3c
        ret
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    tail_block:
        sub esp, 0x78
        lea eax, [esp + 0x28]
        push esi
        push offset mem_00BC8900
        push eax
        mov eax, dword ptr [esp + 0x98]
        push eax
        push eax
        call ext_0086EE60
        lea ecx, [esp + 0x14]
        lea edx, [esp + 0x3c]
        mov esi, dword ptr [esp + 0xa4]
        add esp, 0x10
        push offset mem_00BC8900
        push ecx
        push edx
        push esi
        call ext_0086EE60
        lea ecx, [esp + 0x64]
        lea eax, [esp + 0x14]
        add esp, 0x10
        push offset mem_00BC8900
        push ecx
        push eax
        push esi
        call ext_0086EAF0
        lea ecx, [esp + 0x3c]
        lea edx, [esp + 0x64]
        mov eax, dword ptr [esp + 0x90]
        add esp, 0x10
        push offset mem_00BC8900
        push ecx
        push edx
        push eax
        call ext_0086EE60
        lea ecx, [esp + 0x14]
        lea edx, [esp + 0x3c]
        mov eax, dword ptr [esp + 0x94]
        add esp, 0x10
        push offset mem_00BC8900
        push ecx
        push edx
        push eax
        call ext_0086EE60
        lea ecx, [esp + 0x3c]
        lea edx, [esp + 0x14]
        mov eax, dword ptr [esp + 0x9c]
        add esp, 0x10
        push offset mem_00BC8900
        push ecx
        push edx
        push eax
        call ext_0086EE60
        lea ecx, [esp + 0x14]
        lea edx, [esp + 0x64]
        mov eax, dword ptr [esp + 0x98]
        add esp, 0x10
        push offset mem_00BC8900
        push ecx
        push edx
        push eax
        call ext_0086EE60
        mov ecx, dword ptr [esp + 0xa8]
        lea edx, [esp + 0x14]
        lea eax, [esp + 0x3c]
        add esp, 0x10
        push offset mem_00BC8900
        push ecx
        push edx
        push eax
        call ext_0086EAF0
        add esp, 0x10
        pop esi
        add esp, 0x78
        ret
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0086C680] sub_0086C680 (447 bytes)
extern "C" void ext_0086B220();
extern "C" void ext_0086EAF0();
extern "C" void ext_0086EE60();
extern "C" void ext_0086F050();
extern "C" void ext_0086F0A0();
extern "C" void ext_0086F120();
extern "C" void ext_0086F1A0();
extern "C" void ext_0086F240();

extern "C" __declspec(naked) void __fastcall fn_0086C680(void* self) {
    __asm {
        sub esp, 0x2bc
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x00
        push esi
        mov esi, dword ptr [esp + 0x2cc]
        push edi
        push eax
        lea ecx, [esi + 0x14]
        push ecx
        call ext_0086B220
        add esp, 0x8
        xor eax, eax
        xor ecx, ecx
    loop1:
        movsx edx, ax
        inc ax
        mov dword ptr [esp + 4*edx + 0x8], ecx
        _emit 0x66
        _emit 0x3d
        _emit 0x03
        _emit 0x00
        jl loop1
        movsx eax, ax
        lea ecx, [esp + 4*eax + 0x8]
        mov eax, dword ptr [ecx]
        lea edx, [esp + 0x8]
        and eax, 0x7fff
        mov dword ptr [ecx], eax
        or eax, 0x8000
        mov dword ptr [ecx], eax
        lea ecx, [esp + 0x134]
        push ecx
        push edx
        call ext_0086F050
        lea ecx, [esp + 0x24]
        mov edi, dword ptr [esp + 0x2e0]
        add esp, 0x8
        push ecx
        push edi
        call ext_0086B220
        xor ax, ax
        add esp, 0x8
        xor ecx, ecx
    loop2:
        movsx edx, ax
        inc ax
        mov dword ptr [esp + 4*edx + 0x1c], ecx
        _emit 0x66
        _emit 0x3d
        _emit 0x03
        _emit 0x00
        jl loop2
        movsx eax, ax
        lea ecx, [esp + 4*eax + 0x1c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 0x2cc]
        and eax, 0x7fff
        mov dword ptr [ecx], eax
        or eax, 0x8000
        mov dword ptr [ecx], eax
        lea ecx, [esp + 0xe4]
        push ecx
        push edx
        call ext_0086F050
        lea ecx, [esp + 0x18c]
        add esp, 0x8
        push ecx
        push esi
        call ext_0086F050
        lea ecx, [esp + 0x1dc]
        mov esi, dword ptr [esp + 0x2d0]
        add esp, 0x8
        lea eax, [esi + 0x52]
        push ecx
        push eax
        call ext_0086F050
        lea eax, [esp + 0x74]
        lea ecx, [esp + 0xec]
        lea edx, [esp + 0x13c]
        add esp, 0x8
        push eax
        push ecx
        push edx
        call ext_0086F1A0
        lea ecx, [esp + 0x78]
        lea edx, [esp + 0x190]
        add esp, 0xc
        push ecx
        push edx
        lea ecx, [esp + 0x74]
        push ecx
        call ext_0086F120
        lea ecx, [esp + 0x230]
        lea edx, [esp + 0x280]
        lea eax, [esp + 0x1e0]
        add esp, 0xc
        push ecx
        push edx
        lea ecx, [esp + 0x74]
        push eax
        push ecx
        call ext_0086F240
        lea ecx, [esp + 0x68]
        lea edx, [esp + 0x234]
        add esp, 0x10
        push ecx
        push edx
        call ext_0086F0A0
        lea ecx, [esp + 0x38]
        add esp, 0x8
        push esi
        push ecx
        mov edx, dword ptr [esp + 0x2dc]
        lea eax, [esp + 0x24]
        push edx
        push eax
        call ext_0086EE60
        lea ecx, [esp + 0xcc]
        lea edx, [esp + 0x40]
        add esp, 0x10
        push esi
        push ecx
        push edx
        push edi
        call ext_0086EAF0
        lea ecx, [esp + 0x40]
        lea edx, [esp + 0xcc]
        lea eax, [esp + 0x68]
        add esp, 0x10
        push esi
        push ecx
        push edx
        push eax
        call ext_0086EE60
        mov ecx, dword ptr [esp + 0x2ec]
        lea edx, [esp + 0x40]
        add esp, 0x10
        push ecx
        push edx
        call ext_0086B220
        add esp, 0x8
        pop edi
        pop esi
        add esp, 0x2bc
        ret
    }
}

// [0x0086C4B0] sub_0086C4B0 (456 bytes)
extern "C" void ext_0086C210();
extern "C" void ext_0086EAF0();
extern "C" void ext_0086EE60();
extern "C" void ext_0086F000();
extern "C" void ext_0086F050();
extern "C" void ext_0086F120();
extern "C" void ext_0086F160();
extern "C" void ext_0086F240();

extern "C" __declspec(naked) void __cdecl fn_0086C4B0(void) {
    __asm {
        sub esp, 0x2a8
        lea eax, [esp + 0xc8]
        push esi
        mov esi, dword ptr [esp + 0x2b8]
        push edi
        mov edi, dword ptr [esp + 0x2c4]
        push esi
        push eax
        lea ecx, [esi + 0x2a]
        push ecx
        lea eax, [edi + 0x14]
        push eax
        call ext_0086EE60
        lea eax, [esp + 0xb8]
        mov ecx, dword ptr [esp + 0x2d0]
        add esp, 0x10
        push esi
        push eax
        push ecx
        push edi
        call ext_0086EE60
        lea ecx, [esp + 0x108]
        lea edx, [esp + 0xb8]
        lea eax, [esp + 0xe0]
        add esp, 0x10
        push esi
        push ecx
        push edx
        push eax
        call ext_0086EAF0
        lea ecx, [esp + 0x130]
        lea edx, [esp + 0x108]
        add esp, 0x10
        push ecx
        push edx
        call ext_0086F050
        lea ecx, [esp + 0x178]
        add esp, 0x8
        add esi, 0x52
        push ecx
        push edi
        call ext_0086F050
        lea ecx, [esp + 0x60]
        add esp, 0x8
        push ecx
        push esi
        call ext_0086F050
        lea ecx, [esp + 0x10]
        lea eax, [esp + 0x128]
        lea edx, [esp + 0x178]
        add esp, 0x8
        mov esi, 0x8000
        push ecx
        push eax
        push edx
        call ext_0086F160
        add esp, 0xc
        test dword ptr [esp + 0x8], esi
        je done1
    loop1:
        lea eax, [esp + 0x8]
        lea ecx, [esp + 0x58]
        push eax
        lea eax, [esp + 0xc]
        push eax
        push ecx
        call ext_0086F120
        add esp, 0xc
        test dword ptr [esp + 0x8], esi
        jne loop1
    done1:
        lea eax, [esp + 0x210]
        lea ecx, [esp + 0x1c0]
        lea edx, [esp + 0x58]
        push eax
        lea eax, [esp + 0xc]
        push ecx
        push edx
        push eax
        call ext_0086F240
        lea ecx, [esp + 0x18]
        mov edx, dword ptr [esp + 0x2c8]
        mov eax, dword ptr [esp + 0x2c4]
        add esp, 0x10
        push ecx
        push edx
        push eax
        call ext_0086C210
        lea ecx, [esp + 0x26c]
        lea edx, [esp + 0x1cc]
        lea eax, [esp + 0x64]
        add esp, 0xc
        push ecx
        push edx
        lea ecx, [esp + 0x10]
        push eax
        push ecx
        call ext_0086F240
        lea ecx, [esp + 0x18]
        add esp, 0x10
        push ecx
        call ext_0086F000
        lea ecx, [esp + 0xc]
        lea edx, [esp + 0x214]
        lea eax, [esp + 0x264]
        add esp, 0x4
        mov esi, 0x8000
        push ecx
        push edx
        push eax
        call ext_0086F160
        add esp, 0xc
        test dword ptr [esp + 0x8], esi
        je done2
    loop2:
        lea eax, [esp + 0x8]
        lea ecx, [esp + 0x58]
        push eax
        lea eax, [esp + 0xc]
        push eax
        push ecx
        call ext_0086F120
        add esp, 0xc
        test dword ptr [esp + 0x8], esi
        jne loop2
    done2:
        mov ax, 0x13
        xor ecx, ecx
    scan:
        movsx edx, ax
        cmp dword ptr [esp + 4*edx + 0x8], ecx
        jne nonzero
        dec ax
        jns scan
        mov eax, 0x1
        pop edi
        pop esi
        add esp, 0x2a8
        ret
    nonzero:
        xor eax, eax
        pop edi
        pop esi
        add esp, 0x2a8
        ret
    }
}

// [0x00862DD0] sub_00862DD0 (450 bytes)
extern "C" void ext_0085D530();
extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" void ext_008602A0();
extern "C" void ext_00860950();
extern "C" int mem_00ABAA3C;
extern "C" int mem_00AB98A8;
extern "C" int mem_00BC6389;
extern "C" int mem_00AB9864;
extern "C" __declspec(naked) void __cdecl fn_00862DD0(void) {
    __asm {
        sub esp, 0x28
        xor ecx, ecx
        lea eax, [esp + 0x6]
        push ebx
        mov byte ptr [esp + 0x8], cl
        push esi
        mov byte ptr [esp + 0xd], cl
        cmp dword ptr [mem_00ABAA3C], ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], ecx
        mov byte ptr [eax + 0x8], cl
        mov word ptr [esp + 0x17], cx
        jne L_0e0c
        mov eax, 0x81
        pop esi
        mov word ptr [mem_00AB98A8], 0x81
        pop ebx
        add esp, 0x28
        ret
    L_0e0c:
        mov eax, dword ptr [esp + 0x44]
        mov ecx, dword ptr [esp + 0x40]
        mov edx, dword ptr [esp + 0x3c]
        push eax
        mov eax, dword ptr [esp + 0x3c]
        push ecx
        push edx
        push eax
        push 0x60
        call ext_00860950
        add esp, 0x14
        push 0x30
        push 0xaba9d8
        push 0xbc667d
        call ext_0085D530
        mov ecx, dword ptr [esp + 0x40]
        lea edx, [esp + 0x28]
        add esp, 0xc
        mov eax, dword ptr [ecx]
        mov ebx, dword ptr [ecx + 0x4]
        mov esi, dword ptr [ecx + 0x8]
        mov dword ptr [edx], eax
        mov al, byte ptr [ecx + 0xc]
        lea ecx, [esp + 0x2c]
        mov dword ptr [edx + 0x4], ebx
        push ecx
        mov dword ptr [edx + 0x8], esi
        mov byte ptr [edx + 0xc], al
        lea edx, [esp + 0xc]
        lea eax, [esp + 0x20]
        push edx
        push eax
        call ext_008602A0
        add esp, 0xc
        cmp dword ptr [esp + 0x8], 0x1
        jge L_0e82
        mov dword ptr [esp + 0x8], 0x1
    L_0e82:
        cmp dword ptr [esp + 0x8], 0x1e
        jle L_0e91
        mov dword ptr [esp + 0x8], 0x1e
    L_0e91:
        mov esi, 0
    L_0e96:
        inc dword ptr [esp + 0x8]
        je L_0f16
    L_0e9c:
        test esi, esi
        jne L_0f2c
        lea eax, [esp + 0x1c]
        push 0x1
        push eax
        call ext_0085F7E0
        add esp, 0x8
        test eax, eax
        jne L_0f8c
        mov eax, 0x1
        test esi, esi
        jne L_0f10
        xor ebx, ebx
    L_0ec6:
        test eax, eax
        je L_0f10
        lea eax, [esp + 0xc]
        push ebx
        lea ecx, [esp + 0x20]
        push eax
        push ecx
        call ext_0085FF80
        add esp, 0xc
        cmp eax, 0x3e
        je L_0ee7
        cmp eax, 0x46
        jne L_0f0c
    L_0ee7:
        cmp word ptr [mem_00AB98A8], bx
        jne L_0eff
        movzx cx, byte ptr [mem_00BC6389]
        mov word ptr [mem_00AB98A8], cx
    L_0eff:
        cmp byte ptr [mem_00BC6389], bl
        jne L_0f0c
        mov esi, 0x1
    L_0f0c:
        test esi, esi
        je L_0ec6
    L_0f10:
        dec dword ptr [esp + 0x8]
        jne L_0e9c
    L_0f16:
        test esi, esi
        jne L_0f2c
        mov eax, 0x81
        pop esi
        mov byte ptr [mem_00BC6389], 0x81
        pop ebx
        add esp, 0x28
        ret
    L_0f2c:
        cmp dword ptr [mem_00AB9864], 0x0
        je L_0f5e
        push 0xac059c
        push 0x3e
        push 0xbc6388
        call ext_0085E720
        add esp, 0xc
        cmp dword ptr [mem_00AB9864], 0x0
        je L_0f5e
        push 0xbc6388
        call ext_0085F700
        jmp L_0f68
    L_0f5e:
        push 0xbc6388
        call ext_0085F740
    L_0f68:
        lea ecx, [esp + 0x10]
        add esp, 0x4
        mov edx, 0xab98b8
        mov eax, dword ptr [ecx]
        mov ebx, dword ptr [ecx + 0x4]
        mov esi, dword ptr [ecx + 0x8]
        mov dword ptr [edx], eax
        mov al, byte ptr [ecx + 0xc]
        mov dword ptr [edx + 0x4], ebx
        mov dword ptr [edx + 0x8], esi
        mov byte ptr [edx + 0xc], al
        xor eax, eax
    L_0f8c:
        pop esi
        pop ebx
        add esp, 0x28
        ret
    }
}

// [0x008656E0] sub_008656E0 (464 bytes)
extern "C" void ext_008658B0();
extern "C" void ext_00865960();

extern "C" __declspec(naked) void __cdecl fn_008656E0(void* p, unsigned int nbits) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        sub esp, 0x88
        push ebx
        lea ecx, [eax + 0x7]
        shr ecx, 0x3
        push esi
        push edi
        and eax, 0x7
        mov esi, dword ptr [esp + 0x98]
        push ebp
        mov dword ptr [esp + 0x1c], ecx
        mov dword ptr [esp + 0x18], eax
        jne L_710
        mov dword ptr [esp + 0x18], 0x8
    L_710:
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esp + 0x20], 0x0
        mov eax, dword ptr [esp + 0x1c]
        dec eax
        mov dword ptr [esp + 0x24], eax
        je L_802
    L_737:
        mov eax, dword ptr [esp + 0x10]
        xor dword ptr [esi], eax
        mov ecx, dword ptr [esp + 0x14]
        xor dword ptr [esi + 0x4], ecx
        cmp dword ptr [esp + 0x20], 0x0
        jne L_8657D2
        cmp dword ptr [esp + 0x1c], 0x2
        push 0x0
        jbe L_8657B3
        lea eax, [esp + 0x2c]
        push eax
        push esi
        call ext_008658B0
        add esp, 0xc
        cmp dword ptr [mem_00AB98EC], 0x0
        jne L_89D
        mov eax, dword ptr [esp + 0x28]
        lea ebx, [esp + 0x30]
        mov edi, 0x19
        mov dword ptr [esp + 0x30], eax
    L_784:
        mov eax, dword ptr [ebx]
        mov cl, 0x20
        add eax, dword ptr [esp + 0x2c]
        mov ebp, dword ptr [esp + 0x28]
        mov dword ptr [ebx + 0x4], eax
        add ebx, 0x4
        mov eax, dword ptr [esp + 0x28]
        mov edx, dword ptr [ebx - 0x4]
        and dl, 0x1f
        sub cl, dl
        shl eax, cl
        mov cl, dl
        shr ebp, cl
        or eax, ebp
        xor dword ptr [esp + 0x34], eax
        dec edi
        jne L_784
        jmp L_8657E0
    L_8657B3:
        push 0x0
        push esi
        call ext_008658B0
        add esp, 0xc
        cmp dword ptr [mem_00AB98EC], 0x0
        je L_8657E0
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x88
        ret
    L_8657D2:
        lea eax, [esp + 0x30]
        push eax
        push esi
        call ext_00865960
        add esp, 0x8
    L_8657E0:
        mov eax, dword ptr [esi]
        add esi, 0x8
        mov dword ptr [esp + 0x10], eax
        inc dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi - 0x4]
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x14], ecx
        cmp eax, dword ptr [esp + 0x24]
        jb L_737
    L_802:
        xor eax, eax
        cmp dword ptr [esp + 0x18], eax
        je L_818
    L_80A:
        mov cl, byte ptr [esi + eax]
        xor byte ptr [esp + eax + 0x10], cl
        inc eax
        cmp eax, dword ptr [esp + 0x18]
        jb L_80A
    L_818:
        cmp dword ptr [esp + 0x1c], 0x2
        jbe L_833
        lea eax, [esp + 0x30]
        lea ecx, [esp + 0x10]
        push eax
        push ecx
        call ext_00865960
        add esp, 0x8
        jmp L_858
    L_833:
        cmp dword ptr [esp + 0x1c], 0x1
        jne L_847
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 0x10], eax
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], ecx
    L_847:
        lea eax, [esp + 0x10]
        push 0x0
        push 0x0
        push eax
        call ext_008658B0
        add esp, 0xc
    L_858:
        cmp dword ptr [esp + 0x1c], 0x1
        jbe L_890
        xor eax, eax
        cmp dword ptr [esp + 0x18], eax
        je L_877
    L_867:
        mov dl, byte ptr [esi + eax - 0x8]
        lea ecx, [esi + eax]
        inc eax
        mov byte ptr [ecx], dl
        cmp eax, dword ptr [esp + 0x18]
        jb L_867
    L_877:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esi - 0x8], eax
        mov ecx, dword ptr [esp + 0x14]
        pop ebp
        pop edi
        mov dword ptr [esi - 0x4], ecx
        pop esi
        pop ebx
        add esp, 0x88
        ret
    L_890:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0x4], ecx
    L_89D:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x88
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    }
}

// [0x0086C2D0] sub_0086C2D0 (479 bytes)
extern "C" void ext_0086C210();
extern "C" void ext_0086EE60();
extern "C" void ext_0086F050();
extern "C" void ext_0086F0A0();
extern "C" void ext_0086F120();
extern "C" void ext_0086F160();
extern "C" void ext_0086F1A0();
extern "C" void ext_0086F240();
extern "C" void ext_0086F8A0();

extern "C" __declspec(naked) void __fastcall fn_0086C2D0(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        sub esp, 0x2bc
        lea eax, [esp + 0x64]
        push esi
        mov edx, dword ptr [esp + 0x2c4]
        push edi
        push eax
        push ecx
        push edx
        call ext_0086C210
        lea ecx, [esp + 0xc8]
        mov esi, dword ptr [esp + 0x2dc]
        add esp, 0xc
        lea eax, [esi + 0x52]
        push ecx
        push eax
        call ext_0086F050
        lea eax, [esp + 0x18c]
        lea ecx, [esp + 0x114]
        lea edx, [esp + 0xc4]
        add esp, 0x8
        push eax
        push ecx
        lea eax, [esp + 0x74]
        push edx
        push eax
        call ext_0086F240
        lea ecx, [esp + 0x68]
        add esp, 0x10
        push ecx
        call ext_0086F8A0
        lea ecx, [esp + 0x160]
        lea eax, [esp + 0x5c]
        add esp, 0x4
        push esi
        push ecx
        add esi, 0x2a
        push esi
        push eax
        call ext_0086EE60
        lea eax, [esp + 0x1e4]
        lea ecx, [esp + 0x16c]
        add esp, 0x10
        push eax
        push ecx
        call ext_0086F050
        lea ecx, [esp + 0x74]
        lea edx, [esp + 0x18c]
        lea eax, [esp + 0x1dc]
        add esp, 0x8
        push ecx
        push edx
        push eax
        call ext_0086F120
        lea ecx, [esp + 0x14]
        lea edx, [esp + 0x118]
        lea eax, [esp + 0xc8]
        add esp, 0xc
        push ecx
        push edx
        push eax
        lea ecx, [esp + 0x78]
        push ecx
        call ext_0086F240
        mov esi, dword ptr [esp + 0x2e8]
        lea ecx, [esp + 0x18]
        add esp, 0x10
        push esi
        push ecx
        call ext_0086F0A0
        lea eax, [esp + 0x27c]
        lea ecx, [esp + 0x60]
        add esp, 0x8
        push eax
        push ecx
        call ext_0086F050
        lea ecx, [esp + 0x22c]
        mov edx, dword ptr [esp + 0x2dc]
        add esp, 0x8
        push ecx
        push edx
        call ext_0086F050
        lea ecx, [esp + 0x74]
        lea edx, [esp + 0x10]
        lea eax, [esp + 0x22c]
        add esp, 0x8
        push ecx
        push edx
        push eax
        call ext_0086F1A0
        lea ecx, [esp + 0x14]
        lea edx, [esp + 0x118]
        lea eax, [esp + 0xc8]
        add esp, 0xc
        push ecx
        push edx
        lea ecx, [esp + 0x74]
        push eax
        push ecx
        call ext_0086F240
        lea ecx, [esp + 0x18]
        lea eax, [esp + 0x284]
        add esp, 0x10
        mov edi, 0x8000
        push ecx
        lea ecx, [esp + 0xc]
        push ecx
        push eax
        call ext_0086F160
        add esp, 0xc
        test dword ptr [esp + 0x8], edi
        je after_loop
    loop_top:
        lea eax, [esp + 0x8]
        lea ecx, [esp + 0xbc]
        push eax
        lea eax, [esp + 0xc]
        push eax
        push ecx
        call ext_0086F120
        add esp, 0xc
        test dword ptr [esp + 0x8], edi
        jne loop_top
    after_loop:
        lea eax, [esp + 0x6c]
        lea ecx, [esp + 0x10c]
        lea edx, [esp + 0xbc]
        push eax
        lea eax, [esp + 0xc]
        push ecx
        push edx
        add esi, 0x14
        push eax
        call ext_0086F240
        lea ecx, [esp + 0x18]
        add esp, 0x10
        push esi
        push ecx
        call ext_0086F0A0
        add esp, 0x8
        pop edi
        pop esi
        add esp, 0x2bc
        ret
    }
}

// [0x00860CB0] sub_00860CB0 (475 bytes)
extern "C" void ext_0085E030();
extern "C" void ext_0085E1F0();
extern "C" void ext_0085E9E0();
extern "C" void ext_00860E90();
extern "C" void ext_00860EF0();
extern "C" char mem_00AB98B8;
extern "C" char mem_00AB98B9;
extern "C" char mem_00AB98BA;
extern "C" char mem_00AB98BB;
extern "C" char mem_00AB98BC;
extern "C" char mem_00AB98BD;
extern "C" int mem_00AC0570;
extern "C" int mem_00AC057C;
extern "C" int mem_00AC0580;
extern "C" int mem_00AC0584;
extern "C" int mem_00AC0588;

extern "C" __declspec(naked) void __fastcall fn_00860CB0(void* self) {
    __asm {
        sub esp, 0x100
        push esi
        mov esi, dword ptr [esp + 0x114]
        mov word ptr [esi], 0x0
        cmp byte ptr [mem_00AB98B8], 0x0
        jne L_nonzero
        mov eax, 0xa
        pop esi
        mov dword ptr [mem_00AB98EC], 0xa
        add esp, 0x100
        ret
    L_nonzero:
        mov eax, dword ptr [esp + 0x10c]
        test eax, eax
        je L_zeroarg
        mov eax, 0xfffffff4
        pop esi
        mov dword ptr [mem_00AB98EC], 0xfffffff4
        add esp, 0x100
        ret
    L_zeroarg:
        lea eax, [esp + 0x4]
        push offset mem_00AC0570
        push eax
        call ext_0085E030
        add esp, 0x8
        xor eax, eax
        mov al, byte ptr [mem_00AB98B8]
        cmp eax, 0x1
        je L_case1
        cmp eax, 0x8
        je L_case8
        jmp L_common
    L_case1:
        mov byte ptr [esp + 0x4], 0x49
        lea eax, [esp + 0x8]
        push 0x4
        mov byte ptr [esp + 0x9], 0x50
        mov byte ptr [esp + 0xa], 0x58
        mov byte ptr [esp + 0xb], 0x28
        push offset mem_00AB98B9
        push eax
        call ext_00860E90
        mov byte ptr [esp + 0x1c], 0x3a
        lea eax, [esp + 0x1d]
        add esp, 0xc
        push 0x6
        push offset mem_00AB98BD
        push eax
        call ext_00860E90
        mov byte ptr [esp + 0x29], 0x29
        mov byte ptr [esp + 0x2a], 0x0
        add esp, 0xc
        jmp L_common
    L_case8:
        mov byte ptr [esp + 0x4], 0x49
        mov al, byte ptr [mem_00AB98B9]
        lea ecx, [esp + 0x4]
        mov byte ptr [esp + 0x5], 0x50
        mov byte ptr [esp + 0x6], 0x28
        mov byte ptr [esp + 0x7], 0x0
        push eax
        push ecx
        call ext_00860EF0
        lea ecx, [esp + 0xc]
        add esp, 0x8
        push offset mem_00AC057C
        push ecx
        call ext_0085E9E0
        lea edx, [esp + 0xc]
        add esp, 0x8
        mov cl, byte ptr [mem_00AB98BA]
        push ecx
        push edx
        call ext_00860EF0
        lea ecx, [esp + 0xc]
        add esp, 0x8
        push offset mem_00AC0580
        push ecx
        call ext_0085E9E0
        lea edx, [esp + 0xc]
        add esp, 0x8
        mov cl, byte ptr [mem_00AB98BB]
        push ecx
        push edx
        call ext_00860EF0
        lea ecx, [esp + 0xc]
        add esp, 0x8
        push offset mem_00AC0584
        push ecx
        call ext_0085E9E0
        lea edx, [esp + 0xc]
        add esp, 0x8
        mov cl, byte ptr [mem_00AB98BC]
        push ecx
        push edx
        call ext_00860EF0
        lea ecx, [esp + 0xc]
        add esp, 0x8
        push offset mem_00AC0588
        push ecx
        call ext_0085E9E0
        add esp, 0x8
    L_common:
        lea eax, [esp + 0x4]
        push eax
        call ext_0085E1F0
        mov word ptr [esi], ax
        add esp, 0x4
        xor ecx, ecx
        mov cx, ax
        cmp ecx, dword ptr [esp + 0x110]
        jle L_ok
        mov word ptr [esi], 0x0
        mov eax, 0x9d
        mov dword ptr [mem_00AB98EC], 0x9d
        pop esi
        add esp, 0x100
        ret
    L_ok:
        lea eax, [esp + 0x4]
        mov ecx, dword ptr [esp + 0x108]
        push eax
        push ecx
        call ext_0085E030
        add esp, 0x8
        xor eax, eax
        mov dword ptr [mem_00AB98EC], 0x0
        pop esi
        add esp, 0x100
        ret
    }
}

// [0x0086FC60] sub_0086FC60 (480 bytes)
extern "C" void ext_0086F000();
extern "C" void ext_0086F020();
extern "C" void ext_0086F120();
extern "C" void ext_0086F160();
extern "C" void ext_0086F1A0();
extern "C" void ext_0086F240();

extern "C" __declspec(naked) void __cdecl fn_0086FC60(void* arg) {
    __asm {
        sub esp, 0x2d0
        lea eax, [esp + 0x140]
        push esi
        mov esi, dword ptr [esp + 0x2dc]
        push edi
        mov edi, 1
        push eax
        push esi
        call ext_0086F020
        lea ecx, [esp + 0x60]
        mov eax, dword ptr [esp + 0x2e4]
        add esp, 8
        push ecx
        push eax
        call ext_0086F020
        lea ecx, [esp + 0x10]
        add esp, 8
        push ecx
        call ext_0086F000
        lea ecx, [esp + 0xfc]
        lea edx, [esp + 0xac]
        lea eax, [esp + 0x5c]
        mov dword ptr [esp + 0x58], edi
        add esp, 4
        push ecx
        push edx
        lea ecx, [esp + 0x150]
        push eax
        push ecx
        call ext_0086F240
        lea ecx, [esp + 0x1f8]
        lea edx, [esp + 0xb8]
        add esp, 0x10
        push ecx
        push edx
        call ext_0086F020
        mov cx, 0x13
        add esp, 8
        xor eax, eax
    loop1:
        movsx edx, cx
        or eax, dword ptr [esp + 4*edx + 0xf8]
        dec cx
        jns loop1
        test eax, eax
        je not_taken
    retry:
        lea eax, [esp + 0x148]
        lea ecx, [esp + 0x58]
        push eax
        push ecx
        call ext_0086F020
        lea ecx, [esp + 0x60]
        lea edx, [esp + 0x100]
        add esp, 8
        neg di
        push ecx
        push edx
        call ext_0086F020
        lea ecx, [esp + 0x100]
        lea edx, [esp + 0x1f0]
        lea eax, [esp + 0x60]
        add esp, 8
        push ecx
        push edx
        lea ecx, [esp + 0x150]
        push eax
        push ecx
        call ext_0086F240
        lea ecx, [esp + 0x1a8]
        lea edx, [esp + 0xb8]
        lea eax, [esp + 0x1f8]
        add esp, 0x10
        push ecx
        push edx
        push eax
        call ext_0086F1A0
        lea ecx, [esp + 0x1a4]
        lea edx, [esp + 0x14]
        add esp, 0xc
        push ecx
        push edx
        lea ecx, [esp + 0x1a0]
        push ecx
        call ext_0086F120
        lea ecx, [esp + 0x244]
        lea edx, [esp + 0x294]
        lea eax, [esp + 0x1a4]
        add esp, 0xc
        push ecx
        push edx
        push esi
        push eax
        call ext_0086F240
        lea ecx, [esp + 0x18]
        lea edx, [esp + 0xb8]
        add esp, 0x10
        push ecx
        push edx
        call ext_0086F020
        lea ecx, [esp + 0xb0]
        lea edx, [esp + 0x240]
        add esp, 8
        push ecx
        push edx
        call ext_0086F020
        add esp, 8
        xor eax, eax
        mov cx, 0x13
    loop2:
        movsx edx, cx
        or eax, dword ptr [esp + 4*edx + 0xf8]
        dec cx
        jns loop2
        test eax, eax
        jne retry
    not_taken:
        test di, di
        mov eax, dword ptr [esp + 0x2e4]
        lea ecx, [esp + 8]
        push eax
        push ecx
        jge positive
        push esi
        call ext_0086F160
        add esp, 0xc
        pop edi
        pop esi
        add esp, 0x2d0
        ret
    positive:
        call ext_0086F020
        add esp, 8
        pop edi
        pop esi
        add esp, 0x2d0
        ret
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x00869FE0] sub_00869FE0 (512 bytes)
extern "C" __declspec(naked) void __fastcall fn_00869FE0(void* self) {
    __asm {
        sub esp, 0x234
        mov edx, dword ptr [esp + 0x244]
        push ebx
        push esi
        push edi
        lea ebx, [edx + edx]
        lea eax, [esp + 0x38]
        mov ecx, ebx
        mov dword ptr [esp + 0x30], ebx
        test ecx, ecx
        je L_zdone
    L_zloop:
        mov dword ptr [eax], 0
        add eax, 4
        dec ecx
        jne L_zloop
    L_zdone:
        mov ecx, dword ptr [esp + 0x248]
        test edx, edx
        je L_nzero
        lea esi, [edx - 1]
        mov eax, esi
        mov edi, dword ptr [ecx + 4*eax]
        lea edx, [ecx + 4*eax]
        test edi, edi
        jne L_a036
    L_a027:
        mov edi, eax
        dec eax
        sub edx, 4
        test edi, edi
        je L_a036
        cmp dword ptr [edx], 0
        je L_a027
    L_a036:
        mov edx, dword ptr [esp + 0x24c]
        lea edi, [eax + 1]
        mov eax, esi
        mov esi, dword ptr [edx + 4*eax]
        lea edx, [edx + 4*eax]
        test esi, esi
        jne L_a05b
    L_a04c:
        mov esi, eax
        dec eax
        sub edx, 4
        test esi, esi
        je L_a05b
        cmp dword ptr [edx], 0
        je L_a04c
    L_a05b:
        lea edx, [eax + 1]
        mov dword ptr [esp + 0xc], edx
        jmp L_a06c
    L_nzero:
        xor edi, edi
        mov dword ptr [esp + 0xc], edi
        mov edx, edi
    L_a06c:
        test edi, edi
        jbe L_a1a7
        lea ebx, [esp + 0x38]
        lea eax, [esp + 4*edx + 0x38]
        sub ebx, ecx
        push ebp
        mov dword ptr [esp + 0x1c], ecx
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x20], edi
    L_a08f:
        mov ebp, dword ptr [ecx]
        mov dword ptr [esp + 0x18], 0
        test ebp, ebp
        je L_a17b
        test edx, edx
        jbe L_a17b
        mov eax, ebp
        and ebp, 0xffff
        shr eax, 0x10
        mov edi, eax
        mov eax, dword ptr [esp + 0x250]
        and edi, 0xffff
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x28], edi
        add ebx, ecx
        mov dword ptr [esp + 0x2c], edx
        jmp L_a0d7
    L_a0d3:
        mov edi, dword ptr [esp + 0x28]
    L_a0d7:
        mov ecx, dword ptr [esp + 0x14]
        mov edx, ebp
        mov dword ptr [esp + 0x30], 0
        mov eax, dword ptr [ecx]
        mov ecx, eax
        and eax, 0xffff
        shr ecx, 0x10
        imul edx, eax
        imul eax, dword ptr [esp + 0x28]
        mov esi, ecx
        mov ecx, ebp
        and esi, 0xffff
        imul ecx, esi
        imul edi, esi
        add eax, ecx
        mov esi, 0x10000
        cmp eax, ecx
        jb L_a118
        mov esi, dword ptr [esp + 0x30]
    L_a118:
        mov ecx, eax
        shl ecx, 0x10
        add edx, ecx
        shr eax, 0x10
        cmp edx, ecx
        jae L_a127
        inc esi
    L_a127:
        mov ecx, dword ptr [ebx]
        add eax, esi
        add edi, eax
        mov eax, dword ptr [esp + 0x18]
        add ecx, eax
        mov esi, ecx
        mov dword ptr [ebx], ecx
        cmp esi, eax
        sbb eax, eax
        add esi, edx
        mov ecx, esi
        mov dword ptr [ebx], esi
        neg eax
        cmp ecx, edx
        jae L_a148
        inc eax
    L_a148:
        mov edx, dword ptr [esp + 0x14]
        add eax, edi
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esp + 0x2c]
        add edx, 4
        add ebx, 4
        dec eax
        mov dword ptr [esp + 0x14], edx
        mov dword ptr [esp + 0x2c], eax
        jne L_a0d3
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x24]
        mov ebx, dword ptr [esp + 0x38]
    L_a17b:
        mov esi, dword ptr [esp + 0x18]
        mov edi, dword ptr [eax]
        add edi, esi
        mov esi, dword ptr [esp + 0x20]
        mov dword ptr [eax], edi
        add ecx, 4
        add eax, 4
        dec esi
        mov dword ptr [esp + 0x1c], ecx
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x20], esi
        jne L_a08f
        mov ebx, dword ptr [esp + 0x34]
        pop ebp
    L_a1a7:
        mov ecx, ebx
        lea eax, [esp + 0x38]
        test ecx, ecx
        je L_a1c9
        mov edx, dword ptr [esp + 0x244]
        lea esi, [esp + 0x38]
        sub edx, esi
    L_a1be:
        mov esi, dword ptr [eax]
        mov dword ptr [edx + eax], esi
        add eax, 4
        dec ecx
        jne L_a1be
    L_a1c9:
        pop edi
        pop esi
        pop ebx
        add esp, 0x234
        ret
    }
}

// [0x008686E0] sub_008686E0 (512 bytes)
extern "C" __declspec(naked) void __fastcall fn_008686E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        lea esi, [eax - 0x6]
        push edi
        lea ecx, [esi - 0x1]
        test ecx, ecx
        jl L_870F
        mov edx, dword ptr [esp + 0x34]
        lea edi, [esp + 0x10]
        lea eax, [esp + 4*ecx + 0x10]
        sub edx, edi
        inc ecx
    L_8704:
        mov edi, dword ptr [edx + eax]
        mov dword ptr [eax], edi
        sub eax, 0x4
        dec ecx
        jne L_8704
    L_870F:
        mov ebx, dword ptr [esp + 0x38]
        xor edi, edi
        xor eax, eax
        xor ecx, ecx
        test esi, esi
        mov dword ptr [esp + 0x34], edi
        jle L_875C
    L_8721:
        mov edx, dword ptr [esp + 0x3c]
        inc edx
        cmp edi, edx
        jge L_875C
        cmp ecx, esi
        jge L_874C
        lea edx, [esp + 4*ecx + 0x10]
    L_8732:
        cmp eax, 0x4
        jge L_874F
        mov ebp, dword ptr [edx]
        lea edi, [eax + 4*edi]
        inc ecx
        add edx, 0x4
        inc eax
        mov dword ptr [ebx + 4*edi], ebp
        mov edi, dword ptr [esp + 0x34]
        cmp ecx, esi
        jl L_8732
    L_874C:
        cmp eax, 0x4
    L_874F:
        jne L_8758
        inc edi
        xor eax, eax
        mov dword ptr [esp + 0x34], edi
    L_8758:
        cmp ecx, esi
        jl L_8721
    L_875C:
        mov ecx, dword ptr [esp + 0x3c]
        inc ecx
        cmp edi, ecx
        mov dword ptr [esp + 0x38], ecx
        jge L_88C7
        mov dword ptr [esp + 0x3c], 0xac3880
    L_8775:
        mov cl, byte ptr [esp + 0x10]
        xor edx, edx
        mov dl, byte ptr [esp + 4*esi + 0xd]
        xor cl, byte ptr [edx + 0xac0680]
        xor edx, edx
        mov byte ptr [esp + 0x10], cl
        mov dl, byte ptr [esp + 4*esi + 0xe]
        mov dl, byte ptr [edx + 0xac0680]
        xor byte ptr [esp + 0x11], dl
        xor edx, edx
        mov dl, byte ptr [esp + 4*esi + 0xf]
        mov dl, byte ptr [edx + 0xac0680]
        xor byte ptr [esp + 0x12], dl
        xor edx, edx
        mov dl, byte ptr [esp + 4*esi + 0xc]
        mov dl, byte ptr [edx + 0xac0680]
        xor byte ptr [esp + 0x13], dl
        mov edx, dword ptr [esp + 0x3c]
        xor cl, byte ptr [edx]
        add edx, 0x4
        cmp esi, 0x8
        mov dword ptr [esp + 0x3c], edx
        mov byte ptr [esp + 0x10], cl
        je L_87EF
        cmp esi, 0x1
        jle L_887F
        lea ecx, [esp + 0x14]
        lea edx, [esi - 0x1]
    L_87DF:
        mov ebp, dword ptr [ecx - 0x4]
        xor dword ptr [ecx], ebp
        add ecx, 0x4
        dec edx
        jne L_87DF
        jmp L_887F
    L_87EF:
        lea ecx, [esp + 0x14]
        mov edx, 0x3
    L_87F8:
        mov ebp, dword ptr [ecx - 0x4]
        xor dword ptr [ecx], ebp
        add ecx, 0x4
        dec edx
        jne L_87F8
        mov ecx, dword ptr [esp + 0x1c]
        and ecx, 0xff
        mov dl, byte ptr [ecx + 0xac0680]
        mov cl, byte ptr [esp + 0x20]
        xor cl, dl
        mov byte ptr [esp + 0x20], cl
        mov ecx, dword ptr [esp + 0x1d]
        and ecx, 0xff
        mov dl, byte ptr [ecx + 0xac0680]
        mov cl, byte ptr [esp + 0x21]
        xor cl, dl
        mov byte ptr [esp + 0x21], cl
        mov ecx, dword ptr [esp + 0x1e]
        and ecx, 0xff
        mov dl, byte ptr [ecx + 0xac0680]
        mov cl, byte ptr [esp + 0x22]
        xor cl, dl
        mov byte ptr [esp + 0x22], cl
        mov ecx, dword ptr [esp + 0x1f]
        and ecx, 0xff
        mov dl, byte ptr [ecx + 0xac0680]
        mov cl, byte ptr [esp + 0x23]
        xor cl, dl
        mov edx, 0x3
        mov byte ptr [esp + 0x23], cl
        lea ecx, [esp + 0x24]
    L_8874:
        mov ebp, dword ptr [ecx - 0x4]
        xor dword ptr [ecx], ebp
        add ecx, 0x4
        dec edx
        jne L_8874
    L_887F:
        xor ecx, ecx
        test esi, esi
        jle L_88BD
    L_8885:
        cmp edi, dword ptr [esp + 0x38]
        jge L_88C7
        cmp ecx, esi
        jge L_88AD
        lea edx, [esp + 4*ecx + 0x10]
    L_8893:
        cmp eax, 0x4
        jge L_88B0
        mov ebp, dword ptr [edx]
        lea edi, [eax + 4*edi]
        inc ecx
        add edx, 0x4
        inc eax
        mov dword ptr [ebx + 4*edi], ebp
        mov edi, dword ptr [esp + 0x34]
        cmp ecx, esi
        jl L_8893
    L_88AD:
        cmp eax, 0x4
    L_88B0:
        jne L_88B9
        inc edi
        xor eax, eax
        mov dword ptr [esp + 0x34], edi
    L_88B9:
        cmp ecx, esi
        jl L_8885
    L_88BD:
        cmp edi, dword ptr [esp + 0x38]
        jl L_8775
    L_88C7:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x20
        ret
    }
}

// [0x008681F0] sub_008681F0 (500 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_0085D560();
extern "C" void ext_0085DC90();
extern "C" void ext_00867E30();
extern "C" void ext_008683F0();
extern "C" void ext_00868510();
extern "C" int mem_00AB9604;
extern "C" int mem_00BC666C;
extern "C" int mem_00AB9610;
extern "C" int mem_00BC6660;
extern "C" int mem_00AB961C;
extern "C" int mem_00AB9628;
extern "C" int mem_00BC70E0;
extern "C" int mem_00BC70D8;
extern "C" int mem_00924210;

extern "C" __declspec(naked) int __cdecl fn_008681F0(void* a1) {
    __asm {
        sub esp, 0x10
        push ebx
        push esi
        push edi
        xor esi, esi
        push ebp
        call ext_00867E30
        test eax, eax
        je L_main
        mov eax, 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_main:
        mov edi, dword ptr [esp + 0x24]
        push 0xa
        lea eax, [edi + 0xee]
        push eax
        push 0xbc6662
        call ext_0085D530
        mov ax, word ptr [mem_00AB9604]
        add esp, 0xc
        mov word ptr [mem_00BC666C], ax
        push 0x1c4
        mov dword ptr [mem_00AB9610], 0x1c4
        mov word ptr [mem_00BC6660], 0x6
        call ext_0085D560
        add esp, 0x4
        mov ebx, eax
        push 0x1c4
        push 0x0
        push ebx
        call ext_0085D510
        add esp, 0xc
        push 0x668
        call ext_0085D560
        mov word ptr [ebx], 0x20a
        add esp, 0x4
        cmp word ptr [edi + 0x16], 0x16
        mov ebp, eax
        jbe L_skip1
        mov word ptr [edi + 0x16], 0x16
    L_skip1:
        mov cx, word ptr [edi + 0x16]
        mov eax, dword ptr [edi + 0x12]
        mov word ptr [esp + 0x12], cx
        mov dword ptr [esp + 0x1c], eax
        inc word ptr [mem_00AB961C]
        xor eax, eax
        mov dx, word ptr [mem_00AB961C]
        mov dword ptr [esp + 0x18], 0x1
        mov ax, word ptr [edi + 0x18]
        mov word ptr [edi + 0xce], dx
        cmp eax, 0x110
        jne L_skip2
        mov dword ptr [esp + 0x18], 0x3
    L_skip2:
        push 0x100
        lea eax, [ebx + 0xc]
        push edi
        push eax
        call ext_0085D530
        mov ax, word ptr [edi + 0x16]
        add esp, 0xc
        test ax, ax
        je L_skip3
        mov ecx, dword ptr [edi + 0x12]
        lea edx, [ebx + 0x10c]
        movzx eax, ax
        shl eax, 0x3
        push eax
        push ecx
        push edx
        call ext_0085D530
        mov cx, word ptr [ebx + 0xda]
        add esp, 0xc
        lea edx, [ebx + 0x10c]
        push ecx
        push edx
        call ext_0085DC90
        add esp, 0x8
    L_skip3:
        mov eax, dword ptr [mem_00AB9628]
        mov dword ptr [esp + 0x14], eax
    L_loop:
        mov eax, dword ptr [esp + 0x14]
        dec dword ptr [esp + 0x14]
        test eax, eax
        je L_after_loop
        call ext_00868510
        push 0x10
        mov eax, dword ptr [mem_00AB9610]
        push 0xbc6660
        mov ecx, dword ptr [mem_00BC70E0]
        push 0x0
        push eax
        push ebx
        push ecx
        call dword ptr [mem_00BC70D8]
        mov dx, word ptr [edi + 0xce]
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push edx
        push ebp
        call ext_008683F0
        add esp, 0xc
        mov esi, eax
        test esi, esi
        je L_loop
    L_after_loop:
        test esi, esi
        je L_fail
        push 0x100
        lea eax, [ebp + 0xc]
        push eax
        push edi
        call ext_0085D530
        mov cx, word ptr [esp + 0x1e]
        mov eax, dword ptr [esp + 0x28]
        mov word ptr [edi + 0x16], cx
        add esp, 0xc
        test cx, cx
        mov dword ptr [edi + 0x12], eax
        je L_end_block
        mov ax, word ptr [ebp + 0xda]
        lea esi, [ebp + 0x10c]
        push eax
        push esi
        call ext_0085DC90
        add esp, 0x8
        xor eax, eax
        mov ax, word ptr [edi + 0x16]
        mov ecx, dword ptr [edi + 0x12]
        shl eax, 0x3
        push eax
        push esi
        push ecx
        call ext_0085D530
        add esp, 0xc
        jmp L_end_block
    L_fail:
        mov word ptr [edi + 0x1a], 0x7
    L_end_block:
        push ebp
        mov esi, dword ptr [mem_00924210]
        call esi
        push ebx
        call esi
        xor eax, eax
        pop ebp
        mov ax, word ptr [edi + 0x1a]
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x00865470] sub_00865470 (511 bytes)
extern "C" void ext_0085E720();
extern "C" int mem_00AB9864;
extern "C" int mem_00BC6389;
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" void ext_0085F750();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" __declspec(naked) void __fastcall fn_00865470(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        push 0x1
        push 0xab98b8
        call ext_0085F7E0
        add esp, 0x8
        test eax, eax
        jne epi
        xor esi, esi
    loop_top:
        lea eax, [esp + 0x4]
        push 0x1
        push eax
        push 0xab98b8
        call ext_0085FF80
        add esp, 0xc
        test eax, eax
        je fail_ret
        cmp eax, 0x3e
        je short chk_ok
        cmp eax, 0x46
        jne short not_ok
    chk_ok:
        lea eax, [esp + 0x4]
        push 0xab98b8
        push eax
        call ext_0085F750
        add esp, 0x8
        test eax, eax
        je short not_ok
        mov esi, 0x1
    not_ok:
        test esi, esi
        je short loop_top
        test esi, esi
        jne short have_ok
        mov eax, 0xffffffff
        pop esi
        mov dword ptr [mem_00AB98EC], 0xf
        add esp, 0x10
        ret
    fail_ret:
        mov eax, 0xffffffff
        pop esi
        add esp, 0x10
        ret
    have_ok:
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je short skip_a
        push 0xac05c4
        push 0x3e
        push 0xbc6388
        call ext_0085E720
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je short skip_a
        push 0xbc6388
        call ext_0085F700
        add esp, 0x4
    skip_a:
        push 0xbc6388
        call ext_0085F740
        add esp, 0x4
        xor eax, eax
        mov al, byte ptr [mem_00BC6389]
        lea ecx, [eax - 0x1]
        cmp ecx, 0x1b
        ja epi
        xor edx, edx
        mov dl, byte ptr [ecx + 0x8656c0]
        jmp dword ptr [edx*4 + 0x865670]
    c0:
        mov dword ptr [mem_00AB98EC], 0x81
        pop esi
        add esp, 0x10
        ret
    c1:
        mov dword ptr [mem_00AB98EC], 0x82
        pop esi
        add esp, 0x10
        ret
    c2:
        mov dword ptr [mem_00AB98EC], 0x83
        pop esi
        add esp, 0x10
        ret
    c3:
        mov dword ptr [mem_00AB98EC], 0x84
        pop esi
        add esp, 0x10
        ret
    c4:
        mov dword ptr [mem_00AB98EC], 0x85
        pop esi
        add esp, 0x10
        ret
    c5:
        mov dword ptr [mem_00AB98EC], 0x86
        pop esi
        add esp, 0x10
        ret
    c6:
        mov dword ptr [mem_00AB98EC], 0x87
        pop esi
        add esp, 0x10
        ret
    c7:
        mov dword ptr [mem_00AB98EC], 0x88
        pop esi
        add esp, 0x10
        ret
    c8:
        mov dword ptr [mem_00AB98EC], 0x89
        pop esi
        add esp, 0x10
        ret
    c9:
        mov dword ptr [mem_00AB98EC], 0x8a
        pop esi
        add esp, 0x10
        ret
    c10:
        mov dword ptr [mem_00AB98EC], 0xa
        pop esi
        add esp, 0x10
        ret
    c11:
        mov dword ptr [mem_00AB98EC], 0x8c
        pop esi
        add esp, 0x10
        ret
    c12:
        mov dword ptr [mem_00AB98EC], 0x8d
        pop esi
        add esp, 0x10
        ret
    c13:
        mov dword ptr [mem_00AB98EC], 0x8e
        pop esi
        add esp, 0x10
        ret
    c14:
        mov dword ptr [mem_00AB98EC], 0x94
        pop esi
        add esp, 0x10
        ret
    c15:
        mov dword ptr [mem_00AB98EC], 0x98
        pop esi
        add esp, 0x10
        ret
    c16:
        mov dword ptr [mem_00AB98EC], 0x99
        pop esi
        add esp, 0x10
        ret
    c17:
        mov dword ptr [mem_00AB98EC], 0x9b
        pop esi
        add esp, 0x10
        ret
    c18:
        mov dword ptr [mem_00AB98EC], 0x9c
    epi:
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x0086C840] sub_0086C840 (548 bytes)
extern "C" void ext_0086C210();
extern "C" void ext_0086EE60();
extern "C" void ext_0086F050();
extern "C" void ext_0086F0A0();
extern "C" void ext_0086F120();
extern "C" void ext_0086F1A0();
extern "C" void ext_0086F240();
extern "C" void ext_0086F8A0();
extern "C" void ext_0086FC60();

extern "C" __declspec(naked) void __cdecl fn_0086C840(void) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        sub esp, 0x4b0
        lea eax, [esp + 0x320]
        push esi
        mov edx, dword ptr [esp + 0x4b8]
        push edi
        push eax
        push ecx
        push edx
        call ext_0086C210
        lea ecx, [esp + 0x64]
        add esp, 0xc
        push ecx
        call ext_0086F8A0
        lea ecx, [esp + 0x1ec]
        lea edx, [esp + 0x5c]
        add esp, 0x4
        push ecx
        push edx
        call ext_0086F050
        mov edi, dword ptr [esp + 0x4cc]
        lea eax, [esp + 0x1a0]
        add esp, 0x8
        lea esi, [edi + 0x52]
        push eax
        push esi
        call ext_0086F050
        lea eax, [esp + 0x240]
        lea ecx, [esp + 0x470]
        lea edx, [esp + 0x1a0]
        add esp, 0x8
        push eax
        push ecx
        lea eax, [esp + 0x1f0]
        push edx
        push eax
        call ext_0086F240
        lea ecx, [esp + 0x7c]
        lea edx, [esp + 0x248]
        add esp, 0x10
        push ecx
        push edx
        call ext_0086F0A0
        lea ecx, [esp + 0x88]
        lea eax, [esp + 0x74]
        add esp, 0x8
        push edi
        push ecx
        add edi, 0x2a
        push edi
        push eax
        call ext_0086EE60
        lea eax, [esp + 0xb8]
        add esp, 0x10
        push eax
        push esi
        call ext_0086F050
        lea eax, [esp + 0x290]
        add esp, 0x8
        push eax
        lea ecx, [esp + 0x84]
        push ecx
        call ext_0086F050
        lea ecx, [esp + 0x100]
        lea edx, [esp + 0x150]
        lea eax, [esp + 0xb0]
        add esp, 0x8
        push ecx
        push edx
        lea ecx, [esp + 0x290]
        push eax
        push ecx
        call ext_0086F240
        mov esi, dword ptr [esp + 0x4dc]
        lea ecx, [esp + 0x108]
        add esp, 0x10
        push esi
        push ecx
        call ext_0086F0A0
        lea eax, [esp + 0x2e0]
        mov ecx, dword ptr [esp + 0x4d0]
        add esp, 0x8
        push eax
        push ecx
        call ext_0086F050
        lea ecx, [esp + 0x10]
        lea edx, [esp + 0x100]
        lea eax, [esp + 0x2e0]
        add esp, 0x8
        push ecx
        push edx
        push eax
        call ext_0086F1A0
        lea ecx, [esp + 0x14]
        lea edx, [esp + 0x334]
        add esp, 0xc
        push ecx
        push edx
        lea ecx, [esp + 0x10]
        push ecx
        call ext_0086F120
        lea ecx, [esp + 0x384]
        lea edx, [esp + 0x154]
        lea eax, [esp + 0xb4]
        add esp, 0xc
        push ecx
        push edx
        lea ecx, [esp + 0x10]
        push eax
        push ecx
        call ext_0086F240
        lea ecx, [esp + 0x18]
        lea edx, [esp + 0x7c]
        add esp, 0x10
        push ecx
        push edx
        call ext_0086F050
        lea ecx, [esp + 0x3d0]
        lea edx, [esp + 0xb0]
        add esp, 0x8
        push ecx
        push edx
        lea eax, [esp + 0x10]
        push eax
        call ext_0086FC60
        lea ecx, [esp + 0x14]
        lea edx, [esp + 0x384]
        lea eax, [esp + 0x3d4]
        add esp, 0xc
        push ecx
        push edx
        push eax
        call ext_0086F1A0
        lea ecx, [esp + 0x424]
        lea edx, [esp + 0x154]
        lea eax, [esp + 0xb4]
        add esp, 0xc
        push ecx
        push edx
        lea ecx, [esp + 0x10]
        push eax
        push ecx
        add esi, 0x14
        call ext_0086F240
        lea ecx, [esp + 0x428]
        add esp, 0x10
        push esi
        push ecx
        call ext_0086F0A0
        add esp, 0x8
        pop edi
        pop esi
        add esp, 0x4b0
        ret
    }
}

// [0x0086AB00] sub_0086AB00 (559 bytes)
extern "C" void ext_0086A2B0();
extern "C" void ext_00869FE0();
extern "C" __declspec(naked) void __cdecl fn_0086AB00(void* a, void* b, int n) {
    __asm {
        sub esp, 0x928
        lea eax, [esp + 0x4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x944]
        test esi, esi
        push edi
        mov ecx, esi
        je ab_z1
    ab_l1:
        mov dword ptr [eax], 0x0
        add eax, 0x4
        dec ecx
        jne ab_l1
    ab_z1:
        mov edi, 0x1
        mov ecx, esi
        test esi, esi
        mov dword ptr [esp + 0x14], edi
        lea eax, [esp + 0x21c]
        je ab_z2
    ab_l2:
        mov dword ptr [eax], 0x0
        add eax, 0x4
        dec ecx
        jne ab_l2
    ab_z2:
        mov eax, dword ptr [esp + 0x940]
        mov ecx, esi
        test esi, esi
        je ab_z3
        lea edx, [esp + 0x320]
        sub edx, eax
    ab_l3:
        mov ebx, dword ptr [eax]
        mov dword ptr [edx + eax], ebx
        add eax, 0x4
        dec ecx
        jne ab_l3
    ab_z3:
        mov eax, dword ptr [esp + 0x944]
        mov ecx, esi
        test esi, esi
        je ab_z4
        lea edx, [esp + 0x118]
        sub edx, eax
    ab_l4:
        mov ebx, dword ptr [eax]
        mov dword ptr [edx + eax], ebx
        add eax, 0x4
        dec ecx
        jne ab_l4
    ab_z4:
        mov dword ptr [esp + 0x10], edi
        test esi, esi
        mov ecx, esi
        je ab_post
    ab_outer:
        mov edx, dword ptr [esp + 0x118]
        lea eax, [esp + 0x11c]
        test edx, edx
        jne ab_call
    ab_scan:
        dec ecx
        je ab_post
        mov edx, dword ptr [eax]
        add eax, 0x4
        test edx, edx
        je ab_scan
    ab_call:
        lea eax, [esp + 0x118]
        push esi
        push eax
        lea ecx, [esp + 0x328]
        push esi
        lea edx, [esp + 0x534]
        push ecx
        lea eax, [esp + 0x63c]
        push edx
        push eax
        call ext_0086A2B0
        lea ecx, [esp + 0x234]
        push esi
        lea edx, [esp + 0x648]
        push ecx
        lea eax, [esp + 0x750]
        push edx
        push eax
        call ext_00869FE0
        add esp, 0x28
        mov ebp, esi
        lea edx, [esp + 0x730]
        lea ebx, [esp + 0x14]
        lea edi, [esp + 0x424]
        xor ecx, ecx
    ab_add:
        mov eax, dword ptr [ebx]
        add ebx, 0x4
        add eax, ecx
        cmp eax, ecx
        jae ab_carry
        mov eax, dword ptr [edx]
        jmp ab_store
    ab_carry:
        mov ecx, dword ptr [edx]
        add eax, ecx
        cmp eax, ecx
        sbb ecx, ecx
        neg ecx
    ab_store:
        mov dword ptr [edi], eax
        add edx, 0x4
        add edi, 0x4
        dec ebp
        jne ab_add
        mov ecx, esi
        xor eax, eax
    ab_c1:
        mov edx, dword ptr [esp + eax + 0x21c]
        mov dword ptr [esp + eax + 0x14], edx
        add eax, 0x4
        dec ecx
        jne ab_c1
        mov ecx, esi
        xor eax, eax
    ab_c2:
        mov edx, dword ptr [esp + eax + 0x424]
        mov dword ptr [esp + eax + 0x21c], edx
        add eax, 0x4
        dec ecx
        jne ab_c2
        mov ecx, esi
        xor eax, eax
    ab_c3:
        mov edx, dword ptr [esp + eax + 0x118]
        mov dword ptr [esp + eax + 0x320], edx
        add eax, 0x4
        dec ecx
        jne ab_c3
        mov ecx, esi
        xor eax, eax
    ab_c4:
        mov edx, dword ptr [esp + eax + 0x528]
        mov dword ptr [esp + eax + 0x118], edx
        add eax, 0x4
        dec ecx
        jne ab_c4
        mov eax, dword ptr [esp + 0x10]
        neg eax
        mov dword ptr [esp + 0x10], eax
        jmp ab_outer
    ab_post:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        jge ab_pos
        mov edi, dword ptr [esp + 0x944]
        mov ebx, dword ptr [esp + 0x93c]
        xor ecx, ecx
        lea edx, [esp + 0x14]
        test esi, esi
        je ab_done2
    ab_diff:
        mov eax, dword ptr [edi]
        add edi, 0x4
        sub eax, ecx
        cmp eax, -0x1
        jne ab_nm1
        mov ebp, dword ptr [edx]
        or eax, eax
        sub eax, ebp
        jmp ab_dstore
    ab_nm1:
        mov ecx, dword ptr [edx]
        or ebp, -0x1
        sub eax, ecx
        sub ebp, ecx
        cmp ebp, eax
        sbb ecx, ecx
        neg ecx
    ab_dstore:
        mov dword ptr [ebx], eax
        add edx, 0x4
        add ebx, 0x4
        dec esi
        jne ab_diff
    ab_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x928
        ret
    ab_pos:
        test esi, esi
        mov ecx, esi
        lea eax, [esp + 0x14]
        je ab_done2
        mov edx, dword ptr [esp + 0x93c]
        lea esi, [esp + 0x14]
        sub edx, esi
    ab_cp:
        mov esi, dword ptr [eax]
        mov dword ptr [edx + eax], esi
        add eax, 0x4
        dec ecx
        jne ab_cp
    ab_done2:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x928
        ret
    }
}

// [0x0086D250] sub_0086D250 (560 bytes)
extern "C" int mem_00AB8E00;
extern "C" int mem_00AC4AA0;
extern "C" __declspec(naked) unsigned long __cdecl fn_0086D250(const char* nptr, char** endptr, int base) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x8]
        push ebx
        push ebp
        push esi
        movsx eax, byte ptr [ecx]
        mov edx, 0x8
        xor esi, esi
        xor ebx, ebx
        xor ebp, ebp
        test byte ptr [eax*2 + mem_00AB8E00], dl
        push edi
        je skip_ws
    ws_loop:
        movsx eax, byte ptr [ecx + 0x1]
        inc ecx
        test byte ptr [eax*2 + mem_00AB8E00], dl
        jne ws_loop
    skip_ws:
        mov al, byte ptr [ecx]
        cmp al, 0x2d
        jne not_minus
        mov dword ptr [esp + 0x10], 0x1
        jmp sign_inc
    not_minus:
        cmp al, 0x2b
        mov dword ptr [esp + 0x10], 0x0
        jne sign_done
    sign_inc:
        inc ecx
    sign_done:
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        jne base_nonzero
        cmp byte ptr [ecx], 0x30
        jne dec_loop
        mov al, byte ptr [ecx + 0x1]
        inc ecx
        cmp al, 0x78
        je hex_prefix
        cmp al, 0x58
        je hex_prefix
        cmp al, 0x62
        je bin_prefix
        cmp al, 0x42
        je bin_prefix
        mov ebx, 0x1
        jmp oct_loop
    bin_prefix:
        inc ecx
        mov edi, 0x2
        jmp gen_loop
    hex_prefix:
        inc ecx
    hex_loop:
        movsx eax, byte ptr [ecx]
        sub eax, 0x30
        cmp eax, 0x4a
        ja bad_char
    hex_lookup:
        movsx eax, byte ptr [eax + mem_00AC4AA0]
        cmp eax, 0xf
        ja bad_char_chk
        cmp esi, 0x0fffffff
        jbe hex_c1
        mov ebp, 0x1
    hex_c1:
        shl esi, 0x4
        or edx, -0x1
        sub edx, esi
        cmp eax, edx
        jbe hex_c2
        mov ebp, 0x1
    hex_c2:
        add esi, eax
        inc ecx
        mov ebx, 0x1
        movsx eax, byte ptr [ecx]
        sub eax, 0x30
        cmp eax, 0x4a
        jbe hex_lookup
        jmp end_scan
    base_nonzero:
        cmp edi, 0x10
        jne not_base16
        cmp byte ptr [ecx], 0x30
        jne hex_loop
        mov al, byte ptr [ecx + 0x1]
        cmp al, 0x78
        je hex_skip2
        cmp al, 0x58
        jne hex_loop
    hex_skip2:
        add ecx, 0x2
        jmp hex_loop
    not_base16:
        cmp edi, 0x2
        jne not_base2
        cmp byte ptr [ecx], 0x30
        jne gen_loop
        mov al, byte ptr [ecx + 0x1]
        cmp al, 0x62
        je bin_skip2
        cmp al, 0x42
        jne gen_loop
    bin_skip2:
        add ecx, 0x2
        jmp gen_loop
    not_base2:
        cmp edi, edx
        jne not_base8
    oct_loop:
        movsx eax, byte ptr [ecx]
        sub eax, 0x30
        cmp eax, 0x7
        ja bad_char_chk
    oct_mid:
        cmp esi, 0x1fffffff
        jbe oct_c1
        mov ebp, 0x1
    oct_c1:
        shl esi, 0x3
        or edx, -0x1
        sub edx, esi
        cmp eax, edx
        jbe oct_c2
        mov ebp, 0x1
    oct_c2:
        add esi, eax
        inc ecx
        movsx eax, byte ptr [ecx]
        sub eax, 0x30
        cmp eax, 0x7
        jbe oct_mid
        jmp end_scan
    not_base8:
        cmp edi, 0xa
        jne not_base10
    dec_loop:
        movsx eax, byte ptr [ecx]
        sub eax, 0x30
        cmp eax, 0x9
        ja bad_char
    dec_mid:
        cmp esi, 0x19999999
        jbe dec_c1
        mov ebp, 0x1
    dec_c1:
        lea esi, [esi + 4*esi]
        or edx, -0x1
        shl esi, 1
        sub edx, esi
        cmp eax, edx
        jbe dec_c2
        mov ebp, 0x1
    dec_c2:
        add esi, eax
        inc ecx
        movsx eax, byte ptr [ecx]
        sub eax, 0x30
        cmp eax, 0x9
        jbe dec_mid
        jmp end_scan
    not_base10:
        cmp edi, 0x2
        jl bad_char
        cmp edi, 0x24
        jg bad_char
    gen_loop:
        or eax, -0x1
        xor edx, edx
        div edi
        movsx edx, byte ptr [ecx]
        sub edx, 0x30
        cmp edx, 0x4a
        ja bad_char
    gen_lookup:
        movsx edx, byte ptr [edx + mem_00AC4AA0]
        cmp edx, edi
        jae bad_char_chk
        cmp esi, eax
        jbe gen_c1
        mov ebp, 0x1
    gen_c1:
        imul esi, edi
        or ebx, -0x1
        sub ebx, esi
        cmp edx, ebx
        jbe gen_c2
        mov ebp, 0x1
    gen_c2:
        add esi, edx
        inc ecx
        mov ebx, 0x1
        movsx edx, byte ptr [ecx]
        sub edx, 0x30
        cmp edx, 0x4a
        jbe gen_lookup
        jmp end_scan
    bad_char_chk:
        test ebx, ebx
        jne end_scan
    bad_char:
        mov ecx, dword ptr [esp + 0x18]
    end_scan:
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        je no_endptr
        mov dword ptr [eax], ecx
    no_endptr:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je no_neg
        neg esi
    no_neg:
        test ebp, ebp
        je ret_value
        pop edi
        pop esi
        pop ebp
        or eax, -0x1
        pop ebx
        pop ecx
        ret
    ret_value:
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x00863380] sub_00863380 (566 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_0085D560();
extern "C" void ext_00860670();
extern "C" void ext_008635C0();
extern "C" void ext_00868510();
extern "C" int mem_00BC6660;
extern "C" int mem_00BC70F8;
extern "C" int mem_00BC666C;
extern "C" int mem_00AB9610;
extern "C" int mem_00924210;
extern "C" int mem_00924248;
extern "C" int mem_00BC6720;
extern "C" int mem_00BC70D8;
extern "C" int mem_00BC70BC;
extern "C" int mem_00BC70F4;
extern "C" int mem_00BC6578;

extern "C" __declspec(naked) void __fastcall fn_00863380(void* self) {
    __asm {
        sub esp, 0x128
        mov dword ptr [esp + 0x4], 0x10
        push ebx
        push esi
        push edi
        push ebp
        call ext_00860670
        test eax, eax
        jne L_ok1
        mov eax, 0xfffffef2
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x128
        ret
    L_ok1:
        push 0x4
        push 0x0
        push offset mem_00BC6660 + 2
        call ext_0085D510
        add esp, 0xc
        push 0x6
        push 0xff
        push offset mem_00BC6660 + 6
        call ext_0085D510
        add esp, 0xc
        mov word ptr [mem_00BC6660], 0x6
        push 0x452
        call dword ptr [mem_00BC70F8]
        mov word ptr [mem_00BC666C], ax
        push 0x604
        call ext_0085D560
        add esp, 0x4
        mov esi, eax
        test esi, esi
        jne L_ok2
        mov eax, 0x1
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x128
        ret
    L_ok2:
        mov dword ptr [mem_00AB9610], 0x4
        push 0x4
        call ext_0085D560
        mov dword ptr [esp + 0x14], eax
        add esp, 0x4
        test eax, eax
        jne L_ok3
        push esi
        call dword ptr [mem_00924210]
        mov eax, 0x1
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x128
        ret
    L_ok3:
        push 0x1
        call dword ptr [mem_00BC70F8]
        mov ecx, dword ptr [esp + 0x10]
        push 0x142
        mov word ptr [ecx], ax
        call dword ptr [mem_00BC70F8]
        mov ecx, dword ptr [esp + 0x10]
        mov word ptr [ecx + 0x2], ax
        call ext_00868510
        mov dword ptr [esp + 0x18], 0x3
    L_retry:
        push 0x0
        call dword ptr [mem_00924248]
        mov ecx, dword ptr [esp + 0x10]
        push 0x10
        push offset mem_00BC6660
        mov eax, dword ptr [mem_00BC6720]
        push 0x0
        push 0x4
        push ecx
        push eax
        call dword ptr [mem_00BC70D8]
    L_loop:
        mov dword ptr [esp + 0x34], 0x0
        mov dword ptr [esp + 0x1c], 0x0
        mov dword ptr [esp + 0x20], 0x61a80
        mov eax, dword ptr [mem_00BC6720]
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x38], eax
        lea eax, [esp + 0x1c]
        inc dword ptr [esp + 0x34]
        push eax
        push 0x0
        mov eax, dword ptr [mem_00BC6720]
        push 0x0
        inc eax
        push ecx
        mov ebx, 0x1
        push eax
        call dword ptr [mem_00BC70BC]
        test eax, eax
        jg L_g1
        xor ebx, ebx
    L_g1:
        test ebx, ebx
        je L_fail
        lea eax, [esp + 0x14]
        mov ecx, dword ptr [mem_00BC6720]
        push eax
        push offset mem_00BC6578
        push 0x0
        push 0x5fa
        push esi
        push ecx
        call dword ptr [mem_00BC70F4]
        test eax, eax
        jle L_g2
        mov ebx, 0x1
        cmp eax, 0x5fa
        jl L_g3
    L_g2:
        xor ebx, ebx
    L_g3:
        test ebx, ebx
        je L_fail
        lea edi, [eax - 0x2]
        sar edi, 0x6
        test edi, edi
        je L_after
        mov eax, edi
        shl eax, 0x6
        lea ebp, [eax + esi + 0x33]
    L_inner:
        mov byte ptr [ebp - 0x40], 0x0
        sub ebp, 0x40
        dec edi
        cmp byte ptr [ebp - 0x2f], 0x4e
        jne L_skip
        lea eax, [esp + 0x24]
        push 0xd
        push 0x0
        push eax
        call ext_0085D510
        lea ecx, [esp + 0x31]
        lea eax, [ebp + 0x1]
        mov byte ptr [esp + 0x30], 0x1
        add esp, 0xc
        push 0xc
        push eax
        push ecx
        call ext_0085D530
        lea ecx, [esp + 0x30]
        add esp, 0xc
        push ecx
        call ext_008635C0
        add esp, 0x4
    L_skip:
        test edi, edi
        jne L_inner
    L_after:
        test ebx, ebx
        jne L_loop
    L_fail:
        dec dword ptr [esp + 0x18]
        jne L_retry
        cmp dword ptr [esp + 0x10], 0x0
        je L_nolocal
        mov ecx, dword ptr [esp + 0x10]
        mov edi, dword ptr [mem_00924210]
        push ecx
        call edi
        jmp L_esi
    L_nolocal:
        mov edi, dword ptr [mem_00924210]
    L_esi:
        test esi, esi
        je L_end
        push esi
        call edi
    L_end:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x128
        ret
    }
}

// [0x0086E430] sub_0086E430 (574 bytes)
extern "C" void ext_00869EC0();
extern "C" void ext_00869F30();
extern "C" void ext_00869F50();
extern "C" void ext_00869F90();
extern "C" void ext_0086A1E0();
extern "C" void ext_0086A2B0();
extern "C" void ext_0086A8A0();
extern "C" void ext_0086AF30();
extern "C" void ext_0086AF80();
extern "C" void ext_00870040();
extern "C" __declspec(naked) void __cdecl fn_0086E430(void) {
    __asm {
        sub esp, 0x618
        mov eax, dword ptr [esp + 0x624]
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x62c]
        lea ecx, [esp + 0x110]
        lea esi, [edi + 0x1f]
        shr esi, 5
        dec eax
        push esi
        push eax
        push ecx
        call ext_00869F50
        lea edx, [esp + 0x11c]
        push esi
        lea eax, [esp + 0x224]
        push edx
        push eax
        call ext_0086AF30
        lea ecx, [esp + 0x24]
        push esi
        push ecx
        call ext_00869F30
        lea edx, [esp + 0x2c]
        push esi
        lea eax, [esp + 0x134]
        push edx
        lea ecx, [esp + 0x34]
        push eax
        push ecx
        mov dword ptr [esp + 0x3c], 1
        call ext_00869F90
        lea edx, [esp + 0x3c]
        push esi
        lea eax, [esp + 0x248]
        push edx
        lea ecx, [esp + 0x24c]
        push eax
        push ecx
        call ext_0086AF80
        add esp, 0x40
        lea edx, [esp + 0xc]
        push esi
        push edx
        call ext_00869F30
        mov ebx, dword ptr [esp + 0x63c]
        lea eax, [esp + 0x14]
        push ebx
        push esi
        lea ecx, [esp + 0x224]
        push eax
        lea edx, [esp + 0x124]
        push ecx
        lea eax, [esp + 0x538]
        push edx
        push eax
        mov dword ptr [esp + 0x2c], 2
        call ext_00870040
        add esp, 0x20
        test eax, eax
        jne epilogue_e430
        lea ecx, [edi - 1]
        push esi
        lea edx, [esp + 0x114]
        push ecx
        push edx
        call ext_00869F50
        lea eax, [esp + 0x11c]
        push esi
        lea ecx, [esp + 0x224]
        push eax
        push ecx
        call ext_0086AF30
        lea edx, [esp + 0x24]
        push esi
        push edx
        call ext_00869F30
        lea eax, [esp + 0x2c]
        push esi
        lea ecx, [esp + 0x134]
        push eax
        lea edx, [esp + 0x34]
        push ecx
        push edx
        mov dword ptr [esp + 0x3c], 1
        call ext_00869F90
        lea eax, [esp + 0x3c]
        push esi
        lea ecx, [esp + 0x248]
        push eax
        lea edx, [esp + 0x24c]
        push ecx
        push edx
        call ext_0086AF80
        add esp, 0x40
        lea eax, [esp + 0x520]
        lea ecx, [esp + 0xc]
        push esi
        push 1
        push eax
        push ecx
        call ext_0086A1E0
        push ebx
        lea edx, [esp + 0x20]
        push esi
        lea eax, [esp + 0x22c]
        push edx
        lea ecx, [esp + 0x12c]
        push eax
        lea edx, [esp + 0x43c]
        push ecx
        push edx
        call ext_00870040
        add esp, 0x28
        test eax, eax
        jne epilogue_e430
        lea eax, [esp + 0x318]
        push esi
        push eax
        call ext_00869F30
        lea ecx, [esp + 0x528]
        push esi
        push ecx
        lea edx, [esp + 0x42c]
        push esi
        lea eax, [esp + 0x228]
        push edx
        lea ecx, [esp + 0x128]
        push eax
        push ecx
        mov dword ptr [esp + 0x338], 2
        call ext_0086A2B0
        lea edx, [esp + 0x43c]
        push esi
        push edx
        lea eax, [esp + 0x138]
        push esi
        lea ecx, [esp + 0x344]
        push eax
        lea edx, [esp + 0x348]
        push ecx
        push edx
        call ext_0086A8A0
        lea eax, [edi + 7]
        mov edi, dword ptr [esp + 0x660]
        lea ecx, [esp + 0x454]
        push esi
        mov edx, dword ptr [edi]
        push ecx
        shr eax, 3
        push eax
        push edx
        mov dword ptr [edi + 4], eax
        mov dword ptr [edi + 0xc], eax
        call ext_00869EC0
        mov ecx, dword ptr [edi + 0xc]
        mov edx, dword ptr [edi + 0x8]
        add esp, 0x48
        lea eax, [esp + 0x318]
        push esi
        push eax
        push ecx
        push edx
        call ext_00869EC0
        add esp, 0x10
        xor eax, eax
    epilogue_e430:
        pop edi
        pop esi
        pop ebx
        add esp, 0x618
        ret
    }
}

// [0x00860A00] sub_00860A00 (580 bytes)
extern "C" void ext_00860670();
extern "C" void ext_00860950();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" void ext_0085F750();
extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" int mem_00AB9864;
extern "C" int mem_00BC6389;

extern "C" __declspec(naked) int __cdecl fn_00860A00(void) {
    __asm {
        sub esp, 0x10
        mov dword ptr [mem_00AB98EC], 0
        push esi
        call ext_00860670
        test eax, eax
        jne t_main
        mov eax, 0xfffffef2
        pop esi
        add esp, 0x10
        ret
    t_main:
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        push 0x30
        call ext_00860950
        add esp, 0x14
        push 1
        push 0xab98b8
        call ext_0085F7E0
        add esp, 8
        test eax, eax
        jne t_epi
        xor esi, esi
    t_loop:
        lea eax, [esp + 4]
        push 1
        push eax
        push 0xab98b8
        call ext_0085FF80
        add esp, 0xc
        test eax, eax
        je t_m1
        cmp eax, 0x3e
        je t_match
        cmp eax, 0x46
        jne t_skip
    t_match:
        lea eax, [esp + 4]
        push 0xab98b8
        push eax
        call ext_0085F750
        add esp, 8
        test eax, eax
        je t_skip
        mov esi, 1
    t_skip:
        test esi, esi
        je t_loop
        test esi, esi
        jne t_after
        mov eax, 0xffffffff
        pop esi
        mov dword ptr [mem_00AB98EC], 0xf
        add esp, 0x10
        ret
    t_m1:
        mov eax, 0xffffffff
        pop esi
        add esp, 0x10
        ret
    t_after:
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je t_call740
        push 0xac056c
        push 0x3e
        push 0xbc6388
        call ext_0085E720
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je t_call740
        push 0xbc6388
        call ext_0085F700
        add esp, 4
    t_call740:
        push 0xbc6388
        call ext_0085F740
        add esp, 4
        xor eax, eax
        mov al, byte ptr [mem_00BC6389]
        mov dword ptr [mem_00AB98EC], 0
        lea ecx, [eax - 1]
        cmp ecx, 0x1b
        ja t_epi
        xor edx, edx
        mov dl, byte ptr [ecx + 0x860c94]
        jmp dword ptr [4*edx + 0x860c44]
        mov dword ptr [mem_00AB98EC], 0x81
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x82
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x83
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x84
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x85
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x86
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x87
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x88
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x89
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x8a
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x0a
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x8c
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x8d
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x8e
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x94
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x98
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x99
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x9b
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x9c
    t_epi:
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x0086CA70] sub_0086CA70 (592 bytes)
extern "C" void ext_0086C210();
extern "C" void ext_0086EAF0();
extern "C" void ext_0086EE60();
extern "C" void ext_0086F000();
extern "C" void ext_0086F050();
extern "C" void ext_0086F0A0();
extern "C" void ext_0086F120();
extern "C" void ext_0086F160();
extern "C" void ext_0086F1A0();
extern "C" void ext_0086F240();
extern "C" void ext_0086FC60();

extern "C" __declspec(naked) void __fastcall fn_0086CA70(void* self) {
    __asm {
        sub esp, 0x370
        lea eax, [esp + 0x78]
        push esi
        mov esi, dword ptr [esp + 0x380]
        push edi
        push eax
        lea ecx, [esi + 0x52]
        push ecx
        call ext_0086F050
        lea eax, [esp + 0x10]
        mov edi, dword ptr [esp + 0x394]
        add esp, 0x8
        lea ecx, [edi + 0x14]
        push eax
        push ecx
        call ext_0086F050
        lea eax, [esp + 0x150]
        lea ecx, [esp + 0x88]
        lea edx, [esp + 0x10]
        add esp, 0x8
        push eax
        push ecx
        push edx
        call ext_0086FC60
        lea ecx, [esp + 0x244]
        mov edx, dword ptr [esp + 0x38c]
        mov eax, dword ptr [esp + 0x388]
        add esp, 0xc
        push ecx
        push edx
        push eax
        call ext_0086C210
        lea ecx, [esp + 0x14]
        lea edx, [esp + 0x154]
        lea eax, [esp + 0x244]
        add esp, 0xc
        push ecx
        push edx
        push eax
        call ext_0086F1A0
        lea ecx, [esp + 0x294]
        lea edx, [esp + 0x1a4]
        lea eax, [esp + 0x8c]
        add esp, 0xc
        push ecx
        push edx
        lea ecx, [esp + 0x10]
        push eax
        push ecx
        call ext_0086F240
        lea ecx, [esp + 0x68]
        lea edx, [esp + 0x298]
        add esp, 0x10
        push ecx
        push edx
        call ext_0086F0A0
        lea ecx, [esp + 0x1f0]
        add esp, 0x8
        push ecx
        push edi
        call ext_0086F050
        lea ecx, [esp + 0x10]
        lea edx, [esp + 0x1f0]
        lea eax, [esp + 0x150]
        add esp, 0x8
        push ecx
        push edx
        push eax
        call ext_0086F1A0
        lea ecx, [esp + 0x2e4]
        lea edx, [esp + 0x1a4]
        lea eax, [esp + 0x8c]
        add esp, 0xc
        push ecx
        push edx
        lea ecx, [esp + 0x10]
        push eax
        push ecx
        call ext_0086F240
        lea ecx, [esp + 0x7c]
        lea edx, [esp + 0x2e8]
        add esp, 0x10
        push ecx
        push edx
        call ext_0086F0A0
        lea ecx, [esp + 0x100]
        lea eax, [esp + 0x60]
        add esp, 0x8
        lea edx, [esi + 0x2a]
        push esi
        push ecx
        push edx
        push eax
        call ext_0086EE60
        lea ecx, [esp + 0xe0]
        mov edx, dword ptr [esp + 0x398]
        lea eax, [esp + 0x7c]
        add esp, 0x10
        push esi
        push ecx
        push edx
        push eax
        call ext_0086EE60
        lea ecx, [esp + 0x130]
        lea edx, [esp + 0xe0]
        lea eax, [esp + 0x108]
        add esp, 0x10
        push esi
        push ecx
        push edx
        push eax
        call ext_0086EAF0
        lea ecx, [esp + 0x18]
        lea edx, [esp + 0x130]
        add esp, 0x10
        push ecx
        push edx
        call ext_0086F050
        lea ecx, [esp + 0x330]
        add esp, 0x8
        push ecx
        lea edx, [esp + 0x19c]
        lea eax, [esp + 0x84]
        push edx
        lea ecx, [esp + 0x10]
        push eax
        push ecx
        call ext_0086F240
        lea ecx, [esp + 0x18]
        add esp, 0x10
        push ecx
        call ext_0086F000
        lea ecx, [esp + 0xc]
        lea edx, [esp + 0x32c]
        lea eax, [esp + 0x1ec]
        add esp, 0x4
        mov esi, 0x8000
        push ecx
        push edx
        push eax
        call ext_0086F160
        add esp, 0xc
        test dword ptr [esp + 0x8], esi
        je done_loop
    loop_top:
        lea eax, [esp + 0x8]
        lea ecx, [esp + 0x80]
        push eax
        lea eax, [esp + 0xc]
        push eax
        push ecx
        call ext_0086F120
        add esp, 0xc
        test dword ptr [esp + 0x8], esi
        jne loop_top
    done_loop:
        mov ax, 0x13
        xor ecx, ecx
    scan_top:
        movsx edx, ax
        cmp dword ptr [esp + 4*edx + 0x8], ecx
        jne nonzero
        dec ax
        jns scan_top
        mov eax, 0x1
        pop edi
        pop esi
        add esp, 0x370
        ret
    nonzero:
        xor eax, eax
        pop edi
        pop esi
        add esp, 0x370
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    }
}

// [0x0086A8A0] sub_0086A8A0 (605 bytes)
extern "C" void ext_0081CEBA();
extern "C" void ext_0084D8E8();
extern "C" void ext_00869FE0();
extern "C" void ext_0086A2B0();

extern "C" __declspec(naked) void __fastcall fn_0086A8A0(void* self) {
    __asm {
        sub esp, 0xf4c
        push edi
        push 0x104
        call ext_0081CEBA
        mov edi, eax
        add esp, 0x4
        test edi, edi
        je EXIT
        push ebx
        mov ebx, dword ptr [esp + 0xf5c]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0xf74]
        mov eax, ebx
        test esi, esi
        mov ecx, esi
        je L1
        lea edx, [esp + 0x228]
        sub edx, ebx
    L2:
        mov ebp, dword ptr [eax]
        mov dword ptr [edx + eax], ebp
        add eax, 0x4
        dec ecx
        jne L2
    L1:
        push esi
        lea eax, [esp + 0x22c]
        push ebx
        lea ecx, [esp + 0x28]
        push eax
        push ecx
        call ext_00869FE0
        mov edx, dword ptr [esp + 0xf80]
        lea ebp, [esi + esi]
        push esi
        push edx
        lea eax, [esp + 0x38]
        push ebp
        lea ecx, [esp + 0x348]
        push eax
        lea edx, [esp + 0x554]
        push ecx
        push edx
        call ext_0086A2B0
        push esi
        lea eax, [esp + 0x358]
        push ebx
        lea ecx, [esp + 0x50]
        push eax
        push ecx
        call ext_00869FE0
        mov edx, dword ptr [esp + 0xfa8]
        push esi
        push edx
        lea eax, [esp + 0x60]
        push ebp
        lea ecx, [esp + 0x474]
        push eax
        lea edx, [esp + 0x57c]
        push ecx
        push edx
        call ext_0086A2B0
        add esp, 0x50
        mov ecx, esi
        test esi, esi
        mov eax, edi
        je L3
    L4:
        mov dword ptr [eax], 0x0
        add eax, 0x4
        dec ecx
        jne L4
    L3:
        mov eax, dword ptr [esp + 0xf6c]
        mov ebx, dword ptr [esp + 0xf68]
        test eax, eax
        mov dword ptr [edi], 0x1
        je L5
        dec eax
        mov edx, dword ptr [ebx + 4*eax]
        lea ecx, [ebx + 4*eax]
        test edx, edx
        jne L6
    L7:
        mov edx, eax
        dec eax
        sub ecx, 0x4
        test edx, edx
        je L6
        cmp dword ptr [ecx], 0x0
        je L7
    L6:
        inc eax
        jmp L8
    L5:
        xor eax, eax
    L8:
        lea edx, [eax - 0x1]
        mov ecx, edx
        mov dword ptr [esp + 0x1c], edx
        test ecx, ecx
        mov dword ptr [esp + 0x10], ecx
        jl L9
        lea ebx, [ebx + 4*ecx]
        mov dword ptr [esp + 0x18], ebx
    LOOP_HEAD:
        mov ebx, dword ptr [ebx]
        cmp ecx, edx
        mov eax, 0x20
        jne L10
        test ebx, 0xc0000000
        jne L10
    L11:
        shl ebx, 0x2
        sub eax, 0x2
        test ebx, 0xc0000000
        je L11
        test eax, eax
        jbe L12
    L10:
        inc eax
        shr eax, 0x1
        mov dword ptr [esp + 0x14], eax
    L13:
        push esi
        push edi
        lea eax, [esp + 0x28]
        push edi
        push eax
        call ext_00869FE0
        mov ecx, dword ptr [esp + 0xf80]
        push esi
        push ecx
        lea edx, [esp + 0x38]
        push ebp
        push edx
        lea eax, [esp + 0xd74]
        push edi
        push eax
        call ext_0086A2B0
        push esi
        push edi
        lea ecx, [esp + 0x76c]
        push edi
        push ecx
        call ext_00869FE0
        mov edx, dword ptr [esp + 0xfa8]
        push esi
        push edx
        lea eax, [esp + 0x77c]
        push ebp
        push eax
        lea ecx, [esp + 0xb94]
        push edi
        push ecx
        call ext_0086A2B0
        mov eax, ebx
        add esp, 0x50
        shr eax, 0x1e
        je L14
        mov edx, eax
        push esi
        shl edx, 0x6
        add edx, eax
        lea ecx, [esp + 0x538]
        lea eax, [esp + 4*edx + 0x128]
        push eax
        push edi
        push ecx
        call ext_00869FE0
        mov edx, dword ptr [esp + 0xf80]
        push esi
        push edx
        lea eax, [esp + 0x54c]
        push ebp
        push eax
        lea ecx, [esp + 0x964]
        push edi
        push ecx
        call ext_0086A2B0
        add esp, 0x28
    L14:
        mov eax, dword ptr [esp + 0x14]
        shl ebx, 0x2
        dec eax
        mov dword ptr [esp + 0x14], eax
        jne L13
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x1c]
    L12:
        mov ebx, dword ptr [esp + 0x18]
        dec ecx
        sub ebx, 0x4
        mov dword ptr [esp + 0x10], ecx
        test ecx, ecx
        mov dword ptr [esp + 0x18], ebx
        jge LOOP_HEAD
    L9:
        test esi, esi
        mov eax, edi
        je L16
        mov ecx, dword ptr [esp + 0xf60]
        sub ecx, edi
    L17:
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + eax], edx
        add eax, 0x4
        dec esi
        jne L17
    L16:
        push edi
        call ext_0084D8E8
        add esp, 0x4
        pop esi
        pop ebp
        pop ebx
    EXIT:
        pop edi
        add esp, 0xf4c
        ret
    }
}

// [0x00861AF0] sub_00861AF0 (646 bytes)
extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" void ext_0085F750();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" void ext_00860670();
extern "C" void ext_00860950();
extern "C" int mem_00AB98EC;
extern "C" int mem_00BC667F;
extern "C" int mem_00BC6683;
extern "C" int mem_00AB9864;
extern "C" int mem_00BC6398;
extern "C" int mem_00BC6389;
extern "C" char mem_00AB98B8;
extern "C" int mem_00BC6388;
extern "C" int mem_00AC0598;

extern "C" __declspec(naked) int __cdecl fn_00861AF0(void) {
    __asm {
        sub esp, 0x10
        mov dword ptr [mem_00AB98EC], 0
        push esi
        push edi
        mov esi, dword ptr [esp + 0x30]
        mov word ptr [esi], 0
        call ext_00860670
        test eax, eax
        jne L_ok1
        mov eax, 0xfffffef2
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_ok1:
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push eax
        push 0
        push ecx
        push edx
        push 0xef
        call ext_00860950
        mov cx, word ptr [esp + 0x3c]
        add esp, 0x14
        mov word ptr [mem_00BC667F], cx
        push 1
        movzx dx, byte ptr [esp + 0x30]
        mov word ptr [mem_00BC6683], dx
        push offset mem_00AB98B8
        call ext_0085F7E0
        add esp, 0x8
        test eax, eax
        jne L_fail
        xor edi, edi
    L_loop:
        lea eax, [esp + 0x8]
        push 1
        push eax
        push offset mem_00AB98B8
        call ext_0085FF80
        add esp, 0xc
        test eax, eax
        je L_ret_m1
        cmp eax, 0x3e
        je L_case3e
        cmp eax, 0x46
        jne L_skip3e
    L_case3e:
        lea eax, [esp + 0x8]
        push offset mem_00AB98B8
        push eax
        call ext_0085F750
        add esp, 0x8
        test eax, eax
        je L_skip3e
        mov edi, 1
    L_skip3e:
        test edi, edi
        je L_loop
        test edi, edi
        jne L_after
        mov eax, 0xffffffff
        pop edi
        mov dword ptr [mem_00AB98EC], 0xf
        pop esi
        add esp, 0x10
        ret
    L_ret_m1:
        mov eax, 0xffffffff
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_after:
        cmp dword ptr [mem_00AB9864], 0
        je L_skipA
        push offset mem_00AC0598
        push 0x3e
        push offset mem_00BC6388
        call ext_0085E720
        add esp, 0xc
        cmp dword ptr [mem_00AB9864], 0
        je L_skipA
        push offset mem_00BC6388
        call ext_0085F700
        add esp, 0x4
    L_skipA:
        mov ax, word ptr [mem_00BC6398]
        push offset mem_00BC6388
        mov word ptr [esi], ax
        call ext_0085F740
        add esp, 0x4
        xor eax, eax
        mov al, byte ptr [mem_00BC6389]
        mov dword ptr [mem_00AB98EC], 0
        lea ecx, [eax - 0x1]
        cmp ecx, 0x1b
        ja L_fail
        xor edx, edx
        mov dl, byte ptr [ecx + 0x861dc8]
        _emit 0xff
        _emit 0x24
        _emit 0x95
        _emit 0x78
        _emit 0x1d
        _emit 0x86
        _emit 0x00
        mov dword ptr [mem_00AB98EC], 0x81
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x82
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x83
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x84
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x85
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x86
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x87
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x88
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x89
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x8a
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x0a
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x8c
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x8d
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x8e
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x94
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x98
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x99
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x9b
        pop edi
        pop esi
        add esp, 0x10
        ret
        mov dword ptr [mem_00AB98EC], 0x9c
    L_fail:
        pop edi
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x00864F50] sub_00864F50 (629 bytes)
extern "C" int mem_00AB9864;
extern "C" int mem_00BC6389;
extern "C" int mem_00BC638A;
extern "C" void ext_00860670();
extern "C" void ext_00860950();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" void ext_0085F750();
extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();

extern "C" __declspec(naked) int __cdecl fn_00864F50(void) {
    __asm {
        sub esp, 0x10
        push esi
        push edi
        mov esi, dword ptr [esp + 0x2c]
        mov dword ptr [esi], 0x0
        mov dword ptr [mem_00AB98EC], 0x0
        call ext_00860670
        test eax, eax
        jne L_main
        mov eax, 0xfffffef2
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_main:
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x20]
        push ecx
        push edx
        push eax
        push 0x2e
        call ext_00860950
        add esp, 0x14
        push 0x1
        push 0xab98b8
        call ext_0085F7E0
        add esp, 0x8
        test eax, eax
        jne L_handler_default
        xor edi, edi
    L_loop:
        lea eax, [esp + 0x8]
        push 0x1
        push eax
        push 0xab98b8
        call ext_0085FF80
        add esp, 0xc
        test eax, eax
        je L_neg1
        cmp eax, 0x3e
        je L_chk
        cmp eax, 0x46
        jne L_looptest
    L_chk:
        lea eax, [esp + 0x8]
        push 0xab98b8
        push eax
        call ext_0085F750
        add esp, 0x8
        test eax, eax
        je L_looptest
        mov edi, 0x1
    L_looptest:
        test edi, edi
        je L_loop
        test edi, edi
        jne L_after
        mov eax, 0xffffffff
        pop edi
        mov dword ptr [mem_00AB98EC], 0xf
        pop esi
        add esp, 0x10
        ret
    L_neg1:
        mov eax, 0xffffffff
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_after:
        cmp dword ptr [mem_00AB9864], 0x0
        je L_skip1
        push 0xac05c0
        push 0x3e
        push 0xbc6388
        call ext_0085E720
        add esp, 0xc
        cmp dword ptr [mem_00AB9864], 0x0
        je L_skip1
        push 0xbc6388
        call ext_0085F700
        add esp, 0x4
    L_skip1:
        cmp byte ptr [mem_00BC6389], 0x0
        jne L_skip2
        mov eax, dword ptr [mem_00BC638A]
        mov dword ptr [esi], eax
    L_skip2:
        push 0xbc6388
        call ext_0085F740
        add esp, 0x4
        xor eax, eax
        mov al, byte ptr [mem_00BC6389]
        mov dword ptr [mem_00AB98EC], 0x0
        lea ecx, [eax - 0x1]
        cmp ecx, 0x1b
        ja L_handler_default
        xor edx, edx
        mov dl, byte ptr [ecx + 0865218h]
        jmp dword ptr [edx*4 + 08651c8h]
    L_h81:
        mov dword ptr [mem_00AB98EC], 0x81
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h82:
        mov dword ptr [mem_00AB98EC], 0x82
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h83:
        mov dword ptr [mem_00AB98EC], 0x83
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h84:
        mov dword ptr [mem_00AB98EC], 0x84
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h85:
        mov dword ptr [mem_00AB98EC], 0x85
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h86:
        mov dword ptr [mem_00AB98EC], 0x86
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h87:
        mov dword ptr [mem_00AB98EC], 0x87
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h88:
        mov dword ptr [mem_00AB98EC], 0x88
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h89:
        mov dword ptr [mem_00AB98EC], 0x89
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h8a:
        mov dword ptr [mem_00AB98EC], 0x8a
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h0a:
        mov dword ptr [mem_00AB98EC], 0xa
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h8c:
        mov dword ptr [mem_00AB98EC], 0x8c
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h8d:
        mov dword ptr [mem_00AB98EC], 0x8d
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h8e:
        mov dword ptr [mem_00AB98EC], 0x8e
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h94:
        mov dword ptr [mem_00AB98EC], 0x94
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h98:
        mov dword ptr [mem_00AB98EC], 0x98
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h99:
        mov dword ptr [mem_00AB98EC], 0x99
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h9b:
        mov dword ptr [mem_00AB98EC], 0x9b
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_h9c:
        mov dword ptr [mem_00AB98EC], 0x9c
    L_handler_default:
        pop edi
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x00863EA0] sub_00863EA0 (625 bytes)
extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" void ext_0085F750();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" void ext_00860670();
extern "C" void ext_00860950();
extern "C" int mem_00AB98A8;
extern "C" char mem_00AB98B8;
extern "C" char mem_00AB98BC;
extern "C" int mem_00AB9864;
extern "C" int mem_00BC6389;

extern "C" const unsigned char map_00863EA0[28] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d,
    0x13, 0x13, 0x13, 0x13, 0x13, 0x0e, 0x13, 0x13, 0x13, 0x0f, 0x10, 0x13, 0x11, 0x12
};
extern "C" const unsigned int tbl_00863EA0[20] = {
    0x00863FF4, 0x00864003, 0x00864012, 0x00864021, 0x00864030, 0x0086403F, 0x0086404E,
    0x0086405D, 0x0086406C, 0x0086407B, 0x0086408A, 0x00864099, 0x008640A8, 0x008640B7,
    0x008640C6, 0x008640D5, 0x008640E4, 0x008640F3, 0x00864102, 0x0086410C
};

extern "C" __declspec(naked) void __cdecl fn_00863EA0(void) {
    __asm {
        mov dword ptr [mem_00AB98EC], 0
        sub esp, 0x20
        mov word ptr [mem_00AB98A8], 0
        push esi
        call ext_00860670
        test eax, eax
        jne f_ok
        mov eax, 0xfffffef2
        pop esi
        add esp, 0x20
        ret
    f_ok:
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x2c]
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push ecx
        push edx
        push eax
        push 0x2a
        call ext_00860950
        lea edx, [esp + 0x18]
        mov eax, dword ptr [mem_00AB98B8]
        mov esi, dword ptr [mem_00AB98BC]
        add esp, 0x14
        mov ecx, offset mem_00AB98B8
        mov dword ptr [edx], eax
        push 0x1
        mov dword ptr [edx + 0x4], esi
        mov eax, dword ptr [ecx + 0x8]
        mov cl, byte ptr [ecx + 0xc]
        mov dword ptr [edx + 0x8], eax
        mov byte ptr [edx + 0xc], cl
        lea edx, [esp + 0x8]
        push edx
        call ext_0085F7E0
        add esp, 0x8
        test eax, eax
        jne f_ret
        xor esi, esi
    f_loop:
        lea eax, [esp + 0x14]
        push 0x1
        lea ecx, [esp + 0x8]
        push eax
        push ecx
        call ext_0085FF80
        add esp, 0xc
        test eax, eax
        je f_fail
        cmp eax, 0x3e
        je f_match
        cmp eax, 0x46
        jne f_chk
    f_match:
        lea eax, [esp + 0x14]
        push offset mem_00AB98B8
        push eax
        call ext_0085F750
        add esp, 0x8
        test eax, eax
        je f_chk
        mov esi, 0x1
    f_chk:
        test esi, esi
        je f_loop
        test esi, esi
        jne f_B
        mov eax, 0xffffffff
        pop esi
        mov dword ptr [mem_00AB98EC], 0xf
        add esp, 0x20
        ret
    f_fail:
        mov eax, 0xffffffff
        pop esi
        add esp, 0x20
        ret
    f_B:
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je f_C
        push 0xac05ac
        push 0x3e
        push 0xbc6388
        call ext_0085E720
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je f_C
        push 0xbc6388
        call ext_0085F700
        jmp f_D
    f_C:
        push 0xbc6388
        call ext_0085F740
    f_D:
        add esp, 0x4
        xor eax, eax
        mov al, byte ptr [mem_00BC6389]
        mov dword ptr [mem_00AB98EC], 0
        lea ecx, [eax - 0x1]
        cmp ecx, 0x1b
        ja f_ret
        xor edx, edx
        mov dl, byte ptr [ecx + map_00863EA0]
        jmp dword ptr [4*edx + tbl_00863EA0]
    f_c81:
        mov dword ptr [mem_00AB98EC], 0x81
        pop esi
        add esp, 0x20
        ret
    f_c82:
        mov dword ptr [mem_00AB98EC], 0x82
        pop esi
        add esp, 0x20
        ret
    f_c83:
        mov dword ptr [mem_00AB98EC], 0x83
        pop esi
        add esp, 0x20
        ret
    f_c84:
        mov dword ptr [mem_00AB98EC], 0x84
        pop esi
        add esp, 0x20
        ret
    f_c85:
        mov dword ptr [mem_00AB98EC], 0x85
        pop esi
        add esp, 0x20
        ret
    f_c86:
        mov dword ptr [mem_00AB98EC], 0x86
        pop esi
        add esp, 0x20
        ret
    f_c87:
        mov dword ptr [mem_00AB98EC], 0x87
        pop esi
        add esp, 0x20
        ret
    f_c88:
        mov dword ptr [mem_00AB98EC], 0x88
        pop esi
        add esp, 0x20
        ret
    f_c89:
        mov dword ptr [mem_00AB98EC], 0x89
        pop esi
        add esp, 0x20
        ret
    f_c8a:
        mov dword ptr [mem_00AB98EC], 0x8a
        pop esi
        add esp, 0x20
        ret
    f_c0a:
        mov dword ptr [mem_00AB98EC], 0xa
        pop esi
        add esp, 0x20
        ret
    f_c8c:
        mov dword ptr [mem_00AB98EC], 0x8c
        pop esi
        add esp, 0x20
        ret
    f_c8d:
        mov dword ptr [mem_00AB98EC], 0x8d
        pop esi
        add esp, 0x20
        ret
    f_c8e:
        mov dword ptr [mem_00AB98EC], 0x8e
        pop esi
        add esp, 0x20
        ret
    f_c94:
        mov dword ptr [mem_00AB98EC], 0x94
        pop esi
        add esp, 0x20
        ret
    f_c98:
        mov dword ptr [mem_00AB98EC], 0x98
        pop esi
        add esp, 0x20
        ret
    f_c99:
        mov dword ptr [mem_00AB98EC], 0x99
        pop esi
        add esp, 0x20
        ret
    f_c9b:
        mov dword ptr [mem_00AB98EC], 0x9b
        pop esi
        add esp, 0x20
        ret
    f_c9c:
        mov dword ptr [mem_00AB98EC], 0x9c
    f_ret:
        pop esi
        add esp, 0x20
        ret
    }
}

// [0x00866F20] sub_00866F20 (672 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_0085E030();
extern "C" void ext_0085E1F0();
extern "C" void ext_008671C0();
extern "C" void ext_00867230();
extern "C" int mem_00AB963C;
extern "C" int mem_00AB9618;
extern "C" int mem_00AB9638;
extern "C" int mem_00BC70E4;
extern "C" int mem_00BC63C8;
extern "C" int mem_00BC63E2;
extern "C" int mem_00BC63E4;
extern "C" int mem_00BC63E0;
extern "C" int mem_00BC6724;
extern "C" int mem_00BC70C0;
extern "C" int mem_00BC671C;
extern "C" int mem_00BC6734;
extern "C" int mem_00BC673A;
extern "C" int mem_00BC70E8;
extern "C" int mem_00BC6728;
extern "C" int mem_00BC6400;
extern "C" int mem_00BC70F8;
extern "C" int mem_00BC6402;
extern "C" int mem_00BC6658;
extern "C" int mem_00BC6404;
extern "C" int mem_00BC68D8;
extern "C" int mem_00AC05F8;
extern "C" int mem_00AC0604;
extern "C" int mem_00AC0610;
extern "C" int mem_00AC0614;
extern "C" int mem_00AC0620;

extern "C" __declspec(naked) void __fastcall fn_00866F20(void* self) {
    __asm {
        sub esp, 0xd0
        cmp dword ptr [mem_00AB963C], 0x0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push esi
        push edi
        je L_init
        mov eax, 0x1
        pop edi
        pop esi
        add esp, 0xd0
        ret
    L_init:
        mov dword ptr [mem_00AB963C], 0x1
        mov dword ptr [mem_00AB9618], 0x0
        mov dword ptr [mem_00AB9638], 0x0
        push offset mem_00AC05F8
        call ext_008671C0
        add esp, 0x4
        mov esi, eax
        test esi, esi
        je L_fail
        push esi
        call ext_0085E1F0
        add esp, 0x4
        cmp eax, 0x63
        jbe L_80
        mov byte ptr [esi + 0x63], 0x0
    L_80:
        lea eax, [esp + 0x74]
        push esi
        push eax
        call ext_0085E030
        lea eax, [esp + 0x7c]
        add esp, 0x8
        push eax
        call ext_0085E1F0
        add esp, 0x4
        test eax, eax
        je L_fail
        xor esi, esi
        lea eax, [esp + 0x74]
        mov byte ptr [esp + 0x10], 0x0
        push eax
        call ext_0085E1F0
        add esp, 0x4
        test eax, eax
        je L_tail
    L_loop:
        lea edi, [esp + esi + 0x74]
        movsx eax, byte ptr [edi]
        test eax, eax
        je L_flush
        cmp eax, 0x20
        je L_next
        cmp eax, 0x2c
        je L_flush
        lea eax, [esp + 0x10]
        push eax
        call ext_0085E1F0
        add esp, 0x4
        cmp eax, 0x63
        jae L_next
        mov cl, byte ptr [edi]
        mov byte ptr [esp + eax + 0x10], cl
        mov byte ptr [esp + eax + 0x11], 0x0
        jmp L_next
    L_flush:
        lea eax, [esp + 0x10]
        push eax
        call ext_00867230
        mov byte ptr [esp + 0x14], 0x0
        add esp, 0x4
    L_next:
        inc esi
        lea eax, [esp + 0x74]
        push eax
        call ext_0085E1F0
        add esp, 0x4
        cmp eax, esi
        ja L_loop
    L_tail:
        lea eax, [esp + 0x10]
        push eax
        call ext_00867230
        add esp, 0x4
    L_fail:
        push 0x4
        push 0x0
        push offset mem_00BC63C8
        call ext_0085D510
        add esp, 0xc
        push 0x0
        push 0x2
        push 0x2
        call dword ptr [mem_00BC70E4]
        mov dword ptr [mem_00BC63C8], eax
        cmp eax, -1
        jne L_open_ok
        xor eax, eax
        pop edi
        pop esi
        add esp, 0xd0
        ret
    L_open_ok:
        xor eax, eax
        push 0x10
        mov word ptr [mem_00BC63E2], ax
        push offset mem_00BC63E0
        mov ecx, dword ptr [mem_00BC63C8]
        mov dword ptr [mem_00BC63E4], eax
        mov word ptr [mem_00BC63E0], 0x2
        push ecx
        call dword ptr [mem_00BC6724]
        cmp eax, -1
        jne L_ioctl_ok
        xor eax, eax
        pop edi
        pop esi
        add esp, 0xd0
        ret
    L_ioctl_ok:
        lea eax, [esp + 0x8]
        push 0x4
        push eax
        mov ecx, dword ptr [mem_00BC63C8]
        push 0x20
        push 0xffff
        push ecx
        call dword ptr [mem_00BC70C0]
        cmp dword ptr [mem_00AB9638], 0x0
        jne L_skip_a
        push offset mem_00AC0604
        call dword ptr [mem_00BC671C]
        test eax, eax
        je L_skip_b
        mov dword ptr [mem_00AB9638], 0x1
        mov eax, dword ptr [eax + 0xc]
        lea edx, [esp + 0xc]
        push 0x4
        mov ecx, dword ptr [eax]
        push ecx
        push edx
        call ext_0085D530
        mov ecx, dword ptr [esp + 0x18]
        add esp, 0xc
        push ecx
        call dword ptr [mem_00BC6734]
        push eax
        push offset mem_00BC68D8
        call ext_0085E030
        add esp, 0x8
        mov word ptr [mem_00BC673A], 0xbe7
        push offset mem_00AC0610
        push offset mem_00AC0614
        call dword ptr [mem_00BC70E8]
        test eax, eax
        je L_skip_b
        mov ax, word ptr [eax + 0x8]
        push eax
        call dword ptr [mem_00BC6728]
        mov word ptr [mem_00BC673A], ax
    L_skip_b:
        cmp dword ptr [mem_00AB9638], 0x0
        jne L_skip_a
        mov dword ptr [mem_00AB9638], 0x1
        push offset mem_00AC0620
        push offset mem_00BC68D8
        call ext_0085E030
        mov word ptr [mem_00BC673A], 0xbe7
        add esp, 0x8
    L_skip_a:
        push 0x10
        push 0x0
        push offset mem_00BC6400
        call ext_0085D510
        mov ax, word ptr [mem_00BC673A]
        add esp, 0xc
        mov word ptr [mem_00BC6400], 0x2
        push eax
        call dword ptr [mem_00BC70F8]
        mov word ptr [mem_00BC6402], ax
        push offset mem_00BC68D8
        call dword ptr [mem_00BC6658]
        pop edi
        mov dword ptr [mem_00BC6404], eax
        mov eax, 0x1
        pop esi
        mov dword ptr [mem_00AB9618], 0x1
        add esp, 0xd0
        ret
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x00861440] sub_00861440 (687 bytes)
extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" void ext_0085F750();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" void ext_00860670();
extern "C" void ext_00860950();
extern "C" int mem_00AB98EC;
extern "C" int mem_00BC667F;
extern "C" int mem_00BC6681;
extern "C" int mem_00AB9864;
extern "C" int mem_00BC6398;
extern "C" int mem_00BC639C;
extern "C" int mem_00BC6389;

extern "C" __declspec(naked) void __cdecl fn_00861440(void) {
    __asm {
        sub esp, 0x10
        mov dword ptr [mem_00AB98EC], 0x0
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x34]
        push edi
        mov edi, dword ptr [esp + 0x34]
        mov word ptr [edi], 0x0
        mov word ptr [esi], 0x0
        call ext_00860670
        test eax, eax
        jne L_477
        mov eax, 0xfffffef2
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_477:
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        push eax
        push 0x0
        push ecx
        push edx
        push 0xec
        call ext_00860950
        mov cx, word ptr [esp + 0x40]
        add esp, 0x14
        mov dx, word ptr [esp + 0x30]
        push 0x1
        mov word ptr [mem_00BC667F], cx
        push 0xab98b8
        mov word ptr [mem_00BC6681], dx
        call ext_0085F7E0
        add esp, 0x8
        test eax, eax
        jne L_epi
        xor ebx, ebx
    L_loop:
        lea eax, [esp + 0xc]
        push 0x1
        push eax
        push 0xab98b8
        call ext_0085FF80
        add esp, 0xc
        test eax, eax
        je L_521
        cmp eax, 0x3e
        je L_8614E8
        cmp eax, 0x46
        jne L_503
    L_8614E8:
        lea eax, [esp + 0xc]
        push 0xab98b8
        push eax
        call ext_0085F750
        add esp, 0x8
        test eax, eax
        je L_503
        mov ebx, 0x1
    L_503:
        test ebx, ebx
        je L_loop
        test ebx, ebx
        jne L_52d
        mov eax, 0xffffffff
        pop edi
        mov dword ptr [mem_00AB98EC], 0xf
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_521:
        mov eax, 0xffffffff
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_52d:
        cmp dword ptr [mem_00AB9864], 0x0
        je L_560
        push 0xac0590
        push 0x3e
        push 0xbc6388
        call ext_0085E720
        add esp, 0xc
        cmp dword ptr [mem_00AB9864], 0x0
        je L_560
        push 0xbc6388
        call ext_0085F700
        add esp, 0x4
    L_560:
        mov ax, word ptr [mem_00BC6398]
        push 0xbc6388
        mov word ptr [edi], ax
        mov cx, word ptr [mem_00BC639C]
        mov word ptr [esi], cx
        call ext_0085F740
        add esp, 0x4
        xor eax, eax
        mov al, byte ptr [mem_00BC6389]
        mov dword ptr [mem_00AB98EC], 0x0
        lea ecx, [eax - 0x1]
        cmp ecx, 0x1b
        ja L_epi
        xor edx, edx
        mov dl, byte ptr [ecx + 0x861740]
        jmp dword ptr [edx*4 + 0x8616f0]
    L_C81:
        mov dword ptr [mem_00AB98EC], 0x81
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C82:
        mov dword ptr [mem_00AB98EC], 0x82
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C83:
        mov dword ptr [mem_00AB98EC], 0x83
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C84:
        mov dword ptr [mem_00AB98EC], 0x84
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C85:
        mov dword ptr [mem_00AB98EC], 0x85
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C86:
        mov dword ptr [mem_00AB98EC], 0x86
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C87:
        mov dword ptr [mem_00AB98EC], 0x87
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C88:
        mov dword ptr [mem_00AB98EC], 0x88
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C89:
        mov dword ptr [mem_00AB98EC], 0x89
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C8A:
        mov dword ptr [mem_00AB98EC], 0x8a
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C0A:
        mov dword ptr [mem_00AB98EC], 0xa
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C8C:
        mov dword ptr [mem_00AB98EC], 0x8c
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C8D:
        mov dword ptr [mem_00AB98EC], 0x8d
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C8E:
        mov dword ptr [mem_00AB98EC], 0x8e
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C94:
        mov dword ptr [mem_00AB98EC], 0x94
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C98:
        mov dword ptr [mem_00AB98EC], 0x98
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C99:
        mov dword ptr [mem_00AB98EC], 0x99
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C9B:
        mov dword ptr [mem_00AB98EC], 0x9b
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C9C:
        mov dword ptr [mem_00AB98EC], 0x9c
    L_epi:
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x00864C10] sub_00864C10 (680 bytes)
extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" void ext_0085F750();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" void ext_00860670();
extern "C" void ext_00860950();
extern "C" int mem_00AB9864;
extern "C" int mem_00BC6389;
extern "C" int mem_00BC638A;
extern "C" int mem_00BC638C;
extern "C" int mem_00BC638E;
extern "C" int mem_00BC6390;

extern "C" __declspec(naked) int __cdecl fn_00864C10(void) {
    __asm {
        sub esp, 0x10
        push esi
        push edi
        mov esi, dword ptr [esp + 0x2c]
        mov word ptr [esi + 0x2], 0x0
        mov word ptr [esi + 0x4], 0x0
        mov word ptr [esi + 0x6], 0x0
        mov word ptr [esi], 0x0
        mov dword ptr [mem_00AB98EC], 0x0
        call ext_00860670
        test eax, eax
        jne L_main
        mov eax, 0xfffffef2
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_main:
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x20]
        push ecx
        push edx
        push eax
        push 0x29
        call ext_00860950
        add esp, 0x14
        push 0x1
        push 0xab98b8
        call ext_0085F7E0
        add esp, 0x8
        test eax, eax
        jne L_epi
        xor edi, edi
    L_loop:
        lea eax, [esp + 0x8]
        push 0x1
        push eax
        push 0xab98b8
        call ext_0085FF80
        add esp, 0xc
        test eax, eax
        je L_fail
        cmp eax, 0x3e
        je L_case
        cmp eax, 0x46
        jne L_chk
    L_case:
        lea eax, [esp + 0x8]
        push 0xab98b8
        push eax
        call ext_0085F750
        add esp, 0x8
        test eax, eax
        je L_chk
        mov edi, 0x1
    L_chk:
        test edi, edi
        je L_loop
        test edi, edi
        jne L_after
        mov eax, 0xffffffff
        pop edi
        mov dword ptr [mem_00AB98EC], 0xf
        pop esi
        add esp, 0x10
        ret
    L_fail:
        mov eax, 0xffffffff
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_after:
        cmp dword ptr [mem_00AB9864], 0x0
        je L_skip1
        push 0xac05bc
        push 0x3e
        push 0xbc6388
        call ext_0085E720
        add esp, 0xc
        cmp dword ptr [mem_00AB9864], 0x0
        je L_skip1
        push 0xbc6388
        call ext_0085F700
        add esp, 0x4
    L_skip1:
        cmp byte ptr [mem_00BC6389], 0x0
        jne L_skip2
        mov ax, word ptr [mem_00BC638A]
        mov word ptr [esi], ax
        mov cx, word ptr [mem_00BC638C]
        mov word ptr [esi + 0x2], cx
        mov dx, word ptr [mem_00BC638E]
        mov word ptr [esi + 0x4], dx
        mov ax, word ptr [mem_00BC6390]
        mov word ptr [esi + 0x6], ax
    L_skip2:
        push 0xbc6388
        call ext_0085F740
        add esp, 0x4
        xor eax, eax
        mov al, byte ptr [mem_00BC6389]
        mov dword ptr [mem_00AB98EC], 0x0
        lea ecx, [eax - 0x1]
        cmp ecx, 0x1b
        ja L_epi
        xor edx, edx
        mov dl, byte ptr [ecx + 0x864f08]
        jmp dword ptr [edx*4 + 0x864eb8]
    L_c81:
        mov dword ptr [mem_00AB98EC], 0x81
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c82:
        mov dword ptr [mem_00AB98EC], 0x82
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c83:
        mov dword ptr [mem_00AB98EC], 0x83
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c84:
        mov dword ptr [mem_00AB98EC], 0x84
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c85:
        mov dword ptr [mem_00AB98EC], 0x85
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c86:
        mov dword ptr [mem_00AB98EC], 0x86
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c87:
        mov dword ptr [mem_00AB98EC], 0x87
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c88:
        mov dword ptr [mem_00AB98EC], 0x88
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c89:
        mov dword ptr [mem_00AB98EC], 0x89
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c8a:
        mov dword ptr [mem_00AB98EC], 0x8a
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c0a:
        mov dword ptr [mem_00AB98EC], 0xa
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c8c:
        mov dword ptr [mem_00AB98EC], 0x8c
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c8d:
        mov dword ptr [mem_00AB98EC], 0x8d
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c8e:
        mov dword ptr [mem_00AB98EC], 0x8e
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c94:
        mov dword ptr [mem_00AB98EC], 0x94
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c98:
        mov dword ptr [mem_00AB98EC], 0x98
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c99:
        mov dword ptr [mem_00AB98EC], 0x99
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c9b:
        mov dword ptr [mem_00AB98EC], 0x9b
        pop edi
        pop esi
        add esp, 0x10
        ret
    L_c9c:
        mov dword ptr [mem_00AB98EC], 0x9c
    L_epi:
        pop edi
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x00863B40] sub_00863B40 (741 bytes)
extern "C" void ext_0085D9D0();
extern "C" void ext_0085DB40();
extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" void ext_0085F750();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" void ext_00860670();
extern "C" void ext_00860950();
extern "C" int mem_00AB98A8;
extern "C" int mem_00AB98EC;
extern "C" char mem_00AB98B8;
extern "C" char mem_00AB98BC;
extern "C" int mem_00AB9864;
extern "C" int mem_00BC6389;
extern "C" int mem_00AB98E0;
extern "C" int mem_009242DC;
extern "C" int mem_00924274;

extern "C" __declspec(naked) void __cdecl fn_00863B40(void) {
    __asm {
        sub esp, 0x120
        xor eax, eax
        mov word ptr [mem_00AB98A8], ax
        mov dword ptr [mem_00AB98EC], eax
        push ebx
        push esi
        push edi
        push ebp
        call ext_00860670
        test eax, eax
        jne l_start
        mov eax, 0xfffffef2
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x120
        ret
    l_start:
        mov di, word ptr [esp + 0x138]
        mov bl, byte ptr [esp + 0x140]
        mov si, word ptr [esp + 0x134]
        push ebx
        mov eax, dword ptr [esp + 0x140]
        push eax
        push edi
        push esi
        push 0x2a
        call ext_00860950
        lea ecx, [esp + 0x24]
        mov eax, dword ptr [mem_00AB98B8]
        mov ebp, dword ptr [mem_00AB98BC]
        add esp, 0x14
        mov edx, offset mem_00AB98B8
        mov dword ptr [ecx], eax
        push 1
        mov dword ptr [ecx + 4], ebp
        mov eax, dword ptr [edx + 8]
        mov dl, byte ptr [edx + 0xc]
        mov dword ptr [ecx + 8], eax
        mov byte ptr [ecx + 0xc], dl
        lea ecx, [esp + 0x14]
        push ecx
        call ext_0085F7E0
        add esp, 8
        test eax, eax
        jne l_epi_eax
        xor ebp, ebp
    l_loop:
        lea eax, [esp + 0x20]
        push 1
        lea ecx, [esp + 0x14]
        push eax
        push ecx
        call ext_0085FF80
        add esp, 0xc
        test eax, eax
        je l_ret_m1
        cmp eax, 0x3e
        je l_bf
        cmp eax, 0x46
        jne l_c17
    l_bf:
        lea eax, [esp + 0x20]
        push offset mem_00AB98B8
        push eax
        call ext_0085F750
        add esp, 8
        test eax, eax
        je l_c17
        mov ebp, 1
    l_c17:
        test ebp, ebp
        je l_loop
        test ebp, ebp
        jne l_c49
        mov eax, -1
        pop ebp
        mov dword ptr [mem_00AB98EC], 0xf
        pop edi
        pop esi
        pop ebx
        add esp, 0x120
        ret
    l_ret_m1:
        mov eax, -1
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x120
        ret
    l_c49:
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je l_c7b
        push 0xac05a8
        push 0x3e
        push 0xbc6388
        call ext_0085E720
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je l_c7b
        push 0xbc6388
        call ext_0085F700
        jmp l_c85
    l_c7b:
        push 0xbc6388
        call ext_0085F740
    l_c85:
        add esp, 4
        xor edx, edx
        xor eax, eax
        mov dword ptr [mem_00AB98EC], edx
        mov al, byte ptr [mem_00BC6389]
        dec eax
        cmp eax, 0x1b
        ja l_d33
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x863e78]
        _emit 0xff
        _emit 0x24
        _emit 0x8d
        _emit 0x28
        _emit 0x3e
        _emit 0x86
        _emit 0x00
    l_c_81:
        mov edx, 0x81
        jmp l_d33
    l_c_82:
        mov edx, 0x82
        jmp l_d33
    l_c_83:
        mov edx, 0x83
        jmp l_d33
    l_c_84:
        mov edx, 0x84
        jmp l_d33
    l_c_85:
        mov edx, 0x85
        jmp l_d33
    l_c_86:
        mov edx, 0x86
        jmp l_d33
    l_c_87:
        mov edx, 0x87
        jmp l_d33
    l_c_88:
        mov edx, 0x88
        jmp l_d33
    l_c_89:
        mov edx, 0x89
        jmp l_d33
    l_c_8a:
        mov edx, 0x8a
        jmp l_d33
    l_c_0a:
        mov edx, 0xa
        jmp l_d33
    l_c_8c:
        mov edx, 0x8c
        jmp l_d33
    l_c_8d:
        mov edx, 0x8d
        jmp l_d33
    l_c_8e:
        mov edx, 0x8e
        jmp l_d33
    l_c_94:
        mov edx, 0x94
        jmp l_d33
    l_c_98:
        mov edx, 0x98
        jmp l_d33
    l_c_99:
        mov edx, 0x99
        jmp l_d33
    l_c_9b:
        mov edx, 0x9b
        jmp l_d33
    l_c_9c:
        mov edx, 0x9c
    l_d33:
        mov dword ptr [mem_00AB98EC], edx
        test edx, edx
        jne l_e13
        movzx bp, bl
        mov eax, dword ptr [mem_00AB98E0]
        push eax
        push ebp
        push edi
        push esi
        call ext_0085D9D0
        add esp, 0x10
        test eax, eax
        jge l_e09
        neg eax
        test eax, eax
        jle l_e13
        cmp eax, 0x3e8
        jg l_e13
        shl eax, 2
        mov ecx, dword ptr [mem_00AB98E0]
        mov word ptr [eax + 4*eax + 0xabb360], si
        lea ebx, [eax + 4*eax]
        mov word ptr [ebx + 0xabb362], di
        lea eax, [esp + 0x30]
        mov word ptr [ebx + 0xabb364], bp
        push eax
        mov dword ptr [ebx + 0xabb368], ecx
        mov dword ptr [ebx + 0xabb36c], 1
        mov dword ptr [ebx + 0xabb370], 0
        mov bp, word ptr [ebx + 0xabb364]
        mov ecx, dword ptr [ebx + 0xabb368]
        mov di, word ptr [ebx + 0xabb362]
        push ecx
        mov si, word ptr [ebx + 0xabb360]
        push ebp
        push edi
        push esi
        call ext_0085DB40
        lea eax, [esp + 0x44]
        add esp, 0x14
        mov ebp, dword ptr [mem_009242DC]
        push eax
        push 0x3e8
        push 0x3e7
        push 0
        call ebp
        mov dword ptr [ebx + 0xabb370], eax
        test eax, eax
        je l_e13
        push 0
        push eax
        call dword ptr [mem_00924274]
        jmp l_e13
    l_e09:
        shl eax, 2
        inc dword ptr [eax + 4*eax + 0xabb36c]
    l_e13:
        xor eax, eax
        mov al, byte ptr [mem_00BC6389]
    l_epi_eax:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x120
        ret
    }
}

// [0x00864430] sub_00864430 (757 bytes)
extern "C" void ext_00860670();
extern "C" void ext_00860950();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" void ext_0085F750();
extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" void ext_0085D530();
extern "C" int mem_00AB98EC;
extern "C" short mem_00BC6679;
extern "C" short mem_00BC667B;
extern "C" int mem_00AB9864;
extern "C" int mem_00BC6389;

extern "C" __declspec(naked) void __cdecl fn_00864430(void) {
    __asm {
        sub esp, 0x10
        push ebx
        push esi
        mov si, word ptr [esp + 0x30]
        push edi
        test si, si
        jne L_456
        mov eax, 1
        pop edi
        mov dword ptr [mem_00AB98EC], 0x17
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_456:
        cmp si, 0x18
        jbe L_472
        mov eax, 1
        pop edi
        mov dword ptr [mem_00AB98EC], 0x17
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_472:
        mov di, word ptr [esp + 0x30]
        mov ebx, dword ptr [esp + 0x3c]
        test ebx, ebx
        jne L_49c
        cmp di, 0xf7
        jbe L_49c
        mov eax, 0x2b
        pop edi
        mov dword ptr [mem_00AB98EC], 0x17
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_49c:
        mov dword ptr [mem_00AB98EC], 0
        call ext_00860670
        test eax, eax
        jne L_4bb
        mov eax, 0xfffffef2
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_4bb:
        mov cl, 0x34
        test ebx, ebx
        je L_4c3
        mov cl, 0xf1
    L_4c3:
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x28]
        mov ebx, dword ptr [esp + 0x24]
        push eax
        mov eax, dword ptr [esp + 0x24]
        push edx
        push ebx
        push eax
        push ecx
        call ext_00860950
        mov word ptr [mem_00BC6679], di
        add esp, 0x14
        mov word ptr [mem_00BC667B], si
        push 1
        push 0xab98b8
        call ext_0085F7E0
        add esp, 8
        test eax, eax
        jne L_71e
        xor edi, edi
    L_507:
        lea eax, [esp + 0xc]
        push 1
        push eax
        push 0xab98b8
        call ext_0085FF80
        add esp, 0xc
        test eax, eax
        je L_56e
        cmp eax, 0x3e
        je L_529
        cmp eax, 0x46
        jne L_562
    L_529:
        lea eax, [esp + 0xc]
        push 0xab98b8
        push eax
        call ext_0085F750
        add esp, 8
        test eax, eax
        je L_544
        mov edi, 1
    L_544:
        test edi, edi
        je L_507
        test edi, edi
        jne L_584
        mov eax, 0xffffffff
        pop edi
        mov dword ptr [mem_00AB98EC], 0xf
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_562:
        mov eax, 0xfffffef0
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_56e:
        mov eax, 0xffffffff
        pop edi
        mov dword ptr [mem_00AB98EC], 0xf
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_584:
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je L_5b7
        push 0xac05b4
        push 0x3e
        push 0xbc6388
        call ext_0085E720
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je L_5b7
        push 0xbc6388
        call ext_0085F700
        add esp, 4
    L_5b7:
        cmp byte ptr [mem_00BC6389], 0
        jne L_5d8
        movzx eax, si
        add eax, eax
        mov ecx, dword ptr [esp + 0x38]
        push eax
        push 0xbc6396
        push ecx
        call ext_0085D530
        add esp, 0xc
    L_5d8:
        push 0xbc6388
        call ext_0085F740
        add esp, 4
        xor eax, eax
        mov al, byte ptr [mem_00BC6389]
        mov dword ptr [mem_00AB98EC], 0
        lea ecx, [eax - 1]
        cmp ecx, 0x1a
        ja L_6fc
        xor edx, edx
        mov dl, byte ptr [ecx + 0x864774]
        jmp dword ptr [4*edx + 0x864728]
    L_81:
        mov dword ptr [mem_00AB98EC], 0x81
        jmp L_6fc
    L_82:
        mov dword ptr [mem_00AB98EC], 0x82
        jmp L_6fc
    L_83:
        mov dword ptr [mem_00AB98EC], 0x83
        jmp L_6fc
    L_84:
        mov dword ptr [mem_00AB98EC], 0x84
        jmp L_6fc
    L_85:
        mov dword ptr [mem_00AB98EC], 0x85
        jmp L_6fc
    L_86:
        mov dword ptr [mem_00AB98EC], 0x86
        jmp L_6fc
    L_87:
        mov dword ptr [mem_00AB98EC], 0x87
        jmp L_6fc
    L_88:
        mov dword ptr [mem_00AB98EC], 0x88
        jmp L_6fc
    L_89:
        mov dword ptr [mem_00AB98EC], 0x89
        jmp L_6fc
    L_8a:
        mov dword ptr [mem_00AB98EC], 0x8a
        jmp L_6fc
    L_0a:
        mov dword ptr [mem_00AB98EC], 0xa
        jmp L_6fc
    L_8c:
        mov dword ptr [mem_00AB98EC], 0x8c
        jmp L_6fc
    L_8d:
        mov dword ptr [mem_00AB98EC], 0x8d
        jmp L_6fc
    L_8e:
        mov dword ptr [mem_00AB98EC], 0x8e
        jmp L_6fc
    L_8f:
        mov dword ptr [mem_00AB98EC], 0x8f
        jmp L_6fc
    L_90:
        mov dword ptr [mem_00AB98EC], 0x90
        jmp L_6fc
    L_91:
        mov dword ptr [mem_00AB98EC], 0x91
        jmp L_6fc
    L_92:
        mov dword ptr [mem_00AB98EC], 0x92
    L_6fc:
        cmp eax, 3
        je L_70d
        cmp eax, 4
        je L_719
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_70d:
        mov eax, 0x2b
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_719:
        mov eax, 0x2b
    L_71e:
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x00864790] sub_00864790 (741 bytes)
extern "C" int mem_00864A78;
extern "C" char mem_00AB98B8;
extern "C" short mem_00BC6679;
extern "C" short mem_00BC667B;
extern "C" char mem_00BC667D;
extern "C" int mem_00864AC8;
extern "C" int mem_00AB9864;
extern "C" int mem_00BC6388;
extern "C" int mem_00BC6389;
extern "C" int mem_00AC05B8;
extern "C" void ext_0085D530();
extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" void ext_0085F750();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" void ext_00860670();
extern "C" void ext_00860950();

extern "C" __declspec(naked) void __cdecl fn_00864790(void) {
    __asm {
        sub esp, 0x10
        mov dword ptr [mem_00AB98EC], 0
        push ebx
        push esi
        push edi
        mov di, word ptr [esp + 0x34]
        test di, di
        jne L_nz
        mov eax, 1
        pop edi
        mov dword ptr [mem_00AB98EC], 0x17
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_nz:
        cmp di, 0x18
        jbe L_ok
        mov eax, 1
        pop edi
        mov dword ptr [mem_00AB98EC], 0x17
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_ok:
        mov si, word ptr [esp + 0x30]
        mov ebx, dword ptr [esp + 0x3c]
        test ebx, ebx
        jne L_call
        cmp si, 0xf7
        jbe L_call
        mov eax, 0x2b
        pop edi
        mov dword ptr [mem_00AB98EC], 0x17
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_call:
        call ext_00860670
        test eax, eax
        jne L_a
        mov eax, 0xfffffef2
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_a:
        mov cl, 0x35
        test ebx, ebx
        je L_b
        mov cl, 0xf2
    L_b:
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x28]
        mov ebx, dword ptr [esp + 0x24]
        push eax
        mov eax, dword ptr [esp + 0x24]
        push edx
        push ebx
        push eax
        push ecx
        call ext_00860950
        mov word ptr [mem_00BC6679], si
        mov ecx, dword ptr [esp + 0x4c]
        mov word ptr [mem_00BC667B], di
        add esp, 0x14
        movzx eax, di
        add eax, eax
        push eax
        push ecx
        push offset mem_00BC667D
        call ext_0085D530
        add esp, 0xc
        push 1
        push offset mem_00AB98B8
        call ext_0085F7E0
        add esp, 0x8
        test eax, eax
        jne L_epi
        xor esi, esi
    L_loop:
        lea eax, [esp + 0xc]
        push 1
        push eax
        push offset mem_00AB98B8
        call ext_0085FF80
        add esp, 0xc
        test eax, eax
        je L_after
        cmp eax, 0x3e
        je L_x
        cmp eax, 0x46
        jne L_y
    L_x:
        lea eax, [esp + 0xc]
        push offset mem_00AB98B8
        push eax
        call ext_0085F750
        add esp, 0x8
        test eax, eax
        je L_y
        mov esi, 1
    L_y:
        test esi, esi
        je L_loop
        test esi, esi
        jne L_succ
        mov eax, 0xffffffff
        pop edi
        mov dword ptr [mem_00AB98EC], 0xf
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_after:
        mov eax, 0xffffffff
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_succ:
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je L_skip
        push offset mem_00AC05B8
        push 0x3e
        push offset mem_00BC6388
        call ext_0085E720
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je L_skip
        push offset mem_00BC6388
        call ext_0085F700
        add esp, 0x4
    L_skip:
        push offset mem_00BC6388
        call ext_0085F740
        add esp, 0x4
        xor eax, eax
        mov al, byte ptr [mem_00BC6389]
        mov dword ptr [mem_00AB98EC], 0
        lea ecx, [eax - 1]
        cmp ecx, 0x1b
        ja L_tail
        xor edx, edx
        mov dl, byte ptr [ecx + mem_00864AC8]
        jmp dword ptr [edx * 4 + mem_00864A78]
    L_c81:
        mov dword ptr [mem_00AB98EC], 0x81
        jmp L_tail
    L_c82:
        mov dword ptr [mem_00AB98EC], 0x82
        jmp L_tail
    L_c83:
        mov dword ptr [mem_00AB98EC], 0x83
        jmp L_tail
    L_c84:
        mov dword ptr [mem_00AB98EC], 0x84
        jmp L_tail
    L_c85:
        mov dword ptr [mem_00AB98EC], 0x85
        jmp L_tail
    L_c86:
        mov dword ptr [mem_00AB98EC], 0x86
        jmp L_tail
    L_c87:
        mov dword ptr [mem_00AB98EC], 0x87
        jmp L_tail
    L_c88:
        mov dword ptr [mem_00AB98EC], 0x88
        jmp L_tail
    L_c89:
        mov dword ptr [mem_00AB98EC], 0x89
        jmp L_tail
    L_c8a:
        mov dword ptr [mem_00AB98EC], 0x8a
        jmp L_tail
    L_c0a:
        mov dword ptr [mem_00AB98EC], 0xa
        jmp L_tail
    L_c8c:
        mov dword ptr [mem_00AB98EC], 0x8c
        jmp L_tail
    L_c8d:
        mov dword ptr [mem_00AB98EC], 0x8d
        jmp L_tail
    L_c8e:
        mov dword ptr [mem_00AB98EC], 0x8e
        jmp L_tail
    L_c94:
        mov dword ptr [mem_00AB98EC], 0x94
        jmp L_tail
    L_c98:
        mov dword ptr [mem_00AB98EC], 0x98
        jmp L_tail
    L_c99:
        mov dword ptr [mem_00AB98EC], 0x99
        jmp L_tail
    L_c9b:
        mov dword ptr [mem_00AB98EC], 0x9b
        jmp L_tail
    L_c9c:
        mov dword ptr [mem_00AB98EC], 0x9c
    L_tail:
        cmp eax, 0x3
        je L_t3
        cmp eax, 0x4
        je L_t4
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_t3:
        mov eax, 0x2b
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_t4:
        mov eax, 0x2b
    L_epi:
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x00862980] sub_00862980 (878 bytes)
extern "C" const unsigned int sw_jmp_tbl_00862980[21] = {
    0x00862BE7, 0x00862BF6, 0x00862C05, 0x00862C14, 0x00862C23, 0x00862C32, 0x00862C41, 0x00862C50,
    0x00862C5F, 0x00862C6B, 0x00862C77, 0x00862C83, 0x00862C8F, 0x00862CD7, 0x00862C9B, 0x00862CA7,
    0x00862CB3, 0x00862CBF, 0x00862CCB, 0x00862CD7, 0x00862BD8 };
extern "C" const unsigned char sw_idx_tbl_00862980[129] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D,
    0x14, 0x14, 0x14, 0x14, 0x14, 0x0E, 0x14, 0x14, 0x14, 0x0F, 0x10, 0x14, 0x11, 0x12,
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14,
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14,
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14,
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14,
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14,
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14,
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14 };

// [0x00862980] sub_00862980 (878 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_00860670();
extern "C" void ext_00862DD0();
extern "C" int mem_00AB98A8;
extern "C" int mem_00AB98AC;
extern "C" int mem_00AB98A4;
extern "C" int mem_00AB98F8;
extern "C" int mem_00AB9880;
extern "C" int mem_00AB98FC;
extern "C" int mem_00AB9914;
extern "C" int mem_00AB9F28;
extern "C" int mem_00AB9F2C;
extern "C" int mem_00AB9F38;
extern "C" int mem_00AB9F40;
extern "C" int mem_00ABA454;
extern "C" int mem_00ABA458;
extern "C" int mem_00BC70F8;

extern "C" __declspec(naked) void __cdecl fn_00862980(void) {
    __asm {
        sub esp, 0x10
        xor eax, eax
        mov word ptr [mem_00AB98A8], ax
        mov dword ptr [mem_00AB98EC], eax
        push ebx
        mov dword ptr [mem_00AB98AC], eax
        push esi
        push edi
        push ebp
        call ext_00860670
        test eax, eax
        jne l_8629af
        mov eax, 0xfffffef2
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    l_8629af:
        cmp dword ptr [mem_00AB9880], 0
        je l_862ac5
        cmp dword ptr [mem_00AB98FC], 0
        je l_862ac5
        cmp word ptr [mem_00AB9F28], 0
        jne l_8629dc
        mov word ptr [mem_00AB9F28], 0x1db
    l_8629dc:
        xor edi, edi
        cmp dword ptr [mem_00ABA454], edi
        jle l_862a52
        mov bx, word ptr [esp + 0x24]
        mov esi, offset mem_00ABA458
        mov bp, word ptr [esp + 0x28]
    l_8629f5:
        lea ecx, [esp + 0x10]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esi + 0x8]
        mov dword ptr [ecx + 0x4], edx
        mov dl, byte ptr [esi + 0xc]
        mov dword ptr [ecx + 0x8], eax
        mov byte ptr [ecx + 0xc], dl
        mov cx, word ptr [mem_00AB9F28]
        push ecx
        call dword ptr [mem_00BC70F8]
        mov word ptr [esp + 0x1b], ax
        mov ecx, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x2c]
        push ecx
        lea eax, [esp + 0x14]
        push edx
        push ebp
        push ebx
        push eax
        call ext_00862DD0
        add esp, 0x14
        test eax, eax
        mov eax, dword ptr [mem_00ABA454]
        je l_862ba5
        add esi, 0xd
        inc edi
        cmp edi, eax
        jl l_8629f5
        jmp l_862a5c
    l_862a52:
        mov bx, word ptr [esp + 0x24]
        mov bp, word ptr [esp + 0x28]
    l_862a5c:
        cmp dword ptr [mem_00AB9F2C], 0
        je l_862acf
        lea eax, [esp + 0x10]
        push 0xd
        push 0
        push eax
        call ext_0085D510
        mov byte ptr [esp + 0x1c], 0x8
        mov ax, word ptr [mem_00AB9F28]
        add esp, 0xc
        push eax
        call dword ptr [mem_00BC70F8]
        mov word ptr [esp + 0x1b], ax
        mov ecx, dword ptr [esp + 0x30]
        mov eax, 0xff
        push ecx
        mov edx, dword ptr [esp + 0x30]
        mov byte ptr [esp + 0x18], al
        mov byte ptr [esp + 0x17], al
        push edx
        mov byte ptr [esp + 0x1a], al
        push ebp
        mov byte ptr [esp + 0x1d], al
        push ebx
        lea eax, [esp + 0x20]
        push eax
        call ext_00862DD0
        add esp, 0x14
        test eax, eax
        je l_862ba5
        jmp l_862acf
    l_862ac5:
        mov bx, word ptr [esp + 0x24]
        mov bp, word ptr [esp + 0x28]
    l_862acf:
        cmp dword ptr [mem_00AB98A4], 0
        je l_862bb9
        cmp dword ptr [mem_00AB98F8], 0
        je l_862bb9
        xor edi, edi
        cmp dword ptr [mem_00AB9F38], edi
        jle l_862b3c
        mov esi, offset mem_00AB9F40
    l_862af8:
        lea ecx, [esp + 0x10]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esi + 0x8]
        mov dword ptr [ecx + 0x4], edx
        mov dl, byte ptr [esi + 0xc]
        mov dword ptr [ecx + 0x8], eax
        mov eax, dword ptr [esp + 0x2c]
        mov byte ptr [ecx + 0xc], dl
        mov ecx, dword ptr [esp + 0x30]
        lea edx, [esp + 0x10]
        push ecx
        push eax
        push ebp
        push ebx
        push edx
        call ext_00862DD0
        add esp, 0x14
        test eax, eax
        mov eax, dword ptr [mem_00AB9F38]
        je l_862ba5
        add esi, 0xd
        inc edi
        cmp eax, edi
        jg l_862af8
    l_862b3c:
        cmp dword ptr [mem_00AB9914], 0
        je l_862bb9
        lea eax, [esp + 0x10]
        push 0xd
        push 0
        push eax
        call ext_0085D510
        mov byte ptr [esp + 0x1c], 0x1
        add esp, 0xc
        push 0x7483
        call dword ptr [mem_00BC70F8]
        mov word ptr [esp + 0x1b], ax
        mov eax, 0xff
        mov byte ptr [esp + 0x1a], al
        mov byte ptr [esp + 0x19], al
        mov ecx, dword ptr [esp + 0x30]
        mov byte ptr [esp + 0x18], al
        mov edx, dword ptr [esp + 0x2c]
        push ecx
        mov byte ptr [esp + 0x1b], al
        push edx
        mov byte ptr [esp + 0x1e], al
        push ebp
        mov byte ptr [esp + 0x21], al
        push ebx
        lea eax, [esp + 0x20]
        push eax
        call ext_00862DD0
        add esp, 0x14
        test eax, eax
        jne l_862bb9
    l_862ba5:
        xor eax, eax
        pop ebp
        mov dword ptr [mem_00AB98EC], 0
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    l_862bb9:
        xor eax, eax
        mov ax, word ptr [mem_00AB98A8]
        dec eax
        cmp eax, 0x80
        ja l_862bd8
        xor ecx, ecx
        mov cl, byte ptr [eax + sw_idx_tbl_00862980]
        jmp dword ptr [ecx * 4 + sw_jmp_tbl_00862980]
    l_862bd8:
        mov dword ptr [mem_00AB98EC], 0xf
        jmp l_862ce1
    l_862be7:
        mov dword ptr [mem_00AB98EC], 0x81
        jmp l_862ce1
    l_862bf6:
        mov dword ptr [mem_00AB98EC], 0x82
        jmp l_862ce1
    l_862c05:
        mov dword ptr [mem_00AB98EC], 0x83
        jmp l_862ce1
    l_862c14:
        mov dword ptr [mem_00AB98EC], 0x84
        jmp l_862ce1
    l_862c23:
        mov dword ptr [mem_00AB98EC], 0x85
        jmp l_862ce1
    l_862c32:
        mov dword ptr [mem_00AB98EC], 0x86
        jmp l_862ce1
    l_862c41:
        mov dword ptr [mem_00AB98EC], 0x87
        jmp l_862ce1
    l_862c50:
        mov dword ptr [mem_00AB98EC], 0x88
        jmp l_862ce1
    l_862c5f:
        mov dword ptr [mem_00AB98EC], 0x89
        jmp short l_862ce1
    l_862c6b:
        mov dword ptr [mem_00AB98EC], 0x8a
        jmp short l_862ce1
    l_862c77:
        mov dword ptr [mem_00AB98EC], 0x8b
        jmp short l_862ce1
    l_862c83:
        mov dword ptr [mem_00AB98EC], 0x8c
        jmp short l_862ce1
    l_862c8f:
        mov dword ptr [mem_00AB98EC], 0x8d
        jmp short l_862ce1
    l_862c9b:
        mov dword ptr [mem_00AB98EC], 0x94
        jmp short l_862ce1
    l_862ca7:
        mov dword ptr [mem_00AB98EC], 0x98
        jmp short l_862ce1
    l_862cb3:
        mov dword ptr [mem_00AB98EC], 0x99
        jmp short l_862ce1
    l_862cbf:
        mov dword ptr [mem_00AB98EC], 0x9b
        jmp short l_862ce1
    l_862ccb:
        mov dword ptr [mem_00AB98EC], 0x9c
        jmp short l_862ce1
    l_862cd7:
        mov dword ptr [mem_00AB98EC], 0x96
    l_862ce1:
        mov eax, 0xffffffff
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x00862FA0] sub_00862FA0 (863 bytes)
extern "C" void ext_00860670();
extern "C" void ext_0085E470();
extern "C" void ext_008638A0();
extern "C" void ext_00863640();
extern "C" void ext_0085D510();
extern "C" void ext_00863380();
extern "C" int mem_00AB98A8;
extern "C" int mem_00AB98EC;
extern "C" int mem_00AB98AC;
extern "C" int mem_00AB9880;
extern "C" int mem_00AB98FC;
extern "C" int mem_00AB9F28;
extern "C" int mem_00AB9F2C;
extern "C" int mem_00AB98A4;
extern "C" int mem_00AB98F8;
extern "C" int mem_00AB9F38;
extern "C" int mem_00AB9F40;
extern "C" int mem_00AB9914;
extern "C" int mem_00BC70F8;
extern "C" int mem_00AB9904;

// [0x00862FA0] sub_00862FA0 (863 bytes)
extern "C" __declspec(naked) void __fastcall fn_00862FA0(void* self) {
    __asm {
        sub esp, 0x14
        xor eax, eax
        mov word ptr [mem_00AB98A8], ax
        mov dword ptr [mem_00AB98EC], eax
        push ebx
        mov dword ptr [mem_00AB98AC], eax
        push esi
        push edi
        push ebp
        call ext_00860670
        test eax, eax
        jne l_cf
        mov eax, 0xfffffef2
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret
    l_cf:
        cmp dword ptr [mem_00AB9880], 0
        je l_46
        cmp dword ptr [mem_00AB98FC], 0
        je l_46
        mov ax, word ptr [mem_00AB9F28]
        test ax, ax
        jne l_ff0
        mov ax, 0x1db
    l_ff0:
        cmp dword ptr [mem_00AB9F2C], 0
        mov word ptr [mem_00AB9F28], ax
        je l_1e
        push eax
        push 0x100007f
        call ext_0085E470
        mov ax, word ptr [mem_00AB9F28]
        add esp, 0x8
        push eax
        push -1
        call ext_0085E470
        add esp, 0x8
    l_1e:
        mov bp, word ptr [esp + 0x2c]
        mov eax, dword ptr [esp + 0x34]
        mov di, word ptr [esp + 0x28]
        push eax
        mov ecx, dword ptr [esp + 0x34]
        push ecx
        push ebp
        push edi
        call ext_008638A0
        add esp, 0x10
        test eax, eax
        je l_1b7
        jmp l_50
    l_46:
        mov di, word ptr [esp + 0x28]
        mov bp, word ptr [esp + 0x2c]
    l_50:
        cmp dword ptr [mem_00AB98A4], 0
        je l_1a2
        cmp dword ptr [mem_00AB98F8], 0
        je l_1a2
        mov dword ptr [esp + 0x20], 0
        mov esi, dword ptr [mem_00AB9F38]
        test esi, esi
        jle l_cf2
        mov ebx, offset mem_00AB9F40
    l_81:
        lea ecx, [esp + 0x10]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [ebx + 0x4]
        mov esi, dword ptr [ebx + 0x8]
        mov dword ptr [ecx], eax
        mov al, byte ptr [ebx + 0xc]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [esp + 0x30]
        mov dword ptr [ecx + 0x8], esi
        mov byte ptr [ecx + 0xc], al
        mov ecx, dword ptr [esp + 0x34]
        lea eax, [esp + 0x10]
        push ecx
        push edx
        push ebp
        push edi
        push eax
        call ext_00863640
        add esp, 0x14
        mov esi, dword ptr [mem_00AB9F38]
        test eax, eax
        je l_1b7
        add ebx, 0xd
        inc dword ptr [esp + 0x20]
        cmp esi, dword ptr [esp + 0x20]
        jg l_81
    l_cf2:
        cmp dword ptr [mem_00AB9914], 0
        je l_13e
        lea eax, [esp + 0x10]
        push 0xd
        push 0x0
        push eax
        call ext_0085D510
        mov byte ptr [esp + 0x1c], 0x1
        add esp, 0xc
        push 0x7483
        call dword ptr [mem_00BC70F8]
        mov word ptr [esp + 0x1b], ax
        mov eax, 0xff
        mov byte ptr [esp + 0x1a], al
        mov byte ptr [esp + 0x19], al
        mov ecx, dword ptr [esp + 0x34]
        mov byte ptr [esp + 0x18], al
        mov edx, dword ptr [esp + 0x30]
        push ecx
        mov byte ptr [esp + 0x1b], al
        push edx
        mov byte ptr [esp + 0x1e], al
        push ebp
        mov byte ptr [esp + 0x21], al
        push edi
        lea eax, [esp + 0x20]
        push eax
        call ext_00863640
        add esp, 0x14
        mov esi, dword ptr [mem_00AB9F38]
        test eax, eax
        je l_1b7
    l_13e:
        cmp dword ptr [mem_00AB9904], 0
        je l_1a2
        call ext_00863380
        cmp dword ptr [mem_00AB9F38], esi
        jle l_1a2
        lea eax, [esi + 2*esi]
        lea ebx, [esi + 4*eax + mem_00AB9F40]
    l_15e:
        lea ecx, [esp + 0x10]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [ebx + 0x4]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x4], edx
        mov dl, byte ptr [ebx + 0xc]
        mov dword ptr [ecx + 0x8], eax
        mov eax, dword ptr [esp + 0x30]
        mov byte ptr [ecx + 0xc], dl
        mov ecx, dword ptr [esp + 0x34]
        lea edx, [esp + 0x10]
        push ecx
        push eax
        push ebp
        push edi
        push edx
        call ext_00863640
        add esp, 0x14
        test eax, eax
        mov eax, dword ptr [mem_00AB9F38]
        je l_1b7
        add ebx, 0xd
        inc esi
        cmp eax, esi
        jg l_15e
    l_1a2:
        xor eax, eax
        mov ax, word ptr [mem_00AB98A8]
        dec eax
        cmp eax, 0x1d
        ja l_default
        _emit 0xff
        _emit 0x24
        _emit 0x85
        _emit 0x00
        _emit 0x33
        _emit 0x86
        _emit 0x00
    l_1b7:
        xor eax, eax
        pop ebp
        mov dword ptr [mem_00AB98EC], 0
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret
    l_default:
        mov dword ptr [mem_00AB98EC], 0xf
        jmp l_end
    c81:
        mov dword ptr [mem_00AB98EC], 0x81
        jmp l_end
    c82:
        mov dword ptr [mem_00AB98EC], 0x82
        jmp l_end
    c83:
        mov dword ptr [mem_00AB98EC], 0x83
        jmp l_end
    c84:
        mov dword ptr [mem_00AB98EC], 0x84
        jmp l_end
    c85:
        mov dword ptr [mem_00AB98EC], 0x85
        jmp l_end
    c86:
        mov dword ptr [mem_00AB98EC], 0x86
        jmp l_end
    c87:
        mov dword ptr [mem_00AB98EC], 0x87
        jmp l_end
    c88:
        mov dword ptr [mem_00AB98EC], 0x88
        jmp l_end
    c89:
        mov dword ptr [mem_00AB98EC], 0x89
        jmp l_end
    c8a:
        mov dword ptr [mem_00AB98EC], 0x8a
        jmp l_end
    c8b:
        mov dword ptr [mem_00AB98EC], 0x8b
        jmp l_end
    c8c:
        mov dword ptr [mem_00AB98EC], 0x8c
        jmp l_end
    c8d:
        mov dword ptr [mem_00AB98EC], 0x8d
        jmp l_end
    c8e:
        mov dword ptr [mem_00AB98EC], 0x8e
        jmp l_end
    c94:
        mov dword ptr [mem_00AB98EC], 0x94
        jmp l_end
    c98:
        mov dword ptr [mem_00AB98EC], 0x98
        jmp l_end
    c99:
        mov dword ptr [mem_00AB98EC], 0x99
        jmp l_end
    c9b:
        mov dword ptr [mem_00AB98EC], 0x9b
        jmp l_end
    c9c:
        mov dword ptr [mem_00AB98EC], 0x9c
        jmp l_end
    c9e:
        mov dword ptr [mem_00AB98EC], 0x9e
        jmp l_end
    c9f:
        mov dword ptr [mem_00AB98EC], 0x9f
    l_end:
        mov eax, 0xffffffff
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret
    }
}

// Data-only block holding the switch jump table at 0x00863300 (120 bytes, 30 dwords).
extern "C" __declspec(naked) void __cdecl jt_00862FA0() {
    __asm {
        _emit 0xda
        _emit 0x31
        _emit 0x86
        _emit 0x00
        _emit 0xe9
        _emit 0x31
        _emit 0x86
        _emit 0x00
        _emit 0xf8
        _emit 0x31
        _emit 0x86
        _emit 0x00
        _emit 0x07
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0x16
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0x25
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0x34
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0x43
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0x52
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0x61
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0x70
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0x7c
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0x88
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0x94
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0xcb
        _emit 0x31
        _emit 0x86
        _emit 0x00
        _emit 0xcb
        _emit 0x31
        _emit 0x86
        _emit 0x00
        _emit 0xcb
        _emit 0x31
        _emit 0x86
        _emit 0x00
        _emit 0xcb
        _emit 0x31
        _emit 0x86
        _emit 0x00
        _emit 0xcb
        _emit 0x31
        _emit 0x86
        _emit 0x00
        _emit 0xa0
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0xcb
        _emit 0x31
        _emit 0x86
        _emit 0x00
        _emit 0xcb
        _emit 0x31
        _emit 0x86
        _emit 0x00
        _emit 0xcb
        _emit 0x31
        _emit 0x86
        _emit 0x00
        _emit 0xac
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0xb8
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0xcb
        _emit 0x31
        _emit 0x86
        _emit 0x00
        _emit 0xc4
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0xd0
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0xdc
        _emit 0x32
        _emit 0x86
        _emit 0x00
        _emit 0xe8
        _emit 0x32
        _emit 0x86
        _emit 0x00
    }
}

// [0x0086F930] sub_0086F930 (816 bytes)
extern "C" void ext_0086F000(); extern "C" void ext_0086F020(); extern "C" void ext_0086F0E0();
extern "C" void ext_0086F160(); extern "C" void ext_0086F1A0(); extern "C" void ext_0086F240(); extern "C" void ext_0086F8F0();
extern "C" __declspec(naked) void __fastcall fn_0086F930(void* self) {
    __asm {
        sub esp, 0xf0
        lea eax, [esp + 0x50]
        push ebx
        mov ecx, dword ptr [esp + 0xf8]
        push esi
        push edi
        push ebp
        push eax
        push ecx
        call ext_0086F020
        lea ecx, [esp + 0xb8]
        mov edx, dword ptr [esp + 0x110]
        xor si, si
        add esp, 0x8
        push ecx
        push edx
        call ext_0086F020
        add esp, 0x8
        test byte ptr [esp + 0xac], 0x1
        jne L9b4
        mov edi, 1
    L979:
        test dword ptr [esp + 0xfc], edi
        jne L9aa
        inc si
        lea eax, [esp + 0x60]
        push eax
        call ext_0086F8F0
        lea eax, [esp + 0xb4]
        add esp, 4
        push eax
        call ext_0086F8F0
        add esp, 4
        test dword ptr [esp + 0xac], edi
        je L979
    L9aa:
        test byte ptr [esp + 0xac], 0x1
        je L9cf
    L9b4:
        mov di, 0xffff
        lea eax, [esp + 0x10]
        lea ecx, [esp + 0xb0]
        push eax
        push ecx
        call ext_0086F020
        add esp, 8
        jmp L9e5
    L9cf:
        mov di, 1
        lea eax, [esp + 0x10]
        lea ecx, [esp + 0x60]
        push eax
        push ecx
        call ext_0086F020
        add esp, 8
    L9e5:
        mov ax, 0x13
        xor edx, edx
    L9eb:
        movsx ecx, ax
        or edx, dword ptr [esp + 4*ecx + 0x10]
        dec ax
        jns L9eb
        mov ebx, 1
        mov ebp, 0x8000
    La00:
        test edx, edx
        je La8b
        test dword ptr [esp + 0x5c], ebx
        jne La21
    La0e:
        lea eax, [esp + 0x10]
        push eax
        call ext_0086F8F0
        add esp, 4
        test dword ptr [esp + 0x5c], ebx
        je La0e
    La21:
        test di, di
        jle La2c
        lea eax, [esp + 0x60]
        jmp La33
    La2c:
        lea eax, [esp + 0xb0]
    La33:
        lea ecx, [esp + 0x10]
        push eax
        push ecx
        call ext_0086F020
        lea eax, [esp + 0x18]
        lea ecx, [esp + 0xb8]
        lea edx, [esp + 0x68]
        add esp, 8
        mov di, bx
        push eax
        push ecx
        push edx
        call ext_0086F160
        add esp, 0xc
        test dword ptr [esp + 0x10], ebp
        je La75
        mov di, 0xffff
        lea eax, [esp + 0x10]
        push eax
        call ext_0086F0E0
        add esp, 4
    La75:
        mov ax, 0x13
        xor edx, edx
    La7b:
        movsx ecx, ax
        or edx, dword ptr [esp + 4*ecx + 0x10]
        dec ax
        jns La7b
        jmp La00
    La8b:
        mov edi, dword ptr [esp + 0x10c]
        lea eax, [esp + 0x60]
        push edi
        push eax
        call ext_0086F020
        movsx eax, si
        add esp, 8
        cmp eax, 0x10
        jbe Lad4
    Laa8:
        xor dx, dx
    Laab:
        movsx eax, dx
        inc dx
        mov ecx, dword ptr [edi + 4*eax + 4]
        lea eax, [edi + 4*eax]
        mov dword ptr [eax], ecx
        movsx eax, dx
        cmp eax, 0x13
        jb Laab
        mov dword ptr [edi + 0x4c], 0
        sub si, 0x10
        movsx eax, si
        cmp eax, 0x10
        ja Laa8
    Lad4:
        xor ebx, ebx
        test si, si
        jle Lb07
    Ladb:
        mov dx, 0x13
    Ladf:
        movsx eax, dx
        lea ecx, [edi + 4*eax]
        mov eax, dword ptr [ecx]
        add eax, eax
        or eax, ebx
        mov ebx, eax
        mov dword ptr [ecx], eax
        and ebx, 0x10000
        and eax, 0xffff
        shr ebx, 0x10
        mov dword ptr [ecx], eax
        dec dx
        jns Ladf
        dec si
        jne Ladb
    Lb07:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0xf0
        ret
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0
        _emit 0
        _emit 0
        _emit 0
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0
        _emit 0
        _emit 0
        _emit 0
        mov ecx, dword ptr [esp + 8]
        sub esp, 0x190
        lea eax, [esp + 0x50]
        push esi
        push edi
        push eax
        push ecx
        call ext_0086F020
        lea ecx, [esp + 0xb0]
        add esp, 8
        push ecx
        call ext_0086F000
        lea ecx, [esp + 0xc]
        mov edx, dword ptr [esp + 0x1a0]
        mov dword ptr [esp + 0xf8], 1
        add esp, 4
        push ecx
        push edx
        call ext_0086F020
        mov cx, 0x13
        add esp, 8
        xor eax, eax
    Lb70:
        movsx edx, cx
        or eax, dword ptr [esp + 4*edx + 0x58]
        dec cx
        jns Lb70
        test eax, eax
        je Lc34
        mov esi, dword ptr [esp + 0x1a4]
        mov edi, 1
    Lb8f:
        test dword ptr [esp + 0xa4], edi
        je Lbd6
        lea eax, [esp + 0xf8]
        lea ecx, [esp + 8]
        lea edx, [esp + 0xa8]
        push eax
        push ecx
        push edx
        call ext_0086F1A0
        lea ecx, [esp + 0xb4]
        lea edx, [esp + 0x154]
        lea eax, [esp + 0x104]
        add esp, 0xc
        push ecx
        push edx
        push esi
        push eax
        call ext_0086F240
        add esp, 0x10
    Lbd6:
        lea eax, [esp + 0x58]
        push eax
        call ext_0086F8F0
        lea eax, [esp + 0xfc]
        lea ecx, [esp + 0xc]
        add esp, 4
        push eax
        push ecx
        lea ecx, [esp + 0x10]
        push ecx
        call ext_0086F1A0
        lea ecx, [esp + 0x14]
        lea edx, [esp + 0x154]
        lea eax, [esp + 0x104]
        add esp, 0xc
        push ecx
        push edx
        push esi
        push eax
        call ext_0086F240
        mov cx, 0x13
        add esp, 0x10
        xor eax, eax
    Lc21:
        movsx edx, cx
        or eax, dword ptr [esp + 4*edx + 0x58]
        dec cx
        jns Lc21
        test eax, eax
        jne Lb8f
    Lc34:
        mov eax, dword ptr [esp + 0x1a8]
        lea ecx, [esp + 0xa8]
        push eax
        push ecx
        call ext_0086F020
        add esp, 8
        pop edi
        pop esi
        add esp, 0x190
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0
        _emit 0
        _emit 0
        _emit 0
    }
}

// [0x00860FD0] sub_00860FD0 (1019 bytes)
extern "C" char mem_00AB98B8;
extern "C" void ext_0085D9D0();
extern "C" void ext_0085DB40();
extern "C" void ext_0085E720();
extern "C" void ext_0085F700();
extern "C" void ext_0085F740();
extern "C" void ext_0085F750();
extern "C" void ext_0085F7E0();
extern "C" void ext_0085FF80();
extern "C" void ext_00860670();
extern "C" void ext_00860950();
extern "C" int mem_00AB98E0;
extern "C" int mem_009242D8;
extern "C" int mem_009241E0;
extern "C" int mem_009242D4;
extern "C" int mem_00AB9864;
extern "C" int mem_00BC6389;
extern "C" int mem_00ABB36C;
extern "C" int mem_00ABB370;
extern "C" int mem_00BC6388;
extern "C" int mem_00AC058C;

extern "C" void tbl_00860FD0_lookup();
extern "C" void tbl_00860FD0_jtab();

extern "C" __declspec(naked) int __cdecl fn_00860FD0(void) {
    __asm {
        sub esp, 0x114
        mov dword ptr [mem_00AB98EC], 0
        push ebx
        push esi
        push edi
        push ebp
        call ext_00860670
        test eax, eax
        jne L_a
        mov eax, 0xfffffef2
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_a:
        xor ebx, ebx
        mov eax, dword ptr [mem_00AB98E0]
        mov si, word ptr [esp + 0x128]
        push eax
        movzx di, byte ptr [esp + 0x134]
        mov ecx, dword ptr [esp + 0x130]
        push edi
        push ecx
        push esi
        call ext_0085D9D0
        add esp, 0x10
        test eax, eax
        jle L_skip
        cmp eax, 0x3e8
        jg L_skip
        shl eax, 2
        lea ebp, [eax + 4*eax]
        mov eax, dword ptr [eax + 4*eax + mem_00ABB36C]
        test eax, eax
        je L_skip
        dec eax
        mov dword ptr [ebp + mem_00ABB36C], eax
        cmp dword ptr [ebp + mem_00ABB36C], 0
        jbe L_c77
        xor eax, eax
        pop ebp
        mov dword ptr [mem_00AB98EC], 0
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c77:
        mov eax, dword ptr [ebp + mem_00ABB370]
        test eax, eax
        je L_d6
        mov dword ptr [esp + 0x10], 0
        lea ecx, [esp + 0x10]
        push ecx
        push 1
        push eax
        call dword ptr [mem_009242D8]
        cmp dword ptr [esp + 0x10], 0x3e6
        jge L_b8
        xor eax, eax
        pop ebp
        mov dword ptr [mem_00AB98EC], 0
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_b8:
        mov eax, dword ptr [ebp + mem_00ABB370]
        push eax
        call dword ptr [mem_009241E0]
        mov dword ptr [ebp + mem_00ABB370], 0
        jmp L_d6
    L_skip:
        mov ebx, 1
    L_d6:
        test ebx, ebx
        je L_112c
        lea eax, [esp + 0x24]
        mov ecx, dword ptr [mem_00AB98E0]
        mov edx, dword ptr [esp + 0x12c]
        push eax
        push ecx
        push edi
        push edx
        push esi
        call ext_0085DB40
        lea ecx, [esp + 0x38]
        add esp, 0x14
        push ecx
        push 0
        push 0x1f0003
        call dword ptr [mem_009242D4]
        test eax, eax
        je L_112c
        push eax
        call dword ptr [mem_009241E0]
        xor eax, eax
        pop ebp
        mov dword ptr [mem_00AB98EC], 0x87
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_112c:
        mov eax, dword ptr [esp + 0x130]
        mov ecx, dword ptr [esp + 0x12c]
        push eax
        push 1
        push ecx
        push esi
        push 0x2b
        call ext_00860950
        add esp, 0x14
        push 1
        push offset mem_00AB98B8
        call ext_0085F7E0
        add esp, 8
        test eax, eax
        jne L_epi
        xor esi, esi
    L_162:
        lea eax, [esp + 0x14]
        push 1
        push eax
        push offset mem_00AB98B8
        call ext_0085FF80
        add esp, 0xc
        test eax, eax
        je L_1c1
        cmp eax, 0x3e
        je L_184
        cmp eax, 0x46
        jne L_19f
    L_184:
        lea eax, [esp + 0x14]
        push offset mem_00AB98B8
        push eax
        call ext_0085F750
        add esp, 8
        test eax, eax
        je L_19f
        mov esi, 1
    L_19f:
        test esi, esi
        je L_162
        test esi, esi
        jne L_1d1
        mov eax, 0xffffffff
        pop ebp
        mov dword ptr [mem_00AB98EC], 0xf
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_1c1:
        mov eax, 0xffffffff
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_1d1:
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je L_203
        push offset mem_00AC058C
        push 0x3e
        push offset mem_00BC6388
        call ext_0085E720
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9864]
        test eax, eax
        je L_203
        push offset mem_00BC6388
        call ext_0085F700
        jmp L_20d
    L_203:
        push offset mem_00BC6388
        call ext_0085F740
    L_20d:
        add esp, 4
        xor eax, eax
        mov al, byte ptr [mem_00BC6389]
        mov dword ptr [mem_00AB98EC], 0
        lea ecx, [eax - 1]
        cmp ecx, 0x1b
        ja L_epi
        xor edx, edx
        mov dl, byte ptr [ecx + tbl_00860FD0_lookup]
        jmp dword ptr [edx*4 + tbl_00860FD0_jtab]
    L_c81:
        mov dword ptr [mem_00AB98EC], 0x81
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c82:
        mov dword ptr [mem_00AB98EC], 0x82
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c83:
        mov dword ptr [mem_00AB98EC], 0x83
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c84:
        mov dword ptr [mem_00AB98EC], 0x84
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c85:
        mov dword ptr [mem_00AB98EC], 0x85
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c86:
        mov dword ptr [mem_00AB98EC], 0x86
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c87:
        mov dword ptr [mem_00AB98EC], 0x87
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c88:
        mov dword ptr [mem_00AB98EC], 0x88
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c89:
        mov dword ptr [mem_00AB98EC], 0x89
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c8a:
        mov dword ptr [mem_00AB98EC], 0x8a
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c0a:
        mov dword ptr [mem_00AB98EC], 0x0a
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c8c:
        mov dword ptr [mem_00AB98EC], 0x8c
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c8d:
        mov dword ptr [mem_00AB98EC], 0x8d
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c8e:
        mov dword ptr [mem_00AB98EC], 0x8e
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c94:
        mov dword ptr [mem_00AB98EC], 0x94
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c98:
        mov dword ptr [mem_00AB98EC], 0x98
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c99:
        mov dword ptr [mem_00AB98EC], 0x99
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c9b:
        mov dword ptr [mem_00AB98EC], 0x9b
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    L_c9c:
        mov dword ptr [mem_00AB98EC], 0x9c
    L_epi:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret
    }
}

extern "C" __declspec(naked) void __cdecl tbl_00860FD0_lookup(void) {
    __asm {
        _emit 0x00
        _emit 0x01
        _emit 0x02
        _emit 0x03
        _emit 0x04
        _emit 0x05
        _emit 0x06
        _emit 0x07
        _emit 0x08
        _emit 0x09
        _emit 0x0a
        _emit 0x0b
        _emit 0x0c
        _emit 0x0d
        _emit 0x13
        _emit 0x13
        _emit 0x13
        _emit 0x13
        _emit 0x13
        _emit 0x0e
        _emit 0x13
        _emit 0x13
        _emit 0x13
        _emit 0x0f
        _emit 0x10
        _emit 0x13
        _emit 0x11
        _emit 0x12
    }
}
extern "C" __declspec(naked) void __cdecl tbl_00860FD0_jtab(void) {
    __asm {
        _emit 0x00
        _emit 0x86
        _emit 0x12
        _emit 0x3c
        _emit 0x00
        _emit 0x86
        _emit 0x12
        _emit 0x51
        _emit 0x00
        _emit 0x86
        _emit 0x12
        _emit 0x66
        _emit 0x00
        _emit 0x86
        _emit 0x12
        _emit 0x7b
        _emit 0x00
        _emit 0x86
        _emit 0x12
        _emit 0x90
        _emit 0x00
        _emit 0x86
        _emit 0x12
        _emit 0xa5
        _emit 0x00
        _emit 0x86
        _emit 0x12
        _emit 0xba
        _emit 0x00
        _emit 0x86
        _emit 0x12
        _emit 0xcf
        _emit 0x00
        _emit 0x86
        _emit 0x12
        _emit 0xe4
        _emit 0x00
        _emit 0x86
        _emit 0x12
        _emit 0xf9
        _emit 0x00
        _emit 0x86
        _emit 0x13
        _emit 0x0e
        _emit 0x00
        _emit 0x86
        _emit 0x13
        _emit 0x23
        _emit 0x00
        _emit 0x86
        _emit 0x13
        _emit 0x38
        _emit 0x00
        _emit 0x86
        _emit 0x13
        _emit 0x4d
        _emit 0x00
        _emit 0x86
        _emit 0x13
        _emit 0x62
        _emit 0x00
        _emit 0x86
        _emit 0x13
        _emit 0x77
        _emit 0x00
        _emit 0x86
        _emit 0x13
        _emit 0x8c
        _emit 0x00
        _emit 0x86
        _emit 0x13
        _emit 0xa1
        _emit 0x00
        _emit 0x86
        _emit 0x13
        _emit 0xb6
        _emit 0x00
        _emit 0x86
        _emit 0x13
        _emit 0xc0
    }
}
