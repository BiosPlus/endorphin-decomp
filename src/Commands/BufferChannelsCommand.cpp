// Decompiled translation unit: src/Commands/BufferChannelsCommand.cpp

extern "C" void __stdcall ext_0048F1F0(void* p);

// [0x0048F4F0] Commands::BufferChannelsCommand::vfunc_1 (10 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048F4F0(void* self) {
    __asm {
        lea eax, [ecx + 0x20]
        push eax
        call ext_0048F1F0
        ret
    }
}

// [0x0048F500] Commands::BufferChannelsCommand::vfunc_2 (10 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048F500(void* self) {
    __asm {
        lea eax, [ecx + 0x14]
        push eax
        call ext_0048F1F0
        ret
    }
}
