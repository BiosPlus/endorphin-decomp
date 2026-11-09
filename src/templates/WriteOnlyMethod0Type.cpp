// Decompiled translation unit: src/templates/WriteOnlyMethod0Type.cpp

extern "C" void ext_0050F180();
extern "C" void ext_0050DBE0();
extern "C" void ext_00516890();
extern "C" void ext_00516980();

// [0x0050F190] ExprParser::WriteOnlyMethod0Type<NMData::PopulationData, &public: void __thiscall NMData::PopulationData::randomizeNow(void)>::vfunc_41 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050F190(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        call ext_0050F180
        ret 8
    }
}

// [0x0050E0A0] ExprParser::WriteOnlyMethod0Type<NMData::TaskManager, {public: void __thiscall NMData::TaskManager::randomizeTasks(void), 0}>::vfunc_41 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050E0A0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        call ext_0050DBE0
        ret 8
    }
}

// [0x00516B10] ExprParser::WriteOnlyMethod0Type<NMData::EvolverRuntimeOptions, &public: void __thiscall NMData::EvolverRuntimeOptions::printCurrentIndividual(void)>::vfunc_41 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_00516B10(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        call ext_00516890
        ret 8
    }
}

// [0x00516B20] ExprParser::WriteOnlyMethod0Type<NMData::EvolverRuntimeOptions, &public: void __thiscall NMData::EvolverRuntimeOptions::evaluateCurrentIndividual(void)>::vfunc_41 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_00516B20(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        call ext_00516980
        ret 8
    }
}

// [0x0050E390] ExprParser::WriteOnlyMethod0Type<NMData::PopulationData, &public: void __thiscall NMData::PopulationData::randomizeNow(void)>::vfunc_16 (30 bytes)
extern "C" void* __cdecl ext_006A6E9E(void* p, long vfdelta, void* src_type, void* target_type, int is_reference);

extern "C" void __stdcall fn_0050E390(void* self) {
    ext_006A6E9E(self, 0, (void*)0x00A2E2F8, (void*)0x00A41ADC, 0);
}
