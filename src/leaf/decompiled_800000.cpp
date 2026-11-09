// Decompiled translation unit: src/leaf/decompiled_800000.cpp

extern "C" void ext_00859730();
extern "C" void ext_0080FB20();

// [0x0080FAE0] sub_0080FAE0 (16 bytes)
extern "C" __declspec(naked) void __cdecl fn_0080FAE0(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        je done
        push eax
        call ext_00859730
        pop ecx
    done:
        ret
    }
}

// [0x0080FB10] sub_0080FB10 (16 bytes)
extern "C" __declspec(naked) void __cdecl fn_0080FB10(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push eax
        call ext_0080FB20
        add esp, 8
        ret
    }
}

// [0x00803990] sub_00803990 (44 bytes)
extern "C" void fn_00803980();

extern "C" void __cdecl fn_00803990(void* self, int a2, int a3, int a4) {
    int* p = reinterpret_cast<int*>(self);
    p[1] = a3;
    int cb = a4 ? a4 : reinterpret_cast<int>(&fn_00803980);
    p[3] = cb;
    p[0] = a2 - 4;
    p[2] = 0;
}
