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
