// Decompiled translation unit: src/leaf/decompiled_7A0000.cpp

// [0x007AA880] sub_007AA880 (111 bytes)
extern "C" void ext_006A6D5C();
extern "C" void ext_006B9D70();
extern "C" void ext_0079BA90();

extern "C" __declspec(naked) void __fastcall fn_007AA880(void* self) {
    __asm {
        push -1
        push 0x8c1af0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x9981bc
        lea ecx, [esi + 0x788]
        mov dword ptr [esp + 0x10], 0x1
        call ext_006B9D70
        push 0x6b9d70
        push 0x12
        lea eax, [esi + 0x1dc]
        push 0x4c
        push eax
        mov byte ptr [esp + 0x20], 0x0
        call ext_006A6D5C
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0079BA90
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
