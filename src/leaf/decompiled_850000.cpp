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
