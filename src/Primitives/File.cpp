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

// [0x0053BD10] Primitives::File::vfunc_29 (58 bytes)
extern "C" void ext_0053AD10();
extern "C" void ext_0054FD10();

extern "C" __declspec(naked) void __fastcall fn_0053BD10(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        call ext_0053AD10
        lea esi, [edi + 86Ch]
        push esi
        lea ecx, [edi + 3Ch]
        call ext_0054FD10
        xor eax, eax
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0Ch], eax
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 18h], eax
        mov dword ptr [esi + 1Ch], eax
        mov dword ptr [esi + 20h], eax
        pop edi
        mov dword ptr [esi + 24h], eax
        pop esi
        ret
    }
}
