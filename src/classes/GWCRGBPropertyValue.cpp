// Decompiled translation unit: src/classes/GWCRGBPropertyValue.cpp

extern "C" void ext_006A6172();
extern "C" void ext_006A61C6();
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
