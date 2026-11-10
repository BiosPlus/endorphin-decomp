// Decompiled translation unit: src/Sensors/SensorAbsoluteTime.cpp

extern "C" void __fastcall ext_00629DC0(void* self);

// [0x00629DE0] Sensors::SensorAbsoluteTime::vfunc_17 (13 bytes)
extern "C" float __fastcall fn_00629DE0(void* self) {
    ext_00629DC0(self);
    return *(float*)((char*)self + 0x28);
}

// [0x006204A0] Sensors::SensorAbsoluteTime::vfunc_0 (36 bytes)
extern "C" void ext_005FF040();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void* __fastcall fn_006204A0(void* self, int edx_unused, int flag) {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 0x976c34
        call ext_005FF040
        test byte ptr [esp + 0x8], 1
        je skip
        push esi
        call ext_006A5C5C
        add esp, 4
skip:
        mov eax, esi
        pop esi
        ret 4
    }
}
