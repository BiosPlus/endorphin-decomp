// Decompiled translation unit: src/ExprParser/Operators/CopyValuePtr.cpp

extern "C" void ext_00672040();
extern "C" void ext_006721D0();

// [0x006A07B0] ExprParser::Operators::CopyValuePtr::vfunc_3 (28 bytes)
// Stack-argument thiscall: this is read from the first stack arg (esi), ret 8.
// Calls sub_00672040(this), then sub_006721D0(this, arg2).
extern "C" __declspec(naked) void __stdcall fn_006A07B0(void* self, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov ecx, esi
        call ext_00672040
        mov eax, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_006721D0
        pop esi
        ret 8
    }
}
