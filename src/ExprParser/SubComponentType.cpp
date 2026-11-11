// Decompiled translation unit: src/ExprParser/SubComponentType.cpp

// [0x0066BDB0] ExprParser::SubComponentType::vfunc_2 (110 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0066BDB0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b33b8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax]
        push esi
        push edx
        lea edx, [esp + 0x8]
        push edx
        call eax
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x8]
        mov dword ptr [esp + 0x18], 0
        call eax
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        mov esi, eax
        mov dword ptr [esp + 0x14], 0xffffffff
        je L_66BE0C
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x4]
        push eax
        call edx
        mov eax, esi
    L_66BE0C:
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x4
    }
}

// [0x0066BE20] ExprParser::SubComponentType::vfunc_3 (110 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_0066BE20(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b33b8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax]
        push ebx
        push edx
        lea edx, [esp + 0x8]
        push edx
        call eax
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0xc]
        mov dword ptr [esp + 0x18], 0
        call eax
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        mov bl, al
        mov dword ptr [esp + 0x14], 0xffffffff
        je L_66BE7A
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x4]
        push eax
        call edx
    L_66BE7A:
        mov ecx, dword ptr [esp + 0xc]
        mov al, bl
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x4
    }
}

// [0x0066BD40] ExprParser::SubComponentType::vfunc_1 (111 bytes)
extern "C" __declspec(naked) float __fastcall fn_0066BD40(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b33b8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax]
        push edx
        lea edx, [esp + 0x4]
        push edx
        call eax
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [esp + 0x14], 0x0
        call eax
        fstp dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x4]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 0xffffffff
        je L_66BD9A
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp]
        push eax
        call edx
    L_66BD9A:
        mov ecx, dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x18]
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x4
    }
}
