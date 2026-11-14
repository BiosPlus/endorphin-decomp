// Decompiled translation unit: src/NMData/TransitionEventData.cpp

// [0x004D0CF0] NMData::TransitionEventData::vfunc_81 (67 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00594640();
extern "C" void ext_005AA830();
extern "C" void ext_004C0340();

extern "C" __declspec(naked) void __fastcall fn_004D0CF0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594640
        test eax, eax
        mov dword ptr [esi + 0x168], eax
        je L_skip
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x28]
        call eax
        test al, al
        je L_skip
        push 0x0
        lea ecx, [esi + 0x198]
        call ext_005AA830
    L_skip:
        mov ecx, esi
        call ext_004C0340
        pop esi
        ret 0x4
    }
}

// [0x004D2750] NMData::TransitionEventData::vfunc_15 (127 bytes)
extern "C" void ext_004C3410();
extern "C" void ext_004D26F0();
extern "C" void ext_004D2710();
extern "C" void ext_004D2730();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void* __fastcall fn_004D2750(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0xc]
        mov eax, edx
        sub eax, 0x2ec
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_2ec
        sub eax, 0x2b
        je L_317
        sub eax, 0x68
        je L_37f
        push edx
        push esi
        call ext_004C3410
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_37f:
        push ecx
        push esi
        call ext_004D26F0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_317:
        cmp dword ptr [ecx + 0x190], 0x4
        jne L_else
        push ecx
        push esi
        call ext_004D2730
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_else:
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_2ec:
        push ecx
        push esi
        call ext_004D2710
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004D0B80] NMData::TransitionEventData::vfunc_59 (34 bytes)
extern "C" void ext_006404E0();
extern "C" int mem_00A9F358;

extern "C" __declspec(naked) void __fastcall fn_004D0B80(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F358]
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

// [0x004D3240] NMData::TransitionEventData::vfunc_87 (68 bytes)
extern "C" void __fastcall ext_004D2AA0(void*);
extern "C" void __fastcall ext_004D2B40(void*);
extern "C" void __cdecl ext_006A5C5C(void*);

extern "C" void __fastcall fn_004D3240(void* self) {
    char* s = (char*)self;
    if (*(void**)(s + 0x18C)) {
        ext_004D2AA0(*(void**)(s + 0x18C));
        void* p = *(void**)(s + 0x18C);
        if (p) {
            ext_004D2B40(p);
            ext_006A5C5C(p);
        }
        *(void**)(s + 0x18C) = 0;
        *(int*)(s + 0x184) = 0x7FFFFFFF;
    }
}
