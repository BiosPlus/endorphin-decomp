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

// [0x0062BB20] NMData::AxisDefineSensorData::vfunc_22 (519 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0063F8D0();
extern "C" void ext_00640110();
extern "C" void ext_00640270();
extern "C" void ext_00640390();
extern "C" void ext_006404E0();
extern "C" int mem_00A9ED44;
extern "C" int mem_00924FEC;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00A9F7F4;
extern "C" int mem_00A9F170;
extern "C" int mem_00925134;
extern "C" int mem_00A9F16C;
extern "C" int mem_00A9F9CC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F9D0;

extern "C" __declspec(naked) void __fastcall fn_0062BB20(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0x0]
        push 0x877622
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [mem_00A9ED44]
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x60]
        push eax
        call ext_006404E0
        lea ebx, [edi + 0x14]
        mov ecx, ebx
        mov esi, eax
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_62BB82
        mov ecx, dword ptr [mem_00A9F838]
        push ecx
        mov ecx, esi
        call ext_00640110
        mov ecx, ebx
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
L_62BB82:
        lea ebx, [edi + 0x154]
        mov ecx, ebx
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_62BBB8
        mov edx, dword ptr [mem_00A9FA6C]
        push edx
        mov ecx, esi
        call ext_00640110
        mov ecx, ebx
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
L_62BBB8:
        mov eax, dword ptr [mem_00A9F7F4]
        push eax
        mov ecx, esi
        call ext_00640110
        lea ecx, [edi + 0x180]
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
        mov ecx, dword ptr [mem_00A9F170]
        push 0x0
        push ecx
        mov ecx, esi
        call ext_00640390
        mov esi, dword ptr [edi + 0x1dc]
        mov ebx, dword ptr [mem_00925134]
        add edi, 0x1d8
        cmp esi, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0x10], eax
        jbe L_62BC10
        call ebx
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
L_62BC10:
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe L_62BC1A
        call ebx
L_62BC1A:
        cmp edi, edi
        je L_62BC20
        call ebx
L_62BC20:
        cmp esi, ebp
        je L_62BD0E
        mov edx, dword ptr [mem_00A9F16C]
        mov ecx, dword ptr [esp + 0x10]
        push edx
        call ext_006404E0
        cmp esi, dword ptr [edi + 0x8]
        mov ebp, eax
        jb L_62BC41
        call ebx
L_62BC41:
        mov eax, dword ptr [mem_00A9F9CC]
        push eax
        mov ecx, ebp
        call ext_00640110
        mov ecx, esi
        mov ebx, eax
        call dword ptr [mem_00924FF0]
        mov ecx, ebx
        mov dword ptr [esp + 0x14], eax
        call ext_0063F8D0
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x18]
        push edx
        mov ecx, ebx
        mov dword ptr [esp + 0x5c], 0x0
        call ext_00640270
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x58], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp esi, dword ptr [edi + 0x8]
        jb L_62BCA3
        call dword ptr [mem_00925134]
L_62BCA3:
        mov eax, dword ptr [mem_00A9F9D0]
        push eax
        mov ecx, ebp
        call ext_00640110
        lea ecx, [esi + 0x1c]
        mov ebx, eax
        call dword ptr [mem_00924FF0]
        mov ecx, ebx
        mov ebp, eax
        call ext_0063F8D0
        push ebp
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x34]
        push ecx
        mov ecx, ebx
        mov dword ptr [esp + 0x5c], 0x1
        call ext_00640270
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x58], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp esi, dword ptr [edi + 0x8]
        jb L_62BD00
        call dword ptr [mem_00925134]
L_62BD00:
        mov ebx, dword ptr [mem_00925134]
        add esi, 0x38
        jmp L_62BC10
L_62BD0E:
        mov ecx, dword ptr [esp + 0x50]
        mov eax, dword ptr [esp + 0x60]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x4c
        ret 0x4
    }
}
