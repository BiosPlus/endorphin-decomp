// Decompiled translation unit: src/leaf/decompiled_850000.cpp

// [0x008598C0] sub_008598C0 (32 bytes)
extern "C" __declspec(naked) char* __cdecl fn_008598C0(void) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov eax, ecx
        mov dl, byte ptr [esi]
        test dl, dl
        mov byte ptr [ecx], dl
        je done
    copy_loop:
        mov dl, byte ptr [esi + 1]
        inc ecx
        inc esi
        test dl, dl
        mov byte ptr [ecx], dl
        jne copy_loop
    done:
        pop esi
        ret
    }
}

// [0x0085A110] sub_0085A110 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085A110(void) {
    __asm {
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx]
        cmp eax, -1
        je done
        mov edx, dword ptr [esp + 4]
        cmp eax, edx
        jb done
        jne decrement
        mov dword ptr [ecx], 0xffffffff
        ret
    decrement:
        dec eax
        mov dword ptr [ecx], eax
    done:
        ret
    }
}

// [0x0085D510] sub_0085D510 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085D510(void) {
    __asm {
        mov edx, dword ptr [esp + 0xc]
        push ebx
        mov eax, edx
        dec edx
        test eax, eax
        je done
        mov bl, byte ptr [esp + 0xc]
        mov eax, dword ptr [esp + 8]
    fill_loop:
        mov byte ptr [eax], bl
        inc eax
        mov ecx, edx
        dec edx
        test ecx, ecx
        jne fill_loop
    done:
        pop ebx
        ret
    }
}

// [0x0085BEA0] sub_0085BEA0 (32 bytes)
extern "C" void __cdecl ext_00859730(void* p);

extern "C" void __cdecl fn_0085BEA0(void* self) {
    void** s = static_cast<void**>(self);
    if (s[1] != 0) {
        ext_00859730(s[1]);
    }
    ext_00859730(self);
}

// [0x00859A20] sub_00859A20 (47 bytes)
extern "C" __declspec(naked) char* __cdecl fn_00859A20(char* dst, const char* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov eax, ecx
        cmp byte ptr [ecx], 0x0
        je L_end_dst
    L_find_end:
        mov dl, byte ptr [ecx + 0x1]
        inc ecx
        test dl, dl
        jne L_find_end
    L_end_dst:
        push esi
        mov esi, dword ptr [esp + 0xc]
        inc ecx
        mov dl, byte ptr [esi]
        inc esi
        mov byte ptr [ecx - 0x1], dl
        test dl, dl
        je L_done
    L_copy:
        mov dl, byte ptr [esi]
        mov byte ptr [ecx], dl
        inc ecx
        inc esi
        test dl, dl
        jne L_copy
    L_done:
        pop esi
        ret
    }
}

// [0x0085BF40] sub_0085BF40 (47 bytes)
extern "C" __declspec(naked) unsigned int __cdecl fn_0085BF40(void* self, unsigned int key) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        push esi
        mov edx, dword ptr [ecx]
        push edi
        test edx, edx
        jbe L_notfound
        mov esi, dword ptr [ecx + 0x4]
        mov edi, dword ptr [esp + 0x10]
        mov ecx, esi
    L_loop:
        cmp edi, dword ptr [ecx]
        je L_found
        inc eax
        add ecx, 0x8
        cmp eax, edx
        jb L_loop
    L_notfound:
        pop edi
        pop esi
        xor eax, eax
        ret
    L_found:
        mov eax, dword ptr [esi + 8*eax + 0x4]
        pop edi
        pop esi
        ret
    }
}

// [0x0085F7B0] sub_0085F7B0 (47 bytes)
extern "C" __declspec(naked) int __cdecl fn_0085F7B0(const char* s1, const char* s2, unsigned int n) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        test eax, eax
        jne L_nonzero
        xor eax, eax
        pop ebx
        ret
    L_nonzero:
        dec eax
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        je L_exit
    L_loop:
        mov bl, byte ptr [ecx]
        cmp byte ptr [edx], bl
        jne L_exit
        inc ecx
        inc edx
        dec eax
        jne L_loop
    L_exit:
        xor eax, eax
        pop ebx
        mov al, byte ptr [ecx]
        xor ecx, ecx
        mov cl, byte ptr [edx]
        sub eax, ecx
        ret
    }
}

// [0x00859300] sub_00859300 (48 bytes)
extern "C" __declspec(naked) int __cdecl fn_00859300(void* a1, unsigned int a2) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        test byte ptr [ecx + 0x14], 0x4
        je short L_noderef
        mov ecx, dword ptr [ecx]
L_noderef:
        mov eax, dword ptr [ecx + 0x14]
        test al, 0x1
        jne short L_flagset
        xor eax, eax
        ret
L_flagset:
        mov edx, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp edx, esi
        pop esi
        jne short L_mismatch
        and al, 0xfe
        mov dword ptr [ecx + 0x14], eax
        xor eax, eax
        ret
L_mismatch:
        mov eax, 0xd
        ret
    }
}

// [0x00859740] sub_00859740 (64 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00859740(void* dst, int c, unsigned int n) {
    __asm {
        mov eax, dword ptr [esp + 0Ch]
        mov ecx, eax
        dec eax
        test ecx, ecx
        jbe L_ret_dst_00859740
        lea ecx, [eax + 1]
        mov al, byte ptr [esp + 8]
        push ebx
        mov bl, al
        mov bh, bl
        push esi
        mov esi, dword ptr [esp + 0Ch]
        mov eax, ebx
        mov edx, ecx
        push edi
        shl eax, 10h
        mov edi, esi
        mov ax, bx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ret
L_ret_dst_00859740:
        mov eax, dword ptr [esp + 4]
        ret
    }
}

// [0x0085E720] sub_0085E720 (76 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085E720(const char* src, int len) {
    __asm {
        sub esp, 0x14
        push ebx
        push esi
        push edi
        xor esi, esi
        push ebp
        mov ebp, dword ptr [esp + 0x2c]
        test ebp, ebp
        je done
        mov eax, 0
        jle done
        mov edi, dword ptr [esp + 0x28]
        mov edx, 0x2e
        xor ebx, ebx
    loop_top:
        mov cl, byte ptr [edi + eax]
        mov byte ptr [esp + esi + 0x10], dl
        cmp cl, 0x20
        jb skip_store
        mov byte ptr [esp + esi + 0x10], cl
    skip_store:
        mov byte ptr [esp + esi + 0x11], bl
        inc esi
        cmp esi, 0xf
        jle no_wrap
        xor esi, esi
    no_wrap:
        inc eax
        cmp eax, ebp
        jl loop_top
    done:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x008597E0] sub_008597E0 (79 bytes)
extern "C" __declspec(naked) void* __cdecl fn_008597E0(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, eax
        push edi
        mov edx, eax
        jae forward
        lea edi, [esi + ecx]
        cmp eax, edi
        jae forward
        mov edx, edi
        lea esi, [eax + ecx]
        mov edi, ecx
        dec ecx
        test edi, edi
        je done
        lea edi, [ecx + 1]
    back_loop:
        mov cl, byte ptr [edx - 1]
        dec edx
        dec esi
        dec edi
        mov byte ptr [esi], cl
        jne back_loop
        pop edi
        pop esi
        ret
    forward:
        mov edi, ecx
        dec ecx
        test edi, edi
        je done
        sub esi, eax
        lea edi, [ecx + 1]
    fwd_loop:
        mov cl, byte ptr [esi + edx]
        mov byte ptr [edx], cl
        inc edx
        dec edi
        jne fwd_loop
    done:
        pop edi
        pop esi
        ret
    }
}
