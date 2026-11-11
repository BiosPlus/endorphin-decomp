// Decompiled translation unit: src/ExprParser/Operators/Function2.cpp

// [0x006A1630] ExprParser::Operators::Function2::vfunc_3 (119 bytes)
extern "C" void ext_0041CF50();

extern "C" __declspec(naked) void __fastcall fn_006A1630(void* self) {
    __asm {
        push -1
        push 0x8b33b8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        mov edx, dword ptr [esp + 0x20]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc4]
        push edx
        mov edx, dword ptr [esp + 0x24]
        push edx
        push esi
        lea edx, [esp + 0x10]
        push edx
        call eax
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        mov dword ptr [esp + 0x14], -1
        pop esi
        je skip_dtor
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp]
        push eax
        call edx
skip_dtor:
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0xc
    }
}
