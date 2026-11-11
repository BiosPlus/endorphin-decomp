// Decompiled translation unit: src/NMData/HingeLimit.cpp

extern "C" void ext_005B1870();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();

// [0x006120D0] NMData::HingeLimit::vfunc_0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_006120D0(void* self) {
    __asm {
        push -1
        push 0x891e68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x10], 0
        call ext_005B1870
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065F440
        test byte ptr [esp + 0x18], 0x1
        je L_0061211C
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_0061211C:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}
