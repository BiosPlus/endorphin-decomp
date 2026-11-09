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

// [0x005A9880] NMData::BackGroundData::vfunc_3_off_4 (37 bytes)
// Calls vtable slot 9 (+0x24) on self with a 0 argument, then copy-constructs the
// returned std::string into the hidden return buffer (stack arg, ret 0x4) via the
// imported basic_string copy ctor; returns the buffer in eax.
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_005A9880(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push esi
        mov dword ptr [esp + 0x4], 0
        call edx
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0059DB70] NMData::BackGroundData::vfunc_23_off_4 (38 bytes)
extern "C" int mem_0093BED0;
extern "C" int mem_0093BEDC;
typedef void* (__thiscall *AssignCStrF)(void* self, const char* s);
extern "C" AssignCStrF mem_00924FD4;
extern "C" void __fastcall fn_0059DB70(void* self, int edx_unused, int a1) {
    mem_00924FD4(static_cast<char*>(self) + 0x14, reinterpret_cast<const char*>(mem_0093BED0));
    mem_00924FD4(static_cast<char*>(self) + 0x30, reinterpret_cast<const char*>(mem_0093BEDC));
}

// [0x0059DD70] NMData::BackGroundData::vfunc_4_off_10 (40 bytes)
// Scales the float at self+0x4dc by *a1, then calls vtable slot 25 (+0x64) on the
// object at self-0xc with that product as a single float argument; returns its result.
extern "C" __declspec(naked) float __fastcall fn_0059DD70(void* self, int edx_unused, const float* a1) {
    __asm {
        mov eax, ecx
        fld dword ptr [eax + 0x4dc]
        mov edx, dword ptr [eax - 0xc]
        mov edx, dword ptr [edx + 0x64]
        lea ecx, [eax - 0xc]
        mov eax, dword ptr [esp + 0x4]
        fmul dword ptr [eax]
        push ecx
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esp]
        call edx
        ret 0x4
    }
}
