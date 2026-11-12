// Decompiled translation unit: src/NMData/IncarnationEventData.cpp

extern "C" void ext_004CEAC0();

// [0x004CF320] NMData::IncarnationEventData::vfunc_89 (29 bytes)
extern "C" __declspec(naked) void __fastcall fn_004CF320(void* self) {
    __asm {
        cmp byte ptr [ecx + 0x17c], 0
        mov byte ptr [ecx + 0x188], 0
        je done
        push ecx
        mov ecx, dword ptr [ecx + 0x184]
        call ext_004CEAC0
    done:
        ret
    }
}

extern "C" void ext_00494000();
extern "C" void ext_004940E0();

// [0x004CE860] NMData::IncarnationEventData::vfunc_0_off_154 (87 bytes)
extern "C" __declspec(naked) void __fastcall fn_004CE860(void* self, int edx_unused, int* a1, int* a2, int a3, int a4) {
    __asm {
        sub esp, 0xc
        push esi
        push 0
        push 0
        push 0x40
        lea ecx, [esp + 0x10]
        call ext_00494000
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x14]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        push 0
        push 0x1000
        mov ecx, esi
        mov dword ptr [esi + 0x8], eax
        call ext_004940E0
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x4], 1
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov ecx, dword ptr [esi + 0x8]
        mov dword ptr [eax + 0x8], ecx
        pop esi
        add esp, 0xc
        ret 0x10
    }
}

extern "C" void ext_004C3410();
extern "C" void ext_004CFDC0();
extern "C" void ext_004CFDE0();
extern "C" void ext_00671F30();

// [0x004CFE20] NMData::IncarnationEventData::vfunc_15 (105 bytes)
extern "C" __declspec(naked) void __fastcall fn_004CFE20(void* self) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0xc]
        mov eax, edx
        sub eax, 0x2ec
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0
        je case_2ec
        sub eax, 0x2b
        je case_317
        push edx
        push esi
        call ext_004C3410
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    case_317:
        cmp dword ptr [ecx + 0x180], 4
        jne f30
        push ecx
        push esi
        call ext_004CFDE0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    f30:
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    case_2ec:
        push ecx
        push esi
        call ext_004CFDC0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
