// Decompiled translation unit: src/NMData/AxisDefineSensorData.cpp

// [0x0060F0B0] NMData::AxisDefineSensorData::vfunc_0_off_150 (25 bytes)
extern "C" void ext_00480920();

extern "C" __declspec(naked) void __fastcall fn_0060F0B0(void* self, int edx_unused, void* dst) {
    __asm {
        push esi
        push edi
        call ext_00480920
        mov edi, dword ptr [esp + 0xc]
        mov ecx, 0x10
        mov esi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
    }
}

// [0x0060E690] NMData::AxisDefineSensorData::vfunc_62 (44 bytes)
extern "C" void ext_0060E540();
extern "C" int mem_00924EA8;

extern "C" void __fastcall fn_0060E690(void* self) {
    typedef void (__fastcall *ThisFn)(void* self);
    unsigned char* p = (unsigned char*)self;
    ((ThisFn)ext_0060E540)(self);
    (*(ThisFn*)&mem_00924EA8)(p + 0x180);
    (*(ThisFn*)&mem_00924EA8)(p + 0x19c);
    *(unsigned int*)(p + 0x1b8) = 0;
}

// [0x0058F6B0] NMData::AxisDefineSensorData::vfunc_14 (54 bytes)
extern "C" void ext_00661650();
extern "C" void ext_006619B0();

extern "C" __declspec(naked) void* __fastcall fn_0058F6B0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x199
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je special
        push eax
        push esi
        call ext_006619B0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    special:
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0060EA00] NMData::AxisDefineSensorData::vfunc_64 (135 bytes)
extern "C" void ext_00486CB0();
extern "C" void ext_00487A30();

struct DiffContext_0060EA00 {
    int a;
    int b;
};

extern "C" void __fastcall fn_0060EA00(char* self, int edx_unused, const char* other, DiffContext_0060EA00 ctx) {
    typedef void (__thiscall *Fn1)(DiffContext_0060EA00*, const void*, const void*, const void*);
    typedef void (__thiscall *Fn2)(DiffContext_0060EA00*, float, float, const void*);

    ((Fn1)ext_00486CB0)(&ctx, self + 0x14, other + 0x14, (const void*)0x93f7bc);
    ((Fn1)ext_00486CB0)(&ctx, self + 0x154, other + 0x154, (const void*)0x96084c);
    ((Fn2)ext_00487A30)(&ctx, *(float*)(self + 0x174), *(float*)(other + 0x174), (const void*)0x9724a8);
    ((Fn2)ext_00487A30)(&ctx, *(float*)(self + 0x178), *(float*)(other + 0x178), (const void*)0x972498);
}

// [0x0060F420] NMData::AxisDefineSensorData::vfunc_61 (122 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FC8;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0060F420(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr [mem_00924FC8]
        mov ebx, ecx
        lea esi, [ebx + 0x154]
        push 0x96f57c
        push esi
        call edi
        add esp, 0x8
        test al, al
        je body_
        push 0x96f568
        push esi
        call edi
        add esp, 0x8
        test al, al
        je body_
        push 0x96f554
        push esi
        call edi
        add esp, 0x8
        test al, al
        je body_
        push 0x96f540
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne done_
    body_:
        sub esp, 0x1c
        add ebx, 0x180
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push ebx
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x34]
        add ecx, 0x598
        call ext_005DF5C0
    done_:
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x0060E7B0] NMData::AxisDefineSensorData::vfunc_2 (47 bytes)
extern "C" void ext_00679030();
extern "C" void ext_006798D0();

extern "C" __declspec(naked) void* __fastcall fn_0060E7B0(void* self, int edx_unused, void* out, void* arg2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        mov ecx, dword ptr [ecx + 0x170]
        push eax
        push ecx
        push esi
        mov dword ptr [esp + 0x14], 0x0
        call ext_006798D0
        mov ecx, eax
        call ext_00679030
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0062CC60] NMData::AxisDefineSensorData::vfunc_8 (37 bytes)
extern "C" void ext_0062CC10();

extern "C" __declspec(naked) void* __fastcall fn_0062CC60(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp+0Ch]
        add ecx, 154h
        push ecx
        push esi
        mov dword ptr [esp+0Ch], 0
        call ext_0062CC10
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x0062CB60] NMData::AxisDefineSensorData::vfunc_59 (65 bytes)
extern "C" void ext_006107B0();
extern "C" void ext_006A6E9E();
extern "C" void ext_0062C8D0();
extern "C" int mem_00A988D8;
extern "C" int mem_00A92D20;

extern "C" __declspec(naked) void* __fastcall fn_0062CB60(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        push edi
        push 0
        push offset mem_00A988D8
        push offset mem_00A92D20
        push 0
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        mov ecx, edi
        call ext_006107B0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je loc_62cb9c
        push edi
        mov ecx, esi
        call ext_0062C8D0
        mov eax, esi
    loc_62cb9c:
        pop edi
        pop esi
        ret 8
    }
}
