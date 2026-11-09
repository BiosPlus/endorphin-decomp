// Decompiled translation unit: src/ExprParser/BoolType.cpp

// [0x0046C430] ExprParser::BoolType::vfunc_51 (10 bytes)
extern "C" void ext_006A724A();

extern "C" __declspec(naked) void __fastcall fn_0046C430(void* self) {
    __asm {
        push ecx
        call ext_006A724A
        add esp, 0x4
        ret
    }
}

// [0x0067A6E0] ExprParser::BoolType::vfunc_34 (17 bytes)
extern "C" void ext_0041CF50();

extern "C" __declspec(naked) unsigned char __stdcall fn_0067A6E0(void* self, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        call ext_0041CF50
        ret 0x8
    }
}
