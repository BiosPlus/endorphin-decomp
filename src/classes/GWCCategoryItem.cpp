// Decompiled translation unit: src/classes/GWCCategoryItem.cpp

extern "C" void ext_006A7B90();
extern "C" void ext_006ACDF0();

// [0x006AECA0] GWCCategoryItem::vfunc_5 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AECA0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7B90
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_006ACDF0
        pop esi
        ret 0x8
    }
}
