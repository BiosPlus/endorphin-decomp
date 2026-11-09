// Decompiled translation unit: src/ExprParser/ExpressionContainerType.cpp

// [0x00699990] ExprParser::ExpressionContainerType::vfunc_21 (20 bytes)
extern "C" void ext_006997E0();
extern "C" void ext_00699930();

extern "C" int __fastcall fn_00699990(void* self, int edx_unused, int a1) {
    void* p = ((void* (__stdcall *)(int))ext_006997E0)(a1);
    return ((int (__fastcall *)(void*))ext_00699930)(p);
}

extern "C" void ext_006999B0();

// [0x00670CB0] ExprParser::ExpressionContainerType::vfunc_1 (24 bytes)
// Reads one stack arg, passes it to ext_006999B0 (stdcall), then tail-dispatches
// through the returned object's vtable slot 1 with the arg replaced by the result.
extern "C" __declspec(naked) void __cdecl fn_00670CB0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006999B0
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 4]
        jmp eax
    }
}
