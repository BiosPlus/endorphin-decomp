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

// [0x0060C910] NMData::EffectorWithMemoryData::vfunc_13 (175 bytes)
extern "C" void ext_0046C0A0(void*, void*);
extern "C" int __fastcall ext_0063F530(void*, int, int, int, int);
extern "C" void __fastcall ext_0060C640(void*, int, void*);
extern "C" void ext_0053F5F0(void*, void*);
extern "C" int mem_00A9F0BC;
extern "C" int mem_00A9EFEC;
extern "C" int mem_00B53A34;
extern "C" int mem_00B53B30;
extern "C" int mem_00B53AB0;
extern "C" int mem_00B53A70;
extern "C" int mem_00B53AF0;

extern "C" __declspec(naked) void __fastcall fn_0060C910(void* self, int, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        push esi
        mov edi, ecx
        call ext_0060C640
        mov eax, dword ptr [mem_00A9F0BC]
        push 1
        push 0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L1
        cmp eax, offset mem_00B53B30
        je L1
        cmp eax, offset mem_00B53AB0
        je L1
        cmp eax, offset mem_00B53A70
        je L1
        cmp eax, offset mem_00B53AF0
        jne L2
    L1:
        mov eax, offset mem_00B53B30
    L2:
        lea ecx, [esp + 0xC]
        push ecx
        lea edx, [edi + 0x60]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9EFEC]
        add esp, 8
        push 1
        push 0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, offset mem_00B53A34
        je L3
        cmp eax, offset mem_00B53B30
        je L3
        cmp eax, offset mem_00B53AB0
        je L3
        cmp eax, offset mem_00B53A70
        je L3
        cmp eax, offset mem_00B53AF0
        jne L4
    L3:
        mov eax, offset mem_00B53B30
    L4:
        lea ecx, [esp + 0xC]
        push ecx
        add edi, 0x5C
        push edi
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        add esp, 8
        pop edi
        pop esi
        ret 4
    }
}

// [0x0060BF00] NMData::EffectorWithMemoryData::vfunc_14 (116 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0060BCF0();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_00640AA0();
extern "C" void ext_00640BC0();
extern "C" int mem_00A9FA6C;
extern "C" int mem_00A9F0BC;
extern "C" int mem_00A9EFEC;
extern "C" __declspec(naked) void __fastcall fn_0060BF00(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_0060BCF0
        mov edi, eax
        mov eax, dword ptr [mem_00A9FA6C]
        push eax
        mov ecx, edi
        call ext_00640110
        push 0x9719d8
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], eax
        call ext_00427550
        mov ecx, dword ptr [mem_00A9F0BC]
        push 0x0
        push ecx
        mov ecx, edi
        call ext_00640390
        mov edx, dword ptr [esi + 0x60]
        push edx
        push eax
        call ext_00640AA0
        mov eax, dword ptr [mem_00A9EFEC]
        add esp, 0x8
        push 0x0
        push eax
        mov ecx, edi
        call ext_00640390
        fld dword ptr [esi + 0x5c]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        add esp, 0x8
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 0x4
    }
}

extern "C" void ext_00607E70();
extern "C" void ext_0060CDE0();
extern "C" void ext_006A5C62();

// [0x0060D3E0] NMData::EffectorWithMemoryData::vfunc_15 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060D3E0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push -1
        push 0x8a8823
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 8], ebx
        push 0x88
        mov dword ptr [esp + 0x1c], ebx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0xc], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x18], 1
        je loc_60D429
        mov ecx, eax
        call ext_00607E70
        jmp loc_60D42B
    loc_60D429:
        xor eax, eax
    loc_60D42B:
        mov ecx, dword ptr [esi + 0x60]
        mov dword ptr [eax + 0x68], ecx
        fld dword ptr [esi + 0x5c]
        mov ecx, dword ptr [esp + 0x20]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        push eax
        fstp dword ptr [eax + 0x60]
        mov eax, dword ptr [esp + 0x28]
        push eax
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x24], bl
        mov dword ptr [esp + 0x14], ebx
        call ext_0060CDE0
        mov ecx, dword ptr [esp + 0x10]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0xc
    }
}
