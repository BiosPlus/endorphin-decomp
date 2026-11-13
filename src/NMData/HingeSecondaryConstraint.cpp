// Decompiled translation unit: src/NMData/HingeSecondaryConstraint.cpp

// [0x00611790] NMData::HingeSecondaryConstraint::vfunc_8_off_C (52 bytes)
extern "C" void ext_00528BB0();
extern "C" void ext_00528C70();

extern "C" __declspec(naked) void __fastcall fn_00611790(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x154]
        test eax, eax
        mov ecx, dword ptr [esp + 0x8]
        mov byte ptr [esi + 0x5c], cl
        je done
        push ecx
        push 0x20000
        lea ecx, [eax + 0xc]
        call ext_00528BB0
        mov ecx, dword ptr [esi + 0x154]
        add ecx, 0xc
        call ext_00528C70
    done:
        pop esi
        ret 4
    }
}

// [0x0061EA10] NMData::HingeSecondaryConstraint::vfunc_17_off_C (89 bytes)
extern "C" void ext_0061E9D0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0061EA10(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x164
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0061E9D0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
