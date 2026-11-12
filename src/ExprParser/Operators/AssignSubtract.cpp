// Decompiled translation unit: src/ExprParser/Operators/AssignSubtract.cpp

// [0x006A0F10] ExprParser::Operators::AssignSubtract::vfunc_3 (235 bytes)
extern "C" void ext_0041CF00();
extern "C" void ext_0041CF50();
extern "C" void ext_004ECB40();
extern "C" void ext_00672040();

extern "C" __declspec(naked) void __fastcall fn_006A0F10(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b6c40
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push esi
        mov esi, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x30]
        call edx
        cmp eax, 0xf
        jne L_else
        push esi
        lea ecx, [esp + 0x8]
        call ext_0041CF00
        mov edx, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xb0]
        push edx
        lea edx, [esp + 0x8]
        push edx
        mov dword ptr [esp + 0x24], 0x0
        call eax
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xa4]
        lea eax, [esp + 0x4]
        push eax
        push esi
        call edx
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        mov dword ptr [esp + 0x1c], -1
        je L_join
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x4]
        push edx
        call eax
        jmp L_join
    L_else:
        mov ecx, esi
        call ext_00672040
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esp + 0x28]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xb0]
        push eax
        push esi
        call edx
    L_join:
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_004ECB40
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0x1
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov dword ptr [esp + 0x1c], -1
        pop esi
        je L_done
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x8]
        push eax
        call edx
    L_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret 0x8
    }
}
