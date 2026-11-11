// Decompiled translation unit: src/classes/GWCPropInPlaceDateTime.cpp

extern "C" void ext_006A5DA0();
extern "C" void ext_006A5E00();
extern "C" void ext_006A60D0();
extern "C" int mem_009255A0;
extern "C" int mem_00925650;

// [0x006B4F20] GWCPropInPlaceDateTime::vfunc_66 (88 bytes)
extern "C" __declspec(naked) int __fastcall fn_006B4F20(void* self, int edx_unused, void* msg) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp dword ptr [eax + 0x4], 0x100
        push esi
        mov esi, ecx
        jne base_path
        mov ecx, dword ptr [eax + 0x8]
        cmp ecx, 0xd
        je key_match
        cmp ecx, 0x1b
        jne base_path
key_match:
        push 1
        push 0
        push 0
        push 0
        push eax
        call dword ptr [mem_009255A0]
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, eax
        call ext_006A60D0
        mov eax, 1
        pop esi
        ret 4
base_path:
        push eax
        mov ecx, esi
        call ext_006A5DA0
        pop esi
        ret 4
    }
}
