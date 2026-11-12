// Decompiled translation unit: src/NMData/SkeletalCalibrationVariables.cpp

// [0x00622380] NMData::SkeletalCalibrationVariables::vfunc_28 (34 bytes)
extern "C" int mem_00924FE4;
extern "C" int mem_0097703C;

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
