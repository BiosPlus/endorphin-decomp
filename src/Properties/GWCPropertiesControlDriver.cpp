// Decompiled translation unit: src/Properties/GWCPropertiesControlDriver.cpp

// [0x0041D370] Properties::GWCPropertiesControlDriver::vfunc_1 (20 bytes)
extern "C" void __fastcall ext_006AA890(void* self);

extern "C" void __fastcall fn_0041D370(void* self) {
    unsigned char* p = (unsigned char*)self;
    void* child = *(void**)(p + 0x0c);
    ext_006AA890(child);
    *(int*)(p + 0x10) = 0;
}

// [0x0041CA70] Properties::GWCPropertiesControlDriver::vfunc_8 (21 bytes)
extern "C" void ext_006AD180();

// Ignores ecx-this; takes one stack arg (a1 at [esp+4]). If a1 is null, return 0;
// otherwise replace ecx with a1 and tail-call 0x006AD180 (ret 4 after it).
extern "C" __declspec(naked) void __fastcall fn_0041CA70(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        test ecx, ecx
        jne has_arg
        xor eax, eax
        ret 4
    has_arg:
        call ext_006AD180
        ret 4
    }
}
