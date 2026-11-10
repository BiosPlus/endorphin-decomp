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
