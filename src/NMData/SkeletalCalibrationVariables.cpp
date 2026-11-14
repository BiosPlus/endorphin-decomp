// Decompiled translation unit: src/NMData/SkeletalCalibrationVariables.cpp

// [0x00622380] NMData::SkeletalCalibrationVariables::vfunc_28 (34 bytes)
extern "C" int mem_00924FE4;
extern "C" int mem_0097703C;
extern "C" void ext_006404E0();
extern "C" void ext_0067EF60();
extern "C" int mem_00A9F27C;

// Constructs std::string("SkeletalCalibrationVariables") into the sret buffer a1 and returns a1.
extern "C" __declspec(naked) void* __fastcall fn_00622380(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push offset mem_0097703C
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x006225E0] NMData::SkeletalCalibrationVariables::vfunc_27 (186 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_00622290();

typedef void (__thiscall *SetFloatFn)(void* self, float v);

extern "C" void* __fastcall fn_006225E0(void* self) {
    char* edi = (char*)self;
    void* esi;
    void* p = ((void* (__cdecl*)(unsigned int))ext_006A5C62)(0x2c);
    if (p) {
        esi = ((void* (__fastcall*)(void*))ext_00622290)(p);
    } else {
        esi = 0;
    }
    float f0 = *(float*)(edi + 0x4);
    ((SetFloatFn)((void**)(*(void***)esi))[16])(esi, f0);
    float f1 = *(float*)(edi + 0x8);
    ((SetFloatFn)((void**)(*(void***)esi))[17])(esi, f1);
    float f2 = *(float*)(edi + 0xc);
    ((SetFloatFn)((void**)(*(void***)esi))[18])(esi, f2);
    float f3 = *(float*)(edi + 0x10);
    ((SetFloatFn)((void**)(*(void***)esi))[19])(esi, f3);
    float f4 = *(float*)(edi + 0x14);
    ((SetFloatFn)((void**)(*(void***)esi))[20])(esi, f4);
    float f5 = *(float*)(edi + 0x18);
    ((SetFloatFn)((void**)(*(void***)esi))[21])(esi, f5);
    float f6 = *(float*)(edi + 0x1c);
    ((SetFloatFn)((void**)(*(void***)esi))[22])(esi, f6);
    float f7 = *(float*)(edi + 0x20);
    ((SetFloatFn)((void**)(*(void***)esi))[23])(esi, f7);
    float f8 = *(float*)(edi + 0x24);
    ((SetFloatFn)((void**)(*(void***)esi))[24])(esi, f8);
    *(float*)((char*)esi + 0x28) = *(float*)(edi + 0x28);
    return esi;
}

// [0x006223B0] NMData::SkeletalCalibrationVariables::vfunc_25 (239 bytes)
extern "C" void ext_0067EE80();
extern "C" int mem_00A9F780;
extern "C" int mem_00A9F4AC;
extern "C" int mem_00A9F770;
extern "C" int mem_00A9F4A4;
extern "C" int mem_00A9F9FC;
extern "C" int mem_00A9F504;
extern "C" int mem_00A9FA5C;
extern "C" int mem_00A9F520;
extern "C" int mem_00A9F9EC;
extern "C" int mem_00A9F4F8;
extern "C" int mem_00A9FA44;
extern "C" int mem_00A9F510;
extern "C" int mem_00A9F77C;
extern "C" int mem_00A9F4A8;
extern "C" int mem_00A9F9F4;
extern "C" int mem_00A9F4FC;
extern "C" int mem_00A9FA4C;
extern "C" int mem_00A9F514;

typedef float (__cdecl *CalibSampleFn)(int, int, int);

extern "C" void __fastcall fn_006223B0(void* self, int edx_unused, int a1) {
    float* out = (float*)self;
    CalibSampleFn f = (CalibSampleFn)ext_0067EE80;
    out[1] = f(a1, mem_00A9F4AC, mem_00A9F780);
    out[2] = f(a1, mem_00A9F4A4, mem_00A9F770);
    out[3] = f(a1, mem_00A9F504, mem_00A9F9FC);
    out[4] = f(a1, mem_00A9F520, mem_00A9FA5C);
    out[5] = f(a1, mem_00A9F4F8, mem_00A9F9EC);
    out[6] = f(a1, mem_00A9F510, mem_00A9FA44);
    out[9] = f(a1, mem_00A9F4A8, mem_00A9F77C);
    out[7] = f(a1, mem_00A9F4FC, mem_00A9F9F4);
    out[8] = f(a1, mem_00A9F514, mem_00A9FA4C);
    out[10] = f(a1, 0x0097705C, 0x00977068);
}

// [0x006229C0] NMData::SkeletalCalibrationVariables::vfunc_29 (373 bytes)
extern "C" void ext_00487A30();

extern "C" __declspec(naked) void __fastcall fn_006229C0(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c]
        push edi
        mov edi, ecx
        push 0x9771e0
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp]
        call ext_00487A30
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x18]
        push 0x9771cc
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp]
        call ext_00487A30
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push 0x9771b8
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [edi + 0x24]
        fstp dword ptr [esp]
        call ext_00487A30
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x34]
        push 0x9771a4
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [edi + 0x20]
        fstp dword ptr [esp]
        call ext_00487A30
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x30]
        push 0x977190
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [edi + 0x1c]
        fstp dword ptr [esp]
        call ext_00487A30
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x2c]
        push 0x977180
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [edi + 0x18]
        fstp dword ptr [esp]
        call ext_00487A30
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x28]
        push 0x977170
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [edi + 0x14]
        fstp dword ptr [esp]
        call ext_00487A30
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        push 0x97715c
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [edi + 0x10]
        fstp dword ptr [esp]
        call ext_00487A30
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x20]
        push 0x977148
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [edi + 0xc]
        fstp dword ptr [esp]
        call ext_00487A30
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x3c]
        push 0x97713c
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [edi + 0x28]
        fstp dword ptr [esp]
        call ext_00487A30
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x006224A0] NMData::SkeletalCalibrationVariables::vfunc_26 (310 bytes)
extern "C" __declspec(naked) void __fastcall fn_006224A0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F27C]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp+12]
        push eax
        call ext_006404E0
        fld dword ptr [edi+4]
        mov ecx, dword ptr [mem_00A9F780]
        mov edx, dword ptr [mem_00A9F4AC]
        push ecx
        push edx
        push ecx
        mov esi, eax
        fstp dword ptr [esp]
        push esi
        call ext_0067EF60
        fld dword ptr [edi+8]
        mov eax, dword ptr [mem_00A9F770]
        add esp, 16
        push eax
        push 0x972cd0
        push ecx
        fstp dword ptr [esp]
        push esi
        call ext_0067EF60
        fld dword ptr [edi+12]
        mov ecx, dword ptr [mem_00A9F9FC]
        add esp, 16
        push ecx
        push 0x972d14
        push ecx
        fstp dword ptr [esp]
        push esi
        call ext_0067EF60
        fld dword ptr [edi+16]
        mov edx, dword ptr [mem_00A9FA5C]
        add esp, 16
        push edx
        push 0x972d24
        push ecx
        fstp dword ptr [esp]
        push esi
        call ext_0067EF60
        fld dword ptr [edi+20]
        mov eax, dword ptr [mem_00A9F9EC]
        add esp, 16
        push eax
        push 0x972ce0
        push ecx
        fstp dword ptr [esp]
        push esi
        call ext_0067EF60
        fld dword ptr [edi+24]
        mov ecx, dword ptr [mem_00A9FA44]
        add esp, 16
        push ecx
        push 0x972cf0
        push ecx
        fstp dword ptr [esp]
        push esi
        call ext_0067EF60
        fld dword ptr [edi+36]
        mov edx, dword ptr [mem_00A9F77C]
        mov eax, dword ptr [mem_00A9F4A8]
        add esp, 16
        push edx
        push eax
        push ecx
        fstp dword ptr [esp]
        push esi
        call ext_0067EF60
        fld dword ptr [edi+28]
        mov ecx, dword ptr [mem_00A9F9F4]
        mov edx, dword ptr [mem_00A9F4FC]
        add esp, 16
        push ecx
        push edx
        push ecx
        fstp dword ptr [esp]
        push esi
        call ext_0067EF60
        fld dword ptr [edi+32]
        mov eax, dword ptr [mem_00A9FA4C]
        mov ecx, dword ptr [mem_00A9F514]
        add esp, 16
        push eax
        push ecx
        push ecx
        fstp dword ptr [esp]
        push esi
        call ext_0067EF60
        fld dword ptr [edi+40]
        add esp, 16
        push 0x977068
        push 0x97705c
        push ecx
        fstp dword ptr [esp]
        push esi
        call ext_0067EF60
        add esp, 16
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}
