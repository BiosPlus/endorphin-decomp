// Decompiled translation unit: src/classes/SnapTranslateTool.cpp

// [0x00544EC0] SnapTranslateTool::vfunc_15 (97 bytes)
extern "C" void ext_00544E20();
extern "C" void ext_005434F0();

extern "C" __declspec(naked) int __fastcall fn_00544EC0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push edi
        mov esi, ecx
        push ebx
        mov byte ptr [esi + 0x260], 0x0
        call ext_00544E20
        test al, al
        jne flag_set
        mov eax, dword ptr [esi + 0x9c]
        mov edx, dword ptr [eax + 0x3c]
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push edi
        lea ecx, [esi + 0x9c]
        push ebx
        push ebp
        call edx
        test eax, eax
        jne skip_call
        push edi
        push ebx
        push ebp
        lea ecx, [esi + 0x164]
        call ext_005434F0
    skip_call:
        pop ebp
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret 0xc
    flag_set:
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret 0xc
    }
}

// [0x00544D80] SnapTranslateTool::vfunc_26 (31 bytes)
extern "C" __declspec(naked) void __fastcall fn_00544D80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x80]
        call edx
        mov eax, dword ptr [esi + 0x9c]
        mov edx, dword ptr [eax + 0x68]
        lea ecx, [esi + 0x9c]
        pop esi
        jmp edx
    }
}

// [0x00544D30] SnapTranslateTool::vfunc_17 (66 bytes)
extern "C" __declspec(naked) void __fastcall fn_00544D30(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov esi, ecx
        mov eax, dword ptr [esi + 0x164]
        mov edx, dword ptr [eax + 0x44]
        lea ecx, [esi + 0x164]
        push edi
        push ebx
        call edx
        test eax, eax
        jne done
        mov eax, dword ptr [esi + 0x9c]
        mov edx, dword ptr [eax + 0x44]
        lea ecx, [esi + 0x9c]
        push edi
        push ebx
        call edx
    done:
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret 0x8
    }
}

// [0x00544CE0] SnapTranslateTool::vfunc_16 (66 bytes)
extern "C" void ext_00543530();

extern "C" __declspec(naked) int __fastcall fn_00544CE0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov esi, ecx
        push edi
        push ebx
        lea ecx, [esi + 0x164]
        call ext_00543530
        test eax, eax
        jl fail
        mov eax, dword ptr [esi + 0x9c]
        mov edx, dword ptr [eax + 0x40]
        lea ecx, [esi + 0x9c]
        push edi
        push ebx
        call edx
        pop edi
        pop esi
        pop ebx
        ret 0x8
    fail:
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 0x8
    }
}

// [0x00544C70] SnapTranslateTool::vfunc_18_off_98 (111 bytes)
extern "C" __declspec(naked) void __fastcall fn_00544C70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x10
        fldz
        push esi
        fst dword ptr [esp + 0x10]
        mov esi, ecx
        cmp byte ptr [esi + 0x1c9], 0x0
        fst dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi - 0x10]
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx]
        je else_path
        mov eax, dword ptr [eax + 0xc8]
        lea edx, [esp + 0x4]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push edx
        call eax
        test al, al
        je end_path
        mov ecx, dword ptr [esi - 0x10]
        mov byte ptr [esi + 0x1c8], 0x1
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x4c]
        lea eax, [esp + 0x4]
        push eax
        call edx
        pop esi
        add esp, 0x10
        ret 0x8
    else_path:
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [eax + 0x48]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push edx
        call eax
    end_path:
        pop esi
        add esp, 0x10
        ret 0x8
    }
}


// [0x00544DA0] SnapTranslateTool::vfunc_31 (89 bytes)
extern "C" void ext_005371F0();
extern "C" void ext_0053F740();

extern "C" __declspec(naked) void __fastcall fn_00544DA0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov eax, dword ptr [esi + 0x9c]
        mov eax, dword ptr [eax + 0x7c]
        lea ecx, [esi + 0x9c]
        push edx
        push edi
        call eax
        cmp edi, 0x1c00
        jne done
        call ext_005371F0
        mov ecx, dword ptr [eax + 0x194]
        cmp ecx, dword ptr [eax + 0x198]
        jne done
        mov edx, ecx
        shl edx, 4
        sub edx, ecx
        lea eax, [eax + 4*edx + 0xa4]
        push eax
        lea ecx, [esi + 0x164]
        call ext_0053F740
    done:
        pop edi
        pop esi
        ret 8
    }
}
