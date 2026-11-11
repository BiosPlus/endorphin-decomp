// Decompiled translation unit: src/classes/AcclaimIO.cpp

extern "C" int mem_00924FDC;
extern "C" void ext_00521350();
extern "C" void ext_00553750();
extern "C" void ext_00558A20();
extern "C" void ext_00559180();

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

// [0x00584730] AcclaimIO::vfunc_13 (139 bytes)
extern "C" __declspec(naked) void __fastcall fn_00584730(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x3d4]
        lea ebx, [esi + 0x840]
        push edi
        mov ecx, ebx
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [edi + 0x1c]
        lea ecx, [edi + 0x20]
        push ecx
        lea ecx, [ebx + 0x20]
        mov dword ptr [ebx + 0x1c], eax
        call dword ptr [mem_00924FDC]
        mov edx, dword ptr [edi + 0x3c]
        lea eax, [esi + 0x8]
        lea edi, [esi + 0x46c]
        push eax
        mov ecx, edi
        mov dword ptr [ebx + 0x3c], edx
        call ext_00521350
        lea ecx, [esi + 0x24]
        push ecx
        mov ecx, edi
        call ext_00553750
        lea edx, [esi + 0x16c]
        push edx
        mov ecx, edi
        call ext_00558A20
        mov eax, dword ptr [esi + 0x418]
        push eax
        mov ecx, edi
        call ext_00559180
        mov ecx, dword ptr [esi + 0x420]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [edx + 0x34]
        mov dword ptr [esi + 0x88c], ecx
        push eax
        mov ecx, edi
        call edx
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}
