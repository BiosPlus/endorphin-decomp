// Decompiled translation unit: src/classes/GWCRGBPropertyValue.cpp

extern "C" void ext_006A6172();
extern "C" void ext_006A61C6();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" int mem_0092563C;
extern "C" int mem_00924300;
extern "C" int mem_0092521C;
extern "C" int mem_009242F4;

// [0x006B3C40] GWCRGBPropertyValue::vfunc_1 (79 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B3C40(void* self) {
    __asm {
        add dword ptr [esp + 0x8], 0x1
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x4], 0x64
        jne short L_done
        push 0x2
        call dword ptr [mem_0092563C]
        mov eax, dword ptr [esi + 0x40]
        add dword ptr [esp + 0x10], 0x1
        sub dword ptr [esp + 0x14], 0x1
        sub dword ptr [esp + 0x18], 0x2
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x8]
        push ecx
        lea edx, [esp + 0x10]
        push edx
        mov ecx, esi
        call ext_006A6172
        push 0x0
        push 0x0
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_006A61C6
L_done:
        pop esi
        ret 0x1c
    }
}

// [0x006B3AC0] GWCRGBPropertyValue::vfunc_5 (97 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B3AC0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x34], 0x1
        jne short L_skip_free
        cmp dword ptr [esi + 0x4], 0x64
        jne short L_skip_free
        mov eax, dword ptr [esi + 0x40]
        push eax
        call ext_006A5C5C
        add esp, 0x4
L_skip_free:
        mov al, byte ptr [esp + 0xc]
        test al, al
        mov byte ptr [esi + 0x34], al
        jne short L_flag_set
        cmp dword ptr [esi + 0x4], 0x64
        jne short L_done
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x40], ecx
        pop esi
        ret 0x8
L_flag_set:
        cmp dword ptr [esi + 0x4], 0x64
        jne short L_done
        push 0x4
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je short L_null
        mov dword ptr [eax], 0x0
        mov dword ptr [esi + 0x40], eax
        pop esi
        ret 0x8
L_null:
        xor eax, eax
        mov dword ptr [esi + 0x40], eax
L_done:
        pop esi
        ret 0x8
    }
}

// [0x006B3BB0] GWCRGBPropertyValue::vfunc_3 (102 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B3BB0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0Ch
        xor eax, eax
        push esi
        mov dword ptr [esp + 4], eax
        mov dword ptr [esp + 8], eax
        mov dword ptr [esp + 0Ch], eax
        mov esi, ecx
        lea eax, [esp + 4]
        push eax
        lea ecx, [esp + 0Ch]
        push ecx
        lea edx, [esp + 14h]
        push edx
        push 9919D4h
        lea ecx, [esp + 24h]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_0092521C]
        movzx ecx, byte ptr [esp + 20h]
        mov edx, dword ptr [esi + 40h]
        xor eax, eax
        mov ah, byte ptr [esp + 18h]
        add esp, 14h
        mov al, byte ptr [esp + 8]
        shl eax, 8
        or eax, ecx
        lea ecx, [esp + 14h]
        mov dword ptr [edx], eax
        call dword ptr [mem_009242F4]
        pop esi
        add esp, 0Ch
        ret 4
    }
}
