// Decompiled translation unit: src/templates/WriteOnlyMethod0Type.cpp

extern "C" void ext_0050F180();
extern "C" void ext_0050DBE0();

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
