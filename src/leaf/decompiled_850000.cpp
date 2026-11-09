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
