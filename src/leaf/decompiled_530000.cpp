// Decompiled translation unit: src/leaf/decompiled_530000.cpp

extern "C" int mem_009253D8;
extern "C" int mem_009253D4;

// [0x00532C30] sub_00532C30 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_00532C30(void* self) {
    __asm {
        push esi
        push 0x1701
        mov esi, ecx
        call dword ptr [mem_009253D8]
        call dword ptr [mem_009253D4]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10]
        pop esi
        jmp edx
    }
}
