// Decompiled translation unit: src/Properties/PropertiesControl.cpp

extern "C" void* __stdcall ext_006A89B0(void*);
extern "C" void ext_0041CBD0();

struct Target_0041CBD0 {
    void method(void*);
};
typedef void (Target_0041CBD0::*TargetMethod_0041CBD0)(void*);

// [0x0041CFE0] Properties::PropertiesControl::vfunc_85 (33 bytes)
extern "C" void __fastcall fn_0041CFE0(void* self, int edx_unused, void* arg) {
    void* res = ext_006A89B0(arg);
    if (res) {
        Target_0041CBD0* t = *(Target_0041CBD0**)((char*)self + 0x1a0);
        TargetMethod_0041CBD0 m;
        *(void**)&m = (void*)ext_0041CBD0;
        (t->*m)(res);
    }
}

extern "C" void ext_0041CA90();
extern "C" void ext_006AC160();

// [0x0041D010] Properties::PropertiesControl::vfunc_79 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041D010(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        push ebx
        mov esi, ecx
        call ext_006AC160
        mov ecx, dword ptr [esi + 0x1a0]
        push edi
        push ebx
        call ext_0041CA90
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}
