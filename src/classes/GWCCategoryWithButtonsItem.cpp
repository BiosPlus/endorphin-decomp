// Decompiled translation unit: src/classes/GWCCategoryWithButtonsItem.cpp

extern "C" void ext_006A5E00();
extern "C" void ext_006A6010();
extern "C" void ext_006A7C00();
extern "C" void ext_006A7D50();
extern "C" void ext_006A7D70();
extern "C" void ext_006AD010();
extern "C" int mem_00925654;
extern "C" int mem_009256BC;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

// [0x006B3980] GWCCategoryWithButtonsItem::vfunc_13 (271 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B3980(void* self) {
    __asm {
        push -1
        push 0x8b76a9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [eax + 0x4]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x14], edx
        mov edx, dword ptr [eax + 0x8]
        mov eax, dword ptr [eax + 0xc]
        add ecx, 0x3
        mov dword ptr [esp + 0x10], ecx
        mov ecx, dword ptr [edi + 0x14]
        sub edx, 0x4
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x18], edx
        call ext_006A7C00
        cmp eax, edi
        jne L_006B3A02
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [edi + 0x14]
        cmp eax, ecx
        je L_006B39F8
        test eax, eax
        je L_006B39E9
        mov eax, dword ptr [eax + 0x20]
    L_006B39E9:
        mov ecx, dword ptr [ecx + 0x20]
        push eax
        push ecx
        call dword ptr [mem_009256BC]
        test eax, eax
        je L_006B3A02
    L_006B39F8:
        mov ecx, dword ptr [edi + 0x14]
        call ext_006A7D70
        jmp L_006B3A0A
    L_006B3A02:
        mov ecx, dword ptr [edi + 0x14]
        call ext_006A7D50
    L_006B3A0A:
        mov esi, dword ptr [esp + 0x30]
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x38]
        mov ecx, esi
        call eax
        push 0x1
        mov ecx, esi
        mov ebx, eax
        call ext_006A6010
        lea ecx, [esp + 0x34]
        push ecx
        mov ecx, edi
        call ext_006AD010
        mov edi, eax
        mov ebp, dword ptr [esi]
        push 0x8024
        lea edx, [esp + 0x14]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x30], 0
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [ebp + 0x70]
        mov ecx, esi
        call eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x38]
        push ebx
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x8
    }
}
