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

// [0x006ACF60] GWCCategoryItem::vfunc_8 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006ACF60(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        test dl, dl
        mov eax, ecx
        je short L_006ACF76
        mov ecx, dword ptr [eax + 0x3c]
        test ecx, ecx
        je short L_006ACF76
        cmp byte ptr [ecx], 0x1
        jne short L_006ACF7C
L_006ACF76:
        mov ecx, dword ptr [eax + 0x4]
        mov byte ptr [ecx + 0x4], dl
L_006ACF7C:
        mov ecx, dword ptr [eax + 0x14]
        push esi
        mov esi, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esi + 0x13c]
        push eax
        call edx
        pop esi
        ret 0x4
    }
}
