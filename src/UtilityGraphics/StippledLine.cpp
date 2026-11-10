// Decompiled translation unit: src/UtilityGraphics/StippledLine.cpp

extern "C" void ext_00538E40();
extern "C" int mem_0092546C;
extern "C" int mem_00925494;
extern "C" int mem_00925418;
extern "C" int mem_00925438;
extern "C" int mem_0092552C;

// [0x00538E90] UtilityGraphics::StippledLine::vfunc_22 (68 bytes)
extern "C" __declspec(naked) void __fastcall fn_00538E90(void* self) {
    __asm {
        push esi
        push 4
        mov esi, ecx
        call dword ptr [mem_0092546C]
        push 0xaaaa
        push 2
        call dword ptr [mem_00925494]
        push 0xb24
        call dword ptr [mem_00925418]
        mov eax, dword ptr [esp + 8]
        push eax
        mov ecx, esi
        call ext_00538E40
        push 0xb24
        call dword ptr [mem_00925438]
        call dword ptr [mem_0092552C]
        pop esi
        ret 4
    }
}
