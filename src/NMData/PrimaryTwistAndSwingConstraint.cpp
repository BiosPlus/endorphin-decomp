// Decompiled translation unit: src/NMData/PrimaryTwistAndSwingConstraint.cpp

// [0x00611EA0] NMData::PrimaryTwistAndSwingConstraint::vfunc_63 (39 bytes)
extern "C" void __fastcall fn_00611EA0(void* self) {
    unsigned char* p = (unsigned char*)self;
    *(unsigned char*)(p + 0x168) = 1;
    *(unsigned char*)(p + 0x169) = 1;
    *(unsigned char*)(p + 0x16a) = 1;
    *(unsigned char*)(p + 0x228) = 1;
    *(unsigned char*)(p + 0x229) = 1;
    *(unsigned char*)(p + 0x22a) = 1;
}

// [0x00611A10] NMData::PrimaryTwistAndSwingConstraint::vfunc_67 (47 bytes)
extern "C" float __fastcall fn_00611A10(void* self, int edx_unused, int idx) {
    if (idx < 4) {
        void** vt = *(void***)self;
        typedef float* (__thiscall *VFn)(void* self, float* out);
        float tmp[3];
        float* p = ((VFn)vt[0x110 / 4])(self, tmp);
        return p[idx];
    }
    return 0.0f;
}

// [0x00611CA0] NMData::PrimaryTwistAndSwingConstraint::vfunc_66 (60 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00469530();

extern "C" __declspec(naked) void __fastcall fn_00611CA0(void* self, int edx_unused, int a1, unsigned char a2) {
    __asm {
        mov al, byte ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        mov byte ptr [edx + ecx + 0x328], al
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x13c]
        call edx
        call ext_00468180
        test eax, eax
        je done
        mov dword ptr [esp + 0x8], 0
        mov dword ptr [esp + 0x4], 5
        mov ecx, eax
        jmp ext_00469530
done:
        ret 0x8
    }
}

// [0x006119C0] NMData::PrimaryTwistAndSwingConstraint::vfunc_60 (66 bytes)
extern "C" void __fastcall fn_006119C0(void* self, int edx_unused, int idx, float val) {
    if (idx >= 4) {
        return;
    }
    typedef void (__thiscall *VFn)(void* self, float* out);
    float tmp[3];
    VFn getter = (VFn)(*(void***)self)[0x110 / 4];
    getter(self, tmp);
    tmp[idx] = val;
    VFn setter = (VFn)(*(void***)self)[0xf4 / 4];
    setter(self, tmp);
}

// [0x00611B80] NMData::PrimaryTwistAndSwingConstraint::vfunc_69 (98 bytes)
// Stack args: (std::string* out, int kind). Constructs std::string(const char*) into
// out from one of three sources (kind==0: global A, kind==1: global B, else literal),
// returns out in eax. ret 0x8.
extern "C" int mem_00A9F294;
extern "C" int mem_00924FE4;
extern "C" int mem_00A9EF94;
extern "C" __declspec(naked) void* __fastcall fn_00611B80(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        push esi
        mov dword ptr [esp + 0x4], 0
        jne not_zero
        mov eax, dword ptr [mem_00A9F294]
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
        mov ecx, dword ptr [mem_00A9EF94]
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

// [0x0061FDB0] NMData::PrimaryTwistAndSwingConstraint::vfunc_15 (104 bytes)
extern "C" void ext_0061F030();
extern "C" void ext_0061F050();
extern "C" void ext_0061F070();
extern "C" void ext_0061F990();

extern "C" __declspec(naked) int __fastcall fn_0061FDB0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0xc]
        mov eax, edx
        sub eax, 0x2a4
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_2a4
        sub eax, 0x9e
        je L_9e
        sub eax, 0x16
        je L_16
        push edx
        push esi
        call ext_0061F990
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_16:
        push ecx
        push esi
        call ext_0061F030
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_9e:
        push ecx
        push esi
        call ext_0061F050
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_2a4:
        push ecx
        push esi
        call ext_0061F070
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00611E00] NMData::PrimaryTwistAndSwingConstraint::vfunc_9_off_C (145 bytes)
extern "C" void ext_00528C30();

extern "C" __declspec(naked) void __fastcall fn_00611E00(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_00528C30
        cmp dword ptr [esi + 0x4], 0
        je done
        cmp dword ptr [esi + 0x324], 0
        je skip324
        mov ecx, dword ptr [esi + 0x324]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x20]
        push edi
        call edx
skip324:
        cmp dword ptr [esi + 0x328], 0
        je skip328
        mov ecx, dword ptr [esi + 0x328]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x20]
        push edi
        call edx
skip328:
        cmp dword ptr [esi + 0x320], 0
        je skip320
        mov ecx, dword ptr [esi + 0x320]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x20]
        push edi
        call edx
        mov ecx, dword ptr [esi + 0x320]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push edi
        call edx
skip320:
        cmp dword ptr [esi + 0x32c], 0
        je done
        mov ecx, dword ptr [esi + 0x32c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x20]
        push edi
        call edx
        mov ecx, dword ptr [esi + 0x32c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push edi
        call edx
done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00611BF0] NMData::PrimaryTwistAndSwingConstraint::vfunc_14 (157 bytes)
extern "C" void ext_0046F7D0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void* __fastcall fn_00611BF0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        sub eax, 0xac
        push esi
        mov dword ptr [esp + 0x4], 0x0
        je L_ac
        sub eax, 0x8c
        je L_138
        sub eax, 0x34
        je L_16c
    L_default:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_16c:
        cmp byte ptr [ecx + 0x328], 0x0
        jne L_16c_body
        cmp byte ptr [ecx + 0x329], 0x0
        jne L_16c_body
        cmp byte ptr [ecx + 0x32a], 0x0
        je L_default
    L_16c_body:
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x164
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_ac:
        cmp byte ptr [ecx + 0x328], 0x0
        jne L_ac_body
        cmp byte ptr [ecx + 0x329], 0x0
        jne L_ac_body
        cmp byte ptr [ecx + 0x32a], 0x0
        je L_default
    L_ac_body:
        add ecx, 0x224
    L_138:
        mov esi, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00611CE0] NMData::PrimaryTwistAndSwingConstraint::vfunc_79 (277 bytes)
