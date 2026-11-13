// Decompiled translation unit: src/NMData/RigEventData.cpp

// [0x004D4730] NMData::RigEventData::vfunc_1_off_184 (104 bytes)
extern "C" void ext_004D40E0();
extern "C" int mem_00A34650;
extern "C" int mem_00924FC8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) bool __fastcall fn_004D4730(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        lea eax, [esp + 0x4]
        push eax
        add ecx, 0xfffffe7c
        call ext_004D40E0
        mov ecx, dword ptr [mem_00A34650]
        push ecx
        push eax
        mov dword ptr [esp + 0x30], 0x0
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        lea ecx, [esp + 0x4]
        mov bl, al
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        mov al, bl
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x004D3D50] NMData::RigEventData::vfunc_0_off_154 (121 bytes)
extern "C" void ext_00494000();
extern "C" void ext_004940E0();

extern "C" __declspec(naked) void __fastcall fn_004D3D50(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        sub esp, 0xc
        push esi
        push 0x0
        push 0x0
        push 0x40
        lea ecx, [esp + 0x10]
        call ext_00494000
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x14]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        push 0x1
        push 0x1000
        mov ecx, esi
        mov dword ptr [esi + 0x8], eax
        call ext_004940E0
        push 0x1
        push 0x2000
        mov ecx, esi
        call ext_004940E0
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x4], 0x2
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [eax + 0x8], ecx
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [edx], 0x6
        mov dword ptr [eax], 0x6
        pop esi
        add esp, 0xc
        ret 0x10
    }
}

// [0x004D3C60] NMData::RigEventData::vfunc_13 (80 bytes)
// Stack args: p1 (returned in eax), name (const std::string&).
// Compares name against a literal via imported operator==(string, const char*)
// (cdecl, add esp,8). On match: p1->ext_00661650(this+0x398) (ecx = p1).
// Otherwise: ext_0046F7D0(p1) (cdecl, add esp,4). Both return p1 with ret 8.
extern "C" void ext_0046F7D0();
extern "C" void ext_00661650();
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void* __fastcall fn_004D3C60(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        push 0x948360
        push eax
        mov esi, ecx
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je second
        add esi, 0x398
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    second:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004DCD80] NMData::RigEventData::vfunc_83 (33 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_004DCC80();

extern "C" __declspec(naked) void __fastcall fn_004DCD80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0xae6004
        lea ecx, [esi + 0x16c]
        call ext_0040ECB0
        push 0xae6004
        mov ecx, esi
        call ext_004DCC80
        pop esi
        ret
    }
}

// [0x004D3D00] NMData::RigEventData::vfunc_59 (34 bytes)
extern "C" void ext_006404E0();
extern "C" int mem_00A9F218;

extern "C" __declspec(naked) void __fastcall fn_004D3D00(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F218]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0Ch]
        mov edi, dword ptr [esi]
        push eax
        call ext_006404E0
        mov edx, dword ptr [edi + 58h]
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}
