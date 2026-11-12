// Decompiled translation unit: src/ExprParser/Operators/AssignAdd.cpp

// [0x006A0E20] ExprParser::Operators::AssignAdd::vfunc_3 (235 bytes)
extern "C" void ext_0041CF00();
extern "C" void ext_0041CF50();
extern "C" void ext_004ECB40();
extern "C" void ext_00672040();

extern "C" __declspec(naked) void __fastcall fn_006A0E20(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b6c40
        push eax
        mov dword ptr fs:[0], esp
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
        mov eax, dword ptr [eax + 0xac]
        push edx
        lea edx, [esp + 0x8]
        push edx
        mov dword ptr [esp + 0x24], 0
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
        je L_end1
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x4]
        push edx
        call eax
        jmp L_end1
    L_else:
        mov ecx, esi
        call ext_00672040
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esp + 0x28]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xac]
        push eax
        push esi
        call edx
    L_end1:
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
        je L_end2
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x8]
        push eax
        call edx
    L_end2:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x8
    }
}
