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
