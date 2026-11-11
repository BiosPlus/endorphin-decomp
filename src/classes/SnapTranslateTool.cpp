// Decompiled translation unit: src/classes/SnapTranslateTool.cpp

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
