// Decompiled translation unit: src/Geometry/AnimationType.cpp

// [0x005B10D0] Geometry::AnimationType::vfunc_18 (30 bytes)
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void __fastcall fn_005B10D0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005B4860] Geometry::AnimationType::vfunc_12 (89 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_00B43574;
extern "C" int mem_00B43578;
extern "C" int mem_00B4357C;
extern "C" int mem_00B43580;
extern "C" int mem_00B43584;
extern "C" __declspec(naked) void __fastcall fn_005B4860(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x008A359E
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43584], al
        jne L_done_005B4860
        or dword ptr [mem_00B43584], eax
        xor eax, eax
        push 0x0091DD80
        mov dword ptr [mem_00B43578], eax
        mov dword ptr [mem_00B4357C], eax
        mov dword ptr [mem_00B43580], eax
        call ext_006A6C87
        add esp, 0x4
L_done_005B4860:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43574
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B48C0] Geometry::AnimationType::vfunc_13 (89 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_00B43588;
extern "C" int mem_00B4358C;
extern "C" int mem_00B43590;
extern "C" int mem_00B43594;
extern "C" int mem_00B43598;
extern "C" __declspec(naked) void __fastcall fn_005B48C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x008A35BE
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43598], al
        jne L_done_005B48C0
        or dword ptr [mem_00B43598], eax
        xor eax, eax
        push 0x0091DD40
        mov dword ptr [mem_00B4358C], eax
        mov dword ptr [mem_00B43590], eax
        mov dword ptr [mem_00B43594], eax
        call ext_006A6C87
        add esp, 0x4
L_done_005B48C0:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43588
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret
    }
}
