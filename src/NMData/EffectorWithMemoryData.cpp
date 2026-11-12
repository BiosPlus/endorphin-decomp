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

// [0x0060CE80] NMData::EffectorWithMemoryData::vfunc_22 (126 bytes)
// Forwards (a1, a2, a3) to 0x60C820, then dynamic_cast<EffectorData&>(a1) and compares the
// int at +0x60 and float at +0x5c of self and the cast result via 0x60C070 / 0x487A30.
extern "C" void ext_0060C820();
extern "C" void ext_0060C070();
extern "C" void ext_00487A30();
extern "C" void ext_006A6E9E();
extern "C" int mem_00A94EC4;
extern "C" int mem_00A93790;
extern "C" int mem_00972380;
extern "C" int mem_0097236C;
extern "C" __declspec(naked) void __fastcall fn_0060CE80(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x10]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call ext_0060C820
        push 1
        push offset mem_00A94EC4
        push offset mem_00A93790
        push 0
        push edi
        call ext_006A6E9E
        add esp, 0x14
        mov edi, eax
        mov edx, dword ptr [edi + 0x60]
        mov eax, dword ptr [esi + 0x60]
        push offset mem_00972380
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], edx
        push ecx
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x14], eax
        call ext_0060C070
        fld dword ptr [edi + 0x5c]
        push offset mem_0097236C
        sub esp, 8
        fstp dword ptr [esp + 4]
        lea ecx, [esp + 0x20]
        fld dword ptr [esi + 0x5c]
        fstp dword ptr [esp]
        call ext_00487A30
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}
