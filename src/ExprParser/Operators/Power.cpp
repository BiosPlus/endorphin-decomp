// Decompiled translation unit: src/ExprParser/Operators/Power.cpp

// [0x006A12C0] ExprParser::Operators::Power::vfunc_3 (190 bytes)
// Stack-argument fastcall shape: self (ecx) unused, a1 at [esp+4], a2 at [esp+8], ret 8.
// SEH-framed (fs:[0] handler 0x008B6C58, EH state at [esp+0x1c]).
extern "C" void ext_004ECB40();

extern "C" __declspec(naked) void __fastcall fn_006A12C0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8b6c58
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push esi
        mov esi, dword ptr [esp + 0x24]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_004ECB40
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x4], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x8], edx
        mov dword ptr [eax + 0x4], 0x0
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov dword ptr [esp + 0x1c], 0x0
        je L_006A1319
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0xc]
        push edx
        call eax
    L_006A1319:
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xb8]
        push eax
        lea eax, [esp + 0x8]
        push eax
        call edx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je L_006A135F
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x78]
        push esi
        call edx
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi], ecx
        pop esi
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x8
    L_006A135F:
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0x4], edx
        mov dword ptr [esi], eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x8
    }
}