extern "C" int mem_00B40644;

extern "C" __declspec(naked) void __fastcall fn_00611CE0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x330], 0
        je L1
        mov edx, dword ptr [mem_00B40644]
        mov ecx, dword ptr [esi + 0x330]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x30]
        push edx
        movzx edx, byte ptr [esi + 0x329]
        push edx
        push 0x1000
        call eax
        movzx eax, byte ptr [esi + 0x329]
        mov ecx, dword ptr [esi + 0x330]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x2c]
        push eax
        push 0x1000
        call edx
L1:
        cmp dword ptr [esi + 0x334], 0
        je L2
        mov edx, dword ptr [mem_00B40644]
        mov ecx, dword ptr [esi + 0x334]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x30]
        push edx
        movzx edx, byte ptr [esi + 0x329]
        push edx
        push 0x1000
        call eax
        movzx eax, byte ptr [esi + 0x329]
        mov ecx, dword ptr [esi + 0x334]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x2c]
        push eax
        push 0x1000
        call edx
L2:
        cmp dword ptr [esi + 0x32c], 0
        je L3
        mov edx, dword ptr [mem_00B40644]
        mov ecx, dword ptr [esi + 0x32c]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x30]
        push edx
        movzx edx, byte ptr [esi + 0x328]
        push edx
        push 0x1000
        call eax
        movzx eax, byte ptr [esi + 0x328]
        mov ecx, dword ptr [esi + 0x32c]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x2c]
        push eax
        push 0x1000
        call edx
L3:
        cmp dword ptr [esi + 0x338], 0
        je L4
        mov edx, dword ptr [mem_00B40644]
        mov ecx, dword ptr [esi + 0x338]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x30]
        push edx
        movzx edx, byte ptr [esi + 0x328]
        push edx
        push 0x1000
        call eax
        movzx eax, byte ptr [esi + 0x328]
        mov ecx, dword ptr [esi + 0x338]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x2c]
        push eax
        push 0x1000
        call edx
L4:
        pop esi
        ret
    }
}

extern "C" void ext_0067DAD0();
extern "C" void ext_00694880();
extern "C" void ext_00694900();
extern "C" int mem_00B40640;

// [0x00612C00] NMData::PrimaryTwistAndSwingConstraint::vfunc_68 (151 bytes)
extern "C" __declspec(naked) void __fastcall fn_00612C00(void* self, int edx_unused, void* out) {
    __asm {
        sub esp, 0x24
        fldz
        push esi
        mov esi, dword ptr [esp + 0x2c]
        fst dword ptr [esi + 0x8]
        fst dword ptr [esi + 0x4]
        push edi
        fst dword ptr [esi]
        mov edi, ecx
        mov edx, dword ptr [edi + 0x4]
        fst dword ptr [esp + 0x10]
        mov edx, dword ptr [edx + 0x8]
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        lea eax, [esp + 0x8]
        fst dword ptr [esp + 0x14]
        lea ecx, [edi + 0x4]
        fst dword ptr [esp + 0x24]
        push eax
        mov eax, dword ptr [mem_00B40640]
        fstp dword ptr [esp + 0x24]
        fld1
        push eax
        fst dword ptr [esp + 0x10]
        fst dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x30]
        call edx
        mov ecx, eax
        call ext_0067DAD0
        lea ecx, [esp + 0x8]
        call ext_00694900
        push esi
        lea ecx, [esp + 0xc]
        call ext_00694880
        fld dword ptr [esi]
        fdiv dword ptr [edi + 0x154]
        mov eax, esi
        fstp dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fdiv dword ptr [edi + 0x158]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [esi + 0x8]
        fdiv dword ptr [edi + 0x15c]
        pop edi
        fstp dword ptr [esi + 0x8]
        pop esi
        add esp, 0x24
        ret 0x4
    }
}

// [0x00612B60] NMData::PrimaryTwistAndSwingConstraint::vfunc_61 (150 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_00551D20();
extern "C" void ext_00594000();
extern "C" void ext_0067E600();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_00612B60(void* self, int edx_unused, float* v) {
    __asm {
        sub esp, 0xc
        mov eax, dword ptr [esp + 0x10]
        fld dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        fstp dword ptr [esp]
        mov edx, dword ptr [edx + 0xc]
        fld dword ptr [eax + 0x4]
        push esi
        fstp dword ptr [esp + 0x8]
        lea esi, [ecx + 0x4]
        fld dword ptr [eax + 0x8]
        lea eax, [esp + 0x4]
        fstp dword ptr [esp + 0xc]
        push eax
        fld dword ptr [ecx + 0x154]
        mov eax, dword ptr [mem_00B40640]
        fmul dword ptr [esp + 0x8]
        push eax
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx + 0x158]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ecx + 0x15c]
        mov ecx, esi
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x14]
        call edx
        mov ecx, eax
        call ext_0067E600
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_00551D20
        call ext_00594000
        test eax, eax
        pop esi
        je done
        lea ecx, [eax + 0x258]
        call ext_00493EE0
done:
        add esp, 0xc
        ret 0x4
    }
}
