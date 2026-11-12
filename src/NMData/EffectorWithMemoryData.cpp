// Decompiled translation unit: src/NMData/EffectorWithMemoryData.cpp

extern "C" void ext_0060BDF0();

// [0x0060C470] NMData::EffectorWithMemoryData::vfunc_19 (22 bytes)
extern "C" void __fastcall fn_0060C470(void* self) {
    typedef void (__fastcall *FnBase)(void*);
    ((FnBase)ext_0060BDF0)(self);
    *(float*)((char*)self + 0x5c) = 0.0f;
    *(int*)((char*)self + 0x60) = 0x14;
}

// [0x0060C2C0] NMData::EffectorWithMemoryData::vfunc_20 (157 bytes)
// Returns std::string by value: "EffectorWithMemoryData(" + this->member(+0x4) + ")".
// Hidden return buffer is the first stack arg; returned in eax.
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void* __fastcall fn_0060C2C0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push 0x8a86bc
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x3c
        push esi
        mov esi, ecx
        push 0x972218
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        add esi, 0x4
        push esi
        push eax
        lea eax, [esp + 0x10]
        push eax
        mov dword ptr [esp + 0x54], 0x1
        call dword ptr [mem_00924FD0]
        mov esi, dword ptr [esp + 0x5c]
        push 0x93bf0c
        push eax
        push esi
        mov byte ptr [esp + 0x60], 0x2
        call dword ptr [mem_00924ECC]
        add esp, 0x18
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x1
        mov byte ptr [esp + 0x48], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x48], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x40]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x48
        ret 0x8
    }
}
