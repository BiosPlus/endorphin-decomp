// Decompiled translation unit: src/NMData/HingeCalibrationVariables.cpp

// imported basic_string(const char*) ctor (MSVCP80)
extern "C" int mem_00924FE4;

// [0x006227B0] NMData::HingeCalibrationVariables::vfunc_28 (34 bytes)
// Constructs a std::string in the first stack-arg buffer from a literal C string
// via the imported ctor, returns the buffer in eax (ret 0x8: two stack args).
extern "C" __declspec(naked) void __fastcall fn_006227B0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x9770f4
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x006228E0] NMData::HingeCalibrationVariables::vfunc_27 (84 bytes)
// Allocates 0x10 bytes via ext_006A5C62 (cdecl operator new), constructs the object via
// ext_00622750 (returns the block in eax); if allocation failed, uses NULL. Then calls
// three virtual methods on the result with this->+0xc, +0x4, +0x8 (vtbl slots 5, 3, 4).
// Returns the object pointer in eax.
extern "C" void* __cdecl ext_006A5C62(int size);
extern "C" void ext_00622750();

extern "C" __declspec(naked) void* __fastcall fn_006228E0(void* self) {
    __asm {
        push esi
        push edi
        push 0x10
        mov edi, ecx
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je null_obj
        mov ecx, eax
        call ext_00622750
        mov esi, eax
        jmp have_obj
    null_obj:
        xor esi, esi
    have_obj:
        mov eax, dword ptr [esi]
        fld dword ptr [edi + 0xc]
        mov edx, dword ptr [eax + 0x14]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [edi + 0x4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [edi + 0x8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00622940] NMData::HingeCalibrationVariables::vfunc_29 (120 bytes)
extern "C" void ext_00487A30();

extern "C" __declspec(naked) void __fastcall fn_00622940(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push edi
        mov edi, ecx
        push 0x977130
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp]
        call ext_00487A30
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x4]
        push 0x977120
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp]
        call ext_00487A30
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x8]
        push 0x977110
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [edi + 0xc]
        fstp dword ptr [esp]
        call ext_00487A30
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x006227E0] NMData::HingeCalibrationVariables::vfunc_25 (247 bytes)
// __thiscall ret 0x4: this in ecx, one stack arg (a1) that is used as the 'this' of three
// callees (ecx=a1) and whose slot is overwritten and passed by address to sub_0046C0A0.
// Each of the three results is clamped to 0xb53b30 when it is one of
// {0xb53a34, 0xb53b30, 0xb53ab0, 0xb53a70, 0xb53af0}.
extern "C" int mem_00A9ED5C;
extern "C" int mem_00A9EF5C;
extern "C" int mem_00A9EF60;
extern "C" void ext_0046C0A0();
extern "C" void ext_0063F530();

extern "C" __declspec(naked) void __fastcall fn_006227E0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9ED5C]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push 0x1
        push 0x0
        mov edi, ecx
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je hit1
        cmp eax, 0xb53b30
        je hit1
        cmp eax, 0xb53ab0
        je hit1
        cmp eax, 0xb53a70
        je hit1
        cmp eax, 0xb53af0
        jne skip1
    hit1:
        mov eax, 0xb53b30
    skip1:
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [edi + 0xc]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        mov eax, dword ptr [mem_00A9EF5C]
        add esp, 0x8
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je hit2
        cmp eax, 0xb53b30
        je hit2
        cmp eax, 0xb53ab0
        je hit2
        cmp eax, 0xb53a70
        je hit2
        cmp eax, 0xb53af0
        jne skip2
    hit2:
        mov eax, 0xb53b30
    skip2:
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [edi + 0x4]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        mov eax, dword ptr [mem_00A9EF60]
        add esp, 0x8
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je hit3
        cmp eax, 0xb53b30
        je hit3
        cmp eax, 0xb53ab0
        je hit3
        cmp eax, 0xb53a70
        je hit3
        cmp eax, 0xb53af0
        jne skip3
    hit3:
        mov eax, 0xb53b30
    skip3:
        lea ecx, [esp + 0xc]
        push ecx
        add edi, 0x8
        push edi
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00622210] NMData::HingeCalibrationVariables::vfunc_26 (123 bytes)
extern "C" void ext_006404E0();
extern "C" void ext_00640390();
extern "C" void ext_00640BC0();
extern "C" int mem_00A9EE6C;
extern "C" int mem_00A9ED5C;
extern "C" int mem_00A9EF5C;
extern "C" int mem_00A9EF60;

extern "C" __declspec(naked) void* __fastcall fn_00622210(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9EE6C]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        call ext_006404E0
        mov ecx, dword ptr [mem_00A9ED5C]
        push 0x0
        mov esi, eax
        push ecx
        mov ecx, esi
        call ext_00640390
        fld dword ptr [edi + 0xc]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov edx, dword ptr [mem_00A9EF5C]
        add esp, 0x8
        push 0x0
        push edx
        mov ecx, esi
        call ext_00640390
        fld dword ptr [edi + 0x4]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9EF60]
        add esp, 0x8
        push 0x0
        push eax
        mov ecx, esi
        call ext_00640390
        fld dword ptr [edi + 0x8]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        ret 0x4
    }
}
