// Decompiled translation unit: src/Geometry/FileType.cpp

extern "C" int mem_00924FF4;
extern "C" void ext_005B1140();
extern "C" void ext_006A5C5C();

// [0x005B35D0] Geometry::FileType::vfunc_0 (89 bytes)
extern "C" __declspec(naked) void fn_005B35D0() {
    __asm {
        push -1
        push 0x008A33A8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        call ext_005B1140
        test byte ptr [esp + 0x18], 0x1
        je L_005B3615
        push esi
        call ext_006A5C5C
        add esp, 0x4
L_005B3615:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005B4350] Geometry::FileType::vfunc_18 (90 bytes)
extern "C" void __cdecl ext_005B4050(void* a, void* c);
extern "C" void __cdecl ext_005B3FF0(void* a, void* c);
extern "C" void __cdecl ext_00671F30(void* a);

extern "C" void* __fastcall fn_005B4350(void* self, int edx_unused, void* a, int type, void* c) {
    volatile int local = 0;
    if (type != 0x256) {
        if (type != 0x317) {
            ext_00671F30(a);
        } else {
            ext_005B3FF0(a, c);
        }
    } else {
        ext_005B4050(a, c);
    }
    return a;
}
