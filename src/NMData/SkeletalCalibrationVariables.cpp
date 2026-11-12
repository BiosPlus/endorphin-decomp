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
