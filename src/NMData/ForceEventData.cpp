// Decompiled translation unit: src/NMData/ForceEventData.cpp

// [0x004C66F0] NMData::ForceEventData::vfunc_87 (19 bytes)
extern "C" void __stdcall ext_004C64D0(int arg);

extern "C" __declspec(naked) void __fastcall fn_004C66F0(void* self) {
    __asm {
        add ecx, 0x184
        cmp dword ptr [ecx], 0x0
        je L_ret
        push 0x0
        call ext_004C64D0
    L_ret:
        ret
    }
}

// [0x004C4E40] NMData::ForceEventData::vfunc_60 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C4E40(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x3c]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x266
        push esi
        mov dword ptr [esp + 0xc], 0x0
        call edx
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x004C1AF0] NMData::ForceEventData::vfunc_69 (35 bytes)
extern "C" void ext_004C0340();

extern "C" void __fastcall fn_004C1AF0(void* self, int edx_unused, int a1) {
    char* p = (char*)self;
    *(int*)(p + 0x15c) = a1;
    if (a1 >= *(int*)(p + 0x160)) {
        *(int*)(p + 0x160) = a1 + 1;
    }
    ext_004C0340();
}

// [0x004C1B20] NMData::ForceEventData::vfunc_73 (42 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C1B20(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 0x15c], edx
        mov eax, dword ptr [eax + 0x4]
        cmp edx, eax
        mov dword ptr [ecx + 0x160], eax
        jl L_call
        add edx, 0x1
        mov dword ptr [ecx + 0x160], edx
    L_call:
        call ext_004C0340
        ret 0x4
    }
}

// [0x004C5350] NMData::ForceEventData::vfunc_6_off_C (53 bytes)
extern "C" void ext_004C50C0();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_004C5350(void* self, int edx_unused, void* out) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx - 0x8]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0x8]
        add ecx, -0x8
        push edx
        call eax
        mov ecx, eax
        call ext_004C50C0
        fstp dword ptr [esp]
        mov eax, dword ptr [esp + 0x8]
        fld dword ptr [esp]
        fst dword ptr [eax]
        fst dword ptr [eax + 0x4]
        fstp dword ptr [eax + 0x8]
        fldz
        fstp dword ptr [eax + 0xc]
        pop ecx
        ret 0x4
    }
}

// [0x004C4EA0] NMData::ForceEventData::vfunc_0_off_154 (141 bytes)
extern "C" void ext_00494000();
extern "C" void ext_004940E0();

extern "C" __declspec(naked) void __fastcall fn_004C4EA0(void* self, int edx_unused, void* a1, void* a2, int a3, int a4) {
    __asm {
        sub esp, 0xc
        push esi
        push 0x0
        push 0x0
        push 0x8
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
        push 0x0
        push 0x0
        push 0x8
        lea ecx, [esp + 0x10]
        call ext_00494000
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        push 0x1
        push 0x1000
        mov dword ptr [ecx + 0x8], eax
        call ext_004940E0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [ecx], 0x6
        mov dword ptr [edx], 0x6
        pop esi
        add esp, 0xc
        ret 0x10
    }
}

// [0x004C63A0] NMData::ForceEventData::vfunc_15 (80 bytes)
extern "C" void ext_004C3410();
extern "C" void ext_004C6360();
extern "C" void ext_004C6380();

extern "C" __declspec(naked) void __fastcall fn_004C63A0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x266
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_266
        cmp eax, 0x2ff
        je L_2ff
        push eax
        push esi
        call ext_004C3410
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_2ff:
        push ecx
        push esi
        call ext_004C6380
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_266:
        push ecx
        push esi
        call ext_004C6360
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004C5390] NMData::ForceEventData::vfunc_5_off_C (72 bytes)
extern "C" void ext_00480430();
extern "C" void ext_004C5010();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_004C5390(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [ecx - 0x8]
        mov edx, dword ptr [eax + 0xc]
        push esi
        lea esi, [ecx - 0x8]
        mov ecx, dword ptr [mem_00B40640]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_00480430
        mov eax, dword ptr [esp + 0x8]
        fld dword ptr [eax]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [mem_00B40640]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        mov edx, dword ptr [edx + 0xc]
        push ecx
        fstp dword ptr [esp]
        push eax
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_004C5010
        pop esi
        ret 0x4
    }
}

extern "C" void ext_004C2330();
extern "C" void ext_006A5C5C();

struct ForceEventSub_004C6850 {
    int unk0;
    void* ptr4;
    int unk8;
    int unkC;
};

// [0x004C6850] NMData::ForceEventData::vfunc_0 (90 bytes)
extern "C" void* __fastcall fn_004C6850(char* self, int edx_unused, unsigned int flags) {
    ForceEventSub_004C6850* esi = *(ForceEventSub_004C6850**)(self + 0x184);
    if (esi) {
        if (esi->ptr4) {
            ((void (*)(void*))ext_006A5C5C)(esi->ptr4);
        }
        esi->ptr4 = 0;
        esi->unk8 = 0;
        esi->unkC = 0;
        ((void (*)(void*))ext_006A5C5C)(esi);
    }
    ((void (__fastcall*)(void*))ext_004C2330)(self);
    if (flags & 1) {
        ((void (*)(void*))ext_006A5C5C)(self);
    }
    return self;
}

// [0x004C63F0] NMData::ForceEventData::vfunc_84 (147 bytes)
extern "C" void ext_004C6250();
extern "C" void ext_00528BB0();
extern "C" void ext_00528BF0();
extern "C" void ext_00594000();
extern "C" __declspec(naked) void __fastcall fn_004C63F0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp+8]
        push esi
        mov esi, ecx
        cmp ebx, dword ptr [esi+0x15c]
        jne L1
        cmp byte ptr [esi+0x188], 0
        jne L1
        cmp byte ptr [esi+0x17c], 0
        je L1
        cmp dword ptr [esi+0x184], 0
        je L1
        push edi
        call ext_00594000
        add eax, 0x168
        push eax
        push 0
        lea edi, [esi+0xc]
        push 0x200
        mov ecx, edi
        call ext_00528BF0
        push 0
        push 0x200
        mov ecx, edi
        call ext_00528BB0
        mov ecx, dword ptr [esi+0x184]
        call ext_004C6250
        mov byte ptr [esi+0x188], 1
        pop edi
    L1:
        mov eax, dword ptr [esi+0x15c]
        add eax, 3
        cmp ebx, eax
        jne L2
        cmp byte ptr [esi+0x188], 0
        je L2
        push 1
        push 0x200
        lea ecx, [esi+0xc]
        call ext_00528BB0
    L2:
        pop esi
        pop ebx
        ret 4
    }
}
