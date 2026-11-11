// Decompiled translation unit: src/AdvXMLParser/InvalidRefException.cpp

// [0x0063EAD0] AdvXMLParser::InvalidRefException::vfunc_0 (89 bytes)
extern "C" void ext_0063E970();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0063EAD0(void* self) {
    __asm {
        push -1
        push 0x8aed18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        call ext_0063E970
        test byte ptr [esp + 0x18], 0x1
        je L_0063EB15
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_0063EB15:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}
