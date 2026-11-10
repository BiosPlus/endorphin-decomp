// Decompiled translation unit: src/classes/AcclaimIO.cpp

// [0x00584660] AcclaimIO::vfunc_43 (34 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00584660(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xe4]
        call edx
        test al, 0x2
        je short L_false
        cmp byte ptr [esi + 0x428], 0
        je short L_false
        mov al, 0x1
        pop esi
        ret
    L_false:
        xor al, al
        pop esi
        ret
    }
}

// [0x0055BE30] AcclaimIO::vfunc_19 (37 bytes)
extern "C" __declspec(naked) int __fastcall fn_0055BE30(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xe4]
        call edx
        test al, 0x2
        je short L_false
        cmp byte ptr [esi + 0x428], 0
        je short L_false
        mov eax, 1
        pop esi
        ret
    L_false:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x005846F0] AcclaimIO::vfunc_48 (59 bytes)
extern "C" __declspec(naked) void __fastcall fn_005846F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xe4]
        call edx
        test al, 0x1
        je short L_else
        mov eax, dword ptr [esi + 0x46c]
        mov edx, dword ptr [eax + 0xc0]
        lea ecx, [esi + 0x46c]
        pop esi
        jmp edx
    L_else:
        mov eax, dword ptr [esi + 0x964]
        mov edx, dword ptr [eax + 0xc0]
        lea ecx, [esi + 0x964]
        pop esi
        jmp edx
    }
}

// [0x005846B0] AcclaimIO::vfunc_37 (60 bytes)
extern "C" __declspec(naked) void __fastcall fn_005846B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xe4]
        call edx
        cmp eax, 1
        jne short L_else
        mov eax, dword ptr [esi + 0x46c]
        mov edx, dword ptr [eax + 0x94]
        lea ecx, [esi + 0x46c]
        pop esi
        jmp edx
    L_else:
        mov eax, dword ptr [esi + 0x964]
        mov edx, dword ptr [eax + 0x94]
        lea ecx, [esi + 0x964]
        pop esi
        jmp edx
    }
}
