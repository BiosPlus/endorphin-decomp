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

// [0x0053DB40] Primitives::File::vfunc_25 (271 bytes)
extern "C" void ext_0053A610();
extern "C" void ext_00551390();
extern "C" void ext_006629B0();
extern "C" void ext_006690D0();
extern "C" void ext_00669AD0();
extern "C" int mem_00924FEC;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0053DB40(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 896542h
        push eax
        mov eax, dword ptr [esp + 18h]
        mov dword ptr fs:[0], esp
        sub esp, 38h
        push esi
        push edi
        mov edi, dword ptr [esp + 50h]
        mov esi, ecx
        mov ecx, dword ptr [esp + 54h]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call ext_0053A610
        mov eax, dword ptr [esi + 1Ch]
        test al, 40h
        jne L_7F
        xor eax, 40h
        mov dword ptr [esi + 1Ch], eax
L_7F:
        mov ecx, dword ptr [edi + 0Ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 20h]
        call eax
        mov edi, eax
        mov ecx, edi
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_END
        push edi
        call ext_006629B0
        add esp, 4
        test al, al
        je L_ELSE
        lea ecx, [esi + 86Ch]
        push ecx
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 3Ch]
        call ext_00551390
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 38h]
        mov dword ptr fs:[0], ecx
        add esp, 44h
        ret 0Ch
L_ELSE:
        push 955D18h
        lea ecx, [esp + 0Ch]
        call dword ptr [mem_00924FE4]
        push edi
        lea edx, [esp + 0Ch]
        push edx
        lea eax, [esp + 2Ch]
        push eax
        mov dword ptr [esp + 54h], 0
        call ext_006690D0
        mov ecx, eax
        call ext_00669AD0
        lea ecx, [esp + 8h]
        mov byte ptr [esp + 48h], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 86Ch]
        push ecx
        lea ecx, [esp + 28h]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 3Ch]
        call ext_00551390
        lea ecx, [esp + 24h]
        mov dword ptr [esp + 48h], 0FFFFFFFFh
        call dword ptr [mem_00924FF4]
L_END:
        mov ecx, dword ptr [esp + 40h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 44h
        ret 0Ch
    }
}
