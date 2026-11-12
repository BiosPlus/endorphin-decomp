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

extern "C" void ext_008B76A9();
extern "C" void ext_006A5E00();
extern "C" void ext_006A6010();
extern "C" void ext_006A7C00();
extern "C" void ext_006A7D50();
extern "C" void ext_006A7D70();
extern "C" int mem_00925654;
extern "C" int mem_009256BC;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

// [0x006AF1F0] GWCCategoryItem::vfunc_15 (287 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AF1F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push offset ext_008B76A9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [eax + 4]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x10], edx
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 0xc]
        add ecx, 3
        mov dword ptr [esp + 0xc], ecx
        mov ecx, dword ptr [edi + 0x14]
        sub edx, 4
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x14], edx
        call ext_006A7C00
        cmp eax, edi
        jne L_271
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [edi + 0x14]
        cmp eax, ecx
        je L_267
        test eax, eax
        je L_258
        mov eax, dword ptr [eax + 0x20]
L_258:
        mov ecx, dword ptr [ecx + 0x20]
        push eax
        push ecx
        call dword ptr [mem_009256BC]
        test eax, eax
        je L_271
L_267:
        mov ecx, dword ptr [edi + 0x14]
        call ext_006A7D70
        jmp L_279
L_271:
        mov ecx, dword ptr [edi + 0x14]
        call ext_006A7D50
L_279:
        mov esi, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x38]
        mov ecx, esi
        call eax
        push 1
        mov ecx, esi
        mov ebx, eax
        call ext_006A6010
        cmp dword ptr [edi + 0x84], 0x10
        jb L_2a0
        mov edi, dword ptr [edi + 0x70]
        jmp L_2a3
L_2a0:
        add edi, 0x70
L_2a3:
        push edi
        lea ecx, [esp + 0x34]
        call dword ptr [mem_009242F0]
        mov edi, dword ptr [esi]
        push 0x8024
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [edi + 0x70]
        push eax
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x24], 0xffffffff
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ebx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 8
    }
}
