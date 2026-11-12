// Decompiled translation unit: src/Primitives/Plane.cpp

extern "C" void ext_00661A80();
extern "C" int mem_00AEE8A8;

// [0x0053A610] Primitives::Plane::vfunc_25 (55 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053A610(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [mem_00AEE8A8]
        test ecx, ecx
        je done_call
        test esi, esi
        je null_self
        lea eax, [esi + 0x14]
        jmp push_arg
null_self:
        xor eax, eax
push_arg:
        push eax
        call ext_00661A80
        mov dword ptr [esi + 0x30], eax
done_call:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0x20], 0
        mov byte ptr [esi + 0x4], 1
        pop esi
        ret 0xc
    }
}

// [0x0053B590] Primitives::Plane::vfunc_28 (277 bytes)
extern "C" void ext_005B11D0();
extern "C" int mem_00925414;
extern "C" int mem_00925418;
extern "C" int mem_009254D8;
extern "C" int mem_00925490;
extern "C" int mem_009254AC;
extern "C" int mem_009254D4;
extern "C" int mem_0092548C;
extern "C" int mem_00955680;
extern "C" int mem_009324A4;
extern "C" int mem_00925488;
extern "C" int mem_00925438;
extern "C" int mem_00925404;
extern "C" int mem_00955610;
extern "C" int mem_00955618;
extern "C" int mem_00955620;
extern "C" int mem_00955628;

extern "C" __declspec(naked) void __fastcall fn_0053B590(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call dword ptr [mem_00925414]
        push 0x803a
        call dword ptr [mem_00925418]
        mov ecx, dword ptr [esi + 0x20]
        push 0x2
        call ext_005B11D0
        mov ecx, dword ptr [esi + 0x20]
        push 0x0
        mov edi, eax
        call ext_005B11D0
        fldz
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [edi]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [eax]
        fstp qword ptr [esp]
        call dword ptr [mem_009254D8]
        push 0x7
        call dword ptr [mem_00925490]
        fld1
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009254AC]
        mov esi, dword ptr [mem_009254D4]
        push offset mem_00955610
        call esi
        fldz
        mov edi, dword ptr [mem_0092548C]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [mem_00955680]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        push offset mem_00955618
        call esi
        fldz
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [mem_00955680]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_009324A4]
        fstp dword ptr [esp]
        call edi
        push offset mem_00955620
        call esi
        fldz
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [mem_009324A4]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        push offset mem_00955628
        call esi
        fldz
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [mem_009324A4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_00955680]
        fstp dword ptr [esp]
        call edi
        call dword ptr [mem_00925488]
        push 0x803a
        call dword ptr [mem_00925438]
        call dword ptr [mem_00925404]
        pop edi
        pop esi
        ret 0x4
    }
}
