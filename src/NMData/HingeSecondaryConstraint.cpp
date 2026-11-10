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
