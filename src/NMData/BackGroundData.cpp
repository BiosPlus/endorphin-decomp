// Decompiled translation unit: src/NMData/BackGroundData.cpp

extern "C" void ext_005A7FA0();

// [0x005A9960] NMData::BackGroundData::vfunc_1 (15 bytes)
// Pushes 0 and arg0 and tail-calls 0x005A7FA0 (callee cleans up), then returns popping arg0.
extern "C" __declspec(naked) void __stdcall fn_005A9960(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push eax
        call ext_005A7FA0
        ret 4
    }
}

// [0x005A98F0] NMData::BackGroundData::vfunc_6 (35 bytes)
// Constructs a std::string in the hidden return buffer (stack arg, ret 0x4) from a
// C string pointer loaded from a global, via the imported basic_string(const char*) ctor;
// returns the buffer in eax.
extern "C" int mem_00A9ED98;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_005A98F0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9ED98]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0059F4F0] NMData::BackGroundData::vfunc_30_off_4 (36 bytes)
extern "C" void ext_0059E060();
extern "C" bool __fastcall fn_0059F4F0(void* self) {
    typedef unsigned char (__fastcall *CheckF)(void*);
    typedef unsigned char (__thiscall *VfF)(void*);
    void* obj = (char*)self - 4;
    if (((CheckF)ext_0059E060)(obj)) {
        if (((VfF)(*(void***)obj)[10])(obj)) {
            return false;
        }
    }
    return true;
}
