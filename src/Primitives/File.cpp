// Decompiled translation unit: src/Primitives/File.cpp

// [0x0053BD50] Primitives::File::vfunc_28 (120 bytes)
extern "C" void ext_005B11D0();
extern "C" void ext_00550FA0();
extern "C" int mem_00925414;
extern "C" int mem_00925418;
extern "C" int mem_009254D8;
extern "C" int mem_00925438;
extern "C" int mem_00925404;

extern "C" __declspec(naked) void __fastcall fn_0053BD50(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        call dword ptr [mem_00925414]
        push 0BA1h
        call dword ptr [mem_00925418]
        mov ecx, dword ptr [esi + 20h]
        push 0
        call ext_005B11D0
        mov ecx, dword ptr [esi + 20h]
        push 0
        mov edi, eax
        call ext_005B11D0
        mov ecx, dword ptr [esi + 20h]
        push 0
        mov ebx, eax
        call ext_005B11D0
        fld dword ptr [edi]
        sub esp, 18h
        fstp qword ptr [esp + 10h]
        fld dword ptr [ebx]
        fstp qword ptr [esp + 8]
        fld dword ptr [eax]
        fstp qword ptr [esp]
        call dword ptr [mem_009254D8]
        lea eax, [esi + 86Ch]
        push eax
        lea ecx, [esi + 3Ch]
        call ext_00550FA0
        push 0BA1h
        call dword ptr [mem_00925438]
        call dword ptr [mem_00925404]
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}
