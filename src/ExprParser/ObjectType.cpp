// Decompiled translation unit: src/ExprParser/ObjectType.cpp

extern "C" int mem_00924FE8;

// [0x006990C0] ExprParser::ObjectType::vfunc_4 (62 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006990C0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [eax + 0x60]
        push esi
        push edx
        mov dword ptr [esp + 0x8], 0
        call eax
        test eax, eax
        mov esi, dword ptr [esp + 0xc]
        je fail_path
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x20]
        push esi
        call eax
        mov eax, esi
        pop esi
        pop ecx
        ret 8
fail_path:
        mov ecx, esi
        call dword ptr [mem_00924FE8]
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}
