// Decompiled translation unit: src/leaf/decompiled_710000.cpp

// [0x0071DE80] sub_0071DE80 (32 bytes)
// Stores two stack args into the object at self->[0x10] (+0x160, +0x164), then sets self->byte[0xC] = 1 (ret 8).
extern "C" __declspec(naked) void __fastcall fn_0071DE80(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0x10]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x160], edx
        mov dword ptr [eax + 0x164], esi
        mov byte ptr [ecx + 0xc], 0x1
        pop esi
        ret 0x8
    }
}

// [0x00711DA0] sub_00711DA0 (15 bytes)
// Calls sub_0071E680 (this in ecx), then stores the stack arg at [eax+0x28] of the callee's returned pointer (ret 4).
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_00711DA0(void* self, int edx_unused, int a1) {
    __asm {
        call ext_0071E680
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax + 0x28], ecx
        ret 0x4
    }
}

// [0x00711A70] sub_00711A70 (15 bytes)
extern "C" void __stdcall ext_00711CF0(int a1, int a2);
extern "C" void __stdcall fn_00711A70(int a1) {
    ext_00711CF0(0x20, a1);
}

// [0x00712150] sub_00712150 (16 bytes)
extern "C" int ext_00711DB0();
extern "C" bool __fastcall fn_00712150(void* self) {
    return ext_00711DB0() == 0x11;
}

// [0x00714910] sub_00714910 (16 bytes)
extern "C" void ext_007873F0();

extern "C" __declspec(naked) void __fastcall fn_00714910(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x8
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x00714940] sub_00714940 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00714940(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x28
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0071B010] sub_0071B010 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071B010(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x10
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0071B040] sub_0071B040 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071B040(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x30
        push eax
        call ext_007873F0
        ret 0x4
    }
}
