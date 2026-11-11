// Decompiled translation unit: src/NMData/HingeConstraint.cpp

// [0x00611770] NMData::HingeConstraint::vfunc_59 (24 bytes)
extern "C" void ext_00610C60();

typedef void (__thiscall *HingeConstraintInnerFn)(void* self, int a1, int a3);

extern "C" void __fastcall fn_00611770(void* self, int edx_unused, int a1, int a2, int a3) {
    HingeConstraintInnerFn f = (HingeConstraintInnerFn)ext_00610C60;
    f((unsigned char*)self + 0x164, a1, a3);
}

// [0x006114D0] NMData::HingeConstraint::vfunc_33 (28 bytes)
extern "C" void ext_006114B0();
extern "C" void ext_00610C10();

extern "C" void __fastcall fn_006114D0(void* self) {
    ((void (__fastcall *)(void*))ext_006114B0)(self);
    ((void (__fastcall *)(void*))ext_00610C10)((unsigned char*)self + 0x164);
    *((unsigned char*)self + 0x160) = 1;
}

// [0x006116B0] NMData::HingeConstraint::vfunc_60 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_006116B0(void* self, int edx_unused, int a1, float a2) {
    __asm {
        sub esp, 0xc
        cmp dword ptr [esp + 0x10], 1
        jge done
        fld dword ptr [esp + 0x14]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xf4]
        fstp dword ptr [esp]
        fldz
        lea edx, [esp]
        fst dword ptr [esp + 4]
        push edx
        fstp dword ptr [esp + 0xc]
        call eax
done:
        add esp, 0xc
        ret 8
    }
}

// [0x00611740] NMData::HingeConstraint::vfunc_67 (47 bytes)
extern "C" __declspec(naked) float __fastcall fn_00611740(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, dword ptr [esp + 0x14]
        cmp esi, 1
        jge done
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x110]
        lea edx, [esp + 0x4]
        push edx
        call eax
        fld dword ptr [eax + 4*esi]
        pop esi
        add esp, 0xc
        ret 4
    done:
        fldz
        pop esi
        add esp, 0xc
        ret 4
    }
}

// [0x0061F940] NMData::HingeConstraint::vfunc_15 (80 bytes)
extern "C" void ext_005DF1F0();
extern "C" void ext_0061EF90();
extern "C" void ext_0061EFB0();

extern "C" __declspec(naked) int __fastcall fn_0061F940(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0xc]
        mov eax, edx
        sub eax, 0x247
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_247
        sub eax, 0x35
        je L_27c
        push edx
        push esi
        call ext_005DF1F0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
L_27c:
        push ecx
        push esi
        call ext_0061EF90
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
L_247:
        push ecx
        push esi
        call ext_0061EFB0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00611580] NMData::HingeConstraint::vfunc_69 (98 bytes)
// Stack args: (std::string* out, int kind). Constructs std::string(const char*) into
// out from one of three sources (kind==0: global A, kind==1: global B, else literal),
// returns out in eax. ret 0x8.
extern "C" int mem_00A9F058;
extern "C" int mem_00924FE4;
extern "C" int mem_00A9F380;
extern "C" __declspec(naked) void* __fastcall fn_00611580(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        push esi
        mov dword ptr [esp + 0x4], 0
        jne not_zero
        mov eax, dword ptr [mem_00A9F058]
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
not_zero:
        cmp eax, 1
        jne other
        mov ecx, dword ptr [mem_00A9F380]
        mov esi, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
other:
        mov esi, dword ptr [esp + 0xc]
        push 0x928b5d
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
