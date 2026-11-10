// Decompiled translation unit: src/AdvXMLParser/EntityRef.cpp

extern "C" int mem_00924EC0;
extern "C" int mem_00924FD8;

// [0x00640A10] AdvXMLParser::EntityRef::vfunc_5 (60 bytes)
// Appends '&' to the string at *(a1+8), then the string at this+4, then ';' to the same string; clears a1+0x11 before each append. ret 4.
extern "C" __declspec(naked) void __fastcall fn_00640A10(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esi + 0x8]
        push 0x26
        mov byte ptr [esi + 0x11], 0x0
        call dword ptr [mem_00924EC0]
        mov ecx, dword ptr [esi + 0x8]
        add edi, 0x4
        push edi
        mov byte ptr [esi + 0x11], 0x0
        call dword ptr [mem_00924FD8]
        mov ecx, dword ptr [esi + 0x8]
        push 0x3b
        mov byte ptr [esi + 0x11], 0x0
        call dword ptr [mem_00924EC0]
        pop edi
        pop esi
        ret 0x4
    }
}
