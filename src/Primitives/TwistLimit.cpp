// Decompiled translation unit: src/Primitives/TwistLimit.cpp

extern "C" void ext_0053DF00();
extern "C" double mem_00955D28;

// [0x0053DF60] Primitives::TwistLimit::vfunc_25 (46 bytes)
extern "C" void __fastcall fn_0053DF60(void* self, int edx_unused, int a1, void* a2, int a3) {
    ((void (__thiscall*)(void*, int, void*, int))ext_0053DF00)(self, a1, a2, a3);
    unsigned char* s = (unsigned char*)self;
    unsigned char* o = (unsigned char*)a2;
    *(float*)(s + 0x40) = (float)(*(float*)(o + 0xb8) * mem_00955D28);
}

// [0x0052FC70] Primitives::TwistLimit::vfunc_0 (96 bytes)
extern "C" void ext_00537EC0();
extern "C" void ext_0053A810();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0052FC70(void* self) {
    __asm {
        push -1
        push 0x894d48
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x44]
        mov dword ptr [esp + 0x10], 0
        call ext_00537EC0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0053A810
        test byte ptr [esp + 0x18], 0x1
        je L_0052FCBC
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_0052FCBC:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}
