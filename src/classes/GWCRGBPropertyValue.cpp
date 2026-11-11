// Decompiled translation unit: src/classes/GWCRGBPropertyValue.cpp

extern "C" void ext_006A6172();
extern "C" void ext_006A61C6();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" int mem_0092563C;

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
